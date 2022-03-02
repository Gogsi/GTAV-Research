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
		GlobalFunc_6828(-1);
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
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10586())
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
			GlobalFunc_10871(GlobalFunc_8329(), 1, 25000);
		}
		iLocal_261 = 1;
	}
	if (!CAM::IS_SPHERE_VISIBLE(Local_233, 30f) && SYSTEM::VDIST(GlobalFunc_80(PLAYER::PLAYER_ID()), Local_233) > 300f)
	{
		func_166();
	}
}


































void func_35()//Position - 0x1647
{
	while (GlobalFunc_111())
	{
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_82())
	{
		SYSTEM::WAIT(0);
	}
	func_39(-1, 0);
	GlobalFunc_7068();
	iLocal_46 = 3;
}




void func_39(int iParam0, int iParam1)//Position - 0x16FE
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
					*uParam1 = GlobalFunc_6829(*uParam0, 1, 145);
				}
			}
			if (!HUD::DOES_BLIP_EXIST(*uParam3))
			{
				if (iVar0 == 1)
				{
					*uParam3 = GlobalFunc_5104(ENTITY::GET_ENTITY_COORDS(*uParam2, 1), 0);
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
					*uParam1 = GlobalFunc_6829(*uParam0, 1, 145);
				}
			}
		}
	}
}





void func_65(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)//Position - 0x2D1D
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((((((ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam0 != iParam1) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam1))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam1))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam1)) && GlobalFunc_2905(iParam0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, Param7) };
				GlobalFunc_2525(iParam1, uParam4, uParam5);
			}
			if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0))
			{
				*uParam6 = MISC::GET_GAME_TIMER();
			}
			else if ((MISC::GET_GAME_TIMER() - *uParam6) > iParam10)
			{
				if (GlobalFunc_156(iParam0, iParam1, 1) > fParam11 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam2, 1) > 20f)
				{
					if (!GlobalFunc_105(*uParam2))
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
							if (!GlobalFunc_105(Var0))
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
					uLocal_193[iVar0] = GlobalFunc_6829(uLocal_149[iVar0], 1, 145);
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
					uLocal_198[iVar0] = GlobalFunc_6829(uLocal_154[iVar0], 1, 145);
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
						if (GlobalFunc_8329() == 0)
						{
							GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 1)
						{
							GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 2)
						{
							GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
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
						if (GlobalFunc_8329() == 0)
						{
							GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 1)
						{
							GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
						}
						else if (GlobalFunc_8329() == 2)
						{
							GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
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
					if (GlobalFunc_8329() == 0)
					{
						GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_MAWAY", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 1)
					{
						GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_FAWAY", 4, 0, 0, 0);
					}
					else if (GlobalFunc_8329() == 2)
					{
						GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_TAWAY", 4, 0, 0, 0);
					}
					bLocal_263 = true;
					SYSTEM::SETTIMERA(0);
					iLocal_47 = 6;
				}
			}
			break;
		
		case 6:
			if (GlobalFunc_111())
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
			GlobalFunc_878(&uLocal_270, 4, uLocal_149[iVar0], "REDGWChinese", 0, 1);
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
				GlobalFunc_878(&uLocal_270, 4, uLocal_149[iVar0], "REDGWChinese", 0, 1);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_154[iVar0], joaat("weapon_pistol"), -1, 1, 1);
				PED::SET_PED_ACCURACY(uLocal_154[iVar0], 13);
				GlobalFunc_878(&uLocal_270, 5, uLocal_154[iVar0], "REDGWSalvadoran", 0, 1);
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
				if (GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_FIRE_C", 4, 0, 0, 0))
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
				if (GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_FIRE_S", 4, 0, 0, 0))
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
					GlobalFunc_4956();
					SYSTEM::WAIT(0);
					GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_NTOUCH", 4, 0, 0, 0);
					TASK::TASK_LOOK_AT_ENTITY(uLocal_135, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					if (!HUD::DOES_BLIP_EXIST(uLocal_181))
					{
						uLocal_181 = GlobalFunc_5666(uLocal_213);
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
					if (!GlobalFunc_111())
					{
						GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_NKILLD", 4, 0, 0, 0);
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
			if (!GlobalFunc_111() || SYSTEM::TIMERB() > 4000)
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
		if (!GlobalFunc_6827())
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_51[7 /*3*/], 110f, 95f, 40f, 0, 1, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_180))
				{
					HUD::REMOVE_BLIP(&uLocal_180);
				}
				if ((!HUD::DOES_BLIP_EXIST(uLocal_182) && !HUD::DOES_BLIP_EXIST(uLocal_183[6])) && !HUD::DOES_BLIP_EXIST(uLocal_183[7]))
				{
					uLocal_182 = GlobalFunc_6829(uLocal_135, 1, 145);
					uLocal_183[6] = GlobalFunc_6829(uLocal_136[6], 1, 145);
					uLocal_183[7] = GlobalFunc_6829(uLocal_136[7], 1, 145);
				}
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_182, 0);
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_183[6], 0);
				HUD::SHOW_HEIGHT_ON_BLIP(uLocal_183[7], 0);
				GlobalFunc_9034(1);
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
					GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_NDIE", 4, 0, 0, 0);
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
					GlobalFunc_10641(&uLocal_270, "REDGWAU", "REDGW_NDIE1", 4, 0, 0, 0);
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
			if ((iLocal_125 - iLocal_126) > 6000 && !GlobalFunc_111())
			{
				if (!PED::IS_PED_INJURED(uLocal_136[6]))
				{
				}
				if (!PED::IS_PED_INJURED(uLocal_136[7]))
				{
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_181))
				{
					uLocal_181 = GlobalFunc_5666(uLocal_213);
				}
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				if (!GlobalFunc_6827())
				{
					GlobalFunc_9034(1);
				}
				iLocal_130 = 2;
			}
			break;
	}
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
		if (!CAM::IS_SPHERE_VISIBLE(Local_233, 30f) && SYSTEM::VDIST(GlobalFunc_80(PLAYER::PLAYER_ID()), Local_233) > 300f)
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
		GlobalFunc_878(&uLocal_270, 4, uLocal_136[6], "REDGWChinese", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_136[6], 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_136[6], 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_136[6], uLocal_269);
		uVar3 = PED::CREATE_SYNCHRONIZED_SCENE(Local_51[6 /*3*/] + Vector(1.05f, 0f, 0f), -7f, 0f, 34.1111f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(uLocal_136[6], uVar3, "random@dealgonewrong", "base", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar3, 1);
		PED::SET_PED_KEEP_TASK(uLocal_136[6], 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_136[6], 227, 1);
		uLocal_136[7] = PED::CREATE_PED(22, joaat("g_m_y_salvagoon_03"), -1640.311f, 4738.4f, 50.2f, fLocal_79[7], 1, 1);
		GlobalFunc_878(&uLocal_270, 5, uLocal_136[7], "REDGWSalvadoran", 0, 1);
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
		GlobalFunc_878(&uLocal_270, 4, uLocal_135, "REDGWChinese", 0, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_135, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_135, iLocal_269);
		uVar5 = PED::CREATE_SYNCHRONIZED_SCENE(Local_116, 7.5f, -12.75f, 51.5f, 0);
		TASK::TASK_SYNCHRONIZED_SCENE(uLocal_135, uVar5, "random@dealgonewrong", "idle_b", 8f, -8f, 5, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar5, 1);
		ENTITY::SET_ENTITY_ROTATION(uLocal_135, 4f, 18f, 326.7277f, 0, 1);
		PED::SET_PED_KEEP_TASK(uLocal_135, 1);
		PED::SET_PED_CONFIG_FLAG(uLocal_135, 227, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_269, 1862763509);
		if (GlobalFunc_8329() == 0)
		{
			GlobalFunc_878(&uLocal_270, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		}
		if (GlobalFunc_8329() == 1)
		{
			GlobalFunc_878(&uLocal_270, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		if (GlobalFunc_8329() == 2)
		{
			GlobalFunc_878(&uLocal_270, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		}
		uLocal_220[0] = GRAPHICS::ADD_DECAL(1110, -1632.953f, 4745.359f, 51.7876f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[1] = GRAPHICS::ADD_DECAL(1110, -1634.87f, 4744.458f, 51.8233f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[2] = GRAPHICS::ADD_DECAL(1110, -1636.971f, 4736.595f, 52.2814f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[3] = GRAPHICS::ADD_DECAL(1110, -1625.561f, 4741.241f, 51.7102f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[4] = GRAPHICS::ADD_DECAL(1110, -1621.533f, 4744.576f, 51.9093f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[5] = GRAPHICS::ADD_DECAL(1110, -1621.963f, 4737.039f, 51.4174f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[6] = GRAPHICS::ADD_DECAL(1110, -1628.517f, 4736.906f, 51.8207f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[7] = GRAPHICS::ADD_DECAL(1110, -1629.324f, 4732.146f, 51.6947f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[8] = GRAPHICS::ADD_DECAL(1110, -1640.287f, 4738.437f, 52.1756f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[9] = GRAPHICS::ADD_DECAL(1110, -1640.055f, 4701.995f, 41.2428f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		SYSTEM::WAIT(0);
		uLocal_220[10] = GRAPHICS::ADD_DECAL(1110, -1641.924f, 4692.236f, 38.3762f, 0f, 0f, -1f, GlobalFunc_107(0f, 1f, 0f), 1f, 1f, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
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
			GlobalFunc_10871(GlobalFunc_8329(), 1, 25000);
		}
	}
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}












