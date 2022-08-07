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
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	struct<3> Local_21 = { 0, 0, 0 } ;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	struct<61> Local_80 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	struct<5> Local_144 = { 0, 0, 0, 0, 0 } ;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	bool bLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	var uLocal_154 = 0;
	struct<3> Local_155 = { 0, 0, 0 } ;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	struct<3> Local_160 = { 0, 0, 0 } ;
	var uLocal_163[2] = { 0, 0 };
	struct<3> Local_166[6];
	struct<29> Local_185[2];
	int iLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	var uLocal_250 = 16;
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
	struct<2> Local_415[4];
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	int iLocal_447 = 0;
	char* sLocal_448 = NULL;
	var uLocal_449 = 0;
	char* sLocal_450 = NULL;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	char[] cLocal_456[8] = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	uLocal_79 = GlobalFunc_4946(49);
	Local_155 = { 0f, -1f, 0.64f };
	iLocal_158 = joaat("prop_weed_tub_01b");
	Local_160 = { -1138.977f, -1252.549f, 6.05f };
	iLocal_245 = joaat("police4");
	iLocal_246 = joaat("a_m_y_business_01");
	Local_80 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_80);
	GlobalFunc_9161();
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		func_440(1);
		func_431();
	}
	func_424();
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_35[0]))
	{
		Local_144.f_4 = Local_80.f_35[0];
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_41[0]))
	{
		uLocal_154 = Local_80.f_41[0];
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_5116(Local_144, Local_144.f_3, 1, 0);
				func_419(1);
				break;
			
			case 1:
				GlobalFunc_5116(Local_160, 298.7f, 1, 0);
				func_418(1);
				break;
			
			case 2:
				GlobalFunc_5116(-1243.316f, -1041.637f, 7.5121f, 28.2f, 1, 0);
				func_410(1);
				break;
			
			default:
				break;
		}
		func_399(1, 1, 1);
	}
	else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		func_399(1, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_35[1]))
	{
		GlobalFunc_128(&(Local_185[0 /*29*/]), &(Local_80.f_35[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_28[0]))
	{
		GlobalFunc_128(&(Local_185[0 /*29*/].f_1), &(Local_80.f_28[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_80.f_28[1]))
	{
		GlobalFunc_128(&(Local_185[0 /*29*/].f_2), &(Local_80.f_28[1]));
	}
	func_394();
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_GRTP", 0);
		func_378(Local_80.f_9, 0, 0, 1, 0, 0);
		func_373();
		if (iLocal_141 == 9)
		{
			func_366();
		}
		else if (!func_362())
		{
			GlobalFunc_587();
			func_340();
			switch (iLocal_141)
			{
				case 0:
					func_339();
					break;
				
				case 1:
					func_338();
					break;
				
				case 2:
					func_337();
					break;
				
				case 3:
					func_248();
					break;
				
				case 4:
					func_245();
					break;
				
				case 5:
					func_233();
					break;
				
				case 6:
					func_229();
					break;
				
				case 7:
					func_212();
					break;
				
				case 8:
					func_1();
					break;
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x2C1
{
	switch (iLocal_142)
	{
		case 0:
			GlobalFunc_146(&iLocal_143);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					iLocal_436 = 1;
					iLocal_437 = 0;
					iLocal_143 = GlobalFunc_2324(Local_160, 5, 1);
				}
				else
				{
					iLocal_436 = 1;
					iLocal_437 = 1;
					if (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111())
					{
						func_207(2);
						iLocal_435 = 0;
					}
					else
					{
						iLocal_435 = 1;
					}
				}
			}
			else
			{
				iLocal_436 = 0;
				if (func_206(3))
				{
					if (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111())
					{
						func_207(3);
						iLocal_435 = 0;
					}
					else
					{
						iLocal_435 = 1;
					}
				}
				else
				{
					iLocal_435 = 0;
				}
				iLocal_143 = GlobalFunc_5743(Local_144.f_4, 1, 5);
			}
			iLocal_142 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_775(Local_144.f_4, Local_160, 125f))
			{
				sLocal_448 = "B3ANOTDELV";
				iLocal_142 = 0;
				iLocal_141 = 9;
			}
			else if (!iLocal_436)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
				{
					iLocal_436 = 1;
					HUD::CLEAR_PRINTS();
					GlobalFunc_146(&iLocal_143);
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						iLocal_437 = 1;
						iLocal_435 = 1;
					}
					else
					{
						iLocal_437 = 0;
						if (ENTITY::IS_ENTITY_AT_COORD(Local_144.f_4, Local_160, 6f, 6f, 2f, 1, 1, 0))
						{
							GlobalFunc_146(&iLocal_143);
							iLocal_142 = 0;
							iLocal_141 = 6;
						}
						else
						{
							iLocal_143 = GlobalFunc_2324(Local_160, 5, 1);
						}
					}
				}
				else if (iLocal_435 && !GlobalFunc_111())
				{
					func_207(3);
					iLocal_435 = 0;
				}
			}
			else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				HUD::CLEAR_PRINTS();
				iLocal_436 = 0;
				iLocal_435 = 1;
				GlobalFunc_146(&iLocal_143);
				iLocal_143 = GlobalFunc_5743(Local_144.f_4, 1, 5);
			}
			else if (iLocal_437)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
				{
					HUD::CLEAR_PRINTS();
					iLocal_436 = 0;
					iLocal_143 = GlobalFunc_5743(Local_144.f_4, 1, 5);
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					HUD::CLEAR_PRINTS();
					iLocal_437 = 0;
					iLocal_435 = 0;
					GlobalFunc_146(&iLocal_143);
					iLocal_143 = GlobalFunc_2324(Local_160, 5, 1);
				}
				else if (iLocal_435 && !GlobalFunc_111())
				{
					func_207(2);
					iLocal_435 = 0;
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				HUD::CLEAR_PRINTS();
				iLocal_437 = 1;
				iLocal_435 = 1;
				GlobalFunc_146(&iLocal_143);
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(Local_144.f_4, Local_160, 6f, 6f, 2f, 1, 1, 0))
			{
				GlobalFunc_146(&iLocal_143);
				iLocal_142 = 0;
				iLocal_141 = 6;
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			GlobalFunc_130(&uLocal_154);
			GlobalFunc_6689(&(Local_144.f_4));
			if (iLocal_428 || iLocal_429)
			{
				GlobalFunc_553(746);
			}
			func_2();
			break;
	}
}

void func_2()//Position - 0x568
{
	func_3(71, 0);
	func_431();
}

void func_3(int iParam0, bool bParam1)//Position - 0x57B
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8537();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_96440[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_6)
	{
		return;
	}
	GlobalFunc_9620(iVar0, 0);
	MISC::SET_BIT(&Global_68493, 1);
	if (Global_96440[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	GlobalFunc_9164(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	GlobalFunc_11307();
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 3))
	{
		GlobalFunc_18();
	}
	GlobalFunc_8306();
	if (iParam0 == 210 || iParam0 == 211)
	{
		GlobalFunc_7610(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		GlobalFunc_7610(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		GlobalFunc_7610(iParam0, 0, 0);
	}
	GlobalFunc_4907();
}











































































































































































































int func_206(int iParam0)//Position - 0x25071
{
	if (Local_166[iParam0 /*3*/].f_1 < Local_166[iParam0 /*3*/] || Local_166[iParam0 /*3*/] == -1)
	{
		return 1;
	}
	return 0;
}

void func_207(int iParam0)//Position - 0x250A1
{
	if (func_206(iParam0))
	{
		GlobalFunc_2369(Local_166[iParam0 /*3*/].f_2, 7500, 1);
		Local_166[iParam0 /*3*/].f_1++;
	}
}





void func_212()//Position - 0x2515D
{
	switch (iLocal_142)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_144.f_4, Local_160, 10f, 10f, 2f, 0, 1, 0))
			{
				GlobalFunc_146(&iLocal_143);
				MISC::SET_INSTANCE_PRIORITY_HINT(0);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
				{
					iLocal_436 = 1;
				}
				else
				{
					if (func_227())
					{
						HUD::CLEAR_PRINTS();
					}
					iLocal_436 = 0;
				}
				iLocal_142 = 1;
			}
			else
			{
				iLocal_141 = 8;
				iLocal_142 = 0;
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_AT_COORD(Local_144.f_4, Local_160, 10f, 10f, 2f, 0, 1, 0))
			{
				if (iLocal_436)
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
					{
						HUD::CLEAR_PRINTS();
						iLocal_436 = 0;
					}
					else
					{
						iLocal_436 = 1;
					}
				}
				else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
				{
					HUD::CLEAR_PRINTS();
					iLocal_436 = 1;
				}
				else
				{
					func_214();
					if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 55f) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_144.f_4))
					{
						iLocal_142 = 2;
					}
					else if ((iLocal_432 && func_206(5)) && (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111()))
					{
						func_207(5);
					}
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				iLocal_141 = 8;
				iLocal_142 = 0;
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			GlobalFunc_130(&uLocal_154);
			GlobalFunc_6689(&(Local_144.f_4));
			if (iLocal_428 || iLocal_429)
			{
				GlobalFunc_553(746);
			}
			func_2();
			break;
	}
}


void func_214()//Position - 0x252F7
{
	if (!iLocal_433)
	{
		iLocal_434 = MISC::GET_GAME_TIMER() + 3500;
		iLocal_433 = 1;
	}
	else if (!iLocal_432)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_434)
		{
			if (iLocal_428 == 1)
			{
				if (GlobalFunc_10638(&uLocal_250, 49, "BAR3AAU", "BAR3A_P1", 9, 1, 0, 0, 0))
				{
					iLocal_142 = 1;
					iLocal_432 = 1;
				}
			}
			else if (GlobalFunc_10638(&uLocal_250, 49, "BAR3AAU", "BAR3A_P1b", 9, 1, 0, 0, 0))
			{
				iLocal_142 = 1;
				iLocal_432 = 1;
			}
		}
	}
}













int func_227()//Position - 0x25A1C
{
	int iVar0;
	
	iVar0 = 0;
	iLocal_249 = 0;
	while (iLocal_249 <= 5)
	{
		if (GlobalFunc_165(Local_166[iLocal_249 /*3*/].f_2, 0, 0))
		{
			iVar0 = 1;
		}
		iLocal_249++;
	}
	return iVar0;
}


void func_229()//Position - 0x25A6D
{
	switch (iLocal_142)
	{
		case 0:
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_144.f_4) < 1f)
			{
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_144.f_4, 10f);
			}
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_144.f_4) < 1f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_144.f_4, 10f);
			}
			if (GlobalFunc_763(Local_144.f_4, 1093140480, 1, 1056964608, 0, 1))
			{
				GlobalFunc_571(0, -1);
				iLocal_441 = 0;
				iLocal_438 = 0;
				iLocal_142 = 1;
			}
			break;
		
		case 1:
			func_207(4);
			iLocal_142 = 2;
			break;
		
		case 2:
			GlobalFunc_173(&uLocal_250, 3, 0, "BARRY", 0, 1);
			iLocal_142 = 0;
			iLocal_141 = 7;
			break;
	}
}




void func_233()//Position - 0x25DC7
{
	switch (iLocal_142)
	{
		case 0:
			GlobalFunc_146(&iLocal_143);
			if (!GlobalFunc_111() || MISC::GET_PROFILE_SETTING(203) == 0)
			{
				func_207(2);
				GlobalFunc_2370(&uLocal_449);
				iLocal_430 = 0;
			}
			else
			{
				iLocal_430 = 1;
			}
			if (iLocal_438 == 0)
			{
				iLocal_438 = 2;
				iLocal_441 = 1;
			}
			iLocal_428 = 1;
			iLocal_248 = MISC::GET_GAME_TIMER() + 2500;
			iLocal_142 = 1;
			break;
		
		case 1:
			GlobalFunc_10868(&uLocal_449, &uLocal_250, "BAR3AAU", &sLocal_450, &cLocal_456);
			if (!iLocal_247 && MISC::GET_GAME_TIMER() > iLocal_248)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BARRY_3A_01", 0f);
				iLocal_247 = 1;
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					iLocal_142 = 2;
				}
				else
				{
					if (iLocal_430 && !GlobalFunc_111())
					{
						func_207(2);
						GlobalFunc_2370(&uLocal_449);
						iLocal_430 = 0;
					}
					func_236();
				}
			}
			else
			{
				iLocal_142 = 2;
			}
			break;
		
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_5105();
				}
			}
			iLocal_142 = 0;
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				iLocal_141 = 3;
			}
			else
			{
				iLocal_141 = 4;
			}
			break;
	}
}



void func_236()//Position - 0x25F28
{
	if (iLocal_427 && iLocal_425 < 4)
	{
		if (!GlobalFunc_111() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
		{
			if (!iLocal_424)
			{
				iLocal_424 = 1;
				iLocal_426 = MISC::GET_GAME_TIMER();
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_426) > Local_415[iLocal_425 /*2*/].f_1 && (func_238() || iLocal_425 == 0))
			{
				if (iLocal_425 != 2 || ENTITY::GET_ENTITY_SPEED(Local_144.f_4) > 10f)
				{
					if (func_227() || MISC::GET_PROFILE_SETTING(203) == 0)
					{
						if (GlobalFunc_10618(&uLocal_250, "BAR3AAU", Local_415[iLocal_425 /*2*/], 7, 1, 0, 0))
						{
							iLocal_424 = 0;
							iLocal_425++;
						}
					}
					else if (GlobalFunc_10618(&uLocal_250, "BAR3AAU", Local_415[iLocal_425 /*2*/], 7, 0, 0, 0))
					{
						iLocal_424 = 0;
						iLocal_425++;
					}
				}
			}
		}
	}
}


int func_238()//Position - 0x26062
{
	if (PED::IS_COP_PED_IN_AREA_3D(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(70f, 70f, 70f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(70f, 70f, 70f)))
	{
		return 1;
	}
	return 0;
}







void func_245()//Position - 0x26317
{
	switch (iLocal_142)
	{
		case 0:
			GlobalFunc_146(&iLocal_143);
			iLocal_143 = GlobalFunc_5743(Local_144.f_4, 1, 5);
			HUD::SET_BLIP_ROUTE(iLocal_143, 1);
			if (func_206(3) && (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111()))
			{
				func_207(3);
				GlobalFunc_2370(&uLocal_449);
			}
			iLocal_142 = 1;
			if (iLocal_438 == 2)
			{
				iLocal_441 = 1;
			}
			break;
		
		case 1:
			GlobalFunc_10868(&uLocal_449, &uLocal_250, "BAR3AAU", &sLocal_450, &cLocal_456);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				iLocal_142 = 2;
			}
			else
			{
				if (func_206(3) && !GlobalFunc_111())
				{
					func_207(3);
					GlobalFunc_2370(&uLocal_449);
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_236();
				}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			GlobalFunc_146(&iLocal_143);
			iLocal_142 = 0;
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
				{
					iLocal_141 = 3;
				}
				else
				{
					iLocal_141 = 5;
				}
			}
			else
			{
				iLocal_142 = 1;
			}
			break;
	}
}



void func_248()//Position - 0x2646D
{
	switch (iLocal_142)
	{
		case 0:
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			if (!iLocal_159)
			{
				GlobalFunc_10606(0f, 0f, 0f, 0f, 0, 145);
				iLocal_159 = 1;
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				GlobalFunc_146(&iLocal_143);
				iLocal_143 = GlobalFunc_2324(Local_160, 5, 1);
				if (func_206(0) && (MISC::GET_PROFILE_SETTING(203) == 0 || !GlobalFunc_111()))
				{
					func_207(0);
					GlobalFunc_2370(&uLocal_449);
				}
				iLocal_426 = MISC::GET_GAME_TIMER();
				GlobalFunc_574(745, 0);
				iLocal_142 = 1;
			}
			else
			{
				iLocal_141 = 4;
			}
			if (iLocal_438 == 2)
			{
				iLocal_441 = 1;
			}
			break;
		
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_142 = 2;
				}
				else
				{
					if (func_206(0) && !GlobalFunc_111())
					{
						func_207(0);
						GlobalFunc_2370(&uLocal_449);
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4) && ENTITY::IS_ENTITY_AT_COORD(Local_144.f_4, Local_160, 6f, 6f, 2f, 1, 1, 0))
					{
						iLocal_438 = 0;
						iLocal_142 = 2;
					}
					if (!iLocal_431)
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_426) > 8000 && iLocal_425 >= 4) && !GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_250, "BAR3AAU", "BAR3A_LW", 7, 0, 0, 0))
							{
								iLocal_431 = 1;
							}
						}
					}
				}
			}
			else
			{
				iLocal_142 = 2;
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			GlobalFunc_146(&iLocal_143);
			iLocal_142 = 0;
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					iLocal_141 = 5;
				}
				else
				{
					GlobalFunc_Checkpoint6(1, "Deliver vehicle.", 1, 0, 0, 1);
					iLocal_141 = 6;
				}
			}
			else
			{
				iLocal_141 = 4;
			}
			break;
	}
}

























































































void func_337()//Position - 0x2E1B0
{
	switch (iLocal_142)
	{
		case 0:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				func_207(1);
				iLocal_142 = 1;
			}
			else
			{
				iLocal_141 = 3;
				iLocal_142 = 0;
			}
			iLocal_441 = 1;
			break;
		
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				HUD::CLEAR_PRINTS();
				iLocal_141 = 3;
				iLocal_142 = 0;
			}
			break;
	}
}

void func_338()//Position - 0x2E211
{
	switch (iLocal_142)
	{
		case 0:
			GlobalFunc_173(&uLocal_250, 3, 0, "BARRY", 0, 1);
			if (GlobalFunc_10638(&uLocal_250, 49, "BAR3AAU", "BAR3A_PICK2", 7, 1, 0, 0, 0))
			{
				iLocal_142 = 1;
			}
			break;
		
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_144.f_4, 0))
			{
				iLocal_438 = 1;
				iLocal_141 = 3;
				iLocal_142 = 0;
			}
			else if (!GlobalFunc_111())
			{
				iLocal_438 = 1;
				iLocal_141 = 2;
				iLocal_142 = 0;
			}
			break;
	}
}

void func_339()//Position - 0x2E28A
{
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1142.829f, -1254.585f, 0f, -1136.686f, -1246.472f, 8f, 0, 1);
		iLocal_143 = GlobalFunc_5743(Local_144.f_4, 1, 5);
		iLocal_141 = 1;
		iLocal_142 = 0;
	}
}

void func_340()//Position - 0x2E2CC
{
	iLocal_249 = 0;
	while (iLocal_249 <= 1)
	{
		func_341(iLocal_249);
		iLocal_249++;
	}
	if ((iLocal_244 && Local_185[0 /*29*/].f_24 == 1) && Local_185[1 /*29*/].f_24 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_246);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_245);
		iLocal_244 = 0;
	}
}

void func_341(int iParam0)//Position - 0x2E31C
{
	switch (Local_185[iParam0 /*29*/].f_24)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_185[iParam0 /*29*/].f_1))
			{
				if (GlobalFunc_115(Local_185[iParam0 /*29*/]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_246))
					{
						Local_185[iParam0 /*29*/].f_1 = PED::CREATE_PED_INSIDE_VEHICLE(Local_185[iParam0 /*29*/], 6, iLocal_246, -1, 1, 1);
						Local_185[iParam0 /*29*/].f_2 = PED::CREATE_PED_INSIDE_VEHICLE(Local_185[iParam0 /*29*/], 6, iLocal_246, 0, 1, 1);
					}
				}
				else if (STREAMING::HAS_MODEL_LOADED(iLocal_245))
				{
					Local_185[iParam0 /*29*/] = VEHICLE::CREATE_VEHICLE(iLocal_245, Local_185[iParam0 /*29*/].f_3, Local_185[iParam0 /*29*/].f_6, 1, 1);
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(Local_185[iParam0 /*29*/].f_1))
			{
				PED::SET_PED_AS_COP(Local_185[iParam0 /*29*/].f_1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_185[iParam0 /*29*/].f_1, 1);
				WEAPON::GIVE_DELAYED_WEAPON_TO_PED(Local_185[iParam0 /*29*/].f_1, joaat("weapon_pistol"), 100, 1);
				PED::SET_PED_ACCURACY(Local_185[iParam0 /*29*/].f_1, 10);
				if (GlobalFunc_115(Local_185[iParam0 /*29*/].f_2))
				{
					PED::SET_PED_AS_COP(Local_185[iParam0 /*29*/].f_2, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_185[iParam0 /*29*/].f_2, 1);
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(Local_185[iParam0 /*29*/].f_2, joaat("weapon_pistol"), 100, 1);
					PED::SET_PED_ACCURACY(Local_185[iParam0 /*29*/].f_2, 10);
				}
				Local_185[iParam0 /*29*/].f_24 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_185[iParam0 /*29*/].f_3, 275f))
			{
				if (func_360(iParam0))
				{
					Local_185[iParam0 /*29*/].f_25 = MISC::GET_GAME_TIMER() + 1750;
					Local_185[iParam0 /*29*/].f_24 = 2;
				}
				else if ((func_359(Local_185[iParam0 /*29*/]) || func_346(Local_185[iParam0 /*29*/].f_1)) || func_346(Local_185[iParam0 /*29*/].f_2))
				{
					func_344(iParam0, 0);
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_344(iParam0, 0);
				}
			}
			else
			{
				if (!Local_185[iParam0 /*29*/].f_26 && ENTITY::DOES_ENTITY_EXIST(Local_185[iParam0 /*29*/].f_1))
				{
					GlobalFunc_881(&(Local_185[iParam0 /*29*/].f_1));
					Local_185[iParam0 /*29*/].f_26 = 1;
				}
				if (!Local_185[iParam0 /*29*/].f_27 && ENTITY::DOES_ENTITY_EXIST(Local_185[iParam0 /*29*/].f_2))
				{
					GlobalFunc_881(&(Local_185[iParam0 /*29*/].f_2));
					Local_185[iParam0 /*29*/].f_27 = 1;
				}
				if (!Local_185[iParam0 /*29*/].f_28 && ENTITY::DOES_ENTITY_EXIST(Local_185[iParam0 /*29*/]))
				{
					GlobalFunc_6689(&(Local_185[iParam0 /*29*/]));
					Local_185[iParam0 /*29*/].f_28 = 1;
				}
				if ((Local_185[iParam0 /*29*/].f_26 && Local_185[iParam0 /*29*/].f_27) && Local_185[iParam0 /*29*/].f_28)
				{
					Local_185[iParam0 /*29*/].f_24 = 4;
				}
			}
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if ((func_346(Local_185[iParam0 /*29*/].f_1) || func_346(Local_185[iParam0 /*29*/].f_2)) || func_359(Local_185[iParam0 /*29*/]))
				{
					func_344(iParam0, 0);
				}
			}
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() > Local_185[iParam0 /*29*/].f_25)
			{
				func_344(iParam0, 1);
			}
			else if ((func_346(Local_185[iParam0 /*29*/].f_1) || func_346(Local_185[iParam0 /*29*/].f_2)) || func_359(Local_185[iParam0 /*29*/]))
			{
				func_344(iParam0, 0);
			}
			break;
		
		case 3:
			if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_185[iParam0 /*29*/].f_3, 275f))
			{
				if (!Local_185[iParam0 /*29*/].f_26 && ENTITY::DOES_ENTITY_EXIST(Local_185[iParam0 /*29*/].f_1))
				{
					GlobalFunc_132(&(Local_185[iParam0 /*29*/].f_1), 1, 0, 1);
					Local_185[iParam0 /*29*/].f_26 = 1;
				}
				if (!Local_185[iParam0 /*29*/].f_27 && ENTITY::DOES_ENTITY_EXIST(Local_185[iParam0 /*29*/].f_2))
				{
					GlobalFunc_881(&(Local_185[iParam0 /*29*/].f_2));
					Local_185[iParam0 /*29*/].f_27 = 1;
				}
				if (!Local_185[iParam0 /*29*/].f_28 && ENTITY::DOES_ENTITY_EXIST(Local_185[iParam0 /*29*/]))
				{
					GlobalFunc_6689(&(Local_185[iParam0 /*29*/]));
					Local_185[iParam0 /*29*/].f_28 = 1;
				}
				if ((Local_185[iParam0 /*29*/].f_26 && Local_185[iParam0 /*29*/].f_27) && Local_185[iParam0 /*29*/].f_28)
				{
					Local_185[iParam0 /*29*/].f_24 = 4;
				}
			}
			break;
		
		case 4:
			break;
	}
}



void func_344(int iParam0, int iParam1)//Position - 0x2E7D2
{
	if (!iLocal_427)
	{
		iLocal_427 = 1;
		iLocal_426 = MISC::GET_GAME_TIMER();
	}
	if (GlobalFunc_115(Local_185[iParam0 /*29*/].f_1))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_185[iParam0 /*29*/].f_1, 0);
		PED::SET_PED_HIGHLY_PERCEPTIVE(Local_185[iParam0 /*29*/].f_1, 1);
		GlobalFunc_132(&(Local_185[iParam0 /*29*/].f_1), 1, 0, 1);
	}
	if (GlobalFunc_115(Local_185[iParam0 /*29*/].f_2))
	{
		PED::SET_PED_AS_COP(Local_185[iParam0 /*29*/].f_2, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_185[iParam0 /*29*/].f_2, 0);
		PED::SET_PED_HIGHLY_PERCEPTIVE(Local_185[iParam0 /*29*/].f_2, 1);
		GlobalFunc_132(&(Local_185[iParam0 /*29*/].f_2), 1, 0, 1);
	}
	if (iParam1 && GlobalFunc_115(Local_185[iParam0 /*29*/]))
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_185[iParam0 /*29*/], 1, 1);
		GlobalFunc_131(&(Local_185[iParam0 /*29*/]));
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	}
	PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
	Local_185[iParam0 /*29*/].f_24 = 3;
}


int func_346(int iParam0)//Position - 0x2E8FA
{
	struct<3> Var0;
	
	if (GlobalFunc_115(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (PED::IS_PED_BEING_JACKED(iParam0) && GlobalFunc_155(iParam0, PLAYER::PLAYER_PED_ID(), 2f))
		{
			return 1;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		else if (MISC::IS_PROJECTILE_IN_AREA(Var0 - Vector(3f, 3f, 3f), Var0 + Vector(3f, 3f, 3f), 1))
		{
			return 1;
		}
		else if (func_347(iParam0, 1126825984))
		{
			return 1;
		}
	}
	return 0;
}

int func_347(int iParam0, float fParam1)//Position - 0x2E97D
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_170(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_348(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_348(int iParam0, float fParam1)//Position - 0x2E9F3
{
	return func_349(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_349(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2EA0B
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_357(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_36[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_352();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_4957(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}



int func_352()//Position - 0x2ECBD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_357(int iParam0, int iParam1)//Position - 0x2EE13
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


int func_359(int iParam0)//Position - 0x2EE7A
{
	struct<3> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
			}
			return 1;
		}
		else if (MISC::IS_PROJECTILE_IN_AREA(Var0 - Vector(5f, 5f, 5f), Var0 + Vector(5f, 5f, 5f), 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_360(int iParam0)//Position - 0x2EED8
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_144.f_4, Local_185[iParam0 /*29*/].f_7[0 /*8*/][0 /*3*/], Local_185[iParam0 /*29*/].f_7[0 /*8*/][1 /*3*/], Local_185[iParam0 /*29*/].f_7[0 /*8*/].f_7, 0, 1, 0))
	{
		return 1;
	}
	else if (Local_185[iParam0 /*29*/].f_7[1 /*8*/].f_7 != 0f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_144.f_4, Local_185[iParam0 /*29*/].f_7[1 /*8*/][0 /*3*/], Local_185[iParam0 /*29*/].f_7[1 /*8*/][1 /*3*/], Local_185[iParam0 /*29*/].f_7[1 /*8*/].f_7, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}


int func_362()//Position - 0x2EF7E
{
	if (!GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (func_364())
	{
		sLocal_448 = "B3ATIMEOUT";
		iLocal_142 = 0;
		iLocal_141 = 9;
		return 1;
	}
	if (!GlobalFunc_115(Local_144.f_4))
	{
		sLocal_448 = "B3AVHDEST";
		iLocal_142 = 0;
		iLocal_141 = 9;
		return 1;
	}
	else if (func_363())
	{
		sLocal_448 = "B3AVHSTUCK";
		iLocal_142 = 0;
		iLocal_141 = 9;
		return 1;
	}
	return 0;
}

int func_363()//Position - 0x2EFEA
{
	if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_144.f_4))
	{
		if (iLocal_152)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_153) > 7000)
			{
				return 1;
			}
		}
		else
		{
			iLocal_152 = 1;
			iLocal_153 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		if (iLocal_152)
		{
		}
		iLocal_152 = 0;
	}
	return 0;
}

int func_364()//Position - 0x2F02B
{
	switch (iLocal_438)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			iLocal_439 = CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 120;
			iLocal_439 = (iLocal_439 + MISC::GET_GAME_TIMER());
			iLocal_440 = (iLocal_439 - CLOCK::GET_MILLISECONDS_PER_GAME_MINUTE() * 30);
			iLocal_443 = (iLocal_439 - 11000);
			iLocal_444 = (iLocal_439 - 6000);
			iLocal_445 = (iLocal_439 - 1000);
			iLocal_447 = 0;
			iLocal_438 = 2;
			return 0;
			break;
		
		case 2:
			if (MISC::GET_GAME_TIMER() >= iLocal_439)
			{
				return 1;
			}
			else
			{
				if ((!iLocal_442 && MISC::GET_GAME_TIMER() >= iLocal_440) && !GlobalFunc_111())
				{
					if (GlobalFunc_10618(&uLocal_250, "BAR3AAU", "BAR3A_HURRY", 7, 0, 0, 0))
					{
						iLocal_442 = 1;
					}
				}
				func_365();
				return 0;
			}
			break;
	}
	return 0;
}

void func_365()//Position - 0x2F0F6
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 >= iLocal_445)
	{
		if ((iVar0 - iLocal_446) > 500)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "TIMER_STOP", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_446 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	else if (iVar0 >= iLocal_444)
	{
		if ((iVar0 - iLocal_446) > 500)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_446 = MISC::GET_GAME_TIMER();
		}
	}
	else if (iVar0 >= iLocal_443)
	{
		if (!iLocal_447)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_446 = MISC::GET_GAME_TIMER();
			iLocal_447 = 1;
		}
		else if ((iVar0 - iLocal_446) > 1000)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "10_SEC_WARNING", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_446 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_366()//Position - 0x2F1AB
{
	switch (iLocal_142)
	{
		case 0:
			if (!GlobalFunc_331())
			{
				GlobalFunc_146(&iLocal_143);
				iLocal_441 = 0;
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_448))
				{
					sLocal_448 = "DEFAULT";
				}
				if (MISC::ARE_STRINGS_EQUAL(sLocal_448, "DEFAULT"))
				{
					func_440(1);
				}
				else
				{
					func_370(sLocal_448, 1);
				}
				iLocal_142 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				iLocal_441 = 0;
				func_367(1);
				func_431();
			}
			break;
	}
}

void func_367(bool bParam0)//Position - 0x2F22D
{
	if (bParam0)
	{
		GlobalFunc_130(&uLocal_154);
		GlobalFunc_6689(&(Local_144.f_4));
		iLocal_249 = 0;
		while (iLocal_249 <= 1)
		{
			GlobalFunc_881(&(Local_185[iLocal_249 /*29*/].f_1));
			GlobalFunc_881(&(Local_185[iLocal_249 /*29*/].f_2));
			iLocal_249++;
		}
		iLocal_249 = 0;
		while (iLocal_249 <= 1)
		{
			GlobalFunc_6689(&(Local_185[iLocal_249 /*29*/]));
			iLocal_249++;
		}
	}
	else
	{
		GlobalFunc_129(&uLocal_154, 0);
		GlobalFunc_131(&(Local_144.f_4));
		iLocal_249 = 0;
		while (iLocal_249 <= 1)
		{
			GlobalFunc_132(&(Local_185[iLocal_249 /*29*/].f_1), 1, 0, 1);
			GlobalFunc_132(&(Local_185[iLocal_249 /*29*/].f_2), 1, 0, 1);
			GlobalFunc_131(&(Local_185[iLocal_249 /*29*/]));
			iLocal_249++;
		}
	}
	if (iLocal_244)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_245);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_246);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1142.829f, -1254.585f, 0f, -1136.686f, -1246.472f, 8f, 1, 1);
}



void func_370(char* sParam0, bool bParam1)//Position - 0x2F373
{
	GlobalFunc_509(sParam0);
	func_440(bParam1);
}



void func_373()//Position - 0x2F3D7
{
	int iVar0;
	
	if (iLocal_441)
	{
		if ((!CUTSCENE::IS_CUTSCENE_PLAYING() && !GlobalFunc_116(0)) && !GlobalFunc_331())
		{
			iVar0 = (iLocal_439 - MISC::GET_GAME_TIMER());
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
			HUD::_HIDE_AREA_AND_VEHICLE_NAME_THIS_FRAME();
			if (MISC::GET_GAME_TIMER() >= iLocal_440)
			{
				GlobalFunc_5277(iVar0, "B3ATIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
			}
			else
			{
				GlobalFunc_5277(iVar0, "B3ATIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
			}
		}
	}
}





void func_378(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2F5F8
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (GlobalFunc_7630(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_20 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_21 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_20 = 0f;
				}
				else
				{
					fLocal_20 = (fLocal_20 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_20 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, Param0))
			{
				Global_68501 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_68501);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = GlobalFunc_8315();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { GlobalFunc_6686(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_25 = 0.14f;
				}
				else
				{
					fLocal_25 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_25)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_21.x, (Local_21.f_1 + fLocal_24));
							Global_68504 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_68503 == 1)
				{
					GlobalFunc_53();
					fLocal_20 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_20 = 0f;
			}
		}
	}
}
















void func_394()//Position - 0x30019
{
	if (GlobalFunc_115(Local_144.f_4))
	{
		VEHICLE::SET_VEHICLE_STRONG(Local_144.f_4, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_144.f_4, 1);
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_144.f_4, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_144.f_4, 0);
		if (!bLocal_151)
		{
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_144.f_4);
		}
		GlobalFunc_743(Local_144.f_4, 0);
	}
}





void func_399(int iParam0, int iParam1, int iParam2)//Position - 0x300CA
{
	func_401(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_79(500, 0);
	}
}


void func_401(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3013A
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
	GlobalFunc_8316(0, 1, 0, 0);
	if (iParam2 == 1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	HUD::CLEAR_HELP(1);
	if (iParam0 == 1)
	{
		CAM::SET_WIDESCREEN_BORDERS(0, 0);
	}
	if (iParam1 == 1)
	{
		if ((iLocal_35 != 0 && iLocal_35 != joaat("object")) && iLocal_35 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0);
				}
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}









void func_410(bool bParam0)//Position - 0x30404
{
	func_417();
	iLocal_141 = 7;
	iLocal_142 = 0;
	func_415(Local_160, 298.7f, 0);
	func_414(0);
	if (iLocal_424 == 0)
	{
		if (GlobalFunc_111())
		{
			GlobalFunc_4956();
		}
		iLocal_424 = 1;
	}
	iLocal_431 = 1;
	iLocal_432 = 1;
	iLocal_433 = 1;
	func_413(0);
	func_413(2);
	func_413(3);
	if (bParam0)
	{
		iLocal_429 = 1;
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5108(0, -1, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1243.316f, -1041.637f, 7.5121f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 28.2f);
	}
	GlobalFunc_79(500, 1);
}



void func_413(int iParam0)//Position - 0x30586
{
	if (Local_166[iParam0 /*3*/] == -1)
	{
	}
	else
	{
		Local_166[iParam0 /*3*/].f_1 = Local_166[iParam0 /*3*/];
	}
}

void func_414(bool bParam0)//Position - 0x305A9
{
	iLocal_249 = 0;
	while (iLocal_249 <= 1)
	{
		GlobalFunc_881(&(Local_185[iLocal_249 /*29*/].f_1));
		GlobalFunc_881(&(Local_185[iLocal_249 /*29*/].f_2));
		GlobalFunc_6689(&(Local_185[iLocal_249 /*29*/]));
		if (bParam0)
		{
			Local_185[iLocal_249 /*29*/].f_26 = 0;
			Local_185[iLocal_249 /*29*/].f_27 = 0;
			Local_185[iLocal_249 /*29*/].f_28 = 0;
			Local_185[iLocal_249 /*29*/].f_24 = 0;
			if (!iLocal_244)
			{
				STREAMING::REQUEST_MODEL(iLocal_246);
				STREAMING::REQUEST_MODEL(iLocal_245);
			}
			iLocal_244 = 1;
		}
		else
		{
			Local_185[iLocal_249 /*29*/].f_26 = 1;
			Local_185[iLocal_249 /*29*/].f_27 = 1;
			Local_185[iLocal_249 /*29*/].f_28 = 1;
			Local_185[iLocal_249 /*29*/].f_24 = 4;
			if (iLocal_244)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_246);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_245);
			}
			iLocal_244 = 0;
		}
		iLocal_249++;
	}
}

void func_415(struct<3> Param0, float fParam3, bool bParam4)//Position - 0x3065E
{
	STREAMING::REQUEST_MODEL(Local_144.f_5);
	STREAMING::REQUEST_MODEL(iLocal_158);
	while (!STREAMING::HAS_MODEL_LOADED(Local_144.f_5) || !STREAMING::HAS_MODEL_LOADED(iLocal_158))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_115(Local_144.f_4))
	{
		if (bLocal_151)
		{
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Local_144.f_4);
			bLocal_151 = false;
		}
	}
	if (bParam4)
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Param0, 1, 0, 0, 1);
		}
	}
	GlobalFunc_130(&uLocal_154);
	GlobalFunc_6689(&(Local_144.f_4));
	Local_144.f_4 = VEHICLE::CREATE_VEHICLE(Local_144.f_5, Param0, fParam3, 1, 1);
	VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_144.f_4, 1);
	if (bParam4)
	{
		func_416(PLAYER::PLAYER_PED_ID(), Local_144.f_4, -1);
	}
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_144.f_4, 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_144.f_4, 0);
	VEHICLE::SET_VEHICLE_STRONG(Local_144.f_4, 1);
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_144.f_4, 1);
	VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_144.f_4);
	VEHICLE::SET_VEHICLE_EXTRA(Local_144.f_4, 1, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Local_144.f_4, 2, 1);
	VEHICLE::SET_VEHICLE_EXTRA(Local_144.f_4, 3, 1);
	uLocal_154 = OBJECT::CREATE_OBJECT(iLocal_158, Param0, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_154, Local_144.f_4, 0, Local_155, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
	ENTITY::SET_ENTITY_COLLISION(uLocal_154, 1, 0);
	bLocal_151 = true;
	GlobalFunc_743(Local_144.f_4, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_144.f_5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_158);
}

void func_416(int iParam0, int iParam1, int iParam2)//Position - 0x307A0
{
	if (GlobalFunc_IsPedNotInjuredOrDead(uParam0))
	{
		if (GlobalFunc_115(uParam1))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(uParam0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(ENTITY::GET_ENTITY_ATTACHED_TO(uParam0), 0);
			}
			else
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0, 0);
			}
			PED::SET_PED_INTO_VEHICLE(uParam0, uParam1, iParam2);
		}
	}
}

void func_417()//Position - 0x307E2
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		}
	}
}

void func_418(bool bParam0)//Position - 0x30814
{
	func_417();
	GlobalFunc_146(&iLocal_143);
	iLocal_141 = 6;
	iLocal_142 = 0;
	func_414(0);
	iLocal_431 = 1;
	iLocal_432 = 0;
	iLocal_433 = 0;
	func_413(0);
	func_413(2);
	func_413(3);
	if (bParam0)
	{
		iLocal_429 = 1;
		func_415(Local_160, 298.7f, 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5108(Local_144.f_4, -1, 0);
	}
	else
	{
		if (iLocal_424 == 0)
		{
			GlobalFunc_4956();
			iLocal_424 = 1;
		}
		func_415(Local_160, 298.7f, 1);
	}
	GlobalFunc_Checkpoint6(1, "Deliver vehicle.", 1, 0, 0, 1);
}

void func_419(bool bParam0)//Position - 0x308AB
{
	func_417();
	iLocal_141 = 3;
	iLocal_142 = 0;
	func_414(1);
	iLocal_427 = 0;
	GlobalFunc_4956();
	iLocal_424 = 1;
	iLocal_431 = 0;
	iLocal_442 = 0;
	iLocal_432 = 0;
	iLocal_433 = 0;
	func_413(1);
	func_420(0, 0);
	func_420(2, 0);
	func_420(3, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1142.829f, -1254.585f, 0f, -1136.686f, -1246.472f, 8f, 0, 1);
	if (bParam0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_144.f_4))
		{
			func_415(Local_144, Local_144.f_3, 0);
		}
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_5108(Local_144.f_4, -1, 0);
	}
	else
	{
		func_415(Local_144, Local_144.f_3, 1);
	}
	iLocal_438 = 1;
	iLocal_441 = 1;
}

void func_420(int iParam0, int iParam1)//Position - 0x30966
{
	Local_166[iParam0 /*3*/].f_1 = iParam1;
}




void func_424()//Position - 0x30A5B
{
	HUD::REQUEST_ADDITIONAL_TEXT("BARR3A", 0);
	Local_144.f_5 = joaat("dloader");
	Local_144 = { 1199.8f, -1259.22f, 34.23f };
	Local_144.f_3 = 174.7f;
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_250, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	iLocal_431 = 0;
	iLocal_442 = 0;
	iLocal_425 = 0;
	func_430();
	iLocal_432 = 0;
	iLocal_433 = 0;
	iLocal_247 = 0;
	func_428();
	func_427();
	iLocal_427 = 0;
	STREAMING::REQUEST_MODEL(iLocal_245);
	STREAMING::REQUEST_MODEL(iLocal_246);
	iLocal_244 = 1;
	iLocal_438 = 0;
	iLocal_441 = 0;
	sLocal_448 = "DEFAULT";
	GlobalFunc_9621(49, 1, 0);
	uLocal_163[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-1156.9f, -1274f, 0f, -1141.5f, -1239.6f, 8f, 0, 1, 1, 1);
	uLocal_163[1] = PED::ADD_SCENARIO_BLOCKING_AREA(-1177f, -1292f, 0f, -1160f, -1273.3f, 8f, 0, 1, 1, 1);
	PATHFIND::SET_GPS_DISABLED_ZONE(-1132.88f, -1262.01f, 0f, -1102.43f, -1196.58f, 15f);
	PED::SET_CREATE_RANDOM_COPS(0);
}



void func_427()//Position - 0x30D94
{
	Local_185[0 /*29*/].f_3 = { 1195.3f, -1312.74f, 34.75f };
	Local_185[0 /*29*/].f_6 = 282.4f;
	Local_185[0 /*29*/].f_7[0 /*8*/][0 /*3*/] = { 1216.144f, -1287.004f, 33.97642f };
	Local_185[0 /*29*/].f_7[0 /*8*/][1 /*3*/] = { 1202.456f, -1306.054f, 39.47411f };
	Local_185[0 /*29*/].f_7[0 /*8*/].f_7 = 16.5f;
	Local_185[0 /*29*/].f_7[1 /*8*/][0 /*3*/] = { 1204.858f, -1296.131f, 33.97642f };
	Local_185[0 /*29*/].f_7[1 /*8*/][1 /*3*/] = { 1198.832f, -1365.926f, 39.47705f };
	Local_185[0 /*29*/].f_7[1 /*8*/].f_7 = 37.5f;
	Local_185[0 /*29*/].f_24 = 0;
	Local_185[1 /*29*/].f_3 = { 1162.71f, -1357.86f, 33.73f };
	Local_185[1 /*29*/].f_6 = 266.7f;
	Local_185[1 /*29*/].f_7[0 /*8*/][0 /*3*/] = { 1164.457f, -1363.839f, 33.51062f };
	Local_185[1 /*29*/].f_7[0 /*8*/][1 /*3*/] = { 1180.637f, -1359.837f, 39.11396f };
	Local_185[1 /*29*/].f_7[0 /*8*/].f_7 = 15.5f;
	Local_185[1 /*29*/].f_7[1 /*8*/][0 /*3*/] = { 0f, 0f, 0f };
	Local_185[1 /*29*/].f_7[1 /*8*/][1 /*3*/] = { 0f, 0f, 0f };
	Local_185[1 /*29*/].f_7[1 /*8*/].f_7 = 0f;
	Local_185[1 /*29*/].f_24 = 0;
}

void func_428()//Position - 0x30F0C
{
	Local_166[0 /*3*/] = { GlobalFunc_2371("B3ADELV", 1) };
	Local_166[1 /*3*/] = { GlobalFunc_2371("B3AGETIN", 1) };
	Local_166[2 /*3*/] = { GlobalFunc_2371("B3AWAN1", -1) };
	Local_166[3 /*3*/] = { GlobalFunc_2371("B3ARTV", 1) };
	Local_166[4 /*3*/] = { GlobalFunc_2371("B3AEXIT", 1) };
	Local_166[5 /*3*/] = { GlobalFunc_2371("B3ALEAVE", 1) };
}


void func_430()//Position - 0x30F8F
{
	Local_415[0 /*2*/] = "BAR3A_C1";
	Local_415[0 /*2*/].f_1 = 1000;
	Local_415[1 /*2*/] = "BAR3A_W2";
	Local_415[1 /*2*/].f_1 = 19000;
	Local_415[2 /*2*/] = "BAR3A_W1";
	Local_415[2 /*2*/].f_1 = 20000;
	Local_415[3 /*2*/] = "BAR3A_W4";
	Local_415[3 /*2*/].f_1 = 22000;
}

void func_431()//Position - 0x30FEB
{
	if (GlobalFunc_9162())
	{
	}
	GlobalFunc_9165(&Local_80, 1, 0, 0);
	func_367(0);
	PED::SET_CREATE_RANDOM_COPS(1);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_163[0], 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_163[1], 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}









void func_440(bool bParam0)//Position - 0x311E7
{
	int iVar0;
	
	GlobalFunc_8958();
	if (!GlobalFunc_142())
	{
		iVar0 = GlobalFunc_8537();
		if (iVar0 == -1)
		{
			return;
		}
		if (!Global_96440[iVar0 /*10*/].f_4)
		{
			return;
		}
		if (Global_96440[iVar0 /*10*/].f_5)
		{
			return;
		}
		if (Global_96440[iVar0 /*10*/].f_6)
		{
			return;
		}
		if (Global_84542 == Global_Current_Checkpoint)
		{
			Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/].f_4++;
		}
		Global_84542 = Global_Current_Checkpoint;
		if (bParam0)
		{
			GlobalFunc_7620(iVar0, 1, 0);
			GlobalFunc_9163(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
		}
		else
		{
			if (Global_96440[iVar0 /*10*/].f_9 == -1)
			{
			}
			else
			{
				GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
			}
			GlobalFunc_9164(iVar0, 1, 1, 0);
		}
		Global_96440[iVar0 /*10*/].f_6 = 1;
	}
}























