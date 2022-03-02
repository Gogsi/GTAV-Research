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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	struct<3> Local_49 = { 0, 0, 0 } ;
	int iLocal_52 = 0;
	bool bLocal_53 = 0;
	struct<3> Local_54[2];
	float fLocal_61[2] = { 0f, 0f };
	struct<3> Local_64[3];
	float fLocal_74[3] = { 0f, 0f, 0f };
	struct<3> Local_78[4];
	float fLocal_91[4] = { 0f, 0f, 0f, 0f };
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	struct<3> Local_102 = { 0, 0, 0 } ;
	var uLocal_105 = 0;
	struct<3> Local_106 = { 0, 0, 0 } ;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113[2] = { 0, 0 };
	int iLocal_116[3] = { 0, 0, 0 };
	int iLocal_120[4] = { 0, 0, 0, 0 };
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	struct<3> Local_127 = { 0, 0, 0 } ;
	struct<3> Local_130 = { 0, 0, 0 } ;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	bool bLocal_139 = 0;
	int iLocal_140[2] = { 0, 0 };
	int iLocal_143[2] = { 0, 0 };
	bool bLocal_146 = 0;
	bool bLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	bool bLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	var uLocal_167[2] = { 0, 0 };
	var uLocal_170 = 0;
	struct<3> Local_171 = { 0, 0, 0 } ;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	bool bLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	var uLocal_184[2] = { 0, 0 };
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	struct<3> Local_193 = { 0, 0, 0 } ;
	float fLocal_196 = 0f;
	struct<3> Local_197 = { 0, 0, 0 } ;
	struct<3> Local_200 = { 0, 0, 0 } ;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	var uLocal_209 = 0;
	char* sLocal_210 = NULL;
	char* sLocal_211 = NULL;
	char* sLocal_212 = NULL;
	char* sLocal_213 = NULL;
	char* sLocal_214 = NULL;
	var uLocal_215 = 0;
	float fLocal_216 = 0f;
	int iLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	int iLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	var uLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 16;
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
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
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
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	Local_127 = { -824.1719f, -187.654f, 36.5707f };
	Local_130 = { -1202.94f, -779.74f, 17.33f };
	Local_49 = { ScriptParam_0.f_1[0 /*3*/] };
	func_236();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		GlobalFunc_5105();
		func_222();
	}
	if (iLocal_48 == 1)
	{
		if (!func_221(0) || !GlobalFunc_8373(0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else if (iLocal_48 == 2)
	{
		if (!func_221(14) || !GlobalFunc_8373(14))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (func_190(Local_49, 5, iLocal_133, 0, 0))
	{
		GlobalFunc_6828(5);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_163)
		{
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10586())
				{
					func_222();
				}
			}
			RECORDING::_0x208784099002BC30("RE_SR", 0);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				switch (iLocal_47)
				{
					case 0:
						if (iLocal_52)
						{
							iLocal_222 = 1;
							iLocal_47 = 1;
						}
						else
						{
							if (func_173())
							{
								func_222();
							}
							if (!bLocal_53)
							{
								func_172();
							}
							if (bLocal_53)
							{
								func_171();
							}
						}
						break;
					
					case 1:
						switch (iLocal_45)
						{
							case 0:
								if (!iLocal_136)
								{
									func_170();
									if (INTERIOR::IS_INTERIOR_READY(iLocal_152))
									{
										func_164();
										iLocal_136 = 1;
									}
								}
								else
								{
									if (iLocal_48 == 1)
									{
										RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
									}
									func_161();
									INTERIOR::UNPIN_INTERIOR(iLocal_152);
									if (func_160())
									{
										if (!iLocal_158)
										{
											if (iLocal_48 == 1)
											{
												if (GlobalFunc_10726(&uLocal_231, "REROBAU", "REROB_CH2", "REROB_CH2_1", 4, 0, 0))
												{
													iLocal_158 = 1;
												}
											}
											else if (iLocal_48 == 2)
											{
												if (GlobalFunc_10726(&uLocal_231, "REROBAU", "REROB_CH", "REROB_CH_1", 4, 0, 0))
												{
													iLocal_158 = 1;
												}
											}
										}
									}
									if (func_158())
									{
										if (HUD::DOES_BLIP_EXIST(uLocal_192))
										{
											HUD::REMOVE_BLIP(&uLocal_192);
										}
										PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
										PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
										iVar0 = 0;
										while (iVar0 < iLocal_113)
										{
											if (!PED::IS_PED_INJURED(iLocal_113[iVar0]))
											{
												TASK::TASK_COMBAT_PED(iLocal_113[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_113[iVar0], 1);
												if (!HUD::DOES_BLIP_EXIST(uLocal_184[iVar0]))
												{
													uLocal_184[iVar0] = GlobalFunc_6829(iLocal_113[iVar0], 1, 145);
												}
											}
											iVar0++;
										}
										if (iLocal_48 == 2)
										{
											iVar0 = 0;
											while (iVar0 < iLocal_116)
											{
												if (!PED::IS_PED_INJURED(iLocal_116[iVar0]))
												{
													TASK::TASK_COWER(iLocal_116[iVar0], -1);
													PED::SET_PED_KEEP_TASK(iLocal_116[iVar0], 1);
												}
												iVar0++;
											}
											iVar0 = 0;
											while (iVar0 < iLocal_120)
											{
												if (!PED::IS_PED_INJURED(iLocal_120[iVar0]))
												{
													TASK::TASK_COWER(iLocal_120[iVar0], -1);
													PED::SET_PED_KEEP_TASK(iLocal_120[iVar0], 1);
												}
												iVar0++;
											}
										}
										OBJECT::DELETE_OBJECT(&iLocal_166);
										bLocal_139 = true;
										iLocal_45 = 1;
										iLocal_46 = 3;
									}
									if (func_156())
									{
										GlobalFunc_9034(1);
										SYSTEM::SETTIMERA(0);
										EVENT::ADD_SHOCKING_EVENT_AT_POSITION(88, Local_193, 15000f);
										iLocal_45 = 1;
									}
								}
								break;
							
							case 1:
								PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
								func_161();
								iVar1 = 0;
								while (iVar1 < iLocal_116)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_116[iVar1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_116[iVar1], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_148();
										}
									}
									iVar1++;
								}
								iVar1 = 0;
								while (iVar1 < iLocal_120)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[iVar1]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_120[iVar1], PLAYER::PLAYER_PED_ID(), 1))
										{
											func_148();
										}
									}
									iVar1++;
								}
								switch (iLocal_46)
								{
									case 0:
										if (func_156())
										{
											func_144();
											func_142();
										}
										break;
									
									case 1:
										func_141();
										func_142();
										break;
									
									case 2:
										func_140();
										func_139();
										func_138();
										if (SYSTEM::TIMERB() > 500)
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
											{
												if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_166))
												{
													func_137();
													WEAPON::SET_CURRENT_PED_WEAPON(iLocal_113[0], joaat("weapon_unarmed"), 1);
													ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_166, iLocal_113[0], PED::GET_PED_BONE_INDEX(iLocal_113[0], 57005), 0.3f, 0f, 0f, 80f, -90f, 0f, 1, 1, 0, 0, 2, 1);
												}
											}
										}
										if (MISC::IS_PROJECTILE_IN_AREA(Local_193 - Vector(20f, 20f, 20f), Local_193 + Vector(20f, 20f, 20f), 0))
										{
											if (!PED::IS_PED_INJURED(iLocal_116[1]))
											{
												TASK::TASK_SMART_FLEE_COORD(iLocal_116[1], Local_102, 150f, -1, 0, 0);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[1], 0);
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_116[1]));
											}
											if (!PED::IS_PED_INJURED(iLocal_116[2]))
											{
												TASK::TASK_SMART_FLEE_COORD(iLocal_116[2], Local_102, 150f, -1, 0, 0);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[2], 0);
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_116[2]));
											}
											iVar2 = 0;
											while (iVar2 <= (iLocal_112 - 1))
											{
												if (!PED::IS_PED_INJURED(iLocal_120[iVar2]))
												{
													ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_120[iVar2], 1);
													TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
													if (iLocal_48 == 1)
													{
														TASK::TASK_PLAY_ANIM(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
													}
													else if (iLocal_48 == 2)
													{
														TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
													}
													TASK::TASK_SMART_FLEE_COORD(0, Local_102, 150f, -1, 0, 0);
													TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_120[iVar2], uLocal_151);
													TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
													PED::SET_PED_KEEP_TASK(iLocal_120[iVar2], 1);
													PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_120[iVar2], 0);
													PED::SET_PED_CAN_BE_TARGETTED(iLocal_120[iVar2], 1);
													ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_120[iVar2]));
												}
												iVar2++;
											}
										}
										if (func_136() || SYSTEM::TIMERA() > 20000)
										{
											if (!iLocal_163)
											{
												if (!ENTITY::IS_ENTITY_DEAD(iLocal_113[0]))
												{
													GlobalFunc_8316(0, 1, 1, 0);
													GlobalFunc_7632(0);
													HUD::DISPLAY_HUD(1);
													HUD::DISPLAY_RADAR(1);
													PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
													TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p", 2f, -2f, 2700, 0, 0f, 0, 0, 0);
													if (iLocal_48 == 1)
													{
														if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
														{
															ENTITY::SET_ENTITY_VISIBLE(iLocal_166, 0);
															ENTITY::SET_ENTITY_COLLISION(iLocal_166, 0, 0);
														}
													}
													else if (iLocal_48 == 2)
													{
													}
													iVar1 = 0;
													while (iVar1 < iLocal_116)
													{
														if (!PED::IS_PED_INJURED(iLocal_116[iVar1]))
														{
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[iVar1], 0);
														}
														iVar1++;
													}
													iVar1 = 0;
													while (iVar1 < iLocal_120)
													{
														if (!PED::IS_PED_INJURED(iLocal_120[iVar1]))
														{
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_120[iVar1], 0);
														}
														iVar1++;
													}
													if (!PED::IS_PED_INJURED(iLocal_116[0]))
													{
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[0], 1);
														TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
														TASK::TASK_PLAY_ANIM(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, 0, 0, 0);
														TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
														TASK::TASK_PERFORM_SEQUENCE(iLocal_116[0], uLocal_151);
														TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
														PED::SET_PED_KEEP_TASK(iLocal_116[0], 1);
													}
													if (!GlobalFunc_111())
													{
														GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_CLAWAY", 4, 0, 0, 0);
													}
													iLocal_163 = 1;
												}
											}
										}
										if (!iLocal_138)
										{
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p", 3))
											{
												if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p") > 0.7f || (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "random@shop_robbery", "kneel_getup_p") > 0.6f && GlobalFunc_4705(64)))
												{
													TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
													iLocal_138 = 1;
												}
											}
										}
										if (iLocal_48 == 1)
										{
											if (!func_156())
											{
												if (!iLocal_179)
												{
													iLocal_179 = 1;
												}
											}
											if (!bLocal_160)
											{
												func_110();
											}
											if (!PED::IS_PED_INJURED(iLocal_113[0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174, 0))
											{
												if (PED::IS_PED_IN_VEHICLE(iLocal_113[0], iLocal_174, 0))
												{
													if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
													{
														OBJECT::DELETE_OBJECT(&iLocal_166);
														bLocal_160 = true;
													}
												}
											}
											if (func_109() && !iLocal_161)
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_184[0]))
												{
													HUD::REMOVE_BLIP(&(uLocal_184[0]));
												}
												if (HUD::DOES_BLIP_EXIST(uLocal_184[1]))
												{
													HUD::REMOVE_BLIP(&(uLocal_184[1]));
												}
												if (!HUD::DOES_BLIP_EXIST(uLocal_190))
												{
													uLocal_190 = GlobalFunc_7056(iLocal_174, 1, 0);
												}
												bLocal_160 = true;
												if (!PED::IS_PED_INJURED(iLocal_183))
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_183, 17, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_183, 6, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_183, 1, 1);
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_183, iLocal_174, PLAYER::PLAYER_PED_ID(), 8, 16f, 786469, -1f, -1f, 1);
													PED::SET_PED_KEEP_TASK(iLocal_183, 1);
													iLocal_161 = 1;
												}
											}
											if (iLocal_161 && !iLocal_223)
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174, 0) && !PED::IS_PED_INJURED(iLocal_183))
												{
													if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_174, Local_54[0 /*3*/], 20f, 20f, 10f, 0, 1, 0))
													{
														TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_183, iLocal_174, PLAYER::PLAYER_PED_ID(), 8, 19f, 786469, -1f, -1f, 1);
														iLocal_223 = 1;
													}
												}
											}
											if (func_106())
											{
												if (!PED::IS_PED_INJURED(iLocal_183))
												{
													if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174, 0))
													{
														if (!iLocal_162)
														{
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_183, 17, 1);
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_183, 6, 1);
															PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_183, 1, 1);
															TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_183, iLocal_174, PLAYER::PLAYER_PED_ID(), 8, 17f, 786469, -1f, -1f, 1);
															iLocal_162 = 1;
														}
														if (!PED::IS_PED_INJURED(iLocal_113[0]))
														{
															if (PED::IS_PED_IN_VEHICLE(iLocal_113[0], iLocal_174, 0))
															{
																if (HUD::DOES_BLIP_EXIST(uLocal_184[0]))
																{
																	HUD::REMOVE_BLIP(&(uLocal_184[0]));
																}
																if (HUD::DOES_BLIP_EXIST(uLocal_184[1]))
																{
																	HUD::REMOVE_BLIP(&(uLocal_184[1]));
																}
																if (!HUD::DOES_BLIP_EXIST(uLocal_190))
																{
																	uLocal_190 = GlobalFunc_7056(iLocal_174, 1, 0);
																}
																bLocal_160 = true;
															}
														}
													}
												}
												iVar3 = 0;
												while (iVar3 <= (iLocal_110 - 1))
												{
													if (!iLocal_140[iVar3])
													{
														if (!PED::IS_PED_INJURED(iLocal_113[iVar3]))
														{
															if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_113[iVar3], 0) && !PED::IS_PED_INJURED(iLocal_183))
															{
																TASK::TASK_DRIVE_BY(iLocal_113[iVar3], PLAYER::PLAYER_PED_ID(), 0, 0.3f, 0.7f, 1.9f, -1f, 15, 0, -753768974);
																iLocal_140[iVar3] = 1;
															}
															else if (!HUD::DOES_BLIP_EXIST(uLocal_191))
															{
																TASK::TASK_COMBAT_PED(iLocal_113[iVar3], PLAYER::PLAYER_PED_ID(), 0, 16);
																PED::SET_PED_KEEP_TASK(iLocal_113[iVar3], 1);
																if (HUD::DOES_BLIP_EXIST(uLocal_190))
																{
																	HUD::REMOVE_BLIP(&uLocal_190);
																}
																if (!HUD::DOES_BLIP_EXIST(uLocal_184[iVar3]))
																{
																	uLocal_184[iVar3] = GlobalFunc_6829(iLocal_113[iVar3], 1, 145);
																}
																iLocal_140[iVar3] = 1;
															}
														}
													}
													if (!iLocal_143[iVar3])
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174, 0))
														{
															if (!PED::IS_PED_INJURED(iLocal_113[iVar3]))
															{
																if ((PED::IS_PED_INJURED(iLocal_183) || VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_174, -1)) || FIRE::IS_ENTITY_ON_FIRE(iLocal_113[iVar3]))
																{
																	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_113[iVar3], 1);
																	TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
																	TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																	TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																	TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
																	TASK::TASK_PERFORM_SEQUENCE(iLocal_113[iVar3], uLocal_151);
																	TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
																	PED::SET_PED_KEEP_TASK(iLocal_113[iVar3], 1);
																	if (!PED::IS_PED_INJURED(iLocal_183))
																	{
																		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_183, 1);
																		TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
																		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																		TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
																		TASK::TASK_PERFORM_SEQUENCE(iLocal_183, uLocal_151);
																		TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
																		PED::SET_PED_KEEP_TASK(iLocal_183, 1);
																	}
																	if (!HUD::DOES_BLIP_EXIST(uLocal_191))
																	{
																		if (HUD::DOES_BLIP_EXIST(uLocal_190))
																		{
																			HUD::REMOVE_BLIP(&uLocal_190);
																		}
																		if (!HUD::DOES_BLIP_EXIST(uLocal_184[iVar3]))
																		{
																			uLocal_184[iVar3] = GlobalFunc_6829(iLocal_113[iVar3], 1, 145);
																		}
																	}
																	iLocal_143[iVar3] = 1;
																}
															}
														}
														else
														{
															if (!PED::IS_PED_INJURED(iLocal_113[iVar3]))
															{
																ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_113[iVar3], 1);
																TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
																TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
																TASK::TASK_PERFORM_SEQUENCE(iLocal_113[iVar3], uLocal_151);
																TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
																PED::SET_PED_KEEP_TASK(iLocal_113[iVar3], 1);
															}
															if (!PED::IS_PED_INJURED(iLocal_183))
															{
																ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_183, 1);
																TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
																TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
																TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
																TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
																TASK::TASK_PERFORM_SEQUENCE(iLocal_183, uLocal_151);
																TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
																PED::SET_PED_KEEP_TASK(iLocal_183, 1);
															}
															if (!HUD::DOES_BLIP_EXIST(uLocal_191))
															{
																if (HUD::DOES_BLIP_EXIST(uLocal_190))
																{
																	HUD::REMOVE_BLIP(&uLocal_190);
																}
																if (!HUD::DOES_BLIP_EXIST(uLocal_184[iVar3]))
																{
																	uLocal_184[iVar3] = GlobalFunc_6829(iLocal_113[iVar3], 1, 145);
																}
																iLocal_143[iVar3] = 1;
															}
														}
													}
													iVar3++;
												}
											}
											if (bLocal_160)
											{
												if (func_105())
												{
													func_104();
													func_101();
													iLocal_46 = 9;
												}
											}
										}
										else if (iLocal_48 == 2)
										{
											if (PED::IS_PED_INJURED(iLocal_113[0]))
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_184[0]))
												{
													GlobalFunc_200(&uLocal_231, 3);
													HUD::REMOVE_BLIP(&(uLocal_184[0]));
												}
											}
											if (PED::IS_PED_INJURED(iLocal_113[1]))
											{
												if (HUD::DOES_BLIP_EXIST(uLocal_184[1]))
												{
													GlobalFunc_200(&uLocal_231, 4);
													HUD::REMOVE_BLIP(&(uLocal_184[1]));
												}
											}
											if (PED::IS_PED_INJURED(iLocal_113[0]))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
												{
													if (ENTITY::IS_ENTITY_ATTACHED(iLocal_166))
													{
														ENTITY::DETACH_ENTITY(iLocal_166, 1, 1);
													}
													OBJECT::DELETE_OBJECT(&iLocal_166);
													func_104();
													func_101();
													iLocal_46 = 9;
												}
											}
											else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_113[0], PLAYER::PLAYER_PED_ID(), 1))
											{
												if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
												{
													if (ENTITY::IS_ENTITY_ATTACHED(iLocal_166))
													{
														ENTITY::DETACH_ENTITY(iLocal_166, 1, 1);
													}
													OBJECT::DELETE_OBJECT(&iLocal_166);
													func_104();
													func_101();
													iLocal_46 = 9;
												}
											}
										}
										break;
									
									case 3:
										func_141();
										break;
									
									case 9:
										func_140();
										func_98();
										break;
									
									case 10:
										GlobalFunc_5214(2);
										GlobalFunc_4715(uLocal_192, &uLocal_228);
										if (iLocal_48 == 1)
										{
											if (!iLocal_159)
											{
												STREAMING::REQUEST_ANIM_DICT("random@robbery");
												if (!STREAMING::HAS_ANIM_DICT_LOADED("random@robbery"))
												{
													STREAMING::REQUEST_ANIM_DICT("random@robbery");
												}
												else if (!PED::IS_PED_INJURED(iLocal_116[0]))
												{
													ENTITY::SET_ENTITY_COORDS(iLocal_116[0], -818.5553f, -185.4815f, 36.5689f, 1, 0, 0, 1);
													ENTITY::SET_ENTITY_HEADING(iLocal_116[0], 47.0582f);
													TASK::TASK_PLAY_ANIM(iLocal_116[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, 0, 0, 0);
													if (!PED::IS_PED_INJURED(iLocal_116[1]))
													{
														TASK::TASK_SMART_FLEE_COORD(iLocal_116[1], Local_102, 150f, -1, 0, 0);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[1], 0);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_116[1]));
													}
													if (!PED::IS_PED_INJURED(iLocal_116[2]))
													{
														TASK::TASK_SMART_FLEE_COORD(iLocal_116[2], Local_102, 150f, -1, 0, 0);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[2], 0);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_116[2]));
													}
													iVar4 = 0;
													while (iVar4 <= (iLocal_112 - 1))
													{
														if (!PED::IS_PED_INJURED(iLocal_120[iVar4]))
														{
															TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
															TASK::TASK_PLAY_ANIM(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
															TASK::TASK_SMART_FLEE_COORD(0, Local_102, 150f, -1, 0, 0);
															TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
															TASK::TASK_PERFORM_SEQUENCE(iLocal_120[iVar4], uLocal_151);
															TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
															PED::SET_PED_KEEP_TASK(iLocal_120[iVar4], 1);
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_120[iVar4], 0);
															PED::SET_PED_CAN_BE_TARGETTED(iLocal_120[iVar4], 1);
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_120[iVar4]));
														}
														iVar4++;
													}
													iLocal_159 = 1;
												}
											}
											func_70(6, 3);
											func_70(7, 3);
										}
										else if (iLocal_48 == 2)
										{
											if (!iLocal_159)
											{
												STREAMING::REQUEST_ANIM_DICT("random@robbery");
												if (!STREAMING::HAS_ANIM_DICT_LOADED("random@robbery"))
												{
													STREAMING::REQUEST_ANIM_DICT("random@robbery");
												}
												else if (!PED::IS_PED_INJURED(iLocal_116[0]))
												{
													ENTITY::SET_ENTITY_COORDS(iLocal_116[0], -1197.455f, -776.0289f, 16.3254f, 1, 0, 0, 1);
													ENTITY::SET_ENTITY_HEADING(iLocal_116[0], 205.7753f);
													TASK::TASK_PLAY_ANIM(iLocal_116[0], "random@robbery", "stand_worried_female", 8f, -8f, -1, 9, 0f, 0, 0, 0);
													if (!PED::IS_PED_INJURED(iLocal_116[1]))
													{
														TASK::TASK_SMART_FLEE_COORD(iLocal_116[1], Local_102, 150f, -1, 0, 0);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[1], 0);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_116[1]));
													}
													if (!PED::IS_PED_INJURED(iLocal_116[2]))
													{
														TASK::TASK_SMART_FLEE_COORD(iLocal_116[2], Local_102, 150f, -1, 0, 0);
														PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[2], 0);
														ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_116[2]));
													}
													iVar5 = 0;
													while (iVar5 <= (iLocal_112 - 1))
													{
														if (!PED::IS_PED_INJURED(iLocal_120[iVar5]))
														{
															TASK::TASK_SMART_FLEE_COORD(iLocal_120[iVar5], Local_102, 150f, -1, 0, 0);
															PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_120[iVar5], 0);
															PED::SET_PED_CAN_BE_TARGETTED(iLocal_120[iVar5], 1);
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_120[iVar5]));
														}
														iVar5++;
													}
													iLocal_159 = 1;
												}
											}
											if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(-1201.43f, -776.86f, 17.99f, 6f, joaat("v_ilev_clothmiddoor"), 0))
											{
												OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_clothmiddoor"), -1201.43f, -776.86f, 17.99f, 0, 0f, 0);
											}
										}
										if (func_160())
										{
										}
										if ((func_156() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
										{
											SYSTEM::SETTIMERA(0);
											iLocal_46 = 11;
										}
										if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_236()) > (fLocal_196 + 150f))
										{
											iLocal_46 = 12;
										}
										if (SYSTEM::TIMERA() > 120000)
										{
											iLocal_46 = 14;
										}
										if (PED::IS_PED_INJURED(iLocal_116[0]))
										{
											GlobalFunc_4702(2);
											func_48();
										}
										else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_116[0], PLAYER::PLAYER_PED_ID(), 1))
										{
											GlobalFunc_4702(2);
											func_48();
										}
										break;
									
									case 11:
										func_1();
										break;
									
									case 12:
										GlobalFunc_4702(2);
										func_48();
										break;
									
									case 7:
										func_48();
										break;
									
									case 14:
										GlobalFunc_4702(2);
										func_48();
										break;
									
									case 13:
										if (!iLocal_224)
										{
											if (!PED::IS_PED_INJURED(iLocal_116[0]))
											{
												TASK::CLEAR_PED_TASKS(iLocal_116[0]);
												if (iLocal_48 == 1)
												{
													GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_LSTH", 4, 0, 0, 0);
												}
												else if (iLocal_48 == 2)
												{
													GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_CLLOST", 4, 0, 0, 0);
												}
												TASK::TASK_USE_MOBILE_PHONE_TIMED(iLocal_116[0], 20000);
												PED::SET_PED_KEEP_TASK(iLocal_116[0], 1);
												PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[0], 0);
												iLocal_224 = 1;
											}
										}
										if (!GlobalFunc_111())
										{
											iLocal_45 = 2;
										}
										break;
								}
								break;
							
							case 2:
								func_148();
								break;
						}
						break;
					}
			}
		}
		else
		{
			func_222();
		}
	}
}

void func_1()//Position - 0x121C
{
	if (func_156())
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_192))
		{
			HUD::REMOVE_BLIP(&uLocal_192);
		}
		if (!iLocal_181)
		{
			if (!PED::IS_PED_INJURED(iLocal_116[0]))
			{
				GlobalFunc_8316(1, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				HUD::CLEAR_HELP(1);
				MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(iLocal_116[0], 1), 20f, 0);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				if (iLocal_48 == 1)
				{
					bLocal_180 = true;
				}
				else if (iLocal_48 == 2)
				{
				}
				iLocal_181 = 1;
			}
		}
	}
	if (!bLocal_180)
	{
		if (!PED::IS_PED_INJURED(iLocal_116[0]))
		{
			bLocal_180 = true;
		}
	}
	if (bLocal_180)
	{
		if (!iLocal_182)
		{
			WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			if (HUD::DOES_BLIP_EXIST(uLocal_192))
			{
				HUD::REMOVE_BLIP(&uLocal_192);
			}
			Local_197 = { ENTITY::GET_ENTITY_COORDS(iLocal_116[0], 0) };
			if (iLocal_48 == 1)
			{
				Local_197 = { -820.77f, -186.514f, 36.569f };
				Local_203 = { 0f, 0f, -60f };
				fLocal_216 = 0.855f;
				sLocal_210 = "random@robbery";
				sLocal_211 = "return_bag_stand_b";
				sLocal_212 = "return_bag_stand_b_female";
				sLocal_213 = "return_bag_stand_b_bag";
				sLocal_214 = "return_bag_stand_b_cam";
			}
			else if (iLocal_48 == 2)
			{
				Local_197 = { -1198.295f, -776.533f, 16.326f };
				Local_203 = { 0f, 0f, -60.25f };
				fLocal_216 = 0.785f;
				sLocal_210 = "random@robbery";
				sLocal_211 = "return_bag_stand_c_rt";
				sLocal_212 = "return_bag_stand_c_rt_female";
				sLocal_213 = "return_bag_stand_c_rt_bag";
				sLocal_214 = "return_bag_stand_c_rt_cam";
			}
			uLocal_215 = PED::CREATE_SYNCHRONIZED_SCENE(Local_197, Local_203, 2);
			uLocal_209 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_209, uLocal_215, sLocal_214, sLocal_210);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_215, sLocal_210, sLocal_211, 1000f, -2f, 5, 0, 1148846080, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_116[0]);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_116[0], uLocal_215, sLocal_210, sLocal_212, 1000f, -2f, 4, 0, 1148846080, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_116[0], 0, 0);
			iLocal_166 = OBJECT::CREATE_OBJECT(joaat("prop_cs_duffel_01"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
			ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_166, uLocal_215, sLocal_213, sLocal_210, 1000f, 1090519040, 0, 1148846080);
			if (!PED::IS_PED_INJURED(iLocal_116[0]))
			{
				func_47();
				CAM::SET_CAM_ACTIVE(uLocal_209, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_182 = 1;
			}
		}
	}
	if ((SYSTEM::TIMERA() > 1500 && iLocal_182) && !iLocal_157)
	{
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		if (iLocal_48 == 1)
		{
			GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_TKH", 4, 0, 0, 0);
		}
		else if (iLocal_48 == 2)
		{
			GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_CLDISC", 4, 0, 0, 0);
		}
		iLocal_157 = 1;
	}
	if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_215) > fLocal_216 && iLocal_182)
	{
		if (!PED::IS_PED_INJURED(iLocal_116[0]))
		{
			PED::SET_PED_MONEY(iLocal_116[0], iLocal_188);
			TASK::CLEAR_PED_TASKS(iLocal_116[0]);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
			TASK::TASK_PLAY_ANIM(0, "random@robbery", "stand_worried_female", 2f, -2f, -1, 1, 0f, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_116[0], uLocal_151);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
			PED::SET_PED_KEEP_TASK(iLocal_116[0], 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
		{
			OBJECT::DELETE_OBJECT(&iLocal_166);
		}
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 650, 0, 1, 0);
		GlobalFunc_8316(0, 1, 1, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 4);
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
		CAM::DESTROY_CAM(uLocal_209, 0);
		func_44();
		GlobalFunc_183(joaat("rc_wallets_returned"), 1);
		if (iLocal_48 == 1)
		{
			GlobalFunc_10834(GlobalFunc_8329(), 1, iLocal_188);
			func_2(0, GlobalFunc_8329(), 1);
		}
		else if (iLocal_48 == 2)
		{
			GlobalFunc_10834(GlobalFunc_8329(), 1, iLocal_188);
			func_2(14, GlobalFunc_8329(), 1);
		}
		GlobalFunc_4702(3);
		func_48();
	}
}

void func_2(int iParam0, int iParam1, bool bParam2)//Position - 0x15F8
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 5;
			break;
		
		case 1:
			iVar0 = 7;
			break;
		
		case 2:
			iVar0 = 6;
			break;
		
		default:
			return;
			break;
	}
	if (bParam2)
	{
		if (!GlobalFunc_7702(iParam0, iVar0, 0))
		{
			GlobalFunc_7966(iParam0, iVar0, 0);
		}
	}
	else if (GlobalFunc_7702(iParam0, iVar0, 0))
	{
		GlobalFunc_7965(iParam0, iVar0, 0);
	}
}










































void func_44()//Position - 0x2BD4
{
	if (iLocal_48 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_116[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_116[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[0], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_116[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_116[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_116[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[1], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_116[1]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_120[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_120[0], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_120[0]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_120[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_120[1], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_120[1]));
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[2]))
		{
			if (!PED::IS_PED_INJURED(iLocal_120[2]))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_120[2], -820.424f, -181.9059f, 36.5687f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_120[2], 167.7909f);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_120[2], 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_120[2]));
			}
		}
	}
}



void func_47()//Position - 0x2D19
{
	if (iLocal_48 == 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f, 8f, 8f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -823.1281f, -187.9591f, 36.6189f, 8f, 8f, 8f, 0, 1, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -831.9709f, -192.0823f, 36.5008f, 0, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
			}
		}
		MISC::CLEAR_AREA(-823.1281f, -187.9591f, 36.6189f, 3f, 1, 0, 0, 0);
	}
	else if (iLocal_48 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 8f, 8f, 8f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1201.017f, -777.5527f, 16.3398f, 8f, 8f, 8f, 0, 1, 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1205.936f, -781.2014f, 16.0088f, 0, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
			}
		}
		MISC::CLEAR_AREA(-1201.017f, -777.5527f, 16.3398f, 8f, 1, 0, 0, 0);
	}
}

void func_48()//Position - 0x2E6E
{
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
	func_52(5, iLocal_133);
	GlobalFunc_7068();
	func_222();
}




void func_52(int iParam0, int iParam1)//Position - 0x2F21
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


















void func_70(int iParam0, int iParam1)//Position - 0x42B5
{
	int iVar0;
	
	if (iParam0 != 225)
	{
		if (Global_68245)
		{
			iVar0 = Global_2422140.f_73[iParam0];
		}
		else
		{
			iVar0 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
		}
		if (iVar0 != iParam1 || MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
				Global_31257[iParam0] = iParam1;
			}
			else if (Global_68245)
			{
				Global_2422140.f_73[iParam0] = iParam1;
			}
			else
			{
				Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			func_72(iParam0);
			if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
			{
				GlobalFunc_510(iParam0);
			}
		}
	}
}


void func_72(int iParam0)//Position - 0x43FC
{
	struct<7> Var0;
	bool bVar7;
	bool bVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	
	if (!GlobalFunc_4921())
	{
		return;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	Var0 = { GlobalFunc_511(iParam0) };
	if (MISC::IS_BIT_SET(Var0.f_4, 2))
	{
		GlobalFunc_8379(iParam0, &Var0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar7 = false;
	bVar8 = false;
	fVar10 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
	if ((MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] == 2) && fVar10 > 210f)
	{
		MISC::CLEAR_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
		Global_30805[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (MISC::IS_BIT_SET(Global_31031[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar10 < 25f)
			{
				if (Global_90014.f_288 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						Global_90014.f_288 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
					}
				}
				iVar11 = Global_90014.f_288;
				iVar12 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar11 == iVar12 && iVar11 != 0)
				{
					MISC::SET_BIT(&(Global_30796[(iParam0 / 32)]), (iParam0 % 32));
					Global_31257[iParam0] = 3;
					MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			MISC::CLEAR_BIT(&(Global_31031[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar9 = Global_31257[iParam0];
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 0))
	{
		if (Global_SAVE_DATA.isGameflowActive)
		{
			iVar9 = GlobalFunc_9149(iParam0);
		}
		else
		{
			iVar9 = 0;
		}
		if (GlobalFunc_39(14))
		{
			iVar9 = 0;
		}
	}
	else if (MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (GlobalFunc_9148())
		{
			iVar9 = 0;
		}
		else
		{
			iVar9 = 1;
		}
	}
	else
	{
		iVar9 = Global_SAVE_DATA.BUILDING_SAVED_DATA_STRUCT[iParam0];
	}
	if (Global_31483[iParam0] != iVar9)
	{
		bVar7 = true;
	}
	if (MISC::IS_BIT_SET(Global_30787[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) || (Global_30805[iParam0] == 0 && Global_31257[iParam0] != 2))
		{
			bVar7 = true;
		}
	}
	if (bVar7)
	{
		if (!Global_30786)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar9)
			{
				case 1:
					if (MISC::IS_BIT_SET(Var0.f_4, 3))
					{
						bVar13 = true;
					}
					else if (fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <= 0.015f)
					{
						iVar14 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						iVar15 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar14 != iVar15 || iVar14 == 0)
						{
							bVar13 = true;
						}
					}
					if (bVar13)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
						bVar8 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, 0, 1);
					bVar8 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, 0, 1);
					bVar8 = true;
					break;
				}
		}
		if (bVar8)
		{
			MISC::CLEAR_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
			Global_31483[iParam0] = iVar9;
		}
	}
	if (MISC::IS_BIT_SET(Global_30796[(iParam0 / 32)], (iParam0 % 32)) && Global_31257[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_30787[(iParam0 / 32)]), (iParam0 % 32));
		GlobalFunc_510(iParam0);
		if (Global_30805[iParam0] < 2)
		{
			Global_30805[iParam0]++;
		}
	}
}


























void func_98()//Position - 0x86E0
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_109))
	{
		GlobalFunc_183(joaat("rc_wallets_recovered"), 1);
		if (!PED::IS_PED_INJURED(iLocal_116[0]))
		{
			uLocal_192 = GlobalFunc_6829(iLocal_116[0], 0, 145);
		}
		GlobalFunc_4713(&uLocal_228);
		fLocal_196 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_236());
		SYSTEM::SETTIMERA(0);
		iLocal_46 = 10;
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_109))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uLocal_109)) > 200f)
		{
			func_148();
		}
	}
}



void func_101()//Position - 0x878C
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(uLocal_109))
	{
		MISC::SET_BIT(&uLocal_105, 3);
		MISC::SET_BIT(&uLocal_105, 4);
		MISC::SET_BIT(&uLocal_105, 1);
		if (!bLocal_160)
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_113[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_113[0]))
				{
					Local_106 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_113[0], 1067030938, 1069547520) };
				}
			}
			else
			{
				Local_106 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_113[0], 1), 1067030938, 1069547520) };
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
		{
			Local_106 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_174, 0), 1067030938, 1069547520) };
		}
		Local_106 = { Local_106.x, Local_106.f_1, (Local_106.f_2 + 0.25f) };
		uLocal_109 = OBJECT::CREATE_PICKUP(joaat("pickup_money_med_bag"), Local_106, uLocal_105, iLocal_188, 1, joaat("prop_cs_duffel_01"));
		uLocal_191 = GlobalFunc_5666(uLocal_109);
		if (iLocal_48 == 1)
		{
			iVar0 = 0;
			while (iVar0 <= (iLocal_110 - 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_113[iVar0]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_113[iVar0], 1);
					TASK::CLEAR_PED_TASKS(iLocal_113[iVar0]);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_113[iVar0], uLocal_151);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
					PED::SET_PED_KEEP_TASK(iLocal_113[iVar0], 1);
				}
				iVar0++;
			}
		}
		else if (iLocal_48 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_113[0]))
			{
				TASK::CLEAR_PED_SECONDARY_TASK(iLocal_113[0]);
				if (!TASK::IS_PED_IN_WRITHE(iLocal_113[0]))
				{
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_DRP", 4, 0, 0, 0);
				}
			}
		}
	}
}



void func_104()//Position - 0x8976
{
	if (HUD::DOES_BLIP_EXIST(uLocal_191))
	{
		HUD::REMOVE_BLIP(&uLocal_191);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_192))
	{
		HUD::REMOVE_BLIP(&uLocal_192);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_190))
	{
		HUD::REMOVE_BLIP(&uLocal_190);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_184[0]))
	{
		HUD::REMOVE_BLIP(&(uLocal_184[0]));
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_184[1]))
	{
		HUD::REMOVE_BLIP(&(uLocal_184[1]));
	}
}

int func_105()//Position - 0x89D5
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_113[0]))
	{
		iLocal_148 = 1;
	}
	else if (PED::IS_PED_INJURED(iLocal_113[0]))
	{
		iLocal_148 = 1;
	}
	if (!bLocal_160)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_113[1]))
		{
			iLocal_149 = 1;
		}
		else if (PED::IS_PED_INJURED(iLocal_113[1]))
		{
			iLocal_149 = 1;
		}
	}
	else
	{
		iLocal_149 = 1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_183))
	{
		iLocal_150 = 1;
	}
	else if (PED::IS_PED_INJURED(iLocal_183) || !PED::IS_PED_IN_ANY_VEHICLE(iLocal_183, 0))
	{
		iLocal_150 = 1;
	}
	if ((iLocal_148 && iLocal_149) || iLocal_150)
	{
		return 1;
	}
	return 0;
}

int func_106()//Position - 0x8A70
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_113[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_113[iVar0]) || ENTITY::IS_ENTITY_DEAD(iLocal_113[iVar0]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_113[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_113[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_113[iVar0]))
			{
				if (PED::IS_PED_BEING_JACKED(iLocal_113[iVar0]))
				{
					if (PED::GET_PEDS_JACKER(iLocal_113[iVar0]) == PLAYER::PLAYER_PED_ID())
					{
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_113[iVar0], 1);
						TASK::TASK_SMART_FLEE_PED(iLocal_113[iVar0], PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_113[iVar0], 1);
						SYSTEM::WAIT(0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_113[iVar0]));
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_183))
	{
		if (!PED::IS_PED_INJURED(iLocal_183) || ENTITY::IS_ENTITY_DEAD(iLocal_183))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_183, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_183))
		{
			if (PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), joaat("weapon_stungun")))
			{
				return 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_183))
	{
		if (!PED::IS_PED_INJURED(iLocal_183))
		{
			if (PED::IS_PED_BEING_JACKED(iLocal_183))
			{
				if (PED::GET_PEDS_JACKER(iLocal_183) == PLAYER::PLAYER_PED_ID())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_183, 1);
					TASK::TASK_SMART_FLEE_PED(iLocal_183, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_183, 1);
					SYSTEM::WAIT(0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_183);
					return 1;
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_174) || ENTITY::IS_ENTITY_DEAD(iLocal_174))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_174, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}



int func_109()//Position - 0x8CEB
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_113[0]))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_113[0], iLocal_174, 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_113[1]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_113[1], iLocal_174, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_110()//Position - 0x8D3A
{
	if (PED::IS_PED_INJURED(iLocal_113[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_166))
			{
				ENTITY::DETACH_ENTITY(iLocal_166, 1, 1);
			}
			OBJECT::DELETE_OBJECT(&iLocal_166);
			func_104();
			func_101();
			iLocal_46 = 9;
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_113[0], PLAYER::PLAYER_PED_ID(), 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_166))
			{
				ENTITY::DETACH_ENTITY(iLocal_166, 1, 1);
			}
			OBJECT::DELETE_OBJECT(&iLocal_166);
			func_104();
			func_101();
			iLocal_46 = 9;
		}
	}
}


























int func_136()//Position - 0x987B
{
	if (!PED::IS_PED_INJURED(iLocal_113[0]) && !PED::IS_PED_INJURED(iLocal_113[1]))
	{
		if (iLocal_48 == 1)
		{
			if (!iLocal_164)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_113[0], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, 1, 0))
				{
					iLocal_164 = 1;
				}
			}
			if (!iLocal_165)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_113[1], -823.5066f, -187.3465f, 40.36355f, -803.6377f, -175.9496f, 36.4337f, 11.9375f, 0, 1, 0))
				{
					iLocal_165 = 1;
				}
			}
		}
		else if (iLocal_48 == 2)
		{
			if (!iLocal_164)
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_113[0], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_113[0], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_113[0], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_113[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					iLocal_164 = 1;
				}
			}
			if (!iLocal_165)
			{
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_113[1], -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_113[1], -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_113[1], -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_113[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					iLocal_165 = 1;
				}
			}
		}
	}
	if (iLocal_164 && iLocal_165)
	{
		return 1;
	}
	return 0;
}

void func_137()//Position - 0x9AAD
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_166, 1) };
	Var3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_166, 2) };
	OBJECT::DELETE_OBJECT(&iLocal_166);
	iLocal_166 = OBJECT::CREATE_OBJECT(joaat("prop_cs_duffel_01"), Var0, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_166, Var3, 2, 1);
}

void func_138()//Position - 0x9AEF
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_113[0]))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_113[0], 0)) > 200f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_113[0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_184[0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_184[0]));
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_113[0]));
			bLocal_146 = true;
		}
	}
	else
	{
		bLocal_146 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_174, 0)) > 200f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_174))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_190))
			{
				HUD::REMOVE_BLIP(&uLocal_190);
			}
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_174);
			bLocal_147 = true;
		}
	}
	else
	{
		bLocal_147 = true;
	}
	if (bLocal_160)
	{
		if (bLocal_147)
		{
			if (func_156())
			{
				iLocal_46 = 13;
			}
			else
			{
				SYSTEM::WAIT(0);
				iLocal_45 = 2;
			}
		}
	}
	else if (bLocal_146)
	{
		SYSTEM::WAIT(0);
		if (func_156())
		{
			iLocal_46 = 13;
		}
		else
		{
			iLocal_45 = 2;
		}
	}
}

void func_139()//Position - 0x9BE5
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_174))
	{
		if (ENTITY::GET_ENTITY_HEALTH(iLocal_174) < 800)
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_174, 0);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_174, 10f);
		}
	}
}

void func_140()//Position - 0x9C15
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_113[iVar0]))
		{
			if (PED::IS_PED_INJURED(iLocal_113[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_184[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_184[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_141()//Position - 0x9C63
{
	int iVar0;
	int iVar1;
	
	if (iLocal_48 == 1)
	{
		if (PED::IS_PED_INJURED(iLocal_113[0]) && PED::IS_PED_INJURED(iLocal_113[1]))
		{
			iLocal_46 = 7;
		}
	}
	else if (iLocal_48 == 2)
	{
		if (PED::IS_PED_INJURED(iLocal_113[0]) && PED::IS_PED_INJURED(iLocal_113[1]))
		{
			iLocal_46 = 7;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_113)
	{
		if (PED::IS_PED_INJURED(iLocal_113[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_184[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_184[iVar0]));
			}
		}
		iVar0++;
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_139)
		{
			iVar1 = 0;
			while (iVar1 <= (iLocal_110 - 1))
			{
				if (!PED::IS_PED_INJURED(iLocal_113[iVar1]))
				{
					TASK::TASK_COMBAT_PED(iLocal_113[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				iVar1++;
			}
			bLocal_139 = true;
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_166))
			{
				iLocal_46 = 5;
			}
		}
	}
	if (!iLocal_153 && !bLocal_139)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RE51A_SHOP");
		GlobalFunc_4956();
		SYSTEM::WAIT(0);
		if (iLocal_48 == 1)
		{
			if (GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_GD2", 4, 0, 0, 0))
			{
				iLocal_153 = 1;
			}
		}
		else if (iLocal_48 == 2)
		{
			if (GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_GD", 4, 0, 0, 0))
			{
				iLocal_153 = 1;
			}
		}
	}
	if ((iLocal_153 && !iLocal_154) && !bLocal_139)
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_8329() == 0)
			{
				GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_MDS", 4, 0, 0, 0);
			}
			else if (GlobalFunc_8329() == 1)
			{
				GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_FC", 4, 0, 0, 0);
			}
			else if (GlobalFunc_8329() == 2)
			{
				GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_TP", 4, 0, 0, 0);
			}
			iLocal_154 = 1;
		}
	}
	if (!bLocal_139)
	{
		if (!GlobalFunc_111())
		{
			if (iLocal_154 && !iLocal_155)
			{
				if (iLocal_48 == 1)
				{
					if (GlobalFunc_10726(&uLocal_231, "REROBAU", "REROB_CH2", "REROB_CH2_3", 4, 0, 0))
					{
						iLocal_155 = 1;
					}
				}
				else if (iLocal_48 == 2)
				{
					if (GlobalFunc_10726(&uLocal_231, "REROBAU", "REROB_CH", "REROB_CH_3", 4, 0, 0))
					{
						iLocal_155 = 1;
					}
				}
			}
		}
		if (iLocal_48 == 1)
		{
			if (!GlobalFunc_111())
			{
				if (!iLocal_156)
				{
					if (iLocal_48 == 1)
					{
						GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_LV2", 4, 0, 0, 0);
					}
					else if (iLocal_48 == 2)
					{
						GlobalFunc_10652(&uLocal_231, "REROBAU", "REROB_LV", 4, 0, 0, 0);
					}
					iLocal_156 = 1;
				}
			}
		}
		else if (iLocal_48 == 2)
		{
			if (SYSTEM::TIMERA() > 4000)
			{
				if (!iLocal_156)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
					{
						if (!PED::IS_PED_INJURED(iLocal_116[0]))
						{
							iLocal_156 = 1;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_166) && !PED::IS_PED_INJURED(iLocal_113[0]))
			{
				if (!iLocal_177)
				{
					iLocal_177 = 1;
				}
			}
		}
		if (!iLocal_137)
		{
			if (iLocal_48 == 1)
			{
				if (SYSTEM::TIMERA() > 14100)
				{
					OBJECT::DELETE_OBJECT(&(uLocal_167[0]));
					OBJECT::DELETE_OBJECT(&(uLocal_167[1]));
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_174, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_113[0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_113[0]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_174, -1, 0, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_113[0], uLocal_151);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
						}
						if (!PED::IS_PED_INJURED(iLocal_113[1]))
						{
							PED::FORCE_PED_MOTION_STATE(iLocal_113[1], -530524, 1, 0, 0);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_174, -1, 1, 2f, 1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_113[1], uLocal_151);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
						}
						iLocal_46 = 2;
						iLocal_137 = 1;
					}
					else
					{
						if (!PED::IS_PED_INJURED(iLocal_113[0]))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_113[0], 1);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_113[0]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_113[0], uLocal_151);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
						}
						if (!PED::IS_PED_INJURED(iLocal_113[1]))
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_113[1], 1);
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_113[1]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_113[1], uLocal_151);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
						}
						iLocal_46 = 2;
						iLocal_137 = 1;
					}
				}
			}
			else if (iLocal_48 == 2)
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_215) > 0.453f)
				{
					if (!PED::IS_PED_INJURED(iLocal_116[0]))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[0], 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
						TASK::TASK_PLAY_ANIM(0, "random@robbery", "f_distressed_loop", 2f, -2f, -1, 9, 0f, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_116[0], uLocal_151);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
						PED::SET_PED_KEEP_TASK(iLocal_116[0], 1);
					}
					if (!PED::IS_PED_INJURED(iLocal_113[0]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_113[0]);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_113[0], 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_113[0], 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_113[0], 17, 1);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_113[0], 1.6f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_113[0], 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
						TASK::TASK_PLAY_ANIM(0, "random@robbery", "run", 2f, -2f, -1, 49, 0f, 0, 0, 0);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_shoprobbery", 0, 0, 16);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_113[0], uLocal_151);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
						PED::SET_PED_KEEP_TASK(iLocal_113[0], 1);
						SYSTEM::SETTIMERB(0);
					}
					if (!PED::IS_PED_INJURED(iLocal_113[1]))
					{
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_113[1], 128, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_113[1], 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_113[1], 17, 1);
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_113[1], 1.6f);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_113[1], 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(0, "re_shoprobbery2", 0, 0, 17);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_113[1], uLocal_151);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
						PED::SET_PED_KEEP_TASK(iLocal_113[1], 1);
					}
					iLocal_46 = 2;
					iLocal_137 = 1;
				}
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		}
	}
}

void func_142()//Position - 0xA223
{
	switch (iLocal_226)
	{
		case 0:
			GlobalFunc_8316(1, 1, 1, 0);
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_271(PLAYER::PLAYER_ID()), 10f, 0);
			uLocal_225 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
			CAM::SET_CAM_ACTIVE(uLocal_225, 1);
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_225, uLocal_215, "robbery_action_cam", "random@shop_robbery");
			if (iLocal_48 == 1)
			{
				INTERIOR::_0xAF348AFCB575A441("Hair_room");
			}
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			iLocal_227 = MISC::GET_GAME_TIMER() + 3500;
			iLocal_226++;
			break;
		
		case 1:
			if (iLocal_227 < MISC::GET_GAME_TIMER())
			{
				if (iLocal_48 == 1)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(115f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-9.1222f, 1065353216);
				}
				else if (iLocal_48 == 2)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(44.5236f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-18.1582f, 1065353216);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
				CAM::SET_CAM_ACTIVE(uLocal_225, 0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				func_47();
				GlobalFunc_8316(0, 1, 1, 0);
				iLocal_226++;
			}
			break;
		
		case 2:
			break;
	}
}


void func_144()//Position - 0xA334
{
	int iVar0;
	
	if (!iLocal_135 && GlobalFunc_552(1, 0, 1))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_192))
		{
			HUD::REMOVE_BLIP(&uLocal_192);
		}
		GlobalFunc_8316(1, 1, 1, 0);
		HUD::CLEAR_HELP(1);
		HUD::DISPLAY_HUD(0);
		HUD::DISPLAY_RADAR(0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
		WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		if (iLocal_48 == 1)
		{
			if (!iLocal_176)
			{
				uLocal_215 = PED::CREATE_SYNCHRONIZED_SCENE(Local_200, Local_206, 2);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_215, "random@shop_robbery", "robbery_action_p", 8f, -8f, 1, 0, 1148846080, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				if (((!PED::IS_PED_INJURED(iLocal_113[0]) && !PED::IS_PED_INJURED(iLocal_113[1])) && !PED::IS_PED_INJURED(iLocal_116[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_166))
				{
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_113[0], uLocal_215, "random@shop_robbery", "robbery_action_b", 8f, -8f, 1, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_113[1], uLocal_215, "random@shop_robbery", "robbery_action_a", 8f, -8f, 1, 0, 1148846080, 0);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_action_f", 8f, -4f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_166, uLocal_215, "robbery_action_bag", "random@shop_robbery", 8f, -8f, 0, 1148846080);
				}
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_215, 0.06f);
				iLocal_176 = 1;
			}
		}
		else if (iLocal_48 == 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_116[0]))
			{
				TASK::CLEAR_PED_TASKS(iLocal_116[0]);
				TASK::TASK_PLAY_ANIM(iLocal_116[0], "random@robbery", "robbery_main_female", 2f, -2f, -1, 0, 0f, 0, 0, 0);
			}
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(-1195.062f, -773.2098f, 16.324f, 20f, 4);
			uLocal_215 = PED::CREATE_SYNCHRONIZED_SCENE(Local_200, Local_206, 2);
			if (((!PED::IS_PED_INJURED(iLocal_113[0]) && !PED::IS_PED_INJURED(iLocal_113[1])) && !PED::IS_PED_INJURED(iLocal_116[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_166))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_113[0], uLocal_215, "random@shop_robbery", "robbery_action_b", 2f, -2f, 1, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_action_f", 2f, -2f, 0, 0, 1148846080, 0);
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_167[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_167[1]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_167[0], iLocal_116[0], PED::GET_PED_BONE_INDEX(iLocal_116[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_167[1], iLocal_116[0], PED::GET_PED_BONE_INDEX(iLocal_116[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
				}
			}
			PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_215, 0.05f);
			Local_200 = { -1199.369f, -776.1991f, 16.3235f };
			Local_206 = { 0f, 0f, -60f };
			uLocal_215 = PED::CREATE_SYNCHRONIZED_SCENE(Local_200, Local_206, 2);
			if (!PED::IS_PED_INJURED(iLocal_113[1]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_113[1], uLocal_215, "random@shop_robbery", "robbery_action_a", 2f, -2f, 1, 0, 1148846080, 0);
			}
			PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_215, 0.06f);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1200.455f, -777.6201f, 16.3244f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 305.3806f);
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
			TASK::TASK_PLAY_ANIM(0, "random@shop_robbery", "robbery_action_p", 1000f, -2f, -1, 134217736, 0.06f, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "random@shop_robbery", "kneel_loop_p", 2f, -4f, -1, 134217737, 0f, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_151);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
		iLocal_135 = 1;
	}
	if (!iLocal_175)
	{
		func_145();
	}
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_184[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_113[iVar0]))
			{
				uLocal_184[iVar0] = GlobalFunc_6829(iLocal_113[iVar0], 1, 145);
			}
		}
		iVar0++;
	}
	if ((iLocal_48 == 1 && ENTITY::DOES_ENTITY_EXIST(iLocal_174)) || iLocal_48 == 2)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_46 = 1;
	}
}

void func_145()//Position - 0xA76A
{
	int iVar0;
	
	iVar0 = joaat("baller");
	if (!iLocal_178)
	{
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			iLocal_178 = 1;
		}
		else
		{
			STREAMING::REQUEST_MODEL(iVar0);
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		if (func_146())
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_170, -828.3692f, -194.4669f, 36.41385f, -824.5801f, -201.1353f, 39.39436f, 4.3125f, 0, 1, 0))
			{
				Local_171 = { -822.1784f, -205.811f, 36.3444f };
			}
			else
			{
				Local_171 = { -826.2828f, -197.8547f, 36.3995f };
			}
		}
		else
		{
			Local_171 = { -826.2828f, -197.8547f, 36.3995f };
		}
		iLocal_174 = VEHICLE::CREATE_VEHICLE(iVar0, Local_171, 31.9252f, 1, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_174, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_174);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_174, 1, 1);
		iLocal_183 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_174, 26, joaat("g_m_y_korean_01"), -1, 1, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_183, 134, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_183, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_183, iLocal_189);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_183, 8, 0);
		PED::SET_PED_COMBAT_ABILITY(iLocal_183, 0);
		PED::SET_PED_ACCURACY(iLocal_183, 13);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_183, joaat("weapon_pistol"), -1, 1, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_183, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_183, 42, 1);
		iLocal_175 = 1;
	}
}

int func_146()//Position - 0xA8A8
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iVar0, -829.3693f, -191.9869f, 36.4616f, 15f, 15f, 5f, 0, 1, 0))
		{
			uLocal_170 = iVar0;
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_170))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_170, 1, 0);
			}
			return 1;
		}
	}
	return 0;
}


void func_148()//Position - 0xA9E1
{
	func_222();
}








int func_156()//Position - 0xAE10
{
	if (iLocal_48 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -803.4598f, -175.8135f, 36.28367f, -823.0242f, -187.0462f, 40.53547f, 11.9375f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -823.3706f, -188.0602f, 36.62162f, -822.8361f, -187.7466f, 39.06914f, 1.5f, 0, 1, 0))
		{
			return 1;
		}
	}
	else if (iLocal_48 == 2)
	{
		if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1204.031f, -779.629f, 16.33565f, -1174.799f, -757.0704f, 21.01281f, 12.125f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1203.899f, -776.9178f, 20.16803f, -1201.289f, -780.4698f, 15.61526f, 3.9375f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1206.545f, -777.8941f, 21.20355f, -1204.313f, -778.2245f, 16.08434f, 2.25f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1202.928f, -782.6883f, 21.20369f, -1202.583f, -780.5067f, 16.08243f, 2.25f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}


int func_158()//Position - 0xAFB4
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -823.1281f, -187.9591f, 36.6189f, 12f, 12f, 12f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1201.017f, -777.5527f, 16.3398f, 12f, 12f, 12f, 0, 1, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_113[0]) && !PED::IS_PED_INJURED(iLocal_113[1]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_113[0], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_113[1], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_113[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_113[1], PLAYER::PLAYER_PED_ID()))
			{
				if (((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_113[0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_113[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_113[1])) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_113[1]))
				{
					if (iLocal_125 == -1)
					{
						iLocal_125 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_125 = -1;
				}
				if (iLocal_125 != -1 && MISC::GET_GAME_TIMER() > iLocal_125 + 1500)
				{
					return 1;
				}
			}
		}
	}
	if (FIRE::IS_EXPLOSION_IN_AREA(-1, Local_193 - Vector(20f, 20f, 20f), Local_193 + Vector(20f, 20f, 20f)))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_113[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_113[1]))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_156())
	{
		return 1;
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && func_156())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(iLocal_113[0]) && !PED::IS_PED_INJURED(iLocal_113[1]))
	{
		if (((PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_113[1], 1) - Vector(12f, 12f, 12f), ENTITY::GET_ENTITY_COORDS(iLocal_113[1], 1) + Vector(12f, 12f, 12f), 0, 1) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID())) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_113[0], 1), 3f, 1)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_113[1], 1), 3f, 1))
		{
			return 1;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_116)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_116[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_116[iVar0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_120)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[iVar0]))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_120[iVar0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}


int func_160()//Position - 0xB2D4
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -823.1281f, -187.9591f, 36.6189f, 4f, 4f, 4f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1201.017f, -777.5527f, 16.3398f, 4f, 4f, 4f, 0, 1, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
		return 1;
	}
	return 0;
}

void func_161()//Position - 0xB340
{
	if (!PED::IS_PED_INJURED(iLocal_116[1]))
	{
		if (PED::IS_PED_MALE(iLocal_116[1]))
		{
			GlobalFunc_5117(iLocal_116[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
		}
		else
		{
			GlobalFunc_5117(iLocal_116[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
		}
		AUDIO::PLAY_PAIN(iLocal_116[1], 26, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_120[1]))
	{
		GlobalFunc_5117(iLocal_120[1], "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 3);
		AUDIO::PLAY_PAIN(iLocal_120[1], 3, 0, 0);
	}
}



void func_164()//Position - 0xB5CE
{
	int iVar0;
	
	PED::SET_CREATE_RANDOM_COPS(0);
	PED::ADD_RELATIONSHIP_GROUP("ROBBERS", &iLocal_189);
	iVar0 = 0;
	while (iVar0 <= (iLocal_110 - 1))
	{
		iLocal_113[iVar0] = PED::CREATE_PED(26, iLocal_221, Local_54[iVar0 /*3*/], fLocal_61[iVar0], 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_113[iVar0], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_113[iVar0], iLocal_189);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_113[iVar0], 8, 0);
		PED::SET_PED_COMBAT_ABILITY(iLocal_113[iVar0], 0);
		PED::SET_PED_ACCURACY(iLocal_113[iVar0], 13);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_113[iVar0], joaat("weapon_pistol"), -1, 1, 1);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_113[iVar0], 1, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_113[iVar0], 42, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_113[iVar0], 269, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_113[iVar0], 188, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_113[iVar0], 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_113[iVar0], 128, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_113[iVar0], 8, 1);
		iVar0++;
	}
	PED::SET_PED_NAME_DEBUG(iLocal_113[0], "pedRobber[0]");
	PED::SET_PED_NAME_DEBUG(iLocal_113[1], "pedRobber[1]");
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_189, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_189);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_189, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("COP"), iLocal_189);
	if (GlobalFunc_8329() == 0)
	{
		GlobalFunc_1286(&uLocal_231, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (GlobalFunc_8329() == 1)
	{
		GlobalFunc_1286(&uLocal_231, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else if (GlobalFunc_8329() == 2)
	{
		GlobalFunc_1286(&uLocal_231, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	iLocal_166 = OBJECT::CREATE_OBJECT(iLocal_187, Local_96, 1, 1, 0);
	if (iLocal_48 == 1)
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_127 - Vector(20f, 20f, 20f), Local_127 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("baller"), 1);
		uLocal_167[0] = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_01"), Local_96, 1, 1, 0);
		uLocal_167[1] = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_01"), Local_96 - Vector(0.1f, 0f, 0f), 1, 1, 0);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_113[0], "G_M_Y_KorLieut_01_Korean_MINI_01");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_113[1], "G_M_Y_Korean_01_Korean_MINI_02");
		Local_200 = { -821.565f, -186.467f, 36.6f };
		Local_206 = { 0f, 0f, -59.96f };
		uLocal_215 = PED::CREATE_SYNCHRONIZED_SCENE(Local_200, Local_206, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_215, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_113[1], uLocal_215, "random@shop_robbery", "robbery_intro_loop_a", 8f, -8f, 0, 0, 1148846080, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_166, uLocal_215, "robbery_intro_loop_bag", "random@shop_robbery", 1000f, 1090519040, 0, 1148846080);
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			iLocal_116[iVar0] = PED::CREATE_PED(26, iLocal_218, Local_64[iVar0 /*3*/], fLocal_74[iVar0], 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_116[iVar0], 17, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[iVar0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_116[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_116[iVar0], 269, 1);
			iVar0++;
		}
		PED::SET_PED_NAME_DEBUG(iLocal_116[0], "pedWorker[0]");
		PED::SET_PED_NAME_DEBUG(iLocal_116[1], "pedWorker[1]");
		PED::SET_PED_NAME_DEBUG(iLocal_116[2], "pedWorker[2]");
		iLocal_120[0] = PED::CREATE_PED(26, iLocal_219, Local_78[0 /*3*/], fLocal_91[0], 1, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_120[0], 17, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_120[0], 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_120[0], 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_120[0], 269, 1);
		iVar0 = 1;
		while (iVar0 <= 2)
		{
			iLocal_120[iVar0] = PED::CREATE_PED(26, iLocal_220, Local_78[iVar0 /*3*/], fLocal_91[iVar0], 1, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_120[iVar0], 17, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_120[iVar0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_120[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_120[iVar0], 269, 1);
			iVar0++;
		}
		PED::SET_PED_NAME_DEBUG(iLocal_120[0], "pedShopper[0]");
		PED::SET_PED_NAME_DEBUG(iLocal_120[1], "pedShopper[1]");
		PED::SET_PED_NAME_DEBUG(iLocal_120[2], "pedShopper[2]");
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[0], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[0], 2, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[0], 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[0], 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[0], 5, 0, 0, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_intro_loop_f", 8f, -8f, 0, 0, 1148846080, 0);
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_116[0], "A_M_Y_BevHills_01_White_Mini_01");
		GlobalFunc_1286(&uLocal_231, 5, iLocal_116[0], "REROBShopworker", 0, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[1], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[1], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[1], 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[1], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[1], 5, 0, 0, 0);
		TASK::TASK_COWER(iLocal_116[1], -1);
		PED::SET_PED_KEEP_TASK(iLocal_116[1], 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[2], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[2], 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[2], 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[2], 4, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_116[2], 5, 0, 0, 0);
		TASK::TASK_COWER(iLocal_116[2], -1);
		PED::SET_PED_KEEP_TASK(iLocal_116[2], 1);
		uLocal_215 = PED::CREATE_SYNCHRONIZED_SCENE(-812.37f, -185.65f, 37.5804f, 0f, 0f, 30f, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_215, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[0], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[0], 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[0], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[0], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[0], 8, 0, 0, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_120[0], uLocal_215, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_PED_KEEP_TASK(iLocal_120[0], 1);
		uLocal_215 = PED::CREATE_SYNCHRONIZED_SCENE(-817.5606f, -190.8273f, 37.6114f, 0f, 0f, 25.8399f, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_215, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[1], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[1], 2, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[1], 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[1], 4, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[1], 8, 0, 0, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_120[1], uLocal_215, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_PED_KEEP_TASK(iLocal_120[1], 1);
		uLocal_215 = PED::CREATE_SYNCHRONIZED_SCENE(-816.1862f, -182.897f, 37.68f, 0f, 0f, 30f, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_215, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[2], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[2], 2, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[2], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[2], 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_120[2], 8, 0, 0, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_120[2], uLocal_215, "random@robbery", "cower", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_PED_KEEP_TASK(iLocal_120[2], 1);
		TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_113[0], iLocal_116[0], -1, 0);
		PATHFIND::SET_ROADS_IN_AREA(-871f, -246f, 0f, -798f, -163f, 50f, 0, 1);
		TASK::ASSISTED_MOVEMENT_REQUEST_ROUTE("Hairdresser1");
		func_168(0, 1);
		func_167(0);
		SYSTEM::WAIT(500);
		func_165(0, 0, 0);
	}
	else if (iLocal_48 == 2)
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_130 - Vector(20f, 20f, 20f), Local_130 + Vector(20f, 20f, 20f), 0, 1, 1, 1);
		ENTITY::SET_ENTITY_ROTATION(iLocal_166, Local_99, 2, 1);
		iLocal_116[0] = PED::CREATE_PED(26, iLocal_218, Local_64[0 /*3*/], fLocal_74[0], 1, 1);
		PED::SET_PED_NAME_DEBUG(iLocal_116[0], "pedWorker[0]");
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_116[0], "A_M_Y_BeachVesp_01_White_Mini_01");
		GlobalFunc_1286(&uLocal_231, 6, iLocal_116[0], "REROBShopworker2", 0, 1);
		iLocal_116[1] = PED::CREATE_PED(26, iLocal_217, Local_64[1 /*3*/], fLocal_74[1], 1, 1);
		PED::SET_PED_NAME_DEBUG(iLocal_116[1], "pedWorker[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_116[iVar0], 17, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[iVar0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_116[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_116[iVar0], 269, 1);
			iVar0++;
		}
		iLocal_120[0] = PED::CREATE_PED(26, iLocal_219, Local_78[0 /*3*/], fLocal_91[0], 1, 1);
		PED::SET_PED_NAME_DEBUG(iLocal_120[0], "pedShopper[0]");
		iLocal_120[1] = PED::CREATE_PED(26, iLocal_220, Local_78[1 /*3*/], fLocal_91[1], 1, 1);
		PED::SET_PED_NAME_DEBUG(iLocal_120[1], "pedShopper[1]");
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_120[iVar0], 17, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_120[iVar0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_120[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_120[iVar0], 269, 1);
			iVar0++;
		}
		TASK::TASK_PLAY_ANIM(iLocal_116[0], "random@shop_robbery", "robbery_intro_loop_f", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_116[0], 1);
		TASK::TASK_PLAY_ANIM(iLocal_116[1], "random@robbery", "f_cower_02", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_116[1], 1);
		TASK::TASK_COWER(iLocal_120[0], -1);
		PED::SET_PED_KEEP_TASK(iLocal_120[0], 1);
		TASK::TASK_PLAY_ANIM(iLocal_120[1], "random@robbery", "f_cower_01", 4f, -4f, -1, 9, 0f, 0, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_120[1], 1);
		Local_200 = { -1192.01f, -768.929f, 16.358f };
		Local_206 = { 0f, 0f, -59.5f };
		uLocal_215 = PED::CREATE_SYNCHRONIZED_SCENE(Local_200, Local_206, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_215, 1);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_113[0], uLocal_215, "random@shop_robbery", "robbery_intro_loop_b", 2f, -2f, 0, 0, 1148846080, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_116[0], uLocal_215, "random@shop_robbery", "robbery_intro_loop_f", 2f, -2f, 0, 0, 1148846080, 0);
		TASK::TASK_PLAY_ANIM(iLocal_113[1], "random@shop_robbery", "robbery_intro_loop_a", 16f, -4f, -1, 9, 0f, 0, 0, 0);
		func_168(14, 1);
		func_167(14);
		SYSTEM::WAIT(500);
		func_165(14, 0, 0);
	}
	GlobalFunc_1286(&uLocal_231, 3, iLocal_113[0], "REROBRobber1", 0, 1);
	GlobalFunc_1286(&uLocal_231, 4, iLocal_113[1], "REROBRobber2", 0, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_bevhills_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_bevhills_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_hipster_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_hipster_04"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_korean_01"));
}

void func_165(int iParam0, bool bParam1, bool bParam2)//Position - 0xC022
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (bParam2)
	{
		if (bParam1)
		{
			iVar0 = 4;
		}
		else
		{
			iVar0 = 3;
		}
	}
	iVar1 = GlobalFunc_2508(iParam0, 0);
	if (iVar1 != 225)
	{
		func_70(iVar1, iVar0);
	}
	iVar1 = GlobalFunc_2508(iParam0, 1);
	if (iVar1 != 225)
	{
		func_70(iVar1, iVar0);
	}
}


void func_167(int iParam0)//Position - 0xC4F2
{
	GlobalFunc_7966(iParam0, 9, 1);
}

void func_168(int iParam0, bool bParam1)//Position - 0xC503
{
	if (bParam1)
	{
		if (!GlobalFunc_7702(iParam0, 4, 1))
		{
			GlobalFunc_7966(iParam0, 4, 1);
			GlobalFunc_184(137, 1);
		}
	}
	else if (GlobalFunc_7702(iParam0, 4, 1))
	{
		GlobalFunc_7965(iParam0, 4, 1);
	}
}


void func_170()//Position - 0xC5DC
{
	if (!iLocal_134)
	{
		iLocal_152 = INTERIOR::GET_INTERIOR_AT_COORDS(Local_54[0 /*3*/]);
		INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_152);
		iLocal_134 = 1;
	}
}

void func_171()//Position - 0xC600
{
	STREAMING::REQUEST_MODEL(iLocal_218);
	STREAMING::REQUEST_MODEL(iLocal_219);
	STREAMING::REQUEST_MODEL(iLocal_220);
	STREAMING::REQUEST_MODEL(iLocal_221);
	STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_duffel_01"));
	TASK::REQUEST_WAYPOINT_RECORDING("re_shoprobbery");
	TASK::REQUEST_WAYPOINT_RECORDING("re_shoprobbery2");
	STREAMING::REQUEST_ANIM_DICT("random@robbery");
	STREAMING::REQUEST_ANIM_DICT("random@shop_robbery");
	AUDIO::PREPARE_MUSIC_EVENT("RE51A_SHOP");
	if ((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_218) && STREAMING::HAS_MODEL_LOADED(iLocal_219)) && STREAMING::HAS_MODEL_LOADED(iLocal_220)) && STREAMING::HAS_MODEL_LOADED(iLocal_221)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_duffel_01"))) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("re_shoprobbery")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("re_shoprobbery2")) && STREAMING::HAS_ANIM_DICT_LOADED("random@robbery")) && STREAMING::HAS_ANIM_DICT_LOADED("random@shop_robbery")) && AUDIO::PREPARE_MUSIC_EVENT("RE51A_SHOP"))
	{
		iLocal_52 = 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_218);
		STREAMING::REQUEST_MODEL(iLocal_219);
		STREAMING::REQUEST_MODEL(iLocal_220);
		STREAMING::REQUEST_MODEL(iLocal_221);
		STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_cs_duffel_01"));
		STREAMING::REQUEST_ANIM_DICT("random@robbery");
		STREAMING::REQUEST_ANIM_DICT("random@shop_robbery");
		AUDIO::PREPARE_MUSIC_EVENT("RE51A_SHOP");
	}
}

void func_172()//Position - 0xC725
{
	iLocal_140[0] = 0;
	iLocal_140[1] = 0;
	if (iLocal_48 == 1)
	{
		iLocal_218 = joaat("a_f_y_bevhills_02");
		iLocal_219 = joaat("a_m_y_bevhills_02");
		iLocal_220 = joaat("a_f_y_bevhills_02");
		iLocal_221 = joaat("g_m_y_korean_01");
		iLocal_110 = 2;
		iLocal_111 = 3;
		iLocal_112 = 3;
		Local_54[0 /*3*/] = { -821.4461f, -184.8474f, 37.5668f };
		fLocal_61[0] = 252.381f;
		Local_54[1 /*3*/] = { -819.4664f, -186.8146f, 36.5671f };
		fLocal_61[1] = -153.9562f;
		Local_64[0 /*3*/] = { -821.941f, -183.3325f, 36.5689f };
		fLocal_74[0] = 203.3684f;
		Local_64[1 /*3*/] = { -813.6672f, -185.5652f, 36.5689f };
		fLocal_74[1] = 90.1761f;
		Local_64[2 /*3*/] = { -816.1049f, -183.9966f, 36.5689f };
		fLocal_74[2] = 192.7338f;
		Local_78[0 /*3*/] = { -813.008f, -184.931f, 37.869f };
		fLocal_91[0] = 337.68f;
		Local_78[1 /*3*/] = { -817.5606f, -190.8273f, 37.3114f };
		fLocal_91[1] = 25.8399f;
		Local_78[2 /*3*/] = { -816.1862f, -182.897f, 37.6304f };
		fLocal_91[2] = 30f;
		Local_96 = { -822.2148f, -184.0822f, 37.7027f };
		Local_99 = { -1.8236f, 0.6172f, 75.8024f };
		Local_102 = { -808.5918f, -180.0378f, 36.5689f };
		iLocal_187 = joaat("prop_cs_duffel_01");
		iLocal_188 = 2000;
		Local_193 = { -822.8538f, -187.7645f, 36.5792f };
	}
	else if (iLocal_48 == 2)
	{
		iLocal_217 = joaat("a_m_y_hipster_01");
		iLocal_218 = joaat("a_f_y_hipster_04");
		iLocal_219 = joaat("a_m_y_hipster_01");
		iLocal_220 = joaat("a_f_y_hipster_04");
		iLocal_221 = joaat("g_m_y_strpunk_02");
		iLocal_110 = 2;
		iLocal_111 = 2;
		iLocal_112 = 2;
		Local_54[0 /*3*/] = { -1193.045f, -769.304f, 16.321f };
		fLocal_61[0] = -85.5f;
		Local_54[1 /*3*/] = { -1199.045f, -778.8358f, 16.3277f };
		fLocal_61[1] = 329.1899f;
		Local_64[0 /*3*/] = { -1193.802f, -766.8922f, 16.331f };
		fLocal_74[0] = 221.3152f;
		Local_64[1 /*3*/] = { -1193.85f, -771.4392f, 16.3227f };
		fLocal_74[1] = 247.1149f;
		Local_78[0 /*3*/] = { -1184.359f, -767.0463f, 16.3468f };
		fLocal_91[0] = 103.3015f;
		Local_78[1 /*3*/] = { -1185.932f, -770.624f, 16.344f };
		fLocal_91[1] = 43.215f;
		Local_96 = { -1192.968f, -767.0651f, 17.2968f };
		Local_99 = { 0f, 0f, -128.52f };
		Local_102 = { -1180.457f, -763.9163f, 16.3267f };
		iLocal_187 = joaat("prop_cs_duffel_01");
		iLocal_188 = 2000;
		Local_193 = { -1201.006f, -777.4955f, 16.3235f };
	}
	bLocal_53 = true;
}

int func_173()//Position - 0xCA04
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
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

















int func_190(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xE78A
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































bool func_221(int iParam0)//Position - 0xFABC
{
	return GlobalFunc_7702(iParam0, 7, 1);
}

void func_222()//Position - 0xFACC
{
	int iVar0;
	
	if (iLocal_222)
	{
		GlobalFunc_7632(0);
		AUDIO::CANCEL_MUSIC_EVENT("RE51A_SHOP");
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-871f, -246f, 0f, -798f, -163f, 50f, 1);
		TASK::REMOVE_WAYPOINT_RECORDING("re_shoprobbery");
		TASK::REMOVE_WAYPOINT_RECORDING("re_shoprobbery2");
		iVar0 = 0;
		while (iVar0 <= (iLocal_110 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_113[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_113[iVar0]) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_113[iVar0], 0))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_113[iVar0], Local_102, 150f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_113[iVar0], 1);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_113[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_184[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_184[iVar0]));
			}
			iVar0++;
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_191))
		{
			HUD::REMOVE_BLIP(&uLocal_191);
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_112 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_120[iVar0]))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_120[iVar0], 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
					if (iLocal_48 == 1)
					{
						TASK::TASK_PLAY_ANIM(0, "random@robbery", "exit_flee", 4f, -4f, -1, 5632, 0f, 0, 1, 0);
					}
					else if (iLocal_48 == 2)
					{
						TASK::CLEAR_PED_TASKS(iLocal_120[iVar0]);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
					}
					TASK::TASK_SMART_FLEE_COORD(0, Local_102, 150f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_120[iVar0], uLocal_151);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
					PED::SET_PED_KEEP_TASK(iLocal_120[iVar0], 1);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (iLocal_111 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_116[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_116[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(iLocal_116[iVar0], 317, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_116[iVar0], 1);
					if (iVar0 == 0)
					{
						if (!iLocal_182)
						{
							TASK::CLEAR_PED_TASKS(iLocal_116[iVar0]);
							TASK::TASK_SMART_FLEE_COORD(iLocal_116[iVar0], Local_102, 150f, -1, 0, 0);
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[iVar0], 0);
						}
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_151);
						if (iLocal_48 == 2)
						{
							TASK::CLEAR_PED_TASKS(iLocal_116[iVar0]);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1201.476f, -790.2733f, 15.5475f, 2f, -1, 1048576000, 0, 1193033728);
						}
						TASK::TASK_SMART_FLEE_COORD(0, Local_102, 150f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_151);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_116[iVar0], uLocal_151);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_151);
					}
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_116[iVar0], 0);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_116[iVar0], 1);
				}
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_183))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_183);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_166))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_166))
			{
				ENTITY::DETACH_ENTITY(iLocal_166, 1, 1);
			}
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_166);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_174))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_174);
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PED::SET_CREATE_RANDOM_COPS(1);
		if (iLocal_48 == 1)
		{
			func_168(0, 0);
			func_165(0, 1, 0);
		}
		else if (iLocal_48 == 2)
		{
			func_168(14, 0);
			func_165(14, 1, 0);
		}
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}














Vector3 func_236()//Position - 0x10627
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_127, 1);
		iLocal_126 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_130, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_130, 1);
			iLocal_126 = 2;
		}
		if (iLocal_126 == 1)
		{
			iLocal_133 = 1;
			iLocal_48 = 1;
			return Local_127;
		}
		else if (iLocal_126 == 2)
		{
			iLocal_133 = 2;
			iLocal_48 = 2;
			return Local_130;
		}
	}
	return 0f, 0f, 0f;
}

