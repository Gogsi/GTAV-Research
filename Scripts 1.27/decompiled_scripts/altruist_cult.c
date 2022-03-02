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
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	struct<3> Local_50[16];
	float fLocal_99[16] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	struct<3> Local_116 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	struct<3> Local_125 = { 0, 0, 0 } ;
	float fLocal_128 = 0f;
	struct<3> Local_129 = { 0, 0, 0 } ;
	struct<3> Local_132 = { 0, 0, 0 } ;
	float fLocal_135 = 0f;
	struct<3> Local_136 = { 0, 0, 0 } ;
	struct<3> Local_139 = { 0, 0, 0 } ;
	float fLocal_142 = 0f;
	struct<3> Local_143 = { 0, 0, 0 } ;
	struct<3> Local_146 = { 0, 0, 0 } ;
	float fLocal_149 = 0f;
	struct<3> Local_150 = { 0, 0, 0 } ;
	struct<3> Local_153 = { 0, 0, 0 } ;
	float fLocal_156 = 0f;
	struct<3> Local_157 = { 0, 0, 0 } ;
	struct<3> Local_160 = { 0, 0, 0 } ;
	float fLocal_163 = 0f;
	struct<3> Local_164 = { 0, 0, 0 } ;
	struct<3> Local_167 = { 0, 0, 0 } ;
	float fLocal_170 = 0f;
	bool bLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	bool bLocal_174 = 0;
	int iLocal_175 = 0;
	bool bLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	bool bLocal_179 = 0;
	int iLocal_180 = 0;
	float fLocal_181 = 0f;
	float fLocal_182 = 0f;
	float fLocal_183 = 0f;
	float fLocal_184 = 0f;
	var uLocal_185 = 0;
	int iLocal_186 = 0;
	var uLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	var uLocal_192[2] = { 0, 0 };
	int iLocal_195[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	var uLocal_215[4] = { 0, 0, 0, 0 };
	int iLocal_220[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_227 = 0;
	var uLocal_228[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	var uLocal_271 = 8;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 4;
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
	var uLocal_290 = 4;
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
	var uLocal_305 = 4;
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
	var uLocal_320 = 4;
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
	var uLocal_335 = 4;
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
	var uLocal_350 = 4;
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
	var uLocal_365 = 4;
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
	var uLocal_380 = 4;
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
	int iLocal_399 = 0;
	char[] cLocal_400[8] = 0;
	char* sLocal_401 = NULL;
	char* sLocal_402 = NULL;
	char* sLocal_403 = NULL;
	char* sLocal_404 = NULL;
	char* sLocal_405 = NULL;
	char* sLocal_406 = NULL;
	char* sLocal_407 = NULL;
	char* sLocal_408 = NULL;
	var uLocal_409 = 0;
	var uLocal_410 = 16;
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
	int iLocal_575 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	int iVar1;
	
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
	fLocal_45 = -1f;
	Local_116 = { -1109.213f, 4914.744f, 216.101f };
	Local_119 = { -1034.6f, 4918.6f, 205.9f };
	Local_122 = { -1066.963f, 4873.13f, 207.3281f };
	Local_125 = { -1112.946f, 4986.957f, 241.133f };
	fLocal_128 = 72.3125f;
	Local_129 = { -1138.386f, 4872.04f, 207.5488f };
	Local_132 = { -1091.959f, 4983.27f, 241.1698f };
	fLocal_135 = 57.8125f;
	Local_136 = { -1171.648f, 4888.658f, 211.0756f };
	Local_139 = { -1137.907f, 4926.572f, 240.999f };
	fLocal_142 = 17.9375f;
	Local_143 = { -1177.981f, 4903.231f, 212.477f };
	Local_146 = { -1153.398f, 4902.631f, 241.155f };
	fLocal_149 = 17.9375f;
	Local_150 = { -1175.693f, 4904.839f, 207.5207f };
	Local_153 = { -1142.08f, 4985.32f, 241.2887f };
	fLocal_156 = 36.375f;
	Local_157 = { -1106.212f, 4860.086f, 206.1207f };
	Local_160 = { -1105.016f, 4873.854f, 241.1453f };
	fLocal_163 = 11.5625f;
	Local_164 = { -1044.268f, 4916.587f, 209.8365f };
	Local_167 = { -1063.605f, 4972.88f, 241.1299f };
	fLocal_170 = 12.875f;
	iLocal_191 = 4;
	cLocal_400 = "REPLAY_TMG";
	sLocal_401 = "CMN_TDIED";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(26))
	{
		func_172();
	}
	if (MISC::GET_IS_PLAYER_IN_ANIMAL_FORM())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_172)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			switch (iLocal_49)
			{
				case 0:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED >= iLocal_191 && !GlobalFunc_832())
						{
							iLocal_49 = 2;
						}
						func_168();
						func_165();
					}
					break;
				
				case 1:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::TIMERA() > 2000)
						{
							if (iLocal_186 == 1)
							{
								func_164();
							}
							else if (iLocal_186 == 2)
							{
								func_143();
							}
						}
						if (SYSTEM::TIMERA() > 1300)
						{
							if (iLocal_188 < 3)
							{
								func_142();
							}
							else
							{
								func_141();
							}
						}
						if (iLocal_173)
						{
							GlobalFunc_8964(26, 1);
							iLocal_173 = 0;
							iLocal_49 = 0;
						}
					}
					break;
				
				case 2:
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						func_107();
					}
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[9 /*31*/], 0, 0, 1);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[10 /*31*/], 0, 0, 1);
					break;
				
				case 4:
					if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						iLocal_49 = 3;
						break;
					}
					bLocal_174 = false;
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					iVar0 = 0;
					while (iVar0 < iLocal_195)
					{
						if (PED::IS_PED_INJURED(iLocal_195[iVar0]))
						{
							if (HUD::DOES_BLIP_EXIST(uLocal_228[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uLocal_228[iVar0]));
							}
						}
						else
						{
							if (TASK::IS_PED_IN_WRITHE(iLocal_195[iVar0]))
							{
								if (HUD::DOES_BLIP_EXIST(uLocal_228[iVar0]))
								{
									HUD::REMOVE_BLIP(&(uLocal_228[iVar0]));
								}
							}
							else if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_195[iVar0], PLAYER::PLAYER_PED_ID(), 30f, 30f, 30f, 0, 1, 0))
							{
								if (!GlobalFunc_111())
								{
									if (iLocal_190 < MISC::GET_GAME_TIMER())
									{
										iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
										if (iVar1 == 0)
										{
											GlobalFunc_10641(&uLocal_410, "ACULTAU", "ACULT_SHOUT", 4, 0, 0, 0);
										}
										else if (iVar1 == 1)
										{
											GlobalFunc_173(&uLocal_410, 1, iLocal_195[iVar0], "ACULTMember1", 0, 1);
											GlobalFunc_10641(&uLocal_410, "ACULTAU", "ACULT_FIGHT1", 4, 0, 0, 0);
										}
										else if (iVar1 == 2)
										{
											GlobalFunc_173(&uLocal_410, 2, iLocal_195[iVar0], "ACULTMember2", 0, 1);
											GlobalFunc_10641(&uLocal_410, "ACULTAU", "ACULT_FIGHT2", 4, 0, 0, 0);
										}
										iLocal_190 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6000));
									}
								}
							}
							bLocal_174 = true;
						}
						iVar0++;
					}
					if (!bLocal_174)
					{
						func_59();
					}
					break;
				
				case 3:
					if (!iLocal_172)
					{
						uLocal_248 = GlobalFunc_816();
						if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_248))
						{
							break;
						}
						GlobalFunc_815(&uLocal_253, 0);
						iLocal_172 = 1;
					}
					if (func_28(&uLocal_253, &uLocal_259, &uLocal_248, cLocal_400, sLocal_401, &bLocal_171, 78))
					{
						iLocal_189 = 0;
						PED::REMOVE_RELATIONSHIP_GROUP(uLocal_409);
						TASK::REMOVE_COVER_POINT(uLocal_247);
						iVar0 = 0;
						while (iVar0 < iLocal_195)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[iVar0]))
							{
								PED::DELETE_PED(&(iLocal_195[iVar0]));
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < iLocal_220)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_220[iVar0]))
							{
								OBJECT::DELETE_OBJECT(&(iLocal_220[iVar0]));
							}
							iVar0++;
						}
						if (CAM::DOES_CAM_EXIST(uLocal_245))
						{
							CAM::SET_CAM_ACTIVE(uLocal_245, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_214))
						{
							OBJECT::DELETE_OBJECT(&uLocal_214);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_214))
						{
							OBJECT::DELETE_OBJECT(&uLocal_214);
						}
						if (bLocal_171)
						{
							func_9();
							GlobalFunc_7632(0);
							GlobalFunc_5208(1);
							iLocal_172 = 0;
							iLocal_49 = 2;
						}
						else
						{
							iLocal_172 = 0;
							func_172();
						}
					}
					break;
			}
		}
		else if (bLocal_176)
		{
		}
		else
		{
			func_172();
		}
	}
}









void func_9()//Position - 0x7D4
{
	func_19();
	func_12(0, 1);
	func_10(0, 1);
}

void func_10(int iParam0, int iParam1)//Position - 0x7EC
{
	if (iParam0 == 1)
	{
		func_12(0, 0);
		GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, 0);
		MISC::SET_BIT(&iLocal_47, 1);
		func_11(1, 2, 0);
		CAM::_SET_CAM_EFFECT(2);
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_47, 1) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
			func_11(0, 2, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_47, 1);
	}
}

void func_11(int iParam0, int iParam1, int iParam2)//Position - 0x84B
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&iLocal_47, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				MISC::SET_TIME_SCALE(0.2f);
			}
			else
			{
				MISC::SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_47, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		MISC::CLEAR_BIT(&iLocal_47, 2);
	}
}

void func_12(int iParam0, int iParam1)//Position - 0x8AC
{
	char* sVar0;
	
	switch (GlobalFunc_8329())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(iLocal_47, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, 0);
			MISC::SET_BIT(&iLocal_47, 0);
			func_11(1, 1, 0);
			CAM::_SET_CAM_EFFECT(1);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_47, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP(sVar0);
			func_11(0, 1, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_47, 0);
	}
}







void func_19()//Position - 0xAE0
{
	iLocal_47 = 0;
	iLocal_48 = 0;
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_7632(1);
}









int func_28(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xD0A
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", 1);
			GlobalFunc_8389(&(uParam0->f_1));
			func_19();
			GlobalFunc_5212(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			break;
		
		case 1:
			if (func_53() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!GlobalFunc_747(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", 1);
					GlobalFunc_5211(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!GlobalFunc_747(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", 1);
					GlobalFunc_5211(&(uParam0->f_4), 2);
				}
				func_29(uParam2, uParam1, sParam3, sParam4, iParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_29(uParam2, uParam1, sParam3, sParam4, iParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_12(0, 1);
				func_10(0, 1);
				func_19();
				if (*iParam5)
				{
					MISC::IGNORE_NEXT_RESTART(1);
				}
				else if (!uParam0->f_5)
				{
					GlobalFunc_809(0);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(0);
				MISC::PAUSE_DEATH_ARREST_RESTART(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
				func_12(0, 1);
				func_10(0, 1);
				AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
				SCRIPT::SET_NO_LOADING_SCREEN(0);
				return 1;
			}
			break;
		
		case 4:
			SCRIPT::SET_NO_LOADING_SCREEN(0);
			return 1;
			break;
	}
	return 0;
}

int func_29(var uParam0, var uParam1, var uParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0xEC1
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(1);
			}
			MISC::SET_TIME_SCALE(0.2f);
			if (GlobalFunc_747(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", 0))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(6);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GlobalFunc_726(sParam3);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
			if (GlobalFunc_747(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			if (!GlobalFunc_747(iParam5, 1))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			GlobalFunc_5210(&(uParam1->f_10), 0, 1, 1, 1);
			GlobalFunc_813(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			GlobalFunc_813(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (GlobalFunc_747(iParam5, 4))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (GlobalFunc_747(iParam5, 8))
			{
				switch (GlobalFunc_8329())
				{
					case 0:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!GlobalFunc_226(&(uParam1->f_1)))
			{
				GlobalFunc_7731(&(uParam1->f_1));
			}
			if (GlobalFunc_747(iParam5, 2))
			{
				if (!GlobalFunc_226(&(uParam1->f_4)))
				{
					GlobalFunc_7731(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (GlobalFunc_747(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
			GlobalFunc_7730(uParam0, 0, 0);
			if (!GlobalFunc_747(iParam5, 16) && (GlobalFunc_4981(&(uParam1->f_1)) >= uParam1->f_135 || CAM::IS_SCREEN_FADED_OUT()))
			{
				func_34(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_138 = 1;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!GlobalFunc_747(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					GlobalFunc_810(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!GlobalFunc_747(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					GlobalFunc_810(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (GlobalFunc_747(iParam5, 2))
			{
				if (GlobalFunc_4981(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!GlobalFunc_747(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					GlobalFunc_810(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			GlobalFunc_7730(uParam0, 0, 0);
			MISC::SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (GlobalFunc_747(iParam5, 64) && uParam1->f_138)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			GlobalFunc_6715(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (GlobalFunc_4981(&(uParam1->f_4)) <= 0.1f)
			{
				GlobalFunc_7730(uParam0, 0, 0);
			}
			else
			{
				*uParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}





void func_34(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x1344
{
	var uVar0;
	var uVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!GlobalFunc_5209(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(uParam2);
	if (!GlobalFunc_747(uParam0->f_1, 256) || (GlobalFunc_747(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(GlobalFunc_747(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						else
						{
							uVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(uVar0, uVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							GlobalFunc_257(uVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						GlobalFunc_726(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (GlobalFunc_747(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = GlobalFunc_512(bParam4, GlobalFunc_512(GlobalFunc_747(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GlobalFunc_812(&(uParam0->f_1), 256);
		GlobalFunc_811(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}



















int func_53()//Position - 0x1929
{
	if (!MISC::IS_BIT_SET(iLocal_47, 0) && !MISC::IS_BIT_SET(iLocal_47, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_12(1, 0);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		HUD::CLEAR_PRINTS();
	}
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PED::_0x5A7F62FDA59759BD();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!MISC::IS_BIT_SET(iLocal_47, 1))
		{
			func_10(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_48 == 0)
			{
				iLocal_48 = MISC::GET_GAME_TIMER() + 1000;
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				func_11(0, 2, 1);
				GlobalFunc_8316(1, 1, 1, 0);
				GlobalFunc_7632(1);
				HUD::SET_FRONTEND_ACTIVE(0);
				HUD::SET_PAUSE_MENU_ACTIVE(0);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				func_12(0, 0);
				func_54(0);
			}
			else if (MISC::GET_GAME_TIMER() < iLocal_48)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_54(int iParam0)//Position - 0x1A6D
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!MISC::IS_BIT_SET(iLocal_47, 3))
			{
				MISC::SET_GAME_PAUSED(1);
				MISC::SET_BIT(&iLocal_47, 3);
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_47, 3))
		{
			MISC::SET_GAME_PAUSED(0);
			MISC::CLEAR_BIT(&iLocal_47, 3);
		}
	}
}





void func_59()//Position - 0x1B55
{
	if (!iLocal_175)
	{
		AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED = 1000;
		AUDIO::UNLOCK_MISSION_NEWS_STORY(64);
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_472 = 54;
		uLocal_398 = unk_0x67D02A194A2FC2BD("MIDSIZED_MESSAGE");
		GlobalFunc_778(1);
		while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_398))
		{
			SYSTEM::WAIT(0);
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_398, "SHOW_SHARD_MIDSIZED_MESSAGE");
		GlobalFunc_726("CULT_PASS");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
		while (!GlobalFunc_82())
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_825();
		SYSTEM::SETTIMERA(0);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "PROPERTY_PURCHASE", "HUD_AWARDS", 1);
		iLocal_175 = 1;
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uLocal_398, 255, 255, 255, 255, 0);
	if (!iLocal_177)
	{
		if (SYSTEM::TIMERA() > 9500)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uLocal_398, "SHARD_ANIM_OUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_177 = 1;
		}
	}
	if (SYSTEM::TIMERA() > 10000)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_398))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_398);
			GlobalFunc_778(0);
		}
		while (MISC::GET_DISTANCE_BETWEEN_COORDS(GlobalFunc_271(PLAYER::PLAYER_ID()), Local_116, 1) < 209f && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			SYSTEM::WAIT(0);
		}
		func_60(18);
		func_172();
	}
}

void func_60(int iParam0)//Position - 0x1C89
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = GlobalFunc_5213();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (GlobalFunc_6827())
	{
		func_66(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_97344 = MISC::GET_GAME_TIMER();
		GlobalFunc_49(30000);
		StringCopy(&cVar0, GlobalFunc_819(Global_97342, 1), 64);
		if (GlobalFunc_818(Global_97342) > 0)
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
	GlobalFunc_54(&Global_24503);
	Global_97343 = 0;
	GlobalFunc_817(-1);
}






void func_66(int iParam0)//Position - 0x2095
{
	func_67(iParam0, 0, GlobalFunc_823(iParam0));
}

void func_67(int iParam0, int iParam1, int iParam2)//Position - 0x20AA
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = GlobalFunc_7732();
	func_77(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	GlobalFunc_822(iParam0, &uVar0);
	Var1 = { func_68(&uVar0) };
}

struct<16> func_68(var uParam0)//Position - 0x20D9
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = GlobalFunc_483(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = GlobalFunc_482(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = GlobalFunc_821(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = GlobalFunc_820(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = GlobalFunc_93(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, GlobalFunc_4975(*uParam0), 64);
	return Var0;
}









void func_77(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2256
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = GlobalFunc_4975(*uParam0);
	iVar1 = GlobalFunc_93(*uParam0);
	iVar2 = GlobalFunc_820(*uParam0);
	iVar3 = GlobalFunc_483(*uParam0);
	iVar4 = GlobalFunc_482(*uParam0);
	iVar5 = GlobalFunc_821(*uParam0);
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
	iVar6 = GlobalFunc_91(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = GlobalFunc_91(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_78(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x23D8
{
	GlobalFunc_96(uParam0, iParam1);
	GlobalFunc_95(uParam0, iParam2);
	GlobalFunc_94(uParam0, iParam3);
	GlobalFunc_6826(uParam0, iParam4);
	GlobalFunc_90(uParam0, iParam5);
	GlobalFunc_89(uParam0, iParam6);
}





























void func_107()//Position - 0x31DC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	switch (iLocal_189)
	{
		case 0:
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("THUNDER", 20f);
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
			}
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_acult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
			STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
			STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
			while ((((((!GlobalFunc_109() || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_acult_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood03a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood04a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_box_wood05a"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_security_case_01")))
			{
				SYSTEM::WAIT(0);
			}
			uLocal_575 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 1, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_575))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_575, "Trevors_weapon", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Rifle_Mag1^1", 3, WEAPON::GET_WEAPON_COMPONENT_TYPE_MODEL(joaat("component_assaultrifle_clip_01")), 0);
			if (GlobalFunc_109() && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_195[11], "Cult_Master", 2, joaat("a_m_o_acult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_195[12], "Rear_Cult", 2, joaat("a_m_o_acult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_195[13], "Left_Old_Cult", 2, joaat("a_m_o_acult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_195[14], "Carbine_Cult", 2, joaat("a_m_y_acult_02"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_195[15], "Shotgun_Cult", 2, joaat("a_m_y_acult_02"), 0);
				CUTSCENE::START_CUTSCENE(0);
			}
			SYSTEM::WAIT(0);
			if (!bLocal_171 && Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED != 1000)
			{
				func_126();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[0]))
			{
				PED::DELETE_PED(&(iLocal_195[0]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[1]))
			{
				PED::DELETE_PED(&(iLocal_195[1]));
			}
			if (CAM::DOES_CAM_EXIST(uLocal_245))
			{
				CAM::SET_CAM_ACTIVE(uLocal_245, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_214))
			{
				OBJECT::DELETE_OBJECT(&iLocal_214);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_214))
			{
				OBJECT::DELETE_OBJECT(&iLocal_214);
			}
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			if (HUD::DOES_BLIP_EXIST(uLocal_227))
			{
				HUD::REMOVE_BLIP(&uLocal_227);
			}
			GlobalFunc_8316(1, 1, 1, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			HUD::CLEAR_HELP(1);
			HUD::DISPLAY_HUD(0);
			HUD::DISPLAY_RADAR(0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
			}
			MISC::CLEAR_AREA(Local_116, 100f, 1, 0, 0, 0);
			PED::ADD_SCENARIO_BLOCKING_AREA(Local_116 - Vector(100f, 60f, 80f), Local_116 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			MISC::ENABLE_DISPATCH_SERVICE(3, 0);
			MISC::ENABLE_DISPATCH_SERVICE(5, 0);
			uLocal_247 = TASK::ADD_COVER_POINT(-1173.509f, 4924.365f, 222.21f, 277.2293f, 2, 0, 2, 1);
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_01"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_01")))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_189 = 6;
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 6:
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CULT_MASTER", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_195[11]))
					{
						iLocal_195[11] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CULT_MASTER", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("REAR_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_195[12]))
					{
						iLocal_195[12] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("REAR_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LEFT_OLD_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_195[13]))
					{
						iLocal_195[13] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LEFT_OLD_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CARBINE_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_195[14]))
					{
						iLocal_195[14] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CARBINE_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("SHOTGUN_CULT", 0))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_195[15]))
					{
						iLocal_195[15] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("SHOTGUN_CULT", 0));
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", 0))
				{
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1173.531f, 4924.357f, 222.2101f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 188.9369f);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), -1173.509f, 4924.365f, 222.21f, -1, 0, 0f, 1, 0, uLocal_247, 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_weapon", 0))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_575, PLAYER::PLAYER_PED_ID());
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(91.3878f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(4.4337f, 1065353216);
				GlobalFunc_8316(0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				Local_50[0 /*3*/] = { -1044.632f, 4918.149f, 211.3315f };
				fLocal_99[0] = 254.8275f;
				Local_50[1 /*3*/] = { -1054.92f, 4915.155f, 210.8241f };
				fLocal_99[1] = 270.2025f;
				Local_50[2 /*3*/] = { -1051.859f, 4903.902f, 209.6199f };
				fLocal_99[2] = 299.8404f;
				Local_50[3 /*3*/] = { -1068.246f, 4899.532f, 213.2755f };
				fLocal_99[3] = 298.4257f;
				Local_50[4 /*3*/] = { -1083.322f, 4899.532f, 213.2755f };
				fLocal_99[4] = 283.5311f;
				Local_50[5 /*3*/] = { -1084.058f, 4933.805f, 228.2246f };
				fLocal_99[5] = 87.5233f;
				Local_50[6 /*3*/] = { -1081.976f, 4937.339f, 232.3275f };
				fLocal_99[6] = 109.6546f;
				Local_50[7 /*3*/] = { -1092.075f, 4939.958f, 217.3385f };
				fLocal_99[7] = 210.2433f;
				Local_50[8 /*3*/] = { -1101.798f, 4930.33f, 217.3544f };
				fLocal_99[8] = 203.732f;
				Local_50[9 /*3*/] = { -1070.675f, 4869.301f, 220.2917f };
				fLocal_99[9] = 39.1109f;
				Local_50[10 /*3*/] = { -1115.703f, 4878.439f, 225.8085f };
				fLocal_99[10] = 25.8472f;
				PED::ADD_RELATIONSHIP_GROUP("rghCult", &uLocal_409);
				iVar1 = 0;
				while (iVar1 < iLocal_195)
				{
					if (((iVar1 == 0 || iVar1 == 5) || iVar1 == 6) || iVar1 == 10)
					{
						iLocal_195[iVar1] = PED::CREATE_PED(26, joaat("a_m_o_acult_01"), Local_50[iVar1 /*3*/], fLocal_99[iVar1], 1, 1);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_195[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_195[iVar1], joaat("weapon_assaultrifle"), -1, 1, 1);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_195[iVar1], 0);
						PED::SET_PED_COMBAT_ABILITY(iLocal_195[iVar1], 2);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_195[iVar1], 50f, 20);
						PED::SET_PED_ACCURACY(iLocal_195[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_195[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_195[iVar1], 100f);
						ENTITY::SET_ENTITY_HEALTH(iLocal_195[iVar1], 150);
						PED::SET_PED_SHOOT_RATE(iLocal_195[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_195[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 == 2)
					{
						iLocal_195[iVar1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), Local_50[iVar1 /*3*/], fLocal_99[iVar1], 1, 1);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_195[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_195[iVar1], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_195[iVar1], 50, 1);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_195[iVar1], 2);
						PED::SET_PED_COMBAT_ABILITY(iLocal_195[iVar1], 1);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_195[iVar1], 50f, 20);
						PED::SET_PED_ACCURACY(iLocal_195[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_195[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_195[iVar1], 100f);
						PED::SET_PED_SHOOT_RATE(iLocal_195[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_195[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (iVar1 > 10 && iVar1 < 20)
					{
						if (((((!PED::IS_PED_INJURED(iLocal_195[iVar1]) && !PED::IS_PED_INJURED(iLocal_195[11])) && !PED::IS_PED_INJURED(iLocal_195[12])) && !PED::IS_PED_INJURED(iLocal_195[13])) && !PED::IS_PED_INJURED(iLocal_195[14])) && !PED::IS_PED_INJURED(iLocal_195[15]))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_195[11], joaat("weapon_pistol"), -1, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_195[12], joaat("weapon_assaultrifle"), -1, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_195[13], joaat("weapon_assaultrifle"), -1, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_195[14], joaat("weapon_carbinerifle"), -1, 1, 1);
							WEAPON::GIVE_WEAPON_TO_PED(iLocal_195[15], joaat("weapon_pumpshotgun"), -1, 1, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_195[iVar1], 0, 1);
							PED::SET_PED_COMBAT_MOVEMENT(iLocal_195[iVar1], 3);
							PED::SET_PED_COMBAT_ABILITY(iLocal_195[iVar1], 0);
							PED::SET_PED_ACCURACY(iLocal_195[iVar1], 0);
							WEAPON::SET_PED_CHANCE_OF_FIRING_BLANKS(iLocal_195[iVar1], 1f, 1f);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_246);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1159.33f, 4924.412f, 221.6576f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6000, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_246);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_195[15], uLocal_246);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_246);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_246);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1163.279f, 4932.933f, 222.541f, PLAYER::PLAYER_PED_ID(), 1f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7500, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_246);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_195[14], uLocal_246);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_246);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_246);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2500, 0);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 5000, 0);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1156.175f, 4926.073f, 221.3447f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 6500, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_246);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_195[13], uLocal_246);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_246);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_246);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 3000, 0);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1157.962f, 4922.196f, 221.309f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5500, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_246);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_195[12], uLocal_246);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_246);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_246);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_SEEK_COVER_FROM_PED(0, PLAYER::PLAYER_PED_ID(), 10000, 0);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, -1161.475f, 4916.061f, 220.5658f, PLAYER::PLAYER_PED_ID(), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4500, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_246);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_195[11], uLocal_246);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_246);
							PED::SET_PED_KEEP_TASK(iLocal_195[iVar1], 1);
							PED::SET_PED_RESET_FLAG(iLocal_195[iVar1], 156, 1);
						}
					}
					else
					{
						iLocal_195[iVar1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), Local_50[iVar1 /*3*/], fLocal_99[iVar1], 1, 1);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(iLocal_195[iVar1], 0);
						WEAPON::GIVE_WEAPON_TO_PED(iLocal_195[iVar1], joaat("weapon_pistol"), -1, 1, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_195[iVar1], 50, 1);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_195[iVar1], 2);
						PED::SET_PED_COMBAT_ABILITY(iLocal_195[iVar1], 0);
						PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(iLocal_195[iVar1], 50f, 20);
						PED::SET_PED_COMBAT_RANGE(iLocal_195[iVar1], 1);
						PED::SET_PED_ACCURACY(iLocal_195[iVar1], 5);
						PED::SET_PED_HEARING_RANGE(iLocal_195[iVar1], 100f);
						PED::SET_PED_SEEING_RANGE(iLocal_195[iVar1], 100f);
						PED::SET_PED_SHOOT_RATE(iLocal_195[iVar1], MISC::GET_RANDOM_INT_IN_RANGE(40, 60));
						TASK::TASK_COMBAT_PED(iLocal_195[iVar1], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_195[iVar1], uLocal_409);
					ENTITY::SET_ENTITY_HEADING(iLocal_195[iVar1], GlobalFunc_830(ENTITY::GET_ENTITY_COORDS(iLocal_195[iVar1], 1), GlobalFunc_271(PLAYER::PLAYER_ID())));
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_195[iVar1], 1);
					PED::SET_PED_CONFIG_FLAG(iLocal_195[iVar1], 42, 1);
					uLocal_228[iVar1] = GlobalFunc_6829(iLocal_195[iVar1], 1, 145);
					iVar1++;
				}
				GlobalFunc_173(&uLocal_410, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				GlobalFunc_173(&uLocal_410, 3, iLocal_195[11], "ACULTMaster", 0, 1);
				GlobalFunc_173(&uLocal_410, 4, 0, "ACULTGroup", 0, 1);
				MISC::SET_BIT(&iVar0, 1);
				MISC::SET_BIT(&iVar0, 3);
				MISC::SET_BIT(&iVar0, 4);
				if (!bLocal_171)
				{
					uLocal_215[0] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1074.165f, 4897.468f, 213.2754f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_215[1] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1094.671f, 4892.789f, 215.0707f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_215[2] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1113.95f, 4904.385f, 217.6001f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
					uLocal_215[3] = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), -1145.273f, 4907.894f, 219.9734f, -72f, 0f, 42.48f, iVar0, 25000, 2, 1, joaat("prop_security_case_01"));
				}
				uLocal_215[0] = uLocal_215[0];
				uLocal_215[1] = uLocal_215[1];
				uLocal_215[2] = uLocal_215[2];
				uLocal_215[3] = uLocal_215[3];
				iLocal_220[0] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1158.69f, 4915.709f, 220.2644f, 1, 1, 0);
				iLocal_220[1] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood03a"), -1156.246f, 4918.6f, 220.5432f, 1, 1, 0);
				iLocal_220[2] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1145.802f, 4931.816f, 219.9683f, 1, 1, 0);
				iLocal_220[3] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood04a"), -1133.369f, 4919.067f, 218.8385f, 1, 1, 0);
				iLocal_220[4] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood05a"), -1132.025f, 4921.483f, 218.8244f, 1, 1, 0);
				iLocal_220[5] = OBJECT::CREATE_OBJECT(joaat("prop_box_wood03a"), -1112.66f, 4929.268f, 217.1752f, 1, 1, 0);
				ENTITY::SET_ENTITY_ROTATION(iLocal_220[0], 12.24288f, -0.014582f, 27.06056f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_220[1], 7.733739f, 9.432779f, -2.865618f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_220[2], 3.735082f, 4.551246f, 86.30917f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_220[3], 0.240341f, 1.095195f, 36.59031f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_220[4], 7.6772f, 1.232743f, 93.27483f, 2, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_220[5], 3.367802f, -5.14387f, 97.30567f, 2, 1);
				if (func_122() < 50)
				{
					PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.5f, 1);
				}
				if (func_121() != 18)
				{
					GlobalFunc_6828(18);
				}
				if (!GlobalFunc_6827())
				{
					GlobalFunc_9034(0);
				}
				GlobalFunc_5208(1);
				bLocal_171 = false;
				iLocal_49 = 4;
			}
			break;
	}
}














int func_121()//Position - 0x4793
{
	return Global_97342;
}

int func_122()//Position - 0x479F
{
	var uVar0;
	
	switch (GlobalFunc_8329())
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_special_ability"), &uVar0, -1);
			break;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_special_ability"), &uVar0, -1);
			break;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_special_ability"), &uVar0, -1);
			break;
	}
	return uVar0;
}




void func_126()//Position - 0x4904
{
	Global_24679 = 1;
}















void func_141()//Position - 0x54B2
{
	if (fLocal_182 > 0f)
	{
		fLocal_182 = (fLocal_182 - (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_182 = 0f;
	}
	if (fLocal_182 >= 0f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[10 /*31*/], fLocal_182, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_181 < 0f)
	{
		fLocal_181 = (fLocal_181 + (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_181 = 0f;
	}
	if (fLocal_181 <= 0f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[9 /*31*/], fLocal_181, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[9 /*31*/], 4, 0, 1);
	}
}

void func_142()//Position - 0x553E
{
	if (fLocal_182 < 1f)
	{
		fLocal_182 = (fLocal_182 + (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_182 = 1f;
	}
	if (fLocal_182 <= 1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[10 /*31*/], fLocal_182, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[10 /*31*/], 4, 0, 1);
	}
	if (fLocal_181 > -1f)
	{
		fLocal_181 = (fLocal_181 - (0.6f / (1f / MISC::GET_FRAME_TIME())));
	}
	else
	{
		fLocal_181 = -1f;
	}
	if (fLocal_181 >= -1f)
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[9 /*31*/], fLocal_181, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[9 /*31*/], 4, 0, 1);
	}
}

void func_143()//Position - 0x55CA
{
	switch (iLocal_188)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			STREAMING::REQUEST_ANIM_DICT("random@altruist_cult");
			AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@altruist_cult")) && AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
			{
				if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED < 2)
				{
					if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED == 0)
					{
						sLocal_408 = "ACULT_HI";
					}
					else
					{
						sLocal_408 = "ACULT_LEAVE5";
					}
					sLocal_402 = "cult_p5_guard";
					sLocal_404 = "cult_p5_trv";
					sLocal_405 = "cult_p5_victim_01";
					sLocal_406 = "cult_p5_victim_02";
					sLocal_407 = "cult_p5_cam";
					fLocal_184 = 0.75f;
					fLocal_183 = 0.999f;
				}
				else if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED >= 2)
				{
					sLocal_408 = "ACULT_CAPT";
					sLocal_402 = "cult_p7_guard_01";
					sLocal_403 = "cult_p7_guard_02";
					sLocal_404 = "cult_p7_trv";
					sLocal_405 = "cult_p7_victim_01";
					sLocal_406 = "cult_p7_victim_02";
					sLocal_407 = "cult_p7_cam";
					fLocal_184 = 0.98f;
					fLocal_183 = 0.98f;
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
					STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_227))
				{
					HUD::REMOVE_BLIP(&uLocal_227);
				}
				GlobalFunc_8316(1, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				HUD::CLEAR_HELP(1);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					uLocal_212 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_212, 0))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(uLocal_212))
						{
							iLocal_188++;
						}
					}
				}
				else
				{
					uLocal_212 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(uLocal_192[0]) && !PED::IS_PED_INJURED(uLocal_192[1]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_192[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_192[0]);
						TASK::CLEAR_PED_TASKS(uLocal_192[1]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_192[1]);
					}
					iLocal_188++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_212))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_212))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_212, 1, 0);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_212, Local_119, 13f, 13f, 13f, 0, 1, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_212, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_212))
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_212, 149.8882f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_212);
					}
				}
			}
			MISC::CLEAR_AREA(Local_119, 12f, 1, 0, 0, 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 128.2065f);
			if (!PED::IS_PED_INJURED(uLocal_192[0]) && !PED::IS_PED_INJURED(uLocal_192[1]))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_192[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_192[0], 128.2065f);
				ENTITY::SET_ENTITY_COORDS(uLocal_192[1], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 1f, 0f), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_192[1], 128.2065f);
			}
			iLocal_195[0] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			GlobalFunc_173(&uLocal_410, 1, iLocal_195[0], "ACULTMember1", 0, 1);
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED >= 2)
			{
				iLocal_195[1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				GlobalFunc_173(&uLocal_410, 2, iLocal_195[1], "ACULTMember2", 0, 1);
			}
			GlobalFunc_173(&uLocal_410, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			GlobalFunc_173(&uLocal_410, 3, 0, "ACULTMaster", 0, 1);
			GlobalFunc_173(&uLocal_410, 4, 0, "ACULTGroup", 0, 1);
			GlobalFunc_10641(&uLocal_410, "ACULTAU", sLocal_408, 4, 0, 0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_195[0], 1);
			iLocal_214 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_assaultrifle"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_195[0], 1), 1, 1065353216, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_214, iLocal_195[0], PED::GET_PED_BONE_INDEX(iLocal_195[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED < 2)
			{
				uLocal_213 = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), Local_116, 1, 1, 0);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_213, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
			}
			else if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED >= 2)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_195[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_245 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_187 = PED::CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_187, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_195[0], uLocal_187, "random@altruist_cult", sLocal_402, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED >= 2)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_195[1], uLocal_187, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_245, uLocal_187, sLocal_407, "random@altruist_cult");
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(uLocal_192[0]) && !PED::IS_PED_INJURED(uLocal_192[1]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_192[0], uLocal_187, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_192[1], uLocal_187, "random@altruist_cult", sLocal_406, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_188++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_192[0]))
			{
				if (PED::IS_PED_MALE(uLocal_192[0]))
				{
					GlobalFunc_5117(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					GlobalFunc_5117(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_192[1]))
			{
				if (PED::IS_PED_MALE(uLocal_192[1]))
				{
					GlobalFunc_5117(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					GlobalFunc_5117(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_187) > fLocal_184)
			{
				iLocal_188++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_192[0]))
			{
				if (PED::IS_PED_MALE(uLocal_192[0]))
				{
					GlobalFunc_5117(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					GlobalFunc_5117(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (!PED::IS_PED_INJURED(uLocal_192[1]))
			{
				if (PED::IS_PED_MALE(uLocal_192[1]))
				{
					GlobalFunc_5117(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					GlobalFunc_5117(uLocal_192[1], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_187) > fLocal_183)
			{
				iLocal_188++;
			}
			break;
		
		case 4:
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED < 2)
			{
				func_126();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[0]))
				{
					PED::DELETE_PED(&(iLocal_195[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[1]))
				{
					PED::DELETE_PED(&(iLocal_195[1]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
				{
					OBJECT::DELETE_OBJECT(&iLocal_213);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_214))
				{
					OBJECT::DELETE_OBJECT(&iLocal_214);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
				CAM::SET_CAM_ACTIVE(uLocal_245, 0);
				GlobalFunc_8316(0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				GlobalFunc_10844(GlobalFunc_8329(), 1, 2000, 0, 0);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED += 2;
			iLocal_173 = 1;
			break;
	}
}





















void func_164()//Position - 0x6DBD
{
	switch (iLocal_188)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("a_m_o_acult_02"));
			STREAMING::REQUEST_MODEL(joaat("prop_anim_cash_pile_02"));
			STREAMING::REQUEST_ANIM_DICT("random@altruist_cult");
			AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED");
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_assaultrifle"), 31, 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_o_acult_02")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_anim_cash_pile_02"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@altruist_cult")) && AUDIO::PREPARE_MUSIC_EVENT("AC_DELIVERED")) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_assaultrifle")))
			{
				if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED == 0)
				{
					sLocal_408 = "ACULT_HI";
					sLocal_402 = "cult_p2_guard";
					sLocal_404 = "cult_p2_trv";
					sLocal_405 = "cult_p2_victim";
					sLocal_407 = "cult_p2_cam";
					fLocal_184 = 0.8f;
					fLocal_183 = 0.968f;
				}
				else if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED == 1)
				{
					sLocal_408 = "ACULT_LEAVE3";
					sLocal_402 = "cult_p4_guard";
					sLocal_404 = "cult_p4_trv";
					sLocal_405 = "cult_p4_victim";
					sLocal_407 = "cult_p4_cam";
					fLocal_184 = 0.77f;
					fLocal_183 = 0.999f;
				}
				else if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED == 2)
				{
					sLocal_408 = "ACULT_LEAVE3";
					sLocal_402 = "cult_p4_guard";
					sLocal_404 = "cult_p4_trv";
					sLocal_405 = "cult_p4_victim";
					sLocal_407 = "cult_p4_cam";
					fLocal_184 = 0.77f;
					fLocal_183 = 0.999f;
				}
				else if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED >= 3)
				{
					sLocal_408 = "ACULT_CAPT";
					sLocal_402 = "cult_p7_guard_01";
					sLocal_403 = "cult_p7_guard_02";
					sLocal_404 = "cult_p7_trv";
					sLocal_405 = "cult_p7_victim_01";
					sLocal_407 = "cult_p7_cam";
					fLocal_184 = 0.98f;
					fLocal_183 = 0.98f;
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood03a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood04a"));
					STREAMING::REQUEST_MODEL(joaat("prop_box_wood05a"));
					STREAMING::REQUEST_MODEL(joaat("prop_security_case_01"));
					if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REQUEST_CUTSCENE("ac_ig_3_p3_b", 8);
					}
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_227))
				{
					HUD::REMOVE_BLIP(&uLocal_227);
				}
				GlobalFunc_8316(1, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				HUD::CLEAR_HELP(1);
				HUD::DISPLAY_HUD(0);
				HUD::DISPLAY_RADAR(0);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DELIVERED");
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
				GlobalFunc_4956();
				SYSTEM::WAIT(0);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iLocal_212 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_212, 0))
					{
						if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_212))
						{
							iLocal_188++;
						}
					}
				}
				else
				{
					iLocal_212 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (!PED::IS_PED_INJURED(uLocal_192[0]))
					{
						TASK::CLEAR_PED_TASKS(uLocal_192[0]);
						PED::REMOVE_PED_FROM_GROUP(uLocal_192[0]);
					}
					iLocal_188++;
				}
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_212))
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_212))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_212, 1, 0);
				}
				if (ENTITY::IS_ENTITY_AT_COORD(iLocal_212, Local_119, 13f, 13f, 13f, 0, 1, 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_212, -1028.415f, 4924.863f, 205.9386f, 0, 0, 0, 1);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_212))
					{
						ENTITY::SET_ENTITY_HEADING(iLocal_212, 149.8882f);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_212);
					}
				}
			}
			MISC::CLEAR_AREA(Local_119, 12f, 1, 0, 0, 0);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1035.625f, 4915.152f, 205.5761f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 128.2065f);
			if (!PED::IS_PED_INJURED(uLocal_192[0]))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_192[0], Vector(205.5761f, 4915.152f, -1035.625f) - Vector(0f, 0f, 1f), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_192[0], 128.2065f);
			}
			iLocal_195[0] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1042.56f, 4913.516f, 207.0988f, 282.4169f, 1, 1);
			GlobalFunc_173(&uLocal_410, 1, iLocal_195[0], "ACULTMember1", 0, 1);
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED >= 3)
			{
				iLocal_195[1] = PED::CREATE_PED(26, joaat("a_m_o_acult_02"), -1041.757f, 4908.49f, 207.2777f, 305.3168f, 1, 1);
				GlobalFunc_173(&uLocal_410, 2, iLocal_195[1], "ACULTMember2", 0, 1);
			}
			GlobalFunc_173(&uLocal_410, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			GlobalFunc_173(&uLocal_410, 3, 0, "ACULTMaster", 0, 1);
			GlobalFunc_173(&uLocal_410, 4, 0, "ACULTGroup", 0, 1);
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED != 1 && Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED != 2)
			{
				GlobalFunc_10641(&uLocal_410, "ACULTAU", sLocal_408, 4, 0, 0, 0);
			}
			SYSTEM::SETTIMERB(0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_195[0], 1);
			iLocal_213 = OBJECT::CREATE_OBJECT(joaat("prop_anim_cash_pile_02"), Local_116, 1, 1, 0);
			iLocal_214 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_assaultrifle"), -1, ENTITY::GET_ENTITY_COORDS(iLocal_195[0], 1), 1, 1065353216, 0);
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_214, iLocal_195[0], PED::GET_PED_BONE_INDEX(iLocal_195[0], 60309), 0.12f, 0.028f, -0.003f, -82.208f, -7.06f, -8.038f, 0, 0, 0, 0, 2, 1);
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED < 3)
			{
				if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED == 0)
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_213, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_213, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			else if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED >= 3)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_195[1], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			uLocal_245 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 1);
			uLocal_187 = PED::CREATE_SYNCHRONIZED_SCENE(-1044.636f, 4915.204f, 212.32f, 0f, 0f, 110.52f, 2);
			TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_187, "random@altruist_cult", sLocal_404, 1000f, -2f, 4, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_195[0], uLocal_187, "random@altruist_cult", sLocal_402, 1000f, -2f, 4, 0, 1148846080, 0);
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED >= 3)
			{
				TASK::TASK_SYNCHRONIZED_SCENE(iLocal_195[1], uLocal_187, "random@altruist_cult", sLocal_403, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_245, uLocal_187, sLocal_407, "random@altruist_cult");
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(uLocal_192[0]))
			{
				TASK::TASK_SYNCHRONIZED_SCENE(uLocal_192[0], uLocal_187, "random@altruist_cult", sLocal_405, 1000f, -2f, 4, 0, 1148846080, 0);
			}
			iLocal_188++;
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(uLocal_192[0]))
			{
				if (PED::IS_PED_MALE(uLocal_192[0]))
				{
					GlobalFunc_5117(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					GlobalFunc_5117(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (SYSTEM::TIMERB() > 2000 && SYSTEM::TIMERB() < 2100)
			{
				if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED == 1 || Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED == 2)
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_10641(&uLocal_410, "ACULTAU", sLocal_408, 4, 0, 0, 0);
					}
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_187) > fLocal_184)
			{
				iLocal_188++;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(uLocal_192[0]))
			{
				if (PED::IS_PED_MALE(uLocal_192[0]))
				{
					GlobalFunc_5117(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_MALE", 3);
				}
				else
				{
					GlobalFunc_5117(uLocal_192[0], "WHIMPER", "WAVELOAD_PAIN_FEMALE", 3);
				}
			}
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED == 1 || Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED == 2)
			{
				if ((PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_187) > 0.9742857f && !iLocal_180) && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_180 = 1;
				}
			}
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_187) > fLocal_183)
			{
				iLocal_188++;
			}
			break;
		
		case 4:
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED < 3)
			{
				if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED != 1 && Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED != 2)
				{
					func_126();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[0]))
					{
						PED::DELETE_PED(&(iLocal_195[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[1]))
					{
						PED::DELETE_PED(&(iLocal_195[1]));
					}
				}
				else
				{
					SYSTEM::SETTIMERB(0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_195[0], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[1]))
					{
						ENTITY::SET_ENTITY_VISIBLE(iLocal_195[1], 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_192[0]))
					{
						ENTITY::SET_ENTITY_VISIBLE(uLocal_192[0], 0);
					}
					iLocal_188++;
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_213))
				{
					OBJECT::DELETE_OBJECT(&iLocal_213);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_214))
				{
					OBJECT::DELETE_OBJECT(&iLocal_214);
				}
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED == 0)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 750, 0, 1, 0);
				}
				if (MISC::ARE_STRINGS_EQUAL(sLocal_407, "cult_p4_cam"))
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
				}
				CAM::SET_CAM_ACTIVE(uLocal_245, 0);
				GlobalFunc_8316(0, 1, 1, 0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				GlobalFunc_10844(GlobalFunc_8329(), 1, 1000, 0, 0);
			}
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED != 1 && Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED != 2)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED++;
				iLocal_173 = 1;
			}
			break;
		
		case 5:
			if (!GlobalFunc_111() || SYSTEM::TIMERB() > 7000)
			{
				func_126();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[0]))
				{
					PED::DELETE_PED(&(iLocal_195[0]));
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_195[1]))
				{
					PED::DELETE_PED(&(iLocal_195[1]));
				}
				AUDIO::TRIGGER_MUSIC_EVENT("AC_DONE");
				Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED++;
				iLocal_173 = 1;
			}
			break;
	}
}

void func_165()//Position - 0x7778
{
	if (GlobalFunc_831())
	{
		if (GlobalFunc_8329() == 2)
		{
			if (PED::DOES_GROUP_EXIST(GlobalFunc_468()))
			{
				PED::GET_GROUP_SIZE(GlobalFunc_468(), &uLocal_185, &iLocal_186);
				if (iLocal_186 == 1)
				{
					uLocal_192[0] = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), 0);
					if (ENTITY::IS_ENTITY_AT_COORD(uLocal_192[0], Local_119, 5f, 5f, 5f, 0, 1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, 0);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_49 = 1;
					}
				}
				else if (iLocal_186 == 2)
				{
					uLocal_192[0] = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), 0);
					uLocal_192[1] = PED::GET_PED_AS_GROUP_MEMBER(GlobalFunc_468(), 1);
					if (ENTITY::IS_ENTITY_AT_COORD(uLocal_192[0], Local_119, 5f, 5f, 5f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(uLocal_192[1], Local_119, 5f, 5f, 5f, 0, 1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
							{
								VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 10.5f, 5, 0);
							}
						}
						SYSTEM::SETTIMERA(0);
						iLocal_49 = 1;
					}
				}
			}
		}
	}
}



void func_168()//Position - 0x789C
{
	if (GlobalFunc_832())
	{
		if (iLocal_399 == 0)
		{
			iLocal_399 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_116 - Vector(100f, 60f, 80f), Local_116 + Vector(100f, 60f, 80f), 0, 1, 1, 1);
		}
		while (MISC::GET_DISTANCE_BETWEEN_COORDS(GlobalFunc_271(PLAYER::PLAYER_ID()), Local_116, 1) < 209f)
		{
			SYSTEM::WAIT(0);
		}
	}
	if (GlobalFunc_8329() == 0 || GlobalFunc_8329() == 1)
	{
		if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 5)
		{
			if (func_170())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
			else if (func_169())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
		}
	}
	else if (GlobalFunc_8329() == 2)
	{
		if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 5)
		{
			if (func_170())
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) && PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID())))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
				}
			}
			else if (func_169())
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, 1862763509);
			}
			else if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(2017343592, 1862763509) != 1)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, 1862763509);
			}
		}
	}
	if (func_170())
	{
		if (iLocal_178)
		{
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 3))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_START");
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 1);
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_34036[9 /*31*/].f_2, 6f, Global_34036[9 /*31*/].f_5, 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_34036[9 /*31*/].f_5, Global_34036[9 /*31*/].f_2, 0, 0f, 0);
			}
			if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Global_34036[10 /*31*/].f_2, 6f, Global_34036[10 /*31*/].f_5, 0))
			{
				OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Global_34036[10 /*31*/].f_5, Global_34036[10 /*31*/].f_2, 0, 0f, 0);
			}
			bLocal_179 = true;
			iLocal_178 = 0;
		}
	}
	else if (!iLocal_178)
	{
		if (AUDIO::AUDIO_IS_SCRIPTED_MUSIC_PLAYING())
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_END");
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		AUDIO::SET_STATIC_EMITTER_ENABLED("COUNTRYSIDE_ALTRUIST_CULT_01", 0);
		if (!bLocal_179)
		{
			func_141();
		}
		iLocal_178 = 1;
	}
}

int func_169()//Position - 0x7ACD
{
	if ((((((MISC::IS_BULLET_IN_ANGLED_AREA(Local_122, Local_125, fLocal_128, 1) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_129, Local_132, fLocal_135, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_136, Local_139, fLocal_142, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_143, Local_146, fLocal_149, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_150, Local_153, fLocal_156, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_157, Local_160, fLocal_163, 1)) || MISC::IS_BULLET_IN_ANGLED_AREA(Local_164, Local_167, fLocal_170, 1))
	{
		return 1;
	}
	return 0;
}

int func_170()//Position - 0x7B6A
{
	if ((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_122, Local_125, fLocal_128, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_129, Local_132, fLocal_135, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_136, Local_139, fLocal_142, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_143, Local_146, fLocal_149, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_150, Local_153, fLocal_156, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_157, Local_160, fLocal_163, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_164, Local_167, fLocal_170, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}


void func_172()//Position - 0x7C4D
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 2017343592, 1862763509);
	if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED >= iLocal_191 && Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED != 1000)
	{
		if (bLocal_171)
		{
			GlobalFunc_5208(1);
			func_9();
			GlobalFunc_7632(0);
			iLocal_49 = 3;
		}
		else
		{
			GlobalFunc_833(&uLocal_248);
			Global_85624 = 0;
			Global_85625 = 0;
			Global_85626 = 0;
			func_12(0, 1);
			func_10(0, 1);
			GlobalFunc_809(0);
			MISC::SET_FADE_OUT_AFTER_DEATH(1);
			MISC::PAUSE_DEATH_ARREST_RESTART(0);
			MISC::IGNORE_NEXT_RESTART(0);
			GlobalFunc_7632(0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			MISC::ENABLE_DISPATCH_SERVICE(3, 1);
			MISC::ENABLE_DISPATCH_SERVICE(5, 1);
			MISC::CLEAR_WEATHER_TYPE_PERSIST();
			iLocal_178 = 0;
			GlobalFunc_825();
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_NUMBER_OF_PEDS_DELIVERED = (iLocal_191 - 1);
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		GlobalFunc_833(&uLocal_248);
		Global_85624 = 0;
		Global_85625 = 0;
		Global_85626 = 0;
		func_12(0, 1);
		func_10(0, 1);
		GlobalFunc_809(0);
		MISC::SET_FADE_OUT_AFTER_DEATH(1);
		MISC::PAUSE_DEATH_ARREST_RESTART(0);
		MISC::IGNORE_NEXT_RESTART(0);
		GlobalFunc_7632(0);
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_398))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_398);
			GlobalFunc_778(0);
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		iLocal_178 = 0;
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}


