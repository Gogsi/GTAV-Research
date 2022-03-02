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
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
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
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	struct<3> Local_53 = { 0, 0, 0 } ;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<2> Local_77 = { 0, 0 } ;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	char cLocal_81[16] = "";
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	char cLocal_85[16] = "";
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	char* sLocal_89 = NULL;
	char* sLocal_90 = NULL;
	char[] cLocal_91[8] = 0;
	char* sLocal_92 = NULL;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	struct<18> Local_96 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<15> Local_114 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	struct<7> Local_132 = { 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<18> Local_150 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_168 = { 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<18> Local_186 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_204 = 0;
	struct<8> Local_205 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_213 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_221 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_229 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_237 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_245 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_253 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_261 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_269 = { 0, 0, 0 } ;
	var uLocal_272 = 0;
	struct<14> Local_273 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 3;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	struct<38> Local_298 = { 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_336 = 16;
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
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	var uLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	int iLocal_519 = 0;
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	bool bLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526 = 0;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	int iLocal_532 = 0;
	int iLocal_533 = 0;
	int iLocal_534 = 0;
	int iLocal_535 = 0;
	int iLocal_536 = 0;
	int iLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	float fLocal_542 = 0f;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	int iLocal_551 = 0;
	int iLocal_552 = 0;
	int iLocal_553 = 0;
	int iLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	struct<3> Local_564 = { 0, 0, 0 } ;
	float fLocal_567 = 0f;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	int iLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	float fLocal_589 = 0f;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	char* sLocal_605 = NULL;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_623 = 8;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 2;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	struct<18> Local_635[2];
	struct<18> Local_672[5];
	struct<18> Local_763[2];
	struct<18> Local_800[3];
	struct<18> Local_855[1];
	struct<18> Local_874[1];
	struct<18> Local_893[1];
	struct<18> Local_912[6];
	struct<18> Local_1021[5];
	struct<19> Local_1112[2];
	int iLocal_1151[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<4> Local_1160[8];
	int iLocal_1193 = 0;
	int iLocal_1194[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_1245[9] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char[] cLocal_1255[9][8] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_1265[12] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	char[] cLocal_1278[12][8] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_1291 = 0;
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
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	uLocal_45 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_46 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_47 = joaat("schafter2");
	iLocal_48 = joaat("s_m_m_security_01");
	iLocal_49 = joaat("prop_tyre_spike_01");
	Local_50 = { 479.88f, -1318.57f, 28.2f };
	Local_53 = { -1187.46f, -501.22f, 35.42f };
	Local_56 = { -1178.52f, -509.19f, 34.56f };
	Local_59 = { 0f, 0f, 3.24f };
	Local_62 = { 0f, -2.5f, 1f };
	Local_65 = { -1130.828f, -451.637f, 34.62f };
	Local_68 = { 1f, 0f, -128f };
	Local_71 = { 0f, -0.4f, 0.75f };
	Local_74 = { 0f, 0f, 0f };
	StringCopy(&Local_77, "CAR4_DCAR", 16);
	StringCopy(&cLocal_81, "CMN_GENGETIN", 16);
	StringCopy(&cLocal_85, "CMN_GENGETBCK", 16);
	sLocal_89 = "A_M_M_GENERICMALE_01_WHITE_MINI_01";
	sLocal_90 = "A_M_M_GENERICMALE_01_WHITE_MINI_02";
	cLocal_91 = "A_M_M_GENERICMALE_01_WHITE_MINI_03";
	sLocal_92 = "A_M_M_GENERICMALE_01_WHITE_MINI_04";
	iLocal_599 = -1;
	iLocal_600 = -1;
	iLocal_601 = -1;
	iLocal_602 = -1;
	iLocal_603 = -1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		HUD::CLEAR_HELP(1);
		HUD::CLEAR_PRINTS();
		GlobalFunc_4935();
		AUDIO::TRIGGER_MUSIC_EVENT("CAR3_MISSION_FAIL");
		GlobalFunc_10632();
		func_688();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Carsteal4_spycar");
	GlobalFunc_7934(21, 0);
	if (GlobalFunc_199())
	{
		func_678(&iLocal_93, GlobalFunc_198());
		iLocal_505 = 1;
		if (Global_84544 == 1)
		{
			iLocal_93 = func_677(iLocal_93);
		}
	}
	else
	{
		func_676();
		func_637(0, "GET TO ACTOR", 0, 0, 0, 1);
	}
	while (true)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_186))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
			{
				fLocal_542 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_186, 1);
			}
		}
		bLocal_524 = func_635(PLAYER::PLAYER_PED_ID());
		if (iLocal_506 == 1)
		{
			func_634(&iLocal_93, &uLocal_94);
			func_633(Local_50, 150f);
		}
		func_632(&Local_672);
		RECORDING::_0x208784099002BC30("M_DeepInside", 0);
		switch (iLocal_93)
		{
			case 0:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (func_598(iLocal_93, &iLocal_502, &iLocal_506, &uLocal_504, &iLocal_505))
				{
					if (func_572(&iLocal_503))
					{
						func_571();
						if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_186, 0))
						{
							iLocal_93 = 3;
						}
						else
						{
							iLocal_93 = 1;
						}
					}
				}
				break;
			
			case 1:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
				if (func_598(iLocal_93, &iLocal_502, &iLocal_506, &uLocal_504, &iLocal_505))
				{
					if (func_569(&iLocal_503))
					{
						func_571();
						iLocal_93 = 2;
					}
				}
				break;
			
			case 2:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.1f);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (func_598(iLocal_93, &iLocal_502, &iLocal_506, &uLocal_504, &iLocal_505))
				{
					if (func_564(&iLocal_503))
					{
						func_571();
						iLocal_93 = 3;
					}
				}
				break;
			
			case 3:
				if (iLocal_558 == 0)
				{
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.4f);
				}
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (func_598(iLocal_93, &iLocal_502, &iLocal_506, &uLocal_504, &iLocal_505))
				{
					if (func_484(&iLocal_503))
					{
						func_571();
						iLocal_93 = 4;
					}
				}
				break;
			
			case 4:
				if (func_598(iLocal_93, &iLocal_502, &iLocal_506, &uLocal_504, &iLocal_505))
				{
					if (func_319(&iLocal_503))
					{
						func_571();
						iLocal_93 = 5;
					}
				}
				break;
			
			case 5:
				if (func_598(iLocal_93, &iLocal_502, &iLocal_506, &uLocal_504, &iLocal_505))
				{
					if (func_305(&iLocal_503))
					{
						func_571();
						func_303();
						GlobalFunc_10708(80, 1);
						iLocal_93 = 7;
					}
				}
				break;
			
			case 7:
				GlobalFunc_5103(0, 0);
				func_688();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			
			case 8:
				func_265(&uLocal_94);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_4935();
				AUDIO::TRIGGER_MUSIC_EVENT("CAR3_MISSION_FAIL");
				while (!GlobalFunc_145())
				{
					SYSTEM::WAIT(0);
				}
				if (bLocal_524 == 1)
				{
					GlobalFunc_5129(-1021.875f, -475.0034f, 36.0445f, 82.2636f);
				}
				if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 12, 1))
				{
					func_3(0);
				}
				func_688();
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 127);
		if (ENTITY::DOES_ENTITY_EXIST(Local_186))
		{
			GlobalFunc_504(Local_186, 120);
			GlobalFunc_503(Local_186, 121);
		}
		SYSTEM::WAIT(0);
	}
}



void func_3(int iParam0)//Position - 0x4DD
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 12, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			GlobalFunc_5128(1);
			PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
			PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
		}
		else if (iParam0 == 0)
		{
			if (!GlobalFunc_2(0))
			{
				func_6();
				GlobalFunc_5100(1, iLocal_526);
			}
			else if (GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 12, 1))
			{
				GlobalFunc_11267(PLAYER::PLAYER_PED_ID(), 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
}



void func_6()//Position - 0x599
{
	GlobalFunc_2000(&Global_91351);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_7(PLAYER::PLAYER_PED_ID(), &(Global_89752[GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) /*65*/]), 0);
	}
}

void func_7(int iParam0, var uParam1, bool bParam2)//Position - 0x5CC
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
			if (GlobalFunc_11030(iParam0, iVar1, &iVar2, 0))
			{
				GlobalFunc_11267(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (GlobalFunc_11026(iParam0, iVar1, &iVar2))
			{
				GlobalFunc_11267(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_4915(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_12(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_4915(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_12(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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





int func_12(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x8A3
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
		Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_10957(iVar5, iParam1, iParam2, 1);
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
					Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 10, 0) };
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
						GlobalFunc_10957(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, uVar15[iVar0]) };
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
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar31[iVar1]) };
								GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
								if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
								{
									GlobalFunc_10957(iVar5, iVar0, uVar15[iVar0], 1);
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
								GlobalFunc_10957(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, GlobalFunc_11087(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_12(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			GlobalFunc_10637(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
			{
				GlobalFunc_10957(iVar5, 14, uVar58[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_68105 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = GlobalFunc_11068(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_12(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar3 = GlobalFunc_11068(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_577(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 1))
		{
			GlobalFunc_10957(iVar5, iParam1, iParam2, 1);
		}
		if (iParam5 == 0)
		{
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_12(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						iVar73 = GlobalFunc_11068(iParam0, iVar5, 11, iVar70, 3, 0);
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
							func_12(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
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
								func_12(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
								iVar9 = -99;
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									func_12(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
								}
								Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
							}
						}
					}
					else
					{
						Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iVar70) };
						iVar79 = Global_68106[1 /*14*/].f_3;
						Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iParam2) };
						iVar80 = Global_68106[1 /*14*/].f_3;
						if (iVar79 != iVar80)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 8, iVar71) };
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
										Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 11, iVar82) };
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
								func_12(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_12(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iParam1, iParam2) };
						}
					}
				}
				else
				{
					GlobalFunc_10622(iVar5, iParam2);
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			GlobalFunc_10637(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, GlobalFunc_11087(iParam0, 8, -1), iParam2);
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
				GlobalFunc_11266(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			GlobalFunc_10637(iParam0, iParam1, iParam2, iParam6, 0);
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
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar87, iVar88, iVar89, 0f, uVar90, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar87, iVar88, iVar89, 0f, fVar90, 0f, false);
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
				GlobalFunc_9000(iParam0, Global_68104);
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
						iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_12(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						if (!GlobalFunc_10955(iParam0, 9, iVar97))
						{
							func_12(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_12(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_12(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = GlobalFunc_11087(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = GlobalFunc_11087(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_12(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_12(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_12(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = GlobalFunc_11068(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_12(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (GlobalFunc_11182(iParam0, &uVar4))
		{
			func_12(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_12(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_12(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_12(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_12(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}





























































































































































































































































void func_265(var uParam0)//Position - 0x471E2
{
	switch (*uParam0)
	{
		case 1:
			GlobalFunc_10835("CMN_GENDEST");
			break;
		
		case 2:
			GlobalFunc_10835("CAR4_CUND");
			break;
		
		case 3:
			GlobalFunc_10835("CAR4_CLEFT");
			break;
		
		case 6:
			GlobalFunc_10835("CAR4_GGAR");
			break;
		
		case 7:
			GlobalFunc_10835("CAR4_SGAR");
			break;
		
		case 5:
			GlobalFunc_10835("CAR4_CGAR");
			break;
		
		case 8:
			GlobalFunc_10835("CAR4_DDEAD");
			break;
		
		case 9:
			GlobalFunc_10835("CAR4_DATTA");
			break;
		
		case 0:
		case 10:
			GlobalFunc_10835("CAR4_FAIL");
			break;
	}
}






































void func_303()//Position - 0x4C56A
{
	GlobalFunc_583(24, PLAYER::PLAYER_PED_ID(), 0);
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[24 /*31*/]))
	{
		Global_34036[24 /*31*/].f_22 = 0f;
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[24 /*31*/], Global_34036[24 /*31*/].f_22, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[24 /*31*/], 4, 0, 1);
	}
}


int func_305(int iParam0)//Position - 0x4C675
{
	switch (*iParam0)
	{
		case 0:
			if (func_316("car_4_ext"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
				{
					if (VEHICLE::IS_VEHICLE_DOOR_DAMAGED(Local_186, 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(Local_186, 0, 0, 0f);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_186, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_186, "movie_car", 1, 0, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_114))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_114))
					{
						PED::SET_FORCE_FOOTSTEP_UPDATE(Local_114, 0);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_114, "Devin", 1, 0, 0);
					}
				}
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 4, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 6, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 8, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 9, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 10, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 11, 0, 0, 0);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_3_GO_TO_GARAGE");
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sc1_06_gate_l"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sc1_06_gate_r"));
				func_307(&Local_298, 1);
				MISC::CLEAR_AREA_OF_OBJECTS(484.687f, -1315.512f, 28.202f, 4.5f, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_269, 100f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_269, 100f, 0, 0, 0, 0, 0);
				FIRE::STOP_FIRE_IN_RANGE(Local_269, 20f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_269, 20f);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_269, 20f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_269, 20f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_303();
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (iLocal_510 == 1)
				{
					if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-449343164))
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-449343164, -1f, 0, 0);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-449343164, 5, 0, 1);
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
					GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), 493.4449f, -1313.074f, 28.2614f, 300.9095f, 0, 1, 0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				GlobalFunc_8316(0, 1, 1, 0);
				RECORDING::_0x81CBAE94390F9F89();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				return 1;
			}
			else if (iLocal_510 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_510 = 1;
				}
			}
			break;
	}
	return 0;
}


void func_307(var uParam0, int iParam1)//Position - 0x4C9EB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6[iVar0 /*8*/]))
		{
			if (iParam1 == 1)
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_6[iVar0 /*8*/]));
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam0->f_6[iVar0 /*8*/]));
			}
		}
		iVar0++;
	}
}









int func_316(char* sParam0)//Position - 0x4CC62
{
	if (GlobalFunc_550(sParam0))
	{
		return 1;
	}
	else
	{
		if (GlobalFunc_109())
		{
			if (!CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sParam0))
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
	}
	return 0;
}



int func_319(int iParam0)//Position - 0x4CCE0
{
	bool bVar0;
	
	MISC::SET_BIT(&(Local_273.f_13), 20);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	func_437(&iLocal_568);
	func_428(&Local_150, PLAYER::PLAYER_PED_ID(), Local_186);
	func_407(&(Local_912[0 /*18*/]), PLAYER::PLAYER_PED_ID());
	func_402(&(Local_912[1 /*18*/]), PLAYER::PLAYER_PED_ID());
	if (HUD::DOES_BLIP_EXIST(Local_273.f_5))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_GO_TO_GARAGE"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_3_GO_TO_GARAGE");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_114) || !iLocal_609)
	{
		func_303();
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[24 /*31*/]))
	{
		AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_34036[24 /*31*/], 1);
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_50, 1) < 50f)
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(Local_50, 5.25f, 4);
			iLocal_609 = 0;
		}
		else if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			iLocal_609 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_50, 1) > 75f)
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
			iLocal_609 = 0;
		}
	}
	if (GlobalFunc_331() || GlobalFunc_2233())
	{
		if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("car_4_ext") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_50, 1) < 15f)
	{
		CUTSCENE::REQUEST_CUTSCENE("car_4_ext", 8);
		STREAMING::REQUEST_MODEL(joaat("prop_sc1_06_gate_l"));
		STREAMING::REQUEST_MODEL(joaat("prop_sc1_06_gate_r"));
		STREAMING::REMOVE_ANIM_DICT("move_m@generic");
		STREAMING::REMOVE_ANIM_DICT("move_m@intimidation@cop@unarmed");
		STREAMING::REMOVE_ANIM_DICT("reaction@intimidation@cop@unarmed");
		func_399(&Local_205, 0, 1);
		func_398(&Local_672, 0, 0, 1);
		func_398(&Local_800, 0, 0, 1);
		func_398(&Local_855, 0, 0, 1);
		func_398(&Local_874, 0, 0, 1);
		func_398(&Local_893, 0, 0, 1);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_114))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_114))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Devin", Local_114, 0);
				}
			}
			else
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 3, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 4, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 5, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 6, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 7, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 8, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 9, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 10, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Devin", 11, 0, 0, 0);
			}
		}
		if (iLocal_597 == 0)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DELIVER"))
			{
				iLocal_597 = 1;
			}
		}
	}
	else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("car_4_ext") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::REMOVE_CUTSCENE();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sc1_06_gate_l"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_sc1_06_gate_r"));
	}
	switch (*iParam0)
	{
		case 0:
			func_396(Local_186, &Local_298);
			func_392(Local_186, &Local_298, 1);
			if (!GlobalFunc_665(45) && !GlobalFunc_889(45))
			{
				func_387(Local_186, &Local_298, "CAR_3_TYRE_BURST_CAM");
			}
			else
			{
				func_386(&Local_298);
			}
			func_385(Local_298, &Local_1112);
			func_381(Local_298, PLAYER::PLAYER_PED_ID(), Local_186, &(Local_186.f_17), &(Local_186.f_8));
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_186, 0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_186.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_186.f_1));
					}
				}
			}
			if (iLocal_527 == 1)
			{
				if (HUD::DOES_BLIP_EXIST(Local_273.f_5))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_53, 1) > 500f)
					{
						PED::CLEAR_PED_NON_CREATION_AREA();
						TASK::SET_SCENARIO_GROUP_ENABLED("MOVIE_STUDIO_SECURITY", 1);
						if (iLocal_607 != 0)
						{
							PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_607, 0);
						}
						if (iLocal_608 != 0)
						{
							PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_608, 0);
						}
						iLocal_527 = 0;
					}
				}
			}
			GlobalFunc_9197(&Local_273, Local_50, GlobalFunc_716(), 1, Local_186, &Local_77, &cLocal_81, &cLocal_85, 1, 0, 1, -1);
			if (HUD::DOES_BLIP_EXIST(Local_273.f_5))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.3f, -1316.18f, 27.7f, 477.64f, -1319.01f, 31.2f, 5f, 0, 1, 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_50, 1) < GlobalFunc_253(ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()), 1.25f, 3.5f)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 474.037f, -1316.961f, 28.107f, 481.3444f, -1311.563f, 31.20297f, 6f, 0, 1, 0))
				{
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_STOP_TRACK");
					func_307(&Local_298, 0);
					func_399(&Local_213, 1, 1);
					func_399(&Local_221, 1, 1);
					func_399(&Local_237, 1, 1);
					if (GlobalFunc_116(0))
					{
						GlobalFunc_6685(1);
						GlobalFunc_7629();
					}
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_114, -1, 2048, 2);
					iLocal_569 = 1;
					*iParam0++;
				}
			}
			break;
		
		case 1:
			GlobalFunc_7629();
			if (GlobalFunc_530(Local_186, 2.5f, 1, 0.75f, 0, 1))
			{
				GlobalFunc_7139(&Local_273, 0);
				*iParam0++;
			}
			break;
		
		case 2:
			GlobalFunc_7629();
			GlobalFunc_2520();
			bVar0 = false;
			if (ENTITY::DOES_ENTITY_EXIST(Local_114))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_114))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin") > 0.875f)
						{
							if (!GlobalFunc_111())
							{
								bVar0 = true;
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_loop_devin", 3))
					{
						if (!GlobalFunc_111())
						{
							bVar0 = true;
						}
					}
				}
			}
			if (bVar0)
			{
				func_320(&Local_96, 0, 1, 1);
				STREAMING::REMOVE_ANIM_DICT("dead");
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4leadinoutcar_4_ext");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_186, 0, 0);
				}
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				PED::SET_FORCE_FOOTSTEP_UPDATE(Local_114, 0);
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				return 1;
			}
			break;
	}
	return 0;
}

void func_320(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4D2E8
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*iParam0))
				{
					if (ENTITY::IS_ENTITY_DEAD(*iParam0))
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*iParam0))
				{
					PED::SET_PED_KEEP_TASK(*iParam0, iParam3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_1));
					}
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (PED::IS_PED_INJURED(*iParam0) || !PED::IS_PED_INJURED(*iParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*iParam0) || !ENTITY::IS_ENTITY_DEAD(*iParam0))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
				}
				PED::DELETE_PED(iParam0);
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
		}
		iParam0->f_10 = 0;
		iParam0->f_9 = 0;
		iParam0->f_12 = 0;
		iParam0->f_14 = 0;
		iParam0->f_13 = 0;
		iParam0->f_15 = 0;
		iParam0->f_16 = 0;
	}
}





























































void func_381(struct<37> Param0, var uParam37, int iParam38, int iParam39, var uParam40, var uParam41)//Position - 0x50394
{
	struct<3> Var0;
	
	if (*uParam40 == 0)
	{
		if (Param0.f_35 == 1)
		{
			if (CAM::IS_CINEMATIC_SHOT_ACTIVE(-1096069633))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Param0.f_6[Param0.f_36 /*8*/].f_1))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(Param0.f_6[Param0.f_36 /*8*/].f_1, 0) };
					if (GlobalFunc_2522(iParam38, iParam39))
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iParam38, iParam39, Var0, 8, 25f, 1074266172, 500f, 10f, 0);
						*uParam41 = 0;
						*uParam40 = 1;
					}
				}
			}
		}
	}
	else if (!CAM::IS_CINEMATIC_SHOT_ACTIVE(-1096069633))
	{
		if (*uParam41 == 0)
		{
			*uParam41 = MISC::GET_GAME_TIMER();
		}
		if (func_383(iParam39) || (*uParam41 != 0 && GlobalFunc_2521(3000, *uParam41)))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			*uParam40 = 0;
		}
	}
}


int func_383(int iParam0)//Position - 0x50483
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
		{
			iVar0 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 59) * 255f));
			iVar1 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 60) * 255f));
			if (((((((((((((iVar0 < -50 || iVar0 > 50) || (iVar1 < -50 || iVar1 > 50)) || PAD::IS_CONTROL_PRESSED(0, 68)) || PAD::IS_CONTROL_PRESSED(0, 75)) || PAD::IS_CONTROL_PRESSED(0, 86)) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 69)) || PAD::IS_CONTROL_PRESSED(0, 70)) || PAD::IS_CONTROL_PRESSED(0, 80)) || PAD::IS_CONTROL_PRESSED(0, 74)) || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 76)) || PAD::IS_CONTROL_PRESSED(0, 73))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_385(struct<38> Param0, int iParam38)//Position - 0x505CA
{
	int iVar0;
	
	if (Param0.f_35 == 1)
	{
		if (iLocal_579 != Param0.f_37)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < *iParam38)
			{
				if (Param0.f_6[Param0.f_36 /*8*/].f_1 == (*iParam38)[iVar0 /*19*/])
				{
					(iParam38[iVar0 /*19*/])->f_16 = 1;
					iLocal_580++;
				}
				iVar0++;
			}
			iLocal_579 = Param0.f_37;
		}
	}
}

void func_386(var uParam0)//Position - 0x50628
{
	uParam0->f_6[0 /*8*/].f_3 = 0;
	uParam0->f_6[1 /*8*/].f_3 = 0;
	uParam0->f_6[2 /*8*/].f_3 = 0;
}

void func_387(int iParam0, var uParam1, char* sParam2)//Position - 0x5064E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (uParam1->f_35 == 1)
			{
				if (uParam1->f_6[uParam1->f_36 /*8*/].f_3 != 0)
				{
					if (uParam1->f_33 == 0 && !CAM::IS_CINEMATIC_SHOT_ACTIVE(-1096069633))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0) && !MISC::IS_STUNT_JUMP_IN_PROGRESS())
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_6[uParam1->f_36 /*8*/].f_1, 0))
							{
								HUD::CLEAR_HELP(1);
								HUD::DISPLAY_HUD(0);
								HUD::DISPLAY_RADAR(0);
								GlobalFunc_7632(1);
								GlobalFunc_6685(1);
								PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
								PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
								CAM::CREATE_CINEMATIC_SHOT(-1096069633, 2000, 0, uParam1->f_6[uParam1->f_36 /*8*/].f_1);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
								{
									AUDIO::START_AUDIO_SCENE(sParam2);
								}
								uParam1->f_33 = 1;
							}
						}
						else
						{
							func_386(uParam1);
						}
					}
					else if ((MISC::GET_GAME_TIMER() - uParam1->f_6[uParam1->f_36 /*8*/].f_3) > 1500 || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_6[uParam1->f_36 /*8*/].f_1, 0))
					{
						CAM::STOP_CINEMATIC_SHOT(-1096069633);
						STREAMING::REMOVE_PTFX_ASSET();
						HUD::DISPLAY_HUD(1);
						HUD::DISPLAY_RADAR(1);
						GlobalFunc_7632(0);
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
						{
							AUDIO::STOP_AUDIO_SCENE(sParam2);
						}
						PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
						uParam1->f_6[uParam1->f_36 /*8*/].f_4 = { 0f, 0f, 0f };
						func_386(uParam1);
					}
				}
			}
		}
	}
}





void func_392(int iParam0, var uParam1, int iParam2)//Position - 0x508D4
{
	int iVar0;
	struct<3> Var1[3];
	var uVar11[3];
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	float fVar28;
	float fVar29;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			iVar0 = 0;
			while (iVar0 < uParam1->f_6)
			{
				if (uParam1->f_6[iVar0 /*8*/].f_4 != 0f)
				{
					if (uParam1->f_35 == 0)
					{
						if (SYSTEM::VDIST2(uParam1->f_6[iVar0 /*8*/].f_4, ENTITY::GET_ENTITY_COORDS(iParam0, 1)) > 2500f)
						{
							uParam1->f_6[iVar0 /*8*/].f_4 = { 0f, 0f, 0f };
						}
						else
						{
							uParam1->f_6[iVar0 /*8*/].f_1 = VEHICLE::GET_CLOSEST_VEHICLE(uParam1->f_6[iVar0 /*8*/].f_4, 20f, 0, 100359);
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[iVar0 /*8*/].f_1) && uParam1->f_6[iVar0 /*8*/].f_1 != iParam0)
							{
								STREAMING::REQUEST_PTFX_ASSET();
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_6[iVar0 /*8*/].f_1, 0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(uParam1->f_6[iVar0 /*8*/].f_1)))
								{
									Var15 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_6[iVar0 /*8*/].f_1, 1) };
									if (((((((SYSTEM::VDIST2(Var15, uParam1->f_6[iVar0 /*8*/].f_4) < 100f && MISC::ABSF((Var15.f_2 - uParam1->f_6[iVar0 /*8*/].f_4.f_2)) < 1.25f) && ENTITY::GET_ENTITY_SPEED(uParam1->f_6[iVar0 /*8*/].f_1) > 10f) && ENTITY::IS_ENTITY_UPRIGHT(uParam1->f_6[iVar0 /*8*/].f_1, 1119092736)) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(uParam1->f_6[iVar0 /*8*/].f_1)) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[0 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[1 /*8*/])) && ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[2 /*8*/]))
									{
										Var18 = { GlobalFunc_590(0f, 0f, ENTITY::GET_ENTITY_HEADING(uParam1->f_6[iVar0 /*8*/].f_1)) };
										Var21 = { uParam1->f_6[iVar0 /*8*/].f_4 - Var15 };
										Var21 = { Var21 / FtoV(SYSTEM::VMAG(Var21)) };
										if (GlobalFunc_168(Var18, Var21) > 0f)
										{
											uParam1->f_37++;
											uParam1->f_35 = 1;
											uParam1->f_36 = iVar0;
											uParam1->f_33 = 0;
											uParam1->f_6[iVar0 /*8*/].f_3 = MISC::GET_GAME_TIMER();
											Var1[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_6[iVar0 /*8*/].f_1, 0.8f, 6f, 0f) };
											Var1[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_6[iVar0 /*8*/].f_1, 0.5f, 7f, 0f) };
											Var1[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_6[iVar0 /*8*/].f_1, 0.9f, 8f, 0f) };
											MISC::GET_GROUND_Z_FOR_3D_COORD(Var1[0 /*3*/], &(uVar11[0]));
											MISC::GET_GROUND_Z_FOR_3D_COORD(Var1[1 /*3*/], &(uVar11[1]));
											MISC::GET_GROUND_Z_FOR_3D_COORD(Var1[2 /*3*/], &(uVar11[2]));
											ENTITY::SET_ENTITY_COORDS(uParam1->f_6[0 /*8*/], Var1[0 /*3*/], Var1[0 /*3*/].f_1, (uVar11[0] + 0.05f), 1, 0, 0, 1);
											ENTITY::SET_ENTITY_COORDS(uParam1->f_6[1 /*8*/], Var1[1 /*3*/], Var1[1 /*3*/].f_1, (uVar11[1] + 0.05f), 1, 0, 0, 1);
											ENTITY::SET_ENTITY_COORDS(uParam1->f_6[2 /*8*/], Var1[2 /*3*/], Var1[2 /*3*/].f_1, (uVar11[2] + 0.05f), 1, 0, 0, 1);
											uParam1->f_6[iVar0 /*8*/].f_4 = { Var1[1 /*3*/] };
										}
									}
								}
							}
						}
					}
					else if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam1->f_6[iVar0 /*8*/].f_1, 0))
					{
						Var24 = { ENTITY::GET_ENTITY_COORDS(uParam1->f_6[iVar0 /*8*/].f_1, 0) };
						if (uParam1->f_6[iVar0 /*8*/].f_2 == 0)
						{
							STREAMING::REQUEST_PTFX_ASSET();
							if (SYSTEM::VDIST2(Var24, uParam1->f_6[iVar0 /*8*/].f_4) < 9f)
							{
								fVar27 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam1->f_6[iVar0 /*8*/].f_1);
								fVar28 = ENTITY::GET_ENTITY_SPEED(uParam1->f_6[iVar0 /*8*/].f_1);
								fVar29 = (fVar28 / (fVar27 - 20f));
								if (fVar29 > 1f)
								{
									fVar29 = 1f;
								}
								else if (fVar29 < 0.3f)
								{
									fVar29 = 0.3f;
								}
								uParam1->f_6[iVar0 /*8*/].f_2 = (MISC::GET_GAME_TIMER() - SYSTEM::ROUND(((1f - fVar29) * 1000f)));
								VEHICLE::SET_VEHICLE_TYRE_BURST(uParam1->f_6[iVar0 /*8*/].f_1, 0, 1, 1148846080);
								VEHICLE::SET_VEHICLE_TYRE_BURST(uParam1->f_6[iVar0 /*8*/].f_1, 1, 1, 1148846080);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_STEAL_3_AGENT_TYRE_BURST", uParam1->f_6[iVar0 /*8*/].f_1, "CAR_STEAL_3_AGENT", 0, 0);
								if (STREAMING::HAS_PTFX_ASSET_LOADED())
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_tyre_spiked", uParam1->f_6[iVar0 /*8*/].f_1, 1.2f, 2f, -0.3f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal4_tyre_spiked", uParam1->f_6[iVar0 /*8*/].f_1, -1.2f, 2f, -0.3f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
								}
								if (iParam2 == 1)
								{
									if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
									{
										if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
										{
											if (func_393(ENTITY::GET_ENTITY_MODEL(uParam1->f_6[iVar0 /*8*/].f_1)))
											{
												PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 1, 0);
												PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
											}
										}
									}
								}
							}
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_6[iVar0 /*8*/].f_2) < 1000)
						{
							ENTITY::APPLY_FORCE_TO_ENTITY(uParam1->f_6[iVar0 /*8*/].f_1, 0, -25f, 0f, 0f, 0f, -2f, 0f, 0, 1, 1, 1, 0, 1);
						}
					}
				}
				iVar0++;
			}
		}
	}
}

int func_393(int iParam0)//Position - 0x50DF9
{
	if (((((((((((((((iParam0 == joaat("police") || iParam0 == joaat("policeold1")) || iParam0 == joaat("policeold2")) || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("polmav")) || iParam0 == joaat("policeb")) || iParam0 == joaat("policet")) || iParam0 == joaat("riot")) || iParam0 == joaat("sheriff")) || iParam0 == joaat("sheriff2")) || iParam0 == joaat("pranger")) || iParam0 == joaat("policet"))
	{
		return 1;
	}
	return 0;
}



void func_396(int iParam0, var uParam1)//Position - 0x50F31
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	PAD::_0x7F4724035FDCA1DD(0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0))
			{
				if (!CAM::IS_CINEMATIC_SHOT_ACTIVE(-1096069633) && !MISC::IS_STUNT_JUMP_IN_PROGRESS())
				{
					STREAMING::REQUEST_PTFX_ASSET();
					AUDIO::REQUEST_AMBIENT_AUDIO_BANK("CAR_THEFT_MOVIE_LOT", 0);
					PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
					if (PAD::IS_CONTROL_JUST_PRESSED(0, 230) && ENTITY::IS_ENTITY_UPRIGHT(iParam0, 1119092736))
					{
						if ((MISC::GET_GAME_TIMER() - uParam1->f_31) > 1600)
						{
							iVar1 = 1;
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[0 /*8*/]))
							{
								if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uParam1->f_6[0 /*8*/], 1)) < 9f)
								{
									iVar1 = 0;
								}
							}
							if (iVar1 == 1)
							{
								iVar2 = func_397(*uParam1);
								if (iVar2 == -1)
								{
									iVar2 = 0;
								}
								uParam1->f_6[iVar2 /*8*/].f_4 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -2f, 0f) };
								uParam1->f_6[iVar2 /*8*/].f_2 = 0;
								uParam1->f_6[iVar2 /*8*/].f_3 = 0;
								uParam1->f_6[iVar2 /*8*/].f_1 = 0;
								uParam1->f_36 = 0;
								uParam1->f_35 = 0;
								iVar0 = 0;
								while (iVar0 < uParam1->f_6)
								{
									if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[iVar0 /*8*/]))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam1->f_6[iVar0 /*8*/]))
										{
											OBJECT::DELETE_OBJECT(&(uParam1->f_6[iVar0 /*8*/]));
										}
										else
										{
											ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uParam1->f_6[iVar0 /*8*/]));
										}
									}
									iVar0++;
								}
								uParam1->f_31 = MISC::GET_GAME_TIMER();
							}
						}
					}
					if (uParam1->f_31 != 0)
					{
						if ((MISC::GET_GAME_TIMER() - uParam1->f_31) > 100)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[0 /*8*/]))
							{
								uParam1->f_6[0 /*8*/] = OBJECT::CREATE_OBJECT(joaat("prop_tyre_spike_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -1.2f, -0.4f), 1, 1, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_6[0 /*8*/], iParam0, 1);
								AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_THEFT_MOVIE_LOT_DROP_SPIKES", iParam0, 0, 0, 0);
							}
						}
						if ((MISC::GET_GAME_TIMER() - uParam1->f_31) > 200)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[1 /*8*/]))
							{
								uParam1->f_6[1 /*8*/] = OBJECT::CREATE_OBJECT(joaat("prop_tyre_spike_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0.1f, -1.1f, -0.4f), 1, 1, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_6[1 /*8*/], iParam0, 1);
							}
						}
						if ((MISC::GET_GAME_TIMER() - uParam1->f_31) > 300)
						{
							if (!ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[2 /*8*/]))
							{
								uParam1->f_6[2 /*8*/] = OBJECT::CREATE_OBJECT(joaat("prop_tyre_spike_01"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -0.1f, -1f, -0.34f), 1, 1, 0);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uParam1->f_6[2 /*8*/], iParam0, 1);
								uParam1->f_31 = 0;
							}
							uParam1->f_32++;
							uParam1->f_34 = 1;
							uParam1->f_36 = 0;
							uParam1->f_35 = 0;
							uParam1->f_6[0 /*8*/].f_7 = 0;
							uParam1->f_6[1 /*8*/].f_7 = 0;
							uParam1->f_6[2 /*8*/].f_7 = 0;
						}
					}
					if (STREAMING::HAS_PTFX_ASSET_LOADED())
					{
						if (uParam1->f_6[0 /*8*/].f_7 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[0 /*8*/]))
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(uParam1->f_6[0 /*8*/]))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal3_tyre_spikes", uParam1->f_6[0 /*8*/], 0f, 0f, -0.025f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									uParam1->f_6[0 /*8*/].f_7 = 1;
								}
							}
						}
						if (uParam1->f_6[1 /*8*/].f_7 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[1 /*8*/]))
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(uParam1->f_6[1 /*8*/]))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal3_tyre_spikes", uParam1->f_6[1 /*8*/], 0f, 0f, -0.025f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									uParam1->f_6[1 /*8*/].f_7 = 1;
								}
							}
						}
						if (uParam1->f_6[2 /*8*/].f_7 == 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[2 /*8*/]))
							{
								if (!ENTITY::IS_ENTITY_IN_AIR(uParam1->f_6[2 /*8*/]))
								{
									GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal3_tyre_spikes", uParam1->f_6[2 /*8*/], 0f, 0f, -0.025f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
									uParam1->f_6[2 /*8*/].f_7 = 1;
								}
							}
						}
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < uParam1->f_6)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_6[iVar0 /*8*/]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_6[iVar0 /*8*/]))
					{
						if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(uParam1->f_6[iVar0 /*8*/]))
						{
							PHYSICS::ACTIVATE_PHYSICS(uParam1->f_6[iVar0 /*8*/]);
							ENTITY::SET_ENTITY_DYNAMIC(uParam1->f_6[iVar0 /*8*/], 1);
						}
					}
				}
				iVar0++;
			}
		}
	}
}

int func_397(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37)//Position - 0x5134B
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Param0.f_6)
	{
		if (Param0.f_6[iVar0 /*8*/].f_4 == 0f)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_398(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x51380
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_320(iParam0[iVar0 /*18*/], iParam1, iParam2, iParam3);
		iVar0++;
	}
}

void func_399(int iParam0, int iParam1, int iParam2)//Position - 0x513B1
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::DETACH_ENTITY(*iParam0, 1, 1);
			}
		}
		if (iParam2 == 1)
		{
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, 0);
		}
		if (iParam1 == 1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}



void func_402(int iParam0, int iParam1)//Position - 0x5141D
{
	float fVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = GlobalFunc_156(*iParam0, iParam1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				if (iParam0->f_15 != 19)
				{
					if ((((iLocal_530 == 1 || iLocal_511 == 1) || iLocal_523 == 1) || PED::IS_PED_DEAD_OR_DYING(*iParam0, 1)) || func_406(*iParam0, iParam1))
					{
						func_405(iParam0, 19);
					}
				}
				switch (iParam0->f_15)
				{
					case 5:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "beginning_loop_grip", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "beginning_loop_grip", Local_213.f_1, Local_213.f_4, 1000f, -8f, -1, 790537, 0f, 2, 2);
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "beginning_loop_grip", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, 1);
							if (Local_912[0 /*18*/].f_15 == 6)
							{
								func_405(iParam0, 6);
							}
						}
						break;
					
					case 6:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "react_grip", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "react_grip", Local_213.f_1, Local_213.f_4, 8f, -4f, -1, 790538, 0f, 2, 2);
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "react_grip", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, 1);
							fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@director_grip", "react_grip");
							if (ENTITY::DOES_ENTITY_EXIST(Local_237))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_237))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(Local_237))
									{
										if (fVar0 >= 0.6f)
										{
											ENTITY::DETACH_ENTITY(Local_237, 0, 1);
										}
									}
								}
							}
							if (Local_912[0 /*18*/].f_15 == 7)
							{
								func_405(iParam0, 7);
							}
						}
						break;
					
					case 7:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "end_loop_grip", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "end_loop_grip", Local_213.f_1, Local_213.f_4, 8f, -8f, -1, 790537, 0f, 2, 2);
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "end_loop_grip", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, 1);
						}
						break;
					
					case 19:
						if (iParam0->f_14 == 0)
						{
							iLocal_523 = 1;
							if (!PED::IS_PED_RAGDOLL(*iParam0))
							{
								TASK::CLEAR_PED_TASKS(*iParam0);
								PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_237))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_237))
									{
										if (ENTITY::IS_ENTITY_ATTACHED(Local_237))
										{
											ENTITY::DETACH_ENTITY(Local_237, 0, 1);
										}
									}
								}
								TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
								PED::SET_PED_KEEP_TASK(*iParam0, 1);
								iParam0->f_14 = 1;
							}
						}
						break;
					}
				}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam0->f_15 == 19)
		{
			if (bLocal_524 == 0)
			{
				if (iParam0->f_17 > 200f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
					func_399(&Local_237, 0, 1);
				}
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_237))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_237))
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_237))
						{
							ENTITY::DETACH_ENTITY(Local_237, 0, 1);
						}
					}
				}
				iParam0->f_15 = 1;
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_404(iParam0);
					func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				func_399(&Local_237, 0, 1);
			}
		}
	}
}

void func_403(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5180E
{
	switch (iParam0)
	{
		case 4:
			*iParam1++;
			break;
		
		case 2:
			*iParam2++;
			break;
		
		case 3:
			*iParam3++;
			break;
	}
}

int func_404(int iParam0)//Position - 0x51850
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			iVar0 = PED::GET_PED_SOURCE_OF_DEATH(*iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
					if (iVar1 == PLAYER::PLAYER_PED_ID())
					{
						if (PED::WAS_PED_KILLED_BY_STEALTH(*iParam0))
						{
							return 2;
						}
						else if (PED::WAS_PED_KILLED_BY_TAKEDOWN(*iParam0))
						{
							return 3;
						}
						else
						{
							return 4;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
				{
					return 5;
				}
				else
				{
					return 1;
				}
			}
			else
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, joaat("weapon_stungun"), 0))
				{
					return 2;
				}
				iParam0->f_12++;
				if (iParam0->f_12 == 10)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_405(int iParam0, int iParam1)//Position - 0x51904
{
	iParam0->f_14 = 0;
	iParam0->f_15 = iParam1;
}

int func_406(int iParam0, int iParam1)//Position - 0x51917
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if (((((((PED::HAS_PED_RECEIVED_EVENT(iParam0, 29) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 59)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 124)) || MISC::IS_BULLET_IN_AREA(Var0, 16f, 1)) || MISC::IS_BULLET_IN_AREA(Var0, 16f, 0)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 16f)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_407(int iParam0, int iParam1)//Position - 0x519C5
{
	float fVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = GlobalFunc_156(*iParam0, iParam1, 1);
		func_427(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), 1000);
		func_410(iParam0, iParam1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				PED::SET_PED_RESET_FLAG(*iParam0, 126, 1);
				switch (iParam0->f_15)
				{
					case 5:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "beginning_loop_director", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "beginning_loop_director", Local_213.f_1, Local_213.f_4, 1000f, -8f, -1, 790537, 0f, 2, 1);
							}
							else
							{
								ENTITY::SET_ENTITY_HEALTH(*iParam0, 105);
								PED::SET_PED_DIES_WHEN_INJURED(*iParam0, 1);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*iParam0, Local_213, 1);
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "beginning_loop_director", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, 1);
							fVar0 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@director_grip", "beginning_loop_director");
							if (func_408("CST4_DBRAN"))
							{
								if (fVar0 <= 0.06f || fVar0 >= 0.99f)
								{
									func_405(iParam0, 6);
								}
							}
						}
						if (((iLocal_530 == 1 || iLocal_511 == 1) || iLocal_523 == 1) || func_406(*iParam0, iParam1))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "beginning_loop_director", 3))
							{
								func_405(iParam0, 8);
							}
							else
							{
								func_405(iParam0, 19);
							}
						}
						break;
					
					case 6:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "react_director", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "react_director", Local_213.f_1, Local_213.f_4, 8f, -4f, -1, 790538, 0f, 2, 1);
							}
							else
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*iParam0, Local_213, 1);
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "react_director", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, 1);
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@director_grip", "react_director") >= 0.999f)
							{
								func_405(iParam0, 7);
							}
						}
						if (((iLocal_530 == 1 || iLocal_511 == 1) || iLocal_523 == 1) || func_406(*iParam0, iParam1))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "react_director", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@director_grip", "react_director") <= 0.118f)
							{
								func_405(iParam0, 8);
							}
							else
							{
								func_405(iParam0, 19);
							}
						}
						break;
					
					case 7:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "end_loop_director", 3))
							{
								TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "end_loop_director", Local_213.f_1, Local_213.f_4, 8f, -1.5f, -1, 790537, 0f, 2, 1);
							}
							else
							{
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*iParam0, Local_213, 1);
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "end_loop_director", 3))
						{
							PED::SET_PED_CAPSULE(*iParam0, 0.6f);
							PED::SET_PED_RESET_FLAG(*iParam0, 129, 1);
						}
						if (((iLocal_530 == 1 || iLocal_511 == 1) || iLocal_523 == 1) || func_406(*iParam0, iParam1))
						{
							PED::SET_PED_MOVEMENT_CLIPSET(*iParam0, "move_injured_generic", 1048576000);
							func_405(iParam0, 19);
						}
						break;
					
					case 8:
						if (iParam0->f_14 == 0)
						{
							if (!PED::IS_PED_RAGDOLL(*iParam0))
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "flee_exit_fwd_director", 3))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@director_grip", "flee_exit_fwd_director", Local_213.f_1, Local_213.f_4, 4f, -1.5f, -1, 790538, 0f, 2, 1);
								}
								else
								{
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(*iParam0, Local_213, 1);
									iParam0->f_14 = 1;
								}
							}
							else
							{
								func_405(iParam0, 19);
							}
						}
						if (iParam0->f_14 == 1)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "flee_exit_fwd_director", 3))
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@director_grip", "flee_exit_fwd_director") >= 0.725f)
								{
									func_405(iParam0, 3);
								}
							}
						}
						break;
					
					case 3:
						if (iParam0->f_14 == 0)
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							TASK::TASK_COWER(*iParam0, 7000);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iLocal_523 = 1;
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_14 = 1;
						}
						if (iParam0->f_14 == 1)
						{
							if (GlobalFunc_2521(5000, iParam0->f_10))
							{
								func_405(iParam0, 19);
							}
						}
						break;
					
					case 19:
						if (iParam0->f_14 == 0)
						{
							iLocal_523 = 1;
							if (!PED::IS_PED_RAGDOLL(*iParam0))
							{
								if (!PED::IS_PED_FLEEING(*iParam0))
								{
									TASK::CLEAR_PED_TASKS(*iParam0);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(*iParam0, 144);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, 1);
									PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, 1);
									PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, 1);
									PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, 1);
									TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
									PED::SET_PED_KEEP_TASK(*iParam0, 1);
								}
								else
								{
									iParam0->f_14 = 1;
								}
							}
						}
						break;
					}
				}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam0->f_15 == 19)
		{
			if (bLocal_524 == 0)
			{
				if (iParam0->f_17 > 200f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					STREAMING::REMOVE_CLIP_SET("move_injured_generic");
					STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
					func_399(&Local_213, 0, 1);
				}
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				iParam0->f_15 = 1;
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_404(iParam0);
					func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				STREAMING::REMOVE_CLIP_SET("move_injured_generic");
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
			}
		}
	}
}

int func_408(char* sParam0)//Position - 0x51FB6
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_409(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_409(int iParam0)//Position - 0x51FD5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_1193)
	{
		if (iLocal_1194[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_410(var uParam0, int iParam1)//Position - 0x52006
{
	struct<6> Var0;
	struct<6> Var6;
	var uVar12;
	struct<6> Var13;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (!iLocal_537)
			{
				if (uParam0->f_17 < 30f)
				{
					if (uParam0->f_15 != 19 && uParam0->f_15 != 3)
					{
						if (PED::IS_PED_IN_VEHICLE(iParam1, Local_186, 1))
						{
							if (GlobalFunc_111())
							{
								Var6 = { GlobalFunc_560() };
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
								{
									if ((((!MISC::ARE_STRINGS_EQUAL(&Var6, "CST4_DSW") && !MISC::ARE_STRINGS_EQUAL(&Var6, "CST4_DSG")) && !MISC::ARE_STRINGS_EQUAL(&Var6, "CST4_DSC")) && !MISC::ARE_STRINGS_EQUAL(&Var6, "CST4_DSSET1")) && !MISC::ARE_STRINGS_EQUAL(&Var6, "CST4_DSSET2"))
									{
										GlobalFunc_4956();
									}
								}
							}
							if (!GlobalFunc_5172(&Local_273, 1))
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_DSCAR", 7, 0, 0, 0))
								{
									iLocal_537 = 1;
									iLocal_532 = 1;
									iLocal_533 = 1;
									iLocal_534 = 1;
									iLocal_535 = 1;
									iLocal_536 = 1;
									iLocal_538 = 1;
									iLocal_539 = 1;
									iLocal_540 = 1;
									iLocal_541 = 1;
								}
							}
						}
					}
				}
			}
			if (!iLocal_530)
			{
				if (uParam0->f_17 < 20f && uParam0->f_13 == 1)
				{
					if ((((PED::IS_PED_SHOOTING(iParam1) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *uParam0)) || PED::HAS_PED_RECEIVED_EVENT(*uParam0, 29)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *uParam0)) || WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &uVar12, 1))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4956();
						}
						if (!GlobalFunc_5172(&Local_273, 1))
						{
							if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_DSW", 7, 0, 0, 0))
							{
								iLocal_530 = 1;
								iLocal_529 = 1;
								iLocal_537 = 1;
								iLocal_538 = 1;
								iLocal_539 = 1;
								iLocal_540 = 1;
								iLocal_541 = 1;
								iLocal_531 = 1;
							}
						}
					}
				}
			}
			if (!iLocal_532)
			{
				if (!GlobalFunc_5172(&Local_273, 1))
				{
					if (iLocal_517 == 1 && uParam0->f_17 < 30f)
					{
						if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_DBRAN", "CST4_DBRAN_1", 7, 0, 0))
						{
							uParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 10000));
							iLocal_532 = 1;
						}
					}
				}
			}
			else if (!iLocal_533)
			{
				if (!GlobalFunc_5172(&Local_273, 1))
				{
					if (iLocal_517 == 1 && uParam0->f_17 < 30f)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_7) > 0)
						{
							if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_DBRAN", "CST4_DBRAN_2", 7, 0, 0))
							{
								uParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 12000));
								iLocal_533 = 1;
							}
						}
					}
				}
			}
			else if (!iLocal_534)
			{
				if (!GlobalFunc_5172(&Local_273, 1))
				{
					if (iLocal_517 == 1 && uParam0->f_17 < 30f)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_7) > 0)
						{
							if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_DBRAN", "CST4_DBRAN_3", 7, 0, 0))
							{
								uParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
								iLocal_534 = 1;
							}
						}
					}
				}
			}
			else if (!iLocal_535)
			{
				if (!GlobalFunc_5172(&Local_273, 1))
				{
					if (iLocal_517 == 1 && uParam0->f_17 < 30f)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_7) > 0)
						{
							if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_DBRAN", "CST4_DBRAN_4", 7, 0, 0))
							{
								uParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(9000, 12000));
								iLocal_535 = 1;
							}
						}
					}
				}
			}
			else if (!iLocal_536)
			{
				if (!GlobalFunc_5172(&Local_273, 1))
				{
					if (iLocal_517 == 1 && uParam0->f_17 < 30f)
					{
						if ((MISC::GET_GAME_TIMER() - uParam0->f_7) > 0)
						{
							if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_DBRAN", "CST4_DBRAN_5", 7, 0, 0))
							{
								iLocal_536 = 1;
							}
						}
					}
				}
			}
			if ((((iLocal_532 || iLocal_533) || iLocal_534) || iLocal_535) || iLocal_536)
			{
				if (GlobalFunc_111())
				{
					if (uParam0->f_17 > 35f)
					{
						Var0 = { GlobalFunc_560() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DBRAN"))
						{
							GlobalFunc_5105();
						}
					}
				}
			}
			if (!iLocal_540)
			{
				if (!GlobalFunc_5172(&Local_273, 1))
				{
					if (iLocal_517 == 0 && uParam0->f_17 < 25f)
					{
						if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_DCHAT1", 7, 0, 0, 0))
						{
							iLocal_540 = 1;
						}
					}
				}
			}
			else if (GlobalFunc_111())
			{
				if (uParam0->f_17 > 35f)
				{
					Var0 = { GlobalFunc_560() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT1"))
					{
						GlobalFunc_5105();
					}
				}
			}
			if (!iLocal_541)
			{
				if (!GlobalFunc_5172(&Local_273, 1))
				{
					if (iLocal_517 == 0 && uParam0->f_17 < 25f)
					{
						if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_DCHAT2", 7, 0, 0, 0))
						{
							iLocal_541 = 1;
						}
					}
				}
			}
			else if (GlobalFunc_111())
			{
				if (uParam0->f_17 > 35f)
				{
					Var0 = { GlobalFunc_560() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0) && MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT2"))
					{
						GlobalFunc_5105();
					}
				}
			}
			if (!iLocal_538 && !iLocal_539)
			{
				if (uParam0->f_17 < 20f && uParam0->f_13 == 1)
				{
					if (GlobalFunc_111())
					{
						Var0 = { GlobalFunc_560() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
						{
							if ((MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DBRAN") || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT2"))
							{
								iLocal_532 = 1;
								iLocal_533 = 1;
								iLocal_534 = 1;
								iLocal_535 = 1;
								iLocal_536 = 1;
								iLocal_540 = 1;
								iLocal_541 = 1;
								GlobalFunc_5105();
							}
						}
					}
					if (!GlobalFunc_5172(&Local_273, 1))
					{
						if (iLocal_517 == 1)
						{
							if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_DSSET1", 7, 0, 0, 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(*uParam0, iParam1, 6000, 2050, 4);
								iLocal_556++;
								if (iLocal_556 >= 2)
								{
									iLocal_538 = 1;
								}
							}
						}
						else if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_DSSET2", 7, 0, 0, 0))
						{
							TASK::TASK_LOOK_AT_ENTITY(*uParam0, iParam1, 6000, 2050, 4);
							iLocal_556++;
							if (iLocal_556 >= 2)
							{
								iLocal_539 = 1;
							}
						}
					}
				}
			}
			if (!iLocal_529)
			{
				if (uParam0->f_17 < 30f)
				{
					if (uParam0->f_15 != 19 && uParam0->f_15 != 3)
					{
						if ((iLocal_537 || iLocal_538) || iLocal_539)
						{
							if (!GlobalFunc_5172(&Local_273, 1))
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_DSG", 7, 0, 0, 0))
								{
									iLocal_529 = 1;
								}
							}
						}
					}
				}
			}
			else if (GlobalFunc_111())
			{
				Var13 = { GlobalFunc_560() };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&Var13, "CST4_DSG"))
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
						{
							iLocal_531 = 1;
						}
					}
				}
			}
			if (!iLocal_528)
			{
				if (uParam0->f_15 == 19 || uParam0->f_15 == 3)
				{
					if (uParam0->f_17 < 25f)
					{
						if (TASK::IS_PED_RUNNING(*uParam0) || TASK::IS_PED_SPRINTING(*uParam0))
						{
							if (!GlobalFunc_5172(&Local_273, 1))
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_DSC", 7, 0, 0, 0))
								{
									iLocal_555++;
									if (iLocal_555 >= 3)
									{
										iLocal_528 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (uParam0->f_15 == 19 || uParam0->f_15 == 3)
			{
				if (GlobalFunc_111())
				{
					Var0 = { GlobalFunc_560() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if ((MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DBRAN") || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_DCHAT2"))
						{
							iLocal_532 = 1;
							iLocal_533 = 1;
							iLocal_534 = 1;
							iLocal_535 = 1;
							iLocal_536 = 1;
							iLocal_540 = 1;
							iLocal_541 = 1;
							GlobalFunc_4956();
						}
					}
				}
			}
		}
	}
}

















void func_427(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4)//Position - 0x52F20
{
	if (GlobalFunc_2521(iParam4, *uParam3))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iParam0, iParam1))
				{
					*uParam2 = 1;
				}
				else
				{
					*uParam2 = 0;
				}
				*uParam3 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_428(int iParam0, int iParam1, int iParam2)//Position - 0x52F7B
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = GlobalFunc_156(*iParam0, iParam1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				if (iLocal_585 == 1)
				{
					func_433(*iParam0, iParam1, iParam2, &iLocal_587, &iLocal_586, &iLocal_584, &iLocal_583);
				}
				switch (iParam0->f_15)
				{
					case 0:
						func_405(iParam0, 16);
						break;
					
					case 16:
						if (iParam0->f_14 == 0)
						{
							STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actress");
							if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@actress"))
							{
								PED::SET_PED_CONFIG_FLAG(*iParam0, 115, 1);
								TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actress", "sit", 8f, -8f, -1, 1, 0, 0, 0, 0);
								if (iLocal_525 == 0)
								{
									TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, -1, 2048, 2);
								}
								func_432(*iParam0, 30f, 5f, 90f, -1028390912, 1119092736);
								iParam0->f_14 = 1;
							}
						}
						if (GlobalFunc_1976(*iParam0, iParam1))
						{
							if (func_408("CST4_APULL"))
							{
								func_430(*iParam0, iParam2, &iLocal_590, &(Local_150.f_10), &iLocal_588, &fLocal_589, 3500, 500, 0.05f, 0.035f, 250, 1250, 1500, 3000);
							}
						}
						if (iLocal_525 == 1)
						{
							if (GlobalFunc_1461(*iParam0, iParam2, 0))
							{
								if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam2, 0))
								{
									func_405(iParam0, 19);
								}
								if (VEHICLE::IS_VEHICLE_STOPPED(iParam2) && VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(*iParam0, iParam2, 0, 0, 0))
								{
									if (iLocal_574 == 0)
									{
										iLocal_574 = MISC::GET_GAME_TIMER();
									}
									else if (GlobalFunc_2521(GlobalFunc_92(bLocal_524, 12000, 8000), iLocal_574))
									{
										func_405(iParam0, 19);
									}
								}
								else
								{
									iLocal_574 = 0;
								}
							}
							if (iLocal_559 == 0)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
								{
									if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, iParam2))
									{
										if (VEHICLE::IS_VEHICLE_STOPPED(iParam2))
										{
											if ((!PED::IS_PED_IN_VEHICLE(iParam1, iParam2, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 16f, 0)) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), 16f, 1))
											{
												func_405(iParam0, 19);
											}
										}
									}
								}
							}
						}
						else if (iLocal_511 == 1 || func_429(*iParam0, iParam1))
						{
							func_405(iParam0, 19);
						}
						if (PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iParam2))
						{
							if (iLocal_590 == 0)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actress", "car_panic_girl", 3))
								{
									STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actress");
									if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@actress"))
									{
										TASK::TASK_CLEAR_LOOK_AT(*iParam0);
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actress", "car_panic_girl", 4f, -4f, -1, 1, 0, 0, 0, 0);
									}
								}
							}
						}
						else if (func_429(*iParam0, iParam1))
						{
							func_405(iParam0, 19);
						}
						if (!PED::IS_PED_IN_VEHICLE(*iParam0, iParam2, 0) || (PED::IS_PED_BEING_JACKED(*iParam0) && PED::IS_PED_JACKING(iParam1)))
						{
							func_405(iParam0, 19);
						}
						if (iLocal_584 == 1)
						{
							func_405(iParam0, 17);
						}
						break;
					
					case 17:
						if (iParam0->f_14 == 0)
						{
							iParam0->f_14 = 1;
						}
						if (iLocal_583 == 1)
						{
							if (ENTITY::GET_ENTITY_HEALTH(*iParam0) < 101)
							{
								ENTITY::SET_ENTITY_HEALTH(*iParam0, 0);
							}
						}
						break;
					
					case 19:
						if (iParam0->f_14 == 0)
						{
							if (!PED::IS_PED_RAGDOLL(*iParam0))
							{
								TASK::CLEAR_PED_TASKS(*iParam0);
							}
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 2, 0);
							TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
							PED::SET_PED_KEEP_TASK(*iParam0, 1);
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam0->f_15 == 19)
		{
			if (iParam0->f_17 > 150f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actress");
			}
		}
	}
}

int func_429(int iParam0, int iParam1)//Position - 0x53333
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if ((((((((PED::HAS_PED_RECEIVED_EVENT(iParam0, 29) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 59)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 122)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 123)) || MISC::IS_BULLET_IN_AREA(Var0, 16f, 1)) || MISC::IS_BULLET_IN_AREA(Var0, 16f, 0)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 16f)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_430(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7, float fParam8, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x533EF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (GlobalFunc_2522(iParam0, iParam1))
			{
				if (!CAM::IS_CINEMATIC_SHOT_ACTIVE(-1096069633))
				{
					if (*uParam3 == 0)
					{
						*uParam3 = MISC::GET_GAME_TIMER();
						*uParam4 = iParam6;
						*uParam2 = 0;
					}
					else if (!VEHICLE::IS_VEHICLE_STOPPED(iParam1))
					{
						if (*uParam2 == 0)
						{
							if (GlobalFunc_2521(*uParam4, *uParam3))
							{
								*uParam5 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam9, fParam9);
								if (*uParam5 >= 0f)
								{
									*uParam5 = (*uParam5 + fParam8);
								}
								else if (*uParam5 < 0f)
								{
									*uParam5 = (*uParam5 - fParam8);
								}
								*uParam3 = MISC::GET_GAME_TIMER();
								*uParam4 = (iParam7 + MISC::GET_RANDOM_INT_IN_RANGE(iParam10, iParam11));
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misscarsteal4@actress", "car_fight_girl", 3))
								{
									TASK::TASK_PLAY_ANIM(iParam0, "misscarsteal4@actress", "car_fight_girl", 4f, -4f, -1, 1, 0, 0, 0, 0);
								}
								*uParam2 = 1;
							}
						}
						else if (*uParam2 == 1)
						{
							if (GlobalFunc_2521(*uParam4, *uParam3))
							{
								*uParam3 = MISC::GET_GAME_TIMER();
								*uParam4 = (iParam6 + MISC::GET_RANDOM_INT_IN_RANGE(iParam12, iParam13));
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, "misscarsteal4@actress", "car_fight_girl", 3))
								{
									TASK::CLEAR_PED_TASKS(iParam0);
								}
								*uParam2 = 0;
							}
							else
							{
								VEHICLE::SET_VEHICLE_STEER_BIAS(iParam1, *uParam5);
							}
						}
					}
				}
			}
		}
	}
}


void func_432(int iParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5)//Position - 0x535A5
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SEEING_RANGE(iParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(iParam0, fParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(iParam0, (fParam3 / 2f));
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(iParam0, iParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(iParam0, iParam5);
	}
}

void func_433(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x535E1
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (!GlobalFunc_1536() && !CAM::IS_CINEMATIC_SHOT_ACTIVE(-1096069633))
			{
				switch (*uParam3)
				{
					case 0:
						if ((!ENTITY::IS_ENTITY_UPSIDEDOWN(iParam2) && GlobalFunc_2522(iParam0, iParam2)) && GlobalFunc_2522(iParam1, iParam2))
						{
							PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
							PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
							STREAMING::REQUEST_PTFX_ASSET();
							AUDIO::REQUEST_SCRIPT_AUDIO_BANK("CAR_STEAL_3_SCREAM", 0);
							AUDIO::REQUEST_AMBIENT_AUDIO_BANK("CAR_THEFT_MOVIE_LOT", 0);
							if (PAD::IS_CONTROL_JUST_PRESSED(0, 224))
							{
								HUD::CLEAR_HELP(1);
								HUD::CLEAR_PRINTS();
								GlobalFunc_7632(1);
								GlobalFunc_6685(1);
								TASK::CLEAR_PED_TASKS(iParam0);
								ENTITY::SET_ENTITY_INVINCIBLE(iParam0, 1);
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
									PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
								}
								AUDIO::START_AUDIO_SCENE("CAR_3_ACTIVATE_EJECTOR_SEAT");
								AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 1);
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 1);
								AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", 1);
								TASK::TASK_LOOK_AT_ENTITY(iParam1, iParam0, 2000, 2048, 2);
								*uParam4 = MISC::GET_GAME_TIMER();
								*uParam5 = 1;
								if (GlobalFunc_111())
								{
									GlobalFunc_4956();
								}
								*uParam3++;
							}
						}
						break;
					
					case 1:
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
						PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
						if (GlobalFunc_2521(20, *uParam4))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
							{
								VEHICLE::_EJECT_JB700_ROOF(iParam2, 0f, -9f, 10f);
							}
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_THEFT_MOVIE_LOT_EJECT_SEAT", iParam2, 0, 0, 0);
							GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_carsteal3_eject", iParam2, Local_71, Local_74, 1065353216, 0, 0, 0);
							*uParam4 = MISC::GET_GAME_TIMER();
							*uParam3++;
						}
						break;
					
					case 2:
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
						PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
						if (GlobalFunc_2521(150, *uParam4))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
							{
								if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_599))
								{
									iLocal_599 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_599, 0);
									PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(iLocal_599, 0);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_599, iParam2, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iParam2, "seat_pside_f"));
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
									ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iParam0, iParam2, 1);
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iLocal_599, "misscarsteal4@actress", "eject_girl", 1000f, -1000f, 129, 512, 1148846080, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
								}
								AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_604, "Ejector_Scream", iParam0, "CAR_STEAL_3_AGENT", 0, 0);
								GlobalFunc_553(123);
								RECORDING::_0x293220DA1B46CEBC(3f, 4f, 3);
								*uParam4 = MISC::GET_GAME_TIMER();
								*uParam3++;
							}
						}
						break;
					
					case 3:
						CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
						PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
						PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_599))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_599) >= 0.575f)
							{
								TASK::CLEAR_PED_TASKS(iParam0);
								PED::SET_PED_TO_RAGDOLL_WITH_FALL(iParam0, 1000, 30000, 0, 0f, 0f, 1f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
								ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Local_62, 0f, 0f, 0f, 10, 1, 1, 1, 0, 1);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, 0, 0);
							}
						}
						if (GlobalFunc_2521(1000, *uParam4))
						{
							ENTITY::SET_ENTITY_HEALTH(iParam0, 101);
							PED::SET_PED_DIES_WHEN_INJURED(iParam0, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(iParam0, 0);
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
							}
							GlobalFunc_7632(0);
							*uParam6 = 1;
							AUDIO::STOP_AUDIO_SCENE("CAR_3_ACTIVATE_EJECTOR_SEAT");
							AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", 0);
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForRagdoll", 0);
							AUDIO::SET_AUDIO_FLAG("DisableAbortConversationForDeathAndInjury", 0);
							if (GlobalFunc_663("CAR4_EGIRL", 0, 0))
							{
								HUD::CLEAR_PRINTS();
							}
							if (iLocal_596 == 0)
							{
								AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DROP");
								iLocal_596 = 1;
							}
							*uParam3++;
						}
						break;
					
					case 4:
						if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iParam0))
						{
							PED::APPLY_DAMAGE_TO_PED(iParam0, 10, 1);
							*uParam3++;
						}
						break;
					}
				}
		}
		if (!AUDIO::HAS_SOUND_FINISHED(iLocal_604))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				AUDIO::STOP_SOUND(iLocal_604);
			}
		}
	}
}




void func_437(int iParam0)//Position - 0x53A7C
{
	struct<3> Var0;
	struct<3> Var3;
	
	switch (*iParam0)
	{
		case 0:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_50, 1) < 150f)
			{
				Local_114.f_2 = { 475.4521f, -1313.713f, 28.2059f };
				Local_114.f_5 = 233.894f;
				Local_114.f_6 = joaat("ig_devin");
				*iParam0++;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(Local_114.f_6);
			STREAMING::REQUEST_ANIM_DICT("misscarsteal4leadinoutcar_4_ext");
			if (STREAMING::HAS_MODEL_LOADED(Local_114.f_6) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4leadinoutcar_4_ext"))
			{
				if (func_441(&Local_114, 0, 1862763509, 0, 29, 0, 0, 0, 0, -1, 1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_114))
					{
						PED::SET_FORCE_FOOTSTEP_UPDATE(Local_114, 1);
						GlobalFunc_173(&uLocal_336, 0, Local_114, "DEVIN", 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(Local_114, 0, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_114, 2, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_114, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_114, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_114, 5, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_114, 6, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_114, 7, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_114, 8, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_114, 9, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_114, 10, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_114, 11, 0, 0, 0);
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_114.f_6);
					Local_114.f_14 = 0;
					Local_114.f_9 = 0;
					*iParam0++;
				}
			}
			break;
		
		case 2:
			Var3 = { 0f, 0f, 116.8f };
			Var0 = { 473.682f, -1314.547f, 29.244f };
			if (ENTITY::DOES_ENTITY_EXIST(Local_114))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_114))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_loop_devin", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin", 3))
					{
						PED::SET_PED_CAPSULE(Local_114, 0.5f);
						PED::SET_PED_RESET_FLAG(Local_114, 129, 1);
					}
					switch (Local_114.f_9)
					{
						case 0:
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_114, 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_114, 16);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_loop_devin", Var0, Var3, 1000f, -4f, -1, 790537, 0f, 2, 0);
							Local_114.f_14 = 0;
							Local_114.f_9++;
							break;
						
						case 1:
							if (iLocal_569 == 1)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_loop_devin", 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_loop_devin") > 0.93f)
									{
										TASK::TASK_LOOK_AT_ENTITY(Local_114, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
										TASK::TASK_PLAY_ANIM_ADVANCED(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin", Var0, Var3, 4f, -4f, -1, 266250, 0f, 2, 1);
										Local_114.f_14 = 0;
										Local_114.f_9++;
									}
								}
							}
							break;
						
						case 2:
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin", 3))
							{
								ENTITY::SET_ENTITY_ANIM_SPEED(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin", 1f);
								if (!func_408("CST4_EXT_LI"))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_114, "misscarsteal4leadinoutcar_4_ext", "leadin_action_devin") >= 0.225f)
									{
										if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_EXT_LI", 7, 0, 0, 0))
										{
											func_438("CST4_EXT_LI", 1);
										}
									}
								}
							}
							break;
						}
					}
			}
			break;
	}
}

void func_438(char* sParam0, bool bParam1)//Position - 0x53DA2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_408(sParam0))
		{
			iVar1 = iLocal_1194;
			if (iLocal_1193 < iVar1)
			{
				iLocal_1194[iLocal_1193] = iVar0;
				iLocal_1193++;
			}
		}
	}
	else
	{
		iVar2 = func_409(iVar0);
		if (iVar2 != -1)
		{
			iLocal_1194[iVar2] = 0;
			func_439();
			iLocal_1193 = (iLocal_1193 - 1);
		}
	}
}

void func_439()//Position - 0x53E05
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1194;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_1194[iVar1] == 0)
		{
			if (iLocal_1194[iVar1 + 1] != 0)
			{
				iLocal_1194[iVar1] = iLocal_1194[iVar1 + 1];
				iLocal_1194[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}


int func_441(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x53EF7
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam8 == 0)
				{
					if (iParam4 == 145)
					{
						*iParam0 = PED::CREATE_PED(26, iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					else if (GlobalFunc_6705(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					if (!PED::IS_PED_INJURED(*iParam0))
					{
						func_482(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
						}
					}
				}
				else if (iParam8 != 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
					{
						if (iParam4 == 145)
						{
							*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam8, 26, iParam0->f_6, iParam9, 1, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						else if (GlobalFunc_7140(iParam0, iParam4, iParam8, iParam9, 1))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						if (!PED::IS_PED_INJURED(*iParam0))
						{
							func_482(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
							if (iParam3 == 1)
							{
								iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
							}
						}
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam8 == 0)
			{
				if (func_478(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1, 0, 0))
				{
					func_482(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
					if (iParam3 == 1)
					{
						iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
				{
					if (func_442(iParam0, iParam4, iParam8, iParam9, 1, 0, 0))
					{
						func_482(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_442(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x540D8
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, uParam3, 1, 1);
				GlobalFunc_8569(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				func_470(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7714(*iParam0);
				func_444(*iParam0, bParam6);
				GlobalFunc_516(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}


int func_444(int iParam0, bool bParam1)//Position - 0x54203
{
	int iVar0;
	bool bVar1;
	
	iVar0 = GlobalFunc_6674(iParam0);
	if (GlobalFunc_5101(iVar0))
	{
		GlobalFunc_5100(iVar0, 0);
		GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_448(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (GlobalFunc_7685(iParam0))
		{
			GlobalFunc_5100(iVar0, 0);
			GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_448(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[120] && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[122])
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (GlobalFunc_10910(iParam0, 3, 169))
					{
						GlobalFunc_11267(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						return 1;
					}
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 6))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 20))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 21))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 22))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 11))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 10))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 50))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 59))
			{
				GlobalFunc_11267(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 22))
			{
				GlobalFunc_11267(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 14))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_10910(iParam0, 12, 13))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 14))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 15))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 4))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 3))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 82))
			{
				GlobalFunc_11267(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 76))
			{
				GlobalFunc_11267(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 1))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_10910(iParam0, 12, 12))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 15))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (GlobalFunc_10910(iParam0, 3, 71))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 17))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 18))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 19))
			{
				if (!GlobalFunc_10967(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					return 1;
				}
			}
			if (GlobalFunc_10910(iParam0, 12, 7))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 6))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 14, 88))
			{
				GlobalFunc_11267(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (GlobalFunc_10910(iParam0, 8, 17))
			{
				GlobalFunc_11267(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (GlobalFunc_10910(iParam0, 12, 11))
			{
				GlobalFunc_11267(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				return 1;
			}
			break;
	}
	return 0;
}




void func_448(int iParam0, int iParam1)//Position - 0x54952
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
				iVar1 = GlobalFunc_11028(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					GlobalFunc_521(iVar0);
					func_7(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
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






















void func_470(int iParam0)//Position - 0x573A7
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
		func_7(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11028(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11028(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11028(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 70, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 71, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 72, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 73, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 74, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 3, 75, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 41, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 42, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 43, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 44, 1, 0, 0, 0);
					GlobalFunc_11185(GlobalFunc_4917(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = GlobalFunc_11028(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_7(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}








int func_478(int iParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x57DB5
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8569(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_470(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7714(*iParam0);
			func_444(*iParam0, bParam8);
			GlobalFunc_516(*iParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}




void func_482(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x57F45
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 32, iParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, iParam3);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, uParam4);
			PED::SET_PED_AS_ENEMY(iParam0, uParam5);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, uParam1);
		}
	}
}


int func_484(int iParam0)//Position - 0x58022
{
	MISC::SET_BIT(&(Local_273.f_13), 20);
	if (bLocal_524 == 0)
	{
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	}
	func_303();
	func_563(&Local_77);
	func_563(&cLocal_81);
	func_563(&cLocal_85);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	func_561(&iLocal_543);
	func_402(&(Local_912[1 /*18*/]), PLAYER::PLAYER_PED_ID());
	func_407(&(Local_912[0 /*18*/]), PLAYER::PLAYER_PED_ID());
	func_560();
	func_428(&Local_150, PLAYER::PLAYER_PED_ID(), Local_186);
	func_558(&iLocal_551);
	func_550(&iLocal_549);
	func_500(&iLocal_560);
	func_491();
	if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_186, 0) && GlobalFunc_1461(Local_150, Local_186, 0))
	{
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	if (CAM::IS_CINEMATIC_SHOT_ACTIVE(-1096069633))
	{
		if (iLocal_610 == 0)
		{
			RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
			iLocal_610 = 1;
		}
	}
	else
	{
		iLocal_610 = 0;
	}
	switch (*iParam0)
	{
		case 0:
			if (iLocal_559 == 0)
			{
				if (iLocal_558 == 0)
				{
					func_490(&Local_273, Local_50, 483.3f, -1316.18f, 27.7f, 477.64f, -1319.01f, 31.2f, 5f, 1, Local_186, &Local_77, &cLocal_81, &cLocal_85, 1, 0, 1, -1);
				}
				else
				{
					if (iLocal_585 == 0)
					{
						if (func_408("CST4_BUTTON1"))
						{
							iLocal_585 = 1;
						}
					}
					if (GlobalFunc_1461(Local_150, Local_186, 0))
					{
						if (func_408("CST4_BUTTON1"))
						{
							if (!func_408("CAR4_EGIRL"))
							{
								if ((iLocal_584 == 0 && !GlobalFunc_111()) && !GlobalFunc_5172(&Local_273, 1))
								{
									func_488("CAR4_EGIRL", 7500, 1);
								}
							}
						}
					}
					else
					{
						if (iLocal_596 == 0)
						{
							if (func_408("CST4_ENDCALL"))
							{
								if (GlobalFunc_665(45) || GlobalFunc_889(45))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DROP");
									iLocal_596 = 1;
								}
							}
						}
						if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_186, 0) && !CAM::IS_CINEMATIC_SHOT_ACTIVE(-1096069633))
						{
							if (func_408("CST4_ENDCALL"))
							{
								if (GlobalFunc_665(45) || GlobalFunc_889(45))
								{
									if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
									{
										AUDIO::STOP_AUDIO_SCENE("CAR_3_ESCAPE_SECURITY");
										return 1;
									}
								}
								if (!GlobalFunc_111())
								{
									AUDIO::STOP_AUDIO_SCENE("CAR_3_ESCAPE_SECURITY");
									return 1;
								}
							}
						}
					}
				}
			}
			else
			{
				if (iLocal_570 == 0)
				{
					if (iLocal_573 == 0)
					{
						if (GlobalFunc_1461(Local_150, Local_186, 0))
						{
							iLocal_572 = 22000;
						}
						else
						{
							iLocal_572 = 16000;
						}
						iLocal_573 = MISC::GET_GAME_TIMER();
					}
					else if (GlobalFunc_2521(iLocal_572, iLocal_573))
					{
						iLocal_571 = 1;
						if (func_408("CST4_FSPB"))
						{
							iLocal_570 = 1;
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(Local_273) || HUD::DOES_BLIP_EXIST(Local_273.f_5))
				{
					GlobalFunc_7139(&Local_273, 0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
					}
				}
				if (!func_408("CAR4_LSEC"))
				{
					if (func_408("CST4_ASSC") || func_408("CST4_FSSC"))
					{
						if (!GlobalFunc_5172(&Local_273, 0))
						{
							func_488("CAR4_LSEC", 7500, 1);
						}
					}
				}
			}
			if (!GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_186, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_186.f_1) && !HUD::DOES_BLIP_EXIST(Local_273))
				{
					Local_186.f_1 = GlobalFunc_6783(Local_186, 0, 0);
				}
				if (HUD::DOES_BLIP_EXIST(Local_186.f_1))
				{
					if (!func_408(&cLocal_85) && !MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_85))
					{
						if (GlobalFunc_5172(&Local_273, 2))
						{
							HUD::CLEAR_PRINTS();
							func_488(&cLocal_85, 7500, 1);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_186.f_1))
			{
				if (GlobalFunc_663(&cLocal_85, 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				HUD::REMOVE_BLIP(&(Local_186.f_1));
			}
			if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_186, 0) && !GlobalFunc_1536())
			{
				if (!CAM::IS_CINEMATIC_SHOT_ACTIVE(-1096069633))
				{
					if (iLocal_570 == 1)
					{
						if (iLocal_580 == 0)
						{
							if (iLocal_559 == 1)
							{
								if (!func_408("CAR4_HCARS"))
								{
									func_486("CAR4_HCARS", 1, 1, 10000, 1);
								}
							}
						}
					}
					if (iLocal_585 == 1)
					{
						if (iLocal_584 == 0)
						{
							if (GlobalFunc_1461(Local_150, Local_186, 0))
							{
								if (!func_408("CAR4_HCARE"))
								{
									func_486("CAR4_HCARE", 1, 1, 10000, 1);
								}
								else if (!GlobalFunc_74("CAR4_HCARE"))
								{
									func_438("CAR4_HCARE", 0);
								}
							}
							else if (GlobalFunc_74("CAR4_HCARE"))
							{
								HUD::CLEAR_HELP(1);
							}
						}
					}
				}
			}
			else if (GlobalFunc_74("CAR4_HCARE") || GlobalFunc_74("CAR4_HCARS"))
			{
				HUD::CLEAR_HELP(1);
			}
			if (!GlobalFunc_1536())
			{
				if (iLocal_570 == 1)
				{
					func_396(Local_186, &Local_298);
					func_392(Local_186, &Local_298, 1);
					if (!GlobalFunc_665(45) && !GlobalFunc_889(45))
					{
						func_387(Local_186, &Local_298, "CAR_3_TYRE_BURST_CAM");
					}
					else
					{
						func_386(&Local_298);
					}
					func_385(Local_298, &Local_1112);
					func_381(Local_298, PLAYER::PLAYER_PED_ID(), Local_186, &(Local_186.f_17), &(Local_186.f_8));
				}
			}
			break;
	}
	return 0;
}


void func_486(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x58530
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, iParam1, iParam2, iParam3);
	func_438(sParam0, bParam4);
}


void func_488(char* sParam0, int iParam1, bool bParam2)//Position - 0x58564
{
	if (!func_408(sParam0))
	{
		GlobalFunc_2523(sParam0, iParam1, 1);
		func_438(sParam0, bParam2);
	}
}


int func_490(var uParam0, struct<3> Param1, struct<3> Param4, struct<3> Param7, float fParam10, int iParam11, int iParam12, char* sParam13, char* sParam14, char* sParam15, bool bParam16, int iParam17, bool bParam18, int iParam19)//Position - 0x585A0
{
	return GlobalFunc_8568(uParam0, Param1, GlobalFunc_716(), Param4, Param7, iParam11, 5, 0, 0, 0, iParam12, sParam13, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), sParam14, 0, bParam16, sParam15, 1, iParam17, bParam18, iParam19, GlobalFunc_648(), GlobalFunc_648(), GlobalFunc_648(), 1, fParam10);
}

void func_491()//Position - 0x585F5
{
	struct<6> Var0;
	int iVar6;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_150))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_150))
		{
			if ((((!PED::IS_PED_IN_ANY_VEHICLE(Local_150, 0) && !PED::IS_PED_FALLING(Local_150)) && !PED::IS_PED_RAGDOLL(Local_150)) && AUDIO::HAS_SOUND_FINISHED(iLocal_604)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_150, "misscarsteal4@actress", "eject_girl", 3))
			{
				if (GlobalFunc_111())
				{
					Var0 = { GlobalFunc_560() };
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
					{
						if ((((((((((((((MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ACHAT1") || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ACHAT2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ACHAT3")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ACHAT4")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY3")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY4")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY5")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY6")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY7")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY8")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY9")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ANNOY10")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_AWARN"))
						{
							GlobalFunc_5105();
						}
					}
				}
				if (!func_408("CST4_AFLEE1"))
				{
					if (Local_150.f_17 < 35f)
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_273, 1))
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_AFLEE1", 7, 0, 0, 0))
								{
									Local_150.f_8 = 0;
									Local_150.f_7 = MISC::GET_GAME_TIMER();
									func_438("CST4_AFLEE1", 1);
								}
							}
							else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_150))
							{
								GlobalFunc_5653(Local_150, "CST4_CDAA", "CST4ACTRESS", 6);
								Local_150.f_8 = 0;
								Local_150.f_7 = MISC::GET_GAME_TIMER();
								func_438("CST4_AFLEE1", 1);
							}
						}
					}
					else
					{
						func_438("CST4_AFLEE1", 1);
					}
				}
				else if (PED::IS_PED_FLEEING(Local_150))
				{
					if (!func_408("CST4_AFLEE2"))
					{
						if (GlobalFunc_2521(15000, Local_150.f_7))
						{
							if (!GlobalFunc_111())
							{
								if (Local_150.f_17 < 30f)
								{
									if (!GlobalFunc_5172(&Local_273, 1))
									{
										if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_AFLEE2", 7, 0, 0, 0))
										{
											Local_150.f_8++;
											Local_150.f_7 = MISC::GET_GAME_TIMER();
											if (Local_150.f_8 == 6)
											{
												func_438("CST4_AFLEE2", 1);
											}
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_150))
									{
										GlobalFunc_5653(Local_150, "CST4_DGAA", "CST4ACTRESS", 3);
										Local_150.f_8++;
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										if (Local_150.f_8 == 6)
										{
											func_438("CST4_AFLEE2", 1);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_150))
	{
		if (!PED::IS_PED_INJURED(Local_150))
		{
			if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_150) && !AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Local_150))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_150, 1), 3f, 1) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Local_150, 1), 3f, 0))
				{
					AUDIO::PLAY_PAIN(Local_150, 5, 0, 0);
				}
			}
		}
		if (bLocal_524 == 0)
		{
			if (!func_408("CST4_AKDNP"))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_273, 1))
					{
						if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_AKDNP", 7, 0, 0, 0))
						{
							func_438("CST4_AKDNP", 1);
						}
					}
				}
			}
			if (!func_408("CST4_APULL"))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_273, 1))
					{
						if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_APULL", 7, 0, 0, 0))
						{
							func_438("CST4_APULL", 1);
						}
					}
				}
			}
		}
	}
	if (iLocal_558 == 1)
	{
		if (!func_408("CST4_BUTTON1"))
		{
			if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_150))
			{
				if (!GlobalFunc_111())
				{
					if (!GlobalFunc_5172(&Local_273, 1))
					{
						if (iLocal_590 == 0)
						{
							if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_BUTTON1", 7, 0, 0, 0))
							{
								func_438("CST4_BUTTON1", 1);
							}
						}
					}
				}
			}
		}
		if (!func_408("CST4_ENDCALL"))
		{
			if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_186, 0))
			{
				if (!GlobalFunc_1461(Local_150, Local_186, 0))
				{
					if (bLocal_524 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_273, 1))
							{
								if (iLocal_575 == 0)
								{
									iLocal_575 = MISC::GET_GAME_TIMER();
								}
								else if (GlobalFunc_2521(2000, iLocal_575))
								{
									func_498();
									if (iLocal_509 == 0)
									{
										if (func_494(9, &uLocal_336, 45, "CST4AUD", &sLocal_1245, &cLocal_1255, 8, 1, 0, 0, 0))
										{
											func_438("CST4_ENDCALL", 1);
										}
									}
									else if (func_494(12, &uLocal_336, 45, "CST4AUD", &sLocal_1265, &cLocal_1278, 8, 1, 0, 0, 0))
									{
										func_438("CST4_ENDCALL", 1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_557 == 1)
	{
		if (!func_408("CST4_ASSC") && !func_408("CST4_FSSC"))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_5172(&Local_273, 1))
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_186, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_150))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_150))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(Local_150, Local_186))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ASSC", 7, 0, 0, 0))
									{
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										func_438("CST4_ASSC", 1);
									}
								}
							}
						}
					}
					else if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_FSSC", 7, 0, 0, 0))
					{
						func_438("CST4_FSSC", 1);
					}
				}
			}
		}
		else if (func_408("CAR4_LSEC"))
		{
			if (!func_408("CST4_ASSCF"))
			{
				if (func_408("CST4_ASSC"))
				{
					if (!GlobalFunc_111())
					{
						if (!AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
						{
							GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "CST4_DDAA", "FRANKLIN", 3);
							func_438("CST4_ASSCF", 1);
						}
					}
				}
			}
			if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_186))
			{
				if (iLocal_570 == 0)
				{
					if (!func_408("CST4_FSPB"))
					{
						if (iLocal_571 == 1)
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 1))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_FSPB", 7, 0, 0, 0))
									{
										func_438("CST4_FSPB", 1);
									}
								}
							}
						}
					}
				}
				else if (!func_408("CST4_FSPDS"))
				{
					if (iLocal_581 != iLocal_580)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_FSPDS", 7, 0, 0, 0))
							{
								iLocal_581 = iLocal_580;
								if (iLocal_580 == 2)
								{
									func_438("CST4_FSPDS", 1);
								}
							}
						}
						else
						{
							AUDIO::INTERRUPT_CONVERSATION(PLAYER::PLAYER_PED_ID(), "CST4_CFAA", "FRANKLIN");
							iLocal_581 = iLocal_580;
							if (iLocal_580 == 2)
							{
								func_438("CST4_FSPDS", 1);
							}
						}
					}
				}
			}
			if (GlobalFunc_1976(PLAYER::PLAYER_PED_ID(), Local_150))
			{
				if (iLocal_584 == 0)
				{
					if (!func_408("CST4_SHOOT"))
					{
						if (GlobalFunc_2521(10000, Local_150.f_7))
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_273, 0))
									{
										if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_SHOOT", 7, 0, 0, 0))
										{
											iLocal_592++;
											Local_150.f_7 = MISC::GET_GAME_TIMER();
											if (iLocal_592 == 4)
											{
												func_438("CST4_SHOOT", 1);
											}
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_150))
									{
										GlobalFunc_5653(Local_150, "CST4_DCAA", "CST4ACTRESS", 3);
										iLocal_592++;
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										if (iLocal_592 == 4)
										{
											func_438("CST4_SHOOT", 1);
										}
									}
								}
							}
						}
					}
					if (!func_408("CST4_ACHAT1"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_273, 0))
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ACHAT1", 7, 0, 0, 0))
								{
									func_438("CST4_ACHAT1", 1);
								}
							}
						}
					}
					if (!func_408("CST4_ACHAT2"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_273, 0))
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ACHAT2", 7, 0, 0, 0))
								{
									func_438("CST4_ACHAT2", 1);
								}
							}
						}
					}
					if (!func_408("CST4_ACHAT3"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_273, 0))
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ACHAT3", 7, 0, 0, 0))
								{
									func_438("CST4_ACHAT3", 1);
								}
							}
						}
					}
					if (!func_408("CST4_ACHAT4"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_273, 0))
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ACHAT4", 7, 0, 0, 0))
								{
									Local_150.f_7 = MISC::GET_GAME_TIMER();
									iLocal_591 = 1;
									func_438("CST4_ACHAT4", 1);
								}
							}
						}
					}
				}
				if (iLocal_591 == 1)
				{
					if (iLocal_584 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_273, 0))
							{
								if (GlobalFunc_2521(12500, Local_150.f_7))
								{
									if (!func_408("CST4_SECSHT"))
									{
										iVar6 = GlobalFunc_2524(Local_150, -183807561, 0, 0, 28);
										if (ENTITY::DOES_ENTITY_EXIST(iVar6))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iVar6))
											{
												if (GlobalFunc_4951(Local_150, iVar6) < 10f)
												{
													if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_SECSHT", 7, 0, 0, 0))
													{
														iLocal_593++;
														Local_150.f_7 = MISC::GET_GAME_TIMER();
														if (iLocal_593 == 5)
														{
															func_438("CST4_SECSHT", 1);
														}
													}
												}
											}
										}
									}
									if (!GlobalFunc_111())
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_STOP", 7, 0, 0, 0))
												{
													Local_150.f_7 = MISC::GET_GAME_TIMER();
												}
												break;
											
											case 1:
												if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_SCREAM", 7, 0, 0, 0))
												{
													Local_150.f_7 = MISC::GET_GAME_TIMER();
												}
												break;
											
											case 2:
												if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ASTOP", 7, 0, 0, 0))
												{
													Local_150.f_7 = MISC::GET_GAME_TIMER();
												}
												break;
											}
										}
									}
								}
						}
						if (!func_408("CST4_ANNOY1"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 0))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ANNOY1", 7, 0, 0, 0))
									{
										func_438("CST4_ANNOY1", 1);
									}
								}
							}
						}
						if (!func_408("CST4_ANNOY2"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 0))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ANNOY2", 7, 0, 0, 0))
									{
										func_438("CST4_ANNOY2", 1);
									}
								}
							}
						}
						if (!func_408("CST4_ANNOY3"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 0))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ANNOY3", 7, 0, 0, 0))
									{
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										func_438("CST4_ANNOY3", 1);
									}
								}
							}
						}
						if (!func_408("CST4_ANNOY4"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 0))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ANNOY4", 7, 0, 0, 0))
									{
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										func_438("CST4_ANNOY4", 1);
									}
								}
							}
						}
						if (!func_408("CST4_ANNOY5"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 0))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ANNOY5", 7, 0, 0, 0))
									{
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										func_438("CST4_ANNOY5", 1);
									}
								}
							}
						}
						if (!func_408("CST4_ANNOY6"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 0))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ANNOY6", 7, 0, 0, 0))
									{
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										func_438("CST4_ANNOY6", 1);
									}
								}
							}
						}
						if (!func_408("CST4_ANNOY7"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 0))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ANNOY7", 7, 0, 0, 0))
									{
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										func_438("CST4_ANNOY7", 1);
									}
								}
							}
						}
						if (!func_408("CST4_ANNOY8"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 0))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ANNOY8", 7, 0, 0, 0))
									{
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										func_438("CST4_ANNOY8", 1);
									}
								}
							}
						}
						if (!func_408("CST4_ANNOY9"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 0))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ANNOY9", 7, 0, 0, 0))
									{
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										func_438("CST4_ANNOY9", 1);
									}
								}
							}
						}
						if (!func_408("CST4_ANNOY10"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 0))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ANNOY10", 7, 0, 0, 0))
									{
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										func_438("CST4_ANNOY10", 1);
									}
								}
							}
						}
						if (!func_408("CST4_AWARN"))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_273, 0))
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_AWARN", 7, 0, 0, 0))
									{
										Local_150.f_7 = MISC::GET_GAME_TIMER();
										func_438("CST4_AWARN", 1);
									}
								}
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (!func_408("CST4_AMSNO") && !func_408("CST4_AMSRO"))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_96))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_96))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_96, "misscarsteal4@actor", "stumble", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(Local_96, "misscarsteal4@actor", "dazed_idle", 3))
					{
						func_427(Local_150, Local_96, &(Local_150.f_13), &(Local_150.f_10), 950);
						if (Local_150.f_13 == 1)
						{
							if (GlobalFunc_156(Local_96, Local_150, 1) < 30f)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_AMSNO", 8, 0, 0, 0))
									{
										func_438("CST4_AMSNO", 1);
									}
								}
								else
								{
									GlobalFunc_4956();
								}
							}
						}
					}
				}
			}
		}
		if (!func_408("CST4_AMSRO"))
		{
			if (GlobalFunc_2522(Local_150, Local_186))
			{
				if (Local_150.f_13 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_96))
					{
						if (ENTITY::IS_ENTITY_DEAD(Local_96))
						{
							if (Local_96.f_16 == 5)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_AMSRO", 8, 0, 0, 0))
									{
										func_438("CST4_AMSRO", 1);
									}
								}
								else
								{
									GlobalFunc_4956();
								}
							}
						}
					}
				}
			}
		}
	}
}



bool func_494(int iParam0, var uParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x59545
{
	GlobalFunc_513(uParam1, iParam2, sParam3, iParam8, iParam9, 0);
	GlobalFunc_2443();
	if (iParam7 == 1)
	{
		Global_15704 = 1;
	}
	else
	{
		Global_15704 = 0;
	}
	GlobalFunc_2442(iParam0);
	return GlobalFunc_9753(sParam4, sParam5, iParam6, bParam10);
}




void func_498()//Position - 0x5994C
{
	if (iLocal_576 > 0)
	{
		iLocal_509 = 1;
	}
	else
	{
		iLocal_509 = 0;
	}
	if (iLocal_509 == 0)
	{
		sLocal_1245[0] = "CST4_ECALLC";
		cLocal_1255[0] = "CST4_ECALLC_1";
		sLocal_1245[1] = "CST4_ECALLC";
		cLocal_1255[1] = "CST4_ECALLC_2";
		sLocal_1245[2] = "CST4_ECALLC";
		cLocal_1255[2] = "CST4_ECALLC_3";
		sLocal_1245[3] = "CST4_ECALLC";
		cLocal_1255[3] = "CST4_ECALLC_4";
		sLocal_1245[4] = "CST4_ECALLC";
		cLocal_1255[4] = "CST4_ECALLC_5";
		sLocal_1245[5] = "CST4_ECALLC";
		cLocal_1255[5] = "CST4_ECALLC_6";
		if (iLocal_583 == 0)
		{
			if (Local_298.f_32 > 0)
			{
				sLocal_1245[6] = "CST4_ECALL1";
				cLocal_1255[6] = "CST4_ECALL1_1";
			}
			else
			{
				sLocal_1245[6] = "CST4_ECALL3";
				cLocal_1255[6] = "CST4_ECALL3_1";
			}
		}
		else if (Local_298.f_32 > 0)
		{
			sLocal_1245[6] = "CST4_ECALL2";
			cLocal_1255[6] = "CST4_ECALL2_1";
		}
		else
		{
			sLocal_1245[6] = "CST4_ECALL4";
			cLocal_1255[6] = "CST4_ECALL4_1";
		}
		sLocal_1245[7] = "CST4_ECALLE";
		cLocal_1255[7] = "CST4_ECALLE_1";
		sLocal_1245[8] = "CST4_ECALLE";
		cLocal_1255[8] = "CST4_ECALLE_2";
	}
	else
	{
		sLocal_1265[0] = "CST4_ECALLM";
		cLocal_1278[0] = "CST4_ECALLM_1";
		sLocal_1265[1] = "CST4_ECALLM";
		cLocal_1278[1] = "CST4_ECALLM_2";
		sLocal_1265[2] = "CST4_ECALLM";
		cLocal_1278[2] = "CST4_ECALLM_3";
		sLocal_1265[3] = "CST4_ECALLM";
		cLocal_1278[3] = "CST4_ECALLM_4";
		sLocal_1265[4] = "CST4_ECALLM";
		cLocal_1278[4] = "CST4_ECALLM_5";
		sLocal_1265[5] = "CST4_ECALLM";
		cLocal_1278[5] = "CST4_ECALLM_6";
		sLocal_1265[6] = "CST4_ECALLM";
		cLocal_1278[6] = "CST4_ECALLM_7";
		sLocal_1265[7] = "CST4_ECALLM";
		cLocal_1278[7] = "CST4_ECALLM_8";
		sLocal_1265[8] = "CST4_ECALLM";
		cLocal_1278[8] = "CST4_ECALLM_9";
		if (iLocal_583 == 0)
		{
			if (Local_298.f_32 > 0)
			{
				sLocal_1265[9] = "CST4_ECALL1";
				cLocal_1278[9] = "CST4_ECALL1_1";
			}
			else
			{
				sLocal_1265[9] = "CST4_ECALL3";
				cLocal_1278[9] = "CST4_ECALL3_1";
			}
		}
		else if (Local_298.f_32 > 0)
		{
			sLocal_1265[9] = "CST4_ECALL2";
			cLocal_1278[9] = "CST4_ECALL2_1";
		}
		else
		{
			sLocal_1265[9] = "CST4_ECALL4";
			cLocal_1278[9] = "CST4_ECALL4_1";
		}
		sLocal_1265[10] = "CST4_ECALLE";
		cLocal_1278[10] = "CST4_ECALLE_1";
		sLocal_1265[11] = "CST4_ECALLE";
		cLocal_1278[11] = "CST4_ECALLE_2";
	}
}


void func_500(int iParam0)//Position - 0x59C2F
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	
	if (iLocal_562 == 0)
	{
		if (bLocal_524 == 0)
		{
			iLocal_563 = 1;
			if (iLocal_561 == 0)
			{
				if (iLocal_563 == 1)
				{
					iLocal_561 = MISC::GET_GAME_TIMER();
				}
			}
			else if (GlobalFunc_2521(GlobalFunc_92(VEHICLE::IS_VEHICLE_STOPPED(Local_186), 5000, 10000), iLocal_561))
			{
				iLocal_562 = 1;
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_186, -840.78f, -345.37f, 35.68f, -806.72f, -359.6f, 44.1f, 32f, 0, 1, 0))
			{
				Local_1112[0 /*19*/].f_2 = { -940.7892f, -425.8869f, 36.6582f };
				Local_1112[0 /*19*/].f_5 = 299.7635f;
				Local_1112[1 /*19*/].f_2 = { -914.2634f, -410.5154f, 36.5965f };
				Local_1112[1 /*19*/].f_5 = 295.605f;
				iLocal_562 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_186, -922.5f, -462.98f, 34.38f, -958.13f, -481.3f, 44.2f, 32f, 0, 1, 0))
			{
				Local_1112[0 /*19*/].f_2 = { -990.2645f, -451.9471f, 36.5288f };
				Local_1112[0 /*19*/].f_5 = 298.9762f;
				Local_1112[1 /*19*/].f_2 = { -924.7919f, -408.3496f, 36.5208f };
				Local_1112[1 /*19*/].f_5 = 118.9813f;
				iLocal_562 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_186, -940f, -366.51f, 35.96f, -1011.4f, -402.69f, 46.61f, 32f, 0, 1, 0))
			{
				Local_1112[0 /*19*/].f_2 = { -1043.208f, -376.0805f, 36.8852f };
				Local_1112[0 /*19*/].f_5 = 298.4807f;
				Local_1112[1 /*19*/].f_2 = { -945.8993f, -313.9898f, 37.9018f };
				Local_1112[1 /*19*/].f_5 = 119.5346f;
				iLocal_562 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_186, -1043.86f, -410.67f, 34.58f, -1088.86f, -433.64f, 51.62f, 32f, 0, 1, 0))
			{
				Local_1112[0 /*19*/].f_2 = { -1037.385f, -309.7007f, 36.736f };
				Local_1112[0 /*19*/].f_5 = 188.3013f;
				Local_1112[1 /*19*/].f_2 = { -1169.586f, -422.5981f, 33.9917f };
				Local_1112[1 /*19*/].f_5 = 276.9465f;
				iLocal_562 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_186, -1206.13f, -646f, 20.83f, -1175.31f, -618.72f, 31.01f, 32f, 0, 1, 0))
			{
				Local_1112[0 /*19*/].f_2 = { -1246.771f, -612.4629f, 26.1706f };
				Local_1112[0 /*19*/].f_5 = 308.9866f;
				Local_1112[1 /*19*/].f_2 = { -1137.702f, -615.8666f, 20.7124f };
				Local_1112[1 /*19*/].f_5 = 126.5517f;
				iLocal_562 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_186, -1248.37f, -625.58f, 24.17f, -1263.54f, -606.61f, 34.16f, 32f, 0, 1, 0))
			{
				Local_1112[0 /*19*/].f_2 = { -1273.557f, -554.0495f, 29.3703f };
				Local_1112[0 /*19*/].f_5 = 219.115f;
				Local_1112[1 /*19*/].f_2 = { -1188.828f, -635.2723f, 22.7021f };
				Local_1112[1 /*19*/].f_5 = 41.9663f;
				iLocal_562 = 1;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_186, -1291.04f, -558.91f, 28.71f, -1254.28f, -527.38f, 38.07f, 32f, 0, 1, 0))
			{
				Local_1112[0 /*19*/].f_2 = { -1255.153f, -618.7726f, 26.1f };
				Local_1112[0 /*19*/].f_5 = 303.7104f;
				Local_1112[1 /*19*/].f_2 = { -1263.962f, -464.1984f, 32.5328f };
				Local_1112[1 /*19*/].f_5 = 141.2234f;
				iLocal_562 = 1;
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iLocal_47);
			STREAMING::REQUEST_MODEL(iLocal_48);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_47) && STREAMING::HAS_MODEL_LOADED(iLocal_48))
			{
				Local_1112[0 /*19*/].f_2 = { 0f, 0f, 0f };
				Local_1112[0 /*19*/].f_5 = 0f;
				Local_1112[0 /*19*/].f_9 = { -2.15f, -3f, 0f };
				Local_1112[0 /*19*/].f_6 = iLocal_47;
				Local_1112[1 /*19*/].f_2 = { 0f, 0f, 0f };
				Local_1112[1 /*19*/].f_5 = 0f;
				Local_1112[1 /*19*/].f_9 = { 2.15f, 3f, 0f };
				Local_1112[1 /*19*/].f_6 = iLocal_47;
				*iParam0++;
			}
			break;
		
		case 1:
			if (iLocal_562 == 1)
			{
				if (GlobalFunc_105(Local_1112[0 /*19*/].f_2) || GlobalFunc_105(Local_1112[1 /*19*/].f_2))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var3, 0, 1077936128, 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1) < 7f)
						{
							if (func_548(PLAYER::PLAYER_PED_ID(), &Local_564, &fLocal_567, 20, GlobalFunc_512(VEHICLE::IS_VEHICLE_STOPPED(Local_186), 0f, 120f), GlobalFunc_512(VEHICLE::IS_VEHICLE_STOPPED(Local_186), 180f, 180f), 0))
							{
								if (!CAM::IS_SPHERE_VISIBLE(Local_564, 3f))
								{
									fVar8 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
									fVar7 = MISC::ABSF((fVar8 - fLocal_567));
									if (fVar7 > 180f)
									{
										fVar7 = MISC::ABSF((fVar7 - 360f));
									}
									if (fVar7 < 90f)
									{
										fVar9 = fLocal_567;
									}
									else
									{
										fVar9 = (fLocal_567 + 180f);
									}
									iVar6 = 0;
									while (iVar6 <= (Local_1112 - 1))
									{
										Local_1112[iVar6 /*19*/].f_2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_564, fLocal_567, Local_1112[iVar6 /*19*/].f_9) };
										Local_1112[iVar6 /*19*/].f_5 = fVar9;
										Local_1112[iVar6 /*19*/].f_18 = 0;
										MISC::CLEAR_AREA_OF_VEHICLES(Local_1112[iVar6 /*19*/].f_2, 3f, 0, 0, 0, 0, 0);
										iVar6++;
									}
									*iParam0++;
								}
							}
						}
					}
				}
				else
				{
					*iParam0++;
				}
			}
			break;
		
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_47);
			STREAMING::REQUEST_MODEL(iLocal_48);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_47) && STREAMING::HAS_MODEL_LOADED(iLocal_48))
			{
				if (func_510(&(Local_1112[0 /*19*/]), 0, 0, 145, 0, -1, 0, 0, 0, 0) && func_510(&(Local_1112[1 /*19*/]), 0, 0, 145, 0, -1, 0, 0, 0, 0))
				{
					iVar10 = 0;
					while (iVar10 < 2)
					{
						Local_763[iVar10 /*18*/] = func_509(Local_1112[iVar10 /*19*/], iLocal_48, -183807561, -1, 200, joaat("weapon_pistol"));
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_1112[iVar10 /*19*/], 1, 1);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_1112[iVar10 /*19*/], 20f);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_1112[iVar10 /*19*/], 1);
						VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_1112[iVar10 /*19*/]);
						VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Local_1112[iVar10 /*19*/], 10f, 1000, 0, 0, 0, -1);
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_1112[iVar10 /*19*/], "CAR_3_SEC_CARS", 0);
						GlobalFunc_2525(Local_186, &(Local_1112[iVar10 /*19*/].f_12), &(Local_1112[iVar10 /*19*/].f_15));
						Local_1112[iVar10 /*19*/].f_16 = 0;
						Local_763[iVar10 /*18*/].f_14 = 0;
						Local_763[iVar10 /*18*/].f_15 = 28;
						iVar10++;
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_47);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_48);
					iLocal_559 = 1;
					iLocal_557 = 1;
					iLocal_558 = 0;
					*iParam0++;
				}
			}
			break;
		
		case 3:
			iVar11 = 0;
			while (iVar11 < 2)
			{
				func_506(&(Local_763[iVar11 /*18*/]), &(Local_1112[iVar11 /*19*/]));
				func_505(&(Local_763[iVar11 /*18*/]), &(Local_1112[iVar11 /*19*/]), 320f, 150f);
				func_501(&(Local_763[iVar11 /*18*/]), &(Local_1112[iVar11 /*19*/]), PLAYER::PLAYER_PED_ID(), Local_186);
				iVar11++;
			}
			if (Local_1112[0 /*19*/].f_18 == 0 && Local_1112[1 /*19*/].f_18 == 0)
			{
				Local_1112[0 /*19*/].f_18 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_1112[0 /*19*/], Local_186, 17);
				Local_1112[1 /*19*/].f_18 = ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_1112[1 /*19*/], Local_186, 17);
			}
			if (((!ENTITY::DOES_ENTITY_EXIST(Local_763[0 /*18*/]) && !ENTITY::DOES_ENTITY_EXIST(Local_763[1 /*18*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_1112[0 /*19*/])) && !ENTITY::DOES_ENTITY_EXIST(Local_1112[1 /*19*/]))
			{
				iLocal_558 = 1;
				iLocal_559 = 0;
				if (GlobalFunc_74("CAR4_HCARS"))
				{
					HUD::CLEAR_HELP(1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
				{
					VEHICLE::SET_VEHICLE_STRONG(Local_186, 0);
				}
				*iParam0++;
			}
			break;
	}
}

void func_501(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5A471
{
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam2)) && !ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		iParam0->f_17 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam2, 1), 1);
		if (iLocal_582 == 0)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, iParam2, 1))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam0, 0, 2))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam0);
					iLocal_582 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam1, iParam2, 1))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(*iParam1, 0, 2))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(*iParam1);
							iLocal_582 = 1;
						}
					}
				}
			}
		}
		switch (iParam0->f_15)
		{
			case 24:
				if (iParam0->f_14 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 0);
					TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
					iParam0->f_14 = 1;
				}
				if (func_504(iParam2, iParam3))
				{
					if (iParam0->f_17 > 20f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
						{
							if ((VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0) && !VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(*iParam1)) && !GlobalFunc_2226(iParam1))
							{
								if (!PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, 0))
								{
									if (VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam1, -1))
									{
										func_405(iParam0, 26);
									}
								}
								else if (iLocal_582 == 1)
								{
									func_405(iParam0, 27);
								}
								else
								{
									func_405(iParam0, 28);
								}
							}
						}
					}
				}
				break;
			
			case 28:
				if (iParam0->f_14 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 2, 0);
					TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
					iParam0->f_10 = MISC::GET_GAME_TIMER();
					iParam0->f_14 = 1;
				}
				PED::SET_PED_RESET_FLAG(*iParam0, 128, 1);
				if (iLocal_582 == 1)
				{
					func_405(iParam0, 27);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
					{
						if (iParam0->f_17 < 17.5f)
						{
							if (!func_504(iParam2, iParam3))
							{
								func_405(iParam0, 24);
							}
						}
					}
					func_502(*iParam1, iParam3, &(iParam1->f_2), &(iParam1->f_5), &(iParam1->f_12), &(iParam1->f_15), &(iParam0->f_10), iParam1->f_9, 3000, 40f);
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
				{
					func_405(iParam0, 24);
				}
				if (iParam1->f_16 == 1)
				{
					func_405(iParam0, 20);
				}
				break;
			
			case 27:
				if (iParam0->f_14 == 0)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 2, 1);
					TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
					iParam0->f_10 = MISC::GET_GAME_TIMER();
					iParam0->f_14 = 1;
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(*iParam0, *iParam1))
					{
						if (iParam0->f_17 < 17.5f)
						{
							if (!func_504(iParam2, iParam3))
							{
								func_405(iParam0, 24);
							}
						}
					}
					func_502(*iParam1, iParam3, &(iParam1->f_2), &(iParam1->f_5), &(iParam1->f_12), &(iParam1->f_15), &(iParam0->f_10), iParam1->f_9, 3000, 40f);
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
				{
					func_405(iParam0, 24);
				}
				if (iParam1->f_16 == 1)
				{
					func_405(iParam0, 20);
				}
				break;
			
			case 26:
				if (iParam0->f_14 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(*iParam1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 0);
							TASK::TASK_ENTER_VEHICLE(*iParam0, *iParam1, 20000, -1, 2f, 8, 0);
						}
					}
					iParam0->f_14 = 1;
				}
				if (ENTITY::DOES_ENTITY_EXIST(*iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam1, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(*iParam0, *iParam1, 0))
					{
						if (iLocal_582 == 1)
						{
							func_405(iParam0, 27);
						}
						else
						{
							func_405(iParam0, 28);
						}
					}
				}
				else
				{
					func_405(iParam0, 24);
				}
				break;
			
			case 20:
				if (iParam0->f_14 == 0)
				{
					VEHICLE::SET_VEHICLE_UNDRIVEABLE(*iParam1, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 0);
					PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
					PED::SET_PED_COMBAT_ABILITY(*iParam0, 1);
					PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
					PED::SET_PED_SHOOT_RATE(*iParam0, 20);
					PED::SET_PED_ACCURACY(*iParam0, 20);
					TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
					iParam0->f_14 = 1;
				}
				break;
			}
	}
}

void func_502(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<3> Param7, int iParam10, float fParam11)//Position - 0x5A898
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam1, 1), *uParam4, 1) > 20f)
			{
				*uParam2 = { *uParam4 };
				*uParam3 = *uParam5;
				*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(*uParam2, *uParam3, Param7) };
				GlobalFunc_2525(iParam1, uParam4, uParam5);
			}
			if (ENTITY::IS_ENTITY_ON_SCREEN(iParam0))
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
					}
				}
			}
		}
	}
}


int func_504(int iParam0, int iParam1)//Position - 0x5AA08
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
			{
				if (!VEHICLE::IS_VEHICLE_STOPPED(iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_505(int iParam0, var uParam1, float fParam2, float fParam3)//Position - 0x5AA3E
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (PED::IS_PED_INJURED(*iParam0))
		{
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_404(iParam0);
				func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > fParam3)
			{
				iParam0->f_16 = 1;
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(*iParam0, *uParam1, 0))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), *iParam0, 1) > fParam2)
					{
						iParam0->f_16 = 1;
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
						if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
						{
							HUD::REMOVE_BLIP(&(iParam0->f_1));
						}
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), *uParam1, 1) > fParam2)
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam1);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam1);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam1, 0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam1);
					if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
					{
						HUD::REMOVE_BLIP(&(uParam1->f_1));
					}
				}
			}
			else
			{
				VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam1);
				VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam1);
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam1, 0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam1);
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_1));
				}
			}
		}
		else
		{
			VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam1);
			VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam1);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam1, 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam1);
			if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_1));
			}
		}
	}
}

void func_506(var uParam0, var uParam1)//Position - 0x5ABFF
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
			{
				if (uParam0->f_15 == 20)
				{
					if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
					{
						HUD::REMOVE_BLIP(&(uParam1->f_1));
					}
					if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
					{
						uParam0->f_1 = GlobalFunc_6797(*uParam0, 1, 145);
					}
				}
				else if (!PED::IS_PED_INJURED(*uParam0))
				{
					if (PED::IS_PED_IN_VEHICLE(*uParam0, *uParam1, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
						{
							HUD::REMOVE_BLIP(&(uParam0->f_1));
						}
						if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
						{
							uParam1->f_1 = GlobalFunc_5104(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), 0);
							HUD::SET_BLIP_COLOUR(uParam1->f_1, 1);
							HUD::SET_BLIP_PRIORITY(uParam1->f_1, 9);
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam1->f_1, "BLIP_VEH");
						}
						if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
						{
							Var0 = { HUD::GET_BLIP_COORDS(uParam1->f_1) };
							Var3 = { ENTITY::GET_ENTITY_COORDS(*uParam1, 1) };
							Var0.x = (Var0.x + (((Var3.x - Var0.x) / 1f) * SYSTEM::TIMESTEP()));
							Var0.f_1 = (Var0.f_1 + (((Var3.f_1 - Var0.f_1) / 1f) * SYSTEM::TIMESTEP()));
							Var0.f_2 = (Var0.f_2 + (((Var3.f_2 - Var0.f_2) / 1f) * SYSTEM::TIMESTEP()));
							HUD::SET_BLIP_COORDS(uParam1->f_1, Var0);
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
						{
							HUD::REMOVE_BLIP(&(uParam1->f_1));
						}
						if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
						{
							uParam0->f_1 = GlobalFunc_6797(*uParam0, 1, 145);
						}
					}
				}
			}
			else if (!PED::IS_PED_INJURED(*uParam0))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::REMOVE_BLIP(&(uParam1->f_1));
				}
				if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
				{
					uParam0->f_1 = GlobalFunc_6797(*uParam0, 1, 145);
				}
			}
		}
		else if (!PED::IS_PED_INJURED(*uParam0))
		{
			if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				HUD::REMOVE_BLIP(&(uParam1->f_1));
			}
			if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
			{
				uParam0->f_1 = GlobalFunc_6797(*uParam0, 1, 145);
			}
		}
	}
}



int func_509(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5AE61
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, 26, iParam1, iParam3, 1, 1);
		PED::SET_PED_MAX_HEALTH(iVar0, iParam4);
		ENTITY::SET_ENTITY_HEALTH(iVar0, iParam4);
		PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
		WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam5, -1, 0, 1);
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, iParam5);
		PED::SET_PED_AS_ENEMY(iVar0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam2);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 188, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 132, 1);
		PED::SET_PED_CONFIG_FLAG(iVar0, 214, 1);
		PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, 1, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
		return iVar0;
	}
	return 0;
}

int func_510(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x5AF0A
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam2 == 1)
				{
					*iParam0 = func_547(iParam0->f_6, iParam0->f_2, iParam0->f_5);
					AUDIO::SET_HORN_ENABLED(*iParam0, 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (iParam3 == 145)
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (func_543(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
				{
					if (iParam6 != -1 && iParam7 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam7);
					}
					if (iParam5 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam5);
					}
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, iParam8, iParam9);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
					{
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (func_511(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
				{
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_511(int iParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, int iParam7)//Position - 0x5B0CA
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (GlobalFunc_42(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		GlobalFunc_97(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar79 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5811(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar80 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5811(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_531(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				bVar81 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, uParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				StringCopy(&cVar82, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var5.f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var5.f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var5.f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var5.f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
						}
					}
				}
				GlobalFunc_5811(iParam0, &(Var5.f_31), &(Var5.f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5120(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208 = 1;
					GlobalFunc_8962(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5);
				}
				if (bVar81)
				{
					GlobalFunc_531(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}
































int func_543(var uParam0, int iParam1, struct<3> Param2, var uParam5, bool bParam6, int iParam7)//Position - 0x5FA54
{
	struct<74> Var0;
	int iVar74;
	int iVar75;
	
	if (!GlobalFunc_42(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		GlobalFunc_549(iParam1, &Var0, iParam7);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][0 /*74*/] == Var0) || (iParam1 == 15 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][1 /*74*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar74 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar74 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar75 = 0;
				while (iVar75 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar75 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_11[iVar75]);
					iVar75++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, 0))
					{
						if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, 1);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_27));
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5811(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_72);
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
				}
				GlobalFunc_2526(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0);
			if (STREAMING::HAS_MODEL_LOADED(Var0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0, Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				GlobalFunc_7141(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					GlobalFunc_2526(*uParam0);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}




int func_547(int iParam0, struct<3> Param1, var uParam4)//Position - 0x60657
{
	int iVar0;
	
	if (iParam0 == joaat("monroe"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 89, 89);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 88, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " FA5T66 ");
	}
	else if (iParam0 == joaat("cheetah"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 62, 62);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 68, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " SDTM1YP");
	}
	else if (iParam0 == joaat("stinger"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 27, 27);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 36, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "ALPHADOG");
		VEHICLE::SET_VEHICLE_EXTRA(iVar0, 1, true);
	}
	else if (iParam0 == joaat("jb700"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "  4G3NT");
	}
	else if (iParam0 == joaat("entityxf"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 38, 38);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 37, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " MKB652 ");
	}
	else if (iParam0 == joaat("ztype"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, uParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 10, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " V1NTAG3");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
	}
	return iVar0;
}

int func_548(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4, float fParam5, int iParam6)//Position - 0x607E0
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	var uVar12;
	float fVar13;
	var uVar14;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
			if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Var0, iParam3, &Var9, &uVar12, &uVar14, iParam6, 1077936128, 0))
			{
				Var6 = { Var9 - Var0 };
				fVar13 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var6.x, Var6.f_1, Var3.x, Var3.f_1);
				if (fVar13 > fParam4 && fVar13 < fParam5)
				{
					*uParam1 = { Var9 };
					*uParam2 = uVar12;
					return 1;
				}
			}
		}
	}
	return 0;
}


void func_550(int iParam0)//Position - 0x60898
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 0:
			*iParam0++;
			break;
		
		case 1:
			if ((((ENTITY::DOES_ENTITY_EXIST(Local_672[0 /*18*/]) && ENTITY::DOES_ENTITY_EXIST(Local_672[1 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_672[2 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_672[3 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_672[4 /*18*/]))
			{
				iVar0 = 0;
				while (iVar0 < Local_672)
				{
					switch (iLocal_93)
					{
						case 0:
						case 2:
							break;
						
						case 3:
							if (!ENTITY::IS_ENTITY_DEAD(Local_672[iVar0 /*18*/]))
							{
								if ((Local_672[iVar0 /*18*/].f_15 != 1 && Local_672[iVar0 /*18*/].f_15 != 22) && Local_672[iVar0 /*18*/].f_15 != 24)
								{
									func_405(&(Local_672[iVar0 /*18*/]), 22);
								}
							}
							break;
					}
					iVar0++;
				}
				*iParam0++;
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_672)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(Local_672[iVar0 /*18*/]))
					{
						STREAMING::REQUEST_MODEL(iLocal_48);
						if (STREAMING::HAS_MODEL_LOADED(iLocal_48))
						{
							Local_672[iVar0 /*18*/] = func_557(Local_672[iVar0 /*18*/].f_2, Local_672[iVar0 /*18*/].f_5, iLocal_48, -183807561, 200, joaat("weapon_pistol"));
							func_405(&(Local_672[iVar0 /*18*/]), 0);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_48);
						}
					}
					iVar0++;
				}
			}
			break;
		
		case 2:
			if (iLocal_511 == 0)
			{
				if (iLocal_550 != 0)
				{
					if (GlobalFunc_2521(20000, iLocal_550))
					{
						iLocal_511 = 1;
					}
				}
			}
			func_551(&(Local_672[0 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_186, sLocal_89, -1177.71f, -503.58f, 34.57f, 0.75f, 10000, 6000, 1050, 1f, 0);
			func_551(&(Local_672[1 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_186, sLocal_90, -1189.43f, -506.21f, 34.57f, 0.75f, 20000, 5500, 1000, 0f, 0);
			func_551(&(Local_672[2 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_186, cLocal_91, -1182.29f, -507.45f, 34.57f, 0.75f, 12000, 6500, 950, 1f, 0);
			func_551(&(Local_672[3 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_186, sLocal_92, -1171.85f, -512.33f, 34.57f, 0.75f, 15000, 5000, 1100, 0f, 1);
			func_551(&(Local_672[4 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_186, sLocal_90, -1158.05f, -513.84f, 34.02f, 0.75f, 16000, 6000, 900, 0f, 1);
			break;
	}
}

void func_551(int iParam0, int iParam1, int iParam2, char* sParam3, struct<3> Param4, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11, int iParam12)//Position - 0x60B23
{
	int iVar0;
	var uVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				iParam0->f_17 = GlobalFunc_156(*iParam0, iParam1, 1);
				func_427(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), iParam10);
				switch (iParam0->f_15)
				{
					case 0:
						func_405(iParam0, 4);
						break;
					
					case 4:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if (iParam12 == 1)
						{
							if ((iLocal_93 == 0 && WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, 1)) && iVar0 == joaat("weapon_stungun"))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
							}
							else
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							}
						}
						if (iParam0->f_13 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(iParam1, iParam2, 2.5f, 2.5f, 2.5f, 0, 1, 1))
								{
									func_405(iParam0, 21);
								}
							}
						}
						if ((((((((iLocal_511 == 1 || iLocal_522 == 1) || iLocal_523 == 1) || PED::IS_PED_IN_COMBAT(*iParam0, 0)) || func_556(*iParam0, iParam1)) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_554(*iParam0, iParam1, iParam2, iParam0->f_13)) || func_553(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_552(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							func_405(iParam0, 24);
						}
						if (iLocal_531 == 1)
						{
							func_405(iParam0, 23);
						}
						if (iParam0->f_13 == 1)
						{
							if (iParam12 == 1)
							{
								PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(*iParam0, 0);
							}
							if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
							{
								if (iParam0->f_17 < 12f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
									{
										if (iLocal_517 == 1)
										{
											if (iParam12 == 1)
											{
												TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 6000, 3074, 4);
												GlobalFunc_5653(*iParam0, "NEEDED_ON_SET", sParam3, 10);
												iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
											}
										}
										else
										{
											TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 6000, 3074, 4);
											GlobalFunc_5653(*iParam0, "MOVE_AWAY_WARNING", sParam3, 10);
											iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
										}
									}
								}
							}
						}
						else if (iParam12 == 1)
						{
							PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(*iParam0, 1);
						}
						break;
					
					case 21:
						if (iParam0->f_14 == 0)
						{
							STREAMING::REQUEST_ANIM_DICT("move_m@intimidation@cop@unarmed");
							STREAMING::REQUEST_ANIM_DICT("reaction@intimidation@cop@unarmed");
							if (STREAMING::HAS_ANIM_DICT_LOADED("move_m@intimidation@cop@unarmed") && STREAMING::HAS_ANIM_DICT_LOADED("reaction@intimidation@cop@unarmed"))
							{
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								TASK::OPEN_SEQUENCE_TASK(&uVar1);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0);
								TASK::TASK_LOOK_AT_ENTITY(0, iParam1, 100, 2, 2);
								TASK::TASK_PLAY_ANIM(0, "reaction@intimidation@cop@unarmed", "intro", 4f, -8f, -1, 0, 0, 0, 0, 0);
								TASK::TASK_PLAY_ANIM(0, "move_m@intimidation@cop@unarmed", "idle", 8f, -4f, -1, 1, 0, 0, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar1);
								TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar1);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
								iParam0->f_10 = MISC::GET_GAME_TIMER();
								iParam0->f_14 = 1;
							}
						}
						if ((((((((iLocal_511 == 1 || iLocal_522 == 1) || iLocal_523 == 1) || PED::IS_PED_IN_COMBAT(*iParam0, 0)) || func_556(*iParam0, iParam1)) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_554(*iParam0, iParam1, iParam2, iParam0->f_13)) || func_553(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_552(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							func_405(iParam0, 24);
						}
						if (iLocal_531 == 1)
						{
							func_405(iParam0, 23);
						}
						break;
					
					case 23:
						PED::SET_PED_RESET_FLAG(*iParam0, 128, 1);
						if (iParam0->f_14 == 0)
						{
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 0);
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 1f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 0, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if (iParam0->f_14 == 1)
						{
							if (((((((iLocal_511 == 1 || iLocal_522 == 1) || iLocal_523 == 1) || GlobalFunc_2521(iParam9, iParam0->f_10)) || func_556(*iParam0, iParam1)) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_554(*iParam0, iParam1, iParam2, iParam0->f_13)) || func_553(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
							{
								func_405(iParam0, 24);
							}
						}
						if (iParam0->f_13 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
							{
								if (iParam0->f_17 < 12f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
										{
											case 0:
												TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 1000, 3074, 4);
												GlobalFunc_5653(*iParam0, "MOVE_AWAY_FROM_THE_CAR", sParam3, 10);
												iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
												break;
											
											case 1:
												TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 1000, 3074, 4);
												GlobalFunc_5653(*iParam0, "FREEZE", sParam3, 10);
												iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
												break;
											}
										}
									}
								}
						}
						break;
					
					case 22:
						PED::SET_PED_RESET_FLAG(*iParam0, 128, 1);
						if (iParam0->f_14 == 0)
						{
							STREAMING::REMOVE_ANIM_DICT("move_m@intimidation@cop@unarmed");
							STREAMING::REMOVE_ANIM_DICT("reaction@intimidation@cop@unarmed");
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 0);
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
							PED::SET_PED_SPHERE_DEFENSIVE_AREA(*iParam0, Param4, fParam7, 0, 0);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, fParam11);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 0, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if (iParam0->f_14 == 1)
						{
							if (((((((iLocal_511 == 1 || iLocal_522 == 1) || iLocal_523 == 1) || GlobalFunc_2521(iParam8, iParam0->f_10)) || func_556(*iParam0, iParam1)) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_554(*iParam0, iParam1, iParam2, iParam0->f_13)) || func_553(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
							{
								func_405(iParam0, 24);
							}
							if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
							{
								if (iParam0->f_17 < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
									{
										TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 1000, 3074, 4);
										GlobalFunc_5653(*iParam0, "GET_OUT_OF_THE_CAR", sParam3, 10);
										iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									}
								}
							}
						}
						break;
					
					case 24:
						if (iParam0->f_14 == 0)
						{
							STREAMING::REMOVE_ANIM_DICT("move_m@intimidation@cop@unarmed");
							STREAMING::REMOVE_ANIM_DICT("reaction@intimidation@cop@unarmed");
							PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 21, 1);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0f);
							if (iParam0->f_17 < 25f)
							{
								GlobalFunc_5653(*iParam0, "FREEZE", sParam3, 10);
								TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, 1000, 3074, 4);
							}
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 0, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iLocal_511 = 1;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			iParam0->f_15 = 1;
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_404(iParam0);
				func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
			}
		}
	}
}

int func_552(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x61330
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
					{
						if (fParam2 < 40f)
						{
							if (VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(PED::GET_VEHICLE_PED_IS_USING(iParam1)))
							{
								return 1;
							}
						}
						if (fParam2 < 5f)
						{
							if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_USING(iParam1)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_USING(iParam1)) > 5f)
							{
								return 1;
							}
						}
						if (bLocal_524 == 1)
						{
							if (iParam3 == 1)
							{
								if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(iParam1))) || VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(iParam1))))
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

int func_553(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x613E6
{
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		if (fParam2 < 25f && iParam3 == 1)
		{
			if (!PED::IS_PED_DEAD_OR_DYING(iParam0, 1))
			{
				if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_554(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x61431
{
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2))
		{
			if (iParam3 == 1)
			{
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(iParam1, iParam2) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam2, iParam1, 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_555(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x61489
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		if (fParam2 < 20f && iParam3 == 1)
		{
			if ((((PED::IS_PED_SHOOTING(iParam1) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 29)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0)) || WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &uVar0, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_556(int iParam0, int iParam1)//Position - 0x61506
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
		if ((((((((((((((PED::HAS_PED_RECEIVED_EVENT(iParam0, 41) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 29)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 59)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 60)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 22)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 86)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 75)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 122)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(iParam0, 123)) || MISC::IS_BULLET_IN_AREA(Var0, 20f, 1)) || MISC::IS_BULLET_IN_AREA(Var0, 20f, 0)) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Var0, 20f)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_557(struct<3> Param0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x61616
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(26, iParam4, Param0, uParam3, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam6);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam6);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam7, -1, 0, 1);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, iParam7);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam5);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 118, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 152, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 132, 1);
	PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, 1);
	return iVar0;
}

void func_558(int iParam0)//Position - 0x616A1
{
	switch (*iParam0)
	{
		case 0:
			*iParam0++;
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_874[0 /*18*/]) && ENTITY::DOES_ENTITY_EXIST(Local_893[0 /*18*/]))
			{
				switch (iLocal_93)
				{
					case 0:
					case 2:
						break;
					
					case 3:
						if (!ENTITY::IS_ENTITY_DEAD(Local_874[0 /*18*/]))
						{
							if ((Local_874[0 /*18*/].f_15 != 1 && Local_874[0 /*18*/].f_15 != 24) && Local_874[0 /*18*/].f_15 != 25)
							{
								GlobalFunc_2519(Local_874[0 /*18*/], -1055.808f, -485.295f, 35.6577f, 117.3792f, 0, 0, 0);
								func_405(&(Local_874[0 /*18*/]), 25);
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_893[0 /*18*/]))
						{
							if ((Local_893[0 /*18*/].f_15 != 1 && Local_893[0 /*18*/].f_15 != 24) && Local_893[0 /*18*/].f_15 != 25)
							{
								GlobalFunc_2519(Local_893[0 /*18*/], -1206.089f, -571.6317f, 26.2291f, 303.6333f, 0, 0, 0);
								func_405(&(Local_893[0 /*18*/]), 25);
							}
						}
						break;
				}
				*iParam0++;
			}
			else
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_874[0 /*18*/]))
				{
					STREAMING::REQUEST_MODEL(iLocal_48);
					if (STREAMING::HAS_MODEL_LOADED(iLocal_48))
					{
						Local_874[0 /*18*/] = func_557(Local_874[0 /*18*/].f_2, Local_874[0 /*18*/].f_5, iLocal_48, -183807561, 200, joaat("weapon_pistol"));
						func_405(&(Local_874[0 /*18*/]), 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_48);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_893[0 /*18*/]))
				{
					STREAMING::REQUEST_MODEL(iLocal_48);
					if (STREAMING::HAS_MODEL_LOADED(iLocal_48))
					{
						Local_893[0 /*18*/] = func_557(Local_893[0 /*18*/].f_2, Local_893[0 /*18*/].f_5, iLocal_48, -183807561, 200, joaat("weapon_pistol"));
						func_405(&(Local_893[0 /*18*/]), 0);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_48);
					}
				}
			}
			break;
		
		case 2:
			func_559(&(Local_874[0 /*18*/]), sLocal_89, PLAYER::PLAYER_PED_ID(), Local_186, -1044.183f, -485.8634f, 34.62389f, -1061.654f, -472.5105f, 43.65131f, 3f, -1063.403f, -471.4804f, 35.15371f, -1043.491f, -486.1869f, 39.61387f, 10f, 650);
			func_559(&(Local_893[0 /*18*/]), sLocal_90, PLAYER::PLAYER_PED_ID(), Local_186, -1203.236f, -582.1973f, 25.33076f, -1212.64f, -571.0089f, 32.30634f, 1.5f, -1202.559f, -583.1415f, 24.33017f, -1213.059f, -570.6243f, 30.30767f, 20f, 750);
			break;
	}
}

void func_559(int iParam0, char* sParam1, int iParam2, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10, struct<3> Param11, struct<3> Param14, float fParam17, int iParam18)//Position - 0x6194C
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam2))
			{
				iParam0->f_17 = GlobalFunc_156(*iParam0, iParam2, 1);
				func_427(*iParam0, iParam2, &(iParam0->f_13), &(iParam0->f_11), iParam18);
				switch (iParam0->f_15)
				{
					case 0:
						func_405(iParam0, 4);
						break;
					
					case 4:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if ((((iLocal_511 == 1 || PED::IS_PED_IN_COMBAT(*iParam0, 0)) || func_556(*iParam0, iParam2)) || func_555(*iParam0, iParam2, iParam0->f_17, iParam0->f_13)) || func_552(*iParam0, iParam2, iParam0->f_17, iParam0->f_13))
						{
							func_405(iParam0, 24);
						}
						if (iParam0->f_13 == 1)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, Param4, Param7, fParam10, 0, 1, 0))
							{
								func_405(iParam0, 24);
							}
							if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
							{
								if (bLocal_524 == 0 && iParam0->f_17 < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
									{
										TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
										GlobalFunc_5653(*iParam0, "MOVE_AWAY_WARNING", sParam1, 6);
										iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
									}
								}
							}
						}
						break;
					
					case 25:
						if (iParam0->f_14 == 0)
						{
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 1);
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_ANGLED_DEFENSIVE_AREA(*iParam0, Param11, Param14, fParam17, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 28, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 43, 1);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0.5f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam2, 67108864, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if (iParam0->f_13 == 1)
						{
							if (GlobalFunc_1461(iParam2, iParam3, 0))
							{
								if (iParam0->f_17 < 20f)
								{
									if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
									{
										if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
										{
											if (VEHICLE::IS_VEHICLE_STOPPED(iParam3))
											{
												TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
												GlobalFunc_5653(*iParam0, "GET_OUT_OF_THE_CAR", sParam1, 6);
												iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
											}
											else
											{
												TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
												GlobalFunc_5653(*iParam0, "STOP_THE_CAR", sParam1, 6);
												iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(10000, 15000));
											}
										}
									}
								}
							}
						}
						break;
					
					case 24:
						if (iParam0->f_14 == 0)
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 28, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 43, 1);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0.2f);
							GlobalFunc_5653(*iParam0, "FREEZE", sParam1, 6);
							TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
							if (!PED::IS_PED_IN_COMBAT(*iParam0, iParam2))
							{
								TASK::TASK_COMBAT_PED(*iParam0, iParam2, 67108864, 16);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iLocal_511 = 1;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			iParam0->f_15 = 1;
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_404(iParam0);
				func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
			}
		}
	}
}

void func_560()//Position - 0x61D2D
{
	var uVar0;
	
	switch (Local_96.f_9)
	{
		case 0:
			if (!MISC::IS_BIT_SET(Global_86817, 1) && !MISC::IS_BIT_SET(Global_86817, 3))
			{
				Local_96.f_9++;
			}
			else if (MISC::IS_BIT_SET(Global_86817, 1) && MISC::IS_BIT_SET(Global_86817, 0))
			{
				Local_96.f_9 = 10;
			}
			break;
		
		case 1:
			Local_96.f_2 = { -1105.23f, -491.2f, 34.83f };
			Local_96.f_5 = 206.1382f;
			Local_96.f_6 = joaat("u_m_m_spyactor");
			Local_96.f_9++;
			break;
		
		case 2:
			if (func_441(&Local_96, 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1))
			{
				if (!PED::IS_PED_INJURED(Local_96))
				{
					if (MISC::IS_BIT_SET(Global_86817, 0))
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_96, 4, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_96, 3, 1, 0, 0);
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(Local_96, 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(Local_96, 3, 0, 0, 0);
					}
				}
				STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actor");
				Local_96.f_16 = 0;
				Local_96.f_12 = 0;
				Local_96.f_9++;
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1177.465f, -508.0639f, 36.56689f, 28f, 16f, 8f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_221))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_221))
					{
						ENTITY::SET_ENTITY_ROTATION(Local_221, Local_221.f_4, 2, 1);
					}
				}
				if (!PED::IS_PED_INJURED(Local_96))
				{
					ENTITY::SET_ENTITY_HEALTH(Local_96, 101);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, "misscarsteal4@actor", "stumble", -1111.76f, -505.9f, 35.035f, 0f, 0f, -164f, 1000f, -1000f, -1, 12288, 0.1f, 2, 0);
					TASK::TASK_PLAY_ANIM(0, "misscarsteal4@actor", "dazed_idle", 1000f, -8f, -1, 12289, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(Local_96, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
				Local_96.f_10 = 0;
				Local_96.f_9++;
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_96))
			{
				Local_96.f_17 = GlobalFunc_156(Local_96, PLAYER::PLAYER_PED_ID(), 1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_96))
				{
					if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_186))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_96, Local_186, 0))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_186, Local_96))
							{
								if (Local_96.f_10 == 0)
								{
									Local_96.f_10 = MISC::GET_GAME_TIMER();
								}
								else if (GlobalFunc_2521(300, Local_96.f_10))
								{
									PED::SET_PED_TO_RAGDOLL(Local_96, 10000, 20000, 0, 1, 1, 0);
									PED::APPLY_DAMAGE_TO_PED(Local_96, 10, 1);
									Local_96.f_16 = 6;
								}
							}
						}
					}
					else if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_96, PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_96))
						{
							if (!PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
							{
								PED::SET_PED_TO_RAGDOLL(Local_96, 10000, 20000, 0, 1, 1, 0);
								PED::APPLY_DAMAGE_TO_PED(Local_96, 10, 1);
								Local_96.f_16 = 6;
							}
						}
					}
				}
				else if (Local_96.f_16 == 0)
				{
					Local_96.f_16 = func_404(&Local_96);
					if (Local_96.f_16 == 5)
					{
						GlobalFunc_553(124);
						RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
					}
				}
				if (Local_96.f_17 > 200f)
				{
					if (bLocal_524 == 0)
					{
						STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_96);
					}
				}
			}
			break;
		
		case 10:
			if (MISC::IS_BIT_SET(Global_86817, 1) && MISC::IS_BIT_SET(Global_86817, 0))
			{
				if (func_441(&Local_96, 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1))
				{
					if (!PED::IS_PED_INJURED(Local_96))
					{
						if (MISC::IS_BIT_SET(Global_86817, 0))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_96, 4, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_96, 3, 1, 0, 0);
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_96, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_96, 3, 0, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_221))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_221))
							{
								ENTITY::SET_ENTITY_ROTATION(Local_221, 0f, 0f, 27f, 2, 1);
							}
						}
						STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
						iLocal_544 = 0;
						Local_96.f_9 = 11;
					}
				}
			}
			break;
		
		case 11:
			if (ENTITY::DOES_ENTITY_EXIST(Local_96))
			{
				Local_96.f_17 = GlobalFunc_156(Local_96, PLAYER::PLAYER_PED_ID(), 1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_96))
				{
					switch (iLocal_544)
					{
						case 0:
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_603))
							{
								STREAMING::REQUEST_ANIM_DICT("dead");
								if (STREAMING::HAS_ANIM_DICT_LOADED("dead"))
								{
									if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_603))
									{
										iLocal_603 = PED::CREATE_SYNCHRONIZED_SCENE(-1114.511f, -501.777f, 35.81f, 0f, 0f, 69.48f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(Local_96, iLocal_603, "dead", "dead_d", 1000f, -1000f, 4, 145, 1148846080, 0);
										PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_96, 0, 0);
										AUDIO::STOP_PED_SPEAKING(Local_96, 1);
										ENTITY::SET_ENTITY_INVINCIBLE(Local_96, 1);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_96, 1);
									}
								}
							}
							else
							{
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 4);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 128);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 32);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 8192);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 1);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 16);
								PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 64);
								iLocal_544++;
							}
							break;
						
						case 1:
							if (Local_96.f_17 > 200f)
							{
								if (bLocal_524 == 0)
								{
									STREAMING::REMOVE_ANIM_DICT("dead");
									STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_96);
								}
							}
							break;
						}
					}
			}
			break;
	}
}

void func_561(int iParam0)//Position - 0x62247
{
	switch (*iParam0)
	{
		case 0:
			*iParam0++;
			break;
		
		case 1:
			if ((((Local_912[2 /*18*/].f_15 == 1 || func_441(&(Local_912[2 /*18*/]), 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1)) && (Local_912[3 /*18*/].f_15 == 1 || func_441(&(Local_912[3 /*18*/]), 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1))) && (Local_912[4 /*18*/].f_15 == 1 || func_441(&(Local_912[4 /*18*/]), 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1))) && (Local_912[5 /*18*/].f_15 == 1 || func_441(&(Local_912[5 /*18*/]), 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1)))
			{
				if (!PED::IS_PED_INJURED(Local_912[2 /*18*/]))
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_912[2 /*18*/], 0, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_912[2 /*18*/], 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_912[2 /*18*/], 4, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_912[2 /*18*/], 8, 0, 0, 0);
				}
				switch (iLocal_93)
				{
					case 0:
					case 2:
						if (!PED::IS_PED_INJURED(Local_912[2 /*18*/]))
						{
							func_405(&(Local_912[2 /*18*/]), 10);
						}
						if (!PED::IS_PED_INJURED(Local_912[3 /*18*/]))
						{
							func_405(&(Local_912[3 /*18*/]), 10);
						}
						if (!PED::IS_PED_INJURED(Local_912[4 /*18*/]))
						{
							func_405(&(Local_912[4 /*18*/]), 10);
						}
						if (!PED::IS_PED_INJURED(Local_912[5 /*18*/]))
						{
							func_405(&(Local_912[5 /*18*/]), 10);
						}
						break;
					
					case 3:
						if (!PED::IS_PED_INJURED(Local_912[2 /*18*/]))
						{
							if (((Local_912[2 /*18*/].f_15 != 1 && Local_912[2 /*18*/].f_15 != 19) && Local_912[2 /*18*/].f_15 != 3) && Local_912[2 /*18*/].f_15 != 12)
							{
								func_405(&(Local_912[2 /*18*/]), 3);
							}
						}
						if (!PED::IS_PED_INJURED(Local_912[3 /*18*/]))
						{
							if (Local_912[3 /*18*/].f_15 != 1 && Local_912[3 /*18*/].f_15 != 19)
							{
								func_405(&(Local_912[3 /*18*/]), 10);
							}
						}
						if (!PED::IS_PED_INJURED(Local_912[4 /*18*/]))
						{
							if (Local_912[4 /*18*/].f_15 != 1 && Local_912[4 /*18*/].f_15 != 19)
							{
								func_405(&(Local_912[4 /*18*/]), 10);
							}
						}
						if (!PED::IS_PED_INJURED(Local_912[5 /*18*/]))
						{
							if (Local_912[5 /*18*/].f_15 != 1 && Local_912[5 /*18*/].f_15 != 19)
							{
								func_405(&(Local_912[5 /*18*/]), 10);
							}
						}
						break;
				}
				*iParam0++;
			}
			break;
		
		case 2:
			func_562(&(Local_912[2 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_186, -1170.044f, -511.5512f, 34.5666f, "PROP_HUMAN_MOVIE_STUDIO_LIGHT", 1);
			func_562(&(Local_912[3 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_186, -1186.86f, -505.8f, 34.58f, "PROP_HUMAN_MOVIE_STUDIO_LIGHT", 0);
			func_562(&(Local_912[4 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_186, -1178.57f, -488.17f, 34.55f, "PROP_HUMAN_MOVIE_BULB", 0);
			func_562(&(Local_912[5 /*18*/]), PLAYER::PLAYER_PED_ID(), Local_186, -1175.81f, -483.17f, 34.54f, "PROP_HUMAN_MOVIE_STUDIO_LIGHT", 0);
			break;
	}
}

void func_562(int iParam0, int iParam1, int iParam2, struct<3> Param3, char* sParam6, int iParam7)//Position - 0x62588
{
	var uVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	int iVar8;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = GlobalFunc_156(*iParam0, iParam1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				func_427(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), 1000);
				switch (iParam0->f_15)
				{
					case 10:
						if (iParam0->f_14 == 0)
						{
							if (!PED::IS_PED_USING_SCENARIO(*iParam0, sParam6))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(Param3, 1.5f, 0))
								{
									TASK::CLEAR_PED_TASKS(*iParam0);
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(*iParam0, Param3, 1.5f, 0);
								}
								iParam0->f_10 = MISC::GET_GAME_TIMER();
								iParam0->f_14 = 1;
							}
						}
						if (iParam0->f_14 == 1)
						{
							if (PED::IS_PED_USING_SCENARIO(*iParam0, sParam6) && TASK::IS_PED_ACTIVE_IN_SCENARIO(*iParam0))
							{
								func_405(iParam0, 11);
							}
							else if (GlobalFunc_2521(3000, iParam0->f_10))
							{
								func_405(iParam0, 10);
							}
						}
						if ((iLocal_530 == 1 || iLocal_523 == 1) || func_429(*iParam0, iParam1))
						{
							func_405(iParam0, 19);
						}
						break;
					
					case 11:
						if (iParam0->f_14 == 0)
						{
							iParam0->f_14 = 1;
						}
						if (!PED::IS_PED_USING_SCENARIO(*iParam0, sParam6))
						{
							func_405(iParam0, 10);
						}
						if ((iLocal_530 == 1 || iLocal_523 == 1) || func_429(*iParam0, iParam1))
						{
							func_405(iParam0, 19);
						}
						if (iParam0->f_13 == 1 && iParam0->f_17 < 15f)
						{
							if (((PED::IS_PED_SHOOTING(iParam1) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *iParam0)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *iParam0)) || WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &uVar0, 1))
							{
								func_405(iParam0, 19);
							}
						}
						if (iParam7 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_USING(iParam1)))
							{
								if (PED::GET_VEHICLE_PED_IS_USING(iParam1) == iParam2)
								{
									if (GlobalFunc_156(iParam1, iParam2, 1) < 2f)
									{
										func_405(iParam0, 3);
									}
								}
							}
							if (GlobalFunc_1461(iParam1, iParam2, 1))
							{
								func_405(iParam0, 3);
							}
						}
						break;
					
					case 3:
						if (iParam0->f_14 == 0)
						{
							STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
							if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@director_grip"))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(*iParam0);
								TASK::CLEAR_PED_TASKS(*iParam0);
								ENTITY::SET_ENTITY_HEALTH(*iParam0, 105);
								Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("misscarsteal4@director_grip", "mcs_2_loop_grip1", Local_56, Local_59, 0, 2) };
								Var4 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("misscarsteal4@director_grip", "mcs_2_loop_grip1", Local_56, Local_59, 0, 2) };
								Var1 = { -1175.94f, -508.15f, 34.57f };
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), Var1, 1) < 7.5f)
								{
									TASK::CLEAR_SEQUENCE_TASK(&uVar7);
									TASK::OPEN_SEQUENCE_TASK(&uVar7);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var1, 2f, 40000, 0f, 1028, Var4.f_2);
									TASK::CLOSE_SEQUENCE_TASK(uVar7);
									TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar7);
									TASK::CLEAR_SEQUENCE_TASK(&uVar7);
									iParam0->f_14 = 1;
								}
								else
								{
									func_405(iParam0, 24);
								}
							}
						}
						if (iParam0->f_14 == 1)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) == 1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*iParam0, 1), -1175.56f, -507.77f, 34.57f, 1) < 1.5f)
								{
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 3))
									{
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 1.5f, -1.5f, -1, 49, 0, 0, 0, 0);
										TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, -1, 2048, 2);
									}
								}
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) == 1)
							{
								if (GlobalFunc_1461(iParam1, iParam2, 0))
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_186, 1), Local_186.f_2, 1) > 1.75f)
									{
										func_405(iParam0, 13);
									}
								}
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 242628503) == 7)
							{
								GlobalFunc_5653(*iParam0, "GENERIC_FRIGHTENED_HIGH", "A_M_Y_Vinewood_03_White_FULL_01 ", 9);
								func_405(iParam0, 12);
							}
						}
						break;
					
					case 12:
						if (iParam0->f_14 == 0)
						{
							ENTITY::SET_ENTITY_HEALTH(*iParam0, 105);
							PED::SET_PED_CAN_BE_TARGETTED(*iParam0, 1);
							TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 1.5f, -1.5f, -1, 1, 0, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam1, -1, 2048, 2);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_9 = 0;
							iParam0->f_14 = 1;
						}
						if (iParam0->f_9 == 0)
						{
							if (GlobalFunc_2521(250, iParam0->f_10))
							{
								TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
								iParam0->f_9 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 3))
						{
							if (GlobalFunc_2521(5000, iParam0->f_10))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
								{
									func_405(iParam0, 13);
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam2, 0))
							{
								func_405(iParam0, 24);
							}
							else if (iParam0->f_17 < 2.25f)
							{
								func_405(iParam0, 24);
							}
						}
						break;
					
					case 13:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_CLEAR_LOOK_AT(*iParam0);
							TASK::TASK_ENTER_VEHICLE(*iParam0, iParam2, -1, -1, 2f, 655433, 0);
							iParam0->f_14 = 1;
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam2, 0))
							{
								func_405(iParam0, 24);
							}
						}
						break;
					
					case 24:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_CLEAR_LOOK_AT(*iParam0);
							TASK::CLEAR_PED_SECONDARY_TASK(*iParam0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 1);
							PED::SET_COMBAT_FLOAT(*iParam0, 7, 1f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 0, 16);
							iParam0->f_14 = 1;
						}
						if (iParam0->f_13 == 1)
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), *iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), *iParam0))
							{
								if (WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar8, 1))
								{
									if (iVar8 != joaat("weapon_unarmed"))
									{
										func_405(iParam0, 19);
									}
								}
							}
						}
						break;
					
					case 19:
						if (iParam0->f_14 == 0)
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, 1);
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
							{
								GlobalFunc_5653(*iParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 9);
							}
							TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							PED::SET_PED_KEEP_TASK(*iParam0, 1);
							iLocal_522 = 1;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (bLocal_524 == 0)
			{
				if (iParam0->f_17 > 300f)
				{
					func_405(iParam0, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				}
			}
			if (iParam0->f_15 == 19)
			{
				if (iParam0->f_17 > 200f)
				{
					func_405(iParam0, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				}
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			iParam0->f_15 = 1;
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_404(iParam0);
				func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
			}
			if (iParam0->f_17 > 200f)
			{
				func_405(iParam0, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

void func_563(char* sParam0)//Position - 0x62C5C
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!func_408(sParam0))
		{
			if (GlobalFunc_663(sParam0, 0, 0))
			{
				func_438(sParam0, 1);
			}
		}
		else if (!GlobalFunc_663(sParam0, 0, 0))
		{
			StringCopy(sParam0, "", 16);
		}
	}
}

int func_564(int iParam0)//Position - 0x62CA1
{
	func_563(&cLocal_81);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(Local_186, 0))
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
		}
	}
	func_561(&iLocal_543);
	func_568(&iLocal_544);
	func_566(&iLocal_554);
	func_428(&Local_150, PLAYER::PLAYER_PED_ID(), Local_186);
	func_558(&iLocal_551);
	func_550(&iLocal_549);
	if (!func_408("CAR4_HALERT"))
	{
		if (iLocal_511 == 1)
		{
			func_486("CAR4_HALERT", 0, 1, 10000, 1);
			if (iLocal_598 == 0)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_SET_ALERT"))
				{
					iLocal_598 = 1;
				}
			}
		}
	}
	switch (*iParam0)
	{
		case 0:
			if (!HUD::DOES_BLIP_EXIST(Local_186.f_1))
			{
				Local_186.f_1 = GlobalFunc_6783(Local_186, 0, 0);
				func_488(&cLocal_81, 7500, 1);
			}
			iLocal_525 = 0;
			*iParam0++;
			break;
		
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1187.176f, -501.91f, 33.41834f, -1172.835f, -508.602f, 37.56646f, 12f, 0, 1, 0))
			{
				if (iLocal_598 == 0)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_SET_ALERT"))
					{
						iLocal_598 = 1;
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_186, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(8f, 10f, 4);
					if (HUD::DOES_BLIP_EXIST(Local_186.f_1))
					{
						HUD::REMOVE_BLIP(&(Local_186.f_1));
					}
					if (!GlobalFunc_1461(Local_150, Local_186, 0))
					{
						func_565(4);
					}
					if (GlobalFunc_111())
					{
						GlobalFunc_5105();
					}
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DRIVE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_INSIDE_STUDIO"))
					{
						AUDIO::STOP_AUDIO_SCENE("CAR_3_INSIDE_STUDIO");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_ESCAPE_SECURITY"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_3_ESCAPE_SECURITY");
					}
					func_320(&Local_96, 1, 1, 1);
					STREAMING::REMOVE_ANIM_DICT("dead");
					iLocal_525 = 1;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_565(int iParam0)//Position - 0x62E66
{
	MISC::SET_BIT(&Global_86817, iParam0);
}

void func_566(int iParam0)//Position - 0x62E78
{
	switch (*iParam0)
	{
		case 0:
			*iParam0++;
			break;
		
		case 1:
			STREAMING::REQUEST_CLIP_SET("move_injured_generic");
			STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
			if (STREAMING::HAS_CLIP_SET_LOADED("move_injured_generic") && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@director_grip"))
			{
				if (func_567(&Local_213, 0) && func_567(&Local_237, 0))
				{
					if (func_441(&(Local_912[1 /*18*/]), 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1) && func_441(&(Local_912[0 /*18*/]), 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1))
					{
						if (!PED::IS_PED_INJURED(Local_912[0 /*18*/]))
						{
							PED::SET_PED_PROP_INDEX(Local_912[0 /*18*/], 1, 0, 0, false);
							GlobalFunc_173(&uLocal_336, 7, Local_912[0 /*18*/], "CST4DIRECTOR", 0, 1);
						}
						if (!PED::IS_PED_INJURED(Local_912[1 /*18*/]))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_912[1 /*18*/], 0, 1, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_912[1 /*18*/], 3, 1, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_912[1 /*18*/], 4, 0, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_912[1 /*18*/], 8, 2, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_237))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_237))
							{
								if (!ENTITY::IS_ENTITY_ATTACHED(Local_237))
								{
									if (!PED::IS_PED_INJURED(Local_912[1 /*18*/]))
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_237, Local_912[1 /*18*/], PED::GET_PED_BONE_INDEX(Local_912[1 /*18*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
							}
						}
						func_405(&(Local_912[1 /*18*/]), 5);
						func_405(&(Local_912[0 /*18*/]), 5);
						func_432(Local_912[1 /*18*/], 30f, 5f, 90f, -1028390912, 1119092736);
						func_432(Local_912[0 /*18*/], 30f, 5f, 90f, -1028390912, 1119092736);
						*iParam0++;
					}
				}
			}
			break;
		
		case 2:
			func_407(&(Local_912[0 /*18*/]), PLAYER::PLAYER_PED_ID());
			func_402(&(Local_912[1 /*18*/]), PLAYER::PLAYER_PED_ID());
			break;
	}
}

int func_567(int iParam0, int iParam1)//Position - 0x63062
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_7);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_7))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_7, iParam0->f_1, 1, 1, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, 1);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, iParam0->f_4, 2, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, iParam0->f_1, 0, 0, 1);
			if (iParam1 == 1)
			{
				ENTITY::FREEZE_ENTITY_POSITION(*iParam0, iParam1);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_7);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_568(int iParam0)//Position - 0x630E9
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_96))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_96))
		{
			switch (*iParam0)
			{
				case 0:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_603))
					{
						STREAMING::REQUEST_ANIM_DICT("dead");
						if (STREAMING::HAS_ANIM_DICT_LOADED("dead"))
						{
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_603))
							{
								iLocal_603 = PED::CREATE_SYNCHRONIZED_SCENE(-1114.511f, -501.777f, 35.81f, 0f, 0f, 69.48f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_96, iLocal_603, "dead", "dead_d", 1000f, -1000f, 4, 145, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_96, 0, 0);
								AUDIO::STOP_PED_SPEAKING(Local_96, 1);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_96, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_96, 1);
							}
						}
					}
					else
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 4);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 128);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 32);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 8192);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 16);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_96, 64);
						*iParam0++;
					}
					break;
				}
			}
	}
}

int func_569(int iParam0)//Position - 0x631E3
{
	switch (*iParam0)
	{
		case 0:
			if (func_316("car_4_mcs_1"))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, joaat("player_one"), 0);
				}
				if (!PED::IS_PED_INJURED(Local_96))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_96, "spy_actor", 0, joaat("u_m_m_spyactor"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_221))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_221))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_221, "Actors_trailer_door", 0, Local_221.f_7, 0);
					}
				}
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_8316(1, 1, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@toilet");
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@aliens");
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@meltdown");
				func_320(&Local_132, 1, 1, 1);
				func_320(&Local_168, 1, 1, 1);
				func_398(&Local_635, 1, 1, 1);
				func_398(&Local_1021, 1, 1, 1);
				func_399(&Local_253, 1, 1);
				func_399(&Local_261, 1, 1);
				func_399(&Local_245, 1, 0);
				if (ENTITY::DOES_ENTITY_EXIST(Local_229))
				{
					ENTITY::REMOVE_MODEL_HIDE(Local_229.f_1, 1f, Local_229.f_7, 0);
					func_399(&Local_229, 1, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_501))
				{
					HUD::REMOVE_BLIP(&uLocal_501);
				}
				MISC::CLEAR_AREA_OF_PEDS(Local_269, 25f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_269, 25f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(Local_269, 100f, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_269, 25f, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_269, 25f);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("dead");
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) >= 17000f)
				{
					PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (iLocal_517 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 10000)
					{
						func_3(1);
						if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("spy_actor", 0))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("spy_actor", 4, 1, 0, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("spy_actor", 3, 1, 0, 0);
						}
						iLocal_517 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("spy_actor", 0))
			{
				if (!PED::IS_PED_INJURED(Local_96))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("dead"))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_603))
						{
							iLocal_603 = PED::CREATE_SYNCHRONIZED_SCENE(-1114.511f, -501.777f, 35.81f, 0f, 0f, 69.48f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_96, iLocal_603, "dead", "dead_d", 1000f, -1000f, 4, 145, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_96, 0, 0);
							AUDIO::STOP_PED_SPEAKING(Local_96, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_96, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_96, 1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Actors_trailer_door", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_221))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_221))
					{
						ENTITY::FREEZE_ENTITY_POSITION(Local_221, 1);
					}
				}
			}
			if (iLocal_595 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 10500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_TRAILER"))
						{
							iLocal_595 = 1;
						}
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1500, 0, 1, 0);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				GlobalFunc_8316(0, 1, 1, 0);
				func_565(0);
				return 1;
			}
			else if (iLocal_510 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_510 = 1;
				}
			}
			break;
	}
	return 0;
}


void func_571()//Position - 0x635FD
{
	iLocal_502 = 1;
	iLocal_503 = 0;
	iLocal_509 = 0;
	iLocal_510 = 0;
	iLocal_513 = 0;
	iLocal_514 = 0;
	iLocal_517 = 0;
	iLocal_518 = 0;
	iLocal_519 = 0;
	iLocal_522 = 0;
	iLocal_520 = 0;
	iLocal_521 = 0;
	iLocal_523 = 0;
	Local_96.f_9 = 0;
	iLocal_543 = 0;
	iLocal_544 = 0;
	iLocal_545 = 0;
	iLocal_548 = 0;
	iLocal_546 = 0;
	iLocal_547 = 0;
	iLocal_549 = 0;
	iLocal_550 = 0;
	iLocal_551 = 0;
	iLocal_552 = 0;
	iLocal_553 = 0;
	iLocal_554 = 0;
	iLocal_557 = 0;
	iLocal_558 = 0;
	iLocal_559 = 0;
	iLocal_568 = 0;
	iLocal_569 = 0;
	iLocal_570 = 0;
	iLocal_571 = 0;
	iLocal_572 = 0;
	iLocal_573 = 0;
	iLocal_574 = 0;
	iLocal_579 = 0;
	iLocal_580 = 0;
	iLocal_581 = 0;
	iLocal_515 = 0;
	iLocal_516 = 0;
	iLocal_512 = 0;
	iLocal_583 = 0;
	iLocal_584 = 0;
	iLocal_585 = 0;
	iLocal_586 = 0;
	iLocal_587 = 0;
	iLocal_588 = 0;
	fLocal_589 = 0f;
	iLocal_590 = 0;
	iLocal_560 = 0;
	iLocal_561 = 0;
	iLocal_562 = 0;
	iLocal_563 = 0;
	iLocal_575 = 0;
	iLocal_592 = 0;
	iLocal_593 = 0;
	iLocal_594 = 0;
	iLocal_595 = 0;
	iLocal_596 = 0;
	iLocal_597 = 0;
	iLocal_598 = 0;
	iLocal_609 = 0;
	iLocal_610 = 0;
}

int func_572(var uParam0)//Position - 0x63706
{
	if (bLocal_524)
	{
		if (iLocal_1291 == 0)
		{
			RECORDING::_0x293220DA1B46CEBC(3f, 4f, 2);
			iLocal_1291 = 1;
		}
	}
	func_561(&iLocal_543);
	func_566(&iLocal_554);
	func_428(&Local_150, PLAYER::PLAYER_PED_ID(), Local_186);
	func_596(&iLocal_545);
	func_591(&iLocal_546);
	func_590(&iLocal_548);
	func_586(&Local_96, PLAYER::PLAYER_PED_ID());
	func_584(&Local_168, PLAYER::PLAYER_PED_ID());
	func_558(&iLocal_551);
	func_550(&iLocal_549);
	func_582(&iLocal_552);
	func_580(&iLocal_553);
	func_579();
	func_578();
	if (!func_408("CST4_SCALL"))
	{
		if (!GlobalFunc_111())
		{
			if (GlobalFunc_10638(&uLocal_336, 45, "CST4AUD", "CST4_SCALL", 9, 1, 0, 0, 0))
			{
				func_438("CST4_SCALL", 1);
			}
		}
	}
	if (iLocal_594 == 0)
	{
		if (func_408("CST4_SCALL"))
		{
			if (!GlobalFunc_111())
			{
				if ((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !GlobalFunc_665(45)) && !GlobalFunc_889(45))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_MISSION_START"))
					{
						iLocal_594 = 1;
					}
				}
			}
		}
	}
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_INSIDE_STUDIO"))
	{
		if (bLocal_524 == 1)
		{
			AUDIO::START_AUDIO_SCENE("CAR_3_INSIDE_STUDIO");
		}
	}
	if (!func_408("CAR4_CDOOR"))
	{
		if (func_408("CST4_SCALL"))
		{
			if (!GlobalFunc_111())
			{
				if ((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !GlobalFunc_665(45)) && !GlobalFunc_889(45))
				{
					if (bLocal_524 == 0)
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_501))
						{
							uLocal_501 = HUD::ADD_BLIP_FOR_COORD(-1091f, -433.06f, 36.63f);
							func_488("CAR4_CDOOR", 7500, 1);
						}
					}
					else
					{
						func_438("CAR4_CDOOR", 1);
					}
				}
			}
		}
	}
	if (!func_408("CAR4_HALERT"))
	{
		if (iLocal_594)
		{
			if (iLocal_511 == 1)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_501))
				{
					HUD::REMOVE_BLIP(&uLocal_501);
				}
				if (HUD::DOES_BLIP_EXIST(Local_96.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_96.f_1));
				}
				if (iLocal_598 == 0)
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("CAR3_SET_ALERT"))
					{
						iLocal_598 = 1;
					}
				}
				func_486("CAR4_HALERT", 0, 1, 10000, 1);
				if (!GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_186, 1))
				{
					if (GlobalFunc_5172(&Local_273, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					func_488("CAR4_LCAR", 7500, 1);
					GlobalFunc_2529(&iLocal_601);
					GlobalFunc_2528(&iLocal_600, Local_186.f_2, 3f);
				}
			}
		}
	}
	if (!func_408("CMN_GENGETIN"))
	{
		if (func_408("CAR4_LCAR"))
		{
			if (GlobalFunc_2527(iLocal_600))
			{
				if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_600))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_501))
					{
						HUD::REMOVE_BLIP(&uLocal_501);
					}
					if (GlobalFunc_5172(&Local_273, 0))
					{
						HUD::CLEAR_PRINTS();
					}
					GlobalFunc_2529(&iLocal_600);
					func_488("CMN_GENGETIN", 7500, 1);
					if (!HUD::DOES_BLIP_EXIST(Local_186.f_1))
					{
						Local_186.f_1 = GlobalFunc_6783(Local_186, 0, 0);
					}
				}
			}
		}
	}
	if (!func_408("CAR4_HKO"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_96))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_96))
			{
				if (Local_96.f_15 != 19)
				{
					if (HUD::DOES_BLIP_EXIST(Local_96.f_1))
					{
						if (GlobalFunc_2527(iLocal_601))
						{
							if (GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_601))
							{
								func_486("CAR4_HKO", 0, 1, 10000, 1);
								GlobalFunc_2529(&iLocal_601);
							}
						}
					}
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_96))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_96))
				{
					if (!func_408("CAR4_TMSTA"))
					{
						if (!HUD::DOES_BLIP_EXIST(Local_96.f_1))
						{
							if (bLocal_524 == 1 && iLocal_511 == 0)
							{
								if (func_408("CST4_SCALL"))
								{
									if (!GlobalFunc_111())
									{
										if ((!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() && !GlobalFunc_665(45)) && !GlobalFunc_889(45))
										{
											HUD::CLEAR_PRINTS();
											if (HUD::DOES_BLIP_EXIST(uLocal_501))
											{
												HUD::REMOVE_BLIP(&uLocal_501);
											}
											Local_96.f_1 = GlobalFunc_6797(Local_96, 1, 145);
											func_488("CAR4_TMSTA", 7500, 1);
										}
									}
								}
							}
						}
					}
				}
				if (ENTITY::IS_ENTITY_DEAD(Local_96))
				{
					if ((Local_96.f_16 == 2 || Local_96.f_16 == 3) || Local_96.f_16 == 4)
					{
						if (Local_96.f_16 == 2)
						{
							func_565(2);
							func_573(1);
						}
						else if (Local_96.f_16 == 3)
						{
							func_565(2);
							switch (iLocal_606)
							{
								case joaat("weapon_knife"):
								case joaat("weapon_bottle"):
								case joaat("weapon_dagger"):
									func_565(1);
									break;
								
								default:
									func_573(1);
									break;
							}
						}
						else if (Local_96.f_16 == 4)
						{
							func_573(2);
							func_565(1);
						}
						if (!MISC::IS_BIT_SET(Global_86817, 1))
						{
							GlobalFunc_553(122);
						}
						AUDIO::STOP_AUDIO_SCENE("CAR_3_TAKE_OUT_ACTOR");
						RECORDING::_0x293220DA1B46CEBC(6f, 0f, 3);
						*uParam0++;
					}
				}
			}
			break;
		
		case 1:
			if (iLocal_511 == 0 && iLocal_512 == 0)
			{
				if (!GlobalFunc_111())
				{
					if (Local_96.f_17 < 5f)
					{
						GlobalFunc_2529(&iLocal_600);
						GlobalFunc_2529(&iLocal_601);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_96);
						return 1;
					}
				}
			}
			break;
	}
	if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_186, 0))
	{
		if (!GlobalFunc_1461(Local_150, Local_186, 0))
		{
			func_565(4);
		}
		if (GlobalFunc_663("CMN_GENGETIN", 0, 0))
		{
			HUD::CLEAR_PRINTS();
		}
		if (HUD::DOES_BLIP_EXIST(Local_186.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_186.f_1));
		}
		if (HUD::DOES_BLIP_EXIST(Local_96.f_1))
		{
			HUD::REMOVE_BLIP(&(Local_96.f_1));
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_501))
		{
			HUD::REMOVE_BLIP(&uLocal_501);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_96))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_96))
			{
				func_565(3);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_96);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_168))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_168);
		}
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@aliens");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@meltdown");
		func_398(&Local_635, 0, 0, 0);
		func_398(&Local_1021, 0, 0, 0);
		func_399(&Local_253, 0, 1);
		func_399(&Local_261, 0, 1);
		func_399(&Local_245, 0, 0);
		GlobalFunc_2529(&iLocal_600);
		GlobalFunc_2529(&iLocal_601);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_INSIDE_STUDIO"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_3_INSIDE_STUDIO");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_TAKE_OUT_ACTOR"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_3_TAKE_OUT_ACTOR");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_ESCAPE_SECURITY"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_3_ESCAPE_SECURITY");
		}
		iLocal_525 = 1;
		AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DRIVE");
		CUTSCENE::REMOVE_CUTSCENE();
		return 1;
	}
	return 0;
}

void func_573(int iParam0)//Position - 0x63D19
{
	MISC::CLEAR_BIT(&Global_86817, iParam0);
}





void func_578()//Position - 0x63DD3
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_96))
	{
		if ((GlobalFunc_331() || GlobalFunc_2233()) || iLocal_511 == 1)
		{
			if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("car_4_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		else if (bLocal_524 == 1 && Local_96.f_17 < 50f)
		{
			CUTSCENE::REQUEST_CUTSCENE("car_4_mcs_1", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("car_4_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
}

void func_579()//Position - 0x63E85
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	
	if (iLocal_513 == 0)
	{
		STREAMING::REQUEST_ANIM_DICT("missarmenian3_tryopendoor");
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1089.873f, -432.2885f, 35.52869f, -1088.674f, -431.6575f, 38.12727f, 1.7f, 0, 1, 0))
		{
			if (TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(PLAYER::PLAYER_PED_ID(), 1) };
				if (Var0.f_1 > 0f && (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 130f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 90f))
				{
					if (!GlobalFunc_116(0))
					{
						if (STREAMING::HAS_ANIM_DICT_LOADED("missarmenian3_tryopendoor"))
						{
							if (!MISC::IS_AREA_OCCUPIED((-1088.918f - 2f), (-431.8481f - 2f), (37.12714f - 1.5f), (-1088.918f + 2f), (-431.8481f + 2f), (37.12714f + 1.5f), 0, 1, 0, 0, 0, PLAYER::PLAYER_PED_ID(), 0))
							{
								Var3 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("missarmenian3_tryopendoor", "lockeddoor_tryopen", -1090.1f, -431.85f, 35.62f, 0f, 0f, 120f, 0, 2) };
								Var6 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION("missarmenian3_tryopendoor", "lockeddoor_tryopen", -1090.1f, -431.85f, 35.62f, 0f, 0f, 120f, 0, 2) };
								TASK::OPEN_SEQUENCE_TASK(&uVar9);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, Var3, 1f, -1, Var6.f_2, 1056964608);
								TASK::TASK_PLAY_ANIM_ADVANCED(0, "missarmenian3_tryopendoor", "lockeddoor_tryopen", -1090.1f, -431.85f, 35.62f, 0f, 0f, 120f, 1.5f, -1.5f, -1, 15872, 0f, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar9);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar9);
								TASK::CLEAR_SEQUENCE_TASK(&uVar9);
								WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
								iLocal_513 = 1;
								iLocal_514 = 0;
							}
							else
							{
								STREAMING::REMOVE_ANIM_DICT("missarmenian3_tryopendoor");
								iLocal_513 = 1;
								iLocal_514 = 1;
							}
						}
					}
				}
			}
		}
		if (bLocal_524 == 1 || iLocal_511 == 1)
		{
			iLocal_513 = 1;
		}
	}
	else if (iLocal_514 == 0)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missarmenian3_tryopendoor", "lockeddoor_tryopen", 3))
		{
			if ((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID())) || PAD::IS_CONTROL_PRESSED(0, 22))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				iLocal_514 = 1;
			}
		}
	}
	if (bLocal_524 == 1)
	{
		STREAMING::REMOVE_ANIM_DICT("missarmenian3_tryopendoor");
	}
}

void func_580(var uParam0)//Position - 0x640DD
{
	switch (*uParam0)
	{
		case 0:
			*uParam0++;
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_855[0 /*18*/]))
			{
				switch (iLocal_93)
				{
					case 0:
					case 2:
						break;
					
					case 3:
						break;
				}
				*uParam0++;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_855[0 /*18*/]))
			{
				STREAMING::REQUEST_MODEL(iLocal_48);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_48))
				{
					Local_855[0 /*18*/] = func_557(Local_855[0 /*18*/].f_2, Local_855[0 /*18*/].f_5, iLocal_48, -183807561, 200, joaat("weapon_pistol"));
					func_405(&(Local_855[0 /*18*/]), 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_48);
				}
			}
			break;
		
		case 2:
			func_581(&(Local_855[0 /*18*/]), cLocal_91, PLAYER::PLAYER_PED_ID(), 750);
			break;
	}
}

void func_581(int iParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x641B2
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam2))
			{
				iParam0->f_17 = GlobalFunc_156(*iParam0, iParam2, 1);
				func_427(*iParam0, iParam2, &(iParam0->f_13), &(iParam0->f_11), iParam3);
				switch (iParam0->f_15)
				{
					case 0:
						func_405(iParam0, 4);
						break;
					
					case 4:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if ((((((iLocal_511 == 1 || iLocal_520 == 1) || PED::IS_PED_IN_COMBAT(*iParam0, 0)) || func_556(*iParam0, iParam2)) || func_555(*iParam0, iParam2, iParam0->f_17, iParam0->f_13)) || func_553(*iParam0, iParam2, iParam0->f_17, iParam0->f_13)) || func_552(*iParam0, iParam2, iParam0->f_17, iParam0->f_13))
						{
							func_405(iParam0, 24);
						}
						if (iParam0->f_13 == 1)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam2, -1143.181f, -428.3729f, 35.00102f, -1125.562f, -426.1913f, 40.5457f, 1f, 0, 1, 0))
							{
								func_405(iParam0, 24);
							}
						}
						if (iLocal_521 == 1)
						{
							func_405(iParam0, 23);
						}
						break;
					
					case 23:
						PED::SET_PED_RESET_FLAG(*iParam0, 128, 1);
						if (iParam0->f_14 == 0)
						{
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 0);
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 1f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if ((((((iLocal_511 == 1 || iLocal_520 == 1) || GlobalFunc_2521(5000, iParam0->f_10)) || func_556(*iParam0, iParam2)) || func_555(*iParam0, iParam2, iParam0->f_17, iParam0->f_13)) || func_553(*iParam0, iParam2, iParam0->f_17, iParam0->f_13)) || func_552(*iParam0, iParam2, iParam0->f_17, iParam0->f_13))
						{
							func_405(iParam0, 24);
						}
						if (iParam0->f_13 == 1)
						{
							if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
							{
								if (iParam0->f_17 < 30f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
									{
										TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
										GlobalFunc_5653(*iParam0, "FREEZE", sParam1, 10);
										iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 9000));
									}
								}
							}
						}
						break;
					
					case 24:
						if (iParam0->f_14 == 0)
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 3, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 21, 1);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0f);
							if (iParam0->f_17 < 25f)
							{
								GlobalFunc_5653(*iParam0, "FREEZE", sParam1, 10);
								TASK::TASK_LOOK_AT_ENTITY(*iParam0, iParam2, 1000, 3074, 4);
							}
							TASK::TASK_COMBAT_PED(*iParam0, iParam2, 0, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iLocal_511 = 1;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			iParam0->f_15 = 1;
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_404(iParam0);
				func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
			}
		}
	}
}

void func_582(var uParam0)//Position - 0x64549
{
	int iVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (iLocal_512 == 1)
			{
				STREAMING::REQUEST_MODEL(iLocal_48);
				if (STREAMING::HAS_MODEL_LOADED(iLocal_48))
				{
					*uParam0++;
				}
			}
			break;
		
		case 1:
			iVar0 = 0;
			while (iVar0 < Local_800)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_800[iVar0 /*18*/]))
				{
					if (STREAMING::HAS_MODEL_LOADED(iLocal_48))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Local_1160);
						if ((!CAM::IS_SPHERE_VISIBLE(Local_1160[iVar1 /*4*/], 2f) && !iLocal_1151[iVar1]) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1160[iVar1 /*4*/], 1) > 10f)
						{
							iLocal_1151[iVar1] = 1;
							Local_800[iVar0 /*18*/] = func_557(Local_1160[iVar1 /*4*/], Local_1160[iVar1 /*4*/].f_3, iLocal_48, -183807561, 200, joaat("weapon_pistol"));
							func_405(&(Local_800[iVar0 /*18*/]), 0);
						}
					}
				}
				iVar0++;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(Local_800[0 /*18*/]) && ENTITY::DOES_ENTITY_EXIST(Local_800[1 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_800[2 /*18*/]))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_48);
				*uParam0++;
			}
			break;
		
		case 2:
			iVar0 = 0;
			while (iVar0 < Local_800)
			{
				func_583(&(Local_800[iVar0 /*18*/]), PLAYER::PLAYER_PED_ID());
				iVar0++;
			}
			break;
	}
}

void func_583(int iParam0, int iParam1)//Position - 0x646A4
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				switch (iParam0->f_15)
				{
					case 0:
						func_405(iParam0, 22);
						break;
					
					case 22:
						if (iParam0->f_14 == 0)
						{
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 28, 1);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 67108864, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_14 = 1;
						}
						PED::SET_PED_RESET_FLAG(*iParam0, 128, 1);
						if (iParam0->f_14 == 1)
						{
							if (GlobalFunc_2521(5000, iParam0->f_10))
							{
								func_405(iParam0, 24);
							}
						}
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, iParam1, 1))
						{
							func_405(iParam0, 24);
						}
						break;
					
					case 24:
						if (iParam0->f_14 == 0)
						{
							PED::REMOVE_PED_DEFENSIVE_AREA(*iParam0, 0);
							PED::SET_PED_COMBAT_RANGE(*iParam0, 0);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ABILITY(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 0, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 50, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 42, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 13, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 28, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 43, 1);
							PED::SET_COMBAT_FLOAT(*iParam0, 5, 1f);
							PED::SET_COMBAT_FLOAT(*iParam0, 8, 0.2f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 67108864, 16);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iLocal_511 = 1;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			iParam0->f_15 = 1;
			if (iParam0->f_16 == 0)
			{
				iParam0->f_16 = func_404(iParam0);
				func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
			}
		}
	}
}

void func_584(int iParam0, int iParam1)//Position - 0x6489C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = GlobalFunc_156(*iParam0, iParam1, 1);
		func_427(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), 500);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				if (iParam0->f_15 != 19)
				{
					if (iLocal_511 == 1 || PED::IS_PED_FLEEING(*iParam0))
					{
						func_405(iParam0, 19);
					}
				}
				switch (iParam0->f_15)
				{
					case 0:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "assistant_loop", 3))
							{
								STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actor");
								if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@actor"))
								{
									func_432(*iParam0, 20f, 5f, 90f, -1028390912, 1119092736);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, 0);
									TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "assistant_loop", 4f, -4f, -1, 1, 0, 0, 0, 0);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
								}
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (iLocal_516 == 0)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -1132.33f, -490.46f, 41.16f, 8f, 8f, 8f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1118.82f, -504.05f, 22.36f, -1207.15f, -576.01f, 44.2f, 30f, 0, 1, 0))
							{
								GlobalFunc_2519(*iParam0, -1109.191f, -503.3141f, 34.26f, 120.0023f, 0, 0, 0);
								iLocal_516 = 1;
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_96))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_96))
							{
								if (Local_96.f_15 == 2)
								{
									func_405(iParam0, 2);
								}
							}
						}
						if ((iLocal_519 == 1 || func_429(*iParam0, iParam1)) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							iLocal_512 = 1;
							iLocal_519 = 1;
							func_405(iParam0, 19);
						}
						if (iParam0->f_13 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_96))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_96))
								{
									iLocal_512 = 1;
									iLocal_519 = 1;
									func_405(iParam0, 19);
								}
								else if ((((((PED::IS_PED_BEING_STUNNED(Local_96, 0) || PED::IS_PED_DEAD_OR_DYING(Local_96, 1)) || PED::IS_PED_BEING_STEALTH_KILLED(Local_96)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_96, iParam1, 1)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_96, iParam1)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_96)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_96))
								{
									iLocal_512 = 1;
									iLocal_519 = 1;
									func_405(iParam0, 19);
								}
							}
						}
						break;
					
					case 2:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "assistant_berated", 3))
							{
								TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "assistant_berated", 4f, -1.5f, -1, 2, 0, 0, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "assistant_berated", 3))
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(*iParam0, "misscarsteal4@actor", "assistant_berated", 1.125f);
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "assistant_berated") > 0.995f)
							{
								func_405(iParam0, 3);
							}
						}
						if (((iLocal_519 == 1 || func_429(*iParam0, iParam1)) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_585(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							iLocal_512 = 1;
							iLocal_519 = 1;
							func_405(iParam0, 19);
						}
						if (iParam0->f_13 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_96))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_96))
								{
									iLocal_512 = 1;
									iLocal_519 = 1;
									func_405(iParam0, 19);
								}
								else if ((((((PED::IS_PED_BEING_STUNNED(Local_96, 0) || PED::IS_PED_DEAD_OR_DYING(Local_96, 1)) || PED::IS_PED_BEING_STEALTH_KILLED(Local_96)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_96, iParam1, 1)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_96, iParam1)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_96)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_96))
								{
									iLocal_512 = 1;
									iLocal_519 = 1;
									func_405(iParam0, 19);
								}
							}
						}
						break;
					
					case 3:
						if (iParam0->f_14 == 0)
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							PED::FORCE_PED_MOTION_STATE(*iParam0, -530524, 0, 0, 0);
							if (iLocal_516 == 1)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, -1075.86f, -468.95f, 35.64f, 2f, -1, 0.25f, 0, 309.4294f);
							}
							else
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(*iParam0, -1155.532f, -521.8391f, 31.583f, 2f, -1, 0.25f, 0, 74.1956f);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
							iParam0->f_14 = 1;
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 713668775) == 7)
						{
							func_405(iParam0, 4);
						}
						if (func_429(*iParam0, iParam1) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							iLocal_511 = 1;
							func_405(iParam0, 19);
						}
						if (iParam0->f_13 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_96))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_96))
								{
									iLocal_511 = 1;
									func_405(iParam0, 19);
								}
								else if ((((((PED::IS_PED_BEING_STUNNED(Local_96, 0) || PED::IS_PED_DEAD_OR_DYING(Local_96, 1)) || PED::IS_PED_BEING_STEALTH_KILLED(Local_96)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_96, iParam1, 1)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_96, iParam1)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_96)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_96))
								{
									iLocal_511 = 1;
									func_405(iParam0, 19);
								}
							}
						}
						break;
					
					case 4:
						if (iParam0->f_14 == 0)
						{
							TASK::TASK_START_SCENARIO_IN_PLACE(*iParam0, "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iParam0->f_14 = 1;
						}
						if ((iLocal_93 == 0 && WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar0, 1)) && iVar0 == joaat("weapon_stungun"))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
						}
						else
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
						}
						if (func_429(*iParam0, iParam1) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							iLocal_511 = 1;
							func_405(iParam0, 19);
						}
						break;
					
					case 19:
						if (iParam0->f_14 == 0)
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							GlobalFunc_5653(*iParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_FEMALE", 10);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, 1);
							TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, 0, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							PED::SET_PED_KEEP_TASK(*iParam0, 1);
							iParam0->f_7 = MISC::GET_GAME_TIMER();
							iParam0->f_14 = 1;
						}
						if (iParam0->f_14 == 1)
						{
							if (GlobalFunc_2521(3000, iParam0->f_7))
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
								{
									GlobalFunc_5653(*iParam0, "GENERIC_FRIGHTENED_HIGH", "A_F_Y_VINEWOOD_01_WHITE_FULL_01", 10);
									iParam0->f_7 = MISC::GET_GAME_TIMER();
								}
							}
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_404(iParam0);
					func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

int func_585(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0x64FC4
{
	if (!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_INJURED(iParam1))
	{
		if (fParam2 < 10f && iParam3 == 1)
		{
			if (PED::GET_PED_STEALTH_MOVEMENT(iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_586(int iParam0, int iParam1)//Position - 0x65004
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = GlobalFunc_156(*iParam0, iParam1, 1);
		func_427(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), 750);
		func_589(iParam0, iParam1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				PED::SET_PED_RESET_FLAG(*iParam0, 126, 1);
				PED::SET_PED_RESET_FLAG(*iParam0, 188, 1);
				PED::SET_PED_RESET_FLAG(iParam1, 155, 1);
				if (iParam0->f_15 != 19)
				{
					if ((iLocal_511 == 1 && iParam0->f_15 != 24) || PED::IS_PED_FLEEING(*iParam0))
					{
						func_405(iParam0, 19);
					}
				}
				switch (iParam0->f_15)
				{
					case 0:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_berating_loop", 3))
							{
								STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actor");
								if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@actor"))
								{
									TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_berating_loop", 4f, -4f, -1, 1, 0, 0, 0, 0);
									PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, 1);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
								}
							}
							else
							{
								GlobalFunc_2528(&iLocal_601, PED::GET_PED_BONE_COORDS(*iParam0, 31086, 0f, 0f, 0f), 0.5f);
								func_432(*iParam0, 25f, 5f, 90f, -45f, 45f);
								ENTITY::SET_ENTITY_HEALTH(*iParam0, 150);
								PED::SET_PED_CONFIG_FLAG(*iParam0, 188, 1);
								PED::SET_PED_CONFIG_FLAG(*iParam0, 279, 1);
								PED::SET_PED_CONFIG_FLAG(*iParam0, 171, 1);
								PED::SET_PED_CONFIG_FLAG(*iParam0, 281, 1);
								iParam0->f_14 = 1;
							}
						}
						if (iLocal_515 == 0)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -1132.33f, -490.46f, 41.16f, 8f, 8f, 8f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1118.82f, -504.05f, 22.36f, -1207.15f, -576.01f, 44.2f, 30f, 0, 1, 0))
							{
								GlobalFunc_2519(*iParam0, -1109.36f, -503.38f, 34.26f, 292.4256f, 0, 0, 0);
								iLocal_515 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1141.908f, -523.1511f, 27.85454f, -1069.741f, -490.7654f, 49.64965f, 46f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iParam1, -1132.34f, -490.47f, 41.16f, 8f, 8f, 8f, 0, 1, 0))
						{
							AUDIO::START_AUDIO_SCENE("CAR_3_TAKE_OUT_ACTOR");
							func_405(iParam0, 2);
						}
						break;
					
					case 2:
						if (iParam0->f_14 == 0)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_berating_assistant", 3))
							{
								if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@actor"))
								{
									if (!PED::IS_PED_INJURED(Local_168))
									{
										TASK::TASK_LOOK_AT_ENTITY(*iParam0, Local_168, 15000, 2048, 2);
									}
									TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_berating_assistant", 4f, -4f, -1, 0, 0, 0, 0, 0);
								}
								else
								{
									STREAMING::REQUEST_ANIM_DICT("misscarsteal4@actor");
								}
							}
							else
							{
								iParam0->f_14 = 1;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_berating_assistant", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "actor_berating_assistant") > 0.995f)
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
								{
									case 0:
										func_405(iParam0, 5);
										break;
									
									case 1:
										func_405(iParam0, 6);
										break;
									
									case 2:
										func_405(iParam0, 7);
										break;
									
									case 3:
										func_405(iParam0, 8);
										break;
									}
								}
						}
						if ((((iLocal_519 == 1 || func_406(*iParam0, iParam1)) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_585(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_553(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							func_405(iParam0, 19);
						}
						if (func_588(*iParam0, iParam1, iParam0->f_17))
						{
							func_405(iParam0, 19);
						}
						if (func_587(*iParam0, iParam1, iParam0->f_17))
						{
							if (iParam0->f_13 == 0)
							{
								func_405(iParam0, 24);
							}
						}
						if (iParam0->f_13 == 1)
						{
							if (iParam0->f_17 < 6.25f)
							{
								func_405(iParam0, 21);
							}
						}
						break;
					
					case 5:
					case 6:
					case 7:
					case 8:
						if (iParam0->f_14 == 0)
						{
							switch (iParam0->f_15)
							{
								case 5:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_1", 3))
									{
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_1", 4f, -4f, -1, 2, 0, 0, 0, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								
								case 6:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_2", 3))
									{
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_2", 4f, -4f, -1, 2, 0, 0, 0, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								
								case 7:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_3", 3))
									{
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_3", 4f, -4f, -1, 2, 0, 0, 0, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								
								case 8:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_4", 3))
									{
										TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_4", 4f, -4f, -1, 2, 0, 0, 0, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								}
						}
						if (iParam0->f_14 == 1)
						{
							switch (iParam0->f_15)
							{
								case 5:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_1", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_1") >= 0.988f)
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												func_405(iParam0, 6);
												break;
											
											case 1:
												func_405(iParam0, 7);
												break;
											
											case 2:
												func_405(iParam0, 8);
												break;
											}
									}
									break;
								
								case 6:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_2", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_2") >= 0.988f)
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												func_405(iParam0, 5);
												break;
											
											case 1:
												func_405(iParam0, 7);
												break;
											
											case 2:
												func_405(iParam0, 8);
												break;
											}
									}
									break;
								
								case 7:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_3", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_3") >= 0.988f)
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												func_405(iParam0, 5);
												break;
											
											case 1:
												func_405(iParam0, 6);
												break;
											
											case 2:
												func_405(iParam0, 8);
												break;
											}
									}
									break;
								
								case 8:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_4", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@actor", "actor_warming_up_loop_4") >= 0.988f)
									{
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
										{
											case 0:
												func_405(iParam0, 5);
												break;
											
											case 1:
												func_405(iParam0, 6);
												break;
											
											case 2:
												func_405(iParam0, 7);
												break;
											}
									}
									break;
								}
						}
						if ((((iLocal_519 == 1 || func_406(*iParam0, iParam1)) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_585(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_553(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							func_405(iParam0, 19);
						}
						if (func_588(*iParam0, iParam1, iParam0->f_17))
						{
							func_405(iParam0, 19);
						}
						if (func_587(*iParam0, iParam1, iParam0->f_17))
						{
							if (iParam0->f_13 == 0)
							{
								func_405(iParam0, 24);
							}
						}
						if (iParam0->f_13 == 1)
						{
							if (iParam0->f_17 < 6.25f)
							{
								func_405(iParam0, 21);
							}
						}
						break;
					
					case 21:
						if (iParam0->f_14 == 0)
						{
							TASK::CLEAR_PED_TASKS(*iParam0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0);
							TASK::TASK_LOOK_AT_ENTITY(0, iParam1, 3000, 2, 2);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							iParam0->f_10 = MISC::GET_GAME_TIMER();
							iParam0->f_14 = 1;
						}
						if (func_408("CST4_MSSPO"))
						{
							if (GlobalFunc_2521(3500, iParam0->f_10))
							{
								func_405(iParam0, 24);
							}
						}
						if (((func_406(*iParam0, iParam1) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_585(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_553(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
						{
							func_405(iParam0, 19);
						}
						break;
					
					case 19:
						if (iParam0->f_14 == 0)
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_1));
							}
							func_565(3);
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 3);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, 0);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, 1);
							if (!PED::IS_PED_FLEEING(*iParam0))
							{
								TASK::CLEAR_PED_TASKS(*iParam0);
								TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, 0, 0);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							PED::SET_PED_KEEP_TASK(*iParam0, 1);
							iLocal_519 = 0;
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						break;
					
					case 24:
						if (iParam0->f_14 == 0)
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_1));
							}
							PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 5, 1);
							PED::SET_COMBAT_FLOAT(*iParam0, 7, 1f);
							TASK::TASK_COMBAT_PED(*iParam0, iParam1, 67108864, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							PED::SET_PED_KEEP_TASK(*iParam0, 1);
							iLocal_519 = 1;
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_1));
				}
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_404(iParam0);
					iLocal_606 = PED::GET_PED_CAUSE_OF_DEATH(*iParam0);
					func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@actor");
			}
		}
	}
}

int func_587(int iParam0, int iParam1, float fParam2)//Position - 0x65A72
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
					{
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
						{
							if (TASK::IS_PED_RUNNING(iParam1) || TASK::IS_PED_SPRINTING(iParam1))
							{
								if (fParam2 <= 5f)
								{
									return 1;
								}
							}
							if (TASK::IS_PED_WALKING(iParam1))
							{
								if (fParam2 <= 3f)
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

int func_588(int iParam0, int iParam1, float fParam2)//Position - 0x65AEF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iParam1, 0))
					{
						if (fParam2 < 20f)
						{
							if ((AUDIO::IS_HORN_ACTIVE(PED::GET_VEHICLE_PED_IS_USING(iParam1)) || VEHICLE::IS_VEHICLE_SIREN_ON(PED::GET_VEHICLE_PED_IS_USING(iParam1))) || VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(PED::GET_VEHICLE_PED_IS_USING(iParam1)))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_IN_BURNOUT(PED::GET_VEHICLE_PED_IS_USING(iParam1)))
							{
								return 1;
							}
						}
						if (fParam2 < 15f)
						{
							if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_USING(iParam1)) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_USING(iParam1)) > 5f)
							{
								return 1;
							}
							if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iParam0))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_589(var uParam0, int iParam1)//Position - 0x65BB5
{
	struct<6> Var0;
	struct<6> Var6;
	struct<6> Var12;
	struct<6> Var18;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			switch (uParam0->f_15)
			{
				case 2:
				case 5:
				case 6:
				case 7:
				case 8:
					if (!func_408("CST4_MSARG"))
					{
						if (!GlobalFunc_111())
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_berating_assistant", 3))
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_MSARG", 7, 0, 0, 0))
								{
									func_438("CST4_MSARG", 1);
									func_438("CST4_MSVOC1", 0);
									func_438("CST4_MSVOC2", 0);
									func_438("CST4_MSVOC3", 0);
									func_438("CST4_MSVOC4", 0);
									RECORDING::_0x293220DA1B46CEBC(3f, 15f, 4);
								}
							}
						}
					}
					if (!func_408("CST4_MSVOC1_1"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1") >= 0.1f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1") <= 0.375f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_273, 1))
									{
										if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MSVOC1", "CST4_MSVOC1_1", 7, 0, 0))
										{
											func_438("CST4_MSVOC1_1", 1);
											func_438("CST4_MSVOC1_2", 0);
											func_438("CST4_MSVOC2_1", 0);
											func_438("CST4_MSVOC2_2", 0);
											func_438("CST4_MSVOC3_1", 0);
											func_438("CST4_MSVOC3_2", 0);
											func_438("CST4_MSVOC4_1", 0);
											func_438("CST4_MSVOC4_2", 0);
											RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_438("CST4_MSVOC1_1", 1);
								func_438("CST4_MSVOC1_2", 0);
								func_438("CST4_MSVOC2_1", 0);
								func_438("CST4_MSVOC2_2", 0);
								func_438("CST4_MSVOC3_1", 0);
								func_438("CST4_MSVOC3_2", 0);
								func_438("CST4_MSVOC4_1", 0);
								func_438("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_408("CST4_MSVOC1_2"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1") >= 0.43f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_1") <= 0.88f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_273, 1))
									{
										if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MSVOC1", "CST4_MSVOC1_2", 7, 0, 0))
										{
											func_438("CST4_MSVOC1_1", 1);
											func_438("CST4_MSVOC1_2", 1);
											func_438("CST4_MSVOC2_1", 0);
											func_438("CST4_MSVOC2_2", 0);
											func_438("CST4_MSVOC3_1", 0);
											func_438("CST4_MSVOC3_2", 0);
											func_438("CST4_MSVOC4_1", 0);
											func_438("CST4_MSVOC4_2", 0);
											RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_438("CST4_MSVOC1_1", 1);
								func_438("CST4_MSVOC1_2", 1);
								func_438("CST4_MSVOC2_1", 0);
								func_438("CST4_MSVOC2_2", 0);
								func_438("CST4_MSVOC3_1", 0);
								func_438("CST4_MSVOC3_2", 0);
								func_438("CST4_MSVOC4_1", 0);
								func_438("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_408("CST4_MSVOC2_1"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2") >= 0.105f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2") <= 0.375f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_273, 1))
									{
										if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MSVOC2", "CST4_MSVOC2_1", 7, 0, 0))
										{
											func_438("CST4_MSVOC1_1", 0);
											func_438("CST4_MSVOC1_2", 0);
											func_438("CST4_MSVOC2_1", 1);
											func_438("CST4_MSVOC2_2", 0);
											func_438("CST4_MSVOC3_1", 0);
											func_438("CST4_MSVOC3_2", 0);
											func_438("CST4_MSVOC4_1", 0);
											func_438("CST4_MSVOC4_2", 0);
											RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_438("CST4_MSVOC1_1", 0);
								func_438("CST4_MSVOC1_2", 0);
								func_438("CST4_MSVOC2_1", 1);
								func_438("CST4_MSVOC2_2", 0);
								func_438("CST4_MSVOC3_1", 0);
								func_438("CST4_MSVOC3_2", 0);
								func_438("CST4_MSVOC4_1", 0);
								func_438("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_408("CST4_MSVOC2_2"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2") >= 0.39f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_2") <= 0.84f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_273, 1))
									{
										if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MSVOC2", "CST4_MSVOC2_2", 7, 0, 0))
										{
											func_438("CST4_MSVOC1_1", 0);
											func_438("CST4_MSVOC1_2", 0);
											func_438("CST4_MSVOC2_1", 1);
											func_438("CST4_MSVOC2_2", 1);
											func_438("CST4_MSVOC3_1", 0);
											func_438("CST4_MSVOC3_2", 0);
											func_438("CST4_MSVOC4_1", 0);
											func_438("CST4_MSVOC4_2", 0);
											RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_438("CST4_MSVOC1_1", 0);
								func_438("CST4_MSVOC1_2", 0);
								func_438("CST4_MSVOC2_1", 1);
								func_438("CST4_MSVOC2_2", 1);
								func_438("CST4_MSVOC3_1", 0);
								func_438("CST4_MSVOC3_2", 0);
								func_438("CST4_MSVOC4_1", 0);
								func_438("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_408("CST4_MSVOC3_1"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3") >= 0.1f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3") <= 0.362f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_273, 1))
									{
										if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MSVOC3", "CST4_MSVOC3_1", 7, 0, 0))
										{
											func_438("CST4_MSVOC1_1", 0);
											func_438("CST4_MSVOC1_2", 0);
											func_438("CST4_MSVOC2_1", 0);
											func_438("CST4_MSVOC2_2", 0);
											func_438("CST4_MSVOC3_1", 1);
											func_438("CST4_MSVOC3_2", 0);
											func_438("CST4_MSVOC4_1", 0);
											func_438("CST4_MSVOC4_2", 0);
											RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_438("CST4_MSVOC1_1", 0);
								func_438("CST4_MSVOC1_2", 0);
								func_438("CST4_MSVOC2_1", 0);
								func_438("CST4_MSVOC2_2", 0);
								func_438("CST4_MSVOC3_1", 1);
								func_438("CST4_MSVOC3_2", 0);
								func_438("CST4_MSVOC4_1", 0);
								func_438("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_408("CST4_MSVOC3_2"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3") >= 0.452f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_3") <= 0.9f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_273, 1))
									{
										if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MSVOC3", "CST4_MSVOC3_2", 7, 0, 0))
										{
											func_438("CST4_MSVOC1_1", 0);
											func_438("CST4_MSVOC1_2", 0);
											func_438("CST4_MSVOC2_1", 0);
											func_438("CST4_MSVOC2_2", 0);
											func_438("CST4_MSVOC3_1", 1);
											func_438("CST4_MSVOC3_2", 1);
											func_438("CST4_MSVOC4_1", 0);
											func_438("CST4_MSVOC4_2", 0);
											RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_438("CST4_MSVOC1_1", 0);
								func_438("CST4_MSVOC1_2", 0);
								func_438("CST4_MSVOC2_1", 0);
								func_438("CST4_MSVOC2_2", 0);
								func_438("CST4_MSVOC3_1", 1);
								func_438("CST4_MSVOC3_2", 1);
								func_438("CST4_MSVOC4_1", 0);
								func_438("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_408("CST4_MSVOC4_1"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4") >= 0.1f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4") <= 0.365f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_273, 1))
									{
										if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MSVOC4", "CST4_MSVOC4_1", 7, 0, 0))
										{
											func_438("CST4_MSVOC1_1", 0);
											func_438("CST4_MSVOC1_2", 0);
											func_438("CST4_MSVOC2_1", 0);
											func_438("CST4_MSVOC2_2", 0);
											func_438("CST4_MSVOC3_1", 0);
											func_438("CST4_MSVOC3_2", 0);
											func_438("CST4_MSVOC4_1", 1);
											func_438("CST4_MSVOC4_2", 0);
											RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_438("CST4_MSVOC1_1", 0);
								func_438("CST4_MSVOC1_2", 0);
								func_438("CST4_MSVOC2_1", 0);
								func_438("CST4_MSVOC2_2", 0);
								func_438("CST4_MSVOC3_1", 0);
								func_438("CST4_MSVOC3_2", 0);
								func_438("CST4_MSVOC4_1", 1);
								func_438("CST4_MSVOC4_2", 0);
							}
						}
					}
					if (!func_408("CST4_MSVOC4_2"))
					{
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4") >= 0.46f) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*uParam0, "misscarsteal4@actor", "actor_warming_up_loop_4") <= 0.828f)
						{
							if (uParam0->f_17 < 35f)
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_273, 1))
									{
										if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MSVOC4", "CST4_MSVOC4_2", 7, 0, 0))
										{
											func_438("CST4_MSVOC1_1", 0);
											func_438("CST4_MSVOC1_2", 0);
											func_438("CST4_MSVOC2_1", 0);
											func_438("CST4_MSVOC2_2", 0);
											func_438("CST4_MSVOC3_1", 0);
											func_438("CST4_MSVOC3_2", 0);
											func_438("CST4_MSVOC4_1", 1);
											func_438("CST4_MSVOC4_2", 1);
											RECORDING::_0x293220DA1B46CEBC(3f, 3f, 3);
										}
									}
								}
							}
							else
							{
								func_438("CST4_MSVOC1_1", 0);
								func_438("CST4_MSVOC1_2", 0);
								func_438("CST4_MSVOC2_1", 0);
								func_438("CST4_MSVOC2_2", 0);
								func_438("CST4_MSVOC3_1", 0);
								func_438("CST4_MSVOC3_2", 0);
								func_438("CST4_MSVOC4_1", 1);
								func_438("CST4_MSVOC4_2", 1);
							}
						}
					}
					if (((PED::IS_PED_FLEEING(*uParam0) || PED::IS_PED_IN_COMBAT(*uParam0, 0)) || PED::IS_PED_RESPONDING_TO_EVENT(*uParam0, 123)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*uParam0, iParam1, 1))
					{
						if (GlobalFunc_111())
						{
							if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
							{
								GlobalFunc_4956();
							}
						}
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0))
						{
							GlobalFunc_5653(*uParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 3);
						}
					}
					break;
				
				case 21:
					if (GlobalFunc_111())
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
						{
							Var0 = { GlobalFunc_560() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
							{
								if ((!MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_MSSEC") && !MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_MSSPO")) && !MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_MSFIG"))
								{
									GlobalFunc_4956();
								}
							}
						}
					}
					if (!func_408("CST4_MSSPO"))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_MSSPO", 7, 0, 0, 0))
							{
								func_438("CST4_MSSPO", 1);
								uParam0->f_10 = MISC::GET_GAME_TIMER();
							}
						}
					}
					break;
				
				case 24:
					if (GlobalFunc_111())
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
						{
							Var6 = { GlobalFunc_560() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
							{
								if ((!MISC::ARE_STRINGS_EQUAL(&Var6, "CST4_MSSEC") && !MISC::ARE_STRINGS_EQUAL(&Var6, "CST4_MSSPO")) && !MISC::ARE_STRINGS_EQUAL(&Var6, "CST4_MSFIG"))
								{
									GlobalFunc_4956();
								}
							}
						}
					}
					if (!func_408("CST4_MSFIG"))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_MSFIG", 7, 0, 0, 0))
							{
								func_438("CST4_MSFIG", 1);
								uParam0->f_7 = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (!GlobalFunc_111())
					{
						if (PED::IS_PED_IN_COMBAT(*uParam0, 0))
						{
							if (uParam0->f_17 < 30f)
							{
								if (GlobalFunc_2521(5000, uParam0->f_7))
								{
									if (!GlobalFunc_5172(&Local_273, 1))
									{
										if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_MSSEC", 7, 0, 0, 0))
										{
											uParam0->f_7 = MISC::GET_GAME_TIMER();
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0))
									{
										GlobalFunc_5653(*uParam0, "CST4_AYAA", "CST4ACTOR", 3);
										iLocal_512 = 1;
										uParam0->f_7 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					else if (GlobalFunc_111())
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
						{
							Var12 = { GlobalFunc_560() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var12))
							{
								if (MISC::ARE_STRINGS_EQUAL(&Var12, "CST4_MSSEC"))
								{
									iLocal_512 = 1;
								}
							}
						}
					}
					break;
				
				case 19:
					if (GlobalFunc_111())
					{
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*uParam0))
						{
							Var18 = { GlobalFunc_560() };
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var18))
							{
								if ((!MISC::ARE_STRINGS_EQUAL(&Var18, "CST4_MSSEC") && !MISC::ARE_STRINGS_EQUAL(&Var18, "CST4_MSSPO")) && !MISC::ARE_STRINGS_EQUAL(&Var18, "CST4_MSFIG"))
								{
									GlobalFunc_4956();
								}
							}
						}
					}
					if (PED::IS_PED_FLEEING(*uParam0) || PED::IS_PED_IN_COMBAT(*uParam0, 0))
					{
						if (uParam0->f_17 < 30f)
						{
							if (GlobalFunc_2521(3000, uParam0->f_7))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_273, 1))
									{
										if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_MSSEC", 7, 0, 0, 0))
										{
											iLocal_512 = 1;
											uParam0->f_7 = MISC::GET_GAME_TIMER();
										}
									}
									else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*uParam0))
									{
										GlobalFunc_5653(*uParam0, "CST4_AYAA", "CST4ACTOR", 3);
										iLocal_512 = 1;
										uParam0->f_7 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
					break;
			}
			if ((PED::IS_PED_BEING_STUNNED(*uParam0, 0) || PED::IS_PED_DEAD_OR_DYING(*uParam0, 1)) || PED::IS_PED_BEING_STEALTH_KILLED(*uParam0))
			{
				if (GlobalFunc_111())
				{
					if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(*uParam0))
					{
						GlobalFunc_4956();
					}
				}
			}
		}
	}
}

void func_590(var uParam0)//Position - 0x66A20
{
	var uVar0;
	var uVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (iLocal_511 == 0)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1139.96f, -452.77f, 40.31f, 22f, 22f, 8f, 0, 1, 0))
				{
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (func_441(&(Local_635[0 /*18*/]), 0, iLocal_95, 0, 145, 0, 0, 0, 0, -1, 1) && func_441(&(Local_635[1 /*18*/]), 0, iLocal_95, 0, 145, 0, 0, 0, 0, -1, 1))
			{
				func_405(&(Local_635[0 /*18*/]), 3);
				func_405(&(Local_635[1 /*18*/]), 3);
				*uParam0++;
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_635[0 /*18*/]))
			{
				Local_635[0 /*18*/].f_17 = GlobalFunc_156(Local_635[0 /*18*/], PLAYER::PLAYER_PED_ID(), 1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_635[0 /*18*/]))
				{
					if (Local_635[0 /*18*/].f_15 != 19)
					{
						if (((((iLocal_518 == 1 || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_635[0 /*18*/], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_635[0 /*18*/], PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_635[0 /*18*/], 122)) || PED::HAS_PED_RECEIVED_EVENT(Local_635[0 /*18*/], 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_635[0 /*18*/], 123))
						{
							func_405(&(Local_635[0 /*18*/]), 19);
						}
					}
					switch (Local_635[0 /*18*/].f_15)
					{
						case 3:
							if (Local_635[0 /*18*/].f_14 == 0)
							{
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1143.49f, -464.56f, 33.96f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1143.91f, -458.29f, 34.08f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1150.15f, -455.65f, 33.91f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1162.95f, -461.74f, 33.3f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1166.33f, -459.13f, 33.27f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1183.96f, -467.7f, 32.3f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1204.53f, -480.8f, 31.49f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_WANDER_IN_AREA(0, -1223.41f, -496.62f, 30.31f, 10f, 1077936128, 1086324736);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(Local_635[0 /*18*/], uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_635[0 /*18*/], 1);
								Local_635[0 /*18*/].f_14 = 1;
							}
							break;
						
						case 19:
							if (Local_635[0 /*18*/].f_14 == 0)
							{
								TASK::CLEAR_PED_TASKS(Local_635[0 /*18*/]);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_635[0 /*18*/], 17, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_635[0 /*18*/], 4, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_635[0 /*18*/], 1024, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_635[0 /*18*/], 128, 1);
								TASK::TASK_SMART_FLEE_PED(Local_635[0 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_635[0 /*18*/], 0);
								PED::SET_PED_KEEP_TASK(Local_635[0 /*18*/], 1);
								iLocal_518 = 1;
								Local_635[0 /*18*/].f_7 = 0;
								Local_635[0 /*18*/].f_14 = 1;
							}
							if ((MISC::GET_GAME_TIMER() - Local_635[0 /*18*/].f_7) > 0)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_635[0 /*18*/]))
								{
									GlobalFunc_5653(Local_635[0 /*18*/], "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 3);
									Local_635[0 /*18*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 7000));
								}
							}
							break;
						}
				}
				if (ENTITY::IS_ENTITY_DEAD(Local_635[0 /*18*/]) || Local_635[0 /*18*/].f_15 == 19)
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_635[0 /*18*/]))
					{
						if (Local_635[0 /*18*/].f_16 == 0)
						{
							Local_635[0 /*18*/].f_16 = func_404(&(Local_635[0 /*18*/]));
							func_403(Local_635[0 /*18*/].f_16, &iLocal_576, &iLocal_577, &iLocal_578);
						}
					}
					if (Local_635[0 /*18*/].f_17 > 200f)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_635[0 /*18*/]));
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_635[1 /*18*/]))
			{
				Local_635[1 /*18*/].f_17 = GlobalFunc_156(Local_635[1 /*18*/], PLAYER::PLAYER_PED_ID(), 1);
				if (!ENTITY::IS_ENTITY_DEAD(Local_635[1 /*18*/]))
				{
					if (Local_635[1 /*18*/].f_15 != 19)
					{
						if (((((iLocal_518 == 1 || ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_635[1 /*18*/], PLAYER::PLAYER_PED_ID())) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_635[1 /*18*/], PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_635[1 /*18*/], 122)) || PED::HAS_PED_RECEIVED_EVENT(Local_635[1 /*18*/], 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_635[1 /*18*/], 123))
						{
							func_405(&(Local_635[1 /*18*/]), 19);
						}
					}
					switch (Local_635[1 /*18*/].f_15)
					{
						case 3:
							if (Local_635[1 /*18*/].f_14 == 0)
							{
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								TASK::OPEN_SEQUENCE_TASK(&uVar1);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1142.27f, -462.21f, 34.07f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1143.37f, -457.43f, 34.19f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1152.27f, -454.78f, 33.86f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1164.64f, -460.87f, 33.27f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1167.92f, -458.11f, 33.237f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1184.64f, -465.7f, 32.47f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1206.56f, -478.8f, 31.57f, 0.8f, 60000, 0.25f, 1, 1193033728);
								TASK::TASK_WANDER_IN_AREA(0, -1223.41f, -496.62f, 30.31f, 10f, 1077936128, 1086324736);
								TASK::CLOSE_SEQUENCE_TASK(uVar1);
								TASK::TASK_PERFORM_SEQUENCE(Local_635[1 /*18*/], uVar1);
								TASK::CLEAR_SEQUENCE_TASK(&uVar1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_635[1 /*18*/], 1);
								Local_635[1 /*18*/].f_14 = 1;
							}
							break;
						
						case 19:
							if (Local_635[1 /*18*/].f_14 == 0)
							{
								TASK::CLEAR_PED_TASKS(Local_635[1 /*18*/]);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_635[1 /*18*/], 17, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_635[1 /*18*/], 4, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_635[1 /*18*/], 1024, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(Local_635[1 /*18*/], 128, 1);
								TASK::TASK_SMART_FLEE_PED(Local_635[1 /*18*/], PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_635[1 /*18*/], 0);
								PED::SET_PED_KEEP_TASK(Local_635[1 /*18*/], 1);
								iLocal_518 = 1;
								Local_635[1 /*18*/].f_7 = 0;
								Local_635[1 /*18*/].f_14 = 1;
							}
							if ((MISC::GET_GAME_TIMER() - Local_635[1 /*18*/].f_7) > 0)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_635[1 /*18*/]))
								{
									GlobalFunc_5653(Local_635[1 /*18*/], "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 3);
									Local_635[1 /*18*/].f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 8000));
								}
							}
							break;
						}
				}
				if (ENTITY::IS_ENTITY_DEAD(Local_635[1 /*18*/]) || Local_635[1 /*18*/].f_15 == 19)
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_635[1 /*18*/]))
					{
						if (Local_635[1 /*18*/].f_16 == 0)
						{
							Local_635[1 /*18*/].f_16 = func_404(&(Local_635[1 /*18*/]));
							func_403(Local_635[1 /*18*/].f_16, &iLocal_576, &iLocal_577, &iLocal_578);
						}
					}
					if (Local_635[1 /*18*/].f_17 > 200f)
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_635[1 /*18*/]));
					}
				}
			}
			break;
	}
}

void func_591(var uParam0)//Position - 0x67218
{
	switch (*uParam0)
	{
		case 0:
			*uParam0++;
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT("misscarsteal4@aliens");
			STREAMING::REQUEST_ANIM_DICT("misscarsteal4@meltdown");
			STREAMING::REQUEST_MODEL(Local_253.f_7);
			STREAMING::REQUEST_MODEL(Local_261.f_7);
			STREAMING::REQUEST_MODEL(Local_245.f_7);
			if (STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@aliens") && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@meltdown"))
			{
				if (((((func_567(&Local_245, 0) && func_441(&(Local_1021[0 /*18*/]), 0, iLocal_95, 0, 145, 0, 0, 0, 0, -1, 1)) && func_441(&(Local_1021[1 /*18*/]), 0, iLocal_95, 0, 145, 0, 0, 0, 0, -1, 1)) && func_441(&(Local_1021[2 /*18*/]), 0, iLocal_95, 0, 145, 0, 0, 0, 0, -1, 1)) && func_441(&(Local_1021[3 /*18*/]), 0, iLocal_95, 0, 145, 0, 0, 0, 0, -1, 1)) && func_441(&(Local_1021[4 /*18*/]), 0, iLocal_95, 0, 145, 0, 0, 0, 0, -1, 1))
				{
					if (func_567(&Local_253, 0) && func_567(&Local_261, 0))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
						{
							iLocal_602 = PED::CREATE_SYNCHRONIZED_SCENE(Local_65, Local_68, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_602, 1);
							PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_602, 0.8f);
							if (!PED::IS_PED_INJURED(Local_1021[0 /*18*/]))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[0 /*18*/], 0, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[0 /*18*/], 2, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[0 /*18*/], 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[0 /*18*/], 4, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[0 /*18*/], 5, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[0 /*18*/], 6, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[0 /*18*/], 7, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[0 /*18*/], 11, 1, 0, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1021[0 /*18*/], iLocal_602, "misscarsteal4@meltdown", "_rehearsal_actor_a", 1000f, -1.5f, 1, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1021[0 /*18*/], 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_1021[1 /*18*/]))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[1 /*18*/], 0, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[1 /*18*/], 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[1 /*18*/], 4, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[1 /*18*/], 5, 1, 0, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1021[1 /*18*/], iLocal_602, "misscarsteal4@meltdown", "_rehearsal_actor_b", 1000f, -1.5f, 1, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1021[1 /*18*/], 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_1021[2 /*18*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_253) && !ENTITY::IS_ENTITY_DEAD(Local_253))
								{
									if (!ENTITY::IS_ENTITY_ATTACHED(Local_253))
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_253, Local_1021[2 /*18*/], PED::GET_PED_BONE_INDEX(Local_1021[2 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1021[2 /*18*/], iLocal_602, "misscarsteal4@meltdown", "_rehearsal_camera_man", 1000f, -1.5f, 1, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1021[2 /*18*/], 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_1021[3 /*18*/]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_261) && !ENTITY::IS_ENTITY_DEAD(Local_261))
								{
									if (!ENTITY::IS_ENTITY_ATTACHED(Local_261))
									{
										ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_261, Local_1021[3 /*18*/], PED::GET_PED_BONE_INDEX(Local_1021[3 /*18*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
									}
								}
								TASK::TASK_SYNCHRONIZED_SCENE(Local_1021[3 /*18*/], iLocal_602, "misscarsteal4@meltdown", "_rehearsal_boom_op", 1000f, -1.5f, 1, 0, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1021[3 /*18*/], 0, 0);
							}
							if (!PED::IS_PED_INJURED(Local_1021[4 /*18*/]))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[4 /*18*/], 0, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[4 /*18*/], 3, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_1021[4 /*18*/], 4, 0, 0, 0);
							}
							GlobalFunc_173(&uLocal_336, 4, Local_1021[0 /*18*/], "DYLAN", 0, 1);
							GlobalFunc_173(&uLocal_336, 5, Local_1021[1 /*18*/], "FITCH", 0, 1);
							GlobalFunc_173(&uLocal_336, 8, Local_1021[4 /*18*/], "ANTON", 0, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_253.f_7);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_261.f_7);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_245.f_7);
							func_405(&(Local_1021[0 /*18*/]), 5);
							func_405(&(Local_1021[1 /*18*/]), 5);
							func_405(&(Local_1021[3 /*18*/]), 5);
							func_405(&(Local_1021[4 /*18*/]), 5);
							func_405(&(Local_1021[2 /*18*/]), 5);
							iLocal_547 = 0;
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 2:
			func_594();
			func_593(&(Local_1021[0 /*18*/]), PLAYER::PLAYER_PED_ID(), 900);
			func_593(&(Local_1021[1 /*18*/]), PLAYER::PLAYER_PED_ID(), 1000);
			func_593(&(Local_1021[3 /*18*/]), PLAYER::PLAYER_PED_ID(), 1250);
			func_593(&(Local_1021[2 /*18*/]), PLAYER::PLAYER_PED_ID(), 950);
			func_592(&(Local_1021[4 /*18*/]), PLAYER::PLAYER_PED_ID());
			break;
	}
}

void func_592(int iParam0, int iParam1)//Position - 0x676D2
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = GlobalFunc_156(*iParam0, PLAYER::PLAYER_PED_ID(), 1);
		func_427(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), 950);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (iParam0->f_15 != 19)
			{
				if ((((((iLocal_511 == 1 || iLocal_520 == 1) || func_406(*iParam0, iParam1)) || func_588(*iParam0, iParam1, iParam0->f_17)) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_585(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_553(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
				{
					func_405(iParam0, 19);
				}
			}
			switch (iParam0->f_15)
			{
				case 5:
					if (iParam0->f_14 == 0)
					{
						TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@aliens", "rehearsal_base_idle_director", 4f, -4f, -1, 1, 0, 0, 0, 0);
						iParam0->f_10 = MISC::GET_GAME_TIMER();
						iParam0->f_14 = 1;
					}
					if (iParam0->f_14 == 1)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.645f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) < 0.7f)
							{
								func_405(iParam0, 6);
							}
						}
					}
					if (iParam0->f_13 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -1130.014f, -451.2181f, 35.50325f, 2f, 3f, 1.35f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1131.502f, -450.782f, 34.11f, -1130.052f, -454.8643f, 36.79336f, 4.5f, 0, 1, 0))
						{
							func_405(iParam0, 21);
						}
					}
					break;
				
				case 6:
					if (iParam0->f_14 == 0)
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
						{
							case 0:
								sLocal_605 = "rehearsal_idle_a_director";
								break;
							
							case 1:
								sLocal_605 = "rehearsal_idle_b_director";
								break;
							
							case 2:
								sLocal_605 = "rehearsal_idle_c_director";
								break;
						}
						TASK::TASK_PLAY_ANIM(*iParam0, "misscarsteal4@aliens", sLocal_605, 4f, -4f, -1, 2, 0, 0, 0, 0);
						iParam0->f_14 = 1;
					}
					if (iParam0->f_14 == 1)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@aliens", sLocal_605, 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@aliens", sLocal_605) >= 0.99f)
							{
								func_405(iParam0, 5);
							}
						}
					}
					if (iParam0->f_13 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -1130.014f, -451.2181f, 35.50325f, 2f, 3f, 1.35f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1131.502f, -450.782f, 34.11f, -1130.052f, -454.8643f, 36.79336f, 4.5f, 0, 1, 0))
						{
							func_405(iParam0, 21);
						}
					}
					break;
				
				case 21:
					if (iParam0->f_14 == 0)
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iParam1, 0);
						TASK::TASK_LOOK_AT_ENTITY(0, iParam1, 5000, 3074, 3);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
						{
							GlobalFunc_4956();
						}
						iParam0->f_9 = 0;
						iParam0->f_14 = 1;
					}
					if (iParam0->f_14 == 1)
					{
						switch (iParam0->f_9)
						{
							case 0:
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
								{
									switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
									{
										case 0:
											GlobalFunc_5653(*iParam0, "GENERIC_CURSE_HIGH", "ANTON", 6);
											break;
										
										case 1:
											GlobalFunc_5653(*iParam0, "AIMED_AT_BY_PLAYER", "ANTON", 6);
											break;
										
										case 2:
											GlobalFunc_5653(*iParam0, "GENERIC_FRIGHTENED_HIGH", "ANTON", 6);
											break;
										
										case 3:
											GlobalFunc_5653(*iParam0, "GENERIC_SHOCKED_MED", "ANTON", 6);
											break;
										
										case 4:
											GlobalFunc_5653(*iParam0, "CRASH_GENERIC_INTERRUPT", "ANTON", 6);
											break;
										
										case 5:
											GlobalFunc_5653(*iParam0, "GENERIC_FRIGHTENED_HIGH", "ANTON", 6);
											break;
										
										case 6:
											GlobalFunc_5653(*iParam0, "GENERIC_INTERUPT_HIGH", "ANTON", 6);
											break;
									}
								}
								else
								{
									iParam0->f_10 = MISC::GET_GAME_TIMER();
									iParam0->f_9 = 1;
								}
								break;
							
							case 1:
								if (GlobalFunc_2521(2000, iParam0->f_10))
								{
									iLocal_521 = 1;
								}
								break;
							}
					}
					break;
				
				case 19:
					if (iParam0->f_14 == 0)
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, 1);
						TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						AUDIO::PLAY_PAIN(*iParam0, 7, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
						PED::SET_PED_KEEP_TASK(*iParam0, 1);
						iLocal_520 = 1;
						iParam0->f_7 = 0;
						iParam0->f_14 = 1;
					}
					if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
						{
							GlobalFunc_5653(*iParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 10);
							iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 7000));
						}
					}
					break;
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_404(iParam0);
					func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

void func_593(int iParam0, int iParam1, int iParam2)//Position - 0x67C1D
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = GlobalFunc_156(*iParam0, PLAYER::PLAYER_PED_ID(), 1);
		func_427(*iParam0, iParam1, &(iParam0->f_13), &(iParam0->f_11), iParam2);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (iParam0->f_15 != 19)
			{
				if ((((((iLocal_511 == 1 || iLocal_520 == 1) || func_406(*iParam0, iParam1)) || func_588(*iParam0, iParam1, iParam0->f_17)) || func_555(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_585(*iParam0, iParam1, iParam0->f_17, iParam0->f_13)) || func_553(*iParam0, iParam1, iParam0->f_17, iParam0->f_13))
				{
					func_405(iParam0, 19);
				}
			}
			switch (iParam0->f_15)
			{
				case 5:
					if (iParam0->f_14 == 0)
					{
						iParam0->f_14 = 1;
					}
					break;
				
				case 19:
					if (iParam0->f_14 == 0)
					{
						TASK::CLEAR_PED_TASKS(*iParam0);
						PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, 1);
						PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_253))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_253))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_253, *iParam0))
								{
									ENTITY::DETACH_ENTITY(Local_253, 0, 1);
								}
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Local_261))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_261))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_261, *iParam0))
								{
									ENTITY::DETACH_ENTITY(Local_261, 0, 1);
								}
							}
						}
						TASK::TASK_SMART_FLEE_PED(*iParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
						AUDIO::PLAY_PAIN(*iParam0, 7, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
						PED::SET_PED_KEEP_TASK(*iParam0, 1);
						iLocal_520 = 1;
						iParam0->f_7 = 0;
						iParam0->f_14 = 1;
					}
					if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
					{
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
						{
							GlobalFunc_5653(*iParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 10);
							iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(2500, 9000));
						}
					}
					break;
				}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_404(iParam0);
					func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
			}
		}
	}
}

void func_594()//Position - 0x67E69
{
	if (iLocal_520 == 0)
	{
		switch (iLocal_547)
		{
			case 0:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.04f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) < 0.5f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MELT", "CST4_MELT_1", 7, 0, 0))
								{
									iLocal_547 = 1;
								}
							}
						}
						else
						{
							iLocal_547 = 1;
						}
					}
				}
				break;
			
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.1f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) < 0.5f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MELT", "CST4_MELT_2", 7, 0, 0))
								{
									iLocal_547 = 2;
								}
							}
						}
						else
						{
							iLocal_547 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.235f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) < 0.5f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MELT", "CST4_MELT_4", 7, 0, 0))
								{
									iLocal_547 = 3;
								}
							}
						}
						else
						{
							iLocal_547 = 3;
						}
					}
				}
				break;
			
			case 3:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.31f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) < 0.5f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MELT", "CST4_MELT_5", 7, 0, 0))
								{
									iLocal_547 = 4;
								}
							}
						}
						else
						{
							iLocal_547 = 4;
						}
					}
				}
				break;
			
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.375f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MELT", "CST4_MELT_6", 7, 0, 0))
								{
									iLocal_547 = 5;
								}
							}
						}
						else
						{
							iLocal_547 = 5;
						}
					}
				}
				break;
			
			case 5:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.425f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MELT", "CST4_MELT_7", 7, 0, 0))
								{
									iLocal_547 = 6;
								}
							}
						}
						else
						{
							iLocal_547 = 6;
						}
					}
				}
				break;
			
			case 6:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.52f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MELT", "CST4_MELT_8", 7, 0, 0))
								{
									iLocal_547 = 7;
								}
							}
						}
						else
						{
							iLocal_547 = 7;
						}
					}
				}
				break;
			
			case 7:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.6f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_MELT", "CST4_MELT_9", 7, 0, 0))
								{
									iLocal_547 = 8;
								}
							}
						}
						else
						{
							iLocal_547 = 8;
						}
					}
				}
				break;
			
			case 8:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.64f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_CUT", 7, 0, 0, 0))
								{
									iLocal_547 = 9;
								}
							}
						}
						else
						{
							iLocal_547 = 9;
						}
					}
				}
				break;
			
			case 9:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.685f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_AWFUL", 7, 0, 0, 0))
								{
									iLocal_547 = 10;
								}
							}
						}
						else
						{
							iLocal_547 = 10;
						}
					}
				}
				break;
			
			case 10:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.825f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_AGAIN", 7, 0, 0, 0))
								{
									iLocal_547 = 11;
								}
							}
						}
						else
						{
							iLocal_547 = 11;
						}
					}
				}
				break;
			
			case 11:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.9f)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1) <= 25f)
						{
							if (!func_595())
							{
								if (GlobalFunc_10618(&uLocal_336, "CST4AUD", "CST4_ACTION", 7, 0, 0, 0))
								{
									iLocal_547 = 12;
								}
							}
						}
						else
						{
							iLocal_547 = 12;
						}
					}
				}
				break;
			
			case 12:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_602))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_602) >= 0.99f)
					{
						iLocal_547 = 0;
					}
				}
				break;
		}
	}
	else if (func_595())
	{
		GlobalFunc_4956();
	}
}

int func_595()//Position - 0x68418
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			if ((((MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_MELT") || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_CUT")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_AWFUL")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_AGAIN")) || MISC::ARE_STRINGS_EQUAL(&Var0, "CST4_ACTION"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_596(var uParam0)//Position - 0x68490
{
	switch (*uParam0)
	{
		case 0:
			*uParam0++;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(Local_229.f_7);
			STREAMING::REQUEST_ANIM_DICT("misscarsteal4@toilet");
			if (STREAMING::HAS_MODEL_LOADED(Local_229.f_7) && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@toilet"))
			{
				if (func_441(&Local_132, 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1))
				{
					if (!PED::IS_PED_INJURED(Local_132))
					{
						GlobalFunc_173(&uLocal_336, 0, Local_132, "CST4RUNNER3", 0, 1);
					}
					ENTITY::CREATE_MODEL_HIDE(Local_229.f_1, 1f, Local_229.f_7, 0);
					if (func_567(&Local_229, 1))
					{
					}
					func_405(&Local_132, 0);
					*uParam0++;
				}
			}
			break;
		
		case 2:
			func_597(&Local_132, PLAYER::PLAYER_PED_ID());
			break;
	}
}

void func_597(int iParam0, int iParam1)//Position - 0x68550
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		iParam0->f_17 = GlobalFunc_156(*iParam0, iParam1, 1);
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam1))
			{
				Var0 = { -1160.548f, -528.44f, 31.585f };
				Var3 = { 0f, 0f, 133.92f };
				if (iParam0->f_15 != 19)
				{
					if (((((ENTITY::IS_ENTITY_TOUCHING_ENTITY(*iParam0, iParam1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(*iParam0, iParam1, 1)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 122)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 29)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 124)) || PED::HAS_PED_RECEIVED_EVENT(*iParam0, 123))
					{
						func_405(iParam0, 19);
					}
				}
				switch (iParam0->f_15)
				{
					case 0:
						if (iParam0->f_14 == 0)
						{
							iParam0->f_14 = 1;
						}
						func_405(iParam0, 5);
						break;
					
					case 5:
					case 6:
					case 7:
					case 8:
						if (iParam0->f_14 == 0)
						{
							switch (iParam0->f_15)
							{
								case 5:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_base_idle", 3))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
										TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@toilet", "desperate_toilet_base_idle", Var0, Var3, 1000f, -1000f, -1, 4098, 0f, 2, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								
								case 6:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_a", 3))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
										TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_a", Var0, Var3, 1000f, -1000f, -1, 4098, 0f, 2, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								
								case 7:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_b", 3))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
										TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_b", Var0, Var3, 1000f, -1000f, -1, 4098, 0f, 2, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								
								case 8:
									if (!ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_c", 3))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
										TASK::TASK_PLAY_ANIM_ADVANCED(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_c", Var0, Var3, 1000f, -1000f, -1, 4098, 0f, 2, 0);
									}
									else
									{
										iParam0->f_14 = 1;
									}
									break;
								}
						}
						if (iParam0->f_14 == 1)
						{
							if ((iLocal_93 == 0 && WEAPON::GET_CURRENT_PED_WEAPON(iParam1, &iVar6, 1)) && iVar6 == joaat("weapon_stungun"))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 1);
							}
							else
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							}
							switch (iParam0->f_15)
							{
								case 5:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_base_idle", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@toilet", "desperate_toilet_base_idle") >= 1f)
										{
											switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
											{
												case 0:
													func_405(iParam0, 6);
													break;
												
												case 1:
													func_405(iParam0, 7);
													break;
												
												case 2:
													func_405(iParam0, 8);
													break;
												}
											}
									}
									break;
								
								case 6:
								case 7:
								case 8:
									if (((ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_a", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_a") >= 1f) || (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_b", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_b") >= 1f)) || (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_c", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_c") >= 1f))
									{
										func_405(iParam0, 5);
									}
									break;
							}
							switch (iParam0->f_15)
							{
								case 5:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_base_idle", 3))
									{
										if (func_408("CST4_TOILET"))
										{
											func_438("CST4_TOILET", 0);
										}
									}
									break;
								
								case 6:
								case 7:
								case 8:
									if ((ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(*iParam0, "misscarsteal4@toilet", "desperate_toilet_idle_c", 3))
									{
										if (!func_408("CST4_TOILET"))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(iParam1, -1151.53f, -535.51f, 42.63f, 20f, 16f, 16f, 0, 1, 0) && iParam0->f_17 < 20f)
											{
												switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
												{
													case 0:
														if (!GlobalFunc_5172(&Local_273, 1))
														{
															if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_TOILET", "CST4_TOILET_1", 7, 0, 0))
															{
																func_438("CST4_TOILET", 1);
															}
														}
														else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
														{
															GlobalFunc_5653(*iParam0, "CST4_BSAA", "CST4RUNNER3", 4);
															func_438("CST4_TOILET", 1);
														}
														break;
													
													case 1:
														if (!GlobalFunc_5172(&Local_273, 1))
														{
															if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_TOILET", "CST4_TOILET_3", 7, 0, 0))
															{
																func_438("CST4_TOILET", 1);
															}
														}
														else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
														{
															GlobalFunc_5653(*iParam0, "CST4_BSAB", "CST4RUNNER3", 4);
															func_438("CST4_TOILET", 1);
														}
														break;
													
													case 2:
														if (!GlobalFunc_5172(&Local_273, 1))
														{
															if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_TOILET", "CST4_TOILET_5", 7, 0, 0))
															{
																func_438("CST4_TOILET", 1);
															}
														}
														else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
														{
															GlobalFunc_5653(*iParam0, "CST4_BSAC", "CST4RUNNER3", 4);
															func_438("CST4_TOILET", 1);
														}
														break;
													
													case 3:
														if (!GlobalFunc_5172(&Local_273, 1))
														{
															if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_TOILET", "CST4_TOILET_7", 7, 0, 0))
															{
																func_438("CST4_TOILET", 1);
															}
														}
														else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
														{
															GlobalFunc_5653(*iParam0, "CST4_BSAD", "CST4RUNNER3", 4);
															func_438("CST4_TOILET", 1);
														}
														break;
													
													case 4:
														if (!GlobalFunc_5172(&Local_273, 1))
														{
															if (GlobalFunc_10630(&uLocal_336, "CST4AUD", "CST4_TOILET", "CST4_TOILET_9", 7, 0, 0))
															{
																func_438("CST4_TOILET", 1);
															}
														}
														else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
														{
															GlobalFunc_5653(*iParam0, "CST4_BSAE", "CST4RUNNER3", 4);
															func_438("CST4_TOILET", 1);
														}
														break;
												}
											}
											else
											{
												func_438("CST4_TOILET", 1);
											}
										}
										else if (GlobalFunc_111())
										{
											if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(*iParam0))
											{
												if (PED::IS_PED_DEAD_OR_DYING(*iParam0, 1))
												{
													GlobalFunc_4956();
												}
											}
										}
									}
									break;
								}
						}
						break;
					
					case 19:
						if (iParam0->f_14 == 0)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(*iParam0, 17, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 4, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 1024, 1);
							PED::SET_PED_FLEE_ATTRIBUTES(*iParam0, 128, 1);
							if (!PED::IS_PED_FLEEING(*iParam0))
							{
								TASK::CLEAR_PED_TASKS(*iParam0);
								TASK::TASK_SMART_FLEE_PED(*iParam0, iParam1, 300f, -1, 0, 0);
								PED::SET_PED_KEEP_TASK(*iParam0, 1);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, 0);
							iParam0->f_7 = 0;
							iParam0->f_14 = 1;
						}
						if ((MISC::GET_GAME_TIMER() - iParam0->f_7) > 0)
						{
							if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(*iParam0))
							{
								GlobalFunc_5653(*iParam0, "SCREAM_PANIC", "WAVELOAD_PAIN_MALE", 3);
								iParam0->f_7 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 7000));
							}
						}
						break;
					}
				}
		}
		if (!ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam0->f_15 == 19)
		{
			if (bLocal_524 == 0)
			{
				if (iParam0->f_17 > 200f)
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
					STREAMING::REMOVE_ANIM_DICT("misscarsteal4@toilet");
				}
			}
		}
		if (ENTITY::IS_ENTITY_DEAD(*iParam0) || iParam0->f_15 == 19)
		{
			if (ENTITY::IS_ENTITY_DEAD(*iParam0))
			{
				iParam0->f_15 = 1;
				if (iParam0->f_16 == 0)
				{
					iParam0->f_16 = func_404(iParam0);
					func_403(iParam0->f_16, &iLocal_576, &iLocal_577, &iLocal_578);
				}
			}
			if (iParam0->f_17 > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
				STREAMING::REMOVE_ANIM_DICT("misscarsteal4@toilet");
			}
		}
	}
}

int func_598(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x68D85
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam1 == 0)
	{
		HUD::CLEAR_HELP(1);
		HUD::CLEAR_PRINTS();
		HUD::REQUEST_ADDITIONAL_TEXT("CAR4", 0);
		HUD::REQUEST_ADDITIONAL_TEXT("CST4AUD", 6);
		if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("jb700"), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_47, 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_48, 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_m_spyactor"), 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_f_y_spyactress"), 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_m_filmdirector"), 1);
		PED::ADD_RELATIONSHIP_GROUP("FilmCrew", &iLocal_95);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_95, iLocal_95);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_95, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_95, -183807561);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_95, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -183807561, iLocal_95);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -183807561, 1862763509);
		PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
		HUD::SET_GPS_FLAGS(0, 15f);
		iLocal_526 = GlobalFunc_5101(1);
		GlobalFunc_696();
		GlobalFunc_563(1);
		GlobalFunc_2427(7, 0);
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[24 /*31*/]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(Global_34036[24 /*31*/], Global_34036[24 /*31*/].f_5, Global_34036[24 /*31*/].f_2, 1, 1, 0);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[24 /*31*/]))
		{
			AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_34036[24 /*31*/], 1);
		}
		if (GlobalFunc_2(0))
		{
			*iParam4 = 1;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
		}
		else
		{
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 15f);
		}
		iLocal_604 = AUDIO::GET_SOUND_ID();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA((-1130.464f - 6f), (-455.5777f - 6f), (36.56462f - 3f), (-1130.464f + 6f), (-455.5777f + 6f), (36.56462f + 3f), 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA((-1130.464f - 6f), (-455.5777f - 6f), (36.56462f - 3f), (-1130.464f + 6f), (-455.5777f + 6f), (36.56462f + 3f));
		MISC::SET_STUNT_JUMPS_CAN_TRIGGER(0);
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		*iParam2 = 0;
		func_625(iParam0);
		GlobalFunc_2535(&uLocal_623, &uLocal_507);
		GlobalFunc_2534(&uLocal_632, &uLocal_508);
		func_622();
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 0:
					iLocal_525 = 0;
					func_676();
					break;
				
				case 1:
					iLocal_525 = 0;
					break;
				
				case 2:
					iLocal_525 = 0;
					break;
				
				case 3:
					iLocal_525 = 1;
					break;
				
				case 4:
					iLocal_525 = 1;
					break;
				
				case 5:
					iLocal_525 = 1;
					break;
			}
			GlobalFunc_2519(PLAYER::PLAYER_PED_ID(), Local_269, Local_269.f_3, 0, 1, 0);
			if (*uParam3 == 1)
			{
				if (iParam0 == 5)
				{
					while (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_50)))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_50));
						SYSTEM::WAIT(0);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				GlobalFunc_7714(PLAYER::PLAYER_PED_ID());
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				FIRE::STOP_FIRE_IN_RANGE(Local_269, 1000f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(Local_269, 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_269, 1000f);
				MISC::CLEAR_AREA(Local_269, 1000f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_269, 1000f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_OBJECTS(-1051.45f, -477.7f, 35.99f, 20f, 6);
				MISC::CLEAR_AREA_OF_OBJECTS(-1209.42f, -577.77f, 26.67f, 20f, 6);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			iLocal_511 = 0;
			iLocal_576 = 0;
			iLocal_577 = 0;
			iLocal_578 = 0;
			fLocal_542 = 0f;
			StringCopy(&Local_77, "CAR4_DCAR", 16);
			StringCopy(&cLocal_81, "CMN_GENGETIN", 16);
			StringCopy(&cLocal_85, "CMN_GENGETBCK", 16);
			iLocal_528 = 0;
			iLocal_529 = 0;
			iLocal_530 = 0;
			iLocal_532 = 0;
			iLocal_533 = 0;
			iLocal_534 = 0;
			iLocal_535 = 0;
			iLocal_536 = 0;
			iLocal_537 = 0;
			iLocal_538 = 0;
			iLocal_539 = 0;
			iLocal_540 = 0;
			iLocal_541 = 0;
			iLocal_531 = 0;
		}
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
				if (iLocal_527 == 0)
				{
					TASK::SET_SCENARIO_GROUP_ENABLED("MOVIE_STUDIO_SECURITY", 0);
					func_621(-1149.78f, -508.89f, 40.84f, 72f, 52f, 16f);
					if (iLocal_607 == 0)
					{
						iLocal_607 = GlobalFunc_2533(-1149.78f, -508.89f, 40.84f, 72f, 52f, 16f);
					}
					if (iLocal_608 == 0)
					{
						iLocal_608 = GlobalFunc_2533(-1073.38f, -476.93f, 37.63f, 20f, 20f, 4f);
					}
					MISC::CLEAR_AREA_OF_PEDS(-1149.78f, -508.89f, 40.84f, 90f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-1080.52f, -479.68f, 35.69f, 20f, 0);
					iLocal_527 = 1;
				}
				break;
			
			default:
				break;
		}
		if (*iParam4 == 1)
		{
			GlobalFunc_5812(Local_269, Local_269.f_3, 1, 0);
		}
		func_617(iParam0);
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		if (GlobalFunc_2531(&uLocal_623, &uLocal_507))
		{
			if (GlobalFunc_2530(&uLocal_632, &uLocal_508))
			{
				*iParam1++;
			}
		}
	}
	if (*iParam1 == 4)
	{
		func_614(0);
		switch (iParam0)
		{
			case 0:
				if (func_510(&Local_186, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_611[1] = 1;
					iLocal_611[2] = 1;
					iLocal_611[4] = 1;
					GlobalFunc_534(Local_186, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_186, 1);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_186, 0);
					}
					if ((func_441(&Local_96, 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1) && func_441(&Local_168, 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1)) && func_441(&Local_150, 0, iLocal_95, 0, 145, 0, 1, 0, Local_186, 0, 1))
					{
						if (!PED::IS_PED_INJURED(Local_96))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_96, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_96, 3, 0, 0, 0);
						}
						if (!PED::IS_PED_INJURED(Local_168))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_168, 0, 1, 1, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168, 2, 1, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168, 3, 0, 2, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_168, 5, 0, 0, 0);
						}
						if (func_567(&Local_221, 1) && func_567(&Local_205, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_221))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_221))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_221, 1);
								}
							}
							iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
							if (GlobalFunc_7984())
							{
								if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
									}
									GlobalFunc_8317(iVar0, 145);
									ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
								}
							}
							*iParam1++;
						}
					}
				}
				break;
			
			case 1:
				if (func_510(&Local_186, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_611[1] = 1;
					iLocal_611[2] = 1;
					iLocal_611[3] = 1;
					GlobalFunc_534(Local_186, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_186, 1);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_186, 0);
					}
					if (func_441(&Local_96, 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1))
					{
						if (!PED::IS_PED_INJURED(Local_96))
						{
							PED::SET_PED_COMPONENT_VARIATION(Local_96, 4, 0, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(Local_96, 3, 0, 0, 0);
						}
						if (func_567(&Local_221, 1) && func_567(&Local_205, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_221))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_221))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_221, 1);
								}
							}
							*iParam1++;
						}
					}
				}
				break;
			
			case 2:
				if (func_510(&Local_186, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_611[1] = 1;
					iLocal_611[2] = 1;
					iLocal_611[3] = 1;
					GlobalFunc_534(Local_186, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_186, 1);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_186, 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_186, 1, 1);
					}
					AUDIO::SET_RADIO_TO_STATION_INDEX(255);
					if (func_567(&Local_221, 1) && func_567(&Local_205, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_221))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_221))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_221, 1);
							}
						}
						if (func_441(&Local_96, 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1))
						{
							if (!PED::IS_PED_INJURED(Local_96))
							{
								PED::SET_PED_COMPONENT_VARIATION(Local_96, 4, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(Local_96, 3, 1, 0, 0);
							}
							if (func_441(&Local_150, 0, iLocal_95, 0, 145, 0, 1, 0, Local_186, 0, 1))
							{
								func_405(&Local_150, 16);
								*iParam1++;
							}
						}
					}
				}
				break;
			
			case 3:
				if (func_510(&Local_186, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_611[1] = 1;
					iLocal_611[2] = 1;
					iLocal_611[3] = 1;
					iLocal_611[5] = 1;
					iLocal_611[6] = 1;
					iLocal_611[7] = 1;
					GlobalFunc_534(Local_186, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_186, 1);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_186, 0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
					}
					if (func_567(&Local_221, 1) && func_567(&Local_205, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_221))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_221))
							{
								ENTITY::SET_ENTITY_INVINCIBLE(Local_221, 1);
							}
						}
						if (MISC::IS_BIT_SET(Global_86817, 4))
						{
							*iParam1++;
						}
						else if (func_441(&Local_150, 0, iLocal_95, 0, 145, 0, 1, 0, Local_186, 0, 1))
						{
							func_405(&Local_150, 16);
							*iParam1++;
						}
					}
				}
				break;
			
			case 4:
				if (func_510(&Local_186, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_611[1] = 1;
					iLocal_611[2] = 1;
					iLocal_611[3] = 1;
					GlobalFunc_534(Local_186, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_186, 0);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_186, 0);
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
					}
					iLocal_611[8] = 1;
					iLocal_611[9] = 1;
					iLocal_611[5] = 1;
					*iParam1++;
				}
				break;
			
			case 5:
				if (func_510(&Local_186, 0, 1, 145, 1, -1, -1, -1, 0, 0))
				{
					iLocal_611[1] = 1;
					iLocal_611[2] = 1;
					iLocal_611[3] = 1;
					GlobalFunc_534(Local_186, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
					{
						VEHICLE::SET_VEHICLE_STRONG(Local_186, 0);
						VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_186, 0);
					}
					*iParam1++;
				}
				break;
			}
	}
	if (*iParam1 == 5)
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				if (GlobalFunc_2(0) || GlobalFunc_10910(PLAYER::PLAYER_PED_ID(), 12, 1))
				{
					func_3(0);
				}
				break;
			
			case 2:
				iLocal_517 = 1;
				func_3(1);
				if (!MISC::IS_BIT_SET(Global_86817, 0))
				{
					func_565(0);
				}
				break;
			
			default:
				if (MISC::IS_BIT_SET(Global_86817, 0))
				{
					iLocal_517 = 1;
					func_3(1);
				}
				else
				{
					iLocal_517 = 0;
					func_3(0);
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 6)
	{
		GlobalFunc_200(&uLocal_336, 0);
		GlobalFunc_200(&uLocal_336, 1);
		GlobalFunc_200(&uLocal_336, 2);
		GlobalFunc_200(&uLocal_336, 3);
		GlobalFunc_200(&uLocal_336, 6);
		GlobalFunc_200(&uLocal_336, 7);
		GlobalFunc_200(&uLocal_336, 4);
		GlobalFunc_200(&uLocal_336, 5);
		GlobalFunc_200(&uLocal_336, 8);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_173(&uLocal_336, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		}
		switch (iParam0)
		{
			case 0:
				GlobalFunc_173(&uLocal_336, 2, 0, "MOLLY", 0, 1);
				if (!PED::IS_PED_INJURED(Local_96))
				{
					GlobalFunc_173(&uLocal_336, 6, Local_96, "CST4ACTOR", 0, 1);
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(Local_150))
				{
					GlobalFunc_173(&uLocal_336, 3, Local_150, "CST4ACTRESS", 0, 1);
				}
				break;
			
			case 3:
				GlobalFunc_173(&uLocal_336, 2, 0, "MOLLY", 0, 1);
				if (!PED::IS_PED_INJURED(Local_150))
				{
					GlobalFunc_173(&uLocal_336, 3, Local_150, "CST4ACTRESS", 0, 1);
				}
				if (!PED::IS_PED_INJURED(Local_912[0 /*18*/]))
				{
					GlobalFunc_173(&uLocal_336, 7, Local_912[0 /*18*/], "CST4DIRECTOR", 0, 1);
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 7)
	{
		GlobalFunc_9132(0);
		GlobalFunc_8523(39, 1);
		GlobalFunc_8523(40, 1);
		GlobalFunc_8523(41, 1);
		GlobalFunc_8523(42, 1);
		GlobalFunc_8523(43, 1);
		func_603();
		func_602();
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PED::SET_CREATE_RANDOM_COPS(1);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PED::SET_CREATE_RANDOM_COPS(0);
				break;
			
			case 3:
				GlobalFunc_9132(1);
				PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				PED::SET_CREATE_RANDOM_COPS(0);
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				break;
			
			case 4:
			case 5:
				PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
				break;
		}
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
				GlobalFunc_10708(80, 1);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[24 /*31*/]))
				{
					AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_34036[24 /*31*/], 1);
				}
				break;
			
			case 3:
				GlobalFunc_10708(80, 1);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[24 /*31*/]))
				{
					AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_34036[24 /*31*/], 1);
				}
				break;
			
			case 4:
			case 5:
				GlobalFunc_10708(80, 1);
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_34036[24 /*31*/]))
				{
					AUDIO::SET_SCRIPT_UPDATE_DOOR_AUDIO(Global_34036[24 /*31*/], 1);
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 8)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 3:
					STREAMING::REQUEST_CLIP_SET("move_injured_generic");
					STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
					if (STREAMING::HAS_CLIP_SET_LOADED("move_injured_generic") && STREAMING::HAS_ANIM_DICT_LOADED("misscarsteal4@director_grip"))
					{
						if ((func_441(&(Local_912[1 /*18*/]), 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1) && func_441(&(Local_912[2 /*18*/]), 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1)) && func_441(&(Local_912[0 /*18*/]), 0, iLocal_95, 0, 145, 0, 1, 0, 0, -1, 1))
						{
							if (func_567(&Local_213, 0) && func_567(&Local_237, 0))
							{
								if (!PED::IS_PED_INJURED(Local_912[0 /*18*/]))
								{
									PED::SET_PED_PROP_INDEX(Local_912[0 /*18*/], 1, 0, 0, false);
									GlobalFunc_173(&uLocal_336, 7, Local_912[0 /*18*/], "CST4DIRECTOR", 0, 1);
								}
								if (!PED::IS_PED_INJURED(Local_912[1 /*18*/]))
								{
									PED::SET_PED_COMPONENT_VARIATION(Local_912[1 /*18*/], 0, 1, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_912[1 /*18*/], 3, 1, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_912[1 /*18*/], 4, 0, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_912[1 /*18*/], 8, 2, 0, 0);
								}
								if (!PED::IS_PED_INJURED(Local_912[2 /*18*/]))
								{
									PED::SET_PED_COMPONENT_VARIATION(Local_912[2 /*18*/], 0, 0, 1, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_912[2 /*18*/], 3, 0, 2, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_912[2 /*18*/], 4, 0, 2, 0);
									PED::SET_PED_COMPONENT_VARIATION(Local_912[2 /*18*/], 8, 0, 0, 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_237))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_237))
									{
										if (!ENTITY::IS_ENTITY_ATTACHED(Local_237))
										{
											if (!PED::IS_PED_INJURED(Local_912[1 /*18*/]))
											{
												ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_237, Local_912[1 /*18*/], PED::GET_PED_BONE_INDEX(Local_912[1 /*18*/], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
											}
										}
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_912[1 /*18*/]))
								{
									if (!PED::IS_PED_INJURED(Local_912[1 /*18*/]))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_912[1 /*18*/], "misscarsteal4@director_grip", "end_loop_grip", 3))
										{
											TASK::TASK_PLAY_ANIM_ADVANCED(Local_912[1 /*18*/], "misscarsteal4@director_grip", "end_loop_grip", Local_213.f_1, Local_213.f_4, 4f, -8f, -1, 790537, 0f, 2, 2);
										}
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_912[2 /*18*/]))
								{
									if (!PED::IS_PED_INJURED(Local_912[2 /*18*/]))
									{
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_912[2 /*18*/], "misscarsteal4@director_grip", "mcs_2_loop_grip1", 3))
										{
											TASK::TASK_PLAY_ANIM_ADVANCED(Local_912[2 /*18*/], "misscarsteal4@director_grip", "mcs_2_loop_grip1", Local_56, Local_59, 1000f, -4f, -1, 4097, 0f, 2, 0);
										}
									}
								}
								if (ENTITY::DOES_ENTITY_EXIST(Local_912[0 /*18*/]))
								{
									if (!PED::IS_PED_INJURED(Local_912[0 /*18*/]))
									{
										PED::SET_PED_PROP_INDEX(Local_912[0 /*18*/], 1, 0, 0, false);
										if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_912[0 /*18*/], "misscarsteal4@director_grip", "end_loop_director", 3))
										{
											TASK::TASK_PLAY_ANIM_ADVANCED(Local_912[0 /*18*/], "misscarsteal4@director_grip", "end_loop_director", Local_213.f_1, Local_213.f_4, 4f, -8f, -1, 790537, 0f, 2, 1);
										}
									}
								}
								func_405(&(Local_912[1 /*18*/]), 7);
								func_405(&(Local_912[2 /*18*/]), 12);
								func_405(&(Local_912[0 /*18*/]), 7);
								if (((ENTITY::DOES_ENTITY_EXIST(Local_672[0 /*18*/]) && ENTITY::DOES_ENTITY_EXIST(Local_672[1 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_672[2 /*18*/])) && ENTITY::DOES_ENTITY_EXIST(Local_672[3 /*18*/]))
								{
									iVar1 = 0;
									while (iVar1 < 4)
									{
										if (!ENTITY::IS_ENTITY_DEAD(Local_672[iVar1 /*18*/]))
										{
											TASK::TASK_AIM_GUN_AT_ENTITY(Local_672[iVar1 /*18*/], PLAYER::PLAYER_PED_ID(), -1, 1);
											func_405(&(Local_672[iVar1 /*18*/]), 22);
										}
										iVar1++;
									}
									*iParam1++;
								}
								else
								{
									iVar1 = 0;
									while (iVar1 < Local_672)
									{
										if (!ENTITY::DOES_ENTITY_EXIST(Local_672[iVar1 /*18*/]))
										{
											STREAMING::REQUEST_MODEL(iLocal_48);
											if (STREAMING::HAS_MODEL_LOADED(iLocal_48))
											{
												Local_672[iVar1 /*18*/] = func_557(Local_672[iVar1 /*18*/].f_2, Local_672[iVar1 /*18*/].f_5, iLocal_48, -183807561, 200, joaat("weapon_pistol"));
												func_405(&(Local_672[iVar1 /*18*/]), 0);
												STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_48);
											}
										}
										iVar1++;
									}
								}
							}
						}
					}
					break;
				
				default:
					*iParam1++;
					break;
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 9)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (*iParam4 == 1)
			{
				GlobalFunc_5108(0, -1, 0);
			}
			else
			{
				STREAMING::NEW_LOAD_SCENE_START_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 20f, 0);
				iVar2 = MISC::GET_GAME_TIMER() + 15000;
				while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar2)
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			SYSTEM::WAIT(500);
			switch (iParam0)
			{
				case 3:
				case 4:
				case 5:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_186, -1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_186);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_186, 1, 1);
							PHYSICS::ACTIVATE_PHYSICS(Local_186);
							ENTITY::SET_ENTITY_DYNAMIC(Local_186, 1);
						}
					}
					break;
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			switch (iParam0)
			{
				case 1:
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_TRAILER_RESTART");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_INSIDE_STUDIO"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_3_INSIDE_STUDIO");
					}
					break;
				
				case 2:
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_CAR_RESTART");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_INSIDE_STUDIO"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_3_INSIDE_STUDIO");
					}
					break;
				
				case 3:
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_ESCAPE_RESTART");
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_3_ESCAPE_SECURITY"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_3_ESCAPE_SECURITY");
					}
					break;
				
				case 4:
					AUDIO::TRIGGER_MUSIC_EVENT("CAR3_DELIVER_RESTART");
					break;
			}
			switch (iParam0)
			{
				case 1:
				case 5:
					break;
				
				default:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					break;
				}
		}
		*iParam1++;
	}
	if (*iParam1 == 10)
	{
		switch (iParam0)
		{
			case 0:
				func_637(0, "GET TO ACTOR", 0, 0, 0, 1);
				break;
			
			case 2:
				func_637(1, "GET TO CAR", 0, 0, 0, 1);
				break;
			
			case 3:
				func_637(2, "ESCAPE FILM SET", 0, 0, 0, 1);
				break;
			
			case 4:
				func_637(3, "DELIVER CAR", 1, 0, 0, 1);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 11)
	{
		*iParam2 = 1;
		*iParam4 = 0;
		*uParam3 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		*iParam1++;
	}
	if (*iParam1 == 12)
	{
		return 1;
	}
	return 0;
}




void func_602()//Position - 0x6A25E
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1382347031))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1382347031, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382347031, 1, 0, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1668106976))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1668106976, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1668106976, 1, 0, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1562636567))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1562636567, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1562636567, 1, 0, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-611684898))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-611684898, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-611684898, 1, 0, 1);
	}
}

void func_603()//Position - 0x6A2F6
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1562636567))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(1562636567, joaat("prop_bh1_03_gate_l"), -965.1991f, -504.0431f, 37.9792f, 0, 0, 0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-611684898))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(-611684898, joaat("prop_bh1_03_gate_r"), -962.2961f, -509.599f, 37.9779f, 0, 0, 0);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-449343164))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(-449343164, joaat("prop_sc1_06_gate_r"), 500.1759f, -1320.545f, 28.2499f, 1, 1, 0);
	}
}











void func_614(int iParam0)//Position - 0x6A825
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_611 - 1))
	{
		iLocal_611[iVar0] = iParam0;
		iVar0++;
	}
}



void func_617(int iParam0)//Position - 0x6A8D9
{
	switch (iParam0)
	{
		case 0:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_186))
			{
				GlobalFunc_2532(Local_186.f_6, &uLocal_623, 8, &uLocal_507);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_96))
			{
				GlobalFunc_2532(Local_96.f_6, &uLocal_623, 8, &uLocal_507);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_221))
			{
				GlobalFunc_2532(Local_221.f_7, &uLocal_623, 8, &uLocal_507);
			}
			break;
		
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_186))
			{
				GlobalFunc_2532(Local_186.f_6, &uLocal_623, 8, &uLocal_507);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_96))
			{
				GlobalFunc_2532(Local_96.f_6, &uLocal_623, 8, &uLocal_507);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_221))
			{
				GlobalFunc_2532(Local_221.f_7, &uLocal_623, 8, &uLocal_507);
			}
			break;
		
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_186))
			{
				GlobalFunc_2532(Local_186.f_6, &uLocal_623, 8, &uLocal_507);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_221))
			{
				GlobalFunc_2532(Local_221.f_7, &uLocal_623, 8, &uLocal_507);
			}
			break;
		
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_186))
			{
				GlobalFunc_2532(Local_186.f_6, &uLocal_623, 8, &uLocal_507);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_221))
			{
				GlobalFunc_2532(Local_221.f_7, &uLocal_623, 8, &uLocal_507);
			}
			GlobalFunc_2532(iLocal_49, &uLocal_623, 8, &uLocal_507);
			break;
		
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_186))
			{
				GlobalFunc_2532(Local_186.f_6, &uLocal_623, 8, &uLocal_507);
			}
			GlobalFunc_2532(iLocal_49, &uLocal_623, 8, &uLocal_507);
			break;
		
		case 5:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_186))
			{
				GlobalFunc_2532(Local_186.f_6, &uLocal_623, 8, &uLocal_507);
			}
			break;
	}
}




void func_621(struct<3> Param0, struct<3> Param3)//Position - 0x6ABA9
{
	PED::SET_PED_NON_CREATION_AREA((Param0.x - Param3.x), (Param0.f_1 - Param3.f_1), (Param0.f_2 - Param3.f_2), (Param0.x + Param3.x), (Param0.f_1 + Param3.f_1), (Param0.f_2 + Param3.f_2));
}

void func_622()//Position - 0x6ABE3
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_1194;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_1194[iVar1] = 0;
		iVar1++;
	}
	iLocal_1193 = 0;
}



void func_625(int iParam0)//Position - 0x6AC9A
{
	func_628();
	func_627();
	func_626();
	switch (iParam0)
	{
		case 0:
			Local_269 = { -1085.611f, -428.5754f, 35.6276f };
			Local_269.f_3 = 118.9753f;
			Local_186.f_2 = { -1180.128f, -505.928f, 34.5664f };
			Local_186.f_5 = 246.5268f;
			Local_186.f_6 = joaat("jb700");
			Local_96.f_2 = { -1109.36f, -503.38f, 34.26f };
			Local_96.f_5 = 116.5653f;
			Local_96.f_6 = joaat("u_m_m_spyactor");
			Local_168.f_2 = { -1112.314f, -504.5007f, 34.0635f };
			Local_168.f_5 = 296.0018f;
			Local_168.f_6 = joaat("a_f_y_hipster_04");
			Local_221.f_1 = { -1113.92f, -502.832f, 35.882f };
			Local_221.f_4 = { 0f, 0f, -84.1778f };
			Local_221.f_7 = joaat("prop_a_trailer_door_01");
			break;
		
		case 1:
			Local_269 = { -1109.6f, -502.7238f, 34.2594f };
			Local_269.f_3 = 113.6969f;
			Local_186.f_2 = { -1180.128f, -505.928f, 34.5664f };
			Local_186.f_5 = 246.5268f;
			Local_186.f_6 = joaat("jb700");
			Local_96.f_2 = { -1105.235f, -491.2045f, 34.8387f };
			Local_96.f_5 = 206.1382f;
			Local_96.f_6 = joaat("u_m_m_spyactor");
			Local_221.f_1 = { -1113.92f, -502.832f, 35.882f };
			Local_221.f_4 = { 0f, 0f, -84.1778f };
			Local_221.f_7 = joaat("prop_a_trailer_door_01");
			break;
		
		case 2:
			Local_269 = { -1115.456f, -505.5281f, 33.9062f };
			Local_269.f_3 = 117.7305f;
			Local_186.f_2 = { -1180.128f, -505.928f, 34.5664f };
			Local_186.f_5 = 246.5268f;
			Local_186.f_6 = joaat("jb700");
			Local_96.f_2 = { -1116.618f, -502.8903f, 34.8063f };
			Local_96.f_5 = 304.2335f;
			Local_96.f_6 = joaat("u_m_m_spyactor");
			Local_221.f_1 = { -1113.905f, -502.82f, 35.882f };
			Local_221.f_4 = { 0f, 0f, 27f };
			Local_221.f_7 = joaat("prop_a_trailer_door_01");
			break;
		
		case 3:
			Local_269 = { -1180.118f, -504.4346f, 34.5669f };
			Local_269.f_3 = 252.0904f;
			Local_186.f_2 = { -1180.128f, -505.928f, 34.5664f };
			Local_186.f_5 = 246.5268f;
			Local_186.f_6 = joaat("jb700");
			Local_96.f_2 = { -1105.23f, -491.2f, 34.83f };
			Local_96.f_5 = 206.1382f;
			Local_96.f_6 = joaat("u_m_m_spyactor");
			Local_221.f_1 = { -1113.92f, -502.832f, 35.882f };
			Local_221.f_4 = { 0f, 0f, -84.1778f };
			Local_221.f_7 = joaat("prop_a_trailer_door_01");
			break;
		
		case 4:
			Local_269 = { 126.2967f, -912.3267f, 29.0396f };
			Local_269.f_3 = 160.9179f;
			Local_186.f_2 = { 124.8845f, -913.1312f, 28.971f };
			Local_186.f_5 = 161.685f;
			Local_186.f_6 = joaat("jb700");
			break;
		
		case 5:
			Local_269 = { 481.8158f, -1318.621f, 28.2052f };
			Local_269.f_3 = 119.3001f;
			Local_186.f_2 = { 480.7779f, -1317.75f, 28.2059f };
			Local_186.f_5 = 116.075f;
			Local_186.f_6 = joaat("jb700");
			break;
	}
}

void func_626()//Position - 0x6AFF8
{
	iLocal_1151[0] = 0;
	Local_1160[0 /*4*/] = { -1098.155f, -540.3402f, 34.3502f };
	Local_1160[0 /*4*/].f_3 = 297.874f;
	iLocal_1151[1] = 0;
	Local_1160[1 /*4*/] = { -1095.347f, -492.391f, 35.0424f };
	Local_1160[1 /*4*/].f_3 = 205.2367f;
	iLocal_1151[2] = 0;
	Local_1160[2 /*4*/] = { -1124.924f, -499.1039f, 33.76f };
	Local_1160[2 /*4*/].f_3 = 121.9869f;
	iLocal_1151[3] = 0;
	Local_1160[3 /*4*/] = { -1068.714f, -503.8521f, 35.1105f };
	Local_1160[3 /*4*/].f_3 = 28.3751f;
	iLocal_1151[4] = 0;
	Local_1160[4 /*4*/] = { -1104.863f, -485.5148f, 35.0221f };
	Local_1160[4 /*4*/].f_3 = 299.0859f;
	iLocal_1151[5] = 0;
	Local_1160[5 /*4*/] = { -1091.277f, -549.1374f, 33.9233f };
	Local_1160[5 /*4*/].f_3 = 304.0113f;
	iLocal_1151[6] = 0;
	Local_1160[6 /*4*/] = { -1134.64f, -530.8317f, 31.9306f };
	Local_1160[6 /*4*/].f_3 = 120.3262f;
	iLocal_1151[7] = 0;
	Local_1160[7 /*4*/] = { -1124.913f, -504.2563f, 33.6356f };
	Local_1160[7 /*4*/].f_3 = 299.8388f;
}

void func_627()//Position - 0x6B158
{
	Local_205.f_1 = { -1169.74f, -512.696f, 34.7427f };
	Local_205.f_4 = { 0f, 0f, -122.4f };
	Local_205.f_7 = joaat("prop_studio_light_02");
	Local_213.f_1 = { -1178.42f, -511.08f, 35.26f };
	Local_213.f_4 = { 0f, 0f, 180f };
	Local_213.f_7 = joaat("prop_direct_chair_02");
	Local_237.f_1 = { -1180f, -511.25f, 34.57f };
	Local_237.f_4 = { 0f, 0f, 0f };
	Local_237.f_7 = joaat("p_cs_clipboard");
	Local_229.f_1 = { -1160.736f, -528.9149f, 31.5855f };
	Local_229.f_4 = { 0f, 0f, 152.3009f };
	Local_229.f_7 = joaat("prop_portaloo_01a");
	Local_245.f_1 = { -1130.587f, -453.2327f, 36.175f };
	Local_245.f_4 = { -0.8f, 1f, -160f };
	Local_245.f_7 = joaat("prop_ld_greenscreen_01");
	Local_253.f_1 = { -1132.19f, -449.93f, 34.61f };
	Local_253.f_4 = { 0f, 0f, 0f };
	Local_253.f_7 = joaat("prop_v_cam_01");
	Local_261.f_1 = { -1132.75f, -451.21f, 34.57f };
	Local_261.f_4 = { 0f, 0f, 0f };
	Local_261.f_7 = joaat("prop_v_bmike_01");
	Local_912[0 /*18*/].f_2 = { -1178.114f, -510.3467f, 34.5669f };
	Local_912[0 /*18*/].f_5 = 27.146f;
	Local_912[0 /*18*/].f_6 = joaat("u_m_m_filmdirector");
	Local_912[1 /*18*/].f_2 = { -1179.117f, -510.1808f, 34.5669f };
	Local_912[1 /*18*/].f_5 = 350.5527f;
	Local_912[1 /*18*/].f_6 = joaat("s_m_y_grip_01");
	Local_912[2 /*18*/].f_2 = { -1170.044f, -511.5512f, 34.5666f };
	Local_912[2 /*18*/].f_5 = 203.5958f;
	Local_912[2 /*18*/].f_6 = joaat("s_m_y_grip_01");
	Local_912[3 /*18*/].f_2 = { -1185.96f, -506.3779f, 34.5794f };
	Local_912[3 /*18*/].f_5 = 65.6138f;
	Local_912[3 /*18*/].f_6 = joaat("s_m_y_grip_01");
	Local_912[4 /*18*/].f_2 = { -1177.044f, -488.3724f, 34.5519f };
	Local_912[4 /*18*/].f_5 = 82.4244f;
	Local_912[4 /*18*/].f_6 = joaat("s_m_y_grip_01");
	Local_912[5 /*18*/].f_2 = { -1176.169f, -482.1744f, 34.7701f };
	Local_912[5 /*18*/].f_5 = 201.0676f;
	Local_912[5 /*18*/].f_6 = joaat("s_m_y_grip_01");
	Local_635[0 /*18*/].f_2 = { -1140.176f, -472.6156f, 33.9209f };
	Local_635[0 /*18*/].f_5 = 37.5363f;
	Local_635[0 /*18*/].f_6 = joaat("s_m_m_movalien_01");
	Local_635[1 /*18*/].f_2 = { -1139.289f, -471.7373f, 33.9631f };
	Local_635[1 /*18*/].f_5 = 23.6991f;
	Local_635[1 /*18*/].f_6 = joaat("s_m_m_movalien_01");
	Local_150.f_2 = { -1181.315f, -506.7412f, 34.5669f };
	Local_150.f_5 = 253.9266f;
	Local_150.f_6 = joaat("u_f_y_spyactress");
	Local_132.f_2 = { -1159.354f, -527.1266f, 31.5364f };
	Local_132.f_5 = 137.443f;
	Local_132.f_6 = joaat("s_m_y_grip_01");
	Local_1021[0 /*18*/].f_2 = { -1130.663f, -450.2912f, 34.6384f };
	Local_1021[0 /*18*/].f_5 = 170.2838f;
	Local_1021[0 /*18*/].f_6 = joaat("ig_milton");
	Local_1021[1 /*18*/].f_2 = { -1128.749f, -449.877f, 34.6903f };
	Local_1021[1 /*18*/].f_5 = 173.7335f;
	Local_1021[1 /*18*/].f_6 = joaat("s_m_m_movalien_01");
	Local_1021[2 /*18*/].f_2 = { -1132.484f, -449.4888f, 34.6125f };
	Local_1021[2 /*18*/].f_5 = 207.1287f;
	Local_1021[2 /*18*/].f_6 = joaat("s_m_y_grip_01");
	Local_1021[3 /*18*/].f_2 = { -1133.23f, -451.1367f, 34.5651f };
	Local_1021[3 /*18*/].f_5 = 222.7364f;
	Local_1021[3 /*18*/].f_6 = joaat("s_m_y_grip_01");
	Local_1021[4 /*18*/].f_2 = { -1128.541f, -447.952f, 34.7552f };
	Local_1021[4 /*18*/].f_5 = 157.4622f;
	Local_1021[4 /*18*/].f_6 = joaat("u_m_y_antonb");
}

void func_628()//Position - 0x6B56D
{
	Local_672[0 /*18*/].f_2 = { -1175.255f, -501.9372f, 34.5669f };
	Local_672[0 /*18*/].f_5 = 138.1011f;
	Local_672[0 /*18*/].f_7 = -1;
	Local_672[0 /*18*/].f_6 = iLocal_48;
	Local_672[1 /*18*/].f_2 = { -1199.862f, -493.9804f, 34.5414f };
	Local_672[1 /*18*/].f_5 = 219.7226f;
	Local_672[1 /*18*/].f_7 = -1;
	Local_672[1 /*18*/].f_6 = iLocal_48;
	Local_672[2 /*18*/].f_2 = { -1188.666f, -510.127f, 34.674f };
	Local_672[2 /*18*/].f_5 = 317.9273f;
	Local_672[2 /*18*/].f_7 = -1;
	Local_672[2 /*18*/].f_6 = iLocal_48;
	Local_672[3 /*18*/].f_2 = { -1180.619f, -522.2653f, 29.3807f };
	Local_672[3 /*18*/].f_5 = 238.861f;
	Local_672[3 /*18*/].f_7 = -1;
	Local_672[3 /*18*/].f_6 = iLocal_48;
	Local_672[4 /*18*/].f_2 = { -1149.715f, -512.0564f, 32.6042f };
	Local_672[4 /*18*/].f_5 = 240.8322f;
	Local_672[4 /*18*/].f_7 = -1;
	Local_672[4 /*18*/].f_6 = iLocal_48;
	Local_874[0 /*18*/].f_2 = { -1066.076f, -477.5667f, 35.6377f };
	Local_874[0 /*18*/].f_5 = 209.005f;
	Local_874[0 /*18*/].f_6 = iLocal_48;
	Local_893[0 /*18*/].f_2 = { -1209.359f, -569.9016f, 26.3524f };
	Local_893[0 /*18*/].f_5 = 222.0723f;
	Local_893[0 /*18*/].f_6 = iLocal_48;
	Local_855[0 /*18*/].f_2 = { -1118.777f, -440.0241f, 35.238f };
	Local_855[0 /*18*/].f_5 = 120.6108f;
	Local_855[0 /*18*/].f_6 = iLocal_48;
}




void func_632(var uParam0)//Position - 0x6B78A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*18*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam0)[iVar0 /*18*/]))
			{
				if ((uParam0[iVar0 /*18*/])->f_15 == 22 || (uParam0[iVar0 /*18*/])->f_15 == 23)
				{
					PED::SET_PED_RESET_FLAG((*uParam0)[iVar0 /*18*/], 128, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_633(struct<3> Param0, float fParam3)//Position - 0x6B7EF
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > fParam3)
	{
		if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0));
		}
	}
	else if (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
	{
		INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Param0));
	}
}

void func_634(int iParam0, var uParam1)//Position - 0x6B849
{
	int iVar0;
	int iVar1;
	
	if (*iParam0 != 7 && *iParam0 != 8)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_186))
			{
				if (iLocal_611[2] == 1)
				{
					if (GlobalFunc_2226(&Local_186))
					{
						*uParam1 = 2;
						*iParam0 = 8;
					}
				}
				if (iLocal_611[1] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0) || FIRE::IS_ENTITY_ON_FIRE(Local_186))
					{
						*uParam1 = 1;
						*iParam0 = 8;
					}
				}
				if (iLocal_611[4] == 1)
				{
					if (bLocal_524 == 0)
					{
						if (fLocal_542 > 225f)
						{
							*uParam1 = 3;
							*iParam0 = 8;
						}
					}
				}
				if (iLocal_611[3] == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_186, 0))
						{
							if (bLocal_524 == 0)
							{
								if (fLocal_542 > 100f)
								{
									*uParam1 = 3;
									*iParam0 = 8;
								}
							}
						}
					}
				}
				if (iLocal_611[7] == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
					{
						if (iLocal_559 == 1 && iLocal_558 == 0)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(Local_186, Local_50, 20f, 16f, 3f, 0, 1, 0))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_50, 20f, 16f, 3f, 0, 1, 0))
								{
									iVar0 = GlobalFunc_2524(PLAYER::PLAYER_PED_ID(), -183807561, 0, 0, 28);
									if (ENTITY::DOES_ENTITY_EXIST(iVar0))
									{
										if (!ENTITY::IS_ENTITY_DEAD(iVar0))
										{
											if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_50, 20f, 16f, 3f, 0, 1, 0))
											{
												*uParam1 = 7;
												*iParam0 = 8;
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_611[6] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_150))
					{
						if (!PED::IS_PED_INJURED(Local_150))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_150, Local_186, 0))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_150, Local_50, 20f, 16f, 3f, 0, 1, 0))
									{
										*uParam1 = 6;
										*iParam0 = 8;
									}
								}
							}
						}
					}
				}
				if (iLocal_611[5] == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_186, 0))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_186, Local_50, 20f, 16f, 3f, 0, 1, 0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_50, 20f, 16f, 3f, 0, 1, 0))
							{
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
								{
									if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
									{
										iVar1 = GlobalFunc_2524(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
										if (ENTITY::DOES_ENTITY_EXIST(iVar1))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iVar1))
											{
												if (ENTITY::IS_ENTITY_AT_COORD(iVar1, Local_50, 20f, 16f, 3f, 0, 1, 0))
												{
													*uParam1 = 5;
													*iParam0 = 8;
												}
											}
										}
									}
								}
							}
						}
					}
				}
				if (iLocal_611[8] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_114))
					{
						if (PED::IS_PED_INJURED(Local_114) || ENTITY::IS_ENTITY_DEAD(Local_114))
						{
							*uParam1 = 8;
							*iParam0 = 8;
						}
					}
				}
				if (iLocal_611[9] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_114))
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_114, PLAYER::PLAYER_PED_ID(), 1) || (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_114, PLAYER::PLAYER_PED_ID()) && PED::IS_PED_RAGDOLL(Local_114)))
						{
							*uParam1 = 9;
							*iParam0 = 8;
						}
					}
				}
			}
		}
	}
}

int func_635(int iParam0)//Position - 0x6BB46
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (((((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1205.643f, -531.9991f, 25.34318f, -1074.153f, -462.6912f, 67.8194f, 102f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1200.559f, -581.0037f, 25.35342f, -1072.528f, -462.3289f, 67.83841f, 104f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1242.77f, -537.1285f, 26.77507f, -1177.131f, -481.6676f, 67.78716f, 82f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1182.018f, -463.7599f, 29.75991f, -1220.529f, -491.3238f, 67.6606f, 58f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1040.279f, -524.4053f, 34.03872f, -973.4578f, -488.3913f, 68.32129f, 54f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1063.08f, -546.8563f, 33.52911f, -1045.255f, -485.8732f, 68.18091f, 55f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1182.098f, -587.6457f, 25.24883f, -1004.804f, -489.6986f, 71.0566f, 32f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1070.755f, -551.1468f, 32.08905f, -1027.903f, -536.4257f, 67.63112f, 28f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1093.414f, -560.9276f, 31.95976f, -1070.76f, -551.1532f, 67.08801f, 28f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1155.982f, -594.1674f, 25.45345f, -1093.337f, -560.9742f, 66.95711f, 28f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1118.298f, -439.9089f, 34.26093f, -1141.63f, -442.6718f, 67.49657f, 29f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -996.2485f, -533.8096f, 34.81433f, -1021.386f, -504.8001f, 67.98534f, 22f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1014.586f, -545.3876f, 33.79847f, -1039.674f, -487.3128f, 68.18091f, 22f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1030.173f, -483.1883f, 35.18151f, -1017.089f, -507.492f, 68.15067f, 20f, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_637(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6BE7B
{
	int iVar0;
	int iVar1;
	var uVar2;
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
			uVar2 = GlobalFunc_5110(iVar1);
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
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_89999, iParam0);
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
				iVar10 = GlobalFunc_547(&(Global_89962.f_3));
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







































void func_676()//Position - 0x70A98
{
	Global_86817 = 0;
}

int func_677(int iParam0)//Position - 0x70AA5
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == 5)
	{
		return 5;
	}
	uVar1 = iParam0 + 1;
	uVar0 = uVar1;
	return uVar0;
}

void func_678(var uParam0, int iParam1)//Position - 0x70AC3
{
	if (iParam1 == 0)
	{
		*uParam0 = 0;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 2;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 3;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 4;
	}
}










void func_688()//Position - 0x71A51
{
	CUTSCENE::REMOVE_CUTSCENE();
	PAD::_RESET_INPUT_MAPPING_SCHEME();
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	GlobalFunc_4935();
	GlobalFunc_7632(0);
	GlobalFunc_563(0);
	GlobalFunc_699();
	GlobalFunc_2535(&uLocal_623, &uLocal_507);
	GlobalFunc_2534(&uLocal_632, &uLocal_508);
	GlobalFunc_7139(&Local_273, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
	}
	func_320(&Local_96, 0, 0, 1);
	func_320(&Local_114, 0, 0, 1);
	func_320(&Local_132, 0, 0, 1);
	func_320(&Local_150, 0, 0, 1);
	func_320(&Local_168, 0, 0, 1);
	func_398(&Local_635, 0, 0, 1);
	func_398(&Local_912, 0, 0, 1);
	func_398(&Local_1021, 0, 0, 1);
	func_398(&Local_672, 0, 0, 1);
	func_398(&Local_763, 0, 0, 1);
	func_398(&Local_800, 0, 0, 1);
	func_398(&Local_855, 0, 0, 1);
	func_398(&Local_874, 0, 0, 1);
	func_398(&Local_893, 0, 0, 1);
	if (ENTITY::DOES_ENTITY_EXIST(Local_229))
	{
		ENTITY::REMOVE_MODEL_HIDE(Local_229.f_1, 1f, Local_229.f_7, 0);
	}
	func_399(&Local_205, 0, 1);
	func_399(&Local_213, 0, 1);
	func_399(&Local_221, 0, 1);
	func_399(&Local_229, 0, 1);
	func_399(&Local_237, 0, 1);
	func_399(&Local_253, 0, 1);
	func_399(&Local_261, 0, 1);
	func_399(&Local_245, 0, 0);
	func_692(&Local_186, 0, 0);
	func_691(&Local_1112, 0, 0);
	if (HUD::DOES_BLIP_EXIST(uLocal_501))
	{
		HUD::REMOVE_BLIP(&uLocal_501);
	}
	GlobalFunc_2529(&iLocal_600);
	GlobalFunc_2529(&iLocal_601);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -183807561, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -183807561, iLocal_95);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_95);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("jb700"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_47, 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_48, 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_m_spyactor"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_f_y_spyactress"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("u_m_m_filmdirector"), 0);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::DESTROY_ALL_CAMS(0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
	STREAMING::REMOVE_PTFX_ASSET();
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("CAR_THEFT_MOVIE_LOT");
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	TASK::SET_SCENARIO_GROUP_ENABLED("MOVIE_STUDIO_SECURITY", 1);
	func_690();
	func_689();
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	GlobalFunc_9132(0);
	GlobalFunc_8523(39, 0);
	GlobalFunc_8523(40, 0);
	GlobalFunc_8523(41, 0);
	GlobalFunc_8523(42, 0);
	GlobalFunc_8523(43, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	GlobalFunc_5661(21, 1);
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	MISC::SET_STUNT_JUMPS_CAN_TRIGGER(1);
}

void func_689()//Position - 0x71CD9
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1562636567))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(1562636567);
	}
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-611684898))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-611684898);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-449343164))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(-449343164);
	}
}

void func_690()//Position - 0x71D21
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1382347031))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1382347031, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1382347031, 0, 0, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1668106976))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1668106976, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1668106976, 0, 0, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(1562636567))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(1562636567, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(1562636567, 0, 0, 1);
	}
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-611684898))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-611684898, 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-611684898, 0, 0, 1);
	}
}

void func_691(var uParam0, int iParam1, int iParam2)//Position - 0x71DB9
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		func_692(uParam0[iVar0 /*19*/], iParam1, iParam2);
		iVar0++;
	}
}

void func_692(var uParam0, int iParam1, int iParam2)//Position - 0x71DE8
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (iParam2 == 1)
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam0, 0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
				}
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1));
				}
			}
			else if (iParam2 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam0, 0);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
				}
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1));
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(*uParam0);
					VEHICLE::REMOVE_VEHICLE_UPSIDEDOWN_CHECK(*uParam0);
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(*uParam0, 0);
					VEHICLE::DELETE_VEHICLE(uParam0);
				}
			}
		}
		if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_1));
		}
		uParam0->f_7 = 0;
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
	}
}





