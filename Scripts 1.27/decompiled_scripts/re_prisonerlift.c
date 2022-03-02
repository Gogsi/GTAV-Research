#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_28 = 0;
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
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	bool bLocal_56 = 0;
	int iLocal_57 = 0;
	struct<3> Local_58 = { 0, 0, 0 } ;
	int iLocal_61 = 0;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	var uLocal_73 = 0;
	int iLocal_74 = 0;
	struct<3> Local_75 = { 0, 0, 0 } ;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81[2] = { 0, 0 };
	var uLocal_84 = 0;
	struct<3> Local_85 = { 0, 0, 0 } ;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	var uLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	bool bLocal_98 = 0;
	bool bLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	int iLocal_107 = 0;
	float fLocal_108 = 0f;
	bool bLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	struct<3> Local_128 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	struct<3> Local_134 = { 0, 0, 0 } ;
	struct<3> Local_137 = { 0, 0, 0 } ;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	var uLocal_147 = 16;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_47 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_62 = { 1492.31f, 2136.53f, 89.15f };
	Local_65 = { 1408.24f, 2522.803f, 41.0419f };
	Local_113 = { 370.2576f, -1597.488f, 35.94954f };
	Local_116 = { 824.992f, -1289.267f, 27.24564f };
	Local_119 = { 450.1889f, -981.6754f, 42.69174f };
	Local_122 = { -1088.37f, -842.2911f, 30.27554f };
	Local_125 = { 608.9076f, 0.806411f, 100.2497f };
	Local_128 = { -562.0159f, -130.8113f, 37.4369f };
	Local_131 = { 1855.237f, 3683.236f, 33.29165f };
	Local_134 = { -443.5063f, 6016.231f, 30.71787f };
	Local_137 = { 1693.518f, 2579.21f, 44.95713f };
	Local_58 = { ScriptParam_0.f_1[0 /*3*/] };
	func_185();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_71))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_71);
			}
		}
		func_170();
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (func_128(Local_58, 22, iLocal_68, 0, 0))
	{
		GlobalFunc_6828(22);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_95)
		{
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10586())
				{
					func_170();
				}
			}
			RECORDING::_0x208784099002BC30("RE_PL", 0);
			switch (iLocal_52)
			{
				case 0:
					if (func_111())
					{
						func_170();
					}
					if (!iLocal_57)
					{
						func_110();
					}
					else
					{
						func_109();
					}
					if (bLocal_56)
					{
						iLocal_140 = 1;
						iLocal_52 = 1;
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						switch (iLocal_53)
						{
							case 0:
								switch (iLocal_54)
								{
									case 0:
										func_102();
										break;
									
									case 1:
										if (iLocal_55 == 0)
										{
											if (!PED::IS_PED_INJURED(iLocal_71))
											{
												if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 100f, 100f, 100f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_71)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!GlobalFunc_6827())
													{
														GlobalFunc_9034(1);
														GlobalFunc_563(1);
													}
												}
												if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 20f, 20f, 8f, 0, 1, 0))
												{
													if (HUD::DOES_BLIP_EXIST(uLocal_104))
													{
														HUD::SHOW_HEIGHT_ON_BLIP(uLocal_104, 1);
													}
													func_89();
													if (!func_88())
													{
														if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, "random@prisoner_lift", "arms_waving", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_71, "random@prisoner_lift", "loop2_idlelook2", 3))
														{
															TASK::CLEAR_PED_TASKS(iLocal_71);
														}
														func_87(&uLocal_106);
													}
												}
											}
											else
											{
												func_86();
											}
											func_85();
											func_84();
										}
										else if (iLocal_55 == 1)
										{
											if (!PED::IS_PED_INJURED(iLocal_71))
											{
												if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 105f, 105f, 105f, 0, 1, 0) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_71)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 20f, 20f, 8f, 0, 1, 0))
												{
													func_101();
													if (!GlobalFunc_6827())
													{
														GlobalFunc_9034(1);
														GlobalFunc_563(1);
													}
												}
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_71))
												{
													if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 20f, 20f, 8f, 0, 1, 0))
													{
														if (HUD::DOES_BLIP_EXIST(uLocal_104))
														{
															HUD::SHOW_HEIGHT_ON_BLIP(uLocal_104, 1);
														}
														func_89();
													}
												}
												if (bLocal_98)
												{
													if (SYSTEM::TIMERA() > 2000 && SYSTEM::TIMERA() < 2100)
													{
														TASK::CLEAR_PED_SECONDARY_TASK(iLocal_71);
													}
													if (SYSTEM::TIMERA() > 3000)
													{
														if (!iLocal_101)
														{
															if (!GlobalFunc_111())
															{
																GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_ASK", 4, 0, 0, 0);
																iLocal_101 = 1;
															}
														}
													}
												}
												if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
													{
														if (!func_71(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
														{
															if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_71, 40f, 40f, 20f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_71, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 17))
															{
																TASK::CLEAR_PED_TASKS(iLocal_71);
																if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
																{
																	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
																}
																TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_71, PLAYER::GET_PLAYERS_LAST_VEHICLE(), PLAYER::PLAYER_PED_ID(), 8, 22f, 786469, 1f, 1f, 1);
																PED::SET_PED_KEEP_TASK(iLocal_71, 1);
																iLocal_54 = 13;
															}
															else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 20f, 20f, 8f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 17))
															{
																GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
																func_86();
															}
														}
														else
														{
															GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
													else
													{
														GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
														func_86();
													}
												}
												if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
													{
														if (((PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino"))) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
														{
															GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_FLEE", 4, 0, 0, 0);
															func_86();
														}
													}
												}
											}
											if (func_70())
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_71))
												{
													if (!PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("bus")))
													{
														if (func_69(PLAYER::PLAYER_PED_ID(), iLocal_71) < 2.5f)
														{
															if (ENTITY::GET_ENTITY_SPEED(uLocal_74) < 1f)
															{
																func_68();
															}
														}
													}
													else if (func_69(PLAYER::PLAYER_PED_ID(), iLocal_71) < 10f)
													{
														if (ENTITY::GET_ENTITY_SPEED(uLocal_74) < 1f)
														{
															func_68();
														}
													}
												}
											}
										}
										if (func_64())
										{
											if (!PED::IS_PED_INJURED(iLocal_71))
											{
												TASK::CLEAR_PED_TASKS(iLocal_71);
												if (PED::IS_PED_IN_GROUP(iLocal_71))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_71);
												}
											}
											func_86();
										}
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_71, 0);
										}
										break;
									
									case 2:
										func_63();
										func_84();
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_71, 0);
										}
										break;
									
									case 3:
										if (func_62())
										{
											iLocal_54 = 9;
										}
										func_54();
										func_84();
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_71, 0);
										}
										break;
									
									case 5:
										func_53();
										break;
									
									case 6:
										if (!iLocal_103 && !PED::IS_PED_INJURED(iLocal_71))
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
											TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
											TASK::TASK_PAUSE(0, 1500);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_90, 1f, -1, 0.25f, 0, 333.9002f);
											TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
											PED::SET_PED_KEEP_TASK(iLocal_71, 1);
											GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_THK", 4, 0, 0, 0);
											PED::REMOVE_PED_FROM_GROUP(iLocal_71);
											iLocal_103 = 1;
										}
										if (func_64())
										{
											if (!PED::IS_PED_INJURED(iLocal_71))
											{
												TASK::CLEAR_PED_TASKS(iLocal_71);
												if (PED::IS_PED_IN_GROUP(iLocal_71))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_71);
												}
												GlobalFunc_4956();
												SYSTEM::WAIT(0);
												GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
												TASK::TASK_SMART_FLEE_COORD(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												PED::SET_PED_KEEP_TASK(iLocal_71, 1);
												SYSTEM::WAIT(0);
											}
											func_86();
										}
										if (!GlobalFunc_111())
										{
											func_16();
										}
										break;
									
									case 7:
										func_15();
										break;
									
									case 9:
										func_13();
										break;
									
									case 10:
										func_10();
										func_8();
										if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
										{
											if (!HUD::DOES_BLIP_EXIST(uLocal_69))
											{
												uLocal_69 = GlobalFunc_5104(Local_85, 1);
											}
											if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_LOS", 4, 0, 0, 0))
											{
												iLocal_54 = 3;
											}
										}
										if (bLocal_99)
										{
											if (ENTITY::DOES_ENTITY_EXIST(uLocal_84))
											{
												if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || GlobalFunc_2834(PLAYER::PLAYER_PED_ID(), uLocal_84, 1) > 200f)
												{
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_81[0]));
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_81[1]));
													ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_84);
												}
											}
										}
										if (func_64())
										{
											if (!PED::IS_PED_INJURED(iLocal_71))
											{
												TASK::CLEAR_PED_TASKS(iLocal_71);
												if (PED::IS_PED_IN_GROUP(iLocal_71))
												{
													PED::REMOVE_PED_FROM_GROUP(iLocal_71);
												}
												TASK::TASK_SMART_FLEE_COORD(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												PED::SET_PED_KEEP_TASK(iLocal_71, 1);
												GlobalFunc_4956();
												SYSTEM::WAIT(0);
												GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
											}
											func_86();
										}
										break;
									
									case 11:
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_74, 0))
										{
											if (!func_71(iLocal_74))
											{
												if (!iLocal_100)
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, 0))
													{
														if (!PED::IS_PED_INJURED(iLocal_71))
														{
															if (!iLocal_102)
															{
																GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_STEAL", 4, 0, 0, 0);
																iLocal_102 = 1;
															}
															TASK::TASK_ENTER_VEHICLE(iLocal_71, iLocal_74, -1, -1, 2f, 1, 0);
															PED::SET_PED_KEEP_TASK(iLocal_71, 1);
															iLocal_54 = 12;
														}
													}
													if (!PED::IS_PED_INJURED(iLocal_71))
													{
														if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 1) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_71) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_71) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (ENTITY::GET_ENTITY_SPEED(iLocal_74) > 2.5f && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_74, 0)))
														{
															TASK::TASK_COMBAT_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 0, 16);
															GlobalFunc_4956();
															iLocal_100 = 1;
														}
													}
												}
											}
											else
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_104))
												{
													HUD::REMOVE_BLIP(&uLocal_104);
												}
												if (!PED::IS_PED_INJURED(iLocal_71))
												{
													TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
													TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
													PED::SET_PED_KEEP_TASK(iLocal_71, 1);
													iLocal_54 = 13;
												}
											}
										}
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 150f, 150f, 150f, 0, 1, 0))
											{
												TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
												TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
												TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
												PED::SET_PED_KEEP_TASK(iLocal_71, 1);
												iLocal_54 = 13;
											}
										}
										else
										{
											iLocal_54 = 13;
										}
										break;
									
									case 12:
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 1))
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_104))
												{
													HUD::SET_BLIP_AS_FRIENDLY(uLocal_104, 0);
													ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_71);
												}
											}
											if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, 0))
											{
												if (!func_71(iLocal_74))
												{
													if (PED::IS_PED_IN_VEHICLE(iLocal_71, iLocal_74, 0))
													{
														if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_74))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_74, 1, 0);
														}
														TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_71, iLocal_74, PLAYER::PLAYER_PED_ID(), 8, 22f, 786469, 1f, 1f, 1);
														PED::SET_PED_KEEP_TASK(iLocal_71, 1);
														iLocal_54 = 13;
													}
													else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_74, 0))
													{
														if (bLocal_109)
														{
															TASK::TASK_COMBAT_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 0, 16);
															GlobalFunc_4956();
															iLocal_100 = 1;
															iLocal_54 = 11;
														}
														else
														{
															func_68();
														}
													}
													else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, -1794415470) != 0)
													{
														if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, 780511057) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, 780511057) != 0)
														{
														}
														else
														{
															iLocal_54 = 11;
														}
													}
												}
												else
												{
													if (HUD::DOES_BLIP_EXIST(uLocal_104))
													{
														HUD::REMOVE_BLIP(&uLocal_104);
													}
													TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
													TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
													TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
													PED::SET_PED_KEEP_TASK(iLocal_71, 1);
													iLocal_54 = 13;
												}
											}
											else
											{
												TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
												TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
												TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
												TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
												TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
												PED::SET_PED_KEEP_TASK(iLocal_71, 1);
												iLocal_54 = 13;
											}
											if (!iLocal_100)
											{
												if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 1) || (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_71) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_71) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))) || (ENTITY::GET_ENTITY_SPEED(iLocal_74) > 2.5f && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_74, 0)))
												{
													TASK::TASK_COMBAT_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 0, 16);
													GlobalFunc_4956();
													iLocal_100 = 1;
												}
											}
										}
										else
										{
											iLocal_54 = 13;
										}
										break;
									
									case 13:
										iLocal_95 = 1;
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											if (PED::IS_PED_BEING_JACKED(iLocal_71))
											{
												GlobalFunc_4956();
											}
											if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, 0))
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_104))
												{
													HUD::SET_BLIP_AS_FRIENDLY(uLocal_104, 0);
												}
												if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(iLocal_71, 0), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(iLocal_71, 0), joaat("towtruck2")))
												{
													uLocal_80 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_71, 0));
													if (ENTITY::DOES_ENTITY_EXIST(uLocal_80))
													{
														iLocal_79 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uLocal_80);
														if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(iLocal_71, 0)) && !ENTITY::IS_ENTITY_DEAD(iLocal_79))
														{
															if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_71, 0), iLocal_79))
															{
																VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(iLocal_71, 0), iLocal_79);
															}
														}
													}
												}
												if (PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iLocal_71, 0)))
												{
													TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
													TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
													TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
													PED::SET_PED_KEEP_TASK(iLocal_71, 1);
												}
												if (!iLocal_112)
												{
													if ((GlobalFunc_7191(PED::GET_VEHICLE_PED_IS_IN(iLocal_71, 0)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iLocal_71, 0), 0)) || func_71(PED::GET_VEHICLE_PED_IS_IN(iLocal_71, 0)))
													{
														if (HUD::DOES_BLIP_EXIST(uLocal_104))
														{
															HUD::SET_BLIP_AS_FRIENDLY(uLocal_104, 0);
														}
														TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
														TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
														TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
														TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
														TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
														TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
														PED::SET_PED_KEEP_TASK(iLocal_71, 1);
														iLocal_112 = 1;
													}
												}
												if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 245f, 245f, 245f, 0, 1, 0))
												{
													func_86();
												}
											}
											else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, 242628503) != 0)
											{
												iLocal_54 = 11;
											}
											else if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 200f, 200f, 200f, 0, 1, 0))
											{
												func_16();
											}
										}
										else
										{
											func_16();
										}
										break;
								}
								break;
							
							case 1:
								switch (iLocal_94)
								{
									case 1:
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											TASK::CLEAR_PED_TASKS(iLocal_71);
											if (PED::IS_PED_IN_GROUP(iLocal_71))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_71);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_71, 1);
											SYSTEM::WAIT(0);
											func_86();
										}
										break;
									
									case 2:
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											TASK::CLEAR_PED_TASKS(iLocal_71);
											if (PED::IS_PED_IN_GROUP(iLocal_71))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_71);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_71, 1);
											SYSTEM::WAIT(0);
											func_86();
										}
										break;
									
									case 3:
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											TASK::CLEAR_PED_TASKS(iLocal_71);
											if (PED::IS_PED_IN_GROUP(iLocal_71))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_71);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_71, 1);
											SYSTEM::WAIT(0);
											func_86();
										}
										break;
									
									case 4:
										if (!PED::IS_PED_INJURED(iLocal_71))
										{
											TASK::CLEAR_PED_TASKS(iLocal_71);
											if (PED::IS_PED_IN_GROUP(iLocal_71))
											{
												PED::REMOVE_PED_FROM_GROUP(iLocal_71);
											}
											TASK::TASK_SMART_FLEE_COORD(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
											PED::SET_PED_KEEP_TASK(iLocal_71, 1);
											SYSTEM::WAIT(0);
											func_86();
										}
										break;
								}
								break;
							}
					}
					break;
			}
		}
		else
		{
			func_170();
		}
	}
}








void func_8()//Position - 0x124B
{
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_88())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), -1, 6f, 2f, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_71, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_71, 0, 0);
				}
				if (!iLocal_110)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_4716())
						{
							GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						iLocal_110 = 1;
					}
				}
			}
			else
			{
				iLocal_110 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, 1227113341) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_71, 1227113341) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_71);
				}
			}
		}
	}
}


void func_10()//Position - 0x1392
{
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 8f, 8f, 8f, 0, 1, 0))
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_71, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_104))
						{
							HUD::REMOVE_BLIP(&uLocal_104);
						}
						if (iLocal_54 != 10)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_69))
							{
								uLocal_69 = GlobalFunc_5104(Local_85, 1);
							}
						}
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_104))
					{
						HUD::REMOVE_BLIP(&uLocal_104);
					}
					if (iLocal_54 != 10)
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_69))
						{
							uLocal_69 = GlobalFunc_5104(Local_85, 1);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_69))
			{
				HUD::REMOVE_BLIP(&uLocal_69);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_104))
			{
				uLocal_104 = GlobalFunc_7491(iLocal_71, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_69))
			{
				HUD::REMOVE_BLIP(&uLocal_69);
			}
		}
	}
}



void func_13()//Position - 0x1577
{
	switch (iLocal_105)
	{
		case 0:
			if (func_14())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_71))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_71);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_STA", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_105++;
			}
			break;
		
		case 1:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 500)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, 0))
					{
						VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_74, -1f);
						if (HUD::DOES_BLIP_EXIST(uLocal_69))
						{
							HUD::REMOVE_BLIP(&uLocal_69);
						}
						iLocal_105++;
					}
				}
			}
			break;
		
		case 2:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 2000)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, 0))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						TASK::TASK_VEHICLE_TEMP_ACTION(PLAYER::PLAYER_PED_ID(), iLocal_74, 24, 2000);
						iLocal_105++;
					}
				}
			}
			break;
		
		case 3:
			if (func_14())
			{
				if (SYSTEM::TIMERA() > 4000)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_71))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_71);
							VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_74, 0f);
							TASK::TASK_LEAVE_VEHICLE(iLocal_71, iLocal_74, 320);
							if (!HUD::DOES_BLIP_EXIST(uLocal_104))
							{
								uLocal_104 = GlobalFunc_7491(iLocal_71, 1, 145);
							}
							iLocal_105++;
						}
					}
				}
			}
			break;
		
		case 4:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_71) && !PED::IS_PED_IN_VEHICLE(iLocal_71, iLocal_74, 0))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_71, 1);
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
					iLocal_105++;
				}
			}
			break;
		
		case 5:
			SYSTEM::WAIT(0);
			func_86();
			break;
	}
}

int func_14()//Position - 0x1734
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_74 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_71))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_71, iLocal_74))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_15()//Position - 0x1777
{
	if ((!iLocal_103 && !PED::IS_PED_INJURED(iLocal_71)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, 0))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_71);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, 2048, 2);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_90, 1f, -1, 0.25f, 0, 333.9002f);
		TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
		PED::SET_PED_KEEP_TASK(iLocal_71, 1);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		iLocal_103 = 1;
	}
	if (func_64())
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			TASK::CLEAR_PED_TASKS(iLocal_71);
			if (PED::IS_PED_IN_GROUP(iLocal_71))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_71);
			}
			TASK::TASK_SMART_FLEE_COORD(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_71, 1);
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (!GlobalFunc_111())
	{
		func_16();
	}
}

void func_16()//Position - 0x1880
{
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, 0);
	}
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	if (iLocal_55 == 0)
	{
		GlobalFunc_8039(GlobalFunc_8329(), 4, 3);
	}
	func_20(22, iLocal_68);
	GlobalFunc_7068();
	func_170();
}




void func_20(int iParam0, int iParam1)//Position - 0x194C
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
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_49.x, Local_49.f_1);
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

































void func_53()//Position - 0x305F
{
	if (HUD::DOES_BLIP_EXIST(uLocal_69))
	{
		HUD::SET_BLIP_ROUTE(uLocal_69, 0);
		HUD::REMOVE_BLIP(&uLocal_69);
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			HUD::CLEAR_PRINTS();
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_THK", 4, 0, 0, 0))
			{
			}
		}
	}
	if (SYSTEM::TIMERA() > 1000)
	{
		iLocal_54 = 7;
	}
}

void func_54()//Position - 0x30B4
{
	struct<3> Var0[4];
	
	func_10();
	func_61();
	func_60();
	func_8();
	if (!iLocal_96 && !iLocal_97)
	{
		if (GlobalFunc_8329() == 0)
		{
			if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_CHAT1", 4, 0, 0, 0))
			{
				iLocal_96 = 1;
			}
		}
		else if (GlobalFunc_8329() == 1)
		{
			if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_CHAT2", 4, 0, 0, 0))
			{
				iLocal_96 = 1;
			}
		}
	}
	if (iLocal_96 && !iLocal_97)
	{
		if (GlobalFunc_8329() == 0)
		{
			if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_CHAT1b", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
		else if (GlobalFunc_8329() == 1)
		{
			if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_CHAT2b", 4, 0, 0, 0))
			{
				iLocal_97 = 1;
			}
		}
	}
	if (iLocal_96 && iLocal_97)
	{
		if (GlobalFunc_8329() == 0)
		{
			if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_CHAT1c", 4, 0, 0, 0))
			{
				iLocal_96 = 0;
			}
		}
		else if (GlobalFunc_8329() == 1)
		{
			if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_CHAT2c", 4, 0, 0, 0))
			{
				iLocal_96 = 0;
			}
		}
	}
	if (func_64())
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			TASK::CLEAR_PED_TASKS(iLocal_71);
			if (PED::IS_PED_IN_GROUP(iLocal_71))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_71);
			}
			TASK::TASK_SMART_FLEE_COORD(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_71, 1);
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_SOB", 4, 0, 0, 0);
		}
		func_86();
	}
	if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_58, 1) > 200f)
	{
		if (!bLocal_99)
		{
			Var0[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(0f, 9f, 0f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[0 /*3*/], 0, &(Var0[0 /*3*/]), 0);
			Var0[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, 9f, 0f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[1 /*3*/], 0, &(Var0[1 /*3*/]), 0);
			Var0[2 /*3*/] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(0f, 0f, 9f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[2 /*3*/], 0, &(Var0[2 /*3*/]), 0);
			Var0[3 /*3*/] = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(0f, 0f, 9f) };
			PATHFIND::GET_SAFE_COORD_FOR_PED(Var0[3 /*3*/], 0, &(Var0[3 /*3*/]), 0);
			if (!CAM::IS_SPHERE_VISIBLE(Var0[0 /*3*/], 3f))
			{
				uLocal_84 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), Var0[0 /*3*/], GlobalFunc_830(Var0[0 /*3*/], GlobalFunc_80(PLAYER::PLAYER_ID())), 1, 1);
				uLocal_81[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_84, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_81[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_84, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_81[0], joaat("weapon_pistol"), -1, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_81[1], joaat("weapon_pistol"), -1, 0, 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				bLocal_99 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(Var0[1 /*3*/], 3f))
			{
				uLocal_84 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), Var0[1 /*3*/], GlobalFunc_830(Var0[1 /*3*/], GlobalFunc_80(PLAYER::PLAYER_ID())), 1, 1);
				uLocal_81[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_84, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_81[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_84, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_81[0], joaat("weapon_pistol"), -1, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_81[1], joaat("weapon_pistol"), -1, 0, 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				bLocal_99 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(Var0[2 /*3*/], 3f))
			{
				uLocal_84 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), Var0[2 /*3*/], GlobalFunc_830(Var0[2 /*3*/], GlobalFunc_80(PLAYER::PLAYER_ID())), 1, 1);
				uLocal_81[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_84, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_81[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_84, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_81[0], joaat("weapon_pistol"), -1, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_81[1], joaat("weapon_pistol"), -1, 0, 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				bLocal_99 = true;
			}
			else if (!CAM::IS_SPHERE_VISIBLE(Var0[3 /*3*/], 3f))
			{
				uLocal_84 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), Var0[3 /*3*/], GlobalFunc_830(Var0[3 /*3*/], GlobalFunc_80(PLAYER::PLAYER_ID())), 1, 1);
				uLocal_81[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_84, 6, joaat("s_m_y_ranger_01"), -1, 1, 1);
				uLocal_81[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_84, 6, joaat("s_m_y_ranger_01"), 0, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_81[0], joaat("weapon_pistol"), -1, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_81[1], joaat("weapon_pistol"), -1, 0, 1);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				bLocal_99 = true;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_78, 0), 10f, 10f, 10f, 0, 0, 0) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_56();
	}
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		if (((!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_71, 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 990.7705f, -105.594f, 73.3055f, 954.8849f, -145.3864f, 79.1073f, 8.8125f, 0, 1, 0)) || (ENTITY::IS_ENTITY_AT_COORD(iLocal_71, Local_85, Global_18, 1, 1, 0) && GlobalFunc_552(1, 0, 1)))
		{
			SYSTEM::SETTIMERA(0);
			if (func_14())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 2, 0);
				}
				HUD::CLEAR_PRINTS();
				iLocal_54 = 5;
			}
			else
			{
				iLocal_54 = 6;
			}
		}
	}
}


void func_56()//Position - 0x3730
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (func_14())
		{
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				iLocal_54 = 10;
			}
		}
		else if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((Var0.x - 50f), (Var0.f_1 - 50f), (Var0.f_2 - 50f), (Var0.x + 50f), (Var0.f_1 + 50f), (Var0.f_2 + 50f)))
		{
			if (!PED::IS_PED_INJURED(iLocal_71))
			{
				TASK::CLEAR_PED_TASKS(iLocal_71);
				if (PED::IS_PED_IN_GROUP(iLocal_71))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_71);
				}
				TASK::TASK_SMART_FLEE_COORD(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_71, 1);
				SYSTEM::WAIT(0);
			}
			func_86();
		}
	}
	else if (func_14())
	{
		if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((Var0.x - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.x + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
		{
			GlobalFunc_4956();
			SYSTEM::WAIT(0);
			if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_POL", 4, 0, 0, 0))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 3, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				PLAYER::SET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID(), 0f);
				if (HUD::DOES_BLIP_EXIST(uLocal_69))
				{
					HUD::REMOVE_BLIP(&uLocal_69);
				}
				iLocal_54 = 10;
			}
		}
	}
	else if (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D((Var0.x - 10f), (Var0.f_1 - 10f), (Var0.f_2 - 10f), (Var0.x + 10f), (Var0.f_1 + 10f), (Var0.f_2 + 10f)))
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			TASK::CLEAR_PED_TASKS(iLocal_71);
			if (PED::IS_PED_IN_GROUP(iLocal_71))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_71);
			}
			TASK::TASK_SMART_FLEE_COORD(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iLocal_71, 1);
			SYSTEM::WAIT(0);
		}
		func_86();
	}
}




void func_60()//Position - 0x3984
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
	}
	if ((iLocal_143 - iLocal_142) > 120000)
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_71))
			{
				if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_WLK", 4, 0, 0, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_71);
					func_86();
				}
			}
		}
	}
}

void func_61()//Position - 0x39FA
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!iLocal_144)
		{
			iLocal_145 = MISC::GET_GAME_TIMER();
			iLocal_144 = 1;
		}
		else
		{
			iLocal_146 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_144 = 0;
	}
	if ((iLocal_146 - iLocal_145) > 60000)
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_71))
			{
				if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_SLO", 4, 0, 0, 0))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_71);
					func_86();
				}
			}
		}
	}
}

int func_62()//Position - 0x3A68
{
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_71))
		{
			if ((((((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_113, 50f, 50f, 50f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_116, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_119, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_122, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_125, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_128, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_131, 50f, 50f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_134, 50f, 50f, 50f, 0, 1, 0)) || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_137, 1) < 205f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_63()//Position - 0x3BBE
{
	if (!PED::IS_PED_INJURED(iLocal_71) && func_88())
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_71, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				SYSTEM::SETTIMERA(0);
				if (!PED::IS_PED_IN_GROUP(iLocal_71))
				{
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_71, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_71, 0);
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_71, 1);
				}
				if (iLocal_55 == 0)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_CH", 4, 0, 0, 0))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_69))
							{
								uLocal_69 = GlobalFunc_5104(Local_85, 1);
							}
							MISC::CLEAR_BIT(&uLocal_93, 3);
							iLocal_95 = 1;
							iLocal_54 = 3;
						}
					}
				}
				else if (iLocal_55 == 1)
				{
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_WHTM", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_WHTF", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_WHTT", 4, 0, 0, 0);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_71, 2, 1);
					iLocal_54 = 3;
				}
			}
		}
	}
}

int func_64()//Position - 0x3CE9
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_71))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
			{
				GlobalFunc_4956();
				return 1;
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 1))
		{
			GlobalFunc_4956();
			return 1;
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 250f, 250f, 250f, 0, 1, 0))
		{
			return 1;
		}
		if (iLocal_55 == 0)
		{
			iVar0 = 0;
			if (GlobalFunc_4453())
			{
				iVar0 = 0;
				while (iVar0 < GlobalFunc_4452())
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(GlobalFunc_4451(iVar0), PLAYER::PLAYER_PED_ID(), 0))
					{
						if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(GlobalFunc_4451(iVar0))) == -1865950624)
						{
							return 1;
						}
					}
					iVar0++;
				}
			}
		}
		if (iLocal_54 < 2)
		{
			if (PED::HAS_PED_RECEIVED_EVENT(iLocal_71, 126))
			{
				return 1;
			}
			if (iLocal_55 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_78))
				{
					if (((PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_78, 0) + Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_78, 0) + Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f)) || PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_78, 0) - Vector(0f, 0f, 45f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_78, 0) - Vector(0f, 0f, 45f) + Vector(40f, 40f, 40f))) || PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_78, 0) + Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_78, 0) + Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f))) || PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_78, 0) - Vector(0f, 45f, 0f) - Vector(40f, 40f, 40f), ENTITY::GET_ENTITY_COORDS(iLocal_78, 0) - Vector(0f, 45f, 0f) + Vector(40f, 40f, 40f)))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_71, 1);
						return 1;
					}
				}
			}
			else if (iLocal_55 == 1)
			{
				if (PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(iLocal_71, 0) - Vector(70f, 70f, 70f), ENTITY::GET_ENTITY_COORDS(iLocal_71, 0) + Vector(70f, 70f, 70f)))
				{
					return 1;
				}
			}
			if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_71, 1), 20f, 1))
			{
				return 1;
			}
			if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_71, 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_71, 1) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_71, 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_71, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_71, 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_71, 1) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1))
			{
				return 1;
			}
			if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iLocal_71, 1), 3f))
			{
				return 1;
			}
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				return 1;
			}
			if ((ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 20f, 20f, 8f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_71, PLAYER::PLAYER_PED_ID())) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_71) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_71))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		GlobalFunc_4956();
		return 1;
	}
	return 0;
}




void func_68()//Position - 0x40D9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_4716())
				{
					GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_THREAT", 4, 0, 0, 0);
				}
				else
				{
					GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_HIJ", 4, 0, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_104))
				{
					HUD::SET_BLIP_AS_FRIENDLY(uLocal_104, false);
				}
				TASK::CLEAR_PED_TASKS(iLocal_71);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
				TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500, 1);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 1f, 0.5f, 1, 0, -957453492);
				TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, -1, 2f, 9, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
				SYSTEM::SETTIMERA(0);
				bLocal_109 = true;
				iLocal_54 = 11;
			}
		}
	}
}

float func_69(var uParam0, int iParam1)//Position - 0x41A6
{
	return GlobalFunc_2834(uParam0, iParam1, 1);
}

int func_70()//Position - 0x41B7
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_74 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)//Position - 0x41E5
{
	if ((((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, 3000) || FIRE::IS_ENTITY_ON_FIRE(iParam0)) || FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(ENTITY::GET_ENTITY_COORDS(iParam0, 0), 5f) > 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam0, joaat("weapon_molotov"), 0)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 0) - Vector(5f, 5f, 5f), ENTITY::GET_ENTITY_COORDS(iParam0, 0) + Vector(5f, 5f, 5f), joaat("weapon_molotov"), 0))
	{
		return 1;
	}
	return 0;
}













void func_84()//Position - 0x48F9
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_78))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_78, 0) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_78, -1))
		{
			AUDIO::_0x9D3AF56E94C9AE98(iLocal_78, 60000f);
			AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(iLocal_78);
		}
	}
}

void func_85()//Position - 0x4938
{
	switch (iLocal_107)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_71))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 20f, 20f, 8f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2.5f || !(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 15f, 15f, 8f, 0, 1, 0)))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 30000, 2050, 2);
						TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 1073741824, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
						if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_ASK", 4, 0, 0, 0))
						{
							bLocal_98 = true;
							iLocal_107++;
						}
					}
				}
			}
			break;
		
		case 1:
			func_87(&uLocal_106);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (func_88())
				{
					iLocal_74 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::GET_ENTITY_SPEED(iLocal_74) < 9f)
					{
						if (!PED::IS_PED_INJURED(iLocal_71))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_71, iLocal_74, 20f, 20f, 5f, 0, 1, 0))
							{
								iLocal_107++;
							}
						}
					}
				}
				else if (!bLocal_109)
				{
					fLocal_108 = GlobalFunc_2834(iLocal_71, PLAYER::PLAYER_PED_ID(), 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, (fLocal_108 - 3f), 1f, 1073741824, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_4716())
						{
							GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_UVH2", 4, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_UVH", 4, 0, 0, 0);
						}
						bLocal_109 = true;
						bLocal_98 = true;
					}
				}
			}
			break;
		
		case 2:
			func_87(&uLocal_106);
			if (!iLocal_111)
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2.5f)
				{
					if (!PED::IS_PED_INJURED(iLocal_71))
					{
						TASK::CLEAR_PED_TASKS(iLocal_71);
						TASK::TASK_OPEN_VEHICLE_DOOR(iLocal_71, iLocal_74, -1, 0, 1f);
						iLocal_111 = 1;
					}
				}
				if (!GlobalFunc_111())
				{
					if (!PED::IS_PED_INJURED(iLocal_71))
					{
						TASK::CLEAR_PED_TASKS(iLocal_71);
						TASK::TASK_OPEN_VEHICLE_DOOR(iLocal_71, iLocal_74, -1, 0, 1f);
						iLocal_111 = 1;
					}
				}
			}
			if (func_88())
			{
				iLocal_74 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::GET_ENTITY_SPEED(iLocal_74) < 2.5f)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_74, ENTITY::GET_ENTITY_COORDS(iLocal_71, 1), 20f, 20f, 5f, 0, 1, 0))
					{
						if (iLocal_55 == 0)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_8329() == 0)
								{
									if (GlobalFunc_4716())
									{
										GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_GETONM", 4, 0, 0, 0);
									}
									else
									{
										GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_JIM", 4, 0, 0, 0);
									}
								}
								else if (GlobalFunc_8329() == 1)
								{
									if (GlobalFunc_4716())
									{
										GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_GETONF", 4, 0, 0, 0);
									}
									else
									{
										GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_JIF", 4, 0, 0, 0);
									}
								}
								else if (GlobalFunc_8329() == 2)
								{
									GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_JIT", 4, 0, 0, 0);
								}
								iLocal_107++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (func_88())
			{
				iLocal_74 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::GET_ENTITY_SPEED(iLocal_74) < 0.5f)
				{
					if (!PED::IS_PED_INJURED(iLocal_71))
					{
						TASK::CLEAR_PED_TASKS(iLocal_71);
						if (!PED::IS_PED_IN_GROUP(iLocal_71))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_71, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_71, 0);
							PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_71, 1);
						}
						iLocal_107++;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_55 == 0)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_SH", 4, 0, 0, 0))
					{
						iLocal_107++;
					}
				}
			}
			else
			{
				iLocal_107++;
			}
			break;
		
		case 5:
			if (func_88())
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_71))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_71, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_104))
							{
								HUD::REMOVE_BLIP(&uLocal_104);
							}
							iLocal_54 = 2;
						}
					}
				}
			}
			else
			{
				func_8();
			}
			break;
	}
}

void func_86()//Position - 0x4D47
{
	func_170();
}

void func_87(var uParam0)//Position - 0x4D53
{
	switch (*uParam0)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_71))
			{
				if (!PED::IS_PED_FACING_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 90f))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), 0);
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_71))
			{
				if (PED::IS_PED_FACING_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 90f))
				{
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_71))
			{
				if (!PED::IS_PED_FACING_PED(iLocal_71, PLAYER::PLAYER_PED_ID(), 90f))
				{
					*uParam0 = 0;
				}
			}
			break;
	}
}

int func_88()//Position - 0x4DF3
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			if ((((((!PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !VEHICLE::IS_BIG_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_89()//Position - 0x4E92
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_74 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, 0) && !PED::IS_PED_INJURED(iLocal_71)) && !bLocal_98)
		{
			fLocal_108 = GlobalFunc_2834(iLocal_71, PLAYER::PLAYER_PED_ID(), 1);
			if (fLocal_108 > 5f)
			{
				fLocal_108 = (fLocal_108 - 2.5f);
			}
			else
			{
				fLocal_108 = (fLocal_108 - 1f);
			}
			TASK::CLEAR_PED_TASKS(iLocal_71);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
			if (iLocal_55 == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_74, 10000, 2048, 2);
				TASK::TASK_PLAY_ANIM(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, fLocal_108, 1f, 1, 0, -957453492);
			}
			else if (iLocal_55 == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(0, iLocal_74, 10000, 2052, 2);
				TASK::TASK_PLAY_ANIM(0, "random@prisoner_lift", "arms_waving", 2f, -2f, -1, 49, 0, 0, 0, 0);
				TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1f, 0f, 0f, 1f, -1, 0.5f, 1);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
			if (iLocal_55 == 0)
			{
				GlobalFunc_10641(&uLocal_147, "PRI1AU", "PRI1_STO", 4, 0, 0, 0);
				SYSTEM::SETTIMERA(0);
				bLocal_98 = true;
			}
			else if (iLocal_55 == 1)
			{
				if (GlobalFunc_10641(&uLocal_147, "PRI2AU", "PRI2_STO", 4, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					bLocal_98 = true;
				}
			}
		}
	}
}












void func_101()//Position - 0x556D
{
	if (HUD::DOES_BLIP_EXIST(uLocal_70))
	{
		HUD::REMOVE_BLIP(&uLocal_70);
	}
	if (!HUD::DOES_BLIP_EXIST(uLocal_104))
	{
		uLocal_104 = GlobalFunc_7491(iLocal_71, 0, 145);
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_104, 0);
	}
}

void func_102()//Position - 0x55A0
{
	var uVar0;
	var uVar1[2];
	
	GlobalFunc_8523(39, 1);
	GlobalFunc_8523(40, 1);
	GlobalFunc_8523(41, 1);
	GlobalFunc_8523(42, 1);
	GlobalFunc_8523(43, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	MISC::ENABLE_DISPATCH_SERVICE(11, 0);
	iLocal_71 = PED::CREATE_PED(26, iLocal_89, Local_75, fLocal_88, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_71, 134, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_71, 137, 1);
	PED::ADD_RELATIONSHIP_GROUP("PedPrisoner", &iLocal_72);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_71, iLocal_72);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_72);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_72, joaat("COP"));
	TASK::TASK_PLAY_ANIM(iLocal_71, "random@prisoner_lift", "loop2_idlelook2", 2f, -2f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_MONEY(iLocal_71, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_71, 8, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_71, 128, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_71, 2, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_71, 1, 0);
	MISC::SET_BIT(&uLocal_93, 3);
	MISC::SET_BIT(&uLocal_93, 5);
	MISC::SET_BIT(&uLocal_93, 0);
	if (iLocal_55 == 0)
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_71, "REPRI1Lost");
		GlobalFunc_1286(&uLocal_147, 3, iLocal_71, "REPRI1Lost", 0, 1);
		MISC::CLEAR_AREA_OF_PEDS(Local_75, 50f, 0);
		MISC::CLEAR_AREA(Local_75, 10f, 0, 0, 0, 0);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_75 - Vector(50f, 50f, 50f), Local_75 + Vector(50f, 50f, 50f), 0, 1, 1, 1);
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_85 - Vector(10f, 10f, 10f), Local_85 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_75 - Vector(10f, 10f, 10f), Local_75 + Vector(10f, 10f, 10f), 0, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_72, -1865950624);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, iLocal_72);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_71, 17, 1);
		iLocal_78 = VEHICLE::CREATE_VEHICLE(joaat("sheriff"), 1524.332f, 2173.347f, 79.0619f, 201.6806f, 1, 1);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_78, 0f);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_78, 4, 0, 0);
		VEHICLE::SET_VEHICLE_TYRE_BURST(iLocal_78, 0, 0, 1148846080);
		VEHICLE::_0x0AD9E8F87FF7C16F(iLocal_78, 0);
		MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(1525.566f, 2172.512f, 80.1985f, 1524.423f, 2173.894f, 80.1342f, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
		uVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_78, 26, joaat("s_m_y_ranger_01"), -1, 1, 1);
		PED::SET_PED_CONFIG_FLAG(uVar0, 326, 1);
		ENTITY::SET_ENTITY_HEALTH(iVar0, 99);
		PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iVar0, 1);
		uVar1[0] = VEHICLE::CREATE_VEHICLE(joaat("ratloader"), 1527.4f, 2240.33f, 73.8459f, 216.8133f, 1, 1);
		uVar1[1] = VEHICLE::CREATE_VEHICLE(joaat("bfinjection"), 1594.093f, 2198.657f, 77.8709f, 85.3536f, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uVar1[0]);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uVar1[1]);
	}
	else if (iLocal_55 == 1)
	{
		PATHFIND::SET_ROADS_IN_ANGLED_AREA(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 0, 0, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_71, "G_M_Y_STREETPUNK02_BLACK_MINI_04");
		GlobalFunc_1286(&uLocal_147, 3, iLocal_71, "REPRI2Prisoner", 0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_71, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (GlobalFunc_8329() == 0)
	{
		GlobalFunc_1286(&uLocal_147, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (GlobalFunc_8329() == 1)
	{
		GlobalFunc_1286(&uLocal_147, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (GlobalFunc_8329() == 2)
	{
		GlobalFunc_1286(&uLocal_147, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	iLocal_54 = 1;
}







void func_109()//Position - 0x5DD5
{
	STREAMING::REQUEST_MODEL(iLocal_89);
	STREAMING::REQUEST_ANIM_DICT("random@prisoner_lift");
	if (iLocal_55 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("s_m_y_ranger_01"));
		STREAMING::REQUEST_MODEL(joaat("sheriff"));
		STREAMING::REQUEST_MODEL(joaat("ratloader"));
		STREAMING::REQUEST_MODEL(joaat("bfinjection"));
	}
	if (STREAMING::HAS_MODEL_LOADED(iLocal_89) && STREAMING::HAS_ANIM_DICT_LOADED("random@prisoner_lift"))
	{
		if (iLocal_55 == 0)
		{
			if (((STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_ranger_01")) && STREAMING::HAS_MODEL_LOADED(joaat("sheriff"))) && STREAMING::HAS_MODEL_LOADED(joaat("ratloader"))) && STREAMING::HAS_MODEL_LOADED(joaat("bfinjection")))
			{
				bLocal_56 = true;
			}
		}
		else
		{
			bLocal_56 = true;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_89);
		STREAMING::REQUEST_ANIM_DICT("random@prisoner_lift");
		if (iLocal_55 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("s_m_y_ranger_01"));
			STREAMING::REQUEST_MODEL(joaat("sheriff"));
			STREAMING::REQUEST_MODEL(joaat("ratloader"));
			STREAMING::REQUEST_MODEL(joaat("bfinjection"));
		}
	}
}

void func_110()//Position - 0x5EA8
{
	if (iLocal_61 == 1)
	{
		iLocal_89 = joaat("g_m_y_lost_02");
		Local_75 = { 1538.09f, 2172.344f, 77.826f };
		fLocal_88 = 142.0201f;
		Local_90 = { 984.3975f, -106.9935f, 73.3531f };
		Local_85 = { 960.1481f, -139.4141f, 73.476f };
	}
	if (iLocal_61 == 2)
	{
		iLocal_89 = joaat("s_m_y_prisoner_01");
		Local_75 = { 1401.692f, 2528.085f, 40.3762f };
		fLocal_88 = 301.2458f;
		Local_90 = { 938.5384f, -2167.42f, 29.5153f };
		Local_85 = { 928.9882f, -2173.248f, 29.2873f };
	}
	iLocal_57 = 1;
}

int func_111()//Position - 0x5F4D
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_49) < (75f * 75f))
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

















int func_128(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x7C3F
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
	Local_49 = { Param0 };
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
			if ((Var1.f_2 - Local_49.f_2) > 50f)
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










































void func_170()//Position - 0x9262
{
	if (iLocal_140)
	{
		GlobalFunc_9132(0);
		GlobalFunc_5105();
		GlobalFunc_563(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_75 - Vector(10f, 10f, 10f), Local_75 + Vector(10f, 10f, 10f), 1, 1);
		PLAYER::RESET_WANTED_LEVEL_DIFFICULTY(PLAYER::PLAYER_ID());
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(1449.851f, 2452.661f, 81.56557f, 1203.85f, 2579.351f, 35.1549f, 224.125f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_71))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_71, 0);
			if (iLocal_55 == 0)
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_71, 317, 1);
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
					TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
					PED::SET_PED_KEEP_TASK(iLocal_71, 1);
				}
			}
			else if (iLocal_55 == 1)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
					TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
					PED::SET_PED_KEEP_TASK(iLocal_71, 1);
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_74, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_74, -1, -1, 2f, 9, 0);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
					PED::SET_PED_KEEP_TASK(iLocal_71, 1);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_73);
					TASK::TASK_SMART_FLEE_COORD(0, 1449.05f, 2507.258f, 44.8843f, 1000f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 300f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_73);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_71, uLocal_73);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_73);
					PED::SET_PED_KEEP_TASK(iLocal_71, 1);
				}
			}
		}
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		MISC::ENABLE_DISPATCH_SERVICE(11, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}















Vector3 func_185()//Position - 0x9CDC
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_62, 1);
		iLocal_61 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1);
			iLocal_61 = 2;
		}
		if (iLocal_61 == 1)
		{
			iLocal_68 = 1;
			iLocal_55 = 0;
			return Local_62;
		}
		if (iLocal_61 == 2)
		{
			iLocal_68 = 2;
			iLocal_55 = 1;
			return Local_65;
		}
	}
	return 0f, 0f, 0f;
}

