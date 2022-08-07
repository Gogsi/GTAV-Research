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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = -1;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 1000;
	var uLocal_45 = 1000;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	struct<4> Local_51[10];
	bool bLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	struct<61> Local_110 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	char* sLocal_175 = NULL;
	char* sLocal_176 = NULL;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<3> Local_180 = { 0, 0, 0 } ;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	struct<2> Local_196 = { 0, 0 } ;
	struct<3> Local_198 = { 0, 0, 0 } ;
	float fLocal_201 = 0f;
	struct<2> Local_202 = { 0, 0 } ;
	struct<3> Local_204 = { 0, 0, 0 } ;
	float fLocal_207 = 0f;
	var uLocal_208 = 0;
	var uLocal_209[5] = { 0, 0, 0, 0, 0 };
	struct<3> Local_215[5];
	float fLocal_231[5] = { 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_237[5];
	int iLocal_253[5] = { 0, 0, 0, 0, 0 };
	int iLocal_259[3] = { 0, 0, 0 };
	struct<3> Local_263[3];
	float fLocal_273[3] = { 0f, 0f, 0f };
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	struct<3> Local_282 = { 0, 0, 0 } ;
	float fLocal_285 = 0f;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	struct<3> Local_290 = { 0, 0, 0 } ;
	float fLocal_293 = 0f;
	int iLocal_294 = 0;
	struct<3> Local_295 = { 0, 0, 0 } ;
	float fLocal_298 = 0f;
	int iLocal_299 = 0;
	struct<3> Local_300 = { 0, 0, 0 } ;
	float fLocal_303 = 0f;
	struct<3> Local_304 = { 0, 0, 0 } ;
	float fLocal_307 = 0f;
	float fLocal_308 = 0f;
	float fLocal_309 = 0f;
	float fLocal_310 = 0f;
	int iLocal_311 = 0;
	char* sLocal_312 = NULL;
	char* sLocal_313 = NULL;
	char* sLocal_314 = NULL;
	int iLocal_315 = 0;
	struct<3> Local_316 = { 0, 0, 0 } ;
	struct<3> Local_319 = { 0, 0, 0 } ;
	float fLocal_322 = 0f;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	struct<3> Local_325 = { 0, 0, 0 } ;
	struct<3> Local_328 = { 0, 0, 0 } ;
	struct<3> Local_331 = { 0, 0, 0 } ;
	struct<3> Local_334 = { 0, 0, 0 } ;
	float fLocal_337 = 0f;
	struct<3> Local_338 = { 0, 0, 0 } ;
	struct<3> Local_341 = { 0, 0, 0 } ;
	float fLocal_344 = 0f;
	var uLocal_345 = 16;
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
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	char* sLocal_514[4] = { NULL, NULL, NULL, NULL };
	int iLocal_519 = 0;
	char* sLocal_520[6] = { NULL, NULL, NULL, NULL, NULL, NULL };
	int iLocal_527 = 0;
	char* sLocal_528[5] = { NULL, NULL, NULL, NULL, NULL };
	int iLocal_534 = 0;
	char* sLocal_535[3] = { NULL, NULL, NULL };
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	struct<3> Local_545 = { 0, 0, 0 } ;
	float fLocal_548 = 0f;
	int iLocal_549 = 0;
	int iLocal_550 = 0;
	struct<3> Local_551 = { 0, 0, 0 } ;
	float fLocal_554 = 0f;
	char* sLocal_555 = NULL;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	struct<3> Local_559 = { 0, 0, 0 } ;
	float fLocal_562 = 0f;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	bool bLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	var uLocal_574 = 15;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	float fLocal_630 = 0f;
	var uLocal_631 = 0;
	int iLocal_632 = 0;
	struct<3> Local_633 = { 0, 0, 0 } ;
	float fLocal_636 = 0f;
	struct<3> Local_637 = { 0, 0, 0 } ;
	struct<3> Local_640 = { 0, 0, 0 } ;
	float fLocal_643 = 0f;
	int iLocal_644 = 0;
	var uLocal_645 = 0;
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
	uLocal_94 = GlobalFunc_4946(56);
	uLocal_95 = GlobalFunc_4946(57);
	iLocal_96 = GlobalFunc_4946(59);
	iLocal_97 = joaat("pranger");
	iLocal_101 = 1;
	iLocal_102 = 65;
	iLocal_103 = 49;
	iLocal_104 = 64;
	uLocal_108 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_109 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	sLocal_175 = "rcmminute3glances";
	sLocal_176 = "rcmminute3panic";
	Local_177 = { 423.5757f, 6478.869f, 32.81561f };
	Local_180 = { 250f, 250f, 250f };
	fLocal_183 = 35f;
	fLocal_184 = 45f;
	iLocal_187 = joaat("prop_barn_door_l");
	iLocal_188 = joaat("prop_barn_door_r");
	iLocal_192 = 1;
	iLocal_193 = -1;
	iLocal_194 = -1;
	iLocal_195 = -1;
	Local_198 = { 426.96f, 6513.8f, 27.72f };
	fLocal_201 = -108.29f;
	Local_204 = { 429.98f, 6470.58f, 28.78f };
	fLocal_207 = -126.05f;
	iLocal_277 = joaat("s_m_m_migrant_01");
	iLocal_278 = joaat("s_f_y_migrant_01");
	iLocal_279 = 56;
	iLocal_280 = 57;
	Local_282 = { 416.4f, 6499.5f, 28f };
	fLocal_285 = 170.4f;
	iLocal_286 = joaat("tractor2");
	iLocal_289 = joaat("blazer");
	Local_290 = { 422.357f, 6486.789f, 27.7595f };
	fLocal_293 = 83.28f;
	Local_295 = { -300.739f, 6212.611f, 30.3998f };
	fLocal_298 = 249.7937f;
	Local_300 = { 430.01f, 6467.49f, 28.41f };
	fLocal_303 = 50.92f;
	Local_304 = { 427.6566f, 6469.384f, 28.4275f };
	fLocal_307 = 0.0014f;
	fLocal_308 = 0.0015f;
	fLocal_309 = 0.3467f;
	fLocal_310 = 0.938f;
	sLocal_312 = "min3_JandJ01";
	sLocal_313 = "min3_JandJ02";
	Local_316 = { 409.9579f, 6488.018f, 25.74981f };
	Local_319 = { 151.1169f, 6485.835f, 31.62708f };
	fLocal_322 = 50f;
	Local_325 = { 144.3693f, 6368.498f, 25.5296f };
	Local_328 = { 489.0215f, 6573.715f, 35.05915f };
	Local_331 = { 443.0434f, 6456.974f, 26.78327f };
	Local_334 = { 422.0196f, 6474.672f, 30.81335f };
	fLocal_337 = 17f;
	Local_338 = { 444.2253f, 6456.485f, 26.76852f };
	Local_341 = { 420.5262f, 6475.384f, 29.81267f };
	fLocal_344 = 10f;
	iLocal_510 = 1;
	iLocal_511 = 1;
	iLocal_541 = 1;
	iLocal_544 = joaat("tornado3");
	Local_545 = { 57f, 6463.62f, 31.11f };
	fLocal_548 = 134.03f;
	iLocal_550 = joaat("a_m_o_salton_01");
	Local_551 = { 55.26922f, 6461.805f, 31.39414f };
	fLocal_554 = 310.2723f;
	sLocal_555 = "BREAKDOWN_IDLE_B";
	iLocal_558 = joaat("towtruck");
	Local_559 = { 52.61f, 6458.64f, 31.37f };
	fLocal_562 = 135.1f;
	iLocal_563 = joaat("s_m_m_autoshop_02");
	iLocal_569 = -1;
	iLocal_626 = 1;
	fLocal_630 = 0f;
	iLocal_632 = -1;
	Local_633 = { -297.7666f, 6214.284f, 30.3288f };
	fLocal_636 = 237.7338f;
	Local_637 = { -299.5022f, 6211.962f, 29.45011f };
	Local_640 = { -305.5608f, 6211.881f, 32.47858f };
	fLocal_643 = 4f;
	Local_110 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_110);
	uLocal_171 = func_577();
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("MM3_FAIL");
		GlobalFunc_10539(1);
		func_550();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 0)
		{
			Global_68490 = 1;
			iLocal_93 = 0;
			while (!func_538(&Local_110))
			{
				SYSTEM::WAIT(0);
			}
			GlobalFunc_4923(&Local_110, 0, 1);
			Global_68490 = 0;
		}
	}
	GlobalFunc_9621(56, 2, 0);
	GlobalFunc_9621(57, 2, 0);
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_MMB", 0);
		SYSTEM::WAIT(0);
		func_519(Local_110.f_9, 0, 0, 0, 0, 0);
		func_518();
		func_517();
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_172)
			{
				case 0:
					func_440();
					break;
				
				case 1:
					func_410();
					break;
				
				case 2:
					func_396();
					break;
				
				case 3:
					func_373();
					break;
				
				case 4:
					func_369();
					break;
				
				case 5:
					func_365();
					break;
				
				case 6:
					func_292();
					break;
				
				case 7:
					func_243();
					break;
				
				case 8:
					func_46();
					break;
				
				case 9:
					func_38();
					break;
				}
		}
		if (((iLocal_172 != 9 && iLocal_172 != 0) && iLocal_172 != 1) && iLocal_172 != 2)
		{
			func_37(Local_110.f_28[0]);
			func_36(Local_110.f_28[0]);
			func_1();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 5)
			{
				func_37(uLocal_209[iVar0]);
				func_36(uLocal_209[iVar0]);
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				func_37(iLocal_259[iVar0]);
				func_36(iLocal_259[iVar0]);
				iVar0++;
			}
		}
	}
}

void func_1()//Position - 0x567
{
	bool bVar0;
	var uVar1;
	
	if (!iLocal_172 == 9)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_110.f_28[0]))
		{
			if (((!GlobalFunc_4947(Local_110.f_35[1]) || GlobalFunc_8324(Local_110.f_28[0], 0, 0, 0, 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_110.f_35[1], 0, 2)) || (PED::IS_PED_BEING_JACKED(Local_110.f_28[0]) && PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())))
			{
				TASK::TASK_SMART_FLEE_PED(Local_110.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				func_22(Local_110.f_28[0]);
			}
			else if (iLocal_644 == 0)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_110.f_35[1], 1))
				{
					bVar0 = false;
					if (GlobalFunc_111())
					{
						bVar0 = true;
					}
					else if (GlobalFunc_663("MIN3_06", 0, 0))
					{
						bVar0 = GlobalFunc_10618(&uLocal_345, "MIN3AUD", "MIN3_STEAL", 8, 1, 0, 0);
					}
					else
					{
						bVar0 = GlobalFunc_10618(&uLocal_345, "MIN3AUD", "MIN3_STEAL", 8, 0, 0, 0);
					}
					if (bVar0)
					{
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000);
						TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(Local_110.f_28[0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						iLocal_644 = 1;
					}
				}
				else if (func_2(Local_110.f_35[1]))
				{
					TASK::TASK_WANDER_STANDARD(Local_110.f_28[0], 1193033728, 0);
					iLocal_644 = 1;
				}
			}
		}
	}
}

int func_2(int iParam0)//Position - 0x6C6
{
	int iVar0;
	
	iVar0 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 5f, 0f), 1.5f, 0, 4);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!iVar0 == iParam0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_STOPPED(iVar0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}




















void func_22(int iParam0)//Position - 0xF65
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam0 == Local_110.f_28[0])
		{
			if (PED::IS_PED_INJURED(iParam0))
			{
				iLocal_173 = 1;
			}
			else if ((PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_STEALTH_KILLED(iParam0)) || PED::WAS_PED_KILLED_BY_TAKEDOWN(iParam0))
			{
				iLocal_173 = 1;
			}
			else
			{
				iLocal_173 = 3;
			}
		}
		else if (PED::IS_PED_INJURED(iParam0))
		{
			if (bLocal_570)
			{
				iLocal_173 = 6;
			}
			else
			{
				iLocal_173 = 2;
			}
		}
		else if ((PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_STEALTH_KILLED(iParam0)) || PED::WAS_PED_KILLED_BY_TAKEDOWN(iParam0))
		{
			iLocal_173 = 2;
		}
		else
		{
			iLocal_173 = 4;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(uLocal_209[iVar0]))
			{
				if (!PED::IS_PED_FLEEING(uLocal_209[iVar0]))
				{
					TASK::TASK_SMART_FLEE_PED(uLocal_209[iVar0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
			}
			iVar0++;
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_196) && GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_COMBAT_PED(Local_196, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
		func_25();
		GlobalFunc_4956();
		iLocal_174 = 0;
		iLocal_172 = 9;
	}
}



void func_25()//Position - 0x10AE
{
	GlobalFunc_846(&(Local_196.f_1));
	GlobalFunc_846(&(Local_202.f_1));
}











void func_36(int iParam0)//Position - 0x1502
{
	if (!iLocal_172 == 9)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				func_22(iParam0);
			}
		}
	}
}

void func_37(int iParam0)//Position - 0x1542
{
	if (!iLocal_172 == 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (PED::IS_PED_INJURED(iParam0))
			{
				func_22(iParam0);
			}
		}
	}
}

void func_38()//Position - 0x156B
{
	char* sVar0;
	
	switch (iLocal_174)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			func_25();
			if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_28[0]))
			{
				if (PED::IS_PED_INJURED(Local_110.f_28[0]))
				{
					iLocal_173 = 1;
				}
			}
			switch (iLocal_173)
			{
				case 0:
					break;
				
				case 1:
					sVar0 = "MIN3_FAIL1";
					break;
				
				case 2:
					sVar0 = "MIN3_FAIL2";
					break;
				
				case 3:
					sVar0 = "MIN3_FAIL3";
					break;
				
				case 4:
					sVar0 = "MIN3_FAIL4";
					break;
				
				case 5:
					sVar0 = "MIN3_FAIL5";
					break;
				
				case 6:
					sVar0 = "MIN3_FAIL8";
					break;
			}
			AUDIO::TRIGGER_MUSIC_EVENT("MM3_FAIL");
			if (iLocal_173 == 0)
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sVar0, 1);
			}
			iLocal_174 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_39();
				func_550();
			}
			break;
	}
}

void func_39()//Position - 0x1646
{
	int iVar0;
	
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_208);
	GlobalFunc_69(&Local_196);
	GlobalFunc_69(&Local_202);
	GlobalFunc_69(&(Local_110.f_28[0]));
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		GlobalFunc_69(&(uLocal_209[iVar0]));
		iVar0++;
	}
	GlobalFunc_6692(&iLocal_281);
	GlobalFunc_6692(&iLocal_288);
	GlobalFunc_6692(&iLocal_299);
	GlobalFunc_2346(&iLocal_185);
	GlobalFunc_2346(&iLocal_186);
}







void func_46()//Position - 0x1831
{
	switch (iLocal_174)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			func_25();
			GlobalFunc_4956();
			GlobalFunc_200(&uLocal_345, 5);
			GlobalFunc_200(&uLocal_345, 4);
			AUDIO::TRIGGER_MUSIC_EVENT("MM3_STOP");
			RECORDING::_0x293220DA1B46CEBC(5f, 4f, 1);
			iLocal_174 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10630(&uLocal_345, "MIN3AUD", "MIN3_KILL", "MIN3_KILL_2", 8, 0, 0))
				{
					iLocal_174 = 4;
				}
			}
			break;
		
		case 4:
			if (!GlobalFunc_111())
			{
				func_47();
			}
			break;
	}
}

void func_47()//Position - 0x18B7
{
	if (iLocal_571 && iLocal_572)
	{
		GlobalFunc_553(783);
	}
	if (iLocal_573)
	{
		GlobalFunc_553(784);
	}
	func_48(94, 1);
	func_550();
}

void func_48(int iParam0, bool bParam1)//Position - 0x18EC
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
	GlobalFunc_9520(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	func_76();
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




























void func_76()//Position - 0x2C91
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
				if (GlobalFunc_10911(iVar1, 14, iVar2))
				{
					func_77(iVar1, 14, iVar2);
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

int func_77(int iParam0, int iParam1, int iParam2)//Position - 0x2D52
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
	if (!GlobalFunc_10911(iParam0, iParam1, iParam2))
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
				func_77(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_77(iParam0, 14, uVar20[iVar18]))
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
	if (GlobalFunc_11033(iParam0, iVar0, &iVar46, 0))
	{
		func_80(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11031(iParam0, iVar0, &iVar46))
	{
		func_80(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}



int func_80(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2FD2
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
				iVar5 = GlobalFunc_6694(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6694(iParam0, 9);
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
							GlobalFunc_2364(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11220(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_80(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
								iVar3 = GlobalFunc_11220(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_80(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, GlobalFunc_11032(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11033(iParam0, iVar10, &iVar4, 1))
							{
								func_80(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_80(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_80(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_80(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_80(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_80(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_80(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_2364(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11220(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_80(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_2364(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11220(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_80(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11220(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_80(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (GlobalFunc_11033(iParam0, iVar10, &iVar4, 0))
		{
			func_80(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11031(iParam0, iVar10, &iVar4))
		{
			func_80(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}



































































































































































void func_243()//Position - 0x262A8
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	
	if (func_290())
	{
		return;
	}
	func_287();
	func_286();
	func_282();
	func_279();
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_556) && !ENTITY::DOES_ENTITY_EXIST(iLocal_557))
	{
		func_277();
	}
	func_275();
	GlobalFunc_2216(Local_202.f_1, Local_202, 250f, 1061158912, 0);
	func_273();
	bVar0 = false;
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
	{
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_202, 2f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_202, 2f);
		bVar0 = true;
	}
	bVar1 = false;
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_196))
	{
		TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(Local_196, 2f);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(Local_196, 2f);
		bVar1 = true;
	}
	if (bVar0 && bVar1)
	{
		fVar2 = GlobalFunc_4951(Local_202, PLAYER::PLAYER_PED_ID());
		fVar3 = GlobalFunc_4951(Local_196, PLAYER::PLAYER_PED_ID());
		if (fVar2 < fVar3)
		{
			GlobalFunc_10693(&uLocal_35, Local_202, 0, 0, 1, 1, 1);
		}
		else
		{
			GlobalFunc_10693(&uLocal_35, Local_196, 0, 0, 1, 1, 1);
		}
	}
	else if (bVar0)
	{
		GlobalFunc_10693(&uLocal_35, Local_202, 0, 0, 1, 1, 1);
	}
	else if (bVar1)
	{
		GlobalFunc_10693(&uLocal_35, Local_196, 0, 0, 1, 1, 1);
	}
	if (iLocal_626)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_627)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_STA");
			iLocal_626 = 0;
		}
	}
	if (func_244())
	{
		return;
	}
}

int func_244()//Position - 0x263D7
{
	float fVar0;
	
	fVar0 = 0f;
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_202) || !ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_202, 17))
		{
			fVar0 = GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_202);
			iLocal_173 = 5;
		}
	}
	if (fVar0 > 250f)
	{
		func_25();
		GlobalFunc_4935();
		iLocal_174 = 0;
		iLocal_172 = 9;
		return 1;
	}
	return 0;
}





























void func_273()//Position - 0x273DA
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_202, Local_338, Local_341, fLocal_344, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(Local_202, 0))
		{
			PED::SET_PED_CAPSULE(Local_202, 0.35f);
		}
	}
}


void func_275()//Position - 0x27575
{
	var uVar0;
	
	if (GlobalFunc_4947(iLocal_556))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_549))
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_550))
			{
				iLocal_549 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_556, 4, iLocal_550, 0, 1, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_549, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_557))
		{
			if (GlobalFunc_4947(iLocal_543))
			{
				if (iLocal_564)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_556, 1) < 100f)
					{
						if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_557) && !GlobalFunc_6964(iLocal_557, 242628503))
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_556, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_543, 0);
							PED::SET_PED_CAN_BE_TARGETTED(iLocal_557, 0);
							VEHICLE::ATTACH_VEHICLE_TO_TOW_TRUCK(iLocal_556, iLocal_543, -1, 0f, 1.5f, 0f);
							VEHICLE::SET_VEHICLE_TOW_TRUCK_ARM_POSITION(iLocal_556, 0.5f);
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_556, 41.5323f, 6429.813f, 30.3523f, 10f, 0, iLocal_558, 17563813, 4f, 10f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_556, 10f, 786597);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_557, uVar0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						}
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_558, 1);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_556, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_558);
					VEHICLE::SET_VEHICLE_TOW_TRUCK_ARM_POSITION(iLocal_556, 0f);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_556, 1);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_544, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_544);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_543, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_543, 3);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_543, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_543, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_563);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_550);
					iLocal_564 = 1;
				}
			}
			else if (STREAMING::HAS_MODEL_LOADED(iLocal_544))
			{
				iLocal_543 = VEHICLE::CREATE_VEHICLE(iLocal_544, Local_545, fLocal_548, 1, 1);
			}
		}
		else if (STREAMING::HAS_MODEL_LOADED(iLocal_563))
		{
			iLocal_557 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_556, 4, iLocal_563, -1, 1, 1);
		}
	}
	else
	{
		func_277();
		if (STREAMING::HAS_MODEL_LOADED(iLocal_558))
		{
			iLocal_556 = VEHICLE::CREATE_VEHICLE(iLocal_558, Local_559, fLocal_562, 1, 1);
		}
	}
}


void func_277()//Position - 0x27791
{
	GlobalFunc_356(iLocal_558);
	GlobalFunc_356(iLocal_563);
	GlobalFunc_356(iLocal_544);
	GlobalFunc_356(iLocal_550);
	GlobalFunc_69(&iLocal_549);
	GlobalFunc_6692(&iLocal_543);
}


void func_279()//Position - 0x277E5
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = (MISC::GET_GAME_TIMER() - iLocal_540);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_280())
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_259[iVar0]))
			{
				if (!PED::IS_PED_FLEEING(iLocal_259[iVar0]) && iVar1 > iVar0 * 1000 + 5000)
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_259[iVar0]))
					{
						PED::SET_PED_PANIC_EXIT_SCENARIO(iLocal_259[iVar0], ENTITY::GET_ENTITY_COORDS(iLocal_259[iVar0], 1));
					}
					if (!func_280())
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_259[iVar0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

int func_280()//Position - 0x27886
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (GlobalFunc_4947(iVar0))
	{
		if (GlobalFunc_4568(iVar0, 422.5688f, 6474.531f, 27.8112f, 7f))
		{
			return 1;
		}
	}
	return 0;
}


void func_282()//Position - 0x278F0
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	iVar1 = (MISC::GET_GAME_TIMER() - iLocal_540);
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(100, 300);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(uLocal_209[iVar0]))
		{
			if ((!PED::IS_PED_FLEEING(uLocal_209[iVar0]) && !GlobalFunc_6964(uLocal_209[iVar0], 242628503)) && iVar1 > (iVar0 * iVar2))
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar3);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_237[iVar0 /*3*/], 3f, 20000, 1048576000, 0, 1193033728);
				TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar3);
				if (PED::IS_PED_USING_ANY_SCENARIO(uLocal_209[iVar0]))
				{
					PED::SET_PED_PANIC_EXIT_SCENARIO(uLocal_209[iVar0], ENTITY::GET_ENTITY_COORDS(uLocal_209[iVar0], 1));
				}
				TASK::TASK_PERFORM_SEQUENCE(uLocal_209[iVar0], uVar3);
				TASK::CLEAR_SEQUENCE_TASK(&uVar3);
			}
			if (iLocal_253[iVar0] && iVar1 > iVar0 * 1500)
			{
				GlobalFunc_7090(uLocal_209[iVar0], 1);
				iLocal_253[iVar0] = 0;
			}
		}
		iVar0++;
	}
}




void func_286()//Position - 0x27C74
{
	int iVar0;
	
	if (GlobalFunc_4947(iLocal_299) && GlobalFunc_IsPedNotInjuredOrDead(Local_202))
	{
		if (GlobalFunc_6964(Local_202, -235832601) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_314))
		{
			if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_314, ENTITY::GET_ENTITY_COORDS(iLocal_299, 1), &iVar0))
			{
				if ((iVar0 > iLocal_315 && iLocal_510) && !iLocal_512)
				{
					if (((!TASK::GET_SCRIPT_TASK_STATUS(Local_202, -1273030092) == 1 && !TASK::GET_SCRIPT_TASK_STATUS(Local_202, -828834893) == 1) && !PED::IS_PED_FLEEING(Local_202)) && !TASK::GET_SCRIPT_TASK_STATUS(Local_202, 242628503) == 1)
					{
						TASK::SET_DRIVE_TASK_MAX_CRUISE_SPEED(Local_202, 15f);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_202, iLocal_299, PLAYER::PLAYER_PED_ID(), 8, 15f, 786468, 100f, 1f, 1);
						iLocal_510 = 0;
					}
				}
			}
		}
	}
}

void func_287()//Position - 0x27D4A
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() > iLocal_567 && func_289()) && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
	{
		if (!GlobalFunc_111() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
		{
			iVar0 = func_288();
			switch (iVar0)
			{
				case 1:
					if (iLocal_534 < 3)
					{
						if (GlobalFunc_10618(&uLocal_345, "MIN3AUD", sLocal_535[iLocal_534], 8, 0, 0, 0))
						{
							iLocal_534++;
							iLocal_567 = MISC::GET_GAME_TIMER() + 20000;
						}
					}
					break;
				
				case 0:
					if (iLocal_527 < 5)
					{
						if (GlobalFunc_10630(&uLocal_345, "MIN3AUD", "MIN3_CHASE", sLocal_528[iLocal_527], 8, 0, 0))
						{
							iLocal_527++;
							iLocal_567 = MISC::GET_GAME_TIMER() + 20000;
						}
					}
					break;
				}
			}
	}
}

int func_288()//Position - 0x27E1D
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 0f;
	fVar1 = 10f;
	iVar2 = 0;
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_202) && iLocal_534 < 3)
	{
		fVar0 = GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_202);
		if (fVar0 < fVar1)
		{
			fVar1 = fVar0;
			iVar2 = 1;
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_196) && iLocal_539 < 3)
	{
		fVar0 = GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_196);
		if (fVar0 < fVar1)
		{
			iVar2 = 2;
		}
	}
	return iVar2;
}

int func_289()//Position - 0x27E8C
{
	float fVar0;
	float fVar1;
	
	fVar0 = 0f;
	fVar1 = 9999.9f;
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
	{
		fVar1 = GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_202);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_196))
	{
		fVar0 = GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), Local_196);
	}
	if (fVar0 < fVar1)
	{
		fVar1 = fVar0;
	}
	if (fVar1 < 75f)
	{
		return 1;
	}
	return 0;
}

int func_290()//Position - 0x27EE7
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_202))
	{
		if (PED::IS_PED_INJURED(Local_202))
		{
			iLocal_174 = 0;
			iLocal_172 = 8;
			if (GlobalFunc_496(&uLocal_574, ENTITY::GET_ENTITY_COORDS(Local_202, 0)))
			{
				iLocal_573 = 1;
			}
			return 1;
		}
	}
	return 0;
}


void func_292()//Position - 0x27FDE
{
	int iVar0;
	
	if (func_290() || func_244())
	{
		return;
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
	{
		GlobalFunc_10693(&uLocal_35, Local_202, 0, 0, 1, 1, 1);
	}
	func_282();
	func_273();
	switch (iLocal_174)
	{
		case 0:
			GlobalFunc_846(&(Local_196.f_1));
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
			{
				if (((GlobalFunc_4947(iLocal_299) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_299, -1)) && !func_364()) && !func_280())
				{
					GlobalFunc_173(&uLocal_345, 4, Local_202, "JOE", 1, 1);
					if (ENTITY::IS_ENTITY_ON_SCREEN(Local_202) && (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 420.7328f, 6463.86f, 27.90358f, 5f) || GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 434.0566f, 6476.2f, 27.83386f, 10f)))
					{
						TASK::TASK_ENTER_VEHICLE(Local_202, iLocal_299, 20000, -1, 2f, 1, 0);
					}
					else
					{
						TASK::TASK_WARP_PED_INTO_VEHICLE(Local_202, iLocal_299, -1);
					}
					if (iLocal_626)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_FORA");
						iLocal_627 = MISC::GET_GAME_TIMER() + 5000;
					}
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					AUDIO::PREPARE_MUSIC_EVENT("MM3_TRACTOR");
					func_361(&uLocal_629, &uLocal_631, &uLocal_628, &fLocal_630);
					iLocal_174 = 1;
				}
				else
				{
					TASK::TASK_COMBAT_PED(Local_202, PLAYER::PLAYER_PED_ID(), 0, 16);
					if (iLocal_626)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_FORA");
						iLocal_627 = MISC::GET_GAME_TIMER() + 5000;
					}
					func_359();
					GlobalFunc_Checkpoint8(2, "Kill Joe", 1, 0, 0, 1);
					iLocal_172 = 7;
				}
			}
			break;
		
		case 1:
			if ((((GlobalFunc_IsPedNotInjuredOrDead(Local_202) && GlobalFunc_4947(iLocal_299)) && PED::IS_PED_IN_VEHICLE(Local_202, iLocal_299, 0)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_312)) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_313))
			{
				GlobalFunc_4956();
				if (GlobalFunc_10618(&uLocal_345, "MIN3AUD", "MIN3_T_BARN", 7, 0, 0, 0))
				{
					func_359();
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (GlobalFunc_4947(iVar0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Local_316, Local_319, fLocal_322, 0, 1, 0))
					{
						sLocal_314 = sLocal_313;
						iLocal_315 = 19;
					}
					else
					{
						sLocal_314 = sLocal_312;
						iLocal_315 = 37;
					}
					RECORDING::_0x293220DA1B46CEBC(3f, 0f, 0);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_202, iLocal_299, sLocal_314, 262144, 0, 4, -1, -1082130432, 0, 1073741824);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_299, 15f);
					func_277();
					iLocal_567 = MISC::GET_GAME_TIMER() + 20000;
					iLocal_540 = MISC::GET_GAME_TIMER();
					iLocal_541 = 1;
					iLocal_542 = MISC::GET_GAME_TIMER() + 5000;
					GlobalFunc_846(&(Local_202.f_1));
					Local_202.f_1 = GlobalFunc_5739(Local_202, 1, 0, 5);
					HUD::SET_BLIP_SCALE(Local_202.f_1, 1f);
					AUDIO::TRIGGER_MUSIC_EVENT("MM3_TRACTOR");
					iLocal_174 = 2;
				}
			}
			break;
		
		case 2:
			func_286();
			func_275();
			func_279();
			func_287();
			func_293();
			if (iLocal_626)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_627)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_STA");
					iLocal_626 = 0;
				}
			}
			if (iLocal_541 && MISC::GET_GAME_TIMER() > iLocal_542)
			{
				GlobalFunc_Checkpoint8(2, "Kill Joe", 1, 0, 0, 1);
				iLocal_541 = 0;
			}
			GlobalFunc_2216(Local_202.f_1, Local_202, 250f, 1061158912, 0);
			break;
	}
}

void func_293()//Position - 0x282EE
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_299))
	{
		if ((((((((!GlobalFunc_4947(iLocal_299) || FIRE::IS_ENTITY_ON_FIRE(iLocal_299)) || ENTITY::GET_ENTITY_HEALTH(iLocal_299) < 700) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_299) < 50f) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_299) < 50f) || func_296()) || func_295()) || GlobalFunc_6451(iLocal_299, &uLocal_629, &uLocal_631, &uLocal_628, &fLocal_630, 11, 5f)) || ENTITY::IS_ENTITY_IN_WATER(iLocal_299))
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
			{
				if (HUD::DOES_BLIP_EXIST(Local_202.f_1))
				{
					HUD::SET_BLIP_SCALE(Local_202.f_1, 0.7f);
				}
				else
				{
					Local_202.f_1 = GlobalFunc_5739(Local_202, 1, 0, 5);
				}
				PED::SET_PED_FLEE_ATTRIBUTES(Local_202, 65536, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(Local_202, 2, 0);
				TASK::TASK_SMART_FLEE_PED(Local_202, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			}
			iLocal_540 = MISC::GET_GAME_TIMER();
			iLocal_172 = 7;
			return;
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
	{
		if (PED::IS_PED_BEING_JACKED(Local_202) || !PED::IS_PED_IN_ANY_VEHICLE(Local_202, 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_202.f_1))
			{
				HUD::SET_BLIP_SCALE(Local_202.f_1, 0.7f);
			}
			else
			{
				Local_202.f_1 = GlobalFunc_5739(Local_202, 1, 0, 5);
			}
			TASK::TASK_SMART_FLEE_PED(Local_202, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
			if (GlobalFunc_4947(iLocal_299) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_299))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_299);
			}
			iLocal_512 = 1;
			iLocal_172 = 7;
		}
	}
}


int func_295()//Position - 0x2851E
{
	if (GlobalFunc_4947(iLocal_281))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_281, 2, 1000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_281, 3, 1000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_281, 0, 1000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_281, 1, 1000))
		{
			return 1;
		}
	}
	return 0;
}

int func_296()//Position - 0x28576
{
	int iVar0;
	
	if (iLocal_323)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_324)
		{
			return 1;
		}
	}
	else if (GlobalFunc_4947(iLocal_299) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_299))
	{
		iVar0 = 0;
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_299, 0, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_299, 1, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_299, 4, 0))
		{
			iVar0++;
		}
		if (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_299, 5, 0))
		{
			iVar0++;
		}
		if (iVar0 > 0)
		{
			iLocal_323 = 1;
			iLocal_324 = MISC::GET_GAME_TIMER() + 1000;
		}
	}
	return 0;
}































































void func_359()//Position - 0x2DA89
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_185))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_185, 0);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_187, 424.32f, 6477.74f, 30.79f, 0, 0f, 0);
		GlobalFunc_2295(&iLocal_185, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_186))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_186, 0);
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_188, 419.3f, 6471.71f, 30.74f, 0, 0f, 0);
		GlobalFunc_2295(&iLocal_186, 0);
	}
}


void func_361(var uParam0, var uParam1, var uParam2, float fParam3)//Position - 0x2DB2A
{
	*uParam0 = 0;
	*uParam1 = 0;
	*uParam2 = 0;
	*fParam3 = 0f;
}



int func_364()//Position - 0x2DBFA
{
	struct<3> Var0;
	
	if (GlobalFunc_4947(iLocal_299))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_299, 0f, 6f, 0f) };
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var0, 5f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_299, Local_331, Local_334, fLocal_337, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_365()//Position - 0x2DC47
{
	if (func_290())
	{
		return;
	}
	func_368();
	func_273();
	switch (iLocal_174)
	{
		case 0:
			GlobalFunc_846(&(Local_196.f_1));
			iLocal_540 = MISC::GET_GAME_TIMER();
			func_282();
			iLocal_565 = MISC::GET_GAME_TIMER() + 30000;
			iLocal_511 = 1;
			if (iLocal_626)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_FORA");
				iLocal_627 = MISC::GET_GAME_TIMER() + 5000;
			}
			iLocal_174 = 1;
			break;
		
		case 1:
			func_282();
			func_366(1);
			if (iLocal_626)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_627)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_STA");
					iLocal_626 = 0;
				}
			}
			break;
	}
}

bool func_366(int iParam0)//Position - 0x2DCDE
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return func_367(fLocal_184, iParam0);
	}
	return func_367(fLocal_183, iParam0);
}

int func_367(float fParam0, var uParam1)//Position - 0x2DD08
{
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_204, fParam0) || (uParam1 && MISC::GET_GAME_TIMER() > iLocal_565))
	{
		iLocal_174 = 0;
		iLocal_172 = 6;
		return 1;
	}
	return 0;
}

void func_368()//Position - 0x2DD41
{
	if (iLocal_519 < 6)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 408.3703f, 6485.697f, 25.78771f, 452.9941f, 6449.248f, 33.70824f, 50f, 0, 1, 0))
		{
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_202) && MISC::GET_GAME_TIMER() > iLocal_568)
			{
				GlobalFunc_5653(Local_202, sLocal_520[iLocal_519], "JOE", 24);
				iLocal_519++;
				iLocal_568 = MISC::GET_GAME_TIMER() + 10000;
			}
		}
	}
}

void func_369()//Position - 0x2DDBD
{
	func_372();
	func_368();
	switch (iLocal_174)
	{
		case 0:
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_196))
			{
				PED::SET_PED_RESET_FLAG(Local_196, 156, 1);
			}
			if (MISC::GET_GAME_TIMER() > iLocal_566)
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_196))
				{
					TASK::TASK_COMBAT_PED(Local_196, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				func_370();
				iLocal_540 = MISC::GET_GAME_TIMER();
				GlobalFunc_Checkpoint8(1, "Kill Josef", 0, 0, 0, 1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
				iLocal_174 = 1;
			}
			break;
		
		case 1:
			func_282();
			if (!GlobalFunc_IsPedNotInjuredOrDead(Local_196))
			{
				if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
				{
					if (!func_366(0))
					{
						GlobalFunc_4948(&uLocal_35, 0, 0);
						if (iLocal_511)
						{
							if (GlobalFunc_10630(&uLocal_345, "MIN3AUD", "MIN3_KILL", "MIN3_KILL_1", 8, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 10f, 0);
								iLocal_511 = 0;
								iLocal_174 = 0;
								iLocal_172 = 5;
							}
						}
					}
				}
				else
				{
					iLocal_174 = 0;
					iLocal_172 = 8;
				}
			}
			if (iLocal_626)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_627)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_STA");
					iLocal_626 = 0;
				}
			}
			if (GlobalFunc_115(Local_196) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_10693(&uLocal_35, Local_196, 0, 0, 1, 1, 1);
			}
			break;
	}
}

void func_370()//Position - 0x2DEE2
{
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
	{
		GlobalFunc_846(&(Local_202.f_1));
		Local_202.f_1 = GlobalFunc_5739(Local_202, 1, 0, 5);
		GlobalFunc_2269(&(Local_202.f_1), 405.69f, 6557.56f, 27.04f, 266.03f);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_196))
	{
		GlobalFunc_846(&(Local_196.f_1));
		Local_196.f_1 = GlobalFunc_5739(Local_196, 1, 0, 5);
		GlobalFunc_2269(&(Local_196.f_1), 405.69f, 6557.56f, 27.04f, 266.03f);
	}
}


void func_372()//Position - 0x2DF87
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_202))
	{
		if (PED::IS_PED_INJURED(Local_202))
		{
			GlobalFunc_846(&(Local_202.f_1));
			if (GlobalFunc_496(&uLocal_574, ENTITY::GET_ENTITY_COORDS(Local_202, 0)))
			{
				iLocal_573 = 1;
			}
		}
	}
}

void func_373()//Position - 0x2DFBE
{
	int iVar0;
	int iVar1;
	
	func_372();
	switch (iLocal_174)
	{
		case 0:
			PATHFIND::SET_GPS_DISABLED_ZONE(168.8945f, 6408.563f, 27.1361f, 401.467f, 6519.563f, 29.83689f);
			iLocal_567 = MISC::GET_GAME_TIMER() + 20000;
			iLocal_194 = MISC::GET_GAME_TIMER() + 2000;
			iLocal_195 = 0;
			iLocal_632 = -1;
			iLocal_644 = 0;
			func_395();
			RECORDING::_0x293220DA1B46CEBC(3f, 10f, 0);
			iLocal_174 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_111() || GlobalFunc_4569(&iLocal_632, 15000))
			{
				if (GlobalFunc_10630(&uLocal_345, "MIN3AUD", "MIN3_MANUEL", "MIN3_MANUEL_2", 7, 0, 0))
				{
					iLocal_174 = 2;
				}
			}
			break;
		
		case 2:
			func_393();
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_198, 1) > 100f)
			{
				func_391();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_198, Local_180, 0, 1, 0))
			{
				func_390();
				func_389();
				iLocal_174 = 3;
			}
			break;
		
		case 3:
			func_388();
			func_387();
			func_368();
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_198, 1) > 150f)
			{
				func_391();
			}
			else
			{
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_196) && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_198, 1) < 45f)
			{
				if (GlobalFunc_10618(&uLocal_345, "MIN3AUD", "MIN3_J_FARM", 7, 0, 0, 0))
				{
					RECORDING::_0x293220DA1B46CEBC(3f, 10f, 0);
					iLocal_174 = 4;
				}
			}
			break;
		
		case 4:
			func_368();
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_196))
			{
				PED::SET_PED_RESET_FLAG(Local_196, 156, 1);
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_198, 1) < 25f)
				{
					if (func_379(Local_196, 90f) || (func_379(Local_196, 0f) && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID())))
					{
						GlobalFunc_4956();
						if (GlobalFunc_10618(&uLocal_345, "MIN3AUD", "MIN3_T_FARM", 7, 0, 0, 0))
						{
							func_378(1500);
						}
					}
				}
				else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_198, 1) > 100f)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4956();
					}
				}
				else if (GlobalFunc_IsPedNotInjuredOrDead(uLocal_209[0]))
				{
					if (iLocal_569 > 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_569)
						{
							if (bLocal_570)
							{
								if (!GlobalFunc_111() && !PED::IS_PED_IN_COMBAT(Local_196, 0))
								{
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_209[0], 0);
									ENTITY::SET_ENTITY_HEALTH(uLocal_209[0], 110);
									PED::SET_PED_ACCURACY(Local_196, 100);
									TASK::TASK_COMBAT_PED(Local_196, uLocal_209[0], 0, 16);
								}
							}
							else
							{
								bLocal_570 = GlobalFunc_10618(&uLocal_345, "MIN3AUD", "MIN3_REPLY", 7, 0, 0, 0);
							}
						}
					}
					else if (!GlobalFunc_111())
					{
						iLocal_569 = MISC::GET_GAME_TIMER() + 7500;
						GlobalFunc_173(&uLocal_345, 6, uLocal_209[0], "Min3Mexican0", 1, 1);
					}
				}
				if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
				{
					iLocal_173 = 6;
					iLocal_174 = 0;
					iLocal_172 = 9;
				}
			}
			break;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_281) && (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_281, PLAYER::PLAYER_PED_ID(), 1) || !GlobalFunc_115(iLocal_281))) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_198, 50f))
	{
		func_378(0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_196))
	{
		if (PED::IS_PED_INJURED(Local_196))
		{
			if (!func_366(0))
			{
				if (iLocal_511)
				{
					if (GlobalFunc_10630(&uLocal_345, "MIN3AUD", "MIN3_KILL", "MIN3_KILL_1", 8, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(3f, 10f, 0);
						iLocal_511 = 0;
						iLocal_174 = 0;
						iLocal_172 = 5;
					}
				}
			}
		}
		else if (GlobalFunc_8324(Local_196, 1, 0, 0, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_196, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_378(0);
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_110.f_28[0]))
	{
		if (!PED::IS_PED_FLEEING(Local_110.f_28[0]) && !PED::IS_PED_IN_ANY_VEHICLE(Local_110.f_28[0], 1))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_4956();
				if (GlobalFunc_10618(&uLocal_345, "MIN3AUD", "MIN3_THREAT", 7, 1, 0, 0))
				{
					TASK::TASK_SMART_FLEE_PED(Local_110.f_28[0], PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
			}
			else if (iLocal_192 && func_376(Local_110.f_28[0], 1126825984))
			{
				GlobalFunc_4956();
				if (GlobalFunc_10618(&uLocal_345, "MIN3AUD", "MIN3_AIM", 7, 1, 0, 0))
				{
					if (!GlobalFunc_6964(Local_110.f_28[0], -1146898486))
					{
						TASK::TASK_WANDER_STANDARD(Local_110.f_28[0], 1193033728, 0);
					}
					iLocal_192 = 0;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(Local_110.f_28[0], 0))
		{
			if (PED::IS_PED_STOPPED(Local_110.f_28[0]))
			{
				if (iLocal_193 == -1)
				{
					iLocal_193 = MISC::GET_GAME_TIMER() + 10000;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_193)
				{
					if (!GlobalFunc_6964(Local_110.f_28[0], -1146898486))
					{
						TASK::TASK_WANDER_STANDARD(Local_110.f_28[0], 1193033728, 0);
					}
				}
			}
			else if (iLocal_193 > -1)
			{
				iLocal_193 = -1;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_195 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_110.f_28[0]))
		{
			iVar0 = 0;
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				iVar0 = 1;
			}
			if (GlobalFunc_10618(&uLocal_345, "MIN3AUD", "MIN3_BUMP", 7, iVar0, 0, 0))
			{
				iLocal_195 = MISC::GET_GAME_TIMER() + 1000;
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_194 && GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_110.f_28[0], 15f))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(Local_110.f_28[0], 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar1 = 0;
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					iVar1 = 1;
				}
				if (GlobalFunc_10618(&uLocal_345, "MIN3AUD", "MIN3_FOLLOW", 7, iVar1, 0, 0))
				{
					iLocal_194 = MISC::GET_GAME_TIMER() + 1000;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_110.f_28[0], 100f, 100f, 2.5f, 0, 1, 0))
		{
			GlobalFunc_200(&uLocal_345, 3);
			GlobalFunc_132(&(Local_110.f_28[0]), 1, 0, 1);
		}
	}
}



int func_376(int iParam0, float fParam1)//Position - 0x2E5D6
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
				if (func_379(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


void func_378(int iParam0)//Position - 0x2E674
{
	iLocal_566 = (MISC::GET_GAME_TIMER() + iParam0);
	AUDIO::TRIGGER_MUSIC_EVENT("MM3_START_FORA");
	iLocal_626 = 1;
	iLocal_627 = MISC::GET_GAME_TIMER() + 5000;
	iLocal_174 = 0;
	iLocal_172 = 4;
}

bool func_379(int iParam0, float fParam1)//Position - 0x2E6A3
{
	return func_380(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_380(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2E6BB
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_386(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_51[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_383();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_51[iVar4 /*4*/].f_1 = iParam0;
		Local_51[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_6501(&(Local_51[iVar4 /*4*/]), Var1, iParam1, &(Local_51[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_51[iVar4 /*4*/].f_3) < iParam4);
}



int func_383()//Position - 0x2E96D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_51)
	{
		if ((Local_51[iVar0 /*4*/] == 0 && Local_51[iVar0 /*4*/].f_1 == 0) && Local_51[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}



int func_386(int iParam0, int iParam1)//Position - 0x2EA63
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_51)
	{
		if (Local_51[iVar0 /*4*/].f_1 == iParam0 && Local_51[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_387()//Position - 0x2EAA2
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_4947(iLocal_299) && GlobalFunc_4947(iLocal_281))
	{
		if (!iLocal_311 && !iLocal_287)
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_286, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_286);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_281);
			ENTITY::SET_ENTITY_COORDS(iLocal_299, Local_304, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_QUATERNION(iLocal_299, fLocal_307, fLocal_308, fLocal_309, fLocal_310);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_299, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_299, 1, 1);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_299, 1, 0, 0);
			iLocal_287 = 1;
			iLocal_311 = 1;
		}
	}
	if (!GlobalFunc_4947(iLocal_299))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_286))
		{
			iLocal_299 = VEHICLE::CREATE_VEHICLE(iLocal_286, Local_300, fLocal_303, 1, 1);
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
	{
		if (!GlobalFunc_6964(Local_202, 1237250926))
		{
			WEAPON::GIVE_WEAPON_TO_PED(Local_202, joaat("weapon_sawnoffshotgun"), -1, 1, 1);
			TASK::TASK_AIM_GUN_AT_COORD(Local_202, Local_263[0 /*3*/], -1, 0, 0);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_202, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_202, 1);
			PED::SET_PED_CONFIG_FLAG(Local_202, 116, 0);
			PED::SET_PED_CONFIG_FLAG(Local_202, 29, 0);
			PED::SET_PED_CONFIG_FLAG(Local_202, 177, 1);
			PED::SET_PED_SUFFERS_CRITICAL_HITS(Local_202, 0);
			PED::SET_PED_PROP_INDEX(Local_202, 1, 0, 0, false);
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(iLocal_279)))
	{
		Local_202 = PED::CREATE_PED(26, GlobalFunc_4946(iLocal_279), Local_204, fLocal_207, 1, 1);
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_259[iVar0]))
		{
			iVar1++;
			if (!GlobalFunc_6964(iLocal_259[iVar0], -1519143300) && !GlobalFunc_6964(iLocal_259[iVar0], 474215631))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_259[iVar0], Local_263[iVar0 /*3*/], 0, 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_259[iVar0], 1);
				TASK::SET_PED_PATH_CAN_USE_LADDERS(iLocal_259[iVar0], 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_259[iVar0], 0);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_259[iVar0], 4, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_259[iVar0], 1);
				if ((iVar0 % 2) == 0)
				{
					TASK::TASK_HANDS_UP(iLocal_259[iVar0], -1, 0, -1, 0);
				}
				else
				{
					TASK::TASK_COWER(iLocal_259[iVar0], -1);
				}
			}
		}
		else if (STREAMING::HAS_MODEL_LOADED(iLocal_278) && STREAMING::HAS_MODEL_LOADED(iLocal_277))
		{
			if (iVar0 < 2)
			{
				iLocal_259[iVar0] = PED::CREATE_PED(5, iLocal_278, Local_263[iVar0 /*3*/], fLocal_273[iVar0], 1, 1);
			}
			else
			{
				iLocal_259[iVar0] = PED::CREATE_PED(4, iLocal_277, Local_263[iVar0 /*3*/], fLocal_273[iVar0], 1, 1);
			}
		}
		iVar0++;
	}
	if (iVar1 == 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_278);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_277);
	}
	if (GlobalFunc_4947(iLocal_288))
	{
		if (!iLocal_294)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_288);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_289, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_289);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_312);
			TASK::REQUEST_WAYPOINT_RECORDING(sLocal_313);
			iLocal_294 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_289))
	{
		iLocal_288 = VEHICLE::CREATE_VEHICLE(iLocal_289, Local_290, fLocal_293, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_185))
	{
		if (!iLocal_189)
		{
			ENTITY::SET_ENTITY_HEADING(iLocal_185, -131.39f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_185, 1);
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_187, 424.32f, 6477.74f, 30.79f, 1, 0f, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_187);
			iLocal_189 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_187))
	{
		iLocal_185 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_187, 424.32f, 6477.74f, 30.79f, 1, 1, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_186))
	{
		if (!iLocal_190)
		{
			ENTITY::SET_ENTITY_HEADING(iLocal_186, -128.34f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_186, 1);
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_188, 419.3f, 6471.71f, 30.74f, 1, 0f, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_188);
			iLocal_190 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_188))
	{
		iLocal_186 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_188, 419.3f, 6471.71f, 30.74f, 1, 1, 0);
	}
}

void func_388()//Position - 0x2EE62
{
	int iVar0;
	var uVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(uLocal_209[iVar0]))
		{
			if (!GlobalFunc_6964(uLocal_209[iVar0], -1519143300) && !GlobalFunc_6964(uLocal_209[iVar0], 474215631))
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_209[iVar0], Local_215[iVar0 /*3*/], 0, 0, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_209[iVar0], 1);
				TASK::SET_PED_PATH_CAN_USE_LADDERS(uLocal_209[iVar0], 0);
				PED::SET_PED_CAN_BE_TARGETTED(uLocal_209[iVar0], 0);
				PED::SET_PED_FLEE_ATTRIBUTES(uLocal_209[iVar0], 4, 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_209[iVar0], 1);
				if ((iVar0 % 2) == 0)
				{
					TASK::TASK_HANDS_UP(uLocal_209[iVar0], -1, 0, -1, 0);
				}
				else
				{
					TASK::TASK_COWER(uLocal_209[iVar0], -1);
				}
			}
		}
		else if (STREAMING::HAS_MODEL_LOADED(iLocal_278) && STREAMING::HAS_MODEL_LOADED(iLocal_277))
		{
			if (iVar0 < 2)
			{
				uLocal_209[iVar0] = PED::CREATE_PED(5, iLocal_278, Local_215[iVar0 /*3*/], fLocal_231[iVar0], 1, 1);
			}
			else
			{
				uLocal_209[iVar0] = PED::CREATE_PED(4, iLocal_277, Local_215[iVar0 /*3*/], fLocal_231[iVar0], 1, 1);
			}
		}
		iVar0++;
	}
	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_175) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_176))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_196))
		{
			if (!PED::IS_PED_INJURED(Local_196))
			{
				if (!GlobalFunc_6964(Local_196, 242628503))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_196, 1);
					WEAPON::GIVE_WEAPON_TO_PED(Local_196, joaat("weapon_sawnoffshotgun"), -1, 1, 1);
					PED::SET_PED_ACCURACY(Local_196, 25);
					TASK::OPEN_SEQUENCE_TASK(&uVar1);
					TASK::TASK_PLAY_ANIM(0, sLocal_175, "0", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_175, "180", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_176, "-90", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_175, "90", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_176, "90", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_175, "-90", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_176, "180", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_175, "-180", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_176, "0", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, sLocal_176, "-180", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK::SET_SEQUENCE_TO_REPEAT(uVar1, 1);
					TASK::CLOSE_SEQUENCE_TASK(uVar1);
					TASK::TASK_PERFORM_SEQUENCE(Local_196, uVar1);
					TASK::CLEAR_SEQUENCE_TASK(&uVar1);
					GlobalFunc_173(&uLocal_345, 5, Local_196, "JOSEF", 1, 1);
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_196, Local_198, 0, 0, 1);
					PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_196, Local_198, 25f, 0, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_196, 1);
					PED::SET_PED_CONFIG_FLAG(Local_196, 116, 0);
					PED::SET_PED_CONFIG_FLAG(Local_196, 29, 0);
					PED::SET_PED_CONFIG_FLAG(Local_196, 177, 1);
					PED::SET_PED_PROP_INDEX(Local_196, 0, 0, 0, false);
					PED::SET_PED_PROP_INDEX(Local_196, 1, 0, 0, false);
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_312);
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_313);
				}
			}
		}
		else if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(iLocal_280)))
		{
			Local_196 = PED::CREATE_PED(26, GlobalFunc_4946(iLocal_280), Local_198, fLocal_201, 1, 1);
		}
	}
	if (!GlobalFunc_4947(iLocal_281))
	{
		if (STREAMING::HAS_MODEL_LOADED(iLocal_286))
		{
			iLocal_281 = VEHICLE::CREATE_VEHICLE(iLocal_286, Local_282, fLocal_285, 1, 1);
		}
	}
	if (GlobalFunc_4947(iLocal_288))
	{
		if (!iLocal_294)
		{
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_288);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_289, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_289);
			iLocal_294 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_289))
	{
		iLocal_288 = VEHICLE::CREATE_VEHICLE(iLocal_289, Local_290, fLocal_293, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_185))
	{
		if (!iLocal_190)
		{
			ENTITY::SET_ENTITY_HEADING(iLocal_185, -131.39f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_185, 1);
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_187, 424.32f, 6477.74f, 30.79f, 1, 0f, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_187);
			iLocal_190 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_187))
	{
		iLocal_185 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_187, 424.32f, 6477.74f, 30.79f, 1, 1, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_186))
	{
		if (!iLocal_189)
		{
			ENTITY::SET_ENTITY_HEADING(iLocal_186, -128.34f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_186, 1);
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(iLocal_188, 419.3f, 6471.71f, 30.74f, 1, 0f, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_188);
			iLocal_189 = 1;
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_188))
	{
		iLocal_186 = OBJECT::CREATE_OBJECT_NO_OFFSET(iLocal_188, 419.3f, 6471.71f, 30.74f, 1, 1, 0);
	}
}

void func_389()//Position - 0x2F2E5
{
	PED::SET_PED_NON_CREATION_AREA(Local_325, Local_328);
	uLocal_645 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_325, Local_328, 0, 1, 1, 1);
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_325, Local_328, 0, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_325, Local_328, 0, 1);
	MISC::CLEAR_AREA_OF_PEDS(Local_177, 500f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Local_177, 500f, 0, 0, 1, 1, 0);
}

void func_390()//Position - 0x2F350
{
	GlobalFunc_356(iLocal_278);
	GlobalFunc_356(iLocal_277);
	GlobalFunc_356(GlobalFunc_4946(iLocal_280));
	GlobalFunc_356(GlobalFunc_4946(iLocal_279));
	GlobalFunc_356(iLocal_286);
	GlobalFunc_356(iLocal_289);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_286, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_289, 1);
	GlobalFunc_356(iLocal_187);
	GlobalFunc_356(iLocal_188);
	PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &uLocal_208);
}

void func_391()//Position - 0x2F3B9
{
	if (iLocal_513 < 4 && INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_567)
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10630(&uLocal_345, "MIN3AUD", "MIN3_DRIVE", sLocal_514[iLocal_513], 8, 0, 0))
				{
					iLocal_513++;
					iLocal_567 = MISC::GET_GAME_TIMER() + 20000;
				}
			}
		}
	}
}


void func_393()//Position - 0x2F452
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_543))
	{
		if (GlobalFunc_4947(iLocal_543))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_544, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_544);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_543, 4, 0, 0);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_543, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_543, -1f);
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_543, 1);
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_544))
	{
		iLocal_543 = VEHICLE::CREATE_VEHICLE(iLocal_544, Local_545, fLocal_548, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_549))
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_549) && !GlobalFunc_6964(iLocal_549, -2017877118))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_550);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_549, 0);
			TASK::TASK_PLAY_ANIM(iLocal_549, sLocal_175, sLocal_555, 8f, -8f, -1, 9, 0, 0, 0, 0);
		}
	}
	else if (STREAMING::HAS_MODEL_LOADED(iLocal_550) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_175))
	{
		iLocal_549 = PED::CREATE_PED(4, iLocal_550, Local_551, fLocal_554, 1, 1);
	}
}


void func_395()//Position - 0x2F56A
{
	GlobalFunc_356(iLocal_544);
	GlobalFunc_356(iLocal_550);
}

void func_396()//Position - 0x2F582
{
	var uVar0;
	
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iLocal_191))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 1);
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 1);
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 1);
			}
			OBJECT::DELETE_OBJECT(&iLocal_191);
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_110.f_28[0]))
	{
		if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Manuel", 0))
		{
			GlobalFunc_6502(Local_110.f_28[0], Local_295);
			ENTITY::SET_ENTITY_HEADING(Local_110.f_28[0], fLocal_298);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			if ((GlobalFunc_4947(Local_110.f_35[1]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_110.f_35[1], -1)) && GlobalFunc_155(Local_110.f_35[1], Local_110.f_28[0], 25f))
			{
				TASK::TASK_ENTER_VEHICLE(0, Local_110.f_35[1], 20000, -1, 1f, 1, 0);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_110.f_35[1], 20f, 786469);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(Local_110.f_28[0], uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
	{
		RECORDING::_0x81CBAE94390F9F89();
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
	}
	else if (GlobalFunc_IsPedNotInjuredOrDead(Local_110.f_28[0]))
	{
		if (GlobalFunc_10630(&uLocal_345, "MIN3AUD", "MIN3_MANUEL", "MIN3_MANUEL_1", 7, 1, 0))
		{
			func_400(1, 0, 1, 1);
			GlobalFunc_4923(&Local_110, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110.f_28[0], 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_110.f_28[0], 1);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Local_110.f_28[0], 0);
			PED::SET_PED_CAN_BE_TARGETTED(Local_110.f_28[0], 0);
			func_389();
			if (GlobalFunc_115(Local_110.f_41[0]))
			{
				ENTITY::SET_ENTITY_COLLISION(Local_110.f_41[0], 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Local_110.f_41[0], 0);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_03_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("MINUTE_03_SCENE");
			}
			GlobalFunc_164("MIN3_06", 7500, 1);
			func_397();
			iLocal_174 = 0;
			iLocal_172 = 3;
		}
	}
}

void func_397()//Position - 0x2F7DA
{
	GlobalFunc_846(&(Local_202.f_1));
	Local_202.f_1 = GlobalFunc_2324(Local_204, 5, 0);
	HUD::SET_BLIP_COLOUR(Local_202.f_1, 1);
	HUD::SET_BLIP_SCALE(Local_202.f_1, 0.7f);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_202.f_1, "BLIP_ENEMY");
	GlobalFunc_846(&(Local_196.f_1));
	Local_196.f_1 = GlobalFunc_2324(Local_198, 5, 0);
	HUD::SET_BLIP_COLOUR(Local_196.f_1, 1);
	HUD::SET_BLIP_SCALE(Local_196.f_1, 0.7f);
	HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_196.f_1, "BLIP_ENEMY");
	HUD::SET_BLIP_ROUTE(Local_196.f_1, 1);
	GlobalFunc_2269(&(Local_202.f_1), 405.69f, 6557.56f, 27.04f, 266.03f);
	GlobalFunc_2269(&(Local_196.f_1), 405.69f, 6557.56f, 27.04f, 266.03f);
}



void func_400(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2F8DA
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
		if ((iLocal_47 != 0 && iLocal_47 != joaat("object")) && iLocal_47 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_47, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_47, 0);
				}
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}










void func_410()//Position - 0x2FBE5
{
	GlobalFunc_8535();
	switch (iLocal_174)
	{
		case 0:
			GlobalFunc_173(&uLocal_345, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			GlobalFunc_173(&uLocal_345, 3, Local_110.f_28[0], "MANUEL", 0, 1);
			func_434();
			iLocal_632 = -1;
			if (CAM::IS_SCREEN_FADED_IN() && GlobalFunc_115(Local_110.f_28[0]))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_110.f_28[0], 0f, 0f, 0f, 1, -1, 3000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.45f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.01f);
				CAM::SET_GAMEPLAY_HINT_FOV(25f);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
			}
			GlobalFunc_8536(24, 1);
			iLocal_174 = 1;
			break;
		
		case 1:
			if (GlobalFunc_10618(&uLocal_345, "MIN3AUD", "MIN3_INT_LI", 7, 0, 0, 0) || GlobalFunc_4569(&iLocal_632, 5000))
			{
				iLocal_174 = 2;
			}
			func_434();
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				iLocal_174 = 4;
			}
			func_434();
			break;
		
		case 4:
			if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
			{
				CUTSCENE::REQUEST_CUTSCENE("mmb_3_rcm", 8);
				while (!GlobalFunc_Has_Cutscene_Loaded())
				{
					SYSTEM::WAIT(0);
				}
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			GlobalFunc_8536(24, 0);
			func_411();
			break;
	}
}

void func_411()//Position - 0x2FD1E
{
	GlobalFunc_9623("mmb_3_rcm", 0);
	if (GlobalFunc_7961(1, 1093140480, 0))
	{
		func_425();
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_110.f_28[0]))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_110.f_28[0], "Manuel", 0, 0, 0);
			GlobalFunc_173(&uLocal_345, 3, Local_110.f_28[0], "MANUEL", 1, 1);
			TASK::TASK_CLEAR_LOOK_AT(Local_110.f_28[0]);
		}
		if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
			GlobalFunc_173(&uLocal_345, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 1, 1);
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))
			{
				iLocal_191 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 1, 0, 0, 0, 0);
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 0))
			{
				iLocal_191 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 1, 0, 0, 0, 0);
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 0))
			{
				iLocal_191 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 1, 0, 0, 0, 0);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 12, 0, 1);
				iLocal_191 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 1, 0, 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_191))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_191, "Trevors_weapon", 0, 0, 0);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_41[0]))
		{
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_110.f_41[0], "MMB_Chair", 0, 0, 0);
		}
		GlobalFunc_79(500, 0);
		GlobalFunc_9161();
		RECORDING::_0x48621C9FCA3EBD28(1);
		CUTSCENE::START_CUTSCENE(0);
		SYSTEM::WAIT(0);
		GlobalFunc_2346(&(Local_110.f_41[1]));
		GlobalFunc_9805(Local_637, Local_640, fLocal_643, Local_633, fLocal_636, GlobalFunc_625(), 1, 1, 1, 0, 0);
		func_412(-303.82f, 6211.29f, 31.05f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
		iLocal_172 = 2;
	}
}

void func_412(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2FEE8
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
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_80(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_80(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_80(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_80(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_47 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_47 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}













void func_425()//Position - 0x30ABA
{
	Local_215[0 /*3*/] = { 433.2907f, 6508.464f, 28.31481f };
	fLocal_231[0] = 81.59f;
	Local_237[0 /*3*/] = { 444.1198f, 6489.084f, 28.5351f };
	Local_215[1 /*3*/] = { 434.6316f, 6511.008f, 28.39467f };
	fLocal_231[1] = 67.03f;
	Local_237[1 /*3*/] = { 445.7498f, 6483.253f, 28.628f };
	Local_215[2 /*3*/] = { 435.3931f, 6507.186f, 28.42004f };
	fLocal_231[2] = 50.1f;
	Local_237[2 /*3*/] = { 445.4445f, 6521.469f, 27.8593f };
	Local_215[3 /*3*/] = { 436.2267f, 6509.413f, 28.45179f };
	fLocal_231[3] = 55f;
	Local_237[3 /*3*/] = { 442.8672f, 6527.345f, 27.4831f };
	Local_215[4 /*3*/] = { 436.5088f, 6511.723f, 28.52215f };
	fLocal_231[4] = 48.2f;
	Local_237[4 /*3*/] = { 440.3789f, 6533.731f, 27.1066f };
	Local_263[0 /*3*/] = { 435.5727f, 6465.732f, 27.7508f };
	fLocal_273[0] = 47.74f;
	Local_263[1 /*3*/] = { 436.2014f, 6464.403f, 27.7476f };
	fLocal_273[1] = 50.1f;
	Local_263[2 /*3*/] = { 436.5488f, 6461.785f, 27.7461f };
	fLocal_273[2] = 48.2f;
}









void func_434()//Position - 0x3101C
{
	if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), -303.6752f, 6212.527f, 30.45596f, 2f))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
		if (!GlobalFunc_6964(PLAYER::PLAYER_PED_ID(), -875674219) && GlobalFunc_IsPedNotInjuredOrDead(Local_110.f_28[0]))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), Local_110.f_28[0], -1);
		}
	}
}






void func_440()//Position - 0x31200
{
	int iVar0;
	int iVar1;
	
	sLocal_514[0] = "MIN3_DRIVE_1";
	sLocal_514[1] = "MIN3_DRIVE_2";
	sLocal_514[2] = "MIN3_DRIVE_3";
	sLocal_514[3] = "MIN3_DRIVE_4";
	sLocal_520[0] = "MIN3_ASAA";
	sLocal_520[1] = "MIN3_ASAB";
	sLocal_520[2] = "MIN3_ASAC";
	sLocal_520[3] = "MIN3_ASAD";
	sLocal_520[4] = "MIN3_ASAE";
	sLocal_520[5] = "MIN3_ASAF";
	sLocal_528[0] = "MIN3_CHASE_1";
	sLocal_528[1] = "MIN3_CHASE_2";
	sLocal_528[2] = "MIN3_CHASE_3";
	sLocal_528[3] = "MIN3_CHASE_4";
	sLocal_528[4] = "MIN3_CHASE_5";
	sLocal_535[0] = "MIN3_JOE1";
	sLocal_535[1] = "MIN3_JOE2";
	sLocal_535[2] = "MIN3_JOE3";
	iLocal_253[0] = 1;
	iLocal_253[1] = 1;
	iLocal_253[2] = 1;
	iLocal_253[3] = 1;
	iLocal_253[4] = 1;
	STREAMING::REQUEST_ANIM_DICT(sLocal_175);
	STREAMING::REQUEST_ANIM_DICT(sLocal_176);
	HUD::REQUEST_ADDITIONAL_TEXT("MIN3", 0);
	PED::SET_CREATE_RANDOM_COPS(0);
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		GlobalFunc_500(&uLocal_574);
		GlobalFunc_499(&uLocal_574, 468.6404f, 6547.756f, 26.09223f);
		GlobalFunc_499(&uLocal_574, 477.9092f, 6447.278f, 29.42946f);
		GlobalFunc_499(&uLocal_574, 240.0511f, 6414.416f, 30.42995f);
		GlobalFunc_499(&uLocal_574, 148.9169f, 6500.049f, 30.5832f);
		GlobalFunc_499(&uLocal_574, 229.8885f, 6546.03f, 30.67927f);
		GlobalFunc_498(&uLocal_574);
		if (GlobalFunc_Is_Mission_Retry())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_03_SCENE"))
			{
				AUDIO::START_AUDIO_SCENE("MINUTE_03_SCENE");
			}
			if (GlobalFunc_IsPedNotInjuredOrDead(Local_110.f_28[0]))
			{
				TASK::TASK_CLEAR_LOOK_AT(Local_110.f_28[0]);
			}
			iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (Global_84544 == 1)
			{
				iVar0++;
			}
			GlobalFunc_2346(&(Local_110.f_41[1]));
			switch (iVar0)
			{
				case 0:
					GlobalFunc_4972(-303.3698f, 6212.355f, 30.4696f, 229.2303f, 1, 0);
					func_511();
					break;
				
				case 1:
					GlobalFunc_173(&uLocal_345, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 1, 1);
					GlobalFunc_4972(389.4927f, 6554.734f, 26.6191f, 270.5771f, 1, 0);
					func_509();
					break;
				
				case 2:
					GlobalFunc_173(&uLocal_345, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 1, 1);
					GlobalFunc_4972(423.6803f, 6519.71f, 26.6747f, 170.9605f, 1, 0);
					func_497();
					break;
				
				case 3:
					GlobalFunc_4972(428.21f, 6509.16f, 27.92f, 161.97f, 1, 0);
					GlobalFunc_10698(&iVar1, 424.07f, 6509.42f, 27.33f, 181.39f, 0, 0, 1, 1, 1, joaat("sabregt"), 0, 145);
					GlobalFunc_4967(0, -1, 1);
					GlobalFunc_79(500, 1);
					func_441(1, 1, 1);
					func_47();
					break;
				
				default:
					break;
			}
		}
		else
		{
			iLocal_174 = 0;
			iLocal_172 = 1;
		}
	}
}

void func_441(int iParam0, int iParam1, int iParam2)//Position - 0x314FF
{
	func_400(0, 0, iParam2, 1);
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
























































void func_497()//Position - 0x37FB1
{
	int iVar0;
	
	func_507(1, 1);
	GlobalFunc_4956();
	func_506();
	if (!GlobalFunc_188())
	{
		func_504(423.6803f, 6519.71f, 26.6747f, 170.9605f);
	}
	func_425();
	func_503();
	func_390();
	func_395();
	while (!func_502())
	{
		SYSTEM::WAIT(0);
	}
	func_387();
	while (!func_501())
	{
		func_387();
		SYSTEM::WAIT(0);
	}
	func_387();
	func_370();
	func_500();
	iLocal_174 = 0;
	iLocal_172 = 5;
	func_389();
	GlobalFunc_Checkpoint8(2, "Kill Joe", 1, 0, 0, 1);
	if (GlobalFunc_188())
	{
		GlobalFunc_10698(&iVar0, 423.6803f, 6519.71f, 26.6747f, 170.9605f, 0, 0, 1, 1, 1, joaat("sabregt"), 0, 145);
		GlobalFunc_4967(iVar0, -1, 1);
	}
	else
	{
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("MM3_RESTART1");
	func_441(1, 1, 1);
}



void func_500()//Position - 0x38125
{
	var uVar0;
	
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0))
	{
		uVar0 = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"));
		if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), uVar0) < 12)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 12, 1, 1);
		}
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"), 0))
	{
		uVar0 = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_appistol"));
		if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), uVar0) < 12)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 12, 1, 1);
		}
	}
	else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"), 0))
	{
		uVar0 = WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_combatpistol"));
		if (WEAPON::GET_PED_AMMO_BY_TYPE(PLAYER::PLAYER_PED_ID(), uVar0) < 12)
		{
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 12, 1, 1);
		}
	}
	else
	{
		WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 12, 1, 1);
	}
}

int func_501()//Position - 0x38207
{
	if ((((GlobalFunc_IsPedNotInjuredOrDead(Local_202) && GlobalFunc_4947(iLocal_299)) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_259[0])) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_259[1])) && GlobalFunc_IsPedNotInjuredOrDead(iLocal_259[2]))
	{
		return 1;
	}
	return 0;
}

int func_502()//Position - 0x38256
{
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_278) && STREAMING::HAS_MODEL_LOADED(iLocal_277)) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(iLocal_280))) && STREAMING::HAS_MODEL_LOADED(GlobalFunc_4946(iLocal_279))) && STREAMING::HAS_MODEL_LOADED(iLocal_286)) && STREAMING::HAS_MODEL_LOADED(iLocal_289)) && STREAMING::HAS_MODEL_LOADED(iLocal_187)) && STREAMING::HAS_MODEL_LOADED(iLocal_188)) && STREAMING::HAS_MODEL_LOADED(iLocal_544)) && STREAMING::HAS_MODEL_LOADED(iLocal_550))
	{
		return 1;
	}
	return 0;
}

void func_503()//Position - 0x382DF
{
	iLocal_567 = MISC::GET_GAME_TIMER() + 20000;
	iLocal_513 = 0;
	iLocal_519 = 0;
	iLocal_527 = 0;
	iLocal_534 = 0;
	iLocal_539 = 0;
	iLocal_511 = 1;
	iLocal_323 = 0;
	iLocal_512 = 0;
	iLocal_510 = 1;
	iLocal_324 = 0;
	iLocal_253[0] = 1;
	iLocal_253[1] = 1;
	iLocal_253[2] = 1;
	iLocal_253[3] = 1;
	iLocal_253[4] = 1;
	iLocal_571 = 0;
	iLocal_572 = 0;
	iLocal_573 = 0;
	iLocal_311 = 0;
	iLocal_294 = 0;
	iLocal_287 = 0;
	iLocal_189 = 0;
	iLocal_190 = 0;
	iLocal_564 = 0;
	iLocal_569 = -1;
	bLocal_570 = false;
	iLocal_192 = 1;
	iLocal_626 = 1;
	iLocal_193 = -1;
	iLocal_194 = -1;
	iLocal_195 = -1;
}

void func_504(struct<3> Param0, float fParam3)//Position - 0x38371
{
	var uVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), Param0);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fParam3);
	}
	else
	{
		uVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (GlobalFunc_4947(uVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uVar0, 1, 1);
		}
		GlobalFunc_6692(&iVar0);
		GlobalFunc_10698(&iVar1, Param0, fParam3, 1, 0, 1, 1, 1, joaat("sabregt"), 0, 145);
		GlobalFunc_190(&iVar1);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
}


void func_506()//Position - 0x38420
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Local_110.f_28[0]))
	{
		GlobalFunc_200(&uLocal_345, 3);
		GlobalFunc_69(&(Local_110.f_28[0]));
	}
	func_25();
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_208);
	if (ENTITY::DOES_ENTITY_EXIST(Local_196))
	{
		if (!PED::IS_PED_INJURED(Local_196))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_196, 0);
		}
		GlobalFunc_200(&uLocal_345, 5);
		GlobalFunc_69(&Local_196);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_202))
	{
		if (!PED::IS_PED_INJURED(Local_202))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_202, 0);
		}
		GlobalFunc_200(&uLocal_345, 4);
		GlobalFunc_69(&Local_202);
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		GlobalFunc_69(&(uLocal_209[iVar0]));
		iVar0++;
	}
	GlobalFunc_69(&iLocal_549);
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_557))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_557, 0);
	}
	GlobalFunc_69(&iLocal_557);
	GlobalFunc_6692(&(Local_110.f_35[0]));
	GlobalFunc_6692(&iLocal_281);
	GlobalFunc_6692(&iLocal_288);
	GlobalFunc_6692(&iLocal_299);
	GlobalFunc_6692(&iLocal_543);
	GlobalFunc_6692(&iLocal_556);
	GlobalFunc_2346(&iLocal_185);
	GlobalFunc_2346(&iLocal_186);
}

void func_507(bool bParam0, bool bParam1)//Position - 0x3851C
{
	if (bParam0)
	{
		func_508(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_412(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_508(bool bParam0, int iParam1, int iParam2)//Position - 0x3854F
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
			func_400(iParam1, iParam2, 1, 1);
		}
	}
}

void func_509()//Position - 0x385AE
{
	int iVar0;
	
	func_507(1, 1);
	GlobalFunc_4956();
	func_506();
	if (!GlobalFunc_188())
	{
		func_504(389.4927f, 6554.734f, 26.6191f, 270.5771f);
	}
	func_425();
	func_503();
	func_390();
	func_395();
	while (!func_502())
	{
		SYSTEM::WAIT(0);
	}
	func_388();
	while (!func_510())
	{
		func_388();
		SYSTEM::WAIT(0);
	}
	func_388();
	func_387();
	while (!func_501())
	{
		func_387();
		SYSTEM::WAIT(0);
	}
	func_387();
	func_500();
	iLocal_174 = 3;
	iLocal_172 = 3;
	GlobalFunc_Checkpoint8(1, "Kill Josef", 0, 0, 0, 1);
	if (!GlobalFunc_188())
	{
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	GlobalFunc_164("MIN3_06", 7500, 1);
	func_397();
	func_389();
	if (GlobalFunc_188())
	{
		GlobalFunc_10698(&iVar0, 389.4927f, 6554.734f, 26.6191f, 270.5771f, 0, 0, 1, 1, 1, joaat("sabregt"), 0, 145);
		GlobalFunc_4967(iVar0, -1, 1);
	}
	func_441(1, 1, 1);
}

int func_510()//Position - 0x386C4
{
	if (((((((((GlobalFunc_IsPedNotInjuredOrDead(Local_196) && GlobalFunc_4947(iLocal_281)) && GlobalFunc_4947(iLocal_288)) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_209[0])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_209[1])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_209[2])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_209[3])) && GlobalFunc_IsPedNotInjuredOrDead(uLocal_209[4])) && ENTITY::DOES_ENTITY_EXIST(iLocal_185)) && ENTITY::DOES_ENTITY_EXIST(iLocal_186))
	{
		return 1;
	}
	return 0;
}

void func_511()//Position - 0x3874E
{
	var uVar0;
	int iVar1;
	
	func_507(1, 1);
	GlobalFunc_4956();
	func_425();
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_110.f_28[0]))
	{
		GlobalFunc_173(&uLocal_345, 3, Local_110.f_28[0], "MANUEL", 1, 1);
		GlobalFunc_6502(Local_110.f_28[0], Local_295);
		ENTITY::SET_ENTITY_HEADING(Local_110.f_28[0], fLocal_298);
	}
	func_500();
	GlobalFunc_173(&uLocal_345, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 1, 1);
	if (!GlobalFunc_188())
	{
		GlobalFunc_6502(PLAYER::PLAYER_PED_ID(), -303.3698f, 6212.355f, 30.4696f);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 229.2303f);
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-297.9875f, 6193.312f, 28.87423f, -274.1594f, 6209.038f, 32.35702f, 0, 1);
	GlobalFunc_8365(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 0, 0, 0, 0, 0);
	iLocal_172 = 2;
	if (!GlobalFunc_188())
	{
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_110.f_28[0]))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		if (GlobalFunc_4947(Local_110.f_35[1]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_110.f_35[1], -1))
		{
			TASK::TASK_ENTER_VEHICLE(0, Local_110.f_35[1], 20000, -1, 1f, 1, 0);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, Local_110.f_35[1], 20f, 786469);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
		}
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(Local_110.f_28[0], uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
	if (GlobalFunc_115(Local_110.f_41[0]))
	{
		ENTITY::SET_ENTITY_COLLISION(Local_110.f_41[0], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_110.f_41[0], 0);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_10698(&iVar1, -283.27f, 6216.75f, 31.84f, 43.56f, 0, 0, 1, 1, 1, joaat("sabregt"), 0, 145);
		GlobalFunc_4967(0, -1, 1);
	}
	func_441(1, 1, 1);
}






void func_517()//Position - 0x38AF1
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
		{
			GlobalFunc_4956();
		}
	}
}

void func_518()//Position - 0x38B10
{
	if (!iLocal_571)
	{
		if (GlobalFunc_IsPedNotInjuredOrDead(Local_196))
		{
			if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_196, joaat("weapon_stungun"), 0))
			{
				iLocal_571 = 1;
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
	{
		if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_202, joaat("weapon_stungun"), 0))
		{
			if (!iLocal_572)
			{
				iLocal_572 = 1;
			}
			WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Local_202);
		}
	}
}

void func_519(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x38B64
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



















int func_538(var uParam0)//Position - 0x398BB
{
	int iVar0[5];
	int iVar6;
	bool bVar7;
	
	iVar0[0] = joaat("sabregt");
	iVar0[1] = joaat("bison");
	iVar0[2] = iLocal_96;
	iVar0[3] = joaat("prop_table_03_chr");
	iVar0[4] = joaat("prop_cs_rolled_paper");
	switch (iLocal_93)
	{
		case 0:
			uParam0->f_16 = 4;
			uParam0->f_27 = 0;
			StringCopy(&(uParam0->f_9), "MMB_3_RCM", 24);
			uParam0->f_25 = 1;
			uParam0->f_17[0 /*3*/] = { -303.512f, 6211.81f, 30.48759f };
			uParam0->f_17[1 /*3*/] = { 20f, 20f, 3f };
			GlobalFunc_2360(&(uParam0->f_48), "rcmminute3base", "base", "beckon");
			uParam0->f_48.f_5 = { -303.73f, 6211.56f, 31.49f };
			uParam0->f_48.f_8 = { 0f, 0f, -2.8f };
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar6]);
				iVar6++;
			}
			iLocal_93 = 1;
			return 0;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_93 = 2;
			return 0;
			break;
		
		case 2:
			bVar7 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				GlobalFunc_5725(&(uParam0->f_41[0]), iVar0[3], -303.74f, 6211.56f, 30.49f, -176.77f);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_41[0], 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
				return 0;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_8025(&(uParam0->f_28[0]), 59, uParam0->f_48.f_5, -2.8f, "RCM MINUTE - MANUEL", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_28[0], 0, 0, 0, false);
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_28[0], 0);
					if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2050, 4);
					}
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8026(&(uParam0->f_35[0]), iVar0[0], -281.93f, 6198.32f, 30.77f, -135.32f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[0], 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				GlobalFunc_8026(&(uParam0->f_35[1]), iVar0[1], -291.72f, 6208.33f, 30.87f, -134.5016f);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[1], 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[1], 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				GlobalFunc_5725(&(uParam0->f_41[1]), iVar0[4], -303.74f, 6211.56f, 30.49f, -176.77f);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_41[1], uParam0->f_28[0], PED::GET_PED_BONE_INDEX(uParam0->f_28[0], 18905), 0.12f, 0f, 0.03f, 90f, 0f, 90f, 0, 0, 0, 0, 2, 1);
			}
			if (bVar7)
			{
				iLocal_93 = 3;
			}
			break;
		
		case 3:
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar6]);
				iVar6++;
			}
			return 1;
			break;
	}
	return 0;
}












void func_550()//Position - 0x39E7C
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
		func_558();
	}
	HUD::CLEAR_PRINTS();
	GlobalFunc_4956();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	func_551(&Local_110, 0, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_171, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_551(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x39EB4
{
	GlobalFunc_6690(uParam0, iParam1);
	GlobalFunc_8327(uParam0, bParam2);
	GlobalFunc_7209(uParam0, bParam3);
}







void func_558()//Position - 0x39FC6
{
	int iVar0;
	
	func_25();
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_208);
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_196))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_196, 0);
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(Local_202))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_202, 0);
	}
	GlobalFunc_132(&Local_196, 1, 0, 1);
	GlobalFunc_132(&Local_202, 1, 0, 1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_209[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_209[iVar0]))
			{
				if (!(GlobalFunc_6964(uLocal_209[iVar0], 713668775) || PED::IS_PED_FLEEING(uLocal_209[iVar0])))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_209[iVar0], Local_237[iVar0 /*3*/], 2f, 20000, 1048576000, 0, 1193033728);
				}
				PED::SET_PED_KEEP_TASK(uLocal_209[iVar0], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_209[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_259[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_259[iVar0]))
			{
				PED::SET_PED_KEEP_TASK(iLocal_259[iVar0], 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_259[iVar0]));
			}
		}
		iVar0++;
	}
	GlobalFunc_132(&iLocal_549, 1, 0, 1);
	if (GlobalFunc_IsPedNotInjuredOrDead(iLocal_557))
	{
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_557, 0);
	}
	GlobalFunc_132(&iLocal_557, 1, 0, 1);
	GlobalFunc_190(&iLocal_281);
	GlobalFunc_190(&iLocal_288);
	GlobalFunc_190(&iLocal_299);
	GlobalFunc_190(&iLocal_543);
	GlobalFunc_190(&iLocal_556);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_185))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_185, 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_186))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_186, 0);
	}
	GlobalFunc_2295(&iLocal_185, 0);
	GlobalFunc_2295(&iLocal_186, 0);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_645, 0);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Local_325, Local_328, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MINUTE_03_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("MINUTE_03_SCENE");
	}
	PED::SET_CREATE_RANDOM_COPS(1);
	PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
	GlobalFunc_4948(&uLocal_35, 0, 0);
	GlobalFunc_4935();
}



















var func_577()//Position - 0x3A836
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-309.1f, 6205.4f, 30f, -279.33f, 6217.98f, 40f, 0, 1, 1, 1);
}




