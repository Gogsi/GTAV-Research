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
	var uLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	float fLocal_88 = 0f;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = -1;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 1000;
	var uLocal_100 = 1000;
	var uLocal_101 = 0;
	struct<61> Local_102 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_163[2] = { 0, 0 };
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	int iLocal_169 = 0;
	int iLocal_170 = 0;
	char* sLocal_171 = NULL;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<15> Local_180 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<130> Local_195 = { 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	int iLocal_336[2] = { 0, 0 };
	int iLocal_339[2] = { 0, 0 };
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	struct<3> Local_344 = { 0, 0, 0 } ;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	var uLocal_356 = 16;
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
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
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
	int iLocal_542 = 0;
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
	struct<3> Local_555[23];
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	var uLocal_627 = 0;
	struct<3> Local_628 = { 0, 0, 0 } ;
	struct<3> Local_631 = { 0, 0, 0 } ;
	struct<3> Local_634 = { 0, 0, 0 } ;
	int iLocal_637 = 0;
	struct<3> Local_638 = { 0, 0, 0 } ;
	struct<3> Local_641 = { 0, 0, 0 } ;
	struct<3> Local_644 = { 0, 0, 0 } ;
	struct<3> Local_647 = { 0, 0, 0 } ;
	struct<3> Local_650 = { 0, 0, 0 } ;
	struct<3> Local_653 = { 0, 0, 0 } ;
	struct<3> Local_656 = { 0, 0, 0 } ;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	struct<3> Local_664 = { 0, 0, 0 } ;
	var uLocal_667 = 0;
	var uLocal_668[2] = { 0, 0 };
	struct<3> Local_671[2];
	float fLocal_678[2] = { 0f, 0f };
	struct<3> Local_681[2];
	var uLocal_688[2] = { 0, 0 };
	int iLocal_691 = 0;
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	int iLocal_694 = 0;
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	int iLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
	int iLocal_701 = 0;
	char* sLocal_702[4] = { NULL, NULL, NULL, NULL };
	int iLocal_707[4] = { 0, 0, 0, 0 };
	int iLocal_712 = 0;
	int iLocal_713 = 0;
	float fLocal_714[39] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_775[14] = { NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL };
	struct<3> Local_790[14];
	struct<3> Local_833 = { 0, 0, 0 } ;
	struct<3> Local_836 = { 0, 0, 0 } ;
	int iLocal_839 = 0;
	int iLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	int iLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	int iLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	struct<3> Local_854 = { 0, 0, 0 } ;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	struct<3> Local_859 = { 0, 0, 0 } ;
	float fLocal_862 = 0f;
	int iLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	struct<6> Local_867 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	float fLocal_875 = 0f;
	float fLocal_876 = 0f;
	struct<3> Local_877 = { 0, 0, 0 } ;
	struct<3> Local_880 = { 0, 0, 0 } ;
	struct<3> Local_883 = { 0, 0, 0 } ;
	float fLocal_886 = 0f;
	int iLocal_887 = 0;
	int iLocal_888 = 0;
	char* sLocal_889 = NULL;
	char* sLocal_890 = NULL;
	int iLocal_891 = 0;
	int iLocal_892 = 0;
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
	iLocal_84 = 1;
	iLocal_85 = 65;
	iLocal_86 = 49;
	iLocal_87 = 64;
	fLocal_88 = 20f;
	iLocal_167 = 1;
	iLocal_176 = -1;
	Local_177 = { -196.9491f, 1301.144f, 303.2162f };
	Local_344 = { 123.647f, 1245.045f, 252.8f };
	iLocal_352 = 3;
	Local_631 = { 153.4573f, 1272.411f, 250f };
	Local_634 = { 445f, 4710f, 2400f };
	Local_638 = { 497.0192f, 5590f, 793.8237f };
	Local_641 = { 493.4354f, 5585.762f, 794.5f };
	Local_644 = { -90f, 0f, 0f };
	Local_647 = { -189.9982f, 1297.765f, 302.9516f };
	Local_650 = { 123.5181f, 1248.512f, 253.767f };
	Local_653 = { 124.6139f, 1248.053f, 253.7414f };
	Local_656 = { 149.5508f, 1266.901f, 249.5952f };
	Local_664 = { 122.3f, 1244.7f, 250.2f };
	Local_833 = { -194.2319f, 1298.401f, 302.9629f };
	Local_836 = { -188.3349f, 1294.26f, 303f };
	Local_859 = { 1.5f, -0.2f, 2f };
	fLocal_862 = 30f;
	uLocal_865 = AUDIO::GET_SOUND_ID();
	Local_102 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_102);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10102(1);
		func_628();
	}
	func_627();
	if (GlobalFunc_Is_Mission_Retry())
	{
		func_619(&Local_102, 1, 1, 0);
		iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		switch (iVar0)
		{
			case 0:
				GlobalFunc_4972(Local_647, 231.5293f, 1, 0);
				func_568(1);
				break;
			
			case 1:
				GlobalFunc_4972(Local_647, 231.5293f, 0, 0);
				func_568(2);
				break;
			
			case 2:
				GlobalFunc_4972(Local_653, -53.85f, 0, 0);
				func_568(3);
				break;
			
			case 3:
				GlobalFunc_4972(502.959f, 5550.94f, 779.2255f, 160.8655f, 0, 0);
				func_568(4);
				break;
			
			case 4:
				GlobalFunc_4972(502.959f, 5550.94f, 779.2255f, 160.8655f, 0, 0);
				func_568(5);
				break;
			
			case 5:
				GlobalFunc_4972(-66.198f, 4956.364f, 393.001f, 146.0558f, 0, 0);
				func_568(6);
				break;
			
			case 6:
				GlobalFunc_4972(-765.415f, 5208.962f, 108.2433f, 355.2759f, 0, 0);
				func_568(7);
				break;
			
			case 7:
				GlobalFunc_4972(-854.5977f, 5256.717f, 85.4694f, 270f, 0, 0);
				func_568(9);
				break;
			}
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_RA", 0);
		func_552(Local_102.f_9, 0, 0, 0, 0, 0);
		func_533();
		switch (iLocal_167)
		{
			case 1:
				func_493();
				break;
			
			case 2:
				func_470();
				break;
			
			case 3:
				func_456();
				break;
			
			case 4:
				func_443();
				break;
			
			case 5:
				func_434();
				break;
			
			case 6:
				func_418();
				break;
			
			case 7:
				func_404();
				break;
			
			case 8:
				func_391();
				break;
			
			case 9:
				func_327();
				break;
			
			case 10:
				func_245();
				break;
			
			case 11:
				func_165();
				break;
			
			case 12:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x406
{
	switch (iLocal_169)
	{
		case 0:
			func_164();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			func_161();
			GlobalFunc_4956();
			AUDIO::TRIGGER_MUSIC_EVENT("EXTREME1_FAIL");
			func_158(iLocal_342);
			if (GlobalFunc_115(iLocal_343))
			{
				if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_343, "rcm_extreme1", "es_1_rcm_dom_upside_down_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_343, "rcm_extreme1", "es_1_rcm_dom_upside_down_fidget_01", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_343, "rcm_extreme1", "es_1_rcm_dom_upside_down_fidget_02", 3)) || PED::GET_PED_PARACHUTE_STATE(iLocal_343) == 0) || PED::GET_PED_PARACHUTE_STATE(iLocal_343) == 1) || PED::GET_PED_PARACHUTE_STATE(iLocal_343) == 2)
				{
					GlobalFunc_173(&uLocal_356, 3, iLocal_343, "DOM", 0, 1);
				}
				else
				{
					func_158(iLocal_343);
				}
			}
			iLocal_538 = 0;
			func_155();
			if (iLocal_170 == 0)
			{
				GlobalFunc_10102(1);
			}
			else
			{
				GlobalFunc_10700(sLocal_171, 1);
			}
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_151(1);
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					func_36(PLAYER::PLAYER_PED_ID(), 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					func_36(PLAYER::PLAYER_PED_ID(), 14, 2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					if ((GlobalFunc_115(iLocal_351) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_351, 0)) || (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) > 5f))
					{
						GlobalFunc_5129(-188.8f, 1296.122f, 302.9238f, 213.9571f);
						GlobalFunc_5166(-190.8896f, 1305.53f, 304.0681f, 45.9332f);
					}
				}
				func_27(1);
				GlobalFunc_2346(&iLocal_662);
				GlobalFunc_7108(&iLocal_351);
				GlobalFunc_7108(&(uLocal_668[0]));
				GlobalFunc_7108(&(uLocal_668[1]));
				CUTSCENE::REMOVE_CUTSCENE();
				func_628();
			}
			else
			{
				func_2();
			}
			break;
	}
}

void func_2()//Position - 0x5D1
{
	if (iLocal_538 == 0 && GlobalFunc_115(iLocal_343))
	{
		if (iLocal_170 == 13 || iLocal_170 == 7)
		{
			if (iLocal_697 == 1)
			{
				if (GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_THREAT", 8, 1, 0, 0))
				{
					iLocal_538 = 1;
				}
			}
			else
			{
				func_3(iLocal_343, 1);
				iLocal_538 = 1;
			}
		}
	}
}

void func_3(int iParam0, bool bParam1)//Position - 0x62E
{
	char* sVar0;
	int iVar1;
	int iVar2;
	
	if (GlobalFunc_4950(iParam0))
	{
		iVar1 = 2;
		if (bParam1)
		{
			iVar1 = 3;
		}
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (iVar2 == 0)
		{
			sVar0 = "SCREAM_PANIC";
		}
		else if (iVar2 == 1)
		{
			sVar0 = "SCREAM_TERROR";
		}
		else
		{
			sVar0 = "SUPER_HIGH_FALL";
		}
		if (PED::IS_PED_MALE(iParam0))
		{
			GlobalFunc_5653(iParam0, sVar0, "WAVELOAD_PAIN_MALE", 24);
		}
		else
		{
			GlobalFunc_5653(iParam0, sVar0, "WAVELOAD_PAIN_FEMALE", 24);
		}
	}
}
























void func_27(int iParam0)//Position - 0x11D2
{
	if (GlobalFunc_115(iLocal_343))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_343, 0);
	}
	if (GlobalFunc_115(iLocal_342))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_342, 0);
	}
	if (iParam0 == 1)
	{
		GlobalFunc_69(&iLocal_343);
		GlobalFunc_69(&iLocal_350);
		GlobalFunc_69(&iLocal_342);
	}
	else
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			func_29(iLocal_342);
			func_29(iLocal_343);
		}
		else
		{
			func_158(iLocal_342);
			func_158(iLocal_343);
		}
		GlobalFunc_2297(&iLocal_343, 1, 0, 1);
		GlobalFunc_2297(&iLocal_350, 1, 0, 1);
		GlobalFunc_2297(&iLocal_342, 1, 0, 1);
	}
}


void func_29(int iParam0)//Position - 0x12B3
{
	if ((((GlobalFunc_115(uParam0) && !GlobalFunc_6695(uParam0, -258271821)) && !GlobalFunc_6695(uParam0, -1146898486)) && !GlobalFunc_6695(uParam0, 1805844857)) && !GlobalFunc_6695(uParam0, 242628503))
	{
		PED::SET_PED_KEEP_TASK(uParam0, 1);
		TASK::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
	}
}







int func_36(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x1410
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
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar27;
	var uVar37;
	struct<14> Var53;
	var uVar67;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	Global_68105++;
	iVar5 = -99;
	iVar6 = -99;
	iVar7 = -99;
	iVar8 = -99;
	iVar9 = -99;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8308(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7110(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7110(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = -99;
				}
			}
			iVar7 = GlobalFunc_7634(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7634(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7634(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_68149 };
		}
		else
		{
			uVar11 = { GlobalFunc_7617(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != -99)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, uVar11[iVar0]) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar27 = 9;
						if (iParam5 == 1)
						{
							uVar27 = { Global_68165 };
						}
						else
						{
							uVar27 = { GlobalFunc_7616(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_2384(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11239(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_36(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							GlobalFunc_4911(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == -1)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iVar0), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
						}
						GlobalFunc_8308(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11239(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_36(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, GlobalFunc_11109(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11108(iParam0, iVar10, &iVar4, 1))
							{
								func_36(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_36(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10828(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_36(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_36(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_36(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_36(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_36(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar67 = { GlobalFunc_7616(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_2384(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11239(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_36(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_2384(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11239(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_36(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == -1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, GlobalFunc_33(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, iParam4);
		}
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11239(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_36(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11027(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11108(iParam0, iVar10, &iVar4, 0))
		{
			func_36(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11107(iParam0, iVar10, &iVar4))
		{
			func_36(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}



















































































































void func_151(int iParam0)//Position - 0x1D661
{
	if (iParam0 == 1)
	{
		HUD::CLEAR_PRINTS();
	}
	HUD::CLEAR_HELP(1);
	if (iLocal_168 == 0)
	{
		iLocal_167++;
	}
	else
	{
		iLocal_167 = iLocal_168;
	}
	iLocal_168 = 0;
	iLocal_169 = 0;
}




void func_155()//Position - 0x1D712
{
	switch (iLocal_170)
	{
		case 0:
			break;
		
		case 1:
			sLocal_171 = "EXT1_F1";
			break;
		
		case 2:
			sLocal_171 = "EXT1_F2";
			break;
		
		case 3:
			sLocal_171 = "EXT1_F3";
			break;
		
		case 4:
			sLocal_171 = "EXT1_F4";
			break;
		
		case 5:
			sLocal_171 = "EXT1_F5";
			break;
		
		case 6:
			sLocal_171 = "EXT1_F6";
			break;
		
		case 7:
			sLocal_171 = "EXT1_F7";
			break;
		
		case 8:
			sLocal_171 = "EXT1_F8";
			break;
		
		case 9:
			sLocal_171 = "EXT1_F9";
			break;
		
		case 10:
			sLocal_171 = "EXT1_F10";
			break;
		
		case 11:
			sLocal_171 = "EXT1_F11";
			break;
		
		case 12:
			sLocal_171 = "EXT1_F12";
			break;
		
		case 13:
			sLocal_171 = "EXT1_F13";
			break;
		
		case 14:
			sLocal_171 = "EXT1_F14";
			break;
		
		case 15:
			sLocal_171 = "EXT1_F15";
			break;
		
		case 16:
			sLocal_171 = "EXT1_F17";
			break;
		
		case 17:
			sLocal_171 = "EXT1_F18";
			break;
		
		case 18:
			sLocal_171 = "EXT1_F19";
			break;
	}
}



void func_158(int iParam0)//Position - 0x1D8F3
{
	if (GlobalFunc_115(iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			TASK::CLEAR_PED_TASKS(iParam0);
		}
		PED::SET_PED_KEEP_TASK(iParam0, 1);
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_347);
			if (GlobalFunc_115(iLocal_351) && PED::IS_PED_IN_VEHICLE(iParam0, iLocal_351, 0))
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			}
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_347);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_347);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_347);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(iParam0, 1193033728, 0);
		}
	}
}



void func_161()//Position - 0x1D9B6
{
	GlobalFunc_146(&uLocal_353);
	GlobalFunc_146(&iLocal_354);
	GlobalFunc_146(&uLocal_355);
	GlobalFunc_146(&iLocal_637);
	GlobalFunc_146(&(uLocal_688[0]));
	GlobalFunc_146(&(uLocal_688[1]));
	func_162();
}

void func_162()//Position - 0x1D9F2
{
	if (HUD::DOES_BLIP_EXIST(Local_180.f_2))
	{
		GlobalFunc_146(&(Local_180.f_2));
		GRAPHICS::DELETE_CHECKPOINT(Local_180.f_4);
	}
	GlobalFunc_146(&(Local_180.f_3));
}


void func_164()//Position - 0x1DA3D
{
	iLocal_173 = 0;
	iLocal_169 = 1;
}

void func_165()//Position - 0x1DA4B
{
	GlobalFunc_9621(52, 1, 1);
	func_166(81, 1);
	func_628();
}

void func_166(int iParam0, bool bParam1)//Position - 0x1DA66
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
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	func_193();
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



























void func_193()//Position - 0x1EE06
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
				if (GlobalFunc_10992(iVar1, 14, iVar2))
				{
					func_194(iVar1, 14, iVar2);
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

int func_194(int iParam0, int iParam1, int iParam2)//Position - 0x1EEC7
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
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10992(iParam0, iParam1, iParam2))
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
				func_194(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_194(iParam0, 14, uVar20[iVar18]))
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
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11108(iParam0, iVar0, &iVar46, 0))
	{
		func_36(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11107(iParam0, iVar0, &iVar46))
	{
		func_36(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}



















































void func_245()//Position - 0x2653E
{
	switch (iLocal_169)
	{
		case 0:
			func_164();
			GlobalFunc_Checkpoint8(7, "Outro - Dom won race", 1, 0, 0, 1);
			iLocal_887 = 0;
			iLocal_891 = 0;
			iLocal_329 = 0;
			break;
		
		case 1:
			switch (iLocal_329)
			{
				case 0:
					if (((GlobalFunc_115(uLocal_668[iLocal_692]) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_668[iLocal_692])) && GlobalFunc_115(uLocal_668[iLocal_691])) && GlobalFunc_156(uLocal_668[iLocal_692], uLocal_668[iLocal_691], 1) < 10f)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_692]);
						VEHICLE::BRING_VEHICLE_TO_HALT(uLocal_668[iLocal_692], 5f, 1, 0);
					}
					STREAMING::REQUEST_ANIM_DICT("rcm_extreme1");
					if ((((((GlobalFunc_115(uLocal_668[iLocal_691]) && GlobalFunc_530(uLocal_668[iLocal_691], 1093140480, 1, 1056964608, 0, 1)) && func_261(1, 1)) && STREAMING::HAS_ANIM_DICT_LOADED("rcm_extreme1")) && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && GlobalFunc_115(iLocal_343)) && GlobalFunc_115(uLocal_668[iLocal_692]))
					{
						if ((iLocal_713 == 1 && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_BIKEF1", 8, 0, 0, 0)) || (iLocal_713 == 2 && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_BIKED1", 8, 0, 0, 0)))
						{
							if (iLocal_713 == 1)
							{
							}
							uLocal_331 = PED::CREATE_SYNCHRONIZED_SCENE(-846.46f, 5265.205f, 85.835f, 0f, 0f, 96f, 2);
							uLocal_328 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
							if (iLocal_713 == 1)
							{
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_328, uLocal_331, "banter_after_win_cam", "rcm_extreme1");
							}
							else
							{
								CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_328, uLocal_331, "banter_after_loss_cam", "rcm_extreme1");
							}
							func_258(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
							CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
							RECORDING::_0x48621C9FCA3EBD28(1);
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 0))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], -1);
							}
							if (iLocal_713 == 1)
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_668[iLocal_691], uLocal_331, "banter_after_win_bike_p", "rcm_extreme1", 1000f, -1000f, 5, 1148846080);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, "rcm_extreme1", "banter_after_win_player", 1000f, -1000f, 5, 0, 1148846080, 0);
							}
							else
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_668[iLocal_691], uLocal_331, "banter_after_loss_bike_p", "rcm_extreme1", 1000f, -1000f, 5, 1148846080);
								TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_331, "rcm_extreme1", "banter_after_loss_player", 1000f, -1000f, 5, 0, 1148846080, 0);
							}
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uLocal_668[iLocal_691]);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_668[iLocal_692]))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_692]);
							}
							if (!PED::IS_PED_IN_VEHICLE(iLocal_343, uLocal_668[iLocal_692], 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_343, uLocal_668[iLocal_692], -1);
							}
							if (iLocal_713 == 1)
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_668[iLocal_692], uLocal_331, "banter_after_win_bike_d", "rcm_extreme1", 1000f, -1000f, 5, 1148846080);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_343, uLocal_331, "rcm_extreme1", "banter_after_win_dom", 1000f, -1000f, 5, 0, 1148846080, 0);
							}
							else
							{
								ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_668[iLocal_692], uLocal_331, "banter_after_loss_bike_d", "rcm_extreme1", 1000f, -1000f, 5, 1148846080);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_343, uLocal_331, "rcm_extreme1", "banter_after_loss_dom", 1000f, -1000f, 5, 0, 1148846080, 0);
							}
							ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uLocal_668[iLocal_692]);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_343, 0, 0);
							GlobalFunc_79(500, 0);
							iLocal_329++;
						}
					}
					break;
				
				case 1:
					if (GlobalFunc_4926(1000))
					{
						GlobalFunc_2350(500, 1);
						GlobalFunc_4956();
						iLocal_329++;
					}
					else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_331))
					{
						if ((iLocal_891 == 0 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) >= 0.99f)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_891 = 1;
						}
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) == 1f)
						{
							iLocal_329++;
						}
						else if (iLocal_887 == 0)
						{
							if (GlobalFunc_115(iLocal_343) && GlobalFunc_115(uLocal_668[iLocal_692]))
							{
								if ((iLocal_713 == 1 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) >= 0.732f) || (iLocal_713 == 2 && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_331) >= 0.71f))
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uLocal_668[iLocal_692], -1000f, 1);
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_343, -1000f, 1);
									if (!PED::IS_PED_IN_VEHICLE(iLocal_343, uLocal_668[iLocal_692], 0))
									{
										PED::SET_PED_INTO_VEHICLE(iLocal_343, uLocal_668[iLocal_692], -1);
									}
									TASK::TASK_VEHICLE_TEMP_ACTION(iLocal_343, uLocal_668[iLocal_692], 9, 5000);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uLocal_668[iLocal_692]);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_343, 0, 0);
									iLocal_887 = 1;
								}
							}
						}
					}
					else if (iLocal_887 == 1)
					{
					}
					break;
				
				case 2:
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					GlobalFunc_69(&iLocal_343);
					GlobalFunc_7108(&(uLocal_668[iLocal_692]));
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(uLocal_668[iLocal_691]))
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(uLocal_668[iLocal_691], -1000f, 1);
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(PLAYER::PLAYER_PED_ID(), -1000f, 1);
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], -1);
						}
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_668[iLocal_691]);
						ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(uLocal_668[iLocal_691]);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					RECORDING::_0x81CBAE94390F9F89();
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::DESTROY_ALL_CAMS(0);
					GlobalFunc_79(500, 1);
					func_246(1, 1, 1, 1);
					iLocal_169 = 2;
					break;
			}
			break;
		
		case 2:
			func_151(1);
			break;
	}
}

void func_246(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x26B59
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, iParam3, 0);
	GlobalFunc_8380(0, 1, 0, 0);
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
	if (GlobalFunc_4950(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}












void func_258(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x26EED
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_9249(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10992(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_36(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10992(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_36(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10992(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10992(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_36(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10992(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_36(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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



int func_261(int iParam0, int iParam1)//Position - 0x270F2
{
	if (iLocal_173 == 1)
	{
		return 0;
	}
	if ((iParam1 == 1 && HUD::IS_MESSAGE_BEING_DISPLAYED()) && MISC::GET_PROFILE_SETTING(203) > 0)
	{
		return 0;
	}
	if (GlobalFunc_111())
	{
		return 0;
	}
	if (iParam0 == 1 && GlobalFunc_620())
	{
		return 0;
	}
	return 1;
}


































































void func_327()//Position - 0x2C78B
{
	switch (iLocal_169)
	{
		case 0:
			func_164();
			func_36(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			func_390(9, 1);
			iLocal_713 = 2;
			iLocal_551 = 0;
			Local_195.f_129 = 5;
			func_388(&Local_195);
			Local_180.f_1 = uLocal_668[iLocal_691];
			Local_180 = PLAYER::PLAYER_PED_ID();
			iLocal_163[0] = 0;
			iLocal_163[1] = 0;
			iLocal_757 = 0;
			func_387();
			iLocal_755 = MISC::GET_GAME_TIMER();
			if (iLocal_176 == 5)
			{
				iLocal_697 = 1;
				Local_180.f_9 = 20;
				Local_180.f_10 = 21;
				iLocal_712 = 20;
				iLocal_699 = 2;
				iLocal_701 = 0;
				iLocal_176 = -1;
				iLocal_698 = 1;
				iLocal_535 = 1;
				iLocal_536 = 1;
				iLocal_754 = 0;
				iLocal_756 = 0;
				iLocal_166 = 0;
				iLocal_759 = 1;
				GlobalFunc_164("EXT1_19", 7500, 1);
			}
			else if (iLocal_176 == 6)
			{
				iLocal_697 = 1;
				Local_180.f_9 = (Local_195.f_126 - 2);
				Local_180.f_10 = (Local_195.f_126 - 1);
				iLocal_712 = (Local_195.f_126 - 2);
				iLocal_699 = 4;
				iLocal_701 = 4;
				iLocal_176 = -1;
				iLocal_698 = 1;
				iLocal_535 = 1;
				iLocal_536 = 1;
				iLocal_754 = 0;
				iLocal_756 = 1;
				iLocal_166 = 1;
				iLocal_759 = 1;
				GlobalFunc_164("EXT1_19", 7500, 1);
			}
			else
			{
				GlobalFunc_Checkpoint8(4, "Bike race start", 0, 0, 0, 1);
				iLocal_697 = 0;
				if (iLocal_758 == 1 || GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_195.f_4[2 /*3*/], 1) < fLocal_714[2])
				{
					Local_180.f_9 = 2;
					Local_180.f_10 = 3;
				}
				else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_195.f_4[1 /*3*/], 1) < fLocal_714[1])
				{
					Local_180.f_9 = 1;
					Local_180.f_10 = 2;
				}
				else
				{
					Local_180.f_9 = 0;
					Local_180.f_10 = 1;
				}
				iLocal_712 = 0;
				iLocal_699 = 0;
				iLocal_701 = 0;
				iLocal_698 = 0;
				iLocal_535 = 0;
				iLocal_536 = 0;
				iLocal_754 = 1;
				iLocal_756 = 0;
				iLocal_846 = -1;
				iLocal_175 = 0;
				iLocal_166 = 0;
				iLocal_759 = 0;
			}
			func_384();
			Global_Mission_Fail_State.f_12[0] = iLocal_691;
			iLocal_700 = MISC::GET_GAME_TIMER();
			iLocal_845 = MISC::GET_GAME_TIMER();
			iLocal_848 = MISC::GET_GAME_TIMER();
			if (GlobalFunc_115(iLocal_343))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_343, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_343, -1, 0, 2);
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_343, 1);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_354))
					{
						HUD::SET_BLIP_SCALE(iLocal_354, 1f);
					}
					else
					{
						func_382(0);
					}
				}
			}
			RECORDING::_0x293220DA1B46CEBC(10f, 10f, 3);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
			break;
		
		case 1:
			if (GlobalFunc_115(uLocal_668[iLocal_691]) && GlobalFunc_115(iLocal_343))
			{
				if (Local_180.f_14 == 5)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("EXTREME1_STOP");
					if (iLocal_713 == 1)
					{
						GlobalFunc_553(757);
					}
					iLocal_169 = 2;
				}
				else
				{
					if (iLocal_697 == 1)
					{
						func_375(&Local_180, &Local_195, 1);
						func_374();
						func_373();
						func_372();
						func_370();
						func_369();
						func_368();
						func_367();
						func_366();
					}
					func_362();
					func_361();
					func_360();
					func_355();
					func_331();
					func_328(&iLocal_354, iLocal_343, 1, 10f, 0);
				}
			}
			break;
		
		case 2:
			RECORDING::_0x293220DA1B46CEBC(8f, 2f, 3);
			func_151(1);
			GlobalFunc_146(&(uLocal_688[0]));
			GlobalFunc_146(&(uLocal_688[1]));
			GlobalFunc_146(&iLocal_637);
			break;
	}
}

void func_328(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4)//Position - 0x2CAB7
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iParam4 == 1 && !HUD::DOES_BLIP_EXIST(*iParam0))
	{
		*iParam0 = GlobalFunc_5920(ENTITY::GET_ENTITY_COORDS(iParam1, 1), 0);
		if (bParam2)
		{
			HUD::SET_BLIP_COLOUR(*iParam0, 3);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_FRIEND");
		}
		else
		{
			HUD::SET_BLIP_COLOUR(*iParam0, 1);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, "BLIP_ENEMY");
		}
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			HUD::SET_BLIP_SCALE(*iParam0, 0.7f);
		}
	}
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		Var0 = { HUD::GET_BLIP_COORDS(*iParam0) };
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		Var0.x = (Var0.x + ((Var3.x - Var0.x) / fParam3));
		Var0.f_1 = (Var0.f_1 + ((Var3.f_1 - Var0.f_1) / fParam3));
		Var0.f_2 = (Var0.f_2 + ((Var3.f_2 - Var0.f_2) / fParam3));
		HUD::SET_BLIP_COORDS(*iParam0, Var0);
	}
}



void func_331()//Position - 0x2CBCC
{
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	if (GlobalFunc_115(iLocal_343))
	{
		if (iLocal_167 == 2)
		{
			GlobalFunc_9626(&uLocal_90, iLocal_343, "EXT1_13", 0, 1, 1, 1);
		}
		else
		{
			GlobalFunc_9626(&uLocal_90, iLocal_343, "EXT1_20", 0, 1, 1, 1);
		}
	}
}
























void func_355()//Position - 0x2DB0C
{
	struct<3> Var0;
	struct<3> Var3;
	
	if ((iLocal_173 == 0 && iLocal_176 == -1) && GlobalFunc_115(uLocal_668[iLocal_691]))
	{
		if (!GlobalFunc_775(uLocal_668[iLocal_691], Local_195.f_4[Local_180.f_9 /*3*/], (fLocal_714[Local_180.f_9] + 125f)))
		{
			func_357();
		}
		else
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(uLocal_668[iLocal_691], 1) };
			Var3 = { Local_195.f_4[Local_180.f_9 /*3*/] };
			if (Var0.f_2 < (Var3.f_2 - 15f))
			{
				func_357();
			}
			else if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_195.f_4[Local_180.f_9 /*3*/], (fLocal_714[Local_180.f_9] + 125f)))
			{
				func_356(11);
			}
		}
	}
}

void func_356(int iParam0)//Position - 0x2DBCE
{
	if (iLocal_173 == 0)
	{
		iLocal_170 = iParam0;
		iLocal_169 = 2;
		iLocal_168 = 12;
	}
}

void func_357()//Position - 0x2DBE7
{
	if (iLocal_173 == 0 && GlobalFunc_115(uLocal_668[iLocal_691]))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 1))
		{
			func_356(16);
		}
		else if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uLocal_668[iLocal_691], 1), 5f) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 5f))
		{
			func_356(16);
		}
		else
		{
			func_356(17);
		}
	}
}



void func_360()//Position - 0x2DC9C
{
	if (func_261(1, 0) && iLocal_536 == 0)
	{
		if (iLocal_758 == 0)
		{
			if (GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_LETSRAC", 8, 1, 0, 0))
			{
				iLocal_536 = 1;
			}
		}
		else if (GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_CHEAT", 8, 1, 0, 0))
		{
			iLocal_536 = 1;
		}
	}
}

void func_361()//Position - 0x2DCF7
{
	float fVar0;
	
	if (GlobalFunc_115(uLocal_668[iLocal_692]))
	{
		if (iLocal_697 == 0)
		{
			if (GlobalFunc_115(uLocal_668[iLocal_691]))
			{
				if (GlobalFunc_775(uLocal_668[iLocal_691], Local_671[iLocal_692 /*3*/], 100f))
				{
					GlobalFunc_164("EXT1_19", 7500, 1);
					if (GlobalFunc_115(uLocal_668[iLocal_692]))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(uLocal_668[iLocal_692], 500, "Ext1_BikeRace", 30f, 786469);
						VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(uLocal_668[iLocal_692], 4000, 786603, 0);
					}
					iLocal_697 = 1;
				}
				else if (iLocal_698 == 0)
				{
					GlobalFunc_164("EXT1_22", 7500, 1);
					iLocal_698 = 1;
				}
			}
		}
		else if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_668[iLocal_692]))
		{
			if (VEHICLE::IS_VEHICLE_SEAT_FREE(uLocal_668[iLocal_692], -1))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_692]);
			}
			else
			{
				if (iLocal_757 == 0 && VEHICLE::GET_TIME_POSITION_IN_RECORDING(uLocal_668[iLocal_692]) > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(uLocal_668[iLocal_692])) - 7000f))
				{
					VEHICLE::SET_PLAYBACK_TO_USE_AI(uLocal_668[iLocal_692], 786468);
					iLocal_757 = 1;
				}
				if (iLocal_756 == 1)
				{
					VEHICLE::SET_PLAYBACK_SPEED(uLocal_668[iLocal_692], 0.65f);
				}
				else if (VEHICLE::GET_POSITION_IN_RECORDING(uLocal_668[iLocal_692]) > 2100f)
				{
					VEHICLE::SET_PLAYBACK_SPEED(uLocal_668[iLocal_692], 0.8f);
				}
				else if (iLocal_713 == 1)
				{
					VEHICLE::SET_PLAYBACK_SPEED(uLocal_668[iLocal_692], 1.3f);
				}
				else
				{
					fVar0 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_692], 1);
					if (fVar0 > 50f)
					{
						VEHICLE::SET_PLAYBACK_SPEED(uLocal_668[iLocal_692], 0.5f);
						iLocal_694 = 1;
					}
					else if (fVar0 > 25f)
					{
						VEHICLE::SET_PLAYBACK_SPEED(uLocal_668[iLocal_692], 0.8f);
					}
					else if (fVar0 < 5f)
					{
						VEHICLE::SET_PLAYBACK_SPEED(uLocal_668[iLocal_692], 1.1f);
					}
					else
					{
						VEHICLE::SET_PLAYBACK_SPEED(uLocal_668[iLocal_692], 1.05f);
					}
				}
			}
		}
	}
}

void func_362()//Position - 0x2DF02
{
	if (GlobalFunc_115(uLocal_668[iLocal_691]))
	{
		if (iLocal_759 == 0)
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 0))
			{
				iLocal_759 = 1;
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uLocal_688[iLocal_691]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 0))
			{
				GlobalFunc_146(&(uLocal_688[iLocal_691]));
				func_382(0);
				HUD::CLEAR_PRINTS();
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 0))
		{
			GlobalFunc_146(&iLocal_354);
			func_363();
		}
	}
}

void func_363()//Position - 0x2DF96
{
	func_364(iLocal_691);
	if (iLocal_693 == 0)
	{
		GlobalFunc_164("EXT1_16", 7500, 1);
		iLocal_693 = 1;
	}
}

void func_364(int iParam0)//Position - 0x2DFBD
{
	if (GlobalFunc_115(uLocal_668[iParam0]) && !HUD::DOES_BLIP_EXIST(uLocal_688[iParam0]))
	{
		uLocal_688[iParam0] = GlobalFunc_5743(uLocal_668[iParam0], 1, 5);
	}
}


void func_366()//Position - 0x2E02D
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	if (iLocal_175 == 0)
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar3))
		{
			fVar4 = (Var0.f_2 - fVar3);
			if (fVar4 > 1f)
			{
				if (iLocal_846 == -1)
				{
					iLocal_846 = MISC::GET_GAME_TIMER();
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_846) > 2000)
				{
					GlobalFunc_553(756);
					iLocal_175 = 1;
				}
			}
			else if (iLocal_846 > -1)
			{
				iLocal_846 = -1;
			}
		}
	}
}

void func_367()//Position - 0x2E09C
{
	struct<3> Var0;
	
	if ((((MISC::GET_GAME_TIMER() - iLocal_845) > 10000 && func_261(1, 1)) && GlobalFunc_115(uLocal_668[iLocal_692])) && GlobalFunc_115(uLocal_668[iLocal_691]))
	{
		if (ENTITY::GET_ENTITY_SPEED(uLocal_668[iLocal_692]) > ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_668[iLocal_692], 0f, 4f, 0f) };
			if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var0, 3f) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_INWAY", 8, 0, 0, 0))
			{
				iLocal_845 = MISC::GET_GAME_TIMER();
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uLocal_668[iLocal_692], uLocal_668[iLocal_691]))
		{
			if (GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_CRASH", 8, 0, 0, 0))
			{
				iLocal_845 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_368()//Position - 0x2E16F
{
	if (iLocal_163[0] == 0 && Local_180.f_9 == 20)
	{
		GlobalFunc_Checkpoint8(5, "Bike race middle", 0, 0, 0, 1);
		iLocal_163[0] = 1;
	}
	if (iLocal_163[1] == 0 && Local_180.f_9 == (Local_195.f_126 - 2))
	{
		GlobalFunc_Checkpoint8(6, "Bike race near end", 0, 0, 0, 1);
		iLocal_163[1] = 1;
	}
	if (iLocal_166 == 0 && Local_180.f_9 == (Local_195.f_126 - 10))
	{
		iLocal_166 = 1;
		AUDIO::TRIGGER_MUSIC_EVENT("EXTREME1_CYCLE");
	}
}

void func_369()//Position - 0x2E1F4
{
	if (iLocal_754 == 0)
	{
		if (GlobalFunc_4940(uLocal_668[iLocal_691]))
		{
			if (iLocal_756 == 1 && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_668[iLocal_691]))
			{
				VEHICLE::SET_PLAYBACK_SPEED(uLocal_668[iLocal_691], 0.7f);
			}
			if ((((((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_668[iLocal_691]) || PAD::IS_CONTROL_JUST_PRESSED(0, 71)) || PAD::IS_CONTROL_JUST_PRESSED(0, 72)) || PAD::IS_CONTROL_JUST_PRESSED(0, 278)) || PAD::IS_CONTROL_JUST_PRESSED(0, 279)) || VEHICLE::IS_VEHICLE_SEAT_FREE(uLocal_668[iLocal_691], -1)) || (MISC::GET_GAME_TIMER() - iLocal_755) > 5000)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_668[iLocal_691]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_691]);
				}
				iLocal_754 = 1;
			}
		}
	}
}

void func_370()//Position - 0x2E2C6
{
	int iVar0;
	
	if (((func_261(1, 1) && GlobalFunc_115(uLocal_668[iLocal_691])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 0)) && !func_371(50f))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 14)
		{
			if ((iLocal_760[iVar0] == 0 && GlobalFunc_775(uLocal_668[iLocal_691], Local_790[iVar0 /*3*/], 10f)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", sLocal_775[iVar0], 8, 0, 0, 0))
			{
				iLocal_760[iVar0] = 1;
				if ((((iVar0 == 6 || iVar0 == 7) || iVar0 == 8) || iVar0 == 11) || iVar0 == 12)
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 6f, 3);
				}
			}
			iVar0++;
		}
	}
}

int func_371(float fParam0)//Position - 0x2E3AA
{
	if (GlobalFunc_115(iLocal_343) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_343, 1) > fParam0)
	{
		return 1;
	}
	return 0;
}

void func_372()//Position - 0x2E3D5
{
	int iVar0;
	
	if (((((((iLocal_701 < 4 && Local_180.f_9 < (Local_195.f_126 - 3)) && iLocal_694 == 0) && (MISC::GET_GAME_TIMER() - iLocal_700) > 45000) && func_261(1, 1)) && GlobalFunc_115(uLocal_668[iLocal_691])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 0)) && !func_371(30f))
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
		if (iLocal_707[iVar0] == 0 && GlobalFunc_10618(&uLocal_356, "EXT1AU", sLocal_702[iVar0], 8, 0, 0, 0))
		{
			iLocal_707[iVar0] = 1;
			iLocal_701++;
			iLocal_700 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_373()//Position - 0x2E498
{
	if (((((func_261(1, 1) && Local_180.f_9 < (Local_195.f_126 - 1)) && iLocal_694 == 1) && iLocal_699 < 4) && !func_371(25f)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_SLOW", 8, 0, 0, 0))
	{
		iLocal_699++;
		iLocal_694 = 0;
	}
}

void func_374()//Position - 0x2E501
{
	float fVar0;
	float fVar1;
	
	if (GlobalFunc_115(iLocal_343))
	{
		if (GlobalFunc_775(iLocal_343, Local_195.f_4[iLocal_712 /*3*/], fLocal_88))
		{
			iLocal_712++;
		}
		if (iLocal_712 >= Local_195.f_126)
		{
			iLocal_713 = 2;
		}
		else if (iLocal_712 > Local_180.f_9)
		{
			iLocal_713 = 2;
		}
		else if (iLocal_712 < Local_180.f_9)
		{
			iLocal_713 = 1;
		}
		else
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_195.f_4[Local_180.f_9 /*3*/], 1);
			}
			fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_343, 1), Local_195.f_4[Local_180.f_9 /*3*/], 1);
			if (fVar0 > fVar1)
			{
				iLocal_713 = 2;
			}
			else
			{
				iLocal_713 = 1;
			}
		}
	}
	if (((iLocal_713 == 1 && (MISC::GET_GAME_TIMER() - iLocal_848) > 5000) && func_261(1, 1)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_OVERT", 8, 0, 0, 0))
	{
		iLocal_848 = MISC::GET_GAME_TIMER();
	}
}

int func_375(var uParam0, var uParam1, int iParam2)//Position - 0x2E5FE
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	
	if (func_380(uParam0, uParam1->f_130) || iParam2 == 0)
	{
		if (uParam0->f_5 != 0)
		{
			iLocal_89 = (iLocal_89 - 25);
			if (iLocal_89 > 0)
			{
				HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
				GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_5, uVar0, uVar1, uVar2, iLocal_89);
				GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_5, uVar0, uVar1, uVar2, iLocal_89);
			}
			else
			{
				GRAPHICS::DELETE_CHECKPOINT(uParam0->f_5);
			}
		}
		if (func_379(uParam0, uParam1))
		{
			if (uParam0->f_9 < (uParam1->f_126 - 1))
			{
				uParam0->f_9++;
				if (uParam0->f_10 == (uParam1->f_126 - 1))
				{
					if (uParam0->f_11 < uParam1->f_127)
					{
						uParam0->f_10 = 0;
					}
				}
				else
				{
					uParam0->f_10++;
				}
				func_378(uParam0, uParam1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
				return 1;
			}
			else if (uParam0->f_11 < uParam1->f_127)
			{
				uParam0->f_9 = 0;
				uParam0->f_10 = 1;
				uParam0->f_11++;
				func_378(uParam0, uParam1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
				return 1;
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_2))
			{
				uParam0->f_14 = 5;
				HUD::REMOVE_BLIP(&(uParam0->f_2));
				GRAPHICS::DELETE_CHECKPOINT(uParam0->f_4);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(uParam0->f_2))
		{
			func_378(uParam0, uParam1);
		}
		uVar4 = func_377(uParam0->f_9, uParam1);
		HUD::GET_HUD_COLOUR(func_376(uVar4), &uVar5, &uVar6, &uVar7, &iVar8);
		uParam0->f_13 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), uParam1->f_4[uParam0->f_9 /*3*/]);
		if (uParam0->f_4 != 0)
		{
			if (uParam0->f_13 > 100f)
			{
				HUD::GET_HUD_COLOUR(13, &uVar5, &uVar6, &uVar7, &iVar8);
				iVar8 = 240;
				GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar5, uVar6, uVar7, iVar8);
				HUD::GET_HUD_COLOUR(134, &uVar5, &uVar6, &uVar7, &iVar8);
				iVar8 = 240;
				GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar5, uVar6, uVar7, iVar8);
			}
			else
			{
				HUD::GET_HUD_COLOUR(13, &uVar5, &uVar6, &uVar7, &iVar8);
				iVar8 = SYSTEM::ROUND((uParam0->f_13 * 2.4f));
				if (iVar8 < 60)
				{
					iVar8 = 60;
				}
				GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar5, uVar6, uVar7, iVar8);
				HUD::GET_HUD_COLOUR(134, &uVar5, &uVar6, &uVar7, &iVar8);
				iVar8 = SYSTEM::ROUND((uParam0->f_13 * 2.4f));
				if (iVar8 < 60)
				{
					iVar8 = 60;
				}
				GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar5, uVar6, uVar7, iVar8);
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_2))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_2));
			GRAPHICS::DELETE_CHECKPOINT(uParam0->f_4);
		}
		if (HUD::DOES_BLIP_EXIST(uParam0->f_3))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_3));
		}
	}
	return 0;
}

int func_376(var uParam0)//Position - 0x2E894
{
	uParam0 = uParam0;
	return 14;
}

int func_377(int iParam0, var uParam1)//Position - 0x2E8A2
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	
	fVar16 = 180f;
	fVar17 = 140f;
	fVar18 = 80f;
	Var0 = { uParam1->f_4[iParam0 /*3*/] };
	if (iParam0 + 1 == (uParam1->f_126 - 1))
	{
		Var3 = { uParam1->f_4[0 /*3*/] };
	}
	else
	{
		Var3 = { uParam1->f_4[iParam0 + 1 /*3*/] };
	}
	if ((iParam0 - 1) >= 0)
	{
		Var6 = { uParam1->f_4[(iParam0 - 1) /*3*/] };
	}
	Var9 = { Var6 - Var0 };
	Var12 = { Var3 - Var0 };
	fVar15 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var9.x, Var9.f_1, Var12.x, Var12.f_1);
	if (fVar15 > 180f)
	{
		fVar15 = (360f - fVar15);
	}
	if (fVar15 < fVar18)
	{
		return 7;
	}
	else if (fVar15 < fVar17)
	{
		return 6;
	}
	else if (fVar15 < fVar16)
	{
		return 5;
	}
	else
	{
		return 5;
	}
	return 5;
}

void func_378(var uParam0, var uParam1)//Position - 0x2E985
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	
	fVar3 = 0.7f;
	fVar4 = ((7.5f * 2f) * 0.66f);
	bVar5 = true;
	iVar6 = func_377(uParam0->f_9, uParam1);
	iVar7 = 9;
	HUD::GET_HUD_COLOUR(func_376(iVar6), &uVar8, &uVar9, &uVar10, &iVar11);
	if (HUD::DOES_BLIP_EXIST(uParam0->f_2))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_2));
		GRAPHICS::DELETE_CHECKPOINT(uParam0->f_4);
		HUD::GET_HUD_COLOUR(1, &uVar12, &uVar13, &uVar14, &uVar15);
		iLocal_89 = 180;
		Var0 = { uParam1->f_4[(uParam0->f_9 - 1) /*3*/] };
		Var0 = { Var0 + Vector(7.5f, 0f, 0f) };
		if (uParam0->f_9 == (uParam1->f_126 - 1))
		{
			uParam0->f_5 = GRAPHICS::CREATE_CHECKPOINT(iVar7, Var0, uParam1->f_4[uParam0->f_9 /*3*/], fVar4, uVar12, uVar13, uVar14, iLocal_89, 0);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_5, 3f, 3f, 100f);
			GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_5, uVar12, uVar13, uVar14, iLocal_89);
			GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_5, uVar12, uVar13, uVar14, iLocal_89);
		}
		else
		{
			uParam0->f_5 = GRAPHICS::CREATE_CHECKPOINT(func_377((uParam0->f_9 - 1), uParam1), Var0, uParam1->f_4[uParam0->f_9 /*3*/], fVar4, uVar12, uVar13, uVar14, iLocal_89, 0);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_5, 3f, 3f, 100f);
			GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_5, uVar12, uVar13, uVar14, iLocal_89);
			GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_5, uVar12, uVar13, uVar14, iLocal_89);
		}
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = HUD::ADD_BLIP_FOR_COORD(uParam1->f_4[uParam0->f_9 /*3*/]);
		HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_2, "BLIP_CPOINT");
		HUD::SET_BLIP_SCALE(uParam0->f_2, 1.2f);
		HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_2, 0);
		Var0 = { uParam1->f_4[uParam0->f_9 /*3*/] };
		Var0 = { Var0 + Vector(7.5f, 0f, 0f) };
		if (uParam0->f_9 == (uParam1->f_126 - 1))
		{
			if (uParam0->f_11 == uParam1->f_127)
			{
				uParam0->f_4 = GRAPHICS::CREATE_CHECKPOINT(iVar7, Var0, uParam1->f_4[uParam0->f_9 /*3*/], fVar4, uVar8, uVar9, uVar10, 100, 0);
				HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
				GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
				GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_4, 3f, 3f, 100f);
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam1->f_4[uParam0->f_9 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1);
				if (uParam0->f_4 != 0)
				{
					if (uParam0->f_13 > 100f)
					{
						iVar11 = 200;
						HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
						GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
						HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
						GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					}
					else
					{
						HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
						iVar11 = SYSTEM::ROUND((fVar16 * 2f));
						GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
						HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
						iVar11 = SYSTEM::ROUND((fVar16 * 2f));
						GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					}
				}
				HUD::SET_BLIP_SPRITE(uParam0->f_2, 38);
				bVar5 = false;
			}
			else
			{
				uParam0->f_4 = GRAPHICS::CREATE_CHECKPOINT(iVar7, Var0, uParam1->f_4[0 /*3*/], fVar4, uVar8, uVar9, uVar10, iVar11, 0);
				HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
				GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
				GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_4, 3f, 3f, 100f);
				fVar17 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam1->f_4[uParam0->f_9 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1);
				if (uParam0->f_4 != 0)
				{
					if (uParam0->f_13 > 100f)
					{
						iVar11 = 200;
						HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
						GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
						HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
						GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					}
					else
					{
						HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
						iVar11 = SYSTEM::ROUND((fVar17 * 2f));
						GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
						HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
						iVar11 = SYSTEM::ROUND((fVar17 * 2f));
						GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					}
				}
			}
		}
		else
		{
			uParam0->f_4 = GRAPHICS::CREATE_CHECKPOINT(iVar6, Var0, uParam1->f_4[uParam0->f_9 + 1 /*3*/], fVar4, uVar8, uVar9, uVar10, 150, 0);
			HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
			GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
			HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
			GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_4, 3f, 3f, 100f);
			fVar18 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam1->f_4[uParam0->f_9 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1);
			if (uParam0->f_4 != 0)
			{
				if (uParam0->f_13 > 100f)
				{
					iVar11 = 200;
					GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
					GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
					GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				}
				else
				{
					HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
					iVar11 = SYSTEM::ROUND((fVar18 * 2f));
					GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
					iVar11 = SYSTEM::ROUND((fVar18 * 2f));
					GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				}
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_3))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_3));
	}
	if (bVar5)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_3))
		{
			if (uParam0->f_10 < (uParam1->f_126 - 1))
			{
				uParam0->f_3 = HUD::ADD_BLIP_FOR_COORD(uParam1->f_4[uParam0->f_10 /*3*/]);
				HUD::SET_BLIP_DISPLAY(uParam0->f_3, 2);
				HUD::SET_BLIP_SCALE(uParam0->f_3, fVar3);
				HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_3, 0);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_CPOINT");
			}
			else if (uParam0->f_10 == (uParam1->f_126 - 1))
			{
				if (uParam0->f_11 == uParam1->f_127)
				{
					uParam0->f_3 = HUD::ADD_BLIP_FOR_COORD(uParam1->f_4[uParam0->f_10 /*3*/]);
					HUD::SET_BLIP_SPRITE(uParam0->f_3, 38);
					HUD::SET_BLIP_DISPLAY(uParam0->f_3, 2);
					HUD::SET_BLIP_SCALE(uParam0->f_3, 1.2f);
					HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_3, 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_CPOINT");
				}
				else
				{
					uParam0->f_3 = HUD::ADD_BLIP_FOR_COORD(uParam1->f_4[uParam0->f_10 /*3*/]);
					HUD::SET_BLIP_DISPLAY(uParam0->f_3, 2);
					HUD::SET_BLIP_SCALE(uParam0->f_3, fVar3);
					HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_3, 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_CPOINT");
				}
			}
		}
	}
}

int func_379(var uParam0, var uParam1)//Position - 0x2F02D
{
	if (uParam1->f_130 == 2 || uParam1->f_130 == 1)
	{
		fLocal_88 = 4f;
	}
	else if (uParam1->f_129 == 5)
	{
		fLocal_88 = (6f + 2f);
	}
	else
	{
		fLocal_88 = 6f;
	}
	if (uParam0->f_9 > -1)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, uParam1->f_4[uParam0->f_9 /*3*/], fLocal_88, fLocal_88, fLocal_88, 0, 1, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_380(var uParam0, int iParam1)//Position - 0x2F096
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		if (PED::IS_PED_IN_VEHICLE(*uParam0, uParam0->f_1, 0))
		{
			if (iParam1 == 4)
			{
				if (!PED::IS_PED_ON_ANY_BIKE(*uParam0))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if ((VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1, joaat("fbi")) || VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1, joaat("firetruk"))) || VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1, joaat("police")))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}


void func_382(int iParam0)//Position - 0x2F18B
{
	if (!HUD::DOES_BLIP_EXIST(iLocal_354) && GlobalFunc_115(iLocal_343))
	{
		iLocal_354 = GlobalFunc_2324(ENTITY::GET_ENTITY_COORDS(iLocal_343, 1), 7, 0);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_354, "BLIP_FRIEND");
		HUD::SET_BLIP_COLOUR(iLocal_354, 3);
		if (iParam0 == 1)
		{
			HUD::SET_BLIP_SCALE(iLocal_354, 0.7f);
		}
		else
		{
			HUD::SET_BLIP_SCALE(iLocal_354, 1f);
		}
	}
}


void func_384()//Position - 0x2F21A
{
	int iVar0;
	
	iLocal_694 = 0;
	sLocal_702[0] = "EXT1_RACE2";
	sLocal_702[1] = "EXT1_RACE3";
	sLocal_702[2] = "EXT1_RACE4";
	sLocal_702[3] = "EXT1_RACE5";
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_707[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iLocal_760[iVar0] = 0;
		iVar0++;
	}
	sLocal_775[0] = "EXT1_WARN1";
	sLocal_775[1] = "EXT1_WARN2";
	sLocal_775[2] = "EXT1_WARN3";
	sLocal_775[3] = "EXT1_WARN4";
	sLocal_775[4] = "EXT1_WARN5";
	sLocal_775[5] = "EXT1_WARN6";
	sLocal_775[6] = "EXT1_WARN7";
	sLocal_775[7] = "EXT1_WARN8";
	sLocal_775[8] = "EXT1_WARN9";
	sLocal_775[9] = "EXT1_WARN10";
	sLocal_775[10] = "EXT1_WARN11";
	sLocal_775[11] = "EXT1_WARN12";
	sLocal_775[12] = "EXT1_WARN13";
	sLocal_775[13] = "EXT1_WARN14";
	Local_790[0 /*3*/] = { 408f, 5504f, 733f };
	Local_790[1 /*3*/] = { 362f, 5466f, 692f };
	Local_790[2 /*3*/] = { 228f, 5268f, 612f };
	Local_790[3 /*3*/] = { 135f, 5218f, 546f };
	Local_790[4 /*3*/] = { 119f, 5201f, 536f };
	Local_790[5 /*3*/] = { 95f, 5083f, 501f };
	Local_790[6 /*3*/] = { 7f, 5010f, 447f };
	Local_790[7 /*3*/] = { -119f, 4924f, 365f };
	Local_790[8 /*3*/] = { -297f, 4940f, 272f };
	Local_790[9 /*3*/] = { -326f, 4992f, 230f };
	Local_790[10 /*3*/] = { -399f, 4893f, 192f };
	Local_790[11 /*3*/] = { -523f, 4879f, 171f };
	Local_790[12 /*3*/] = { -579f, 4945f, 164f };
	Local_790[13 /*3*/] = { -792f, 5263f, 90f };
}



void func_387()//Position - 0x2F4C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = (iVar0 - 1);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 39)
	{
		if (iVar2 == 0)
		{
			fLocal_714[iVar0] = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_195.f_4[iVar0 /*3*/], Local_671[iLocal_691 /*3*/], 1);
		}
		else
		{
			fLocal_714[iVar0] = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_195.f_4[iVar0 /*3*/], Local_195.f_4[iVar1 /*3*/], 1);
		}
		iVar0++;
		iVar1++;
		iVar2++;
	}
}

void func_388(var uParam0)//Position - 0x2F53F
{
	uParam0->f_126 = 0;
	if (uParam0->f_129 == 0)
	{
	}
	switch (uParam0->f_129)
	{
		case 1:
			uParam0->f_130 = 8;
			*uParam0 = { -331.1481f, 4753.729f, 227.6643f };
			uParam0->f_3 = 229f;
			uParam0->f_128 = 2;
			func_389(uParam0, -329.1481f, 4749.729f, 228.6643f);
			func_389(uParam0, -291.5515f, 4691.305f, 235.7776f);
			func_389(uParam0, -310.1067f, 4684.866f, 246.5917f);
			func_389(uParam0, -415.3808f, 4672.355f, 253.3204f);
			func_389(uParam0, -430.98f, 4707.399f, 253.2198f);
			func_389(uParam0, -447.766f, 4737.784f, 244.1033f);
			func_389(uParam0, -502.0252f, 4732.673f, 239.5285f);
			func_389(uParam0, -579.2366f, 4750.397f, 211.4045f);
			func_389(uParam0, -622.6068f, 4716.045f, 225.8445f);
			func_389(uParam0, -672.1638f, 4728.694f, 238.2206f);
			func_389(uParam0, -736.2177f, 4783.163f, 226.502f);
			func_389(uParam0, -795.5958f, 4867.998f, 255.8227f);
			func_389(uParam0, -855.1999f, 4865.062f, 289.7517f);
			func_389(uParam0, -876.2197f, 4796.166f, 298.3487f);
			func_389(uParam0, -944.431f, 4773.479f, 284.3422f);
			func_389(uParam0, -1026.636f, 4834.163f, 255.4192f);
			func_389(uParam0, -1070.029f, 4825.063f, 231.3936f);
			func_389(uParam0, -1089.925f, 4804.061f, 216.7211f);
			func_389(uParam0, -1279.261f, 4841.332f, 151.8451f);
			func_389(uParam0, -1375.767f, 4798.228f, 126.2156f);
			func_389(uParam0, -1467.242f, 4803.929f, 81.1326f);
			func_389(uParam0, -1485.863f, 4750.45f, 58.8107f);
			func_389(uParam0, -1541.965f, 4738.958f, 50.8111f);
			func_389(uParam0, -1581.132f, 4839.46f, 52.7062f);
			func_389(uParam0, -1494.741f, 4971.167f, 46.7483f);
			uParam0->f_127 = 0;
			uParam0->f_125 = 15f;
			break;
		
		case 2:
			uParam0->f_130 = 8;
			*uParam0 = { 376.5668f, 1058.377f, 236.1919f };
			uParam0->f_3 = 2.9613f;
			uParam0->f_128 = 1;
			func_389(uParam0, 374.2899f, 1074.483f, 235.7123f);
			func_389(uParam0, 362.0448f, 1110.634f, 235.1055f);
			func_389(uParam0, 319.5104f, 1161.185f, 235.4029f);
			func_389(uParam0, 300.0755f, 1237.272f, 234.0581f);
			func_389(uParam0, 269.5442f, 1263.074f, 232.5312f);
			func_389(uParam0, 240.08f, 1180.87f, 224.46f);
			func_389(uParam0, 214.48f, 1216.27f, 224.59f);
			func_389(uParam0, 183.42f, 1205.29f, 224.59f);
			func_389(uParam0, 188.68f, 1187.18f, 224.59f);
			func_389(uParam0, 198.22f, 1180.16f, 226.01f);
			func_389(uParam0, 203.38f, 1121.57f, 224.59f);
			func_389(uParam0, 260.94f, 1135.36f, 220.6f);
			func_389(uParam0, 290.6088f, 1094.698f, 215.5821f);
			func_389(uParam0, 309.9068f, 1019.827f, 209.4761f);
			uParam0->f_127 = 0;
			uParam0->f_125 = 15f;
			break;
		
		case 3:
			uParam0->f_130 = 8;
			*uParam0 = { 857.7981f, 1278.242f, 358.1998f };
			uParam0->f_3 = 152.4354f;
			uParam0->f_128 = 1;
			func_389(uParam0, 827.49f, 1278.53f, 359.37f);
			func_389(uParam0, 846.14f, 1276.5f, 358.83f);
			func_389(uParam0, 835.834f, 1244.057f, 351.752f);
			func_389(uParam0, 799.0862f, 1223.35f, 340.1938f);
			func_389(uParam0, 741.2345f, 1201.069f, 325.2563f);
			func_389(uParam0, 676.7847f, 1219.026f, 322.9875f);
			func_389(uParam0, 624.7384f, 1217.078f, 315.5874f);
			func_389(uParam0, 566.5258f, 1191.433f, 301.3754f);
			func_389(uParam0, 519.7023f, 1226.515f, 290.0847f);
			func_389(uParam0, 469.1648f, 1233.832f, 277.0887f);
			func_389(uParam0, 439.77f, 1292.51f, 270.32f);
			func_389(uParam0, 407.94f, 1253.81f, 258f);
			func_389(uParam0, 409.55f, 1205.16f, 249.29f);
			func_389(uParam0, 422.5302f, 1114.816f, 233f);
			func_389(uParam0, 436.9201f, 1045.166f, 235.1103f);
			func_389(uParam0, 406.2167f, 1031.145f, 236.0167f);
			func_389(uParam0, 380.8393f, 1048.071f, 236.4371f);
			func_389(uParam0, 374.2899f, 1074.483f, 235.7123f);
			func_389(uParam0, 362.0448f, 1110.634f, 235.1055f);
			func_389(uParam0, 319.5104f, 1161.185f, 235.4029f);
			func_389(uParam0, 300.0755f, 1237.272f, 234.0581f);
			func_389(uParam0, 267.55f, 1261.09f, 232f);
			func_389(uParam0, 252.79f, 1238.97f, 230f);
			func_389(uParam0, 268.05f, 1137f, 220.53f);
			func_389(uParam0, 307.27f, 1050.44f, 210.96f);
			func_389(uParam0, 298.58f, 989.24f, 209.66f);
			func_389(uParam0, 279.85f, 946.37f, 209.82f);
			uParam0->f_127 = 0;
			uParam0->f_125 = 15f;
			break;
		
		case 4:
			uParam0->f_130 = 8;
			*uParam0 = { 857.7981f, 1278.242f, 358.1998f };
			uParam0->f_3 = 152.4354f;
			uParam0->f_128 = 1;
			func_389(uParam0, 827.49f, 1278.53f, 359.37f);
			func_389(uParam0, 850.14f, 1280.21f, 358.57f);
			func_389(uParam0, 852.6194f, 1265.312f, 357.7758f);
			func_389(uParam0, 835.834f, 1244.057f, 351.752f);
			func_389(uParam0, 799.0862f, 1223.35f, 340.1938f);
			func_389(uParam0, 741.2345f, 1201.069f, 325.2563f);
			func_389(uParam0, 676.7847f, 1219.026f, 322.9875f);
			func_389(uParam0, 624.7384f, 1217.078f, 315.5874f);
			func_389(uParam0, 566.5258f, 1191.433f, 301.3754f);
			func_389(uParam0, 519.7023f, 1226.515f, 290.0847f);
			func_389(uParam0, 469.1648f, 1233.832f, 277.0887f);
			func_389(uParam0, 445.0087f, 1295.196f, 271.5344f);
			func_389(uParam0, 411.0428f, 1234.254f, 254.587f);
			func_389(uParam0, 438.2f, 1112.65f, 231.8f);
			func_389(uParam0, 500.16f, 1096.98f, 229.77f);
			func_389(uParam0, 532.43f, 1064.83f, 223.78f);
			func_389(uParam0, 533.5f, 1027.03f, 216.61f);
			func_389(uParam0, 491.57f, 968.53f, 204.7f);
			func_389(uParam0, 462.99f, 893.08f, 197.09f);
			func_389(uParam0, 416.58f, 894.3f, 198f);
			func_389(uParam0, 399.39f, 933.08f, 201.46f);
			func_389(uParam0, 377.99f, 993.49f, 207.88f);
			func_389(uParam0, 328.88f, 1007.05f, 209.52f);
			uParam0->f_127 = 0;
			uParam0->f_125 = 15f;
			break;
		
		case 5:
			uParam0->f_130 = 8;
			*uParam0 = { 500.677f, 5598.262f, 794.8943f };
			uParam0->f_3 = 156.5849f;
			uParam0->f_128 = 2;
			func_389(uParam0, 481.4428f, 5521.119f, 771.8f);
			func_389(uParam0, 435.2f, 5507.4f, 743.7f);
			func_389(uParam0, 380.6f, 5498.7f, 713.3f);
			func_389(uParam0, 349.6f, 5447.3f, 675.5f);
			func_389(uParam0, 312.5256f, 5385.502f, 642.6f);
			func_389(uParam0, 276.9f, 5347.8f, 630.6f);
			func_389(uParam0, 226.4586f, 5295.504f, 618.1f);
			func_389(uParam0, 231.5871f, 5249.364f, 600.8f);
			func_389(uParam0, 201.4f, 5247.7f, 590f);
			func_389(uParam0, 172.3f, 5203.5f, 570f);
			func_389(uParam0, 145.6254f, 5185.032f, 551.3f);
			func_389(uParam0, 130.1801f, 5224.447f, 541.8f);
			func_389(uParam0, 113.3f, 5174.3f, 526.5f);
			func_389(uParam0, 113.9507f, 5107.92f, 509.5f);
			func_389(uParam0, 88.1f, 5073.2f, 491.5f);
			func_389(uParam0, 89.5557f, 5017.571f, 460.8f);
			func_389(uParam0, 30.4282f, 5050.168f, 454.2f);
			func_389(uParam0, 7.4203f, 5010.681f, 443.9f);
			func_389(uParam0, -46.7f, 5005.9f, 408.6f);
			func_389(uParam0, -65.7f, 4955.6f, 392.4f);
			func_389(uParam0, -131.1f, 4919f, 353.3f);
			func_389(uParam0, -184.3982f, 4900.463f, 329.1f);
			func_389(uParam0, -271.4f, 4916.4f, 290f);
			func_389(uParam0, -304f, 4950.3f, 261f);
			func_389(uParam0, -335.4192f, 4997.425f, 220.3f);
			func_389(uParam0, -366.6329f, 4919.25f, 196f);
			func_389(uParam0, -460.1884f, 4883.479f, 186.7f);
			func_389(uParam0, -544.8522f, 4874.647f, 167.6f);
			func_389(uParam0, -573.751f, 4893.331f, 168.5f);
			func_389(uParam0, -590.3f, 4962.9f, 156.5f);
			func_389(uParam0, -625.4877f, 5013.735f, 143.4f);
			func_389(uParam0, -634.5757f, 5056.167f, 142.8f);
			func_389(uParam0, -706.3599f, 5069.932f, 140.4f);
			func_389(uParam0, -762.2672f, 5126.632f, 135.7f);
			func_389(uParam0, -764.7f, 5192.5f, 111.5f);
			func_389(uParam0, -789.0667f, 5263.042f, 88.1f);
			func_389(uParam0, -849.2f, 5259.7f, 86f);
			uParam0->f_127 = 0;
			uParam0->f_125 = 15f;
			break;
	}
}

void func_389(var uParam0, struct<3> Param1)//Position - 0x300EA
{
	uParam0->f_4[uParam0->f_126 /*3*/] = { Param1 };
	uParam0->f_126++;
}

void func_390(int iParam0, int iParam1)//Position - 0x3010C
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
			STREAMING::REQUEST_MODEL(iLocal_336[1]);
			STREAMING::REQUEST_ANIM_DICT("creatures@retriever@move");
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("rcm_extreme1");
			STREAMING::REQUEST_ANIM_DICT("creatures@retriever@amb@world_dog_barking@enter");
			STREAMING::REQUEST_ANIM_DICT("creatures@retriever@amb@world_dog_barking@exit");
			STREAMING::REQUEST_MODEL(iLocal_663);
			break;
		
		case 4:
			STREAMING::REQUEST_MODEL(iLocal_339[0]);
			STREAMING::REQUEST_MODEL(iLocal_336[0]);
			STREAMING::REQUEST_MODEL(iLocal_663);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_339[0], 3);
			STREAMING::REQUEST_ANIM_DICT("rcm_extreme1@heli");
			break;
		
		case 6:
			STREAMING::REQUEST_MODEL(iLocal_339[1]);
			STREAMING::REQUEST_MODEL(iLocal_336[0]);
			VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_339[0], 3);
			STREAMING::REQUEST_ANIM_DICT("rcm_extreme1@heli");
			break;
		
		case 9:
			STREAMING::REQUEST_MODEL(iLocal_339[1]);
			VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Ext1_BikeRace");
			break;
		
		case 10:
			STREAMING::REQUEST_ANIM_DICT("rcm_extreme1");
			STREAMING::REQUEST_MODEL(iLocal_339[1]);
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
					if (STREAMING::HAS_MODEL_LOADED(iLocal_336[1]) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@retriever@move"))
					{
						iVar0 = 1;
					}
					break;
				
				case 2:
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					if (((STREAMING::HAS_ANIM_DICT_LOADED("rcm_extreme1") && STREAMING::HAS_ANIM_DICT_LOADED("creatures@retriever@amb@world_dog_barking@enter")) && STREAMING::HAS_ANIM_DICT_LOADED("creatures@retriever@amb@world_dog_barking@exit")) && STREAMING::HAS_MODEL_LOADED(iLocal_663))
					{
						iVar0 = 1;
					}
					break;
				
				case 4:
					if ((((STREAMING::HAS_MODEL_LOADED(iLocal_339[0]) && STREAMING::HAS_MODEL_LOADED(iLocal_336[0])) && STREAMING::HAS_MODEL_LOADED(iLocal_663)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_339[0])) && STREAMING::HAS_ANIM_DICT_LOADED("rcm_extreme1@heli"))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_339[0], 1);
						iVar0 = 1;
					}
					break;
				
				case 6:
					if (((STREAMING::HAS_MODEL_LOADED(iLocal_339[1]) && STREAMING::HAS_MODEL_LOADED(iLocal_336[0])) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_339[0])) && STREAMING::HAS_ANIM_DICT_LOADED("rcm_extreme1@heli"))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_339[1], 1);
						iVar0 = 1;
					}
					break;
				
				case 9:
					if (STREAMING::HAS_MODEL_LOADED(iLocal_339[1]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Ext1_BikeRace"))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_339[1], 1);
						iVar0 = 1;
					}
					break;
				
				case 10:
					if (STREAMING::HAS_ANIM_DICT_LOADED("rcm_extreme1") && STREAMING::HAS_MODEL_LOADED(iLocal_339[1]))
					{
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_339[1], 1);
						iVar0 = 1;
					}
					break;
			}
			SYSTEM::WAIT(0);
		}
	}
}

void func_391()//Position - 0x3039E
{
	switch (iLocal_169)
	{
		case 0:
			func_164();
			if (iLocal_691 == -1)
			{
				func_364(0);
				func_364(1);
				GlobalFunc_164("EXT1_21", 4000, 1);
			}
			else
			{
				func_364(iLocal_691);
				GlobalFunc_164("EXT1_14", 4000, 1);
			}
			iLocal_693 = 0;
			iLocal_696 = 0;
			iLocal_695 = 0;
			iLocal_758 = 0;
			break;
		
		case 1:
			if (func_400())
			{
				iLocal_169 = 2;
			}
			else
			{
				func_331();
				func_392();
			}
			break;
		
		case 2:
			func_151(1);
			GlobalFunc_4948(&uLocal_90, 0, 0);
			break;
	}
}

void func_392()//Position - 0x30433
{
	struct<3> Var0;
	
	if (GlobalFunc_115(iLocal_343))
	{
		switch (iLocal_172)
		{
			case 0:
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_343, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_343, 0, 256);
					iLocal_172 = 1;
				}
				break;
			
			case 1:
				if (GlobalFunc_115(iLocal_351) && !PED::IS_PED_IN_VEHICLE(iLocal_343, iLocal_351, 0))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_343, 1) };
					if (Var0.f_2 < 1200f)
					{
						TASK::TASK_PARACHUTE_TO_TARGET(iLocal_343, Local_638);
						iLocal_172 = 2;
					}
				}
				break;
			
			case 2:
				if (PED::GET_PED_PARACHUTE_STATE(iLocal_343) == -1)
				{
				}
				else
				{
					TASK::SET_PARACHUTE_TASK_TARGET(iLocal_343, Local_638);
					GlobalFunc_2297(&iLocal_350, 1, 0, 1);
					GlobalFunc_190(&iLocal_351);
					iLocal_172 = 3;
				}
				break;
			
			case 3:
				if (PED::GET_PED_PARACHUTE_STATE(iLocal_343) == 1)
				{
					iLocal_172 = 4;
				}
				break;
			
			case 4:
				if (PED::GET_PED_PARACHUTE_STATE(iLocal_343) == 3 || PED::GET_PED_PARACHUTE_STATE(iLocal_343) == -1)
				{
					if (GlobalFunc_115(iLocal_343))
					{
						PED::SET_PED_COMPONENT_VARIATION(iLocal_343, 8, 2, 0, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_343, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
					iLocal_172 = 6;
				}
				else
				{
					func_397();
				}
				break;
			
			case 6:
				func_393();
				if (GlobalFunc_713(iLocal_343, Local_671[1 /*3*/], 1) < 5f)
				{
					if (iLocal_692 == -1)
					{
						iLocal_691 = 0;
						iLocal_692 = 1;
					}
					if (GlobalFunc_115(uLocal_668[iLocal_692]))
					{
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_668[iLocal_692], 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_668[iLocal_692], 3);
						GlobalFunc_146(&(uLocal_688[iLocal_692]));
						iLocal_172 = 7;
					}
				}
				else if (!GlobalFunc_6695(iLocal_343, 713668775))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_343, Local_671[1 /*3*/], 2f, 20000, 1048576000, 0, 1193033728);
				}
				break;
			
			case 7:
				func_393();
				if (GlobalFunc_115(uLocal_668[iLocal_692]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_343, uLocal_668[iLocal_692], 0))
					{
						iLocal_172 = 8;
						iLocal_850 = MISC::GET_GAME_TIMER();
					}
					else
					{
						if (!GlobalFunc_6695(iLocal_343, -1794415470))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_343, uLocal_668[iLocal_692], 20000, -1, 2f, 1, 0);
						}
						func_397();
					}
				}
				break;
			
			case 8:
				func_393();
				if ((((((((iLocal_544 == 0 && iLocal_537 == 1) && (MISC::GET_GAME_TIMER() - iLocal_850) > 10000) && func_261(1, 1)) && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1) && GlobalFunc_115(uLocal_668[iLocal_691])) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 1)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_GET2", 8, 0, 0, 0))
				{
					iLocal_544 = 1;
				}
				break;
			}
	}
}

void func_393()//Position - 0x306FB
{
	if (iLocal_537 == 0 && PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
	{
		GlobalFunc_5105();
		GlobalFunc_2887(&uLocal_866);
		if (func_261(1, 1))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_WAIT", 8, 0, 0, 0))
				{
					iLocal_537 = 1;
				}
			}
			else if (GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_GETBIKE", 8, 0, 0, 0))
			{
				iLocal_537 = 1;
			}
		}
	}
}




void func_397()//Position - 0x307BA
{
	if ((((((((iLocal_167 == 8 && iLocal_691 > -1) && GlobalFunc_115(uLocal_668[iLocal_691])) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 1)) && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_671[0 /*3*/], 60f)) && GlobalFunc_115(iLocal_343)) && GlobalFunc_115(uLocal_668[iLocal_692])) && !GlobalFunc_2580(ENTITY::GET_ENTITY_COORDS(iLocal_343, 1), 10f, 1120403456)) && !GlobalFunc_2580(ENTITY::GET_ENTITY_COORDS(uLocal_668[iLocal_692], 1), 5f, 1120403456))
	{
		PED::SET_PED_INTO_VEHICLE(iLocal_343, uLocal_668[iLocal_692], -1);
		iLocal_758 = 1;
		iLocal_172 = 8;
	}
}



int func_400()//Position - 0x30903
{
	if (iLocal_691 == -1)
	{
		if (GlobalFunc_115(uLocal_668[0]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[0], 1))
		{
			iLocal_691 = 0;
			iLocal_692 = 1;
			GlobalFunc_146(&(uLocal_688[0]));
			GlobalFunc_146(&(uLocal_688[1]));
			if (GlobalFunc_115(uLocal_668[iLocal_692]))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_668[iLocal_692], 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_668[iLocal_692], 3);
			}
		}
		if (GlobalFunc_115(uLocal_668[1]) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[1], 1))
		{
			iLocal_691 = 1;
			iLocal_692 = 0;
			GlobalFunc_146(&(uLocal_688[0]));
			GlobalFunc_146(&(uLocal_688[1]));
			if (GlobalFunc_115(uLocal_668[iLocal_692]))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_668[iLocal_692], 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_668[iLocal_692], 3);
			}
		}
	}
	else
	{
		func_403("EXTREME_01_JOURNEY", 0);
		func_403("EXTREME_01_RACE", 1);
		if (GlobalFunc_115(uLocal_668[iLocal_692]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_668[iLocal_692], "EXTREME_01_BIKE_RACE_DOM_GROUP", 0);
		}
		if (GlobalFunc_115(uLocal_668[iLocal_691]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 1))
			{
				iLocal_695 = 1;
				GlobalFunc_146(&(uLocal_688[iLocal_691]));
				if ((GlobalFunc_663("EXT1_14", 0, 0) || GlobalFunc_663("EXT1_16", 0, 0)) || GlobalFunc_663("EXT1_21", 0, 0))
				{
					HUD::CLEAR_PRINTS();
				}
				AUDIO::TRIGGER_MUSIC_EVENT("EXTREME1_BIKE");
				if (iLocal_172 == 8)
				{
					return 1;
				}
				else
				{
					func_401();
					func_382(1);
					if (iLocal_696 == 0 && !GlobalFunc_775(uLocal_668[iLocal_691], Local_671[iLocal_692 /*3*/], 5f))
					{
						GlobalFunc_164("EXT1_12", 7500, 1);
						iLocal_696 = 1;
					}
					func_328(&iLocal_354, iLocal_343, 1, 10f, 0);
				}
			}
			else if (iLocal_695 == 1)
			{
				GlobalFunc_146(&iLocal_354);
				if (!HUD::DOES_BLIP_EXIST(uLocal_688[iLocal_691]))
				{
					func_363();
				}
			}
		}
	}
	return 0;
}

void func_401()//Position - 0x30B0B
{
	if (((((iLocal_535 == 0 && func_261(1, 0)) && GlobalFunc_115(uLocal_668[iLocal_692])) && GlobalFunc_115(iLocal_343)) && GlobalFunc_156(uLocal_668[iLocal_692], iLocal_343, 1) > 5f) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_FAIR", 8, 0, 0, 0))
	{
		iLocal_535 = 1;
	}
}


void func_403(char* sParam0, int iParam1)//Position - 0x30B95
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

void func_404()//Position - 0x30BC6
{
	switch (iLocal_169)
	{
		case 0:
			func_164();
			iLocal_637 = GlobalFunc_2324(Local_641, 5, 0);
			if (HUD::IS_RADAR_HIDDEN())
			{
				HUD::DISPLAY_RADAR(1);
			}
			if (HUD::IS_HUD_HIDDEN())
			{
				HUD::DISPLAY_HUD(1);
			}
			GlobalFunc_8380(0, 1, 1, 0);
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			GlobalFunc_164("EXT1_03", 5000, 1);
			GlobalFunc_Display_Help_Text("EXT1_04");
			iLocal_551 = 0;
			iLocal_552 = 0;
			iLocal_537 = 0;
			iLocal_531 = 0;
			iLocal_532 = 0;
			iLocal_533 = 0;
			iLocal_534 = 0;
			iLocal_544 = 0;
			iLocal_852 = 0;
			iLocal_853 = 0;
			if (Global_Mission_Fail_State.f_12[2] == 0)
			{
				sLocal_889 = "EXT1_SKYDIVE";
				sLocal_890 = "EXT1_SKYDIVE_4";
				Global_Mission_Fail_State.f_12[2] = 1;
			}
			else
			{
				sLocal_889 = "EXT1_SKYDIV2";
				sLocal_890 = "EXT1_SKYDIV2_4";
				Global_Mission_Fail_State.f_12[2] = 0;
			}
			iLocal_847 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			if (iLocal_552 == 0)
			{
				func_392();
				func_416();
				func_415();
				func_410();
				func_407();
				if (func_406())
				{
					if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						HUD::CLEAR_HELP(1);
					}
					if (func_405())
					{
						RECORDING::_0x293220DA1B46CEBC(10f, 6f, 3);
						AUDIO::TRIGGER_MUSIC_EVENT("EXTREME1_LAND");
						iLocal_850 = MISC::GET_GAME_TIMER();
						iLocal_169 = 2;
					}
					else
					{
						iLocal_552 = 1;
						iLocal_843 = MISC::GET_GAME_TIMER();
						GlobalFunc_146(&iLocal_637);
					}
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_843) > 3000)
			{
				func_356(3);
			}
			break;
		
		case 2:
			RECORDING::_0x293220DA1B46CEBC(10f, 10f, 3);
			func_151(1);
			GlobalFunc_146(&iLocal_637);
			GlobalFunc_4948(&uLocal_90, 0, 0);
			break;
	}
}

int func_405()//Position - 0x30D60
{
	float fVar0;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_641, 1);
	if (fVar0 < 50f)
	{
		return 1;
	}
	return 0;
}

int func_406()//Position - 0x30D90
{
	if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 3 || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == -1)
	{
		if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER::PLAYER_PED_ID()) < 50f)
		{
			return 1;
		}
		else if (!PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER::PLAYER_ID()))
		{
			func_356(18);
		}
	}
	return 0;
}

void func_407()//Position - 0x30DE0
{
	struct<3> Var0;
	
	if (iLocal_530 == 0)
	{
		if (func_261(1, 0) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_FIST", 8, 1, 0, 0))
		{
			iLocal_530 = 1;
		}
	}
	else if (iLocal_531 == 0)
	{
		if (func_261(1, 0) && GlobalFunc_10618(&uLocal_356, "EXT1AU", sLocal_889, 8, 1, 0, 0))
		{
			iLocal_531 = 1;
		}
	}
	else if (iLocal_532 == 0)
	{
		if (GlobalFunc_111())
		{
			Local_867 = { GlobalFunc_514() };
			if (MISC::ARE_STRINGS_EQUAL(&Local_867, sLocal_890))
			{
				GlobalFunc_5105();
				iLocal_532 = 1;
			}
		}
	}
	else if (iLocal_533 == 0)
	{
		if (!GlobalFunc_111() && GlobalFunc_10626(&uLocal_356, "EXT1AU", sLocal_889, &Local_867, 8, 0, 0))
		{
			iLocal_533 = 1;
		}
	}
	else if (iLocal_534 == 0)
	{
		if (func_261(1, 1) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (Var0.f_2 < 1000f && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_LATE", 8, 0, 0, 0))
			{
				iLocal_534 = 1;
			}
		}
	}
}



void func_410()//Position - 0x30FF8
{
	if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 1)
	{
		if (iLocal_174 == 1)
		{
			GlobalFunc_571(0, -1);
			iLocal_174 = 0;
		}
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
		iLocal_534 = 1;
	}
	else if (PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) == 2)
	{
		func_411(&uLocal_90, Local_641, 0, 0, 1, 1, 1);
		if (PAD::_IS_USING_KEYBOARD(0))
		{
			if (!GlobalFunc_74("EXT1_06_KM"))
			{
				GlobalFunc_Display_Help_Text("EXT1_06_KM");
			}
		}
		else if (!GlobalFunc_74("EXT1_06"))
		{
			GlobalFunc_Display_Help_Text("EXT1_06");
		}
	}
	if (((iLocal_533 == 1 && iLocal_847 > -1) && (MISC::GET_GAME_TIMER() - iLocal_847) > 8000) && func_261(1, 1))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
		{
			if (iLocal_853 < 5 && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_GENF", 8, 0, 0, 0))
			{
				iLocal_847 = MISC::GET_GAME_TIMER();
				iLocal_853++;
			}
		}
		else if (iLocal_852 < 5 && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_GEND", 8, 0, 0, 0))
		{
			iLocal_847 = MISC::GET_GAME_TIMER();
			iLocal_852++;
		}
		if (iLocal_853 == 5 && iLocal_852 == 5)
		{
			iLocal_847 = -1;
		}
	}
}

void func_411(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x31132
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		GlobalFunc_4948(uParam0, 0, 0);
	}
	uParam0->f_6 = 1;
	GlobalFunc_8524(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}




void func_415()//Position - 0x3157F
{
	GRAPHICS::DRAW_MARKER(6, Local_641, 0f, 0f, 0f, Local_644, 4f, 4f, 4f, 255, 120, 0, 100, 0, 0, 2, 0, 0, 0, 0);
	GRAPHICS::DRAW_MARKER(6, Local_641, 0f, 0f, 0f, Local_644, 9f, 9f, 9f, 255, 120, 0, 100, 0, 0, 2, 0, 0, 0, 0);
	GRAPHICS::DRAW_MARKER(6, Local_641, 0f, 0f, 0f, Local_644, 14f, 14f, 14f, 255, 120, 0, 100, 0, 0, 2, 0, 0, 0, 0);
}

void func_416()//Position - 0x31605
{
	if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_641, 1300f, 1300f, 1300f, 0, 0, 0))
	{
		func_356(11);
	}
	else if (iLocal_551 == 0)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_641, 1000f, 1000f, 1000f, 0, 0, 0))
		{
			iLocal_551 = 1;
			GlobalFunc_164("EXT1_09", 7500, 1);
		}
	}
}


void func_418()//Position - 0x3168A
{
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	switch (iLocal_169)
	{
		case 0:
			func_164();
			GlobalFunc_Checkpoint8(3, "Skydive", 0, 0, 0, 1);
			func_433();
			func_390(6, 1);
			func_432();
			func_431(0);
			func_428(1);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			if (!WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 0))
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
			}
			if (GlobalFunc_115(iLocal_343))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(iLocal_343, joaat("gadget_parachute"), 0))
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_343, joaat("gadget_parachute"), 1, 0, 0);
				}
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_343, 500);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_343, 1);
			}
			iLocal_659 = 0;
			iLocal_527 = 0;
			iLocal_528 = 0;
			iLocal_529 = 0;
			iLocal_530 = 0;
			iLocal_545 = 0;
			iLocal_553 = 0;
			iLocal_172 = 0;
			iLocal_842 = MISC::GET_GAME_TIMER();
			iLocal_174 = 0;
			iLocal_891 = 0;
			func_427(1);
			if (!GlobalFunc_Is_Mission_Retry())
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EXTREME1_JUMP");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("EXTREME1_RESTART1");
			}
			if (iLocal_892 == 1)
			{
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
				CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(4);
			}
			break;
		
		case 1:
			PAD::_0x7F4724035FDCA1DD(2);
			if (func_426())
			{
				if (GlobalFunc_115(iLocal_351))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_351, 0);
				}
				GlobalFunc_574(755, 0);
				iLocal_174 = 1;
				STREAMING::REMOVE_ANIM_DICT("rcm_extreme1@heli");
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(0, 1, 1000, 0, 0, 0);
				}
				CAM::DESTROY_ALL_CAMS(0);
				RECORDING::_0x293220DA1B46CEBC(10f, 10f, 3);
				iLocal_169 = 2;
			}
			else if (iLocal_553 == 0)
			{
				if (PAD::IS_CONTROL_PRESSED(2, 224) && (MISC::GET_GAME_TIMER() - iLocal_842) > 2000)
				{
					func_424();
				}
				else
				{
					func_423();
					func_422();
					func_419();
				}
			}
			else if ((iLocal_530 == 0 && func_261(1, 1)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_FIST", 8, 0, 0, 0))
			{
				iLocal_530 = 1;
			}
			break;
		
		case 2:
			func_151(1);
			break;
	}
}

void func_419()//Position - 0x3189C
{
	struct<2> Var0;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	struct<3> Var7;
	
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	if (CAM::DOES_CAM_EXIST(uLocal_857))
	{
		fVar3 = PAD::GET_CONTROL_NORMAL(2, 220);
		fVar4 = PAD::GET_CONTROL_NORMAL(2, 221);
		iVar5 = SYSTEM::ROUND((128f * fVar3));
		iVar6 = SYSTEM::ROUND((128f * fVar4));
		Var0 = (SYSTEM::TO_FLOAT(iVar5) / 128f);
		Var0.f_1 = (SYSTEM::TO_FLOAT(iVar6) / -128f);
		if (Var0 != 0f || Var0.f_1 != 0f)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				Var0.f_1 = (Var0.f_1 * -1f);
			}
			Var7 = { 0f, 0f, 0f };
			Var7.f_2 = (Var7.f_2 - ((Var0 * MISC::GET_FRAME_TIME()) * 1000f));
			Var7.x = (Var7.x + ((Var0.f_1 * MISC::GET_FRAME_TIME()) * 1000f));
			if (MISC::ABSF(Var7.f_2) > 0.001f)
			{
				Var7.f_2 = (Var7.f_2 - ((Var7.f_2 * MISC::GET_FRAME_TIME()) * 4f));
			}
			else
			{
				Var7.f_2 = 0f;
			}
			if (MISC::ABSF(Var7.x) > 0.001f)
			{
				Var7.x = (Var7.x - ((Var7.x * MISC::GET_FRAME_TIME()) * 5f));
			}
			else
			{
				Var7.x = 0f;
			}
			Local_854.x = (Local_854.x + (Var7.x * MISC::GET_FRAME_TIME()));
			Local_854.f_2 = (Local_854.f_2 + (Var7.f_2 * MISC::GET_FRAME_TIME()));
			if (Global_Mission_Fail_State.f_12[1] == 0)
			{
				if (Local_854.x > (1.2f * 21.6f))
				{
					Local_854.x = (1.2f * 21.6f);
					Var7.x = 0f;
				}
				else if (Local_854.x < (-0.2f * 21.6f))
				{
					Local_854.x = (-0.2f * 21.6f);
					Var7.x = 0f;
				}
				if (Local_854.f_2 > (0.05f * 43.7465f))
				{
					Local_854.f_2 = (0.05f * 43.7465f);
					Var7.f_2 = 0f;
				}
				else if (Local_854.f_2 < (-0.15f * 43.7465f))
				{
					Local_854.f_2 = (-0.15f * 43.7465f);
					Var7.f_2 = 0f;
				}
			}
			else
			{
				if (Local_854.x > (1.2f * 21.6f))
				{
					Local_854.x = (1.2f * 21.6f);
					Var7.x = 0f;
				}
				else if (Local_854.x < (-0.05f * 21.6f))
				{
					Local_854.x = (-0.05f * 21.6f);
					Var7.x = 0f;
				}
				if (Local_854.f_2 > (0.32f * 43.7465f))
				{
					Local_854.f_2 = (0.32f * 43.7465f);
					Var7.f_2 = 0f;
				}
				else if (Local_854.f_2 < (0.15f * 43.7465f))
				{
					Local_854.f_2 = (0.15f * 43.7465f);
					Var7.f_2 = 0f;
				}
			}
		}
		func_420();
	}
}

void func_420()//Position - 0x31B20
{
	Local_883 = { GlobalFunc_415(Local_877, Local_854.f_2) };
	CAM::SET_CAM_COORD(uLocal_857, Local_880 + Local_883);
	CAM::SET_CAM_ROT(uLocal_857, (fLocal_886 + Local_854.x), 0f, ((fLocal_876 + Local_854.f_2) + fLocal_875), 2);
}


void func_422()//Position - 0x31BAE
{
	if (iLocal_659 == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_842) > 2000)
		{
			GlobalFunc_Display_Help_Text("EXT1_10");
			iLocal_659 = 1;
		}
	}
}

void func_423()//Position - 0x31BD8
{
	if (func_261(1, 1))
	{
		if (iLocal_527 == 0)
		{
			if (GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_JUMP", 8, 0, 0, 0))
			{
				iLocal_527 = 1;
			}
		}
		else if (iLocal_528 == 0)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_842) > 15000 && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_WAIT1", 8, 0, 0, 0))
			{
				iLocal_528 = 1;
			}
		}
		else if (iLocal_529 == 0)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_842) > 40000 && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_WAIT2", 8, 0, 0, 0))
			{
				iLocal_529 = 1;
			}
		}
		else if (iLocal_545 == 0)
		{
			iLocal_545 = 1;
			func_424();
		}
	}
}

void func_424()//Position - 0x31C8A
{
	iLocal_553 = 1;
	RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::CLEAR_HELP(1);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_857) && CAM::DOES_CAM_EXIST(uLocal_858))
	{
		CAM::SET_CAM_FOV(uLocal_858, 26f);
		CAM::SET_CAM_NEAR_CLIP(uLocal_858, 0.84f);
		CAM::SHAKE_CAM(uLocal_858, "SKY_DIVING_SHAKE", 0.15f);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_858, uLocal_857, 1500, 2, 1);
	}
	func_431(1);
	GlobalFunc_5105();
	AUDIO::STOP_SOUND(uLocal_865);
}


int func_426()//Position - 0x31D55
{
	if (iLocal_553 == 1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_873))
	{
		if ((iLocal_891 == 0 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_873) > 0.7f)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			iLocal_891 = 1;
		}
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_873) > 0.92f)
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_874);
			TASK::TASK_FORCE_MOTION_STATE(0, -1161760501, 0);
			TASK::TASK_PARACHUTE(0, 1, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_874);
			TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_874);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_874);
			return 1;
		}
	}
	return 0;
}

void func_427(int iParam0)//Position - 0x31DF9
{
	if (iParam0 == 1)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_641 - Vector(50f, 50f, 50f), Local_641 + Vector(50f, 50f, 50f), 0, 1);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_641 - Vector(50f, 50f, 50f), Local_641 + Vector(50f, 50f, 50f));
		MISC::CLEAR_AREA(Local_641, 50f, 1, 0, 0, 0);
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_641 - Vector(50f, 50f, 50f), Local_641 + Vector(50f, 50f, 50f), 1, 1);
	}
}

void func_428(int iParam0)//Position - 0x31EAA
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iParam0 == 1)
		{
			func_429(&(uLocal_668[iVar0]), iLocal_339[1], Local_671[iVar0 /*3*/], fLocal_678[iVar0], iVar0);
		}
		else
		{
			func_429(&(uLocal_668[iVar0]), iLocal_339[1], Local_681[iVar0 /*3*/], 270f, iVar0);
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_668[iVar0]);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uLocal_668[iVar0], 1);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_339[1]);
	iLocal_691 = -1;
	iLocal_692 = -1;
}

void func_429(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6)//Position - 0x31F3E
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		GlobalFunc_2888(iParam1);
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam5, 1, 1);
		if (iParam6 >= 0)
		{
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam6);
		}
	}
}


void func_431(int iParam0)//Position - 0x31FA1
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iLocal_351))
	{
		if (iParam0 == 0)
		{
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_873))
			{
				uLocal_873 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_873, iLocal_351, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_351, "Chassis"));
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				if (Global_Mission_Fail_State.f_12[1] == 0)
				{
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_873, "rcm_extreme1@heli", "Heli_door_loop_l", 1000f, -8f, 69, 0, 1148846080, 0);
				}
				else
				{
					TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_873, "rcm_extreme1@heli", "Heli_door_loop", 1000f, -8f, 69, 0, 1148846080, 0);
				}
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_873, 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
		else
		{
			uLocal_873 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
			PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_873, iLocal_351, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_351, "Chassis"));
			if (Global_Mission_Fail_State.f_12[1] == 0)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_873, "rcm_extreme1@heli", "Heli_jump_l", 4f, -4f, 7, 0, 1148846080, 0);
			}
			else
			{
				TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_873, "rcm_extreme1@heli", "Heli_jump", 4f, -4f, 7, 0, 1148846080, 0);
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
}

void func_432()//Position - 0x320F6
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (GlobalFunc_115(iLocal_351) && !CAM::DOES_CAM_EXIST(uLocal_857))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_351, 1);
		if (Global_Mission_Fail_State.f_12[1] == 0)
		{
			fLocal_875 = 90f;
			ENTITY::SET_ENTITY_ROTATION(iLocal_351, 0f, 0f, 270f, 2, 1);
			fLocal_876 = 270f;
			Local_880 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_351, 1.12046f, -0.317773f, 0.9385f) };
			fLocal_886 = -38f;
			Local_877 = { Vector(1f, 1f, 1f) * Vector(0f, -SYSTEM::COS((-97.4239f + fLocal_876)), SYSTEM::SIN((-97.4239f + fLocal_876))) };
			Local_854 = { 20f, 0f, -5f };
		}
		else
		{
			fLocal_875 = -90f;
			ENTITY::SET_ENTITY_ROTATION(iLocal_351, 0f, 0f, (270f - 180f), 2, 1);
			fLocal_876 = (270f - 180f);
			Local_880 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_351, -1.12046f, -0.317773f, 0.9385f) };
			fLocal_886 = -38f;
			Local_877 = { Vector(-1f, -1f, -1f) * Vector(0f, -SYSTEM::COS((-97.4239f + fLocal_876)), SYSTEM::SIN((-97.4239f + fLocal_876))) };
			Local_854 = { 20f, 0f, 12f };
		}
		uLocal_857 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
		CAM::SET_CAM_FOV(uLocal_857, 26f);
		CAM::SET_CAM_NEAR_CLIP(uLocal_857, 0.84f);
		func_420();
		uLocal_858 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
		if (Global_Mission_Fail_State.f_12[1] == 0)
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_351, -Local_859.x, Local_859.f_1, Local_859.f_2) };
		}
		else
		{
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_351, Local_859) };
		}
		CAM::SET_CAM_COORD(uLocal_858, Var0);
		Var3 = { CAM::GET_CAM_ROT(uLocal_857, 2) };
		Var3.x = (Var3.x - fLocal_862);
		CAM::SET_CAM_ROT(uLocal_858, Var3, 2);
		CAM::SET_CAM_ACTIVE(uLocal_857, 1);
		CAM::SHAKE_CAM(uLocal_857, "SKY_DIVING_SHAKE", 0.15f);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		AUDIO::PLAY_SOUND_FROM_COORD(uLocal_865, "WIND", Local_634, "EXTREME_01_SOUNDSET", 0, 0, 0);
	}
	func_419();
}

void func_433()//Position - 0x32303
{
	var uVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::GET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), &uVar0);
		func_36(PLAYER::PLAYER_PED_ID(), 8, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		func_36(PLAYER::PLAYER_PED_ID(), 14, 158, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		PED::SET_PED_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_PED_ID(), 1);
	}
}

void func_434()//Position - 0x32353
{
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	switch (iLocal_169)
	{
		case 0:
			func_164();
			if (CAM::DOES_CAM_EXIST(uLocal_335))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::DESTROY_CAM(uLocal_335, 0);
			}
			iLocal_523 = 0;
			iLocal_524 = 0;
			iLocal_525 = 0;
			iLocal_526 = 0;
			iLocal_548 = 0;
			iLocal_660 = 0;
			iLocal_661 = 0;
			break;
		
		case 1:
			func_441();
			if (iLocal_661 == 0)
			{
				func_440();
				func_439();
				func_438();
				func_437();
				func_436();
			}
			break;
		
		case 2:
			func_151(1);
			GlobalFunc_4956();
			GlobalFunc_2295(&iLocal_662, 0);
			break;
	}
}


void func_436()//Position - 0x32444
{
	CAM::_0x0225778816FDC28C(0.15f);
}

void func_437()//Position - 0x32455
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_662) && GlobalFunc_115(iLocal_351)) && GlobalFunc_156(iLocal_662, iLocal_351, 1) > 200f)
	{
		GlobalFunc_2295(&iLocal_662, 0);
	}
}

void func_438()//Position - 0x32491
{
	if ((((iLocal_526 == 0 && func_261(1, 1)) && GlobalFunc_115(iLocal_351)) && GlobalFunc_775(iLocal_351, Local_634, 200f)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_SUMMIT", 8, 0, 0, 0))
	{
		iLocal_526 = 1;
	}
}

void func_439()//Position - 0x324EB
{
	if (iLocal_525 == 0)
	{
		if (func_261(1, 1) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_ASCEND3", 8, 0, 0, 0))
		{
			iLocal_525 = 1;
			func_433();
		}
	}
	else if (iLocal_523 == 0)
	{
		if (func_261(1, 1) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_ASCEND", 8, 0, 0, 0))
		{
			iLocal_523 = 1;
		}
	}
	else if (iLocal_524 == 0)
	{
		if (func_261(1, 1) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_ASCEND2", 8, 0, 0, 0))
		{
			iLocal_524 = 1;
		}
	}
}

void func_440()//Position - 0x32584
{
	if (GlobalFunc_115(iLocal_351))
	{
		switch (iLocal_548)
		{
			case 0:
				if (iLocal_523 == 1)
				{
					TASK::TASK_HELI_MISSION(iLocal_350, iLocal_351, 0, 0, Local_628, 4, 25f, 5f, 354.765f, 100, 30, -1082130432, 0);
					iLocal_548++;
				}
				break;
			
			case 1:
				if (GlobalFunc_775(iLocal_351, Local_628, 30f))
				{
					TASK::TASK_HELI_MISSION(iLocal_350, iLocal_351, 0, 0, Local_634.x, Local_634.f_1, 800f, 4, 25f, 5f, 354.765f, 100, 30, -1082130432, 0);
					iLocal_548++;
				}
				break;
			
			case 2:
				if (GlobalFunc_775(iLocal_351, Local_634.x, Local_634.f_1, 800f, 500f))
				{
					TASK::TASK_HELI_MISSION(iLocal_350, iLocal_351, 0, 0, Local_634, 4, 100f, 5f, ENTITY::GET_ENTITY_HEADING(iLocal_351), 100, 30, -1082130432, 0);
					MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("CLEAR", 30f);
					iLocal_548++;
				}
				break;
			
			case 3:
				if (GlobalFunc_775(iLocal_351, Local_634, 50f))
				{
					if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_351, 1))
					{
						TASK::TASK_HELI_MISSION(iLocal_350, iLocal_351, 0, 0, Local_634, 4, 100f, 5f, 270f, 100, 30, -1082130432, 0);
					}
					else
					{
						TASK::TASK_HELI_MISSION(iLocal_350, iLocal_351, 0, 0, Local_634, 4, 100f, 5f, (270f - 180f), 100, 30, -1082130432, 0);
					}
					iLocal_548++;
				}
				break;
			
			case 4:
				if ((GlobalFunc_775(iLocal_351, Local_634, 10f) && iLocal_526 == 1) && !GlobalFunc_111())
				{
					iLocal_169 = 2;
					iLocal_548++;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_441()//Position - 0x3275A
{
	if (iLocal_661 == 0)
	{
		if (iLocal_660 == 0)
		{
			if ((iLocal_548 > 0 && GlobalFunc_115(iLocal_351)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_351, 0))
			{
				HUD::CLEAR_HELP(1);
				GlobalFunc_Display_Help_Text("EXT1_17");
				iLocal_660 = 1;
			}
		}
		else if (iLocal_173 == 0 && GlobalFunc_75())
		{
			HUD::CLEAR_HELP(1);
			GlobalFunc_5105();
			iLocal_661 = 1;
		}
	}
	else
	{
		func_442(1000, 1);
		GlobalFunc_4956();
		func_568(4);
		GlobalFunc_79(1000, 1);
		iLocal_169 = 2;
	}
}

void func_442(int iParam0, bool bParam1)//Position - 0x327E6
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (!CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(iParam0);
			if (bParam1)
			{
				while (!CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
					SYSTEM::WAIT(0);
				}
			}
		}
	}
}

void func_443()//Position - 0x3281C
{
	switch (iLocal_169)
	{
		case 0:
			func_164();
			GlobalFunc_Checkpoint8(2, "Get in helicopter", 0, 0, 0, 1);
			GlobalFunc_173(&uLocal_356, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			func_390(4, 1);
			func_429(&iLocal_351, iLocal_339[0], Local_628, 278f, iLocal_352);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_339[0]);
			if (GlobalFunc_115(iLocal_351))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_351, "EXTREME_01_CHOPPER_GROUP", 0);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_351);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_351, 0);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_351, 1);
				VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_351, 0.4f);
				func_453();
				if (GlobalFunc_115(iLocal_350))
				{
					TASK::TASK_HELI_MISSION(iLocal_350, iLocal_351, 0, 0, Local_631, 20, 20f, 1f, 278f, 0, 0, -1082130432, 0);
				}
			}
			if (GlobalFunc_115(iLocal_343))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_343, -1, 0, 2);
				PED::SET_PED_PROP_INDEX(iLocal_343, 2, 0, 0, false);
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_343, 0);
				if (!GlobalFunc_6695(iLocal_343, 2106541073))
				{
					TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_343, Local_656, 1f, 40000, 1193033728, 1056964608);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_354))
				{
					iLocal_354 = GlobalFunc_4955(iLocal_343, 1, 1, 5);
				}
				PED::SET_PED_CONFIG_FLAG(iLocal_343, 170, 1);
				GlobalFunc_164("EXT1_02", 7500, 1);
			}
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 1);
			}
			iLocal_546 = 0;
			iLocal_547 = 0;
			iLocal_540 = 0;
			iLocal_539 = 0;
			iLocal_549 = 0;
			iLocal_550 = 0;
			iLocal_849 = -1;
			iLocal_541 = 0;
			iLocal_542 = 0;
			iLocal_543 = 0;
			iLocal_554 = -2;
			iLocal_841 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_343))
			{
				if (GlobalFunc_115(iLocal_351))
				{
					if (WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_351, joaat("weapon_stickybomb"), -1))
					{
						func_356(12);
					}
					else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_351))
					{
						func_356(12);
					}
					else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_351, 0) && PED::IS_PED_IN_VEHICLE(iLocal_343, iLocal_351, 0))
					{
						iLocal_169 = 2;
					}
					else
					{
						func_451();
						func_448();
						func_447();
						func_444();
					}
				}
				else
				{
					func_356(4);
				}
			}
			break;
		
		case 2:
			RECORDING::_0x293220DA1B46CEBC(5f, 10f, 3);
			func_151(0);
			GlobalFunc_146(&uLocal_355);
			GlobalFunc_146(&iLocal_354);
			break;
	}
}

void func_444()//Position - 0x32A72
{
	struct<6> Var0;
	
	if (iLocal_539 == 0)
	{
		if (((MISC::GET_GAME_TIMER() - iLocal_841) > 9000 && func_261(1, 1)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_MEETLZ", 8, 0, 0, 0))
		{
			iLocal_539 = 1;
		}
	}
	else if (iLocal_549 == 0)
	{
		if (iLocal_547 == 1)
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_355))
			{
				iLocal_355 = GlobalFunc_5743(iLocal_351, 1, 5);
				GlobalFunc_164("EXT1_05", 5000, 1);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_351, -1, 0, 2);
			}
			if ((iLocal_540 == 0 && func_261(1, 1)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_GETIN", 8, 0, 0, 0))
			{
				iLocal_540 = 1;
			}
		}
	}
	if ((((iLocal_539 == 1 && iLocal_540 == 0) && GlobalFunc_115(iLocal_343)) && GlobalFunc_111()) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_343, 20f))
	{
		Var0 = { GlobalFunc_560() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "EXT1_MEETLZ"))
		{
			GlobalFunc_4935();
		}
	}
}



void func_447()//Position - 0x32BB6
{
	if (iLocal_173 == 0 && iLocal_549 == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_841) > 60000)
		{
			if (iLocal_542 == 0)
			{
				if ((GlobalFunc_115(iLocal_351) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_343, 20f)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_NOTIN", 8, 0, 0, 0))
				{
					iLocal_542 = 1;
					TASK::TASK_HELI_MISSION(iLocal_350, iLocal_351, 0, 0, Local_628, 4, 10f, 5f, -1f, 100, 30, -1082130432, 0);
				}
			}
			else if ((MISC::GET_GAME_TIMER() - iLocal_841) > 62000)
			{
				if (!GlobalFunc_111())
				{
					func_356(10);
				}
			}
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_841) > 40000)
		{
			if ((iLocal_541 == 0 && func_261(1, 1)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_HURRY", 8, 0, 0, 0))
			{
				iLocal_541 = 1;
			}
		}
		if (GlobalFunc_115(iLocal_343) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_343, 75f))
		{
			func_356(10);
		}
	}
}

void func_448()//Position - 0x32CCC
{
	if (iLocal_549 == 0)
	{
		if (((((iLocal_542 == 0 && iLocal_547 == 1) && PAD::IS_CONTROL_JUST_PRESSED(0, 23)) && GlobalFunc_115(iLocal_351)) && GlobalFunc_115(iLocal_343)) && !GlobalFunc_6695(iLocal_343, 355471868))
		{
			if (func_450(-2.5f, 1f, 0f, 3.5f))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_351, 1))
				{
					if (iLocal_554 == 2 || !GlobalFunc_6695(iLocal_343, -1794415470))
					{
						Global_Mission_Fail_State.f_12[1] = 0;
						iLocal_849 = MISC::GET_GAME_TIMER();
						iLocal_549 = 1;
					}
				}
			}
			else if (func_450(2.5f, 1f, 0f, 3.5f))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_351, 2))
				{
					if (iLocal_554 == 1 || !GlobalFunc_6695(iLocal_343, -1794415470))
					{
						Global_Mission_Fail_State.f_12[1] = 1;
						iLocal_849 = MISC::GET_GAME_TIMER();
						iLocal_549 = 1;
					}
				}
			}
		}
	}
	else if (iLocal_550 == 0)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_849) > 250)
		{
			func_449();
		}
	}
}

void func_449()//Position - 0x32DDD
{
	struct<3> Var0;
	
	if (GlobalFunc_115(iLocal_351))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
		Var0 = { 0f, 0f, 0f };
		if (Global_Mission_Fail_State.f_12[1] == 1)
		{
			Var0.f_2 = (Var0.f_2 + 180f);
			TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_351, 20000, 2, 1f, 2, 0);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_351, 20000, 1, 1f, 2, 0);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
		uLocal_334 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, Var0, 2);
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_334, iLocal_351, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_351, "chassis"));
		uLocal_335 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
		CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_335, uLocal_334, "get_in_cam", "rcm_extreme1@heli");
		CAM::SET_CAM_ACTIVE(uLocal_335, 1);
		CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
		GlobalFunc_8380(1, 1, 1, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		HUD::DISPLAY_RADAR(0);
		HUD::DISPLAY_HUD(0);
		AUDIO::TRIGGER_MUSIC_EVENT("EXTREME1_START");
		iLocal_550 = 1;
		if ((((Global_Mission_Fail_State.f_12[1] == 1 && iLocal_540 == 1) && iLocal_543 == 0) && func_261(1, 1)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_SIDE", 8, 0, 0, 0))
		{
			iLocal_543 = 1;
		}
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(2);
			iLocal_892 = 1;
		}
		if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
		{
			CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(2);
			iLocal_892 = 1;
		}
	}
}

int func_450(struct<3> Param0, float fParam3)//Position - 0x32F59
{
	if (GlobalFunc_115(iLocal_351) && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_351, Param0), fParam3))
	{
		return 1;
	}
	return 0;
}

void func_451()//Position - 0x32F8A
{
	float fVar0;
	
	if (GlobalFunc_115(iLocal_351) && GlobalFunc_115(iLocal_343))
	{
		if (iLocal_547 == 0)
		{
			fVar0 = ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_351);
			if (fVar0 < 1.5f)
			{
				iLocal_547 = 1;
			}
			else if (fVar0 < 50f)
			{
				if (iLocal_546 == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_343, iLocal_351, -1, 0, 2);
					iLocal_546 = 1;
				}
			}
		}
		else if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_343, iLocal_351))
		{
			GlobalFunc_146(&iLocal_354);
			if ((iLocal_549 == 0 && PAD::IS_CONTROL_JUST_PRESSED(0, 23)) && !GlobalFunc_6695(iLocal_343, 355471868))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_351, 2) == iLocal_343)
				{
					if (func_450(2.5f, 1f, 0f, 3f))
					{
						TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iLocal_343, iLocal_351);
						iLocal_554 = 1;
					}
				}
				else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_351, 1) == iLocal_343)
				{
					if (func_450(-2.5f, 1f, 0f, 3f))
					{
						TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iLocal_343, iLocal_351);
						iLocal_554 = 2;
					}
				}
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(iLocal_343, iLocal_351, 1))
		{
			if (!GlobalFunc_6695(iLocal_343, -1794415470))
			{
				if (!func_450(2.5f, 1f, 0f, 3f))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_343);
					TASK::TASK_ENTER_VEHICLE(iLocal_343, iLocal_351, 10000, 2, 2f, 1, 0);
					iLocal_554 = 2;
				}
				else if (!func_450(-2.5f, 1f, 0f, 3f))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_343);
					TASK::TASK_ENTER_VEHICLE(iLocal_343, iLocal_351, 10000, 1, 2f, 1, 0);
					iLocal_554 = 1;
					iLocal_540 = 1;
					iLocal_543 = 1;
				}
			}
		}
	}
}


void func_453()//Position - 0x3315A
{
	if (GlobalFunc_115(iLocal_351))
	{
		func_455(iLocal_351, &iLocal_350, iLocal_336[0], -1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_336[0]);
		func_454(iLocal_350);
		PED::SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(iLocal_350, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_350, 134, 1);
		GlobalFunc_173(&uLocal_356, 4, iLocal_350, "EXT1HELIPILOT", 0, 1);
	}
}

void func_454(int iParam0)//Position - 0x331B2
{
	if (GlobalFunc_115(iParam0))
	{
		uLocal_667 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, uLocal_667);
		PED::SET_PED_CONFIG_FLAG(iParam0, 132, 1);
	}
}

void func_455(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x331E0
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) && ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		GlobalFunc_2888(iParam2);
		*uParam1 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, 26, iParam2, iParam3, 1, 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam1);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*uParam1, 1);
	}
}

void func_456()//Position - 0x33224
{
	func_469();
	switch (iLocal_169)
	{
		case 0:
			func_164();
			GlobalFunc_Checkpoint8(1, "Midtro", 0, 0, 0, 1);
			func_468("ES_1_RCM_CONCAT");
			func_403("EXTREME_01_JOURNEY", 1);
			iLocal_329 = 0;
			iLocal_330 = 0;
			break;
		
		case 1:
			switch (iLocal_329)
			{
				case 0:
					if (func_465(1, 10f, 1))
					{
						if (GlobalFunc_115(iLocal_343))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_343, "Dom", 0, GlobalFunc_4946(52), 0);
						}
						RECORDING::_0x293220DA1B46CEBC(5f, 0f, 0);
						RECORDING::_0x48621C9FCA3EBD28(1);
						CUTSCENE::START_CUTSCENE(0);
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
						iLocal_329++;
					}
					break;
				
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_662))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_662, 0);
						}
						GlobalFunc_9628(119.4851f, 1254.3f, 251.6371f, 124.8092f, 1243.715f, 257.3185f, 7f, 111.8733f, 1267.652f, 253.3308f, 249.7582f, 1, 1, 1, 0, 0);
						func_258(Local_344, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						GlobalFunc_79(500, 0);
						GlobalFunc_69(&iLocal_342);
						func_390(4, 1);
						iLocal_329++;
					}
					break;
				
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (GlobalFunc_115(iLocal_343) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dom", 0))
						{
							GlobalFunc_5921(iLocal_343, Local_650, -46.98f, 0, 1);
							TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_343, Local_656, 1f, 40000, 1193033728, 1056964608);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", GlobalFunc_4917(1)))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_343, -1, 0, 2);
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							iLocal_330 = 1;
						}
					}
					else
					{
						if (iLocal_330 == 1)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_662))
						{
							ENTITY::SET_ENTITY_VISIBLE(iLocal_662, 1);
						}
						if (GlobalFunc_115(iLocal_343))
						{
							PED::SET_PED_CONFIG_FLAG(iLocal_343, 118, 1);
							PED::SET_PED_CONFIG_FLAG(iLocal_343, 208, 0);
							func_454(iLocal_343);
						}
						func_246(1, 1, 1, 1);
						GlobalFunc_702(0, 0, 1);
						iLocal_169 = 2;
					}
					break;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			RECORDING::_0x293220DA1B46CEBC(0f, 13f, 3);
			func_151(1);
			GlobalFunc_79(500, 1);
			break;
	}
}









int func_465(int iParam0, int iParam1, int iParam2)//Position - 0x33D4D
{
	int iVar0;
	
	iVar0 = 1;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if ((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			if (!GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam1, 1, 1056964608, 0, 1))
			{
				iVar0 = 0;
			}
			else if (iParam2 == 1)
			{
				iVar0 = 0;
				if (!GlobalFunc_6695(PLAYER::PLAYER_PED_ID(), -828834893))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (ENTITY::IS_ENTITY_IN_AIR(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				iVar0 = 0;
			}
		}
	}
	GlobalFunc_112();
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
		iVar0 = 0;
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!GlobalFunc_Has_Cutscene_Loaded())
		{
			return 0;
		}
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	return 1;
}



void func_468(char* sParam0)//Position - 0x33E94
{
	GlobalFunc_8380(1, 1, 0, 0);
	CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
}

void func_469()//Position - 0x33EAC
{
	if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
	{
		if (GlobalFunc_115(iLocal_343))
		{
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dom", iLocal_343, 0);
		}
	}
}

void func_470()//Position - 0x33ED2
{
	func_469();
	if (GlobalFunc_115(iLocal_342) && GlobalFunc_6695(iLocal_342, 713668775))
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_342, 1.15f);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_342, 3f);
	}
	switch (iLocal_169)
	{
		case 0:
			func_164();
			GlobalFunc_173(&uLocal_356, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			GlobalFunc_164("EXT1_01", 7500, 1);
			func_390(2, 1);
			func_488(Local_344, 30f, 1, 1, 0);
			iLocal_625 = 0;
			iLocal_521 = 0;
			iLocal_522 = 0;
			iLocal_888 = 0;
			iLocal_332 = 0;
			iLocal_626 = 1;
			iLocal_844 = MISC::GET_GAME_TIMER();
			iLocal_839 = MISC::GET_GAME_TIMER();
			break;
		
		case 1:
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_344, 15f))
			{
				GlobalFunc_146(&uLocal_353);
				GlobalFunc_146(&iLocal_354);
				if (GlobalFunc_115(iLocal_343))
				{
					if (iLocal_888 == 0)
					{
						GlobalFunc_4935();
						CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_343, 0f, 0f, 0f, 1, -1, 3000, 2000, 0);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.45f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.01f);
						CAM::SET_GAMEPLAY_HINT_FOV(35f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
						iLocal_851 = MISC::GET_GAME_TIMER();
						iLocal_888 = 1;
					}
					else
					{
						GlobalFunc_8535();
						if ((MISC::GET_GAME_TIMER() - iLocal_851) > 4000)
						{
							iLocal_169 = 2;
						}
					}
				}
			}
			else if (iLocal_626 == 3)
			{
				GlobalFunc_146(&uLocal_353);
				if (GlobalFunc_115(iLocal_343) && !HUD::DOES_BLIP_EXIST(iLocal_354))
				{
					iLocal_354 = GlobalFunc_4955(iLocal_343, 1, 1, 5);
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_343, -1, 0, 2);
				}
				func_482();
				func_331();
				func_481();
				func_480();
				func_479();
				if ((MISC::GET_GAME_TIMER() - iLocal_840) > 12500 && !GlobalFunc_6695(iLocal_342, 242628503))
				{
					func_478(0);
					iLocal_840 = MISC::GET_GAME_TIMER();
				}
			}
			else
			{
				func_476();
				func_481();
				func_475();
				func_480();
				func_473();
				func_471();
				func_479();
			}
			break;
		
		case 2:
			func_151(1);
			GlobalFunc_146(&uLocal_353);
			GlobalFunc_146(&iLocal_354);
			GlobalFunc_4948(&uLocal_90, 0, 0);
			func_403("EXTREME_01_INTRO", 0);
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
			break;
	}
}

void func_471()//Position - 0x340F9
{
	int iVar0;
	
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	if (GlobalFunc_115(iLocal_342) && (MISC::GET_GAME_TIMER() - iLocal_844) > 2000)
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1);
		if (iVar0 == joaat("weapon_unarmed"))
		{
			func_472(&uLocal_90, iLocal_342, "EXT1_08", 0, 1, 1, 1);
		}
		else
		{
			GlobalFunc_4948(&uLocal_90, 0, 0);
		}
	}
}

void func_472(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x34157
{
	uParam0->f_6 = 0;
	GlobalFunc_8323(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_473()//Position - 0x34179
{
	if ((GlobalFunc_115(iLocal_342) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_342, 1) > 100f) && !func_474())
	{
		func_356(6);
	}
}

int func_474()//Position - 0x341B1
{
	float fVar0;
	float fVar1;
	
	if (GlobalFunc_115(iLocal_342))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_344, 0);
		fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_342, 1), Local_344, 0);
		if (fVar0 < fVar1)
		{
			return 1;
		}
	}
	return 0;
}

void func_475()//Position - 0x341F9
{
	if (GlobalFunc_115(iLocal_342))
	{
		switch (iLocal_626)
		{
			case 0:
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_342, 1) < 20f)
				{
					iLocal_626 = 1;
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_840) > 7500)
				{
					func_478(1);
					iLocal_626 = 2;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_342, -875674219) == 7)
				{
					if (!PED::IS_PED_FACING_PED(iLocal_342, PLAYER::PLAYER_PED_ID(), 25f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_342, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_342, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					}
				}
				break;
			
			case 1:
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_342, 1) > 30f && !func_474())
				{
					iLocal_840 = MISC::GET_GAME_TIMER();
					iLocal_626 = 0;
				}
				else
				{
					if (iLocal_625 < 23 && !GlobalFunc_6695(iLocal_342, 713668775))
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_342, Local_555[iLocal_625 /*3*/], 3f, 20000, 1048576000, 0, 1193033728);
					}
					if (GlobalFunc_775(iLocal_342, Local_555[iLocal_625 /*3*/], 4f))
					{
						iLocal_625++;
						if (iLocal_625 == 23)
						{
							iLocal_626 = 3;
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_342, Local_555[iLocal_625 /*3*/], 3f, 20000, 1048576000, 0, 1193033728);
						}
					}
				}
				break;
			
			case 2:
				if (!GlobalFunc_6695(iLocal_342, 242628503))
				{
					iLocal_840 = MISC::GET_GAME_TIMER();
					iLocal_626 = 0;
				}
				break;
			
			case 3:
				break;
			}
	}
}

void func_476()//Position - 0x3437A
{
	struct<6> Var0;
	
	if (iLocal_521 == 0)
	{
		if (func_261(1, 1) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_DOG", 8, 0, 0, 0))
		{
			iLocal_521 = 1;
		}
	}
	else if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "EXT1_DOG") && GlobalFunc_115(iLocal_342))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_342, 1) < 30f)
			{
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
			}
			else if (!GlobalFunc_620())
			{
				GlobalFunc_619(1);
			}
		}
	}
}


void func_478(int iParam0)//Position - 0x34419
{
	TASK::OPEN_SEQUENCE_TASK(&uLocal_627);
	if (iParam0 == 1)
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
	}
	else
	{
		if (!GlobalFunc_775(iLocal_342, Local_555[22 /*3*/], 5f))
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_555[22 /*3*/], 2f, 20000, 1193033728, 1056964608);
		}
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_344, 0);
	}
	TASK::TASK_PLAY_ANIM(0, "creatures@retriever@amb@world_dog_barking@enter", "enter", 8f, -8f, -1, 0, 0, 0, 0, 0);
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 3) == 0)
	{
		TASK::TASK_PLAY_ANIM(0, "rcm_extreme1", "idle_c", 8f, -8f, -1, 0, 0, 0, 0, 0);
	}
	else
	{
		TASK::TASK_PLAY_ANIM(0, "rcm_extreme1", "idle_a", 8f, -8f, -1, 0, 0, 0, 0, 0);
	}
	TASK::TASK_PLAY_ANIM(0, "creatures@retriever@amb@world_dog_barking@exit", "exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uLocal_627);
	TASK::TASK_PERFORM_SEQUENCE(iLocal_342, uLocal_627);
	PED::SET_PED_KEEP_TASK(iLocal_342, 1);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_627);
	if (((iParam0 == 1 && func_261(1, 1)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_342, 1) < 50f) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_ONELIN", 8, 0, 0, 0))
	{
	}
}

void func_479()//Position - 0x3455E
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_332 == 0)
		{
			if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_344, 100f))
			{
				CUTSCENE::REQUEST_CUTSCENE("ES_1_RCM_CONCAT", 8);
				iLocal_332 = 1;
			}
		}
		else if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_344, 120f) && CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			CUTSCENE::REMOVE_CUTSCENE();
			iLocal_332 = 0;
		}
	}
}

void func_480()//Position - 0x345C6
{
	if ((((iLocal_522 == 0 && func_261(1, 1)) && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_344, 50f)) && CAM::IS_SPHERE_VISIBLE(Local_344, 1f)) && GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_SEE", 8, 0, 0, 0))
	{
		iLocal_522 = 1;
	}
}

void func_481()//Position - 0x34624
{
	if (((MISC::GET_GAME_TIMER() - iLocal_839) > 4000 && func_261(1, 1)) && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_344, 40f))
	{
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
		{
			if (GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_HEY", 8, 0, 0, 0))
			{
				iLocal_839 = MISC::GET_GAME_TIMER();
			}
		}
		else if (GlobalFunc_10618(&uLocal_356, "EXT1AU", "EXT1_HUNG", 8, 0, 0, 0))
		{
			iLocal_839 = MISC::GET_GAME_TIMER();
		}
	}
}

void func_482()//Position - 0x346A6
{
	if (GlobalFunc_115(iLocal_343) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_343, 100f))
	{
		GlobalFunc_4956();
		func_356(5);
	}
}






void func_488(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3484E
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_343))
	{
		while (!func_490(&iLocal_343, 52, Param0, fParam3, "DOM", 1))
		{
			SYSTEM::WAIT(0);
		}
	}
	if (GlobalFunc_115(iLocal_343))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_343, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_343, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_343, 500);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_343, 1);
		PED::SET_PED_HELMET(iLocal_343, 0);
		PED::SET_PED_PARACHUTE_TINT_INDEX(iLocal_343, 6);
		GlobalFunc_173(&uLocal_356, 3, iLocal_343, "DOM", 0, 1);
		if (iParam4 == 1)
		{
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_343, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_343, 118, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_343, 208, 1);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_348);
			TASK::TASK_PLAY_ANIM(0, "rcm_extreme1", "es_1_rcm_dom_upside_down_base", 1000f, -1000f, -1, 2048, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcm_extreme1", "es_1_rcm_dom_upside_down_fidget_01", 1000f, -1000f, -1, 2048, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcm_extreme1", "es_1_rcm_dom_upside_down_base", 1000f, -1000f, -1, 2048, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "rcm_extreme1", "es_1_rcm_dom_upside_down_fidget_02", 1000f, -1000f, -1, 2048, 0, 0, 0, 0);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_348, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_348);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_343, uLocal_348);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_348);
			func_489();
		}
		else
		{
			func_454(iLocal_343);
		}
		if (iParam5 == 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_343, 8, 1, 0, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_343, 8, 2, 0, 0);
		}
		if (iParam6 == 1)
		{
			PED::SET_PED_PROP_INDEX(iLocal_343, 2, 0, 0, false);
		}
	}
}

void func_489()//Position - 0x349C9
{
	GlobalFunc_2888(iLocal_663);
	iLocal_662 = OBJECT::CREATE_OBJECT(iLocal_663, Local_664, 1, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_663);
	ENTITY::SET_ENTITY_COLLISION(iLocal_662, 0, 0);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_662, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_662, 200);
	GlobalFunc_5921(iLocal_662, Local_664, 0f, 0, 1);
}

int func_490(var uParam0, int iParam1, struct<3> Param2, var uParam5, char* sParam6, int iParam7)//Position - 0x34A1B
{
	if (GlobalFunc_6705(uParam0, iParam1, Param2, uParam5, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
				PED::SET_PED_MONEY(*uParam0, 0);
				if (iParam7 == 1)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
				}
			}
			PED::SET_PED_NAME_DEBUG(*uParam0, sParam6);
		}
		return 1;
	}
	return 0;
}



void func_493()//Position - 0x34B4A
{
	int iVar0;
	
	PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
	if (GlobalFunc_115(iLocal_342) && GlobalFunc_6695(iLocal_342, 713668775))
	{
		PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_342, 1.15f);
		PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_342, 3f);
	}
	switch (iLocal_169)
	{
		case 0:
			func_164();
			GlobalFunc_10364("es_1_rcm_p1", 0);
			iLocal_329 = 0;
			iLocal_330 = 0;
			if (((CAM::IS_SCREEN_FADED_IN() && !GlobalFunc_Is_Mission_Retry()) && GlobalFunc_115(Local_102.f_28[0])) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_102.f_28[0], 1) > 4f)
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_102.f_28[0], 0f, 0f, 0f, 1, -1, 3000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.45f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.9f);
				CAM::SET_GAMEPLAY_HINT_FOV(30f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_102.f_28[0], -1, 0, 2);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_349);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				}
				TASK::TASK_GO_TO_ENTITY(0, Local_102.f_28[0], 20000, 0.5f, 1f, 1073741824, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Local_102.f_28[0], 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_349);
				TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uLocal_349);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_349);
				TASK::CLEAR_PED_TASKS(Local_102.f_28[0]);
				TASK::TASK_GO_TO_ENTITY(Local_102.f_28[0], PLAYER::PLAYER_PED_ID(), 20000, 0.5f, 1f, 1073741824, 0);
				iLocal_333 = MISC::GET_GAME_TIMER();
			}
			else
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_115(Local_102.f_28[0]))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_102.f_28[0], 0);
				}
				iLocal_333 = -1;
			}
			if (GlobalFunc_115(Local_102.f_28[0]))
			{
				iLocal_342 = Local_102.f_28[0];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_342, 1, 1);
			}
			break;
		
		case 1:
			switch (iLocal_329)
			{
				case 0:
					if (func_465(1, 1093140480, 0))
					{
						if (iLocal_333 == -1 || (MISC::GET_GAME_TIMER() - iLocal_333) > 3000)
						{
							if (GlobalFunc_115(iLocal_342))
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_342, "Hudson", 0, iLocal_336[1], 0);
							}
							else
							{
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_342, "Hudson", 2, iLocal_336[1], 0);
							}
							GlobalFunc_9161();
							CUTSCENE::START_CUTSCENE(0);
							RECORDING::_0x48621C9FCA3EBD28(1);
							iLocal_329++;
						}
					}
					if (((GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_6695(PLAYER::PLAYER_PED_ID(), 242628503)) && GlobalFunc_115(iLocal_342)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_342, 1) < 3f)
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_342, 0);
						TASK::CLEAR_PED_TASKS(iLocal_342);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_342, PLAYER::PLAYER_PED_ID(), 0);
					}
					break;
				
				case 1:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
						{
							CAM::STOP_GAMEPLAY_HINT(0);
						}
						iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
							}
							GlobalFunc_8317(iVar0, 145);
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
							if (SYSTEM::VDIST2(GlobalFunc_7729(24), Local_177) < 4f)
							{
								GlobalFunc_7695(24);
							}
						}
						if (GlobalFunc_7091(GlobalFunc_625(), 1))
						{
							GlobalFunc_9628(-197.8926f, 1305.307f, 302.4247f, -182.3605f, 1291.454f, 305.6281f, 7f, Local_177, 216.9263f, 1, 1, 1, 0, 0);
							GlobalFunc_10606(Local_177, 216.9263f, 0, 145);
						}
						else
						{
							GlobalFunc_9628(-197.8926f, 1305.307f, 302.4247f, -182.3605f, 1291.454f, 305.6281f, 7f, -198.46f, 1313.53f, 304.5f, 129.93f, 1, 1, 1, 0, 0);
							GlobalFunc_10606(-198.46f, 1313.53f, 304.5f, 129.93f, 0, 145);
						}
						func_258(-188.22f, 1296.1f, 302.86f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						GlobalFunc_79(500, 0);
						func_390(1, 0);
						iLocal_329++;
					}
					break;
				
				case 2:
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_342) && ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Hudson", 0)))
						{
							iLocal_342 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Hudson", 0));
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_342, 1, 1);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_342, -1, 0, 2);
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Hudson", iLocal_336[1]))
						{
							func_497(Local_833, -110f, CUTSCENE::WAS_CUTSCENE_SKIPPED());
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", GlobalFunc_4917(1)))
						{
							func_496();
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							iLocal_330 = 1;
						}
						else if (CUTSCENE::GET_CUTSCENE_TIME() > 22500)
						{
							func_495();
						}
					}
					else
					{
						if (iLocal_330 == 1)
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						}
						func_246(1, 1, 1, 1);
						iLocal_169 = 2;
					}
					break;
			}
			break;
		
		case 2:
			RECORDING::_0x81CBAE94390F9F89();
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 0);
			func_151(1);
			GlobalFunc_4923(&Local_102, 0, 1);
			break;
	}
}


void func_495()//Position - 0x35130
{
	if (GlobalFunc_115(iLocal_342))
	{
		if (!GlobalFunc_6695(iLocal_342, 713668775))
		{
			PED::FORCE_PED_MOTION_STATE(iLocal_342, -1115154469, 0, 0, 0);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_342, Local_555[0 /*3*/], 3f, 20000, 1048576000, 0, 1193033728);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_342, 0, 0);
		}
	}
}

void func_496()//Position - 0x35189
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 3000, 0, 1, 0);
		if (GlobalFunc_115(iLocal_342))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_342, -1, 0, 2);
		}
	}
}

void func_497(struct<3> Param0, int iParam3, int iParam4)//Position - 0x351D4
{
	if (GlobalFunc_115(iLocal_342))
	{
		GlobalFunc_5921(iLocal_342, Param0, iParam3, 1, 1);
	}
	else
	{
		func_390(1, 1);
		func_498(&iLocal_342, iLocal_336[1], Param0, iParam3);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_336[1]);
	if (GlobalFunc_115(iLocal_342))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_342, 1);
		GlobalFunc_173(&uLocal_356, 5, iLocal_342, "COLLIE", 0, 1);
		func_454(iLocal_342);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_342, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_342, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_342, 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_342, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_342, 185, 1);
		if (!HUD::DOES_BLIP_EXIST(uLocal_353))
		{
			iLocal_353 = GlobalFunc_4955(iLocal_342, 1, 1, 5);
		}
		if (iParam4 == 1)
		{
			func_495();
		}
	}
}

void func_498(int iParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x35293
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		GlobalFunc_2888(iParam1);
		*iParam0 = PED::CREATE_PED(26, iParam1, Param2, iParam5, 1, 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		WEAPON::REMOVE_ALL_PED_WEAPONS(*iParam0, 1);
	}
}



































void func_533()//Position - 0x37CC5
{
	if (iLocal_167 < (13 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_342))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_342))
			{
				func_356(1);
			}
			else
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iLocal_342))
				{
					func_356(8);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_342, PLAYER::PLAYER_PED_ID(), 1))
				{
					func_356(8);
				}
				else if (GlobalFunc_8324(iLocal_342, 1, 0, 0, 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_356(14);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_343))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_343))
			{
				func_356(2);
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_343, PLAYER::PLAYER_PED_ID(), 1))
			{
				func_356(7);
			}
			else if (func_534(iLocal_343, 1, 70f, 120f, 0, 0, 0, 0))
			{
				func_356(13);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_350))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_350))
			{
				func_356(9);
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_350, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_350, 0, 2))
				{
					func_356(9);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_668[0]) && !GlobalFunc_4940(uLocal_668[0]))
		{
			func_356(15);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_668[1]) && !GlobalFunc_4940(uLocal_668[1]))
		{
			func_356(15);
		}
	}
}

int func_534(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x37E14
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
		else if (func_535(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_535(int iParam0, float fParam1)//Position - 0x37ECF
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
				if (func_536(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_536(int iParam0, float fParam1)//Position - 0x37F45
{
	return func_537(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_537(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x37F5D
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_544(iParam0, iParam1);
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
		iVar4 = func_540();
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



int func_540()//Position - 0x38212
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




int func_544(int iParam0, int iParam1)//Position - 0x38329
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








void func_552(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x38749
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
















void func_568(int iParam0)//Position - 0x39188
{
	float fVar0;
	float fVar1;
	
	func_615(1, 1);
	iLocal_173 = 1;
	func_614();
	if (!GlobalFunc_188())
	{
		GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, 0, 1);
	}
	func_36(PLAYER::PLAYER_PED_ID(), 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	func_36(PLAYER::PLAYER_PED_ID(), 14, 2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	switch (iParam0)
	{
		case 0:
			func_608(1, 1, 0);
			if (!GlobalFunc_188())
			{
				GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), Local_647, 231.5293f, 1, 1);
			}
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
			iLocal_168 = 1;
			break;
		
		case 1:
			func_608(1, 1, 0);
			if (!GlobalFunc_188())
			{
				GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), Local_647, 231.5293f, 1, 1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			MISC::CLEAR_AREA(-188.8f, 1296.122f, 302.9238f, 1000f, 1, 0, 0, 0);
			GlobalFunc_10698(&iLocal_863, Local_177, 216.9263f, 0, 0, 0, 0, 0, joaat("asterope"), 0, 145);
			iLocal_168 = 2;
			break;
		
		case 2:
			func_608(1, 1, 0);
			if (!GlobalFunc_188())
			{
				GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), Local_653, -53.85f, 0, 1);
			}
			func_390(2, 1);
			func_488(Local_344, 30f, 1, 1, 0);
			iLocal_168 = 3;
			break;
		
		case 3:
			func_608(1, 1, 0);
			if (!GlobalFunc_188())
			{
				GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), Local_653, -53.85f, 0, 1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			func_488(122.37f, 1248.63f, 253.77f, -46.98f, 0, 1, 1);
			func_390(4, 1);
			func_489();
			iLocal_168 = 4;
			break;
		
		case 4:
			func_608(1, 1, 0);
			MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEAR");
			if (!GlobalFunc_188())
			{
				GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), Local_671[0 /*3*/], 0, 0, 1);
			}
			func_390(6, 1);
			WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute"));
			GlobalFunc_173(&uLocal_356, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			if (Global_Mission_Fail_State.f_12[1] == 0)
			{
				func_429(&iLocal_351, iLocal_339[0], Local_634, 270f, iLocal_352);
			}
			else if (Global_Mission_Fail_State.f_12[1] == 1)
			{
				func_429(&iLocal_351, iLocal_339[0], Local_634, (270f - 180f), iLocal_352);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_339[0]);
			if (GlobalFunc_115(iLocal_351))
			{
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_351);
				func_453();
			}
			func_488(Local_638, 0f, 0, 1, 1);
			if (GlobalFunc_115(iLocal_343) && GlobalFunc_115(iLocal_351))
			{
				if (Global_Mission_Fail_State.f_12[1] == 0)
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_343, iLocal_351, 2);
				}
				else
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_343, iLocal_351, 1);
				}
			}
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
			func_432();
			iLocal_168 = 6;
			break;
		
		case 5:
		case 6:
		case 7:
			func_608(1, 1, 0);
			if (!GlobalFunc_188())
			{
				GlobalFunc_5921(PLAYER::PLAYER_PED_ID(), 501.513f, 5535.729f, 777.2975f, 126.8669f, 0, 1);
			}
			func_427(1);
			func_390(9, 1);
			func_428(1);
			if (Global_Mission_Fail_State.f_12[0] == 0)
			{
				iLocal_691 = 0;
				iLocal_692 = 1;
			}
			else
			{
				iLocal_691 = 1;
				iLocal_692 = 0;
			}
			iLocal_693 = 0;
			iLocal_758 = 0;
			if (!GlobalFunc_188() && GlobalFunc_115(uLocal_668[iLocal_691]))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], -1);
			}
			func_488(Local_638, 0f, 0, 0, 1);
			if (GlobalFunc_115(uLocal_668[iLocal_692]) && GlobalFunc_115(iLocal_343))
			{
				iLocal_172 = 8;
				PED::SET_PED_INTO_VEHICLE(iLocal_343, uLocal_668[iLocal_692], -1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_668[iLocal_692], 0);
				func_403("EXTREME_01_RACE", 1);
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_668[iLocal_692], "EXTREME_01_BIKE_RACE_DOM_GROUP", 0);
			}
			GlobalFunc_173(&uLocal_356, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			PLAYER::SET_EVERYONE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			SYSTEM::WAIT(0);
			MISC::CLEAR_AREA(Local_671[0 /*3*/], 100f, 1, 0, 0, 0);
			iLocal_168 = 9;
			break;
		
		case 8:
		case 9:
			func_608(1, 1, 0);
			func_390(10, 1);
			func_428(0);
			func_488(-867.3832f, 5254.307f, 85.0097f, 0f, 0, 0, 1);
			if (Global_Mission_Fail_State.f_12[0] == 0)
			{
				iLocal_691 = 0;
				iLocal_692 = 1;
			}
			else
			{
				iLocal_691 = 1;
				iLocal_692 = 0;
			}
			if (iParam0 == 8)
			{
				iLocal_713 = 1;
			}
			else
			{
				iLocal_713 = 2;
			}
			iLocal_168 = 10;
			break;
	}
	if ((iParam0 == 5 || iParam0 == 6) || iParam0 == 7)
	{
		if (GlobalFunc_115(uLocal_668[iLocal_691]))
		{
			GlobalFunc_4967(uLocal_668[iLocal_691], -1, 1);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("EXTREME1_BIKE");
	}
	else if (iParam0 == 4)
	{
		if (GlobalFunc_115(iLocal_351))
		{
			GlobalFunc_4967(iLocal_351, 0, 1);
		}
		func_433();
	}
	else
	{
		GlobalFunc_4967(0, -1, 1);
	}
	if (iParam0 == 6 || iParam0 == 7)
	{
		if (iParam0 == 6)
		{
			fVar0 = 74000f;
			fVar1 = (fVar0 + 300f);
			iLocal_176 = 5;
		}
		else
		{
			fVar0 = 143500f;
			fVar1 = (fVar0 + 1500f);
			iLocal_176 = 6;
		}
		if (GlobalFunc_115(uLocal_668[iLocal_692]))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_692], 500, "Ext1_BikeRace", 1);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_692]);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_692], fVar1);
		}
		if (GlobalFunc_115(uLocal_668[iLocal_691]))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_668[iLocal_691], -1);
			}
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_691], 500, "Ext1_BikeRace", 1);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_691]);
			VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_691], fVar0);
		}
		if (!GlobalFunc_188())
		{
			SYSTEM::WAIT(100);
			GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
			SYSTEM::WAIT(100);
		}
		if (GlobalFunc_115(uLocal_668[iLocal_692]))
		{
			VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_692]);
		}
		if (GlobalFunc_115(uLocal_668[iLocal_691]))
		{
			VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_691]);
		}
	}
	else if (iParam0 == 4)
	{
		if (Global_Mission_Fail_State.f_12[1] == 0)
		{
			func_431(0);
		}
		else
		{
			func_431(0);
		}
		if (!GlobalFunc_188())
		{
			GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 12, 5000, 0, 0);
		}
		iLocal_176 = -1;
	}
	else
	{
		if (!GlobalFunc_188())
		{
			GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 12, 5000, 0, 0);
		}
		iLocal_176 = -1;
	}
	if (iParam0 == 1)
	{
		func_497(Local_836, -110f, 1);
		func_496();
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (((iParam0 == 0 || iParam0 == 2) || iParam0 == 8) || iParam0 == 9)
	{
		func_569(1, 0, 1);
	}
	else if (iParam0 == 4)
	{
		func_569(0, 1, 0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
	}
	else
	{
		func_569(1, 1, 1);
	}
	iLocal_169 = 2;
}

void func_569(int iParam0, int iParam1, int iParam2)//Position - 0x39912
{
	func_246(0, 0, iParam2, 1);
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







































void func_608(int iParam0, int iParam1, int iParam2)//Position - 0x3E183
{
	int iVar0;
	
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_4956();
	GlobalFunc_4948(&uLocal_90, 0, 0);
	GlobalFunc_200(&uLocal_356, 1);
	GlobalFunc_200(&uLocal_356, 3);
	GlobalFunc_200(&uLocal_356, 4);
	GlobalFunc_200(&uLocal_356, 5);
	func_611();
	func_610();
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 170, 0);
		PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	func_161();
	func_27(iParam1);
	func_609(iParam1);
	if (iParam0 == 1)
	{
		GlobalFunc_2295(&iLocal_662, 0);
	}
	VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_339[0]);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_336[iVar0]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_339[iVar0]);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_339[iVar0], 0);
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_663);
	STREAMING::REMOVE_ANIM_DICT("rcm_extreme1");
	STREAMING::REMOVE_ANIM_DICT("rcm_extreme1@heli");
	STREAMING::REMOVE_ANIM_DICT("creatures@retriever@amb@world_dog_barking@enter");
	STREAMING::REMOVE_ANIM_DICT("creatures@retriever@amb@world_dog_barking@exit");
	STREAMING::REMOVE_ANIM_DICT("creatures@retriever@move");
	CAM::DESTROY_ALL_CAMS(0);
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(1);
	}
	if (HUD::IS_HUD_HIDDEN())
	{
		HUD::DISPLAY_HUD(1);
	}
	func_194(PLAYER::PLAYER_PED_ID(), 14, 158);
	func_427(0);
	AUDIO::STOP_SOUND(uLocal_865);
	AUDIO::TRIGGER_MUSIC_EVENT("EXTREME1_STOP");
	func_403("EXTREME_01_INTRO", 0);
	func_403("EXTREME_01_JOURNEY", 0);
	func_403("EXTREME_01_RACE", 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_864, 0);
	func_619(&Local_102, 0, 0, 0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (iParam2 == 1)
	{
		TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_SALTON_DIRT_BIKE", 1);
		if (TASK::DOES_SCENARIO_GROUP_EXIST("Observatory_Bikers") && !TASK::IS_SCENARIO_GROUP_ENABLED("Observatory_Bikers"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("Observatory_Bikers", 1);
		}
	}
}

void func_609(int iParam0)//Position - 0x3E357
{
	if (iParam0 == 1)
	{
		GlobalFunc_7108(&iLocal_351);
		GlobalFunc_7108(&(uLocal_668[0]));
		GlobalFunc_7108(&(uLocal_668[1]));
		GlobalFunc_7108(&iLocal_863);
	}
	else
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GlobalFunc_7108(&iLocal_351);
		}
		else
		{
			GlobalFunc_190(&iLocal_351);
		}
		GlobalFunc_190(&(uLocal_668[0]));
		GlobalFunc_190(&(uLocal_668[1]));
		GlobalFunc_190(&iLocal_863);
	}
}

void func_610()//Position - 0x3E3BD
{
	if (iLocal_692 == 0 || iLocal_692 == 1)
	{
		if (GlobalFunc_115(uLocal_668[iLocal_692]) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_668[iLocal_692]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_668[iLocal_692]);
		}
	}
	VEHICLE::REMOVE_VEHICLE_RECORDING(500, "Ext1_BikeRace");
}

void func_611()//Position - 0x3E410
{
	if (GlobalFunc_115(iLocal_343))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_343, "rcm_extreme1", "es_1_rcm_dom_upside_down_base", 3))
		{
			TASK::STOP_ANIM_TASK(iLocal_343, "rcm_extreme1", "es_1_rcm_dom_upside_down_base", -1056964608);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_343, "rcm_extreme1", "es_1_rcm_dom_upside_down_fidget_01", 3))
		{
			TASK::STOP_ANIM_TASK(iLocal_343, "rcm_extreme1", "es_1_rcm_dom_upside_down_fidget_01", -1056964608);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_343, "rcm_extreme1", "es_1_rcm_dom_upside_down_fidget_02", 3))
		{
			TASK::STOP_ANIM_TASK(iLocal_343, "rcm_extreme1", "es_1_rcm_dom_upside_down_fidget_02", -1056964608);
		}
	}
}



void func_614()//Position - 0x3E4BC
{
	if (iLocal_167 == 2 && CUTSCENE::HAS_CUTSCENE_LOADED())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
}

void func_615(bool bParam0, bool bParam1)//Position - 0x3E4D8
{
	if (bParam0)
	{
		func_616(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_258(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_616(bool bParam0, int iParam1, int iParam2)//Position - 0x3E50B
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
			func_246(iParam1, iParam2, 1, 1);
		}
	}
}



void func_619(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x3E629
{
	GlobalFunc_7198(uParam0, iParam1);
	GlobalFunc_8623(uParam0, bParam2);
	GlobalFunc_7209(uParam0, bParam3);
}








void func_627()//Position - 0x3E75F
{
	iLocal_170 = 0;
	HUD::REQUEST_ADDITIONAL_TEXT("EXT1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	iLocal_339[0] = joaat("maverick");
	iLocal_339[1] = joaat("scorcher");
	iLocal_336[0] = joaat("s_m_y_pilot_01");
	iLocal_336[1] = joaat("a_c_retriever");
	iLocal_663 = joaat("p_parachute_fallen_s");
	Local_628 = { Local_631 };
	Local_628.f_2 = (Local_628.f_2 + 65f);
	Local_555[0 /*3*/] = { -177.9496f, 1290.79f, 302.1454f };
	Local_555[1 /*3*/] = { -165.5742f, 1291.465f, 301.7969f };
	Local_555[2 /*3*/] = { -149.0811f, 1298.51f, 300.5185f };
	Local_555[3 /*3*/] = { -138.3162f, 1304.683f, 299.2527f };
	Local_555[4 /*3*/] = { -127.903f, 1312.146f, 297.2072f };
	Local_555[5 /*3*/] = { -115.4994f, 1316.745f, 294.7481f };
	Local_555[6 /*3*/] = { -105.6817f, 1316.49f, 292.3575f };
	Local_555[7 /*3*/] = { -81.3657f, 1312.512f, 286.1825f };
	Local_555[8 /*3*/] = { -67.1832f, 1310.346f, 282.2675f };
	Local_555[9 /*3*/] = { -54.8578f, 1314.416f, 279.2725f };
	Local_555[10 /*3*/] = { -40.8436f, 1319.59f, 275.9793f };
	Local_555[11 /*3*/] = { -24.2113f, 1323.79f, 272.6355f };
	Local_555[12 /*3*/] = { -14.2087f, 1321.746f, 270.524f };
	Local_555[13 /*3*/] = { -0.2958f, 1312.838f, 267.7775f };
	Local_555[14 /*3*/] = { 19.9014f, 1296.956f, 264.3661f };
	Local_555[15 /*3*/] = { 29.7225f, 1291.12f, 262.8754f };
	Local_555[16 /*3*/] = { 40.4001f, 1288.338f, 261.0924f };
	Local_555[17 /*3*/] = { 55.054f, 1289.589f, 258.9505f };
	Local_555[18 /*3*/] = { 69.2492f, 1289.192f, 256.9763f };
	Local_555[19 /*3*/] = { 78.0711f, 1286.044f, 255.7971f };
	Local_555[20 /*3*/] = { 85.8352f, 1281.176f, 254.9151f };
	Local_555[21 /*3*/] = { 108.1321f, 1261.061f, 252.7032f };
	Local_555[22 /*3*/] = { 111.7998f, 1258.09f, 252.2282f };
	Local_671[0 /*3*/] = { 504.8605f, 5551.601f, 780.0875f };
	Local_671[1 /*3*/] = { 504.236f, 5554.37f, 780.6018f };
	fLocal_678[0] = 139.3603f;
	fLocal_678[1] = 144.6449f;
	Local_681[0 /*3*/] = { -867.0817f, 5258.536f, 85.0576f };
	Local_681[1 /*3*/] = { -867.3555f, 5256.46f, 85.0412f };
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	if (!GlobalFunc_Is_Mission_Retry())
	{
		Global_Mission_Fail_State.f_12[0] = -1;
		Global_Mission_Fail_State.f_12[1] = 0;
		Global_Mission_Fail_State.f_12[2] = 0;
	}
	uLocal_864 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(302.9516f, 1297.765f, -189.9982f) - Vector(40f, 40f, 40f), Vector(302.9516f, 1297.765f, -189.9982f) + Vector(40f, 40f, 40f), 0, 1, 1, 1);
	TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_VEHICLE_SALTON_DIRT_BIKE", 0);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("Observatory_Bikers") && TASK::IS_SCENARIO_GROUP_ENABLED("Observatory_Bikers"))
	{
		TASK::SET_SCENARIO_GROUP_ENABLED("Observatory_Bikers", 0);
	}
	func_403("EXTREME_01_INTRO", 1);
}

void func_628()//Position - 0x3EB14
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
		func_608(0, 0, 1);
	}
	func_619(&Local_102, 0, 0, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}






















