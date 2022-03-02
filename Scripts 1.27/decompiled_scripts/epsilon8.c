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
	int iLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	struct<61> Local_82 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	float fLocal_143 = 0f;
	float fLocal_144 = 0f;
	float fLocal_145 = 0f;
	float fLocal_146 = 0f;
	float fLocal_147 = 0f;
	float fLocal_148 = 0f;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	float fLocal_151 = 0f;
	float fLocal_152 = 0f;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	struct<3> Local_157 = { 0, 0, 0 } ;
	int iLocal_160 = 0;
	struct<3> Local_161[7];
	struct<3> Local_183[7];
	struct<3> Local_205 = { 0, 0, 0 } ;
	struct<3> Local_208 = { 0, 0, 0 } ;
	struct<3> Local_211 = { 0, 0, 0 } ;
	struct<3> Local_214 = { 0, 0, 0 } ;
	struct<3> Local_217 = { 0, 0, 0 } ;
	struct<3> Local_220 = { 0, 0, 0 } ;
	struct<3> Local_223 = { 0, 0, 0 } ;
	struct<3> Local_226 = { 0, 0, 0 } ;
	struct<3> Local_229 = { 0, 0, 0 } ;
	float fLocal_232[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_240[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_248 = 0f;
	float fLocal_249 = 0f;
	float fLocal_250 = 0f;
	float fLocal_251 = 0f;
	float fLocal_252 = 0f;
	float fLocal_253 = 0f;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
	int iLocal_256 = 0;
	int iLocal_257 = 0;
	int iLocal_258 = 0;
	int iLocal_259 = 0;
	int iLocal_260 = 0;
	int iLocal_261 = 0;
	int iLocal_262 = 0;
	int iLocal_263 = 0;
	int iLocal_264 = 0;
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	int iLocal_278 = 0;
	int iLocal_279 = 0;
	int iLocal_280 = 0;
	int iLocal_281 = 0;
	int iLocal_282 = 0;
	int iLocal_283 = 0;
	int iLocal_284 = 0;
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	int iLocal_287 = 0;
	int iLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	var uLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	int iLocal_357 = 0;
	int iLocal_358 = 0;
	int iLocal_359 = 0;
	int iLocal_360 = 0;
	int iLocal_361 = 0;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	int iLocal_365 = 0;
	int iLocal_366 = 0;
	int iLocal_367 = 0;
	int iLocal_368 = 0;
	int iLocal_369 = 0;
	int iLocal_370 = 0;
	int iLocal_371 = 0;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	int iLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	int iLocal_377 = 0;
	int iLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	char* sLocal_385 = NULL;
	int iLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 16;
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
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = -1;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 1000;
	var uLocal_564 = 1000;
	var uLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	var uLocal_569[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	var uLocal_579[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_587[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_595 = 0;
	var uLocal_596[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 2;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	int iLocal_614 = 0;
	var uLocal_615[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_623[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	var uLocal_633[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_641[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_649[7];
	float fLocal_671[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_679[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_687[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_695[7];
	float fLocal_717[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_725[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_733[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_741[7];
	float fLocal_763[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_771[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_779[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_787[7];
	float fLocal_809[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_817[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_825[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_833[7];
	float fLocal_855[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	var uLocal_863[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_871[7] = { 0, 0, 0, 0, 0, 0, 0 };
	struct<3> Local_879[7];
	float fLocal_901[7] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_909 = 0;
	int iLocal_910[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_918[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_926[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_934 = 0;
	int iLocal_935 = 0;
	int iLocal_936 = 0;
	int iLocal_937 = 0;
	int iLocal_938 = 0;
	int iLocal_939 = 0;
	int iLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	uLocal_79 = GlobalFunc_4946(60);
	uLocal_80 = GlobalFunc_4946(14);
	fLocal_143 = 400f;
	fLocal_144 = 150f;
	fLocal_145 = 450f;
	fLocal_146 = 0.7f;
	fLocal_147 = 1f;
	fLocal_148 = 0.7f;
	iLocal_149 = 4;
	iLocal_150 = 525000;
	fLocal_151 = 34.75f;
	fLocal_152 = 50f;
	iLocal_153 = 25;
	iLocal_154 = 10;
	iLocal_155 = 25;
	iLocal_156 = 75;
	Local_157 = { -363.3094f, -82.3607f, 44.6577f };
	iLocal_160 = 157;
	iLocal_278 = 1;
	iLocal_298 = -1;
	Local_82 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_82);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		if (iLocal_310 == 1)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("EPS8_FAIL");
			GlobalFunc_143("Force cleanup [TERMINATING]");
			func_472(1);
			func_458();
		}
		else
		{
			GlobalFunc_143("Force cleanup [TERMINATING]");
			func_472(1);
			func_458();
		}
	}
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		iLocal_78 = 0;
		while (!func_453(&Local_82))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(func_452(), 0);
	MISC::CLEAR_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 1);
	PED::ADD_RELATIONSHIP_GROUP("Epsilon", &uLocal_387);
	PED::ADD_RELATIONSHIP_GROUP("EpsilonCivilian", &uLocal_388);
	uLocal_944 = PED::ADD_SCENARIO_BLOCKING_AREA(-711.6323f, 42.0868f, 14.5077f, -663.5175f, 118.0403f, 86.0362f, 0, 1, 1, 1);
	uLocal_945 = PED::ADD_SCENARIO_BLOCKING_AREA(-657.5416f, 38.5153f, 38.7892f, -665.8512f, 52.9232f, 42.3853f, 0, 1, 1, 1);
	uLocal_946 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(45.2982f, -36.1436f, -413.4749f) - Vector(5f, 7f, 7f), Vector(45.2982f, -36.1436f, -413.4749f) + Vector(5f, 7f, 7f), 0, 1, 1, 1);
	GlobalFunc_4923(&Local_82, 0, 1);
	uLocal_569[0] = Local_82.f_28[0];
	uLocal_569[2] = Local_82.f_28[1];
	uLocal_579[0] = Local_82.f_28[2];
	uLocal_587[0] = Local_82.f_28[3];
	Local_82.f_28[0] = 0;
	Local_82.f_28[1] = 0;
	Local_82.f_28[2] = 0;
	Local_82.f_28[3] = 0;
	GlobalFunc_9132(1);
	while (true)
	{
		VEHICLE::STOP_ALL_GARAGE_ACTIVITY();
		RECORDING::_0x208784099002BC30("SF_Epsilon8", 0);
		SYSTEM::WAIT(0);
		func_429(Local_82.f_9, 0, 0, 0, 0, 0);
		if ((iLocal_567 != 0 && iLocal_567 != 1) && iLocal_567 != 2)
		{
			if (iLocal_567 != 10)
			{
				func_428();
			}
			func_423();
		}
		switch (iLocal_567)
		{
			case 0:
				func_415();
				break;
			
			case 1:
				func_340();
				break;
			
			case 2:
				func_331();
				break;
			
			case 3:
				func_326();
				break;
			
			case 4:
				func_303();
				break;
			
			case 5:
				func_299();
				break;
			
			case 6:
				func_298();
				break;
			
			case 7:
				func_287();
				break;
			
			case 8:
				func_51();
				break;
			
			case 10:
				func_3();
				break;
		}
		if (iLocal_567 != 10)
		{
			GlobalFunc_587();
			GlobalFunc_587();
		}
	}
}



void func_3()//Position - 0x360
{
	switch (iLocal_568)
	{
		case 0:
			AUDIO::TRIGGER_MUSIC_EVENT("EPS8_FAIL");
			if (iLocal_374 == 1)
			{
				GlobalFunc_10829(0, 1, -iLocal_150, 0, 0);
			}
			func_23();
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_385))
			{
				func_21(sLocal_385, 1);
			}
			else
			{
				func_472(1);
			}
			iLocal_568 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_4();
				func_458();
			}
			break;
	}
}

void func_4()//Position - 0x3D6
{
	GlobalFunc_2840(&uLocal_554, 0);
	iLocal_566 = 0;
	fLocal_152 = 100f;
	HUD::CLEAR_PRINTS();
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_615[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_615[1]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[1], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_615[2]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[2], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_615[3]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[3], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_615[4]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[4], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_615[5]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[5], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_615[6]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[6], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_623[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_623[0], 0);
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_623[1]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_623[1], 0);
	}
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_387);
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_388);
	if (iLocal_369 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				PATHFIND::GET_SAFE_COORD_FOR_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, &Local_229, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_229, 1, 0, 0, 1);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_631))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_631))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
					{
						PATHFIND::GET_SAFE_COORD_FOR_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0, &Local_229, 0);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_229, 1, 0, 0, 1);
					}
				}
			}
		}
	}
	PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 9, 0, 0, 0);
	GlobalFunc_69(&iLocal_595);
	GlobalFunc_69(&iLocal_577);
	GlobalFunc_69(&iLocal_578);
	GlobalFunc_6692(&iLocal_614);
	GlobalFunc_6692(&iLocal_632);
	GlobalFunc_130(&(uLocal_596[0]));
	GlobalFunc_130(&(uLocal_596[1]));
	GlobalFunc_130(&(uLocal_596[2]));
	GlobalFunc_130(&(uLocal_596[3]));
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_631))
	{
		VEHICLE::REMOVE_VEHICLE_STUCK_CHECK(iLocal_631);
		GlobalFunc_6692(&iLocal_631);
	}
	iLocal_255 = 0;
	while (iLocal_255 < 7)
	{
		GlobalFunc_69(&(uLocal_579[iLocal_255]));
		GlobalFunc_69(&(uLocal_587[iLocal_255]));
		GlobalFunc_69(&(uLocal_569[iLocal_255]));
		GlobalFunc_6692(&(uLocal_615[iLocal_255]));
		SYSTEM::WAIT(0);
		iLocal_255++;
	}
	func_11();
	GlobalFunc_7632(0);
	iLocal_255 = 0;
	iLocal_310 = 0;
	iLocal_311 = 0;
	iLocal_313 = 0;
	iLocal_312 = 0;
	iLocal_314 = 0;
	iLocal_260 = 0;
	iLocal_256 = 0;
	iLocal_257 = 0;
	iLocal_269 = 0;
	iLocal_260 = 0;
	iLocal_261 = 0;
	iLocal_315[0] = 0;
	iLocal_315[1] = 0;
	iLocal_315[2] = 0;
	iLocal_315[3] = 0;
	iLocal_315[4] = 0;
	iLocal_315[5] = 0;
	iLocal_315[6] = 0;
	iLocal_340[0] = 0;
	iLocal_340[1] = 0;
	iLocal_340[2] = 0;
	iLocal_340[3] = 0;
	iLocal_340[4] = 0;
	iLocal_340[5] = 0;
	iLocal_340[6] = 0;
	iLocal_264 = 0;
	iLocal_323 = 0;
	iLocal_324 = 0;
	iLocal_325 = 0;
	iLocal_327 = 0;
	iLocal_271 = 0;
	iLocal_274 = 0;
	iLocal_329 = 0;
	iLocal_330 = 0;
	iLocal_331 = 0;
	iLocal_332 = 0;
	iLocal_333 = 0;
	iLocal_334 = 0;
	iLocal_335 = 0;
	iLocal_276 = 0;
	iLocal_336 = 0;
	iLocal_337 = 0;
	iLocal_338 = 0;
	iLocal_278 = 1;
	iLocal_339 = 0;
	iLocal_348 = 0;
	iLocal_349 = 0;
	iLocal_350 = 0;
	iLocal_351 = 0;
	iLocal_352 = 0;
	iLocal_279 = 0;
	iLocal_280 = 0;
	iLocal_353 = 0;
	iLocal_354 = 0;
	iLocal_355 = 0;
	iLocal_285 = 0;
	iLocal_282 = 0;
	iLocal_357 = 0;
	fLocal_145 = 450f;
	iLocal_359 = 0;
	iLocal_283 = 0;
	iLocal_360 = 0;
	iLocal_361 = 0;
	iLocal_362 = 0;
	iLocal_363 = 0;
	iLocal_287 = 0;
	iLocal_364 = 0;
	iLocal_365 = 0;
	iLocal_366 = 0;
	iLocal_367 = 0;
	iLocal_368 = 0;
	iLocal_284 = 0;
	iLocal_294 = 0;
	iLocal_296 = 0;
	iLocal_297 = 0;
	iLocal_370 = 0;
	iLocal_372 = 0;
	iLocal_371 = 0;
	iLocal_373 = 0;
	iLocal_298 = -1;
	iLocal_374 = 0;
	iLocal_299 = 0;
	iLocal_375 = 0;
	iLocal_302 = 0;
	iLocal_303 = 0;
	iLocal_376 = 0;
	iLocal_305 = 0;
	iLocal_382 = 0;
	iLocal_307 = 0;
	iLocal_383 = 0;
	iLocal_384 = 0;
	iLocal_386 = 0;
	if (CAM::DOES_CAM_EXIST(uLocal_607))
	{
		CAM::SET_CAM_ACTIVE(uLocal_607, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_607, 0);
		if (CAM::DOES_CAM_EXIST(uLocal_608))
		{
			CAM::SET_CAM_ACTIVE(uLocal_608, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(uLocal_608, 0);
		}
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_CHOPPER"))
	{
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_08_CHOPPER");
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
}







void func_11()//Position - 0xA2E
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("taxi"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sadler"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("habanero"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("schafter2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("rumpo"));
	GlobalFunc_132(&(uLocal_641[0]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_641[1]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_641[2]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_641[3]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_641[4]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_641[5]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_641[6]), 1, 0, 1);
	GlobalFunc_131(&(uLocal_633[0]));
	GlobalFunc_131(&(uLocal_633[1]));
	GlobalFunc_131(&(uLocal_633[2]));
	GlobalFunc_131(&(uLocal_633[3]));
	GlobalFunc_131(&(uLocal_633[4]));
	GlobalFunc_131(&(uLocal_633[5]));
	GlobalFunc_131(&(uLocal_633[6]));
	GlobalFunc_132(&(uLocal_687[0]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_687[1]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_687[2]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_687[3]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_687[4]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_687[5]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_687[6]), 1, 0, 1);
	GlobalFunc_131(&(uLocal_679[0]));
	GlobalFunc_131(&(uLocal_679[1]));
	GlobalFunc_131(&(uLocal_679[2]));
	GlobalFunc_131(&(uLocal_679[3]));
	GlobalFunc_131(&(uLocal_679[4]));
	GlobalFunc_131(&(uLocal_679[5]));
	GlobalFunc_131(&(uLocal_679[6]));
	GlobalFunc_132(&(uLocal_733[0]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_733[1]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_733[2]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_733[3]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_733[4]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_733[5]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_733[6]), 1, 0, 1);
	GlobalFunc_131(&(uLocal_725[0]));
	GlobalFunc_131(&(uLocal_725[1]));
	GlobalFunc_131(&(uLocal_725[2]));
	GlobalFunc_131(&(uLocal_725[3]));
	GlobalFunc_131(&(uLocal_725[4]));
	GlobalFunc_131(&(uLocal_725[5]));
	GlobalFunc_131(&(uLocal_725[6]));
	GlobalFunc_132(&(uLocal_779[0]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_779[1]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_779[2]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_779[3]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_779[4]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_779[5]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_779[6]), 1, 0, 1);
	GlobalFunc_131(&(uLocal_771[0]));
	GlobalFunc_131(&(uLocal_771[1]));
	GlobalFunc_131(&(uLocal_771[2]));
	GlobalFunc_131(&(uLocal_771[3]));
	GlobalFunc_131(&(uLocal_771[4]));
	GlobalFunc_131(&(uLocal_771[5]));
	GlobalFunc_131(&(uLocal_771[6]));
	GlobalFunc_132(&(uLocal_825[0]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_825[1]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_825[2]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_825[3]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_825[4]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_825[5]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_825[6]), 1, 0, 1);
	GlobalFunc_131(&(uLocal_817[0]));
	GlobalFunc_131(&(uLocal_817[1]));
	GlobalFunc_131(&(uLocal_817[2]));
	GlobalFunc_131(&(uLocal_817[3]));
	GlobalFunc_131(&(uLocal_817[4]));
	GlobalFunc_131(&(uLocal_817[5]));
	GlobalFunc_131(&(uLocal_817[6]));
	GlobalFunc_132(&(uLocal_871[0]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_871[1]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_871[2]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_871[3]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_871[4]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_871[5]), 1, 0, 1);
	GlobalFunc_132(&(uLocal_871[6]), 1, 0, 1);
	GlobalFunc_131(&(uLocal_863[0]));
	GlobalFunc_131(&(uLocal_863[1]));
	GlobalFunc_131(&(uLocal_863[2]));
	GlobalFunc_131(&(uLocal_863[3]));
	GlobalFunc_131(&(uLocal_863[4]));
	GlobalFunc_131(&(uLocal_863[5]));
	GlobalFunc_131(&(uLocal_863[6]));
}










void func_21(char* sParam0, bool bParam1)//Position - 0x1049
{
	GlobalFunc_509(sParam0);
	func_472(bParam1);
}


void func_23()//Position - 0x109C
{
	GlobalFunc_146(&(iLocal_910[0]));
	GlobalFunc_146(&(iLocal_910[1]));
	GlobalFunc_146(&(iLocal_910[2]));
	GlobalFunc_146(&(iLocal_910[3]));
	GlobalFunc_146(&(iLocal_910[4]));
	GlobalFunc_146(&(iLocal_910[5]));
	GlobalFunc_146(&(iLocal_910[6]));
	GlobalFunc_146(&(iLocal_918[0]));
	GlobalFunc_146(&(iLocal_918[1]));
	GlobalFunc_146(&(iLocal_918[2]));
	GlobalFunc_146(&(iLocal_918[3]));
	GlobalFunc_146(&(iLocal_918[4]));
	GlobalFunc_146(&(iLocal_918[5]));
	GlobalFunc_146(&(iLocal_918[6]));
	GlobalFunc_146(&(iLocal_926[0]));
	GlobalFunc_146(&(iLocal_926[1]));
	GlobalFunc_146(&(iLocal_926[2]));
	GlobalFunc_146(&(iLocal_926[3]));
	GlobalFunc_146(&(iLocal_926[4]));
	GlobalFunc_146(&(iLocal_926[5]));
	GlobalFunc_146(&(iLocal_926[6]));
	GlobalFunc_146(&iLocal_934);
	GlobalFunc_146(&iLocal_935);
	GlobalFunc_146(&iLocal_936);
	GlobalFunc_146(&iLocal_937);
	GlobalFunc_146(&iLocal_938);
	GlobalFunc_146(&iLocal_939);
	GlobalFunc_146(&iLocal_940);
}




























void func_51()//Position - 0x21B1
{
	var uVar0;
	struct<3> Var1;
	
	func_286();
	func_285();
	if (iLocal_302 == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_289 + 5000)
		{
			iLocal_302 = 1;
		}
	}
	else if (iLocal_302 == 1)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_289 + 12000)
		{
			iLocal_302 = 2;
		}
	}
	if (MISC::GET_GAME_TIMER() > iLocal_289 + 9700)
	{
		if (iLocal_280 > 2 || iLocal_335 == 1)
		{
		}
	}
	if ((iLocal_261 == 3 && iLocal_269 == 2) && !GlobalFunc_111())
	{
		iLocal_375 = 1;
	}
	if (iLocal_257 > 10000 && iLocal_256 > 10000)
	{
		iLocal_257 = (iLocal_257 - 9000);
		iLocal_256 = (iLocal_256 - 9000);
	}
	if (iLocal_335 == 0)
	{
		if (iLocal_334 == 0)
		{
			if (GlobalFunc_4947(iLocal_631))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
				{
					if (iLocal_257 != iLocal_256)
					{
						if (iLocal_313 == 0)
						{
							RECORDING::_0x293220DA1B46CEBC(15f, 4f, 1);
							GlobalFunc_164("EPS8_12", 7500, 0);
						}
						iLocal_334 = 1;
					}
				}
			}
		}
	}
	else if (HUD::DOES_BLIP_EXIST(iLocal_940))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_596[3], 0) < 1f)
			{
				HUD::REMOVE_BLIP(&iLocal_940);
				OBJECT::DELETE_OBJECT(&(uLocal_596[3]));
				GlobalFunc_10829(0, 1, iLocal_150, 0, 0);
				iLocal_374 = 1;
				if (iLocal_257 != iLocal_256)
				{
					if (iLocal_334 == 0)
					{
						if (iLocal_313 == 0)
						{
							RECORDING::_0x293220DA1B46CEBC(15f, 4f, 1);
							GlobalFunc_164("EPS8_12", 7500, 0);
						}
						iLocal_334 = 1;
					}
				}
			}
		}
	}
	if (GlobalFunc_115(iLocal_614) && GlobalFunc_115(iLocal_578))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_614, 1) };
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_614, 0f, 0f, (Var1.f_2 - 200f)), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_614, 500f, 0f, (Var1.f_2 + 200f)), 1000f, 0, 1, 0))
		{
			if (GlobalFunc_1533(iLocal_578, iLocal_614, 2) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_614, 1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_578, 242628503) != 1 || TASK::GET_SEQUENCE_PROGRESS(iLocal_578) > 0)
				{
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_614);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_578, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				}
			}
		}
		else if (GlobalFunc_1533(iLocal_578, iLocal_614, 1) && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_614, 2))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_578, 242628503) != 1 || TASK::GET_SEQUENCE_PROGRESS(iLocal_578) > 0)
			{
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_614);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_578, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			}
		}
	}
	func_279();
	func_277();
	func_275();
	if (iLocal_314 == 1)
	{
		func_272();
	}
	if (iLocal_372 == 0)
	{
		if (GlobalFunc_4947(iLocal_614))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
			{
				if (WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID()) != joaat("weapon_stickybomb"))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_289 + 5000)
					{
						if (iLocal_371 == 0)
						{
							iLocal_371 = 1;
						}
					}
				}
				else if (iLocal_371 == 1)
				{
					iLocal_371 = 0;
				}
			}
			else if (iLocal_371 == 1)
			{
				iLocal_371 = 0;
			}
		}
	}
	if (iLocal_257 == iLocal_256 && MISC::GET_GAME_TIMER() > iLocal_289 + 8000)
	{
		iLocal_258 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		if (iLocal_258 == 0)
		{
			iLocal_262 = MISC::GET_GAME_TIMER();
			if (iLocal_262 > iLocal_263 + 1200)
			{
				if (iLocal_264 == 0)
				{
					PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					iLocal_331 = 0;
					iLocal_265 = MISC::GET_GAME_TIMER();
					iLocal_264 = 1;
				}
				else if (iLocal_264 == 1)
				{
					iLocal_266 = MISC::GET_GAME_TIMER();
					if (iLocal_266 > iLocal_265 + 2000)
					{
						if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
						{
							if (iLocal_335 == 0)
							{
								if (iLocal_332 == 0)
								{
									if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
									{
										AUDIO::TRIGGER_MUSIC_EVENT("EPS8_ESCAPE");
										func_79();
									}
									else if (iLocal_331 == 0)
									{
										GlobalFunc_164("EPS8_06", 7500, 0);
										iLocal_331 = 1;
									}
								}
								else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_614, 0))
								{
									AUDIO::TRIGGER_MUSIC_EVENT("EPS8_ESCAPE");
									func_79();
								}
								else if (iLocal_331 == 0)
								{
									GlobalFunc_164("EPS8_20", 7500, 0);
									iLocal_331 = 1;
								}
							}
							else
							{
								RECORDING::_0x293220DA1B46CEBC(15f, 4f, 1);
								func_79();
							}
						}
					}
				}
			}
		}
		else if (iLocal_313 == 0)
		{
			GlobalFunc_164("EPS8_03", 7500, 0);
			iLocal_313 = 1;
		}
	}
	func_52();
}

void func_52()//Position - 0x2610
{
	int iVar0;
	
	if (((!GlobalFunc_663("EPS8_12", 0, 0) && !GlobalFunc_663("EPS8_16", 0, 0)) && !GlobalFunc_663("EPS8_11", 0, 0)) && !GlobalFunc_663("EPS8_25", 0, 0))
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = 1;
	}
	if (GlobalFunc_4924(iLocal_577))
	{
		if (iLocal_280 == 0)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_289 + 1800)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH", "EPS8_CH_1", 6, iVar0, 0))
					{
						iLocal_280 = 1;
					}
				}
			}
		}
		else if (iLocal_280 == 1)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_289 + 3000)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH", "EPS8_CH_2", 6, iVar0, 0))
					{
						iLocal_280 = 2;
					}
				}
			}
		}
		else if (iLocal_280 == 2)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_289 + 5000)
			{
				if (iLocal_359 == 0)
				{
					if (func_54(iLocal_577))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH2", "EPS8_CH2_1", 6, iVar0, 0))
							{
								iLocal_280 = 3;
							}
						}
					}
				}
			}
		}
		else if (iLocal_280 == 3)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_289 + 10000)
			{
				if (iLocal_359 == 0)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_631) > 17f)
						{
							if (func_54(iLocal_577))
							{
								if (!GlobalFunc_111())
								{
									fLocal_250 = ENTITY::GET_ENTITY_HEADING(iLocal_631);
									if (fLocal_250 >= 315f || fLocal_250 < 45f)
									{
										if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH2", "EPS8_CH2_2", 6, iVar0, 0))
										{
											iLocal_280 = 4;
										}
									}
									if (fLocal_250 >= 45f && fLocal_250 < 135f)
									{
										if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH2", "EPS8_CH2_3", 6, iVar0, 0))
										{
											iLocal_280 = 4;
										}
									}
									if (fLocal_250 >= 135f && fLocal_250 < 225f)
									{
										if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH2", "EPS8_CH2_4", 6, iVar0, 0))
										{
											iLocal_280 = 4;
										}
									}
									if (fLocal_250 >= 225f && fLocal_250 < 315f)
									{
										if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH2", "EPS8_CH2_5", 6, iVar0, 0))
										{
											iLocal_280 = 4;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (MISC::GET_GAME_TIMER() > iLocal_289 + 8000)
		{
			if (iLocal_353 == 0)
			{
				if (!GlobalFunc_111())
				{
					iLocal_353 = 1;
				}
			}
			if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (iLocal_354 == 0)
				{
					if (GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_614, 200f))
					{
						if (!GlobalFunc_111())
						{
							if (iLocal_359 == 0)
							{
								if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH2", "EPS8_CH2_6", 6, iVar0, 0))
								{
									iLocal_354 = 1;
								}
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_578, 1))
				{
					if (iLocal_355 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH2", "EPS8_CH2_7", 6, iVar0, 0))
							{
								ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
								iLocal_355 = 1;
							}
						}
					}
				}
			}
			else if (iLocal_285 == 0)
			{
				iLocal_286 = MISC::GET_GAME_TIMER();
				iLocal_285 = 1;
			}
			else if (iLocal_285 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_286 + 2400)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH2", "EPS8_CH2_8", 6, iVar0, 0))
						{
							iLocal_285 = 2;
						}
					}
				}
			}
		}
	}
	if (iLocal_256 > iLocal_257 + 2)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_289 + 8000)
		{
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) == 25)
			{
				if (iLocal_279 == 0)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH3", "EPS8_CH3_1", 6, iVar0, 0))
						{
							iLocal_279 = 1;
						}
					}
				}
				else if (iLocal_279 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH3", "EPS8_CH3_2", 6, iVar0, 0))
						{
							iLocal_279 = 2;
						}
					}
				}
				else if (iLocal_279 == 2)
				{
					if (!GlobalFunc_111())
					{
						iLocal_279 = 3;
					}
				}
				else if (iLocal_279 == 3)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH3", "EPS8_CH3_3", 6, iVar0, 0))
						{
							iLocal_279 = 4;
						}
					}
				}
				else if (iLocal_279 == 4)
				{
					if (!GlobalFunc_111())
					{
						iLocal_279 = 5;
					}
				}
				else if (iLocal_279 == 5)
				{
					if (!GlobalFunc_111())
					{
						iLocal_279 = 6;
					}
				}
				else if (iLocal_279 == 6)
				{
					if (!GlobalFunc_111())
					{
						iLocal_279 = 7;
					}
				}
				else if (iLocal_279 == 7)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH3", "EPS8_CH3_4", 6, iVar0, 0))
						{
							iLocal_279 = 8;
						}
					}
				}
			}
		}
	}
}


bool func_54(int iParam0)//Position - 0x2ACC
{
	return func_55(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), PLAYER::PLAYER_PED_ID(), 250, 7);
}

bool func_55(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2AE6
{
	int iVar0;
	var uVar1;
	
	iVar0 = func_60(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar0 != -1)
		{
			GlobalFunc_169(&(Local_36[iVar0 /*4*/]));
		}
		return 0;
	}
	if (iVar0 == -1)
	{
		iVar0 = func_58();
		if (iVar0 == -1)
		{
			return 0;
		}
		Local_36[iVar0 /*4*/].f_1 = iParam0;
		Local_36[iVar0 /*4*/].f_2 = iParam1;
	}
	uVar1 = GlobalFunc_4957(&(Local_36[iVar0 /*4*/]), ENTITY::GET_ENTITY_COORDS(iParam0, 1), iParam1, &(Local_36[iVar0 /*4*/].f_3), iParam0, iParam3);
	return (uVar1 || (MISC::GET_GAME_TIMER() - Local_36[iVar0 /*4*/].f_3) < iParam2);
}



int func_58()//Position - 0x2D77
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


int func_60(int iParam0, int iParam1)//Position - 0x2DDC
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



















void func_79()//Position - 0x364F
{
	int iVar0;
	
	if (iLocal_310 == 1)
	{
		if (iLocal_294 == iLocal_256)
		{
			GlobalFunc_553(753);
		}
		AUDIO::TRIGGER_MUSIC_EVENT("EPS8_PASS");
		Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bStoleEpsilonCash = 1;
	}
	else
	{
		AUDIO::TRIGGER_MUSIC_EVENT("EPS8_PASS");
		Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bStoleEpsilonCash = 0;
	}
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < 20)
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), 20, 1);
		GlobalFunc_4(23, 20);
	}
	GlobalFunc_8960(23, 1);
	func_80(80, 1);
	iLocal_326 = 1;
	func_458();
}

void func_80(int iParam0, bool bParam1)//Position - 0x36D9
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8314();
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
	func_228(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_2365(&uVar1, GlobalFunc_8546());
	func_107();
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



























void func_107()//Position - 0x4A30
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		uVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(uVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6712(iVar1);
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
				if (func_222(iVar1, 14, iVar2))
				{
					func_108(iVar1, 14, iVar2);
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

int func_108(int iParam0, int iParam1, int iParam2)//Position - 0x4AF1
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(uParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!func_222(iParam0, iParam1, iParam2))
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
				func_108(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_108(iParam0, 14, uVar20[iVar18]))
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
		Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (func_149(iParam0, iVar0, &iVar46, 0))
	{
		func_111(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_109(iParam0, iVar0, &iVar46))
	{
		func_111(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}

int func_109(var uParam0, int iParam1, int iParam2)//Position - 0x4CAA
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_222(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}


int func_111(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x4D71
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
		Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8539(iParam1);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_147(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8539(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_119(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_111(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8539(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_119(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_111(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, iVar0, func_117(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_149(iParam0, iVar10, &iVar4, 1))
							{
								func_111(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_111(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10878(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_111(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_111(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_111(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_111(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10878(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_111(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_147(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8539(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_119(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_111(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_147(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8539(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_119(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_111(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_119(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_111(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11100(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (func_149(iParam0, iVar10, &iVar4, 0))
		{
			func_111(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_109(iParam0, iVar10, &iVar4))
		{
			func_111(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}






int func_117(int iParam0, int iParam1, int iParam2)//Position - 0x5D84
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_222(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_222(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7634(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_6694(iParam0, iParam1);
		}
	}
	return -99;
}


int func_119(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x612C
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
	
	iVar0 = -99;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = GlobalFunc_6694(uParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_6694(uParam0, 2);
				iVar0 = GlobalFunc_24(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		GlobalFunc_4911(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		GlobalFunc_4912(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (GlobalFunc_23(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!GlobalFunc_7633(uParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_7633(uParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11102(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case joaat("mpsv_lp0_31"):
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!GlobalFunc_7633(uParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11102(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_7633(uParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11102(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11102(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11102(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11102(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_7633(uParam0, 3, 176, 191) && !GlobalFunc_7633(uParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11102(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = GlobalFunc_6694(uParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_6694(uParam0, 11);
								iVar5 = GlobalFunc_11193(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_6694(uParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!GlobalFunc_22(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != -99)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = GlobalFunc_6694(uParam0, 8);
								iVar8 = GlobalFunc_6694(uParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11193(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11193(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = GlobalFunc_6694(uParam0, 11);
								iVar0 = GlobalFunc_11193(iParam1, -99, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}






























int func_149(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xA458
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_222(uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}









































































int func_222(int iParam0, int iParam1, int iParam2)//Position - 0x20D74
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar21;
	int iVar31;
	var uVar32;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10878(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != -99 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_222(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_222(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10878(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_222(iParam0, 14, iVar4))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_68106[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_6694(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10878(iVar0, iVar2, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_68106[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar32 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar31 = 0;
		while (iVar31 <= 8)
		{
			if (!func_222(iParam0, 14, uVar32[iVar31]))
			{
				return 0;
			}
			iVar31++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_68106[1 /*14*/].f_12) == Global_68106[1 /*14*/].f_4 || Global_68106[1 /*14*/].f_3 == -1))
		{
			return 1;
		}
	}
	else if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
	{
		return 1;
	}
	return 0;
}






void func_228(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x21539
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 1);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 1);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
	PLAYER::SET_PLAYER_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	PLAYER::SET_PLAYER_WEAPON_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	MISC::SET_TIME_SCALE(1f);
	GlobalFunc_53();
	GlobalFunc_52(1, 1);
	GlobalFunc_51();
	GlobalFunc_8618();
	GlobalFunc_49(30000);
	if (iParam1 == 1)
	{
		GlobalFunc_7620(iParam0, iParam2, iParam3);
	}
	HUD::SET_MISSION_NAME(0, 0);
}












































void func_272()//Position - 0x28179
{
	if (GlobalFunc_4924(iLocal_577))
	{
		if (GlobalFunc_4947(iLocal_614))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_577, iLocal_614, 0))
			{
				if (GlobalFunc_115(iLocal_631))
				{
					if (TASK::CONTROL_MOUNTED_WEAPON(iLocal_577))
					{
						TASK::SET_MOUNTED_WEAPON_TARGET(iLocal_577, 0, iLocal_631, 0f, 0f, 0f);
					}
				}
				if (iLocal_332 == 0)
				{
					Local_208 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					iLocal_259 = SYSTEM::ROUND((Local_208.f_2 + 20f));
					if (iLocal_259 == 0)
					{
					}
					if (iLocal_269 < 2)
					{
						if (iLocal_271 == 0)
						{
							if (iLocal_359 == 0)
							{
								if (iLocal_363 == 0)
								{
									if (GlobalFunc_115(iLocal_631))
									{
										TASK::TASK_HELI_MISSION(iLocal_577, iLocal_614, iLocal_631, 0, 0f, 0f, 0f, 4, fLocal_152, 50f, -1f, -1, 40, -1082130432, 0);
									}
								}
							}
							else
							{
								TASK::TASK_HELI_MISSION(iLocal_577, iLocal_614, 0, 0, ENTITY::GET_ENTITY_COORDS(iLocal_614, 1), 4, 0.1f, -1f, -1f, iLocal_259 + 100, 100, -1082130432, 0);
							}
							iLocal_272 = MISC::GET_GAME_TIMER();
							iLocal_271 = 1;
						}
						else if (iLocal_271 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_289 + 10000)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_614, 0) < 85f)
								{
									if (iLocal_278 < 25)
									{
										PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Local_208, iLocal_278, &Local_220, 1, 1077936128, 0);
										if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_220, 65f) && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_220, 40f))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
											{
												if (iLocal_359 == 0)
												{
												}
											}
											else if (iLocal_359 == 0)
											{
											}
											iLocal_272 = MISC::GET_GAME_TIMER();
											iLocal_271 = 2;
											iLocal_278 = 1;
										}
										else
										{
											iLocal_278++;
										}
									}
									else
									{
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
										{
											if (iLocal_359 == 0)
											{
											}
										}
										else if (iLocal_359 == 0)
										{
										}
										iLocal_272 = MISC::GET_GAME_TIMER();
										iLocal_271 = 2;
										iLocal_278 = 1;
									}
								}
							}
						}
						else if (iLocal_271 == 2)
						{
							iLocal_273 = MISC::GET_GAME_TIMER();
							if ((iLocal_273 > iLocal_272 + 20000 || !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_614, 85f)) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								iLocal_271 = 0;
							}
						}
						if (MISC::GET_GAME_TIMER() > iLocal_289 + 8000)
						{
							if (iLocal_256 == iLocal_257 + 1 || iLocal_363 == 1)
							{
								iLocal_363 = 1;
								if (!AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
								{
									if (iLocal_364 == 0)
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
										{
											iLocal_364 = 1;
										}
									}
									if (iLocal_366 == 0)
									{
										if (GlobalFunc_10652(&uLocal_389, "EPS8AU", "EPS8_HEL3", 7, 0, 0, 0))
										{
											iLocal_366 = 1;
										}
									}
									if (fLocal_145 > 300f)
									{
										fLocal_145 = (fLocal_145 - 0.1f);
									}
									if (fLocal_152 > 28f)
									{
										fLocal_152 = (fLocal_152 - 0.02f);
									}
								}
								if (iLocal_299 == 0)
								{
									if (iLocal_359 == 0)
									{
										if (GlobalFunc_115(iLocal_631))
										{
											TASK::TASK_HELI_MISSION(iLocal_577, iLocal_614, iLocal_631, 0, 0f, 0f, 0f, 4, fLocal_152, 50f, -1f, -1, 40, -1082130432, 0);
										}
										TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_577, fLocal_152);
										iLocal_299++;
									}
								}
								else
								{
									iLocal_299++;
									if (iLocal_299 > 30)
									{
										iLocal_299 = 0;
									}
								}
								if (iLocal_280 > 3)
								{
									if (func_54(iLocal_577))
									{
										iLocal_269 = 0;
										if (iLocal_359 == 1)
										{
											TASK::TASK_HELI_MISSION(iLocal_577, iLocal_614, 0, PLAYER::PLAYER_PED_ID(), Local_208, 9, 200f, 2f, -1f, iLocal_259 + 10, 50, -1082130432, 0);
											if (iLocal_261 > 0)
											{
												if (!GlobalFunc_111())
												{
													if (iLocal_283 == 0)
													{
														if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_HEL2", "EPS8_HEL2_1", 5, 0, 0))
														{
															iLocal_283 = 1;
														}
													}
													else if (iLocal_283 == 1)
													{
														if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_HEL2", "EPS8_HEL2_2", 5, 0, 0))
														{
															iLocal_283 = 2;
														}
													}
												}
											}
										}
										iLocal_359 = 0;
										if (GlobalFunc_4924(iLocal_578))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_578, 780511057) != 1)
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_578, 242628503) != 1)
												{
													TASK::TASK_COMBAT_PED(iLocal_578, PLAYER::PLAYER_PED_ID(), 0, 16);
												}
											}
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
									{
										if (iLocal_269 == 0)
										{
											iLocal_267 = MISC::GET_GAME_TIMER();
											iLocal_269 = 1;
										}
										else if (iLocal_269 == 1)
										{
											iLocal_268 = MISC::GET_GAME_TIMER();
											if (iLocal_268 > iLocal_267 + 4000)
											{
												if (GlobalFunc_4924(iLocal_578))
												{
													TASK::CLEAR_PED_TASKS(iLocal_578);
												}
												if (iLocal_359 == 0)
												{
													TASK::TASK_HELI_MISSION(iLocal_577, iLocal_614, 0, 0, ENTITY::GET_ENTITY_COORDS(iLocal_614, 1), 4, 0.1f, -1f, -1f, -1, 100, -1082130432, 0);
												}
												iLocal_359 = 1;
											}
											if (!GlobalFunc_111())
											{
												if (iLocal_268 > iLocal_267 + 10000)
												{
													if (iLocal_261 == 0)
													{
														if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH2", "EPS8_CH2_9", 5, 0, 0))
														{
															iLocal_261 = 1;
														}
													}
												}
												if (iLocal_268 > iLocal_267 + 25000)
												{
													if (iLocal_261 == 1)
													{
														if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH2", "EPS8_CH2_10", 5, 0, 0))
														{
															iLocal_261 = 2;
														}
													}
												}
												if (iLocal_268 > (iLocal_267 + 40000))
												{
													if (iLocal_261 == 2)
													{
														if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_CH2", "EPS8_CH2_11", 5, 0, 0))
														{
															RECORDING::_0x293220DA1B46CEBC(5f, 5f, 1);
															iLocal_261 = 3;
															iLocal_269 = 2;
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
					else
					{
						TASK::TASK_HELI_MISSION(iLocal_577, iLocal_614, 0, 0, (Local_208.x + 600f), (Local_208.f_1 + 600f), (Local_208.f_2 + 100f), 4, 200f, -1f, -1f, -1, 100, -1082130432, 0);
						ENTITY::SET_ENTITY_COLLISION(iLocal_614, 0, 0);
						iLocal_372 = 1;
					}
				}
			}
		}
	}
}



void func_275()//Position - 0x2874E
{
	if (iLocal_335 == 0)
	{
		if (iLocal_332 == 0)
		{
			if (iLocal_567 == 8)
			{
				GlobalFunc_146(&iLocal_934);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_631))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_937))
					{
						iLocal_937 = GlobalFunc_5743(iLocal_631, 1, 5);
						if (iLocal_567 == 3)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_938))
							{
								GlobalFunc_146(&iLocal_938);
								if (iLocal_331 == 0)
								{
									GlobalFunc_164("EPS8_06", 7500, 0);
									iLocal_331 = 1;
								}
							}
						}
						else if (iLocal_567 == 4)
						{
							if (HUD::DOES_BLIP_EXIST(iLocal_934))
							{
								GlobalFunc_146(&iLocal_934);
								if (iLocal_331 == 0)
								{
									GlobalFunc_164("EPS8_06", 7500, 0);
									iLocal_331 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 17f)
					{
						if (iLocal_329 == 1)
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_631, 5, 0);
							iLocal_329 = 0;
						}
					}
					GlobalFunc_146(&iLocal_937);
					if (iLocal_567 == 3)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_938))
						{
							iLocal_938 = GlobalFunc_5743(uLocal_615[0], 1, 5);
							if (iLocal_357 == 0)
							{
								GlobalFunc_164("EPS8_05", 7500, 0);
								iLocal_357 = 1;
							}
						}
					}
					else if (iLocal_567 == 4)
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_934))
						{
							iLocal_934 = HUD::ADD_BLIP_FOR_COORD(Local_157);
						}
					}
				}
			}
		}
		else
		{
			if (iLocal_567 == 8)
			{
				GlobalFunc_146(&iLocal_937);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_614))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_614, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_934))
					{
						iLocal_934 = HUD::ADD_BLIP_FOR_COORD(Local_157);
					}
				}
				else
				{
					GlobalFunc_146(&iLocal_934);
				}
			}
		}
	}
	else
	{
		if (iLocal_567 == 8)
		{
			GlobalFunc_146(&iLocal_937);
		}
		if (iLocal_567 == 8)
		{
			GlobalFunc_146(&iLocal_934);
		}
	}
}


void func_277()//Position - 0x2892E
{
	if (GlobalFunc_115(iLocal_614))
	{
		if ((((VEHICLE::GET_HELI_MAIN_ROTOR_HEALTH(iLocal_614) < 200f || VEHICLE::GET_HELI_TAIL_BOOM_HEALTH(iLocal_614) < 200f) || VEHICLE::GET_HELI_TAIL_ROTOR_HEALTH(iLocal_614) < 200f) || ENTITY::GET_ENTITY_HEALTH(iLocal_614) < 200) || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_614) < 200f)
		{
			VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_614, 0, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_615[iLocal_255]))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_615[iLocal_255], 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_579[iLocal_255]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_579[iLocal_255], 1, 0);
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_587[iLocal_255]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_587[iLocal_255], 1, 0);
			}
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_615[iLocal_255], 0);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_615[iLocal_255]));
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_579[iLocal_255]))
	{
		if (!GlobalFunc_4924(uLocal_579[iLocal_255]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_910[iLocal_255]))
			{
				GlobalFunc_146(&(iLocal_910[iLocal_255]));
				iLocal_257++;
				iLocal_294++;
			}
		}
		else if (!GlobalFunc_155(uLocal_579[iLocal_255], PLAYER::PLAYER_PED_ID(), fLocal_143))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_910[iLocal_255]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_579[iLocal_255]))
				{
					GlobalFunc_146(&(iLocal_910[iLocal_255]));
					GlobalFunc_69(&(uLocal_579[iLocal_255]));
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_615[iLocal_255]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_615[iLocal_255]))
						{
							if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_615[iLocal_255]))
							{
								GlobalFunc_6692(&(uLocal_615[iLocal_255]));
							}
						}
					}
					iLocal_257++;
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(iLocal_910[iLocal_255]))
		{
			if (iLocal_255 != 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -367.5617f, -107.3702f, 32.44559f, -356.0586f, -74.55742f, 50.42249f, 82.25f, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_579[iLocal_255], -361.7977f, -108.5845f, 67.12477f, -347.5992f, -65.6332f, 36.46431f, 174.75f, 0, 1, 0))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_579[iLocal_255], 1, 0);
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_579[iLocal_255], 780511057) != 1)
						{
							TASK::TASK_COMBAT_PED(uLocal_579[iLocal_255], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						iLocal_340[iLocal_255] = 1;
					}
					else
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_579[iLocal_255], 1, 1);
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_615[iLocal_255]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_579[iLocal_255], -1817882002) != 1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_579[iLocal_255], 1), Local_223, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_579[iLocal_255], 1), Local_226, 1))
								{
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_579[iLocal_255], uLocal_615[iLocal_255], Local_223, 50f, 0, ENTITY::GET_ENTITY_MODEL(uLocal_615[iLocal_255]), 786468, 7f, 1f);
								}
								else
								{
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_579[iLocal_255], uLocal_615[iLocal_255], Local_226, 50f, 0, ENTITY::GET_ENTITY_MODEL(uLocal_615[iLocal_255]), 786468, 7f, 1f);
								}
							}
						}
					}
				}
				else
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_579[iLocal_255], 1, 1);
					if (iLocal_340[iLocal_255] == 1)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_615[iLocal_255]))
							{
								if (PED::IS_PED_IN_VEHICLE(uLocal_579[iLocal_255], uLocal_615[iLocal_255], 0))
								{
									iLocal_340[iLocal_255] = 0;
								}
								else if (GlobalFunc_4924(uLocal_579[iLocal_255]))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_579[iLocal_255], -1794415470) != 1)
									{
										TASK::TASK_ENTER_VEHICLE(uLocal_579[iLocal_255], uLocal_615[iLocal_255], 20000, -1, 2f, 1, 0);
									}
								}
							}
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_579[iLocal_255], 780511057) != 1)
					{
						TASK::TASK_COMBAT_PED(uLocal_579[iLocal_255], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_615[iLocal_255]))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_579[iLocal_255], uLocal_615[iLocal_255], 0))
					{
					}
				}
			}
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uLocal_579[iLocal_255]))
			{
				HUD::SET_BLIP_SCALE(iLocal_910[iLocal_255], fLocal_147);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (iLocal_315[iLocal_255] == 0)
					{
						if (fLocal_248 <= 50f)
						{
							iLocal_315[iLocal_255] = 1;
						}
					}
					else if (fLocal_248 > 50f)
					{
						iLocal_315[iLocal_255] = 0;
					}
				}
			}
			else
			{
				HUD::SET_BLIP_SCALE(iLocal_910[iLocal_255], fLocal_146);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_587[iLocal_255]))
	{
		if (!GlobalFunc_4924(uLocal_587[iLocal_255]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_918[iLocal_255]))
			{
				GlobalFunc_146(&(iLocal_918[iLocal_255]));
				iLocal_257++;
				iLocal_294++;
			}
		}
		else if (!GlobalFunc_155(uLocal_587[iLocal_255], PLAYER::PLAYER_PED_ID(), fLocal_143))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_918[iLocal_255]))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_587[iLocal_255]))
				{
					GlobalFunc_146(&(iLocal_918[iLocal_255]));
					GlobalFunc_69(&(uLocal_587[iLocal_255]));
					iLocal_257++;
				}
			}
		}
		else
		{
			PED::SET_PED_FIRING_PATTERN(uLocal_587[iLocal_255], -753768974);
		}
	}
	if (iLocal_298 != -1)
	{
		if (!GlobalFunc_4924(uLocal_569[iLocal_298]))
		{
			iLocal_298 = -1;
			iLocal_373 = 0;
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_569[iLocal_298], -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_569[iLocal_298], -1273030092) != 0)
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(uLocal_569[iLocal_298], iLocal_631, PLAYER::PLAYER_PED_ID(), 8, 40f, 786468, 100f, 30f, 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_569[iLocal_255]))
	{
		if (!GlobalFunc_4924(uLocal_569[iLocal_255]))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_926[iLocal_255]))
			{
				GlobalFunc_146(&(iLocal_926[iLocal_255]));
				iLocal_257++;
				iLocal_294++;
			}
		}
		else if (!GlobalFunc_155(uLocal_569[iLocal_255], PLAYER::PLAYER_PED_ID(), fLocal_144))
		{
			if (!PED::IS_PED_IN_VEHICLE(uLocal_569[iLocal_255], iLocal_631, 0))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_926[iLocal_255]))
				{
					GlobalFunc_146(&(iLocal_926[iLocal_255]));
					if (iLocal_298 == iLocal_255)
					{
						iLocal_298 = -1;
						iLocal_373 = 0;
					}
					iLocal_257++;
				}
			}
		}
		else if (iLocal_255 != 5)
		{
			if (iLocal_373 == 0)
			{
				if (iLocal_335 == 0)
				{
					if (GlobalFunc_155(uLocal_569[iLocal_255], iLocal_631, 60f))
					{
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_631, 30f))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
							{
								if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_631, -1))
								{
									iLocal_298 = iLocal_255;
									if (iLocal_327 == 1)
									{
										PATHFIND::SET_ROADS_IN_ANGLED_AREA(-397.6181f, -63.27855f, 42.65886f, -345.0219f, -93.33459f, 49.65768f, 24.75f, 0, 1, 1);
									}
									TASK::CLEAR_PED_TASKS(uLocal_569[iLocal_298]);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_569[iLocal_298], 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[iLocal_298], 1, 1);
									iLocal_373 = 1;
								}
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_255 == 1 || iLocal_255 == 4)
	{
		if (!GlobalFunc_4924(iLocal_595))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_935))
			{
				GlobalFunc_146(&iLocal_935);
				GlobalFunc_200(&uLocal_389, 2);
				iLocal_257++;
				iLocal_294++;
			}
		}
		else if (!GlobalFunc_155(iLocal_595, PLAYER::PLAYER_PED_ID(), fLocal_144))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_935))
			{
				GlobalFunc_146(&iLocal_935);
				iLocal_257++;
			}
		}
	}
	if (iLocal_255 == 2 || iLocal_255 == 6)
	{
		if (!GlobalFunc_4924(iLocal_577))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_936))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_614))
				{
					VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_614, 0, 1);
					iLocal_372 = 1;
				}
				iLocal_263 = MISC::GET_GAME_TIMER();
				GlobalFunc_200(&uLocal_389, 3);
				GlobalFunc_146(&iLocal_936);
				iLocal_257++;
				iLocal_294++;
			}
		}
		else if (!GlobalFunc_155(iLocal_577, PLAYER::PLAYER_PED_ID(), fLocal_145) && MISC::GET_GAME_TIMER() > iLocal_289 + 15000)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_936))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_577))
				{
					iLocal_263 = MISC::GET_GAME_TIMER();
					GlobalFunc_200(&uLocal_389, 3);
					GlobalFunc_146(&iLocal_936);
					GlobalFunc_69(&iLocal_577);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_614))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_614))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_578))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_578, iLocal_614, 0))
								{
									GlobalFunc_69(&iLocal_578);
								}
							}
							if (iLocal_332 == 0)
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
								{
									if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_614, 0))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_614))
										{
											GlobalFunc_6692(&iLocal_614);
										}
									}
								}
							}
						}
					}
					iLocal_257++;
				}
			}
		}
	}
	iLocal_255++;
	if (iLocal_255 == 7)
	{
		iLocal_255 = 0;
	}
}


void func_279()//Position - 0x29201
{
	GlobalFunc_146(&iLocal_938);
	GlobalFunc_146(&iLocal_939);
	if (GlobalFunc_4924(iLocal_595))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_935))
		{
			if (GlobalFunc_155(iLocal_595, PLAYER::PLAYER_PED_ID(), fLocal_144))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_595, 0))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_595, 1, 0);
					iLocal_935 = GlobalFunc_4955(iLocal_595, 1, 0, 3);
					HUD::SET_BLIP_SCALE(iLocal_935, fLocal_146);
					TASK::TASK_COMBAT_PED(iLocal_595, PLAYER::PLAYER_PED_ID(), 0, 16);
					iLocal_256++;
				}
			}
		}
	}
	if (GlobalFunc_4924(uLocal_579[iLocal_255]))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_910[iLocal_255]))
		{
			if ((PED::IS_PED_IN_COMBAT(uLocal_579[iLocal_255], PLAYER::PLAYER_PED_ID()) || MISC::GET_GAME_TIMER() > iLocal_289 + 20000) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -335.8581f, -97.34045f, 62.20868f, -403.0932f, -76.60052f, 25.80415f, 34f, 0, 1, 0))
			{
				iLocal_910[iLocal_255] = GlobalFunc_4955(uLocal_579[iLocal_255], 1, 0, 5);
				HUD::SET_BLIP_SCALE(iLocal_910[iLocal_255], fLocal_147);
				if (iLocal_255 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_615[0]))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_615[0]))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_615[0]);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_615[iLocal_255]))
				{
					if (iLocal_327 == 1)
					{
						if (iLocal_255 == 0)
						{
							if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_615[iLocal_255]))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_579[iLocal_255], 1, 0);
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_587[iLocal_255]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_587[iLocal_255]))
									{
										if (!PED::IS_PED_INJURED(uLocal_587[iLocal_255]))
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_587[iLocal_255], 1, 0);
										}
									}
								}
							}
						}
					}
					TASK::TASK_VEHICLE_ESCORT(uLocal_579[iLocal_255], uLocal_615[iLocal_255], PLAYER::PLAYER_PED_ID(), 0, 200f, 786468, -1082130432, 20, 1101004800);
				}
				else
				{
					TASK::TASK_COMBAT_PED(uLocal_579[iLocal_255], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				iLocal_256++;
			}
		}
	}
	if (GlobalFunc_4924(uLocal_587[iLocal_255]))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_918[iLocal_255]))
		{
			if ((PED::IS_PED_IN_COMBAT(uLocal_587[iLocal_255], PLAYER::PLAYER_PED_ID()) || MISC::GET_GAME_TIMER() > iLocal_289 + 20100) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -335.8581f, -97.34045f, 62.20868f, -403.0932f, -76.60052f, 25.80415f, 34f, 0, 1, 0))
			{
				iLocal_918[iLocal_255] = GlobalFunc_4955(uLocal_587[iLocal_255], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_918[iLocal_255], fLocal_146);
				TASK::TASK_COMBAT_PED(uLocal_587[iLocal_255], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_256++;
			}
		}
	}
	if (GlobalFunc_4924(uLocal_569[iLocal_255]))
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_926[iLocal_255]))
		{
			if (PED::IS_PED_IN_COMBAT(uLocal_569[iLocal_255], PLAYER::PLAYER_PED_ID()) || MISC::GET_GAME_TIMER() > iLocal_289 + 50)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_569[iLocal_255], 0))
				{
					if (GlobalFunc_155(uLocal_569[iLocal_255], PLAYER::PLAYER_PED_ID(), fLocal_144))
					{
						if (iLocal_255 == 5)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[iLocal_255], 1, 0);
						}
						iLocal_926[iLocal_255] = GlobalFunc_4955(uLocal_569[iLocal_255], 1, 0, 3);
						HUD::SET_BLIP_SCALE(iLocal_926[iLocal_255], fLocal_146);
						TASK::TASK_COMBAT_PED(uLocal_569[iLocal_255], PLAYER::PLAYER_PED_ID(), 0, 16);
						iLocal_256++;
					}
				}
			}
		}
	}
	if (iLocal_314 == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_289 + 300)
		{
			if (GlobalFunc_4947(iLocal_614))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_614))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_614);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_614, 1, 1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_577))
				{
					if (!HUD::DOES_BLIP_EXIST(iLocal_936))
					{
						iLocal_936 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_577);
						if (PED::IS_PED_IN_VEHICLE(iLocal_577, iLocal_614, 0) && iLocal_332 == 0)
						{
							HUD::SET_BLIP_SCALE(iLocal_936, fLocal_147);
							HUD::SET_BLIP_PRIORITY(iLocal_936, 7);
							HUD::SET_BLIP_SPRITE(iLocal_936, 353);
							HUD::SET_BLIP_COLOUR(iLocal_936, 1);
						}
						else
						{
							HUD::SET_BLIP_SCALE(iLocal_936, fLocal_146);
							HUD::SET_BLIP_PRIORITY(iLocal_936, 3);
							if (GlobalFunc_4924(iLocal_577))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_577, iLocal_614, 0))
								{
									TASK::TASK_LEAVE_VEHICLE(iLocal_577, iLocal_614, 0);
								}
							}
							if (GlobalFunc_4924(iLocal_595))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_595, iLocal_614, 0))
								{
									TASK::TASK_LEAVE_VEHICLE(iLocal_595, iLocal_614, 0);
								}
							}
							if (GlobalFunc_4924(uLocal_569[5]))
							{
								if (PED::IS_PED_IN_VEHICLE(uLocal_569[5], iLocal_614, 0))
								{
									TASK::TASK_LEAVE_VEHICLE(uLocal_569[5], iLocal_614, 0);
								}
							}
							if (GlobalFunc_4924(iLocal_578))
							{
								if (PED::IS_PED_IN_VEHICLE(iLocal_578, iLocal_614, 0))
								{
									TASK::TASK_LEAVE_VEHICLE(iLocal_578, iLocal_614, 0);
								}
							}
						}
						iLocal_256++;
					}
				}
				if (GlobalFunc_4924(iLocal_578))
				{
					TASK::TASK_COMBAT_PED(iLocal_578, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			iLocal_314 = 1;
		}
	}
	iLocal_255++;
	if (iLocal_255 == 7)
	{
		iLocal_255 = 0;
	}
}






void func_285()//Position - 0x297EF
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_COMPLIANCE"))
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_NON_COMPLIANCE"))
		{
			if (GlobalFunc_115(uLocal_615[0]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[0], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (GlobalFunc_115(uLocal_615[1]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[1], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (GlobalFunc_115(uLocal_615[2]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[2], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (GlobalFunc_115(uLocal_615[3]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[3], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (GlobalFunc_115(uLocal_615[4]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[4], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (GlobalFunc_115(uLocal_615[5]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[5], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (GlobalFunc_115(uLocal_615[6]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[6], "EPSILONISM_08_NON_COMPLIANCE_ENEMY_CAR", 0);
			}
			if (GlobalFunc_115(iLocal_614))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_614, "EPSILONISM_08_NON_COMPLIANCE_HELI", 0);
			}
			AUDIO::START_AUDIO_SCENE("EPSILONISM_08_NON_COMPLIANCE");
		}
	}
	else
	{
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_08_COMPLIANCE");
	}
}

void func_286()//Position - 0x298FD
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_COMPLIANCE"))
	{
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_08_COMPLIANCE");
	}
}

void func_287()//Position - 0x29918
{
	func_295();
	func_293();
	func_290();
	func_289();
	if (iLocal_368 == 0)
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
		{
			iLocal_939 = GlobalFunc_4955(iLocal_595, 1, 1, 5);
			HUD::SET_BLIP_SCALE(iLocal_939, fLocal_146);
			iLocal_368 = 1;
		}
	}
	if (iLocal_330 == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_292 + 6500)
		{
			if (GlobalFunc_4924(uLocal_569[5]))
			{
				func_288();
			}
		}
	}
	if (iLocal_330 == 1)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_291 + 10000 || PED::IS_PED_IN_VEHICLE(uLocal_569[5], iLocal_614, 0))
		{
			iLocal_311 = 1;
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_595))
	{
		GlobalFunc_146(&iLocal_939);
	}
}

void func_288()//Position - 0x299C4
{
	var uVar0;
	
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(PLAYER::PLAYER_PED_ID());
	}
	if ((GlobalFunc_4924(uLocal_569[5]) && GlobalFunc_115(iLocal_631)) && GlobalFunc_115(iLocal_614))
	{
		switch (iLocal_386)
		{
			case 0:
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				if (GlobalFunc_115(iLocal_631))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_631, 0f, -3.2f, 0f), 1f, -1, 0.4f, 1024, 140.8925f);
				}
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(uLocal_569[5], uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				iLocal_386 = 5;
				break;
			
			case 1:
				if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -371.3996f, -88.47154f, 44.65829f, -378.7455f, -85.82195f, 48.21037f, 5.75f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(-378.46f, -88.44f, 45.66f, 2f)) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_631)) && PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_595, 120f))
				{
					uLocal_308 = PED::CREATE_SYNCHRONIZED_SCENE(-356.91f, -89.03f, 45.875f, 0f, 0f, -120f, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(uLocal_569[5], uLocal_308, "rcmepsilonism8", "grab_all_4_bags_carrier", 4f, -2f, 0, 0, 1148846080, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_631, uLocal_308, "grab_all_4_bags_car", "rcmepsilonism8", 1000f, -1.5f, 0, 1148846080);
					iLocal_386 = 2;
					ENTITY::DETACH_ENTITY(uLocal_596[0], 1, 1);
					ENTITY::DETACH_ENTITY(uLocal_596[1], 1, 1);
					ENTITY::DETACH_ENTITY(uLocal_596[2], 1, 1);
					ENTITY::DETACH_ENTITY(uLocal_596[3], 1, 1);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_596[0], uLocal_308, "base_bag_1", "rcmepsilonism8", 1000f, -1000f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_596[1], uLocal_308, "base_bag_2", "rcmepsilonism8", 1000f, -1000f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_596[2], uLocal_308, "base_bag_3", "rcmepsilonism8", 1000f, -1000f, 0, 1148846080);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_596[3], uLocal_308, "base_bag_4", "rcmepsilonism8", 1000f, -1000f, 0, 1148846080);
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_308, 0.098f);
				}
				break;
			
			case 2:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_308))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) >= 0.126f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) < 0.237f)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[0], uLocal_569[5]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_596[0], uLocal_569[5], PED::GET_PED_BONE_INDEX(uLocal_569[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_596[0], 0);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(uLocal_596[0]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) >= 0.237f)
						{
							ENTITY::DETACH_ENTITY(uLocal_596[0], 1, 1);
							OBJECT::DELETE_OBJECT(&(uLocal_596[0]));
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) >= 0.347f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) < 0.455f)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[1], uLocal_569[5]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_596[1], uLocal_569[5], PED::GET_PED_BONE_INDEX(uLocal_569[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_596[1], 0);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(uLocal_596[1]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) >= 0.455f)
						{
							ENTITY::DETACH_ENTITY(uLocal_596[1], 1, 1);
							OBJECT::DELETE_OBJECT(&(uLocal_596[1]));
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) >= 0.563f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) < 0.678f)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[2], uLocal_569[5]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_596[2], uLocal_569[5], PED::GET_PED_BONE_INDEX(uLocal_569[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_596[2], 0);
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(uLocal_596[2]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) >= 0.678f)
						{
							ENTITY::DETACH_ENTITY(uLocal_596[2], 1, 1);
							OBJECT::DELETE_OBJECT(&(uLocal_596[2]));
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) >= 0.789f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) < 0.901f)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[3], uLocal_569[5]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_596[3], uLocal_569[5], PED::GET_PED_BONE_INDEX(uLocal_569[5], 28422), 0.25f, 0.075f, -0.3f, 50f, 50f, -135f, 0, 0, 0, 0, 2, 1);
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_596[3], 0);
							iLocal_335 = 1;
						}
					}
					else if (ENTITY::DOES_ENTITY_EXIST(uLocal_596[3]))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) >= 0.901f)
						{
						}
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_308) >= 0.903f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_596[3]))
						{
							ENTITY::DETACH_ENTITY(uLocal_596[3], 1, 1);
							OBJECT::DELETE_OBJECT(&(uLocal_596[3]));
						}
						TASK::CLEAR_PED_TASKS(uLocal_569[5]);
						PED::SET_PED_KEEP_TASK(uLocal_569[5], 1);
						TASK::TASK_ENTER_VEHICLE(uLocal_569[5], iLocal_614, 20000, 1, 1f, 1, 0);
						iLocal_291 = MISC::GET_GAME_TIMER();
						iLocal_330 = 1;
						iLocal_386 = 5;
					}
				}
				break;
			
			case 3:
				if ((GlobalFunc_775(uLocal_569[5], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_614, -1.5f, 0f, 0f), 0.5f) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_569[5], 713668775) != 1) && TASK::GET_SCRIPT_TASK_STATUS(uLocal_569[5], 713668775) != 0)
				{
					TASK::STOP_ANIM_TASK(uLocal_569[5], "rcmepsilonism8", "bag_handler_walk", -1056964608);
					TASK::TASK_PLAY_ANIM(uLocal_569[5], "rcmepsilonism8", "bag_handler_load_walk_away_left", 8f, -8f, -1, 639044, 0, 0, 0, 0);
					iLocal_386 = 4;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_569[5], 713668775) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_569[5], 713668775) != 0)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_569[5], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_614, -1.5f, 0f, 0f), 1f, -1, 0.4f, 0, (ENTITY::GET_ENTITY_HEADING(iLocal_614) - 90f));
				}
				break;
			
			case 4:
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_569[5], "rcmepsilonism8", "bag_handler_load_walk_away_left", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_569[5], "rcmepsilonism8", "bag_handler_load_walk_away_left") > 0.5f)
				{
					ENTITY::DETACH_ENTITY(uLocal_596[iLocal_303], 1, 1);
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_569[5], "rcmepsilonism8", "bag_handler_load_walk_away_left", 3) || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_569[5], "rcmepsilonism8", "bag_handler_load_walk_away_left") > 0.8f)
				{
					GlobalFunc_130(&(uLocal_596[iLocal_303]));
					PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(uLocal_569[5], 1, -1000f);
					PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(uLocal_569[5], 0, -1000f);
					iLocal_303++;
					if (iLocal_303 == iLocal_149)
					{
						TASK::CLEAR_PED_TASKS(uLocal_569[5]);
						PED::SET_PED_KEEP_TASK(uLocal_569[5], 1);
						TASK::TASK_ENTER_VEHICLE(uLocal_569[5], iLocal_614, 20000, 1, 1f, 1, 0);
						iLocal_291 = MISC::GET_GAME_TIMER();
						iLocal_330 = 1;
						iLocal_386 = 5;
					}
					else
					{
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_569[5], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_631, 0f, -3.2f, 0f), 1f, -1, 0.3f, 0, ENTITY::GET_ENTITY_HEADING(iLocal_631));
						iLocal_386 = 1;
					}
				}
				break;
			
			case 5:
				break;
			}
	}
}

void func_289()//Position - 0x2A190
{
	if (iLocal_361 == 1)
	{
		if (GlobalFunc_4924(iLocal_595))
		{
			if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_595, 90f) || GlobalFunc_155(PLAYER::PLAYER_PED_ID(), iLocal_595, 50f))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
	}
}

void func_290()//Position - 0x2A1DB
{
	float fVar0;
	var uVar1;
	struct<6> Var2;
	struct<6> Var8;
	
	if (iLocal_335 == 0)
	{
		if (iLocal_297 == 0)
		{
			Local_217 = { ENTITY::GET_ENTITY_COORDS(iLocal_631, 1) };
			if (((Local_217.x < (Local_214.x - 0.3f) || Local_217.x > (Local_214.x + 0.3f)) || Local_217.f_1 < (Local_214.f_1 - 0.3f)) || Local_217.f_1 > (Local_214.f_1 + 0.3f))
			{
				iLocal_297 = 1;
				iLocal_295 = MISC::GET_GAME_TIMER();
			}
		}
		if (iLocal_297 == 1)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_295 + 3500 && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631))
			{
				iLocal_310 = 1;
			}
		}
	}
	if (GlobalFunc_4924(iLocal_595) && GlobalFunc_4947(iLocal_632))
	{
		if (GlobalFunc_155(iLocal_595, iLocal_632, 15f))
		{
			if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_595, iLocal_632))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_595, iLocal_632, -1, 0, 2);
			}
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
		{
			if (GlobalFunc_155(iLocal_595, iLocal_632, 5f))
			{
				if (iLocal_339 == 0)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_595, 242628503) != 1)
					{
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_595, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_943);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_632, 0);
						TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
						TASK::TASK_PLAY_ANIM(0, "rcmepsilonism8", "worship_enter", 2f, -2f, -1, 786432, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "rcmepsilonism8", "worship_base", 2f, -2f, -1, 786432, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "rcmepsilonism8", "worship_idle_a", 2f, -2f, -1, 786432, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "rcmepsilonism8", "worship_base", 2f, -2f, -1, 786433, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_943);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_595, uLocal_943);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_943);
						RECORDING::_0x293220DA1B46CEBC(5f, 10f, 1);
						iLocal_339 = 1;
					}
				}
				iLocal_337 = 1;
				if (iLocal_333 == 1)
				{
					if (iLocal_365 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10652(&uLocal_389, "EPS8AU", "EPS8_PRAY", 7, 0, 0, 0))
							{
								iLocal_361 = 0;
								iLocal_365 = 1;
								iLocal_288 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_632, 10000, 0, 2);
							}
						}
					}
				}
			}
			if (iLocal_337 == 0)
			{
				if (GlobalFunc_155(iLocal_595, PLAYER::PLAYER_PED_ID(), 9f))
				{
					if ((!GlobalFunc_663("EPS8_16", 0, 0) && !GlobalFunc_663("EPS8_11", 0, 0)) && !GlobalFunc_155(iLocal_595, iLocal_614, 8f))
					{
						if (!GlobalFunc_111())
						{
							if (iLocal_287 == 0)
							{
								if (GlobalFunc_10652(&uLocal_389, "EPS8AU", "EPS8_E1", 7, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(5f, 10f, 1);
									iLocal_287 = 3;
								}
							}
						}
					}
				}
				if (iLocal_382 == 0)
				{
					if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_595, "rcmepsilonism8", "jump_off_heli", 3) && ENTITY::FIND_ANIM_EVENT_PHASE("rcmepsilonism8", "jump_off_heli", "WalkInterruptible", &fVar0, &uVar1)) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_595, "rcmepsilonism8", "jump_off_heli") >= fVar0)
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_595))
						{
							PED::FORCE_PED_MOTION_STATE(iLocal_595, -668482597, 0, 0, 0);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_595, 1f);
							TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_595, -377.228f, -87.0252f, 44.6583f, 1f, 20000, 1193033728, 1056964608);
							iLocal_382 = 1;
							iLocal_309 = MISC::GET_GAME_TIMER();
						}
					}
					else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_595, "rcmepsilonism8", "jump_off_heli", 3))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_595))
						{
							PED::FORCE_PED_MOTION_STATE(iLocal_595, -668482597, 0, 0, 0);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_595, 1f);
							TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_595, -377.228f, -87.0252f, 44.6583f, 1f, 20000, 1193033728, 1056964608);
							iLocal_382 = 1;
							iLocal_309 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (iLocal_382 && MISC::GET_GAME_TIMER() > iLocal_309 + 2000)
				{
					if (GlobalFunc_155(iLocal_595, PLAYER::PLAYER_PED_ID(), 6f))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_595))
						{
							TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_595, "Eps8EPED", 0, 8, -1);
						}
					}
					if (GlobalFunc_155(iLocal_595, PLAYER::PLAYER_PED_ID(), 9f) && !GlobalFunc_155(iLocal_595, PLAYER::PLAYER_PED_ID(), 6f))
					{
						if (!PED::IS_PED_HEADTRACKING_PED(iLocal_595, PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_595, -875674219) != 1)
						{
							if (!PED::IS_PED_FACING_PED(iLocal_595, PLAYER::PLAYER_PED_ID(), 20f))
							{
								Var2 = { GlobalFunc_560() };
								if (!MISC::ARE_STRINGS_EQUAL(&Var2, "EPS8_E1"))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), 0);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_595, 1435919172) == 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_595);
							}
						}
					}
					if (!GlobalFunc_155(iLocal_595, PLAYER::PLAYER_PED_ID(), 9f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_595, 1227113341) != 1)
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_GO_TO_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), 20000, 6.1f, 1f, 1073741824, 0);
						}
					}
				}
			}
		}
		else if (iLocal_335 == 0 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
		{
			Var8 = { GlobalFunc_560() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var8))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var8, "EPS8_E1"))
				{
					GlobalFunc_4935();
				}
			}
			if (iLocal_276 == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				if (GlobalFunc_155(iLocal_595, iLocal_631, 7f))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_595, -875674219) != 1)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), -1);
					}
					if (!GlobalFunc_663("EPS8_16", 0, 0) && !GlobalFunc_663("EPS8_11", 0, 0))
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_SEC", "EPS8_SEC_1", 7, 0, 0))
							{
								iLocal_276 = 1;
								iLocal_275 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_595, 713668775) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_595, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_631, 0f, 2.5f, 0f), 2f, 20000, 4.5f, 0, 1193033728);
				}
			}
			else if (iLocal_276 == 1)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_595, -875674219) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), -1);
				}
				if (GlobalFunc_4924(uLocal_569[5]))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_275 + 300)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_569[5], -875674219) != 1)
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_569[5], PLAYER::PLAYER_PED_ID(), -1);
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_275 + 6000)
				{
					if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_SEC", "EPS8_SEC_2", 7, 0, 0))
					{
						iLocal_276 = 2;
						iLocal_275 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (iLocal_276 == 2)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_595, 1630799643) != 1)
				{
					WEAPON::GIVE_WEAPON_TO_PED(iLocal_595, joaat("weapon_combatpistol"), -1, 1, 1);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_595, joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
					TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), -1, 0);
				}
				if (MISC::GET_GAME_TIMER() > iLocal_275 + 10000)
				{
					iLocal_276 = 3;
					iLocal_275 = MISC::GET_GAME_TIMER();
				}
			}
			else if (iLocal_276 == 3)
			{
				if (!PED::IS_PED_IN_COMBAT(iLocal_595, PLAYER::PLAYER_PED_ID()))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_595, 780511057) != 1)
					{
						TASK::TASK_COMBAT_PED(iLocal_595, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
		}
	}
}



void func_293()//Position - 0x2A905
{
	bool bVar0;
	
	bVar0 = false;
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -358.0764f, -88.2705f, 44.5901f, 1) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_579[0], 1), -358.0764f, -88.2705f, 44.5901f, 1))
	{
		fLocal_251 = (40f - GlobalFunc_156(uLocal_579[0], iLocal_631, 1));
		if (fLocal_251 > 0f)
		{
			fLocal_251 = (fLocal_251 / 2.5f);
		}
		else
		{
			fLocal_251 = 1E-06f;
		}
		if (fLocal_251 < 4f)
		{
			fLocal_251 = 1E-06f;
		}
		if (fLocal_251 > 8f)
		{
			fLocal_251 = -1f;
		}
		if (fLocal_251 < 3f)
		{
			bVar0 = true;
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_614))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_614) < 47043.75f)
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_614, 1.25f);
			}
		}
	}
	else
	{
		fLocal_251 = -1f;
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_614))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_614) < 47043.75f)
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_614, 1.5f);
			}
		}
	}
	if (GlobalFunc_4924(uLocal_579[0]))
	{
		if (GlobalFunc_4947(uLocal_615[0]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(uLocal_579[0], uLocal_615[0]))
			{
				if (fLocal_251 != -1f)
				{
					if (bVar0)
					{
						VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uLocal_615[0], 1);
					}
					else
					{
						VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(uLocal_615[0], 0);
					}
				}
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
				{
					if ((iLocal_567 == 3 || iLocal_567 == 4) || iLocal_567 == 5)
					{
						if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_615[0]))
						{
							TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(uLocal_615[0]);
						}
					}
					else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_579[0], -345.6437f, -85.66679f, 53.65821f, -378.4535f, -73.82299f, 43.15821f, 18.25f, 0, 1, 0))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_615[0]) || !iLocal_384)
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_579[0], uLocal_615[0], "Eps8LS01", 786599, 0, 8, -1, fLocal_251, 0, 1073741824);
							iLocal_384 = 1;
						}
						else
						{
							func_294();
						}
					}
					else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_615[0]))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_579[0], uLocal_615[0], "Eps8LS01", 786468, 0, 8, -1, fLocal_251, 0, 1073741824);
					}
					else
					{
						func_294();
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_579[0], -345.6437f, -85.66679f, 53.65821f, -378.4535f, -73.82299f, 43.15821f, 18.25f, 0, 1, 0))
				{
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_615[0]) || !iLocal_384)
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_579[0], uLocal_615[0], "Eps8LS01", 786599, 0, 8, -1, fLocal_251, 0, 1073741824);
						iLocal_384 = 1;
					}
					else
					{
						func_294();
					}
				}
				else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_615[0]))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_579[0], uLocal_615[0], "Eps8LS01", 786468, 0, 8, -1, fLocal_251, 0, 1073741824);
				}
				else
				{
					func_294();
				}
			}
		}
	}
	VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(uLocal_615[0], 0, 0);
	VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(uLocal_615[0], 1, 0);
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_579[0], -673.6242f, 46.50732f, 45.42094f, -657.8456f, 45.62354f, 35.89909f, 7f, 0, 1, 0))
	{
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(uLocal_615[0], 0, 1);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_579[0], -659.3698f, 21.0666f, 45.16937f, -641.9688f, -12.16242f, 35.58978f, 14f, 0, 1, 0))
	{
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(uLocal_615[0], 1, 1);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_579[0], -429.661f, -7.262719f, 52.31787f, -394.0083f, -12.02923f, 41.92323f, 14f, 0, 1, 0))
	{
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(uLocal_615[0], 0, 1);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_579[0], -405.9864f, -54.69353f, 51.0304f, -397.1461f, -36.4476f, 41.66385f, 14f, 0, 1, 0))
	{
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(uLocal_615[0], 1, 1);
	}
}

void func_294()//Position - 0x2AD12
{
	if (fLocal_251 == -1f)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(uLocal_615[0]);
	}
	else if (ENTITY::GET_ENTITY_SPEED(uLocal_615[0]) > fLocal_251)
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_615[0], fLocal_251);
	}
	else
	{
		TASK::VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(uLocal_615[0]);
	}
}

void func_295()//Position - 0x2AD57
{
	struct<6> Var0;
	struct<6> Var6;
	
	if (GlobalFunc_4947(iLocal_631))
	{
		VEHICLE::_0xBE5C1255A1830FF5(iLocal_631, 1);
	}
	if (GlobalFunc_4947(uLocal_615[0]))
	{
		if (iLocal_338 == 0)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_290 + 5000 || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_615[0], -664.4363f, 53.47593f, 31.86062f, -727.7729f, 24.45449f, 46.73167f, 22.5f, 0, 1, 0))
			{
				iLocal_338 = 1;
			}
		}
		VEHICLE::_0xBE5C1255A1830FF5(uLocal_615[0], 1);
		if (iLocal_567 == 3 || iLocal_567 == 4)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_293 + 4000)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_615[0], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (iLocal_274 < 2)
					{
						iLocal_274++;
						iLocal_293 = MISC::GET_GAME_TIMER();
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_615[0]);
					}
					else
					{
						Var0 = { GlobalFunc_2209() };
						if (!MISC::ARE_STRINGS_EQUAL(&Var0, "EPS8_LS_13"))
						{
							iLocal_274++;
							iLocal_293 = MISC::GET_GAME_TIMER();
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_615[0]);
						}
						else
						{
							iLocal_274 = 2;
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uLocal_615[0]);
						}
					}
				}
			}
			if (iLocal_274 > 2)
			{
				Var6 = { GlobalFunc_2209() };
				if (!MISC::ARE_STRINGS_EQUAL(&Var6, "EPS8_LS_13"))
				{
					iLocal_310 = 1;
				}
			}
		}
	}
	if (GlobalFunc_4947(uLocal_615[2]))
	{
		VEHICLE::_0xBE5C1255A1830FF5(uLocal_615[2], 1);
	}
	if (GlobalFunc_4947(uLocal_615[3]))
	{
		VEHICLE::_0xBE5C1255A1830FF5(uLocal_615[3], 1);
	}
	if (GlobalFunc_4924(uLocal_579[0]))
	{
		if (!GlobalFunc_155(iLocal_631, uLocal_579[0], 50f))
		{
			if (iLocal_327 == 0)
			{
				iLocal_310 = 1;
			}
		}
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -366.3542f, -107.6003f, 31.93177f, -355.0581f, -74.91284f, 55.84066f, 85.25f, 0, 1, 0))
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID()) == joaat("weapon_stickybomb") || WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID()) == joaat("weapon_petrolcan"))
			{
				iLocal_310 = 1;
			}
		}
	}
	if (iLocal_327 == 0)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -366.3542f, -107.6003f, 31.93177f, -355.0581f, -74.91284f, 55.84066f, 85.25f, 0, 1, 0))
		{
			iLocal_327 = 1;
		}
	}
	else if (iLocal_567 == 7)
	{
		if ((GlobalFunc_4947(iLocal_632) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -383.1558f, -102.7442f, 37.43079f, -371.1183f, -109.4619f, 40.42916f, 13f, 0, 1, 0)) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			if (GlobalFunc_4924(iLocal_595))
			{
				if (iLocal_337 == 1)
				{
					if (iLocal_339 == 1)
					{
						if ((((TASK::GET_SCRIPT_TASK_STATUS(iLocal_595, 242628503) == 1 && iLocal_365 == 1) && MISC::GET_GAME_TIMER() > iLocal_288 + 3200) && !PED::IS_PED_RAGDOLL(iLocal_595)) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_595, "rcmepsilonism8", "worship_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_595, "rcmepsilonism8", "worship_idle_a", 3))
							{
								TASK::TASK_PLAY_ANIM(iLocal_595, "rcmepsilonism8", "worship_exit", 2f, -2f, -1, 819200, 0, 0, 0, 0);
								iLocal_311 = 1;
							}
						}
					}
				}
				else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_632, 1))
				{
					if (iLocal_296 == 0)
					{
						iLocal_311 = 1;
					}
				}
			}
			iLocal_333 = 1;
		}
		if (iLocal_296 == 0)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -430.6594f, -63.76026f, 99.82037f, -257.6355f, -120.5171f, 37.3026f, 170.5f, 0, 1, 0))
			{
				iLocal_333 = 0;
				iLocal_311 = 1;
			}
		}
	}
	if (iLocal_327 == 1)
	{
		if (iLocal_296 == 0)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -366.3542f, -107.6003f, 31.93177f, -355.0581f, -74.91284f, 55.84066f, 85.25f, 0, 1, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
				{
					if (iLocal_333 == 0)
					{
						iLocal_295 = MISC::GET_GAME_TIMER();
						iLocal_296 = 1;
					}
				}
			}
		}
		if (iLocal_296 == 1)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_295 + 1500)
			{
				iLocal_310 = 1;
			}
		}
	}
	if (GlobalFunc_4947(iLocal_614))
	{
		if (GlobalFunc_4924(uLocal_569[5]))
		{
			if (PED::IS_PED_IN_VEHICLE(uLocal_569[5], iLocal_614, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_569[5], 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[5], 3, 0);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_569[5], 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[5], 3, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[5], 1, 0);
			}
		}
		if (GlobalFunc_4924(iLocal_577))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_577, iLocal_614, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_577, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_577, 3, 0);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_577, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_577, 3, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_577, 1, 0);
			}
		}
		if (GlobalFunc_4924(iLocal_595))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_595, iLocal_614, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_595, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_595, 3, 0);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_595, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_595, 3, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_595, 1, 0);
			}
		}
		if (GlobalFunc_4924(iLocal_578))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_578, iLocal_614, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_578, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_578, 3, 0);
			}
			else
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_578, 0);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_578, 3, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_578, 1, 0);
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_614))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_614) >= 47043.75f)
			{
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_614, 0f);
			}
		}
	}
	if (GlobalFunc_4924(uLocal_579[3]))
	{
		if (GlobalFunc_4947(uLocal_615[3]))
		{
			if (GlobalFunc_4947(iLocal_631))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(uLocal_579[3], -403.493f, -39.7956f, 45.1741f, 8f, 8f, 8f, 0, 1, 0))
				{
					iLocal_362 = 0;
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_615[3]))
					{
						TASK::VEHICLE_WAYPOINT_PLAYBACK_PAUSE(uLocal_615[3]);
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_579[3], -1273030092) == 1)
					{
						TASK::TASK_VEHICLE_TEMP_ACTION(uLocal_579[3], uLocal_615[3], 24, -1);
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -658.9627f, 46.1624f, 40.1914f, 4f, 4f, 5f, 0, 1, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
						{
							if (iLocal_362 == 0)
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_579[3], uLocal_615[3], "Eps8LS01", 786468, 18, 0, -1, 40f, 0, 1073741824);
								iLocal_362 = 1;
							}
						}
					}
					if (iLocal_362 == 1)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_579[3], -431.31f, -13.28864f, 44.0877f, -391.9005f, -16.8117f, 49.91203f, 33.75f, 0, 1, 0))
							{
								if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_615[3]))
								{
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_579[3], uLocal_615[3], "Eps8LS01", 786469, 18, 8, -1, 40f, 0, 1073741824);
								}
							}
							else if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_579[3], 30f))
							{
								if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_615[3]))
								{
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_579[3], uLocal_615[3], "Eps8LS01", 786468, 18, 8, -1, 40f, 0, 1073741824);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_579[3], -1273030092) != 1)
							{
								TASK::TASK_VEHICLE_FOLLOW(uLocal_579[3], uLocal_615[3], iLocal_631, 40f, 262144, 10);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_579[3], -1273030092) != 1)
						{
							TASK::TASK_VEHICLE_FOLLOW(uLocal_579[3], uLocal_615[3], iLocal_631, 40f, 262144, 10);
						}
					}
				}
			}
		}
	}
	if (GlobalFunc_4924(uLocal_579[iLocal_255]))
	{
		if (PED::IS_PED_IN_COMBAT(uLocal_579[iLocal_255], PLAYER::PLAYER_PED_ID()))
		{
			iLocal_310 = 1;
		}
	}
	if (GlobalFunc_4924(uLocal_587[iLocal_255]))
	{
		if (PED::IS_PED_IN_COMBAT(uLocal_587[iLocal_255], PLAYER::PLAYER_PED_ID()))
		{
			iLocal_310 = 1;
		}
	}
	if (GlobalFunc_4924(uLocal_569[iLocal_255]))
	{
		if (PED::IS_PED_IN_COMBAT(uLocal_569[iLocal_255], PLAYER::PLAYER_PED_ID()))
		{
			iLocal_310 = 1;
		}
		else if (iLocal_567 == 7)
		{
			if (PED::IS_PED_RAGDOLL(uLocal_569[iLocal_255]))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_569[iLocal_255], -381.8959f, -98.08368f, 37.74649f, -378.5122f, -88.64344f, 46.51857f, 2.4f, 0, 1, 0))
				{
					iLocal_310 = 1;
				}
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (iLocal_255 == 5)
				{
					if (iLocal_323 == 0)
					{
						if (GlobalFunc_155(uLocal_569[5], PLAYER::PLAYER_PED_ID(), 4.5f))
						{
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uLocal_569[5], "EPS8_ANAA", "EPSGUARD2", "SPEECH_PARAMS_FORCE", 0);
							iLocal_323 = 1;
						}
					}
				}
				if (iLocal_255 == 3)
				{
					if (iLocal_324 == 0)
					{
						if (GlobalFunc_155(uLocal_569[3], PLAYER::PLAYER_PED_ID(), 5f))
						{
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uLocal_569[3], "EPS8_AOAA", "EPSGUARD7", "SPEECH_PARAMS_FORCE", 0);
							TASK::TASK_PLAY_ANIM(uLocal_569[3], "rcmepsilonism8", "security_greet", 2f, -2f, -1, 32, 0.2f, 1, 0, 0);
							iLocal_324 = 1;
						}
					}
				}
				if (iLocal_255 == 4)
				{
					if (iLocal_325 == 0)
					{
						if (GlobalFunc_155(uLocal_569[4], PLAYER::PLAYER_PED_ID(), 5f))
						{
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(uLocal_569[4], "EPS8_APAA", "EPSGUARD8", "SPEECH_PARAMS_FORCE", 0);
							TASK::TASK_PLAY_ANIM(uLocal_569[4], "rcmepsilonism8", "security_greet", 2f, -2f, -1, 32, 0.2f, 1, 0, 0);
							iLocal_325 = 1;
						}
					}
				}
			}
		}
	}
	if (GlobalFunc_4924(iLocal_577))
	{
		if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_577) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_577))
		{
			if (PED::IS_PED_FACING_PED(iLocal_577, PLAYER::PLAYER_PED_ID(), 90f))
			{
				iLocal_310 = 1;
			}
		}
		if (PED::IS_PED_IN_COMBAT(iLocal_577, PLAYER::PLAYER_PED_ID()))
		{
			iLocal_310 = 1;
		}
	}
	if (GlobalFunc_4924(iLocal_578))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_578, PLAYER::PLAYER_PED_ID()))
		{
			iLocal_310 = 1;
		}
	}
	if (GlobalFunc_4924(iLocal_595))
	{
		if (PED::IS_PED_IN_COMBAT(iLocal_595, PLAYER::PLAYER_PED_ID()))
		{
			iLocal_310 = 1;
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), 1))
		{
			iLocal_310 = 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_595))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_595, -381.8959f, -98.08368f, 37.74649f, -378.5122f, -88.64344f, 46.51857f, 2.4f, 0, 1, 0))
			{
				iLocal_310 = 1;
			}
		}
	}
	else
	{
		if (GlobalFunc_4924(uLocal_569[0]))
		{
			if (GlobalFunc_155(uLocal_569[0], PLAYER::PLAYER_PED_ID(), 100f))
			{
				iLocal_926[0] = GlobalFunc_4955(uLocal_569[0], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_926[0], fLocal_146);
				TASK::TASK_COMBAT_PED(uLocal_569[0], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_256++;
			}
		}
		if (GlobalFunc_4924(uLocal_569[2]))
		{
			if (GlobalFunc_155(uLocal_569[2], PLAYER::PLAYER_PED_ID(), 100f))
			{
				iLocal_926[2] = GlobalFunc_4955(uLocal_569[2], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_926[2], fLocal_146);
				TASK::TASK_COMBAT_PED(uLocal_569[2], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_256++;
			}
		}
		if (GlobalFunc_4924(uLocal_569[3]))
		{
			if (GlobalFunc_155(uLocal_569[3], PLAYER::PLAYER_PED_ID(), 100f))
			{
				iLocal_926[3] = GlobalFunc_4955(uLocal_569[3], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_926[3], fLocal_146);
				TASK::TASK_COMBAT_PED(uLocal_569[3], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_256++;
			}
		}
		if (GlobalFunc_4924(uLocal_569[4]))
		{
			if (GlobalFunc_155(uLocal_569[4], PLAYER::PLAYER_PED_ID(), 100f))
			{
				iLocal_926[4] = GlobalFunc_4955(uLocal_569[4], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_926[4], fLocal_146);
				TASK::TASK_COMBAT_PED(uLocal_569[4], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_256++;
			}
		}
		if (GlobalFunc_4924(uLocal_569[5]))
		{
			if (GlobalFunc_155(uLocal_569[5], PLAYER::PLAYER_PED_ID(), 100f))
			{
				iLocal_926[5] = GlobalFunc_4955(uLocal_569[5], 1, 0, 3);
				HUD::SET_BLIP_SCALE(iLocal_926[5], fLocal_146);
				TASK::TASK_COMBAT_PED(uLocal_569[5], PLAYER::PLAYER_PED_ID(), 0, 16);
				iLocal_256++;
			}
		}
		iLocal_310 = 1;
	}
	if ((((((((ENTITY::IS_ENTITY_DEAD(uLocal_569[0]) || ENTITY::IS_ENTITY_DEAD(uLocal_569[2])) || ENTITY::IS_ENTITY_DEAD(uLocal_569[3])) || ENTITY::IS_ENTITY_DEAD(uLocal_569[4])) || ENTITY::IS_ENTITY_DEAD(uLocal_569[5])) || ENTITY::IS_ENTITY_DEAD(iLocal_577)) || ENTITY::IS_ENTITY_DEAD(iLocal_578)) || PED::IS_PED_BEING_JACKED(iLocal_577)) || PED::IS_PED_BEING_JACKED(iLocal_578))
	{
		iLocal_310 = 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_615[iLocal_255]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_615[iLocal_255]))
		{
			if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(uLocal_615[iLocal_255], 1), joaat("weapon_grenade"), 4f, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(uLocal_615[iLocal_255], 1), joaat("weapon_molotov"), 4f, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(uLocal_615[iLocal_255], 1), joaat("weapon_smokegrenade"), 4f, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(uLocal_615[iLocal_255], 1), joaat("weapon_stickybomb"), 4f, 1))
			{
				iLocal_310 = 1;
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_615[iLocal_255], 0))
			{
				iLocal_310 = 1;
			}
		}
		else
		{
			iLocal_310 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_579[iLocal_255]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_579[iLocal_255]))
		{
			if (PED::IS_PED_BEING_JACKED(uLocal_579[iLocal_255]))
			{
				iLocal_310 = 1;
			}
		}
		else
		{
			iLocal_310 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_587[iLocal_255]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uLocal_587[iLocal_255]))
		{
			if (PED::IS_PED_BEING_JACKED(uLocal_587[iLocal_255]))
			{
				iLocal_310 = 1;
			}
		}
		else
		{
			iLocal_310 = 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_614))
	{
		if ((GlobalFunc_155(iLocal_614, PLAYER::PLAYER_PED_ID(), 3f) || GlobalFunc_155(iLocal_614, iLocal_631, 3f)) || GlobalFunc_156(iLocal_614, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) <= 3f)
		{
			PHYSICS::ACTIVATE_PHYSICS(iLocal_614);
		}
		if (GlobalFunc_645(PLAYER::PLAYER_PED_ID(), iLocal_614))
		{
			iLocal_310 = 1;
		}
		if (((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_614, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_614, PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_614, iLocal_631, 1)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_614, iLocal_631))
		{
			iLocal_310 = 1;
		}
	}
	iLocal_255++;
	if (iLocal_255 == 7)
	{
		iLocal_255 = 0;
	}
}



void func_298()//Position - 0x2BC1E
{
	struct<6> Var0;
	
	func_295();
	func_293();
	if (!PED::IS_PED_HEADTRACKING_PED(iLocal_595, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
	}
	if (MISC::GET_GAME_TIMER() > iLocal_292 + 6500)
	{
		func_288();
	}
	if (!GlobalFunc_111())
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_939))
		{
			if (iLocal_368 == 0)
			{
				iLocal_939 = GlobalFunc_4955(iLocal_595, 1, 1, 5);
				HUD::SET_BLIP_SCALE(iLocal_939, fLocal_146);
				iLocal_368 = 1;
			}
		}
		iLocal_567 = 7;
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
	{
		Var0 = { GlobalFunc_560() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Var0, "EPS8_E1"))
			{
				GlobalFunc_4935();
			}
		}
	}
}

void func_299()//Position - 0x2BCC8
{
	func_11();
	func_295();
	func_293();
	if (!PED::IS_PED_HEADTRACKING_PED(iLocal_595, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
	}
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("tractor")))
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10652(&uLocal_389, "EPS8AU", "EPS8_ESC", 7, 0, 0, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					iLocal_632 = VEHICLE::CREATE_VEHICLE(joaat("tractor"), -375.6338f, -105.9456f, 37.679f, 119.7025f, 1, 1);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_632, 8, 0);
					VEHICLE::SET_VEHICLE_EXTRA(iLocal_632, 1, 1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_632, "K1FFL0M1");
					GlobalFunc_534(iLocal_632, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("tractor"));
					PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_595, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_942);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, "rcmepsilonism8", "jump_off_heli", 2f, -1f, -1, 32768, 0.084f, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_942);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_595, uLocal_942);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_942);
					iLocal_292 = MISC::GET_GAME_TIMER();
					GlobalFunc_7632(0);
					Local_214 = { ENTITY::GET_ENTITY_COORDS(iLocal_631, 1) };
					iLocal_939 = GlobalFunc_4955(iLocal_595, 1, 1, 5);
					iLocal_368 = 1;
					HUD::SET_BLIP_SCALE(iLocal_939, fLocal_146);
					STREAMING::REQUEST_CLIP_SET("move_ped_wpn_jerrycan_generic");
					iLocal_303 = 0;
					GlobalFunc_4948(&uLocal_554, 0, 0);
					iLocal_386 = 0;
					iLocal_567 = 6;
				}
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -351.6279f, -76.40219f, 41.77763f, -361.8925f, -104.8718f, 48.97791f, fLocal_151, 0, 1, 0))
	{
		iLocal_310 = 1;
	}
}




void func_303()//Position - 0x2BF6F
{
	func_286();
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	func_295();
	func_293();
	if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_631, Local_157, 2f, 2f, 2f, 0, 1, 0))
	{
		func_275();
	}
	if (!PED::IS_PED_HEADTRACKING_PED(iLocal_595, PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), -1, 2096, 4);
	}
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
	{
		if (GlobalFunc_4947(iLocal_614))
		{
			GlobalFunc_10365(&uLocal_554, iLocal_614, 0, 0, 1, 1, 1);
		}
	}
	else
	{
		GlobalFunc_4948(&uLocal_554, 0, 0);
	}
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_631, Local_157, 2f, 2f, 2f, 0, 1, 0) && VEHICLE::IS_VEHICLE_STOPPED(iLocal_631))
	{
		GlobalFunc_146(&iLocal_934);
		if (ENTITY::GET_ENTITY_SPEED(iLocal_631) < 12.8f)
		{
			fLocal_151 = 30.75f;
		}
		if (ENTITY::GET_ENTITY_SPEED(iLocal_631) >= 12.8f && ENTITY::GET_ENTITY_SPEED(iLocal_631) < 18f)
		{
			fLocal_151 = 32.75f;
		}
		if (ENTITY::GET_ENTITY_SPEED(iLocal_631) >= 18f)
		{
			fLocal_151 = 34.75f;
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
		{
			GlobalFunc_146(&iLocal_937);
			iLocal_361 = 1;
			STREAMING::REQUEST_MODEL(joaat("tractor"));
			STREAMING::REQUEST_CLIP_SET("move_ped_wpn_jerrycan_generic");
			iLocal_567 = 5;
		}
		else
		{
			if (iLocal_376 == 0)
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 15f, 1);
				GlobalFunc_164("EPS8_27", 7500, 0);
				iLocal_376 = 1;
			}
			iLocal_381 = 1;
		}
	}
	else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_631, Local_157, 2f, 2f, 2f, 0, 1, 0))
	{
		GlobalFunc_146(&iLocal_934);
		if (!VEHICLE::IS_VEHICLE_STOPPED(iLocal_631))
		{
			if (iLocal_381 == 0)
			{
				GlobalFunc_530(iLocal_631, 4f, 1, 1056964608, 0, 1);
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_934))
	{
		iLocal_381 = 0;
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_631, Local_157, 6f, 6f, 2f, 1, 1, 0))
		{
		}
	}
}























void func_326()//Position - 0x2D05C
{
	if (!iLocal_383)
	{
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
		AUDIO::TRIGGER_MUSIC_EVENT("EPS8_START");
		RECORDING::_0x293220DA1B46CEBC(0f, 10f, 1);
		iLocal_383 = 1;
	}
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(-744.6715f, -175.2881f, -205.6593f, 118.4107f);
	func_330();
	if (iLocal_255 == 1 || iLocal_255 == 4)
	{
		func_329();
	}
	if (iLocal_310 == 0)
	{
		func_327();
	}
	func_295();
	func_293();
	func_275();
	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
	{
		if (GlobalFunc_4947(uLocal_615[0]))
		{
			GlobalFunc_10365(&uLocal_554, uLocal_615[0], 0, 0, 1, 1, 1);
		}
		if (PED::IS_PED_IN_VEHICLE(uLocal_579[0], uLocal_615[0], 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_615[0], -384.1292f, -72.76846f, 41.7355f, -381.6261f, -65.75608f, 52.89689f, 8.5f, 0, 1, 0))
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_938))
				{
					HUD::REMOVE_BLIP(&iLocal_938);
				}
				if (!HUD::DOES_BLIP_EXIST(iLocal_934))
				{
					iLocal_934 = HUD::ADD_BLIP_FOR_COORD(Local_157);
				}
				GlobalFunc_4948(&uLocal_554, 0, 0);
				GlobalFunc_164("EPS8_28", 7500, 0);
				iLocal_567 = 4;
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_631, -384.1292f, -72.76846f, 41.7355f, -381.6261f, -65.75608f, 52.89689f, 8.5f, 0, 1, 0))
		{
			GlobalFunc_146(&iLocal_938);
			if (!HUD::DOES_BLIP_EXIST(iLocal_934))
			{
				iLocal_934 = HUD::ADD_BLIP_FOR_COORD(Local_157);
			}
			GlobalFunc_4948(&uLocal_554, 0, 0);
			GlobalFunc_164("EPS8_28", 7500, 0);
			iLocal_567 = 4;
		}
	}
	else
	{
		GlobalFunc_4948(&uLocal_554, 0, 0);
	}
	if (ENTITY::IS_ENTITY_AT_COORD(iLocal_631, Local_157, 6f, 6f, 2f, 1, 1, 0))
	{
	}
}

void func_327()//Position - 0x2D215
{
	if (GlobalFunc_4947(iLocal_631))
	{
		if (GlobalFunc_4924(uLocal_579[0]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_290 + 8000)
				{
					if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_579[0], 40f))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
						{
							if (ENTITY::GET_ENTITY_SPEED(iLocal_631) > 2f)
							{
								if (iLocal_352 == 0)
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10652(&uLocal_389, "EPS8AU", "EPS8_LS4", 6, 0, 0, 0))
										{
											iLocal_352 = 1;
											if (iLocal_260 < 2)
											{
												iLocal_260 = 2;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_305 == 10)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_304 + 1000)
						{
							if (!GlobalFunc_111())
							{
								sLocal_385 = "EPS8_23";
								iLocal_567 = 10;
								if (iLocal_260 < 2)
								{
									iLocal_260 = 2;
								}
								return;
							}
						}
					}
					if (fLocal_251 < 0.5f && fLocal_251 != -1f)
					{
						if (ENTITY::GET_ENTITY_SPEED(iLocal_631) < 2f)
						{
							if (iLocal_348 == 0)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_LS5", "EPS8_LS5_1", 6, 0, 0))
									{
										iLocal_304 = MISC::GET_GAME_TIMER();
										iLocal_348 = 1;
										if (iLocal_260 < 2)
										{
											iLocal_260 = 2;
										}
									}
								}
							}
							else if (iLocal_260 >= 7)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_304 + 9000)
								{
									if (!GlobalFunc_111())
									{
										if (iLocal_305 < 5)
										{
											GlobalFunc_10652(&uLocal_389, "EPS8AU", "EPS8_T2", 7, 0, 0, 0);
											iLocal_305++;
											iLocal_304 = MISC::GET_GAME_TIMER();
										}
										else if (iLocal_305 != 10)
										{
											if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_T1", "EPS8_T1_6", 7, 0, 0))
											{
												iLocal_305 = 10;
											}
										}
									}
								}
							}
						}
					}
					if (iLocal_274 == 1)
					{
						if (iLocal_349 == 0)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_LS3", "EPS8_LS3_1", 6, 0, 0))
								{
									iLocal_349 = 1;
									if (iLocal_260 < 2)
									{
										iLocal_260 = 2;
									}
								}
							}
						}
					}
					if (iLocal_274 == 2)
					{
						if (iLocal_350 == 0)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_LS3", "EPS8_LS3_2", 6, 0, 0))
								{
									iLocal_350 = 1;
									if (iLocal_260 < 2)
									{
										iLocal_260 = 2;
									}
								}
							}
						}
					}
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -358.0764f, -88.2705f, 44.5901f, 1) < MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_579[0], 1), -358.0764f, -88.2705f, 44.5901f, 1))
				{
					if (MISC::GET_GAME_TIMER() > iLocal_290 + 8000)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
						{
							if (iLocal_351 == 0)
							{
								if (!GlobalFunc_111())
								{
									if (GlobalFunc_10652(&uLocal_389, "EPS8AU", "EPS8_LS2", 6, 0, 0, 0))
									{
										iLocal_351 = 1;
										if (iLocal_260 < 2)
										{
											iLocal_260 = 2;
										}
									}
								}
							}
						}
					}
				}
				else if (iLocal_260 == 0)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_290 + 7000)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_LS", "EPS8_LS_1", 5, 0, 0))
							{
								iLocal_260 = 1;
							}
						}
					}
				}
				else if (iLocal_260 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_290 + 9000)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_LS", "EPS8_LS_2", 5, 0, 0))
							{
								iLocal_260 = 2;
							}
						}
					}
				}
				else if (iLocal_260 == 2)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_290 + 12000)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_LS", "EPS8_LS_3", 5, 0, 0))
							{
								iLocal_260 = 3;
							}
						}
					}
				}
				else if (iLocal_260 == 3)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_290 + 13000)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_LS", "EPS8_LS_4", 5, 0, 0))
							{
								iLocal_260 = 4;
							}
						}
					}
				}
				else if (iLocal_260 == 4)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_290 + 14000)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_115(iLocal_614) && GlobalFunc_115(uLocal_615[0]))
							{
								if (!GlobalFunc_775(uLocal_615[0], -696.0367f, 40.7954f, 42.2066f, 80f) && !GlobalFunc_775(iLocal_614, -355.8568f, -89.7074f, 44.6341f, 50f))
								{
									if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_LS", "EPS8_LS_5", 5, 0, 0))
									{
										iLocal_260 = 5;
									}
								}
								else
								{
									iLocal_260 = 5;
								}
							}
						}
					}
				}
				else if (iLocal_260 == 5)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_290 + 15000)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_LS", "EPS8_LS_6", 5, 0, 0))
							{
								iLocal_260 = 6;
							}
						}
					}
				}
				else if (iLocal_260 == 6)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_290 + 16000)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10699(&uLocal_389, "EPS8AU", "EPS8_LS", "EPS8_LS_7", 7, 0, 0))
							{
								iLocal_260 = 7;
							}
						}
					}
				}
			}
			else if (iLocal_282 == 0)
			{
				iLocal_281 = MISC::GET_GAME_TIMER();
				iLocal_282 = 1;
			}
			else if (iLocal_282 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_281 + 7000)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_T1", "EPS8_T1_1", 5, 0, 0))
						{
							iLocal_281 = MISC::GET_GAME_TIMER();
							iLocal_304 = MISC::GET_GAME_TIMER();
							iLocal_282 = 2;
							if (iLocal_260 < 2)
							{
								iLocal_260 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_282 == 2)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_281 + 8000)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_T1", "EPS8_T1_2", 5, 0, 0))
						{
							iLocal_281 = MISC::GET_GAME_TIMER();
							iLocal_304 = MISC::GET_GAME_TIMER();
							iLocal_282 = 3;
							if (iLocal_260 < 2)
							{
								iLocal_260 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_282 == 3)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_281 + 8000)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_T1", "EPS8_T1_3", 5, 0, 0))
						{
							iLocal_281 = MISC::GET_GAME_TIMER();
							iLocal_304 = MISC::GET_GAME_TIMER();
							iLocal_282 = 4;
							if (iLocal_260 < 2)
							{
								iLocal_260 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_282 == 4)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_281 + 7000)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_T1", "EPS8_T1_4", 5, 0, 0))
						{
							iLocal_281 = MISC::GET_GAME_TIMER();
							iLocal_304 = MISC::GET_GAME_TIMER();
							iLocal_282 = 5;
							if (iLocal_260 < 2)
							{
								iLocal_260 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_282 == 5)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_281 + 1000)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_T1", "EPS8_T1_5", 5, 0, 0))
						{
							iLocal_281 = MISC::GET_GAME_TIMER();
							iLocal_304 = MISC::GET_GAME_TIMER();
							iLocal_282 = 6;
							if (iLocal_260 < 2)
							{
								iLocal_260 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_282 == 6)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_281 + 10000)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10726(&uLocal_389, "EPS8AU", "EPS8_T1", "EPS8_T1_6", 5, 0, 0))
						{
							iLocal_281 = MISC::GET_GAME_TIMER();
							iLocal_282 = 7;
							if (iLocal_260 < 2)
							{
								iLocal_260 = 2;
							}
						}
					}
				}
			}
			else if (iLocal_282 == 7)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_281 + 1000)
				{
					if (!GlobalFunc_111())
					{
						sLocal_385 = "EPS8_23";
						iLocal_567 = 10;
						iLocal_282 = 8;
						if (iLocal_260 < 2)
						{
							iLocal_260 = 2;
						}
					}
				}
			}
		}
	}
}


void func_329()//Position - 0x2D96B
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 200f, 1, 1, 0, 0, 0);
	if ((((STREAMING::HAS_MODEL_LOADED(joaat("taxi")) && STREAMING::HAS_MODEL_LOADED(joaat("sadler"))) && STREAMING::HAS_MODEL_LOADED(joaat("habanero"))) && STREAMING::HAS_MODEL_LOADED(joaat("schafter2"))) && STREAMING::HAS_MODEL_LOADED(joaat("rumpo")))
	{
		Local_649[0 /*3*/] = { -131.838f, -84.816f, 54.8058f };
		Local_649[1 /*3*/] = { -131.838f, -84.816f, 54.8058f };
		Local_649[2 /*3*/] = { -202.8393f, -60.2254f, 49.8713f };
		Local_649[3 /*3*/] = { -283.2474f, -32.2227f, 48.2857f };
		Local_649[4 /*3*/] = { -372.0164f, -1.9755f, 45.9995f };
		Local_649[5 /*3*/] = { -463.3591f, 7.4364f, 44.6764f };
		Local_649[6 /*3*/] = { -536.8303f, 12.2933f, 43.2611f };
		fLocal_671[0] = 71.7829f;
		fLocal_671[1] = 71.7829f;
		fLocal_671[2] = 70.6852f;
		fLocal_671[3] = 70.5582f;
		fLocal_671[4] = 75.2358f;
		fLocal_671[5] = 88.0273f;
		fLocal_671[6] = 86.8248f;
		Local_695[0 /*3*/] = { -312.1015f, 130.6894f, 66.5865f };
		Local_695[1 /*3*/] = { -345.6338f, 129.7367f, 65.7121f };
		Local_695[2 /*3*/] = { -393.3472f, 75.7086f, 58.9759f };
		Local_695[3 /*3*/] = { -394.0365f, 33.2626f, 47.2826f };
		Local_695[4 /*3*/] = { -432.5279f, 11.5918f, 45.1093f };
		Local_695[5 /*3*/] = { -473.8784f, 13.902f, 44.3884f };
		Local_695[6 /*3*/] = { -515.9524f, 16.8126f, 43.5537f };
		fLocal_717[0] = 91.2112f;
		fLocal_717[1] = 92.7461f;
		fLocal_717[2] = 179.5078f;
		fLocal_717[3] = 174.2351f;
		fLocal_717[4] = 87.2938f;
		fLocal_717[5] = 85.9476f;
		fLocal_717[6] = 86.5195f;
		Local_741[0 /*3*/] = { -821.8678f, -15.21f, 38.7738f };
		Local_741[1 /*3*/] = { -762.9101f, -61.369f, 36.8265f };
		Local_741[2 /*3*/] = { -683.5615f, -22.2863f, 37.2221f };
		Local_741[3 /*3*/] = { -598.2457f, -13.4337f, 42.8497f };
		Local_741[4 /*3*/] = { -566.7648f, -39.6658f, 41.744f };
		Local_741[5 /*3*/] = { -547.043f, -87.3705f, 39.7725f };
		Local_741[6 /*3*/] = { -542.4178f, -145.067f, 37.4423f };
		fLocal_763[0] = 213.1008f;
		fLocal_763[1] = 292.6512f;
		fLocal_763[2] = 280.8633f;
		fLocal_763[3] = 270.1932f;
		fLocal_763[4] = 162.4637f;
		fLocal_763[5] = 220.7259f;
		fLocal_763[6] = 109.6765f;
		Local_787[0 /*3*/] = { -538.8824f, 2.5863f, 43.2495f };
		Local_787[1 /*3*/] = { -510.9343f, 0.7568f, 43.7336f };
		Local_787[2 /*3*/] = { -468.7612f, -1.3575f, 44.5868f };
		Local_787[3 /*3*/] = { -419.5594f, -4.5629f, 45.5167f };
		Local_787[4 /*3*/] = { -373.0446f, -11.2775f, 46.0324f };
		Local_787[5 /*3*/] = { -278.3581f, -44.505f, 48.549f };
		Local_787[6 /*3*/] = { -211.5438f, -68.0673f, 49.5385f };
		fLocal_809[0] = 264.3932f;
		fLocal_809[1] = 265.6151f;
		fLocal_809[2] = 265.8879f;
		fLocal_809[3] = 267.9286f;
		fLocal_809[4] = 251.6172f;
		fLocal_809[5] = 254.6602f;
		fLocal_809[6] = 252.3606f;
		Local_833[0 /*3*/] = { -669.2421f, -7.4354f, 37.8635f };
		Local_833[1 /*3*/] = { -700.1176f, -17.5754f, 36.9578f };
		Local_833[2 /*3*/] = { -727.3986f, -31.1413f, 36.8838f };
		Local_833[3 /*3*/] = { -775.4231f, -56.9022f, 36.8581f };
		Local_833[4 /*3*/] = { -813.0173f, -76.7235f, 36.8717f };
		Local_833[5 /*3*/] = { -857.0458f, -99.6788f, 36.9241f };
		Local_833[6 /*3*/] = { -911.4196f, -127.5572f, 36.824f };
		fLocal_855[0] = 101.9021f;
		fLocal_855[1] = 116.4117f;
		fLocal_855[2] = 116.5154f;
		fLocal_855[3] = 117.926f;
		fLocal_855[4] = 117.6888f;
		fLocal_855[5] = 117.7467f;
		fLocal_855[6] = 115.4069f;
		Local_879[0 /*3*/] = { -808.274f, -46.2696f, 36.8528f };
		Local_879[1 /*3*/] = { -823.1899f, -74.6149f, 36.7824f };
		Local_879[2 /*3*/] = { -862.0953f, -95.4273f, 36.8721f };
		Local_879[3 /*3*/] = { -913.0912f, -122.397f, 36.7913f };
		Local_879[4 /*3*/] = { -959.4056f, -145.7552f, 36.7732f };
		Local_879[5 /*3*/] = { -1020.023f, -163.9246f, 36.7896f };
		Local_879[6 /*3*/] = { -1071.111f, -164.687f, 36.7161f };
		fLocal_901[0] = 206.0301f;
		fLocal_901[1] = 119.711f;
		fLocal_901[2] = 117.2803f;
		fLocal_901[3] = 117.1178f;
		fLocal_901[4] = 115.7739f;
		fLocal_901[5] = 118.1293f;
		fLocal_901[6] = 66.6215f;
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC01"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_633[iLocal_909]))
			{
				if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_649[iLocal_909 /*3*/], 50f) && !MISC::IS_POSITION_OCCUPIED(Local_649[iLocal_909 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_649[iLocal_909 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_649[iLocal_909 /*3*/], &uVar2))
						{
							uVar2 = Local_649[iLocal_909 /*3*/].f_2;
						}
						if (iLocal_909 > 4 || GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_157, 150f))
						{
							uLocal_633[iLocal_909] = VEHICLE::CREATE_VEHICLE(iVar0, Local_649[iLocal_909 /*3*/], Local_649[iLocal_909 /*3*/].f_1, uVar2, fLocal_671[iLocal_909], 1, 1);
							uLocal_641[iLocal_909] = PED::CREATE_RANDOM_PED_AS_DRIVER(uLocal_633[iLocal_909], 1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_633[iLocal_909]);
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_641[iLocal_909], uLocal_633[iLocal_909], "Eps8TRAFFIC01", 262275, 0, 1032, -1, -1f, 0, 1073741824);
						}
					}
				}
			}
			else if (GlobalFunc_115(uLocal_633[iLocal_909]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_633[iLocal_909]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(uLocal_633[iLocal_909]) > 70)
					{
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_633[iLocal_909], 70f))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_633[iLocal_909]))
							{
								GlobalFunc_69(&(uLocal_641[iLocal_909]));
								GlobalFunc_6692(&(uLocal_633[iLocal_909]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_633[iLocal_909]))
				{
					GlobalFunc_69(&(uLocal_641[iLocal_909]));
					GlobalFunc_6692(&(uLocal_633[iLocal_909]));
				}
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC02"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_679[iLocal_909]))
			{
				if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_695[iLocal_909 /*3*/], 50f) && !MISC::IS_POSITION_OCCUPIED(Local_695[iLocal_909 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_695[iLocal_909 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_695[iLocal_909 /*3*/], &fVar2))
						{
							fVar2 = Local_695[iLocal_909 /*3*/].f_2;
						}
						uLocal_679[iLocal_909] = VEHICLE::CREATE_VEHICLE(iVar0, Local_695[iLocal_909 /*3*/], Local_695[iLocal_909 /*3*/].f_1, fVar2, fLocal_717[iLocal_909], 1, 1);
						uLocal_687[iLocal_909] = PED::CREATE_RANDOM_PED_AS_DRIVER(uLocal_679[iLocal_909], 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_679[iLocal_909]);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_687[iLocal_909], uLocal_679[iLocal_909], "Eps8TRAFFIC02", 262275, 0, 1032, -1, -1f, 0, 1073741824);
					}
				}
			}
			else if (GlobalFunc_115(uLocal_679[iLocal_909]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_679[iLocal_909]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(uLocal_679[iLocal_909]) > 70)
					{
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_679[iLocal_909], 70f))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_679[iLocal_909]))
							{
								GlobalFunc_69(&(uLocal_687[iLocal_909]));
								GlobalFunc_6692(&(uLocal_679[iLocal_909]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_679[iLocal_909]))
				{
					GlobalFunc_69(&(uLocal_687[iLocal_909]));
					GlobalFunc_6692(&(uLocal_679[iLocal_909]));
				}
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC03"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_725[iLocal_909]))
			{
				if ((!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_741[iLocal_909 /*3*/], 50f) && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_741[iLocal_909 /*3*/], 220f)) && !MISC::IS_POSITION_OCCUPIED(Local_741[iLocal_909 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_741[iLocal_909 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("rumpo");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_741[iLocal_909 /*3*/], &fVar2))
						{
							fVar2 = Local_741[iLocal_909 /*3*/].f_2;
						}
						uLocal_725[iLocal_909] = VEHICLE::CREATE_VEHICLE(iVar0, Local_741[iLocal_909 /*3*/], Local_741[iLocal_909 /*3*/].f_1, fVar2, fLocal_763[iLocal_909], 1, 1);
						uLocal_733[iLocal_909] = PED::CREATE_RANDOM_PED_AS_DRIVER(uLocal_725[iLocal_909], 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_725[iLocal_909]);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_733[iLocal_909], uLocal_725[iLocal_909], "Eps8TRAFFIC03", 262275, 0, 1032, -1, -1f, 0, 1073741824);
					}
				}
			}
			else if (GlobalFunc_115(uLocal_725[iLocal_909]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_725[iLocal_909]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(uLocal_725[iLocal_909]) > 70)
					{
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_725[iLocal_909], 70f))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_725[iLocal_909]))
							{
								GlobalFunc_69(&(uLocal_733[iLocal_909]));
								GlobalFunc_6692(&(uLocal_725[iLocal_909]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_725[iLocal_909]))
				{
					GlobalFunc_69(&(uLocal_733[iLocal_909]));
					GlobalFunc_6692(&(uLocal_725[iLocal_909]));
				}
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC04"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_771[iLocal_909]))
			{
				if (!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_787[iLocal_909 /*3*/], 50f) && !MISC::IS_POSITION_OCCUPIED(Local_787[iLocal_909 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_787[iLocal_909 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_787[iLocal_909 /*3*/], &fVar2))
						{
							fVar2 = Local_787[iLocal_909 /*3*/].f_2;
						}
						uLocal_771[iLocal_909] = VEHICLE::CREATE_VEHICLE(iVar0, Local_787[iLocal_909 /*3*/], Local_787[iLocal_909 /*3*/].f_1, fVar2, fLocal_809[iLocal_909], 1, 1);
						uLocal_779[iLocal_909] = PED::CREATE_RANDOM_PED_AS_DRIVER(uLocal_771[iLocal_909], 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_771[iLocal_909]);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_779[iLocal_909], uLocal_771[iLocal_909], "Eps8TRAFFIC04", 262275, 0, 1032, -1, -1f, 0, 1073741824);
					}
				}
			}
			else if (GlobalFunc_115(uLocal_771[iLocal_909]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_771[iLocal_909]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(uLocal_771[iLocal_909]) > 70)
					{
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_771[iLocal_909], 70f))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_771[iLocal_909]))
							{
								GlobalFunc_69(&(uLocal_779[iLocal_909]));
								GlobalFunc_6692(&(uLocal_771[iLocal_909]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_771[iLocal_909]))
				{
					GlobalFunc_69(&(uLocal_779[iLocal_909]));
					GlobalFunc_6692(&(uLocal_771[iLocal_909]));
				}
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC05"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_817[iLocal_909]))
			{
				if ((!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_833[iLocal_909 /*3*/], 50f) && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_833[iLocal_909 /*3*/], 170f)) && !MISC::IS_POSITION_OCCUPIED(Local_833[iLocal_909 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_833[iLocal_909 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("schafter2");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_833[iLocal_909 /*3*/], &fVar2))
						{
							fVar2 = Local_833[iLocal_909 /*3*/].f_2;
						}
						uLocal_817[iLocal_909] = VEHICLE::CREATE_VEHICLE(iVar0, Local_833[iLocal_909 /*3*/], Local_833[iLocal_909 /*3*/].f_1, fVar2, fLocal_855[iLocal_909], 1, 1);
						uLocal_825[iLocal_909] = PED::CREATE_RANDOM_PED_AS_DRIVER(uLocal_817[iLocal_909], 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_817[iLocal_909]);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_825[iLocal_909], uLocal_817[iLocal_909], "Eps8TRAFFIC05", 262275, 0, 1032, -1, -1f, 0, 1073741824);
					}
				}
			}
			else if (GlobalFunc_115(uLocal_817[iLocal_909]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_817[iLocal_909]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(uLocal_817[iLocal_909]) > 40)
					{
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_817[iLocal_909], 60f))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_817[iLocal_909]))
							{
								GlobalFunc_69(&(uLocal_825[iLocal_909]));
								GlobalFunc_6692(&(uLocal_817[iLocal_909]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_817[iLocal_909]))
				{
					GlobalFunc_69(&(uLocal_825[iLocal_909]));
					GlobalFunc_6692(&(uLocal_817[iLocal_909]));
				}
			}
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8TRAFFIC06"))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_863[iLocal_909]))
			{
				if ((!GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_879[iLocal_909 /*3*/], 50f) && GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_879[iLocal_909 /*3*/], 170f)) && !MISC::IS_POSITION_OCCUPIED(Local_879[iLocal_909 /*3*/], 15f, 0, 1, 0, 0, 0, 0, 0))
				{
					if (!CAM::IS_SPHERE_VISIBLE(Local_879[iLocal_909 /*3*/], 8f))
					{
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
						if (iVar1 == 0)
						{
							iVar0 = joaat("taxi");
						}
						else if (iVar1 == 1)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 2)
						{
							iVar0 = joaat("sadler");
						}
						else if (iVar1 == 3)
						{
							iVar0 = joaat("habanero");
						}
						else if (iVar1 == 4)
						{
							iVar0 = joaat("schafter2");
						}
						else
						{
							iVar0 = joaat("rumpo");
						}
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Local_879[iLocal_909 /*3*/], &fVar2))
						{
							fVar2 = Local_879[iLocal_909 /*3*/].f_2;
						}
						uLocal_863[iLocal_909] = VEHICLE::CREATE_VEHICLE(iVar0, Local_879[iLocal_909 /*3*/], Local_879[iLocal_909 /*3*/].f_1, fVar2, fLocal_901[iLocal_909], 1, 1);
						uLocal_871[iLocal_909] = PED::CREATE_RANDOM_PED_AS_DRIVER(uLocal_863[iLocal_909], 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_863[iLocal_909]);
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_871[iLocal_909], uLocal_863[iLocal_909], "Eps8TRAFFIC06", 262275, 0, 1032, -1, -1f, 0, 1073741824);
					}
				}
			}
			else if (GlobalFunc_115(uLocal_863[iLocal_909]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_863[iLocal_909]))
				{
					if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(uLocal_863[iLocal_909]) > 40)
					{
						if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), uLocal_863[iLocal_909], 60f))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_863[iLocal_909]))
							{
								GlobalFunc_69(&(uLocal_871[iLocal_909]));
								GlobalFunc_6692(&(uLocal_863[iLocal_909]));
							}
						}
					}
				}
				else if (ENTITY::IS_ENTITY_OCCLUDED(uLocal_863[iLocal_909]))
				{
					GlobalFunc_69(&(uLocal_871[iLocal_909]));
					GlobalFunc_6692(&(uLocal_863[iLocal_909]));
				}
			}
		}
		iLocal_909++;
		if (iLocal_909 > 6)
		{
			iLocal_909 = 0;
		}
	}
}

void func_330()//Position - 0x2EBF4
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_COMPLIANCE"))
	{
		if (GlobalFunc_115(uLocal_615[0]))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[0], "EPSILONISM_08_COMPLIANCE_CAR_LEADER", 0);
		}
		if (GlobalFunc_115(iLocal_614))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_614, "EPSILONISM_08_COMPLIANCE_HELI", 0);
		}
		AUDIO::START_AUDIO_SCENE("EPSILONISM_08_COMPLIANCE");
	}
}

void func_331()//Position - 0x2EC43
{
	VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	func_338();
	func_337();
	func_333();
	func_332();
	if (!iLocal_383)
	{
		AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
		AUDIO::TRIGGER_MUSIC_EVENT("EPS8_START");
		iLocal_383 = 1;
	}
	iLocal_567 = 3;
}

void func_332()//Position - 0x2EC81
{
	HUD::CLEAR_PRINTS();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_highsec_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sentinel"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("landstalker"));
	iLocal_938 = GlobalFunc_5743(uLocal_615[0], 1, 5);
	GlobalFunc_164("EPS8_05", 7500, 0);
	iLocal_357 = 1;
	iLocal_290 = MISC::GET_GAME_TIMER();
	if (GlobalFunc_4947(uLocal_615[0]))
	{
		if (GlobalFunc_4924(uLocal_579[0]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_941);
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(0, uLocal_615[0], "Eps8LS01", 786468, 0, 8, -1, -1f, 0, 1073741824);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_941);
			TASK::CLEAR_PED_TASKS(uLocal_579[0]);
			TASK::TASK_PERFORM_SEQUENCE(uLocal_579[0], uLocal_941);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_941);
		}
	}
	if (GlobalFunc_4947(iLocal_614))
	{
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_614, 222, "Ep8Heli01", 1);
		VEHICLE::SET_PLAYBACK_SPEED(iLocal_614, 1.25f);
	}
}

void func_333()//Position - 0x2ED56
{
	iLocal_614 = VEHICLE::CREATE_VEHICLE(joaat("maverick"), Local_205, fLocal_249, 1, 1);
	VEHICLE::SET_VEHICLE_COLOURS(iLocal_614, iLocal_160, iLocal_160);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_614, 0, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
	iLocal_577 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_614, 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	PED::SET_PED_ACCURACY(iLocal_577, iLocal_153);
	PED::SET_PED_SHOOT_RATE(iLocal_577, iLocal_155);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_577, joaat("weapon_combatpistol"), -1, 0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_577, uLocal_387);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_614, 3);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_577, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_577, 0, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_577, 3, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_577, 4, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_577, 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_577, 11, 1, 0, 0);
	iLocal_595 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_614, 26, joaat("a_m_y_epsilon_01"), 1, 1, 1);
	ENTITY::SET_ENTITY_LOD_DIST(iLocal_595, 100);
	PED::SET_PED_ACCURACY(iLocal_595, iLocal_153);
	PED::SET_PED_SHOOT_RATE(iLocal_595, iLocal_155);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_595, 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_595, 1, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_595, 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_595, 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_595, 10, 1, 0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_595, uLocal_387);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_595, joaat("weapon_combatpistol"), -1, 0, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_595, joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
	PED::SET_PED_KEEP_TASK(iLocal_595, 1);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_595, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	PED::SET_PED_CAN_HEAD_IK(iLocal_595, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_595, 13, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_595, 0);
	iLocal_578 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_614, 26, joaat("s_m_m_highsec_01"), 2, 1, 1);
	PED::SET_PED_ACCURACY(iLocal_578, (iLocal_153 - iLocal_154));
	PED::SET_PED_SHOOT_RATE(iLocal_578, (iLocal_155 + iLocal_156));
	PED::SET_PED_CONFIG_FLAG(iLocal_578, 324, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_578, joaat("weapon_advancedrifle"), -1, 0, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_578, joaat("weapon_advancedrifle"), joaat("component_at_ar_flsh"));
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_578, joaat("weapon_advancedrifle"), joaat("component_at_scope_small"));
	WEAPON::SET_CURRENT_PED_WEAPON(iLocal_578, joaat("weapon_advancedrifle"), 1);
	PED::SET_PED_KEEP_TASK(iLocal_578, 1);
	PED::SET_PED_COMBAT_RANGE(iLocal_578, 2);
	PED::SET_PED_HEARING_RANGE(iLocal_578, 400f);
	PED::SET_PED_SEEING_RANGE(iLocal_578, 400f);
	PED::SET_PED_ID_RANGE(iLocal_578, 400f);
	PED::SET_PED_FIRING_PATTERN(iLocal_578, -957453492);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_578, 2, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_578, 3, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_578, uLocal_387);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_578, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_578, 1, 0);
	uLocal_569[5] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_614, 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	PED::SET_PED_ACCURACY(uLocal_569[5], iLocal_153);
	PED::SET_PED_SHOOT_RATE(uLocal_569[5], iLocal_155);
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_569[5], joaat("weapon_combatpistol"), -1, 0, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uLocal_569[5], joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[5], 12, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_569[5], uLocal_387);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_569[5], 1, 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_569[5], 324, 1);
	uLocal_615[2] = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), Local_161[2 /*3*/], fLocal_232[2], 1, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_615[2]);
	VEHICLE::SET_VEHICLE_COLOURS(uLocal_615[2], iLocal_160, iLocal_160);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_615[2], 0, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_615[2], 1);
	VEHICLE::SET_VEHICLE_MOD_KIT(uLocal_615[2], 0);
	VEHICLE::SET_VEHICLE_WINDOW_TINT(uLocal_615[2], 2);
	VEHICLE::SET_VEHICLE_MOD(uLocal_615[2], 15, 1, 0);
	VEHICLE::SET_VEHICLE_MOD(uLocal_615[2], 11, 1, 0);
	VEHICLE::SET_VEHICLE_MOD(uLocal_615[2], 12, 0, 0);
	VEHICLE::TOGGLE_VEHICLE_MOD(uLocal_615[2], 18, 1);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uLocal_615[2], 0);
	uLocal_579[2] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_615[2], 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	PED::SET_DRIVER_ABILITY(uLocal_579[2], 1f);
	PED::SET_DRIVER_RACING_MODIFIER(uLocal_579[2], 1f);
	PED::SET_PED_ACCURACY(uLocal_579[2], iLocal_153);
	PED::SET_PED_SHOOT_RATE(uLocal_579[2], iLocal_155);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_579[2], 1);
	PED::SET_PED_KEEP_TASK(uLocal_579[2], 1);
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_579[2], joaat("weapon_pistol"), -1, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_579[2], 2, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_579[2], 12, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_579[2], uLocal_387);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_579[2], 1, 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_579[2], 324, 1);
	uLocal_587[2] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_615[2], 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	PED::SET_PED_ACCURACY(uLocal_587[2], iLocal_153);
	PED::SET_PED_SHOOT_RATE(uLocal_587[2], iLocal_155);
	PED::SET_PED_KEEP_TASK(uLocal_587[2], 1);
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_587[2], joaat("weapon_combatpistol"), -1, 0, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uLocal_587[2], joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_587[2], 2, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_587[2], 13, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_587[2], uLocal_387);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_587[2], 1, 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_587[2], 324, 1);
	uLocal_615[3] = VEHICLE::CREATE_VEHICLE(joaat("sentinel"), Local_161[3 /*3*/], fLocal_232[3], 1, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_615[3]);
	VEHICLE::SET_VEHICLE_COLOURS(uLocal_615[3], iLocal_160, iLocal_160);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_615[3], 0, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(uLocal_615[3], 1);
	VEHICLE::SET_VEHICLE_MOD_KIT(uLocal_615[3], 0);
	VEHICLE::SET_VEHICLE_WINDOW_TINT(uLocal_615[3], 2);
	VEHICLE::SET_VEHICLE_MOD(uLocal_615[3], 15, 1, 0);
	VEHICLE::SET_VEHICLE_MOD(uLocal_615[3], 11, 1, 0);
	VEHICLE::SET_VEHICLE_MOD(uLocal_615[3], 12, 0, 0);
	VEHICLE::TOGGLE_VEHICLE_MOD(uLocal_615[3], 18, 1);
	VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uLocal_615[3], 0);
	uLocal_579[3] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_615[3], 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	PED::SET_DRIVER_ABILITY(uLocal_579[3], 1f);
	PED::SET_DRIVER_RACING_MODIFIER(uLocal_579[3], 1f);
	PED::SET_PED_ACCURACY(uLocal_579[3], iLocal_153);
	PED::SET_PED_SHOOT_RATE(uLocal_579[3], iLocal_155);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_579[3], 1);
	PED::SET_PED_KEEP_TASK(uLocal_579[3], 1);
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_579[3], joaat("weapon_pistol"), -1, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_579[3], 2, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_579[3], 12, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_579[3], uLocal_387);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_579[3], 1, 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_579[3], 324, 1);
	uLocal_587[3] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_615[3], 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	PED::SET_PED_ACCURACY(uLocal_587[3], iLocal_153);
	PED::SET_PED_SHOOT_RATE(uLocal_587[3], iLocal_155);
	PED::SET_PED_KEEP_TASK(uLocal_587[3], 1);
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_587[3], joaat("weapon_pistol"), -1, 0, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uLocal_587[3], joaat("weapon_pistol"), joaat("component_at_pi_flsh"));
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_587[3], 2, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_587[3], 13, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_587[3], uLocal_387);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_587[3], 1, 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_587[3], 324, 1);
	if (GlobalFunc_4924(uLocal_569[0]))
	{
		PED::SET_PED_ACCURACY(uLocal_569[0], iLocal_153);
		PED::SET_PED_SHOOT_RATE(uLocal_569[0], iLocal_155);
		WEAPON::GIVE_WEAPON_TO_PED(uLocal_569[0], joaat("weapon_smg"), -1, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[0], 12, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[0], 1, 0);
		TASK::TASK_LOOK_AT_ENTITY(uLocal_569[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_569[0], uLocal_387);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_569[0], 1, 0);
		PED::SET_PED_CAN_EVASIVE_DIVE(uLocal_569[0], 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_569[0], 324, 1);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_569[0], 0, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_569[0], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_569[0], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_569[0], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_569[0], 11, 1, 0, 0);
	}
	if (GlobalFunc_4924(uLocal_569[2]))
	{
		PED::SET_PED_ACCURACY(uLocal_569[2], iLocal_153);
		PED::SET_PED_SHOOT_RATE(uLocal_569[2], iLocal_155);
		WEAPON::GIVE_WEAPON_TO_PED(uLocal_569[2], joaat("weapon_smg"), -1, 0, 0);
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uLocal_569[2], joaat("weapon_smg"), joaat("component_at_ar_flsh"));
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[2], 12, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[2], 1, 0);
		TASK::TASK_LOOK_AT_ENTITY(uLocal_569[2], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_569[2], uLocal_387);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_569[2], 1, 0);
		PED::SET_PED_CAN_EVASIVE_DIVE(uLocal_569[2], 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_569[2], 324, 1);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_569[2], 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_569[2], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_569[2], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_569[2], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_569[2], 11, 0, 0, 0);
	}
	uLocal_569[3] = PED::CREATE_PED(26, joaat("s_m_m_highsec_01"), Local_183[3 /*3*/], fLocal_240[3], 1, 1);
	PED::SET_PED_ACCURACY(uLocal_569[3], iLocal_153);
	PED::SET_PED_SHOOT_RATE(uLocal_569[3], iLocal_155);
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_569[3], joaat("weapon_smg"), -1, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[3], 12, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[3], 1, 0);
	TASK::TASK_LOOK_AT_ENTITY(uLocal_569[3], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_569[3], uLocal_387);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_569[3], 1, 0);
	TASK::TASK_PLAY_ANIM(uLocal_569[3], "rcmepsilonism8", "security_idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(uLocal_569[3], 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_569[3], 324, 1);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_569[3], 0, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_569[3], 3, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_569[3], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_569[3], 8, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_569[3], 11, 0, 0, 0);
	uLocal_569[4] = PED::CREATE_PED(26, joaat("s_m_m_highsec_01"), Local_183[4 /*3*/], fLocal_240[4], 1, 1);
	PED::SET_PED_ACCURACY(uLocal_569[4], iLocal_153);
	PED::SET_PED_SHOOT_RATE(uLocal_569[4], iLocal_155);
	WEAPON::GIVE_WEAPON_TO_PED(uLocal_569[4], joaat("weapon_smg"), -1, 0, 0);
	WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uLocal_569[4], joaat("weapon_smg"), joaat("component_at_ar_flsh"));
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[4], 13, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_569[4], 1, 0);
	TASK::TASK_LOOK_AT_ENTITY(uLocal_569[4], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_569[4], uLocal_387);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_569[4], 1, 0);
	TASK::TASK_PLAY_ANIM(uLocal_569[4], "rcmepsilonism8", "security_idle", 4f, -4f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_CAN_EVASIVE_DIVE(uLocal_569[4], 0);
	PED::SET_PED_CONFIG_FLAG(uLocal_569[4], 324, 1);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_569[4], 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_569[4], 3, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_569[4], 4, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_569[4], 8, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(uLocal_569[4], 11, 1, 0, 0);
	if (GlobalFunc_4924(uLocal_579[0]))
	{
		PED::SET_DRIVER_ABILITY(uLocal_579[0], 1f);
		PED::SET_DRIVER_RACING_MODIFIER(uLocal_579[0], 1f);
		PED::SET_PED_ACCURACY(uLocal_579[0], iLocal_153);
		PED::SET_PED_SHOOT_RATE(uLocal_579[0], iLocal_155);
		WEAPON::GIVE_WEAPON_TO_PED(uLocal_579[0], joaat("weapon_combatpistol"), -1, 0, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_579[0], 12, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_579[0], 2, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_579[0], uLocal_387);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_579[0], 1, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_579[0], 324, 1);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_579[0], 0, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_579[0], 3, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_579[0], 4, 0, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_579[0], 8, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_579[0], 11, 0, 0, 0);
	}
	if (GlobalFunc_4924(uLocal_587[0]))
	{
		PED::SET_PED_ACCURACY(uLocal_587[0], iLocal_153);
		PED::SET_PED_SHOOT_RATE(uLocal_587[0], iLocal_155);
		WEAPON::GIVE_WEAPON_TO_PED(uLocal_587[0], joaat("weapon_microsmg"), -1, 0, 0);
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uLocal_587[0], joaat("weapon_microsmg"), joaat("component_at_pi_flsh"));
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(uLocal_587[0], joaat("weapon_microsmg"), joaat("component_at_scope_macro"));
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_587[0], 2, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_587[0], 13, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_587[0], uLocal_387);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(uLocal_587[0], 1, 0);
		PED::SET_PED_CONFIG_FLAG(uLocal_587[0], 324, 1);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_587[0], 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_587[0], 3, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_587[0], 4, 0, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_587[0], 8, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(uLocal_587[0], 11, 0, 1, 0);
	}
	GlobalFunc_173(&uLocal_389, 8, iLocal_595, "EPSGUARD", 0, 1);
	GlobalFunc_173(&uLocal_389, 3, iLocal_577, "EPSPILOT", 0, 1);
	GlobalFunc_173(&uLocal_389, 5, uLocal_569[0], "EPSGUARD2", 0, 1);
	GlobalFunc_173(&uLocal_389, 6, uLocal_569[3], "EPSGUARD7", 0, 1);
	GlobalFunc_173(&uLocal_389, 7, uLocal_569[4], "EPSGUARD8", 0, 1);
	GlobalFunc_9660(1, 0, 0);
	GlobalFunc_9660(60, 0, 0);
	GlobalFunc_9660(55, 0, 0);
	func_111(PLAYER::PLAYER_PED_ID(), 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(5, 1);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(3, 1);
	iLocal_290 = MISC::GET_GAME_TIMER();
}




void func_337()//Position - 0x2FD59
{
	while (((((((((!STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_highsec_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_epsilon_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("sentinel"))) || !STREAMING::HAS_MODEL_LOADED(joaat("maverick"))) || !STREAMING::HAS_MODEL_LOADED(joaat("p_ld_heist_bag_s_1"))) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(222, "Ep8Heli01")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmepsilonism8")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8EPED")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Eps8LS01")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("helicopterhud"))
	{
		SYSTEM::WAIT(0);
	}
}

void func_338()//Position - 0x2FE03
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_631))
	{
		iLocal_631 = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), Local_211, fLocal_250, 1, 1);
		GlobalFunc_534(iLocal_631, 0);
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_631, iLocal_160, iLocal_160);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_631, 0, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_631, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_631, "K1FFL0M");
	}
	if (GlobalFunc_4947(iLocal_631))
	{
		iLocal_270 = ENTITY::GET_ENTITY_HEALTH(iLocal_631);
		fLocal_252 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_631);
		fLocal_253 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_631);
		ENTITY::SET_ENTITY_HEALTH(iLocal_631, (iLocal_270 + (iLocal_270 / 3)));
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_631, (fLocal_252 + (fLocal_252 / 3f)));
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_631, (fLocal_253 + (fLocal_253 / 3f)));
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_631, 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_631, 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iLocal_631, 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_631, 1);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_631, 5, 0);
		VEHICLE::ADD_VEHICLE_STUCK_CHECK_WITH_WARP(iLocal_631, 0.2f, 1000, 0, 0, 0, -1);
		uLocal_596[0] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_631, 0f, 0f, 10f), 1, 1, 0);
		uLocal_596[1] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_631, 0f, 0f, 11f), 1, 1, 0);
		uLocal_596[2] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_631, 0f, 0f, 12f), 1, 1, 0);
		uLocal_596[3] = OBJECT::CREATE_OBJECT(joaat("p_ld_heist_bag_s_1"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_631, 0f, 0f, 13f), 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_596[0], iLocal_631, 0, -0.06f, -1.93f, -0.1f, 0f, 0f, 91f, 0, 0, 0, 0, 2, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_596[1], iLocal_631, 0, 0.2f, -1.92f, -0.1f, 0f, 0f, 93f, 0, 0, 0, 0, 2, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_596[2], iLocal_631, 0, 0.4f, -1.94f, -0.1f, 0f, 0f, 89f, 0, 0, 0, 0, 2, 1);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_596[3], iLocal_631, 0, 0.66f, -1.95f, -0.1f, 0f, 0f, 89f, 0, 0, 0, 0, 2, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_631, 1);
		if (!GlobalFunc_188())
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, -1);
			}
		}
	}
	MISC::CLEAR_AREA_OF_VEHICLES(-567.6498f, -2.9035f, 43.3971f, 400f, 1, 0, 0, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(-711.6323f, 42.0868f, 14.5077f, -663.5175f, 118.0403f, 86.0362f);
}


void func_340()//Position - 0x30091
{
	var uVar0;
	
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	switch (iLocal_566)
	{
		case 0:
			if (iLocal_307 == 0)
			{
				GlobalFunc_9623("ep_8_rcm", 0);
				if (!CAM::DOES_CAM_EXIST(uLocal_612))
				{
					uLocal_612 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				if (!CAM::DOES_CAM_EXIST(uLocal_613))
				{
					uLocal_613 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
				}
				CAM::SET_CAM_PARAMS(uLocal_612, -692.1f, 18.8f, 40.3f, 0.7f, 0f, 24.5f, 50f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_613, -691.8f, 18.9f, 42.9f, 22.2f, 0f, 24.8f, 50f, 0, 1, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 128);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -677.9299f, 31.37431f, 37.97105f, -677.7263f, 51.89373f, 48.20758f, 25f, 0, 1, 0))
					{
						GlobalFunc_5705(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -676.7216f, 46.6862f, 41.7595f, 91.6871f, 0, 1);
						GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), -682.9754f, 48.252f, 42.1423f, 107.7723f, 0, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -696.1459f, 41.7659f, 42.218f, 1f, -1, 1f, 0, 25.269f);
					}
					else
					{
						GlobalFunc_5705(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -719.0406f, 32.5248f, 41.7419f, 287.2928f, 0, 1);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 5f);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -703.656f, 37.143f, 42.2135f, 3f, 0, 0, 262144, 6f, 100f);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -696.1459f, 41.7659f, 42.218f, 1f, -1, 1f, 0, 25.269f);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					}
				}
				else
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -696.1459f, 41.7659f, 42.218f, 1f, -1, 1f, 0, 25.269f);
				}
				CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_613, uLocal_612, 6200, 1, 1);
				iLocal_306 = MISC::GET_GAME_TIMER();
				iLocal_307 = 1;
			}
			else if (iLocal_307 == 1)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -703.656f, 37.143f, 42.2135f, 9f, 9f, 9f, 0, 1, 0))
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 5f);
						}
					}
				}
				if (MISC::GET_GAME_TIMER() > iLocal_306 + 6000 || GlobalFunc_4926(1000))
				{
					iLocal_307 = 2;
				}
			}
			else if (iLocal_307 == 2)
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (func_222(PLAYER::PLAYER_PED_ID(), 12, 8))
					{
						func_410("Michael", joaat("player_zero"), 8);
					}
					if (func_222(PLAYER::PLAYER_PED_ID(), 12, 28))
					{
						func_410("Michael", joaat("player_zero"), 28);
					}
				}
				if (GlobalFunc_8027(1, 1093140480, 0))
				{
					iLocal_377 = 0;
					iLocal_378 = 0;
					iLocal_380 = 0;
					iLocal_379 = 0;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_631))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_631, "epsilon_car", 0, joaat("tailgater"), 32);
					}
					RECORDING::_0x48621C9FCA3EBD28(1);
					GlobalFunc_8954();
					CUTSCENE::START_CUTSCENE(0);
					CUTSCENE::_0x7F96F23FA9B73327(joaat("tailgater"));
					SYSTEM::WAIT(0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::DESTROY_CAM(uLocal_612, 0);
					CAM::DESTROY_CAM(uLocal_613, 0);
					func_398(-702.0282f, 38.17753f, 46.45677f, -659.6471f, 47.08546f, 38.1703f, 16f, -717.3519f, 34.7669f, 42.0465f, 289.3352f, 1, 1, 1, 0, 0);
					GlobalFunc_10701(0f, 0f, 0f, 0f, 1, 0);
					func_350(-697.75f, 45.38f, 43.03f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
					MISC::CLEAR_AREA_OF_VEHICLES(-651.949f, 62.916f, 44.7353f, 150f, 0, 0, 0, 0, 0);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-651.3148f, 121.844f, 63.45312f, -650.0618f, 0.95496f, 35.75433f, 41.75f, 0, 0, 1);
					iLocal_566 = 1;
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					if (GlobalFunc_4947(iLocal_631))
					{
						if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
							{
								PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, -1);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
							}
							iLocal_377 = 1;
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("epsilon_car", 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_631))
					{
					}
					iLocal_380 = 1;
				}
				if (iLocal_380 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_631))
					{
						VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_631, 1, 1, 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Cris", 0))
				{
					iLocal_378 = 1;
				}
				CAM::_0x59424BD75174C9B1();
			}
			else
			{
				iLocal_566 = 2;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				iLocal_379 = 1;
			}
			if (iLocal_377 == 0 || CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			if (((iLocal_377 == 1 && iLocal_378 == 1) && iLocal_380 == 1) && iLocal_379 == 1)
			{
				iLocal_566 = 2;
			}
			break;
		
		case 2:
			if (!iLocal_383)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
				AUDIO::TRIGGER_MUSIC_EVENT("EPS8_START");
				iLocal_383 = 1;
			}
			if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFinalEpsilonPayment == 0)
			{
				GlobalFunc_10834(0, 29, 50000);
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFinalEpsilonPayment = 1;
			}
			func_341(1, 1, 1, 1);
			if (GlobalFunc_4947(iLocal_631))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_631, 1);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_631, 1);
			}
			iLocal_567 = 2;
			break;
	}
}

void func_341(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x30640
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









void func_350(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x30933
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
			switch (GlobalFunc_8329())
			{
				case 0:
					if (func_222(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_111(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (func_222(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_111(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (func_222(PLAYER::PLAYER_PED_ID(), 8, 1) || func_222(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_111(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (func_222(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_111(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
















































void func_398(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, float fParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14, bool bParam15)//Position - 0x33DF2
{
	GlobalFunc_9254(Param0, Param3, fParam6, Param7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
}












void func_410(char* sParam0, int iParam1, int iParam2)//Position - 0x34814
{
	int iVar0;
	struct<14> Var1;
	var uVar15;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	var uVar30;
	int iVar46;
	
	uVar15 = 9;
	uVar30 = { GlobalFunc_7617(iParam1, iParam2) };
	iVar46 = 0;
	if (uVar30[2] == -99 && uVar30[0] == -99)
	{
		iVar46 = 1;
	}
	iVar28 = 0;
	while (iVar28 <= 14)
	{
		iVar0 = iVar28;
		if (iVar0 != 12 && iVar0 != 14)
		{
			if (iVar0 == 13)
			{
				uVar15 = { GlobalFunc_7616(iParam1, uVar30[iVar28]) };
				iVar29 = 0;
				while (iVar29 <= 8)
				{
					iVar25 = iVar29;
					iVar26 = GlobalFunc_40(iVar25);
					iVar27 = GlobalFunc_29(iVar26);
					if (uVar15[iVar29] != iVar27)
					{
						Var1 = { GlobalFunc_10878(iParam1, 14, uVar15[iVar29]) };
						CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION(sParam0, Var1.f_12, Var1.f_3, 0, iParam1);
					}
					iVar29++;
				}
			}
			else
			{
				Var1 = { GlobalFunc_10878(iParam1, iVar0, uVar30[iVar28]) };
				if (((iVar28 == 2 || iVar28 == 0) && iVar46) || uVar30[iVar28] == -99)
				{
					Var1.f_3 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[Var1.f_5 /*65*/].f_13[iVar28];
					Var1.f_4 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[Var1.f_5 /*65*/][iVar28];
				}
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION(sParam0, GlobalFunc_33(iVar0), Var1.f_3, Var1.f_4, iParam1);
			}
		}
		iVar28++;
	}
}





void func_415()//Position - 0x34A5D
{
	if (GlobalFunc_199() == 1 && iLocal_356 == 0)
	{
		func_418();
	}
	else
	{
		func_417();
		func_416();
		iLocal_567 = 1;
	}
}

void func_416()//Position - 0x34A8B
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (GlobalFunc_4947(Local_82.f_35[1]))
	{
		iLocal_631 = Local_82.f_35[1];
		Local_82.f_35[1] = 0;
		GlobalFunc_534(iLocal_631, 0);
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_631, 1) };
		if (((Var0.x < (Local_211.x - 0.01f) || Var0.x > (Local_211.x + 0.01f)) || Var0.f_1 < (Local_211.f_1 - 0.01f)) || Var0.f_1 > (Local_211.f_1 + 0.01f))
		{
			GlobalFunc_5705(iLocal_631, Local_211, fLocal_250, 0, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_631);
		}
	}
	else
	{
		iLocal_631 = VEHICLE::CREATE_VEHICLE(joaat("tailgater"), Local_211, fLocal_250, 1, 1);
		GlobalFunc_534(iLocal_631, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iLocal_631, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iLocal_631, "K1FFL0M");
		VEHICLE::SET_VEHICLE_COLOURS(iLocal_631, iLocal_160, iLocal_160);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_631, 0, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_631);
	}
	if (GlobalFunc_4947(Local_82.f_35[0]))
	{
		uLocal_615[0] = Local_82.f_35[0];
		Local_82.f_35[0] = 0;
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_615[0], 1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_631, 1) };
		if (((Var3.x < (Local_161[0 /*3*/] - 0.01f) || Var3.x > (Local_161[0 /*3*/] + 0.01f)) || Var3.f_1 < (Local_161[0 /*3*/].f_1 - 0.01f)) || Var3.f_1 > (Local_161[0 /*3*/].f_1 + 0.01f))
		{
			GlobalFunc_5705(uLocal_615[0], Local_161[0 /*3*/], fLocal_232[0], 0, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_615[0]);
		}
	}
	else
	{
		uLocal_615[0] = VEHICLE::CREATE_VEHICLE(joaat("landstalker"), Local_161[0 /*3*/], fLocal_232[0], 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(uLocal_615[0], iLocal_160, iLocal_160);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uLocal_615[0], 0, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_615[0]);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uLocal_615[0], 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_579[0]))
	{
		uLocal_579[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_615[0], 26, joaat("s_m_m_highsec_01"), -1, 1, 1);
	}
	if (GlobalFunc_4924(uLocal_579[0]))
	{
		func_111(uLocal_579[0], 14, 112, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		GlobalFunc_173(&uLocal_389, 5, uLocal_579[0], "EPSGUARD2", 0, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_587[0]))
	{
		uLocal_587[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_615[0], 26, joaat("s_m_m_highsec_01"), 0, 1, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_569[0]))
	{
		uLocal_569[0] = PED::CREATE_PED(26, joaat("s_m_m_highsec_01"), Local_183[0 /*3*/], fLocal_240[0], 1, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_569[2]))
	{
		uLocal_569[2] = PED::CREATE_PED(26, joaat("s_m_m_highsec_01"), Local_183[2 /*3*/], fLocal_240[2], 1, 1);
	}
}

void func_417()//Position - 0x34D5B
{
	VEHICLE::REQUEST_VEHICLE_RECORDING(222, "Ep8Heli01");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8EPED");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8LS01");
	STREAMING::REQUEST_ANIM_DICT("rcmepsilonism8");
	STREAMING::REQUEST_MODEL(joaat("s_m_m_highsec_01"));
	STREAMING::REQUEST_MODEL(joaat("a_m_y_epsilon_01"));
	STREAMING::REQUEST_MODEL(joaat("sentinel"));
	STREAMING::REQUEST_MODEL(joaat("maverick"));
	STREAMING::REQUEST_MODEL(joaat("landstalker"));
	STREAMING::REQUEST_MODEL(joaat("tailgater"));
	STREAMING::REQUEST_MODEL(joaat("p_ld_heist_bag_s_1"));
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC01");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC02");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC03");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC04");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC05");
	TASK::REQUEST_WAYPOINT_RECORDING("Eps8TRAFFIC06");
	STREAMING::REQUEST_MODEL(joaat("taxi"));
	STREAMING::REQUEST_MODEL(joaat("sadler"));
	STREAMING::REQUEST_MODEL(joaat("habanero"));
	STREAMING::REQUEST_MODEL(joaat("schafter2"));
	STREAMING::REQUEST_MODEL(joaat("rumpo"));
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("helicopterhud", 0);
	HUD::REQUEST_ADDITIONAL_TEXT("EPS8", 0);
	while (((!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !STREAMING::HAS_MODEL_LOADED(joaat("landstalker"))) || !STREAMING::HAS_MODEL_LOADED(joaat("tailgater"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_highsec_01")))
	{
		SYSTEM::WAIT(0);
	}
	Local_223 = { -281.6395f, -102.0944f, 45.8373f };
	Local_226 = { -409.0169f, -58.1734f, 43.6077f };
	Local_211 = { -697.3215f, 39.0406f, 42.86736f };
	fLocal_250 = -66.98854f;
	Local_205 = { -357.1071f, -91.7128f, 45.0982f };
	fLocal_249 = 8.7486f;
	Local_161[0 /*3*/] = { -686.5046f, 43.9098f, 42.2067f };
	Local_161[1 /*3*/] = { 188.3458f, 169.2785f, 104.3145f };
	Local_161[2 /*3*/] = { -410.1774f, -68.8325f, 42.4324f };
	Local_161[3 /*3*/] = { -656.588f, 56.539f, 42.719f };
	Local_161[4 /*3*/] = { 299.5176f, -11.642f, 76.1623f };
	Local_161[5 /*3*/] = { 175.4031f, 93.0495f, 87.8098f };
	Local_161[6 /*3*/] = { 257.4567f, 161.3084f, 103.6166f };
	fLocal_232[0] = 296.81f;
	fLocal_232[1] = 162.1519f;
	fLocal_232[2] = 317.5537f;
	fLocal_232[3] = 176.3863f;
	fLocal_232[4] = 157.9f;
	fLocal_232[5] = 340.5091f;
	fLocal_232[6] = 249.2435f;
	Local_183[0 /*3*/] = { -726.4555f, 33.33568f, 43.22695f };
	Local_183[1 /*3*/] = { 222.146f, 206.6046f, 104.4984f };
	Local_183[2 /*3*/] = { -666.5512f, 49.19759f, 42.07154f };
	Local_183[3 /*3*/] = { -379.9735f, -73.8836f, 44.6215f };
	Local_183[4 /*3*/] = { -378.7636f, -86.7811f, 44.6579f };
	Local_183[5 /*3*/] = { -374.7542f, -81.9368f, 44.6577f };
	Local_183[6 /*3*/] = { 248.7298f, 109.6775f, 101.4054f };
	fLocal_240[0] = -147.8099f;
	fLocal_240[1] = 129.6183f;
	fLocal_240[2] = -171.6803f;
	fLocal_240[3] = 340.8513f;
	fLocal_240[4] = 256.0816f;
	fLocal_240[5] = 251.5665f;
	fLocal_240[6] = 23.1111f;
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("landstalker"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel2"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_f_y_epsilon_01"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_epsilon_01"), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_epsilon_02"), 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-375.76f, -101.27f, 42.79f, -344.3f, -100.84f, 48.77f, 0, 1);
	GlobalFunc_173(&uLocal_389, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	GlobalFunc_9660(51, 0, 0);
}

void func_418()//Position - 0x3511B
{
	GlobalFunc_4972(-702.9905f, 37.0211f, 42.2136f, 292.7606f, 1, 0);
	GlobalFunc_2350(0, 0);
	func_417();
	func_416();
	func_338();
	func_337();
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(-661.5685f, 45.5499f, 40.0669f, 20f, 1, 0, 0, 0);
	GlobalFunc_4967(iLocal_631, -1, 1);
	func_333();
	func_332();
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	GlobalFunc_164("EPS8_05", 7500, 0);
	iLocal_357 = 1;
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 0);
	AUDIO::TRIGGER_MUSIC_EVENT("EPS8_START");
	GlobalFunc_79(800, 0);
	func_419(1, 1, 1);
	iLocal_567 = 3;
}

void func_419(int iParam0, int iParam1, int iParam2)//Position - 0x351E4
{
	func_341(0, 0, iParam2, 1);
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




void func_423()//Position - 0x353A3
{
	float fVar0;
	var uVar1;
	struct<6> Var2;
	
	if ((((iLocal_567 == 3 || iLocal_567 == 4) || iLocal_567 == 5) || iLocal_567 == 6) || iLocal_567 == 7)
	{
		if (iLocal_311 == 1)
		{
			if (GlobalFunc_4924(iLocal_595))
			{
				if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_595, "rcmepsilonism8", "worship_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_595, "rcmepsilonism8", "worship_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_595, "rcmepsilonism8", "worship_idle_a", 3))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_595, "rcmepsilonism8", "worship_exit", 3))
					{
						iLocal_255 = 0;
						func_427();
						func_79();
					}
					else if (ENTITY::FIND_ANIM_EVENT_PHASE("rcmepsilonism8", "worship_exit", "WalkInterruptible", &fVar0, &uVar1) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_595, "rcmepsilonism8", "worship_exit") >= fVar0)
					{
						PED::FORCE_PED_MOTION_STATE(iLocal_595, -530524, 0, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_595, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_595, -355.739f, -181.6352f, 36.7355f, 2f, -1, 3f, 0, 1193033728);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_595, 0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_595);
						iLocal_255 = 0;
						func_427();
						func_79();
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_595, "rcmepsilonism8", "worship_exit") >= 0.88f)
					{
						PED::FORCE_PED_MOTION_STATE(iLocal_595, -530524, 0, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_595, 1);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_595, -355.739f, -181.6352f, 36.7355f, 2f, -1, 3f, 0, 1193033728);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_595, 0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_595);
						iLocal_255 = 0;
						func_427();
						func_79();
					}
				}
			}
		}
		if (iLocal_310 == 1)
		{
			Var2 = { GlobalFunc_560() };
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var2, "EPS8_ESC") || MISC::ARE_STRINGS_EQUAL(&Var2, "EPS8_E1"))
				{
					GlobalFunc_4956();
				}
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_308))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_631, -8f, 1);
			}
		}
		if (!GlobalFunc_111() || !iLocal_352 == 1)
		{
			if (iLocal_310 == 1)
			{
				if (GlobalFunc_4924(uLocal_569[5]))
				{
					PED::RESET_PED_WEAPON_MOVEMENT_CLIPSET(uLocal_569[5]);
				}
				GlobalFunc_4948(&uLocal_554, 0, 0);
				GlobalFunc_4956();
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				GlobalFunc_146(&iLocal_939);
				GlobalFunc_200(&uLocal_389, 6);
				GlobalFunc_200(&uLocal_389, 7);
				GlobalFunc_200(&uLocal_389, 4);
				GlobalFunc_173(&uLocal_389, 6, 0, "EPSGUARD4", 0, 1);
				GlobalFunc_173(&uLocal_389, 7, 0, "EPSGUARD8", 0, 1);
				GlobalFunc_173(&uLocal_389, 4, 0, "CRIS", 0, 1);
				func_424();
				func_11();
				if (GlobalFunc_4924(iLocal_595))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_595, 1);
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_595, 1, 0);
					if (GlobalFunc_115(iLocal_614) && PED::IS_PED_IN_VEHICLE(iLocal_595, iLocal_614, 0))
					{
						PED::SET_PED_ACCURACY(iLocal_595, (iLocal_153 - iLocal_154));
						PED::SET_PED_SHOOT_RATE(iLocal_595, (iLocal_155 + iLocal_156));
						PED::SET_PED_CONFIG_FLAG(iLocal_595, 324, 1);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_595, joaat("weapon_advancedrifle"), -1, 0, 0);
						WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_595, joaat("weapon_advancedrifle"), joaat("component_at_ar_flsh"));
						WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iLocal_595, joaat("weapon_advancedrifle"), joaat("component_at_scope_small"));
						WEAPON::SET_CURRENT_PED_WEAPON(iLocal_595, joaat("weapon_advancedrifle"), 1);
						PED::SET_PED_KEEP_TASK(iLocal_595, 1);
						PED::SET_PED_COMBAT_RANGE(iLocal_595, 2);
						PED::SET_PED_HEARING_RANGE(iLocal_595, 400f);
						PED::SET_PED_SEEING_RANGE(iLocal_595, 400f);
						PED::SET_PED_ID_RANGE(iLocal_595, 400f);
						PED::SET_PED_FIRING_PATTERN(iLocal_595, -957453492);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_595, 2, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_595, 3, 0);
						TASK::TASK_COMBAT_PED(iLocal_595, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(-651.3148f, 121.844f, 63.45312f, -650.0618f, 0.95496f, 35.75433f, 41.75f, 0, 1, 1);
				MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(5, 0);
				MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(3, 0);
				iLocal_255 = 0;
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				}
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_569[5]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_596[0]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[0], uLocal_569[5]))
						{
							ENTITY::DETACH_ENTITY(uLocal_596[0], 1, 1);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_596[1]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[1], uLocal_569[5]))
						{
							ENTITY::DETACH_ENTITY(uLocal_596[1], 1, 1);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_596[2]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[2], uLocal_569[5]))
						{
							ENTITY::DETACH_ENTITY(uLocal_596[2], 1, 1);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_596[3]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[3], uLocal_569[5]))
						{
							ENTITY::DETACH_ENTITY(uLocal_596[3], 1, 1);
						}
					}
				}
				iLocal_289 = MISC::GET_GAME_TIMER();
				HUD::CLEAR_PRINTS();
				if (iLocal_335 == 0)
				{
					if (iLocal_332 == 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_631))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_631, 0))
							{
								if (iLocal_257 != iLocal_256)
								{
									if (iLocal_313 == 0)
									{
										GlobalFunc_164("EPS8_12", 7500, 0);
									}
									iLocal_334 = 1;
								}
							}
							else if ((iLocal_567 == 5 || iLocal_567 == 6) || iLocal_567 == 7)
							{
								GlobalFunc_164("EPS8_11", 7500, 0);
							}
						}
					}
					else if (iLocal_257 != iLocal_256)
					{
						if (iLocal_313 == 0)
						{
							GlobalFunc_164("EPS8_12", 7500, 0);
						}
						iLocal_334 = 1;
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(iLocal_940))
				{
					iLocal_940 = HUD::ADD_BLIP_FOR_ENTITY(uLocal_596[3]);
					HUD::SET_BLIP_COLOUR(iLocal_940, 2);
					HUD::SET_BLIP_SCALE(iLocal_940, fLocal_148);
					GlobalFunc_164("EPS8_21", 7500, 0);
				}
				if (!MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit, 1))
				{
					MISC::SET_BIT(&(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_iWebsiteQueryBit), 1);
				}
				iLocal_567 = 8;
			}
		}
	}
}

void func_424()//Position - 0x35936
{
	if (GlobalFunc_4947(uLocal_615[0]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[0], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (GlobalFunc_4947(uLocal_615[1]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[1], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (GlobalFunc_4947(uLocal_615[2]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[2], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (GlobalFunc_4947(uLocal_615[3]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[3], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (GlobalFunc_4947(uLocal_615[4]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[4], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (GlobalFunc_4947(uLocal_615[5]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[5], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
	if (GlobalFunc_4947(uLocal_615[6]))
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_615[6], "EPSILONISM_08_CLOSE_CAR_MG", 0);
	}
}



void func_427()//Position - 0x35A33
{
	var uVar0;
	
	GlobalFunc_146(&iLocal_938);
	if (GlobalFunc_4924(iLocal_595))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_595);
	}
	if (GlobalFunc_4947(iLocal_614))
	{
		if (GlobalFunc_4924(iLocal_577))
		{
			if (iLocal_312 == 0)
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_614, 1, 1);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_208 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				}
				iLocal_259 = SYSTEM::ROUND((Local_208.f_2 + 10f));
				TASK::OPEN_SEQUENCE_TASK(&uVar0);
				TASK::TASK_HELI_MISSION(0, iLocal_614, 0, 0, -582.5234f, -363.9155f, 498.4256f, 4, 200f, 2f, 130.0071f, 100, 30, -1082130432, 0);
				TASK::TASK_HELI_MISSION(0, iLocal_614, 0, 0, -1352.705f, -2861.194f, 498.4256f, 4, 200f, 2f, 183.7912f, 100, 30, -1082130432, 0);
				TASK::CLOSE_SEQUENCE_TASK(uVar0);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_577, uVar0);
				TASK::CLEAR_SEQUENCE_TASK(&uVar0);
				PED::SET_PED_KEEP_TASK(iLocal_577, 1);
				iLocal_312 = 1;
			}
		}
	}
}

void func_428()//Position - 0x35B24
{
	if (iLocal_335 == 0)
	{
		if (iLocal_332 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_631))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_631))
				{
					if (iLocal_336 == 0)
					{
						iLocal_277 = MISC::GET_GAME_TIMER();
						iLocal_336 = 1;
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_277 + 100)
					{
						if (ENTITY::IS_ENTITY_IN_WATER(iLocal_631))
						{
							sLocal_385 = "EPS8_19";
						}
						else
						{
							sLocal_385 = "EPS8_18";
						}
						iLocal_567 = 10;
					}
				}
				else
				{
					if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_631, 0, 5000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_631, 1, 20000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_631, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_631, 3, 60000))
					{
						sLocal_385 = "EPS8_19";
						iLocal_567 = 10;
					}
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_631, 0))
					{
						if (iLocal_336 == 0)
						{
							iLocal_277 = MISC::GET_GAME_TIMER();
							iLocal_336 = 1;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_277 + 100)
						{
							sLocal_385 = "EPS8_19";
							iLocal_567 = 10;
						}
					}
					if (iLocal_567 != 7)
					{
						if (iLocal_328 == 0)
						{
							if (!GlobalFunc_155(iLocal_631, PLAYER::PLAYER_PED_ID(), 150f))
							{
								if ((iLocal_298 != -1 && GlobalFunc_4924(uLocal_569[iLocal_298])) && PED::IS_PED_IN_VEHICLE(uLocal_569[iLocal_298], iLocal_631, 0))
								{
									GlobalFunc_164("EPS8_25", 7500, 0);
								}
								else
								{
									GlobalFunc_164("EPS8_16", 7500, 0);
								}
								iLocal_328 = 1;
							}
						}
						else if (!GlobalFunc_663("EPS8_25", 0, 0) && !GlobalFunc_663("EPS8_16", 0, 0))
						{
							if (!GlobalFunc_155(iLocal_631, PLAYER::PLAYER_PED_ID(), 230f))
							{
								if ((iLocal_298 != -1 && GlobalFunc_4924(uLocal_569[iLocal_298])) && PED::IS_PED_IN_VEHICLE(uLocal_569[iLocal_298], iLocal_631, 0))
								{
									sLocal_385 = "EPS8_26";
								}
								else
								{
									sLocal_385 = "EPS8_17";
								}
								iLocal_567 = 10;
							}
							else if (GlobalFunc_155(iLocal_631, PLAYER::PLAYER_PED_ID(), 100f))
							{
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_614))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_614))
			{
				sLocal_385 = "EPS8_18";
				iLocal_567 = 10;
			}
			else
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_614, 0))
				{
					sLocal_385 = "EPS8_18";
					iLocal_567 = 10;
				}
				if (iLocal_567 != 7)
				{
					if (iLocal_328 == 0)
					{
						if (!GlobalFunc_155(iLocal_614, PLAYER::PLAYER_PED_ID(), 150f))
						{
							GlobalFunc_164("EPS8_16", 7500, 0);
							iLocal_328 = 1;
						}
					}
					else if (!GlobalFunc_155(iLocal_614, PLAYER::PLAYER_PED_ID(), 230f))
					{
						sLocal_385 = "EPS8_17";
						iLocal_567 = 10;
					}
					else if (GlobalFunc_155(iLocal_614, PLAYER::PLAYER_PED_ID(), 100f))
					{
						iLocal_328 = 0;
					}
				}
			}
		}
	}
}

void func_429(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x35DC4
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
				iVar12 = GlobalFunc_8329();
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























var func_452()//Position - 0x36D15
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-722.7994f, 14.8417f, 37.4501f, -661.751f, 56.4227f, 42.8989f, 0, 1, 1, 1);
}

int func_453(var uParam0)//Position - 0x36D43
{
	int iVar0[3];
	int iVar4;
	
	iVar0[0] = joaat("landstalker");
	iVar0[1] = joaat("tailgater");
	iVar0[2] = joaat("s_m_m_highsec_01");
	switch (iLocal_78)
	{
		case 0:
			uParam0->f_16 = 5;
			uParam0->f_17[0 /*3*/] = { -670.9681f, 53.53062f, 40.04339f };
			uParam0->f_17[1 /*3*/] = { -723.7632f, 34.0545f, 46.97017f };
			uParam0->f_24 = 19.75f;
			uParam0->f_27 = 1;
			uParam0->f_26 = 1;
			uParam0->f_25 = 1;
			StringCopy(&(uParam0->f_9), "EP_8_RCM", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			iLocal_78 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0))
			{
				return 0;
			}
			iLocal_78 = 2;
			break;
		
		case 2:
			GlobalFunc_8026(&(uParam0->f_35[0]), iVar0[0], -686.5046f, 43.9098f, 42.2067f, 296.81f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[0], 3);
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[0], 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[0], 0, 0);
			VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uParam0->f_35[0], 1);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[0], 0);
			GlobalFunc_8026(&(uParam0->f_35[1]), iVar0[1], -697.3215f, 39.0406f, 42.86736f, -66.98854f);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_35[1], 3);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(uParam0->f_35[1], "K1FFL0M");
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_35[1], 157, 157);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_35[1], 0, 0);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(uParam0->f_35[1], 0);
			GlobalFunc_5903(&(uParam0->f_28[0]), iVar0[2], -726.4555f, 33.33568f, 43.22695f, -147.8099f, 26);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[0], joaat("weapon_smg"), -1, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[0], 2);
			TASK::TASK_START_SCENARIO_IN_PLACE(uParam0->f_28[0], "WORLD_HUMAN_GUARD_STAND", 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[0], 11, 1, 0, 0);
			GlobalFunc_5903(&(uParam0->f_28[1]), iVar0[2], -666.5512f, 49.19759f, 42.07154f, -171.6803f, 26);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[1], joaat("weapon_smg"), -1, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(uParam0->f_28[1], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			PED::SET_PED_LEG_IK_MODE(uParam0->f_28[1], 2);
			TASK::TASK_START_SCENARIO_IN_PLACE(uParam0->f_28[1], "WORLD_HUMAN_GUARD_STAND", 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 0, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 11, 0, 0, 0);
			GlobalFunc_5903(&(uParam0->f_28[2]), iVar0[2], -690f, 42f, 42f, 0f, 26);
			GlobalFunc_5903(&(uParam0->f_28[3]), iVar0[2], -690f, 42f, 43f, 0f, 26);
			PED::SET_PED_INTO_VEHICLE(uParam0->f_28[2], uParam0->f_35[0], -1);
			PED::SET_PED_INTO_VEHICLE(uParam0->f_28[3], uParam0->f_35[0], 0);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[2], joaat("weapon_combatpistol"), -1, 0, 0);
			WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_28[3], joaat("weapon_microsmg"), -1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 3, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 4, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 8, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[2], 11, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 8, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[3], 11, 0, 1, 0);
			PED::ADD_RELATIONSHIP_GROUP("gang", &uLocal_81);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[0], uLocal_81);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[1], uLocal_81);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[2], uLocal_81);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_28[3], uLocal_81);
			PED::SET_PED_CAN_EVASIVE_DIVE(uParam0->f_28[0], 0);
			PED::SET_PED_CAN_EVASIVE_DIVE(uParam0->f_28[1], 0);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar4]);
				iVar4++;
			}
			return 1;
			break;
	}
	return 0;
}





void func_458()//Position - 0x372A5
{
	GlobalFunc_8954();
	if (GlobalFunc_9159())
	{
	}
	func_463(&Local_82, 1, 0, 0);
	GlobalFunc_4948(&uLocal_554, 0, 0);
	func_286();
	func_462();
	GlobalFunc_9132(0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_308))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_631, -8f, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_577))
	{
		if (iLocal_311 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_577))
			{
				PED::SET_PED_KEEP_TASK(iLocal_577, 1);
			}
		}
		GlobalFunc_132(&iLocal_577, 1, 0, 1);
	}
	if (GlobalFunc_115(iLocal_631))
	{
		if (iLocal_329 == 1)
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_631, 5, 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_631, 1);
			iLocal_329 = 0;
		}
	}
	GlobalFunc_132(&iLocal_578, 1, 0, 1);
	if (GlobalFunc_115(iLocal_614))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_614, 1);
	}
	GlobalFunc_131(&iLocal_614);
	if (CAM::DOES_CAM_EXIST(uLocal_607))
	{
		CAM::SET_CAM_ACTIVE(uLocal_607, 0);
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::DESTROY_CAM(uLocal_607, 0);
		if (CAM::DOES_CAM_EXIST(uLocal_608))
		{
			CAM::SET_CAM_ACTIVE(uLocal_608, 0);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::DESTROY_CAM(uLocal_608, 0);
		}
		HUD::DISPLAY_HUD(1);
		HUD::DISPLAY_RADAR(1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	iLocal_255 = 0;
	if (GlobalFunc_4947(uLocal_615[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[0], 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_615[0], 1);
	}
	if (GlobalFunc_4947(uLocal_615[1]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[1], 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_615[1], 1);
	}
	if (GlobalFunc_4947(uLocal_615[2]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[2], 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_615[2], 1);
	}
	if (GlobalFunc_4947(uLocal_615[3]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[3], 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_615[3], 1);
	}
	if (GlobalFunc_4947(uLocal_615[4]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[4], 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_615[4], 1);
	}
	if (GlobalFunc_4947(uLocal_615[5]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[5], 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_615[5], 1);
	}
	if (GlobalFunc_4947(uLocal_615[6]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_615[6], 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_615[6], 1);
	}
	if (GlobalFunc_4947(uLocal_623[0]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_623[0], 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_623[0], 1);
	}
	if (GlobalFunc_4947(uLocal_623[1]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_623[1], 0);
		VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(uLocal_623[1], 1);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_CHOPPER"))
	{
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_08_CHOPPER");
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_944, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_945, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_946, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_highsec_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("sentinel"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("maverick"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("landstalker"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_epsilon_01"));
	STREAMING::REMOVE_ANIM_DICT("rcmepsilonism8");
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("landstalker"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("sentinel2"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_f_y_epsilon_01"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_epsilon_01"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_m_y_epsilon_02"), 0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(12, 0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(2, 0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(5, 0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(3, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_326 == 1)
	{
		GlobalFunc_7632(0);
		if (iLocal_310 == 1)
		{
			GlobalFunc_4935();
			if (iLocal_358 == 0)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				if (iLocal_370 == 0)
				{
					GlobalFunc_200(&uLocal_389, 4);
					GlobalFunc_173(&uLocal_389, 4, 0, "CRIS", 0, 1);
					GlobalFunc_6831(-632277372, 0, 1, 51, 4, 6000, 6000, -1, -1, 0, -1, 0);
					iLocal_370 = 1;
				}
			}
			if (iLocal_335 == 0)
			{
				if (GlobalFunc_4947(iLocal_631))
				{
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_596[0]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[0], iLocal_631))
						{
							iLocal_254 = (iLocal_254 + iLocal_150);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_596[1]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[1], iLocal_631))
						{
							iLocal_254 = (iLocal_254 + iLocal_150);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_596[2]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[2], iLocal_631))
						{
							iLocal_254 = (iLocal_254 + iLocal_150);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(uLocal_596[3]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_596[3], iLocal_631))
						{
							iLocal_254 = (iLocal_254 + iLocal_150);
						}
					}
				}
			}
			if (iLocal_254 != 0)
			{
				GlobalFunc_10829(0, 1, iLocal_254, 0, 0);
			}
			GlobalFunc_553(754);
		}
		else if (iLocal_333 == 1)
		{
			if (iLocal_329 == 1)
			{
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_631, 5, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_631, 1);
				iLocal_329 = 0;
			}
		}
		else if (iLocal_358 == 0)
		{
			TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		}
	}
	AUDIO::SET_STATIC_EMITTER_ENABLED("SE_LOS_SANTOS_EPSILONISM_BUILDING_01", 1);
	SCRIPT::TERMINATE_THIS_THREAD();
}




void func_462()//Position - 0x379E6
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("EPSILONISM_08_NON_COMPLIANCE"))
	{
		AUDIO::STOP_AUDIO_SCENE("EPSILONISM_08_NON_COMPLIANCE");
	}
}

void func_463(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x37A01
{
	GlobalFunc_6690(uParam0, iParam1);
	GlobalFunc_8620(uParam0, bParam2);
	GlobalFunc_6688(uParam0, bParam3);
}









void func_472(bool bParam0)//Position - 0x37BEF
{
	int iVar0;
	
	GlobalFunc_9157();
	if (!GlobalFunc_142())
	{
		iVar0 = GlobalFunc_8314();
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
		if (Global_84542 == Global_89999)
		{
			Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar0 /*6*/].f_4++;
		}
		Global_84542 = Global_89999;
		if (bParam0)
		{
			GlobalFunc_7620(iVar0, 1, 0);
			GlobalFunc_8957(SCRIPT::GET_THIS_SCRIPT_NAME(), iVar0);
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
			func_228(iVar0, 1, 1, 0);
		}
		Global_96440[iVar0 /*10*/].f_6 = 1;
	}
}





















