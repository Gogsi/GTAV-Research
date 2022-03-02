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
	int iLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = -1;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 1000;
	var uLocal_91 = 1000;
	var uLocal_92 = 0;
	struct<61> Local_93 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	char* sLocal_158 = NULL;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	var uLocal_164 = 0;
	struct<3> Local_165 = { 0, 0, 0 } ;
	struct<3> Local_168 = { 0, 0, 0 } ;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	var uLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179[5] = { 0, 0, 0, 0, 0 };
	var uLocal_185[2] = { 0, 0 };
	struct<3> Local_188[2];
	struct<3> Local_195[2];
	float fLocal_202[2] = { 0f, 0f };
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	int iLocal_208 = 0;
	int iLocal_209[3] = { 0, 0, 0 };
	struct<3> Local_213 = { 0, 0, 0 } ;
	int iLocal_216 = 0;
	struct<3> Local_217 = { 0, 0, 0 } ;
	var uLocal_220[2] = { 0, 0 };
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227 = 0;
	struct<3> Local_228 = { 0, 0, 0 } ;
	struct<3> Local_231 = { 0, 0, 0 } ;
	struct<3> Local_234 = { 0, 0, 0 } ;
	float fLocal_237 = 0f;
	float fLocal_238 = 0f;
	int iLocal_239 = 0;
	struct<3> Local_240[4];
	struct<3> Local_253[4];
	struct<3> Local_266[4];
	struct<3> Local_279[4];
	var uLocal_292 = 16;
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
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	int iLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	struct<3> Local_476 = { 0, 0, 0 } ;
	int iLocal_479 = 0;
	struct<3> Local_480 = { 0, 0, 0 } ;
	struct<3> Local_483 = { 0, 0, 0 } ;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	float fLocal_494 = 0f;
	var uLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	var uLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	struct<3> Local_503 = { 0, 0, 0 } ;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	int iLocal_508 = 0;
	struct<3> Local_509 = { 0, 0, 0 } ;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	float fLocal_517 = 0f;
	float fLocal_518 = 0f;
	float fLocal_519 = 0f;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	float fLocal_525 = 0f;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	var uLocal_528 = 0;
	char* sLocal_529 = NULL;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	char[] cLocal_535[8] = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	struct<6> Local_541 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	int iLocal_549 = 0;
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
	uLocal_79 = GlobalFunc_4946(52);
	iLocal_80 = joaat("a_c_retriever");
	iLocal_154 = 1;
	Local_165 = { -964.1799f, -2751.013f, 12.7848f };
	Local_168 = { 139.8692f, 3660.747f, 30.4814f };
	Local_213 = { -948.2926f, -2755.015f, 12.8068f };
	Local_217 = { -966.79f, -2799.24f, 12.96f };
	Local_476 = { 145.57f, 3661.28f, 30.49f };
	Local_480 = { 156f, 3665.3f, 31.6f };
	Local_483 = { -90f, 0f, 0f };
	uLocal_495 = AUDIO::GET_SOUND_ID();
	uLocal_498 = AUDIO::GET_SOUND_ID();
	Local_503 = { 181.8f, 3676f, 35f };
	Local_509 = { -957.23f, -2764.89f, 13.99f };
	fLocal_525 = 0f;
	Local_93 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_93);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		if (GlobalFunc_115(iLocal_226))
		{
			func_738(iLocal_226);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_226, 1);
			VEHICLE::_0x1CF38D529D7441D9(iLocal_226, 1);
		}
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10102(1);
		func_720();
	}
	GlobalFunc_9621(52, 1, 0);
	func_715();
	if (GlobalFunc_199())
	{
		GlobalFunc_9251(&Local_93, 1, 1, 0);
		iVar0 = GlobalFunc_198();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(Local_213, 331.4214f, 1, 0);
				func_650(1);
				break;
			
			case 1:
				GlobalFunc_4972(Local_188[0 /*3*/], 0f, 1, 0);
				func_650(2);
				break;
			
			case 2:
				GlobalFunc_4972(Local_168, 288.2311f, 1, 0);
				func_650(3);
				break;
			
			case 3:
				GlobalFunc_4972(Local_168, 288.2311f, 1, 0);
				func_650(4);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		func_634(Local_93.f_9, 0, 0, 0, 0, 0);
		func_615();
		switch (iLocal_154)
		{
			case 1:
				func_575();
				break;
			
			case 2:
				func_553();
				break;
			
			case 3:
				func_539();
				break;
			
			case 4:
				func_472();
				break;
			
			case 5:
				func_423();
				break;
			
			case 6:
				func_407();
				break;
			
			case 7:
				func_384();
				break;
			
			case 8:
				func_309();
				break;
			
			case 9:
				func_1();
				break;
		}
		RECORDING::_0x208784099002BC30("SF_Extreme2", 0);
	}
}

void func_1()//Position - 0x2C9
{
	switch (iLocal_156)
	{
		case 0:
			func_308();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_306();
			GlobalFunc_4956();
			AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_FAIL");
			func_303();
			iLocal_462 = 0;
			switch (iLocal_157)
			{
				case 0:
					break;
				
				case 1:
					sLocal_158 = "EXT2_F1";
					break;
				
				case 2:
					sLocal_158 = "EXT2_F3";
					break;
				
				case 3:
					sLocal_158 = "EXT2_F2";
					break;
				
				case 4:
					sLocal_158 = "EXT2_F5";
					break;
				
				case 5:
					sLocal_158 = "EXT2_F7";
					break;
				
				case 6:
					sLocal_158 = "EXT2_F8";
					break;
				
				case 7:
					sLocal_158 = "EXT2_F9";
					break;
				
				case 8:
					sLocal_158 = "EXT2_F10";
					break;
				
				case 9:
					sLocal_158 = "EXT2_F11";
					break;
				
				case 10:
					sLocal_158 = "EXT2_F12";
					break;
				
				case 11:
					sLocal_158 = "EXT2_F13";
					break;
				
				case 12:
					sLocal_158 = "EXT2_F4";
					break;
			}
			if (iLocal_157 == 0)
			{
				GlobalFunc_10102(1);
			}
			else
			{
				GlobalFunc_10700(sLocal_158, 1);
			}
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_299();
				func_29(0);
				if (GlobalFunc_115(iLocal_226))
				{
					GlobalFunc_5129(-1036.121f, -2731.833f, 12.7565f, 332.5734f);
					GlobalFunc_5166(-1023.841f, -2728.188f, 12.7005f, 238.436f);
				}
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_491))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_491, 0);
				}
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_492))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_492, 0);
				}
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_493))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_493, 0);
				}
				AUDIO::STOP_SOUND(uLocal_495);
				func_738(iLocal_225);
				func_738(iLocal_226);
				func_738(uLocal_185[1]);
				GlobalFunc_130(&uLocal_497);
				GlobalFunc_69(&iLocal_176);
				GlobalFunc_69(&iLocal_216);
				GlobalFunc_6692(&(uLocal_185[0]));
				GlobalFunc_6692(&(uLocal_185[1]));
				GlobalFunc_6692(&iLocal_225);
				GlobalFunc_6692(&iLocal_226);
				GlobalFunc_565(759, 0, 1);
				func_720();
			}
			else
			{
				func_2();
			}
			break;
	}
}

void func_2()//Position - 0x4BC
{
	if ((iLocal_157 == 9 && iLocal_462 == 0) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_THREAT", 8, 0, 0, 0))
	{
		iLocal_462 = 1;
	}
}



























void func_29(int iParam0)//Position - 0xF65
{
	if (iParam0 == 1)
	{
		func_293(PLAYER::PLAYER_PED_ID(), 0);
		GlobalFunc_11047(PLAYER::PLAYER_PED_ID(), 10);
		GlobalFunc_11047(PLAYER::PLAYER_PED_ID(), 1);
		while (!PED::HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_11271(PLAYER::PLAYER_PED_ID(), 12, 10, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		GlobalFunc_11271(PLAYER::PLAYER_PED_ID(), 8, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		PED::RELEASE_PED_PRELOAD_VARIATION_DATA(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), 1);
		GlobalFunc_5128(1);
		GlobalFunc_11271(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	else
	{
		func_275(PLAYER::PLAYER_PED_ID(), 14, 158);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			func_31(PLAYER::PLAYER_PED_ID());
			GlobalFunc_5905(1, uLocal_164);
		}
	}
}


void func_31(int iParam0)//Position - 0x1045
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_42(iVar0))
	{
		if (!Global_89948[iVar0])
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] != 0)
			{
				if (GlobalFunc_518(iParam0) != Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0])
				{
					GlobalFunc_521(iVar0);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
				}
			}
		}
		func_132(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11038(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11038(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11038(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11162(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11038(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_132(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}





































































































void func_132(int iParam0, var uParam1, bool bParam2)//Position - 0x1B103
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_13[iVar3], (*uParam1)[iVar3], uParam1->f_26[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (uParam1->f_39[iVar3] != -1 && uParam1->f_39[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_39[iVar3], uParam1->f_49[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (GlobalFunc_42(iVar0))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59 = uParam1->f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = uParam1->f_60;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = uParam1->f_61;
			if (GlobalFunc_11037(iParam0, iVar1, &iVar2, 0))
			{
				GlobalFunc_11271(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11035(iParam0, iVar1, &iVar2))
			{
				GlobalFunc_11271(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_135(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_135(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			GlobalFunc_6784(740, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6784(2035, uParam1->f_59, Global_68104, 1);
			GlobalFunc_6785(161, 1, -1, 1);
		}
	}
}



int func_135(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x1B39A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar31;
	var uVar41;
	int iVar57;
	var uVar58;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	int iVar87;
	int iVar88;
	int iVar89;
	var uVar90;
	int iVar91;
	int iVar92;
	int iVar93;
	int iVar94;
	int iVar95;
	int iVar96;
	int iVar97;
	int iVar98;
	int iVar99;
	int iVar100;
	var uVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_1315831 != 4 && Global_1315831 != 5) && Global_1315831 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_PED_ID() && Global_2414009[PLAYER::PLAYER_ID() /*254*/].f_219 == 2)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -1;
	iVar9 = -99;
	iVar10 = -99;
	iVar11 = -1;
	iVar12 = -1;
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_2621444;
		uVar14 = Global_2621445;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_68149 };
		}
		else
		{
			uVar15 = { GlobalFunc_7617(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != -99)
			{
				if (iVar0 == 10)
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 10, 0) };
					if (iParam4 == -1)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
					}
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
					{
						GlobalFunc_10920(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, uVar15[iVar0]) };
					if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar31 = 9;
							if (iParam5 == 1)
							{
								uVar31 = { Global_68165 };
							}
							else
							{
								uVar31 = { GlobalFunc_7616(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iParam4 == -1)
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
							}
							else
							{
								PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
							}
							if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
							{
								GlobalFunc_10920(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iVar0, GlobalFunc_11041(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_135(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
			}
			iVar0++;
		}
		Global_2621444 = uVar13;
		Global_2621445 = uVar14;
		if (iParam5 == 0)
		{
			iVar57 = GlobalFunc_9005();
			if (iVar57 != -1)
			{
				GlobalFunc_9004(iVar57, 0, Global_68104);
			}
			GlobalFunc_10633(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10920(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11040(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_135(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		iVar68 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
		if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar68, joaat("FORCE_PROP"), 0))
		{
			iVar69 = GlobalFunc_6669(iParam0, 1);
			iVar3 = GlobalFunc_11040(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_309(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10920(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_135(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar70 = GlobalFunc_6669(iParam0, 11);
				iVar71 = GlobalFunc_6669(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_6669(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = GlobalFunc_11040(iParam0, iVar5, 11, iVar70, 3, 0);
					}
					if (iVar73 != -99)
					{
						iVar74 = iVar73;
						iVar75 = 0;
						while (iVar75 < 9)
						{
							if (GlobalFunc_308(iVar5, iVar74, iVar75) == iVar72)
							{
								iVar11 = iVar75;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar75++;
						}
					}
				}
				iVar76 = -1;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(GlobalFunc_4913(iVar5, iParam2, 11, 4), joaat("VEST"), 0))
				{
					iVar70 = GlobalFunc_6669(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_135(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else if (GlobalFunc_6737(iVar5, iParam2))
				{
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (!GlobalFunc_6737(iVar5, iVar70))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar70 >= 256) && ((((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_5"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_6"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_7"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_11"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("HEIST_DRAW_12"), 0)))
						{
						}
						else
						{
							iVar78 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar78 != -99)
							{
								func_135(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_135(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 8, iVar71) };
							iVar81 = Global_68106[1 /*14*/].f_4;
							iVar82 = GlobalFunc_6736(iVar5, iVar71, iVar81);
							if (iVar82 == -99)
							{
								iVar83 = iVar71;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if ((iParam2 >= 96 && iParam2 <= 107) || GlobalFunc_306(GlobalFunc_4913(iVar5, iParam2, 11, 3)) == 6)
									{
										iVar82 = GlobalFunc_5013(iVar5, 11, -1);
										Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, 11, iVar82) };
										iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, Global_68106[1 /*14*/].f_4);
									}
								}
							}
							else
							{
								iVar83 = GlobalFunc_6738(iVar5, iVar82, iParam2, iVar81);
							}
							if (iVar83 != -99)
							{
								func_135(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_135(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10837(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10633(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11041(iParam0, 8, -1), iParam2);
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == -1)
				{
					iParam8 = GlobalFunc_6671(2135, iParam10, 0);
				}
				if (iParam9 == -1)
				{
					iParam9 = GlobalFunc_6671(2142, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				GlobalFunc_11256(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10633(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_6669(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_6669(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_6669(iParam0, 7);
				if (!GlobalFunc_8360(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2621444, joaat("SHRINK_HEAD"), 0)))
			{
				iVar87 = GlobalFunc_6671(2082, iParam10, 0);
				iVar88 = GlobalFunc_6671(2083, iParam10, 0);
				iVar89 = GlobalFunc_6671(2084, iParam10, 0);
				uVar90 = GlobalFunc_6788(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, uVar90, 0f, 0);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, 0);
				}
				iVar91 = 0;
				while (iVar91 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar91, 0f);
					iVar91++;
				}
			}
			else
			{
				GlobalFunc_9021(iParam0, Global_68104);
			}
			iVar92 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar93 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar92, joaat("FORCE_PROP"), 0))
			{
				if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar93, joaat("FORCE_PROP"), 0))
				{
					iVar94 = GlobalFunc_6669(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
						iVar96 = GlobalFunc_7614(iParam0, iVar95);
						if (iVar3 == iVar96)
						{
							PED::CLEAR_PED_PROP(iParam0, iVar95);
						}
						iVar95++;
					}
				}
			}
		}
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_135(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7688(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!GlobalFunc_10918(iParam0, 9, iVar97))
						{
							func_135(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_135(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_135(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
				iVar98 = GlobalFunc_6671(2024, -1, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, GlobalFunc_5005(iParam0, iVar98), GlobalFunc_282(iParam0, iVar98), GlobalFunc_81(iParam0, iVar98));
				}
				if (iParam0 == PLAYER::PLAYER_PED_ID())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, GlobalFunc_5005(PLAYER::PLAYER_PED_ID(), iVar98), GlobalFunc_282(PLAYER::PLAYER_PED_ID(), iVar98), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), GlobalFunc_81(PLAYER::PLAYER_PED_ID(), iVar98));
					GlobalFunc_5004(PLAYER::PLAYER_ID(), iVar98);
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar99 = GlobalFunc_11041(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11041(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_135(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_135(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				GlobalFunc_5003(iParam0);
				iVar102 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar103 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar104 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar102, iVar103);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar104, joaat("FORCE_PROP"), 0))
				{
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_135(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11040(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_135(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11159(iParam0, &uVar4))
		{
			func_135(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_135(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_135(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_135(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar11 != -1)
	{
		iVar105 = GlobalFunc_308(iVar5, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), iVar11);
		if (iVar105 != -1)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = GlobalFunc_4914(iVar5, iVar105, 3, 4);
			}
			if (iVar10 != -99)
			{
				iVar10 = (iVar10 + iVar12);
				func_135(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}












































































































































int func_275(int iParam0, int iParam1, int iParam2)//Position - 0x460C7
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10915(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_275(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_275(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_68106[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { GlobalFunc_7617(iVar0, 0) };
		Global_68106[1 /*14*/] = { GlobalFunc_10836(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11037(iParam0, iVar0, &iVar46, 0))
	{
		GlobalFunc_11271(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11035(iParam0, iVar0, &iVar46))
	{
		GlobalFunc_11271(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}


















void func_293(int iParam0, int iParam1)//Position - 0x48951
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar67;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = GlobalFunc_6674(iParam0);
		if (GlobalFunc_42(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11038(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_132(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
				}
			}
			Var2 = 12;
			Var2.f_13 = 12;
			Var2.f_26 = 12;
			Var2.f_39 = 9;
			Var2.f_49 = 9;
			GlobalFunc_8358(iParam0, &Var2, 1);
			Global_89752[iVar0 /*65*/] = { Var2 };
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_8999();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!GlobalFunc_39(0) && !GlobalFunc_39(1)) && !GlobalFunc_39(2)) && !GlobalFunc_39(3)) && !GlobalFunc_39(4)) && !GlobalFunc_39(9)) && !GlobalFunc_39(10)))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/] = { Var2 };
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_518(iParam0);
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					iVar67 = 0;
					while (iVar67 < 12)
					{
						Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_204[iVar67 /*4*/][iVar0] = GlobalFunc_6669(iParam0, GlobalFunc_33(iVar67));
						iVar67++;
					}
					if (iVar0 == 0)
					{
						if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121])
						{
							Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122] = 1;
						}
					}
				}
			}
		}
	}
}






void func_299()//Position - 0x49AA3
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	if (iLocal_155 == 0)
	{
		iLocal_154++;
	}
	else
	{
		iLocal_154 = iLocal_155;
	}
	iLocal_155 = 0;
	iLocal_156 = 0;
}




void func_303()//Position - 0x49B4D
{
	if ((GlobalFunc_115(iLocal_176) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_176, 0)) && PED::GET_PED_PARACHUTE_STATE(iLocal_176) == -1)
	{
		TASK::CLEAR_PED_TASKS(iLocal_176);
		PED::SET_PED_KEEP_TASK(iLocal_176, 1);
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_SMART_FLEE_PED(iLocal_176, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(iLocal_176, 1193033728, 0);
		}
	}
}



void func_306()//Position - 0x49BE2
{
	GlobalFunc_146(&iLocal_223);
	GlobalFunc_146(&iLocal_227);
	GlobalFunc_146(&iLocal_224);
	GlobalFunc_146(&iLocal_479);
}


void func_308()//Position - 0x49C23
{
	iLocal_162 = 0;
	iLocal_156 = 1;
}

void func_309()//Position - 0x49C31
{
	func_310(82, 1);
	func_720();
}

void func_310(int iParam0, bool bParam1)//Position - 0x49C44
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
	GlobalFunc_8949(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_2365(&uVar1, GlobalFunc_8310());
	func_336();
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


























void func_336()//Position - 0x4AFD6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6674(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (GlobalFunc_10915(iVar1, 14, iVar2))
				{
					func_275(iVar1, 14, iVar2);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}
















































void func_384()//Position - 0x523D1
{
	switch (iLocal_156)
	{
		case 0:
			func_308();
			func_406(7, 1);
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iLocal_176))
			{
				uLocal_548 = PED::CREATE_SYNCHRONIZED_SCENE(Local_168.x, (Local_168.f_1 + 2.3f), (Local_168.f_2 + 1.05f), 0f, 0f, 110f, 2);
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_548, "rcmextreme2", "banter_franklin", 1000f, -4f, 7, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_176, uLocal_548, "rcmextreme2", "banter_dom", 1000f, -4f, 7, 0, 1148846080, 0);
				uLocal_172 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_172, uLocal_548, "banter_cam", "rcmextreme2");
				func_403(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				MISC::CLEAR_AREA(Local_476, 10f, 1, 0, 0, 0);
				func_275(PLAYER::PLAYER_PED_ID(), 14, 158);
			}
			RECORDING::_0x48621C9FCA3EBD28(1);
			iLocal_173 = 0;
			iLocal_163 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			if (GlobalFunc_4926(1000))
			{
				GlobalFunc_2350(500, 1);
				GlobalFunc_4956();
				func_388(0);
				SYSTEM::WAIT(250);
				GlobalFunc_79(500, 1);
				iLocal_156 = 2;
			}
			else
			{
				switch (iLocal_173)
				{
					case 0:
						GlobalFunc_79(500, 1);
						if (func_385(1) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_OUTRO", 8, 0, 0, 0))
						{
							iLocal_173++;
						}
						break;
					
					case 1:
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_548) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_548) > 0.99f)
						{
							func_388(1);
							iLocal_156 = 2;
						}
						break;
					}
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			func_299();
			break;
	}
}

int func_385(int iParam0)//Position - 0x52598
{
	if (iLocal_162 == 1)
	{
		return 0;
	}
	if ((iParam0 == 1 && HUD::IS_MESSAGE_BEING_DISPLAYED()) && MISC::GET_PROFILE_SETTING(203) > 0)
	{
		return 0;
	}
	if (GlobalFunc_111())
	{
		return 0;
	}
	return 1;
}



void func_388(int iParam0)//Position - 0x52635
{
	var uVar0;
	
	if (iParam0 == 1)
	{
		uVar0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
		CAM::SET_CAM_PARAMS(uVar0, CAM::GET_CAM_COORD(uLocal_172), CAM::GET_CAM_ROT(uLocal_172, 2), CAM::GET_CAM_FOV(uLocal_172), 0, 1, 1, 2);
		CAM::SET_CAM_PARAMS(uVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -0.25f, -1.5f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), CAM::GET_CAM_FOV(uLocal_172), 2000, 3, 3, 2);
	}
	else
	{
		CAM::DESTROY_ALL_CAMS(0);
		SYSTEM::WAIT(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(10f);
	}
	if (GlobalFunc_115(iLocal_176))
	{
		if (iParam0 == 1)
		{
			TASK::CLEAR_PED_TASKS(iLocal_176);
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_176);
			GlobalFunc_5921(iLocal_176, 149.8338f, 3664.612f, 30.5093f, 282.082f, 0, 1);
		}
		if ((GlobalFunc_4947(iLocal_502) && GlobalFunc_775(iLocal_502, Local_503, 20f)) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_502, -1))
		{
			VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_502, 1);
			VEHICLE::SET_BOAT_ANCHOR(iLocal_502, 0);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_506);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 171.4f, 3662f, 31.5f, 2f, 20000, 0.25f, 1, 1193033728);
			TASK::TASK_ENTER_VEHICLE(0, iLocal_502, 20000, -1, 2f, 1, 0);
			TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_502, 2368.111f, 4503.167f, 29.5964f, 30f, 0, iLocal_179[3], 64, 50f, 100f);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_506);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_176, uLocal_506);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_506);
		}
		else
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_176, 0);
			TASK::TASK_WANDER_STANDARD(iLocal_176, 1193033728, 0);
		}
		PED::SET_PED_KEEP_TASK(iLocal_176, 1);
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			SYSTEM::WAIT(2000);
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), 145.6766f, 3661.602f, 30.4832f, 260.1765f, 0, 1);
		}
	}
	if (CAM::DOES_CAM_EXIST(uLocal_172))
	{
		CAM::DESTROY_CAM(uLocal_172, 0);
	}
	if (iParam0 == 1)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
	func_389(1, 1, 1, 1);
}

void func_389(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x52857
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
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}














void func_403(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x52C46
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_8955(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11271(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11271(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11271(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10915(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11271(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				}
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_AREA_OF_PEDS(GlobalFunc_80(PLAYER::GET_PLAYER_INDEX()), 50f, 0);
		}
		if (iParam7 == 1)
		{
			MISC::CLEAR_AREA_OF_OBJECTS(Param0, 30f, 0);
		}
		if (bParam10)
		{
			FIRE::STOP_FIRE_IN_RANGE(Param0, 30f);
		}
		MISC::CLEAR_AREA_OF_PROJECTILES(Param0, 30f, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(iVar0, 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(iVar0, 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 1);
		if (bParam12)
		{
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
		}
		HUD::CLEAR_PRINTS();
		if (iParam11 == 1)
		{
			HUD::CLEAR_HELP(1);
		}
		if (iParam3 == 1)
		{
			CAM::SET_WIDESCREEN_BORDERS(1, 0);
		}
		if (iParam4 == 1)
		{
			iLocal_35 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_35 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}



void func_406(int iParam0, int iParam1)//Position - 0x52E4B
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_MODEL(iLocal_179[0]);
			STREAMING::REQUEST_MODEL(iLocal_179[4]);
			STREAMING::REQUEST_MODEL(iLocal_179[1]);
			STREAMING::REQUEST_MODEL(iLocal_179[2]);
			STREAMING::REQUEST_MODEL(iLocal_209[1]);
			STREAMING::REQUEST_MODEL(iLocal_209[0]);
			STREAMING::REQUEST_MODEL(iLocal_209[2]);
			STREAMING::REQUEST_MODEL(iLocal_496);
			VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Ext2_DomIntoAirport");
			VEHICLE::REQUEST_VEHICLE_RECORDING(502, "Ext2_AirportVeh");
			VEHICLE::REQUEST_VEHICLE_RECORDING(503, "Ext2_CargoTakeOff");
			STREAMING::REQUEST_PTFX_ASSET();
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(iLocal_179[0]);
			STREAMING::REQUEST_MODEL(iLocal_179[1]);
			STREAMING::REQUEST_MODEL(iLocal_179[3]);
			STREAMING::REQUEST_MODEL(iLocal_209[1]);
			STREAMING::REQUEST_MODEL(iLocal_209[2]);
			VEHICLE::REQUEST_VEHICLE_RECORDING(600, "Ext2_CargoFlight");
			STREAMING::REQUEST_PTFX_ASSET();
			STREAMING::REQUEST_ANIM_DICT("rcmextreme2atv");
			STREAMING::REQUEST_ANIM_DICT("rcmjosh1@impatient");
			break;
		
		case 7:
			STREAMING::REQUEST_MODEL(iLocal_179[3]);
			STREAMING::REQUEST_ANIM_DICT("rcmextreme2");
			break;
	}
	if (iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 == 0)
		{
			switch (iParam0)
			{
				case 1:
					if (((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_179[0]) && STREAMING::HAS_MODEL_LOADED(iLocal_179[4])) && STREAMING::HAS_MODEL_LOADED(iLocal_179[1])) && STREAMING::HAS_MODEL_LOADED(iLocal_179[2])) && STREAMING::HAS_MODEL_LOADED(iLocal_209[1])) && STREAMING::HAS_MODEL_LOADED(iLocal_209[0])) && STREAMING::HAS_MODEL_LOADED(iLocal_209[2])) && STREAMING::HAS_MODEL_LOADED(iLocal_496)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Ext2_DomIntoAirport")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(502, "Ext2_AirportVeh")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(503, "Ext2_CargoTakeOff")) && STREAMING::HAS_PTFX_ASSET_LOADED()) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\CARGO_PLANE_PH", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\CARGO_PLANE_PH_B", 0))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_179[0], 1);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_179[1], 1);
						iVar0 = 1;
					}
					break;
				
				case 4:
					if ((((((((STREAMING::HAS_MODEL_LOADED(iLocal_179[0]) && STREAMING::HAS_MODEL_LOADED(iLocal_179[1])) && STREAMING::HAS_MODEL_LOADED(iLocal_179[3])) && STREAMING::HAS_MODEL_LOADED(iLocal_209[1])) && STREAMING::HAS_MODEL_LOADED(iLocal_209[2])) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(600, "Ext2_CargoFlight")) && STREAMING::HAS_PTFX_ASSET_LOADED()) && STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme2atv")) && STREAMING::HAS_ANIM_DICT_LOADED("rcmjosh1@impatient"))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_179[0], 1);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_179[1], 1);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_179[3], 1);
						iVar0 = 1;
					}
					break;
				
				case 7:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_179[3]) && STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme2"))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_179[3], 1);
						iVar0 = 1;
					}
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_407()//Position - 0x5311C
{
	switch (iLocal_156)
	{
		case 0:
			func_308();
			GlobalFunc_146(&iLocal_479);
			if (GlobalFunc_115(iLocal_176))
			{
				ENTITY::SET_ENTITY_PROOFS(iLocal_176, 0, 0, 0, 0, 0, 0, 0, 0);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_176, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_176, 185, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_176, 1);
				if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_176, 15f))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_223))
					{
						iLocal_223 = GlobalFunc_4955(iLocal_176, 1, 1, 5);
					}
					if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_476, 10f))
					{
						GlobalFunc_164("EXT2_01", 7500, 1);
					}
					else
					{
						GlobalFunc_164("EXT2_04", 7500, 1);
					}
					GlobalFunc_2370(&uLocal_528);
				}
			}
			GlobalFunc_6692(&iLocal_226);
			iLocal_526 = 0;
			iLocal_527 = 0;
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
			break;
		
		case 1:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				func_417();
				if (iLocal_526 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_480, 0) > 500f)
					{
						func_416(3);
					}
					else if (GlobalFunc_115(iLocal_176))
					{
						if (iLocal_527 == 0 && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_176, 20f))
						{
							GlobalFunc_2887(&uLocal_528);
							GlobalFunc_5105();
							iLocal_527 = 1;
						}
						if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_176, 10f) && GlobalFunc_775(iLocal_176, Local_476, 10f))
						{
							iLocal_526 = 1;
						}
						else if (iLocal_527 == 0)
						{
							GlobalFunc_10868(&uLocal_528, &uLocal_292, "EXT2AU", &sLocal_529, &cLocal_535);
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					iLocal_156 = 2;
				}
			}
			break;
		
		case 2:
			func_299();
			GlobalFunc_146(&iLocal_223);
			break;
	}
}









void func_416(int iParam0)//Position - 0x5354D
{
	if (iLocal_162 == 0)
	{
		iLocal_157 = iParam0;
		iLocal_156 = 2;
		iLocal_155 = 9;
	}
}

void func_417()//Position - 0x53566
{
	if (GlobalFunc_115(iLocal_176))
	{
		if (GlobalFunc_775(iLocal_176, Local_476, 2f))
		{
			if (!PED::IS_PED_FACING_PED(iLocal_176, PLAYER::PLAYER_PED_ID(), 20f))
			{
				if (!GlobalFunc_6964(iLocal_176, -875674219) && !GlobalFunc_6964(iLocal_176, 242628503))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_176, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_176, PLAYER::PLAYER_PED_ID(), 0);
				}
			}
			else if (!GlobalFunc_6964(iLocal_176, 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_177);
				TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "idle_b", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "rcmjosh1@impatient", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_177);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_176, uLocal_177);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_177);
			}
		}
		else if (!GlobalFunc_6964(iLocal_176, 713668775))
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_176, Local_476, 2f, 20000, 1048576000, 0, 1193033728);
		}
	}
}






void func_423()//Position - 0x5376E
{
	switch (iLocal_156)
	{
		case 0:
			func_308();
			if (GlobalFunc_115(iLocal_176) && !HUD::DOES_BLIP_EXIST(iLocal_223))
			{
				iLocal_223 = GlobalFunc_4955(iLocal_176, 1, 1, 5);
			}
			iLocal_205 = 0;
			iLocal_486 = 0;
			iLocal_487 = 0;
			iLocal_467 = 0;
			iLocal_468 = 0;
			iLocal_469 = 0;
			iLocal_470 = 0;
			iLocal_472 = 0;
			iLocal_178 = 0;
			iLocal_515 = 0;
			iLocal_516 = 1;
			iLocal_522 = 0;
			iLocal_523 = 0;
			iLocal_488 = 0;
			iLocal_489 = 0;
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
			}
			func_469();
			func_468("EXTREME_02_INSIDE_PLANE", 0);
			func_468("EXTREME_02_SKYDIVE", 1);
			if ((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(uLocal_185[0])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], 0))
			{
				AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_498, "PLAYER_AT_SPEED_FREEFALL_MASTER", uLocal_185[0], 0, 0, 0);
			}
			break;
		
		case 1:
			if (iLocal_161 != 4)
			{
				func_464();
				func_463();
				func_427();
				GlobalFunc_10868(&uLocal_528, &uLocal_292, "EXT2AU", &sLocal_529, &cLocal_535);
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_490) > 3000)
			{
				func_416(10);
			}
			break;
		
		case 2:
			RECORDING::_0x293220DA1B46CEBC(15f, 0f, 3);
			func_299();
			GlobalFunc_4948(&uLocal_81, 0, 0);
			if (iLocal_515 == 0)
			{
				GlobalFunc_553(758);
			}
			break;
	}
}




void func_427()//Position - 0x53A39
{
	switch (iLocal_161)
	{
		case 0:
			func_461();
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				HUD::CLEAR_HELP(1);
				GlobalFunc_5105();
				AUDIO::STOP_SOUND(uLocal_498);
				iLocal_161 = 1;
			}
			else
			{
				func_460();
				func_457();
				if (iLocal_486 == 0)
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_513) > 1000)
					{
						GlobalFunc_159("EXT2_05", 7500);
						iLocal_486 = 1;
					}
				}
				else if (iLocal_487 == 0)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_159("EXT2_16", -1);
						iLocal_487 = 1;
					}
				}
				if (GlobalFunc_115(uLocal_185[0]) && ENTITY::IS_ENTITY_IN_WATER(uLocal_185[0]))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 320);
					GlobalFunc_4948(&uLocal_81, 0, 0);
					HUD::CLEAR_HELP(1);
					iLocal_161 = 3;
				}
			}
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_4948(&uLocal_81, 0, 0);
				HUD::CLEAR_HELP(1);
				iLocal_161 = 3;
			}
			else
			{
				switch (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()))
				{
					case 0:
						if (iLocal_522 == 0)
						{
							AUDIO::PREPARE_MUSIC_EVENT("EXTREME2_PARA");
							iLocal_522 = 1;
						}
						func_461();
						func_455();
						break;
					
					case 1:
						func_454();
						if (iLocal_515 == 0)
						{
							func_468("EXTREME_02_SKYDIVE", 0);
							func_468("EXTREME_02_OPEN_PARACHUTE", 1);
							iLocal_515 = 1;
						}
						break;
					
					case 2:
						if (iLocal_523 == 0)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_PARA");
							iLocal_523 = 1;
							GlobalFunc_5105();
							if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_HELP(1);
								HUD::CLEAR_PRINTS();
							}
						}
						func_450();
						func_454();
						func_449();
						break;
					
					case 3:
					case -1:
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) > 50f)
						{
							if (iLocal_522 == 1 && !PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID()))
							{
								func_416(11);
							}
						}
						else
						{
							iLocal_161 = 2;
						}
						break;
					}
			}
			break;
		
		case 2:
			GlobalFunc_4948(&uLocal_81, 0, 0);
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_STOP");
			func_468("EXTREME_02_SKYDIVE", 0);
			func_468("EXTREME_02_OPEN_PARACHUTE", 0);
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_480, 1) < 500f)
			{
				iLocal_161 = 3;
			}
			else
			{
				GlobalFunc_146(&iLocal_223);
				iLocal_490 = MISC::GET_GAME_TIMER();
				iLocal_161 = 4;
			}
			break;
		
		case 3:
			if (iLocal_159 == 4)
			{
				iLocal_156 = 2;
			}
			else
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				func_428();
				if (iLocal_488 == 0)
				{
					iLocal_488 = 1;
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_480, 1) > 15f)
					{
						GlobalFunc_164("EXT2_03", 7500, 1);
						GlobalFunc_2370(&uLocal_528);
					}
				}
				else if (iLocal_489 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_480, 1) < 15f)
					{
						GlobalFunc_146(&iLocal_479);
						GlobalFunc_164("EXT2_07", 7500, 1);
						GlobalFunc_2370(&uLocal_528);
						iLocal_489 = 1;
					}
				}
			}
			break;
		
		case 4:
			break;
	}
}

void func_428()//Position - 0x53D18
{
	if (GlobalFunc_115(iLocal_176))
	{
		GlobalFunc_9626(&uLocal_81, iLocal_176, 0, 0, 1, 1, 1);
	}
}





















void func_449()//Position - 0x54B24
{
	if ((iLocal_472 == 0 && func_385(0)) && GlobalFunc_115(iLocal_176))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_176, 0))
		{
			if (GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_DEPLOY", 8, 0, 0, 0))
			{
				iLocal_472 = 1;
			}
		}
		else if (GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_DEPLOY2", 8, 0, 0, 0))
		{
			iLocal_472 = 1;
		}
	}
}

void func_450()//Position - 0x54B8C
{
	GlobalFunc_9256(&uLocal_81, Local_480, "EXT2_15", 0, 1, 1, 1);
}




void func_454()//Position - 0x54F5B
{
	GRAPHICS::DRAW_MARKER(6, Local_480, 0f, 0f, 0f, Local_483, 4f, 4f, 4f, 255, 120, 0, 100, 0, 0, 2, 0, 0, 0, 0);
	GRAPHICS::DRAW_MARKER(6, Local_480, 0f, 0f, 0f, Local_483, 9f, 9f, 9f, 255, 120, 0, 100, 0, 0, 2, 0, 0, 0, 0);
	GRAPHICS::DRAW_MARKER(6, Local_480, 0f, 0f, 0f, Local_483, 14f, 14f, 14f, 255, 120, 0, 100, 0, 0, 2, 0, 0, 0, 0);
}

void func_455()//Position - 0x54FE1
{
	if (iLocal_463 == 0)
	{
		if (func_385(0) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_NOATV", 8, 1, 0, 0))
		{
			iLocal_463 = 1;
		}
	}
	else if ((iLocal_470 == 0 && func_385(0)) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_JUMPOFF", 8, 0, 0, 0))
	{
		iLocal_470 = 1;
	}
}


void func_457()//Position - 0x5505E
{
	if (GlobalFunc_115(uLocal_185[0]) && func_458())
	{
		GlobalFunc_565(759, 1, 0);
		iLocal_516 = 1;
	}
}

int func_458()//Position - 0x55088
{
	float fVar0;
	
	fLocal_518 = ENTITY::GET_ENTITY_PITCH(uLocal_185[0]);
	if (iLocal_516 == 1)
	{
		fLocal_519 = 0f;
		fLocal_517 = fLocal_518;
		iLocal_516 = 0;
	}
	fVar0 = MISC::ABSF((MISC::ABSF(fLocal_518) - MISC::ABSF(fLocal_517)));
	if (func_459())
	{
		fLocal_519 = (fLocal_519 + fVar0);
	}
	else
	{
		fLocal_519 = (fLocal_519 - fVar0);
	}
	fLocal_517 = fLocal_518;
	if (fLocal_519 < -360f || fLocal_519 > 360f)
	{
		return 1;
	}
	return 0;
}

int func_459()//Position - 0x55108
{
	float fVar0;
	
	fVar0 = (fLocal_518 - fLocal_517);
	if (fVar0 > 180f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 < -180f)
	{
		fVar0 = (fVar0 + 360f);
	}
	if (fVar0 > 0f)
	{
		return 1;
	}
	return 0;
}

void func_460()//Position - 0x5514F
{
	if (iLocal_467 == 0)
	{
		if (func_385(0) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_TRICKS", 8, 1, 0, 0))
		{
			iLocal_467 = 1;
		}
	}
	else if (iLocal_468 == 0)
	{
		if (GlobalFunc_111())
		{
			Local_541 = { GlobalFunc_514() };
			if (MISC::ARE_STRINGS_EQUAL(&Local_541, "EXT2_TRICKS_3"))
			{
				GlobalFunc_5105();
				iLocal_468 = 1;
			}
		}
	}
	else if (iLocal_469 == 0)
	{
		if (func_385(0) && GlobalFunc_10626(&uLocal_292, "EXT2AU", "EXT2_TRICKS", &Local_541, 8, 0, 0))
		{
			iLocal_469 = 1;
		}
	}
}

void func_461()//Position - 0x551E5
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_479))
	{
		iLocal_479 = GlobalFunc_2324(Local_480, 5, 0);
		GlobalFunc_164("EXT2_10", 7500, 1);
		iLocal_513 = MISC::GET_GAME_TIMER();
	}
	else
	{
		func_454();
	}
}


void func_463()//Position - 0x5524F
{
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_492) && GlobalFunc_115(iLocal_226))
	{
		Local_228 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_226, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
		if (Local_228.f_2 < -35f)
		{
			if (fLocal_494 <= 0f)
			{
				GRAPHICS::REMOVE_PARTICLE_FX(uLocal_492, 0);
				GRAPHICS::REMOVE_PARTICLE_FX(uLocal_493, 0);
				STREAMING::REMOVE_PTFX_ASSET();
			}
			else
			{
				fLocal_494 = (fLocal_494 - 0.01f);
				GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(uLocal_492, fLocal_494);
			}
		}
	}
}

void func_464()//Position - 0x552C1
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (GlobalFunc_115(iLocal_176))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iLocal_176))
		{
			ENTITY::SET_ENTITY_HEALTH(iLocal_176, 0);
		}
		switch (iLocal_159)
		{
			case 0:
				if ((((MISC::GET_GAME_TIMER() - iLocal_512) > 240000 || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 72)) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					AUDIO::PREPARE_MUSIC_EVENT("EXTREME2_JUMP");
					ENTITY::SET_ENTITY_PROOFS(iLocal_176, 1, 1, 1, 1, 1, 0, 0, 0);
					PED::_0x6647C5F6F5792496(iLocal_176, 0);
					if (GlobalFunc_115(uLocal_185[1]) && GlobalFunc_115(iLocal_226))
					{
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_226, -1f, -50f, -4f) };
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_176, 1);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_176, uLocal_185[1], Var0, 60f, 0, iLocal_179[0], 4, 3f, 100f);
						iLocal_460 = 1;
						iLocal_159 = 1;
					}
				}
				break;
			
			case 1:
				if (GlobalFunc_115(iLocal_226))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_176, 1) };
					Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_226, 1) };
					iVar9 = SYSTEM::ROUND(Var3.f_2);
					iVar10 = SYSTEM::ROUND(Var6.f_2);
					if (IntToFloat(iVar9) < 250f)
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_176);
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_176, 0, 0);
						iLocal_159 = 2;
					}
					else if (iVar9 < (iVar10 - 4))
					{
						if (iLocal_178 == 0)
						{
							iLocal_178 = 1;
							iVar11 = 4127;
							TASK::OPEN_SEQUENCE_TASK(&uLocal_177);
							TASK::TASK_PLAY_ANIM(0, "rcmextreme2atv", "idle_a", 8f, -8f, -1, 8, 0, 0, iVar11, 0);
							TASK::TASK_PLAY_ANIM(0, "rcmextreme2atv", "idle_b", 8f, -8f, -1, 8, 0, 0, iVar11, 0);
							TASK::TASK_PLAY_ANIM(0, "rcmextreme2atv", "idle_d", 8f, -8f, -1, 8, 0, 0, iVar11, 0);
							TASK::TASK_PLAY_ANIM(0, "rcmextreme2atv", "idle_c", 8f, -8f, -1, 8, 0, 0, iVar11, 0);
							TASK::TASK_PLAY_ANIM(0, "rcmextreme2atv", "idle_e", 8f, -8f, -1, 8, 0, 0, iVar11, 0);
							TASK::SET_SEQUENCE_TO_REPEAT(uLocal_177, 1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_177);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_176, uLocal_177);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_177);
						}
					}
					else
					{
						func_467();
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_176, 0))
				{
					TASK::TASK_PARACHUTE_TO_TARGET(iLocal_176, Local_476);
					iLocal_159 = 3;
				}
				break;
			
			case 3:
				if (PED::GET_PED_PARACHUTE_STATE(iLocal_176) == -1)
				{
					PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 8, 2, 0, 0);
					if (iLocal_154 == 4)
					{
						func_416(12);
					}
					iLocal_471 = 0;
					iLocal_159 = 4;
				}
				break;
			
			case 4:
				func_465();
				func_417();
				break;
			}
	}
}

void func_465()//Position - 0x5554A
{
	struct<6> Var0;
	struct<6> Var6;
	
	if (iLocal_471 == 0 && GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "EXT2_JUMPOFF"))
		{
			Var6 = { GlobalFunc_2209() };
			if ((MISC::ARE_STRINGS_EQUAL(&Var6, "EXT2_JUMPOFF_1") || MISC::ARE_STRINGS_EQUAL(&Var6, "EXT2_JUMPOFF_2")) || MISC::ARE_STRINGS_EQUAL(&Var6, "EXT2_JUMPOFF_3"))
			{
			}
			else
			{
				iLocal_471 = 1;
				GlobalFunc_5105();
			}
		}
	}
}


void func_467()//Position - 0x55602
{
	if ((iLocal_461 == 0 && func_385(1)) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_DRIVE", 8, 0, 0, 0))
	{
		iLocal_461 = 1;
	}
}

void func_468(char* sParam0, int iParam1)//Position - 0x55639
{
	if (iParam1 == 1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		{
			AUDIO::START_AUDIO_SCENE(sParam0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
}

void func_469()//Position - 0x5566A
{
	Vector3 vVar0;
	
	func_406(7, 1);
	WATER::GET_WATER_HEIGHT(Local_503, &vVar0);
	func_470(&iLocal_502, iLocal_179[3], Local_503.x, Local_503.f_1, vVar0, -71.71291f, -1, 0f, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_502, 0, 1);
	VEHICLE::SET_BOAT_ANCHOR(iLocal_502, 1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_502, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_179[3]);
}

void func_470(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, float fParam7, int iParam8)//Position - 0x556C4
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			GlobalFunc_2888(iParam1);
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
			if (iParam6 >= 0)
			{
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam6);
			}
			if (iParam8 > -1)
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam8);
			}
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, fParam7);
		}
	}
}


void func_472()//Position - 0x5574A
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, 1);
	}
	if (GlobalFunc_115(iLocal_226))
	{
		func_538(iLocal_226);
		VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_226, 1);
	}
	func_537();
	switch (iLocal_156)
	{
		case 0:
			func_308();
			func_480(1, "ATV skydive", 0, 0, 0, 1);
			if (GlobalFunc_115(uLocal_185[1]) && !VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(uLocal_185[1]))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_185[1], 1, 1);
			}
			iLocal_512 = MISC::GET_GAME_TIMER();
			iLocal_159 = 0;
			iLocal_475 = 0;
			iLocal_205 = 1;
			iLocal_499 = 0;
			iLocal_459 = 0;
			iLocal_460 = 0;
			iLocal_461 = 0;
			iLocal_524 = 0;
			iLocal_500 = 0;
			PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 66);
			if (GlobalFunc_199())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_RESTART2");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_READY");
			}
			break;
		
		case 1:
			func_479();
			func_478(iLocal_226, 0f);
			func_464();
			func_477();
			func_476();
			func_474();
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iLocal_226))
			{
				Local_228 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_226, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
				if (Local_228.f_2 < -6.5f || Local_228.f_1 < -40f)
				{
					RECORDING::_0x293220DA1B46CEBC(5f, 2f, 3);
					if (iLocal_475 == 1)
					{
						iLocal_463 = 1;
						iLocal_161 = 0;
					}
					else
					{
						iLocal_463 = 0;
						iLocal_161 = 1;
					}
					if (GlobalFunc_115(iLocal_226))
					{
						VEHICLE::SET_VEHICLE_INACTIVE_DURING_PLAYBACK(iLocal_226, 0);
						VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_226);
					}
					AUDIO::STOP_STREAM();
					AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_JUMP");
					func_473(0);
					GlobalFunc_146(&iLocal_224);
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 0);
					}
					iLocal_156 = 2;
				}
			}
			break;
		
		case 2:
			RECORDING::_0x293220DA1B46CEBC(5f, 15f, 1);
			func_299();
			break;
	}
}

void func_473(int iParam0)//Position - 0x55906
{
	if (iParam0 == 1)
	{
		if (GlobalFunc_115(iLocal_226))
		{
			VEHICLE::_SET_VEHICLE_SHADOW_EFFECT(iLocal_226, 255, 255);
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_549))
			{
				iLocal_549 = OBJECT::CREATE_OBJECT(joaat("exile1_lightrig"), ENTITY::GET_ENTITY_COORDS(iLocal_226, 1), 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_549, ENTITY::GET_ENTITY_ROTATION(iLocal_226, 2), 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_549, 1);
				ENTITY::SET_ENTITY_COLLISION(iLocal_549, 0, 0);
			}
		}
	}
	else
	{
		if (GlobalFunc_115(iLocal_226))
		{
			VEHICLE::_REMOVE_VEHICLE_SHADOW_EFFECT(iLocal_226);
		}
		GlobalFunc_130(&iLocal_549);
	}
}

void func_474()//Position - 0x55981
{
	if (GlobalFunc_115(uLocal_185[0]))
	{
		if (iLocal_475 == 1)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], 0))
			{
				HUD::CLEAR_PRINTS();
				if (iLocal_154 == 2)
				{
					GlobalFunc_146(&iLocal_223);
					GlobalFunc_146(&iLocal_227);
				}
				if (iLocal_499 == 0)
				{
					GlobalFunc_164("EXT2_09", 7500, 1);
					iLocal_499 = 1;
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_224))
				{
					iLocal_224 = GlobalFunc_5743(uLocal_185[0], 1, 5);
				}
				iLocal_475 = 0;
			}
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], 0))
		{
			HUD::CLEAR_PRINTS();
			GlobalFunc_146(&iLocal_224);
			switch (iLocal_154)
			{
				case 2:
					if (GlobalFunc_115(iLocal_225) && !HUD::DOES_BLIP_EXIST(iLocal_227))
					{
						iLocal_227 = GlobalFunc_5743(iLocal_225, 1, 5);
					}
					if (iLocal_500 < 2)
					{
						GlobalFunc_164("EXT2_02", 7500, 1);
						iLocal_500++;
					}
					break;
				
				case 4:
					if (iLocal_500 < 2)
					{
						GlobalFunc_164("EXT2_08", 7500, 1);
						iLocal_500++;
					}
					break;
			}
			iLocal_475 = 1;
		}
	}
}


void func_476()//Position - 0x55ABE
{
	if (((iLocal_460 == 0 && func_385(1)) && (MISC::GET_GAME_TIMER() - iLocal_512) > 30000) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_COMEON", 8, 0, 0, 0))
	{
		iLocal_460 = 1;
	}
}

void func_477()//Position - 0x55B06
{
	if ((iLocal_459 == 0 && func_385(1)) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_LETSGO", 8, 1, 0, 0))
	{
		iLocal_459 = 1;
	}
}

void func_478(int iParam0, float fParam1)//Position - 0x55B3D
{
	struct<3> Var0;
	float fVar3;
	
	if (GlobalFunc_115(iParam0))
	{
		if (iLocal_524 == 0)
		{
			if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iParam0, 200f) && AUDIO::LOAD_STREAM("Plane_Interior", "EXTREME_02_SOUNDSET"))
			{
				AUDIO::PLAY_STREAM_FRONTEND();
				AUDIO::SET_VARIABLE_ON_STREAM("INOUT", fParam1);
				iLocal_524 = 1;
			}
		}
		else
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
			if ((((Var0.x < 2.5f && Var0.x > -2.5f) && Var0.f_2 > -6f) && Var0.f_1 < 30f) && Var0.f_1 > -40f)
			{
				fVar3 = ((Var0.f_1 - 30f) / 70f);
				fLocal_525 = MISC::ABSF(fVar3);
			}
			else
			{
				fLocal_525 = 1f;
			}
			if (fLocal_525 < 0f)
			{
				fLocal_525 = 0f;
			}
			else if (fLocal_525 > 1f)
			{
				fLocal_525 = 1f;
			}
			AUDIO::SET_VARIABLE_ON_STREAM("INOUT", fLocal_525);
		}
	}
}

void func_479()//Position - 0x55C31
{
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_492))
	{
		if (GlobalFunc_115(iLocal_226))
		{
			fLocal_494 = 0.4f;
			uLocal_492 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_extrm2_moving_cloud", iLocal_226, 0f, -20f, -13f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
		}
	}
	else
	{
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(uLocal_492, fLocal_494);
	}
	if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_493))
	{
		uLocal_493 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD("scr_rcext2_cargo_smoke", 417f, 3920f, 1449f, 0f, 0f, 0f, 1065353216, 0, 0, 0, 0);
	}
}

void func_480(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x55CB8
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_89999)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_89999)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_89999)
		{
		}
		iVar1 = GlobalFunc_5111(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			iVar2 = GlobalFunc_5110(iVar1);
			cVar3 = { Global_81155[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_89999, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7703(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_89999, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_133(&(Global_89962.f_3));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_89999 = iParam0;
		GlobalFunc_10970(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}

























































void func_537()//Position - 0x5A79F
{
	struct<3> Var0;
	
	if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN())
	{
		if (GlobalFunc_115(iLocal_226))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_226, 1) };
			HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeCargoPlaneClimb"), Var0.x, Var0.f_1, SYSTEM::FLOOR(ENTITY::GET_ENTITY_HEADING(iLocal_226)), 1);
		}
		if (HUD::IS_HUD_HIDDEN())
		{
			HUD::DISPLAY_HUD(1);
		}
		if (HUD::IS_RADAR_HIDDEN())
		{
			HUD::DISPLAY_RADAR(1);
		}
	}
}

void func_538(int iParam0)//Position - 0x5A803
{
	if (GlobalFunc_115(iParam0))
	{
		VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iParam0);
		if (VEHICLE::IS_VEHICLE_HIGH_DETAIL(iParam0))
		{
			VEHICLE::SET_FORCE_HD_VEHICLE(iParam0, 1);
		}
	}
}

void func_539()//Position - 0x5A82A
{
	func_538(iLocal_225);
	func_538(iLocal_226);
	switch (iLocal_156)
	{
		case 0:
			func_308();
			GlobalFunc_5105();
			func_468("EXTREME_02_DRIVE_UP_RAMP", 0);
			func_468("EXTREME_02_PLANE_TAKEOFF_CUTSCENE", 1);
			RECORDING::_0x293220DA1B46CEBC(5f, 0f, 3);
			RECORDING::_0x48621C9FCA3EBD28(1);
			if (GlobalFunc_115(iLocal_225))
			{
				if (GlobalFunc_115(uLocal_185[0]))
				{
					if (func_552(2f, -2f, -24f, -4f))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_185[0], iLocal_225, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_225, ENTITY::GET_ENTITY_COORDS(uLocal_185[0], 1)), 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
					}
					else
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_185[0], iLocal_225, 0, 0f, -24f, -3f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], -1);
					}
				}
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_225, 1);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_225))
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_225, (12000f - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_225)));
				}
				VEHICLE::CONTROL_LANDING_GEAR(iLocal_225, 1);
				SYSTEM::WAIT(0);
			}
			uLocal_172 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
			CAM::SET_CAM_PARAMS(uLocal_172, -1359.8f, -2217.8f, 14.2f, 5.6f, 0f, 160.7f, 50f, 0, 1, 1, 2);
			CAM::SET_CAM_PARAMS(uLocal_172, -1348.5f, -2198.4f, 14.2f, 11.5f, 0f, 168.1f, 50f, 5000, 0, 0, 2);
			func_403(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			if ((GlobalFunc_115(uLocal_185[1]) && !ENTITY::IS_ENTITY_ATTACHED(uLocal_185[1])) && GlobalFunc_115(iLocal_225))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_185[1], iLocal_225, 0, 0.902488f, -6f, -3.55149f, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
			}
			AUDIO::STOP_STREAM();
			func_738(iLocal_206);
			func_738(uLocal_185[1]);
			VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Ext2_DomIntoAirport");
			VEHICLE::REMOVE_VEHICLE_RECORDING(502, "Ext2_AirportVeh");
			GlobalFunc_69(&(uLocal_220[1]));
			GlobalFunc_6692(&iLocal_206);
			uLocal_547 = STREAMING::STREAMVOL_CREATE_SPHERE(-1389.5f, -2218.5f, 33.7f, 400f, 12, 127);
			GlobalFunc_11047(PLAYER::PLAYER_PED_ID(), 10);
			GlobalFunc_11047(PLAYER::PLAYER_PED_ID(), 1);
			iLocal_173 = 0;
			iLocal_163 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_225) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_225))
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_225, 0.9f);
			}
			if (GlobalFunc_4926(1000))
			{
				iLocal_173 = 5;
			}
			switch (iLocal_173)
			{
				case 0:
					if (AUDIO::LOAD_STREAM("Plane_Flyby", "EXTREME_02_SOUNDSET"))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						iLocal_173++;
					}
					break;
				
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_163) > 500)
					{
						iLocal_173++;
					}
					break;
				
				case 2:
					if (func_385(1) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_MIDTRO", 8, 0, 0, 0))
					{
						iLocal_173++;
					}
					break;
				
				case 3:
					if ((GlobalFunc_115(iLocal_225) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_225)) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_225) > 16000f)
					{
						CAM::SET_CAM_PARAMS(uLocal_172, -1389.5f, -2218.5f, 33.8f, 4.4f, 0f, -44.2f, 40f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_172, -1322f, -2143.9f, 69.7f, 2.1f, 0f, -43f, 40f, 25000, 0, 0, 2);
						iLocal_173++;
					}
					break;
				
				case 4:
					if (func_385(1))
					{
						iLocal_173++;
					}
					break;
				
				case 5:
					GlobalFunc_2350(500, 1);
					GlobalFunc_4956();
					func_540();
					CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
					CAM::DESTROY_ALL_CAMS(0);
					AUDIO::STOP_SOUND(uLocal_495);
					func_468("EXTREME_02_PLANE_TAKEOFF_CUTSCENE", 0);
					GlobalFunc_130(&uLocal_497);
					func_738(iLocal_225);
					VEHICLE::REMOVE_VEHICLE_RECORDING(503, "Ext2_CargoTakeOff");
					GlobalFunc_69(&(uLocal_220[0]));
					GlobalFunc_6692(&iLocal_225);
					if (STREAMING::STREAMVOL_IS_VALID(uLocal_547))
					{
						STREAMING::STREAMVOL_DELETE(uLocal_547);
					}
					SYSTEM::WAIT(1000);
					func_389(1, 1, 0, 1);
					func_468("EXTREME_02_INSIDE_PLANE", 1);
					GlobalFunc_79(500, 1);
					iLocal_156 = 2;
					break;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			func_299();
			break;
	}
}

void func_540()//Position - 0x5AC65
{
	int iVar0;
	
	if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
	}
	func_406(4, 1);
	func_470(&iLocal_226, iLocal_179[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(600, "Ext2_CargoFlight"), 0f), -73.33857f, -1, 0, -1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_179[1]);
	func_551(iLocal_226, &(uLocal_220[0]), iLocal_209[2], -1);
	if (GlobalFunc_115(uLocal_220[0]))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_220[0], 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_209[2]);
	VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_226, 600, "Ext2_CargoFlight", 1);
	VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_226);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_226, 1, 1);
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_226, 0);
	VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_226, 0);
	VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_226, 0);
	ENTITY::SET_ENTITY_PROOFS(iLocal_226, 1, 1, 1, 1, 1, 0, 0, 0);
	VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_226, 2, 0, 0);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_226, 10000);
	if (!GlobalFunc_188())
	{
		GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), Local_188[0 /*3*/], 0f, 0, 1);
	}
	GlobalFunc_69(&iLocal_176);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		GlobalFunc_6692(&(uLocal_185[iVar0]));
		func_470(&(uLocal_185[iVar0]), iLocal_179[0], Local_188[iVar0 /*3*/], 91f, -1, 0f, iVar0);
		func_549(iVar0);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_179[0]);
	if (!GlobalFunc_188() && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], 0))
	{
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], -1);
	}
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_185[1], 0);
	func_541(1, 1);
	func_29(1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
	func_473(1);
}

void func_541(int iParam0, int iParam1)//Position - 0x5AE0F
{
	GlobalFunc_2888(iLocal_209[1]);
	if (GlobalFunc_115(iLocal_176))
	{
		if (GlobalFunc_115(uLocal_185[1]) && !PED::IS_PED_IN_VEHICLE(iLocal_176, uLocal_185[1], 0))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_176, uLocal_185[1], -1);
		}
	}
	else if (iParam0 == 1)
	{
		if (GlobalFunc_115(uLocal_185[1]))
		{
			func_551(uLocal_185[1], &iLocal_176, iLocal_209[1], -1);
		}
	}
	else
	{
		func_548(&iLocal_176, iLocal_209[1], Local_476, (288.2311f - 180f));
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_209[1]);
	func_547(iLocal_176);
	PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_176, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_176, 500);
	GlobalFunc_173(&uLocal_292, 3, iLocal_176, "DOM", 0, 1);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_176, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_176, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_176, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_176, 1);
	PED::SET_PED_PROP_INDEX(iLocal_176, 2, 0, 0, false);
	PED::SET_PED_HELMET(iLocal_176, 0);
	PED::SET_PED_DIES_IN_WATER(iLocal_176, 0);
	PED::SET_PED_PARACHUTE_TINT_INDEX(iLocal_176, 6);
	if (iParam1 == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 8, 1, 0, 0);
		if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_176, joaat("gadget_parachute"), 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_176, joaat("gadget_parachute"), 1, 0, 0);
		}
	}
	else
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 8, 2, 0, 0);
	}
	if (iParam0 == 1 && AUDIO::IS_AUDIO_SCENE_ACTIVE("EXTREME_02_DRIVE_TO_PLANE"))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_185[1], "EXTREME_02_DOMS_ATV", 0);
	}
	func_542(iLocal_176, 1);
}

void func_542(int iParam0, int iParam1)//Position - 0x5AF6A
{
	if (GlobalFunc_115(iParam0))
	{
		if (iParam1 == 1)
		{
			if (!GlobalFunc_580(17, iParam0))
			{
				GlobalFunc_5669(17, iParam0);
			}
		}
		else if (GlobalFunc_580(17, iParam0))
		{
			GlobalFunc_583(17, iParam0, 0);
		}
	}
}





void func_547(int iParam0)//Position - 0x5B1EE
{
	if (GlobalFunc_115(iParam0))
	{
		uLocal_507 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, uLocal_507);
		PED::SET_PED_CONFIG_FLAG(iParam0, 132, 1);
	}
}

void func_548(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x5B21C
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		GlobalFunc_2888(iParam1);
		*iParam0 = PED::CREATE_PED(26, iParam1, Param2, fParam5, 1, 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, 1);
	}
}

void func_549(int iParam0)//Position - 0x5B257
{
	if (GlobalFunc_115(uLocal_185[iParam0]))
	{
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uLocal_185[iParam0], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uLocal_185[iParam0], 0);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_185[iParam0], 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uLocal_185[iParam0], 1);
		if (!VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(uLocal_185[iParam0]))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_185[iParam0], 1, 1);
		}
		if (iParam0 == 1)
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_185[iParam0], 1);
		}
	}
}


void func_551(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5B2D7
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1) && ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		GlobalFunc_2888(iParam2);
		*iParam1 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, 26, iParam2, iParam3, 1, 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam1, 1);
	}
}

int func_552(float fParam0, float fParam1, float fParam2, float fParam3)//Position - 0x5B31B
{
	struct<3> Var0;
	
	if (GlobalFunc_115(iLocal_225))
	{
		Local_231 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_225, 0f, -20f, -3f) };
		if (GlobalFunc_115(uLocal_185[0]))
		{
			Local_228 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_225, ENTITY::GET_ENTITY_COORDS(uLocal_185[0], 1)) };
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_225, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
			if (((((((((Var0.x < fParam0 && Var0.x > fParam1) && Var0.f_1 > fParam2) && Var0.f_1 < 25f) && Var0.f_2 > fParam3) && Local_228.x < fParam0) && Local_228.x > fParam1) && Local_228.f_1 > fParam2) && Local_228.f_1 < 25f) && Local_228.f_2 > fParam3)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_553()//Position - 0x5B3ED
{
	if (iLocal_207 > -1)
	{
		PAD::SET_INPUT_EXCLUSIVE(0, 222);
	}
	func_538(uLocal_185[1]);
	func_538(iLocal_225);
	switch (iLocal_156)
	{
		case 0:
			func_308();
			if (GlobalFunc_115(uLocal_185[1]))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_185[1], 0);
				ENTITY::SET_ENTITY_LOD_DIST(uLocal_185[1], 500);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_185[1]))
				{
					VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_185[1]);
				}
				else
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_185[1], 500, "Ext2_DomIntoAirport", 1);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_185[1], 1000f);
				}
			}
			if (GlobalFunc_115(iLocal_176))
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_223))
				{
					iLocal_223 = GlobalFunc_4955(iLocal_176, 1, 1, 5);
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_223))
				{
					HUD::SET_BLIP_SCALE(iLocal_223, 0.7f);
				}
			}
			func_406(1, 1);
			func_574();
			func_573();
			if (GlobalFunc_115(iLocal_225) && !HUD::DOES_BLIP_EXIST(iLocal_227))
			{
				iLocal_227 = GlobalFunc_5743(iLocal_225, 1, 5);
			}
			GlobalFunc_164("EXT2_02", 7500, 1);
			func_572();
			GlobalFunc_11271(PLAYER::PLAYER_PED_ID(), 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
			iLocal_475 = 1;
			iLocal_205 = 1;
			iLocal_499 = 0;
			iLocal_500 = 1;
			iLocal_501 = 0;
			iLocal_464 = 0;
			iLocal_465 = 0;
			iLocal_466 = 0;
			iLocal_457 = 0;
			iLocal_458 = 0;
			iLocal_520 = 0;
			iLocal_521 = 0;
			iLocal_524 = 0;
			iLocal_207 = -1;
			iLocal_473 = 0;
			iLocal_474 = MISC::GET_GAME_TIMER();
			iLocal_208 = MISC::GET_GAME_TIMER();
			iLocal_160 = 0;
			iLocal_239 = MISC::GET_GAME_TIMER();
			if (!GlobalFunc_199())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_START");
			}
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			GlobalFunc_2447(17, 1);
			MISC::CLEAR_AREA_OF_VEHICLES(-1028f, -2879f, 14f, 50f, 0, 0, 0, 0, 0);
			break;
		
		case 1:
			func_478(iLocal_225, 1f);
			if (iLocal_207 == -1)
			{
				func_568();
				func_567();
				func_564();
				func_563();
				func_474();
				func_561();
				func_558();
				func_557();
			}
			else if (((MISC::GET_GAME_TIMER() - iLocal_207) > 1500 && !GlobalFunc_111()) || func_552(2f, -2f, -12f, -4f))
			{
				iLocal_156 = 2;
			}
			else
			{
				func_556();
			}
			break;
		
		case 2:
			func_299();
			GlobalFunc_146(&iLocal_223);
			GlobalFunc_146(&iLocal_227);
			GlobalFunc_190(&iLocal_508);
			GlobalFunc_2297(&iLocal_216, 1, 0, 1);
			GlobalFunc_2297(&(uLocal_220[1]), 1, 0, 1);
			GlobalFunc_190(&iLocal_206);
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_491))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_491, 0);
			}
			STREAMING::REMOVE_PTFX_ASSET();
			GlobalFunc_4948(&uLocal_81, 0, 0);
			break;
	}
}



void func_556()//Position - 0x5B6E3
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (iLocal_501 == 1)
	{
		fVar2 = 0.65f;
	}
	else if (iLocal_160 == 2)
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_231, 1);
			if (fVar0 > 80f)
			{
				fVar0 = 80f;
			}
			fVar1 = ((fVar0 / 100f) / 2f);
			if (fVar0 < 40f)
			{
				fVar2 = (0.25f + fVar1);
			}
			else
			{
				fVar2 = (0.65f - fVar1);
			}
		}
	}
	else
	{
		fVar2 = 0.35f;
	}
	if (GlobalFunc_115(iLocal_225) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_225))
	{
		VEHICLE::SET_PLAYBACK_SPEED(iLocal_225, fVar2);
		if (iLocal_501 == 0 && VEHICLE::GET_POSITION_IN_RECORDING(iLocal_225) > 340f)
		{
			if (func_552(2f, -2f, -40f, -7f))
			{
				iLocal_156 = 2;
			}
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_491))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_491, 0);
			}
			VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_225, 0);
			iLocal_501 = 1;
		}
	}
}

void func_557()//Position - 0x5B7D7
{
	if (GlobalFunc_115(iLocal_206) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_206))
	{
		VEHICLE::SET_PLAYBACK_SPEED(iLocal_206, 0.32f);
	}
}

void func_558()//Position - 0x5B7FE
{
	int iVar0;
	struct<3> Var1;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_239) > 250)
	{
		if (GlobalFunc_115(iLocal_206))
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_206, Local_240[iVar0 /*3*/]) };
				func_559(Var1);
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_206, Local_253[iVar0 /*3*/]) };
				func_559(Var1);
				iVar0++;
			}
		}
		if (GlobalFunc_115(iLocal_225))
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_225, Local_266[iVar0 /*3*/]) };
				func_559(Var1);
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_225, Local_279[iVar0 /*3*/]) };
				func_559(Var1);
				iVar0++;
			}
		}
	}
}

void func_559(struct<3> Param0)//Position - 0x5B8E2
{
	struct<3> Var0;
	struct<3> Var3;
	
	iLocal_239 = MISC::GET_GAME_TIMER();
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Param0, 4f))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			PED::KNOCK_PED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID());
		}
		else if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RUNNING_RAGDOLL_TASK(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var3 = { GlobalFunc_107(Param0 - Var0) };
			Var3 = { Var3 * Vector(15f, 15f, 15f) };
			PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 0, 1000, 0, 0, 1, 0);
			ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, Var3, 0f, 0f, 1f, 0, 0, 1, 1, 0, 1);
		}
	}
}


void func_561()//Position - 0x5B9D1
{
	if (iLocal_162 == 0 && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_176, 1) > 500f)
	{
		if (iLocal_160 == 1 || iLocal_160 == 2)
		{
			func_416(8);
		}
		else
		{
			func_416(4);
		}
	}
}


void func_563()//Position - 0x5BA71
{
	if (((iLocal_520 == 0 && GlobalFunc_115(uLocal_185[0])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_185[0], -1648.926f, -2752.311f, 11.94444f, -1327.845f, -2196.041f, 17.94445f, 50f, 0, 1, 0))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_RUNWAY");
		iLocal_520 = 1;
	}
}

void func_564()//Position - 0x5BAE4
{
	struct<3> Var0;
	
	if (GlobalFunc_115(uLocal_185[1]))
	{
		switch (iLocal_160)
		{
			case 0:
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_185[1]))
				{
					fLocal_237 = VEHICLE::GET_POSITION_IN_RECORDING(uLocal_185[1]);
					VEHICLE::SET_PLAYBACK_SPEED(uLocal_185[1], 1.04f);
					if (iLocal_457 == 0)
					{
						if (func_385(0) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_START", 8, 1, 0, 0))
						{
							iLocal_457 = 1;
						}
					}
					else if (iLocal_458 == 0)
					{
						if (((func_385(0) && GlobalFunc_115(iLocal_176)) && GlobalFunc_115(iLocal_216)) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_GATE", 8, 0, 0, 0))
						{
							iLocal_458 = 1;
							TASK::TASK_LOOK_AT_ENTITY(iLocal_176, iLocal_216, 2000, 0, 2);
							TASK::TASK_LOOK_AT_ENTITY(iLocal_216, iLocal_176, 4000, 0, 2);
						}
					}
					if (fLocal_237 > 265f)
					{
						GlobalFunc_2297(&iLocal_216, 1, 0, 1);
						GlobalFunc_2447(17, 0);
						if (GlobalFunc_115(iLocal_225))
						{
							VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_225);
							uLocal_491 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_rcext2_ramp_scrape", iLocal_225, 0f, -40f, -6.45f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
							uLocal_497 = OBJECT::CREATE_OBJECT(iLocal_496, ENTITY::GET_ENTITY_COORDS(iLocal_225, 1), 1, 1, 0);
							ENTITY::SET_ENTITY_COLLISION(uLocal_497, 0, 0);
							ENTITY::SET_ENTITY_VISIBLE(iLocal_497, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_497, iLocal_225, 0, 0f, -40f, -6.45f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_495, "Scraping_Ramp", iLocal_497, "EXTREME_02_SOUNDSET", 0, 0);
						}
						iLocal_500 = 0;
						iLocal_160 = 1;
					}
				}
				break;
			
			case 1:
				func_566();
				func_556();
				func_565();
				if (GlobalFunc_115(iLocal_225))
				{
					Local_234 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_225, ENTITY::GET_ENTITY_COORDS(uLocal_185[1], 1)) };
					if (((Local_234.x < 3f && Local_234.x > -3f) && Local_234.f_1 > -8f) && Local_234.f_2 > -7f)
					{
						GlobalFunc_146(&iLocal_223);
						func_738(uLocal_185[1]);
						Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_225, ENTITY::GET_ENTITY_COORDS(uLocal_185[1], 1)) };
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_185[1], iLocal_225, 0, Var0, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
						iLocal_160 = 2;
					}
				}
				break;
			
			case 2:
				func_566();
				func_556();
				break;
			}
	}
}

void func_565()//Position - 0x5BD1A
{
	if (((iLocal_473 < 3 && (MISC::GET_GAME_TIMER() - iLocal_474) > 9000) && func_385(1)) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_REMIND", 8, 0, 0, 0))
	{
		iLocal_473++;
		iLocal_474 = MISC::GET_GAME_TIMER();
	}
}

void func_566()//Position - 0x5BD6D
{
	if (GlobalFunc_115(iLocal_225) && GlobalFunc_115(uLocal_185[0]))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], 0))
		{
			if (GlobalFunc_156(iLocal_225, uLocal_185[0], 1) < 500f)
			{
				GlobalFunc_9626(&uLocal_81, iLocal_225, "EXT2_12", 0, 1, 1, 1);
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					func_468("EXTREME_02_FOCUS_ON_PLANE", 1);
				}
				else
				{
					func_468("EXTREME_02_FOCUS_ON_PLANE", 0);
				}
			}
		}
		else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			GlobalFunc_4948(&uLocal_81, 0, 0);
		}
	}
}

void func_567()//Position - 0x5BDF3
{
	if ((iLocal_160 == 2 && GlobalFunc_115(iLocal_225)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_225))
	{
		fLocal_238 = VEHICLE::GET_POSITION_IN_RECORDING(iLocal_225);
		if (fLocal_238 > 450f)
		{
			VEHICLE::CONTROL_LANDING_GEAR(iLocal_225, 1);
			func_416(8);
		}
		else if ((GlobalFunc_115(iLocal_176) && func_385(1)) && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_176, 50f))
		{
			if ((iLocal_464 == 0 && fLocal_238 < 200f) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_REMIND1", 7, 0, 0, 0))
			{
				iLocal_464 = 1;
			}
			if (((iLocal_465 == 0 && fLocal_238 > 200f) && fLocal_238 < 325f) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_REMIND2", 7, 0, 0, 0))
			{
				iLocal_465 = 1;
			}
		}
	}
}

void func_568()//Position - 0x5BED1
{
	if (GlobalFunc_115(iLocal_225))
	{
		if (func_552(2f, -2f, -24f, -4f))
		{
			RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
			iLocal_207 = MISC::GET_GAME_TIMER();
			GlobalFunc_4948(&uLocal_81, 0, 0);
			GlobalFunc_4935();
		}
		if ((((iLocal_466 == 0 && func_385(1)) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID())) && func_552(1.5f, -1.5f, -50f, -10f)) && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_BACK", 7, 0, 0, 0))
		{
			iLocal_466 = 1;
			func_468("EXTREME_02_DRIVE_TO_PLANE", 0);
			func_468("EXTREME_02_DRIVE_UP_RAMP", 1);
		}
		if (iLocal_521 == 0 && func_552(2f, -2f, -30f, -10f))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_ENTER");
			iLocal_521 = 1;
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_208) > 50)
		{
			iLocal_208 = MISC::GET_GAME_TIMER();
			if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID())) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
			{
				if (func_552(3.5f, 1.6f, -40f, -5.75f) || func_552(-1.6f, -3.5f, -40f, -5.75f))
				{
					GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "GENERIC_CURSE_HIGH", 17);
				}
			}
		}
	}
}




void func_572()//Position - 0x5C294
{
	func_548(&iLocal_216, iLocal_209[0], Local_217, 58.77041f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_209[0]);
	func_547(iLocal_216);
	PED::SET_PED_MAX_HEALTH(iLocal_216, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_216, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_216, 1);
	TASK::TASK_STAND_STILL(iLocal_216, -1);
	PED::SET_PED_KEEP_TASK(iLocal_216, 1);
	if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_216, joaat("weapon_smg"), 0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_216, joaat("weapon_smg"), 30, 1, 1);
	}
}

void func_573()//Position - 0x5C301
{
	struct<3> Var0;
	
	Var0 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(503, "Ext2_CargoTakeOff"), 0f) };
	func_470(&iLocal_225, iLocal_179[1], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(503, "Ext2_CargoTakeOff"), 0f), Var0.f_2, -1, 0, -1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_179[1]);
	if (GlobalFunc_115(iLocal_225))
	{
		func_551(iLocal_225, &(uLocal_220[0]), iLocal_209[2], -1);
		if (GlobalFunc_115(uLocal_220[0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_220[0], 1);
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_225, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_225, 0);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_225, 0);
		VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_225, 0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_225, 1, 1, 1, 1, 1, 0, 0, 0);
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_225, 2, 0, 0);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_225, 10000);
		VEHICLE::CONTROL_LANDING_GEAR(iLocal_225, 2);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_225, 503, "Ext2_CargoTakeOff", 1);
		VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_225);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_225, 1, 1);
	}
	func_470(&iLocal_206, iLocal_179[2], VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(502, "Ext2_AirportVeh"), 0f), 161.5693f, 0, 0f, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_179[2]);
	if (GlobalFunc_115(iLocal_206))
	{
		func_551(iLocal_206, &(uLocal_220[1]), iLocal_209[2], -1);
		if (GlobalFunc_115(uLocal_220[1]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_220[1], 1);
		}
		VEHICLE::SET_VEHICLE_LIVERY(iLocal_206, 0);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_206, 5000);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_206, 0);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_206, 502, "Ext2_AirportVeh", 1);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_206, 1, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_209[2]);
}

void func_574()//Position - 0x5C46E
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_508))
	{
		func_470(&iLocal_508, iLocal_179[4], Local_509, 147.61f, 2, 0f, -1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_508);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_179[4]);
	if (GlobalFunc_115(iLocal_508))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_508, 2);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_508, 0);
	}
}

void func_575()//Position - 0x5C4C5
{
	struct<3> Var0;
	struct<3> Var3;
	
	func_614();
	if (GlobalFunc_115(uLocal_185[1]))
	{
		VEHICLE::SET_FORCE_HD_VEHICLE(uLocal_185[1], 1);
	}
	switch (iLocal_156)
	{
		case 0:
			func_308();
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (((CAM::IS_SCREEN_FADED_IN() && !GlobalFunc_199()) && GlobalFunc_115(Local_93.f_28[0])) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -954.5357f, -2760.553f, 11.91636f, -947.6847f, -2749.719f, 15.63161f, 26f, 0, 1, 0))
				{
					CUTSCENE::REMOVE_CUTSCENE();
					GlobalFunc_8955(0);
					CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("es_2_rcm_concat", 6, 8);
					iLocal_173 = 0;
					CAM::SET_GAMEPLAY_ENTITY_HINT(Local_93.f_28[0], 0f, 0f, 0.5f, 1, -1, 3000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.45f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.9f);
					CAM::SET_GAMEPLAY_HINT_FOV(30f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_171);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_93.f_28[0], 1) > 6f)
					{
						TASK::TASK_GO_TO_ENTITY(0, Local_93.f_28[0], 20000, 6f, 1f, 1073741824, 0);
					}
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_93.f_28[0], 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_171);
					TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_171);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_171);
					iLocal_175 = MISC::GET_GAME_TIMER();
				}
				else
				{
					GlobalFunc_9623("es_2_rcm_concat", 0);
					iLocal_173 = 2;
				}
			}
			if (GlobalFunc_115(Local_93.f_35[2]))
			{
				iLocal_508 = Local_93.f_35[2];
				if (GlobalFunc_115(iLocal_508))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_508, 1, 1);
					GlobalFunc_5921(iLocal_508, Local_509, 147.61f, 0, 1);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_508);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_508, 1);
				}
			}
			iLocal_174 = 0;
			break;
		
		case 1:
			if (iLocal_173 == 0 || iLocal_173 == 1)
			{
				if (((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), 242628503)) && GlobalFunc_115(Local_93.f_28[0])) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_93.f_28[0], 1) < 5f)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_93.f_28[0], 0);
				}
			}
			switch (iLocal_173)
			{
				case 0:
					if (GlobalFunc_115(Local_93.f_28[0]))
					{
						STREAMING::REQUEST_ANIM_DICT("rcmextreme2");
						if (STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme2"))
						{
							GlobalFunc_173(&uLocal_292, 0, Local_93.f_28[0], "DOM", 0, 1);
							GlobalFunc_173(&uLocal_292, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							if (!GlobalFunc_111() && GlobalFunc_10618(&uLocal_292, "EXT2AU", "EXT2_INT_LI", 8, 0, 0, 0))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_93.f_28[0], 0);
								TASK::TASK_PLAY_ANIM(Local_93.f_28[0], "rcmextreme2", "leadin", 8f, -8f, -1, 2050, 0, 0, 0, 0);
								TASK::TASK_LOOK_AT_ENTITY(Local_93.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 48, 2);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_93.f_28[0], -1, 0, 2);
								PED::PLAY_FACIAL_ANIM(Local_93.f_28[0], "leadin_facial", "rcmextreme2");
								STREAMING::REQUEST_MODEL(iLocal_179[0]);
								VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Ext2_DomIntoAirport");
								iLocal_173++;
							}
						}
					}
					break;
				
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_175) > 3000)
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_200(&uLocal_292, 0);
							iLocal_173++;
						}
					}
					break;
				
				case 2:
					STREAMING::REQUEST_MODEL(iLocal_179[0]);
					VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Ext2_DomIntoAirport");
					if ((GlobalFunc_8034(1, 1093140480, 0) && STREAMING::HAS_MODEL_LOADED(iLocal_179[0])) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Ext2_DomIntoAirport"))
					{
						if (GlobalFunc_115(Local_93.f_28[0]))
						{
							iLocal_176 = Local_93.f_28[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_176, 1, 1);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_176, "Dom", 0, iLocal_209[1], 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_176, "Dom", 2, iLocal_209[1], 0);
						}
						if (GlobalFunc_115(Local_93.f_35[0]))
						{
							uLocal_185[0] = Local_93.f_35[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_185[0], 1, 1);
						}
						else
						{
							func_607(0);
						}
						if (GlobalFunc_115(uLocal_185[0]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_185[0], "Franklin_Quad", 0, iLocal_209[0], 0);
						}
						if (GlobalFunc_115(Local_93.f_35[1]))
						{
							uLocal_185[1] = Local_93.f_35[1];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_185[1], 1, 1);
						}
						else
						{
							func_607(1);
						}
						if (GlobalFunc_115(uLocal_185[1]))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_185[1], "DOM_Quad", 0, iLocal_209[0], 0);
						}
						if (GlobalFunc_115(iLocal_508))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_508, "DOM_Flatbed_truck", 0, iLocal_179[4], 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_508, "DOM_Flatbed_truck", 2, iLocal_179[4], 0);
						}
						GlobalFunc_9161();
						CUTSCENE::START_CUTSCENE(0);
						if (GlobalFunc_115(uLocal_185[0]))
						{
							CUTSCENE::_0x7F96F23FA9B73327(ENTITY::GET_ENTITY_MODEL(uLocal_185[0]));
						}
						RECORDING::_0x48621C9FCA3EBD28(1);
						iLocal_173++;
					}
					break;
				
				case 3:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(0);
						}
						GlobalFunc_9628(-954.7742f, -2761.567f, 11.94494f, -947.8115f, -2750.971f, 15.67409f, 9f, Local_165, 273.2345f, 1, 1, 1, 0, 0);
						GlobalFunc_9628(-945.4674f, -2754.302f, 11.87028f, -989.5966f, -2835.255f, 15.96479f, 7f, Local_165, 273.2345f, 1, 1, 1, 0, 0);
						GlobalFunc_10709(Local_165, 273.2345f, 0, 145);
						func_403(-954.19f, -2760.05f, 14.64f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						GlobalFunc_79(500, 0);
						GlobalFunc_5921(uLocal_185[0], Local_195[0 /*3*/], fLocal_202[0], 0, 1);
						GlobalFunc_5921(uLocal_185[1], Local_195[1 /*3*/], fLocal_202[1], 0, 1);
						func_406(1, 0);
						iLocal_173++;
					}
					break;
				
				case 4:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_176) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dom", 0)))
						{
							iLocal_176 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dom", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_176, 1, 1);
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_508) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("DOM_Flatbed_truck", 0)))
						{
							iLocal_508 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("DOM_Flatbed_truck", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_508, 1, 1);
						}
						if ((GlobalFunc_115(iLocal_176) && GlobalFunc_115(uLocal_185[1])) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dom", 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_176, uLocal_185[1], -1);
							if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_185[1], 500, "Ext2_DomIntoAirport", 1);
								VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_185[1]);
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_185[1], 1000f);
							}
							else
							{
								Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(500, "Ext2_DomIntoAirport"), 1000f) };
								Var3 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(500, "Ext2_DomIntoAirport"), 1000f) };
								GlobalFunc_5921(uLocal_185[1], Var0, Var3.f_2, 0, 1);
							}
							VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_185[1], 1, 1);
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uLocal_185[1]);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_176, 0, 0);
						}
						if (GlobalFunc_115(uLocal_185[0]))
						{
							if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], 0))
								{
									PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], -1);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
								}
							}
							if ((!CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin_Quad", 0) && GlobalFunc_115(uLocal_185[0])) && ENTITY::IS_ENTITY_VISIBLE(uLocal_185[0]))
							{
								VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(uLocal_185[0], 1, 0, 1);
							}
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							iLocal_174 = 1;
						}
					}
					else
					{
						if (iLocal_174 == 1)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						}
						func_389(1, 1, 1, 1);
						if (GlobalFunc_115(iLocal_508))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_508, 0);
						}
						func_577();
						iLocal_156 = 2;
					}
					break;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 3);
			func_299();
			GlobalFunc_4923(&Local_93, 0, 1);
			break;
	}
}


void func_577()//Position - 0x5CDCA
{
	int iVar0;
	
	func_406(1, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_607(iVar0);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_179[0]);
	if (!GlobalFunc_188() && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), Local_213, 331.4214f, 0, 1);
		}
		if (GlobalFunc_115(uLocal_185[0]) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], 0))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_185[0], -1);
		}
	}
	func_468("EXTREME_02_DRIVE_TO_PLANE", 1);
	func_541(1, 1);
	GlobalFunc_173(&uLocal_292, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
}






























void func_607(int iParam0)//Position - 0x5FD47
{
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_185[iParam0]))
	{
		func_470(&(uLocal_185[iParam0]), iLocal_179[0], Local_195[iParam0 /*3*/], fLocal_202[iParam0], -1, 0f, iParam0);
	}
	func_549(iParam0);
}







void func_614()//Position - 0x60082
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (GlobalFunc_115(Local_93.f_28[0]))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dom", Local_93.f_28[0], 0);
		}
		else if (GlobalFunc_115(iLocal_176))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dom", iLocal_176, 0);
		}
	}
}

void func_615()//Position - 0x600C8
{
	if (iLocal_154 < (10 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_176))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_176))
			{
				func_416(1);
			}
			else
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_416(9);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_176, PLAYER::PLAYER_PED_ID(), 1))
				{
					if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_176, 0, 2))
					{
						func_416(5);
					}
				}
				else if (func_616(iLocal_176, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					func_416(9);
				}
				else if (GlobalFunc_115(uLocal_185[1]))
				{
					if (iLocal_154 == 2 && !PED::IS_PED_IN_VEHICLE(iLocal_176, uLocal_185[1], 0))
					{
						func_416(9);
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_185[1], PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(uLocal_185[1], 0, 2))
					{
						func_416(6);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_216))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_216))
			{
				func_416(7);
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_216, PLAYER::PLAYER_PED_ID(), 1) && WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_216, 0, 2))
			{
				func_416(7);
			}
		}
		if ((iLocal_205 == 1 && ENTITY::DOES_ENTITY_EXIST(uLocal_185[0])) && ENTITY::IS_ENTITY_DEAD(uLocal_185[0]))
		{
			func_416(2);
		}
	}
}

int func_616(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x601FA
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8324(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return GlobalFunc_171(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_617(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_617(int iParam0, float fParam1)//Position - 0x602B5
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
				if (func_618(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_618(int iParam0, float fParam1)//Position - 0x6032B
{
	return func_619(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_619(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x60343
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_626(iParam0, iParam1);
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
		iVar4 = func_622();
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



int func_622()//Position - 0x605F5
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




int func_626(int iParam0, int iParam1)//Position - 0x6070C
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








void func_634(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x60B2C
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
















void func_650(int iParam0)//Position - 0x61566
{
	func_702(1, 1);
	iLocal_173 = -1;
	iLocal_162 = 1;
	if (!GlobalFunc_188())
	{
		GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, 0, 1);
	}
	func_29(0);
	func_696(1, 0);
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_AREA_OF_OBJECTS(Local_509, 100f, 0);
			iLocal_155 = 1;
			break;
		
		case 1:
			MISC::CLEAR_AREA_OF_OBJECTS(Local_509, 100f, 0);
			func_406(1, 1);
			func_577();
			if (GlobalFunc_115(uLocal_185[1]))
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_185[1], 500, "Ext2_DomIntoAirport", 1);
				VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_185[1]);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_185[1], 1000f);
			}
			GlobalFunc_10627(&iLocal_514, Local_165, 273.2345f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
			func_574();
			iLocal_155 = 2;
			break;
		
		case 2:
			func_540();
			func_468("EXTREME_02_INSIDE_PLANE", 1);
			iLocal_155 = 4;
			break;
		
		case 3:
			func_541(0, 0);
			if (!GlobalFunc_188())
			{
				GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), Local_168, 288.2311f, 0, 1);
			}
			func_29(1);
			func_469();
			iLocal_155 = 7;
			break;
		
		case 4:
			if (!GlobalFunc_188())
			{
				GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), Local_168, 288.2311f, 0, 1);
			}
			iLocal_155 = 8;
			break;
	}
	GlobalFunc_173(&uLocal_292, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	if (!GlobalFunc_188())
	{
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	if (iParam0 == 1)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_RESTART1");
	}
	else if (iParam0 == 2)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_RESTART2");
	}
	if (iParam0 == 1 || iParam0 == 2)
	{
		GlobalFunc_4967(uLocal_185[0], -1, 1);
		SYSTEM::WAIT(500);
	}
	else
	{
		GlobalFunc_4967(0, -1, 1);
	}
	if (iParam0 == 4)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		GlobalFunc_79(500, 1);
	}
	if (iParam0 == 0 || iParam0 == 3)
	{
		func_651(1, 0, 1);
	}
	else if (iParam0 == 2)
	{
		func_651(1, 1, 0);
		GlobalFunc_11271(PLAYER::PLAYER_PED_ID(), 8, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	else
	{
		func_651(1, 1, 1);
	}
	iLocal_156 = 2;
}

void func_651(int iParam0, int iParam1, int iParam2)//Position - 0x617BA
{
	func_389(0, 0, iParam2, 1);
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













































void func_696(int iParam0, int iParam1)//Position - 0x6632A
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_4956();
	GlobalFunc_4948(&uLocal_81, 0, 0);
	AUDIO::STOP_SOUND(uLocal_495);
	AUDIO::STOP_SOUND(uLocal_498);
	func_468("EXTREME_02_DRIVE_TO_PLANE", 0);
	func_468("EXTREME_02_FOCUS_ON_PLANE", 0);
	func_468("EXTREME_02_DRIVE_UP_RAMP", 0);
	func_468("EXTREME_02_PLANE_TAKEOFF_CUTSCENE", 0);
	func_468("EXTREME_02_INSIDE_PLANE", 0);
	func_468("EXTREME_02_SKYDIVE", 0);
	func_468("EXTREME_02_OPEN_PARACHUTE", 0);
	AUDIO::STOP_STREAM();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_738(iLocal_225);
	func_738(iLocal_226);
	func_738(iLocal_206);
	func_738(uLocal_185[1]);
	VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Ext2_DomIntoAirport");
	VEHICLE::REMOVE_VEHICLE_RECORDING(502, "Ext2_AirportVeh");
	VEHICLE::REMOVE_VEHICLE_RECORDING(503, "Ext2_CargoTakeOff");
	VEHICLE::REMOVE_VEHICLE_RECORDING(600, "Ext2_CargoFlight");
	STREAMING::REMOVE_ANIM_DICT("rcmextreme2atv");
	STREAMING::REMOVE_ANIM_DICT("rcmjosh1@impatient");
	func_542(PLAYER::PLAYER_PED_ID(), 0);
	func_542(iLocal_176, 0);
	func_473(0);
	func_306();
	func_700(iParam0);
	func_699(iParam0);
	func_698();
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_492))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_492, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_491))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_491, 0);
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_493))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_493, 0);
	}
	STREAMING::REMOVE_PTFX_ASSET();
	GlobalFunc_130(&iLocal_497);
	VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_179[0]);
	if (CAM::DOES_CAM_EXIST(uLocal_172))
	{
		CAM::DESTROY_CAM(uLocal_172, 0);
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 0);
		func_275(PLAYER::PLAYER_PED_ID(), 14, 158);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("EXTREME2_STOP");
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_547))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_547);
	}
	GlobalFunc_9251(&Local_93, 0, 0, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	GlobalFunc_2447(17, 0);
	if (iParam1 == 1)
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		}
		GlobalFunc_200(&uLocal_292, 1);
		GlobalFunc_200(&uLocal_292, 3);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("LSA_Planes") && !TASK::IS_SCENARIO_GROUP_ENABLED("LSA_Planes"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("LSA_Planes", 1);
		}
		GlobalFunc_2434(2, 0);
		PED::SET_CREATE_RANDOM_COPS(1);
	}
}


void func_698()//Position - 0x66568
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_179[iVar0]);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_179[iVar0], 0);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_209[iVar0]);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_496);
}

void func_699(int iParam0)//Position - 0x665C0
{
	if (GlobalFunc_115(iLocal_225))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_225, 0);
	}
	if (GlobalFunc_115(uLocal_185[1]))
	{
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_185[1], 0);
	}
	if (iParam0 == 1)
	{
		GlobalFunc_6692(&(uLocal_185[0]));
		GlobalFunc_6692(&(uLocal_185[1]));
		GlobalFunc_6692(&iLocal_206);
		GlobalFunc_6692(&iLocal_502);
		GlobalFunc_6692(&iLocal_225);
		GlobalFunc_6692(&iLocal_226);
		GlobalFunc_6692(&iLocal_508);
		GlobalFunc_6692(&iLocal_514);
	}
	else
	{
		GlobalFunc_190(&(uLocal_185[0]));
		GlobalFunc_190(&(uLocal_185[1]));
		GlobalFunc_190(&iLocal_206);
		GlobalFunc_190(&iLocal_502);
		GlobalFunc_190(&iLocal_225);
		GlobalFunc_190(&iLocal_226);
		GlobalFunc_190(&iLocal_508);
		GlobalFunc_190(&iLocal_514);
	}
}

void func_700(int iParam0)//Position - 0x66669
{
	if (GlobalFunc_115(iLocal_176))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_176, 0);
	}
	if (iParam0 == 1)
	{
		GlobalFunc_69(&iLocal_216);
		GlobalFunc_69(&iLocal_176);
		GlobalFunc_69(&(uLocal_220[0]));
		GlobalFunc_69(&(uLocal_220[1]));
	}
	else
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			func_701();
		}
		else
		{
			func_303();
		}
		GlobalFunc_2297(&iLocal_216, 1, 0, 1);
		GlobalFunc_2297(&iLocal_176, 1, 0, 1);
		GlobalFunc_2297(&(uLocal_220[0]), 1, 0, 1);
		GlobalFunc_2297(&(uLocal_220[1]), 1, 0, 1);
	}
}

void func_701()//Position - 0x666E8
{
	if ((((((GlobalFunc_115(iLocal_176) && !GlobalFunc_6964(iLocal_176, -1146898486)) && !GlobalFunc_6964(iLocal_176, 1805844857)) && !GlobalFunc_6964(iLocal_176, 242628503)) && !GlobalFunc_6964(iLocal_176, 1805844857)) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_176, 0)) && PED::GET_PED_PARACHUTE_STATE(iLocal_176) == -1)
	{
		PED::SET_PED_KEEP_TASK(iLocal_176, 1);
		TASK::TASK_WANDER_STANDARD(iLocal_176, 1193033728, 0);
	}
}

void func_702(bool bParam0, bool bParam1)//Position - 0x6676A
{
	if (bParam0)
	{
		func_703(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_403(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_703(bool bParam0, int iParam1, int iParam2)//Position - 0x6679D
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_389(iParam1, iParam2, 1, 1);
		}
	}
}












void func_715()//Position - 0x66A2C
{
	iLocal_157 = 0;
	HUD::REQUEST_ADDITIONAL_TEXT("EXT2", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	PED::SET_CREATE_RANDOM_COPS(0);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
	}
	iLocal_179[0] = joaat("blazer");
	iLocal_179[1] = joaat("cargoplane");
	iLocal_179[2] = joaat("jet");
	iLocal_179[3] = joaat("seashark");
	iLocal_179[4] = joaat("flatbed");
	iLocal_209[0] = joaat("s_m_m_security_01");
	iLocal_209[1] = GlobalFunc_4946(52);
	iLocal_209[2] = joaat("s_m_m_pilot_01");
	iLocal_496 = joaat("prop_ld_test_01");
	Local_195[0 /*3*/] = { -950.8f, -2751.98f, 13.21f };
	fLocal_202[0] = 199.05f;
	Local_195[1 /*3*/] = { -950.192f, -2755.96f, 13.3639f };
	fLocal_202[1] = -178.182f;
	Local_188[0 /*3*/] = { 444.8519f, 3921.221f, 2398.1f };
	Local_188[1 /*3*/] = { 443.3347f, 3923.115f, 2398.1f };
	GlobalFunc_2427(2, 1);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("LSA_Planes") && TASK::IS_SCENARIO_GROUP_ENABLED("LSA_Planes"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("LSA_Planes", 0);
	}
	uLocal_164 = GlobalFunc_5101(1);
	Local_240[0 /*3*/] = { 12.75f, 6f, -7f };
	Local_240[1 /*3*/] = { 22.75f, -4f, -7f };
	Local_240[2 /*3*/] = { -12.75f, 6f, -7f };
	Local_240[3 /*3*/] = { -22.75f, -4f, -7f };
	Local_253[0 /*3*/] = { 12.75f, 15f, -7f };
	Local_253[1 /*3*/] = { 22.75f, 5f, -7f };
	Local_253[2 /*3*/] = { -12.75f, 15f, -7f };
	Local_253[3 /*3*/] = { -22.75f, 5f, -7f };
	Local_266[0 /*3*/] = { 15f, -8f, -4f };
	Local_266[1 /*3*/] = { 29f, -17f, -4f };
	Local_266[2 /*3*/] = { -15f, -8f, -4f };
	Local_266[3 /*3*/] = { -29f, -17f, -4f };
	Local_279[0 /*3*/] = { 15f, 8f, -4f };
	Local_279[1 /*3*/] = { 29f, -1f, -4f };
	Local_279[2 /*3*/] = { -15f, 8f, -4f };
	Local_279[3 /*3*/] = { -29f, -1f, -4f };
	VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_179[0], 3);
	func_542(PLAYER::PLAYER_PED_ID(), 1);
}





void func_720()//Position - 0x66F4B
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
		func_696(0, 1);
	}
	GlobalFunc_9251(&Local_93, 0, 0, 0);
	MISC::SET_BIT(&(Global_SAVE_DATA.SEA_RACE_SAVED_STRUCT.iSeaRaceLeaveArea), 2);
	SCRIPT::TERMINATE_THIS_THREAD();
}


















void func_738(int iParam0)//Position - 0x67603
{
	if (GlobalFunc_115(iParam0) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
	}
}






