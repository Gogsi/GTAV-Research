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
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
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
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	float fLocal_55 = 0f;
	var uLocal_56 = 0;
	var uLocal_57 = 8;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 2;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 8;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 8;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	struct<6> Local_89 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 32;
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
	var uLocal_132 = 32;
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
	int iLocal_168 = 0;
	int iLocal_169[32] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_226 = 0;
	var uLocal_227 = 16;
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
	int iLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
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
	sLocal_17 = "NULL";
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	iLocal_27 = 3;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_55 = ((0.05f + 0.275f) - 0.01f);
	iLocal_88 = 600000;
	iLocal_392 = -1;
	func_308(ScriptParam_0);
	while (true)
	{
		func_307();
		if (func_298() || !func_297(PLAYER::PLAYER_ID(), 0, 1))
		{
			func_295();
		}
		switch (func_294(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_293() == 2)
				{
					iLocal_169[NETWORK::PARTICIPANT_ID_TO_INT()] = 2;
				}
				else if (func_293() == 6)
				{
					iLocal_169[NETWORK::PARTICIPANT_ID_TO_INT()] = 5;
				}
				break;
			
			case 2:
				if (func_293() == 2)
				{
					if (!func_292())
					{
						if (func_34(&uLocal_202))
						{
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 4))
						{
							func_33(1);
							func_32(0);
							func_25();
						}
						func_24(8, 0);
					}
				}
				else if (func_293() == 6)
				{
					iLocal_169[NETWORK::PARTICIPANT_ID_TO_INT()] = 5;
				}
				break;
			
			case 5:
				func_23(&(Local_89.f_3));
				if (func_22(&(Local_89.f_3)))
				{
					iLocal_169[NETWORK::PARTICIPANT_ID_TO_INT()] = 6;
				}
				break;
			
			case 3:
				iLocal_169[NETWORK::PARTICIPANT_ID_TO_INT()] = 6;
			
			case 6:
				func_295();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_293())
			{
				case 0:
					Local_89 = 2;
					break;
				
				case 2:
					func_21();
					func_2();
					if (func_1())
					{
						Local_89 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1DC
{
	if (MISC::IS_BIT_SET(Local_89.f_1, 0))
	{
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1F5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_89.f_5.f_2)
		{
			case 0:
				if (!MISC::IS_BIT_SET(Local_89.f_5.f_3, 1))
				{
					iVar0 = 0;
					while (iVar0 <= 31)
					{
						Local_89.f_5.f_5[iVar0] = -1;
						Local_89.f_5.f_38[iVar0] = -1;
						iVar0++;
					}
					MISC::SET_BIT(&(Local_89.f_5.f_3), 1);
				}
				if (Global_2446554.f_1612)
				{
					MISC::SET_BIT(&(Local_89.f_5.f_3), 0);
					Global_2446554.f_1612 = 0;
				}
				if (MISC::IS_BIT_SET(Local_89.f_5.f_3, 1))
				{
					if (MISC::IS_BIT_SET(Local_89.f_5.f_3, 0))
					{
						if (!func_20(&(Local_89.f_5)) || func_19(&(Local_89.f_5), 5000, 0))
						{
							if (Local_89.f_5.f_4 == 0)
							{
								Local_89.f_5.f_72 = 0;
								MISC::CLEAR_BIT(&(Local_89.f_5.f_3), 2);
								MISC::CLEAR_BIT(&(Local_89.f_5.f_3), 3);
							}
							iVar0 = Local_89.f_5.f_4;
							iVar1 = iVar0;
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
							{
								if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 0))
								{
									MISC::SET_BIT(&(Local_89.f_5.f_73), iVar1);
									Local_89.f_5.f_72++;
									if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 6))
									{
										Local_89.f_5.f_5[iVar0] = -1;
									}
								}
							}
							Local_89.f_5.f_4++;
							if (Local_89.f_5.f_4 == 32)
							{
								func_18(&(Local_89.f_5));
								func_17(&(Local_89.f_5), 0, 0);
								if (Local_89.f_5.f_72 >= 1)
								{
									Local_89.f_5.f_2 = 1;
									MISC::CLEAR_BIT(&(Local_89.f_5.f_3), 2);
								}
								Local_89.f_5.f_4 = 0;
							}
						}
					}
				}
				break;
			
			case 1:
				if (Local_89.f_5.f_4 == 0)
				{
					MISC::CLEAR_BIT(&(Local_89.f_5.f_3), 2);
				}
				iVar0 = Local_89.f_5.f_4;
				if (MISC::IS_BIT_SET(Local_89.f_5.f_73, iVar0))
				{
					if (func_297(iVar0, 1, 1))
					{
						if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 8))
						{
							if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 0))
							{
								if (Local_89.f_5.f_5[iVar0] == -1)
								{
									if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 6))
									{
										Local_89.f_5.f_5[iVar0] = -1;
									}
									iVar2 = func_16(iVar0, &(Local_89.f_5.f_73));
									if (iVar2 > -1)
									{
										Local_89.f_5.f_5[iVar0] = iVar2;
										Local_89.f_5.f_5[iVar2] = iVar0;
										MISC::SET_BIT(&(Local_89.f_5.f_3), 2);
									}
								}
								else
								{
									MISC::SET_BIT(&(Local_89.f_5.f_3), 2);
								}
							}
						}
					}
				}
				Local_89.f_5.f_4++;
				if (Local_89.f_5.f_4 == 32)
				{
					if (MISC::IS_BIT_SET(Local_89.f_5.f_3, 2))
					{
					}
					Local_89.f_5.f_4 = 0;
					Local_89.f_5.f_2 = 2;
					MISC::CLEAR_BIT(&(Local_89.f_5.f_3), 3);
					func_15();
				}
				break;
			
			case 2:
				if (Local_89.f_5.f_4 == 0)
				{
					MISC::CLEAR_BIT(&(Local_89.f_5.f_3), 3);
				}
				iVar0 = Local_89.f_5.f_4;
				if (MISC::IS_BIT_SET(Local_89.f_5.f_73, iVar0))
				{
					if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 0))
					{
						if (func_297(iVar0, 1, 1))
						{
							if (Local_89.f_5.f_38[iVar0] == -1)
							{
								iVar3 = Local_89.f_5.f_5[iVar0];
								if (iVar3 > -1)
								{
									if (MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 0))
									{
										if (Local_89.f_5.f_38[iVar0] == -1)
										{
											iVar2 = func_9(iVar0, &(Local_89.f_5.f_71));
											if (iVar2 > -1)
											{
												Local_89.f_5.f_38[iVar0] = iVar2;
												Local_89.f_5.f_38[iVar3] = iVar2;
												MISC::SET_BIT(&(Local_89.f_5.f_3), 3);
												func_8(iVar2);
											}
										}
										else if (Local_89.f_5.f_38[iVar0] == Local_89.f_5.f_38[iVar3] || Local_89.f_5.f_38[iVar3] == -1)
										{
											MISC::SET_BIT(&(Local_89.f_5.f_3), 3);
										}
										else if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 3))
										{
											Local_89.f_5.f_38[iVar0] = Local_89.f_5.f_38[iVar3];
										}
										else if (!MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 3))
										{
											Local_89.f_5.f_38[iVar3] = Local_89.f_5.f_38[iVar0];
										}
									}
									else
									{
										Local_89.f_5.f_5[iVar0] = -1;
										Local_89.f_5.f_5[iVar3] = -1;
									}
								}
								else
								{
									iVar2 = func_9(iVar0, &(Local_89.f_5.f_71));
									if (iVar2 > -1)
									{
										MISC::SET_BIT(&(Local_89.f_5.f_3), 3);
										Local_89.f_5.f_38[iVar0] = iVar2;
										func_8(iVar2);
									}
								}
							}
							else
							{
								MISC::SET_BIT(&(Local_89.f_5.f_3), 3);
							}
						}
					}
				}
				Local_89.f_5.f_4++;
				if (Local_89.f_5.f_4 == 32)
				{
					if (MISC::IS_BIT_SET(Local_89.f_5.f_3, 3))
					{
						func_3();
						MISC::CLEAR_BIT(&(Local_89.f_5.f_3), 0);
						Local_89.f_5.f_2 = 0;
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_89.f_5.f_3), 0);
						Local_89.f_5.f_2 = 0;
					}
					Local_89.f_5.f_4 = 0;
				}
				break;
			}
	}
}

void func_3()//Position - 0x6BA
{
	struct<2> Var0;
	
	Var0 = 214;
	Var0.f_1 = PLAYER::PLAYER_ID();
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, func_4(1, 1));
}

int func_4(int iParam0, bool bParam1)//Position - 0x6DC
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_297(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_5(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

bool func_5(int iParam0, int iParam1)//Position - 0x741
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_6(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_6(int iParam0, bool bParam1)//Position - 0x78C
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_7();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_7()//Position - 0x7CD
{
	return Global_1312737;
}

void func_8(int iParam0)//Position - 0x7D9
{
	MISC::SET_BIT(&(Local_89.f_2), iParam0);
}

int func_9(int iParam0, var uParam1)//Position - 0x7EB
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	int iVar10;
	var uVar11;
	int iVar12;
	var uVar13;
	int iVar14;
	
	iVar2 = -1;
	iVar3 = Local_89.f_5.f_5[iParam0];
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = (200f * 200f);
	iVar10 = iParam0;
	uVar11 = PLAYER::GET_PLAYER_PED(iVar10);
	if (iVar3 > -1)
	{
		if (iVar3 != iParam0)
		{
			if (Local_89.f_5.f_38[iVar3] == -1)
			{
				iVar12 = iVar3;
				uVar13 = PLAYER::GET_PLAYER_PED(iVar12);
				iVar1 = 0;
				while (iVar1 <= 19)
				{
					if (!bVar0)
					{
						if (MISC::IS_BIT_SET(*uParam1, iVar1))
						{
							if (!func_13(iVar1))
							{
								MISC::CLEAR_BIT(uParam1, iVar1);
							}
						}
						if (func_12(iVar1))
						{
							iVar14 = func_11(iVar1);
							if (iVar14 != -1)
							{
								if (Global_2413838.f_87[iVar14] == 0)
								{
									if (!MISC::IS_BIT_SET(*uParam1, iVar1))
									{
										if (!PED::IS_PED_INJURED(uVar11))
										{
											if (!PED::IS_PED_INJURED(uVar13))
											{
												Var7 = { func_10(iVar1) };
												fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar11, 1), Var7);
												if (fVar4 > fVar6)
												{
													fVar5 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar13, 1), Var7);
													if (fVar5 > fVar6)
													{
														iVar2 = iVar1;
														bVar0 = true;
														MISC::SET_BIT(uParam1, iVar1);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					iVar1++;
				}
			}
			else
			{
				iVar2 = Local_89.f_5.f_38[iVar3];
			}
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 19)
		{
			if (!bVar0)
			{
				if (func_12(iVar1))
				{
					iVar14 = func_11(iVar1);
					if (iVar14 != -1)
					{
						if (Global_2413838.f_87[iVar14] == 0)
						{
							if (!MISC::IS_BIT_SET(*uParam1, iVar1))
							{
								if (!PED::IS_PED_INJURED(uVar11))
								{
									Var7 = { func_10(iVar1) };
									fVar4 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uVar11, 1), Var7);
									if (fVar4 > fVar6)
									{
										iVar2 = iVar1;
										bVar0 = true;
										MISC::SET_BIT(uParam1, iVar1);
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
	return iVar2;
}

Vector3 func_10(int iParam0)//Position - 0x9AB
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			Var0 = { -52.27f, -1733.58f, 28.23f };
			break;
		
		case 1:
			Var0 = { 15.4693f, -1354.067f, 28.315f };
			break;
		
		case 2:
			Var0 = { -1238.39f, -904.58f, 13.27f };
			break;
		
		case 3:
			Var0 = { -724.14f, -912.37f, 20.34f };
			break;
		
		case 4:
			Var0 = { 1145.433f, -972.5638f, 45.6656f };
			break;
		
		case 5:
			Var0 = { -1502.037f, -380.4863f, 39.8563f };
			break;
		
		case 6:
			Var0 = { 364.9397f, 320.9199f, 102.6601f };
			break;
		
		case 7:
			Var0 = { 1162.664f, -338.0286f, 67.4397f };
			break;
		
		case 8:
			Var0 = { 2567.102f, 384.5044f, 107.4621f };
			break;
		
		case 9:
			Var0 = { -2970.054f, 401.0349f, 14.0942f };
			break;
		
		case 10:
			Var0 = { -3042.513f, 599.3762f, 6.5342f };
			break;
		
		case 11:
			Var0 = { -3252.98f, 992.51f, 13.5f };
			break;
		
		case 12:
			Var0 = { -1814.226f, 778.6277f, 136.175f };
			break;
		
		case 13:
			Var0 = { 531.4801f, 2675.505f, 41.4485f };
			break;
		
		case 14:
			Var0 = { 1183.174f, 2693.942f, 36.9294f };
			break;
		
		case 15:
			Var0 = { 1382.555f, 3598.162f, 33.8769f };
			break;
		
		case 16:
			Var0 = { 1959.975f, 3731.025f, 31.3247f };
			break;
		
		case 17:
			Var0 = { 2681.91f, 3292.97f, 55.49f };
			break;
		
		case 18:
			Var0 = { 1687.99f, 4918.174f, 41.0781f };
			break;
		
		case 19:
			Var0 = { 1687.99f, 4918.174f, 41.0781f };
			break;
	}
	return Var0;
}

int func_11(int iParam0)//Position - 0xBF5
{
	int iVar0;
	
	iVar0 = -1;
	switch (iParam0)
	{
		case 0:
			iVar0 = 17;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 12;
			break;
		
		case 3:
			iVar0 = 16;
			break;
		
		case 4:
			iVar0 = 13;
			break;
		
		case 5:
			iVar0 = 14;
			break;
		
		case 6:
			iVar0 = 9;
			break;
		
		case 7:
			iVar0 = 18;
			break;
		
		case 8:
			iVar0 = 4;
			break;
		
		case 9:
			iVar0 = 11;
			break;
		
		case 10:
			iVar0 = 1;
			break;
		
		case 11:
			iVar0 = 2;
			break;
		
		case 12:
			iVar0 = 19;
			break;
		
		case 13:
			iVar0 = 3;
			break;
		
		case 14:
			iVar0 = 10;
			break;
		
		case 15:
			iVar0 = 0;
			break;
		
		case 16:
			iVar0 = 7;
			break;
		
		case 17:
			iVar0 = 5;
			break;
		
		case 18:
			iVar0 = 15;
			break;
		
		case 19:
			iVar0 = 6;
			break;
	}
	return iVar0;
}

int func_12(int iParam0)//Position - 0xD05
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_2413838.f_64, iVar0))
		{
			if (!MISC::IS_BIT_SET(Global_2413838.f_62, iVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_13(int iParam0)//Position - 0xD3F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_14(iParam0))
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		iVar2 = iVar1;
		if (Local_89.f_5.f_38[iVar1] == iParam0)
		{
			if (func_297(iVar2, 0, 1))
			{
				if (!MISC::IS_BIT_SET(Global_1582596[iVar1 /*324*/].f_120, 4))
				{
					if (MISC::IS_BIT_SET(Global_1582596[iVar1 /*324*/].f_120, 3))
					{
						iVar0 = 1;
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_14(int iParam0)//Position - 0xDB1
{
	return MISC::IS_BIT_SET(Local_89.f_2, iParam0);
}

void func_15()//Position - 0xDC3
{
	Local_89.f_2 = 0;
}

int func_16(int iParam0, var uParam1)//Position - 0xDD0
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iVar1 == -1)
		{
			if (iVar0 != iParam0)
			{
				if (MISC::IS_BIT_SET(*uParam1, iVar0))
				{
					if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 0))
					{
						if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 3))
						{
							if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 2))
							{
								if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 8))
								{
									if (Local_89.f_5.f_5[iVar0] == -1)
									{
										iVar1 = iVar0;
									}
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_17(var uParam0, bool bParam1, bool bParam2)//Position - 0xE6B
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

void func_18(var uParam0)//Position - 0xEB0
{
	uParam0->f_1 = 0;
}

int func_19(var uParam0, int iParam1, bool bParam2)//Position - 0xEBD
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_17(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_20(var uParam0)//Position - 0xF1B
{
	return uParam0->f_1;
}

void func_21()//Position - 0xF27
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (iLocal_168 == 0)
		{
			MISC::CLEAR_BIT(&iLocal_226, 0);
			MISC::SET_BIT(&iLocal_226, 1);
		}
		iVar1 = iLocal_168;
		iVar2 = Local_89.f_5.f_5[iLocal_168];
		if (func_297(iVar1, 0, 1))
		{
			if (!MISC::IS_BIT_SET(Global_1582596[iLocal_168 /*324*/].f_120, 4))
			{
				MISC::CLEAR_BIT(&iLocal_226, 1);
			}
		}
		if (MISC::IS_BIT_SET(Global_1582596[iLocal_168 /*324*/].f_120, 0))
		{
			if (func_297(iVar1, 0, 1))
			{
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (!func_297(iVar0, 0, 1))
					{
						Local_89.f_5.f_5[iLocal_168] = -1;
					}
				}
			}
			else
			{
				if (Local_89.f_5.f_5[iLocal_168] != -1)
				{
					Local_89.f_5.f_5[iLocal_168] = -1;
				}
				if (Local_89.f_5.f_38[iLocal_168] != -1)
				{
					Local_89.f_5.f_38[iLocal_168] = -1;
				}
			}
		}
		else if (func_297(iVar1, 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_1582596[iLocal_168 /*324*/].f_120, 12))
			{
				if (Local_89.f_5.f_5[iLocal_168] != -1)
				{
					Local_89.f_5.f_5[iLocal_168] = -1;
				}
				if (Local_89.f_5.f_38[iLocal_168] != -1)
				{
					Local_89.f_5.f_38[iLocal_168] = -1;
				}
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (func_297(iVar0, 0, 1))
					{
						Local_89.f_5.f_5[iVar2] = -1;
					}
				}
			}
		}
		iLocal_168++;
		if (iLocal_168 == 32)
		{
			if (MISC::IS_BIT_SET(iLocal_226, 1))
			{
				MISC::SET_BIT(&(Local_89.f_1), 0);
			}
			MISC::SET_BIT(&iLocal_226, 0);
			iLocal_168 = 0;
		}
	}
}

int func_22(var uParam0)//Position - 0x1092
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_23(var uParam0)//Position - 0x10BB
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_17(uParam0, 0, 0);
		}
	}
}

void func_24(int iParam0, bool bParam1)//Position - 0x10DA
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205, iParam0))
		{
			MISC::SET_BIT(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_205), iParam0);
	}
}

void func_25()//Position - 0x1139
{
	if (!func_31())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312579.f_7)
	{
		return;
	}
	func_26();
}

void func_26()//Position - 0x1166
{
	func_28();
	func_27(0);
}

void func_27(bool bParam0)//Position - 0x1177
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312579 = 11;
	StringCopy(&(Global_1312579.f_1), "", 24);
	Global_1312579.f_7 = 0;
	if (bVar0)
	{
		Global_1312579.f_8 = NETWORK::GET_NETWORK_TIME();
		Global_1312579.f_9 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312579.f_10), "", 16);
	StringCopy(&(Global_1312579.f_14), "", 64);
	StringCopy(&(Global_1312579.f_30), "", 16);
	Global_1312579.f_34 = 0;
	Global_1312579.f_35 = 0;
	Global_1312579.f_36 = 0;
	Global_1312579.f_37 = -1;
	Global_1312579.f_38 = 0;
	Global_1312579.f_39 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_28()//Position - 0x1205
{
	if (!func_30())
	{
	}
	if (func_31())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312579.f_10));
		func_29();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_29()//Position - 0x122E
{
	switch (Global_1312579)
	{
		case 11:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312579.f_34);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312579.f_34);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312579.f_35);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312579.f_14));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312579.f_14));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312579.f_30));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312579.f_14));
			return;
		
		case 6:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312579.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312579.f_14));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312579.f_14));
			return;
		
		case 8:
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(Global_1312579.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312579.f_14));
			return;
		
		case 9:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312579.f_14));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(&(Global_1312579.f_14));
			return;
		
		default:
	}
}

int func_30()//Position - 0x1337
{
	if (!func_31())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312579.f_10));
	func_29();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_31()//Position - 0x135D
{
	if (Global_1312579 == 11)
	{
		return 0;
	}
	return 1;
}

void func_32(bool bParam0)//Position - 0x1373
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 0))
		{
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 0))
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 0);
	}
}

void func_33(bool bParam0)//Position - 0x13D2
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 4))
		{
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 4);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 4))
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 4);
	}
}

int func_34(var uParam0)//Position - 0x1431
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<13> Var5;
	var uVar18;
	
	if (Global_2446554.f_1612)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Global_2446554.f_1612 = 0;
		}
	}
	if (*uParam0 > 0)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		if (!MISC::IS_BIT_SET(uParam0->f_1, 2))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((func_289(PLAYER::PLAYER_ID(), 1) || func_288()) || func_287() != 0)
				{
					func_285(uParam0);
					MISC::SET_BIT(&(uParam0->f_1), 2);
					MISC::CLEAR_BIT(&(uParam0->f_1), 12);
					MISC::CLEAR_BIT(&iLocal_226, 11);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			{
				if (!func_289(PLAYER::PLAYER_ID(), 1))
				{
					if (!func_288())
					{
						if (func_287() == 0)
						{
							MISC::CLEAR_BIT(&(uParam0->f_1), 2);
							MISC::CLEAR_BIT(&(uParam0->f_1), 1);
							MISC::CLEAR_BIT(&(uParam0->f_1), 0);
							MISC::CLEAR_BIT(&(uParam0->f_1), 3);
							MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 2);
							if (*uParam0 > 1)
							{
								*uParam0 = 1;
							}
						}
					}
				}
			}
		}
		iVar3 = PLAYER::PLAYER_ID();
		if (!MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 5))
		{
			if (func_289(PLAYER::PLAYER_ID(), 1) || func_288())
			{
				MISC::SET_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 5);
				*uParam0 = 0;
				func_32(0);
				func_284(0);
				func_24(8, 0);
				MISC::CLEAR_BIT(&(uParam0->f_1), 0);
				func_285(uParam0);
			}
		}
		if (*uParam0 < 3)
		{
			if (Local_89.f_5.f_5[PLAYER::PLAYER_ID()] == -1)
			{
				if (func_19(&(uParam0->f_6), 15000, 0))
				{
					func_283();
					func_18(&(uParam0->f_6));
					func_17(&(uParam0->f_6), 0, 0);
				}
			}
		}
		if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 9))
		{
			if (func_19(&(uParam0->f_6), 5000, 0))
			{
				func_283();
				func_18(&(uParam0->f_6));
				func_17(&(uParam0->f_6), 0, 0);
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			iVar3 = PLAYER::PLAYER_ID();
			if (!MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 13))
			{
				if (MISC::IS_BIT_SET(Global_2446554.f_1613, 6) || MISC::IS_BIT_SET(Global_2446554.f_1615, 31))
				{
					if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 0))
					{
						if (!func_282())
						{
							if (!func_289(PLAYER::PLAYER_ID(), 1))
							{
								if (!func_288())
								{
									if (func_287() == 0)
									{
										if (func_172())
										{
											if (func_155(uParam0))
											{
												Global_1675329.f_1 = -1;
												func_32(1);
												func_283();
												if (MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 5))
												{
													MISC::CLEAR_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 5);
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 0))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_1, 13))
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							func_154("FM_IHELP_ACPI", -1);
							MISC::SET_BIT(&(uParam0->f_1), 13);
						}
					}
					if (MISC::IS_BIT_SET(Global_1675329, 1))
					{
						iVar3 = PLAYER::PLAYER_ID();
						iVar0 = Local_89.f_5.f_5[iVar3];
						iVar1 = Local_89.f_5.f_38[iVar3];
						if (iVar1 > -1)
						{
							iVar2 = func_11(iVar1);
							if (iVar2 == 0)
							{
							}
							func_153(iVar2, 1, func_4(1, 1));
							func_18(&(uParam0->f_6));
							func_17(&(uParam0->f_6), 0, 0);
							func_284(1);
							func_24(8, 1);
							uVar18 = func_152(1178, -1, 0);
							MISC::CLEAR_BIT(&uVar18, 1);
							MISC::CLEAR_BIT(&uVar18, 2);
							MISC::CLEAR_BIT(&uVar18, 3);
							MISC::CLEAR_BIT(&uVar18, 5);
							MISC::CLEAR_BIT(&uVar18, 6);
							*uParam0 = 1;
							func_151(1178, uVar18, -1, 1);
							iLocal_392 = func_152(1155, -1, 0);
						}
						else if (!func_20(&(uParam0->f_6)) || func_19(&(uParam0->f_6), 5000, 0))
						{
							func_283();
							func_18(&(uParam0->f_6));
							func_17(&(uParam0->f_6), 0, 0);
						}
					}
					else if (!func_20(&(uParam0->f_6)) || func_19(&(uParam0->f_6), 30000, 0))
					{
						func_283();
						func_18(&(uParam0->f_6));
						func_17(&(uParam0->f_6), 0, 0);
					}
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 0))
				{
					MISC::CLEAR_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 0);
					MISC::CLEAR_BIT(&(uParam0->f_1), 0);
					MISC::CLEAR_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 2);
					MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 16);
					func_32(0);
				}
				if (MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 12))
				{
					if (Local_89.f_5.f_38[iVar3] == -1 && Local_89.f_5.f_5[iVar3] == -1)
					{
						MISC::CLEAR_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 12);
					}
				}
				else if (!func_20(&(uParam0->f_12)))
				{
					func_17(&(uParam0->f_12), 0, 0);
				}
				else if (func_19(&(uParam0->f_12), 30000, 0))
				{
					MISC::CLEAR_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 13);
					func_18(&(uParam0->f_6));
				}
			}
			break;
		
		case 1:
			iVar3 = PLAYER::PLAYER_ID();
			iVar1 = Local_89.f_5.f_38[iVar3];
			iVar0 = Local_89.f_5.f_5[iVar3];
			func_150();
			if (!MISC::IS_BIT_SET(uParam0->f_1, 0))
			{
				if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
				{
					MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 16);
				}
				if (MISC::IS_BIT_SET(uParam0->f_1, 14))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 14);
				}
				if (!HUD::DOES_BLIP_EXIST(uParam0->f_4))
				{
					if (iVar1 >= 0)
					{
						uParam0->f_4 = HUD::ADD_BLIP_FOR_COORD(func_10(iVar1));
						HUD::SET_BLIP_ROUTE(uParam0->f_4, 1);
						HUD::SET_BLIP_PRIORITY(uParam0->f_4, 9);
					}
				}
				if (iVar0 > -1 && func_149(iVar0, 1))
				{
					iVar4 = iVar0;
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
					{
						if (func_297(iVar4, 0, 1))
						{
							if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 4) && !MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 5))
							{
								func_148("FM_HTUT_GO", 0);
								MISC::SET_BIT(&(uParam0->f_1), 0);
							}
						}
					}
				}
				if (!MISC::IS_BIT_SET(uParam0->f_1, 0))
				{
					func_148("FM_HTUT_GO", 0);
					MISC::SET_BIT(&(uParam0->f_1), 1);
				}
				else
				{
					func_18(&(uParam0->f_10));
					func_17(&(uParam0->f_10), 0, 0);
				}
				MISC::SET_BIT(&(uParam0->f_1), 0);
			}
			else
			{
				if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
				{
					MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 16);
				}
				if (MISC::IS_BIT_SET(uParam0->f_1, 14))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 14);
				}
				if (!MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 2))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_10(iVar1)) < (15f * 15f) || (iVar0 == -1 && func_147(25f))) || func_146(1101004800, 1117126656))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_4));
							}
							if (iVar0 > -1 && func_149(iVar0, 1))
							{
								iVar4 = iVar0;
								if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 2))
								{
									if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
									{
										if (func_297(iVar4, 1, 1))
										{
											if (!func_145())
											{
												Var5 = { func_144(iVar4) };
												if (NETWORK::NETWORK_IS_FRIEND(&Var5))
												{
													func_124("FM_HTUT_FWAT", iVar4, 0, 0);
												}
												else
												{
													func_124("FM_HTUT_WAT", iVar4, 0, 0);
												}
											}
										}
									}
								}
							}
							MISC::SET_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 2);
						}
					}
				}
				else
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!MISC::IS_BIT_SET(uParam0->f_1, 2))
						{
							if ((!MISC::IS_BIT_SET(iLocal_226, 18) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_10(iVar1)) > (35f * 35f)) || (MISC::IS_BIT_SET(iLocal_226, 18) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_10(iVar1)) > (90f * 90f)))
							{
								MISC::CLEAR_BIT(&(uParam0->f_1), 0);
								MISC::CLEAR_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 2);
								MISC::CLEAR_BIT(&iLocal_226, 18);
							}
						}
					}
					if (MISC::IS_BIT_SET(Global_1675329, 15))
					{
						if (func_121("FM_HTUT_WAT") || func_121("FM_HTUT_FWAT"))
						{
							func_25();
						}
					}
				}
			}
			if (iVar0 > -1 && func_149(iVar0, 1))
			{
				if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 2))
				{
					if (!MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 2))
					{
						if (!MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 12))
						{
							if (func_20(&(uParam0->f_10)))
							{
								if (func_19(&(uParam0->f_10), iLocal_88, 0))
								{
									MISC::SET_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 12);
									MISC::SET_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 13);
									if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
									{
										HUD::REMOVE_BLIP(&(uParam0->f_4));
									}
									func_25();
									*uParam0 = 0;
									MISC::CLEAR_BIT(&(uParam0->f_1), 12);
									MISC::CLEAR_BIT(&iLocal_226, 11);
								}
								else if (!MISC::IS_BIT_SET(uParam0->f_1, 2))
								{
									if (!MISC::IS_BIT_SET(uParam0->f_1, 12))
									{
										if (func_19(&(uParam0->f_10), (iLocal_88 - 60000), 0))
										{
											MISC::SET_BIT(&(uParam0->f_1), 12);
										}
										else if (!MISC::IS_BIT_SET(iLocal_226, 11))
										{
											if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 2))
											{
												if (!func_19(&(uParam0->f_10), (iLocal_88 - 420000), 0))
												{
													func_18(&(uParam0->f_10));
													func_17(&(uParam0->f_10), 0, 0);
													MISC::SET_BIT(&iLocal_226, 11);
													iLocal_88 = 180000;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (!MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 12))
				{
					if (MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 2) && MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 2))
					{
						MISC::CLEAR_BIT(&(uParam0->f_1), 12);
						MISC::CLEAR_BIT(&iLocal_226, 11);
						MISC::SET_BIT(&(uParam0->f_1), 4);
						*uParam0 = 3;
						func_285(uParam0);
						func_17(&uLocal_220, 0, 0);
						MISC::SET_BIT(&(uParam0->f_1), 6);
						func_120(1);
						func_17(&uLocal_220, 0, 0);
						if (func_149(iVar0, 1))
						{
							if (!MISC::IS_BIT_SET(uParam0->f_1, 15))
							{
								if (func_119(iVar0, 0))
								{
									MISC::SET_BIT(&(uParam0->f_1), 15);
								}
							}
						}
					}
					else if (MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 2))
					{
						if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 2))
						{
							func_111();
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Global_1582596[iVar3 /*324*/].f_120, 2))
			{
				MISC::SET_BIT(&(uParam0->f_1), 4);
				MISC::SET_BIT(&(uParam0->f_1), 5);
				MISC::SET_BIT(&(uParam0->f_1), 6);
				func_285(uParam0);
				func_120(1);
				*uParam0 = 3;
			}
			if (MISC::IS_BIT_SET(uParam0->f_1, 12))
			{
				func_107(iLocal_88, uParam0->f_10);
			}
			break;
		
		case 2:
			if (func_19(&uLocal_220, 1000, 0))
			{
				*uParam0 = 3;
				func_285(uParam0);
				func_120(1);
				func_17(&uLocal_220, 0, 0);
			}
			break;
		
		case 3:
			iVar3 = PLAYER::PLAYER_ID();
			iVar0 = Local_89.f_5.f_5[iVar3];
			iVar1 = Local_89.f_5.f_38[iVar3];
			if (!MISC::IS_BIT_SET(iLocal_226, 8))
			{
				if (func_147(35f))
				{
					iVar2 = func_11(iVar1);
					if (iVar2 == 0)
					{
					}
					func_153(iVar2, 0, func_4(1, 1));
					MISC::SET_BIT(&iLocal_226, 8);
				}
			}
			if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
			{
				MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 16);
			}
			if (!MISC::IS_BIT_SET(uParam0->f_1, 3))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_1, 14))
				{
					if (!func_106())
					{
						if (iVar0 > -1 && func_149(iVar0, 1))
						{
							iVar4 = iVar0;
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
							{
								if (func_297(iVar4, 1, 1))
								{
									if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 16))
									{
										Var5 = { func_144(iVar4) };
										if (NETWORK::NETWORK_IS_FRIEND(&Var5))
										{
											func_124("FM_HTUT_FHLD", iVar4, 0, 0);
										}
										else
										{
											func_124("FM_HTUT_HLD", iVar4, 0, 0);
										}
										MISC::SET_BIT(&(uParam0->f_1), 3);
									}
									else if (!MISC::IS_BIT_SET(uParam0->f_1, 14))
									{
										MISC::SET_BIT(&(uParam0->f_1), 14);
										func_124("FM_HTUT_HLC", iVar4, 1, 0);
									}
								}
							}
						}
						if (!MISC::IS_BIT_SET(uParam0->f_1, 3) && !MISC::IS_BIT_SET(uParam0->f_1, 14))
						{
							func_148("FM_HTUT_HLS", 0);
							MISC::SET_BIT(&(uParam0->f_1), 3);
							MISC::SET_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 8);
						}
					}
				}
				else
				{
					iVar3 = PLAYER::PLAYER_ID();
					iVar0 = Local_89.f_5.f_5[iVar3];
					if (iVar0 > -1 && func_149(iVar0, 1))
					{
						if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 16))
						{
							MISC::CLEAR_BIT(&(uParam0->f_1), 14);
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(uParam0->f_1), 14);
					}
				}
			}
			else if (func_106())
			{
				if (MISC::IS_BIT_SET(uParam0->f_1, 3))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 3);
				}
			}
			else if (iVar0 > -1 && func_149(iVar0, 1))
			{
				if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 16))
				{
					MISC::CLEAR_BIT(&(uParam0->f_1), 3);
				}
			}
			break;
		
		case 99:
			return 1;
			break;
	}
	if (*uParam0 > 0)
	{
		func_105(uParam0);
		func_97(uParam0);
		func_88(uParam0);
		func_85(uParam0);
		if (!func_292())
		{
			if (func_82(uParam0))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_4));
				}
				if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_5));
				}
				if (MISC::IS_BIT_SET(uParam0->f_1, 15))
				{
					iVar0 = Local_89.f_5.f_5[PLAYER::PLAYER_ID()];
					if (func_119(iVar0, 1))
					{
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_81(1);
				}
				if (MISC::IS_BIT_SET(iLocal_226, 12))
				{
					NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
					MISC::CLEAR_BIT(&iLocal_226, 12);
				}
				func_25();
				func_33(1);
				func_284(0);
				func_32(0);
				func_24(8, 0);
				func_79(121, 1, -1, 1);
				func_35(1);
				*uParam0 = 99;
			}
		}
	}
	return 0;
}

void func_35(bool bParam0)//Position - 0x2229
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1312448)
	{
		if (!func_78())
		{
			iVar0 = 0;
			while (iVar0 <= 4)
			{
				Global_1573723[iVar0] = 0;
				iVar0++;
			}
			return;
		}
	}
	iVar1 = func_75(PLAYER::PLAYER_ID(), bParam0);
	iVar2 = func_73(iVar1, bParam0);
	if (!func_72(-1))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			Global_1573723[iVar0] = 0;
			iVar0++;
		}
		return;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		Global_1573723[iVar0] = 0;
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 <= 134)
	{
		iVar3 = func_71(iVar4);
		if (iVar2 >= iVar3 && iVar3 != -1)
		{
			if (func_69(iVar4))
			{
				func_61(iVar4, 1);
			}
		}
		iVar4++;
	}
	func_54(func_56(59, 0), 0);
	func_52(func_56(22, 0), func_56(73, 0));
	if (func_78())
	{
		if (func_50(77, -1))
		{
			func_49(1);
			func_48(1);
		}
	}
	if (func_47() || func_46())
	{
		func_79(77, 1, -1, 1);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_36(28, 1, 0);
			func_36(29, 1, 0);
			func_36(30, 1, 0);
			func_36(31, 1, 0);
			func_36(32, 1, 0);
			func_36(33, 1, 0);
			func_36(34, 1, 0);
			func_36(35, 1, 0);
			func_36(36, 1, 0);
			func_36(37, 1, 0);
			func_36(38, 1, 0);
		}
	}
	if (func_56(21, 0))
	{
		MISC::ENABLE_STUNT_JUMP_SET(0);
	}
	Global_971739 = 0;
}

void func_36(int iParam0, bool bParam1, int iParam2)//Position - 0x23BB
{
	if (bParam1)
	{
		if (!func_45(iParam0, 0, 0))
		{
			if (iParam2 && Global_90014.f_17[iParam0])
			{
				if (func_44(iParam0) == 3 && !func_43(iParam0))
				{
					func_42(iParam0);
					func_41(iParam0, 0, 0);
					func_38(iParam0, 1, 0);
					func_37(iParam0);
				}
				else
				{
					func_41(iParam0, 1, 0);
					func_37(iParam0);
				}
			}
			else
			{
				func_41(iParam0, 0, 0);
				func_38(iParam0, 1, 0);
				func_37(iParam0);
			}
		}
		else
		{
			func_38(iParam0, 1, 0);
			func_37(iParam0);
		}
	}
	else if (func_45(iParam0, 0, 0))
	{
		func_38(iParam0, 0, 0);
		func_38(iParam0, 1, 0);
		func_37(iParam0);
	}
}

void func_37(int iParam0)//Position - 0x247A
{
	Global_90014.f_153[iParam0] = 1;
	Global_90014.f_152 = 1;
}

void func_38(int iParam0, int iParam1, bool bParam2)//Position - 0x2494
{
	int iVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_40() == 0)
		{
			iVar0 = func_152(func_39(iParam0), -1, 0);
			MISC::CLEAR_BIT(&iVar0, iParam1);
			func_151(func_39(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

int func_39(int iParam0)//Position - 0x24FC
{
	switch (iParam0)
	{
		case 0:
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

int func_40()//Position - 0x27A5
{
	return Global_24444;
}

void func_41(int iParam0, int iParam1, bool bParam2)//Position - 0x27B0
{
	int iVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_40() == 0)
		{
			iVar0 = func_152(func_39(iParam0), -1, 0);
			MISC::SET_BIT(&iVar0, iParam1);
			func_151(func_39(iParam0), iVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0]), iParam1);
	}
}

void func_42(int iParam0)//Position - 0x2818
{
	if (Global_90014.f_17[iParam0])
	{
		func_41(iParam0, 10, 1);
		func_41(iParam0, 19, 1);
	}
}

bool func_43(int iParam0)//Position - 0x283F
{
	return func_45(iParam0, 5, 1);
}

int func_44(int iParam0)//Position - 0x284F
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
	}
	return 5;
}

int func_45(int iParam0, int iParam1, bool bParam2)//Position - 0x2AA8
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_90014.f_1267[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_40() == 0)
		{
			return MISC::IS_BIT_SET(func_152(func_39(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT[iParam0], iParam1);
	}
	return 0;
}

bool func_46()//Position - 0x2B08
{
	return Global_1315888;
}

bool func_47()//Position - 0x2B14
{
	return Global_1315890;
}

void func_48(bool bParam0)//Position - 0x2B20
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_36(28, bParam0, 0);
	func_36(30, bParam0, 0);
	func_36(31, bParam0, 0);
	func_36(33, bParam0, 0);
	func_36(34, bParam0, 0);
	func_36(38, bParam0, 0);
}

void func_49(bool bParam0)//Position - 0x2B69
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	func_36(29, bParam0, 0);
	func_36(32, bParam0, 0);
	func_36(36, bParam0, 0);
	func_36(35, bParam0, 0);
	func_36(37, bParam0, 0);
}

int func_50(int iParam0, int iParam1)//Position - 0x2BA9
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2473393[iParam0 /*6*/][func_51(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_51(int iParam0)//Position - 0x2BD5
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_7();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

void func_52(bool bParam0, bool bParam1)//Position - 0x2C09
{
	bool bVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	bVar0 = true;
	if (bParam0)
	{
		bVar0 = false;
	}
	func_36(0, bParam0, 1);
	func_36(1, bParam0, 1);
	func_36(2, bParam0, 1);
	func_36(3, bParam0, 1);
	func_36(4, bParam0, 1);
	func_36(5, bParam0, 1);
	func_36(6, bParam0, 1);
	func_36(7, bParam0, bVar0);
	func_36(8, bParam0, 1);
	func_36(9, bParam0, 1);
	func_36(10, bParam0, 1);
	func_36(11, bParam0, 1);
	func_36(12, bParam0, bVar0);
	func_36(13, bParam0, 1);
	func_36(21, bParam0, 1);
	func_36(14, bParam0, 1);
	func_36(15, bParam0, 1);
	func_36(16, bParam0, 1);
	func_36(17, bParam0, 1);
	func_36(18, bParam0, 1);
	func_36(19, bParam0, 1);
	func_36(20, bParam0, 1);
	func_36(22, bParam0, 1);
	func_36(23, bParam0, 1);
	func_36(24, bParam0, 1);
	func_36(25, bParam0, 1);
	func_36(26, bParam0, 1);
	func_36(27, bParam0, 1);
	func_53(1, !bParam1);
	if (!bVar0)
	{
		func_42(12);
	}
}

void func_53(int iParam0, bool bParam1)//Position - 0x2D31
{
	if (bParam1)
	{
		Global_90014.f_9[iParam0] = 1;
	}
	else
	{
		Global_90014.f_9[iParam0] = 0;
	}
}

void func_54(bool bParam0, bool bParam1)//Position - 0x2D57
{
	var uVar0;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	uVar0 = func_55(0);
	func_36(39, bParam0, 0);
	func_36(40, bParam0, 0);
	func_36(41, bParam0, 0);
	if (!bParam0 || (bParam0 && uVar0))
	{
		func_36(43, bParam0, 0);
		func_36(42, bParam0, 0);
	}
	if (bParam1)
	{
		if (!func_43(39))
		{
			func_42(39);
		}
		if (!func_43(40))
		{
			func_42(40);
		}
		if (!func_43(41))
		{
			func_42(41);
		}
		if (!func_43(42))
		{
			func_42(42);
		}
		if (!func_43(43))
		{
			func_42(43);
		}
	}
}

int func_55(bool bParam0)//Position - 0x2E08
{
	int iVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2446554.f_1613, 26))
		{
			iVar0 = func_152(1179, -1, 0);
			if (!MISC::IS_BIT_SET(iVar0, 23))
			{
				return 0;
			}
		}
	}
	return func_50(122, -1);
}

bool func_56(int iParam0, bool bParam1)//Position - 0x2E69
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_6017 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_58(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4821 == 1)
		{
			return 1;
		}
	}
	if (func_47() || func_46())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_57())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return MISC::IS_BIT_SET(Global_1573723[iVar1], iVar0);
}

int func_57()//Position - 0x2FCE
{
	int iVar0;
	
	if (Global_1312448)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2446554.f_1618, 23))
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	iVar0 = Global_1335599[func_51(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2446554.f_1618), 23);
		return 1;
	}
	return 0;
}

bool func_58(int iParam0, int iParam1)//Position - 0x3034
{
	var uVar0;
	int iVar1;
	
	if (!func_78())
	{
		return 0;
	}
	if (func_60())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_59(iParam1);
	iVar1 = uVar0;
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_300, iVar1);
}

int func_59(int iParam0)//Position - 0x307C
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_60()//Position - 0x30DC
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 3);
}

void func_61(int iParam0, bool bParam1)//Position - 0x30F6
{
	int iVar0;
	int iVar1;
	
	if (iParam0 != -1)
	{
		if (bParam1)
		{
			if (!func_68(-1))
			{
				if (!func_78())
				{
					return;
				}
			}
			if (!func_68(-1))
			{
				if (iParam0 == 30)
				{
					if (!func_292() && !func_67())
					{
						return;
					}
				}
			}
			if (iParam0 == 60)
			{
				if (!func_66())
				{
					return;
				}
			}
			if (iParam0 == 29)
			{
				if (!func_68(-1))
				{
					if (!func_62())
					{
						return;
					}
				}
			}
		}
		iVar0 = iParam0;
		iVar1 = (iVar0 / 32);
		iVar0 = (iVar0 % 32);
		MISC::SET_BIT(&(Global_1573723[iVar1]), iVar0);
	}
}

int func_62()//Position - 0x318F
{
	int iVar0;
	
	if (func_65(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	iVar0 = Global_1335599[func_51(-1)];
	if (MISC::IS_BIT_SET(iVar0, 2))
	{
		func_63(1);
		return 1;
	}
	return 0;
}

void func_63(bool bParam0)//Position - 0x31C7
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 25))
		{
			func_64(PLAYER::PLAYER_ID(), 12);
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 25);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116, 25))
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_116), 25);
	}
}

void func_64(int iParam0, int iParam1)//Position - 0x3234
{
	var uVar0;
	int iVar1;
	
	uVar0 = func_59(iParam1);
	iVar1 = uVar0;
	MISC::SET_BIT(&(Global_1582596[iParam0 /*324*/].f_300), iVar1);
}

bool func_65(int iParam0)//Position - 0x325A
{
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_116, 25);
}

int func_66()//Position - 0x3289
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(Global_2446554.f_1618, 6))
	{
		return 1;
	}
	iVar0 = Global_1335599[func_51(-1)];
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		if (!MISC::IS_BIT_SET(Global_2446554.f_1618, 6))
		{
			MISC::SET_BIT(&(Global_2446554.f_1618), 6);
		}
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return 0;
}

bool func_67()//Position - 0x32F2
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 7);
}

bool func_68(int iParam0)//Position - 0x330C
{
	return func_50(123, iParam0);
}

int func_69(int iParam0)//Position - 0x331C
{
	int iVar0;
	int iVar1;
	
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 1:
		case 2:
		case 23:
		case 12:
		case 13:
		case 11:
		case 14:
		case 15:
		case 30:
		case 8:
		case 32:
		case 0:
		case 3:
		case 4:
		case 5:
		case 6:
		case 20:
		case 27:
		case 29:
		case 19:
		case 31:
		case 59:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 81:
		case 88:
		case 89:
		case 90:
		case 93:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 119:
		case 121:
		case 122:
		case 124:
		case 125:
		case 126:
		case 127:
		case 78:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
			iVar1 = iParam0;
			iVar1 = (iVar1 % 32);
			iVar0 = func_152(func_70(iParam0), -1, 0);
			if (MISC::IS_BIT_SET(iVar0, iVar1))
			{
				return 1;
			}
			break;
		
		default:
			return 1;
			break;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x350C
{
	int iVar0;
	
	iVar0 = (iParam0 / 32);
	switch (iVar0)
	{
		case 0:
			return 1188;
		
		case 1:
			return 1189;
		
		case 2:
			return 1190;
		
		case 3:
			return 1191;
		
		case 4:
			return 1192;
		
		default:
	}
	return 1188;
}

int func_71(int iParam0)//Position - 0x3570
{
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	switch (iParam0)
	{
		case 16:
		case 1:
		case 2:
		case 28:
			return 1;
		
		case 21:
			return 2;
		
		case 22:
		case 18:
		case 17:
		case 73:
		case 30:
		case 59:
		case 60:
		case 76:
		case 13:
		case 90:
		case 0:
		case 99:
		case 5:
		case 32:
		case 125:
			if (!func_68(-1))
			{
				return 3;
			}
			else
			{
				return 1;
			}
			break;
		
		case 23:
		case 102:
		case 110:
			return 5;
		
		case 12:
		case 11:
		case 14:
		case 15:
		case 27:
		case 122:
			return 6;
		
		case 97:
		case 107:
			return 7;
		
		case 4:
			return 8;
		
		case 19:
			return 8;
		
		case 29:
			return 10;
		
		case 8:
			return 11;
		
		case 61:
		case 119:
		case 121:
		case 96:
		case 128:
			return 12;
		
		case 89:
			return 13;
		
		case 31:
			return 14;
		
		case 3:
		case 78:
		case 103:
		case 124:
		case 126:
		case 127:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
			return 15;
		
		case 109:
		case 88:
			return 16;
		
		case 74:
		case 100:
			return 17;
		
		case 6:
			return 18;
		
		case 20:
			return 19;
		
		case 62:
		case 108:
			return 20;
		
		case 65:
		case 93:
			return 21;
		
		case 63:
		case 104:
			return 25;
		
		case 77:
		case 106:
			return 30;
		
		case 81:
		case 98:
			return 35;
		
		case 75:
		case 95:
			return 40;
		
		case 105:
			return 45;
			break;
		
		case 67:
		case 64:
			return 50;
	}
	return -1;
}

int func_72(int iParam0)//Position - 0x37EA
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return func_50(119, iParam0);
}

int func_73(int iParam0, bool bParam1)//Position - 0x381B
{
	if (bParam1)
	{
	}
	return func_74(iParam0, 0);
}

int func_74(int iParam0, int iParam1)//Position - 0x382F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_270489[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_270489[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_75(int iParam0, bool bParam1)//Position - 0x38EE
{
	if (bParam1)
	{
	}
	return func_76(iParam0);
}

int func_76(int iParam0)//Position - 0x3901
{
	if (Global_1312467.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1335605[func_51(-1)];
			}
			else if (func_77(iParam0))
			{
				return Global_1582596[iParam0 /*324*/].f_180.f_1;
			}
		}
	}
	else
	{
		return Global_1335605[func_51(-1)];
	}
	return 0;
}

int func_77(int iParam0)//Position - 0x395E
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2422140.f_1, iParam0);
	}
	return 1;
}

int func_78()//Position - 0x3983
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return func_50(120, -1);
}

void func_79(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x39B3
{
	int iVar0;
	
	if (func_80())
	{
		iVar0 = Global_2473393[iParam0 /*6*/][func_51(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_80()//Position - 0x39E5
{
	return 1;
	return 0;
}

void func_81(bool bParam0)//Position - 0x39F2
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 17))
		{
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 17);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 17))
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 17);
	}
}

int func_82(var uParam0)//Position - 0x3A55
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_89.f_5.f_5[PLAYER::PLAYER_ID()];
	if (MISC::IS_BIT_SET(Global_1582596[NETWORK::PARTICIPANT_ID_TO_INT() /*324*/].f_120, 2))
	{
		if (func_152(1155, -1, 0) > iLocal_392)
		{
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 10);
			if (iVar0 > -1)
			{
				iVar1 = iVar0;
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (func_297(iVar1, 1, 1))
					{
						if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 2))
						{
							Global_1675329.f_1 = iVar0;
							MISC::SET_BIT(&Global_1675329, 14);
						}
					}
				}
			}
			return 1;
		}
	}
	if (*uParam0 > 1)
	{
		if (func_84())
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1, 8))
			{
				if (iVar0 > -1)
				{
					iVar1 = iVar0;
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
					{
						if (func_297(iVar1, 1, 1))
						{
							Global_1675329.f_1 = iVar0;
							MISC::SET_BIT(&Global_1675329, 14);
						}
					}
				}
				return 1;
			}
		}
		else if (func_83())
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1, 8))
			{
				return 1;
			}
		}
	}
	if ((MISC::IS_BIT_SET(uParam0->f_1, 7) && !MISC::IS_BIT_SET(uParam0->f_1, 10)) && !MISC::IS_BIT_SET(uParam0->f_1, 9))
	{
		if (!func_20(&(uParam0->f_16)))
		{
			func_17(&(uParam0->f_16), 0, 0);
		}
		else if (func_19(&(uParam0->f_16), 3000, 0))
		{
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 11);
			return 1;
		}
	}
	return 0;
}

int func_83()//Position - 0x3BC1
{
	int iVar0;
	
	iVar0 = Local_89.f_5.f_5[PLAYER::PLAYER_ID()];
	if (iVar0 > -1)
	{
		if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 11))
		{
			return 1;
		}
	}
	return 0;
}

int func_84()//Position - 0x3BF6
{
	int iVar0;
	
	iVar0 = Local_89.f_5.f_5[PLAYER::PLAYER_ID()];
	if (iVar0 > -1)
	{
		if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 10))
		{
			return 1;
		}
	}
	return 0;
}

void func_85(var uParam0)//Position - 0x3C2B
{
	int iVar0;
	struct<3> Var1;
	
	if (MISC::IS_BIT_SET(uParam0->f_1, 6))
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
		{
			if (!func_106())
			{
				iVar0 = Local_89.f_5.f_38[PLAYER::PLAYER_ID()];
				if (iVar0 > -1)
				{
					Var1 = { func_87(iVar0) };
					if (!func_86(Var1, 0f, 0f, 0f))
					{
						if (!HUD::DOES_BLIP_EXIST(uParam0->f_5))
						{
							PATHFIND::_SET_IGNORE_SECONDARY_ROUTE_NODES(1);
							uParam0->f_5 = HUD::ADD_BLIP_FOR_COORD(Var1);
							HUD::SET_BLIP_SPRITE(uParam0->f_5, 52);
							HUD::SET_BLIP_SCALE(uParam0->f_5, 1f);
							HUD::SET_BLIP_PRIORITY(uParam0->f_5, 7);
							HUD::SET_BLIP_ROUTE(uParam0->f_5, 1);
						}
					}
				}
			}
		}
		else if (func_106())
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
			{
				HUD::REMOVE_BLIP(&(uParam0->f_5));
			}
		}
	}
}

bool func_86(struct<3> Param0, struct<3> Param3)//Position - 0x3CDF
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

Vector3 func_87(int iParam0)//Position - 0x3D08
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			Var0 = { -53.124f, -1756.405f, 28.421f };
			break;
		
		case 1:
			Var0 = { Vector(28.5036f, -1348.813f, 27.0641f) + Vector(0f, -0.4f, 2f) };
			break;
		
		case 2:
			Var0 = { -1226.464f, -902.5864f, 11.2783f };
			break;
		
		case 3:
			Var0 = { -711.721f, -916.6965f, 18.2145f };
			break;
		
		case 4:
			Var0 = { 1141.36f, -980.8802f, 45.4155f };
			break;
		
		case 5:
			Var0 = { -1491.057f, -383.5728f, 39.1706f };
			break;
		
		case 6:
			Var0 = { 376.6533f, 323.6471f, 102.5664f };
			break;
		
		case 7:
			Var0 = { 1159.542f, -326.6986f, 67.923f };
			break;
		
		case 8:
			Var0 = { 2559.247f, 385.5266f, 107.623f };
			break;
		
		case 9:
			Var0 = { -2973.262f, 390.8184f, 14.0433f };
			break;
		
		case 10:
			Var0 = { -3038.908f, 589.5187f, 6.9048f };
			break;
		
		case 11:
			Var0 = { -3240.317f, 1004.433f, 11.8307f };
			break;
		
		case 12:
			Var0 = { -1822.287f, 788.006f, 137.1859f };
			break;
		
		case 13:
			Var0 = { 544.2802f, 2672.811f, 41.1566f };
			break;
		
		case 14:
			Var0 = { Vector(37.1573f, 2703.114f, 1195.432f) + Vector(0f, 0.39f, -29.04f) };
			break;
		
		case 15:
			Var0 = { 1394.169f, 3599.86f, 34.0121f };
			break;
		
		case 16:
			Var0 = { 1965.054f, 3740.555f, 31.3448f };
			break;
		
		case 17:
			Var0 = { 2682.003f, 3282.543f, 54.2411f };
			break;
		
		case 18:
			Var0 = { 1698.808f, 4929.198f, 41.0783f };
			break;
		
		case 19:
			Var0 = { 1731.21f, 6411.403f, 34.0372f };
			break;
	}
	return Var0;
}

void func_88(var uParam0)//Position - 0x3F66
{
	int iVar0;
	
	switch (uParam0->f_2)
	{
		case 0:
			if (MISC::IS_BIT_SET(uParam0->f_1, 4))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_1, 5))
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!HUD::IS_PAUSE_MENU_ACTIVE())
						{
							if (func_90())
							{
								uParam0->f_2++;
							}
						}
					}
				}
				else
				{
					uParam0->f_2++;
				}
			}
			break;
		
		case 1:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_90())
					{
						func_154("FHU_HELP1", -1);
						uParam0->f_2++;
						iVar0 = func_152(1178, -1, 0);
						if (!MISC::IS_BIT_SET(iVar0, 1))
						{
							MISC::SET_BIT(&iVar0, 1);
							func_151(1178, iVar0, -1, 1);
						}
					}
				}
			}
			break;
		
		case 2:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				if (!HUD::IS_PAUSE_MENU_ACTIVE())
				{
					if (func_90())
					{
						if (func_147(1089470464))
						{
							if (!func_89())
							{
								func_154("FHU_HELP5", -1);
								uParam0->f_2++;
							}
							else if (!MISC::IS_BIT_SET(iLocal_226, 7) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 37))
							{
								func_154("FM_PASS_DBL", -1);
								MISC::SET_BIT(&iLocal_226, 7);
							}
						}
					}
				}
			}
			break;
	}
}

bool func_89()//Position - 0x4093
{
	return Global_1312418;
}

int func_90()//Position - 0x409F
{
	if (((((((((((((((!func_297(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || func_96(8, -1)) || func_96(15, -1)) || func_95()) || func_96(3, -1)) || HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) || func_289(PLAYER::PLAYER_ID(), 1)) || func_288()) || func_94()) || func_93()) || func_92()) || HUD::IS_PAUSE_MENU_ACTIVE()) || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) || func_91())
	{
		return 0;
	}
	return 1;
}

bool func_91()//Position - 0x4166
{
	return MISC::IS_BIT_SET(Global_2446554.f_1619, 12);
}

bool func_92()//Position - 0x417B
{
	return Global_2422140.f_2326.f_585;
}

bool func_93()//Position - 0x418D
{
	return Global_90014.f_291 > 0;
}

bool func_94()//Position - 0x419E
{
	return MISC::GET_GAME_TIMER() <= Global_17236.f_5130 + 100;
}

var func_95()//Position - 0x41B3
{
	return Global_2394603;
}

bool func_96(int iParam0, int iParam1)//Position - 0x41BF
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_97(var uParam0)//Position - 0x41FA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_84())
	{
		if (*uParam0 <= 1)
		{
			if (!MISC::IS_BIT_SET(uParam0->f_1, 8))
			{
				MISC::SET_BIT(&(uParam0->f_1), 8);
			}
		}
	}
	if (func_60())
	{
		if (!func_20(&uLocal_395) || func_19(&uLocal_395, 5000, 0))
		{
			if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 2))
			{
				if (iLocal_392 > -1)
				{
					iVar1 = func_152(1155, -1, 0);
					if (iLocal_392 != iVar1)
					{
						iLocal_392 = iVar1;
					}
					func_18(&uLocal_395);
					func_17(&uLocal_395, 0, 0);
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_1, 7))
	{
		if (!func_104())
		{
			iVar0 = func_152(1155, -1, 0);
			if (iLocal_392 > -1 && iVar0 == iLocal_392)
			{
				if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 2) && ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_hold_up")) == 0 && !MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16)) && !func_103()))
				{
					MISC::SET_BIT(&(uParam0->f_1), 9);
					MISC::SET_BIT(&(uParam0->f_1), 7);
				}
				else if (*uParam0 >= 1)
				{
					if ((!func_106() && !MISC::IS_BIT_SET(uParam0->f_1, 8)) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_hold_up")) == 0)
					{
						MISC::SET_BIT(&(uParam0->f_1), 9);
						MISC::SET_BIT(&(uParam0->f_1), 7);
					}
					else
					{
						MISC::SET_BIT(&(uParam0->f_1), 7);
					}
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_1, 10))
	{
		if (func_104())
		{
			if (MISC::IS_BIT_SET(uParam0->f_1, 7))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 7);
				MISC::CLEAR_BIT(&(uParam0->f_1), 9);
				MISC::CLEAR_BIT(&(uParam0->f_1), 10);
			}
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_1, 9))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_1, 10))
		{
			if (*uParam0 > 1)
			{
				if (func_147(10f))
				{
					iVar2 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0);
					if (iVar2 != func_102())
					{
						MISC::CLEAR_BIT(&(uParam0->f_1), 9);
						MISC::SET_BIT(&(uParam0->f_1), 10);
						func_99();
					}
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_226, 12))
	{
		if (func_106())
		{
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
			MISC::SET_BIT(&iLocal_226, 12);
		}
	}
	else if (!func_106())
	{
		NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
		MISC::CLEAR_BIT(&iLocal_226, 12);
	}
	if (func_147(25f))
	{
		if (!func_103())
		{
			func_98(1);
		}
	}
	else if (func_103())
	{
		func_98(0);
	}
}

void func_98(bool bParam0)//Position - 0x446A
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2446554.f_1619, 21))
		{
			MISC::SET_BIT(&(Global_2446554.f_1619), 21);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2446554.f_1619, 21))
	{
		MISC::CLEAR_BIT(&(Global_2446554.f_1619), 21);
	}
}

void func_99()//Position - 0x44B5
{
	int iVar0;
	
	if (Local_89.f_5.f_38[PLAYER::PLAYER_ID()] > -1)
	{
		iVar0 = func_11(Local_89.f_5.f_38[PLAYER::PLAYER_ID()]);
		func_100(iVar0, 1, func_101(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0)));
	}
}

void func_100(int iParam0, int iParam1, int iParam2)//Position - 0x44F3
{
	struct<4> Var0;
	
	Var0 = 19;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

int func_101(int iParam0)//Position - 0x4528
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_102()//Position - 0x453A
{
	return -1;
}

bool func_103()//Position - 0x4543
{
	return MISC::IS_BIT_SET(Global_2446554.f_1619, 21);
}

int func_104()//Position - 0x4558
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_89.f_5.f_38[PLAYER::PLAYER_ID()];
	iVar1 = func_11(iVar0);
	if (MISC::IS_BIT_SET(Global_2413838.f_65, iVar1))
	{
		return 1;
	}
	if (iVar0 > -1)
	{
		if (func_12(iVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_105(var uParam0)//Position - 0x459D
{
	int iVar0;
	int iVar1;
	
	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = Local_89.f_5.f_5[iVar1];
	if (!MISC::IS_BIT_SET(uParam0->f_1, 1) && !MISC::IS_BIT_SET(Global_1582596[iVar1 /*324*/].f_120, 8))
	{
		if (iVar0 > -1)
		{
			if (MISC::IS_BIT_SET(Global_1582596[iVar1 /*324*/].f_120, 6))
			{
				MISC::CLEAR_BIT(&(Global_1582596[iVar1 /*324*/].f_120), 6);
			}
			if (!func_149(iVar0, 1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 0);
				MISC::CLEAR_BIT(&(uParam0->f_1), 3);
			}
		}
	}
	else
	{
		if (*uParam0 < 3)
		{
			if (!MISC::IS_BIT_SET(Global_1582596[iVar1 /*324*/].f_120, 6))
			{
				MISC::SET_BIT(&(Global_1582596[iVar1 /*324*/].f_120), 6);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1582596[iVar1 /*324*/].f_120, 6))
		{
			MISC::CLEAR_BIT(&(Global_1582596[iVar1 /*324*/].f_120), 6);
		}
		if (iVar0 > -1)
		{
			if (func_149(iVar0, 1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_1), 1);
				MISC::CLEAR_BIT(&(uParam0->f_1), 0);
				MISC::CLEAR_BIT(&(Global_1582596[iVar1 /*324*/].f_120), 6);
			}
		}
	}
}

int func_106()//Position - 0x46A7
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { func_87(Local_89.f_5.f_38[PLAYER::PLAYER_ID()]) };
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!func_86(Var1, 0f, 0f, 0f))
		{
			iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
			if (iVar0 != 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Var1, 1) < 25f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_107(int iParam0, var uParam1, var uParam2)//Position - 0x470E
{
	int iVar0;
	
	if (func_20(&uParam1))
	{
		iVar0 = (iParam0 - NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam1));
		if (iVar0 >= 0)
		{
			func_108(iVar0, "FM_HTUT_TME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
	}
}

void func_108(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x4749
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_110(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		func_109(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = iParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}

void func_109(int iParam0, int iParam1)//Position - 0x4863
{
	MISC::SET_BIT(&(Global_1328872.f_3613[iParam0]), iParam1);
}

bool func_110(int iParam0, int iParam1)//Position - 0x487C
{
	return MISC::IS_BIT_SET(Global_1328872.f_3613[iParam0], iParam1);
}

void func_111()//Position - 0x4895
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(iLocal_226, 14))
	{
		if (!MISC::IS_BIT_SET(iLocal_226, 15))
		{
			iVar0 = 0;
			while (iVar0 <= 31)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (func_297(iVar1, 1, 1))
				{
					if (iVar1 != PLAYER::PLAYER_ID())
					{
						if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
						{
							if (func_118(iVar1))
							{
								MISC::SET_BIT(&iLocal_226, 15);
							}
						}
					}
				}
				iVar0++;
			}
		}
		else if (func_112(0, 1, 1))
		{
			func_154("FM_IHELP_BLP", -1);
			MISC::SET_BIT(&iLocal_226, 14);
		}
	}
}

int func_112(bool bParam0, bool bParam1, int iParam2)//Position - 0x491F
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_94())
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_289(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_116(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_92())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1573535)
	{
		return 0;
	}
	if (func_115())
	{
		return 0;
	}
	if (func_114())
	{
		return 0;
	}
	if (func_113())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (Global_2453241)
	{
		return 0;
	}
	return 1;
}

bool func_113()//Position - 0x4A07
{
	return Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_165 != 0;
}

bool func_114()//Position - 0x4A1E
{
	return Global_2428131.f_565;
}

bool func_115()//Position - 0x4A2D
{
	return Global_2428131.f_715;
}

int func_116(int iParam0)//Position - 0x4A3C
{
	if (Global_2414009[iParam0 /*254*/].f_205 == 0)
	{
		return 0;
	}
	return 1;
}

int func_117()//Position - 0x4A57
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

bool func_118(int iParam0)//Position - 0x4A79
{
	return HUD::DOES_BLIP_EXIST(Global_2410481[iParam0]);
}

int func_119(int iParam0, int iParam1)//Position - 0x4A8D
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = iParam0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (func_297(iVar0, 0, 1))
			{
				PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), iVar0, iParam1);
				return 1;
			}
		}
	}
	return 0;
}

void func_120(bool bParam0)//Position - 0x4AC4
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 7))
		{
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 7);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 7))
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 7);
	}
}

int func_121(char* sParam0)//Position - 0x4B23
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_31())
	{
		return 0;
	}
	if (Global_1312579 == 10)
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return 0;
	}
	return func_122(sParam0);
}

bool func_122(char* sParam0)//Position - 0x4B74
{
	if (!func_31())
	{
		return 0;
	}
	if (Global_1312579 == 10)
	{
		return func_123(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312579.f_10));
}

bool func_123(char* sParam0)//Position - 0x4BB8
{
	if (!func_31())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312579.f_14));
}

void func_124(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x4BEA
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (!func_297(iParam1, 1, 1))
	{
		return;
	}
	if (func_143(sParam0, iParam1))
	{
		return;
	}
	func_26();
	if (bParam2)
	{
		Global_1312579 = 6;
	}
	else
	{
		Global_1312579 = 5;
	}
	StringCopy(&(Global_1312579.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_1312579.f_7 = MISC::GET_HASH_KEY(&(Global_1312579.f_1));
	StringCopy(&(Global_1312579.f_10), sParam0, 16);
	Global_1312579.f_36 = iParam1;
	StringCopy(&(Global_1312579.f_14), PLAYER::GET_PLAYER_NAME(iParam1), 64);
	Global_1312579.f_37 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (bParam2)
	{
		if (Global_1312579.f_37 == -1)
		{
			Global_1312579.f_38 = func_129(Global_1312579.f_36, -2, 1, 0);
		}
		else
		{
			Global_1312579.f_38 = func_128(Global_1312579.f_37);
		}
	}
	func_127();
	func_126(bParam3);
	func_125();
}

void func_125()//Position - 0x4CCC
{
	MISC::SET_BIT(&(Global_1312579.f_39), 1);
}

void func_126(bool bParam0)//Position - 0x4CDF
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312579.f_39), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312579.f_39), 0);
}

void func_127()//Position - 0x4D05
{
	Global_1312579.f_8 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312579.f_9 = NETWORK::GET_NETWORK_TIME();
}

int func_128(int iParam0)//Position - 0x4D2A
{
	if (iParam0 == 0)
	{
	}
	return 116;
}

int func_129(int iParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x4D3A
{
	var uVar0;
	
	if (func_141(iParam0))
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_141(PLAYER::PLAYER_ID()) || (func_140() && func_139()))
	{
		uVar0 = func_138();
		if (ENTITY::DOES_ENTITY_EXIST(uVar0))
		{
			if (PED::IS_PED_A_PLAYER(uVar0))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0) != -1)
				{
					if (func_297(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0), 0, 1))
					{
						return func_136(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uVar0), iParam1, bParam2, bParam3);
					}
				}
			}
			else
			{
				return func_130(0, -1, 0);
			}
		}
	}
	return func_136(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_130(bool bParam0, int iParam1, bool bParam2)//Position - 0x4DDC
{
	return func_131(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_131(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x4DF2
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_135(iVar0, iParam2))
			{
				if (iVar0 == iParam2)
				{
					return func_134(1);
				}
				else
				{
					return func_134(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else
			{
				return func_132(iVar0, iParam2);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_134(1);
	}
	return func_134(0);
}

int func_132(int iParam0, int iParam1)//Position - 0x4E74
{
	int iVar0;
	
	iVar0 = func_133(iParam0, iParam1);
	switch (iVar0)
	{
		case 0:
			return 28;
		
		case 1:
			return 29;
		
		case 2:
			return 30;
		
		default:
	}
	return 28;
}

int func_133(int iParam0, int iParam1)//Position - 0x4EB0
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_135(iParam0, iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_134(bool bParam0)//Position - 0x4EF5
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_135(int iParam0, int iParam1)//Position - 0x4F0C
{
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_1602437.f_32, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_136(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x50C2
{
	int iVar0;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (iVar0 != -1)
	{
		if (func_137(iParam1, iParam0, iVar0, 0))
		{
			return func_134(1);
		}
		else
		{
			return func_131(iParam1, 1, iVar0, bParam4);
		}
	}
	else if (Global_1573687 || Global_1573678)
	{
		if (iParam0 == iParam1 || (Global_1573687 == 1 && Global_1573697 == 0))
		{
			return func_134(1);
		}
		else
		{
			return func_131(iParam1, 1, iVar0, bParam4);
		}
	}
	if (Global_1573682 && Global_1573268.f_11 == iParam0)
	{
		return 28;
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

bool func_137(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5181
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

var func_138()//Position - 0x51F9
{
	return Global_2359301.f_2;
}

bool func_139()//Position - 0x5207
{
	return MISC::IS_BIT_SET(Global_2359301, 4);
}

bool func_140()//Position - 0x5218
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_18, 14);
}

int func_141(int iParam0)//Position - 0x5235
{
	if (func_5(iParam0, 0))
	{
		return 1;
	}
	if (func_142())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_142()//Position - 0x5276
{
	return MISC::IS_BIT_SET(Global_2359301, 3);
}

bool func_143(char* sParam0, int iParam1)//Position - 0x5287
{
	if (!func_31())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_297(iParam1, 1, 1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312579.f_10)))
	{
		return 0;
	}
	return iParam1 == Global_1312579.f_36;
}

struct<13> func_144(int iParam0)//Position - 0x52DA
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_145()//Position - 0x52F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = Local_89.f_5.f_5[iVar0];
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (iVar1 > -1 && func_149(iVar1, 1))
			{
				iVar3 = iVar1;
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
				{
					if (func_297(iVar3, 0, 1))
					{
						uVar4 = PLAYER::GET_PLAYER_PED(iVar3);
						if (!PED::IS_PED_INJURED(uVar4))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uVar4))
							{
								if (PED::GET_VEHICLE_PED_IS_IN(uVar4, 0) == iVar2)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_146(float fParam0, float fParam1)//Position - 0x5384
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > fParam0)
			{
				if (func_147(fParam1))
				{
					if (!MISC::IS_BIT_SET(iLocal_226, 18))
					{
						MISC::SET_BIT(&iLocal_226, 18);
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_147(float fParam0)//Position - 0x53D8
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 > -1)
	{
		Var1 = { func_87(Local_89.f_5.f_38[iVar0]) };
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VDIST2(Var4, Var1) < (fParam0 * fParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_148(char* sParam0, bool bParam1)//Position - 0x5431
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
	{
		return;
	}
	if (func_122(sParam0))
	{
		return;
	}
	func_26();
	Global_1312579 = 0;
	StringCopy(&(Global_1312579.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_1312579.f_7 = MISC::GET_HASH_KEY(&(Global_1312579.f_1));
	StringCopy(&(Global_1312579.f_10), sParam0, 16);
	func_127();
	func_126(bParam1);
	func_125();
}

int func_149(int iParam0, bool bParam1)//Position - 0x549C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!func_297(iVar0, 0, 1))
	{
		return 0;
	}
	if (bParam1)
	{
		if (MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_120, 4))
		{
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_120, 8))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_120, 5))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_120, 12))
	{
		return 0;
	}
	return 1;
}

void func_150()//Position - 0x551C
{
	if (!MISC::IS_BIT_SET(iLocal_226, 16))
	{
		if (func_112(0, 1, 1))
		{
			func_154("FM_IHELP_INV", 10000);
			MISC::SET_BIT(&iLocal_226, 16);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_226, 6))
	{
		if (MISC::IS_BIT_SET(iLocal_226, 13))
		{
			if (!func_20(&uLocal_224))
			{
				func_17(&uLocal_224, 0, 0);
			}
			else if (func_19(&uLocal_224, 15000, 0))
			{
				if (func_112(0, 1, 1))
				{
					MISC::SET_BIT(&iLocal_226, 6);
				}
			}
		}
	}
}

void func_151(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5595
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_51(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_152(int iParam0, int iParam1, int iParam2)//Position - 0x55C0
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_51(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_153(int iParam0, int iParam1, int iParam2)//Position - 0x55F2
{
	struct<4> Var0;
	
	Var0 = 20;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	Var0.f_3 = iParam1;
	if (!iParam2 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam2);
	}
}

void func_154(char* sParam0, int iParam1)//Position - 0x5627
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_155(var uParam0)//Position - 0x563E
{
	switch (uParam0->f_3)
	{
		case 0:
			if (!func_20(&(uParam0->f_14)))
			{
				func_17(&(uParam0->f_14), 0, 0);
			}
			else if (func_19(&(uParam0->f_14), 7000, 0))
			{
				if (func_170())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
						{
							MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 16);
						}
						if (!func_169(0))
						{
							func_162(19, 30, "", 0);
							func_154("FM_IHELP_QNV", -1);
							uParam0->f_3++;
						}
					}
					else if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
					{
						func_148("FM_IHELP_LCP", 0);
						MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 16);
						if (func_161("FM_IHELP_INV2") || func_161("FM_IHELP_INV"))
						{
							HUD::CLEAR_HELP(1);
						}
					}
				}
			}
			break;
		
		case 1:
			if (func_156(19, 30))
			{
				HUD::CLEAR_HELP(1);
				uParam0->f_3++;
			}
			else if (func_170())
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_121("FM_IHELP_LCP"))
					{
						func_25();
					}
					if ((!func_20(&uLocal_393) || func_19(&uLocal_393, 20000, 0)) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
					{
						if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
						{
							MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 16);
						}
						if (!MISC::IS_BIT_SET(iLocal_226, 16))
						{
							if (!func_161("FM_IHELP_INV"))
							{
								if (!func_161("FM_IHELP_QNV"))
								{
									if (func_90())
									{
										func_154("FM_IHELP_INV", 10000);
										MISC::SET_BIT(&iLocal_226, 16);
									}
								}
							}
						}
						else if (!func_161("FM_IHELP_INV"))
						{
							if (!func_161("FM_IHELP_INV2"))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (func_90())
									{
										func_154("FM_IHELP_INV2", -1);
										func_18(&uLocal_393);
										func_17(&uLocal_393, 0, 0);
									}
								}
							}
						}
					}
				}
				else if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
				{
					func_148("FM_IHELP_LCP", 0);
					MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 16);
					if ((func_161("FM_IHELP_INV2") || func_161("FM_IHELP_INV")) || func_161("FM_IHELP_QNV"))
					{
						HUD::CLEAR_HELP(1);
					}
				}
			}
			else if ((func_161("FM_IHELP_INV2") || func_161("FM_IHELP_INV")) || func_161("FM_IHELP_QNV"))
			{
				HUD::CLEAR_HELP(1);
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_156(int iParam0, int iParam1)//Position - 0x58E9
{
	int iVar0;
	
	iVar0 = func_160(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2394011[iVar0 /*43*/].f_7)
	{
		return 0;
	}
	if (!Global_2394011[iVar0 /*43*/].f_1)
	{
		return 0;
	}
	func_157(iVar0);
	Global_2394849 = MISC::GET_GAME_TIMER() + 1500;
	return 1;
}

void func_157(int iParam0)//Position - 0x593C
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1335219)
	{
		return;
	}
	if (Global_2394011[iParam0 /*43*/].f_25 != -1)
	{
		HUD::THEFEED_REMOVE_ITEM(Global_2394011[iParam0 /*43*/].f_25);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1335219)
	{
		Global_2394011[iVar0 /*43*/] = { Global_2394011[iVar1 /*43*/] };
		Global_2394011[iVar0 /*43*/] = { Global_2394011[iVar1 /*43*/] };
		iVar0++;
		iVar1++;
	}
	func_159(iVar0);
	Global_1335219 = (Global_1335219 - 1);
	if (Global_1335190)
	{
		if (Global_1335188 > 0)
		{
			func_158();
		}
	}
}

void func_158()//Position - 0x59DD
{
	Global_1335190 = 0;
}

void func_159(int iParam0)//Position - 0x59EA
{
	Global_2394011[iParam0 /*43*/] = 0;
	Global_2394011[iParam0 /*43*/].f_1 = 0;
	Global_2394011[iParam0 /*43*/].f_2 = 0;
	Global_2394011[iParam0 /*43*/].f_3 = 0;
	Global_2394011[iParam0 /*43*/].f_4 = func_102();
	Global_2394011[iParam0 /*43*/].f_5 = 145;
	Global_2394011[iParam0 /*43*/].f_6 = 1;
	Global_2394011[iParam0 /*43*/].f_7 = -1;
	Global_2394011[iParam0 /*43*/].f_8 = -1;
	StringCopy(&(Global_2394011[iParam0 /*43*/].f_9), "", 64);
	Global_2394011[iParam0 /*43*/].f_25 = -1;
	StringCopy(&(Global_2394011[iParam0 /*43*/].f_26), "", 32);
	Global_2394011[iParam0 /*43*/].f_34 = -1;
	Global_2394011[iParam0 /*43*/].f_35 = -1;
	Global_2394011[iParam0 /*43*/].f_36 = 0;
	Global_2394011[iParam0 /*43*/].f_38 = 0;
	Global_2394011[iParam0 /*43*/].f_39 = -1;
	Global_2394011[iParam0 /*43*/].f_40 = 0;
	Global_2394011[iParam0 /*43*/].f_41 = 0;
	Global_2394011[iParam0 /*43*/].f_42 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2394011[iParam0 /*43*/].f_37 = NETWORK::GET_NETWORK_TIME();
	}
}

int func_160(int iParam0)//Position - 0x5AEB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1335219)
	{
		if (!Global_2394011[iVar0 /*43*/].f_6)
		{
			if (Global_2394011[iVar0 /*43*/].f_5 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

bool func_161(char* sParam0)//Position - 0x5B2E
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_162(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x5B41
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_160(iParam0);
	if (iVar0 != -1)
	{
		func_157(iVar0);
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_163(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1);
}

void func_163(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7)//Position - 0x5B7C
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar19;
	
	uVar0 = func_102();
	iVar1 = 145;
	if (bParam2)
	{
		uVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_168())
		{
			return;
		}
	}
	iVar2 = Global_1335219;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2394011[iVar2 /*43*/] = { Global_2394011[iVar3 /*43*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1335219++;
	if (Global_1335219 > 12)
	{
		Global_1335219 = 12;
	}
	iVar4 = 0;
	Global_2394011[iVar4 /*43*/] = 0;
	Global_2394011[iVar4 /*43*/].f_1 = 0;
	Global_2394011[iVar4 /*43*/].f_2 = 0;
	Global_2394011[iVar4 /*43*/].f_3 = 0;
	Global_2394011[iVar4 /*43*/].f_4 = uVar0;
	Global_2394011[iVar4 /*43*/].f_5 = iVar1;
	Global_2394011[iVar4 /*43*/].f_6 = bParam2;
	Global_2394011[iVar4 /*43*/].f_7 = iParam0;
	Global_2394011[iVar4 /*43*/].f_8 = -1;
	StringCopy(&(Global_2394011[iVar4 /*43*/].f_9), sParam3, 64);
	Global_2394011[iVar4 /*43*/].f_25 = -1;
	StringCopy(&(Global_2394011[iVar4 /*43*/].f_26), sParam4, 32);
	Global_2394011[iVar4 /*43*/].f_34 = iParam6;
	Global_2394011[iVar4 /*43*/].f_35 = iParam7;
	Global_2394011[iVar4 /*43*/].f_36 = 0;
	Global_2394011[iVar4 /*43*/].f_37 = NETWORK::GET_NETWORK_TIME();
	Global_2394011[iVar4 /*43*/].f_38 = uParam5;
	Global_2394011[iVar4 /*43*/].f_39 = Global_2394848;
	if (iParam0 == 123)
	{
		Global_2394011[iVar4 /*43*/].f_8 = func_165();
	}
	Global_2394848++;
	func_164();
	Global_2394011[iVar4 /*43*/].f_40 = 0;
	Global_2394011[iVar4 /*43*/].f_41 = 0;
	Global_2394011[iVar4 /*43*/].f_42 = 0;
	if (MISC::IS_DURANGO_VERSION())
	{
		if (bParam2)
		{
			bVar5 = true;
			if (bVar5)
			{
				Var6 = { func_144(uVar0) };
				iVar19 = NETWORK::_0x36391F397731595D(&Var6);
				if (iVar19 != -1)
				{
					Global_2394011[iVar4 /*43*/].f_40 = iVar19;
					Global_2394011[iVar4 /*43*/].f_41 = 1;
					Global_2394011[iVar4 /*43*/].f_42 = 0;
				}
			}
		}
	}
}

void func_164()//Position - 0x5D7B
{
	Global_1335192 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 30000);
}

int func_165()//Position - 0x5D92
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_167() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) || MISC::ARE_STRINGS_EQUAL(".", &cVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = 0;
	iVar6 = 0;
	while (iVar6 < 7)
	{
		switch (iVar6)
		{
			case 0:
				StringCopy(&cVar0, func_166(13, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_166(14, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_166(15, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_166(16, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_166(17, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_166(18, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_166(19, -1), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) && !MISC::ARE_STRINGS_EQUAL(".", &cVar0))
		{
			iVar7++;
		}
		iVar6++;
	}
	if (iVar7 == 0)
	{
		return -1;
	}
	uVar8 = func_152(2534, -1, 0);
	iVar9 = 0;
	iVar6 = 0;
	while (iVar6 < iVar7)
	{
		iVar9 = iVar6 * 3;
		if (iVar9 != -1)
		{
			if (!MISC::IS_BIT_SET(uVar8, iVar9))
			{
				return 7;
			}
		}
		iVar6++;
	}
	return 1;
}

var func_166(int iParam0, int iParam1)//Position - 0x5EDF
{
	var uVar0;
	
	uVar0 = Global_2474732[iParam0 /*6*/][func_51(iParam1)];
	return STATS::STAT_GET_STRING(uVar0, -1);
}

struct<6> func_167()//Position - 0x5F00
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1689618.f_10)))
	{
		iVar7 = func_152(2535, -1, 0);
		if (iVar7 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar6 = 0;
			while (iVar6 < 1118)
			{
				if ((Global_794503.f_4[iVar6 /*86*/].f_65 == 0 && Global_794503.f_4[iVar6 /*86*/].f_68 == 1) && MISC::IS_BIT_SET(Global_794503.f_4[iVar6 /*86*/].f_76, 13))
				{
					if (Global_794503.f_96153[iVar6 /*11*/].f_1 == iVar7)
					{
						Var0 = { Global_794503.f_108453[Global_794503.f_96153[iVar6 /*11*/].f_9 /*6*/] };
						iVar6 = 1118;
					}
				}
				iVar6++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
			}
		}
		Global_1689618.f_10 = { Var0 };
		return Var0;
	}
	return Global_1689618.f_10;
}

bool func_168()//Position - 0x5FDF
{
	return Global_1315857 == 10;
}

int func_169(int iParam0)//Position - 0x5FEE
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
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
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

int func_170()//Position - 0x6048
{
	if (func_171() == 0)
	{
		return 1;
	}
	return 0;
}

int func_171()//Position - 0x605D
{
	return Global_1312467.f_18;
}

bool func_172()//Position - 0x606B
{
	var uVar0;
	
	if (!MISC::IS_BIT_SET(iLocal_226, 2))
	{
		if (!MISC::IS_BIT_SET(iLocal_226, 10))
		{
			if (func_280(1103626240))
			{
				MISC::SET_BIT(&iLocal_226, 9);
			}
			MISC::SET_BIT(&iLocal_226, 10);
		}
		else if (!MISC::IS_BIT_SET(iLocal_226, 9))
		{
			if (!MISC::IS_BIT_SET(iLocal_226, 3))
			{
				if (!MISC::IS_BIT_SET(iLocal_226, 5) || (MISC::IS_BIT_SET(iLocal_226, 5) && func_19(&uLocal_222, 60000, 0)))
				{
					if (func_276())
					{
						if (!MISC::IS_BIT_SET(iLocal_226, 4))
						{
							func_274(19, 3, 0);
							func_273(&uLocal_227, 1, 0, "Lamar", 0, 1);
							MISC::SET_BIT(&iLocal_226, 4);
						}
						else
						{
							MISC::SET_BIT(&uVar0, 4);
							MISC::SET_BIT(&uVar0, 7);
							if (func_269(&uLocal_227, 19, "FM_1AU", "FM_HOLD", uVar0, 0))
							{
								MISC::SET_BIT(&iLocal_226, 3);
								MISC::CLEAR_BIT(&iLocal_226, 5);
							}
						}
					}
				}
			}
			else if (!func_282())
			{
				if (func_268())
				{
					MISC::SET_BIT(&iLocal_226, 2);
					func_267(0);
				}
				else
				{
					func_18(&uLocal_222);
					func_17(&uLocal_222, 0, 0);
					MISC::CLEAR_BIT(&iLocal_226, 3);
					MISC::SET_BIT(&iLocal_226, 5);
				}
			}
		}
		else if (func_276())
		{
			if (func_173(19, "CELL_HOLD", 0, 0))
			{
				MISC::SET_BIT(&iLocal_226, 2);
				func_267(0);
			}
		}
	}
	return MISC::IS_BIT_SET(iLocal_226, 2);
}

bool func_173(int iParam0, char* sParam1, bool bParam2, int iParam3)//Position - 0x61AF
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_174(iParam0, sParam1, sVar0, bVar1, iVar2, sVar0, sVar0, bParam2, iParam3);
}

int func_174(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, char* sParam6, bool bParam7, var uParam8)//Position - 0x61D8
{
	var uVar0;
	int iVar165;
	
	uVar0 = 16;
	iVar165 = 2;
	if (bParam7)
	{
		iVar165 = 5;
	}
	return func_175(&uVar0, iParam0, func_266(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
}

int func_175(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x6211
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_265(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_264(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_259(uParam6))
	{
		return 0;
	}
	if (func_256(iVar0, iVar1, iVar2))
	{
		if (func_255())
		{
			return 0;
		}
		func_254();
		return func_182(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_181(iParam4))
	{
		return 0;
	}
	func_176(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_176(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)//Position - 0x62F6
{
	Global_1321259.f_40.f_1 = iParam0;
	Global_1321259.f_40.f_2 = iParam1;
	Global_1321259.f_40.f_3 = iParam2;
	StringCopy(&(Global_1321259.f_40.f_4), sParam3, 16);
	Global_1321259.f_40.f_8 = iParam4;
	Global_1321259.f_40.f_9 = iParam5;
	Global_1321259.f_40.f_14 = uParam6;
	func_177(iParam4);
	func_254();
	Global_1321259.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_177(int iParam0)//Position - 0x6363
{
	if (func_180(iParam0))
	{
		func_179();
		return;
	}
	func_178();
}

void func_178()//Position - 0x637F
{
	Global_1321259.f_40.f_10 = 0;
}

void func_179()//Position - 0x6390
{
	Global_1321259.f_40.f_10 = 1;
}

int func_180(int iParam0)//Position - 0x63A1
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_181(int iParam0)//Position - 0x63E9
{
	return iParam0 > Global_1321259.f_40.f_8;
}

int func_182(var uParam0, int iParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x63FC
{
	struct<2> Var0;
	
	func_253();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_250(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_247(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_250(uParam0, sParam3, sParam4);
		}
		return func_231(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_230(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_220(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_219(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_183(iParam1, uParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_183(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x64F6
{
	bool bVar0;
	
	func_218();
	bVar0 = true;
	if (func_185(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_184(120000);
		return 1;
	}
	return 0;
}

void func_184(int iParam0)//Position - 0x652D
{
	Global_1321259.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1321259.f_40.f_12 = 1;
}

int func_185(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x6550
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_102();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_212(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1321259.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_211(sParam5, bParam6, &iVar3);
	uVar5 = func_209(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_208(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_189(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_188();
	}
	func_218();
	func_187();
	func_186();
	return 1;
}

void func_186()//Position - 0x66A0
{
	Global_1321259.f_57 = 0;
	Global_1321259.f_57.f_1 = 0;
}

void func_187()//Position - 0x66B8
{
	Global_1321259.f_40 = 3;
}

void func_188()//Position - 0x66C7
{
	MISC::SET_BIT(&Global_2263, 8);
}

int func_189(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x66D8
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_190(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			MISC::SET_BIT(&Global_2544648, 0);
		}
		return 1;
	}
	return 0;
}

int func_190(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x6744
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_202();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_2544633 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_201() == 0)
	{
		func_199();
		return 0;
	}
	func_198(Global_2544632);
	StringCopy(&(Global_2543383[Global_2544632 /*104*/]), sParam1, 64);
	Global_2543383[Global_2544632 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_2543383[Global_2544632 /*104*/].f_24 = iParam2;
	}
	Global_2543383[Global_2544632 /*104*/].f_25 = iParam7;
	Global_2543383[Global_2544632 /*104*/].f_26 = uParam8;
	Global_2543383[Global_2544632 /*104*/].f_29 = uParam9;
	Global_2543383[Global_2544632 /*104*/].f_30 = uParam12;
	Global_2543383[Global_2544632 /*104*/].f_31 = uParam11;
	Global_2543383[Global_2544632 /*104*/].f_28 = 0;
	Global_2543383[Global_2544632 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_33), sParam4, 64);
	Global_2543383[Global_2544632 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_50), sParam5, 64);
	Global_2543383[Global_2544632 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_2543383[Global_2544632 /*104*/].f_83), sParam15, 64);
	func_202();
	switch (iParam16)
	{
		case 3:
			Global_2543383[Global_2544632 /*104*/].f_99[Global_14393] = 1;
			break;
		
		case 0:
			Global_2543383[Global_2544632 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_2543383[Global_2544632 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_2543383[Global_2544632 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14393)
		{
			case 0:
				func_197(0);
				break;
			
			case 1:
				func_197(1);
				break;
			
			case 2:
				func_197(2);
				break;
			
			case 3:
				func_197(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_2544633 = 1;
				break;
			
			case 0:
				Global_2544633 = 1;
				break;
			
			case 2:
				Global_2544633 = 1;
				break;
			
			case 1:
				Global_2544633 = 1;
				break;
			}
	}
	Global_16761[Global_2544632] = 0;
	if (bParam10)
	{
		func_202();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_196())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			func_195(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_191(1);
			func_195(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_191(int iParam0)//Position - 0x6B07
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
	
	Global_16760 = 0;
	Global_2868 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2832[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_194(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar2 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_193(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2270[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2270[iVar1 /*15*/].f_4)
					{
						if (Global_2832[iVar0] == 0)
						{
							Global_2796[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar3 /*104*/].f_99[Global_14393] == 1)
											{
												Global_16760++;
											}
										}
									}
									iVar3++;
								}
								func_192(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16760), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_68245)
								{
									iVar4 = 0;
									iVar5 = 0;
									while (iVar4 < 12)
									{
										if (Global_2543383[iVar4 /*104*/].f_24 != 0)
										{
											if (Global_2543383[iVar4 /*104*/].f_28 == 0)
											{
												if (Global_2543383[iVar4 /*104*/].f_99[Global_14393] == 1)
												{
													iVar5++;
												}
											}
										}
										iVar4++;
									}
									func_192(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar5), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14393)
									{
										case 0:
											iVar6 = Global_35962;
											break;
										
										case 1:
											iVar6 = Global_35963;
											break;
										
										case 2:
											iVar6 = Global_35964;
											break;
										
										default:
											break;
									}
									func_192(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_192(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16755), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_193(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2269);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2264, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_193(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2264, 3))
								{
									iVar8 = 42;
									Global_14555 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14555 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_193(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_2270[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_193(&(Global_2270[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else
							{
								func_192(Global_14374, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2270[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2270[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2832[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_192(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x6F9D
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_193(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_193(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_193(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_193(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_193(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_193(char* sParam0)//Position - 0x7050
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_194(int iParam0)//Position - 0x7062
{
	return Global_34913 == iParam0;
}

void func_195(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x7070
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_196()//Position - 0x70D3
{
	return Global_1315900;
}

void func_197(int iParam0)//Position - 0x70DF
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_198(int iParam0)//Position - 0x70FE
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = CLOCK::GET_CLOCK_SECONDS();
	uVar1 = CLOCK::GET_CLOCK_MINUTES();
	uVar2 = CLOCK::GET_CLOCK_HOURS();
	uVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	uVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_2543383[iParam0 /*104*/].f_18 = uVar0;
	Global_2543383[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_2543383[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_2543383[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_2543383[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_2543383[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_199()//Position - 0x717E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_2544632 = 11;
	Global_2543383[Global_2544632 /*104*/].f_18 = -1;
	Global_2543383[Global_2544632 /*104*/].f_18.f_1 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_2 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_3 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_200(Global_2543383[iVar2 /*104*/].f_18, Global_2543383[Global_2544632 /*104*/].f_18))
		{
			Global_2544632 = iVar2;
		}
		iVar2++;
	}
	Global_2543383[Global_2544632 /*104*/].f_24 = 1;
}

int func_200(struct<6> Param0, struct<6> Param6)//Position - 0x7228
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_201()//Position - 0x7313
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_2543383[iVar2 /*104*/].f_24 == 0)
		{
			Global_2544632 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_2544632 = 11;
	Global_2543383[Global_2544632 /*104*/].f_18 = -1;
	Global_2543383[Global_2544632 /*104*/].f_18.f_1 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_2 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_3 = 0;
	Global_2543383[Global_2544632 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_2543383[iVar2 /*104*/].f_24 == 0 || Global_2543383[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_200(Global_2543383[iVar2 /*104*/].f_18, Global_2543383[Global_2544632 /*104*/].f_18))
			{
				Global_2544632 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_2544632 == 11)
	{
		return 0;
	}
	Global_2543383[Global_2544632 /*104*/].f_99[0] = 0;
	Global_2543383[Global_2544632 /*104*/].f_99[1] = 0;
	Global_2543383[Global_2544632 /*104*/].f_99[2] = 0;
	return 1;
}

void func_202()//Position - 0x743E
{
	if (func_194(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_203();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

var func_203()//Position - 0x74DF
{
	func_204();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_204()//Position - 0x74F8
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_207(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_206(PLAYER::PLAYER_PED_ID());
			if (func_205(iVar0) && (!func_194(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_205(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_205(int iParam0)//Position - 0x75F5
{
	return iParam0 < 3;
}

int func_206(var uParam0)//Position - 0x7601
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_207(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_207(int iParam0)//Position - 0x763E
{
	if (func_205(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_208(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x7668
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_190(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2970 = iParam10;
			MISC::SET_BIT(&Global_2544648, 0);
		}
		return 1;
	}
	return 0;
}

int func_209(int iParam0, int iParam1)//Position - 0x76EA
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_210(2, iParam1);
	return iParam0;
}

void func_210(int iParam0, var uParam1)//Position - 0x7709
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_211(char* sParam0, bool bParam1, int iParam2)//Position - 0x77BA
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_17;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_17))
	{
		return sLocal_17;
	}
	func_210(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_212(int iParam0)//Position - 0x77F7
{
	int iVar0;
	
	iVar0 = func_215(iParam0);
	if (iVar0 == -1)
	{
		func_213(iParam0, 1);
		return 0;
	}
	Global_1336400[iVar0 /*5*/].f_4 = 1;
	return Global_1336400[iVar0 /*5*/].f_2;
}

void func_213(int iParam0, bool bParam1)//Position - 0x782D
{
	if (!func_297(iParam0, 0, 1))
	{
		return;
	}
	if (func_215(iParam0) != -1)
	{
		return;
	}
	if (Global_1336563)
	{
		if (iParam0 == Global_1336563.f_1)
		{
			return;
		}
	}
	if (func_214(iParam0))
	{
		return;
	}
	if (Global_1336601 >= 32)
	{
		return;
	}
	Global_1336568[Global_1336601] = iParam0;
	Global_1336601++;
	if (bParam1)
	{
	}
}

int func_214(int iParam0)//Position - 0x7899
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1336601)
	{
		if (Global_1336568[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_215(int iParam0)//Position - 0x78CB
{
	int iVar0;
	
	if (!func_297(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1336561 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1336561)
	{
		if (Global_1336400[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1336400[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1336400[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_216(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_216(int iParam0)//Position - 0x794A
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1336561)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1336400[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1336400[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1336400[iParam0 /*5*/].f_2), 64);
			HUD::_THEFEED_ADD_TXD_REF(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1336400[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1336561)
	{
		Global_1336400[iVar32 /*5*/] = { Global_1336400[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_217(&(Global_1336400[iVar32 /*5*/]));
	Global_1336561 = (Global_1336561 - 1);
}

void func_217(var uParam0)//Position - 0x7A00
{
	*uParam0 = 0;
	uParam0->f_1 = func_102();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_218()//Position - 0x7A2D
{
	Global_1321259.f_40.f_9 = 4;
}

int func_219(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x7A3E
{
	bool bVar0;
	
	func_218();
	bVar0 = false;
	return func_185(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_220(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x7A65
{
	bool bVar0;
	
	bVar0 = false;
	return func_221(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_221(int iParam0, var uParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x7A88
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_102();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_212(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1321259.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16753 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_211(sParam5, bParam6, &iVar3);
	uVar5 = func_209(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (MISC::IS_BIT_SET(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_229(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_223(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_188();
	}
	func_222();
	func_187();
	func_186();
	return 1;
}

void func_222()//Position - 0x7BDD
{
	Global_1321259.f_40.f_9 = 3;
}

int func_223(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x7BEE
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_224(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_224(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x7C86
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_202();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_228() == 0)
	{
		func_226();
		return 0;
	}
	func_225(Global_16759);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/]), sParam1, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_25 = iParam7;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_26 = uParam8;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_29 = uParam9;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_30 = uParam12;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_31 = uParam11;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_28 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2263, 10))
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
		Global_2969 = 4;
		func_197(0);
		func_197(2);
		func_197(1);
	}
	else
	{
		func_202();
		switch (iParam16)
		{
			case 3:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14393)
			{
				case 0:
					func_197(0);
					Global_2969 = 0;
					break;
				
				case 1:
					func_197(1);
					Global_2969 = 1;
					break;
				
				case 2:
					func_197(2);
					Global_2969 = 2;
					break;
				
				case 3:
					func_197(3);
					Global_2969 = 3;
					break;
				
				default:
					Global_2969 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2263, 10))
		{
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16761[Global_16759] = 0;
	if (bParam10)
	{
		func_202();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_196())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			func_195(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_191(1);
			func_195(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_225(int iParam0)//Position - 0x8153
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	uVar0 = CLOCK::GET_CLOCK_SECONDS();
	uVar1 = CLOCK::GET_CLOCK_MINUTES();
	uVar2 = CLOCK::GET_CLOCK_HOURS();
	uVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	uVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18 = uVar0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18.f_1 = uVar1;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18.f_2 = uVar2;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18.f_3 = uVar3;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iParam0 /*104*/].f_18.f_5 = uVar5;
}

void func_226()//Position - 0x81E5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_16759 = 34;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18 = -1;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_227(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar2 /*104*/].f_18, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18))
		{
			Global_16759 = iVar2;
		}
		iVar2++;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_24 = 1;
}

int func_227(struct<6> Param0, struct<6> Param6)//Position - 0x82B0
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6 = Param6;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_228()//Position - 0x839B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_68245)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar2 /*104*/].f_24 == 0)
		{
			Global_16759 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16759 = 34;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18 = -1;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_1 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_2 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_3 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar2 /*104*/].f_24 == 0 || Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_227(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[iVar2 /*104*/].f_18, Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_18))
			{
				Global_16759 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_16759 == 34)
	{
		return 0;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 0;
	return 1;
}

int func_229(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x84F2
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 3;
	if (func_224(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_2970 = iParam10;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			StringCopy(&Global_2951, sParam5, 64);
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_230(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x85A7
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_222();
	bVar0 = true;
	if (func_221(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_184(120000);
		return 1;
	}
	return 0;
}

int func_231(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x85F9
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_246(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_237(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			func_236(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			func_235(1);
		}
		func_234();
		func_187();
		func_233();
		func_232();
		return 1;
	}
	return 0;
}

void func_232()//Position - 0x869C
{
	Global_2452829 = 0;
}

void func_233()//Position - 0x86A9
{
	Global_1321259.f_57 = 1;
	Global_1321259.f_57.f_1 = 0;
}

void func_234()//Position - 0x86C1
{
	Global_1321259.f_40.f_9 = 1;
}

void func_235(int iParam0)//Position - 0x86D2
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2265, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2265, 0);
	}
}

void func_236(int iParam0)//Position - 0x86F3
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 20);
	}
}

int func_237(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x8716
{
	func_245(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	Global_2621441 = 0;
	return func_238(sParam3, iParam4, bParam7);
}

int func_238(char* sParam0, int iParam1, bool bParam2)//Position - 0x8764
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_244();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_96(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_243();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam2)
			{
				func_202();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_242())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_241())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2263, 9))
				{
					return 0;
				}
			}
			func_240();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_239();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_244();
	}
	return 0;
}

void func_239()//Position - 0x8A30
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15692 = 1;
}

void func_240()//Position - 0x8A60
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	MISC::CLEAR_BIT(&Global_2264, 16);
}

int func_241()//Position - 0x8AF5
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_242()//Position - 0x8B1C
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_243()//Position - 0x8BB5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

void func_244()//Position - 0x8C0B
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_245(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x8C62
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_246(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x8CB8
{
	func_245(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15740 = 1;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 0;
	Global_15746 = 0;
	Global_2621441 = 0;
	return func_238(sParam3, iParam4, bParam7);
}

int func_247(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x8D06
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_249(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_248();
		func_234();
		func_187();
		func_233();
		func_232();
		return 1;
	}
	return 0;
}

void func_248()//Position - 0x8D58
{
	Global_16710 = 0;
}

bool func_249(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x8D64
{
	func_245(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15740 = 0;
	Global_15699 = 1;
	Global_15706 = 0;
	Global_15701 = 1;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_15697 = 0;
	Global_15744 = 1;
	Global_15746 = 0;
	StringCopy(&Global_15840, sParam5, 24);
	Global_2621441 = 0;
	return func_238(sParam3, iParam4, bParam8);
}

int func_250(var uParam0, char* sParam1, char* sParam2)//Position - 0x8DB9
{
	if (func_252(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_251();
		func_187();
		func_233();
		return 1;
	}
	return 0;
}

void func_251()//Position - 0x8DE4
{
	Global_1321259.f_40.f_9 = 2;
}

bool func_252(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8DF5
{
	func_245(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_238(sParam2, iParam3, 0);
}

void func_253()//Position - 0x8E43
{
	Global_1321259.f_55 = Global_1321259.f_40.f_1;
	Global_1321259.f_55.f_1 = Global_1321259.f_40.f_10;
}

void func_254()//Position - 0x8E69
{
	Global_1321259.f_40 = 1;
}

bool func_255()//Position - 0x8E78
{
	return Global_1321259.f_40 == 1;
}

int func_256(int iParam0, int iParam1, int iParam2)//Position - 0x8E88
{
	if (!func_257(iParam0))
	{
		return 0;
	}
	if (Global_1321259.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1321259.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_257(int iParam0)//Position - 0x8EC7
{
	if (!func_258())
	{
		return 0;
	}
	if (!Global_1321259.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_258()//Position - 0x8EEF
{
	if (Global_1321259.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0)//Position - 0x8F06
{
	if (func_263())
	{
		return 0;
	}
	if (func_262())
	{
		return 0;
	}
	if (func_169(0))
	{
		return 0;
	}
	if (Global_1312467.f_18 != 0)
	{
		return 0;
	}
	if (Global_1683626 || func_261())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(uParam0, 6))
	{
		if (func_260())
		{
			return 0;
		}
	}
	return 1;
}

bool func_260()//Position - 0x8F6A
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1335192);
}

int func_261()//Position - 0x8F7E
{
	if (Global_2535381.f_796 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_262()//Position - 0x8F96
{
	return Global_1321259.f_40 == 3;
}

bool func_263()//Position - 0x8FA6
{
	return func_241();
}

int func_264(int iParam0, int iParam1, int iParam2)//Position - 0x8FB2
{
	if (!func_262())
	{
		return 0;
	}
	return func_256(iParam0, iParam1, iParam2);
}

int func_265(char* sParam0, char* sParam1)//Position - 0x8FD0
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

char* func_266()//Position - 0x8FEA
{
	return "TXTMSG";
}

void func_267(bool bParam0)//Position - 0x8FF6
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 28);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 28);
	}
}

bool func_268()//Position - 0x902C
{
	return Global_1321259.f_57.f_1;
}

int func_269(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)//Position - 0x903C
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_271())
	{
		return 0;
	}
	if (func_270())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_175(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

bool func_270()//Position - 0x9081
{
	return Global_2451015.f_1;
}

int func_271()//Position - 0x908F
{
	if (Global_1321447.f_2)
	{
		return 1;
	}
	return func_272();
}

bool func_272()//Position - 0x90A8
{
	return func_263();
}

void func_273(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x90B4
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_274(int iParam0, int iParam1, bool bParam2)//Position - 0x914F
{
	Global_2949 = iParam0;
	if (Global_97[iParam0 /*10*/].f_8 != 138)
	{
		func_202();
		if (iParam1 == 4)
		{
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[0] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[1] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[2] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_24[0] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_24[1] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[iParam1] == 1 && Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_68245)
			{
				if (iParam1 != 4)
				{
					if (Global_14393 != iParam1)
					{
						Global_2922[iParam1 /*4*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
						Global_2939[iParam1] = 1;
						Global_2944[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14393)
					{
					}
					else
					{
						Global_2873[1 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
						Global_2873[1 /*6*/].f_5 = iParam1;
						func_275();
					}
				}
				else
				{
					Global_2873[1 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
					Global_2873[1 /*6*/].f_5 = iParam1;
					func_275();
				}
			}
			else
			{
				Global_2873[1 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
				Global_2873[1 /*6*/].f_5 = iParam1;
				func_275();
			}
		}
	}
}

void func_275()//Position - 0x92F9
{
	char cVar0[64];
	char cVar16[64];
	char* sVar32;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[Global_2949 /*29*/].f_7)), 64);
	if (Global_2968 == 0)
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
		StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_2873[1 /*6*/])), 64);
		sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, sVar32, &cVar16);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2873[1 /*6*/]));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, 0, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_2263, 0);
}

int func_276()//Position - 0x9376
{
	if (func_94())
	{
		return 0;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_279())
	{
		return 0;
	}
	if (func_117())
	{
		return 0;
	}
	if (func_289(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	if (func_288())
	{
		return 0;
	}
	if (func_92())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_260())
	{
		return 0;
	}
	if (func_278())
	{
		return 0;
	}
	if (func_277(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
}

bool func_277(int iParam0, int iParam1)//Position - 0x943D
{
	return MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_205, iParam1);
}

bool func_278()//Position - 0x9455
{
	return Global_2428891.f_2841.f_41;
}

int func_279()//Position - 0x9466
{
	if (Global_14393.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_280(float fParam0)//Position - 0x947F
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var2 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (func_297(iVar1, 1, 1))
			{
				if (iVar1 != PLAYER::PLAYER_ID())
				{
					if (func_281(iVar1))
					{
						if (SYSTEM::VDIST2(Var2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), 1)) < (fParam0 * fParam0))
						{
							return 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_281(int iParam0)//Position - 0x94F9
{
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_120, 28);
}

bool func_282()//Position - 0x9512
{
	return func_262();
}

void func_283()//Position - 0x951E
{
	struct<2> Var0;
	
	Var0 = 213;
	Var0.f_1 = PLAYER::PLAYER_ID();
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, func_4(1, 1));
}

void func_284(bool bParam0)//Position - 0x9540
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 3))
		{
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 3);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 3))
	{
		MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 3);
	}
}

void func_285(var uParam0)//Position - 0x959F
{
	if (func_121("FM_HTUT_GOP"))
	{
		func_286("FM_HTUT_GOP");
	}
	if (func_121("FM_HTUT_GO"))
	{
		func_286("FM_HTUT_GO");
	}
	if (func_121("FM_HTUT_WAT"))
	{
		func_286("FM_HTUT_WAT");
	}
	if (func_121("FM_HTUT_HLD"))
	{
		func_286("FM_HTUT_HLD");
	}
	if (func_121("FM_HTUT_HLS"))
	{
		func_286("FM_HTUT_HLS");
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_4));
	}
}

void func_286(char* sParam0)//Position - 0x9611
{
	bool bVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_31())
	{
		if (Global_1312579 == 10)
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 63)
			{
				return;
			}
			bVar0 = MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312579.f_14));
		}
		else
		{
			if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam0) > 23)
			{
				return;
			}
			bVar0 = MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312579.f_10));
		}
	}
	if (!bVar0)
	{
		return;
	}
	func_26();
}

int func_287()//Position - 0x968A
{
	return Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_166;
}

bool func_288()//Position - 0x969F
{
	return MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_31.f_18, 0);
}

int func_289(int iParam0, bool bParam1)//Position - 0x96BB
{
	if (bParam1)
	{
		if (func_290(iParam0))
		{
			return 1;
		}
	}
	if (Global_1582596[iParam0 /*324*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_290(int iParam0)//Position - 0x96E7
{
	return func_291(iParam0);
}

bool func_291(int iParam0)//Position - 0x96F5
{
	return MISC::IS_BIT_SET(Global_1582596[iParam0 /*324*/].f_13.f_1, 0);
}

int func_292()//Position - 0x970F
{
	if (Global_1312448)
	{
		return 1;
	}
	if (func_47())
	{
		return 1;
	}
	if (func_46())
	{
		return 1;
	}
	return func_50(121, -1);
}

int func_293()//Position - 0x973F
{
	return Local_89;
}

int func_294(int iParam0)//Position - 0x9749
{
	return iLocal_169[iParam0];
}

void func_295()//Position - 0x9757
{
	PATHFIND::_SET_IGNORE_SECONDARY_ROUTE_NODES(0);
	func_25();
	func_24(8, 0);
	NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
	if (func_281(PLAYER::PLAYER_ID()))
	{
		func_267(0);
	}
	func_296();
}

void func_296()//Position - 0x9788
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_297(int iParam0, bool bParam1, bool bParam2)//Position - 0x9794
{
	int iVar0;
	
	iVar0 = iParam0;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (bParam1)
		{
			if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!Global_2422140.f_3[iVar0])
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_298()//Position - 0x97D8
{
	bool bVar0;
	
	func_304(&bVar0);
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
	if (func_303())
	{
		return 1;
	}
	if (Global_2437058)
	{
		return 1;
	}
	if (func_302())
	{
		return 1;
	}
	if (func_301(157))
	{
		if (!func_300())
		{
			return 1;
		}
	}
	if (func_301(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_299() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(func_299()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_299()//Position - 0x986B
{
	switch (func_40())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

bool func_300()//Position - 0x989F
{
	return Global_2428131.f_572;
}

int func_301(int iParam0)//Position - 0x98AE
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_302()//Position - 0x98C5
{
	return Global_2435238;
}

bool func_303()//Position - 0x98D1
{
	return Global_2428131.f_567;
}

void func_304(var uParam0)//Position - 0x98E0
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
					func_305(iVar0);
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

void func_305(int iParam0)//Position - 0x9950
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (func_297(Var0.f_1, 1, 1))
		{
			uVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar3))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = PED::GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(uVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_306(uVar4, &bVar5))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(uVar4, Var0.f_2);
						}
						if (bVar5)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_306(var uParam0, var uParam1)//Position - 0x99D1
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
				*uParam1 = 1;
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_307()//Position - 0x9A1F
{
	SYSTEM::WAIT(0);
}

void func_308(struct<20> Param0)//Position - 0x9A2C
{
	func_312(func_313(Param0), Param0);
	func_310(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_89, 79);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_169, 33);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_309())
	{
		func_295();
	}
	MISC::CLEAR_BIT(&Global_1675329, 1);
	MISC::CLEAR_BIT(&Global_1675329, 15);
	MISC::CLEAR_BIT(&Global_1675329, 14);
	func_24(8, 1);
	if (!func_281(PLAYER::PLAYER_ID()))
	{
		func_267(1);
	}
}

int func_309()//Position - 0x9AA1
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_303())
		{
			return 0;
		}
		if (func_301(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_310(int iParam0, int iParam1, bool bParam2)//Position - 0x9AFA
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_296();
			}
			else
			{
				return 0;
			}
		}
		if (!func_311())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_296();
					}
					else
					{
						return 0;
					}
				}
				if (func_303())
				{
					if (!bParam2)
					{
						func_296();
					}
					else
					{
						return 0;
					}
				}
				if (func_301(155))
				{
					if (!bParam2)
					{
						func_296();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_296();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312504 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_296();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_296();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_311()//Position - 0x9C0F
{
	return Global_1315874;
}

void func_312(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20)//Position - 0x9C1B
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_296();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_313(int iParam0)//Position - 0x9C3A
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 2:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 43:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 44:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 32;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 2;
		
		case 58:
			return 1;
		
		case 54:
			return 2;
		
		case 55:
			return 4;
		
		case 56:
			return 2;
		
		case 57:
			return 2;
		
		case 40:
			return 1;
		
		case 59:
			return 2;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 0;
		
		case 66:
			return 1;
		
		default:
	}
	return 0;
}

