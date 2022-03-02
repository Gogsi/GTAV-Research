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
		GlobalFunc_906();
		if (GlobalFunc_7741() || !GlobalFunc_252(PLAYER::PLAYER_ID(), 0, 1))
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
					if (!GlobalFunc_7785())
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
							GlobalFunc_8420();
						}
						GlobalFunc_461(8, 0);
					}
				}
				else if (func_293() == 6)
				{
					iLocal_169[NETWORK::PARTICIPANT_ID_TO_INT()] = 5;
				}
				break;
			
			case 5:
				GlobalFunc_5240(&(Local_89.f_3));
				if (GlobalFunc_914(&(Local_89.f_3)))
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
						if (!GlobalFunc_439(&(Local_89.f_5)) || GlobalFunc_5071(&(Local_89.f_5), 5000, 0))
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
								GlobalFunc_434(&(Local_89.f_5));
								GlobalFunc_436(&(Local_89.f_5), 0, 0);
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
					if (GlobalFunc_252(iVar0, 1, 1))
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
						if (GlobalFunc_252(iVar0, 1, 1))
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
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, GlobalFunc_7658(1, 1));
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
			if (GlobalFunc_252(iVar2, 0, 1))
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
		if (GlobalFunc_252(iVar1, 0, 1))
		{
			if (!MISC::IS_BIT_SET(Global_1582596[iLocal_168 /*324*/].f_120, 4))
			{
				MISC::CLEAR_BIT(&iLocal_226, 1);
			}
		}
		if (MISC::IS_BIT_SET(Global_1582596[iLocal_168 /*324*/].f_120, 0))
		{
			if (GlobalFunc_252(iVar1, 0, 1))
			{
				if (iVar2 > -1)
				{
					iVar0 = iVar2;
					if (!GlobalFunc_252(iVar0, 0, 1))
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
		else if (GlobalFunc_252(iVar1, 0, 1))
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
					if (GlobalFunc_252(iVar0, 0, 1))
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
				if ((GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) || GlobalFunc_895()) || GlobalFunc_1299() != 0)
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
				if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
				{
					if (!GlobalFunc_895())
					{
						if (GlobalFunc_1299() == 0)
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
			if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1) || GlobalFunc_895())
			{
				MISC::SET_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 5);
				*uParam0 = 0;
				func_32(0);
				func_284(0);
				GlobalFunc_461(8, 0);
				MISC::CLEAR_BIT(&(uParam0->f_1), 0);
				func_285(uParam0);
			}
		}
		if (*uParam0 < 3)
		{
			if (Local_89.f_5.f_5[PLAYER::PLAYER_ID()] == -1)
			{
				if (GlobalFunc_5071(&(uParam0->f_6), 15000, 0))
				{
					func_283();
					GlobalFunc_434(&(uParam0->f_6));
					GlobalFunc_436(&(uParam0->f_6), 0, 0);
				}
			}
		}
		if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 9))
		{
			if (GlobalFunc_5071(&(uParam0->f_6), 5000, 0))
			{
				func_283();
				GlobalFunc_434(&(uParam0->f_6));
				GlobalFunc_436(&(uParam0->f_6), 0, 0);
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
						if (!GlobalFunc_5428())
						{
							if (!GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
							{
								if (!GlobalFunc_895())
								{
									if (GlobalFunc_1299() == 0)
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
							GlobalFunc_159("FM_IHELP_ACPI", -1);
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
							func_153(iVar2, 1, GlobalFunc_7658(1, 1));
							GlobalFunc_434(&(uParam0->f_6));
							GlobalFunc_436(&(uParam0->f_6), 0, 0);
							func_284(1);
							GlobalFunc_461(8, 1);
							uVar18 = GlobalFunc_6872(1178, -1, 0);
							MISC::CLEAR_BIT(&uVar18, 1);
							MISC::CLEAR_BIT(&uVar18, 2);
							MISC::CLEAR_BIT(&uVar18, 3);
							MISC::CLEAR_BIT(&uVar18, 5);
							MISC::CLEAR_BIT(&uVar18, 6);
							*uParam0 = 1;
							GlobalFunc_6720(1178, uVar18, -1, 1);
							iLocal_392 = GlobalFunc_6872(1155, -1, 0);
						}
						else if (!GlobalFunc_439(&(uParam0->f_6)) || GlobalFunc_5071(&(uParam0->f_6), 5000, 0))
						{
							func_283();
							GlobalFunc_434(&(uParam0->f_6));
							GlobalFunc_436(&(uParam0->f_6), 0, 0);
						}
					}
					else if (!GlobalFunc_439(&(uParam0->f_6)) || GlobalFunc_5071(&(uParam0->f_6), 30000, 0))
					{
						func_283();
						GlobalFunc_434(&(uParam0->f_6));
						GlobalFunc_436(&(uParam0->f_6), 0, 0);
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
				else if (!GlobalFunc_439(&(uParam0->f_12)))
				{
					GlobalFunc_436(&(uParam0->f_12), 0, 0);
				}
				else if (GlobalFunc_5071(&(uParam0->f_12), 30000, 0))
				{
					MISC::CLEAR_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 13);
					GlobalFunc_434(&(uParam0->f_6));
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
						if (GlobalFunc_252(iVar4, 0, 1))
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
					GlobalFunc_434(&(uParam0->f_10));
					GlobalFunc_436(&(uParam0->f_10), 0, 0);
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
										if (GlobalFunc_252(iVar4, 1, 1))
										{
											if (!func_145())
											{
												Var5 = { GlobalFunc_318(iVar4) };
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
							GlobalFunc_8420();
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
							if (GlobalFunc_439(&(uParam0->f_10)))
							{
								if (GlobalFunc_5071(&(uParam0->f_10), iLocal_88, 0))
								{
									MISC::SET_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 12);
									MISC::SET_BIT(&(Global_1582596[iVar3 /*324*/].f_120), 13);
									if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
									{
										HUD::REMOVE_BLIP(&(uParam0->f_4));
									}
									GlobalFunc_8420();
									*uParam0 = 0;
									MISC::CLEAR_BIT(&(uParam0->f_1), 12);
									MISC::CLEAR_BIT(&iLocal_226, 11);
								}
								else if (!MISC::IS_BIT_SET(uParam0->f_1, 2))
								{
									if (!MISC::IS_BIT_SET(uParam0->f_1, 12))
									{
										if (GlobalFunc_5071(&(uParam0->f_10), (iLocal_88 - 60000), 0))
										{
											MISC::SET_BIT(&(uParam0->f_1), 12);
										}
										else if (!MISC::IS_BIT_SET(iLocal_226, 11))
										{
											if (MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 2))
											{
												if (!GlobalFunc_5071(&(uParam0->f_10), (iLocal_88 - 420000), 0))
												{
													GlobalFunc_434(&(uParam0->f_10));
													GlobalFunc_436(&(uParam0->f_10), 0, 0);
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
						GlobalFunc_436(&uLocal_220, 0, 0);
						MISC::SET_BIT(&(uParam0->f_1), 6);
						func_120(1);
						GlobalFunc_436(&uLocal_220, 0, 0);
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
			if (GlobalFunc_5071(&uLocal_220, 1000, 0))
			{
				*uParam0 = 3;
				func_285(uParam0);
				func_120(1);
				GlobalFunc_436(&uLocal_220, 0, 0);
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
					func_153(iVar2, 0, GlobalFunc_7658(1, 1));
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
								if (GlobalFunc_252(iVar4, 1, 1))
								{
									if (!MISC::IS_BIT_SET(Global_1582596[iVar0 /*324*/].f_120, 16))
									{
										Var5 = { GlobalFunc_318(iVar4) };
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
		if (!GlobalFunc_7785())
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
				GlobalFunc_8420();
				func_33(1);
				func_284(0);
				func_32(0);
				GlobalFunc_461(8, 0);
				GlobalFunc_6857(121, 1, -1, 1);
				GlobalFunc_10653(1);
				*uParam0 = 99;
			}
		}
	}
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
		if (GlobalFunc_6872(1155, -1, 0) > iLocal_392)
		{
			MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 10);
			if (iVar0 > -1)
			{
				iVar1 = iVar0;
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (GlobalFunc_252(iVar1, 1, 1))
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
						if (GlobalFunc_252(iVar1, 1, 1))
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
		if (!GlobalFunc_439(&(uParam0->f_16)))
		{
			GlobalFunc_436(&(uParam0->f_16), 0, 0);
		}
		else if (GlobalFunc_5071(&(uParam0->f_16), 3000, 0))
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
					if (!GlobalFunc_100(Var1, 0f, 0f, 0f))
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
						GlobalFunc_159("FHU_HELP1", -1);
						uParam0->f_2++;
						iVar0 = GlobalFunc_6872(1178, -1, 0);
						if (!MISC::IS_BIT_SET(iVar0, 1))
						{
							MISC::SET_BIT(&iVar0, 1);
							GlobalFunc_6720(1178, iVar0, -1, 1);
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
							if (!GlobalFunc_896())
							{
								GlobalFunc_159("FHU_HELP5", -1);
								uParam0->f_2++;
							}
							else if (!MISC::IS_BIT_SET(iLocal_226, 7) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 37))
							{
								GlobalFunc_159("FM_PASS_DBL", -1);
								MISC::SET_BIT(&iLocal_226, 7);
							}
						}
					}
				}
			}
			break;
	}
}


int func_90()//Position - 0x409F
{
	if (((((((((((((((!GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || GlobalFunc_153(8, -1)) || GlobalFunc_153(15, -1)) || GlobalFunc_1305()) || GlobalFunc_153(3, -1)) || HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) || GlobalFunc_6722(PLAYER::PLAYER_ID(), 1)) || GlobalFunc_895()) || GlobalFunc_160()) || GlobalFunc_331()) || GlobalFunc_1304()) || HUD::IS_PAUSE_MENU_ACTIVE()) || NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION()) || GlobalFunc_4201())
	{
		return 0;
	}
	return 1;
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
	if (GlobalFunc_472())
	{
		if (!GlobalFunc_439(&uLocal_395) || GlobalFunc_5071(&uLocal_395, 5000, 0))
		{
			if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 2))
			{
				if (iLocal_392 > -1)
				{
					iVar1 = GlobalFunc_6872(1155, -1, 0);
					if (iLocal_392 != iVar1)
					{
						iLocal_392 = iVar1;
					}
					GlobalFunc_434(&uLocal_395);
					GlobalFunc_436(&uLocal_395, 0, 0);
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(uParam0->f_1, 7))
	{
		if (!func_104())
		{
			iVar0 = GlobalFunc_6872(1155, -1, 0);
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
					if (iVar2 != GlobalFunc_314())
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
		func_100(iVar0, 1, GlobalFunc_924(NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0)));
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
		if (!GlobalFunc_100(Var1, 0f, 0f, 0f))
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
	
	if (GlobalFunc_439(&uParam1))
	{
		iVar0 = (iParam0 - NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uParam1));
		if (iVar0 >= 0)
		{
			GlobalFunc_5277(iVar0, "FM_HTUT_TME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
		}
	}
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
				if (GlobalFunc_252(iVar1, 1, 1))
				{
					if (iVar1 != PLAYER::PLAYER_ID())
					{
						if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
						{
							if (GlobalFunc_4227(iVar1))
							{
								MISC::SET_BIT(&iLocal_226, 15);
							}
						}
					}
				}
				iVar0++;
			}
		}
		else if (GlobalFunc_7826(0, 1, 1))
		{
			GlobalFunc_159("FM_IHELP_BLP", -1);
			MISC::SET_BIT(&iLocal_226, 14);
		}
	}
}








int func_119(int iParam0, int iParam1)//Position - 0x4A8D
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = iParam0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (GlobalFunc_252(iVar0, 0, 1))
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
	if (!GlobalFunc_1296())
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
	if (!GlobalFunc_1296())
	{
		return 0;
	}
	if (Global_1312579 == 10)
	{
		return GlobalFunc_5340(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312579.f_10));
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
	if (!GlobalFunc_252(iParam1, 1, 1))
	{
		return;
	}
	if (func_143(sParam0, iParam1))
	{
		return;
	}
	GlobalFunc_7783();
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
			Global_1312579.f_38 = GlobalFunc_9051(Global_1312579.f_36, -2, 1, 0);
		}
		else
		{
			Global_1312579.f_38 = GlobalFunc_1537(Global_1312579.f_37);
		}
	}
	GlobalFunc_1309();
	GlobalFunc_1308(bParam3);
	GlobalFunc_1307();
}



















bool func_143(char* sParam0, int iParam1)//Position - 0x5287
{
	if (!GlobalFunc_1296())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!GlobalFunc_252(iParam1, 1, 1))
	{
		return 0;
	}
	if (!MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312579.f_10)))
	{
		return 0;
	}
	return iParam1 == Global_1312579.f_36;
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
					if (GlobalFunc_252(iVar3, 0, 1))
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
	GlobalFunc_7783();
	Global_1312579 = 0;
	StringCopy(&(Global_1312579.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_1312579.f_7 = MISC::GET_HASH_KEY(&(Global_1312579.f_1));
	StringCopy(&(Global_1312579.f_10), sParam0, 16);
	GlobalFunc_1309();
	GlobalFunc_1308(bParam1);
	GlobalFunc_1307();
}

int func_149(int iParam0, bool bParam1)//Position - 0x549C
{
	int iVar0;
	
	iVar0 = iParam0;
	if (!GlobalFunc_252(iVar0, 0, 1))
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
		if (GlobalFunc_7826(0, 1, 1))
		{
			GlobalFunc_159("FM_IHELP_INV", 10000);
			MISC::SET_BIT(&iLocal_226, 16);
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_226, 6))
	{
		if (MISC::IS_BIT_SET(iLocal_226, 13))
		{
			if (!GlobalFunc_439(&uLocal_224))
			{
				GlobalFunc_436(&uLocal_224, 0, 0);
			}
			else if (GlobalFunc_5071(&uLocal_224, 15000, 0))
			{
				if (GlobalFunc_7826(0, 1, 1))
				{
					MISC::SET_BIT(&iLocal_226, 6);
				}
			}
		}
	}
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


int func_155(var uParam0)//Position - 0x563E
{
	switch (uParam0->f_3)
	{
		case 0:
			if (!GlobalFunc_439(&(uParam0->f_14)))
			{
				GlobalFunc_436(&(uParam0->f_14), 0, 0);
			}
			else if (GlobalFunc_5071(&(uParam0->f_14), 7000, 0))
			{
				if (GlobalFunc_5085())
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
						{
							MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 16);
						}
						if (!GlobalFunc_116(0))
						{
							func_162(19, 30, "", 0);
							GlobalFunc_159("FM_IHELP_QNV", -1);
							uParam0->f_3++;
						}
					}
					else if (!MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
					{
						func_148("FM_IHELP_LCP", 0);
						MISC::SET_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 16);
						if (GlobalFunc_74("FM_IHELP_INV2") || GlobalFunc_74("FM_IHELP_INV"))
						{
							HUD::CLEAR_HELP(1);
						}
					}
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_7835(19, 30))
			{
				HUD::CLEAR_HELP(1);
				uParam0->f_3++;
			}
			else if (GlobalFunc_5085())
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					if (func_121("FM_IHELP_LCP"))
					{
						GlobalFunc_8420();
					}
					if ((!GlobalFunc_439(&uLocal_393) || GlobalFunc_5071(&uLocal_393, 20000, 0)) || MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
					{
						if (MISC::IS_BIT_SET(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120, 16))
						{
							MISC::CLEAR_BIT(&(Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_120), 16);
						}
						if (!MISC::IS_BIT_SET(iLocal_226, 16))
						{
							if (!GlobalFunc_74("FM_IHELP_INV"))
							{
								if (!GlobalFunc_74("FM_IHELP_QNV"))
								{
									if (func_90())
									{
										GlobalFunc_159("FM_IHELP_INV", 10000);
										MISC::SET_BIT(&iLocal_226, 16);
									}
								}
							}
						}
						else if (!GlobalFunc_74("FM_IHELP_INV"))
						{
							if (!GlobalFunc_74("FM_IHELP_INV2"))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (func_90())
									{
										GlobalFunc_159("FM_IHELP_INV2", -1);
										GlobalFunc_434(&uLocal_393);
										GlobalFunc_436(&uLocal_393, 0, 0);
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
					if ((GlobalFunc_74("FM_IHELP_INV2") || GlobalFunc_74("FM_IHELP_INV")) || GlobalFunc_74("FM_IHELP_QNV"))
					{
						HUD::CLEAR_HELP(1);
					}
				}
			}
			else if ((GlobalFunc_74("FM_IHELP_INV2") || GlobalFunc_74("FM_IHELP_INV")) || GlobalFunc_74("FM_IHELP_QNV"))
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







void func_162(int iParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x5B41
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = GlobalFunc_1564(iParam0);
	if (iVar0 != -1)
	{
		GlobalFunc_6947(iVar0);
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
	
	uVar0 = GlobalFunc_314();
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
		if (GlobalFunc_1254())
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
	GlobalFunc_1565();
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
				Var6 = { GlobalFunc_318(uVar0) };
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


int func_165()//Position - 0x5D92
{
	char cVar0[24];
	int iVar6;
	int iVar7;
	var uVar8;
	int iVar9;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { GlobalFunc_7836() };
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
				StringCopy(&cVar0, GlobalFunc_6948(13, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, GlobalFunc_6948(14, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, GlobalFunc_6948(15, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, GlobalFunc_6948(16, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, GlobalFunc_6948(17, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, GlobalFunc_6948(18, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, GlobalFunc_6948(19, -1), 24);
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
	uVar8 = GlobalFunc_6872(2534, -1, 0);
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
				if (!MISC::IS_BIT_SET(iLocal_226, 5) || (MISC::IS_BIT_SET(iLocal_226, 5) && GlobalFunc_5071(&uLocal_222, 60000, 0)))
				{
					if (func_276())
					{
						if (!MISC::IS_BIT_SET(iLocal_226, 4))
						{
							GlobalFunc_9818(19, 3, 0);
							GlobalFunc_173(&uLocal_227, 1, 0, "Lamar", 0, 1);
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
			else if (!GlobalFunc_5428())
			{
				if (GlobalFunc_1566())
				{
					MISC::SET_BIT(&iLocal_226, 2);
					func_267(0);
				}
				else
				{
					GlobalFunc_434(&uLocal_222);
					GlobalFunc_436(&uLocal_222, 0, 0);
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
	return func_175(&uVar0, iParam0, GlobalFunc_1552(), sParam1, iVar165, 3, uParam8, sParam2, bParam3, iParam4, sParam5, sParam6, -1);
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
	iVar1 = GlobalFunc_1515(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (GlobalFunc_7815(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!GlobalFunc_6950(uParam6))
	{
		return 0;
	}
	if (GlobalFunc_6928(iVar0, iVar1, iVar2))
	{
		if (GlobalFunc_1510())
		{
			return 0;
		}
		GlobalFunc_1509();
		return func_182(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!GlobalFunc_1488(iParam4))
	{
		return 0;
	}
	GlobalFunc_6949(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}







int func_182(var uParam0, int iParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x63FC
{
	struct<2> Var0;
	
	GlobalFunc_1508();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return GlobalFunc_10853(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return GlobalFunc_10852(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return GlobalFunc_10853(uParam0, sParam3, sParam4);
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
	
	GlobalFunc_1498();
	bVar0 = true;
	if (func_185(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		GlobalFunc_1489(120000);
		return 1;
	}
	return 0;
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
	
	iVar0 = GlobalFunc_314();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = GlobalFunc_9056(iVar0);
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
	uVar5 = GlobalFunc_5404(iParam7, &iVar3);
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
		bVar12 = GlobalFunc_10801(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = GlobalFunc_10800(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		GlobalFunc_1492();
	}
	GlobalFunc_1498();
	GlobalFunc_1491();
	GlobalFunc_1490();
	return 1;
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
	GlobalFunc_1497(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}








int func_219(int iParam0, var uParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x7A3E
{
	bool bVar0;
	
	GlobalFunc_1498();
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
	
	iVar0 = GlobalFunc_314();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = uParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = GlobalFunc_9056(iVar0);
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
	uVar5 = GlobalFunc_5404(iParam7, &iVar3);
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
		bVar12 = GlobalFunc_10802(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		GlobalFunc_1492();
	}
	GlobalFunc_1499();
	GlobalFunc_1491();
	GlobalFunc_1490();
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
	if (GlobalFunc_10485(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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
	GlobalFunc_1499();
	bVar0 = true;
	if (func_221(iParam0, uParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		GlobalFunc_1489(120000);
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
		bVar0 = GlobalFunc_10668(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = GlobalFunc_10667(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			GlobalFunc_1505(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			GlobalFunc_1504(1);
		}
		GlobalFunc_1503();
		GlobalFunc_1491();
		GlobalFunc_1502();
		GlobalFunc_1501();
		return 1;
	}
	return 0;
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


int func_269(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, int iParam5)//Position - 0x903C
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (GlobalFunc_7816())
	{
		return 0;
	}
	if (GlobalFunc_1516())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_175(uParam0, iParam1, sParam2, sParam3, 1, iParam5, uParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}







int func_276()//Position - 0x9376
{
	if (GlobalFunc_160())
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
	if (GlobalFunc_701())
	{
		return 0;
	}
	if (GlobalFunc_111())
	{
		return 0;
	}
	if (GlobalFunc_6722(PLAYER::PLAYER_ID(), 1))
	{
		return 0;
	}
	if (GlobalFunc_895())
	{
		return 0;
	}
	if (GlobalFunc_1304())
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (GlobalFunc_1512())
	{
		return 0;
	}
	if (GlobalFunc_1994())
	{
		return 0;
	}
	if (GlobalFunc_247(PLAYER::PLAYER_ID(), 0))
	{
		return 0;
	}
	return 1;
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
			if (GlobalFunc_252(iVar1, 1, 1))
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


void func_283()//Position - 0x951E
{
	struct<2> Var0;
	
	Var0 = 213;
	Var0.f_1 = PLAYER::PLAYER_ID();
	SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, GlobalFunc_7658(1, 1));
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
		GlobalFunc_8449("FM_HTUT_GOP");
	}
	if (func_121("FM_HTUT_GO"))
	{
		GlobalFunc_8449("FM_HTUT_GO");
	}
	if (func_121("FM_HTUT_WAT"))
	{
		GlobalFunc_8449("FM_HTUT_WAT");
	}
	if (func_121("FM_HTUT_HLD"))
	{
		GlobalFunc_8449("FM_HTUT_HLD");
	}
	if (func_121("FM_HTUT_HLS"))
	{
		GlobalFunc_8449("FM_HTUT_HLS");
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_4))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_4));
	}
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
	GlobalFunc_8420();
	GlobalFunc_461(8, 0);
	NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
	if (func_281(PLAYER::PLAYER_ID()))
	{
		func_267(0);
	}
	GlobalFunc_491();
}













void func_308(struct<20> Param0)//Position - 0x9A2C
{
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_89, 79);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&iLocal_169, 33);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!GlobalFunc_5091())
	{
		func_295();
	}
	MISC::CLEAR_BIT(&Global_1675329, 1);
	MISC::CLEAR_BIT(&Global_1675329, 15);
	MISC::CLEAR_BIT(&Global_1675329, 14);
	GlobalFunc_461(8, 1);
	if (!func_281(PLAYER::PLAYER_ID()))
	{
		func_267(1);
	}
}






