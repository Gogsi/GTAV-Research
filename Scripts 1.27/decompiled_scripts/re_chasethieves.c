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
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	int iLocal_32 = 0;
	char* sLocal_33 = NULL;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	float fLocal_38 = 0f;
	float fLocal_39 = 0f;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	struct<3> Local_61 = { 0, 0, 0 } ;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	bool bLocal_68 = 0;
	bool bLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
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
	float fLocal_85 = 0f;
	int iLocal_86 = 0;
	struct<3> Local_87 = { 0, 0, 0 } ;
	float fLocal_90 = 0f;
	int iLocal_91 = 0;
	struct<3> Local_92 = { 0, 0, 0 } ;
	float fLocal_95 = 0f;
	var uLocal_96[2] = { 0, 0 };
	int iLocal_99[2] = { 0, 0 };
	int iLocal_102[2] = { 0, 0 };
	int iLocal_105 = 0;
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
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	struct<8> Local_138[2];
	struct<8> Local_155[2];
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	struct<3> Local_176 = { 0, 0, 0 } ;
	var uLocal_179 = 0;
	int iLocal_180 = 0;
	struct<3> Local_181 = { 0, 0, 0 } ;
	float fLocal_184 = 0f;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	var uLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	float fLocal_195 = 0f;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	int iLocal_201 = 0;
	int iLocal_202 = 0;
	struct<3> Local_203 = { 0, 0, 0 } ;
	struct<3> Local_206 = { 0, 0, 0 } ;
	struct<3> Local_209 = { 0, 0, 0 } ;
	struct<3> Local_212 = { 0, 0, 0 } ;
	int iLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	var uLocal_220 = 0;
	int iLocal_221 = 0;
	int iLocal_222 = 0;
	int iLocal_223 = 0;
	int iLocal_224 = 0;
	int iLocal_225 = 0;
	char* sLocal_226 = NULL;
	char* sLocal_227 = NULL;
	char* sLocal_228 = NULL;
	char* sLocal_229 = NULL;
	struct<3> Local_230 = { 0, 0, 0 } ;
	struct<3> Local_233 = { 0, 0, 0 } ;
	struct<3> Local_236 = { 0, 0, 0 } ;
	struct<3> Local_239 = { 0, 0, 0 } ;
	struct<3> Local_242 = { 0, 0, 0 } ;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	var uLocal_247 = 16;
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
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 16;
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
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	int iLocal_578 = 0;
	char* sLocal_579 = NULL;
	char* sLocal_580 = NULL;
	char* sLocal_581 = NULL;
	char* sLocal_582 = NULL;
	char* sLocal_583 = NULL;
	char* sLocal_584 = NULL;
	char* sLocal_585 = NULL;
	char* sLocal_586 = NULL;
	var uLocal_587 = 0;
	char* sLocal_588 = NULL;
	float fLocal_589 = 0f;
	int iLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	struct<33> Local_593 = { 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_626 = 1;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
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
	iLocal_32 = 3;
	sLocal_33 = "NULL";
	fLocal_34 = 0f;
	fLocal_38 = -0.0375f;
	fLocal_39 = 0.17f;
	fLocal_43 = 80f;
	fLocal_44 = 140f;
	fLocal_45 = 180f;
	iLocal_51 = 1;
	iLocal_52 = 65;
	iLocal_53 = 49;
	iLocal_54 = 64;
	iLocal_75 = -1;
	fLocal_195 = -1f;
	Local_203 = { 80.73f, -212.88f, 54.5f };
	Local_206 = { 330.918f, -837.8148f, 28.2916f };
	Local_209 = { 1655.12f, 4868.17f, 42.03f };
	Local_212 = { 1171.82f, 2695.75f, 37.96f };
	iLocal_224 = joaat("ingot");
	Local_242 = { 1f, 1f, 0f };
	sLocal_582 = "RANDOM@CHASETHIEVESGEN";
	sLocal_583 = "FLEE_BACKWARD_Shopkeeper";
	sLocal_584 = "FLEE_BACKWARD_Thief";
	sLocal_585 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_586 = "MY_DADS_GOING_TO_KILL_ME";
	sLocal_588 = "pickup_object";
	fLocal_589 = 300f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (bLocal_68)
		{
			bLocal_69 = true;
			func_398();
		}
		else
		{
			func_378();
		}
	}
	Local_61 = { ScriptParam_0.f_1[0 /*3*/] };
	func_377();
	if (func_336(Local_61, 11, iLocal_202, 0, 0))
	{
		GlobalFunc_6828(11);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_215 = func_329();
	func_328();
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_587();
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_59 > 1)
		{
			switch (iLocal_59)
			{
				case 0:
					GlobalFunc_8277(&Local_593);
					if (func_323())
					{
						func_378();
					}
					else if (func_314())
					{
						func_312();
						iLocal_59 = 1;
					}
					break;
				
				case 1:
					if (GlobalFunc_10586())
					{
						func_378();
					}
					else if (func_298())
					{
						GlobalFunc_9559(1);
						if (!PED::IS_PED_INJURED(iLocal_81))
						{
							uLocal_173 = func_287(iLocal_81, 1, 0);
							HUD::SET_BLIP_COLOUR(uLocal_173, 1);
						}
						func_286(1);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						PED::SET_CREATE_RANDOM_COPS(0);
						PLAYER::SET_MAX_WANTED_LEVEL(0);
						iLocal_628 = 1;
						iLocal_79 = MISC::GET_GAME_TIMER();
						iLocal_59 = 2;
					}
					break;
				
				case 2:
					func_283();
					func_280();
					break;
				
				case 3:
					func_283();
					func_233();
					break;
				
				case 4:
					func_231();
					func_225();
					func_222();
					break;
				
				case 5:
					func_213();
					break;
				
				case 6:
					func_33();
					break;
			}
			if (iLocal_59 > 0)
			{
				func_31();
				func_3();
				if (ENTITY::IS_ENTITY_DEAD(iLocal_86))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_587))
					{
						if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uLocal_587)) > 100f)
						{
							func_378();
						}
					}
					else if (bLocal_68 == 1)
					{
						GlobalFunc_4702(2);
						func_398();
					}
					else
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, uLocal_577, 1862763509);
						if (GlobalFunc_115(iLocal_81))
						{
							PED::SET_PED_MONEY(iLocal_81, iLocal_198);
						}
						func_378();
					}
				}
			}
		}
		else
		{
			func_378();
		}
	}
}



void func_3()//Position - 0x318
{
	if ((iLocal_245 == 0 && GlobalFunc_115(iLocal_86)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, sLocal_582, sLocal_583, 3))
	{
		if (func_24(iLocal_86, &iLocal_218, &uLocal_217, uLocal_216, 0, 1077936128, 0))
		{
			switch (iLocal_218)
			{
				case 2:
					func_4();
					break;
				
				case 3:
					func_4();
					break;
			}
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_86, 1), 20f))
		{
			func_4();
		}
	}
}

void func_4()//Position - 0x397
{
	func_23(&uLocal_591);
	GlobalFunc_846(&uLocal_174);
	iLocal_245 = 1;
	if (GlobalFunc_115(iLocal_86))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_86, 17, 1);
		TASK::TASK_SMART_FLEE_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
		if (GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_OUT", 4, 0, 0, 0))
		{
		}
	}
	if (bLocal_68 == 1)
	{
		GlobalFunc_4702(2);
		func_398();
	}
}



















void func_23(var uParam0)//Position - 0xC2C
{
	*uParam0 = (MISC::GET_GAME_TIMER() - 5000);
}

int func_24(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, float fParam5, int iParam6)//Position - 0xC3F
{
	float fVar0;
	float fVar1;
	bool bVar2;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam4)
	{
		if (PED::IS_PED_ON_FOOT(iParam0))
		{
			fVar1 = fParam5;
		}
		else
		{
			fVar1 = (fParam5 + 3f);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !bParam4)
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			Var6 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			fVar9 = SYSTEM::VDIST(Var3, Var6);
			if (!MISC::IS_BIT_SET(uParam3, 3))
			{
				if (GlobalFunc_4717(iParam0, iParam6))
				{
					GlobalFunc_5571("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_5571("	aggroReason = EAggro_Attacked\n");
					*uParam1 = 3;
					func_28(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 1))
			{
				if (fVar1 < 20f)
				{
				}
				if (MISC::IS_BULLET_IN_AREA(Var6, fParam5, 1))
				{
					GlobalFunc_5571("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_5571("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_28(iParam0);
					return 1;
				}
				if (MISC::IS_PROJECTILE_IN_AREA(Var6 - Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), Var6 + Vector((fParam5 / 2f), (fParam5 / 2f), (fParam5 / 2f)), 0))
				{
					GlobalFunc_5571("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_5571("	aggroReason = EAggro_ShotNear\n");
					*uParam1 = 1;
					func_28(iParam0);
					return 1;
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 2))
			{
				fVar0 = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				if (fVar0 < 0f)
				{
					fVar0 = 25f;
				}
				else if (fVar0 > 25f)
				{
					fVar0 = 25f;
				}
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
					{
						if (fVar9 < fVar0)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								GlobalFunc_5571("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
								GlobalFunc_5571("	aggro Ped knows player is pointing gun\n");
								func_25("		lockOnTimer = ", *uParam2);
								GlobalFunc_5571("\n");
								func_25("		time since not LockedOn = ", (MISC::GET_GAME_TIMER() - iLocal_2));
								GlobalFunc_5571("\n");
								bVar2 = true;
								if (MISC::GET_GAME_TIMER() > (iLocal_2 + *uParam2))
								{
									GlobalFunc_5571("			aggroReason = EAggro_HostileOrEnemy\n");
									*uParam1 = 2;
									func_28(iParam0);
									return 1;
								}
							}
						}
						else
						{
							bVar2 = false;
						}
					}
					else
					{
						bVar2 = false;
					}
				}
			}
			if (!MISC::IS_BIT_SET(uParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					GlobalFunc_5571("FUNC BOOL HAS_PLAYER_AGGROED_PED\n");
					GlobalFunc_5571("			aggroReason = EAggro_Danger\n");
					*uParam1 = 0;
					func_28(iParam0);
					return 1;
				}
			}
		}
	}
	if (!bVar2)
	{
		iLocal_2 = MISC::GET_GAME_TIMER();
	}
	return 0;
}

void func_25(char* sParam0, int iParam1)//Position - 0xE92
{
	GlobalFunc_863(sParam0);
	GlobalFunc_238(iParam1);
}



void func_28(int iParam0)//Position - 0xEC7
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
}



void func_31()//Position - 0xF30
{
	if (iLocal_65 == 1)
	{
		GlobalFunc_661(iLocal_81, &uLocal_106, -1, 0, 0, 0, -1082130432, 0);
		GlobalFunc_661(iLocal_82, &uLocal_114, -1, 0, 0, 0, -1082130432, 0);
		GlobalFunc_661(iLocal_83, &uLocal_122, -1, 0, 0, 0, -1082130432, 0);
		GlobalFunc_661(iLocal_84, &uLocal_130, -1, 0, 0, 0, -1082130432, 0);
		GlobalFunc_661(iLocal_99[0], &(Local_138[0 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
		GlobalFunc_661(iLocal_99[1], &(Local_138[1 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
		GlobalFunc_661(iLocal_102[0], &(Local_155[0 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
		GlobalFunc_661(iLocal_102[1], &(Local_155[1 /*8*/]), -1, 0, 0, 0, -1082130432, 0);
	}
}


void func_33()//Position - 0x110D
{
	struct<3> Var0;
	struct<3> Var3;
	char* sVar6;
	char* sVar7;
	int iVar8;
	
	sVar6 = "RECHA_THX";
	sVar7 = "RECHA_THX_1";
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iLocal_86))
	{
		switch (iLocal_201)
		{
			case 0:
				if (!STREAMING::STREAMVOL_IS_VALID(uLocal_592))
				{
					uLocal_592 = STREAMING::STREAMVOL_CREATE_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_86, 1), 200f, 12, 127);
				}
				STREAMING::REQUEST_ANIM_DICT(sLocal_226);
				if (GlobalFunc_6566(2))
				{
					HUD::CLEAR_HELP(1);
				}
				if (!GlobalFunc_115(iLocal_105) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_105 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					VEHICLE::SET_LAST_DRIVEN_VEHICLE(iLocal_105);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !GlobalFunc_763(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1093140480, 1, 1056964608, 0, 1))
				{
				}
				else
				{
					func_208(0);
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					TASK::TASK_CLEAR_LOOK_AT(iLocal_86);
					TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
					iLocal_590 = -1;
					iLocal_201++;
				}
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sLocal_226);
				STREAMING::REQUEST_MODEL(joaat("prop_ld_wallet_01"));
				GlobalFunc_7629();
				GlobalFunc_112();
				if (((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && !GlobalFunc_111()) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_226)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_wallet_01")))
				{
					if (iLocal_590 == -1)
					{
						iLocal_590 = MISC::GET_GAME_TIMER();
					}
					if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_86) || (MISC::GET_GAME_TIMER() - iLocal_590) > 2000)
					{
						func_85(0f, 0f, 0f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
						EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
						EVENT::REMOVE_SHOCKING_EVENT(iLocal_578);
						uLocal_172 = OBJECT::CREATE_OBJECT(joaat("prop_ld_wallet_01"), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_172, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						uLocal_179 = ENTITY::GET_ENTITY_HEADING(iLocal_86);
						Var0 = { Local_176 };
						Var0.f_2 = (Var0.f_2 + 50f);
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2));
						Var3 = { ENTITY::GET_ENTITY_ROTATION(iLocal_86, 2) };
						uLocal_199 = PED::CREATE_SYNCHRONIZED_SCENE(Var0, Var3, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_199, 0);
						uLocal_200 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_200, uLocal_199, sLocal_229, sLocal_226);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_199, sLocal_226, sLocal_227, 1000f, -1000f, 1, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_86);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_86, uLocal_199, sLocal_226, sLocal_228, 1000f, -1000f, 1, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_86, 0, 0);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
						iVar8 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(335.98f, -839.47f, 28.31f, 10f, joaat("prop_rub_binbag_03b"), 1, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar8))
						{
							ENTITY::SET_ENTITY_COORDS(iVar8, 317.94f, -824.33f, 28.27f, 1, 0, 0, 1);
						}
						GlobalFunc_2295(&iVar8, 0);
						iVar8 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(336.86f, -840.08f, 28.27f, 10f, joaat("prop_rub_binbag_05"), 1, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(iVar8))
						{
							ENTITY::SET_ENTITY_COORDS(iVar8, 315.63f, -826.01f, 28.27f, 1, 0, 0, 1);
						}
						GlobalFunc_2295(&iVar8, 0);
						MISC::CLEAR_AREA_OF_OBJECTS(Var0, 20f, 2);
						MISC::CLEAR_AREA_OF_PROJECTILES(Var0, 20f, 0);
						MISC::CLEAR_AREA_OF_VEHICLES(Var0, 5f, 0, 0, 0, 0, 0);
						MISC::CLEAR_AREA(Var0, 2f, 1, 0, 0, 0);
						MISC::CLEAR_AREA(PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_226, sLocal_228, Var0, Var3, 0, 2), 2f, 1, 0, 0, 0);
						CAM::SET_CAM_ACTIVE(uLocal_200, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						switch (GlobalFunc_8329())
						{
							case 0:
								GlobalFunc_173(&uLocal_412, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
								GlobalFunc_10726(&uLocal_412, "REAR1AU", "REAR1_REM", "REAR1_REM_1", 4, 0, 0);
								break;
							
							case 1:
								GlobalFunc_173(&uLocal_412, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
								GlobalFunc_10726(&uLocal_412, "REAR1AU", "REAR1_REF", "REAR1_REF_1", 4, 0, 0);
								break;
							
							case 2:
								GlobalFunc_173(&uLocal_412, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
								GlobalFunc_10726(&uLocal_412, "REAR1AU", "REAR1_RET", "REAR1_RET_1", 4, 0, 0);
								break;
						}
						iLocal_201++;
					}
				}
				break;
			
			case 2:
				if (((iLocal_627 == 0 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_199)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_199) >= 0.96f)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_627 = 1;
				}
				if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_199) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_199) == 1f) || func_78()) || ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -571081548))
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::DESTROY_ALL_CAMS(0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					if (GlobalFunc_115(iLocal_86))
					{
						func_74();
						PED::SET_PED_MONEY(iLocal_86, (iLocal_198 - (iLocal_198 / 10)));
					}
					GlobalFunc_130(&uLocal_172);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_wallet_01"));
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						GlobalFunc_4956();
						GlobalFunc_79(500, 1);
					}
					func_60(1, 0, 1, 1);
					GlobalFunc_10834(GlobalFunc_8329(), 1, SYSTEM::FLOOR((IntToFloat(iLocal_198) * 0.9f)));
					GlobalFunc_183(joaat("rc_wallets_returned"), 1);
					iLocal_201++;
				}
				else
				{
					switch (iLocal_215)
					{
						case 0:
							sVar7 = "RECHA_THX_1";
							break;
						
						case 1:
							sVar7 = "RECHA_THX_2";
							break;
						
						case 2:
							sVar7 = "RECHA_THX_3";
							break;
						
						case 3:
							sVar7 = "RECHA_THX_4";
							break;
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -3856156))
					{
						if ((ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(uLocal_172, PLAYER::PLAYER_PED_ID()) && iLocal_246 == 0) && GlobalFunc_10726(&uLocal_247, "RECHAAU", sVar6, sVar7, 4, 0, 0))
						{
							ENTITY::DETACH_ENTITY(uLocal_172, 0, 1);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_172, iLocal_86, PED::GET_PED_BONE_INDEX(iLocal_86, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
							iLocal_246 = 1;
						}
					}
					else
					{
						if (iLocal_246 == 0 && GlobalFunc_10726(&uLocal_247, "RECHAAU", sVar6, sVar7, 4, 0, 0))
						{
							iLocal_246 = 1;
						}
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_199) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_199) > 0.9f)
						{
							func_74();
						}
					}
				}
				break;
			
			case 3:
				if (iLocal_73 == 0)
				{
					if (!GlobalFunc_111() && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_RESP", 4, 0, 0, 0))
					{
						iLocal_73 = 1;
					}
				}
				else
				{
					GlobalFunc_4702(3);
					func_398();
				}
				break;
			}
	}
}



























void func_60(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x26D5
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, bParam3, 0);
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
		if ((iLocal_58 != 0 && iLocal_58 != joaat("object")) && iLocal_58 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_58, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_58, 0);
				}
			}
		}
	}
	if (GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}














void func_74()//Position - 0x2A43
{
	if (GlobalFunc_115(iLocal_86) && !GlobalFunc_6964(iLocal_86, 242628503))
	{
		GlobalFunc_5823(iLocal_86, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 2f, 1f), uLocal_179, 1, 1);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_86, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_185);
		if (GlobalFunc_105(Local_181) || !GlobalFunc_115(iLocal_180))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(0, iLocal_180, 20000, -1, 1f, 1, 0);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_180, 20f, 786599);
		}
		TASK::CLOSE_SEQUENCE_TASK(uLocal_185);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_86, uLocal_185);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_185);
	}
}




int func_78()//Position - 0x2B98
{
	if (GlobalFunc_4926(1000))
	{
		GlobalFunc_2350(500, 1);
		return 1;
	}
	return 0;
}







void func_85(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2D8F
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_9184(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8329())
			{
				case 0:
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_87(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_87(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_87(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_11014(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_87(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_58 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_58 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}


int func_87(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x2F58
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
		Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8541(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_6669(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_6669(iParam0, 9);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8541(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11250(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_87(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8541(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11250(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_87(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, iVar0, GlobalFunc_11140(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11139(iParam0, iVar10, &iVar4, 1))
							{
								func_87(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_87(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10870(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_87(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_87(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_87(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_87(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10870(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_87(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10870(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8541(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11250(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_87(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_25(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8541(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11250(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_87(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11250(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_87(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11078(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11139(iParam0, iVar10, &iVar4, 0))
		{
			func_87(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11138(iParam0, iVar10, &iVar4))
		{
			func_87(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}

























































































































void func_208(int iParam0)//Position - 0x1F29E
{
	if (GlobalFunc_115(iLocal_86))
	{
		if (iParam0 == 1)
		{
			if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_86))
			{
				TASK::TASK_USE_MOBILE_PHONE(iLocal_86, 1, 1);
			}
		}
		else if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_86))
		{
			TASK::TASK_USE_MOBILE_PHONE(iLocal_86, 0, 1);
		}
	}
}





void func_213()//Position - 0x1F4C5
{
	if (GlobalFunc_115(iLocal_86))
	{
		GlobalFunc_4715(uLocal_174, &uLocal_591);
		func_219();
		if (GlobalFunc_469(GlobalFunc_8329()) < iLocal_198)
		{
			GlobalFunc_4702(2);
			func_398();
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 20f, 20f, 20f, 0, 1, 0))
		{
			func_214();
			iLocal_59 = 6;
		}
		else if (iLocal_193 == 1)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 50f, 50f, 20f, 0, 1, 0))
			{
				GlobalFunc_4702(2);
				func_398();
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 30f, 30f, 20f, 0, 1, 0))
		{
			iLocal_193 = 1;
		}
		else if (fLocal_195 > -1f)
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_61) > (fLocal_195 + 120f))
			{
				GlobalFunc_4702(2);
				func_398();
			}
		}
	}
}

void func_214()//Position - 0x1F5A9
{
	func_215(iLocal_81);
	func_215(iLocal_82);
	func_215(iLocal_83);
	func_215(iLocal_84);
	func_215(iLocal_99[0]);
	func_215(iLocal_99[1]);
	func_215(iLocal_102[0]);
	func_215(iLocal_102[1]);
}

void func_215(int iParam0)//Position - 0x1F5ED
{
	if (GlobalFunc_115(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 42, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 0);
		func_217(iParam0);
	}
	GlobalFunc_2297(&iParam0, 1, 0, 1);
}


void func_217(int iParam0)//Position - 0x1F68D
{
	if (GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) && GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0))) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), -1) == iParam0)
			{
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam0, PED::GET_VEHICLE_PED_IS_IN(iParam0, 0), PLAYER::PLAYER_PED_ID(), 8, 40f, 786468, -1f, -1f, 1);
			}
			else
			{
				TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			}
		}
		else
		{
			TASK::TASK_SMART_FLEE_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, 1), 150f, -1, 0, 0);
		}
		PED::SET_PED_KEEP_TASK(iParam0, 1);
	}
}


void func_219()//Position - 0x1F782
{
	if (GlobalFunc_115(iLocal_86))
	{
		func_220();
		switch (iLocal_78)
		{
			case 0:
				if (!PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_86))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 30f, 30f, 30f, 0, 0, 0) && GlobalFunc_10726(&uLocal_247, "RECHAAU", "RECHA_TK", "RECHA_TK_1", 4, 0, 0))
					{
						iLocal_78++;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 40f, 40f, 40f, 0, 0, 0) && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_WT", 4, 0, 0, 0))
				{
					iLocal_78++;
				}
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					func_208(0);
					iLocal_78++;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_220()//Position - 0x1F84C
{
	if (!PED::IS_PED_FACING_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 20f) && !GlobalFunc_6964(iLocal_86, -875674219))
	{
		TASK::TASK_LOOK_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), 0);
	}
}


void func_222()//Position - 0x1F92F
{
	if (iLocal_70 == 0 && GlobalFunc_115(iLocal_86))
	{
		if (iLocal_67 == 1)
		{
			if ((!GlobalFunc_111() && SYSTEM::TIMERA() > 8000) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 12f, 12f, 5f, 0, 0, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_185);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_185);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_86, uLocal_185);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_185);
				GlobalFunc_5130(PLAYER::PLAYER_PED_ID(), "NEED_SOME_HELP", 3);
				SYSTEM::SETTIMERA(0);
			}
		}
		else if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_86))
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 12f, 12f, 5f, 0, 0, 0))
				{
					if (GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_SRDP", 4, 0, 0, 0))
					{
						iLocal_67 = 1;
					}
				}
				SYSTEM::SETTIMERA(0);
			}
		}
		else if (SYSTEM::TIMERA() > 1000)
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_185);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_185);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_86, uLocal_185);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_185);
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 12f, 12f, 5f, 0, 0, 0) && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_SRDN", 4, 0, 0, 0))
			{
				iLocal_67 = 1;
			}
			SYSTEM::SETTIMERA(0);
		}
	}
}



void func_225()//Position - 0x1FC96
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_587))
	{
		PAD::SET_PAD_SHAKE(0, 200, 250);
		bLocal_68 = true;
		fLocal_195 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_61);
		GlobalFunc_183(joaat("rc_wallets_recovered"), 1);
		GlobalFunc_846(&uLocal_175);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_86))
		{
			if (!PED::IS_PED_INJURED(iLocal_86))
			{
				if (iLocal_245 == 1)
				{
					GlobalFunc_4702(2);
					func_398();
				}
				else
				{
					func_230();
					uLocal_174 = func_287(iLocal_86, 0, 0);
					GlobalFunc_4713(&uLocal_591);
					iLocal_59 = 5;
				}
			}
			else
			{
				GlobalFunc_4702(2);
				func_398();
			}
		}
		else
		{
			GlobalFunc_4702(2);
			func_398();
		}
	}
	else
	{
		GlobalFunc_6567(2);
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_239) > 150f)
		{
			func_226();
		}
	}
}

void func_226()//Position - 0x1FD51
{
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_587))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), OBJECT::GET_PICKUP_COORDS(uLocal_587)) > 100f)
		{
			func_378();
		}
	}
	else if (bLocal_68)
	{
		GlobalFunc_4702(2);
		func_398();
	}
	else
	{
		func_378();
	}
}




void func_230()//Position - 0x1FEA2
{
	GlobalFunc_846(&uLocal_173);
	func_23(&uLocal_591);
	GlobalFunc_846(&uLocal_174);
	GlobalFunc_846(&uLocal_175);
}

void func_231()//Position - 0x1FEC3
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iLocal_71 == 1)
	{
		if ((iLocal_197 == 0 && !GlobalFunc_111()) && GlobalFunc_10726(&uLocal_247, "RECHAAU", "RECHA_TK", "RECHA_TK_1", 4, 0, 0))
		{
			iLocal_197 = 1;
		}
		if (GlobalFunc_115(iLocal_86) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, sLocal_588, "pickup_low", 3))
		{
			EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_185);
			if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_86, Local_176, 1f, 1f, 2f, 0, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_176, 1f, 20000, 0.25f, 0, 1193033728);
			}
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_185);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_86, uLocal_185);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_185);
			GlobalFunc_4702(3);
			func_398();
		}
	}
	else if ((((bLocal_68 == 0 && OBJECT::DOES_PICKUP_EXIST(uLocal_587)) && GlobalFunc_115(iLocal_86)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_86, OBJECT::GET_PICKUP_COORDS(uLocal_587), 15f, 15f, 2f, 0, 1, 0)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, sLocal_582, sLocal_583, 3))
	{
		STREAMING::REQUEST_ANIM_DICT(sLocal_588);
		Var0 = { OBJECT::GET_PICKUP_COORDS(uLocal_587) - Vector(15f, 15f, 15f) };
		Var3 = { OBJECT::GET_PICKUP_COORDS(uLocal_587) + Vector(15f, 15f, 15f) };
		if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_588) && !PED::IS_ANY_PED_SHOOTING_IN_AREA(Var0, Var3, 0, 1))
		{
			iLocal_70 = 1;
			if (!GlobalFunc_6964(iLocal_86, 242628503))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_185);
				if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_86, OBJECT::GET_PICKUP_COORDS(uLocal_587), 1f, 1f, 2f, 0, 1, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(uLocal_587), 2f, 20000, 0.25f, 0, 1193033728);
				}
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, OBJECT::GET_PICKUP_COORDS(uLocal_587), 0);
				TASK::TASK_PLAY_ANIM(0, sLocal_588, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_185);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_86, uLocal_185);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_185);
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, sLocal_588, "pickup_low", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_86, sLocal_588, "pickup_low") > 0.5f)
			{
				GlobalFunc_841(&uLocal_587);
				PED::SET_PED_MONEY(iLocal_86, iLocal_198);
				iLocal_71 = 1;
			}
		}
	}
}


void func_233()//Position - 0x20106
{
	if (!func_279())
	{
		GlobalFunc_69(&iLocal_81);
		GlobalFunc_69(&iLocal_82);
		GlobalFunc_6692(&iLocal_91);
		func_378();
	}
	else if (func_275())
	{
		Local_239 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_81, 0), 1067030938, 1069547520) };
		MISC::SET_BIT(&uLocal_220, 3);
		MISC::SET_BIT(&uLocal_220, 4);
		MISC::SET_BIT(&uLocal_220, 1);
		uLocal_587 = OBJECT::CREATE_PICKUP(joaat("pickup_money_wallet"), Local_239, uLocal_220, iLocal_198, 1, iLocal_225);
		func_230();
		uLocal_175 = func_272(uLocal_587);
		GlobalFunc_4948(&uLocal_20, 0, 0);
		func_286(0);
		iLocal_59 = 4;
	}
	else
	{
		if (GlobalFunc_115(iLocal_81))
		{
			GlobalFunc_10591(&uLocal_20, iLocal_81, 0, 0, 1, 1, 1);
		}
		func_240();
		if (iLocal_192 == 0)
		{
			if (!GlobalFunc_111() && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_HLP", 4, 0, 0, 0))
			{
				SYSTEM::SETTIMERA(0);
				iLocal_192 = 1;
			}
		}
		else
		{
			GlobalFunc_2216(uLocal_173, iLocal_81, fLocal_589, 1061158912, 0);
			if (((((iLocal_72 == 0 && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && !GlobalFunc_111()) && GlobalFunc_115(iLocal_91)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_91, 1) < 30f) && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_SPOT", 4, 0, 0, 0))
			{
				iLocal_72 = 1;
			}
		}
		func_234();
	}
}

void func_234()//Position - 0x20251
{
	if ((GlobalFunc_115(iLocal_86) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, sLocal_582, sLocal_583, 3)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_86, 474215631) == 7)
	{
		if (MISC::IS_BULLET_IN_AREA(Local_61, 50f, 0))
		{
			func_208(0);
			TASK::TASK_COWER(iLocal_86, -1);
		}
		else
		{
			func_235();
		}
	}
}

void func_235()//Position - 0x202AB
{
	if (GlobalFunc_115(iLocal_86))
	{
		if (PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_86) && iLocal_76 > 1)
		{
			if (func_236() && iLocal_76 < 6)
			{
				iLocal_76 = 6;
			}
			else if (iLocal_191 == 0)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 8f, 8f, 8f, 0, 1, 0) && PED::IS_PED_FACING_PED(iLocal_86, PLAYER::PLAYER_PED_ID(), 40f))
				{
					TASK::TASK_LOOK_AT_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), 3500, 2048, 2);
					iLocal_76 = 8;
				}
			}
		}
		switch (iLocal_76)
		{
			case 0:
				if (((iLocal_196 == 0 && !GlobalFunc_111()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 40f, 40f, 40f, 0, 0, 0)) && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_GET", 4, 0, 0, 0))
				{
					iLocal_196 = 1;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_86, -2017877118) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_86, 242628503) == 7)
				{
					GlobalFunc_5130(iLocal_86, "GENERIC_CURSE_MED", 24);
					func_208(1);
					iLocal_77 = MISC::GET_GAME_TIMER();
					iLocal_76++;
				}
				break;
			
			case 1:
				if (((!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_77) > 1000) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 20f, 20f, 20f, 0, 0, 0)) && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_PCA", 4, 0, 0, 0))
				{
					iLocal_77 = MISC::GET_GAME_TIMER();
					iLocal_219 = 2;
					iLocal_76++;
				}
				break;
			
			case 2:
				if (((!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_77) > 5000) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 20f, 20f, 20f, 0, 0, 0)) && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_PCB", 4, 0, 0, 0))
				{
					iLocal_77 = MISC::GET_GAME_TIMER();
					iLocal_219 = 3;
					iLocal_76++;
				}
				break;
			
			case 3:
				if (((!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_77) > 6000) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 20f, 20f, 20f, 0, 0, 0)) && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_PCC", 4, 0, 0, 0))
				{
					iLocal_77 = MISC::GET_GAME_TIMER();
					iLocal_219 = 4;
					iLocal_76++;
				}
				break;
			
			case 4:
				if (((!GlobalFunc_111() && (MISC::GET_GAME_TIMER() - iLocal_77) > 6000) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 15f, 15f, 15f, 0, 0, 0)) && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_PCD", 4, 0, 0, 0))
				{
					iLocal_219 = 5;
					iLocal_76++;
				}
				break;
			
			case 5:
				if (!GlobalFunc_111())
				{
					iLocal_76 = 100;
				}
				break;
			
			case 6:
				if (!GlobalFunc_111() && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_SRP", 4, 0, 0, 0))
				{
					iLocal_76++;
				}
				break;
			
			case 7:
				if (!GlobalFunc_111() && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_GO", 4, 0, 0, 0))
				{
					func_208(0);
					iLocal_76 = 100;
				}
				break;
			
			case 8:
				iLocal_191 = 1;
				if (!GlobalFunc_111() && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_INT", 4, 0, 0, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_86, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_76++;
				}
				break;
			
			case 9:
				if (!GlobalFunc_111() && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_RES", 4, 0, 0, 0))
				{
					iLocal_77 = MISC::GET_GAME_TIMER();
					iLocal_76 = iLocal_219;
				}
				break;
			
			default:
				break;
			}
	}
}

int func_236()//Position - 0x20643
{
	if (GlobalFunc_115(iLocal_86))
	{
		if (func_237())
		{
			if (!PED::IS_PED_INJURED(iLocal_81))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_86, iLocal_81, 20f, 20f, 10f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_86, iLocal_81, 17))
				{
					return 1;
				}
			}
			else if (((ENTITY::DOES_ENTITY_EXIST(iLocal_81) && ENTITY::IS_ENTITY_DEAD(iLocal_81)) && ENTITY::IS_ENTITY_AT_COORD(iLocal_86, ENTITY::GET_ENTITY_COORDS(iLocal_81, 0), 20f, 20f, 10f, 0, 1, 0)) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_86, iLocal_81, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_237()//Position - 0x206E4
{
	if (!PED::IS_PED_INJURED(iLocal_81))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_81, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), 1))
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



void func_240()//Position - 0x208E8
{
	switch (iLocal_60)
	{
		case 0:
			if ((GlobalFunc_115(iLocal_81) && GlobalFunc_115(iLocal_82)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
			{
				if (iLocal_202 == 1 || iLocal_202 == 3)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_81, iLocal_91, 20000, 0, 3f, 262145, 0);
				}
				else
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_81, iLocal_91, 20000, 0, 3f, 1, 0);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_91, 1, 1);
				PED::FORCE_PED_MOTION_STATE(iLocal_81, -1115154469, 0, 0, 0);
				iLocal_60 = 1;
			}
			else
			{
				iLocal_60 = 3;
			}
			break;
		
		case 1:
			if ((GlobalFunc_115(iLocal_81) && GlobalFunc_115(iLocal_82)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_81, iLocal_91, 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_185);
					if (iLocal_202 == 2)
					{
					}
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_91, PLAYER::PLAYER_PED_ID(), 8, 25f, 786724, -1f, -1f, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_185);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_82, uLocal_185);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_185);
					iLocal_60 = 2;
				}
			}
			else
			{
				iLocal_60 = 3;
			}
			break;
		
		case 2:
			if (iLocal_64 == 0)
			{
				if (!PED::IS_PED_INJURED(iLocal_81) && !PED::IS_PED_INJURED(iLocal_82))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
					{
						if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_91, Local_92, 30f, 30f, 5f, 0, 1, 0) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_82, 0))
						{
							TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_82, 40f);
							iLocal_64 = 1;
						}
					}
					else
					{
						iLocal_60 = 3;
					}
				}
				else
				{
					iLocal_60 = 3;
				}
			}
			break;
		
		case 3:
			if (iLocal_75 == -1)
			{
				iLocal_75 = MISC::GET_GAME_TIMER();
			}
			if (((((((iLocal_74 < 4 && (MISC::GET_GAME_TIMER() - iLocal_75) > 10000) && GlobalFunc_115(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !GlobalFunc_111()) && !PED::IS_PED_INJURED(iLocal_81)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_81, 1) < 40f) && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_YELL", 4, 0, 0, 0))
			{
				iLocal_74++;
				iLocal_75 = MISC::GET_GAME_TIMER();
			}
			break;
	}
	if (iLocal_60 < 3 && func_247())
	{
		func_242();
	}
	func_241();
}

void func_241()//Position - 0x20B0B
{
	if (((((((iLocal_190 == 1 && (MISC::GET_GAME_TIMER() - iLocal_79) > 8000) && !GlobalFunc_111()) && GlobalFunc_115(iLocal_81)) && GlobalFunc_115(iLocal_86)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_81, 20f, 20f, 20f, 0, 1, 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_81, iLocal_86, 30f, 30f, 30f, 0, 1, 0)) && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_taunt", 4, 0, 0, 0))
	{
		iLocal_79 = MISC::GET_GAME_TIMER();
	}
}

void func_242()//Position - 0x20BA7
{
	if (iLocal_65 == 0)
	{
		iLocal_65 = 1;
		iLocal_60 = 3;
		switch (iLocal_202)
		{
			case 1:
			case 2:
				if (GlobalFunc_115(iLocal_81))
				{
					if (GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_ATT", 4, 0, 0, 0))
					{
					}
					func_246(iLocal_81);
				}
				if (GlobalFunc_115(iLocal_82))
				{
					func_246(iLocal_82);
				}
				break;
			
			case 3:
				if (GlobalFunc_115(iLocal_81))
				{
					if (GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_ATT2", 4, 0, 0, 0))
					{
					}
					func_246(iLocal_81);
				}
				if (GlobalFunc_115(iLocal_82))
				{
					func_246(iLocal_82);
				}
				if (GlobalFunc_115(iLocal_83))
				{
					func_246(iLocal_83);
				}
				if (GlobalFunc_115(iLocal_84))
				{
					func_246(iLocal_84);
				}
				break;
			
			case 4:
				if (GlobalFunc_115(iLocal_81))
				{
					if (GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_BACK", 4, 0, 0, 0))
					{
					}
					func_246(iLocal_81);
				}
				if (GlobalFunc_115(iLocal_82))
				{
					func_246(iLocal_82);
				}
				if (GlobalFunc_115(iLocal_83))
				{
					func_246(iLocal_83);
				}
				if (GlobalFunc_115(iLocal_84))
				{
					func_246(iLocal_84);
				}
				while (!func_245())
				{
					SYSTEM::WAIT(0);
				}
				break;
		}
		GlobalFunc_190(&iLocal_91);
		if (PED::IS_PED_INJURED(iLocal_81) && !PED::IS_PED_INJURED(iLocal_82))
		{
			GlobalFunc_5130(iLocal_82, "GENERIC_FUCK_YOU", 24);
		}
		func_243();
	}
}

void func_243()//Position - 0x20CF0
{
	char* sVar0;
	
	switch (iLocal_202)
	{
		case 1:
			sVar0 = "RE12A_OS";
			break;
		
		case 2:
			sVar0 = "RE12B_OS";
			break;
		
		case 3:
			sVar0 = "RE13A_OS";
			break;
		
		case 4:
			sVar0 = "RE13B_OS";
			break;
	}
	while (!AUDIO::PREPARE_MUSIC_EVENT(sVar0))
	{
		SYSTEM::WAIT(0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT(sVar0);
}


int func_245()//Position - 0x20D8B
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	int iVar9;
	
	iLocal_187 = 0;
	iVar9 = 10;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_96[0], 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_96[1], 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_99[0]))
		{
			GlobalFunc_5130(iLocal_99[0], "GENERIC_FUCK_YOU", 24);
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_99[0], -1273030092) == 1)
			{
				if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_99[0]))
				{
					TASK::TASK_DRIVE_BY(iLocal_99[0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 70, 1, -753768974);
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_99[1]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_99[1], -1273030092) == 1)
			{
				if (!TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_99[1]))
				{
					TASK::TASK_DRIVE_BY(iLocal_99[1], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 70, 1, -753768974);
				}
			}
		}
		return 1;
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("hexer"));
		if (STREAMING::HAS_MODEL_LOADED(joaat("hexer")))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
				if (VEHICLE::_0xA4822F1CF23F4810(&Var6, &Var0, &Var3, 0, 1127481344, 75f, 0, 1, 1))
				{
					iLocal_187 = 0;
					while (iLocal_187 < 2)
					{
						Var0.x = (Var0.x + SYSTEM::TO_FLOAT(iLocal_187));
						uLocal_96[iLocal_187] = VEHICLE::CREATE_VEHICLE(joaat("hexer"), Var0, Var3.f_2, 1, 1);
						iLocal_99[iLocal_187] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_96[iLocal_187], 22, iLocal_221, -1, 1, 1);
						iLocal_102[iLocal_187] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_96[iLocal_187], 22, iLocal_221, 0, 1, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_102[iLocal_187], uLocal_577);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_99[iLocal_187], uLocal_577);
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							TASK::TASK_VEHICLE_MISSION(iLocal_99[iLocal_187], uLocal_96[iLocal_187], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iVar9, 40f, 786469, 5f, 10f, 1);
						}
						else
						{
							TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_99[iLocal_187], uLocal_96[iLocal_187], PLAYER::PLAYER_PED_ID(), iVar9, 40f, 786469, 5f, 10f, 1);
						}
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_99[iLocal_187], joaat("weapon_sawnoffshotgun"), 999999, 1, 1);
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_96[iLocal_187], ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()));
						iVar9 = 11;
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_102[iLocal_187], joaat("weapon_sawnoffshotgun"), 999999, 1, 1);
						TASK::TASK_DRIVE_BY(iLocal_102[iLocal_187], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 200f, 70, 0, -753768974);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_99[iLocal_187], 3);
						PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_102[iLocal_187], 3);
						PED::SET_PED_ACCURACY(iLocal_99[iLocal_187], 15);
						PED::SET_PED_ACCURACY(iLocal_102[iLocal_187], 15);
						iLocal_187++;
					}
				}
			}
		}
	}
	return 0;
}

void func_246(int iParam0)//Position - 0x21015
{
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 1);
	TASK::TASK_COMBAT_PED(iParam0, PLAYER::PLAYER_PED_ID(), 0, 16);
}

int func_247()//Position - 0x21032
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_91, 0))
		{
			return 1;
		}
		if (GlobalFunc_115(iLocal_81))
		{
			if (iLocal_60 > 1)
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_81, iLocal_91, 0))
				{
					return 1;
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_81, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
			if (PED::IS_PED_BEING_JACKED(iLocal_81))
			{
				return 1;
			}
			if ((iLocal_60 == 1 && !PED::IS_PED_IN_VEHICLE(iLocal_81, iLocal_91, 1)) && !VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_81, iLocal_91, 0, 0, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (GlobalFunc_115(iLocal_82))
		{
			if (PED::IS_PED_BEING_JACKED(iLocal_82))
			{
				return 1;
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_82, iLocal_91, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
		if (func_250())
		{
			return 1;
		}
		if ((((ENTITY::IS_ENTITY_IN_WATER(iLocal_91) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_91, 2, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_91, 3, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_91, 0, 10000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_91, 1, 10000))
		{
			return 1;
		}
		if (func_248())
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

int func_248()//Position - 0x21163
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91, 20f, 20f, 10f, 0, 1, 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_91, PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_188++;
				iLocal_190 = 1;
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_91);
			}
			if (iLocal_188 > 25)
			{
				return 1;
			}
		}
	}
	if (iLocal_190 == 1)
	{
		func_249();
	}
	return 0;
}

void func_249()//Position - 0x211C7
{
	if (iLocal_65 == 0)
	{
		if ((GlobalFunc_115(iLocal_81) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_81, 0)) && !PED::IS_PED_IN_COMBAT(iLocal_81, 0))
		{
			TASK::TASK_DRIVE_BY(iLocal_81, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 60, 0, -753768974);
		}
		if ((((GlobalFunc_115(iLocal_82) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_82, 0)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_82, -1273030092) == 1) && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_82)) && !PED::IS_PED_IN_COMBAT(iLocal_82, 0))
		{
			TASK::TASK_DRIVE_BY(iLocal_82, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 30f, 60, 1, -753768974);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iLocal_82, 40f);
		}
		if ((GlobalFunc_115(iLocal_83) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, 0)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_83, 242628503) == 7)
		{
			TASK::TASK_DRIVE_BY(iLocal_83, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 60, 0, -753768974);
		}
		if ((GlobalFunc_115(iLocal_84) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0)) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_84, 242628503) == 7)
		{
			TASK::TASK_DRIVE_BY(iLocal_84, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 100f, 60, 0, -753768974);
		}
	}
}

int func_250()//Position - 0x212FC
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
	{
		if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_91, 0, 0) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_91, 1, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_91, 4, 0)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_91, 5, 0))
		{
			return 1;
		}
	}
	return 0;
}






















int func_272(var uParam0)//Position - 0x221D1
{
	return GlobalFunc_5666(uParam0);
}



int func_275()//Position - 0x2222E
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_81) && ENTITY::GET_ENTITY_SPEED(iLocal_81) < 1f)
	{
		return 1;
	}
	return 0;
}




int func_279()//Position - 0x22356
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_91))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91, fLocal_589, fLocal_589, fLocal_589, 0, 0, 0) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_91))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_81))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_81, fLocal_589, fLocal_589, fLocal_589, 0, 0, 0) || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_81))
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

void func_280()//Position - 0x223CE
{
	if (iLocal_194 == 1)
	{
		if (GlobalFunc_115(iLocal_86) && ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_86, sLocal_582, sLocal_583, 3))
		{
			ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_86, sLocal_582, sLocal_583, 1.4f);
		}
		if (GlobalFunc_115(iLocal_81))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_81, sLocal_582, sLocal_584, 3))
			{
				ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_81, sLocal_582, sLocal_584, 1.4f);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0) && !func_247())
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_81, sLocal_582, sLocal_584, 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_81, sLocal_582, sLocal_584) > 0.75f)
				{
					iLocal_59 = 3;
					iLocal_60 = 0;
				}
			}
			else
			{
				func_282();
				iLocal_59 = 3;
				iLocal_60 = 3;
			}
		}
		else
		{
			func_282();
			iLocal_59 = 3;
			iLocal_60 = 3;
		}
	}
	else
	{
		GlobalFunc_4935();
		if (GlobalFunc_115(iLocal_86))
		{
			if ((!GlobalFunc_111() && GlobalFunc_10652(&uLocal_247, "RECHAAU", "RECHA_STO", 4, 0, 0, 0)) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_86, 1) < 20f)
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_185);
				TASK::TASK_PLAY_ANIM(0, sLocal_582, sLocal_583, 8f, -4f, 8200, 0, 0, 0, 0, 0);
				if (GlobalFunc_115(iLocal_81))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_86, 10f, 10f, 10f, 0, 1, 0))
					{
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					}
					else
					{
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_91, -1, 2048, 2);
					}
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_176, 2f, 20000, 2f, 8192, 1193033728);
					TASK::TASK_PLAY_ANIM(0, sLocal_585, sLocal_586, 8f, -8f, -1, 0, 0, 0, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uLocal_185);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_86, uLocal_185);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_185);
				if (GlobalFunc_115(iLocal_81))
				{
					TASK::TASK_PLAY_ANIM(iLocal_81, sLocal_582, sLocal_584, 8f, -4f, -1, 0, 0, 0, 0, 0);
				}
				iLocal_194 = 1;
			}
		}
	}
}


void func_282()//Position - 0x225B7
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	if (GlobalFunc_115(iLocal_81))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_81, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if (GlobalFunc_115(iLocal_82))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_82, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_82, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
	if (GlobalFunc_115(iLocal_83))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar1);
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_83, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar1);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_83, uVar1);
		TASK::CLEAR_SEQUENCE_TASK(&uVar1);
	}
	if (GlobalFunc_115(iLocal_84))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar2);
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_84, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
		}
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar2);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_84, uVar2);
		TASK::CLEAR_SEQUENCE_TASK(&uVar2);
	}
}

void func_283()//Position - 0x226A9
{
	if ((iLocal_65 == 1 || iLocal_66 == 1) || iLocal_190 == 1)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_173))
		{
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_173, 1);
			if (HUD::GET_BLIP_COLOUR(uLocal_173) == 1)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(uLocal_173, 0);
				HUD::SET_BLIP_COLOUR(uLocal_173, 1);
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_173))
		{
			HUD::SHOW_HEIGHT_ON_BLIP(uLocal_173, 0);
			func_284(uLocal_173, &uLocal_189);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_91, 0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91, 25f, 25f, 25f, 0, 0, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_91) > 5f)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_80 + 5000)
				{
					iLocal_66 = 1;
				}
			}
			else
			{
				iLocal_80 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_284(var uParam0, var uParam1)//Position - 0x22760
{
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (HUD::GET_BLIP_COLOUR(uParam0) == 1)
			{
				HUD::SET_BLIP_AS_FRIENDLY(uParam0, 1);
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(uParam0, 0);
				HUD::SET_BLIP_COLOUR(uParam0, 1);
			}
			*uParam1 = MISC::GET_GAME_TIMER();
		}
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && GlobalFunc_4714(0))
		{
			GlobalFunc_6567(1);
		}
	}
}


void func_286(int iParam0)//Position - 0x227D0
{
	if (iParam0 == 1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CHASE_THIEVES_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("RE_CHASE_THIEVES_SCENE");
			if (GlobalFunc_115(iLocal_91))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_91, "RE_CHASE_THIEVES_BIKE", 0);
				AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_91, 2);
			}
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CHASE_THIEVES_SCENE"))
	{
		if (GlobalFunc_115(iLocal_91))
		{
			AUDIO::SET_AUDIO_VEHICLE_PRIORITY(iLocal_91, 0);
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_91, 0);
		}
		AUDIO::STOP_AUDIO_SCENE("RE_CHASE_THIEVES_SCENE");
	}
}

var func_287(int iParam0, bool bParam1, int iParam2)//Position - 0x2283B
{
	iParam2 = iParam2;
	return GlobalFunc_6829(iParam0, bParam1, 145);
}











int func_298()//Position - 0x22D99
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iLocal_202 == 1)
	{
		Var0 = { 18.22177f, -141.8601f, 65.03339f };
		Var3 = { 212.9326f, -210.4915f, 46.54869f };
		fVar6 = 167.5f;
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_203, 20f, 20f, 20f, 0, 1, 0)) || MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var3, fVar6, 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Var0, Var3, fVar6, joaat("weapon_rpg"), 0)) || PED::IS_PED_INJURED(iLocal_81))
		{
			return 1;
		}
	}
	else if (iLocal_202 == 2)
	{
		Var0 = { 445.474f, -851.1226f, 26.59859f };
		Var3 = { 211.7756f, -850.9274f, 39.31448f };
		fVar6 = 100f;
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_206, 20f, 20f, 20f, 0, 1, 0)) || MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var3, fVar6, 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Var0, Var3, fVar6, joaat("weapon_rpg"), 0)) || PED::IS_PED_INJURED(iLocal_81))
		{
			return 1;
		}
	}
	else if (iLocal_202 == 3)
	{
		Var0 = { 1665.565f, 4932.071f, 51.11494f };
		Var3 = { 1695.932f, 4731.498f, 34.67516f };
		fVar6 = 96.75f;
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_176, 20f, 20f, 20f, 0, 1, 0)) || MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var3, fVar6, 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Var0, Var3, fVar6, joaat("weapon_rpg"), 0)) || PED::IS_PED_INJURED(iLocal_81))
		{
			return 1;
		}
	}
	else if (iLocal_202 == 4)
	{
		Var0 = { 1322.306f, 2690.29f, 46.55696f };
		Var3 = { 1092.25f, 2690.501f, 31.29549f };
		fVar6 = 197.25f;
		if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, fVar6, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_176, 20f, 20f, 20f, 0, 1, 0)) || MISC::IS_BULLET_IN_ANGLED_AREA(Var0, Var3, fVar6, 1)) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Var0, Var3, fVar6, joaat("weapon_rpg"), 0)) || PED::IS_PED_INJURED(iLocal_81))
		{
			return 1;
		}
	}
	return 0;
}














void func_312()//Position - 0x24C6D
{
	var uVar0[2];
	struct<3> Var3[2];
	float fVar10[2];
	
	MISC::CLEAR_AREA(Local_87, 20f, 1, 0, 0, 0);
	iLocal_86 = PED::CREATE_PED(26, iLocal_222, Local_87, fLocal_90, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_86, 1, 0);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, 1);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_86, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_86, 128, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_86, 285, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_86, "S_M_Y_BusBoy_01_WHITE_MINI_01");
	if (!GlobalFunc_105(Local_181))
	{
		iLocal_180 = VEHICLE::CREATE_VEHICLE(iLocal_224, Local_181, fLocal_184, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_180);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_180, 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_180, 0);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_180, 10f);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_224);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_86, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_86, 0);
	PED::SET_PED_MONEY(iLocal_86, 0);
	PED::SET_PED_LOD_MULTIPLIER(iLocal_86, 1.5f);
	iLocal_81 = PED::CREATE_PED(26, iLocal_221, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_86, Local_242), fLocal_85, 1, 1);
	iLocal_91 = VEHICLE::CREATE_VEHICLE(iLocal_223, Local_92, fLocal_95, 1, 1);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_91);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_223, 1);
	VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_91, 1);
	VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_91, 1);
	VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_91, 1, 1);
	PED::ADD_RELATIONSHIP_GROUP("re_chasethieves badGuys", &uLocal_577);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_577, 1862763509);
	switch (iLocal_202)
	{
		case 1:
			iLocal_82 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_91, 22, iLocal_221, -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_82, joaat("weapon_pistol"), -1, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_81, joaat("weapon_pistol"), -1, 0, 1);
			func_313(iLocal_82);
			func_313(iLocal_81);
			break;
		
		case 2:
			iLocal_82 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_91, 22, iLocal_221, -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_82, joaat("weapon_sawnoffshotgun"), -1, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_81, joaat("weapon_pistol"), -1, 0, 1);
			func_313(iLocal_82);
			func_313(iLocal_81);
			break;
		
		case 3:
			iLocal_82 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_91, 22, iLocal_221, -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_82, joaat("weapon_pistol"), -1, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_81, joaat("weapon_pistol"), -1, 0, 1);
			func_313(iLocal_82);
			func_313(iLocal_81);
			if (iLocal_223 == joaat("gburrito"))
			{
				iLocal_83 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_91, 22, iLocal_221, 1, 1, 1);
				iLocal_84 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_91, 22, iLocal_221, 2, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_83, joaat("weapon_pistol"), -1, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_84, joaat("weapon_pistol"), -1, 0, 1);
				func_313(iLocal_83);
				func_313(iLocal_84);
			}
			break;
		
		case 4:
			iLocal_82 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_91, 22, iLocal_221, -1, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_82, joaat("weapon_pistol"), -1, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_81, joaat("weapon_pistol"), -1, 0, 1);
			func_313(iLocal_82);
			func_313(iLocal_81);
			if (iLocal_223 == joaat("gburrito"))
			{
				iLocal_83 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_91, 22, iLocal_221, 1, 1, 1);
				iLocal_84 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_91, 22, iLocal_221, 2, 1, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_83, joaat("weapon_pistol"), -1, 0, 1);
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_84, joaat("weapon_pistol"), -1, 0, 1);
				func_313(iLocal_83);
				func_313(iLocal_84);
			}
			break;
	}
	if (GlobalFunc_8329() == 0)
	{
		GlobalFunc_173(&uLocal_247, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		iLocal_72 = 1;
		iLocal_74 = 9;
		iLocal_73 = 1;
	}
	if (GlobalFunc_8329() == 1)
	{
		GlobalFunc_173(&uLocal_247, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		iLocal_72 = 1;
		iLocal_74 = 9;
		iLocal_73 = 1;
	}
	if (GlobalFunc_8329() == 2)
	{
		GlobalFunc_173(&uLocal_247, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		iLocal_72 = 0;
		iLocal_74 = 0;
		iLocal_73 = 0;
	}
	GlobalFunc_173(&uLocal_247, 3, iLocal_86, "ChaseWorker", 0, 1);
	GlobalFunc_173(&uLocal_247, 4, iLocal_81, "ChaseThief", 0, 1);
	if (iLocal_202 == 2)
	{
	}
	else
	{
		VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_91, 1, 0, 0);
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_81, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, sLocal_581, Local_230, Local_233, 0, 2), 0, 0, 1);
	Local_236 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_579, sLocal_581, Local_230, Local_233, 0, 2) };
	ENTITY::SET_ENTITY_HEADING(iLocal_81, Local_236.f_2);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_86, PED::GET_ANIM_INITIAL_OFFSET_POSITION(sLocal_579, sLocal_580, Local_230, Local_233, 0, 2), 0, 0, 1);
	Local_236 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(sLocal_579, sLocal_580, Local_230, Local_233, 0, 2) };
	ENTITY::SET_ENTITY_HEADING(iLocal_86, Local_236.f_2);
	TASK::TASK_PLAY_ANIM(iLocal_81, sLocal_579, sLocal_581, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(iLocal_86, sLocal_579, sLocal_580, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	if (iLocal_202 == 2)
	{
		PED::GIVE_PED_HELMET(iLocal_81, 1, 4096, -1);
		Var3[0 /*3*/] = { 381.5702f, -867.3578f, 28.1573f };
		Var3[1 /*3*/] = { 379.5334f, -867.1062f, 28.1713f };
		fVar10[0] = 236.3457f;
		fVar10[1] = 232.1922f;
		iLocal_187 = 0;
		while (iLocal_187 <= 1)
		{
			uVar0[iLocal_187] = VEHICLE::CREATE_VEHICLE(iLocal_223, Var3[iLocal_187 /*3*/], fVar10[iLocal_187], 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uVar0[iLocal_187]);
			iLocal_187++;
		}
	}
	if (iLocal_202 == 3)
	{
		uLocal_186 = PED::ADD_SCENARIO_BLOCKING_AREA(1608.8f, 4824.81f, 0f, 1730.9f, 4856.1f, 51.1f, 0, 1, 1, 1);
		MISC::CLEAR_AREA_OF_PEDS(1973.98f, 4817.32f, 41.53f, 10f, 0);
	}
	MISC::SET_BIT(&uLocal_216, 5);
	MISC::SET_BIT(&uLocal_216, 4);
	MISC::SET_BIT(&uLocal_216, 0);
	MISC::SET_BIT(&uLocal_216, 1);
	if (iLocal_578 == 0)
	{
		iLocal_578 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(99, Local_61, 60000f);
	}
}

void func_313(int iParam0)//Position - 0x2519A
{
	if (GlobalFunc_115(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 128, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 0);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, 1, 0);
		PED::SET_PED_CONFIG_FLAG(iParam0, 42, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 36, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 101, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 281, 1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 20, 0);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iParam0, 1);
		PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iParam0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, uLocal_577);
		PED::SET_PED_MONEY(iParam0, 0);
		PED::SET_PED_ACCURACY(iParam0, 15);
		PED::SET_PED_RESET_FLAG(iParam0, 237, 1);
		AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, "G_M_Y_Lost_02_WHITE_FULL_01");
	}
}

int func_314()//Position - 0x2525B
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_579);
	STREAMING::REQUEST_ANIM_DICT(sLocal_582);
	STREAMING::REQUEST_ANIM_DICT(sLocal_585);
	VEHICLE::REQUEST_VEHICLE_ASSET(iLocal_223, 3);
	if (Local_593.f_32 <= 0)
	{
		Local_593.f_32 = MISC::GET_FRAME_COUNT();
	}
	GlobalFunc_7550(&Local_593, iLocal_221);
	GlobalFunc_7550(&Local_593, iLocal_222);
	GlobalFunc_7550(&Local_593, iLocal_223);
	GlobalFunc_7550(&Local_593, iLocal_224);
	GlobalFunc_7550(&Local_593, iLocal_225);
	GlobalFunc_4719(&Local_593, 2);
	if ((((STREAMING::HAS_ANIM_DICT_LOADED(sLocal_579) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_582)) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_585)) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(iLocal_223)) && func_315(&Local_593))
	{
		return 1;
	}
	return 0;
}

int func_315(var uParam0)//Position - 0x25304
{
	int iVar0;
	
	if (!uParam0->f_31)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 29))
			{
				return 0;
			}
			if (!func_316(uParam0[iVar0 /*2*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_31 = 0;
	return 1;
}

bool func_316(var uParam0)//Position - 0x25366
{
	return func_317(*uParam0, "NULL", uParam0->f_1);
}

int func_317(var uParam0, char* sParam1, int iParam2)//Position - 0x2537B
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(uParam0, 29))
		{
			switch (GlobalFunc_2270(uParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(uParam0, 27));
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}






int func_323()//Position - 0x25625
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_55) < (75f * 75f))
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





void func_328()//Position - 0x2582A
{
	iLocal_225 = joaat("prop_ld_wallet_pickup");
	if (iLocal_202 == 1)
	{
		fLocal_85 = 339.6604f;
		Local_87 = { 103.8348f, -216.6055f, 53.6412f };
		fLocal_90 = 319.2591f;
		Local_92 = { 113.8783f, -193.8459f, 53.4281f };
		fLocal_95 = 265.1665f;
		Local_176 = { 116.9988f, -197.4567f, 53.6658f };
		Local_181 = { 0f, 0f, 0f };
		fLocal_184 = 0f;
		Local_230 = { 110.9119f, -196.8555f, 53.6768f };
		Local_233 = { 0f, 0f, 140f };
		iLocal_221 = joaat("g_m_y_lost_02");
		iLocal_222 = joaat("s_m_y_busboy_01");
		iLocal_223 = joaat("gburrito");
		iLocal_198 = 2000;
		sLocal_579 = "RANDOM@CHASETHIEVES1";
		sLocal_580 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_581 = "STRUGGLE_Loop_A_Thief";
		sLocal_226 = "RANDOM@CHASETHIEVES1";
		sLocal_227 = "Return_Wallet_Positive_A_Player";
		sLocal_228 = "Return_Wallet_Positive_A_Male";
		sLocal_229 = "Return_Wallet_Positive_A_Cam";
	}
	else if (iLocal_202 == 2)
	{
		fLocal_85 = 353.554f;
		Local_87 = { 346.1016f, -874.9264f, 28.2916f };
		fLocal_90 = 33.5758f;
		Local_92 = { 321.6273f, -841.5636f, 28.1381f };
		fLocal_95 = 109.3726f;
		Local_176 = { 327.0495f, -839.6594f, 28.2922f };
		Local_181 = { 0f, 0f, 0f };
		fLocal_184 = 0f;
		Local_230 = { 330.2017f, -838.6019f, 28.2922f };
		Local_233 = { 0f, 0f, 287.6646f };
		iLocal_221 = joaat("g_m_y_lost_02");
		iLocal_222 = joaat("s_m_y_busboy_01");
		iLocal_223 = joaat("hexer");
		iLocal_198 = 500;
		sLocal_579 = "RANDOM@CHASETHIEVES2";
		sLocal_580 = "STRUGGLE_Loop_B_Shopkeeper";
		sLocal_581 = "STRUGGLE_Loop_B_Thief";
		sLocal_226 = "RANDOM@CHASETHIEVES2";
		sLocal_227 = "Return_Wallet_Positive_B_Player";
		sLocal_228 = "Return_Wallet_Positive_B_Male";
		sLocal_229 = "Return_Wallet_Positive_B_Cam";
	}
	else if (iLocal_202 == 3)
	{
		fLocal_85 = 194.6499f;
		Local_87 = { 1660.545f, 4864.651f, 40.154f };
		fLocal_90 = 194.6499f;
		Local_92 = { 1665.747f, 4824.582f, 40.896f };
		fLocal_95 = 203.4643f;
		Local_230 = { 1661.568f, 4827.771f, 41.0597f };
		Local_233 = { 0f, 0f, 30f };
		Local_176 = { 1663.009f, 4827.769f, 41.1046f };
		Local_181 = { 1653.974f, 4826.029f, 41.0037f };
		fLocal_184 = 277.9738f;
		iLocal_221 = joaat("g_m_y_lost_02");
		iLocal_222 = joaat("s_m_y_busboy_01");
		iLocal_223 = joaat("gburrito");
		iLocal_198 = 250;
		sLocal_579 = "RANDOM@CHASETHIEVES3";
		sLocal_580 = "STRUGGLE_Loop_C_Shopkeeper";
		sLocal_581 = "STRUGGLE_Loop_C_Thief";
		sLocal_226 = "RANDOM@CHASETHIEVES3";
		sLocal_227 = "Return_Wallet_Positive_C_Player";
		sLocal_228 = "Return_Wallet_Positive_C_Male";
		sLocal_229 = "Return_Wallet_Positive_C_Cam";
	}
	else if (iLocal_202 == 4)
	{
		fLocal_85 = 84.7987f;
		Local_87 = { 1218.718f, 2715.338f, 37.0041f };
		fLocal_90 = 148.661f;
		Local_92 = { 1207.095f, 2694.214f, 36.7963f };
		fLocal_95 = 226.0923f;
		Local_176 = { 1213.264f, 2690.394f, 36.5998f };
		Local_181 = { 1207.287f, 2706.879f, 37.0047f };
		fLocal_184 = 179.416f;
		Local_230 = { 1201.656f, 2696.762f, 36.9226f };
		Local_233 = { 0f, 0f, 42.7858f };
		iLocal_221 = joaat("g_m_y_lost_02");
		iLocal_222 = joaat("s_m_y_busboy_01");
		iLocal_223 = joaat("gburrito");
		iLocal_198 = 120;
		sLocal_579 = "RANDOM@CHASETHIEVES1";
		sLocal_580 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_581 = "STRUGGLE_Loop_A_Thief";
		sLocal_226 = "RANDOM@CHASETHIEVES1";
		sLocal_227 = "Return_Wallet_Positive_A_Player";
		sLocal_228 = "Return_Wallet_Positive_A_Male";
		sLocal_229 = "Return_Wallet_Positive_A_Cam";
	}
}

int func_329()//Position - 0x25B6C
{
	int iVar0;
	
	if (GlobalFunc_2046(11, 1))
	{
		iVar0++;
	}
	if (GlobalFunc_2046(11, 2))
	{
		iVar0++;
	}
	if (GlobalFunc_2046(11, 3))
	{
		iVar0++;
	}
	if (GlobalFunc_2046(11, 4))
	{
		iVar0++;
	}
	return iVar0;
}







int func_336(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x25E51
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
	Local_55 = { Param0 };
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
		if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
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
			if ((Var1.f_2 - Local_55.f_2) > 50f)
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









































Vector3 func_377()//Position - 0x27451
{
	float fVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_203, 1);
		iLocal_202 = 1;
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_206, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_206, 1);
			iLocal_202 = 2;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_209, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_209, 1);
			iLocal_202 = 3;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_212, 1) < fVar0)
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_212, 1);
			iLocal_202 = 4;
		}
		if (iLocal_202 == 1)
		{
			return Local_203;
		}
		if (iLocal_202 == 2)
		{
			return Local_206;
		}
		if (iLocal_202 == 3)
		{
			return Local_209;
		}
		if (iLocal_202 == 4)
		{
			return Local_212;
		}
	}
	return 0f, 0f, 0f;
}

void func_378()//Position - 0x2753F
{
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_186, 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_221);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_222);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_223);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_224);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_225);
	STREAMING::REMOVE_ANIM_DICT(sLocal_579);
	STREAMING::REMOVE_ANIM_DICT(sLocal_582);
	STREAMING::REMOVE_ANIM_DICT(sLocal_226);
	STREAMING::REMOVE_ANIM_DICT(sLocal_588);
	STREAMING::REMOVE_ANIM_DICT(sLocal_585);
	VEHICLE::REMOVE_VEHICLE_ASSET(iLocal_223);
	if (iLocal_628)
	{
		PED::SET_CREATE_RANDOM_COPS(1);
		PLAYER::SET_MAX_WANTED_LEVEL(6);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	if (GlobalFunc_115(iLocal_86))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_86, 0);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_86, 1);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_86, 1);
		if (((iLocal_201 == 0 && iLocal_71 == 0) && !GlobalFunc_6964(iLocal_86, 1805844857)) && !PED::IS_PED_RUNNING_MOBILE_PHONE_TASK(iLocal_86))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_86, "WORLD_HUMAN_STAND_MOBILE", 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_86, 0, 0);
		}
		PED::SET_PED_KEEP_TASK(iLocal_86, 1);
	}
	func_286(0);
	GlobalFunc_200(&uLocal_247, 0);
	GlobalFunc_200(&uLocal_247, 1);
	GlobalFunc_200(&uLocal_247, 2);
	GlobalFunc_200(&uLocal_247, 3);
	GlobalFunc_200(&uLocal_247, 4);
	func_230();
	func_214();
	GlobalFunc_190(&iLocal_91);
	GlobalFunc_190(&iLocal_180);
	GlobalFunc_190(&iLocal_105);
	GlobalFunc_2297(&iLocal_86, 1, 0, 1);
	GlobalFunc_130(&uLocal_172);
	if (iLocal_578 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_578);
	}
	GlobalFunc_4948(&uLocal_20, 0, 0);
	func_392(&Local_593, 0);
	GlobalFunc_10823(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}














void func_392(var uParam0, bool bParam1)//Position - 0x27F5D
{
	int iVar0;
	
	if (!bParam1)
	{
		func_394(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		GlobalFunc_4708(uParam0[iVar0 /*2*/]);
		iVar0++;
	}
	uParam0->f_31 = 0;
	uParam0->f_32 = -1;
	uParam0->f_33 = 1;
}


void func_394(var uParam0)//Position - 0x27FAE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*2*/], 30))
		{
			func_395(uParam0[iVar0 /*2*/]);
		}
		iVar0++;
	}
	uParam0->f_31 = 1;
}

void func_395(var uParam0)//Position - 0x27FE7
{
	GlobalFunc_6519(*uParam0, "NULL", uParam0->f_1);
}



void func_398()//Position - 0x280DD
{
	if (!bLocal_69)
	{
		GlobalFunc_82();
		GlobalFunc_7068();
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
	}
	func_399(11, iLocal_202);
	func_378();
}

void func_399(int iParam0, int iParam1)//Position - 0x2811C
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
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_55.x, Local_55.f_1);
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















