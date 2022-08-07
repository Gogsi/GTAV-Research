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
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	float fLocal_63 = 0f;
	float fLocal_64 = 0f;
	float fLocal_65 = 0f;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	var uLocal_86[2] = { 0, 0 };
	var uLocal_89[4] = { 0, 0, 0, 0 };
	var uLocal_94[4] = { 0, 0, 0, 0 };
	int iLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133[5] = { 0, 0, 0, 0, 0 };
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142[1] = { 0 };
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	var uLocal_146[4] = { 0, 0, 0, 0 };
	var uLocal_151[4] = { 0, 0, 0, 0 };
	var uLocal_156[2] = { 0, 0 };
	var uLocal_159[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_168[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_177[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_186[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_193[4] = { 0, 0, 0, 0 };
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
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
	var uLocal_217[5] = { 0, 0, 0, 0, 0 };
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	char* sLocal_225 = NULL;
	var uLocal_226 = 0;
	float fLocal_227 = 0f;
	float fLocal_228 = 0f;
	float fLocal_229 = 0f;
	float fLocal_230 = 0f;
	float fLocal_231 = 0f;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	float fLocal_234 = 0f;
	struct<3> Local_235 = { 0, 0, 0 } ;
	struct<3> Local_238 = { 0, 0, 0 } ;
	var uLocal_241 = 16;
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
	struct<6> Local_406 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_412 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_418 = { 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_435 = 0;
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
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
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
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	int iLocal_486 = 0;
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500[3] = { 0, 0, 0 };
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	int iLocal_509 = 0;
	int iLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_520 = 0;
	int iLocal_521 = 0;
	int iLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	int iLocal_525 = 0;
	int iLocal_526[2] = { 0, 0 };
	int iLocal_529[4] = { 0, 0, 0, 0 };
	int iLocal_534[4] = { 0, 0, 0, 0 };
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
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
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
	int iLocal_589 = 0;
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
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	int iLocal_631 = 0;
	int iLocal_632 = 0;
	int iLocal_633[5] = { 0, 0, 0, 0, 0 };
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
	Local_66 = { 714.9441f, -981.2628f, 23.118f };
	Local_69 = { -659f, -270.9f, 35f };
	Local_72 = { 718f, -981.7f, 23.5f };
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH1_FAIL");
		GlobalFunc_585(16, 0);
		GlobalFunc_10632();
		func_519();
	}
	GlobalFunc_563(1);
	iLocal_62 = 0;
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_TheJewelStoreJobSetup", 0);
		func_517();
		func_516();
		func_515(&uLocal_223, &uLocal_435);
		func_513();
		func_512();
		switch (iLocal_62)
		{
			case 0:
				func_500();
				break;
			
			case 1:
				func_480();
				break;
			
			case 2:
				func_476();
				break;
			
			case 3:
				func_462();
				break;
			
			case 4:
				func_461();
				break;
			
			case 5:
				func_437();
				break;
			
			case 6:
				func_310();
				break;
			
			case 8:
				func_306();
				break;
		}
		if (iLocal_430 == 0)
		{
			func_1();
		}
		SYSTEM::WAIT(0);
	}
	func_519();
}

void func_1()//Position - 0x189
{
	if (iLocal_431 == 1)
	{
		if (iLocal_471 == 0)
		{
			if (iLocal_62 == 5)
			{
				if (iLocal_493 == 1 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_294("FAIL_ROOF2");
				}
				if (iLocal_77 == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_238, 1) > 80f)
								{
									func_294("FAIL_ROOF1");
								}
							}
						}
					}
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -631.4f, -237.6f, 37.3f, 1) < 10f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -631.1307f, -237.3734f, 36.55695f, -617.1204f, -227.0041f, 39.91531f, 17.75f, 0, 1, 0))
					{
						func_294("FAIL_BBWAN");
					}
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -631.4f, -237.6f, 37.3f, 1) < 80f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -649.3116f, -218.0462f, 52.55417f, -603.1786f, -298.1846f, 34.90305f, 32.5f, 0, 1, 0))
					{
						if (iLocal_437 == 0)
						{
							GlobalFunc_4956();
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH70", 7, 0, 0, 0))
							{
								iLocal_437 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -644.3769f, -232.8518f, 35.54014f, -629.3277f, -251.0285f, 41.73868f, 15.25f, 0, 1, 0))
						{
							func_294("FAIL_SHOP3");
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_200, -644.3769f, -232.8518f, 35.54014f, -629.3277f, -251.0285f, 41.73868f, 15.25f, 0, 1, 0))
					{
						func_294("FAIL_SHOP3");
					}
				}
			}
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 1))
			{
				func_294("CMN_GENDEST");
			}
			if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_200))
			{
				func_294("FAIL_CAR");
			}
			if (GlobalFunc_2417(iLocal_200))
			{
				func_294("CMN_GENDEST");
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				if (GlobalFunc_2226(&iLocal_200))
				{
					func_294("FAIL_CAR");
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
			{
				if (PED::IS_PED_INJURED(iLocal_139))
				{
					func_294("FAIL_LEST");
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -631.3f, -239f, 37.4f, 1) < 100f)
				{
					if (PED::IS_PED_INJURED(iLocal_141))
					{
						func_294("FAIL_ASS");
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -631.3f, -239f, 37.4f, 1) < 100f)
				{
					if (PED::IS_PED_INJURED(iLocal_140))
					{
						func_294("FAIL_GUARD");
					}
				}
			}
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_75, 1);
			if (iLocal_484 == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -631.3f, -239f, 37.4f, 1) < 30f)
				{
					if (iLocal_75 != joaat("weapon_unarmed"))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
						iLocal_484 = 1;
					}
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -631.3f, -239f, 37.4f, 1) < 20f)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (iLocal_75 != joaat("weapon_unarmed"))
					{
						if (!GlobalFunc_116(0))
						{
							Local_235 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
							if (Local_235.f_2 < 46f)
							{
								func_294("FAIL_WEAP");
							}
						}
					}
				}
			}
			if (MISC::IS_BULLET_IN_AREA(-624.5f, -232.5f, 36.9f, 9f, 1) || MISC::IS_BULLET_IN_AREA(-632.1f, -237.9f, 37.1f, 9f, 1))
			{
				iLocal_440 = 1;
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -622f, -231f, 37f, 20f, 14f, 5f, 0, 1, 1))
			{
				PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 5f, 1, 1, &iLocal_144, 0, 1, -1);
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_144))
					{
						if (!PED::IS_PED_INJURED(iLocal_144))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_144))
							{
								iLocal_440 = 1;
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
			{
				if (!PED::IS_PED_INJURED(iLocal_140))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_140, 1) < 20f)
					{
						STATS::STAT_GET_INT(joaat("sp0_kills_innocents"), &iLocal_130, 0);
						if (iLocal_130 > iLocal_131)
						{
							iLocal_440 = 1;
						}
					}
					else
					{
						STATS::STAT_GET_INT(joaat("sp0_kills_innocents"), &iLocal_131, 0);
					}
				}
			}
			if (iLocal_440 == 1)
			{
				func_294("FAIL_SHOP2");
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
			{
				if (!PED::IS_PED_INJURED(iLocal_139))
				{
					if (iLocal_62 == 5)
					{
						if (iLocal_610 == 0)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_208))
							{
								if (GlobalFunc_4951(iLocal_139, PLAYER::PLAYER_PED_ID()) > 130f)
								{
									HUD::CLEAR_PRINTS();
									GlobalFunc_164("GOD8", 7500, 1);
									iLocal_610 = 1;
								}
							}
						}
						if (GlobalFunc_4951(iLocal_139, PLAYER::PLAYER_PED_ID()) > 150f)
						{
							func_294("FAIL_DIST");
						}
					}
					else
					{
						if (iLocal_610 == 0)
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_208))
							{
								if (GlobalFunc_4951(iLocal_139, PLAYER::PLAYER_PED_ID()) > 70f)
								{
									HUD::CLEAR_PRINTS();
									GlobalFunc_164("GOD8", 7500, 1);
									iLocal_610 = 1;
								}
							}
						}
						if (GlobalFunc_4951(iLocal_139, PLAYER::PLAYER_PED_ID()) > 100f)
						{
							func_294("FAIL_DIST");
						}
					}
				}
			}
			if (iLocal_576 == 0)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -625.9f, -230.3f, 37.2f, 1) < 15f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -628.6145f, -227.8532f, 36.76718f, -632.3864f, -230.5472f, 39.40631f, 2.75f, 0, 1, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
						{
							if (!PED::IS_PED_INJURED(iLocal_141))
							{
								GlobalFunc_173(&uLocal_241, 3, iLocal_141, "JewelSales", 0, 1);
								GlobalFunc_4956();
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_141, PLAYER::PLAYER_PED_ID(), 8000);
								PED::SET_PED_KEEP_TASK(iLocal_141, 1);
								iLocal_577 = 1;
								iLocal_576 = 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -620.8523f, -232.5657f, 36.55886f, -623.2397f, -229.273f, 38.55886f, 2.25f, 0, 1, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
						{
							if (!PED::IS_PED_INJURED(iLocal_141))
							{
								GlobalFunc_173(&uLocal_241, 3, iLocal_141, "JewelSales", 0, 1);
								GlobalFunc_4956();
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_141, PLAYER::PLAYER_PED_ID(), 8000);
								PED::SET_PED_KEEP_TASK(iLocal_141, 1);
								iLocal_578 = 1;
								iLocal_576 = 1;
							}
						}
					}
				}
			}
			if (iLocal_576 == 1 && iLocal_577 == 1)
			{
				if (!GlobalFunc_111())
				{
					func_294("FAIL_SHOP5");
				}
			}
			if (iLocal_576 == 1 && iLocal_578 == 1)
			{
				if (!GlobalFunc_111())
				{
					func_294("FAIL_SHOP6");
				}
			}
		}
		if (iLocal_471 == 1)
		{
			if (iLocal_580 == 0)
			{
				GlobalFunc_4956();
				GlobalFunc_4935();
				HUD::CLEAR_PRINTS();
				iLocal_580 = 1;
			}
			if (GlobalFunc_145())
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
				{
					PED::DELETE_PED(&iLocal_139);
				}
				if (iLocal_483 == 1)
				{
					GlobalFunc_5129(-660.2747f, -264.2336f, 35.0936f, 114.1384f);
					GlobalFunc_5166(-662.3032f, -265.4387f, 34.9448f, 30.6827f);
				}
				func_3(PLAYER::PLAYER_PED_ID());
				func_2();
			}
		}
	}
}

void func_2()//Position - 0x8B2
{
	GlobalFunc_585(16, 0);
	GlobalFunc_4935();
	func_519();
}

void func_3(int iParam0)//Position - 0x8C9
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
		func_106(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = func_91(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = func_91(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_91(iParam0, 4, -1);
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
				iVar1 = func_91(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				func_106(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}
























































































int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x1902B
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_98(iParam0, iParam1, iVar0))
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
				if (func_98(iParam0, iParam1, iVar1))
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
				return GlobalFunc_7614(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_7150(iParam0, iParam1);
		}
	}
	return -99;
}







int func_98(int iParam0, int iParam1, int iParam2)//Position - 0x194B6
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
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
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
				if (!func_98(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar21 = { GlobalFunc_7616(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_98(iParam0, 14, uVar21[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, 14, iVar4) };
									if (Global_68106[2 /*14*/].f_12 == iVar3)
									{
										if (func_98(iParam0, 14, iVar4))
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
						iVar1 = GlobalFunc_7150(iParam0, iVar2);
						Global_68106[2 /*14*/] = { GlobalFunc_10828(iVar0, iVar2, iVar1) };
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
			if (!func_98(iParam0, 14, uVar32[iVar31]))
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








void func_106(int iParam0, var uParam1, bool bParam2)//Position - 0x1A7A9
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
			if (func_260(iParam0, iVar1, &iVar2, 0))
			{
				func_246(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_244(iParam0, iVar1, &iVar2))
			{
				func_246(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6784(741, uParam1->f_60, Global_68104, 1);
			GlobalFunc_6784(742, uParam1->f_61, Global_68104, 1);
			iVar4 = GlobalFunc_5668(iParam0, uParam1->f_13[2], (*uParam1)[2], 2);
			func_109(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
			if (!bParam2)
			{
				iVar5 = GlobalFunc_5668(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_109(iParam0, 1, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_68104, 0);
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



int func_109(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)//Position - 0x1AA40
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
								GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, iVar0, func_204(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					uVar41 = { GlobalFunc_7617(iVar5, 0) };
					func_109(iParam0, iVar0, uVar41[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			func_199(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar58 = { GlobalFunc_7616(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar5, 14, uVar58[iVar1]) };
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
						iVar3 = func_197(iParam0, iVar5, 14, uVar58[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_109(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iVar69 = GlobalFunc_7150(iParam0, 1);
			iVar3 = func_197(iParam0, iVar5, 1, iVar69, 14, Global_68106[1 /*14*/].f_12);
			if (iVar3 != -99 && iVar3 != iParam2)
			{
				iVar7 = GlobalFunc_5013(iVar5, 1, -1);
			}
		}
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
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
					iVar3 = func_197(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_109(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar70 = GlobalFunc_7150(iParam0, 11);
				iVar71 = GlobalFunc_7150(iParam0, 8);
				iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
				{
					iVar9 = GlobalFunc_7150(iParam0, 8);
				}
				iVar72 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar72, joaat("GLOVES"), 3))
				{
					iVar73 = GlobalFunc_6739(iVar5, iVar71, iVar70);
					if (iVar73 == -99)
					{
						iVar73 = func_197(iParam0, iVar5, 11, iVar70, 3, 0);
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
					iVar70 = GlobalFunc_7150(iParam0, 11);
					if (iVar70 >= 256)
					{
						iVar76 = GlobalFunc_4913(iVar5, iVar70, 11, 4);
					}
					if (iVar70 >= 256 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar76, joaat("VEST_SHIRT"), 0))
					{
						iVar77 = GlobalFunc_6738(iVar5, iVar70, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar77 != -99)
						{
							func_109(iParam0, 8, iVar77, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_109(iParam0, 8, iVar78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
									func_109(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
								func_109(iParam0, 8, iVar83, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_109(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
			func_199(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, func_204(iParam0, 8, -1), iParam2);
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
				func_153(iParam0, iParam2, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			func_199(iParam0, iParam1, iParam2, iParam6, 0);
			iVar84 = GlobalFunc_7150(iParam0, 11);
			if (GlobalFunc_6737(iVar5, iVar84))
			{
				iVar85 = GlobalFunc_6736(iVar5, iParam2, Global_68106[1 /*14*/].f_4);
				GlobalFunc_10622(iVar5, iVar85);
			}
			if (iParam5 == 0)
			{
				iVar6 = GlobalFunc_6739(iVar5, iParam2, GlobalFunc_7150(iParam0, 11));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar86 = GlobalFunc_7150(iParam0, 7);
				if (!GlobalFunc_8583(iVar5, iVar86, 9, -99, -99, -99, iParam0, 0, iParam2, -99, -99))
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
					iVar94 = GlobalFunc_7150(iParam0, 1);
					iVar95 = 0;
					while (iVar95 < 9)
					{
						iVar3 = func_197(iParam0, iVar5, iParam1, iVar94, 14, iVar95);
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
					iVar3 = func_197(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_109(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				if (GlobalFunc_7998(iParam0))
				{
					iVar97 = -99;
					iVar97 = GlobalFunc_6730(iVar5, iParam2);
					if (iVar97 > 0)
					{
						iVar97 = (iVar97 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_130(iParam0, 9, iVar97))
						{
							func_109(iParam0, 9, iVar97, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					else
					{
						func_109(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar8 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("OVER_JACKET"), 8))
					{
						func_109(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar99 = func_204(iParam0, 4, -1);
					iVar100 = iParam2;
				}
				else
				{
					iVar99 = iParam2;
					iVar100 = func_204(iParam0, 11, -1);
				}
				if (GlobalFunc_6729(iVar5, 11, iVar100))
				{
					if (!GlobalFunc_6728(iVar5, 4, iVar99))
					{
						if (GlobalFunc_6727(iVar5, 4, iVar99, &uVar101))
						{
							func_109(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
						}
					}
				}
				else if (GlobalFunc_6728(iVar5, 4, iVar99))
				{
					if (GlobalFunc_6726(iVar5, 4, iVar99, &uVar101))
					{
						func_109(iParam0, 4, uVar101, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
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
					iVar3 = func_197(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_109(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar3 = func_197(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_109(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_110(iParam0, &uVar4))
		{
			func_109(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	if (iVar6 != -99)
	{
		func_109(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar9 != -99)
	{
		func_109(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
	}
	if (iVar7 != -99)
	{
		func_109(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				func_109(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, -1, -1, -1, 0);
			}
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

int func_110(int iParam0, var uParam1)//Position - 0x1BB04
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_204(PLAYER::PLAYER_PED_ID(), 2, -1);
	if (GlobalFunc_6671(741, Global_68104, 0) != -99 && GlobalFunc_6714())
	{
		if (GlobalFunc_278() == 4)
		{
			return 1;
		}
		if (GlobalFunc_6671(741, Global_68104, 0) == 0 && GlobalFunc_6671(742, Global_68104, 0) == 0)
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				if (GlobalFunc_6671(2035, Global_68104, 0) == 0)
				{
					return 0;
				}
			}
			else if (GlobalFunc_6671(740, Global_68104, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = GlobalFunc_6671(741, Global_68104, 0);
		iVar1 = GlobalFunc_6671(742, Global_68104, 0);
		if (!func_130(iParam0, iVar1, iVar0))
		{
			if (GlobalFunc_6707(161, Global_68104))
			{
				*uParam1 = GlobalFunc_6671(2035, Global_68104, 0);
			}
			else
			{
				*uParam1 = GlobalFunc_6671(740, Global_68104, 0);
			}
			GlobalFunc_6784(741, -99, Global_68104, 1);
			GlobalFunc_6784(742, 2, Global_68104, 1);
			return 1;
		}
	}
	return 0;
}




















int func_130(int iParam0, int iParam1, int iParam2)//Position - 0x1D22E
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar24;
	int iVar34;
	var uVar35;
	var uVar45;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10864(iVar0, iParam1, iParam2) };
	uVar2 = Global_2621444;
	uVar3 = Global_2621445;
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != -99)
			{
				if (!func_130(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_2621444 = uVar2;
					Global_2621445 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar24 = { GlobalFunc_7616(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_130(iParam0, 14, uVar24[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_68106[2 /*14*/] = { GlobalFunc_10864(iVar0, 14, iVar6) };
									if (Global_68106[2 /*14*/].f_12 == iVar5)
									{
										if (func_130(iParam0, 14, iVar6))
										{
											if (!GlobalFunc_8307(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_68106[2 /*14*/])))
											{
												Global_2621444 = uVar2;
												Global_2621445 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = GlobalFunc_7150(iParam0, iVar4);
						Global_68106[2 /*14*/] = { GlobalFunc_10864(iVar0, iVar4, iVar1) };
						if (!GlobalFunc_8307(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_68106[2 /*14*/])))
						{
							Global_2621444 = uVar2;
							Global_2621445 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if (uVar8[10] != 0 && uVar8[10] != joaat("0"))
		{
			if (GlobalFunc_6671(1743, Global_68104, 0) != uVar8[10])
			{
				Global_2621444 = uVar2;
				Global_2621445 = uVar3;
				return 0;
			}
		}
		Global_2621444 = uVar2;
		Global_2621445 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar35 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar34 = 0;
		while (iVar34 <= 8)
		{
			if (!func_130(iParam0, 14, uVar35[iVar34]))
			{
				return 0;
			}
			iVar34++;
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
	else
	{
		if (Global_68106[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, GlobalFunc_33(iParam1)) && Global_68106[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, GlobalFunc_33(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			if (GlobalFunc_6729(iVar0, 11, GlobalFunc_7150(iParam0, 11)))
			{
				if (GlobalFunc_6727(iVar0, 4, iParam2, &uVar45))
				{
					return func_130(iParam0, 4, uVar45);
				}
			}
			else if (GlobalFunc_6726(iVar0, 4, iParam2, &uVar45))
			{
				return func_130(iParam0, 4, uVar45);
			}
		}
	}
	return 0;
}























void func_153(int iParam0, int iParam1, bool bParam2)//Position - 0x20C98
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	GlobalFunc_9803(MISC::GET_HASH_KEY("hairOverlay"), iParam0);
	iVar1 = GlobalFunc_6735(iVar0, iParam1);
	if (iVar1 != -1)
	{
		GlobalFunc_9004(iVar1, 1, Global_68104);
	}
	func_154(iParam0, bParam2, 0);
}

void func_154(int iParam0, bool bParam1, bool bParam2)//Position - 0x20CDA
{
	int iVar0;
	struct<9> Var1;
	int iVar14;
	bool bVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<8> Var21;
	int iVar36;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = Global_68104;
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(iParam0);
		iVar14 = GlobalFunc_303(iParam0);
		bVar15 = func_175(iParam0);
		bVar16 = GlobalFunc_5010(iParam0);
		bVar17 = func_172(iParam0);
		if (bParam1)
		{
			bVar16 = true;
		}
		if (bParam2)
		{
			bVar16 = false;
		}
		iVar18 = 0;
		while (iVar18 < 127)
		{
			if (GlobalFunc_8361(iVar18, iVar0))
			{
				if (GlobalFunc_5134(&Var1, iVar18, iVar14, iParam0, -1))
				{
					if (GlobalFunc_9001(&Var1, Var1.f_8, bVar15, bVar16, bParam1, bVar17))
					{
						PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var1.f_4, Var1.f_5);
					}
				}
			}
			iVar18++;
		}
		if (GlobalFunc_8361(123, iVar0))
		{
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz")) != 7)
			{
				PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, joaat("mpBeach_overlays"), joaat("FM_Hair_Fuzz"));
			}
		}
		iVar20 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iVar14);
		iVar19 = 0;
		while (iVar19 < iVar20)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iVar14, iVar19, &Var21))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var21))
				{
					iVar36 = (129 + iVar19);
					if (GlobalFunc_8361(iVar36, iVar0))
					{
						if (GlobalFunc_9001(&(Var21.f_7), Var21.f_6, bVar15, bVar16, bParam1, bVar17))
						{
							PED::ADD_PED_DECORATION_FROM_HASHES(iParam0, Var21.f_2, Var21.f_3);
							GlobalFunc_294(iParam0, Var21.f_2, Var21.f_3);
						}
					}
				}
			}
			iVar19++;
		}
	}
}


















int func_172(int iParam0)//Position - 0x24889
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6671(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar2 = func_204(iParam0, 11, -1);
				if (iVar2 >= 256)
				{
					iVar3 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar2, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_M_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = GlobalFunc_6671(1743, -1, 0);
			if (iVar0 > 15)
			{
				iVar4 = func_204(iParam0, 11, -1);
				if (iVar4 >= 256)
				{
					iVar5 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar4, 11, 4);
					if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
					{
						if (iVar1 == joaat("MP_Elite_F_Tshirt_1"))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}



int func_175(int iParam0)//Position - 0x24A58
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
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_m_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 9:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar2 = func_204(iParam0, 11, -1);
						if (iVar2 >= 237)
						{
							iVar3 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar2, 11, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar4 = func_204(iParam0, 8, -1);
						if (iVar4 >= 241)
						{
							iVar5 = GlobalFunc_4913(joaat("mp_m_freemode_01"), iVar4, 8, 3);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("mp_f_freemode_01"))
		{
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 11);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 2:
						case 7:
						case 4:
						case 9:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
							break;
					}
					break;
				
				case 11:
					switch (iVar1)
					{
						case 10:
						case 11:
						case 15:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar6 = func_204(iParam0, 11, -1);
						if (iVar6 >= 256)
						{
							iVar7 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar6, 11, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
			}
			iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8);
			iVar1 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 8);
			switch (iVar0)
			{
				case 0:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 1:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				case 2:
					switch (iVar1)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
							break;
					}
					break;
				
				case 14:
					switch (iVar1)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
							break;
					}
					break;
				
				default:
					if (iVar0 > 15)
					{
						iVar8 = func_204(iParam0, 8, -1);
						if (iVar8 >= 136)
						{
							iVar9 = GlobalFunc_4913(joaat("mp_f_freemode_01"), iVar8, 8, 4);
							if ((FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("MULTI_DECAL"), 0)) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar9, joaat("TAT_DECL_NO_SAVE"), 0))
							{
								return 1;
							}
						}
					}
					break;
				}
		}
		if (GlobalFunc_302(iParam0))
		{
			return 1;
		}
	}
	return 0;
}






















int func_197(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2BCDA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	int iVar65;
	int iVar66;
	int iVar67;
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
	int iVar90;
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
	bool bVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	int iVar114;
	int iVar115;
	int iVar116;
	int iVar117;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	int iVar125;
	int iVar126;
	int iVar127;
	int iVar128;
	int iVar129;
	int iVar130;
	
	iVar0 = -99;
	if (iParam4 == 2)
	{
		func_198(iParam0, iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 8;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 187)
				{
					iVar2 = GlobalFunc_7150(iParam0, 8);
					iVar3 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar4 = GlobalFunc_306(iVar3);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar4 == 6)) || (iVar2 >= 241 && iVar4 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar3, joaat("VEST_SHIRT"), 0)))
					{
						iVar0 = -99;
					}
					else
					{
						iVar0 = 11;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 4;
				}
				else if (iParam3 == 236)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 237)
				{
					iVar5 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
					if (iVar5 != -1)
					{
						bVar6 = true;
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar5, joaat("DRAW_11"), 0))
						{
							iVar2 = GlobalFunc_7150(iParam0, 8);
							iVar7 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
							iVar8 = GlobalFunc_306(iVar7);
							if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar8 == 6)) || (iVar2 >= 241 && iVar8 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar7, joaat("VEST_SHIRT"), 0)))
							{
								bVar6 = false;
							}
						}
						if (bVar6)
						{
							iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar5);
							iVar10 = 0;
							while (iVar10 < iVar9)
							{
								FILES::GET_FORCED_COMPONENT(iVar5, iVar10, &iVar11, &iVar12, &iVar13);
								if (iVar13 == 3)
								{
									if (iVar11 != 0 && iVar11 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar11, 3, 3);
									}
									else
									{
										iVar0 = iVar12;
									}
									iVar10 = iVar9 + 1;
								}
								iVar10++;
							}
						}
					}
				}
			}
			else if (iParam2 == 8)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 1;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = -99;
				}
				else if (iParam3 == 240)
				{
					iVar0 = 14;
				}
				else if (iParam3 >= 241)
				{
					iVar14 = GlobalFunc_4913(iParam1, iParam3, 8, 3);
					if (iVar14 != -1)
					{
						iVar15 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar14);
						iVar16 = 0;
						while (iVar16 < iVar15)
						{
							FILES::GET_FORCED_COMPONENT(iVar14, iVar16, &iVar17, &iVar18, &iVar19);
							if (iVar19 == 3)
							{
								if (iVar17 != 0 && iVar17 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar17, 3, 3);
								}
								else
								{
									iVar0 = iVar18;
									iVar16 = iVar15 + 1;
								}
							}
							iVar16++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				iVar20 = -1;
				if (iParam3 >= 237)
				{
					iVar20 = GlobalFunc_306(GlobalFunc_4913(iParam1, iParam3, 11, 3));
				}
				if (iParam3 <= 15)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 107)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 123)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 139)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 155)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 171)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 187 || iVar20 == 11)
				{
					iVar2 = GlobalFunc_7150(iParam0, 8);
					iVar21 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar22 = GlobalFunc_306(iVar21);
					if (((((iVar2 >= 96 && iVar2 <= 111) || (iVar2 >= 112 && iVar2 <= 127)) || (iVar2 >= 241 && iVar22 == 6)) || (iVar2 >= 241 && iVar22 == 7)) || (iVar2 >= 241 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar21, joaat("VEST_SHIRT"), 0)))
					{
					}
					else
					{
						iVar0 = 112;
					}
				}
				else if (iParam3 <= 203)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 219)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 235)
				{
					iVar0 = 240;
				}
				else if (iParam3 <= 236)
				{
					iVar0 = 240;
				}
				else if (iParam3 >= 237)
				{
					iVar23 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
					if (iVar23 != -1)
					{
						iVar24 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar23);
						iVar25 = 0;
						while (iVar25 < iVar24)
						{
							FILES::GET_FORCED_COMPONENT(iVar23, iVar25, &iVar26, &iVar27, &iVar28);
							if (iVar28 == 8)
							{
								if (iVar26 != 0 && iVar26 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar26, 8, 3);
								}
								else
								{
									iVar0 = iVar27;
									iVar25 = iVar24 + 1;
								}
							}
							iVar25++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar29 = -1;
				iVar30 = -1;
				if (iParam3 >= 92)
				{
					iVar30 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					iVar29 = GlobalFunc_306(iVar30);
				}
				if (((((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar29 == 10) || iVar29 == 11) || iVar29 == 12) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("VEST_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("TUX_TIE"), 0))) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("TIE"), 0)))
				{
					iVar2 = GlobalFunc_7150(iParam0, 8);
					if (iVar2 >= 48 && iVar2 <= 63)
					{
						iVar1 = (iVar2 - 48);
						iVar0 = (64 + iVar1);
					}
					else if (iVar2 >= 112 && iVar2 <= 127)
					{
						iVar1 = (iVar2 - 112);
						iVar0 = (96 + iVar1);
					}
					else if (iVar2 >= 176 && iVar2 <= 191)
					{
						iVar1 = (iVar2 - 176);
						iVar0 = (160 + iVar1);
					}
					else if (iVar2 >= 241)
					{
						iVar31 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
						iVar32 = GlobalFunc_306(iVar31);
						bVar33 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar31, joaat("TUX_VEST"), 0);
						if (((iVar32 == 3 || iVar32 == 7) || iVar32 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar31, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar31 != -1)
							{
								iVar34 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar31);
								iVar35 = 0;
								while (iVar35 < iVar34)
								{
									FILES::GET_VARIANT_COMPONENT(iVar31, iVar35, &iVar36, &iVar37, &iVar38);
									if ((iVar38 == 8 && !bVar33) || (iVar38 == 10 && bVar33))
									{
										if (iVar36 != 0 && iVar36 != joaat("0"))
										{
											iVar0 = GlobalFunc_4914(iParam1, iVar36, 8, 3);
										}
										else
										{
											iVar0 = iVar37;
										}
										iVar35 = iVar34 + 1;
									}
									iVar35++;
								}
							}
						}
					}
				}
				else if ((iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("LOOSE_TIE"), 0)) || (iParam3 >= 92 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar30, joaat("SLACK_TIE"), 0)))
				{
					iVar39 = GlobalFunc_4913(iParam1, iVar2, 8, 3);
					iVar40 = GlobalFunc_306(iVar39);
					bVar41 = FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar39, joaat("TUX_VEST"), 0);
					if (((iVar40 == 3 || iVar40 == 7) || iVar40 == 11) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar39, joaat("OPEN_COLLAR"), 0))
					{
						if (iVar39 != -1)
						{
							iVar42 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar39);
							iVar43 = 0;
							while (iVar43 < iVar42)
							{
								FILES::GET_VARIANT_COMPONENT(iVar39, iVar43, &iVar44, &iVar45, &iVar46);
								if ((iVar46 == 8 && !bVar41) || (iVar46 == 10 && bVar41))
								{
									if (iVar44 != 0 && iVar44 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar44, 8, 3);
									}
									else
									{
										iVar0 = iVar45;
									}
									iVar43 = iVar42 + 1;
								}
								iVar43++;
							}
						}
					}
				}
				else if (iParam3 >= 92)
				{
					iVar47 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					if (iVar47 != -1)
					{
						iVar48 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar47);
						iVar49 = 0;
						while (iVar49 < iVar48)
						{
							FILES::GET_FORCED_COMPONENT(iVar47, iVar49, &iVar50, &iVar51, &iVar52);
							if (iVar52 == 8)
							{
								if (iVar50 != 0 && iVar50 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar50, 8, 3);
								}
								else
								{
									iVar0 = iVar51;
									iVar49 = iVar48 + 1;
								}
							}
							iVar49++;
						}
					}
				}
			}
		}
		else if (iParam4 == 11)
		{
			if (iParam2 == 7)
			{
				iVar53 = -1;
				iVar54 = -1;
				if (iParam3 >= 92)
				{
					iVar54 = GlobalFunc_4913(iParam1, iParam3, 7, 3);
					iVar53 = GlobalFunc_306(iVar54);
				}
				if (((((((iParam3 >= 41 && iParam3 <= 56) || (iParam3 >= 57 && iParam3 <= 72)) || (iParam3 >= 73 && iParam3 <= 88)) || iVar53 == 10) || iVar53 == 11) || iVar53 == 12) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar54, joaat("TIE"), 0))
				{
					iVar55 = GlobalFunc_7150(iParam0, 11);
					if (iVar55 >= 237)
					{
						iVar56 = GlobalFunc_4913(iParam1, iVar55, 11, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar56, joaat("SHIRT_BRACES"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar56, joaat("OPEN_COLLAR"), 0))
						{
							if (iVar56 != -1)
							{
								iVar57 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar56);
								iVar58 = 0;
								while (iVar58 < iVar57)
								{
									FILES::GET_VARIANT_COMPONENT(iVar56, iVar58, &iVar59, &iVar60, &iVar61);
									if (iVar61 == 11)
									{
										if (iVar59 != 0 && iVar59 != joaat("0"))
										{
											iVar0 = GlobalFunc_4914(iParam1, iVar59, 11, 3);
										}
										else
										{
											iVar0 = iVar60;
										}
										iVar58 = iVar57 + 1;
									}
									iVar58++;
								}
							}
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 11)
			{
				iVar62 = GlobalFunc_7150(iParam0, 11);
				if (iVar62 >= 237)
				{
					iVar63 = GlobalFunc_4913(iParam1, iVar62, 11, 3);
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar63, joaat("SHIRT_BRACES"), 0) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar63, joaat("OPEN_COLLAR"), 0))
					{
						iVar63 = GlobalFunc_4913(iParam1, iParam3, 11, 3);
						if (iVar63 != -1)
						{
							iVar64 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar63);
							iVar65 = 0;
							while (iVar65 < iVar64)
							{
								FILES::GET_FORCED_COMPONENT(iVar63, iVar65, &iVar66, &iVar67, &iVar68);
								if (iVar68 == 7)
								{
									if (iVar66 != 0 && iVar66 != joaat("0"))
									{
										iVar0 = GlobalFunc_4914(iParam1, iVar66, 7, 3);
									}
									else
									{
										iVar0 = iVar67;
										iVar65 = iVar64 + 1;
									}
								}
								iVar65++;
							}
						}
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar69 = GlobalFunc_4913(iParam1, iParam3, 14, 3);
					if (iVar69 != -1)
					{
						iVar70 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar69);
						iVar71 = 0;
						while (iVar71 < iVar70)
						{
							FILES::GET_FORCED_COMPONENT(iVar69, iVar71, &iVar72, &iVar73, &iVar74);
							if (iVar74 == 7)
							{
								if (iVar72 != 0 && iVar72 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar72, 7, 3);
								}
								else
								{
									iVar0 = iVar73;
									iVar71 = iVar70 + 1;
								}
							}
							iVar71++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar75 = GlobalFunc_4913(iParam1, iParam3, 4, 3);
					if (iVar75 != -1)
					{
						iVar76 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar75);
						iVar77 = 0;
						while (iVar77 < iVar76)
						{
							FILES::GET_FORCED_COMPONENT(iVar75, iVar77, &iVar78, &iVar79, &iVar80);
							if (iVar80 == 6)
							{
								if (iVar78 != 0 && iVar78 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar78, 6, 3);
								}
								else
								{
									iVar0 = iVar79;
									iVar77 = iVar76 + 1;
								}
							}
							iVar77++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar81 = GlobalFunc_4913(iParam1, iParam3, 1, 3);
					if (iVar81 != -1)
					{
						iVar82 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar81);
						iVar83 = 0;
						while (iVar83 < iVar82)
						{
							FILES::GET_FORCED_PROP(iVar81, iVar83, &iVar84, &iVar85, &iVar86);
							if (iVar86 == iParam5)
							{
								if (iVar84 != 0 && iVar84 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar84, 14, 3);
									iVar83 = iVar82 + 1;
								}
								else
								{
									iVar0 = iVar85;
									iVar83 = iVar82 + 1;
								}
							}
							iVar83++;
						}
					}
				}
			}
		}
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		if (iParam4 == 3)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 0;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 2;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 3;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = 6;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = 5;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 9;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = 7;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 11;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 12;
				}
				else if (iParam3 <= 223)
				{
					iVar0 = 4;
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 14;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 15;
				}
				else if (iParam3 >= 256)
				{
					iVar87 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar87 != -1)
					{
						iVar88 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar87);
						iVar89 = 0;
						while (iVar89 < iVar88)
						{
							FILES::GET_FORCED_COMPONENT(iVar87, iVar89, &iVar90, &iVar91, &iVar92);
							if (iVar92 == 3)
							{
								if (iVar90 != 0 && iVar90 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar90, 3, 4);
								}
								else
								{
									iVar0 = iVar91;
									iVar89 = iVar88 + 1;
								}
							}
							iVar89++;
						}
					}
				}
			}
		}
		else if (iParam4 == 8)
		{
			if (iParam2 == 11)
			{
				if (iParam3 <= 15)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 31)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 47)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 63)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 79)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 95)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 111)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 127)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 143)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 159)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 175)
				{
					iVar0 = -99;
				}
				else if (iParam3 <= 191)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 207)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 223)
				{
					iVar1 = (iParam3 - 208);
					iVar0 = (103 + iVar1);
				}
				else if (iParam3 <= 239)
				{
					iVar0 = 33;
				}
				else if (iParam3 <= 255)
				{
					iVar0 = 33;
				}
				else if (iParam3 >= 256)
				{
					iVar93 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar93 != -1)
					{
						iVar94 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar93);
						iVar95 = 0;
						while (iVar95 < iVar94)
						{
							FILES::GET_FORCED_COMPONENT(iVar93, iVar95, &iVar96, &iVar97, &iVar98);
							if (iVar98 == 8)
							{
								if (iVar96 != 0 && iVar96 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar96, 8, 4);
								}
								else
								{
									iVar0 = iVar97;
									iVar95 = iVar94 + 1;
								}
							}
							iVar95++;
						}
					}
				}
			}
			else if (iParam2 == 7)
			{
				iVar99 = -1;
				if (iParam3 >= 55)
				{
					iVar99 = GlobalFunc_4913(iParam1, iParam3, 7, 4);
				}
				if ((iVar99 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("TIE"), 0)) || (iVar99 != -1 && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("BOWTIE"), 0)))
				{
					iVar100 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					bVar101 = false;
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("LOOSE_TIE"), 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar99, joaat("LOOSE_BOWTIE"), 0))
					{
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar100, joaat("CLOSED_COLLAR"), 0))
						{
							bVar101 = true;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar100, joaat("OPEN_COLLAR"), 0))
					{
						bVar101 = true;
					}
					if (bVar101)
					{
						iVar102 = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(iVar100);
						iVar103 = 0;
						while (iVar103 < iVar102)
						{
							FILES::GET_VARIANT_COMPONENT(iVar100, iVar103, &iVar104, &iVar105, &iVar106);
							if (iVar106 == 8)
							{
								if (iVar104 != 0 && iVar104 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar104, 8, 4);
								}
								else
								{
									iVar0 = iVar105;
								}
								iVar103 = iVar102 + 1;
							}
							iVar103++;
						}
					}
				}
			}
		}
		else if (iParam4 == 6)
		{
			if (iParam2 == 4)
			{
				if (iParam3 >= 256)
				{
					iVar107 = GlobalFunc_4913(iParam1, iParam3, 4, 4);
					if (iVar107 != -1)
					{
						iVar108 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar107);
						iVar109 = 0;
						while (iVar109 < iVar108)
						{
							FILES::GET_FORCED_COMPONENT(iVar107, iVar109, &iVar110, &iVar111, &iVar112);
							if (iVar112 == 6)
							{
								if (iVar110 != 0 && iVar110 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar110, 6, 4);
								}
								else
								{
									iVar0 = iVar111;
									iVar109 = iVar108 + 1;
								}
							}
							iVar109++;
						}
					}
				}
			}
		}
		else if (iParam4 == 4)
		{
			if (iParam2 == 11)
			{
				if (iParam3 >= 256)
				{
					iVar113 = GlobalFunc_4913(iParam1, iParam3, 11, 4);
					if (iVar113 != -1)
					{
						iVar114 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar113);
						iVar115 = 0;
						while (iVar115 < iVar114)
						{
							FILES::GET_FORCED_COMPONENT(iVar113, iVar115, &iVar116, &iVar117, &iVar118);
							if (iVar118 == 4)
							{
								if (iVar116 != 0 && iVar116 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar116, 4, 4);
								}
								else
								{
									iVar0 = iVar117;
									iVar115 = iVar114 + 1;
								}
							}
							iVar115++;
						}
					}
				}
			}
		}
		else if (iParam4 == 7)
		{
			if (iParam2 == 14)
			{
				if (iParam3 >= 327)
				{
					iVar119 = GlobalFunc_4913(iParam1, iParam3, 14, 4);
					if (iVar119 != -1)
					{
						iVar120 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar119);
						iVar121 = 0;
						while (iVar121 < iVar120)
						{
							FILES::GET_FORCED_COMPONENT(iVar119, iVar121, &iVar122, &iVar123, &iVar124);
							if (iVar124 == 7)
							{
								if (iVar122 != 0 && iVar122 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar122, 7, 4);
								}
								else
								{
									iVar0 = iVar123;
									iVar121 = iVar120 + 1;
								}
							}
							iVar121++;
						}
					}
				}
			}
		}
		else if (iParam4 == 14)
		{
			if (iParam2 == 1)
			{
				if (iParam3 >= 26)
				{
					iVar125 = GlobalFunc_4913(iParam1, iParam3, 1, 4);
					if (iVar125 != -1)
					{
						iVar126 = FILES::GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(iVar125);
						iVar127 = 0;
						while (iVar127 < iVar126)
						{
							FILES::GET_FORCED_PROP(iVar125, iVar127, &iVar128, &iVar129, &iVar130);
							if (iVar130 == iParam5)
							{
								if (iVar128 != 0 && iVar128 != joaat("0"))
								{
									iVar0 = GlobalFunc_4914(iParam1, iVar128, 14, 4);
									iVar127 = iVar126 + 1;
								}
								else
								{
									iVar0 = iVar129;
									iVar127 = iVar126 + 1;
								}
							}
							iVar127++;
						}
					}
				}
			}
		}
	}
	return iVar0;
}

int func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2D069
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;
	int iVar13;
	
	*iParam4 = -99;
	switch (iParam1)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= GlobalFunc_26(iParam1, 1))
					{
						GlobalFunc_10864(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar0 = GlobalFunc_7150(iParam0, 1);
					if (iVar0 >= 26)
					{
						iVar1 = GlobalFunc_4913(iParam1, iVar0, 1, 3);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar1, joaat("NIGHT_VISION"), 0))
						{
							iVar1 = GlobalFunc_4913(iParam1, iParam3, 1, 3);
							if (iVar1 != -1)
							{
								iVar2 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar1);
								iVar3 = 0;
								while (iVar3 < iVar2)
								{
									FILES::GET_FORCED_COMPONENT(iVar1, iVar3, &iVar4, &uVar5, &iVar6);
									if (iVar6 == 2)
									{
										if (iVar4 != 0 && iVar4 != joaat("0"))
										{
											*iParam4 = GlobalFunc_4914(iParam1, iVar4, 2, 3);
										}
										else
										{
											*iParam4 = uVar5;
											iVar3 = iVar2 + 1;
										}
									}
									iVar3++;
								}
							}
						}
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam2)
			{
				case 1:
					if (((((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8)) || iParam3 == 9) || (iParam3 >= 14 && iParam3 <= 17)) || (iParam3 >= 22 && iParam3 <= 25))
					{
						*iParam4 = 0;
					}
					if (iParam3 >= GlobalFunc_26(iParam1, 1))
					{
						GlobalFunc_10864(iParam1, 1, iParam3);
						if (Global_2621445 == joaat("CU_XMAS_CLOTHES"))
						{
							*iParam4 = 0;
						}
					}
					iVar7 = GlobalFunc_7150(iParam0, 1);
					if (iVar7 >= 26)
					{
						iVar8 = GlobalFunc_4913(iParam1, iVar7, 1, 4);
						if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar8, joaat("NIGHT_VISION"), 0))
						{
							iVar8 = GlobalFunc_4913(iParam1, iParam3, 1, 4);
							if (iVar8 != -1)
							{
								iVar9 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(iVar8);
								iVar10 = 0;
								while (iVar10 < iVar9)
								{
									FILES::GET_FORCED_COMPONENT(iVar8, iVar10, &iVar11, &uVar12, &iVar13);
									if (iVar13 == 2)
									{
										if (iVar11 != 0 && iVar11 != joaat("0"))
										{
											*iParam4 = GlobalFunc_4914(iParam1, iVar11, 2, 4);
										}
										else
										{
											*iParam4 = uVar12;
											iVar10 = iVar9 + 1;
										}
									}
									iVar10++;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (*iParam4 != -99)
	{
		GlobalFunc_6784(741, iParam3, Global_68104, 1);
		GlobalFunc_6784(742, iParam2, Global_68104, 1);
		return 1;
	}
	return 0;
}

void func_199(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2D330
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 11 || iParam1 == 8)
		{
			iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
			if (iParam1 == 11)
			{
				if (GlobalFunc_6737(iVar0, iParam2))
				{
					iParam1 = 8;
					iParam2 = GlobalFunc_7150(iParam0, iParam1);
				}
			}
			else if (iParam1 == 8)
			{
				iVar1 = GlobalFunc_7150(iParam0, 11);
				if (!GlobalFunc_6737(iVar0, iVar1))
				{
					return;
				}
			}
			GlobalFunc_9803(MISC::GET_HASH_KEY("torsoDecal"), iParam0);
			if (iParam1 == 11)
			{
				if (((((!GlobalFunc_9719(iVar0, iParam2, 13) && !GlobalFunc_9719(iVar0, iParam2, 14)) && !GlobalFunc_9719(iVar0, iParam2, 15)) && !GlobalFunc_9719(iVar0, iParam2, 16)) && !GlobalFunc_9719(iVar0, iParam2, 71)) && !GlobalFunc_9719(iVar0, iParam2, 72))
				{
					GlobalFunc_9803(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = GlobalFunc_9002(iVar0, iParam1, iParam2, iParam4);
			if (iVar2 != -1)
			{
				if (iParam3 == 1)
				{
					GlobalFunc_9016(iParam0, iVar2);
				}
				else
				{
					GlobalFunc_9004(iVar2, 1, Global_68104);
				}
			}
		}
	}
}





int func_204(int iParam0, int iParam1, int iParam2)//Position - 0x2D5A1
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_130(iParam0, iParam1, iVar0))
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
				if (func_130(iParam0, iParam1, iVar1))
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
				return GlobalFunc_7614(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_7150(iParam0, iParam1);
		}
	}
	return -99;
}








































int func_244(int iParam0, int iParam1, int iParam2)//Position - 0x45220
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_98(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_62;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_63 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}


int func_246(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x452E7
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
		GlobalFunc_8357(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7150(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7150(iParam0, 9);
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
			iVar7 = GlobalFunc_7614(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7614(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7614(iParam0, 2);
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
							GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8357(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_251(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_246(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8357(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_251(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_246(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, func_91(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_260(iParam0, iVar10, &iVar4, 1))
							{
								func_246(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_246(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
					func_246(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_246(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_246(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_246(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_246(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8357(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_251(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_246(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8357(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_251(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_246(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = func_251(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_246(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
		if (func_260(iParam0, iVar10, &iVar4, 0))
		{
			func_246(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (func_244(iParam0, iVar10, &iVar4))
		{
			func_246(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}





int func_251(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x45F6D
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
				iVar1 = GlobalFunc_7150(iParam0, 1);
				iVar0 = GlobalFunc_24(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = GlobalFunc_7150(iParam0, 2);
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
									if (!GlobalFunc_8056(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!GlobalFunc_8056(iParam0, 3, 135, 150))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 135, 150);
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
									if (!GlobalFunc_8056(iParam0, 3, 209, 222))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!GlobalFunc_8056(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = GlobalFunc_11029(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!GlobalFunc_8056(iParam0, 3, 176, 191) && !GlobalFunc_8056(iParam0, 3, 227, 242))
									{
										iVar0 = GlobalFunc_11029(iParam1, 3, 176, 191);
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
								iVar4 = GlobalFunc_7150(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = GlobalFunc_7150(iParam0, 11);
								iVar5 = GlobalFunc_11156(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = GlobalFunc_7150(iParam0, 8);
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
								iVar7 = GlobalFunc_7150(iParam0, 8);
								iVar8 = GlobalFunc_7150(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = GlobalFunc_11156(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = GlobalFunc_11156(iParam1, iParam3, iVar8, 1);
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
								iVar9 = GlobalFunc_7150(iParam0, 11);
								iVar0 = GlobalFunc_11156(iParam1, -99, iVar9, 0);
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









int func_260(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4788E
{
	int iVar0;
	
	iVar0 = GlobalFunc_19(iParam1);
	if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_98(iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_59;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_60 = -99;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}


































void func_294(char* sParam0)//Position - 0x486ED
{
	if (iLocal_471 == 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JH1_FAIL");
		sLocal_225 = sParam0;
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		HUD::CLEAR_PRINTS();
		GlobalFunc_4935();
		GlobalFunc_4956();
		GlobalFunc_10835(sLocal_225);
		iLocal_471 = 1;
	}
}












void func_306()//Position - 0x495AE
{
	if (iLocal_77 == 0)
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
		GlobalFunc_585(16, 1);
		Global_86864.f_9[0] = iLocal_139;
		Global_86864[0] = iLocal_200;
		func_307();
	}
}

void func_307()//Position - 0x495DF
{
	if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		GlobalFunc_585(16, 1);
	}
	Global_86864.f_9[0] = iLocal_139;
	Global_86864[0] = iLocal_200;
	HUD::DISPLAY_RADAR(0);
	if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		GlobalFunc_5103(1, 0);
	}
	else
	{
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(250);
		}
		GlobalFunc_5103(0, 0);
	}
	func_519();
}



void func_310()//Position - 0x4974E
{
	func_436();
	if (iLocal_77 == 0)
	{
		if (iLocal_434 == 1)
		{
			func_394();
			iLocal_434 = 0;
		}
		GlobalFunc_Checkpoint7(4, "STAGE_DRIVE_TO_WAREHOUSE", 1, 0, 0, 1);
		iLocal_433 = 0;
		iLocal_437 = 0;
		iLocal_430 = 0;
		iLocal_431 = 1;
		iLocal_439 = 0;
		iLocal_507 = 0;
		iLocal_475 = 0;
		iLocal_523 = 0;
		iLocal_542 = 0;
		iLocal_574 = 0;
		iLocal_575 = 0;
		iLocal_610 = 0;
		iLocal_611 = 0;
		iLocal_121 = 0;
		iLocal_124 = 0;
		SYSTEM::SETTIMERA(0);
		if (!PED::IS_PED_INJURED(iLocal_139))
		{
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_139, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_139, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_139, 1862763509);
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-631.51f, -332.75f, 32f, -692.36f, -228.83f, 38f, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_5108(iLocal_200, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_200, 0);
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (iLocal_475 == 0)
			{
				GlobalFunc_4935();
				if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH28", 7, 0, 0, 0))
				{
					if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						func_322(PLAYER::PLAYER_PED_ID(), 14, 62);
					}
					else
					{
						func_3(PLAYER::PLAYER_PED_ID());
					}
					iLocal_475 = 1;
				}
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_212))
			{
				uLocal_212 = GlobalFunc_5104(Local_72, 0);
				HUD::SET_BLIP_ROUTE(uLocal_212, 1);
			}
		}
		else
		{
			HUD::CLEAR_PRINTS();
			HUD::REMOVE_BLIP(&uLocal_212);
			GlobalFunc_164("WANTED", 7500, 1);
		}
		GlobalFunc_7632(0);
		if (AUDIO::GET_PLAYER_RADIO_STATION_INDEX() == 255)
		{
			AUDIO::SET_RADIO_TO_STATION_NAME("RADIO_01_CLASS_ROCK");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH1_RETURN_TO_CAR"))
		{
			AUDIO::STOP_AUDIO_SCENE("JSH1_RETURN_TO_CAR");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_DRIVE_TO_FACTORY"))
		{
			AUDIO::START_AUDIO_SCENE("JSH_1_DRIVE_TO_FACTORY");
		}
		RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
		iLocal_77 = 1;
	}
	if (iLocal_77 == 1)
	{
		if (iLocal_475 == 0)
		{
			GlobalFunc_4935();
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH28", 7, 0, 0, 0))
				{
					if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						func_322(PLAYER::PLAYER_PED_ID(), 14, 62);
					}
					else
					{
						func_3(PLAYER::PLAYER_PED_ID());
					}
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_226);
					GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
					iLocal_475 = 1;
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (iLocal_523 == 0)
			{
				if (iLocal_475 == 1)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_STP14", 7, 0, 0, 0))
						{
							SYSTEM::SETTIMERA(0);
							iLocal_523 = 1;
						}
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_212))
				{
					HUD::REMOVE_BLIP(&uLocal_212);
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_208))
				{
					uLocal_208 = GlobalFunc_6783(iLocal_200, 0, 0);
				}
				if (iLocal_439 == 1)
				{
					if (MISC::GET_GAME_TIMER() < iLocal_124 + 7500)
					{
						HUD::CLEAR_PRINTS();
					}
				}
				if (iLocal_433 == 0)
				{
					HUD::CLEAR_PRINTS();
					HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
					GlobalFunc_164("GOTO_CAR2", 7500, 1);
					iLocal_121 = MISC::GET_GAME_TIMER();
					iLocal_433 = 1;
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (iLocal_611 == 0)
				{
					if (iLocal_433 == 1 && MISC::GET_GAME_TIMER() < iLocal_121 + 7500)
					{
						HUD::CLEAR_PRINTS();
						iLocal_611 = 1;
					}
				}
				if (SYSTEM::TIMERA() > 3000)
				{
					if (iLocal_523 == 1)
					{
						if (iLocal_439 == 0)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								GlobalFunc_4935();
								GlobalFunc_164("GO_HOME", 7500, 1);
								SYSTEM::SETTIMERA(0);
								iLocal_124 = MISC::GET_GAME_TIMER();
								iLocal_439 = 1;
							}
						}
					}
				}
				if (iLocal_439 == 1 && iLocal_523 == 1)
				{
					if (SYSTEM::TIMERA() > 2000)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_STP13", 4, 0, 0, 0))
							{
								iLocal_77 = 2;
							}
						}
					}
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_208))
				{
					HUD::REMOVE_BLIP(&uLocal_208);
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_212))
				{
					uLocal_212 = GlobalFunc_5104(Local_72, 1);
					HUD::SET_BLIP_ROUTE(uLocal_212, 1);
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_212))
				{
					HUD::CLEAR_PRINTS();
					HUD::REMOVE_BLIP(&uLocal_212);
					GlobalFunc_164("WANTED", 7500, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_208))
				{
					HUD::REMOVE_BLIP(&uLocal_208);
				}
			}
		}
	}
	if (iLocal_77 == 2)
	{
		if (iLocal_542 == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_72, 1) < 100f && MISC::GET_DISTANCE_BETWEEN_COORDS(723.2f, -1089f, 22.1f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 20f)
			{
				GlobalFunc_585(16, 1);
				Global_86864.f_9[0] = iLocal_139;
				Global_86864[0] = iLocal_200;
				iLocal_542 = 1;
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_72, 1) > 120f || MISC::GET_DISTANCE_BETWEEN_COORDS(723.2f, -1089f, 22.1f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 20f)
		{
			GlobalFunc_585(16, 0);
			iLocal_542 = 0;
		}
		if (iLocal_574 == 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_72, 1) < 200f && MISC::GET_DISTANCE_BETWEEN_COORDS(723.2f, -1089f, 22.1f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 20f)
			{
				if (iLocal_575 == 0)
				{
					uLocal_199 = INTERIOR::GET_INTERIOR_AT_COORDS(711.2f, -960.2f, 30.6f);
					INTERIOR::PIN_INTERIOR_IN_MEMORY(uLocal_199);
					STREAMING::NEW_LOAD_SCENE_START_SPHERE(713.1f, -963.4f, 29.9f, 15f, 2);
					iLocal_575 = 1;
				}
			}
			if (iLocal_575 == 1)
			{
				if (INTERIOR::IS_INTERIOR_READY(uLocal_199))
				{
					iLocal_574 = 1;
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_72, 1) > 200f || MISC::GET_DISTANCE_BETWEEN_COORDS(723.2f, -1089f, 22.1f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 20f)
		{
			if (iLocal_575 == 1)
			{
				INTERIOR::UNPIN_INTERIOR(uLocal_199);
				STREAMING::NEW_LOAD_SCENE_STOP();
				iLocal_575 = 0;
				iLocal_574 = 0;
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_212))
				{
					HUD::REMOVE_BLIP(&uLocal_212);
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_208))
				{
					uLocal_208 = GlobalFunc_6783(iLocal_200, 0, 0);
					if (iLocal_433 == 0)
					{
						HUD::CLEAR_PRINTS();
						HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
						GlobalFunc_164("GOTO_CAR2", 7500, 1);
						iLocal_433 = 1;
					}
				}
				if (!GlobalFunc_620())
				{
					GlobalFunc_619(1);
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_208))
				{
					HUD::REMOVE_BLIP(&uLocal_208);
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_212))
				{
					uLocal_212 = GlobalFunc_5104(Local_72, 1);
					HUD::SET_BLIP_ROUTE(uLocal_212, 1);
				}
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (GlobalFunc_620())
					{
						GlobalFunc_619(0);
					}
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "veh@std@ds@enter_exit", "jump_out", 3))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_212))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_72.x, Local_72.f_1, 23.13782f, 2f, 2f, 2f, 1, 1, 0))
						{
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_72.x, Local_72.f_1, 23.13782f, 8.5f, 11f, 2f, 0, 1, 2))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_212))
						{
							HUD::REMOVE_BLIP(&uLocal_212);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_208))
						{
							HUD::REMOVE_BLIP(&uLocal_208);
						}
						iLocal_77 = 3;
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_212))
				{
					HUD::CLEAR_PRINTS();
					HUD::REMOVE_BLIP(&uLocal_212);
					GlobalFunc_164("WANTED", 7500, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_208))
				{
					HUD::REMOVE_BLIP(&uLocal_208);
				}
			}
		}
	}
	if (iLocal_77 == 3)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (GlobalFunc_4499(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10.5f, 1, 0.2f, 0, 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_200, 1000f);
					}
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_DRIVE_TO_FACTORY"))
				{
					AUDIO::STOP_AUDIO_SCENE("JSH_1_DRIVE_TO_FACTORY");
				}
				RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
				SYSTEM::SETTIMERA(0);
				GlobalFunc_4935();
				iLocal_431 = 0;
				iLocal_77 = 0;
				iLocal_62 = 8;
			}
		}
		else
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_DRIVE_TO_FACTORY"))
			{
				AUDIO::STOP_AUDIO_SCENE("JSH_1_DRIVE_TO_FACTORY");
			}
			RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
			SYSTEM::SETTIMERA(0);
			GlobalFunc_4935();
			iLocal_431 = 0;
			iLocal_77 = 0;
			iLocal_62 = 8;
		}
	}
}












int func_322(int iParam0, int iParam1, int iParam2)//Position - 0x4A357
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
	if (!func_98(iParam0, iParam1, iParam2))
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
				func_322(iParam0, iVar1, uVar2[iVar1]);
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
			if (!func_322(iParam0, 14, uVar20[iVar18]))
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
	if (func_260(iParam0, iVar0, &iVar46, 0))
	{
		func_246(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (func_244(iParam0, iVar0, &iVar46))
	{
		func_246(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}








































































void func_394()//Position - 0x51684
{
	if (!GlobalFunc_188())
	{
		func_435();
	}
	func_434();
	func_433();
	AUDIO::_OVERRIDE_MICROPHONE_SETTINGS(0, 0);
	func_397();
	if (!GlobalFunc_188())
	{
		func_396();
	}
	WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
	func_395();
	iLocal_508 = 0;
	iLocal_509 = 0;
	iLocal_510 = 0;
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}

void func_395()//Position - 0x516D9
{
	switch (iLocal_62)
	{
		case 2:
			AUDIO::TRIGGER_MUSIC_EVENT("JH1_RESTART_1");
			iLocal_470 = 0;
			iLocal_507 = 0;
			iLocal_525 = 0;
			break;
		
		case 3:
			AUDIO::TRIGGER_MUSIC_EVENT("JH1_RESTART_2");
			iLocal_470 = 0;
			iLocal_507 = 0;
			iLocal_525 = 0;
			iLocal_543 = 0;
			break;
		
		case 4:
			AUDIO::TRIGGER_MUSIC_EVENT("JH1_RESTART_2");
			iLocal_470 = 0;
			iLocal_507 = 0;
			iLocal_525 = 0;
			iLocal_543 = 0;
			func_246(PLAYER::PLAYER_PED_ID(), 14, 62, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			break;
		
		case 5:
			AUDIO::TRIGGER_MUSIC_EVENT("JH1_RESTART_3");
			uLocal_217[2] = PED::ADD_SCENARIO_BLOCKING_AREA(-603.5f, -271.1f, 44.2f, -566.5f, -298.7f, 31.4f, 0, 1, 1, 1);
			iLocal_470 = 0;
			iLocal_507 = 0;
			iLocal_525 = 0;
			iLocal_543 = 0;
			func_246(PLAYER::PLAYER_PED_ID(), 14, 62, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			break;
		
		case 6:
			iLocal_470 = 0;
			iLocal_507 = 0;
			iLocal_525 = 0;
			iLocal_543 = 0;
			break;
	}
}

void func_396()//Position - 0x517DE
{
	switch (iLocal_62)
	{
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, -1);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					}
				}
			}
			break;
		
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, -1);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					}
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, -1);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					}
				}
			}
			break;
		
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, -1);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					}
				}
			}
			break;
		
		case 6:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, -1);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					}
				}
			}
			break;
	}
}

void func_397()//Position - 0x51969
{
	switch (iLocal_62)
	{
		case 2:
			GlobalFunc_7046(0, 0);
			GlobalFunc_7049(12);
			while (!GlobalFunc_7045(0, 0) || !GlobalFunc_7048(12))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				MISC::CLEAR_AREA(Local_66, 15f, 1, 0, 0, 0);
				GlobalFunc_10543(&iLocal_200, 0, Local_66, 268.499f, 1, 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_200);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_200);
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_200, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_200, 1);
				GlobalFunc_504(iLocal_200, -1);
				GlobalFunc_503(iLocal_200, -1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_139))
			{
				GlobalFunc_6790(&iLocal_139, 12, iLocal_200, 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 4, 1, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_139, 1, 0, 0, false);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_139, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_139, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_139, 0);
				GlobalFunc_173(&uLocal_241, 1, iLocal_139, "LESTER", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_139, 1862763509);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_139, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_139, 182, 1);
			}
			GlobalFunc_7516(0, 0);
			break;
		
		case 3:
			GlobalFunc_7046(0, 0);
			GlobalFunc_7049(12);
			while (!GlobalFunc_7045(0, 0) || !GlobalFunc_7048(12))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				MISC::CLEAR_AREA(Local_66, 15f, 1, 0, 0, 0);
				GlobalFunc_10543(&iLocal_200, 0, -659.1774f, -270.6738f, 34.8078f, 30.7532f, 1, 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_200);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_200);
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_200, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_200, 1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_200, 1, 1);
				GlobalFunc_504(iLocal_200, -1);
				GlobalFunc_503(iLocal_200, -1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_139))
			{
				GlobalFunc_6790(&iLocal_139, 12, iLocal_200, 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 4, 1, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_139, 1, 0, 0, false);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_139, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_139, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_139, 0);
				GlobalFunc_173(&uLocal_241, 1, iLocal_139, "LESTER", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_139, 1862763509);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_139, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_139, 182, 1);
			}
			GlobalFunc_7516(0, 0);
			break;
		
		case 4:
			GlobalFunc_7046(0, 0);
			GlobalFunc_7049(12);
			uLocal_226 = unk_0x67D02A194A2FC2BD("camera_gallery");
			GlobalFunc_4500();
			while (!GlobalFunc_7045(0, 0) || !GlobalFunc_7048(12))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				MISC::CLEAR_AREA(Local_66, 15f, 1, 0, 0, 0);
				GlobalFunc_10543(&iLocal_200, 0, -659.1774f, -270.6738f, 34.8078f, 30.7532f, 1, 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_200);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_200);
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_200, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_200, 1);
				GlobalFunc_504(iLocal_200, -1);
				GlobalFunc_503(iLocal_200, -1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_139))
			{
				GlobalFunc_6790(&iLocal_139, 12, iLocal_200, 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 4, 1, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_139, 1, 0, 0, false);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_139, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_139, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_139, 0);
				GlobalFunc_173(&uLocal_241, 1, iLocal_139, "LESTER", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_139, 1862763509);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_139, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_139, 182, 1);
			}
			GlobalFunc_7516(0, 0);
			break;
		
		case 5:
			uLocal_226 = unk_0x67D02A194A2FC2BD("camera_gallery");
			GlobalFunc_4500();
			AUDIO::REQUEST_MISSION_AUDIO_BANK("JWL_HEIST_SETUP", 0);
			GlobalFunc_7046(0, 0);
			GlobalFunc_7049(12);
			while (!GlobalFunc_7045(0, 0) || !GlobalFunc_7048(12))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				MISC::CLEAR_AREA(Local_66, 15f, 1, 0, 0, 0);
				GlobalFunc_10543(&iLocal_200, 0, -575.9287f, -277.7308f, 34.1598f, 27.8937f, 1, 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_200);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_200);
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_200, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_200, 1);
				GlobalFunc_504(iLocal_200, -1);
				GlobalFunc_503(iLocal_200, -1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_139))
			{
				GlobalFunc_6790(&iLocal_139, 12, iLocal_200, 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 4, 1, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_139, 1, 0, 0, false);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_139, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_139, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_139, 0);
				GlobalFunc_173(&uLocal_241, 1, iLocal_139, "LESTER", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_139, 1862763509);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_139, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_139, 182, 1);
			}
			GlobalFunc_7516(0, 0);
			break;
		
		case 6:
			GlobalFunc_7046(0, 0);
			GlobalFunc_7049(12);
			while (!GlobalFunc_7045(0, 0) || !GlobalFunc_7048(12))
			{
				SYSTEM::WAIT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				MISC::CLEAR_AREA(Local_66, 15f, 1, 0, 0, 0);
				GlobalFunc_10543(&iLocal_200, 0, -575.9287f, -277.7308f, 34.1598f, 27.8937f, 1, 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_200);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_200);
				VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_200, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_200, 1);
				GlobalFunc_504(iLocal_200, -1);
				GlobalFunc_503(iLocal_200, -1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_139))
			{
				GlobalFunc_6790(&iLocal_139, 12, iLocal_200, 0, 1);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 4, 1, 0, 0);
				PED::SET_PED_PROP_INDEX(iLocal_139, 1, 0, 0, false);
				PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_139, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_139, 1);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_139, 0);
				GlobalFunc_173(&uLocal_241, 1, iLocal_139, "LESTER", 0, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_139, 1862763509);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_139, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_139, 182, 1);
			}
			GlobalFunc_7516(0, 0);
			break;
	}
}




































void func_433()//Position - 0x561F0
{
	if (iLocal_628 == 1)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_86[0]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_86[1]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_94[1]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_94[2]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_94[3]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[0]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[1]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[2]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[3]);
		iLocal_628 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
	{
		PED::DELETE_PED(&iLocal_139);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
	{
		PED::DELETE_PED(&iLocal_140);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
	{
		PED::DELETE_PED(&iLocal_141);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]))
	{
		PED::DELETE_PED(&(iLocal_142[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_200);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_145))
	{
		OBJECT::DELETE_OBJECT(&iLocal_145);
	}
	iLocal_82 = 0;
	while (iLocal_82 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_146[iLocal_82]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_146[iLocal_82]));
		}
		iLocal_82++;
	}
	iLocal_82 = 0;
	while (iLocal_82 <= 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_151[iLocal_82]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_151[iLocal_82]));
		}
		iLocal_82++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[0]))
	{
		OBJECT::DELETE_OBJECT(&(uLocal_156[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[1]))
	{
		OBJECT::DELETE_OBJECT(&(uLocal_156[1]));
	}
	STREAMING::REMOVE_ANIM_DICT("MISSHEIST_JEWEL_SETUP");
	STREAMING::REMOVE_ANIM_DICT("amb@world_human_window_shop@male@idle_a");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_01"));
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_226);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("digitalOverlay");
	TASK::REMOVE_WAYPOINT_RECORDING("BB_JEW_6");
	PATHFIND::SET_ROADS_IN_AREA(-611.9f, -362.4f, 30f, -558.6f, -264.5f, 45f, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(-538.9f, -296.7f, 43.3f, -631.3f, -185.2f, 30f, 1, 1);
	AUDIO::CANCEL_MUSIC_EVENT("JH1_RESTART_1");
	AUDIO::CANCEL_MUSIC_EVENT("JH1_RESTART_2");
	AUDIO::CANCEL_MUSIC_EVENT("JH1_RESTART_3");
	AUDIO::CANCEL_MUSIC_EVENT("JH1_START");
	AUDIO::CANCEL_MUSIC_EVENT("JH1_STORE");
	AUDIO::CANCEL_MUSIC_EVENT("JH1_STOP_TRACK_ACTION");
}

void func_434()//Position - 0x563E7
{
	if (HUD::DOES_BLIP_EXIST(uLocal_206))
	{
		HUD::REMOVE_BLIP(&uLocal_206);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_207))
	{
		HUD::REMOVE_BLIP(&uLocal_207);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_208))
	{
		HUD::REMOVE_BLIP(&uLocal_208);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_209))
	{
		HUD::REMOVE_BLIP(&uLocal_209);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_210))
	{
		HUD::REMOVE_BLIP(&uLocal_210);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_211))
	{
		HUD::REMOVE_BLIP(&uLocal_211);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_212))
	{
		HUD::REMOVE_BLIP(&uLocal_212);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_213))
	{
		HUD::REMOVE_BLIP(&uLocal_213);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_214))
	{
		HUD::REMOVE_BLIP(&uLocal_214);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_215))
	{
		HUD::REMOVE_BLIP(&uLocal_215);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_216))
	{
		HUD::REMOVE_BLIP(&uLocal_216);
	}
}

void func_435()//Position - 0x56494
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(0);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	AUDIO::RELEASE_MISSION_AUDIO_BANK();
	GlobalFunc_7632(0);
	GlobalFunc_4935();
	HUD::CLEAR_PRINTS();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 0, 0, 1);
	}
}

void func_436()//Position - 0x564DE
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -631.3f, -239f, 37.4f, 1) < 100f)
	{
		if (iLocal_470 == 0)
		{
			iLocal_615 = 0;
			if (iLocal_507 == 0)
			{
				STREAMING::REQUEST_MODEL(joaat("u_m_m_jewelsec_01"));
				STREAMING::REQUEST_MODEL(joaat("ig_jewelass"));
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_stand_guard@male@idle_a");
				STREAMING::REQUEST_ANIM_DICT("MISSHEIST_JEWEL_SETUP");
				iLocal_507 = 1;
			}
			if (iLocal_543 == 0)
			{
				uLocal_198 = INTERIOR::GET_INTERIOR_AT_COORDS(-623f, -229.7f, 38.7f);
				INTERIOR::PIN_INTERIOR_IN_MEMORY(uLocal_198);
				iLocal_543 = 1;
			}
			if (iLocal_543 == 1)
			{
				if (INTERIOR::IS_INTERIOR_READY(uLocal_198))
				{
					if (iLocal_507 == 1)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_140))
						{
							if (STREAMING::HAS_MODEL_LOADED(joaat("u_m_m_jewelsec_01")))
							{
								iLocal_140 = PED::CREATE_PED(26, joaat("u_m_m_jewelsec_01"), -630.9388f, -235.834f, 37.057f, 214.5493f, 1, 1);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_140, 1);
								PED::SET_PED_RESET_FLAG(iLocal_140, 129, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_140, 1);
								PED::SET_PED_KEEP_TASK(iLocal_140, 1);
								ENTITY::FREEZE_ENTITY_POSITION(iLocal_140, 1);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_141))
						{
							STREAMING::REQUEST_ANIM_DICT("MISSHEIST_JEWEL_SETUP");
							if (STREAMING::HAS_MODEL_LOADED(joaat("ig_jewelass")) && STREAMING::HAS_ANIM_DICT_LOADED("MISSHEIST_JEWEL_SETUP"))
							{
								iLocal_141 = PED::CREATE_PED(26, joaat("ig_jewelass"), -623.0729f, -230.0248f, 37.057f, 130.6013f, 1, 1);
								PED::SET_PED_PROP_INDEX(iLocal_141, 1, 0, 0, false);
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_141, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_141, 1);
								TASK::TASK_PLAY_ANIM(iLocal_141, "MISSHEIST_JEWEL_SETUP", "idle_storeclerk", 8f, -8f, -1, 1, 0, 0, 0, 0);
								PED::SET_PED_KEEP_TASK(iLocal_141, 1);
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_140) && ENTITY::DOES_ENTITY_EXIST(iLocal_141))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_m_jewelsec_01"));
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_jewelass"));
				iLocal_548 = 0;
				iLocal_470 = 1;
			}
		}
		else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
			{
				if (!PED::IS_PED_INJURED(iLocal_140))
				{
					if (iLocal_483 == 1)
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_140, 1) > 5f)
						{
							iLocal_546 = 0;
						}
						else if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 51.7575f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 185.4324f)
						{
							iLocal_119 = MISC::GET_GAME_TIMER();
							iLocal_546 = 1;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_119 + 2000)
						{
							iLocal_546 = 0;
						}
					}
					if (iLocal_483 == 0)
					{
						if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_140, 1) > 7f)
						{
							iLocal_546 = 0;
						}
						else if ((ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 252f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 360f) || (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 0f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 8f))
						{
							iLocal_119 = MISC::GET_GAME_TIMER();
							iLocal_546 = 1;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_119 + 4000)
						{
							iLocal_546 = 0;
						}
					}
					if (iLocal_548 == 0)
					{
						if (iLocal_546 == 1 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -631.0714f, -236.9102f, 36.56824f, -631.6649f, -236.0943f, 39.30698f, 1f, 0, 1, 0))
						{
							if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, "MISSHEIST_JEWEL_SETUP", "enter_guard", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, "MISSHEIST_JEWEL_SETUP", "exit_guard", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, "MISSHEIST_JEWEL_SETUP", "base_guard", 3))
							{
								uLocal_112 = PED::CREATE_SYNCHRONIZED_SCENE(-631.96f, -236.33f, 38.21f, 0f, 0f, -54f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_140, uLocal_112, "MISSHEIST_JEWEL_SETUP", "enter_guard", 4f, -2f, 5, 0, 1148846080, 0);
								ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-631.96f, -236.33f, 38.21f, 2f, joaat("p_jewel_door_l"), uLocal_112, "enter_door", "MISSHEIST_JEWEL_SETUP", 4f, -1056964608, 0, 1148846080);
								PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_112, 0);
								iLocal_548 = 1;
								iLocal_615 = 0;
							}
						}
					}
					if (iLocal_548 == 1)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, "MISSHEIST_JEWEL_SETUP", "enter_guard", 3))
						{
							iLocal_547 = 1;
						}
						if (iLocal_547 == 1)
						{
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_112) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_112) >= 0.96f)
							{
								uLocal_111 = PED::CREATE_SYNCHRONIZED_SCENE(-631.96f, -236.33f, 38.21f, 0f, 0f, -54f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_140, uLocal_111, "MISSHEIST_JEWEL_SETUP", "base_guard", 4f, -8f, 5, 0, 1148846080, 0);
								ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-631.96f, -236.33f, 38.21f, 2f, joaat("p_jewel_door_l"), uLocal_111, "base_door", "MISSHEIST_JEWEL_SETUP", 1000f, -1056964608, 0, 1148846080);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_111, 1);
								PED::SET_PED_KEEP_TASK(iLocal_140, 1);
								iLocal_547 = 0;
								iLocal_615 = 0;
							}
						}
					}
					if (iLocal_548 == 1)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, "MISSHEIST_JEWEL_SETUP", "base_guard", 3))
						{
							if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -630.4774f, -238.3212f, 36.589f, -631.9237f, -236.3552f, 38.81405f, 3.5f, 0, 1, 0) && iLocal_546 == 0)
							{
								uLocal_110 = PED::CREATE_SYNCHRONIZED_SCENE(-631.96f, -236.33f, 38.21f, 0f, 0f, -54f, 2);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_140, uLocal_110, "MISSHEIST_JEWEL_SETUP", "exit_guard", 8f, -2f, 5, 0, 1148846080, 0);
								ENTITY::PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(-631.96f, -236.33f, 38.21f, 2f, joaat("p_jewel_door_l"), uLocal_110, "exit_door", "MISSHEIST_JEWEL_SETUP", 8f, -1056964608, 0, 1148846080);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_110, 0);
								PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_110, 0);
								PED::SET_PED_KEEP_TASK(iLocal_140, 1);
								iLocal_615 = 0;
							}
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, "MISSHEIST_JEWEL_SETUP", "exit_guard", 3))
						{
							iLocal_548 = 0;
						}
					}
					if (iLocal_548 == 0)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -630.4774f, -238.3212f, 36.589f, -631.9237f, -236.3552f, 38.81405f, 3.5f, 0, 1, 0) && iLocal_546 == 0)
						{
							if ((((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, "amb@world_human_stand_guard@male@idle_a", "idle_a", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, "MISSHEIST_JEWEL_SETUP", "enter_guard", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, "MISSHEIST_JEWEL_SETUP", "exit_guard", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, "MISSHEIST_JEWEL_SETUP", "base_guard", 3)) && iLocal_547 == 0)
							{
								TASK::TASK_PLAY_ANIM(iLocal_140, "amb@world_human_stand_guard@male@idle_a", "idle_a", 2f, -4f, -1, 9, 0, 0, 0, 0);
								PED::SET_PED_KEEP_TASK(iLocal_140, 1);
							}
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_140, "amb@world_human_stand_guard@male@idle_a", "idle_a", 3))
							{
								OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("p_jewel_door_l"), -632f, -236f, 38f, &iLocal_614, &fLocal_234);
								if (fLocal_234 != 0f)
								{
									if (iLocal_615 == 0)
									{
										fLocal_234 = 0f;
										iLocal_614 = 1;
										if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_110))
										{
											ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(-631.96f, -236.33f, 38.21f, 2f, joaat("p_jewel_door_l"), -8f);
											OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("p_jewel_door_l"), -632f, -236f, 38f, iLocal_614, fLocal_234, 0);
											iLocal_615 = 1;
										}
										else
										{
											OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("p_jewel_door_l"), -632f, -236f, 38f, iLocal_614, fLocal_234, 0);
											iLocal_615 = 1;
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
		if (iLocal_470 == 1)
		{
			iLocal_470 = 0;
		}
		if (iLocal_507 == 1)
		{
			STREAMING::REMOVE_ANIM_DICT("amb@world_human_stand_guard@male@idle_a");
			STREAMING::REMOVE_ANIM_DICT("MISSHEIST_JEWEL_SETUP");
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("u_m_m_jewelsec_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ig_jewelass"));
			iLocal_507 = 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
		{
			PED::DELETE_PED(&iLocal_140);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
		{
			PED::DELETE_PED(&iLocal_141);
		}
		if (iLocal_543 == 1)
		{
			INTERIOR::UNPIN_INTERIOR(uLocal_198);
			iLocal_543 = 0;
		}
	}
}

void func_437()//Position - 0x56C58
{
	var uVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	func_460();
	func_436();
	if (MISC::GET_GAME_TIMER() > iLocal_81 + 5000)
	{
		if (iLocal_623 == 0)
		{
			if (GlobalFunc_5648(10))
			{
				iLocal_623 = 1;
			}
			iLocal_81 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_623 == 1)
		{
			if (!GlobalFunc_5648(10))
			{
				iLocal_623 = 0;
			}
			iLocal_81 = MISC::GET_GAME_TIMER();
		}
	}
	if (((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !GlobalFunc_490()) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !iLocal_623) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && iLocal_471 == 0)
	{
		func_445();
	}
	else if (iLocal_447 == 1)
	{
		func_445();
	}
	func_444();
	if (iLocal_77 == 0)
	{
		if (iLocal_434 == 1)
		{
			func_394();
			iLocal_434 = 0;
		}
		GlobalFunc_Checkpoint7(3, "STAGE_CHECK_ROOF", 0, 0, 0, 1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_200, 0);
		}
		iLocal_431 = 1;
		iLocal_490 = 0;
		iLocal_491 = 0;
		iLocal_492 = 0;
		iLocal_493 = 0;
		iLocal_494 = 0;
		iLocal_495 = 0;
		iLocal_496 = 0;
		iLocal_497 = 0;
		iLocal_498 = 0;
		iLocal_499 = 0;
		iLocal_507 = 0;
		iLocal_500[2] = 0;
		iLocal_474 = 1;
		iLocal_553 = 0;
		iLocal_554 = 0;
		iLocal_556 = 0;
		iLocal_557 = 0;
		iLocal_558 = 0;
		iLocal_559 = 0;
		iLocal_561 = 0;
		iLocal_562 = 0;
		iLocal_563 = 0;
		iLocal_560 = 0;
		iLocal_583 = 0;
		iLocal_584 = 0;
		iLocal_585 = 0;
		iLocal_586 = 0;
		iLocal_587 = 0;
		iLocal_588 = 0;
		iLocal_589 = 0;
		iLocal_590 = 0;
		iLocal_591 = 0;
		iLocal_592 = 0;
		iLocal_581 = 0;
		iLocal_593 = 0;
		iLocal_594 = 0;
		iLocal_602 = 0;
		iLocal_596 = 0;
		iLocal_597 = 0;
		iLocal_599 = 0;
		iLocal_600 = 0;
		iLocal_601 = 0;
		iLocal_598 = 0;
		iLocal_603 = 0;
		iLocal_605 = 0;
		iLocal_606 = 0;
		iLocal_607 = 0;
		iLocal_608 = 0;
		iLocal_609 = 0;
		iLocal_610 = 0;
		iLocal_613 = 0;
		iLocal_621 = 0;
		iLocal_579 = 0;
		iLocal_623 = 0;
		iLocal_120 = 0;
		iLocal_125 = 0;
		iLocal_81 = MISC::GET_GAME_TIMER();
		SYSTEM::SETTIMERA(0);
		if (!PED::IS_PED_INJURED(iLocal_139))
		{
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_139, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_139, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_139, 1862763509);
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_5108(iLocal_200, -1, 1);
			iLocal_621 = 1;
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		MISC::CLEAR_AREA(-587.7646f, -287.264f, 49.3291f, 5f, 1, 0, 0, 0);
		uLocal_217[4] = PED::ADD_SCENARIO_BLOCKING_AREA(-590.7f, -292.8f, 46f, -575.7f, -280.4f, 54.6f, 0, 1, 1, 1);
		iLocal_129 = MISC::GET_GAME_TIMER();
		iLocal_118 = MISC::GET_GAME_TIMER();
		PATHFIND::SET_ROADS_IN_AREA(-611.9f, -362.4f, 30f, -558.6f, -264.5f, 45f, 0, 1);
		PATHFIND::SET_ROADS_IN_AREA(-538.9f, -296.7f, 43.3f, -631.3f, -185.2f, 30f, 0, 1);
		if (!HUD::DOES_BLIP_EXIST(uLocal_214))
		{
			uLocal_214 = GlobalFunc_5104(-591.8343f, -291.39f, 49.327f, 0);
		}
		Local_238 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
		iLocal_77 = 1;
	}
	if (iLocal_77 == 1)
	{
		if (iLocal_606 == 0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_255(&uVar0, &uVar1, &iVar2, &uVar3, 0, 0);
				if (((iVar2 > 10 || iVar2 < -10) || iVar2 > 10) || iVar2 < -10)
				{
					CAM::STOP_GAMEPLAY_HINT(0);
					iLocal_606 = 1;
				}
			}
			else
			{
				CAM::STOP_GAMEPLAY_HINT(0);
				iLocal_606 = 1;
			}
		}
		if (iLocal_621 == 1)
		{
			if (iLocal_579 == 0)
			{
				if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH32", 7, 0, 0, 0))
				{
					iLocal_579 = 1;
				}
			}
		}
		if (iLocal_579 == 1 || iLocal_621 == 0)
		{
			if (iLocal_563 == 0)
			{
				if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
						GlobalFunc_164("GOD6", 7500, 1);
						iLocal_563 = 1;
					}
				}
			}
		}
		if (iLocal_563 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_DRIVE_TO_BACK_ENTRANCE"))
					{
						AUDIO::STOP_AUDIO_SCENE("JSH_1_DRIVE_TO_BACK_ENTRANCE");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_GET_TO_ROOF"))
					{
						AUDIO::START_AUDIO_SCENE("JSH_1_GET_TO_ROOF");
					}
					if (iLocal_553 == 0)
					{
						if ((GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_200, 1) > 8f && !GlobalFunc_111()) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_OLDCREW", 7, 0, 0, 0))
							{
								iLocal_553 = 1;
							}
						}
					}
				}
				else
				{
					if (iLocal_556 == 0)
					{
						if (iLocal_553 == 1)
						{
							if (GlobalFunc_111())
							{
								Local_406 = { GlobalFunc_514() };
								GlobalFunc_4935();
								iLocal_556 = 1;
							}
						}
					}
					if (iLocal_613 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_238, 1) > 8f || MISC::GET_GAME_TIMER() > iLocal_129 + 8000)
						{
							if (!GlobalFunc_111())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH46", 7, 0, 0, 0))
									{
										iLocal_125 = MISC::GET_GAME_TIMER();
										iLocal_613 = 1;
									}
								}
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_125 + 10000 && iLocal_471 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH46", 7, 0, 0, 0))
								{
									iLocal_125 = MISC::GET_GAME_TIMER();
									iLocal_613 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -593.5949f, -292.3533f, 40.68631f, 4.5f, 4.5f, 4.5f, 0, 1, 0))
			{
				if (iLocal_556 == 0)
				{
					if (iLocal_553 == 1)
					{
						if (GlobalFunc_111())
						{
							Local_406 = { GlobalFunc_514() };
							GlobalFunc_4935();
							iLocal_556 = 1;
						}
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (iLocal_556 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10626(&uLocal_241, "JHS1AUD", "JHS1_OLDCREW", &Local_406, 7, 0, 0))
						{
							iLocal_556 = 0;
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -593.5949f, -292.3533f, 40.68631f, 2.5f, 2.5f, 2f, 0, 1, 0))
			{
				if (GlobalFunc_230(43) == 0)
				{
					if (iLocal_554 == 0)
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
							GlobalFunc_159("JH_HELP1", -1);
							iLocal_554 = 1;
						}
					}
				}
				iLocal_77 = 2;
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_214))
			{
				uLocal_214 = GlobalFunc_5104(-593.5949f, -292.3533f, 40.6863f, 0);
			}
		}
		else
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -593.5949f, -292.3533f, 40.68631f, 2.5f, 2.5f, 2f, 0, 1, 0))
			{
				iLocal_77 = 2;
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_214))
			{
				HUD::CLEAR_PRINTS();
				HUD::REMOVE_BLIP(&uLocal_214);
				GlobalFunc_164("WANTED", 7500, 1);
			}
		}
	}
	if (iLocal_77 == 2)
	{
		Local_235 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (iLocal_490 == 0)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -594.163f, -292.8052f, 40.68501f, -595.4902f, -293.6558f, 44.43501f, 1.25f, 0, 1, 0) && Local_235.f_2 < 42f)
			{
				if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH44", 7, 0, 0, 0))
				{
					iLocal_490 = 1;
				}
			}
			else
			{
				iLocal_490 = 1;
			}
		}
		if (iLocal_490 == 1)
		{
			if (iLocal_556 == 1)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10626(&uLocal_241, "JHS1AUD", "JHS1_OLDCREW", &Local_406, 7, 0, 0))
					{
						iLocal_556 = 0;
					}
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -591.8343f, -291.39f, 49.32705f, 2f, 2f, 2f, 1, 1, 0))
			{
			}
			if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -591.8343f, -291.39f, 49.32705f, 1) < 15f && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -594.0919f, -298.2586f, 48.07837f, -599.0607f, -289.3984f, 53.92766f, 8.75f, 0, 1, 0)) && Local_235.f_2 > 49f)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_214))
				{
					HUD::REMOVE_BLIP(&uLocal_214);
				}
				iLocal_493 = 1;
				iLocal_77 = 3;
			}
			else if (!HUD::DOES_BLIP_EXIST(uLocal_214))
			{
				uLocal_214 = GlobalFunc_5104(-591.8343f, -291.39f, 49.327f, 0);
			}
		}
		else
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -590.5012f, -293.7801f, 48.82705f, -592.812f, -289.3416f, 51.57705f, 3.25f, 0, 1, 0))
			{
				iLocal_77 = 3;
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_214))
			{
				HUD::CLEAR_PRINTS();
				HUD::REMOVE_BLIP(&uLocal_214);
				GlobalFunc_164("WANTED", 7500, 1);
			}
		}
	}
	if (iLocal_77 == 3)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (iLocal_493 == 1)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -625.9142f, -216.1591f, 58.4256f, 5f, 5f, 5f, 0, 1, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -624.3566f, -215.6214f, 60.20725f, -627.7059f, -217.3549f, 58.20725f, 2.75f, 0, 1, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_215))
						{
							HUD::REMOVE_BLIP(&uLocal_215);
						}
						if (iLocal_607 == 0)
						{
							if (iLocal_589 == 0 && iLocal_469 == 0)
							{
								if (!GlobalFunc_111())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH68", 7, 0, 0, 0))
										{
											RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
											iLocal_607 = 1;
										}
									}
								}
							}
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_216))
						{
							if (iLocal_589 == 0 && iLocal_469 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[0]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[1]))
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[1]))
										{
											if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[3]))
											{
												if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[3]))
												{
													if (!GlobalFunc_111())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															if (iLocal_608 == 0)
															{
																if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH69", 7, 0, 0, 0))
																{
																	RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
																	iLocal_608 = 1;
																}
															}
															uLocal_216 = GlobalFunc_6799(uLocal_193[0]);
														}
													}
												}
											}
										}
									}
								}
							}
						}
						else if (iLocal_589 == 0 && iLocal_447 == 0)
						{
							if (iLocal_609 == 0)
							{
								if (!GlobalFunc_111())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										GlobalFunc_164("GOD7", 7500, 1);
										iLocal_120 = MISC::GET_GAME_TIMER();
										iLocal_609 = 1;
									}
								}
							}
						}
						else if (HUD::DOES_BLIP_EXIST(uLocal_216))
						{
							HUD::REMOVE_BLIP(&uLocal_216);
						}
						iLocal_559 = 1;
						iLocal_602 = 1;
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_216))
						{
							if (MISC::GET_GAME_TIMER() < iLocal_120 + 7500 && HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_PRINTS();
							}
							HUD::REMOVE_BLIP(&uLocal_216);
						}
						if (iLocal_494 == 0)
						{
							if (iLocal_561 == 1)
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_215))
								{
									uLocal_215 = GlobalFunc_5104(-625.8755f, -216.6342f, 58.4256f, 0);
								}
								else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -625.8755f, -216.6342f, 58.4256f, 2f, 2f, 2f, 1, 1, 0))
								{
								}
							}
						}
						iLocal_602 = 0;
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_216))
					{
						HUD::REMOVE_BLIP(&uLocal_216);
					}
					if (iLocal_494 == 0)
					{
						if (iLocal_561 == 1)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_215))
							{
								uLocal_215 = GlobalFunc_5104(-625.8755f, -216.6342f, 58.4256f, 0);
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -625.8755f, -216.6342f, 58.4256f, 2f, 2f, 2f, 1, 1, 0))
							{
							}
						}
					}
					iLocal_602 = 0;
				}
			}
			Local_235 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (Local_235.f_2 < 48f)
			{
				iLocal_493 = 0;
			}
			else
			{
				iLocal_493 = 1;
			}
			if (iLocal_560 == 0)
			{
				if (iLocal_493 == 1)
				{
					iLocal_116 = MISC::GET_GAME_TIMER();
					iLocal_560 = 1;
				}
			}
			if (iLocal_589 == 0)
			{
				if (iLocal_602 == 0)
				{
					if (iLocal_558 == 0)
					{
						if (iLocal_559 == 0)
						{
							if (iLocal_560 == 1)
							{
								if (MISC::GET_GAME_TIMER() > (iLocal_116 + 40000) || iLocal_557 == 1)
								{
									if (!GlobalFunc_111())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH51", 7, 0, 0, 0);
											iLocal_558 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_582 == 0)
			{
				if (iLocal_494 == 0)
				{
					if (iLocal_561 == 0)
					{
						if (iLocal_558 == 1 || iLocal_559 == 1)
						{
							if (!GlobalFunc_111())
							{
								HUD::CLEAR_PRINTS();
								GlobalFunc_164("GOD4", 7500, -1);
								iLocal_561 = 1;
							}
						}
					}
				}
				if (iLocal_562 == 0)
				{
					if (iLocal_491 == 1 && iLocal_492 == 1)
					{
						if (!GlobalFunc_111())
						{
							HUD::CLEAR_PRINTS();
							GlobalFunc_164("GOD5", 7500, -1);
							iLocal_562 = 1;
						}
					}
				}
				if (iLocal_562 == 0)
				{
					if (iLocal_559 == 1)
					{
						if (iLocal_494 == 0)
						{
							if (!GlobalFunc_111())
							{
								HUD::CLEAR_PRINTS();
								GlobalFunc_164("GOD5", 7500, -1);
								iLocal_562 = 1;
							}
						}
					}
				}
			}
			if (iLocal_491 == 0)
			{
				if (iLocal_556 == 0)
				{
					if (iLocal_553 == 1)
					{
						if (GlobalFunc_111())
						{
							Local_406 = { GlobalFunc_514() };
							GlobalFunc_4935();
							iLocal_556 = 1;
						}
					}
				}
				if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH42", 7, 0, 0, 0))
				{
					iLocal_491 = 1;
				}
			}
			if (iLocal_491 == 1)
			{
				if (iLocal_492 == 0)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_DESC", 7, 0, 0, 0))
							{
								iLocal_492 = 1;
							}
						}
					}
				}
				else if (iLocal_582 == 0 && iLocal_494 == 0)
				{
					if (iLocal_562 == 1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (iLocal_556 == 1)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10626(&uLocal_241, "JHS1AUD", "JHS1_OLDCREW", &Local_406, 7, 0, 0))
								{
									iLocal_556 = 0;
								}
							}
						}
					}
				}
			}
			if (iLocal_557 == 0)
			{
				if (iLocal_582 == 1 && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_4935();
					if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH52", 7, 0, 0, 0))
					{
						iLocal_557 = 1;
					}
				}
			}
			if (iLocal_494 == 0)
			{
				if (iLocal_589 == 1)
				{
					iLocal_99 = MISC::GET_GAME_TIMER();
					iLocal_494 = 1;
				}
			}
			if (iLocal_589 == 0 && iLocal_602 == 0)
			{
				if (iLocal_582 == 0)
				{
					if (iLocal_452 == 1)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_118 + 5000)
						{
							if (!GlobalFunc_111())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH54", 7, 0, 0, 0))
									{
										iLocal_118 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_447 == 0)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_TAKE_PHOTOS"))
				{
					AUDIO::STOP_AUDIO_SCENE("JSH_1_TAKE_PHOTOS");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_GET_TO_ROOF"))
				{
					AUDIO::START_AUDIO_SCENE("JSH_1_GET_TO_ROOF");
				}
			}
			else
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_GET_TO_ROOF"))
				{
					AUDIO::STOP_AUDIO_SCENE("JSH_1_GET_TO_ROOF");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_TAKE_PHOTOS"))
				{
					AUDIO::START_AUDIO_SCENE("JSH_1_TAKE_PHOTOS");
				}
			}
			if (iLocal_494 == 0)
			{
				if (iLocal_493 == 0)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_214))
					{
						uLocal_214 = GlobalFunc_5104(-591.8343f, -291.39f, 49.327f, 0);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_215))
					{
						HUD::REMOVE_BLIP(&uLocal_215);
					}
					if (iLocal_496 == 0)
					{
						if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH45", 7, 0, 0, 0))
						{
							iLocal_100 = MISC::GET_GAME_TIMER();
							iLocal_496 = 1;
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
						{
							if (iLocal_497 == 0)
							{
								if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH46", 7, 0, 0, 0))
								{
									iLocal_100 = MISC::GET_GAME_TIMER();
									iLocal_497 = 1;
								}
							}
						}
					}
					if (MISC::GET_GAME_TIMER() > iLocal_100 + 20000)
					{
						iLocal_496 = 0;
						iLocal_497 = 0;
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_214))
				{
					HUD::REMOVE_BLIP(&uLocal_214);
				}
			}
			if (iLocal_494 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_99 + 10000 || iLocal_495 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_215))
					{
						HUD::REMOVE_BLIP(&uLocal_215);
					}
					if (iLocal_495 == 0)
					{
						if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH43", 7, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
							iLocal_495 = 1;
						}
					}
					AUDIO::TRIGGER_MUSIC_EVENT("JH1_STOP_TRACK_ACTION");
					iLocal_103 = MISC::GET_GAME_TIMER();
					iLocal_77 = 4;
				}
			}
			if (iLocal_495 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_103 + 13000)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH48", 7, 0, 0, 0))
							{
								iLocal_103 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_214))
			{
				HUD::CLEAR_PRINTS();
				HUD::REMOVE_BLIP(&uLocal_214);
				GlobalFunc_164("WANTED", 7500, 1);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_215))
			{
				HUD::REMOVE_BLIP(&uLocal_215);
				GlobalFunc_164("WANTED", 7500, 1);
			}
		}
	}
	if (iLocal_77 == 4)
	{
		if (iLocal_495 == 0)
		{
			if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH43", 7, 0, 0, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				iLocal_495 = 1;
			}
		}
		if (iLocal_499 == 0)
		{
			if (iLocal_495 == 1)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
				{
					if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							HUD::CLEAR_HELP(1);
							GlobalFunc_164("GOTO_CAR5", 7500, 1);
							iLocal_499 = 1;
						}
					}
				}
			}
		}
		if (iLocal_499 == 1 && iLocal_495 == 1)
		{
			if (iLocal_562 == 1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				if (iLocal_556 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10626(&uLocal_241, "JHS1AUD", "JHS1_OLDCREW", &Local_406, 7, 0, 0))
						{
							iLocal_556 = 0;
						}
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
			{
				AUDIO::RELEASE_MISSION_AUDIO_BANK();
				if (HUD::DOES_BLIP_EXIST(uLocal_208))
				{
					HUD::REMOVE_BLIP(&uLocal_208);
					if (!PED::IS_PED_INJURED(iLocal_139))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_139);
					}
					PATHFIND::SET_ROADS_IN_AREA(-611.9f, -362.4f, 30f, -558.6f, -264.5f, 45f, 1, 1);
					PATHFIND::SET_ROADS_IN_AREA(-538.9f, -296.7f, 43.3f, -631.3f, -185.2f, 30f, 1, 1);
					RECORDING::_0x293220DA1B46CEBC(8f, 8f, 4);
					iLocal_77 = 0;
					iLocal_62 = 6;
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_208))
				{
					uLocal_208 = GlobalFunc_6783(iLocal_200, 0, 0);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_GET_TO_ROOF"))
				{
					AUDIO::STOP_AUDIO_SCENE("JSH_1_GET_TO_ROOF");
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_TAKE_PHOTOS"))
				{
					AUDIO::STOP_AUDIO_SCENE("JSH_1_TAKE_PHOTOS");
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH1_RETURN_TO_CAR"))
				{
					AUDIO::START_AUDIO_SCENE("JSH1_RETURN_TO_CAR");
				}
				if (MISC::GET_GAME_TIMER() > (iLocal_103 + 40000))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
					{
						if (!PED::IS_PED_INJURED(iLocal_139))
						{
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_139, 1) > 8f)
							{
								if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH48", 7, 0, 0, 0))
								{
									iLocal_103 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
			}
		}
	}
}







void func_444()//Position - 0x58121
{
	if (iLocal_589 == 0)
	{
		if (iLocal_581 == 0)
		{
			STREAMING::REQUEST_MODEL(joaat("prop_pool_ball_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("prop_pool_ball_01")))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_159[0]))
				{
					uLocal_159[0] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -624.539f, -243.4689f, 56.1382f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_159[0], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_159[1]))
				{
					uLocal_159[1] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -625.2047f, -242.0767f, 56.1382f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_159[1], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_159[2]))
				{
					uLocal_159[2] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -623.8929f, -241.4008f, 56.1382f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_159[2], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_159[3]))
				{
					uLocal_159[3] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -623.1953f, -242.7602f, 56.1417f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_159[3], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_159[4]))
				{
					uLocal_159[4] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -624.5664f, -243.5409f, 54.9196f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_159[4], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_159[5]))
				{
					uLocal_159[5] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -625.3116f, -242.0517f, 54.9196f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_159[5], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_159[6]))
				{
					uLocal_159[6] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -623.8905f, -241.2989f, 54.9196f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_159[6], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_159[7]))
				{
					uLocal_159[7] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -623.1135f, -242.7757f, 54.9196f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_159[7], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_168[0]))
				{
					uLocal_168[0] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -630.0252f, -228.2989f, 56.2472f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_168[0], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_168[1]))
				{
					uLocal_168[1] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -630.6877f, -227.0615f, 56.2472f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_168[1], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_168[2]))
				{
					uLocal_168[2] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -629.313f, -226.3524f, 56.2472f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_168[2], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_168[3]))
				{
					uLocal_168[3] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -628.6467f, -227.7106f, 56.2472f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_168[3], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_168[4]))
				{
					uLocal_168[4] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -630.0801f, -228.4265f, 55.0286f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_168[4], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_168[5]))
				{
					uLocal_168[5] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -630.8126f, -227.0237f, 55.0286f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_168[5], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_168[6]))
				{
					uLocal_168[6] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -629.309f, -226.3575f, 55.0286f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_168[6], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_168[7]))
				{
					uLocal_168[7] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -628.5722f, -227.7299f, 55.0286f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_168[7], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_177[0]))
				{
					uLocal_177[0] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -621.6507f, -239.7255f, 58.2032f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_177[0], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_177[1]))
				{
					uLocal_177[1] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -628.7372f, -229.9772f, 58.1763f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_177[1], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_177[2]))
				{
					uLocal_177[2] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -621.4147f, -225.7878f, 58.1529f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_177[2], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_177[3]))
				{
					uLocal_177[3] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -615.3572f, -236.0661f, 58.128f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_177[3], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_177[4]))
				{
					uLocal_177[4] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -621.658f, -239.7801f, 55.1499f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_177[4], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_177[5]))
				{
					uLocal_177[5] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -628.7207f, -229.9928f, 55.0737f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_177[5], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_177[6]))
				{
					uLocal_177[6] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -621.397f, -225.7067f, 55.0875f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_177[6], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_177[7]))
				{
					uLocal_177[7] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -615.3497f, -236.0789f, 55.1182f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_177[7], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_186[0]))
				{
					uLocal_186[0] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -625.3745f, -246.0848f, 55.6554f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_186[0], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_186[1]))
				{
					uLocal_186[1] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -607.8821f, -236.879f, 55.6684f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_186[1], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_186[2]))
				{
					uLocal_186[2] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -625.2039f, -245.7673f, 51.3461f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_186[2], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_186[3]))
				{
					uLocal_186[3] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -608.2419f, -236.9733f, 50.3458f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_186[3], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_186[4]))
				{
					uLocal_186[4] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -618.4209f, -242.1374f, 55.6521f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_186[4], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_186[5]))
				{
					uLocal_186[5] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -618.3972f, -242.1671f, 51.8769f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_186[5], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_193[0]))
				{
					uLocal_193[0] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -622.7312f, -230.0258f, 58.1717f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_193[0], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_193[1]))
				{
					uLocal_193[1] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -625.4466f, -231.603f, 58.1723f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_193[1], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_193[2]))
				{
					uLocal_193[2] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -622.1394f, -237.3194f, 58.1723f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_193[2], 1);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_193[3]))
				{
					uLocal_193[3] = OBJECT::CREATE_OBJECT(joaat("prop_pool_ball_01"), -619.3909f, -235.7099f, 58.1717f, 1, 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_193[3], 1);
				}
				iLocal_82 = 0;
				while (iLocal_82 <= 7)
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_159[iLocal_82], 0);
					ENTITY::SET_ENTITY_COLLISION(uLocal_159[iLocal_82], 0, 0);
					iLocal_82++;
				}
				iLocal_82 = 0;
				while (iLocal_82 <= 7)
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_168[iLocal_82], 0);
					ENTITY::SET_ENTITY_COLLISION(uLocal_168[iLocal_82], 0, 0);
					iLocal_82++;
				}
				iLocal_82 = 0;
				while (iLocal_82 <= 7)
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_177[iLocal_82], 0);
					ENTITY::SET_ENTITY_COLLISION(uLocal_177[iLocal_82], 0, 0);
					iLocal_82++;
				}
				iLocal_82 = 0;
				while (iLocal_82 <= 5)
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_186[iLocal_82], 0);
					ENTITY::SET_ENTITY_COLLISION(uLocal_186[iLocal_82], 0, 0);
					iLocal_82++;
				}
				iLocal_82 = 0;
				while (iLocal_82 <= 3)
				{
					ENTITY::SET_ENTITY_VISIBLE(uLocal_193[iLocal_82], 0);
					ENTITY::SET_ENTITY_COLLISION(uLocal_193[iLocal_82], 0, 0);
					iLocal_82++;
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_pool_ball_01"));
				iLocal_581 = 1;
			}
		}
	}
	Local_235 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (Local_235.f_2 > 54f && Local_235.f_1 < -225f)
	{
		iLocal_582 = 1;
	}
	else if (Local_235.f_2 > 56.5f)
	{
		iLocal_582 = 1;
	}
	else
	{
		iLocal_582 = 0;
	}
	if (((iLocal_582 == 1 && iLocal_452 == 1) && iLocal_469 == 1) && iLocal_595 == 1)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -593.1058f, -281.6116f, 53.4842f, 4f, 4f, 2f, 0, 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[0]))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_186[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[0]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[0]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[3]))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[3]))
								{
									iLocal_583 = 1;
									iLocal_584 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -600.1f, -266.1f, 54.9f, 5f, 5f, 5f, 0, 1, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.2402f, -268.1852f, 53.6992f, -597.877f, -265.8528f, 56.32395f, 2.25f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[4]))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_186[4]))
					{
						iLocal_586 = 1;
						iLocal_585 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_159[0]))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_159[0]))
					{
						iLocal_586 = 1;
						iLocal_585 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[0]))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[0]))
					{
						iLocal_586 = 1;
						iLocal_585 = 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[0]))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_186[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[0]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[0]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[3]))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[3]))
								{
									iLocal_583 = 1;
									iLocal_584 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -607.6f, -272.1f, 53.1f, 4f, 4f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -610.9f, -263.4f, 54.4f, 4f, 4f, 2f, 0, 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[0]))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_186[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[0]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[0]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[3]))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[3]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[5]))
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_186[5]))
										{
											iLocal_583 = 1;
											iLocal_584 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[0]))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_186[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[3]))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[3]))
						{
							iLocal_587 = 1;
							iLocal_585 = 1;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[1]))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_186[1]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[0]))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[0]))
						{
							iLocal_586 = 1;
							iLocal_585 = 1;
						}
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -608.3f, -251.4f, 54.3f, 3f, 3f, 3f, 0, 1, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[4]))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_186[4]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[5]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_186[5]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[0]))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[0]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[3]))
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[3]))
										{
											iLocal_593 = 1;
											iLocal_584 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -621.3f, -232.8f, 55.5f, 15f, 15f, 5f, 0, 1, 0))
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -625.6575f, -231.5654f, 57.90405f, -613.3012f, -225.3108f, 54.21784f, 17f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -627.1257f, -226.4314f, 53.90393f, -629.5482f, -227.5073f, 58.71267f, 6.5f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_159[0]))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_159[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_159[1]))
						{
							if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_159[1]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_159[2]))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_159[2]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(uLocal_159[3]))
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_159[3]))
											{
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_159[4]))
												{
													if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_159[4]))
													{
														if (ENTITY::DOES_ENTITY_EXIST(uLocal_159[5]))
														{
															if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_159[5]))
															{
																if (ENTITY::DOES_ENTITY_EXIST(uLocal_159[6]))
																{
																	if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_159[6]))
																	{
																		if (ENTITY::DOES_ENTITY_EXIST(uLocal_159[7]))
																		{
																			if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_159[7]))
																			{
																				iLocal_599 = 1;
																				iLocal_584 = 1;
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
									}
								}
							}
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -627.8745f, -229.483f, 57.6002f, -623.3488f, -244.3095f, 54.26717f, 2.25f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -624.5945f, -237.5251f, 57.90471f, -610.1787f, -230.1793f, 54.08375f, 17f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[0]))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[0]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[1]))
						{
							if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[1]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[2]))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[2]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[3]))
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[3]))
											{
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[4]))
												{
													if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[4]))
													{
														if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[5]))
														{
															if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[5]))
															{
																if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[6]))
																{
																	if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[6]))
																	{
																		if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[7]))
																		{
																			if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[7]))
																			{
																				iLocal_599 = 1;
																				iLocal_584 = 1;
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
									}
								}
							}
						}
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -627f, -217.2f, 57f, 4f, 4f, 4f, 0, 1, 0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -624.831f, -214.3452f, 55.70549f, -628.0135f, -215.891f, 58.20725f, 1.5f, 0, 1, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[1]))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[1]))
					{
						iLocal_603 = 1;
						iLocal_585 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[1]))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[1]))
					{
						iLocal_603 = 1;
						iLocal_585 = 1;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[2]))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_177[2]))
					{
						iLocal_603 = 1;
						iLocal_585 = 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[1]))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[1]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[2]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[2]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[3]))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[3]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[7]))
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_168[7]))
										{
											if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[1]))
											{
												if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[1]))
												{
													iLocal_599 = 1;
													iLocal_584 = 1;
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
		}
		if (iLocal_602 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[0]))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[0]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[1]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[1]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[2]))
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[2]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[3]))
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[3]))
										{
											iLocal_588 = 1;
											iLocal_598 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[3]))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[3]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[0]))
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[0]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[1]))
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[1]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[2]))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[2]))
										{
											iLocal_596 = 1;
											iLocal_585 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[1]))
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[1]))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[3]))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[3]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[0]))
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_193[0]))
								{
									iLocal_597 = 1;
									iLocal_585 = 1;
								}
							}
						}
					}
				}
			}
		}
		iLocal_595 = 0;
	}
	if (iLocal_469 == 1)
	{
		if (iLocal_589 == 0)
		{
			if (iLocal_598 == 1)
			{
				if (iLocal_588 == 1)
				{
					if (iLocal_591 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH60", 7, 0, 0, 0))
								{
									iLocal_591 = 1;
									iLocal_598 = 0;
									iLocal_589 = 1;
									iLocal_469 = 0;
								}
							}
							else if (iLocal_609 == 1)
							{
								if (MISC::GET_GAME_TIMER() < iLocal_120 + 7500)
								{
									HUD::CLEAR_PRINTS();
								}
							}
						}
					}
				}
			}
			if (iLocal_584 == 1 && iLocal_598 == 0)
			{
				if (iLocal_583 == 1)
				{
					if (iLocal_590 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH57", 7, 0, 0, 0))
								{
									iLocal_590 = 1;
									iLocal_584 = 0;
									iLocal_600 = 1;
									iLocal_583 = 0;
								}
							}
						}
					}
					else
					{
						iLocal_584 = 0;
						iLocal_600 = 1;
						iLocal_583 = 0;
					}
				}
				if (iLocal_599 == 1)
				{
					if (iLocal_601 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH64", 7, 0, 0, 0))
								{
									iLocal_601 = 1;
									iLocal_584 = 0;
									iLocal_600 = 1;
									iLocal_599 = 0;
								}
							}
						}
					}
					else
					{
						iLocal_584 = 0;
						iLocal_600 = 1;
						iLocal_599 = 0;
					}
				}
				if (iLocal_593 == 1)
				{
					if (iLocal_594 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH61", 7, 0, 0, 0))
								{
									iLocal_594 = 1;
									iLocal_584 = 0;
									iLocal_600 = 1;
									iLocal_593 = 0;
								}
							}
						}
					}
					else
					{
						iLocal_584 = 0;
						iLocal_600 = 1;
						iLocal_593 = 0;
					}
				}
			}
			if (iLocal_600 == 1)
			{
				if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH66", 7, 0, 0, 0))
						{
							iLocal_605 = 1;
							iLocal_469 = 0;
							iLocal_600 = 0;
						}
					}
				}
			}
			if ((iLocal_585 == 1 && iLocal_584 == 0) && iLocal_598 == 0)
			{
				if (iLocal_587 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH59", 7, 0, 0, 0))
							{
								iLocal_587 = 0;
								iLocal_585 = 0;
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_586 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH58", 7, 0, 0, 0))
							{
								iLocal_586 = 0;
								iLocal_585 = 0;
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_596 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH62", 7, 0, 0, 0))
							{
								iLocal_596 = 0;
								iLocal_585 = 0;
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_597 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH63", 7, 0, 0, 0))
							{
								iLocal_597 = 0;
								iLocal_585 = 0;
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_603 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH65", 7, 0, 0, 0))
							{
								iLocal_603 = 0;
								iLocal_585 = 0;
								iLocal_469 = 0;
							}
						}
					}
				}
			}
			if (((iLocal_585 == 0 && iLocal_584 == 0) && iLocal_598 == 0) && iLocal_452 == 1)
			{
				if (iLocal_605 == 0)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_WRONG", 7, 0, 0, 0))
							{
								iLocal_585 = 0;
								iLocal_469 = 0;
							}
						}
					}
				}
				else if (iLocal_602 == 0)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH54", 7, 0, 0, 0))
							{
								iLocal_118 = MISC::GET_GAME_TIMER();
								iLocal_585 = 0;
								iLocal_469 = 0;
							}
						}
					}
				}
				else if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_WRONG", 7, 0, 0, 0))
						{
							iLocal_585 = 0;
							iLocal_469 = 0;
						}
					}
				}
			}
		}
	}
	if (iLocal_589 == 1)
	{
		if (iLocal_495 == 0)
		{
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH43", 7, 0, 0, 0))
					{
						iLocal_103 = MISC::GET_GAME_TIMER();
						iLocal_495 = 1;
					}
				}
			}
		}
		if (iLocal_452 == 1)
		{
			if (iLocal_495 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_103 + 7000)
				{
					if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH48", 7, 0, 0, 0))
					{
						iLocal_103 = MISC::GET_GAME_TIMER();
						iLocal_495 = 1;
					}
				}
			}
		}
	}
	if (iLocal_592 == 0)
	{
		if (iLocal_589 == 1)
		{
			iLocal_82 = 0;
			while (iLocal_82 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_159[iLocal_82]))
				{
					OBJECT::DELETE_OBJECT(&(uLocal_159[iLocal_82]));
				}
				iLocal_82++;
			}
			iLocal_82 = 0;
			while (iLocal_82 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_168[iLocal_82]))
				{
					OBJECT::DELETE_OBJECT(&(uLocal_168[iLocal_82]));
				}
				iLocal_82++;
			}
			iLocal_82 = 0;
			while (iLocal_82 <= 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_177[iLocal_82]))
				{
					OBJECT::DELETE_OBJECT(&(uLocal_177[iLocal_82]));
				}
				iLocal_82++;
			}
			iLocal_82 = 0;
			while (iLocal_82 <= 5)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_186[iLocal_82]))
				{
					OBJECT::DELETE_OBJECT(&(uLocal_186[iLocal_82]));
				}
				iLocal_82++;
			}
			iLocal_82 = 0;
			while (iLocal_82 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_193[iLocal_82]))
				{
					OBJECT::DELETE_OBJECT(&(uLocal_193[iLocal_82]));
				}
				iLocal_82++;
			}
			iLocal_592 = 1;
		}
	}
}

void func_445()//Position - 0x5977F
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	
	iVar0 = 201;
	iVar1 = 202;
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		iVar0 = 24;
		iVar1 = 25;
	}
	if (iLocal_447 == 1 && iLocal_451 == 1)
	{
		if (AUDIO::HAS_SOUND_FINISHED(uLocal_109))
		{
			AUDIO::PLAY_SOUND_FRONTEND(uLocal_109, "Background_Sound", "Phone_SoundSet_Glasses_Cam", 1);
		}
	}
	else
	{
		AUDIO::STOP_SOUND(uLocal_106);
		AUDIO::STOP_SOUND(uLocal_107);
		AUDIO::STOP_SOUND(uLocal_108);
		AUDIO::STOP_SOUND(uLocal_109);
	}
	if (MISC::GET_GAME_TIMER() > iLocal_78 + 1000)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, 51) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 51))
		{
			if (iLocal_447 == 0)
			{
				if (iLocal_448 == 0)
				{
					iLocal_113 = MISC::GET_GAME_TIMER();
					iLocal_448 = 1;
				}
				iLocal_78 = MISC::GET_GAME_TIMER();
				fLocal_229 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
				iLocal_447 = 1;
			}
			else
			{
				iLocal_102 = MISC::GET_GAME_TIMER();
				iLocal_506 = 1;
				iLocal_78 = MISC::GET_GAME_TIMER();
				iLocal_447 = 0;
			}
		}
		if (iLocal_447 == 1)
		{
			if ((PAD::IS_CONTROL_JUST_PRESSED(0, iVar1) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, iVar1)) || iLocal_471 == 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
				iLocal_102 = MISC::GET_GAME_TIMER();
				iLocal_506 = 1;
				iLocal_78 = MISC::GET_GAME_TIMER();
				iLocal_447 = 0;
			}
		}
	}
	if (iLocal_447 == 1)
	{
		if (iLocal_451 == 0)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
			GlobalFunc_702(1, 1, 1);
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_226))
			{
				SYSTEM::WAIT(0);
			}
			if (fLocal_229 < 181f)
			{
				fLocal_228 = fLocal_229;
			}
			else
			{
				fLocal_228 = (fLocal_229 - 360f);
			}
			fLocal_227 = fLocal_228;
			fLocal_230 = 0f;
			iLocal_79 = MISC::GET_GAME_TIMER();
			fLocal_63 = 40f;
			fLocal_64 = 10f;
			fLocal_65 = 60f;
			fLocal_231 = 40f;
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				fLocal_231 = CAM::GET_GAMEPLAY_CAM_FOV();
				fLocal_63 = CAM::GET_GAMEPLAY_CAM_FOV();
			}
			Local_235 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (!CAM::DOES_CAM_EXIST(uLocal_224))
			{
				uLocal_224 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			CAM::SET_CAM_COORD(uLocal_224, Local_235.x, Local_235.f_1, (Local_235.f_2 + 0.6f));
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				CAM::SET_CAM_ROT(uLocal_224, CAM::GET_GAMEPLAY_CAM_ROT(2), 2);
			}
			else
			{
				CAM::SET_CAM_ROT(uLocal_224, 0f, 0f, fLocal_228, 2);
			}
			CAM::SET_CAM_FOV(uLocal_224, fLocal_231);
			CAM::SET_CAM_ACTIVE(uLocal_224, 1);
			GRAPHICS::SET_TIMECYCLE_MODIFIER("secret_camera");
			AUDIO::_OVERRIDE_MICROPHONE_SETTINGS(721014024, 1);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			uLocal_106 = AUDIO::GET_SOUND_ID();
			uLocal_107 = AUDIO::GET_SOUND_ID();
			uLocal_108 = AUDIO::GET_SOUND_ID();
			uLocal_109 = AUDIO::GET_SOUND_ID();
			GlobalFunc_7632(1);
			HUD::CLEAR_HELP(1);
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				GlobalFunc_Display_Help_Text("HELP1_KM");
			}
			else
			{
				GlobalFunc_Display_Help_Text("HELP1");
			}
			iLocal_451 = 1;
		}
		else
		{
			PAD::_0x7F4724035FDCA1DD(0);
			GlobalFunc_163();
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			GlobalFunc_187();
			if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
			if (iLocal_62 == 3)
			{
				if (iLocal_474 == 0 && iLocal_483 == 1)
				{
					if ((iLocal_567 == 0 && iLocal_566 == 0) && iLocal_568 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH23", 8, 0, 0, 0))
								{
									iLocal_474 = 1;
								}
							}
						}
					}
				}
			}
			func_451();
			if (PAD::_IS_USING_KEYBOARD(0))
			{
				if (!GlobalFunc_74("HELP1_KM"))
				{
					GlobalFunc_Display_Help_Text("HELP1_KM");
				}
			}
			else if (!GlobalFunc_74("HELP1"))
			{
				GlobalFunc_Display_Help_Text("HELP1");
			}
		}
	}
	else
	{
		if (iLocal_506 == 1)
		{
			if (MISC::GET_GAME_TIMER() < iLocal_102 + 2000)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
			}
			else
			{
				iLocal_506 = 0;
			}
		}
		if (iLocal_451 == 1)
		{
			GlobalFunc_702(0, 1, 1);
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				Var2 = { CAM::GET_CAM_ROT(uLocal_224, 2) };
				ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 0f, 0f, Var2.f_2, 2, 1);
				CAM::_SET_GAMEPLAY_CAM_RAW_YAW(0f);
				CAM::_SET_GAMEPLAY_CAM_RAW_PITCH(Var2.x);
			}
			else
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			HUD::CLEAR_HELP(1);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::SET_CAM_ACTIVE(uLocal_224, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
			AUDIO::_OVERRIDE_MICROPHONE_SETTINGS(0, 0);
			if (iLocal_483 == 0)
			{
				GlobalFunc_7632(0);
			}
			iLocal_443 = 0;
			iLocal_498 = 0;
			iLocal_451 = 0;
		}
		if (iLocal_62 == 3)
		{
			if (iLocal_483 == 1)
			{
				if ((iLocal_445 == 0 || iLocal_444 == 0) || iLocal_450 == 0)
				{
					if (!GlobalFunc_74("HELP2"))
					{
						HUD::CLEAR_HELP(1);
						GlobalFunc_Display_Help_Text("HELP2");
						iLocal_443 = 1;
					}
				}
			}
			else if (iLocal_549 == 1)
			{
				if (iLocal_604 == 0 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_159("HELP2", -1);
					iLocal_604 = 1;
				}
			}
		}
		if (iLocal_62 == 5)
		{
			if (iLocal_602 == 1 && iLocal_589 == 0)
			{
				GlobalFunc_7629();
				if (iLocal_498 == 0)
				{
					HUD::CLEAR_HELP(1);
					GlobalFunc_Display_Help_Text("HELP2");
					iLocal_498 = 1;
				}
			}
			else if (GlobalFunc_74("HELP2"))
			{
				HUD::CLEAR_HELP(1);
				iLocal_498 = 0;
			}
		}
	}
	if (iLocal_564 == 1)
	{
	}
	if (iLocal_447 == 1)
	{
		if (iLocal_452 == 0)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_79 + 500)
			{
				if (PAD::IS_CONTROL_PRESSED(2, iVar0) || PAD::IS_DISABLED_CONTROL_PRESSED(2, iVar0))
				{
					if (iLocal_565 == 1)
					{
						if (MISC::GET_GAME_TIMER() < iLocal_117 + 4000)
						{
							iLocal_117 = MISC::GET_GAME_TIMER();
							iLocal_564 = 1;
						}
						else
						{
							iLocal_117 = MISC::GET_GAME_TIMER();
							iLocal_564 = 0;
						}
					}
					if (iLocal_565 == 0)
					{
						iLocal_117 = MISC::GET_GAME_TIMER();
						iLocal_565 = 1;
					}
					if (iLocal_62 == 3)
					{
						if (iLocal_483 == 1)
						{
							GlobalFunc_4935();
						}
					}
					else
					{
						GlobalFunc_4935();
					}
					SYSTEM::SETTIMERB(0);
					GlobalFunc_1493(uLocal_226, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(2), -1082130432, -1082130432, -1082130432, -1082130432);
					GlobalFunc_2013(uLocal_226, "CLOSE_THEN_OPEN_SHUTTER");
					AUDIO::PLAY_SOUND_FRONTEND(uLocal_108, "Camera_Shoot", "Phone_SoundSet_Glasses_Cam", 1);
					iLocal_113 = MISC::GET_GAME_TIMER();
					if (iLocal_62 == 3)
					{
						if (iLocal_483 == 1)
						{
							iLocal_469 = 1;
						}
					}
					else
					{
						iLocal_469 = 1;
					}
					iLocal_85++;
					GlobalFunc_565(692, iLocal_85, 1);
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					iLocal_452 = 1;
					iLocal_595 = 1;
				}
			}
		}
		if (iLocal_452 == 1)
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_226, 255, 255, 255, 0, 0);
			if (SYSTEM::TIMERB() > 1500)
			{
				iLocal_79 = MISC::GET_GAME_TIMER();
				iLocal_452 = 0;
			}
		}
	}
	else if (iLocal_452 == 1)
	{
		if (SYSTEM::TIMERB() > 1500)
		{
			iLocal_79 = MISC::GET_GAME_TIMER();
			iLocal_452 = 0;
		}
	}
}






void func_451()//Position - 0x59FC6
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	struct<3> Var11;
	float fVar14;
	bool bVar15;
	
	GlobalFunc_255(&uVar0, &iVar1, &iVar2, &iVar3, 0, 0);
	iVar1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 39) * 127f));
	if (!PAD::_IS_USING_KEYBOARD(0))
	{
		func_452(&uVar0);
		func_452(&iVar1);
		func_452(&iVar2);
		func_452(&iVar3);
	}
	fVar4 = ((fLocal_63 - 55f) / (20f - 55f));
	iVar5 = iVar3;
	iVar6 = iVar2;
	iVar7 = iVar1;
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar5 = -iVar5;
	}
	fVar8 = (-(IntToFloat(iVar5) / 128f) * fLocal_65);
	fVar9 = (-(IntToFloat(iVar6) / 128f) * fLocal_65);
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		fVar8 = (fVar8 * 5f);
		fVar9 = (fVar9 * 5f);
	}
	if (fLocal_63 <= fLocal_64)
	{
		fVar10 = ((fLocal_63 - 20f) / (fLocal_64 - 20f));
		if (fVar10 < 0.05f)
		{
			fVar10 = 0.05f;
		}
		fVar8 = (fVar8 * fVar10);
		fVar9 = (fVar9 * fVar10);
	}
	Var11 = { CAM::GET_CAM_ROT(uLocal_224, 2) };
	if (MISC::ABSI(iVar6) > 0)
	{
		Var11 = { Var11 + Vector(fVar9, 0f, 0f) * FtoV(SYSTEM::TIMESTEP()) };
	}
	if (MISC::ABSI(iVar5) > 0)
	{
		Var11 = { Var11 + Vector(0f, 0f, fVar8) * FtoV(SYSTEM::TIMESTEP()) };
	}
	fVar14 = ((IntToFloat(iVar7) / 128f) * (50f / (1f + (fVar4 * 2f))));
	bVar15 = true;
	if (MISC::ABSI(iVar7) > 0)
	{
		fLocal_63 = (fLocal_63 + (fVar14 * SYSTEM::TIMESTEP()));
		if (fLocal_63 <= 20f)
		{
			fLocal_63 = 20f;
			bVar15 = false;
		}
		if (fLocal_63 >= 55f)
		{
			fLocal_63 = 55f;
			bVar15 = false;
		}
	}
	else
	{
		bVar15 = false;
	}
	if (Var11.x < -50f)
	{
		Var11.x = -50f;
	}
	if (Var11.x > 50f)
	{
		Var11.x = 50f;
	}
	if (bVar15)
	{
		if (AUDIO::HAS_SOUND_FINISHED(uLocal_106))
		{
			AUDIO::PLAY_SOUND_FRONTEND(uLocal_106, "Camera_Zoom", "Phone_SoundSet_Glasses_Cam", 1);
		}
	}
	else if (!AUDIO::HAS_SOUND_FINISHED(uLocal_106))
	{
		AUDIO::STOP_SOUND(uLocal_106);
	}
	if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
	{
		ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 0f, 0f, Var11.f_2, 2, 1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	CAM::SET_CAM_ROT(uLocal_224, Var11, 2);
	CAM::SET_CAM_FOV(uLocal_224, fLocal_63);
}

void func_452(int iParam0)//Position - 0x5A1D8
{
	if (*iParam0 > 0 && *iParam0 < 10)
	{
		*iParam0 = 0;
	}
	if (*iParam0 < 0 && *iParam0 > -10)
	{
		*iParam0 = 0;
	}
}








void func_460()//Position - 0x5A3FB
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 718.1f, -975.5f, 23.6f, 5f, 5f, 5f, 0, 1, 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 720.1095f, -974.8798f, 23.41416f, 716.2106f, -974.832f, 25.66417f, 1f, 0, 1, 0))
		{
			iLocal_525 = 1;
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 714.391f, -976.4401f, 22.64487f, 721.8054f, -976.4894f, 24.89858f, 1.75f, 0, 1, 0))
		{
			iLocal_525 = 0;
		}
	}
	if (iLocal_525 == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_75, 1);
		if (iLocal_75 != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		}
	}
}

void func_461()//Position - 0x5A50D
{
	func_460();
	func_436();
	if (MISC::GET_GAME_TIMER() > iLocal_81 + 5000)
	{
		if (iLocal_623 == 0)
		{
			if (GlobalFunc_5648(10))
			{
				iLocal_623 = 1;
			}
			iLocal_81 = MISC::GET_GAME_TIMER();
		}
		if (iLocal_623 == 1)
		{
			if (!GlobalFunc_5648(10))
			{
				iLocal_623 = 0;
			}
			iLocal_81 = MISC::GET_GAME_TIMER();
		}
	}
	if (((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !GlobalFunc_490()) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !iLocal_623) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && iLocal_471 == 0)
	{
		func_445();
	}
	else if (iLocal_447 == 1)
	{
		func_445();
	}
	if (iLocal_77 == 0)
	{
		if (iLocal_434 == 1)
		{
			func_394();
			iLocal_434 = 0;
		}
		GlobalFunc_Checkpoint7(2, "STAGE_FIND_ROOF_ENTRANCE", 0, 0, 0, 1);
		iLocal_504 = 0;
		iLocal_464 = 0;
		iLocal_455 = 0;
		iLocal_487 = 0;
		iLocal_524 = 0;
		iLocal_488 = 0;
		iLocal_489 = 0;
		iLocal_456 = 0;
		iLocal_486 = 0;
		iLocal_579 = 0;
		iLocal_612 = 0;
		iLocal_617 = 0;
		iLocal_618 = 0;
		iLocal_623 = 0;
		iLocal_431 = 1;
		iLocal_101 = 0;
		iLocal_122 = 0;
		iLocal_123 = 0;
		iLocal_81 = MISC::GET_GAME_TIMER();
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_5108(iLocal_200, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		iLocal_77 = 1;
	}
	if (iLocal_77 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
				{
					if (iLocal_612 == 0)
					{
						if (iLocal_486 == 1 && MISC::GET_GAME_TIMER() < iLocal_122 + 7500)
						{
							HUD::CLEAR_PRINTS();
							iLocal_612 = 1;
						}
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_DRIVE_TO_BACK_ENTRANCE"))
					{
						AUDIO::START_AUDIO_SCENE("JSH_1_DRIVE_TO_BACK_ENTRANCE");
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_618 == 1)
						{
							if (MISC::GET_GAME_TIMER() < iLocal_123 + 7500)
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_618 = 0;
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_208))
						{
							HUD::REMOVE_BLIP(&uLocal_208);
						}
						if (iLocal_504 == 0)
						{
							iLocal_101 = MISC::GET_GAME_TIMER();
							iLocal_504 = 1;
						}
						if (iLocal_464 == 0)
						{
							if (!GlobalFunc_111())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH13", 7, 0, 0, 0))
									{
										RECORDING::_0x293220DA1B46CEBC(3f, 5f, 3);
										iLocal_464 = 1;
									}
								}
							}
						}
						if (iLocal_617 == 0)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -623f, -254f, 38f, 1) > 145f)
							{
								if (!GlobalFunc_111())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH71", 7, 0, 0, 0))
										{
											iLocal_617 = 1;
										}
									}
								}
							}
						}
						if (iLocal_455 == 0)
						{
							if (iLocal_464 == 1)
							{
								if (!GlobalFunc_111())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										GlobalFunc_164("GOD1", 7500, 1);
										iLocal_455 = 1;
									}
								}
							}
						}
						if (iLocal_487 == 0 && iLocal_488 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_101 + 30000)
							{
								iLocal_487 = 1;
								iLocal_524 = 1;
								GlobalFunc_4935();
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -578.007f, -264.253f, 33.39869f, -599.8809f, -225.3589f, 39.7831f, 34.5f, 0, 1, 0))
							{
								iLocal_487 = 1;
								GlobalFunc_4935();
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -606.7789f, -324.4514f, 32.63417f, -549.8925f, -292.7037f, 38.18604f, 36.5f, 0, 1, 0))
							{
								iLocal_488 = 1;
								GlobalFunc_4935();
							}
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_210))
						{
							if (iLocal_487 == 1)
							{
								uLocal_210 = GlobalFunc_5104(-576.8f, -275.6f, 34.11925f, 1);
							}
							if (iLocal_488 == 1)
							{
								uLocal_210 = GlobalFunc_5104(-583f, -300.1f, 33.9756f, 1);
							}
						}
						else if (iLocal_489 == 0)
						{
							if (iLocal_524 == 1)
							{
								GlobalFunc_4935();
								if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH50", 7, 0, 0, 0))
								{
									iLocal_489 = 1;
								}
							}
							else
							{
								GlobalFunc_4935();
								if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH41", 7, 0, 0, 0))
								{
									iLocal_489 = 1;
								}
							}
						}
						if (iLocal_487 == 1)
						{
							if (iLocal_456 == 0)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -579.7f, -280.4f, 35.3f, 1) < 40f)
								{
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
									{
										CAM::SET_GAMEPLAY_COORD_HINT(-580.5f, -280.4f, 36f, 2000, 6000, 2000, 0);
									}
									iLocal_456 = 1;
								}
							}
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -576.8f, -275.6f, 34.11925f, 4f, 4f, 2f, 1, 1, 2))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_210))
								{
									HUD::REMOVE_BLIP(&uLocal_210);
								}
								iLocal_77 = 2;
							}
						}
						if (iLocal_488 == 1)
						{
							if (iLocal_456 == 0)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -583.2f, -292.5f, 35.1f, 1) < 30f)
								{
									if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
									{
										CAM::SET_GAMEPLAY_COORD_HINT(-583.6f, -291.6f, 36f, 2000, 3000, 2000, 0);
									}
									iLocal_456 = 1;
								}
							}
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -583f, -300.1f, 33.9756f, 3f, 3f, 2f, 1, 1, 2))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_210))
								{
									HUD::REMOVE_BLIP(&uLocal_210);
								}
								iLocal_77 = 2;
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_208))
						{
							HUD::REMOVE_BLIP(&uLocal_208);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_210))
						{
							HUD::REMOVE_BLIP(&uLocal_210);
						}
						if (iLocal_618 == 0)
						{
							HUD::CLEAR_PRINTS();
							GlobalFunc_164("WANTED", 7500, 1);
							iLocal_123 = MISC::GET_GAME_TIMER();
							iLocal_618 = 1;
						}
					}
				}
				else
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_INSIDE_STORE"))
					{
						AUDIO::STOP_AUDIO_SCENE("JSH_1_INSIDE_STORE");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_LEAVE_STORE"))
					{
						AUDIO::START_AUDIO_SCENE("JSH_1_LEAVE_STORE");
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_210))
					{
						HUD::REMOVE_BLIP(&uLocal_210);
					}
					if (!HUD::DOES_BLIP_EXIST(uLocal_208))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
						{
							uLocal_208 = GlobalFunc_6783(iLocal_200, 0, 0);
						}
					}
					if (iLocal_486 == 0)
					{
						HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
						GlobalFunc_164("GOTO_CAR2", 7500, 1);
						iLocal_122 = MISC::GET_GAME_TIMER();
						iLocal_486 = 1;
					}
				}
			}
		}
	}
	if (iLocal_77 == 2)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_200, 8f, 2, 0);
		iLocal_77 = 0;
		iLocal_62 = 5;
	}
}

void func_462()//Position - 0x5AB27
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	func_460();
	func_475();
	func_436();
	if (iLocal_483 == 0)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_81 + 5000)
		{
			if (iLocal_623 == 0)
			{
				if (GlobalFunc_5648(10))
				{
					iLocal_623 = 1;
				}
				iLocal_81 = MISC::GET_GAME_TIMER();
			}
			if (iLocal_623 == 1)
			{
				if (!GlobalFunc_5648(10))
				{
					iLocal_623 = 0;
				}
				iLocal_81 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if (iLocal_77 > 0)
	{
		if (((((((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !GlobalFunc_490()) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) && !iLocal_623) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) && iLocal_471 == 0)
		{
			func_445();
		}
		else if (iLocal_447 == 1)
		{
			func_445();
		}
	}
	if (iLocal_483 == 1)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -631.1307f, -237.3734f, 36.55695f, -617.1204f, -227.0041f, 39.91531f, 17.75f, 0, 1, 0))
	{
		iLocal_483 = 1;
	}
	else
	{
		iLocal_483 = 0;
	}
	if (iLocal_77 < 2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_206))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_69.x, Local_69.f_1, 34.97223f, 2.5f, 2.5f, 2f, 1, 1, 0))
				{
				}
			}
			if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -631.1307f, -237.3734f, 36.55695f, -617.1204f, -227.0041f, 39.91531f, 17.75f, 0, 1, 0) && !HUD::DOES_BLIP_EXIST(uLocal_208)) && !HUD::DOES_BLIP_EXIST(uLocal_206))
			{
				iLocal_483 = 1;
				iLocal_460 = 0;
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_ENTER_STORE"))
				{
					AUDIO::STOP_AUDIO_SCENE("JSH_1_ENTER_STORE");
				}
				if (iLocal_447 == 0)
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_TAKE_PHOTOS"))
					{
						AUDIO::STOP_AUDIO_SCENE("JSH_1_TAKE_PHOTOS");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_INSIDE_STORE"))
					{
						AUDIO::START_AUDIO_SCENE("JSH_1_INSIDE_STORE");
					}
				}
				else
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_INSIDE_STORE"))
					{
						AUDIO::STOP_AUDIO_SCENE("JSH_1_INSIDE_STORE");
					}
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_TAKE_PHOTOS"))
					{
						AUDIO::START_AUDIO_SCENE("JSH_1_TAKE_PHOTOS");
					}
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_209))
				{
					HUD::REMOVE_BLIP(&uLocal_209);
				}
				if ((iLocal_445 && iLocal_444) && iLocal_450)
				{
					if (iLocal_446 == 0)
					{
						if (iLocal_458 == 1)
						{
							if (!PED::IS_PED_INJURED(iLocal_141))
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_211))
								{
									RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
									uLocal_211 = GlobalFunc_6783(iLocal_141, 0, 0);
								}
							}
						}
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_211))
					{
						HUD::REMOVE_BLIP(&uLocal_211);
					}
				}
			}
			else
			{
				iLocal_483 = 0;
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_INSIDE_STORE"))
				{
					AUDIO::STOP_AUDIO_SCENE("JSH_1_INSIDE_STORE");
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_200, -665.8845f, -259.6015f, 34.24466f, -652.5845f, -283.0429f, 38.00538f, 11f, 0, 1, 0))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_211))
								{
									if (iLocal_473 == 1 && MISC::GET_GAME_TIMER() < iLocal_132 + 7500)
									{
										HUD::CLEAR_PRINTS();
									}
									HUD::REMOVE_BLIP(&uLocal_211);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_206))
								{
									HUD::REMOVE_BLIP(&uLocal_206);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_208))
								{
									HUD::REMOVE_BLIP(&uLocal_208);
								}
								if (!HUD::DOES_BLIP_EXIST(uLocal_209))
								{
									HUD::CLEAR_HELP(1);
									uLocal_209 = GlobalFunc_5104(-631.4476f, -237.4267f, 37.0589f, 0);
								}
								if (iLocal_443 == 1)
								{
									if (iLocal_460 == 0)
									{
										GlobalFunc_4935();
										if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH10", 7, 0, 0, 0))
										{
											SYSTEM::SETTIMERB(0);
											iLocal_460 = 1;
										}
									}
								}
								if (SYSTEM::TIMERB() > 15000)
								{
									iLocal_460 = 0;
								}
							}
							else
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_211))
								{
									HUD::REMOVE_BLIP(&uLocal_211);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_206))
								{
									HUD::REMOVE_BLIP(&uLocal_206);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_209))
								{
									HUD::REMOVE_BLIP(&uLocal_209);
								}
								if (!HUD::DOES_BLIP_EXIST(uLocal_208))
								{
									uLocal_208 = GlobalFunc_6783(iLocal_200, 0, 0);
									if (iLocal_486 == 0)
									{
										GlobalFunc_164("GOTO_CAR3", 7500, 1);
										iLocal_122 = MISC::GET_GAME_TIMER();
										iLocal_486 = 1;
									}
								}
							}
						}
						else
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_211))
							{
								HUD::REMOVE_BLIP(&uLocal_211);
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_208))
							{
								HUD::REMOVE_BLIP(&uLocal_208);
								if (iLocal_486 == 1)
								{
									if (MISC::GET_GAME_TIMER() < iLocal_122 + 7500)
									{
										HUD::CLEAR_PRINTS();
									}
								}
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_200, -665.8845f, -259.6015f, 34.24466f, -652.5845f, -283.0429f, 38.00538f, 11f, 0, 1, 0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_200, -661.5837f, -267.4788f, 34.39808f, -657.2595f, -274.9337f, 37.45715f, 6.25f, 0, 1, 0))
								{
									if (HUD::DOES_BLIP_EXIST(uLocal_206))
									{
										HUD::REMOVE_BLIP(&uLocal_206);
									}
									if (!HUD::DOES_BLIP_EXIST(uLocal_209))
									{
										uLocal_209 = GlobalFunc_5104(-631.4476f, -237.4267f, 37.0589f, 0);
									}
								}
							}
							else
							{
								if (!HUD::DOES_BLIP_EXIST(uLocal_206))
								{
									uLocal_206 = GlobalFunc_5104(Local_69, 1);
								}
								if (HUD::DOES_BLIP_EXIST(uLocal_209))
								{
									HUD::REMOVE_BLIP(&uLocal_209);
								}
								if (iLocal_619 == 0)
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH72", 7, 0, 0, 0))
										{
											iLocal_127 = MISC::GET_GAME_TIMER();
											iLocal_619 = 1;
										}
									}
								}
								else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (MISC::GET_GAME_TIMER() > iLocal_127 + 7000)
									{
										if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH72", 7, 0, 0, 0))
										{
											iLocal_127 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -631.1307f, -237.3734f, 36.55695f, -617.1204f, -227.0041f, 39.91531f, 17.75f, 0, 1, 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_211))
			{
				HUD::REMOVE_BLIP(&uLocal_211);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_209))
			{
				HUD::REMOVE_BLIP(&uLocal_209);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_206))
			{
				HUD::REMOVE_BLIP(&uLocal_206);
			}
			if (iLocal_620 == 0)
			{
				HUD::CLEAR_PRINTS();
				GlobalFunc_164("WANTED", 7500, 1);
				iLocal_620 = 1;
			}
		}
	}
	if (iLocal_483 == 1)
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
		if (iLocal_511 == 0)
		{
			GlobalFunc_7632(1);
			iLocal_511 = 1;
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -641.0297f, -233.2014f, 35.84606f, -630.5993f, -247.3898f, 39.15196f, 12f, 0, 1, 0))
		{
			GlobalFunc_7629();
			PAD::DISABLE_CONTROL_ACTION(0, 44, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 263, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 264, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 36, 1);
			if (GlobalFunc_1535(PLAYER::PLAYER_PED_ID()) != joaat("weapon_unarmed"))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
			{
				if (!PED::IS_PED_INJURED(iLocal_140))
				{
					if (GlobalFunc_156(iLocal_140, PLAYER::PLAYER_PED_ID(), 1) < 4f)
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
					else if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 49.2682f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 191.6326f)
					{
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
				}
			}
		}
		if (iLocal_511 == 1)
		{
			GlobalFunc_7632(0);
			iLocal_511 = 0;
		}
	}
	if (iLocal_77 == 0)
	{
		GlobalFunc_Checkpoint7(1, "STAGE_SCOUT_OUT_STORE", 0, 0, 0, 1);
		if (iLocal_434 == 1)
		{
			func_394();
			iLocal_434 = 0;
		}
		iLocal_443 = 0;
		iLocal_444 = 0;
		iLocal_445 = 0;
		iLocal_446 = 0;
		iLocal_447 = 0;
		iLocal_450 = 0;
		iLocal_451 = 0;
		iLocal_452 = 0;
		iLocal_454 = 0;
		iLocal_455 = 0;
		iLocal_456 = 0;
		iLocal_457 = 0;
		iLocal_458 = 0;
		iLocal_459 = 0;
		iLocal_460 = 0;
		iLocal_461 = 0;
		iLocal_462 = 0;
		iLocal_463 = 0;
		iLocal_465 = 0;
		iLocal_466 = 0;
		iLocal_467 = 0;
		iLocal_468 = 0;
		iLocal_479 = 0;
		iLocal_477 = 0;
		iLocal_478 = 0;
		iLocal_480 = 0;
		iLocal_481 = 0;
		iLocal_482 = 0;
		iLocal_469 = 0;
		iLocal_472 = 0;
		iLocal_473 = 0;
		iLocal_475 = 0;
		iLocal_476 = 0;
		iLocal_431 = 1;
		iLocal_484 = 0;
		iLocal_485 = 0;
		iLocal_486 = 0;
		iLocal_487 = 0;
		iLocal_488 = 0;
		iLocal_489 = 0;
		iLocal_500[1] = 0;
		iLocal_504 = 0;
		iLocal_505 = 0;
		iLocal_506 = 0;
		iLocal_507 = 0;
		iLocal_511 = 0;
		iLocal_512 = 0;
		iLocal_520 = 0;
		iLocal_521 = 0;
		iLocal_522 = 0;
		iLocal_524 = 0;
		iLocal_464 = 0;
		iLocal_448 = 0;
		iLocal_449 = 0;
		iLocal_544 = 0;
		iLocal_545 = 0;
		iLocal_549 = 0;
		iLocal_474 = 0;
		iLocal_550 = 0;
		iLocal_551 = 0;
		iLocal_552 = 0;
		iLocal_555 = 0;
		iLocal_564 = 0;
		iLocal_565 = 0;
		iLocal_566 = 0;
		iLocal_567 = 0;
		iLocal_568 = 0;
		iLocal_569 = 0;
		iLocal_570 = 0;
		iLocal_571 = 0;
		iLocal_572 = 0;
		iLocal_573 = 0;
		iLocal_579 = 0;
		iLocal_604 = 0;
		iLocal_610 = 0;
		iLocal_619 = 0;
		iLocal_620 = 0;
		iLocal_623 = 0;
		iLocal_624 = 0;
		iLocal_540 = 0;
		iLocal_541 = 0;
		iLocal_539 = 0;
		iLocal_526[0] = 0;
		iLocal_526[1] = 0;
		iLocal_534[0] = 0;
		iLocal_534[1] = 0;
		iLocal_534[2] = 0;
		iLocal_534[3] = 0;
		iLocal_529[1] = 0;
		iLocal_529[2] = 0;
		iLocal_529[3] = 0;
		iLocal_82 = 0;
		while (iLocal_82 <= 5)
		{
			iLocal_513[iLocal_82] = 0;
			iLocal_82++;
		}
		iLocal_105 = MISC::GET_GAME_TIMER();
		iLocal_78 = MISC::GET_GAME_TIMER();
		iLocal_80 = MISC::GET_GAME_TIMER();
		iLocal_81 = MISC::GET_GAME_TIMER();
		iLocal_119 = 0;
		iLocal_127 = 0;
		iLocal_128 = 0;
		STREAMING::REQUEST_MODEL(joaat("prop_bowling_ball"));
		TASK::REQUEST_WAYPOINT_RECORDING("BB_JEW_1");
		TASK::REQUEST_WAYPOINT_RECORDING("BB_JEW_2");
		AUDIO::REQUEST_MISSION_AUDIO_BANK("JWL_HEIST_SETUP", 0);
		uLocal_226 = unk_0x67D02A194A2FC2BD("camera_gallery");
		GlobalFunc_4500();
		func_246(PLAYER::PLAYER_PED_ID(), 14, 62, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		if (!PED::IS_PED_INJURED(iLocal_139))
		{
			GlobalFunc_173(&uLocal_241, 1, iLocal_139, "LESTER", 0, 1);
		}
		if (!PED::IS_PED_INJURED(iLocal_140))
		{
			GlobalFunc_173(&uLocal_241, 4, iLocal_140, "JewelGuard", 0, 1);
		}
		GlobalFunc_173(&uLocal_241, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		MISC::CLEAR_AREA(-625.6f, -233.1f, 38f, 20f, 1, 0, 0, 0);
		PED::SET_PED_NON_CREATION_AREA(-627.5f, -237.6f, 35.9f, -619.6f, -223.3f, 38.8f);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		uLocal_217[0] = PED::ADD_SCENARIO_BLOCKING_AREA(-614f, -215.6f, 39.8f, -636.7f, -242.3f, 35.8f, 0, 1, 1, 1);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_5108(iLocal_200, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_DRIVE_TO_STORE"))
		{
			AUDIO::STOP_AUDIO_SCENE("JSH_1_DRIVE_TO_STORE");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_ENTER_STORE"))
		{
			AUDIO::START_AUDIO_SCENE("JSH_1_ENTER_STORE");
		}
		iLocal_77 = 1;
	}
	if (iLocal_77 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -631.3f, -239f, 37.4f, 1) < 100f)
		{
			if (iLocal_551 == 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
				{
					if (!PED::IS_PED_INJURED(iLocal_141))
					{
						CUTSCENE::REQUEST_CUTSCENE("JH_1_IG_3", 8);
						iLocal_551 = 1;
					}
				}
			}
			else if (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Jewellery_Assitance", iLocal_141, joaat("cs_jewelass"));
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -631.3f, -239f, 37.4f, 1) > 120f)
		{
			if (iLocal_551 == 1)
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_551 = 0;
			}
		}
		if (iLocal_549 == 0)
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					GlobalFunc_164("GOTO_STORE", 4000, 1);
					iLocal_549 = 1;
				}
			}
		}
		if (iLocal_454 == 0)
		{
			func_473();
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -631.1307f, -237.3734f, 36.55695f, -617.1204f, -227.0041f, 39.91531f, 17.75f, 0, 1, 0))
		{
			if (iLocal_500[1] == 0)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("JH1_STORE");
				iLocal_500[1] = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_208) && !HUD::DOES_BLIP_EXIST(uLocal_206))
		{
			func_470();
			if (iLocal_446 == 0)
			{
				if (iLocal_447 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -625.7836f, -230.2366f, 37.05704f, -624.5594f, -231.9776f, 39.05704f, 2.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -624.2483f, -231.4887f, 36.55704f, -623.5024f, -232.2872f, 38.80704f, 1f, 0, 1, 0))
					{
						GlobalFunc_4935();
						if (!GlobalFunc_111())
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_211))
							{
								HUD::REMOVE_BLIP(&uLocal_211);
							}
							iLocal_552 = 1;
						}
					}
				}
			}
			if (((iLocal_552 == 1 && iLocal_446 == 0) && iLocal_577 == 0) && iLocal_578 == 0)
			{
				func_463();
			}
			if (iLocal_447 == 0)
			{
				if ((((iLocal_444 == 1 && iLocal_445 == 1) && iLocal_450 == 1) && iLocal_446 == 1) && iLocal_459 == 1)
				{
					iLocal_82 = 0;
					while (iLocal_82 <= 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_146[iLocal_82]))
						{
							OBJECT::DELETE_OBJECT(&(uLocal_146[iLocal_82]));
						}
						iLocal_82++;
					}
					iLocal_82 = 0;
					while (iLocal_82 <= 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_151[iLocal_82]))
						{
							OBJECT::DELETE_OBJECT(&(uLocal_151[iLocal_82]));
						}
						iLocal_82++;
					}
					iLocal_82 = 0;
					while (iLocal_82 <= 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[iLocal_82]))
						{
							OBJECT::DELETE_OBJECT(&(uLocal_156[iLocal_82]));
						}
						iLocal_82++;
					}
					if (iLocal_628 == 1)
					{
						GRAPHICS::DESTROY_TRACKED_POINT(uLocal_86[0]);
						GRAPHICS::DESTROY_TRACKED_POINT(uLocal_86[1]);
						GRAPHICS::DESTROY_TRACKED_POINT(uLocal_94[1]);
						GRAPHICS::DESTROY_TRACKED_POINT(uLocal_94[2]);
						GRAPHICS::DESTROY_TRACKED_POINT(uLocal_94[3]);
						GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[0]);
						GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[1]);
						GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[2]);
						GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[3]);
						iLocal_628 = 0;
					}
					iLocal_77 = 2;
				}
			}
		}
	}
	if (iLocal_77 == 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_209))
		{
			HUD::REMOVE_BLIP(&uLocal_209);
		}
		if (iLocal_476 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_140))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -630.4255f, -236.7872f, 37.057f, 2f, 2f, 2f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 170f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 50f)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							GlobalFunc_173(&uLocal_241, 4, iLocal_140, "JewelGuard", 0, 1);
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH29", 7, 0, 0, 0))
							{
								iLocal_476 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_459 == 1)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_208))
				{
					uLocal_208 = GlobalFunc_6783(iLocal_200, 0, 0);
				}
				if (!GlobalFunc_111() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_164("GOTO_CAR4", 7500, 1);
						uLocal_217[2] = PED::ADD_SCENARIO_BLOCKING_AREA(-603.5f, -271.1f, 44.2f, -566.5f, -298.7f, 31.4f, 0, 1, 1, 1);
						PATHFIND::SET_ROADS_IN_AREA(-611.9f, -362.4f, 30f, -558.6f, -264.5f, 45f, 0, 1);
						PATHFIND::SET_ROADS_IN_AREA(-538.9f, -296.7f, 43.3f, -631.3f, -185.2f, 30f, 0, 1);
						iLocal_128 = MISC::GET_GAME_TIMER();
						iLocal_77 = 3;
					}
				}
			}
		}
	}
	if (iLocal_77 == 3)
	{
		if (iLocal_476 == 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_140))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -630.4255f, -236.7872f, 37.057f, 2f, 2f, 2f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < 170f && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > 50f)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							GlobalFunc_173(&uLocal_241, 4, iLocal_140, "JewelGuard", 0, 1);
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH29", 7, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(3f, 7f, 3);
								iLocal_476 = 1;
							}
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
		{
			if (!PED::IS_PED_INJURED(iLocal_139))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_128 + 20000 && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_139, 1) > 15f)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH48", 7, 0, 0, 0))
							{
								iLocal_128 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_128 + 30000)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH48", 7, 0, 0, 0))
							{
								iLocal_128 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -631.1307f, -237.3734f, 36.55695f, -617.1204f, -227.0041f, 39.91531f, 17.75f, 0, 1, 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_INSIDE_STORE"))
			{
				AUDIO::STOP_AUDIO_SCENE("JSH_1_INSIDE_STORE");
			}
			if (iLocal_463 == 0)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_TOCAR", 7, 0, 0, 0))
					{
						RECORDING::_0x293220DA1B46CEBC(2f, 6f, 3);
						iLocal_463 = 1;
					}
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]))
				{
					if (!PED::IS_PED_INJURED(iLocal_142[0]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_142[0]));
						STREAMING::REMOVE_ANIM_DICT("amb@world_human_window_shop@male@idle_a");
					}
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_LEAVE_STORE"))
				{
					AUDIO::STOP_AUDIO_SCENE("JSH_1_LEAVE_STORE");
				}
				iLocal_62 = 4;
				iLocal_77 = 0;
			}
		}
	}
}

void func_463()//Position - 0x5BD07
{
	iLocal_453 = 1;
	iLocal_76 = 0;
	while (iLocal_453 == 1)
	{
		if (GlobalFunc_74("HELP2"))
		{
			HUD::CLEAR_HELP(1);
		}
		switch (iLocal_76)
		{
			case 0:
				while (!CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					SYSTEM::WAIT(0);
				}
				STREAMING::REQUEST_ANIM_DICT("MISSHEIST_JEWEL_SETUP");
				if (!PED::IS_PED_INJURED(iLocal_141))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_141, "Jewellery_Assitance", 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				GlobalFunc_8380(1, 1, 1, 0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				CUTSCENE::START_CUTSCENE(0);
				iLocal_76++;
				break;
			
			case 1:
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					if ((iLocal_571 && iLocal_570) && iLocal_569)
					{
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1000, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					RECORDING::_0x81CBAE94390F9F89();
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Jewellery_Assitance", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_141))
					{
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_141, 1);
						ENTITY::SET_ENTITY_COORDS(iLocal_141, -623.0729f, -230.0248f, 37.057f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_141, 130.6013f);
						TASK::TASK_PLAY_ANIM(iLocal_141, "MISSHEIST_JEWEL_SETUP", "idle_storeclerk", 1000f, -8f, -1, 1, 0, 0, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_141, 1);
					}
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 48000)
					{
						PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
					}
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					GlobalFunc_8380(0, 1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					iLocal_104 = MISC::GET_GAME_TIMER();
					iLocal_446 = 1;
					iLocal_453 = 0;
				}
				else
				{
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
				}
				break;
		}
		SYSTEM::WAIT(0);
	}
}







void func_470()//Position - 0x5C0A4
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (iLocal_549 == 1)
		{
			if (iLocal_457 == 0)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !HUD::DOES_BLIP_EXIST(uLocal_206))
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -659.6f, -269.1f, 37f, 1) > 27f)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH1", 7, 0, 0, 0))
							{
								iLocal_457 = 1;
							}
						}
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(uLocal_206))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_139))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0) && PED::IS_PED_IN_VEHICLE(iLocal_139, iLocal_200, 0))
							{
								if (!VEHICLE::IS_VEHICLE_STOPPED(iLocal_200))
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										if (MISC::GET_GAME_TIMER() > iLocal_105 + 5000)
										{
											if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_AROUND", 7, 0, 0, 0))
											{
												iLocal_105 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									if (MISC::GET_GAME_TIMER() > iLocal_105 + 5000)
									{
										if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_NOGO", 7, 0, 0, 0))
										{
											iLocal_105 = MISC::GET_GAME_TIMER();
										}
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_483 == 0)
		{
			if (iLocal_452 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_80 + 5000)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH67", 7, 0, 0, 0))
							{
								iLocal_80 = MISC::GET_GAME_TIMER();
								iLocal_469 = 0;
							}
						}
					}
				}
			}
		}
	}
	if (iLocal_555 == 0)
	{
		if (iLocal_483 == 1)
		{
			func_471();
		}
		if (((((iLocal_445 == 1 && iLocal_444 == 1) && iLocal_450 == 1) && iLocal_570 == 1) && iLocal_569 == 1) && iLocal_571 == 1)
		{
			iLocal_115 = MISC::GET_GAME_TIMER();
			iLocal_555 = 1;
		}
	}
	else if (MISC::GET_GAME_TIMER() < iLocal_115 + 3000)
	{
		func_471();
	}
	if (iLocal_483 == 1)
	{
		if (iLocal_448 == 0)
		{
			if (iLocal_449 == 0)
			{
				iLocal_104 = MISC::GET_GAME_TIMER();
				iLocal_449 = 1;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_104 + 15000)
			{
				if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_ACTIV", 3, 0, 0, 0))
						{
							iLocal_449 = 0;
						}
					}
				}
			}
		}
		if (iLocal_472 == 0)
		{
			if (!HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				GlobalFunc_164("GOD2", 7500, 1);
				iLocal_472 = 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_140))
		{
			if (iLocal_505 == 0)
			{
				GlobalFunc_173(&uLocal_241, 4, iLocal_140, "JewelGuard", 0, 1);
				if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH47", 7, 0, 0, 0))
				{
					iLocal_505 = 1;
				}
			}
		}
		if (iLocal_505 == 1)
		{
			if (iLocal_569 == 0 && iLocal_450 == 0)
			{
				if (!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (iLocal_550 == 0)
					{
						if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH3", 7, 0, 0, 0))
						{
							iLocal_550 = 1;
						}
					}
				}
			}
		}
		if (iLocal_485 == 0)
		{
			if (((iLocal_570 == 1 && iLocal_569 == 1) && iLocal_571 == 1) && !GlobalFunc_111())
			{
				iLocal_84 = MISC::GET_GAME_TIMER();
				iLocal_485 = 1;
			}
		}
		if (iLocal_485 == 1)
		{
			if (iLocal_458 == 0)
			{
				if (((((((iLocal_446 == 0 && iLocal_445 == 1) && iLocal_444 == 1) && iLocal_450 == 1) && iLocal_570 == 1) && iLocal_569 == 1) && iLocal_571 == 1) && !GlobalFunc_111())
				{
					if (MISC::GET_GAME_TIMER() > iLocal_84 + 1500)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH8", 7, 0, 0, 0))
								{
									iLocal_114 = MISC::GET_GAME_TIMER();
									iLocal_458 = 1;
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_458 == 1)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_114 + 20000)
			{
				if (iLocal_446 == 0)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_TALK", 7, 0, 0, 0))
							{
								iLocal_114 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}
		if (iLocal_473 == 0)
		{
			if (iLocal_458 == 1)
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && !GlobalFunc_111()) && iLocal_446 == 0)
				{
					GlobalFunc_164("GOD3", 7500, 1);
					iLocal_132 = MISC::GET_GAME_TIMER();
					iLocal_473 = 1;
				}
				if (!HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					GlobalFunc_164("GOD3", 7500, 1);
					iLocal_132 = MISC::GET_GAME_TIMER();
					iLocal_473 = 1;
				}
			}
		}
		if (iLocal_459 == 0)
		{
			if ((iLocal_569 == 1 && iLocal_571 == 1) && iLocal_570 == 1)
			{
				if (((iLocal_446 == 1 && iLocal_445 == 1) && iLocal_444 == 1) && iLocal_450 == 1)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH9", 7, 0, 0, 0))
							{
								iLocal_459 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_461 == 0 && iLocal_462 == 0)
		{
			if (((iLocal_446 == 1 && iLocal_445 == 0) && iLocal_444 == 0) && iLocal_450 == 0)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JSH1_CHATUP", 7, 0, 0, 0))
						{
							iLocal_461 = 1;
						}
					}
				}
			}
			if (iLocal_446 == 1)
			{
				if ((iLocal_445 == 0 || iLocal_444 == 0) || iLocal_450 == 0)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_CHATUP2", 7, 0, 0, 0))
							{
								iLocal_462 = 1;
							}
						}
					}
				}
			}
		}
		if (iLocal_448 == 1)
		{
			if ((iLocal_445 == 0 && iLocal_444 == 0) && iLocal_450 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_113 + 30000)
				{
					if (!GlobalFunc_111())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_AVC", 7, 0, 0, 0))
							{
								iLocal_113 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_113 + 30000)
			{
				if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if ((iLocal_445 == 0 && iLocal_444 == 0) && iLocal_450 == 1)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH40", 7, 0, 0, 0))
							{
								iLocal_113 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_113 + 30000)
			{
				if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if ((iLocal_445 == 0 && iLocal_444 == 1) && iLocal_450 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH38", 7, 0, 0, 0))
							{
								iLocal_113 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_113 + 30000)
			{
				if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if ((iLocal_445 == 1 && iLocal_444 == 0) && iLocal_450 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH39", 7, 0, 0, 0))
							{
								iLocal_113 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_113 + 30000)
			{
				if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if ((iLocal_445 == 1 && iLocal_444 == 1) && iLocal_450 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH37", 7, 0, 0, 0))
							{
								iLocal_113 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_113 + 30000)
			{
				if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if ((iLocal_445 == 0 && iLocal_444 == 1) && iLocal_450 == 1)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH36", 7, 0, 0, 0))
							{
								iLocal_113 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			if (MISC::GET_GAME_TIMER() > iLocal_113 + 30000)
			{
				if (!GlobalFunc_111())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
					{
						if ((iLocal_445 == 1 && iLocal_444 == 0) && iLocal_450 == 1)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH35", 7, 0, 0, 0))
							{
								iLocal_113 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
		}
	}
}

void func_471()//Position - 0x5C91A
{
	if (iLocal_62 == 3)
	{
		if (iLocal_447 == 1)
		{
			if (iLocal_452 == 1 && iLocal_595 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_146[0]) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_89[0]))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(uLocal_146[0]) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[0], -0.2f, 0f, 0f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[0], 0.2f, 0f, 0f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[0], 0f, -0.1f, 0.3f), 0.1f))
					{
						iLocal_83 = MISC::GET_GAME_TIMER();
						iLocal_534[0] = 1;
						iLocal_444 = 1;
					}
					else
					{
						iLocal_534[0] = 0;
					}
				}
				else
				{
					iLocal_534[0] = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_146[1]) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_89[1]))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(uLocal_146[1]) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[1], -0.2f, 0f, 0f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[1], 0.2f, 0f, 0f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[1], 0f, -0.1f, 0.4f), 0.1f))
					{
						iLocal_83 = MISC::GET_GAME_TIMER();
						iLocal_534[1] = 1;
						iLocal_444 = 1;
					}
					else
					{
						iLocal_534[1] = 0;
					}
				}
				else
				{
					iLocal_534[1] = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_146[2]) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_89[2]))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(uLocal_146[2]) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[2], -0.2f, 0f, 0f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[2], 0.2f, 0f, 0f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[2], 0f, -0.1f, 0.4f), 0.1f))
					{
						iLocal_83 = MISC::GET_GAME_TIMER();
						iLocal_534[2] = 1;
						iLocal_444 = 1;
					}
					else
					{
						iLocal_534[2] = 0;
					}
				}
				else
				{
					iLocal_534[2] = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_146[3]) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_89[3]))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(uLocal_146[3]) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[3], -0.2f, 0f, 0f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[3], 0.2f, 0f, 0f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_146[3], 0f, -0.1f, 0.4f), 0.1f))
					{
						iLocal_83 = MISC::GET_GAME_TIMER();
						iLocal_534[3] = 1;
						iLocal_444 = 1;
					}
					else
					{
						iLocal_534[3] = 0;
					}
				}
				else
				{
					iLocal_534[3] = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_151[1]) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_94[1]))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(uLocal_151[1]) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_151[1], 0.3f, 0.2f, -0.1f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_151[1], 0.1f, -0.2f, -0.3f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_151[1], -0.4f, 0.1f, 0.1f), 0.1f))
					{
						iLocal_83 = MISC::GET_GAME_TIMER();
						iLocal_529[1] = 1;
						iLocal_445 = 1;
					}
					else
					{
						iLocal_529[1] = 0;
					}
				}
				else
				{
					iLocal_529[1] = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_151[2]) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_94[2]))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(uLocal_151[2]) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_151[2], -0.3f, 0f, 0.2f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_151[2], 0f, -0.3f, -0.3f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_151[2], 0f, 0.3f, -0.3f), 0.1f))
					{
						iLocal_83 = MISC::GET_GAME_TIMER();
						iLocal_529[2] = 1;
						iLocal_445 = 1;
					}
					else
					{
						iLocal_529[2] = 0;
					}
				}
				else
				{
					iLocal_529[2] = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_151[3]) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_94[3]))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(uLocal_151[3]) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_151[3], -0.3f, 0.1f, -0.3f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_151[3], 0.3f, -0.1f, -0.3f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_151[3], -0.1f, -0.2f, 0.3f), 0.1f))
					{
						iLocal_83 = MISC::GET_GAME_TIMER();
						iLocal_529[3] = 1;
						iLocal_445 = 1;
					}
					else
					{
						iLocal_529[3] = 0;
					}
				}
				else
				{
					iLocal_529[3] = 0;
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[0]) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_86[0]))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(uLocal_156[0]) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_156[0], 0.1f, 0.1f, 0.1f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_156[0], -0.1f, -0.1f, 0.1f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_156[0], 0f, 0f, -0.1f), 0.1f))
					{
						iLocal_83 = MISC::GET_GAME_TIMER();
						iLocal_526[0] = 1;
						iLocal_450 = 1;
					}
					else
					{
						iLocal_526[0] = 0;
					}
				}
				else
				{
					iLocal_526[0] = 0;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -625.017f, -231.4506f, 36.30704f, -616.5168f, -236.9699f, 39.80704f, 20f, 0, 1, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_156[1]) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(uLocal_86[1]))
					{
						if (((ENTITY::IS_ENTITY_ON_SCREEN(uLocal_156[1]) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_156[1], 0.1f, 0.1f, 0.1f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_156[1], -0.1f, -0.1f, 0.1f), 0.1f)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_156[1], 0f, 0f, -0.1f), 0.1f))
						{
							iLocal_83 = MISC::GET_GAME_TIMER();
							iLocal_526[1] = 1;
							iLocal_450 = 1;
						}
						else
						{
							iLocal_526[1] = 0;
						}
					}
					else
					{
						iLocal_526[1] = 0;
					}
				}
				iLocal_595 = 0;
			}
			if (iLocal_526[0] == 1 || iLocal_526[1] == 1)
			{
				iLocal_539 = 1;
			}
			else
			{
				iLocal_539 = 0;
			}
			if (((iLocal_534[0] == 1 || iLocal_534[1] == 1) || iLocal_534[2] == 1) || iLocal_534[3] == 1)
			{
				iLocal_540 = 1;
			}
			else
			{
				iLocal_540 = 0;
			}
			if ((iLocal_529[1] == 1 || iLocal_529[2] == 1) || iLocal_529[3] == 1)
			{
				iLocal_541 = 1;
			}
			else
			{
				iLocal_541 = 0;
			}
		}
		if (iLocal_469 == 1 && MISC::GET_GAME_TIMER() > iLocal_83 + 500)
		{
			if (!GlobalFunc_111())
			{
				if (iLocal_569 == 0)
				{
					if ((iLocal_566 == 1 && iLocal_567 == 1) && iLocal_568 == 1)
					{
						if (iLocal_465 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH16", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_570 = 1;
								iLocal_571 = 1;
								iLocal_465 = 1;
								iLocal_469 = 0;
							}
						}
					}
					if ((iLocal_566 == 1 && iLocal_567 == 1) && iLocal_568 == 0)
					{
						if (iLocal_478 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH21", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_570 = 1;
								iLocal_478 = 1;
								iLocal_469 = 0;
							}
						}
					}
					if ((iLocal_566 == 1 && iLocal_567 == 0) && iLocal_568 == 1)
					{
						if (iLocal_477 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH20", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_571 = 1;
								iLocal_477 = 1;
								iLocal_469 = 0;
							}
						}
					}
					if ((iLocal_566 == 1 && iLocal_567 == 0) && iLocal_568 == 0)
					{
						if (iLocal_482 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH26", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_469 = 0;
								iLocal_482 = 1;
							}
						}
					}
				}
				if (iLocal_570 == 0)
				{
					if ((iLocal_566 == 1 && iLocal_567 == 1) && iLocal_568 == 1)
					{
						if (iLocal_465 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH16", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_570 = 1;
								iLocal_571 = 1;
								iLocal_465 = 1;
								iLocal_469 = 0;
							}
						}
					}
					if ((iLocal_566 == 1 && iLocal_567 == 1) && iLocal_568 == 0)
					{
						if (iLocal_478 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH21", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_570 = 1;
								iLocal_478 = 1;
								iLocal_469 = 0;
							}
						}
					}
					if ((iLocal_566 == 0 && iLocal_567 == 1) && iLocal_568 == 1)
					{
						if (iLocal_479 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH22", 7, 0, 0, 0))
							{
								iLocal_571 = 1;
								iLocal_570 = 1;
								iLocal_479 = 1;
								iLocal_469 = 0;
							}
						}
					}
					if ((iLocal_566 == 0 && iLocal_567 == 1) && iLocal_568 == 0)
					{
						if (iLocal_481 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH25", 7, 0, 0, 0))
							{
								iLocal_570 = 1;
								iLocal_481 = 1;
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_571 == 0)
				{
					if ((iLocal_566 == 1 && iLocal_567 == 1) && iLocal_568 == 1)
					{
						if (iLocal_465 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH16", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_570 = 1;
								iLocal_571 = 1;
								iLocal_465 = 1;
								iLocal_469 = 0;
							}
						}
					}
					if ((iLocal_566 == 1 && iLocal_567 == 0) && iLocal_568 == 1)
					{
						if (iLocal_477 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH20", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_571 = 1;
								iLocal_477 = 1;
								iLocal_469 = 0;
							}
						}
					}
					if ((iLocal_566 == 0 && iLocal_567 == 1) && iLocal_568 == 1)
					{
						if (iLocal_479 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH22", 7, 0, 0, 0))
							{
								iLocal_571 = 1;
								iLocal_570 = 1;
								iLocal_479 = 1;
								iLocal_469 = 0;
							}
						}
					}
					if ((iLocal_566 == 0 && iLocal_567 == 0) && iLocal_568 == 1)
					{
						if (iLocal_480 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH24", 7, 0, 0, 0))
							{
								iLocal_571 = 1;
								iLocal_480 = 1;
								iLocal_469 = 0;
							}
						}
					}
				}
			}
			if ((iLocal_539 == 1 && iLocal_541 == 0) && iLocal_540 == 0)
			{
				iLocal_566 = 1;
				if (iLocal_444 == 0 && iLocal_445 == 0)
				{
					if (iLocal_482 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH26", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_469 = 0;
								iLocal_482 = 1;
							}
						}
					}
					else if (iLocal_569 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH40", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_444 == 0 && iLocal_445 == 1)
				{
					if (iLocal_477 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH20", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_571 = 1;
								iLocal_477 = 1;
								iLocal_469 = 0;
							}
						}
					}
					else if (iLocal_569 == 1 && iLocal_570 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH35", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_444 == 1 && iLocal_445 == 0)
				{
					if (iLocal_478 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH21", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_570 = 1;
								iLocal_478 = 1;
								iLocal_469 = 0;
							}
						}
					}
					else if (iLocal_569 == 1 && iLocal_570 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH36", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_444 == 1 && iLocal_445 == 1)
				{
					if (iLocal_571 == 1 && iLocal_570 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH7", 7, 0, 0, 0))
							{
								iLocal_569 = 1;
								iLocal_469 = 0;
							}
						}
					}
				}
			}
			if ((iLocal_539 == 0 && iLocal_541 == 1) && iLocal_540 == 0)
			{
				iLocal_568 = 1;
				if (iLocal_444 == 0 && iLocal_450 == 0)
				{
					if (iLocal_480 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH24", 7, 0, 0, 0))
							{
								iLocal_571 = 1;
								iLocal_480 = 1;
								iLocal_469 = 0;
							}
						}
					}
					else if (iLocal_571 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH39", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_444 == 0 && iLocal_450 == 1)
				{
					if (iLocal_477 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH20", 7, 0, 0, 0))
							{
								iLocal_571 = 1;
								iLocal_569 = 1;
								iLocal_477 = 1;
								iLocal_469 = 0;
							}
						}
					}
					else if (iLocal_571 == 1 && iLocal_569 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH35", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_444 == 1 && iLocal_450 == 0)
				{
					if (iLocal_479 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH22", 7, 0, 0, 0))
							{
								iLocal_571 = 1;
								iLocal_570 = 1;
								iLocal_479 = 1;
								iLocal_469 = 0;
							}
						}
					}
					else if (iLocal_571 == 1 && iLocal_570 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH37", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_444 == 1 && iLocal_450 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (iLocal_573 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH5", 7, 0, 0, 0))
							{
								iLocal_571 = 1;
								iLocal_469 = 0;
								iLocal_573 = 1;
							}
						}
					}
				}
			}
			if ((iLocal_539 == 0 && iLocal_541 == 0) && iLocal_540 == 1)
			{
				iLocal_567 = 1;
				if (iLocal_445 == 0 && iLocal_450 == 0)
				{
					if (iLocal_481 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH25", 7, 0, 0, 0))
							{
								iLocal_570 = 1;
								iLocal_481 = 1;
								iLocal_469 = 0;
							}
						}
					}
					else if (iLocal_570 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH38", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_445 == 1 && iLocal_450 == 0)
				{
					if (iLocal_479 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH22", 7, 0, 0, 0))
							{
								iLocal_570 = 1;
								iLocal_571 = 1;
								iLocal_479 = 1;
								iLocal_469 = 0;
							}
						}
					}
					else if (iLocal_571 == 1 && iLocal_570 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH37", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_445 == 0 && iLocal_450 == 1)
				{
					if (iLocal_478 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH21", 7, 0, 0, 0))
							{
								iLocal_570 = 1;
								iLocal_569 = 1;
								iLocal_478 = 1;
								iLocal_469 = 0;
							}
						}
					}
					else if (iLocal_569 == 1 && iLocal_570 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH36", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
				if (iLocal_445 == 1 && iLocal_450 == 1)
				{
					if (!GlobalFunc_111())
					{
						if (iLocal_572 == 0)
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH6", 7, 0, 0, 0))
							{
								iLocal_570 = 1;
								iLocal_469 = 0;
								iLocal_572 = 1;
							}
						}
					}
				}
			}
			if ((iLocal_539 == 1 && iLocal_541 == 1) && iLocal_540 == 0)
			{
				iLocal_566 = 1;
				iLocal_568 = 1;
				if ((iLocal_445 == 1 && iLocal_450 == 1) && iLocal_444 == 1)
				{
					if (iLocal_466 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH17", 7, 0, 0, 0))
							{
								iLocal_571 = 1;
								iLocal_569 = 1;
								iLocal_466 = 1;
								iLocal_469 = 0;
							}
						}
					}
				}
				if ((iLocal_445 == 1 && iLocal_450 == 1) && iLocal_444 == 0)
				{
					if (iLocal_477 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH20", 7, 0, 0, 0))
							{
								iLocal_571 = 1;
								iLocal_569 = 1;
								iLocal_477 = 1;
								iLocal_469 = 0;
							}
						}
					}
					else if (iLocal_569 == 1 && iLocal_571 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH35", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
			}
			if ((iLocal_539 == 1 && iLocal_541 == 0) && iLocal_540 == 1)
			{
				iLocal_566 = 1;
				iLocal_567 = 1;
				if ((iLocal_450 == 1 && iLocal_444 == 1) && iLocal_445 == 1)
				{
					if (iLocal_467 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH18", 7, 0, 0, 0))
							{
								iLocal_570 = 1;
								iLocal_569 = 1;
								iLocal_467 = 1;
								iLocal_469 = 0;
							}
						}
					}
				}
				if ((iLocal_450 == 1 && iLocal_444 == 1) && iLocal_445 == 0)
				{
					if (iLocal_478 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH21", 7, 0, 0, 0))
							{
								iLocal_570 = 1;
								iLocal_569 = 1;
								iLocal_478 = 1;
								iLocal_469 = 0;
							}
						}
					}
					else if (iLocal_569 == 1 && iLocal_570 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH36", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
			}
			if ((iLocal_539 == 0 && iLocal_541 == 1) && iLocal_540 == 1)
			{
				iLocal_567 = 1;
				iLocal_568 = 1;
				if ((iLocal_445 == 1 && iLocal_444 == 1) && iLocal_450 == 1)
				{
					if (iLocal_468 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH19", 7, 0, 0, 0))
							{
								iLocal_571 = 1;
								iLocal_570 = 1;
								iLocal_468 = 1;
								iLocal_469 = 0;
							}
						}
					}
				}
				if ((iLocal_445 == 1 && iLocal_444 == 1) && iLocal_450 == 0)
				{
					if (iLocal_479 == 0)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH22", 7, 0, 0, 0))
							{
								iLocal_571 = 1;
								iLocal_570 = 1;
								iLocal_479 = 1;
								iLocal_469 = 0;
							}
						}
					}
					else if (iLocal_571 == 1 && iLocal_570 == 1)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH37", 7, 0, 0, 0))
							{
								iLocal_469 = 0;
							}
						}
					}
				}
			}
			if ((iLocal_539 == 1 && iLocal_541 == 1) && iLocal_540 == 1)
			{
				iLocal_567 = 1;
				iLocal_568 = 1;
				iLocal_566 = 1;
				if (iLocal_624 == 0)
				{
					GlobalFunc_553(694);
					iLocal_624 = 1;
				}
				if (iLocal_465 == 0)
				{
					if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH16", 7, 0, 0, 0))
					{
						iLocal_569 = 1;
						iLocal_570 = 1;
						iLocal_571 = 1;
						iLocal_465 = 1;
						iLocal_469 = 0;
					}
				}
			}
			if ((iLocal_539 == 0 && iLocal_541 == 0) && iLocal_540 == 0)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_PH49", 7, 0, 0, 0))
					{
						iLocal_469 = 0;
					}
				}
			}
		}
	}
}


void func_473()//Position - 0x5DD3B
{
	if (STREAMING::HAS_MODEL_LOADED(joaat("prop_bowling_ball")))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_146[0]))
		{
			uLocal_146[0] = OBJECT::CREATE_OBJECT(joaat("prop_bowling_ball"), -627.5507f, -229.4447f, 40.1249f, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(uLocal_146[0], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_146[0], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_146[0], 1);
			uLocal_89[0] = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_89[0], -627.6f, -229.7f, 40.3f, 0.1f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_146[1]))
		{
			uLocal_146[1] = OBJECT::CREATE_OBJECT(joaat("prop_bowling_ball"), -627.4518f, -240.0007f, 40.1306f, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(uLocal_146[1], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_146[1], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_146[1], 1);
			uLocal_89[1] = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_89[1], -627.4f, -239.7f, 40.3f, 0.1f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_146[2]))
		{
			uLocal_146[2] = OBJECT::CREATE_OBJECT(joaat("prop_bowling_ball"), -622.47f, -236.34f, 40.1371f, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(uLocal_146[2], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_146[2], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_146[2], 1);
			uLocal_89[2] = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_89[2], -622.4f, -236.1f, 40.3f, 0.1f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_146[3]))
		{
			uLocal_146[3] = OBJECT::CREATE_OBJECT(joaat("prop_bowling_ball"), -620.2918f, -224.1618f, 40.1266f, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(uLocal_146[3], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_146[3], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_146[3], 1);
			uLocal_89[3] = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_89[3], -620.3f, -224.4f, 40.3f, 0.1f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_151[1]))
		{
			uLocal_151[1] = OBJECT::CREATE_OBJECT(joaat("prop_bowling_ball"), -625.0201f, -237.8714f, 40.8512f, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(uLocal_151[1], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_151[1], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_151[1], 1);
			uLocal_94[1] = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_94[1], -625.1f, -237.8f, 40.8f, 0.1f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_151[2]))
		{
			uLocal_151[2] = OBJECT::CREATE_OBJECT(joaat("prop_bowling_ball"), -616.779f, -233.1593f, 40.9528f, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(uLocal_151[2], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_151[2], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_151[2], 1);
			uLocal_94[2] = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_94[2], -616.9f, -233.2f, 41f, 0.1f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_151[3]))
		{
			uLocal_151[3] = OBJECT::CREATE_OBJECT(joaat("prop_bowling_ball"), -622.7f, -224.99f, 40.9571f, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(uLocal_151[3], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_151[3], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_151[3], 1);
			uLocal_94[3] = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_94[3], -622.8f, -225.1f, 41.1f, 0.1f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_156[0]))
		{
			uLocal_156[0] = OBJECT::CREATE_OBJECT(joaat("prop_bowling_ball"), -629.4f, -230.44f, 38.4071f, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(uLocal_156[0], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_156[0], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_156[0], 1);
			uLocal_86[0] = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_86[0], -629.4f, -230.5f, 38.6f, 0.1f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_156[1]))
		{
			uLocal_156[1] = OBJECT::CREATE_OBJECT(joaat("prop_bowling_ball"), -620.1974f, -223.7788f, 38.4137f, 1, 1, 0);
			ENTITY::SET_ENTITY_COLLISION(uLocal_156[1], 0, 0);
			ENTITY::SET_ENTITY_VISIBLE(uLocal_156[1], 0);
			ENTITY::FREEZE_ENTITY_POSITION(uLocal_156[1], 1);
			uLocal_86[1] = GRAPHICS::CREATE_TRACKED_POINT();
			GRAPHICS::SET_TRACKED_POINT_INFO(uLocal_86[1], -620.2f, -223.8f, 38.6f, 0.1f);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_bowling_ball"));
		iLocal_454 = 1;
		iLocal_628 = 1;
	}
}


void func_475()//Position - 0x5E175
{
	if (iLocal_512 == 0)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -631.3f, -237.4f, 39f, 1) < 20f)
		{
			STREAMING::REQUEST_MODEL(joaat("a_m_m_bevhills_01"));
			TASK::REQUEST_WAYPOINT_RECORDING("BB_JEW_6");
			STREAMING::REQUEST_ANIM_DICT("amb@world_human_window_shop@male@idle_a");
			iLocal_512 = 1;
		}
	}
	if (iLocal_521 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_142[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_142[0], "amb@world_human_window_shop@male@idle_a", "browse_a", 3))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_142[0], 1);
					iLocal_521 = 1;
				}
			}
		}
	}
	if (iLocal_512 == 1)
	{
		if (iLocal_483 == 1)
		{
			if (iLocal_513[0] == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]))
				{
					if ((STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_01")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("BB_JEW_6")) && STREAMING::HAS_ANIM_DICT_LOADED("amb@world_human_window_shop@male@idle_a"))
					{
						iLocal_142[0] = PED::CREATE_PED(26, joaat("a_m_m_bevhills_01"), -628.4003f, -244.6562f, 37.2985f, 34.4691f, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_01"));
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_142[0], 1);
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_142[0], "BB_JEW_6", 0, 0, -1);
						iLocal_513[0] = 1;
					}
				}
			}
		}
	}
	if (iLocal_513[1] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_142[0]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_142[0]))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_142[0]) > 11)
					{
						TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_142[0], 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
						TASK::TASK_ACHIEVE_HEADING(0, 214.3621f, 0);
						TASK::TASK_PLAY_ANIM(0, "amb@world_human_window_shop@male@idle_a", "browse_a", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "amb@world_human_window_shop@male@idle_a", "browse_b", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "amb@world_human_window_shop@male@idle_a", "browse_c", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_142[0], uLocal_205);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
						TASK::TASK_LOOK_AT_COORD(iLocal_142[0], -625.7f, -238.8f, 37.8f, -1, 1024, 3);
						iLocal_513[1] = 1;
					}
				}
			}
		}
	}
	if (iLocal_513[2] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_142[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_142[0], "amb@world_human_window_shop@male@idle_a", "browse_c", 3))
				{
					iLocal_520 = 1;
				}
				if (iLocal_520 == 1)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_142[0], "amb@world_human_window_shop@male@idle_a", "browse_c", 3))
					{
						if (iLocal_521 == 1)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_142[0], 0);
							iLocal_521 = 0;
						}
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_142[0], "BB_JEW_6", 12, 0, -1);
						iLocal_520 = 0;
						iLocal_513[2] = 1;
					}
				}
			}
		}
	}
	if (iLocal_513[3] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_142[0]))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_142[0]))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_142[0]) > 18)
					{
						TASK::WAYPOINT_PLAYBACK_PAUSE(iLocal_142[0], 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_205);
						TASK::TASK_ACHIEVE_HEADING(0, 302.2427f, 0);
						TASK::TASK_PLAY_ANIM(0, "amb@world_human_window_shop@male@idle_a", "browse_a", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "amb@world_human_window_shop@male@idle_a", "browse_b", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "amb@world_human_window_shop@male@idle_a", "browse_c", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_205);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_142[0], uLocal_205);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_205);
						TASK::TASK_LOOK_AT_COORD(iLocal_142[0], -617.6f, -229.3f, 38f, -1, 1024, 3);
						iLocal_513[3] = 1;
					}
				}
			}
		}
	}
	if (iLocal_513[4] == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_142[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_142[0], "amb@world_human_window_shop@male@idle_a", "browse_c", 3))
				{
					iLocal_520 = 1;
				}
				if (iLocal_520 == 1)
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_142[0], "amb@world_human_window_shop@male@idle_a", "browse_c", 3))
					{
						if (iLocal_521 == 1)
						{
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_142[0], 0);
							iLocal_521 = 0;
						}
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_142[0], "BB_JEW_6", 19, 0, -1);
						iLocal_513[4] = 1;
					}
				}
			}
		}
	}
	if (iLocal_513[5] == 0)
	{
		if (iLocal_513[4] == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_142[0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_142[0]))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_142[0]))
					{
						iLocal_522 = 1;
					}
					if (iLocal_522 == 1)
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_142[0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_142[0]);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_142[0]));
							STREAMING::REMOVE_ANIM_DICT("amb@world_human_window_shop@male@idle_a");
							TASK::REMOVE_WAYPOINT_RECORDING("BB_JEW_6");
							iLocal_513[5] = 1;
						}
					}
				}
			}
		}
	}
}

void func_476()//Position - 0x5E62A
{
	func_460();
	func_436();
	if (iLocal_77 == 0)
	{
		if (iLocal_434 == 1)
		{
			func_394();
			iLocal_434 = 0;
		}
		iLocal_428 = 0;
		iLocal_424 = 0;
		iLocal_427 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_429 = 0;
		iLocal_436 = 0;
		iLocal_437 = 0;
		iLocal_442 = 0;
		iLocal_431 = 1;
		iLocal_470 = 0;
		iLocal_500[0] = 0;
		iLocal_507 = 0;
		iLocal_525 = 0;
		iLocal_543 = 0;
		iLocal_610 = 0;
		iLocal_626 = 0;
		iLocal_627 = 0;
		CUTSCENE::REMOVE_CUTSCENE();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-650.4f, -286.5f, 34.1f, -670.4f, -251.7f, 37.5f, 0, 1);
		MISC::CLEAR_AREA(-662.3f, -265.4466f, 34.9446f, 15f, 1, 0, 0, 0);
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!GlobalFunc_188())
			{
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
			}
			GlobalFunc_5108(iLocal_200, -1, 1);
		}
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_208))
				{
					uLocal_208 = GlobalFunc_6783(iLocal_200, 0, 0);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_139))
		{
			GlobalFunc_173(&uLocal_241, 1, iLocal_139, "LESTER", 0, 1);
		}
		GlobalFunc_173(&uLocal_241, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
		iLocal_77 = 1;
	}
	if (iLocal_77 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_200, "MISSHEIST_JEWEL_SETUP", "lester_get_in_car_cardoor", 3))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_126))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_126) == 1f)
						{
							ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_200, -8f, 1);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_200, 1, 1);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
				{
					if (!PED::IS_PED_INJURED(iLocal_139))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_139, "MISSHEIST_JEWEL_SETUP", "LESTER_GET_IN_CAR", 3))
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_126))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_126) == 1f)
								{
									ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_139, -8f, 1);
									if (!PED::IS_PED_IN_VEHICLE(iLocal_139, iLocal_200, 0))
									{
										PED::SET_PED_INTO_VEHICLE(iLocal_139, iLocal_200, 0);
									}
								}
							}
						}
					}
				}
			}
		}
		if (iLocal_442 == 1)
		{
			func_294("FAIL_SHOP4");
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
			{
				iLocal_432 = 1;
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("JSH_1_DRIVE_TO_STORE"))
				{
					AUDIO::START_AUDIO_SCENE("JSH_1_DRIVE_TO_STORE");
				}
				if (iLocal_500[0] == 0)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JH1_START");
					iLocal_500[0] = 1;
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_208))
				{
					HUD::REMOVE_BLIP(&uLocal_208);
				}
				if (iLocal_432 == 1)
				{
					if (iLocal_429 == 1)
					{
						if (iLocal_436 == 0)
						{
							HUD::CLEAR_PRINTS();
							iLocal_436 = 1;
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_139))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_139, iLocal_200, 0))
					{
						if (PED::IS_PED_GROUP_MEMBER(iLocal_139, GlobalFunc_468()))
						{
							PED::REMOVE_PED_FROM_GROUP(iLocal_139);
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_206))
							{
								uLocal_206 = GlobalFunc_5104(Local_69, 1);
							}
						}
						else if (HUD::DOES_BLIP_EXIST(uLocal_206))
						{
							HUD::CLEAR_PRINTS();
							HUD::REMOVE_BLIP(&uLocal_206);
							GlobalFunc_164("WANTED", 7500, 1);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_207))
						{
							HUD::REMOVE_BLIP(&uLocal_207);
						}
						if (iLocal_424 == 0)
						{
							HUD::CLEAR_PRINTS();
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_STP1", 7, 0, 0, 0);
								SYSTEM::WAIT(0);
								SYSTEM::SETTIMERA(0);
								iLocal_424 = 1;
							}
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_424 == 1)
							{
								if (SYSTEM::TIMERA() > 500)
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
									{
										if (iLocal_427 == 0)
										{
											RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
											GlobalFunc_164("ENTER_STORE", 7500, 1);
											iLocal_427 = 1;
										}
									}
								}
							}
						}
						if (iLocal_427 == 1)
						{
							if (iLocal_424 == 1)
							{
								if (iLocal_425 == 0)
								{
									if (SYSTEM::TIMERA() > 7000)
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_STP12c", 7, 0, 0, 0);
											SYSTEM::WAIT(0);
											iLocal_425 = 1;
										}
									}
								}
								else if (iLocal_426 == 0 && iLocal_626 == 0)
								{
									if (!GlobalFunc_111())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_GLASS", 7, 0, 0, 0);
											iLocal_426 = 1;
										}
									}
								}
							}
						}
						if (iLocal_425 == 1)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (GlobalFunc_620())
								{
									GlobalFunc_619(0);
								}
							}
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (!PED::IS_PED_JUMPING_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_69.x, Local_69.f_1, 34.97223f, 7f, 7f, 4f, 0, 1, 0))
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -661.28f, -267.1382f, 34.39376f, -656.8629f, -274.7836f, 37.70079f, 5.75f, 0, 1, 0))
									{
										if (HUD::DOES_BLIP_EXIST(uLocal_206))
										{
											HUD::REMOVE_BLIP(&uLocal_206);
										}
										GlobalFunc_4935();
										GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_THERE", 7, 0, 0, 0);
										RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
										iLocal_77 = 2;
									}
								}
							}
							if (HUD::DOES_BLIP_EXIST(uLocal_206))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_69.x, Local_69.f_1, 34.97223f, 2.5f, 2.5f, 2f, 1, 1, 0))
								{
								}
							}
						}
					}
					else if (iLocal_427 == 1)
					{
						if (!PED::IS_PED_GROUP_MEMBER(iLocal_139, GlobalFunc_468()))
						{
							PED::SET_PED_AS_GROUP_MEMBER(iLocal_139, GlobalFunc_468());
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_207))
						{
							uLocal_207 = GlobalFunc_6797(iLocal_139, 0, 145);
							HUD::CLEAR_PRINTS();
							GlobalFunc_164("WAIT_PED", 7500, 1);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_206))
						{
							HUD::REMOVE_BLIP(&uLocal_206);
						}
						if (iLocal_425 == 1)
						{
							if (!GlobalFunc_620())
							{
								GlobalFunc_619(1);
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_206))
				{
					HUD::REMOVE_BLIP(&uLocal_206);
				}
				if ((iLocal_425 == 1 && iLocal_577 == 0) && iLocal_578 == 0)
				{
					if (!GlobalFunc_620())
					{
						GlobalFunc_619(1);
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_208))
					{
						uLocal_208 = GlobalFunc_6783(iLocal_200, 0, 0);
						if (iLocal_432 == 1)
						{
							if (iLocal_429 == 0)
							{
								HUD::CLEAR_PRINTS();
								HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
								GlobalFunc_164("GOTO_CAR2", 7500, 1);
								iLocal_429 = 1;
							}
						}
						else if (iLocal_428 == 0)
						{
							HUD::CLEAR_PRINTS();
							GlobalFunc_527("GOTO_CAR", 7500, 1);
							iLocal_428 = 1;
						}
						SYSTEM::SETTIMERB(0);
					}
				}
			}
		}
	}
	if (iLocal_77 == 2)
	{
		if (GlobalFunc_4499(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10.5f, 1, 0.2f, 0, 1))
		{
			TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0);
			RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
			iLocal_77 = 0;
			iLocal_76 = 0;
			iLocal_62 = 3;
		}
	}
}




void func_480()//Position - 0x5ECFC
{
	if (iLocal_77 == 0)
	{
		iLocal_438 = 0;
		iLocal_441 = 0;
		iLocal_616 = 0;
		iLocal_625 = 0;
		STREAMING::REQUEST_ANIM_DICT("MISSHEIST_JEWEL_SETUP");
		iLocal_76 = 0;
		iLocal_77 = 1;
	}
	if (iLocal_77 == 1)
	{
		switch (iLocal_76)
		{
			case 0:
				if (GlobalFunc_Has_Cutscene_Loaded())
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200))
					{
						while (!GlobalFunc_10543(&iLocal_200, 0, Local_66, 268.499f, 1, 0))
						{
							SYSTEM::WAIT(0);
						}
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
						VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_200);
						VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_200, 0);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_200, 1);
						GlobalFunc_504(iLocal_200, -1);
						GlobalFunc_503(iLocal_200, -1);
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
						iLocal_139 = Global_86864.f_9[0];
						PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_139, 0);
						PED::SET_PED_CAN_BE_TARGETTED(iLocal_139, 0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_139, 1862763509);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_139, 1);
						PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_139, 0);
						PED::SET_PED_CONFIG_FLAG(iLocal_139, 182, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
					{
						if (!PED::IS_PED_INJURED(iLocal_139))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_139, "Lester", 0, 0, 0);
						}
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_139))
					{
						GlobalFunc_7049(12);
						while (!GlobalFunc_7048(12))
						{
							SYSTEM::WAIT(0);
						}
						GlobalFunc_7047(&iLocal_139, 12, 718.617f, -964.8593f, 29.3956f, 120.4053f, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_4946(12));
						PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_139, 4, 1, 0, 0);
						PED::SET_PED_PROP_INDEX(iLocal_139, 1, 0, 0, false);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_139, "Lester", 0, 0, 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_139, 1);
						PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_139, 0);
						PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_139, 0);
						PED::SET_PED_CONFIG_FLAG(iLocal_139, 182, 1);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 1, 1);
						iLocal_145 = Global_86864.f_28[0];
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_200, "Michaels_car", 0, 0, 0);
						}
					}
					GlobalFunc_562(86);
					if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					GlobalFunc_8380(1, 1, 1, 0);
					GlobalFunc_173(&uLocal_241, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
					GlobalFunc_173(&uLocal_241, 1, iLocal_139, "LESTER", 0, 1);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					SYSTEM::SETTIMERA(0);
					iLocal_76++;
				}
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (iLocal_625 == 0)
					{
						if (!CAM::IS_SCREEN_FADED_IN())
						{
							CAM::DO_SCREEN_FADE_IN(250);
							iLocal_625 = 1;
						}
						if (CAM::IS_SCREEN_FADED_IN())
						{
							iLocal_625 = 1;
						}
					}
					if (CUTSCENE::GET_CUTSCENE_TIME() > 75000)
					{
						PAD::DISABLE_CONTROL_ACTION(2, 18, 1);
					}
					else if (CUTSCENE::GET_CUTSCENE_TIME() > 1000)
					{
						if (GlobalFunc_75())
						{
							iLocal_438 = 1;
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_145))
				{
					OBJECT::DELETE_OBJECT(&iLocal_145);
				}
				if (CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if (iLocal_441 == 0)
					{
						MISC::CLEAR_AREA(717f, -978f, 24f, 100f, 1, 1, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_201))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_201, 0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iLocal_201) != joaat("tailgater"))
								{
									if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
									{
										ENTITY::SET_ENTITY_COORDS(iLocal_201, 686.8995f, -985.1403f, 22.344f, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(iLocal_201, 268.5802f);
									}
									else if ((VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iLocal_201)) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iLocal_201))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(iLocal_201)))
									{
										ENTITY::SET_ENTITY_COORDS(iLocal_201, 706.0064f, -979.6544f, 23.1403f, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(iLocal_201, 227.0058f);
									}
									else
									{
										VEHICLE::DELETE_VEHICLE(&iLocal_201);
									}
									GlobalFunc_10709(0f, 0f, 0f, 0f, 0, 145);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&iLocal_201);
								}
							}
						}
						iLocal_441 = 1;
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_139))
						{
							if (iLocal_438 == 1 && CAM::IS_SCREEN_FADED_OUT())
							{
								if (!PED::IS_PED_IN_VEHICLE(iLocal_139, iLocal_200, 0))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_139, iLocal_200, 0);
								}
							}
							else if (STREAMING::HAS_ANIM_DICT_LOADED("MISSHEIST_JEWEL_SETUP"))
							{
								if (iLocal_616 == 0)
								{
									uLocal_126 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
									PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uLocal_126, iLocal_200, 0);
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_139, uLocal_126, "MISSHEIST_JEWEL_SETUP", "LESTER_GET_IN_CAR", 8f, -8f, 4, 0, 1148846080, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_200, uLocal_126, "lester_get_in_car_cardoor", "MISSHEIST_JEWEL_SETUP", 8f, -8f, 1 | 32 | 8192, 1148846080);
									iLocal_616 = 1;
								}
							}
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", joaat("player_zero")))
				{
					if (iLocal_438 == 1 && CAM::IS_SCREEN_FADED_OUT())
					{
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 717.2747f, -978.3644f, 23.1189f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 185.8557f);
					}
					RECORDING::_0x81CBAE94390F9F89();
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 185.8557f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						if (iLocal_438 == 0)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						}
					}
					else
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
				}
				if (!CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", joaat("player_zero")))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
						{
							VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_200, 1, 1, 1);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 185.8557f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
					else
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					GlobalFunc_8380(0, 1, 1, 0);
					if (!GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
					{
						ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(709.9813f, -963.5311f, 30.5453f, 2f, joaat("v_ilev_ss_door02"), -1000f);
					}
					if (iLocal_438 == 1 && CAM::IS_SCREEN_FADED_OUT())
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200))
						{
							while (!STREAMING::HAS_MODEL_LOADED(joaat("tailgater")))
							{
								SYSTEM::WAIT(0);
							}
							GlobalFunc_10543(&iLocal_200, 0, Local_66, 268.499f, 1, 0);
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("tailgater"), 1);
							VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_200);
							VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_200, 0);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_200, 1);
							GlobalFunc_504(iLocal_200, -1);
							GlobalFunc_503(iLocal_200, -1);
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
						{
							if (!PED::IS_PED_INJURED(iLocal_139))
							{
								PED::SET_PED_CAN_BE_DRAGGED_OUT(iLocal_139, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_139, 1);
								PED::SET_PED_CAN_BE_TARGETTED(iLocal_139, 0);
								GlobalFunc_173(&uLocal_241, 1, iLocal_139, "LESTER", 0, 1);
								if (!PED::IS_PED_IN_VEHICLE(iLocal_139, iLocal_200, 0))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_139, iLocal_200, 0);
								}
							}
						}
					}
					if (iLocal_438 == 1)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 717.2747f, -978.3644f, 23.1189f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 185.8557f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-15f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						}
					}
					iLocal_76++;
				}
				break;
			
			case 2:
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				iLocal_76++;
				break;
			
			case 3:
				iLocal_77 = 0;
				iLocal_62 = 2;
				iLocal_76++;
				break;
			}
	}
}




















void func_500()//Position - 0x613B2
{
	iLocal_424 = 0;
	iLocal_425 = 0;
	iLocal_427 = 0;
	iLocal_428 = 0;
	iLocal_429 = 0;
	iLocal_430 = 0;
	iLocal_440 = 0;
	iLocal_77 = 0;
	if (!GlobalFunc_Is_Mission_Retry())
	{
		CUTSCENE::REQUEST_CUTSCENE("Jh_1_int", 8);
	}
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("SEW_MACHINE"))
		{
			if (!TASK::IS_SCENARIO_GROUP_ENABLED("SEW_MACHINE"))
			{
				TASK::SET_SCENARIO_GROUP_ENABLED("SEW_MACHINE", 1);
			}
		}
		MISC::CLEAR_AREA(717.7f, -967.6f, 27.8f, 50f, 1, 0, 0, 0);
		if (!GlobalFunc_8255())
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
		}
		STREAMING::NEW_LOAD_SCENE_START_SPHERE(713.1f, -963.4f, 29.9f, 15f, 2);
	}
	uLocal_217[3] = PED::ADD_SCENARIO_BLOCKING_AREA(713.7754f, -996.4443f, 22.3085f, 715.7624f, -991.7067f, 25.6214f, 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-645.8f, -301.2f, 30f, -674.2f, -244.6f, 46.1f, 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
			iLocal_201 = Global_86864[0];
		}
	}
	GlobalFunc_7621(88, 1, 0, 1, 0);
	GlobalFunc_7621(89, 1, 0, 1, 0);
	GlobalFunc_173(&uLocal_241, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	GlobalFunc_695(0);
	STREAMING::REQUEST_MODEL(joaat("tailgater"));
	HUD::TOGGLE_STEALTH_RADAR(0);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		STREAMING::LOAD_ALL_OBJECTS_NOW();
	}
	if (GlobalFunc_Is_Mission_Retry())
	{
		CLOCK::SET_CLOCK_TIME(9, 0, 0);
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::STOP_CUTSCENE(0);
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (!CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
		}
		iLocal_77 = 0;
		iLocal_76 = 0;
		iLocal_431 = 0;
		iLocal_440 = 0;
		iLocal_434 = 1;
		if (Global_84544 == 1)
		{
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 0)
			{
				GlobalFunc_5116(-659.1774f, -270.6738f, 34.8078f, 30.7532f, 1, 0);
				iLocal_62 = 3;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 1)
			{
				GlobalFunc_5116(-659.1774f, -270.6738f, 34.8078f, 30.7532f, 1, 0);
				iLocal_62 = 4;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 2)
			{
				GlobalFunc_5116(-575.9287f, -277.7308f, 34.1598f, 27.8937f, 1, 0);
				iLocal_62 = 5;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 3)
			{
				GlobalFunc_5116(-575.9287f, -277.7308f, 34.1598f, 27.8937f, 1, 0);
				iLocal_62 = 6;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 4)
			{
				GlobalFunc_5116(718.0418f, -984.2304f, 23.1442f, 271.334f, 1, 0);
				func_501();
			}
		}
		else
		{
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 0)
			{
				GlobalFunc_5116(Local_66, 268.499f, 1, 0);
				iLocal_62 = 2;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 1)
			{
				GlobalFunc_5116(-659.1774f, -270.6738f, 34.8078f, 30.7532f, 1, 0);
				iLocal_62 = 3;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 2)
			{
				GlobalFunc_5116(-659.1774f, -270.6738f, 34.8078f, 30.7532f, 1, 0);
				iLocal_62 = 4;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 3)
			{
				GlobalFunc_5116(-575.9287f, -277.7308f, 34.1598f, 27.8937f, 1, 0);
				iLocal_62 = 5;
			}
			if (GlobalFunc_Get_Mission_Fail_Checkpoint() == 4)
			{
				GlobalFunc_5116(-575.9287f, -277.7308f, 34.1598f, 27.8937f, 1, 0);
				iLocal_62 = 6;
			}
		}
	}
	else
	{
		PATHFIND::SET_ROADS_IN_AREA(-631.51f, -332.75f, 32f, -692.36f, -228.83f, 38f, 0, 1);
		iLocal_77 = 0;
		iLocal_62 = 1;
	}
	HUD::REQUEST_ADDITIONAL_TEXT("H3SET1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_501()//Position - 0x6171C
{
	if (iLocal_77 == 0)
	{
		GlobalFunc_585(16, 1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			MISC::CLEAR_AREA(718.0418f, -984.2304f, 23.1442f, 20f, 1, 0, 0, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_200))
			{
				STREAMING::REQUEST_MODEL(joaat("tailgater"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("tailgater")))
				{
					SYSTEM::WAIT(0);
				}
				if (GlobalFunc_10543(&iLocal_200, 0, 718.0418f, -984.2304f, 23.1442f, 271.334f, 1, 0))
				{
					iLocal_77++;
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
			{
				iLocal_77++;
			}
		}
	}
	if (iLocal_77 == 1)
	{
		GlobalFunc_5108(iLocal_200, -1, 1);
		func_307();
	}
}











void func_512()//Position - 0x65E3C
{
	if (iLocal_62 == 3)
	{
		if (iLocal_629 == 0)
		{
			if (iLocal_633[0] == 0)
			{
				if (iLocal_483 == 1)
				{
					iLocal_133[0] = MISC::GET_GAME_TIMER();
					iLocal_633[0] = 1;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_133[0] + 3000)
			{
				RECORDING::_0x293220DA1B46CEBC(6f, 1073741824, 3);
				iLocal_629 = 1;
			}
		}
		if (iLocal_630 == 0)
		{
			if (iLocal_633[1] == 0)
			{
				if ((iLocal_445 && iLocal_444) && iLocal_450)
				{
					iLocal_133[1] = MISC::GET_GAME_TIMER();
					iLocal_633[1] = 1;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_133[1] + 2000)
			{
				RECORDING::_0x293220DA1B46CEBC(6f, 1073741824, 3);
				iLocal_630 = 1;
			}
		}
	}
	if (iLocal_62 == 5)
	{
		if (iLocal_631 == 0)
		{
			if (iLocal_633[2] == 0)
			{
				if (iLocal_493 == 1)
				{
					iLocal_133[2] = MISC::GET_GAME_TIMER();
					iLocal_633[2] = 1;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_133[2] + 3000)
			{
				RECORDING::_0x293220DA1B46CEBC(10f, 1073741824, 3);
				iLocal_631 = 1;
			}
		}
		if (iLocal_632 == 0)
		{
			if (iLocal_633[3] == 0)
			{
				if (iLocal_589 == 1)
				{
					iLocal_133[3] = MISC::GET_GAME_TIMER();
					iLocal_633[3] = 1;
				}
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_133[3] + 2500)
			{
				RECORDING::_0x293220DA1B46CEBC(8f, 1073741824, 3);
				iLocal_632 = 1;
			}
		}
	}
}

void func_513()//Position - 0x65F8B
{
	if (iLocal_62 == 2)
	{
		if (iLocal_425 == 1 && iLocal_426 == 0)
		{
			if (iLocal_626 == 0)
			{
				if (GlobalFunc_9143(4))
				{
					if (GlobalFunc_111())
					{
						Local_412 = { GlobalFunc_514() };
						GlobalFunc_4956();
						HUD::CLEAR_PRINTS();
						iLocal_626 = 1;
					}
				}
			}
			else if (!GlobalFunc_9143(4))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10626(&uLocal_241, "JHS1AUD", "JHS1_STP12c", &Local_412, 7, 0, 0))
					{
						iLocal_626 = 0;
					}
				}
			}
		}
	}
	if (iLocal_62 == 6)
	{
		if (iLocal_77 > 1)
		{
			if (iLocal_627 == 0)
			{
				if (GlobalFunc_9143(4))
				{
					if (GlobalFunc_111())
					{
						Local_418 = { GlobalFunc_514() };
						GlobalFunc_4956();
						HUD::CLEAR_PRINTS();
						iLocal_627 = 1;
					}
				}
			}
			else if (!GlobalFunc_9143(4))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10626(&uLocal_241, "JHS1AUD", "JHS1_STP13", &Local_418, 7, 0, 0))
					{
						iLocal_627 = 0;
					}
				}
			}
		}
	}
}


void func_515(var uParam0, var uParam1)//Position - 0x660A6
{
	if (*uParam1 == 1)
	{
		if (!CUTSCENE::HAS_CUTSCENE_FINISHED())
		{
			if (!CAM::DOES_CAM_EXIST(*uParam0))
			{
				*uParam0 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_COORD(*uParam0, 10f, 10f, 10f);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			CAM::SET_CAM_COORD(*uParam0, CAM::GET_FINAL_RENDERED_CAM_COORD());
			CAM::SET_CAM_FAR_CLIP(*uParam0, CAM::GET_FINAL_RENDERED_CAM_FAR_CLIP());
			CAM::SET_CAM_FAR_DOF(*uParam0, CAM::GET_FINAL_RENDERED_CAM_FAR_DOF());
			CAM::SET_CAM_FOV(*uParam0, CAM::GET_FINAL_RENDERED_CAM_FOV());
			CAM::SET_CAM_MOTION_BLUR_STRENGTH(*uParam0, CAM::GET_FINAL_RENDERED_CAM_MOTION_BLUR_STRENGTH());
			CAM::SET_CAM_NEAR_CLIP(*uParam0, CAM::GET_FINAL_RENDERED_CAM_NEAR_CLIP());
			CAM::SET_CAM_NEAR_DOF(*uParam0, CAM::GET_FINAL_RENDERED_CAM_NEAR_DOF());
			CAM::SET_CAM_ROT(*uParam0, CAM::GET_FINAL_RENDERED_CAM_ROT(2), 2);
		}
		else if (CAM::DOES_CAM_EXIST(*uParam0))
		{
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
			}
			*uParam1 = 0;
		}
	}
	else if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (!CAM::_0x3044240D2E0FA842())
		{
			CAM::DESTROY_CAM(*uParam0, 0);
		}
	}
}

void func_516()//Position - 0x661A1
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (iLocal_622 == 1)
		{
			iLocal_622 = 0;
		}
	}
	else if (iLocal_622 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
				{
					if (!PED::IS_PED_INJURED(iLocal_139))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
						{
							if (!GlobalFunc_111())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									GlobalFunc_173(&uLocal_241, 1, iLocal_139, "LESTER", 0, 1);
									if (GlobalFunc_10618(&uLocal_241, "JHS1AUD", "JHS1_WANT", 7, 0, 0, 0))
									{
										iLocal_622 = 1;
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

void func_517()//Position - 0x66242
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_139))
		{
			if (!PED::IS_PED_INJURED(iLocal_139))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_200))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_200, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_200, 0))
						{
							if (iLocal_508 == 0)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_139, 1) < 10f)
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_139, PLAYER::PLAYER_PED_ID(), -1, 0, 3);
									iLocal_508 = 1;
								}
							}
							if (iLocal_508 == 1)
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_139, 1) > 10f)
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_139);
									iLocal_508 = 0;
								}
							}
						}
						else if (iLocal_508 == 1)
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_139);
							PED::SET_PED_CAN_HEAD_IK(iLocal_139, 1);
							iLocal_508 = 0;
						}
					}
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_141))
		{
			if (!PED::IS_PED_INJURED(iLocal_141))
			{
				if (iLocal_509 == 0)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_141, 1) < 5f)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_141, PLAYER::PLAYER_PED_ID(), -1, 2048, 3);
						iLocal_509 = 1;
					}
				}
				if (iLocal_509 == 1)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_141, 1) > 5f)
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_141);
						iLocal_509 = 0;
					}
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_140))
		{
			if (!PED::IS_PED_INJURED(iLocal_140))
			{
				if (iLocal_510 == 0)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_140, 1) < 10f)
					{
						TASK::TASK_LOOK_AT_ENTITY(iLocal_140, PLAYER::PLAYER_PED_ID(), -1, 2048, 3);
						iLocal_510 = 1;
					}
				}
				if (iLocal_510 == 1)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_140, 1) > 10f)
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_140);
						iLocal_510 = 0;
					}
				}
			}
		}
	}
}


void func_519()//Position - 0x663FF
{
	func_520();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_520()//Position - 0x6640F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
	}
	GlobalFunc_695(1);
	PATHFIND::SET_ROADS_IN_AREA(-611.9f, -362.4f, 30f, -558.6f, -264.5f, 45f, 1, 1);
	PATHFIND::SET_ROADS_IN_AREA(-538.9f, -296.7f, 43.3f, -631.3f, -185.2f, 30f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-645.8f, -301.2f, 30f, -674.2f, -244.6f, 46.1f, 1, 1);
	if (iLocal_628 == 1)
	{
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_86[0]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_86[1]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_94[1]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_94[2]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_94[3]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[0]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[1]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[2]);
		GRAPHICS::DESTROY_TRACKED_POINT(uLocal_89[3]);
		iLocal_628 = 0;
	}
	HUD::CLEAR_HELP(1);
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_217[0], 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_217[1], 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_217[2], 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_217[3], 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_217[4], 0);
	if (TASK::DOES_SCENARIO_GROUP_EXIST("SEW_MACHINE"))
	{
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SEW_MACHINE"))
		{
			TASK::SET_SCENARIO_GROUP_ENABLED("SEW_MACHINE", 0);
		}
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_204);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_203);
	TASK::CLEAR_SEQUENCE_TASK(&uLocal_202);
	CAM::DESTROY_ALL_CAMS(0);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::SET_WIDESCREEN_BORDERS(0, 0);
	func_434();
	GlobalFunc_4935();
	GlobalFunc_563(0);
	AUDIO::STOP_SOUND(uLocal_106);
	AUDIO::STOP_SOUND(uLocal_107);
	AUDIO::STOP_SOUND(uLocal_108);
	AUDIO::STOP_SOUND(uLocal_109);
	AUDIO::_OVERRIDE_MICROPHONE_SETTINGS(0, 0);
	GlobalFunc_7632(0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-650.4f, -286.5f, 34.1f, -670.4f, -251.7f, 37.5f, 1, 1);
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_110))
	{
		ENTITY::STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(-631.96f, -236.33f, 38.21f, 2f, joaat("p_jewel_door_l"), -8f);
	}
	GlobalFunc_7621(88, 0, 0, 1, 0);
	GlobalFunc_7621(89, 0, 0, 1, 0);
}




