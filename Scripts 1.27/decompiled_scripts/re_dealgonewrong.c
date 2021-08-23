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
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_51[9];
	float fLocal_79[9] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	struct<3> Local_112 = { 0, 0, 0 } ;
	var uLocal_115 = 0;
	struct<3> Local_116 = { 0, 0, 0 } ;
	float fLocal_119 = 0f;
	float fLocal_120 = 0f;
	float fLocal_121 = 0f;
	float fLocal_122 = 0f;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	var uLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_146[2] = { 0, 0 };
	var uLocal_149[4] = { 0, 0, 0, 0 };
	var uLocal_154[4] = { 0, 0, 0, 0 };
	var uLocal_159[5] = { 0, 0, 0, 0, 0 };
	var uLocal_165[4] = { 0, 0, 0, 0 };
	var uLocal_170[4] = { 0, 0, 0, 0 };
	var uLocal_175[4] = { 0, 0, 0, 0 };
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_193[4] = { 0, 0, 0, 0 };
	var uLocal_198[4] = { 0, 0, 0, 0 };
	var uLocal_203[4] = { 0, 0, 0, 0 };
	var uLocal_208[4] = { 0, 0, 0, 0 };
	var uLocal_213 = 0;
	var uLocal_214[5] = { 0, 0, 0, 0, 0 };
	var uLocal_220[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_233 = { 0, 0, 0 } ;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<3> Local_239 = { 0, 0, 0 } ;
	struct<3> Local_242 = { 0, 0, 0 } ;
	struct<3> Local_245[5];
	int iLocal_261 = 0;
	bool bLocal_262 = 0;
	bool bLocal_263 = 0;
	bool bLocal_264 = 0;
	bool bLocal_265 = 0;
	bool bLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	var uLocal_270 = 16;
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
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	struct<3> Local_435 = { 0, 0, 0 } ;
	struct<3> Local_438[4];
	struct<3> Local_451 = { 0, 0, 0 } ;
	int iLocal_454 = 0;
	bool bLocal_455 = 0;
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
	Local_233 = { -1635.648f, 4737.801f, 52.4304f };
	Local_236 = { -1640.745f, 4696.386f, 39.279f };
	Local_48 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_166();
	}
	if (func_124(Local_48, -1, 0, 0, 0))
	{
		func_121(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1503.54f, 4934.923f, 114.2284f, 100f, 100f, 100f, 0, 1, 0)) || iLocal_46 == 2)
		{
			if (!func_120())
			{
				if (func_119())
				{
					func_166();
				}
			}
			RECORDING::_0x208784099002BC30("RE_DGW", 0);
			switch (iLocal_46)
			{
				case 0:
					if (iLocal_454)
					{
						iLocal_46 = 1;
					}
					else
					{
						if (func_107())
						{
							func_166();
						}
						func_104();
					}
					break;
				
				case 1:
					func_103();
					func_92();
					break;
				
				case 2:
					switch (iLocal_45)
					{
						case 0:
							func_103();
							iLocal_45 = 1;
							break;
						
						case 1:
							func_103();
							func_72();
							if (iLocal_47 >= 6)
							{
								if (!func_71())
								{
									iVar0 = 0;
									while (iVar0 < 4)
									{
										if (bLocal_266)
										{
											func_70(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_175[iVar0]), &(uLocal_203[iVar0]));
											func_65(uLocal_175[0], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 0f, 0f, 1000, 0f);
											func_65(uLocal_175[1], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 2f, 0f, 1000, 0f);
											func_60(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_175[iVar0]), &(uLocal_203[iVar0]));
										}
										else if (bLocal_263)
										{
											func_70(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_165[iVar0]), &(uLocal_203[iVar0]));
											func_65(uLocal_165[0], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 0f, 0f, 1000, 0f);
											func_65(uLocal_165[1], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 5f, 0f, 1000, 0f);
											func_60(&(uLocal_149[iVar0]), &(uLocal_193[iVar0]), &(uLocal_165[iVar0]), &(uLocal_203[iVar0]));
										}
										else if (bLocal_264)
										{
											func_70(&(uLocal_154[iVar0]), &(uLocal_198[iVar0]), &(uLocal_170[iVar0]), &(uLocal_208[iVar0]));
											func_65(uLocal_170[0], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 0f, 0f, 1000, 0f);
											func_65(uLocal_170[1], PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), &uLocal_107, &uLocal_110, &Local_112, &uLocal_111, &uLocal_115, 0f, 5f, 0f, 1000, 0f);
											func_60(&(uLocal_154[iVar0]), &(uLocal_198[iVar0]), &(uLocal_170[iVar0]), &(uLocal_208[iVar0]));
										}
										iVar0++;
									}
								}
								else
								{
									func_35();
								}
							}
							if (((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_233, 100f, 100f, 100f, 0, 1, 0)) && iLocal_47 < 2)
							{
								func_35();
							}
							break;
					}
					break;
				
				case 3:
					func_1();
					break;
			}
		}
		else
		{
			func_166();
		}
	}
}

void func_1()//Position - 0x3AE
{
	int iVar0;
	
	if (iLocal_454 && !iLocal_261)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (HUD::DOES_BLIP_EXIST(uLocal_180))
		{
			HUD::REMOVE_BLIP(&uLocal_180);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_181))
		{
			HUD::REMOVE_BLIP(&uLocal_181);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_193[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_193[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_203[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_203[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(uLocal_149[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uLocal_149[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_265 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_198[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_198[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_208[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_208[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(uLocal_154[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uLocal_154[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_265 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_45 >= 1)
		{
			MISC::ENABLE_DISPATCH_SERVICE(5, 1);
			MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		}
		if (bLocal_265)
		{
			func_3(func_29(), 1, 25000);
		}
		iLocal_261 = 1;
	}
	if (!CAM::IS_SPHERE_VISIBLE(Local_233, 30f) && SYSTEM::VDIST(func_2(PLAYER::PLAYER_ID()), Local_233) > 300f)
	{
		func_166();
	}
}

Vector3 func_2(var uParam0)//Position - 0x551
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

int func_3(int iParam0, int iParam1, int iParam2)//Position - 0x564
{
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_4(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_4(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x5AD
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_28();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_27(99, 1);
					func_26(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_26(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_26(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_12(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_11(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_26(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_11(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_26(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_26(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
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
				case 111:
					switch (iParam0)
					{
						case 0:
							func_26(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_26(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_26(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_26(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_26(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_11(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_26(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_26(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_26(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_26(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_10(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_27(95, iParam3);
					break;
				
				case 1:
					func_27(97, iParam3);
					break;
				
				case 2:
					func_27(96, iParam3);
					break;
			}
			func_27(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_7(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_7(iVar1);
	}
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_26(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_26(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_26(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/]++;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1++;
		if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_6(iParam0);
	if (Global_34913 == 15)
	{
		func_5(0);
	}
	return 1;
}

void func_5(bool bParam0)//Position - 0xBAC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_6(int iParam0)//Position - 0xE2E
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_7(int iParam0)//Position - 0xE88
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_9() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_9() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_8(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_8(int iParam0)//Position - 0xF48
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_9()//Position - 0xFBA
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_10(int iParam0)//Position - 0xFC7
{
	func_27(93, iParam0);
	func_27(29, iParam0);
	func_27(30, iParam0);
}

bool func_11(int iParam0)//Position - 0xFE7
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_9() /*8053*/].f_5756.f_10, iParam0);
}

int func_12(bool bParam0)//Position - 0x1023
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_25(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_13(27, 1);
	return 1;
}

int func_13(int iParam0, int iParam1)//Position - 0x10DA
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_14(iParam0, iParam1);
}

int func_14(int iParam0, int iParam1)//Position - 0x10F5
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_24(&Global_2544859))
	{
		if (func_22(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_15(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_15(var uParam0, int iParam1)//Position - 0x1179
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_22(uParam0, iParam1))
	{
		return 0;
	}
	func_18(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_16(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_16(var uParam0, int iParam1)//Position - 0x11FF
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_22(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_17(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_17(var uParam0, int iParam1)//Position - 0x124F
{
	return (*uParam0)[iParam1] == 61;
}

void func_18(var uParam0)//Position - 0x1260
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_21(uParam0, iVar0);
		iVar0++;
	}
	func_19(&(uParam0->f_62), (8f - 0.5f));
}

void func_19(var uParam0, float fParam1)//Position - 0x1297
{
	uParam0->f_1 = (func_20(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_20(bool bParam0)//Position - 0x12C5
{
	var uVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(uVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_21(var uParam0, int iParam1)//Position - 0x130D
{
	(*uParam0)[iParam1] = 61;
}

bool func_22(var uParam0, int iParam1)//Position - 0x131D
{
	return func_23(uParam0, iParam1) != -1;
}

int func_23(var uParam0, int iParam1)//Position - 0x132F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_24(var uParam0)//Position - 0x135C
{
	return uParam0->f_68 == 1;
}

int func_25(int iParam0, int iParam1)//Position - 0x136A
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_26(int iParam0, int iParam1)//Position - 0x13BB
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_27(int iParam0, int iParam1)//Position - 0x13DE
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_28()//Position - 0x143B
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_29()//Position - 0x14B0
{
	func_30();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_30()//Position - 0x14C9
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_34(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_33(PLAYER::PLAYER_PED_ID());
			if (func_32(iVar0) && (!func_31(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_32(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
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

bool func_31(int iParam0)//Position - 0x15C6
{
	return Global_34913 == iParam0;
}

bool func_32(int iParam0)//Position - 0x15D4
{
	return iParam0 < 3;
}

int func_33(int iParam0)//Position - 0x15E0
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_34(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_34(int iParam0)//Position - 0x161D
{
	if (func_32(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35()//Position - 0x1647
{
	while (func_59())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_58())
	{
		SYSTEM::WAIT(0);
	}
	func_39(-1, 0);
	func_36();
	iLocal_46 = 3;
}

void func_36()//Position - 0x167B
{
	func_37();
}

int func_37()//Position - 0x1688
{
	if (func_38(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_38(bool bParam0)//Position - 0x16D3
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_39(int iParam0, int iParam1)//Position - 0x16FE
{
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_55(iParam0))
	{
		func_54(iParam0, iParam1);
		if (!func_53(51))
		{
			func_49("RE_REWARD", 1, 0, 4000, 10000, func_52(), 0, 138, 0);
			func_48(51);
		}
		if (func_47(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (func_46(iParam0, iParam1) != 322)
		{
			func_41(func_46(iParam0, iParam1), Local_42.x, Local_42.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_40(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				func_40(7);
			}
			else
			{
				func_40(1);
			}
		}
	}
}

void func_40(int iParam0)//Position - 0x1801
{
	Global_97339 = iParam0;
}

void func_41(int iParam0, var uParam1, var uParam2)//Position - 0x180F
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_44((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6 == 11 || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_5 = 1;
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_10 = uParam1;
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_42();
	}
}

void func_42()//Position - 0x18F7
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_97076, 0);
					MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_97089, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_97072, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_97090, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_97073, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_97091, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_97074, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_97092, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_97075, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_97079, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_97096, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_97097, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853))
	{
		func_25(13, SYSTEM::FLOOR(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_68245)
		{
			if (func_43() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_37();
				}
			}
		}
	}
}

int func_43()//Position - 0x1DB8
{
	return Global_24444;
}

int func_44(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1DC3
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_45();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_45()//Position - 0x201E
{
	return Global_1312737;
}

int func_46(int iParam0, int iParam1)//Position - 0x202A
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_47(int iParam0)//Position - 0x239E
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_48(int iParam0)//Position - 0x23CD
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1]), iVar0);
	}
}

void func_49(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x240F
{
	func_50(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_50(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x2430
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount < 9)
	{
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/]), sParam0, 16);
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_4), sParam1, 16);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_9 = iParam5;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_11 = iParam6;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_12 = uParam2;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_13 = iParam7;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_14 = iParam8;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = -1;
		}
		Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount++;
		func_51();
	}
}

void func_51()//Position - 0x2603
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 0))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 1))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 2))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_52()//Position - 0x2723
{
	func_30();
	switch (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x2769
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1], iVar0);
	}
	return 0;
}

void func_54(int iParam0, int iParam1)//Position - 0x27AC
{
	MISC::SET_BIT(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0]), iParam1);
}

int func_55(int iParam0)//Position - 0x27C7
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_56()//Position - 0x2878
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_57(Var0);
	return uVar16;
}

int func_57(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x2895
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_58()//Position - 0x2A6F
{
	return 1;
}

int func_59()//Position - 0x2A78
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_60(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x2A9A
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
		{
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(*uParam0, *uParam2, 0))
				{
					if (HUD::DOES_BLIP_EXIST(*uParam1))
					{
						HUD::REMOVE_BLIP(uParam1);
					}
					iVar0 = 1;
				}
				else if (!HUD::DOES_BLIP_EXIST(*uParam1))
				{
					*uParam1 = func_63(*uParam0, 1, 145);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = func_61(ENTITY::GET_ENTITY_COORDS(*uParam2, 1), 0);
					HUD::SET_BLIP_COLOUR(*uParam3, 1);
					HUD::SET_BLIP_PRIORITY(*uParam3, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam3, "BLIP_VEH");
				}
			}
			else
			{
				Var1 = { HUD::GET_BLIP_COORDS(*uParam3) };
				Var4 = { ENTITY::GET_ENTITY_COORDS(*uParam2, 1) };
				Var1.x = (Var1.x + (((Var4.x - Var1.x) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_1 = (Var1.f_1 + (((Var4.f_1 - Var1.f_1) / 1f) * SYSTEM::TIMESTEP()));
				Var1.f_2 = (Var1.f_2 + (((Var4.f_2 - Var1.f_2) / 1f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(*uParam3, Var1);
				if (iVar0 == 0)
				{
					HUD::REMOVE_BLIP(uParam3);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(*uParam3))
			{
				HUD::REMOVE_BLIP(uParam3);
			}
			if (!PED::IS_PED_INJURED(*uParam0))
			{
				if (!HUD::DOES_BLIP_EXIST(*uParam1))
				{
					*uParam1 = func_63(*uParam0, 1, 145);
				}
			}
		}
	}
}

var func_61(struct<3> Param0, int iParam3)//Position - 0x2BE4
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_62(bool bParam0, float fParam1, float fParam2)//Position - 0x2C10
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_63(var uParam0, bool bParam1, int iParam2)//Position - 0x2C27
{
	var uVar0;
	
	uVar0 = func_64(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_64(int iParam0, bool bParam1, bool bParam2)//Position - 0x2C79
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_65(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)//Position - 0x2D1D
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)) && func_69(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, Param7) };
				func_68(iParam1, uParam4, uParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if (func_67(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!func_66(*uParam2))
					{
						if (!CAM::IS_SPHERE_VISIBLE(*uParam2, 3f))
						{
							MISC::CLEAR_AREA_OF_PEDS(*uParam2, 1.5f, 0);
							MISC::CLEAR_AREA_OF_VEHICLES(*uParam2, 3f, 0, 0, 0, 0, 0);
							ENTITY::SET_ENTITY_COORDS(iParam0, *uParam2, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iParam0, *uParam3);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
							VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
							*uParam6 = MISC::GET_GAME_TIMER();
						}
						else
						{
							Var0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_112, uLocal_111, Param7) };
							if (!func_66(Var0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Var0, 2f))
								{
									MISC::CLEAR_AREA_OF_PEDS(Var0, 1.5f, 0);
									MISC::CLEAR_AREA_OF_VEHICLES(Var0, 3f, 0, 0, 0, 0, 0);
									ENTITY::SET_ENTITY_COORDS(iParam0, Var0, 1, 0, 0, 1);
									ENTITY::SET_ENTITY_HEADING(iParam0, uLocal_111);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0);
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 10f);
									VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, 1, 1);
									*uParam6 = MISC::GET_GAME_TIMER();
									return;
								}
							}
						}
					}
				}
			}
		}
		else
		{
			*uParam6 = MISC::GET_GAME_TIMER();
		}
	}
}

int func_66(struct<3> Param0)//Position - 0x2F2D
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

float func_67(int iParam0, int iParam1, int iParam2)//Position - 0x2F57
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

void func_68(int iParam0, var uParam1, var uParam2)//Position - 0x2FB3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			*uParam1 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			*uParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
	}
}

int func_69(int iParam0)//Position - 0x2FE2
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_70(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x3029
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (PED::IS_PED_INJURED(*uParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		}
		else
		{
			iVar0 = 1;
			if (!PED::IS_PED_IN_ANY_VEHICLE(*uParam0, 0))
			{
			}
			else if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(*uParam0, *uParam2, 0))
					{
						iVar1 = 1;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam2))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam2, 0))
		{
			if (iVar0 == 1 || iVar1 == 1)
			{
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam2);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam2);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam2, 0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam2);
				if (HUD::DOES_BLIP_EXIST(*uParam3))
				{
					HUD::REMOVE_BLIP(uParam3);
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam2);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam2);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam2, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam2);
			if (HUD::DOES_BLIP_EXIST(*uParam3))
			{
				HUD::REMOVE_BLIP(uParam3);
			}
		}
	}
}

int func_71()//Position - 0x311A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 1;
	if (!bLocal_455)
	{
		iVar0 = 0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_149[iVar1]))
		{
			if (!PED::IS_PED_INJURED(uLocal_149[iVar1]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(uLocal_149[iVar1], PLAYER::PLAYER_PED_ID(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_154[iVar1]))
		{
			if (!PED::IS_PED_INJURED(uLocal_154[iVar1]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(uLocal_154[iVar1], PLAYER::PLAYER_PED_ID(), 200f, 200f, 200f, 0, 1, 0))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_72()//Position - 0x31D7
{
	int iVar0;
	
	if (bLocal_455)
	{
		if (bLocal_266)
		{
		}
		else if (bLocal_263)
		{
			if (!PED::IS_PED_INJURED(uLocal_149[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_165[0]))
			{
			}
			if (!PED::IS_PED_INJURED(uLocal_149[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_165[1]))
			{
			}
		}
		else
		{
			if (!PED::IS_PED_INJURED(uLocal_154[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_170[0]))
			{
			}
			if (!PED::IS_PED_INJURED(uLocal_154[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_170[1]))
			{
			}
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			GRAPHICS::REMOVE_DECAL(uLocal_220[iVar0]);
			if (PED::IS_PED_INJURED(uLocal_149[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_193[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_193[iVar0]));
					iLocal_123++;
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_149[iVar0], 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_193[iVar0]))
				{
					uLocal_193[iVar0] = func_63(uLocal_149[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			GRAPHICS::REMOVE_DECAL(uLocal_220[iVar0]);
			if (PED::IS_PED_INJURED(uLocal_154[iVar0]))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_198[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_198[iVar0]));
					iLocal_124++;
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_154[iVar0], 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_198[iVar0]))
				{
					uLocal_198[iVar0] = func_63(uLocal_154[iVar0], 1, 145);
				}
			}
			iVar0++;
		}
		if (iLocal_123 >= 4 && iLocal_124 >= 4)
		{
			func_35();
		}
	}
	func_88();
	func_87();
	switch (iLocal_47)
	{
		case 0:
			if (((PLAYER::_0x5FC472C501CCADB3(PLAYER::PLAYER_ID()) || !ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_233 + Vector(0f, 20f, 0f), 170f, 270f, 50f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
			{
				if (!bLocal_266)
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1555.4f, 4730.817f, 49.1791f, 15f, 25f, 15f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1709.211f, 4659.571f, 36.688f, 15f, 25f, 15f, 0, 1, 0))
					{
						bLocal_266 = true;
					}
				}
				if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &Local_239, 1, 1077936128, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_239, 20f, 20f, 20f, 0, 1, 0))
					{
						MISC::ENABLE_DISPATCH_SERVICE(5, 1);
						MISC::ENABLE_DISPATCH_SERVICE(3, 1);
						SYSTEM::SETTIMERA(0);
						func_85();
						iLocal_47 = 1;
					}
				}
			}
			break;
		
		case 1:
			if (SYSTEM::TIMERA() > 5000 || bLocal_266)
			{
				SYSTEM::SETTIMERA(0);
				iLocal_47 = 2;
			}
			break;
		
		case 2:
			if (bLocal_266)
			{
				if (SYSTEM::TIMERA() > 3500)
				{
					if (((!ENTITY::IS_ENTITY_DEAD(uLocal_175[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_175[1])) && !PED::IS_PED_INJURED(uLocal_149[0])) && !PED::IS_PED_INJURED(uLocal_149[1]))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_149[0], uLocal_175[0], -1);
						PED::SET_PED_INTO_VEHICLE(uLocal_149[1], uLocal_175[1], -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_149[0], 3, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_149[1], 3, 0);
						PED::SET_PED_HELMET(uLocal_149[0], 0);
						PED::SET_PED_HELMET(uLocal_149[1], 0);
						iLocal_47 = 5;
					}
				}
			}
			if (SYSTEM::TIMERA() > 10000)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rebel")))
					{
						iLocal_47 = 3;
					}
					else
					{
						iLocal_47 = 4;
					}
				}
				else
				{
					iLocal_47 = 3;
				}
			}
			break;
		
		case 3:
			Local_242 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			uLocal_131 = MISC::GET_RANDOM_INT_IN_RANGE(10, 15);
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Local_242, uLocal_131, &(Local_438[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_438[1 /*3*/] = { Local_438[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!CAM::IS_SPHERE_VISIBLE(Local_438[0 /*3*/], 7f) && !CAM::IS_SPHERE_VISIBLE(Local_438[1 /*3*/], 7f))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_165[0], 0))
						{
							ENTITY::SET_ENTITY_COORDS(uLocal_165[0], Local_438[0 /*3*/], 1, 0, 0, 1);
							func_84(uLocal_165[0], uLocal_149[0]);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_165[1], 0))
						{
							ENTITY::SET_ENTITY_COORDS(uLocal_165[1], Local_438[1 /*3*/], 1, 0, 0, 1);
							func_84(uLocal_165[1], uLocal_149[1]);
						}
						if (func_29() == 0)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_29() == 1)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_29() == 2)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_263 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_47 = 6;
					}
				}
			}
			break;
		
		case 4:
			Local_242 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			uLocal_131 = MISC::GET_RANDOM_INT_IN_RANGE(30, 35);
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1603.153f, 4892.943f, 60.1768f, 225f, 225f, 50f, 0, 1, 0))
			{
				if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Local_242, uLocal_131, &(Local_438[0 /*3*/]), 1, 1077936128, 0))
				{
					Local_438[1 /*3*/] = { Local_438[0 /*3*/] + Vector(0f, 5f, 0f) };
					if (!CAM::IS_SPHERE_VISIBLE(Local_438[0 /*3*/], 7f) && !CAM::IS_SPHERE_VISIBLE(Local_438[1 /*3*/], 7f))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_170[0], 0))
						{
							ENTITY::SET_ENTITY_COORDS(uLocal_170[0], Local_438[0 /*3*/], 1, 0, 0, 1);
							func_84(uLocal_170[0], uLocal_154[0]);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_170[1], 0))
						{
							ENTITY::SET_ENTITY_COORDS(uLocal_170[1], Local_438[1 /*3*/], 1, 0, 0, 1);
							func_84(uLocal_170[1], uLocal_154[1]);
						}
						if (func_29() == 0)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (func_29() == 1)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (func_29() == 2)
						{
							func_73(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
						}
						bLocal_264 = true;
						SYSTEM::SETTIMERA(0);
						iLocal_47 = 6;
					}
				}
			}
			break;
		
		case 5:
			Local_242 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			uLocal_131 = MISC::GET_RANDOM_INT_IN_RANGE(5, 10);
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Local_242, uLocal_131, &(Local_438[0 /*3*/]), 1, 1077936128, 0))
			{
				Local_438[1 /*3*/] = { Local_438[0 /*3*/] + Vector(0f, 5f, 0f) };
				if (!CAM::IS_SPHERE_VISIBLE(Local_438[0 /*3*/], 7f) && !CAM::IS_SPHERE_VISIBLE(Local_438[1 /*3*/], 7f))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_175[0], 0))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_175[0], Local_438[0 /*3*/], 1, 0, 0, 1);
						func_84(uLocal_175[0], uLocal_149[0]);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_175[1], 0))
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_175[1], Local_438[1 /*3*/], 1, 0, 0, 1);
						func_84(uLocal_175[1], uLocal_149[1]);
					}
					if (func_29() == 0)
					{
						func_73(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (func_29() == 1)
					{
						func_73(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (func_29() == 2)
					{
						func_73(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_263 = true;
					SYSTEM::SETTIMERA(0);
					iLocal_47 = 6;
				}
			}
			break;
		
		case 6:
			if (func_59())
			{
				fLocal_119 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
				fLocal_120 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
				fLocal_121 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
				if (iLocal_133 < 5 && iLocal_134 < MISC::GET_GAME_TIMER())
				{
					Local_89 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS((Local_89.x + fLocal_119), (Local_89.f_1 + fLocal_120), (Local_89.f_2 + fLocal_121), (Local_89.x - fLocal_119), (Local_89.f_1 - fLocal_120), Local_89.f_2, 10, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
					iLocal_134 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 500));
					iLocal_133++;
				}
			}
			if (iLocal_133 > 4)
			{
				iLocal_47 = 7;
			}
			break;
	}
}

bool func_73(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3A63
{
	func_83(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_74(sParam2, iParam3, 0);
}

int func_74(char* sParam0, int iParam1, bool bParam2)//Position - 0x3AB1
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
					func_82();
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
		if (func_81(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_80();
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
				func_79();
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
				if (func_78())
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
			if (func_77())
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
			func_76();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_75();
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
		func_82();
	}
	return 0;
}

void func_75()//Position - 0x3D7D
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

void func_76()//Position - 0x3DAE
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

int func_77()//Position - 0x3E43
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_78()//Position - 0x3E6A
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

void func_79()//Position - 0x3F03
{
	if (func_31(14))
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
		Global_14393 = func_29();
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

void func_80()//Position - 0x3FA4
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

bool func_81(int iParam0, int iParam1)//Position - 0x3FFB
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

void func_82()//Position - 0x403B
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

void func_83(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x4092
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
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

void func_84(int iParam0, var uParam1)//Position - 0x40E8
{
	ENTITY::FREEZE_ENTITY_POSITION(uParam0, 0);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0);
	Local_435 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	Local_451 = { Local_242 - Local_435 };
	ENTITY::SET_ENTITY_HEADING(iParam0, MISC::GET_HEADING_FROM_VECTOR_2D(Local_451.x, Local_451.f_1));
	if (bLocal_266)
	{
		if (!PED::IS_PED_INJURED(uParam1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				TASK::TASK_VEHICLE_CHASE(uParam1, PLAYER::PLAYER_PED_ID());
				SYSTEM::WAIT(1);
				if (!PED::IS_PED_INJURED(uParam1))
				{
					TASK::SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(uParam1, 32, 1);
				}
			}
			else
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(uParam1, iParam0, PLAYER::PLAYER_PED_ID(), 6, 20f, 786469, -1f, -1f, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()));
			}
		}
	}
	else if (!PED::IS_PED_INJURED(uParam1))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			TASK::TASK_VEHICLE_CHASE(uParam1, PLAYER::PLAYER_PED_ID());
		}
		else
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(uParam1, iParam0, PLAYER::PLAYER_PED_ID(), 2, 100f, 786469, -1f, -1f, 1);
		}
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()));
	}
}

void func_85()//Position - 0x41EA
{
	int iVar0;
	
	uLocal_165[0] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1595.964f, 4732.479f, 0f, 305f, 1, 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_165[0], 1, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_165[0], 1, 1);
	VEHICLE::SET_VEHICLE_LIGHTS(uLocal_165[0], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_165[0], 1);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_165[0], 1);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_165[0], "49GNL112");
	uLocal_165[1] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1570.34f, 4733.755f, 0f, 305f, 1, 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_165[1], 1, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_165[1], 1, 1);
	VEHICLE::SET_VEHICLE_LIGHTS(uLocal_165[1], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_165[1], 1);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_165[1], 1);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_165[1], "47TMS703");
	uLocal_175[0] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), Vector(0f, 4732.479f, -1595.964f) + Vector(10f, 10f, 10f), 305f, 1, 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_175[0], 1, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_175[0], 1, 1);
	VEHICLE::SET_VEHICLE_LIGHTS(uLocal_175[0], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_175[0], 1);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_175[0], 1);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_175[0], "49GNL112");
	uLocal_175[1] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), Vector(0f, 4733.755f, -1570.34f) + Vector(10f, 10f, 10f), 305f, 1, 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_175[1], 1, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_175[1], 1, 1);
	VEHICLE::SET_VEHICLE_LIGHTS(uLocal_175[1], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_175[1], 1);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_175[1], 1);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_175[1], "47TMS703");
	uLocal_149[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_165[0], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	uLocal_149[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_165[1], 26, joaat("g_m_m_chigoon_02"), -1, 1, 1);
	if (!bLocal_266)
	{
		uLocal_149[2] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_165[0], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
		uLocal_149[3] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_165[1], 26, joaat("g_m_m_chigoon_02"), 0, 1, 1);
	}
	uLocal_170[0] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1356.281f, 5000f, 0f, 125.2811f, 1, 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_170[0], 1, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_170[0], 1, 1);
	VEHICLE::SET_VEHICLE_LIGHTS(uLocal_170[0], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_170[0], 1);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_170[0], 1);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_170[0], "49GNL112");
	uLocal_170[1] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1373.589f, 5000f, 0f, 125.459f, 1, 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_170[1], 1, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_170[1], 1, 1);
	VEHICLE::SET_VEHICLE_LIGHTS(uLocal_170[1], 2);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_170[1], 1);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_170[1], 1);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_170[1], "47TMS703");
	uLocal_154[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_170[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_154[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_170[1], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
	uLocal_154[2] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_170[0], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	uLocal_154[3] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_170[1], 26, joaat("g_m_y_salvagoon_03"), 0, 1, 1);
	PED::ADD_RELATIONSHIP_GROUP("RE_deal1", &iLocal_267);
	PED::ADD_RELATIONSHIP_GROUP("RE_deal2", &iLocal_268);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(uLocal_149[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_149[iVar0], iLocal_267);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_149[iVar0], 1, 0);
			if (bLocal_266)
			{
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_149[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!PED::IS_PED_INJURED(uLocal_149[1]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uLocal_149[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				PED::SET_PED_ACCURACY(uLocal_149[iVar0], 15);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_149[iVar0], 3, 0);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_149[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				PED::SET_PED_ACCURACY(uLocal_149[iVar0], 13);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_149[iVar0], 13, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_149[iVar0], 2, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_149[iVar0], 1, 1);
			func_86(&uLocal_270, 4, uLocal_149[iVar0], "REDGWChinese", 0, 1);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!PED::IS_PED_INJURED(uLocal_149[iVar0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_154[iVar0], iLocal_268);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_154[iVar0], 1, 0);
			if (bLocal_266)
			{
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_149[0], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
				if (!PED::IS_PED_INJURED(uLocal_149[1]))
				{
					WEAPON::GIVE_WEAPON_TO_PED(uLocal_149[1], joaat("weapon_pistol"), -1, 1, 1);
				}
				PED::SET_PED_ACCURACY(uLocal_149[iVar0], 15);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_149[iVar0], 3, 0);
				func_86(&uLocal_270, 4, uLocal_149[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_154[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				PED::SET_PED_ACCURACY(uLocal_154[iVar0], 13);
				func_86(&uLocal_270, 5, uLocal_154[iVar0], "REDGWSalvadoran", 0, 1);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_154[iVar0], 13, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_154[iVar0], 2, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_154[iVar0], 1, 1);
		}
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_267, iLocal_268);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_268, iLocal_267);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_267, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_268, 1862763509);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_m_chigoon_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("g_m_y_salvagoon_03"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rebel"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bobcatxl"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sanchez"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_c_rottweiler"));
	bLocal_455 = true;
	iLocal_45 = 1;
}

void func_86(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x476E
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

void func_87()//Position - 0x4809
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iLocal_129)
	{
		case 0:
			if (bLocal_263)
			{
				iVar0 = 0;
				while (iVar0 < 4)
				{
					if (!PED::IS_PED_INJURED(uLocal_149[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_149[iVar0], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_129 = 3;
						}
					}
					iVar0++;
				}
			}
			if (bLocal_264)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (!PED::IS_PED_INJURED(uLocal_154[iVar1]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_154[iVar1], 100f, 100f, 20f, 0, 1, 0))
						{
							iLocal_129 = 3;
						}
					}
					iVar1++;
				}
			}
			break;
		
		case 3:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, iLocal_268);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, iLocal_267);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_267, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_268, 1862763509);
			if (bLocal_263)
			{
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (!PED::IS_PED_INJURED(uLocal_149[iVar2]))
					{
						if ((!PED::IS_PED_IN_COMBAT(uLocal_149[iVar2], 0) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_149[iVar2], 579380604) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_149[iVar2], 579380604) != 0)
						{
							TASK::CLEAR_PED_TASKS(uLocal_149[iVar2]);
							TASK::TASK_COMBAT_PED(uLocal_149[iVar2], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(uLocal_149[iVar2], 1);
						}
					}
					iVar2++;
				}
				if (func_73(&uLocal_270, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
				{
					iLocal_126 = MISC::GET_GAME_TIMER();
					iLocal_129 = 4;
				}
			}
			if (bLocal_264)
			{
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (!PED::IS_PED_INJURED(uLocal_154[iVar3]))
					{
						if ((!PED::IS_PED_IN_COMBAT(uLocal_154[iVar3], 0) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_154[iVar3], 579380604) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_154[iVar3], 579380604) != 0)
						{
							TASK::CLEAR_PED_TASKS(uLocal_154[iVar3]);
							TASK::TASK_COMBAT_PED(uLocal_154[iVar3], PLAYER::PLAYER_PED_ID(), 0, 16);
							PED::SET_PED_KEEP_TASK(uLocal_154[iVar3], 1);
						}
					}
					iVar3++;
				}
				if (func_73(&uLocal_270, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
				{
					iLocal_126 = MISC::GET_GAME_TIMER();
					iLocal_129 = 4;
				}
			}
			break;
	}
}

void func_88()//Position - 0x4A3C
{
	switch (iLocal_127)
	{
		case 0:
			if (!PED::IS_PED_INJURED(uLocal_135))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_236, 7f, 7f, 10f, 0, 1, 0))
				{
					func_90();
					SYSTEM::WAIT(0);
					func_73(&uLocal_270, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_135, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					if (!HUD::DOES_BLIP_EXIST(uLocal_181))
					{
						uLocal_181 = func_89(uLocal_213);
					}
					iLocal_126 = MISC::GET_GAME_TIMER();
					iLocal_127++;
				}
			}
			else
			{
				iLocal_127++;
			}
			break;
	}
	switch (iLocal_128)
	{
		case 1:
			if (!PED::IS_PED_INJURED(uLocal_135))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_135, 10f, 10f, 6f, 0, 1, 0))
				{
					if (!func_59())
					{
						func_73(&uLocal_270, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
						if (!PED::IS_PED_INJURED(uLocal_135))
						{
							TASK::TASK_LOOK_AT_ENTITY(uLocal_135, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							SYSTEM::SETTIMERB(0);
							iLocal_128++;
						}
					}
				}
			}
			else
			{
				SYSTEM::SETTIMERB(0);
				iLocal_128++;
			}
			break;
		
		case 2:
			if (!func_59() || SYSTEM::TIMERB() > 4000)
			{
				if (!PED::IS_PED_INJURED(uLocal_135))
				{
					ENTITY::SET_ENTITY_HEALTH(uLocal_135, 0);
					HUD::REMOVE_BLIP(&uLocal_182);
				}
				if (SYSTEM::TIMERB() > 7000)
				{
					if (!PED::IS_PED_INJURED(uLocal_136[6]))
					{
						ENTITY::SET_ENTITY_HEALTH(uLocal_136[6], 0);
						HUD::REMOVE_BLIP(&(uLocal_183[6]));
					}
				}
				if (SYSTEM::TIMERB() > 9000)
				{
					if (!PED::IS_PED_INJURED(uLocal_136[7]))
					{
						ENTITY::SET_ENTITY_HEALTH(uLocal_136[7], 0);
						HUD::REMOVE_BLIP(&(uLocal_183[7]));
					}
					iLocal_128++;
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_136[6]))
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_136[6], 0);
			}
			if (!PED::IS_PED_INJURED(uLocal_136[7]))
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_136[7], 0);
			}
			if (!PED::IS_PED_INJURED(uLocal_135))
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_135, 0);
			}
			break;
	}
}

int func_89(var uParam0)//Position - 0x4C23
{
	var uVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_PICKUP(uParam0);
	HUD::SET_BLIP_SCALE(uVar0, func_62(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return uVar0;
}

void func_90()//Position - 0x4C5B
{
	Global_14558 = 0;
	func_91();
}

void func_91()//Position - 0x4C6B
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

void func_92()//Position - 0x4C8C
{
	int iVar0;
	
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_213))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_180))
		{
			HUD::REMOVE_BLIP(&uLocal_180);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_181))
		{
			HUD::REMOVE_BLIP(&uLocal_181);
		}
		iLocal_128 = 1;
		iLocal_46 = 2;
		iLocal_45 = 0;
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_136[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_136[iVar0]))
				{
					if (iVar0 == 0)
					{
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_183[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_183[iVar0]));
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_146)
		{
			if (!PED::IS_PED_INJURED(iLocal_146[iVar0]))
			{
			}
			iVar0++;
		}
		if (!func_120())
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_51[7 /*3*/], 110f, 95f, 40f, 0, 1, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_180))
				{
					HUD::REMOVE_BLIP(&uLocal_180);
				}
				if ((!HUD::DOES_BLIP_EXIST(uLocal_182) && !HUD::DOES_BLIP_EXIST(uLocal_183[6])) && !HUD::DOES_BLIP_EXIST(uLocal_183[7]))
				{
					uLocal_182 = func_63(uLocal_135, 1, 145);
					uLocal_183[6] = func_63(uLocal_136[6], 1, 145);
					uLocal_183[7] = func_63(uLocal_136[7], 1, 145);
				}
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_182, 0);
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_183[6], 0);
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_183[7], 0);
				func_93(1);
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_136[6]))
		{
			if (((((TASK::GET_SCRIPT_TASK_STATUS(uLocal_136[6], 1785177548) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_136[6], 1785177548) != 0) || FIRE::IS_ENTITY_ON_FIRE(uLocal_136[6])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_136[6])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uLocal_136[6])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uLocal_136[6]))
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_136[6], 0);
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_136[7]))
		{
			if (((((TASK::GET_SCRIPT_TASK_STATUS(uLocal_136[7], 1785177548) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_136[7], 1785177548) != 0) || FIRE::IS_ENTITY_ON_FIRE(uLocal_136[7])) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_136[7])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uLocal_136[7])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uLocal_136[7]))
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_136[7], 0);
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_135))
		{
			if (((((TASK::GET_SCRIPT_TASK_STATUS(uLocal_135, 1785177548) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_135, 1785177548) != 0) || FIRE::IS_ENTITY_ON_FIRE(uLocal_135)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_135)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uLocal_135)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uLocal_135))
			{
				ENTITY::SET_ENTITY_HEALTH(uLocal_135, 0);
			}
		}
		if (!bLocal_262)
		{
		}
	}
	func_88();
	switch (iLocal_130)
	{
		case 0:
			if (!PED::IS_PED_INJURED(uLocal_136[6]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_136[6], 1) + Vector(0f, 2.5f, 0f), 9f, 5f, 5f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), uLocal_136[6]))
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_136[6], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_136[6], 4000, 2048, 2);
					func_73(&uLocal_270, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
					iLocal_126 = MISC::GET_GAME_TIMER();
					iLocal_130 = 1;
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_136[7]))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_136[7], 1) + Vector(0f, 3f, 0f), 9f, 7f, 5f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), uLocal_136[7]))
				{
					TASK::TASK_LOOK_AT_ENTITY(uLocal_136[7], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uLocal_136[7], 4000, 2048, 2);
					func_73(&uLocal_270, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
					iLocal_126 = MISC::GET_GAME_TIMER();
					iLocal_130 = 1;
				}
			}
			if (PED::IS_PED_INJURED(uLocal_136[6]) && PED::IS_PED_INJURED(uLocal_136[7]))
			{
				iLocal_130 = 2;
			}
			break;
		
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_182))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_182, 1);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_183[6]))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_183[6], 1);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_183[7]))
			{
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_183[7], 1);
			}
			iLocal_125 = MISC::GET_GAME_TIMER();
			if ((iLocal_125 - iLocal_126) > 6000 && !func_59())
			{
				if (!PED::IS_PED_INJURED(uLocal_136[6]))
				{
				}
				if (!PED::IS_PED_INJURED(uLocal_136[7]))
				{
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_181))
				{
					uLocal_181 = func_89(uLocal_213);
				}
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				if (!func_120())
				{
					func_93(1);
				}
				iLocal_130 = 2;
			}
			break;
	}
}

int func_93(int iParam0)//Position - 0x5138
{
	if (func_97())
	{
		Global_97343 = 1;
		Global_97340 = MISC::GET_GAME_TIMER();
		if (func_47(Global_97342))
		{
			func_94(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_47(Global_97342))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_94(int iParam0)//Position - 0x518B
{
	switch (iParam0)
	{
		case 0:
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_95(func_96(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_97349, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_95(func_96(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLIP_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_97349, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_95(func_96(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_ITEM_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 2);
				}
			}
			break;
	}
}

void func_95(var uParam0, int iParam1)//Position - 0x526C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(uParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

char* func_96(int iParam0)//Position - 0x5283
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_97()//Position - 0x52C6
{
	switch (func_98(&Global_24503, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_98(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x52FC
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_102(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_100(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_99(uParam0, iParam4);
		}
	}
	return 2;
}

void func_99(var uParam0, int iParam1)//Position - 0x5433
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_100(int iParam0)//Position - 0x5482
{
	return func_101(iParam0, Global_34913);
}

int func_101(int iParam0, int iParam1)//Position - 0x5493
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_102(int iParam0)//Position - 0x5674
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_100(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_103()//Position - 0x5696
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_159[0]))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(uLocal_159[0], -1) == uLocal_136[8])
		{
			AUDIO::_0x9D3AF56E94C9AE98(uLocal_159[0], 60000f);
			AUDIO::_SOUND_VEHICLE_HORN_THIS_FRAME(uLocal_159[0]);
		}
	}
	if (!PED::IS_PED_INJURED(uLocal_135))
	{
		if (PED::IS_PED_RAGDOLL(uLocal_135))
		{
			ENTITY::SET_ENTITY_HEALTH(uLocal_135, 0);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_182))
	{
		HUD::REMOVE_BLIP(&uLocal_182);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!CAM::IS_SPHERE_VISIBLE(Local_233, 30f) && SYSTEM::VDIST(func_2(PLAYER::PLAYER_ID()), Local_233) > 300f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_136[iVar0]))
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_136[iVar0]));
			}
		}
		if (PED::IS_PED_INJURED(uLocal_136[iVar0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_183[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_183[iVar0]));
			}
		}
		iVar0++;
	}
}

void func_104()//Position - 0x577B
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	STREAMING::REQUEST_MODEL(joaat("g_m_m_chigoon_02"));
	STREAMING::REQUEST_MODEL(joaat("g_m_y_salvagoon_03"));
	STREAMING::REQUEST_MODEL(joaat("rebel"));
	STREAMING::REQUEST_MODEL(joaat("bobcatxl"));
	STREAMING::REQUEST_MODEL(joaat("sanchez"));
	STREAMING::REQUEST_MODEL(joaat("a_c_rottweiler"));
	STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
	STREAMING::REQUEST_ANIM_DICT("random@dealgonewrong");
	STREAMING::REQUEST_ANIM_DICT("random@dealgonewrongdead_peds");
	if ((((((((STREAMING::HAS_MODEL_LOADED(joaat("g_m_m_chigoon_02")) && STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_salvagoon_03"))) && STREAMING::HAS_MODEL_LOADED(joaat("rebel"))) && STREAMING::HAS_MODEL_LOADED(joaat("bobcatxl"))) && STREAMING::HAS_MODEL_LOADED(joaat("sanchez"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_c_rottweiler"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@dealgonewrong")) && STREAMING::HAS_ANIM_DICT_LOADED("random@dealgonewrongdead_peds"))
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_233 - Vector(150f, 150f, 150f), Local_233 + Vector(150f, 150f, 150f), 0, 1, 1, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bobcatxl"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("rebel"), 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		uLocal_159[0] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1626.94f, 4729.889f, 51.3463f, 347.1188f, 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_159[0], 1, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_159[0]);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_159[0], 1, 1);
		VEHICLE::SET_VEHICLE_LIGHTS(uLocal_159[0], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uLocal_159[0], 500f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uLocal_159[0], 500f);
		VEHICLE::SET_VEHICLE_EXTRA(uLocal_159[0], 1, 1);
		VEHICLE::SET_VEHICLE_TYRE_BURST(uLocal_159[0], 0, 0, 1148846080);
		VEHICLE::SMASH_VEHICLE_WINDOW(uLocal_159[0], 6);
		AUDIO::SET_VEH_RADIO_STATION(uLocal_159[0], "RADIO_06_COUNTRY");
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_159[0], "76JON418");
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uLocal_159[0], 1);
		uLocal_159[1] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1619.432f, 4747.792f, 52.7502f, 146.6017f, 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_159[1], 1, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_159[1]);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_159[1], 1, 1);
		VEHICLE::SET_VEHICLE_LIGHTS(uLocal_159[1], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uLocal_159[1], 600f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uLocal_159[1], 400f);
		VEHICLE::SET_VEHICLE_EXTRA(uLocal_159[1], 1, 1);
		VEHICLE::SET_VEHICLE_EXTRA(uLocal_159[1], 2, 1);
		VEHICLE::SET_VEHICLE_EXTRA(uLocal_159[1], 3, 0);
		VEHICLE::SET_VEHICLE_EXTRA(uLocal_159[1], 4, 0);
		VEHICLE::SMASH_VEHICLE_WINDOW(uLocal_159[1], 6);
		AUDIO::SET_VEH_RADIO_STATION(uLocal_159[1], "RADIO_06_COUNTRY");
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_159[1], "79ERK121");
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uLocal_159[1], 1);
		AUDIO::SET_VEHICLE_RADIO_LOUD(uLocal_159[1], 1);
		uLocal_159[2] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), -1636.216f, 4748.061f, 51.5484f, 199.3236f, 1, 1);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_159[2], "83JOH802");
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_159[2], 1, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_159[2]);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_159[2], 1, 1);
		VEHICLE::SET_VEHICLE_LIGHTS(uLocal_159[2], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uLocal_159[2], 60f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uLocal_159[2], 1000f);
		VEHICLE::SET_VEHICLE_EXTRA(uLocal_159[2], 1, 0);
		VEHICLE::SET_VEHICLE_TYRE_BURST(uLocal_159[2], 1, 0, 1148846080);
		uLocal_159[3] = VEHICLE::CREATE_VEHICLE(joaat("rebel"), -1641.578f, 4736.783f, 52.5984f, 278.1865f, 1, 1);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uLocal_159[3], "85TOR114");
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_159[3], 1, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_159[3]);
		VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_159[3], 1, 1);
		VEHICLE::SET_VEHICLE_LIGHTS(uLocal_159[3], 2);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uLocal_159[3], 500f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uLocal_159[3], 500f);
		VEHICLE::SET_VEHICLE_EXTRA(uLocal_159[3], 1, 0);
		VEHICLE::SET_VEHICLE_EXTRA(uLocal_159[3], 2, 0);
		VEHICLE::SET_VEHICLE_EXTRA(uLocal_159[3], 3, 0);
		VEHICLE::SET_VEHICLE_EXTRA(uLocal_159[3], 4, 0);
		VEHICLE::SET_VEHICLE_TYRE_BURST(uLocal_159[3], 0, 0, 1148846080);
		VEHICLE::SET_VEHICLE_TYRE_BURST(uLocal_159[3], 5, 0, 1148846080);
		if (!OBJECT::DOES_PICKUP_EXIST(uLocal_213))
		{
			iVar0 = 0;
			MISC::SET_BIT(&iVar0, 1);
			MISC::SET_BIT(&iVar0, 3);
			MISC::SET_BIT(&iVar0, 4);
			uLocal_213 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), Local_236, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_security_case_01"));
		}
		Local_245[0 /*3*/] = { -1640.411f, 4740.702f, 52.6218f };
		Local_245[1 /*3*/] = { -1624.664f, 4746.569f, 51.541f };
		Local_245[2 /*3*/] = { -1626.339f, 4734.232f, 51.6176f };
		Local_245[3 /*3*/] = { -1634.297f, 4741.213f, 51.9737f };
		Local_245[4 /*3*/] = { -1644.717f, 4736.446f, 52.3014f };
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!OBJECT::DOES_PICKUP_EXIST(uLocal_214[iVar1]))
			{
				iVar2 = 0;
				MISC::SET_BIT(&iVar2, 3);
				MISC::SET_BIT(&iVar2, 4);
				if (iVar1 < 2)
				{
					uLocal_214[iVar1] = OBJECT::CREATE_PICKUP(joaat("pickup_weapon_sawnoffshotgun"), Local_245[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
				else if (iVar1 == 4)
				{
					uLocal_214[iVar1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_assaultrifle"), Local_245[iVar1 /*3*/], 90f, 50f, 0f, 0, 50, 2, 1, 0);
				}
				else
				{
					uLocal_214[iVar1] = OBJECT::CREATE_PICKUP(joaat("pickup_weapon_pistol"), Local_245[iVar1 /*3*/], iVar2, -1, 1, 0);
				}
			}
			iVar1++;
		}
		Local_51[0 /*3*/] = { -1636.535f, 4708.455f, 46.09f };
		fLocal_79[0] = 177.0024f;
		Local_51[1 /*3*/] = { -1621.19f, 4744.868f, 52.4254f };
		fLocal_79[1] = 146.9645f;
		Local_51[2 /*3*/] = { -1622.795f, 4735.975f, 51.474f };
		fLocal_79[2] = 48.6546f;
		Local_51[3 /*3*/] = { -1632.695f, 4742.906f, 51.8604f };
		fLocal_79[3] = 155.0678f;
		Local_51[4 /*3*/] = { -1629.544f, 4738.6f, 52.1784f };
		fLocal_79[4] = 278.3085f;
		Local_51[5 /*3*/] = { -1634.764f, 4745.188f, 51.3926f };
		fLocal_79[5] = 270.3501f;
		Local_51[7 /*3*/] = { -1628.321f, 4731.502f, 51.7644f };
		fLocal_79[7] = 352.9167f;
		Local_51[6 /*3*/] = { -1640.311f, 4738.4f, 52.2f };
		fLocal_79[6] = 34.1111f;
		Local_116 = { -1641.735f, 4692.13f, 39.394f };
		fLocal_122 = 326.7277f;
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (iVar1 <= 3)
			{
				uLocal_136[iVar1] = PED::CREATE_PED(22, joaat("g_m_y_salvagoon_03"), Local_51[iVar1 /*3*/], fLocal_79[iVar1], 1, 1);
				PED::SET_PED_CONFIG_FLAG(uLocal_136[iVar1], 227, 1);
			}
			else
			{
				uLocal_136[iVar1] = PED::CREATE_PED(22, joaat("g_m_m_chigoon_02"), Local_51[iVar1 /*3*/], fLocal_79[iVar1], 1, 1);
			}
			iVar1++;
		}
		iLocal_146[0] = PED::CREATE_PED(26, joaat("a_c_rottweiler"), -1635.005f, 4737.181f, 53.4995f, 33.4155f, 1, 1);
		iLocal_146[1] = PED::CREATE_PED(26, joaat("a_c_rottweiler"), -1625.215f, 4741.119f, 52.5762f, 316.2733f, 1, 1);
		iVar1 = 0;
		while (iVar1 < iLocal_146)
		{
			PED::SET_PED_CAN_RAGDOLL(iLocal_146[iVar1], 1);
			ENTITY::SET_ENTITY_COLLISION(iLocal_146[iVar1], 1, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_146[iVar1], 227, 1);
			Local_89 = { ENTITY::GET_ENTITY_COORDS(iLocal_146[iVar1], 1) };
			Local_92 = { Local_89.x, (Local_89.f_1 - 2f), (Local_89.f_2 - 0.5f) };
			Local_95 = { Local_89.x, (Local_89.f_1 + 50f), (Local_89.f_2 - 0.5f) };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_92, Local_95, 100, 1, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iVar1++;
		}
		TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_136[0], "random@dealgonewrongdead_peds", "ped_b", -1635.928f, 4707.941f, 46.383f, -29.25f, 12.25f, 171.75f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_136[1], "random@dealgonewrongdead_peds", "ped_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_136[2], "random@dealgonewrongdead_peds", "ped_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_136[3], "random@dealgonewrongdead_peds", "ped_c", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_136[4], "random@dealgonewrongdead_peds", "ped_d", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(uLocal_136[5], "random@dealgonewrongdead_peds", "ped_e", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_146[0], "random@dealgonewrongdead_peds", "dog_a", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_146[1], "random@dealgonewrongdead_peds", "dog_b", -1626.923f, 4729.901f, 52.214f, -1.341f, 1.085f, -12.902f, 1000f, -1000f, -1, 2102272, 0, 2, 0);
		GRAPHICS::_0x46D1A61A21F566FC(50f);
		func_106();
		GRAPHICS::_0x46D1A61A21F566FC(1f);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_159[0], 0))
		{
			uLocal_136[8] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_159[0], 26, joaat("g_m_y_salvagoon_03"), -1, 1, 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_136[8], 1, 0);
			PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(uLocal_136[8], 1);
			ENTITY::SET_ENTITY_HEALTH(uLocal_136[8], 0);
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_180))
		{
		}
		PED::ADD_RELATIONSHIP_GROUP("re_DealGoneWrong", &uLocal_269);
		uLocal_136[6] = PED::CREATE_PED(22, joaat("g_m_m_chigoon_02"), Local_51[6 /*3*/], fLocal_79[6], 1, 1);
		func_86(&uLocal_270, 4, uLocal_136[6], "REDGWChinese", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_136[6], 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_136[6], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_136[6], uLocal_269);
		uVar3 = PED::CREATE_SYNCHRONIZED_SCENE(Local_51[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(uLocal_136[6], uVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar3, 1);
		PED::SET_PED_KEEP_TASK(uLocal_136[6], 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_136[6], 227, 1);
		uLocal_136[7] = PED::CREATE_PED(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_79[7], 1, 1);
		func_86(&uLocal_270, 5, uLocal_136[7], "REDGWSalvadoran", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_136[7], 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_136[7], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_136[7], iLocal_269);
		uVar4 = PED::CREATE_SYNCHRONIZED_SCENE(Local_51[7 /*3*/] + Vector(0.92f, 0.65f, -0.65f), 0f, 0f, 34.1111f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(uLocal_136[7], uVar4, "random@dealgonewrong", "idle_a", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar4, 1);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uVar4, 0.5f);
		PED::SET_PED_KEEP_TASK(uLocal_136[7], 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_136[7], 227, 1);
		uLocal_135 = PED::CREATE_PED(22, joaat("g_m_m_chigoon_02"), Local_116, fLocal_122, 1, 1);
		func_86(&uLocal_270, 4, uLocal_135, "REDGWChinese", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_135, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_135, iLocal_269);
		uVar5 = PED::CREATE_SYNCHRONIZED_SCENE(Local_116, 7.5f, -12.75f, 51.5f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(uLocal_135, uVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar5, 1);
		ENTITY::SET_ENTITY_ROTATION(uLocal_135, 4f, 18f, 326.7277f, 0, 1);
		PED::SET_PED_KEEP_TASK(uLocal_135, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_135, 227, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_269, 1862763509);
		if (func_29() == 0)
		{
			func_86(&uLocal_270, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (func_29() == 1)
		{
			func_86(&uLocal_270, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (func_29() == 2)
		{
			func_86(&uLocal_270, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		uLocal_220[0] = GRAPHICS::ADD_DECAL(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[1] = GRAPHICS::ADD_DECAL(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[2] = GRAPHICS::ADD_DECAL(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[3] = GRAPHICS::ADD_DECAL(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[4] = GRAPHICS::ADD_DECAL(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[5] = GRAPHICS::ADD_DECAL(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[6] = GRAPHICS::ADD_DECAL(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[7] = GRAPHICS::ADD_DECAL(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[8] = GRAPHICS::ADD_DECAL(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[9] = GRAPHICS::ADD_DECAL(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[10] = GRAPHICS::ADD_DECAL(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, func_105(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_136[iVar1]))
			{
				PED::SET_PED_CAN_RAGDOLL(uLocal_136[iVar1], 1);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(uLocal_136[iVar1], 0, 0.3f, 0.6f, 3);
				PED::APPLY_PED_BLOOD_DAMAGE_BY_ZONE(uLocal_136[iVar1], 0, 0.65f, 0.6f, 3);
				SYSTEM::WAIT(MISC::GET_RANDOM_INT_IN_RANGE(100, 500));
				if (iVar1 <= 5)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_183[iVar1]))
					{
						HUD::REMOVE_BLIP(&(uLocal_183[iVar1]));
					}
				}
			}
			iVar1++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
			}
		}
		iLocal_454 = 1;
	}
}

Vector3 func_105(struct<3> Param0)//Position - 0x672E
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_106()//Position - 0x676D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		SYSTEM::WAIT(0);
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_159[iVar0]))
		{
			Local_98 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_159[iVar0], 0f, 0f, 0.5f) };
		}
		iLocal_132 = 0;
		while (iLocal_132 < 5)
		{
			fLocal_119 = MISC::GET_RANDOM_FLOAT_IN_RANGE(1.5f, 2.5f);
			fLocal_120 = MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 4f);
			fLocal_121 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
			SYSTEM::WAIT(0);
			Local_101 = { (Local_98.x - fLocal_119), (Local_98.f_1 - fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.x + fLocal_119), (Local_98.f_1 + fLocal_120), Local_98.f_2 };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { (Local_98.x + fLocal_119), (Local_98.f_1 + fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.x - fLocal_119), (Local_98.f_1 - fLocal_120), Local_98.f_2 };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { (Local_98.x + fLocal_119), (Local_98.f_1 - fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.x - fLocal_119), (Local_98.f_1 + fLocal_120), Local_98.f_2 };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { (Local_98.x - fLocal_119), (Local_98.f_1 + fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { (Local_98.x + fLocal_119), (Local_98.f_1 - fLocal_120), Local_98.f_2 };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			Local_101 = { Local_98.x, (Local_98.f_1 + fLocal_120), (Local_98.f_2 + fLocal_121) };
			Local_104 = { Local_98.x, (Local_98.f_1 - fLocal_120), Local_98.f_2 };
			MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Local_101, Local_104, 1, 0, joaat("weapon_assaultrifle"), 0, 1, 1, -1082130432);
			iLocal_132++;
		}
		iVar0++;
	}
}

int func_107()//Position - 0x6941
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_118())
		{
			return 0;
		}
	}
	if (func_114())
	{
		return 1;
	}
	if (func_108(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_108(float fParam0, bool bParam1)//Position - 0x69C7
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_32(func_29()))
		{
			iVar36 = func_52();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 3))
				{
					func_109(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_109(int iParam0, var uParam1)//Position - 0x6A7E
{
	switch (iParam0)
	{
		case 0:
			func_110(uParam1, "Abigail1", func_112(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 1:
			func_110(uParam1, "Abigail2", func_112(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 2:
			func_110(uParam1, "Barry1", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 3:
			func_110(uParam1, "Barry2", func_112(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 4:
			func_110(uParam1, "Barry3", func_112(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 5:
			func_110(uParam1, "Barry3A", func_112(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 6:
			func_110(uParam1, "Barry3C", func_112(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 7:
			func_110(uParam1, "Barry4", func_112(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_111(iParam0), 0, 0);
			break;
		
		case 8:
			func_110(uParam1, "Dreyfuss1", func_112(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 9:
			func_110(uParam1, "Epsilon1", func_112(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 10:
			func_110(uParam1, "Epsilon2", func_112(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 11:
			func_110(uParam1, "Epsilon3", func_112(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 12:
			func_110(uParam1, "Epsilon4", func_112(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 13:
			func_110(uParam1, "Epsilon5", func_112(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 14:
			func_110(uParam1, "Epsilon6", func_112(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 15:
			func_110(uParam1, "Epsilon7", func_112(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 16:
			func_110(uParam1, "Epsilon8", func_112(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 17:
			func_110(uParam1, "Extreme1", func_112(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 18:
			func_110(uParam1, "Extreme2", func_112(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 19:
			func_110(uParam1, "Extreme3", func_112(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 20:
			func_110(uParam1, "Extreme4", func_112(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 21:
			func_110(uParam1, "Fanatic1", func_112(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_111(iParam0), 1, 0);
			break;
		
		case 22:
			func_110(uParam1, "Fanatic2", func_112(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_111(iParam0), 1, 0);
			break;
		
		case 23:
			func_110(uParam1, "Fanatic3", func_112(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_111(iParam0), 0, 1);
			break;
		
		case 24:
			func_110(uParam1, "Hao1", func_112(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_111(iParam0), 0, 1);
			break;
		
		case 25:
			func_110(uParam1, "Hunting1", func_112(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 26:
			func_110(uParam1, "Hunting2", func_112(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 27:
			func_110(uParam1, "Josh1", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 28:
			func_110(uParam1, "Josh2", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 29:
			func_110(uParam1, "Josh3", func_112(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 30:
			func_110(uParam1, "Josh4", func_112(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 31:
			func_110(uParam1, "Maude1", func_112(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 32:
			func_110(uParam1, "Minute1", func_112(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 33:
			func_110(uParam1, "Minute2", func_112(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 34:
			func_110(uParam1, "Minute3", func_112(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 35:
			func_110(uParam1, "MrsPhilips1", func_112(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 36:
			func_110(uParam1, "MrsPhilips2", func_112(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 37:
			func_110(uParam1, "Nigel1", func_112(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 38:
			func_110(uParam1, "Nigel1A", func_112(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 39:
			func_110(uParam1, "Nigel1B", func_112(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 40:
			func_110(uParam1, "Nigel1C", func_112(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 41:
			func_110(uParam1, "Nigel1D", func_112(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_111(iParam0), 1, 1);
			break;
		
		case 42:
			func_110(uParam1, "Nigel2", func_112(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 43:
			func_110(uParam1, "Nigel3", func_112(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 1);
			break;
		
		case 44:
			func_110(uParam1, "Omega1", func_112(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 45:
			func_110(uParam1, "Omega2", func_112(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 46:
			func_110(uParam1, "Paparazzo1", func_112(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 47:
			func_110(uParam1, "Paparazzo2", func_112(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 48:
			func_110(uParam1, "Paparazzo3", func_112(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 49:
			func_110(uParam1, "Paparazzo3A", func_112(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 50:
			func_110(uParam1, "Paparazzo3B", func_112(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 51:
			func_110(uParam1, "Paparazzo4", func_112(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 52:
			func_110(uParam1, "Rampage1", func_112(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 54:
			func_110(uParam1, "Rampage3", func_112(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 55:
			func_110(uParam1, "Rampage4", func_112(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 56:
			func_110(uParam1, "Rampage5", func_112(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_111(iParam0), 0, 0);
			break;
		
		case 53:
			func_110(uParam1, "Rampage2", func_112(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_111(iParam0), 1, 0);
			break;
		
		case 57:
			func_110(uParam1, "TheLastOne", func_112(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 58:
			func_110(uParam1, "Tonya1", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 59:
			func_110(uParam1, "Tonya2", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 60:
			func_110(uParam1, "Tonya3", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 61:
			func_110(uParam1, "Tonya4", func_112(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		case 62:
			func_110(uParam1, "Tonya5", func_112(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_111(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_110(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x7C33
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_111(int iParam0)//Position - 0x7CC4
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_112(int iParam0)//Position - 0x800A
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_113(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_113(int iParam0)//Position - 0x8041
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_114()//Position - 0x848D
{
	if (func_117() && !func_118())
	{
		return 1;
	}
	if (func_116() && func_115())
	{
		return 1;
	}
	return 0;
}

bool func_115()//Position - 0x84BF
{
	return Global_97071 > 0;
}

int func_116()//Position - 0x84CD
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_117()//Position - 0x84E2
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_118()//Position - 0x8508
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_119()//Position - 0x8525
{
	if (!func_100(5))
	{
		return 1;
	}
	if (func_114())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_118())
		{
			return 0;
		}
	}
	if (func_108(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_120()//Position - 0x8587
{
	if ((Global_97342 == func_56() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_97343)
	{
		return 1;
	}
	return 0;
}

void func_121(int iParam0)//Position - 0x85B2
{
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_123(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_97339 = 0;
	func_122();
}

void func_122()//Position - 0x85E8
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

void func_123(int iParam0)//Position - 0x8625
{
	Global_97342 = iParam0;
}

int func_124(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x8633
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
		iParam3 = func_56();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_165())
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
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_118())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (func_38(0))
		{
			return 0;
		}
		if (func_114())
		{
			return 0;
		}
		if (func_164())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (func_32(func_29()))
		{
			if (func_108(100f, 1) != -1)
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
		if (!func_163(iParam3))
		{
			return 0;
		}
		if (func_32(func_29()))
		{
			if (func_162(func_29()) == 4 || func_162(func_29()) == 5)
			{
				return 0;
			}
		}
		if (func_32(func_29()))
		{
			if (!func_161(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_160(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
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
		if (func_159())
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
		if (!func_150(4))
		{
			return 0;
		}
		if (!func_100(5))
		{
			return 0;
		}
		if (func_149(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_149(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_163(30) && !func_149(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_32(func_29()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (func_148(iVar8))
				{
					if (func_126(iVar4))
					{
						if (!func_125(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_29() != iVar4)
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

bool func_125(struct<3> Param0, struct<3> Param3)//Position - 0x89CC
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_126(int iParam0)//Position - 0x89F5
{
	int iVar0;
	
	iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0];
	return func_127(iVar0);
}

int func_127(int iParam0)//Position - 0x8A16
{
	return func_128(iParam0, 1);
}

int func_128(int iParam0, int iParam1)//Position - 0x8A25
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_148(iParam0))
	{
		return 0;
	}
	func_129(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_129(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x8A78
{
	func_130(func_141(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_130(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x8A96
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_140(iParam0, iParam1))
	{
		iVar0 = func_139(iParam1);
		iVar1 = func_137(iParam0);
		iVar2 = (func_137(iParam0) - func_137(iParam1));
		iVar3 = (func_139(iParam0) - func_139(iParam1));
		iVar4 = (func_136(iParam0) - func_136(iParam1));
		iVar5 = (func_135(iParam0) - func_135(iParam1));
		iVar6 = (func_134(iParam0) - func_134(iParam1));
		iVar7 = (func_133(iParam0) - func_133(iParam1));
	}
	else
	{
		iVar0 = func_139(iParam0);
		iVar1 = func_137(iParam1);
		iVar2 = (func_137(iParam1) - func_137(iParam0));
		iVar3 = (func_139(iParam1) - func_139(iParam0));
		iVar4 = (func_136(iParam1) - func_136(iParam0));
		iVar5 = (func_135(iParam1) - func_135(iParam0));
		iVar6 = (func_134(iParam1) - func_134(iParam0));
		iVar7 = (func_133(iParam1) - func_133(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_132(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_131(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_131(float fParam0, float fParam1, float fParam2)//Position - 0x8C97
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_132(int iParam0, int iParam1)//Position - 0x8CD9
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_133(int iParam0)//Position - 0x8D7B
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_134(int iParam0)//Position - 0x8D8E
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_135(int iParam0)//Position - 0x8DA1
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_136(int iParam0)//Position - 0x8DB4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_137(int iParam0)//Position - 0x8DC6
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_138(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_138(bool bParam0, int iParam1, int iParam2)//Position - 0x8DEB
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_139(int iParam0)//Position - 0x8E02
{
	return iParam0 & 15;
}

int func_140(int iParam0, int iParam1)//Position - 0x8E0F
{
	int iVar0;
	int iVar1;
	
	if (!func_148(iParam1) || !func_148(iParam0))
	{
		return 1;
	}
	iVar0 = func_137(iParam0);
	iVar1 = func_137(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_139(iParam0);
	iVar1 = func_139(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_136(iParam0);
	iVar1 = func_136(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_135(iParam0);
	iVar1 = func_135(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_134(iParam0);
	iVar1 = func_134(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	iVar1 = func_133(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_141()//Position - 0x8F1B
{
	var uVar0;
	
	func_147(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_146(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_145(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_144(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_143(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_142(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_142(var uParam0, int iParam1)//Position - 0x8F61
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_143(var uParam0, int iParam1)//Position - 0x8FE7
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_144(var uParam0, int iParam1)//Position - 0x901A
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_139(*uParam0);
	iVar1 = func_137(*uParam0);
	if (iParam1 < 1 || iParam1 > func_132(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_145(var uParam0, int iParam1)//Position - 0x906B
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_146(var uParam0, int iParam1)//Position - 0x90A5
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_147(var uParam0, int iParam1)//Position - 0x90E0
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_148(int iParam0)//Position - 0x911C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_133(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_134(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_135(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_137(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_139(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_136(iParam0);
	if (iVar5 < 1 || iVar5 > func_132(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_149(int iParam0, int iParam1)//Position - 0x91F8
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_150(int iParam0)//Position - 0x921B
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_29();
				if (!func_32(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_158()) || Global_96400) || Global_24446) || func_157()) || func_81(8, -1)) || func_156()) || func_155()) || func_154()) || func_153()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_158()) || Global_24446) || func_157()) || func_81(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_158()) || Global_96400) || Global_24446) || func_157()) || func_81(8, -1)) || func_154()) || func_156()) || func_155()) || func_153()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_158()) || Global_96400) || Global_24446) || func_157()) || func_81(8, -1)) || func_156()) || func_155()) || func_153()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_158() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_81(8, -1)) || func_153()) || func_152()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_81(8, -1) || func_156()) || func_155()) || func_152()) || func_151())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_158()) || Global_24446) || func_157()) || func_81(8, -1)) || func_155()) || func_154()) || func_153()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_158()) || func_155()) || Global_96400) || Global_24446) || func_157()) || Global_35957) || func_81(8, -1)) || func_154()) || func_152()) || func_153()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_158()) || Global_96400) || Global_24446) || func_157()) || func_81(8, -1)) || func_154()) || func_152()) || func_156()) || func_155()) || func_153())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_151()//Position - 0x9938
{
	return Global_90001.f_1;
}

int func_152()//Position - 0x9946
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_153()//Position - 0x996C
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_154()//Position - 0x9986
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_155()//Position - 0x99B0
{
	return Global_90014.f_291 > 0;
}

bool func_156()//Position - 0x99C1
{
	return Global_90014.f_290 > 0;
}

var func_157()//Position - 0x99D2
{
	return Global_1315900;
}

int func_158()//Position - 0x99DE
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_159()//Position - 0x99FA
{
	func_79();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_160(int iParam0)//Position - 0x9A22
{
	return func_140(func_141(), iParam0);
}

int func_161(int iParam0, int iParam1, int iParam2)//Position - 0x9A34
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_29();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_162(int iParam0)//Position - 0x9B18
{
	if (!func_32(iParam0))
	{
		return 7;
	}
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iParam0];
}

bool func_163(int iParam0)//Position - 0x9B3C
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_165())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_SAVE_DATA.RE_FLAGS, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_TIME_REQ_SET, iVar0);
	}
	return bVar1;
}

int func_164()//Position - 0x9B9A
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_165()//Position - 0x9BD1
{
	var uVar0;
	
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_166()//Position - 0x9C54
{
	int iVar0;
	
	if (iLocal_454 && !iLocal_261)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		if (HUD::DOES_BLIP_EXIST(uLocal_180))
		{
			HUD::REMOVE_BLIP(&uLocal_180);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_181))
		{
			HUD::REMOVE_BLIP(&uLocal_181);
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_193[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_193[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_203[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_203[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(uLocal_149[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uLocal_149[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_265 = true;
						}
					}
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_198[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_198[iVar0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_208[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_208[iVar0]));
			}
			if (iLocal_47 >= 6)
			{
				if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(uLocal_154[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uLocal_154[iVar0], PLAYER::PLAYER_PED_ID(), 100f, 100f, 100f, 0, 1, 0))
						{
							bLocal_265 = true;
						}
					}
				}
			}
			iVar0++;
		}
		if (iLocal_45 >= 1)
		{
			MISC::ENABLE_DISPATCH_SERVICE(5, 1);
			MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		}
		if (bLocal_265)
		{
			func_3(func_29(), 1, 25000);
		}
	}
	func_167(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_167(int iParam0)//Position - 0x9DCC
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_56();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_120())
	{
		func_171(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_97344 = MISC::GET_GAME_TIMER();
		func_170(30000);
		StringCopy(&cVar0, func_169(Global_97342, 1), 64);
		if (func_55(Global_97342) > 0)
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
	func_168(&Global_24503);
	Global_97343 = 0;
	func_123(-1);
}

void func_168(var uParam0)//Position - 0x9E81
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

char* func_169(int iParam0, bool bParam1)//Position - 0x9EBE
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_170(int iParam0)//Position - 0xA107
{
	Global_35464 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_171(int iParam0)//Position - 0xA119
{
	func_172(iParam0, 0, func_177(iParam0));
}

void func_172(int iParam0, int iParam1, int iParam2)//Position - 0xA12E
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_141();
	func_175(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_174(iParam0, &uVar0);
	Var1 = { func_173(&uVar0) };
}

struct<16> func_173(var uParam0)//Position - 0xA15D
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_135(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_134(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_133(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_136(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_139(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_137(*uParam0), 64);
	return Var0;
}

void func_174(int iParam0, var uParam1)//Position - 0xA22D
{
	Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam0] = *uParam1;
}

void func_175(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA245
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_137(*uParam0);
	iVar1 = func_139(*uParam0);
	iVar2 = func_136(*uParam0);
	iVar3 = func_135(*uParam0);
	iVar4 = func_134(*uParam0);
	iVar5 = func_133(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_132(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_132(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_176(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_176(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xA3C7
{
	func_147(uParam0, iParam1);
	func_146(uParam0, iParam2);
	func_145(uParam0, iParam3);
	func_144(uParam0, iParam4);
	func_143(uParam0, iParam5);
	func_142(uParam0, iParam6);
}

int func_177(int iParam0)//Position - 0xA3FF
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

