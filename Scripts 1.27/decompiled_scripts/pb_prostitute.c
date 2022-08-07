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
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	struct<3> Local_55 = { 0, 0, 0 } ;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
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
	var uLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	int iLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
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
	var uLocal_121 = 16;
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
	var uLocal_138 = 0;
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
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
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
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
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
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
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
	var uLocal_286 = 1;
	var uLocal_287 = 0;
	int iLocal_288[3] = { 0, 0, 0 };
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	var uLocal_306 = 0;
	int iLocal_307[4] = { 0, 0, 0, 0 };
	struct<7> Local_312[4];
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 15;
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
	var uLocal_617 = 1;
	var uScriptParam_0 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	
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
	Local_55 = { 0f, 0f, 0f };
	iLocal_73 = -1;
	iLocal_75 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_81 = -1;
	iLocal_83 = -1;
	iLocal_85 = -1;
	iLocal_86 = -1;
	iLocal_292 = -1;
	if (Global_3)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (GlobalFunc_6963(PLAYER::PLAYER_ID(), 1))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	if (GlobalFunc_39(13) || GlobalFunc_39(14))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_510() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(35))
		{
			func_500();
			func_499(1);
			func_495(&uLocal_344);
		}
	}
	SYSTEM::WAIT(0);
	iLocal_95 = uScriptParam_0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_494();
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, 0, PLAYER::PLAYER_ID());
		GlobalFunc_5092(0, -1, 0);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	}
	func_488();
	func_487(128);
	while (iLocal_61)
	{
		bVar0 = true;
		func_484(&uLocal_344);
		if (func_510())
		{
			if (func_483(1024))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						func_487(1024);
						PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
					}
				}
			}
			if (!func_483(1024) && func_483(2048))
			{
				SCRIPT::TERMINATE_THIS_THREAD();
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95))
			{
				bVar0 = false;
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
			{
				bVar0 = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
			}
		}
		if (!func_510() || !func_483(2048))
		{
			func_476();
			if (func_510())
			{
				func_475();
				if (func_483(128))
				{
					iLocal_61 = 0;
				}
			}
			if (func_469())
			{
				if (bVar0)
				{
					if (iLocal_293 > 0)
					{
						func_464(&uLocal_344);
					}
					func_462();
					func_460();
					switch (iLocal_293)
					{
						case 0:
							if (iLocal_292 == -1)
							{
								if (TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_95))
								{
									iLocal_292 = func_459();
								}
								else if (func_457())
								{
									iLocal_292 = 4;
								}
							}
							else if (func_452())
							{
								if (func_451())
								{
									if (func_510())
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
										{
											TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_95, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
										}
										else
										{
											NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
										}
									}
									else
									{
										TASK::TASK_START_SCENARIO_IN_PLACE(iLocal_95, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, 0);
									}
								}
								iLocal_293 = 1;
								GlobalFunc_587("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
						
						case 1:
							if (GlobalFunc_2951(iLocal_48, 4096))
							{
								func_448();
							}
							if (func_447())
							{
								iLocal_293 = 2;
								GlobalFunc_587("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
							if (func_443())
							{
								iLocal_293 = 3;
								func_441(&iLocal_48, 64);
								Global_24596 = 1;
								GlobalFunc_587("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
						
						case 2:
							func_91(&uLocal_344);
							break;
						
						case 3:
							func_3();
							break;
						
						default:
							break;
						}
				}
			}
			else
			{
				func_2(0);
			}
			GlobalFunc_587();
		}
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_2951(iLocal_48, 2))
	{
	}
	GlobalFunc_587(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_500();
	func_495(&uLocal_344);
}


void func_2(bool bParam0)//Position - 0x341
{
	if (bParam0)
	{
		iLocal_61 = 1;
	}
	else
	{
		iLocal_61 = 0;
	}
}

void func_3()//Position - 0x357
{
	if (iLocal_294 > 0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_96))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_96, iLocal_97, 0))
				{
					func_90();
				}
			}
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_96) || ENTITY::IS_ENTITY_DEAD(iLocal_96))
	{
		func_89(15);
	}
	switch (iLocal_294)
	{
		case 0:
			if (!iLocal_295 == 0)
			{
				iLocal_294 = 1;
			}
			break;
		
		case 1:
			func_83();
			break;
		
		case 2:
			func_82();
			break;
		
		case 3:
			func_65();
			break;
		
		case 4:
			func_56();
			break;
		
		case 5:
			func_53();
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_96))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, 242628503) == 7)
				{
					iLocal_64 = MISC::GET_GAME_TIMER();
					iLocal_65 = (iLocal_64 - iLocal_63);
					if (iLocal_65 >= 10000 || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_95, iLocal_96, 12f, 12f, 5f, 0, 1, 0))
					{
						GlobalFunc_587("prostitute WAITING TO END");
						func_90();
					}
				}
			}
			else
			{
				func_90();
			}
			break;
		
		case 7:
			if (!PATHFIND::ARE_NODES_LOADED_FOR_AREA(func_52(0), func_52(1), func_52(2), func_52(3)))
			{
				PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(func_52(0), func_52(1), func_52(2), func_52(3));
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iLocal_96, iLocal_97, Local_89, (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iLocal_97) * 0.65f), 0, 0, 786859, 4f, -1f);
				iLocal_294 = 8;
			}
			break;
		
		case 8:
			if (SYSTEM::VDIST2(Local_89, ENTITY::GET_ENTITY_COORDS(iLocal_95, 1)) < 25f && TASK::GET_SCRIPT_TASK_STATUS(iLocal_96, -1817882002) != 1)
			{
				iLocal_296 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				iLocal_294 = 11;
			}
			if (func_49(iLocal_96))
			{
				func_89(15);
			}
			break;
		
		case 11:
			func_4();
			break;
		
		case 12:
			func_89(15);
			break;
		
		case 15:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_95) && ENTITY::DOES_ENTITY_EXIST(iLocal_97))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_97, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_96))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_96, -828834893) != 1)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_95, 0, 16842752);
						}
					}
				}
				else
				{
					func_2(0);
				}
			}
			break;
	}
}

void func_4()//Position - 0x595
{
	switch (iLocal_301)
	{
		case 0:
			PED::SET_SCRIPTED_ANIM_SEAT_OFFSET(iLocal_95, 0.916f);
			if (func_36(iLocal_96))
			{
				GlobalFunc_6877(&uLocal_118);
				iLocal_301 = 1;
			}
			break;
		
		case 1:
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), ENTITY::GET_ENTITY_COORDS(iLocal_95, 0)) < 22500f)
			{
				GlobalFunc_5077();
			}
			func_29(iLocal_97);
			if (func_27(iLocal_96))
			{
				GlobalFunc_10607(&uLocal_121, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_89(15);
			}
			if (GlobalFunc_5182(&uLocal_118) > 1f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, 242628503) == 7)
				{
					GlobalFunc_6533(&iLocal_48, 512);
					iLocal_301 = 3;
				}
			}
			break;
		
		case 3:
			func_89(15);
			break;
		
		case 5:
			func_89(15);
			break;
	}
}























int func_27(int iParam0)//Position - 0xF3A
{
	if (GlobalFunc_2796())
	{
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(iParam0), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1))
		{
			return 1;
		}
	}
	return 0;
}


void func_29(int iParam0)//Position - 0xF7A
{
	if (iLocal_296 != 1 && iLocal_296 != 2)
	{
		return;
	}
	if (func_31())
	{
		func_30(&iParam0);
	}
}

void func_30(var uParam0)//Position - 0xFA4
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		Var0 = { 0f, 0f, -0.1f };
		Var3 = { 0f, 0f, 0f };
		ENTITY::APPLY_FORCE_TO_ENTITY(*uParam0, 1, Var0, Var3, 0, 1, 1, 1, 1, 0);
	}
}

bool func_31()//Position - 0xFDF
{
	return ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_95, 876132797);
}





int func_36(int iParam0)//Position - 0x104D
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uLocal_62))
	{
		uLocal_62 = func_44(iParam0, 0, 0);
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(uLocal_62))
	{
		return 0;
	}
	else
	{
		func_37(iLocal_95, func_43(), 1, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_71) / 2f)))));
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_37(iParam0, func_43(), 0, SYSTEM::FLOOR((15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_71) / 2f)))));
		}
		GlobalFunc_587("anim_dict has loaded, triggering anims?");
		func_441(&iLocal_48, 512);
		return 1;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x10DA
{
	int iVar0;
	bool bVar1;
	var uVar2;
	var uVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		return;
	}
	iLocal_47 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) && func_42(0, 1))
	{
		if (iLocal_47 != 4)
		{
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
		}
	}
	bVar1 = func_41(iVar0);
	uVar2 = func_44(iParam0, 0, 0);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(uVar2))
	{
		STREAMING::REQUEST_ANIM_DICT(uVar2);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar3);
		TASK::TASK_PLAY_ANIM(0, uVar2, func_38(0, bParam2, bParam1, bVar1), 8f, -8f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, uVar2, func_38(1, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, uVar2, func_38(2, bParam2, bParam1, bVar1), 8f, -4f, iParam3, 1, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, uVar2, func_38(3, bParam2, bParam1, bVar1), 8f, -4f, -1, 0, 0, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(0, uVar2, func_38(4, bParam2, bParam1, bVar1), 4f, -2f, -1, 0, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar3);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar3);
		TASK::CLEAR_SEQUENCE_TASK(&uVar3);
	}
}

char* func_38(int iParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x1219
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(18);
					}
					else
					{
						sVar0 = func_40(23);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(8);
				}
				else
				{
					sVar0 = func_40(13);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(18);
				}
				else
				{
					sVar0 = func_39(23);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(8);
			}
			else
			{
				sVar0 = func_39(13);
			}
			break;
		
		case 1:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(19);
					}
					else
					{
						sVar0 = func_40(24);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(9);
				}
				else
				{
					sVar0 = func_40(14);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(19);
				}
				else
				{
					sVar0 = func_39(24);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(9);
			}
			else
			{
				sVar0 = func_39(14);
			}
			break;
		
		case 2:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
			break;
		
		case 3:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(21);
					}
					else
					{
						sVar0 = func_40(26);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(11);
				}
				else
				{
					sVar0 = func_40(16);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(21);
				}
				else
				{
					sVar0 = func_39(26);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(11);
			}
			else
			{
				sVar0 = func_39(16);
			}
			break;
		
		case 4:
			if (bParam3)
			{
				if (bParam2)
				{
					if (bParam1)
					{
						sVar0 = func_40(22);
					}
					else
					{
						sVar0 = func_40(27);
					}
				}
				else if (bParam1)
				{
					sVar0 = func_40(12);
				}
				else
				{
					sVar0 = func_40(17);
				}
			}
			else if (bParam2)
			{
				if (bParam1)
				{
					sVar0 = func_39(22);
				}
				else
				{
					sVar0 = func_39(27);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(12);
			}
			else
			{
				sVar0 = func_39(17);
			}
			break;
		
		case 5:
			if (bParam3)
			{
				if (bParam1)
				{
					sVar0 = func_40(3);
				}
				else
				{
					sVar0 = func_40(2);
				}
			}
			else if (bParam1)
			{
				sVar0 = func_39(3);
			}
			else
			{
				sVar0 = func_39(2);
			}
			break;
		
		case 6:
			break;
	}
	return sVar0;
}

char* func_39(int iParam0)//Position - 0x14FB
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "into_proposition_male";
			break;
		
		case 1:
			sVar0 = "into_proposition_prostitute";
			break;
		
		case 2:
			sVar0 = "proposition_loop_male";
			break;
		
		case 3:
			sVar0 = "proposition_loop_prostitute";
			break;
		
		case 4:
			sVar0 = "proposition_to_exit_male";
			break;
		
		case 5:
			sVar0 = "prop_to_sit_alt_prostitute";
			break;
		
		case 6:
			sVar0 = "prop_to_sit_male";
			break;
		
		case 7:
			sVar0 = "prop_to_sit_prostitute";
			break;
		
		case 8:
			sVar0 = "proposition_to_sex_p1_prostitute";
			break;
		
		case 9:
			sVar0 = "proposition_to_sex_p2_prostitute";
			break;
		
		case 10:
			sVar0 = "sex_loop_prostitute";
			break;
		
		case 11:
			sVar0 = "sex_to_proposition_p1_prostitute";
			break;
		
		case 12:
			sVar0 = "sex_to_proposition_p2_prostitute";
			break;
		
		case 13:
			sVar0 = "proposition_to_sex_p1_male";
			break;
		
		case 14:
			sVar0 = "proposition_to_sex_p2_male";
			break;
		
		case 15:
			sVar0 = "sex_loop_male";
			break;
		
		case 16:
			sVar0 = "sex_to_proposition_p1_male";
			break;
		
		case 17:
			sVar0 = "sex_to_proposition_p2_male";
			break;
		
		case 18:
			sVar0 = "proposition_to_BJ_p1_prostitute";
			break;
		
		case 19:
			sVar0 = "proposition_to_BJ_p2_prostitute";
			break;
		
		case 20:
			sVar0 = "BJ_loop_prostitute";
			break;
		
		case 21:
			sVar0 = "BJ_to_proposition_p1_prostitute";
			break;
		
		case 22:
			sVar0 = "BJ_to_proposition_p2_prostitute";
			break;
		
		case 23:
			sVar0 = "proposition_to_BJ_p1_male";
			break;
		
		case 24:
			sVar0 = "proposition_to_BJ_p2_male";
			break;
		
		case 25:
			sVar0 = "BJ_loop_male";
			break;
		
		case 26:
			sVar0 = "BJ_to_proposition_p1_male";
			break;
		
		case 27:
			sVar0 = "BJ_to_proposition_p2_male";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_40(int iParam0)//Position - 0x16B9
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "low_car_sit_to_prop_player";
			break;
		
		case 1:
			sVar0 = "low_car_sit_to_prop_female";
			break;
		
		case 2:
			sVar0 = "low_car_prop_loop_player";
			break;
		
		case 3:
			sVar0 = "low_car_prop_loop_female";
			break;
		
		case 4:
			sVar0 = "low_car_prop_to_leave_player";
			break;
		
		case 5:
			sVar0 = "low_car_prop_to_sit_alt_female";
			break;
		
		case 6:
			sVar0 = "low_car_prop_to_sit_player";
			break;
		
		case 7:
			sVar0 = "low_car_prop_to_sit_female";
			break;
		
		case 8:
			sVar0 = "low_car_prop_to_sex_p1_female";
			break;
		
		case 9:
			sVar0 = "low_car_prop_to_sex_p2_female";
			break;
		
		case 10:
			sVar0 = "low_car_sex_loop_female";
			break;
		
		case 11:
			sVar0 = "low_car_sex_to_prop_p1_female";
			break;
		
		case 12:
			sVar0 = "low_car_sex_to_prop_p2_female";
			break;
		
		case 13:
			sVar0 = "low_car_prop_to_sex_p1_player";
			break;
		
		case 14:
			sVar0 = "low_car_prop_to_sex_p2_player";
			break;
		
		case 15:
			sVar0 = "low_car_sex_loop_player";
			break;
		
		case 16:
			sVar0 = "low_car_sex_to_prop_p1_player";
			break;
		
		case 17:
			sVar0 = "low_car_sex_to_prop_p2_player";
			break;
		
		case 18:
			sVar0 = "low_car_prop_to_bj_p1_female";
			break;
		
		case 19:
			sVar0 = "low_car_prop_to_bj_p2_female";
			break;
		
		case 20:
			sVar0 = "low_car_bj_loop_female";
			break;
		
		case 21:
			sVar0 = "low_car_bj_to_prop_p1_female";
			break;
		
		case 22:
			sVar0 = "low_car_bj_to_prop_p2_female";
			break;
		
		case 23:
			sVar0 = "low_car_prop_to_bj_p1_player";
			break;
		
		case 24:
			sVar0 = "low_car_prop_to_bj_p2_player";
			break;
		
		case 25:
			sVar0 = "low_car_bj_loop_player";
			break;
		
		case 26:
			sVar0 = "low_car_bj_to_prop_p1_player";
			break;
		
		case 27:
			sVar0 = "low_car_bj_to_prop_p2_player";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_41(int iParam0)//Position - 0x1877
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -2066252141:
			case -38413156:
			case -782720499:
			case 542797648:
			case 68566729:
			case -463340997:
			case 2033852426:
			case -1820894825:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_42(bool bParam0, bool bParam1)//Position - 0x18CC
{
	bool bVar0;
	
	bVar0 = false;
	if (bParam0)
	{
		bVar0 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4;
	}
	if (bParam1)
	{
		if (!bVar0)
		{
			bVar0 = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4;
		}
	}
	return bVar0;
}

bool func_43()//Position - 0x18FB
{
	return iLocal_296 == 0;
}

var func_44(int iParam0, bool bParam1, int iParam2)//Position - 0x1908
{
	var uVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (func_41(iVar0))
			{
				if ((!func_42(0, 1) || iParam2) && !bParam1)
				{
					return func_48();
				}
				else
				{
					return func_47();
				}
			}
		}
	}
	if ((!func_42(0, 1) || iParam2) && !bParam1)
	{
		return func_46();
	}
	return func_45();
}

char* func_45()//Position - 0x1989
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_46()//Position - 0x1995
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_47()//Position - 0x19A1
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_48()//Position - 0x19AD
{
	return "mini@prostitutes@sexlow_veh";
}

int func_49(int iParam0)//Position - 0x19B9
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0) || !GlobalFunc_1533(iParam0, iLocal_97, -1))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 196624, 1);
			if (GlobalFunc_745())
			{
				TASK::TASK_SMART_FLEE_COORD(iParam0, Var0, 300f, -1, 1, 1);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_PEDS_JACKER(iParam0)))
			{
				TASK::TASK_COMBAT_PED(iParam0, PED::GET_PEDS_JACKER(iParam0), 0, 16);
			}
			else
			{
				TASK::TASK_SMART_FLEE_COORD(iParam0, Var0, 300f, -1, 1, 1);
			}
		}
	}
	return 0;
}



float func_52(int iParam0)//Position - 0x1AA5
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_95, 1) };
	Var3 = { Local_89 };
	if (iParam0 == 0)
	{
		if (Var0.x < Var3.x)
		{
			return (Var0.x - 20f);
		}
		else
		{
			return (Var3.x - 20f);
		}
	}
	if (iParam0 == 1)
	{
		if (Var0.f_1 < Var3.f_1)
		{
			return (Var0.f_1 - 20f);
		}
		else
		{
			return (Var3.f_1 - 20f);
		}
	}
	if (iParam0 == 2)
	{
		if (Var0.x > Var3.x)
		{
			return (Var0.x + 20f);
		}
		else
		{
			return (Var3.x + 20f);
		}
	}
	if (Var0.f_1 > Var3.f_1)
	{
		return (Var0.f_1 + 20f);
	}
	return (Var3.f_1 + 20f);
}

void func_53()//Position - 0x1B6C
{
	if (!PED::IS_PED_INJURED(iLocal_96))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_96, iLocal_97, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, 242628503) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_95) > 0)
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_97, 0))
						{
							GlobalFunc_587("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							TASK::OPEN_SEQUENCE_TASK(&uLocal_100);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_97, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_100);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_96, uLocal_100);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_100);
							Local_89 = { func_54(ENTITY::GET_ENTITY_COORDS(iLocal_95, 1)) };
							STREAMING::REQUEST_ANIM_DICT(func_44(iLocal_95, 0, 0));
							iLocal_294 = 7;
							iLocal_63 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			else
			{
				GlobalFunc_587("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			GlobalFunc_587("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		GlobalFunc_587("EXIT - OTHER ped INJURED");
		func_90();
	}
}

Vector3 func_54(struct<3> Param0)//Position - 0x1C3D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (SYSTEM::VDIST2(Param0, func_55(iVar1)) < SYSTEM::VDIST2(Param0, func_55(iVar0)))
		{
			iVar0 = iVar1;
		}
		iVar1++;
	}
	return func_55(iVar0);
}

Vector3 func_55(int iParam0)//Position - 0x1C85
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { -1449.075f, -634.0139f, 29.094f };
			break;
		
		case 1:
			Var0 = { -1266.291f, -1361.175f, 3.222f };
			break;
		
		case 2:
			Var0 = { -227.0429f, 311.6679f, 91.1655f };
			break;
		
		case 3:
			Var0 = { -1310.978f, -235.9881f, 41.1789f };
			break;
		
		case 4:
			Var0 = { -545.299f, -874.6625f, 26.1981f };
			break;
		
		case 5:
			Var0 = { -192.1116f, -1332.385f, 30.3304f };
			break;
		
		case 6:
			Var0 = { 196.6188f, -1850.396f, 26.2005f };
			break;
		
		case 7:
			Var0 = { 322.9744f, -1000.23f, 28.2401f };
			break;
		
		case 8:
			Var0 = { 38.824f, -98.3984f, 55.2507f };
			break;
		
		case 9:
			Var0 = { -1800.76f, -404.1213f, 43.8109f };
			break;
		
		case 10:
			Var0 = { 1421.334f, -1618.83f, 58.3324f };
			break;
		
		case 11:
			Var0 = { 983.5914f, -2360.14f, 29.5098f };
			break;
		
		case 12:
			Var0 = { 97.9046f, -2501.28f, 5.0001f };
			break;
		
		case 13:
			Var0 = { 1591.921f, 6516.841f, 16.3155f };
			break;
		
		case 14:
			Var0 = { 1278.73f, 3624.059f, 32.0408f };
			break;
		
		case 15:
			Var0 = { 2464.667f, 5526.815f, 44.2143f };
			break;
		
		case 16:
			Var0 = { 2052.58f, 4637.477f, 39.642f };
			break;
		
		case 17:
			Var0 = { 1435.608f, 4483.951f, 49.2513f };
			break;
		
		case 18:
			Var0 = { 218.214f, 4439.288f, 66.9056f };
			break;
		
		case 19:
			Var0 = { 16.9496f, 3632.35f, 39.2848f };
			break;
		
		case 20:
			Var0 = { 2.0464f, 3293.74f, 40.2594f };
			break;
		
		case 21:
			Var0 = { -1195.701f, 2639.13f, 15.1653f };
			break;
		
		case 22:
			Var0 = { -1663.641f, 2477.778f, 30.9941f };
			break;
		
		case 23:
			Var0 = { -2505.643f, 3677.825f, 12.1719f };
			break;
		
		case 24:
			Var0 = { -2179.209f, 4264.236f, 47.9904f };
			break;
		
		case 25:
			Var0 = { -758.9616f, 5612.78f, 29.4536f };
			break;
		
		case 26:
			Var0 = { -276.8032f, 6327.188f, 31.4262f };
			break;
		
		case 27:
			Var0 = { 1483.839f, 6366.199f, 22.6875f };
			break;
		
		case 28:
			Var0 = { 949.013f, 3551.753f, 32.9687f };
			break;
		
		case 29:
			Var0 = { 180.9372f, 3051.781f, 42.1131f };
			break;
		
		case 30:
			Var0 = { -462.9046f, 6115.419f, 28.8805f };
			break;
		
		case 31:
			Var0 = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}
	return Var0;
}

void func_56()//Position - 0x2018
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_96))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_96, iLocal_97, 0))
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_97);
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_96, iLocal_95, 15f, 15f, 5f, 0, 1, 0) && fVar0 <= 1f)
				{
					func_63(iLocal_95);
					iLocal_64 = MISC::GET_GAME_TIMER();
					iLocal_65 = (iLocal_64 - iLocal_63);
					if (iLocal_65 >= iLocal_67)
					{
						if (func_510())
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_96))
							{
								TASK::TASK_CLEAR_LOOK_AT(iLocal_96);
							}
						}
						else
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_96);
						}
						iLocal_67 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
						if (iLocal_67 > 2500)
						{
							TASK::CLEAR_PED_TASKS(iLocal_95);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_100);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_100);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_97, -1, 0, 1f, 8388609, 0);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_100);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_95, uLocal_100);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_100);
							GlobalFunc_587("other GIVES MONEY");
							iLocal_294 = 5;
						}
						else
						{
							func_62();
							func_57();
							if (!PED::IS_PED_INJURED(iLocal_96))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, 0))
								{
									if (PED::IS_PED_IN_VEHICLE(iLocal_96, iLocal_97, 0))
									{
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_100);
										TASK::OPEN_SEQUENCE_TASK(&uLocal_100);
										TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 2000));
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_97, 10f, 786603);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_100);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_96, uLocal_100);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_100);
										iLocal_63 = MISC::GET_GAME_TIMER();
									}
								}
							}
							GlobalFunc_587("prostitute REFUSED MONEY 2");
							if (func_510())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_96))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_96);
								}
							}
							else
							{
								TASK::TASK_CLEAR_LOOK_AT(iLocal_96);
							}
							iLocal_294 = 6;
						}
					}
				}
				else
				{
					if (func_510())
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_96))
						{
							TASK::TASK_CLEAR_LOOK_AT(iLocal_96);
						}
					}
					else
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_96);
					}
					func_90();
				}
			}
			else
			{
				GlobalFunc_587("EXIT - OTHER OUT OF THE VEHICLE");
				if (func_510())
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_96))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_96);
					}
				}
				else
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_96);
				}
				func_90();
			}
		}
		else
		{
			GlobalFunc_587("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		GlobalFunc_587("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_57()//Position - 0x220A
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95) || PED::IS_PED_INJURED(iLocal_95))
	{
		return 1;
	}
	if (!func_510())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_95, 1))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_95, 1193033728, 0);
		}
		else if (GlobalFunc_2951(iLocal_48, 4194304))
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			if (GlobalFunc_2951(iLocal_74, 524288))
			{
				TASK::TASK_PLAY_ANIM(0, func_61(iLocal_292), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
			}
			func_58(1);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_95, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			func_441(&iLocal_48, 16384);
			GlobalFunc_6877(&uLocal_112);
		}
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_95, 1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_95, 1193033728, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
		}
	}
	switch (iLocal_53)
	{
		case 0:
			if (GlobalFunc_2951(iLocal_48, 4194304))
			{
				iLocal_53 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_2951(iLocal_74, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
				{
					TASK::TASK_PLAY_ANIM(iLocal_95, func_61(iLocal_292), func_60(7), 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
					return 0;
				}
			}
			iLocal_53 = 2;
			break;
		
		case 2:
			if (GlobalFunc_2951(iLocal_74, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, -2017877118) == 7)
					{
						func_58(0);
						iLocal_53 = 3;
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
			{
				func_58(0);
				iLocal_53 = 3;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
			}
			break;
		
		case 3:
			func_441(&iLocal_48, 16384);
			GlobalFunc_6877(&uLocal_112);
			return 1;
			break;
	}
	return 0;
}

void func_58(bool bParam0)//Position - 0x23DA
{
	struct<3> Var0;
	
	if (((TASK::PED_HAS_USE_SCENARIO_TASK(iLocal_95) || TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_95)) || PED::IS_PED_USING_SCENARIO(iLocal_95, func_59(0))) || PED::IS_PED_USING_SCENARIO(iLocal_95, func_59(1)))
	{
		return;
	}
	Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_95, 1) };
	if (!TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var0, func_59(0), 20f, 1) && !TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var0, func_59(1), 20f, 1))
	{
		if (bParam0)
		{
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(iLocal_95, 1193033728, 0);
		}
		return;
	}
	if (!bParam0)
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_95, Var0, 20f, 0);
	}
	else
	{
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Var0, 20f, 0);
	}
}

char* func_59(int iParam0)//Position - 0x24A1
{
	if (iParam0 == 0)
	{
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";
	}
	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_60(int iParam0)//Position - 0x24BB
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
			break;
		
		case 1:
			return "idle_a";
			break;
		
		case 2:
			return "idle_b";
			break;
		
		case 3:
			return "idle_c";
			break;
		
		case 4:
			return "idle_wait";
			break;
		
		case 5:
			return "idle_reject";
			break;
		
		case 8:
			return "idle_reject_loop_a";
			break;
		
		case 9:
			return "idle_reject_loop_b";
			break;
		
		case 10:
			return "idle_reject_loop_c";
			break;
		
		case 11:
			return "idle_outro";
			break;
		
		case 6:
			return "reject_2_idle";
			break;
		
		case 7:
			return "reject_outro";
			break;
	}
	return "";
}

char* func_61(int iParam0)//Position - 0x258E
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "mini@hookers_spcrackhead";
			break;
		
		case 1:
			sVar0 = "mini@hookers_spcokehead";
			break;
		
		case 3:
		case 4:
			sVar0 = "mini@hookers_spfrench";
			break;
		
		case 2:
		default:
			sVar0 = "mini@hookers_spvanilla";
			break;
	}
	return sVar0;
}

void func_62()//Position - 0x25E1
{
	if (PED::IS_PED_INJURED(iLocal_95))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95))
	{
		if (GlobalFunc_8315() == 2)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

void func_63(int iParam0)//Position - 0x2628
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_64(iParam0))
		{
			PED::SET_PED_RESET_FLAG(iParam0, 109, 1);
		}
	}
}

int func_64(int iParam0)//Position - 0x264C
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_61(iLocal_292), func_60(1), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_61(iLocal_292), func_60(2), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_61(iLocal_292), func_60(3), 3))
		{
			return 1;
		}
	}
	return 0;
}

void func_65()//Position - 0x26AB
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_96))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_96, iLocal_97, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, 242628503) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(iLocal_95) > 1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_95, iLocal_96, 20f, 20f, 10f, 0, 1, 0))
						{
							fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_97);
							if (fVar0 <= 1f)
							{
								func_66(0);
								iLocal_63 = MISC::GET_GAME_TIMER();
								iLocal_67 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000);
								GlobalFunc_587("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_294 = 4;
							}
						}
						else
						{
							GlobalFunc_587("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_90();
						}
					}
				}
			}
			else
			{
				GlobalFunc_587("EXIT - OTHER OUT OF THE VEHICLE");
				func_90();
			}
		}
		else
		{
			GlobalFunc_587("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		GlobalFunc_587("EXIT - OTHER ped INJURED");
		func_90();
	}
}

int func_66(bool bParam0)//Position - 0x2778
{
	int iVar0;
	var uVar1;
	
	if (!func_510())
	{
		if (bParam0)
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_95, "PROSTITUTE_GROUP", 0);
			func_81("PROSTITUTES_SOLICIT_SCENE");
		}
		func_67();
		if (GlobalFunc_2951(iLocal_48, 4194304))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			TASK::OPEN_SEQUENCE_TASK(&uVar1);
			TASK::TASK_PLAY_ANIM(0, func_61(iLocal_292), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, func_61(iLocal_292), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, func_61(iLocal_292), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_95, uVar1);
			TASK::CLEAR_SEQUENCE_TASK(&uVar1);
		}
		return 1;
	}
	switch (iLocal_52)
	{
		case 0:
			if (bParam0)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_95, "PROSTITUTE_GROUP", 0);
				func_81("PROSTITUTES_SOLICIT_SCENE");
			}
			func_67();
			iLocal_52 = 1;
			break;
		
		case 1:
			if (GlobalFunc_2951(iLocal_48, 4194304))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
				{
					TASK::TASK_PLAY_ANIM(iLocal_95, func_61(iLocal_292), func_60(0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_52 = 2;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, -2017877118) == 7)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
					TASK::TASK_PLAY_ANIM(iLocal_95, func_61(iLocal_292), func_60(iVar0), 2f, -2f, -1, 0, 0, 0, 0, 0);
					iLocal_52 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
			}
			break;
		
		case 3:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, -2017877118) == 7)
				{
					TASK::TASK_PLAY_ANIM(iLocal_95, func_61(iLocal_292), func_60(4), 2f, -2f, -1, 1, 0, 0, 0, 0);
					iLocal_52 = 4;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
			}
			break;
		
		case 4:
			iLocal_52 = 0;
			return 1;
			break;
	}
	return 0;
}

void func_67()//Position - 0x295A
{
	if (PED::IS_PED_INJURED(iLocal_95))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95))
	{
		switch (GlobalFunc_8315())
		{
			case 0:
				if (!func_68(iLocal_95))
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 1:
				if (!func_68(iLocal_95))
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			
			case 2:
				if (!func_68(iLocal_95))
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				else
				{
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				}
				break;
			}
	}
}

bool func_68(int iParam0)//Position - 0x2A1D
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	return func_69(iVar0);
}

int func_69(int iParam0)//Position - 0x2A33
{
	if (func_70(iParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x2A4A
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 == -1)
	{
		return 0;
	}
	if (GlobalFunc_8315() == 0)
	{
		iVar0 = Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iParam0 /*11*/][0];
	}
	else if (GlobalFunc_8315() == 1)
	{
		iVar0 = Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iParam0 /*11*/][1];
	}
	else if (GlobalFunc_8315() == 2)
	{
		iVar0 = Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iParam0 /*11*/][2];
	}
	return iVar0;
}

int func_71(int iParam0)//Position - 0x2AB5
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (func_70(iVar0) > 0)
			{
				if ((func_77(iParam0, iVar0) && func_73(iParam0, iVar0)) && func_72(iParam0, iVar0))
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

int func_72(int iParam0, int iParam1)//Position - 0x2B0F
{
	if (PED::IS_PED_MODEL(iParam0, Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iParam1 /*11*/].f_10))
	{
		return 1;
	}
	return 0;
}

int func_73(int iParam0, int iParam1)//Position - 0x2B34
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_74(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_74(int iParam0, int iParam1, int iParam2)//Position - 0x2B61
{
	var uVar0;
	
	uVar0 = func_76(iParam2);
	return PED::GET_PED_TEXTURE_VARIATION(uParam0, uVar0) == func_75(iParam1, iParam2);
}

int func_75(int iParam0, int iParam1)//Position - 0x2B82
{
	if (func_69(iParam0))
	{
		return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iParam0 /*11*/].f_7[iParam1];
	}
	return -1;
}

int func_76(int iParam0)//Position - 0x2BAA
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_77(int iParam0, int iParam1)//Position - 0x2BD3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_78(iParam0, iParam1, iVar0))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

bool func_78(int iParam0, int iParam1, int iParam2)//Position - 0x2C00
{
	var uVar0;
	
	uVar0 = func_80(iParam2);
	return PED::GET_PED_DRAWABLE_VARIATION(uParam0, uVar0) == func_79(iParam1, iParam2);
}

int func_79(int iParam0, int iParam1)//Position - 0x2C21
{
	if (func_69(iParam0))
	{
		return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iParam0 /*11*/].f_4[iParam1];
	}
	return -1;
}

int func_80(int iParam0)//Position - 0x2C49
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

void func_81(char* sParam0)//Position - 0x2C72
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::START_AUDIO_SCENE(sParam0);
	}
}

void func_82()//Position - 0x2C8B
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	
	if (!PED::IS_PED_INJURED(iLocal_96))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_96, iLocal_97, 0))
			{
				fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_97);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_96, -272084098) == 7 || fVar0 <= 1f)
				{
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_97), &Var4, &Var1);
					Var7 = { Var1 - Var4 };
					Var7 = { Var7 / Vector(2f, 2f, 2f) };
					Var10 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_97, 0.2f, 0.2f, 0f) };
					Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_97, 0.2f, 0.2f, 0f) };
					Var16 = { ENTITY::GET_ENTITY_COORDS(iLocal_95, 1) };
					if (SYSTEM::VDIST(Var16, Var13) < SYSTEM::VDIST(Var16, Var10))
					{
						Var10 = { Var13 };
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_100);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var10.x, Var10.f_1, Var10.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_96, 0);
					TASK::TASK_STAND_STILL(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_100);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_95, uLocal_100);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_100);
					GlobalFunc_587("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_294 = 3;
				}
				else
				{
					GlobalFunc_587("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				GlobalFunc_587("EXIT - OTHER OUT OF VEHICLE");
				func_90();
			}
		}
		else
		{
			GlobalFunc_587("EXIT - OTHER VEHICLE DEAD");
			func_90();
		}
	}
	else
	{
		GlobalFunc_587("EXIT - OTHER ped INJURED");
		func_90();
	}
}

void func_83()//Position - 0x2DDE
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(iLocal_96))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_96, iLocal_97, 0))
			{
				if (func_85(&iLocal_97))
				{
					if (func_84(ENTITY::GET_ENTITY_COORDS(iLocal_96, 1), 1106247680))
					{
						return;
					}
					Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_95, 1) };
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(Var0, &Var0, 8, 1077936128, 0))
					{
						PED::SET_DRIVER_ABILITY(iLocal_96, 1f);
						PED::SET_DRIVER_RACING_MODIFIER(iLocal_96, 0.2f);
						PED::SET_DRIVER_AGGRESSIVENESS(iLocal_96, 0.05f);
						TASK::TASK_VEHICLE_PARK(iLocal_96, iLocal_97, Var0, 0f, 3, 360f, 1);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_96, iLocal_95, -1, 2048, 4);
						GlobalFunc_587("OTHER TOLD TO PULL OVER");
						iLocal_294 = 2;
					}
				}
				else
				{
					GlobalFunc_587("EXIT - Vehicle is not suitable");
					func_89(15);
				}
			}
			else
			{
				GlobalFunc_587("EXIT - OTHER OUT OF THE VEHICLE");
				func_89(15);
			}
		}
		else
		{
			GlobalFunc_587("EXIT - OTHER VEHICLE DEAD");
			func_89(15);
		}
	}
	else
	{
		GlobalFunc_587("EXIT - OTHER ped INJURED");
		func_89(15);
	}
}

bool func_84(struct<3> Param0, int iParam3)//Position - 0x2ED3
{
	if (func_510())
	{
		return PED::IS_COP_PED_IN_AREA_3D(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3));
	}
	return (VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)) || PED::IS_COP_PED_IN_AREA_3D(Param0 - Vector(iParam3, iParam3, iParam3), Param0 + Vector(iParam3, iParam3, iParam3)));
}

int func_85(int iParam0)//Position - 0x2F39
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(*iParam0);
		if (func_88(iVar0, 0) && func_87(*iParam0))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*iParam0) > 0)
			{
				iVar1 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(*iParam0);
				if (((iVar1 == 0 && VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam0, 0)) && (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*iParam0, 1) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*iParam0, 0))) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 0) == iLocal_95)
				{
					if (func_41(*iParam0))
					{
						if (!GlobalFunc_2951(iLocal_48, 32768))
						{
							func_441(&iLocal_48, 32768);
							if (!GlobalFunc_2951(iLocal_48, 8))
							{
								STREAMING::REQUEST_CLIP_SET(func_86());
								func_441(&iLocal_48, 8);
							}
						}
					}
					else
					{
						if (GlobalFunc_2951(iLocal_48, 32768))
						{
							GlobalFunc_6533(&iLocal_48, 32768);
						}
						if (GlobalFunc_2951(iLocal_48, 8))
						{
							if (STREAMING::HAS_CLIP_SET_LOADED(func_86()))
							{
								STREAMING::REMOVE_CLIP_SET(func_86());
								GlobalFunc_6533(&iLocal_48, 8);
							}
						}
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

char* func_86()//Position - 0x3046
{
	return "clipset@veh@low@ps@female@base";
}

int func_87(int iParam0)//Position - 0x3052
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			iVar0 = 0;
			while (iVar0 < 25)
			{
				iVar1 = iVar0;
				if (((((iVar1 != 17 && iVar1 != 18) && iVar1 != 19) && iVar1 != 20) && iVar1 != 21) && iVar1 != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
					{
						StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
						iVar2 = MISC::GET_HASH_KEY(&cVar3);
						if (iVar2 != 0)
						{
							if (iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
							{
								return 0;
							}
						}
					}
				}
				iVar0++;
			}
		}
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -2066252141:
			case -782720499:
			case 542797648:
			case 68566729:
			case 1486715695:
			case -1917671975:
			case -1405350320:
			case -157990217:
			case -280076747:
			case 1710903184:
			case 434478421:
			case 1816176348:
			case 919485892:
			case 945079693:
			case 85100643:
			case 1939145032:
			case 1869774540:
			case -28233912:
			case -1150063973:
			case -463340997:
			case -703649403:
			case 197952738:
			case -208246612:
			case 2033852426:
			case -1820894825:
				return 1;
				break;
		}
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0) == 931866387 && ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("slamvan"))
		{
			return 1;
		}
	}
	return 0;
}

int func_88(int iParam0, bool bParam1)//Position - 0x31CB
{
	if ((((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0)) || VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (((((((iParam0 == joaat("police") || iParam0 == joaat("police2")) || iParam0 == joaat("police3")) || iParam0 == joaat("police4")) || iParam0 == joaat("fbi")) || iParam0 == joaat("fbi2")) || iParam0 == joaat("caddy")) || iParam0 == joaat("caddy2"))
		{
			return 0;
		}
	}
	if ((((iParam0 == joaat("issi2") || iParam0 == joaat("hotknife")) || iParam0 == joaat("jb700")) || iParam0 == joaat("jester")) || iParam0 == joaat("jester2"))
	{
		return 0;
	}
	return 1;
}

void func_89(int iParam0)//Position - 0x32CF
{
	iLocal_294 = iParam0;
}

void func_90()//Position - 0x32DC
{
	if (func_510())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
		{
			TASK::CLEAR_PED_TASKS(iLocal_95);
			TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iLocal_95);
		TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
	}
	iLocal_96 = 0;
	iLocal_97 = 0;
	TASK::TASK_PLAY_ANIM(iLocal_95, func_61(iLocal_292), func_60(4), 2f, -2f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.9f), 0, 0, 0);
	func_89(0);
	iLocal_295 = 0;
	iLocal_293 = 1;
}

void func_91(var uParam0)//Position - 0x3349
{
	if (!GlobalFunc_2951(iLocal_48, 32))
	{
		iLocal_293 = 1;
	}
	if (iLocal_294 > 1 && iLocal_294 != 12)
	{
		if (!GlobalFunc_2951(iLocal_48, 33554432))
		{
			if (func_510())
			{
				if (Global_1675399 || func_433())
				{
					func_432(0);
					func_441(&iLocal_48, 33554432);
				}
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (GlobalFunc_2951(iLocal_48, 1048576) || GlobalFunc_2951(iLocal_48, 8192))
				{
					func_432(0);
					func_441(&iLocal_48, 33554432);
				}
			}
		}
	}
	switch (iLocal_294)
	{
		case 0:
			if (GlobalFunc_2951(iLocal_48, 16384) || GlobalFunc_2951(iLocal_48, 8388608))
			{
				if (!GlobalFunc_226(&uLocal_112))
				{
					GlobalFunc_7777(&uLocal_112);
				}
				if (GlobalFunc_7950(&uLocal_112, 25f))
				{
					GlobalFunc_6533(&iLocal_48, 16384);
					GlobalFunc_6533(&iLocal_48, 8388608);
				}
			}
			else if (iLocal_295 != 0 && !GlobalFunc_74("PROS_NO_MONEY"))
			{
				func_58(0);
				switch (GlobalFunc_8315())
				{
					case 0:
						GlobalFunc_173(&uLocal_121, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						break;
					
					case 1:
						GlobalFunc_173(&uLocal_121, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						break;
					
					case 2:
						GlobalFunc_173(&uLocal_121, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						break;
				}
				iLocal_294 = 1;
			}
			else
			{
				func_427();
				iLocal_295 = 2;
			}
			break;
		
		case 1:
			func_418(uParam0);
			break;
		
		case 2:
			func_405(uParam0);
			break;
		
		case 3:
			func_404();
			break;
		
		case 4:
			func_392(uParam0);
			break;
		
		case 5:
			func_387();
			break;
		
		case 6:
			func_386(uParam0);
			break;
		
		case 7:
			func_365();
			func_357();
			break;
		
		case 8:
			func_354();
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			func_223();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			if (func_510())
			{
				func_217(uParam0);
			}
			break;
		
		case 9:
			func_214();
			break;
		
		case 10:
			func_211();
			break;
		
		case 11:
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			func_118();
			func_222(uParam0);
			func_221(uParam0);
			func_220(uParam0);
			func_115(uParam0);
			if (func_510())
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 433, 1);
				func_217(uParam0);
			}
			break;
		
		case 12:
			func_448();
			break;
		
		case 13:
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_96();
			break;
		
		case 14:
			func_95();
			break;
		
		case 15:
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_92(uParam0);
			break;
	}
}

void func_92(var uParam0)//Position - 0x3636
{
	if (!func_510())
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_94(1), 3))
		{
			return;
		}
	}
	if (GlobalFunc_2951(iLocal_48, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
			GlobalFunc_6533(&iLocal_48, 16);
		}
	}
	if (GlobalFunc_2951(iLocal_48, 2))
	{
		GlobalFunc_587(1);
		GlobalFunc_587("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}
	func_500();
	if (func_510())
	{
		func_495(uParam0);
	}
}


var func_94(bool bParam0)//Position - 0x36BB
{
	if (!GlobalFunc_2951(iLocal_48, 32768))
	{
		if (bParam0)
		{
			return func_39(6);
		}
		else
		{
			return func_39(7);
		}
	}
	if (bParam0)
	{
		return func_40(6);
	}
	return func_40(7);
}

void func_95()//Position - 0x3701
{
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_71 == 0)
		{
			if (GlobalFunc_2951(iLocal_48, 134217728))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_95, 32768, 0);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_95, 196624, 1);
			}
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_89(15);
		}
	}
}

void func_96()//Position - 0x3754
{
	switch (iLocal_302)
	{
		case 0:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95) || GlobalFunc_5425(&uLocal_106) > 4f)
			{
				func_109(iLocal_95);
				if (func_70(func_71(iLocal_95)) == 1)
				{
					iLocal_302 = 2;
				}
				else
				{
					GlobalFunc_235(&uLocal_106);
					GlobalFunc_Display_Help_Text("PROS_RESPONSE");
					iLocal_302 = 1;
				}
			}
			break;
		
		case 1:
			func_106();
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95) || GlobalFunc_111())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
				func_441(&iLocal_48, 2048);
			}
			else
			{
				if (!GlobalFunc_226(&uLocal_106))
				{
					GlobalFunc_6877(&uLocal_106);
				}
				if (GlobalFunc_5425(&uLocal_106) > 15f || iLocal_305 != 0)
				{
					HUD::CLEAR_HELP(1);
					func_104();
					iLocal_302 = 2;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				iLocal_302 = 3;
			}
			break;
		
		case 3:
			func_99(0);
			GlobalFunc_4907();
			func_89(15);
			break;
	}
}



void func_99(bool bParam0)//Position - 0x38C5
{
	if (!PED::IS_PED_INJURED(iLocal_95))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			PED::DELETE_PED(&iLocal_95);
		}
		else
		{
			func_100(iLocal_95, bParam0);
		}
	}
}

void func_100(int iParam0, bool bParam1)//Position - 0x38EF
{
	var uVar0;
	float fVar1;
	
	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_103(1), 3))
	{
		TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_94(1), 4f, -8f, -1, 0, 0, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (func_510())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				PED::RESET_PED_IN_VEHICLE_CONTEXT(iParam0);
			}
		}
		else
		{
			PED::RESET_PED_IN_VEHICLE_CONTEXT(iParam0);
		}
		if (GlobalFunc_2951(iLocal_48, 33554432))
		{
			TASK::CLEAR_PED_TASKS(iParam0);
		}
		if (bParam1)
		{
			fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
			if (fVar1 <= 0.25f)
			{
				func_441(&iLocal_48, 134217728);
			}
		}
		if (GlobalFunc_2951(iLocal_48, 134217728))
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32768, 1);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, 1, 0);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 196624, 1);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
			if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				if (!VEHICLE::IS_VEHICLE_STOPPED(PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
				{
					func_102(iParam0, 1);
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_44(iParam0, 0, 0), func_103(0), 3))
					{
						if (iLocal_71 > 0)
						{
							TASK::TASK_PLAY_ANIM(0, func_44(iParam0, 0, 0), func_94(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, func_44(iParam0, 0, 0), func_101(0), 4f, -4f, -1, 0, 0, 0, 0, 0);
						}
					}
					func_102(iParam0, 1);
				}
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
		if (func_510())
		{
			if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_95))
			{
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_95)))
				{
					PED::SET_PED_KEEP_TASK(iParam0, 1);
				}
			}
		}
		else
		{
			PED::SET_PED_KEEP_TASK(iParam0, 1);
		}
	}
}

var func_101(bool bParam0)//Position - 0x3ABD
{
	if (!GlobalFunc_2951(iLocal_48, 32768))
	{
		if (bParam0)
		{
			return func_39(4);
		}
		else
		{
			return func_39(5);
		}
	}
	if (bParam0)
	{
		return func_40(4);
	}
	return func_40(5);
}

void func_102(int iParam0, int iParam1)//Position - 0x3B03
{
	if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(uParam0, PED::GET_VEHICLE_PED_IS_IN(uParam0, 0), 0, 0, 0))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
	}
	else
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
	}
}

var func_103(bool bParam0)//Position - 0x3B35
{
	if (!GlobalFunc_2951(iLocal_48, 32768))
	{
		if (bParam0)
		{
			return func_39(2);
		}
		else
		{
			return func_39(3);
		}
	}
	if (bParam0)
	{
		return func_40(2);
	}
	return func_40(3);
}

void func_104()//Position - 0x3B7B
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);
	if ((iVar0 <= 333 && iLocal_305 == 0) || iLocal_305 == 3)
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (((iVar0 > 333 && iVar0 <= 666) && iLocal_305 == 0) || iLocal_305 == 1)
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
	else if (iLocal_305 == 0 || iLocal_305 == 2)
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}


void func_106()//Position - 0x3C42
{
	if (iLocal_305 == 0)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
		PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		PAD::SET_INPUT_EXCLUSIVE(2, 203);
		PAD::SET_INPUT_EXCLUSIVE(2, 201);
		PAD::SET_INPUT_EXCLUSIVE(2, 202);
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 203))
		{
			HUD::CLEAR_HELP(1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_305 = 3;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			HUD::CLEAR_HELP(1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_305 = 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			HUD::CLEAR_HELP(1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_305 = 2;
		}
	}
}



void func_109(int iParam0)//Position - 0x3D18
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
		{
			AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0);
		}
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(iParam0))
		{
			func_111(iParam0);
			func_110(iVar0);
		}
	}
}

void func_110(int iParam0)//Position - 0x3D53
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_70(iParam0);
	if (iVar0 < 6)
	{
		StringCopy(&Var1, "pbpro_H", 24);
		StringIntConCat(&Var1, iParam0 + 1, 24);
		StringConCat(&Var1, "V", 24);
		StringIntConCat(&Var1, iVar0, 24);
		GlobalFunc_10607(&uLocal_121, "pbproau", &Var1, 4, 0, 0, 0);
	}
}

void func_111(int iParam0)//Position - 0x3D9B
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 > -1)
	{
		GlobalFunc_200(&uLocal_121, 4);
		GlobalFunc_173(&uLocal_121, 6, iParam0, func_112(iVar0), 0, 1);
	}
}

char* func_112(int iParam0)//Position - 0x3DC9
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "Hooker1";
			break;
		
		case 1:
			sVar0 = "Hooker2";
			break;
		
		case 2:
			sVar0 = "Hooker3";
			break;
		
		case 3:
			sVar0 = "Hooker4";
			break;
		
		case 4:
			sVar0 = "Hooker5";
			break;
		
		case 5:
			sVar0 = "Hooker6";
			break;
		
		case 6:
			sVar0 = "Hooker7";
			break;
		
		case 7:
			sVar0 = "Hooker8";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}



void func_115(var uParam0)//Position - 0x3EB1
{
	bool bVar0;
	int iVar1;
	
	if (!func_510())
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) != PLAYER::PLAYER_PED_ID())
				{
					bVar0 = true;
				}
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 0) != iLocal_95)
				{
					bVar0 = true;
				}
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar1) > 2)
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					func_116(0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_500();
					func_495(uParam0);
				}
			}
		}
	}
}

void func_116(bool bParam0)//Position - 0x3F3B
{
	struct<3> Var0;
	
	if (bParam0)
	{
		Var0 = { ENTITY::GET_ENTITY_ROTATION(iLocal_98, 2) };
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(180f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH((-5.5f - Var0.x), 1065353216);
	}
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	func_117(&(Local_312[0 /*7*/]));
	func_117(&(Local_312[3 /*7*/]));
	func_117(&(Local_312[2 /*7*/]));
	func_117(&(Local_312[1 /*7*/]));
	if (GlobalFunc_74("PROS_CAM_TOG") || GlobalFunc_74("PROS_CAM_OC"))
	{
		HUD::CLEAR_HELP(1);
	}
}

void func_117(var uParam0)//Position - 0x3FBF
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, 0);
		}
		CAM::DESTROY_CAM(*uParam0, 0);
	}
}

void func_118()//Position - 0x3FF7
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, 0))
	{
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(iLocal_98, 1);
	}
	if (iLocal_301 != 5)
	{
		if ((((((!func_210(iLocal_75) && !func_210(iLocal_76)) && !func_210(iLocal_77)) && !func_210(iLocal_78)) && !func_210(iLocal_79)) && !func_210(iLocal_80)) && !func_210(iLocal_81))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_95) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_301 = 5;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					iLocal_301 = 5;
				}
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 37, 1);
	GlobalFunc_7629();
	switch (iLocal_301)
	{
		case 0:
			if (func_510())
			{
				GlobalFunc_7779(1076, -1);
			}
			GlobalFunc_6877(&uLocal_118);
			func_202(func_43(), GlobalFunc_2951(iLocal_48, 32768));
			iLocal_301 = 1;
			GlobalFunc_587("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
		
		case 1:
			PAD::DISABLE_CONTROL_ACTION(0, 48, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			func_195();
			func_188();
			func_127();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (GlobalFunc_5182(&uLocal_118) > 1f)
			{
				if (func_125())
				{
					GlobalFunc_6533(&iLocal_48, 512);
					iLocal_304 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					if (iLocal_71 >= 3)
					{
						func_123();
						iLocal_301 = 5;
					}
					else
					{
						func_122();
						CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_47);
						iLocal_301 = 3;
					}
				}
			}
			break;
		
		case 2:
			PAD::DISABLE_CONTROL_ACTION(0, 48, 1);
			func_195();
			if (!func_42(0, 1))
			{
				func_126();
			}
			if (func_42(0, 1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			}
			if (GlobalFunc_5182(&uLocal_118) > 1f)
			{
				if (func_125())
				{
					GlobalFunc_6533(&iLocal_48, 512);
					iLocal_304 = 0;
					func_124("PROSTITUTES_SOLICIT_SCENE");
					func_124("PROSTITUTES_SEX_SCENE");
					func_124("PROSTITUTES_BJ_SCENE");
					func_124("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_71 = 3;
					if (iLocal_71 >= 3)
					{
						func_123();
						iLocal_301 = 5;
						GlobalFunc_235(&uLocal_103);
					}
				}
			}
			break;
		
		case 3:
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95))
			{
				func_124("PROSTITUTES_SOLICIT_SCENE");
				func_124("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_300 = 0;
				iLocal_301 = 0;
				GlobalFunc_969();
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(iLocal_47);
				iLocal_294 = 8;
			}
			break;
		
		case 5:
			PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95))
			{
				if (iLocal_71 > 0)
				{
					if (func_120(iLocal_95))
					{
						func_119();
					}
					else
					{
						func_432(0);
					}
				}
				else
				{
					GlobalFunc_587("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_432(1);
				}
			}
			break;
	}
}

void func_119()//Position - 0x42A4
{
	if (PED::IS_PED_INJURED(iLocal_95))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_71 == 0)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_120(iLocal_95))
		{
			GlobalFunc_6877(&uLocal_106);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 768);
			func_441(&iLocal_48, 2048);
			iLocal_294 = 13;
		}
	}
}

bool func_120(int iParam0)//Position - 0x4307
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	return func_70(iVar0) < 6;
}


void func_122()//Position - 0x433B
{
	if (PED::IS_PED_INJURED(iLocal_95))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95))
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_123()//Position - 0x4368
{
	if (PED::IS_PED_INJURED(iLocal_95))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95))
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

void func_124(char* sParam0)//Position - 0x4395
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
	}
}

int func_125()//Position - 0x43AC
{
	if (iLocal_304 == 6)
	{
		return 1;
	}
	return 0;
}

void func_126()//Position - 0x43C0
{
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_0x62ECFCFDEE7885D6();
}

void func_127()//Position - 0x43D0
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_44(PLAYER::PLAYER_PED_ID(), 0, 0)))
	{
		return;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_44(PLAYER::PLAYER_PED_ID(), 0, 0)))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
	}
	bVar1 = func_43();
	bVar2 = GlobalFunc_2951(iLocal_48, 32768);
	if (!func_42(0, 1))
	{
		func_182(&iLocal_82);
	}
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(2, 37, 1);
	GlobalFunc_601(23, 1);
	switch (iLocal_304)
	{
		case 0:
			GlobalFunc_6533(&iLocal_48, 256);
			if (!func_42(0, 1))
			{
				func_176(&iLocal_82);
			}
			func_175(iLocal_95, 0);
			if (!func_510())
			{
				func_174(bVar1, bVar2);
			}
			func_173(bVar1, bVar2);
			iLocal_304 = 1;
			break;
		
		case 1:
			func_172(iLocal_75);
			if (func_210(iLocal_76))
			{
				if (!GlobalFunc_2951(iLocal_49, 4))
				{
					if (!func_510())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_76) >= fVar0)
					{
						func_441(&iLocal_49, 4);
					}
				}
			}
			if (func_210(iLocal_75))
			{
				if (!GlobalFunc_2951(iLocal_49, 8))
				{
					if (!func_510())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_75) >= fVar0)
					{
						func_441(&iLocal_49, 8);
					}
				}
			}
			if (GlobalFunc_2951(iLocal_49, 4) && GlobalFunc_2951(iLocal_49, 8))
			{
				if (!func_510())
				{
					func_170(bVar1, bVar2);
				}
				func_169(bVar1, bVar2);
				iLocal_304 = 2;
			}
			break;
		
		case 2:
			func_172(iLocal_77);
			if (func_210(iLocal_77))
			{
				if (!GlobalFunc_2951(iLocal_49, 16))
				{
					if (!func_510())
					{
						fVar0 = 0.98f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_77) >= fVar0)
					{
						func_441(&iLocal_49, 16);
					}
				}
			}
			if (GlobalFunc_2951(iLocal_49, 16))
			{
				if (!func_510())
				{
					func_168(bVar1, bVar2);
				}
				func_167(bVar1, bVar2);
				iLocal_304 = 3;
			}
			break;
		
		case 3:
			func_172(iLocal_78);
			if (func_210(iLocal_78))
			{
				if (!GlobalFunc_2951(iLocal_49, 64))
				{
					if (!GlobalFunc_2951(iLocal_48, 16777216))
					{
						if (!func_510())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_78) >= fVar0)
						{
							func_441(&iLocal_48, 16777216);
							iLocal_72++;
						}
					}
					else
					{
						if (!func_510())
						{
							fVar0 = 0.975f;
						}
						else
						{
							fVar0 = 0.986f;
						}
						if (func_171(iLocal_78) < fVar0)
						{
							GlobalFunc_6533(&iLocal_48, 16777216);
						}
					}
					if (iLocal_72 >= GlobalFunc_92(func_510(), func_166(), func_161()))
					{
						func_441(&iLocal_49, 64);
						GlobalFunc_6533(&iLocal_48, 16777216);
					}
				}
			}
			else if (!GlobalFunc_2951(iLocal_49, 64))
			{
				func_441(&iLocal_49, 64);
			}
			if (GlobalFunc_2951(iLocal_49, 64))
			{
				if (!func_510())
				{
					func_159(bVar1, bVar2);
				}
				func_158(bVar1, bVar2);
				iLocal_304 = 4;
			}
			break;
		
		case 4:
			func_172(iLocal_79);
			if (func_210(iLocal_79))
			{
				if (!GlobalFunc_2951(iLocal_49, 256))
				{
					if (!func_510())
					{
						fVar0 = 0.925f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_79) >= fVar0)
					{
						func_441(&iLocal_49, 256);
					}
				}
			}
			else if (!GlobalFunc_2951(iLocal_49, 256))
			{
				func_441(&iLocal_49, 256);
			}
			if (GlobalFunc_2951(iLocal_49, 256))
			{
				if (!func_510())
				{
					func_152(bVar1, bVar2);
				}
				func_150(bVar1, bVar2);
				iLocal_304 = 5;
			}
			break;
		
		case 5:
			func_172(iLocal_80);
			if (func_210(iLocal_80))
			{
				if (!GlobalFunc_2951(iLocal_49, 1024))
				{
					if (!func_510())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_80) >= fVar0)
					{
						func_441(&iLocal_49, 1024);
					}
				}
			}
			else if (!GlobalFunc_2951(iLocal_49, 1024))
			{
				func_441(&iLocal_49, 1024);
			}
			if (func_210(iLocal_81))
			{
				if (!GlobalFunc_2951(iLocal_49, 2048))
				{
					if (!func_510())
					{
						fVar0 = 0.975f;
					}
					else
					{
						fVar0 = 0.986f;
					}
					if (func_171(iLocal_81) >= fVar0)
					{
						func_441(&iLocal_49, 2048);
					}
				}
			}
			else if (!GlobalFunc_2951(iLocal_49, 2048))
			{
				func_441(&iLocal_49, 2048);
			}
			if (GlobalFunc_2951(iLocal_49, 1024) && GlobalFunc_2951(iLocal_49, 2048))
			{
				func_175(iLocal_95, 0);
				TASK::TASK_PLAY_ANIM(iLocal_95, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(iLocal_304, 1, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_175(PLAYER::PLAYER_PED_ID(), -1);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(iLocal_304, 0, bVar1, bVar2), 4f, -4f, -1, 1, 0, 0, 0, 0);
				func_116(1);
				iLocal_49 = 0;
				iLocal_72 = 0;
				iLocal_60 = 0;
				func_128();
				iLocal_304 = 6;
			}
			break;
	}
}

void func_128()//Position - 0x48C9
{
	int iVar0;
	
	if (iLocal_71 == 0 && !func_510())
	{
		if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
		{
			GlobalFunc_4652();
		}
		GlobalFunc_7610(296, 0, 0);
		iVar0 = func_71(iLocal_95);
		if (iVar0 > -1)
		{
			func_143(iVar0);
		}
		else
		{
			func_135(iLocal_95);
		}
	}
	iLocal_71++;
	func_129();
}

void func_129()//Position - 0x4922
{
	switch (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SERVICES_ARRAY[0]++;
			GlobalFunc_8039(0, 1, 1);
			break;
		
		case 1:
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SERVICES_ARRAY[1]++;
			GlobalFunc_8039(1, 1, 1);
			break;
		
		case 2:
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SERVICES_ARRAY[2]++;
			GlobalFunc_8039(2, 1, 1);
			break;
		
		case 3:
			GlobalFunc_8039(3, 1, 1);
			break;
	}
}






void func_135(int iParam0)//Position - 0x4B51
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = func_142();
	if (iVar0 == -1)
	{
		return;
	}
	func_143(iVar0);
	PED::SET_PED_NAME_DEBUG(iParam0, func_140(iVar0));
	Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iVar0 /*11*/].f_10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar1 = iVar2;
		uVar3 = func_139(iParam0, iVar1);
		func_138(iVar0, iVar1, uVar3);
		iVar2++;
	}
	iVar2 = 0;
	while (iVar2 < 2)
	{
		iVar4 = iVar2;
		uVar3 = func_137(iParam0, iVar4);
		func_136(iVar0, iVar4, uVar3);
		iVar2++;
	}
}

void func_136(int iParam0, int iParam1, var uParam2)//Position - 0x4BEF
{
	if (iParam0 > -1)
	{
		Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iParam0 /*11*/].f_7[iParam1] = uParam2;
	}
}

int func_137(int iParam0, int iParam1)//Position - 0x4C12
{
	return PED::GET_PED_TEXTURE_VARIATION(iParam0, func_76(iParam1));
}

void func_138(int iParam0, int iParam1, var uParam2)//Position - 0x4C26
{
	if (iParam0 > -1)
	{
		Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iParam0 /*11*/].f_4[iParam1] = uParam2;
	}
}

int func_139(int iParam0, int iParam1)//Position - 0x4C49
{
	return PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_80(iParam1));
}

var func_140(int iParam0)//Position - 0x4C5D
{
	return func_141(iParam0);
}

char* func_141(int iParam0)//Position - 0x4C6B
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "UPRO BABS";
			break;
		
		case 1:
			sVar0 = "UPRO DANA";
			break;
		
		case 2:
			sVar0 = "UPRO LIZZIE";
			break;
		
		case 3:
			sVar0 = "UPRO AMANDA";
			break;
		
		case 4:
			sVar0 = "UPRO ASHLEY";
			break;
		
		case 5:
			sVar0 = "UPRO KRISTEN";
			break;
		
		case 6:
			sVar0 = "UPRO SASHA";
			break;
		
		case 7:
			sVar0 = "UPRO JACQUELINE";
			break;
		
		default:
			sVar0 = "UPRO N/A";
	}
	return sVar0;
}

int func_142()//Position - 0x4CFA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_70(iVar0) == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_143(int iParam0)//Position - 0x4D25
{
	if (iParam0 > -1)
	{
		if (GlobalFunc_8315() == 0)
		{
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iParam0 /*11*/][0]++;
		}
		else if (GlobalFunc_8315() == 1)
		{
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iParam0 /*11*/][1]++;
		}
		else if (GlobalFunc_8315() == 2)
		{
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.PROSTITUTE_SAVED_DATA[iParam0 /*11*/][2]++;
		}
	}
}







void func_150(bool bParam0, bool bParam1)//Position - 0x565A
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_95, iLocal_80, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(PLAYER::PLAYER_PED_ID(), iLocal_81, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_151(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9)//Position - 0x56D3
{
	if (func_510())
	{
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam1);
	}
	else
	{
		TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);
	}
}

void func_152(bool bParam0, bool bParam1)//Position - 0x5703
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_80, 1, 0, 0);
	func_153(iLocal_95, iLocal_80, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(4, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_154(&iLocal_81, 0, 0, 0);
	func_153(PLAYER::PLAYER_PED_ID(), iLocal_81, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(4, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

void func_153(int iParam0, int iParam1, var uParam2, var uParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8)//Position - 0x578C
{
	if (func_510())
	{
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(iParam0, iParam1, uParam2, uParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);
	}
}

void func_154(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x57B2
{
	struct<3> Var0;
	
	Var0 = { 0f, 0f, 0f };
	*iParam0 = func_157(Var0, 0f, 0f, 0f, bParam3, iParam2, 2);
	if (iParam1 == 0)
	{
		func_156(*iParam0, iLocal_98, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_98, "seat_dside_f"));
	}
	else if (iParam1 == 1)
	{
		func_156(*iParam0, iLocal_98, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_98, "seat_pside_f"));
	}
	func_155(*iParam0, Var0, 0f, 0f, 0f, 0);
}

void func_155(var uParam0, struct<3> Param1, struct<3> Param4, int iParam7)//Position - 0x5818
{
	if (!func_510())
	{
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(uParam0, Param1, Param4, iParam7);
	}
}

void func_156(var uParam0, int iParam1, var uParam2)//Position - 0x5838
{
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_510())
	{
		NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(uParam0, iParam1, uParam2);
	}
	else
	{
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(uParam0, iParam1, uParam2);
	}
}

var func_157(struct<3> Param0, struct<3> Param3, bool bParam6, int iParam7, int iParam8)//Position - 0x586A
{
	var uVar0;
	
	if (func_510())
	{
		if (bParam6)
		{
			iParam7 = 0;
		}
		uVar0 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Param0, Param3, iParam8, bParam6, iParam7, 1065353216, 0, 1065353216);
	}
	else
	{
		uVar0 = PED::CREATE_SYNCHRONIZED_SCENE(Param0, Param3, iParam8);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uVar0, bParam6);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uVar0, iParam7);
	}
	return uVar0;
}

void func_158(bool bParam0, bool bParam1)//Position - 0x58C5
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_95, iLocal_79, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(PLAYER::PLAYER_PED_ID(), iLocal_79, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_159(bool bParam0, bool bParam1)//Position - 0x593E
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_79, 0, 0, 1);
	func_153(iLocal_95, iLocal_79, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(3, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(PLAYER::PLAYER_PED_ID(), iLocal_79, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(3, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}


int func_161()//Position - 0x59D5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_162();
	if (iVar0 < 48)
	{
		iVar1 = 2;
	}
	else if (iVar0 >= 48 && iVar0 < 85)
	{
		iVar1 = 3;
	}
	else
	{
		iVar1 = 4;
	}
	return iVar1;
}

int func_162()//Position - 0x5A0D
{
	if (func_510())
	{
		return GlobalFunc_6671(65, -1, 0);
	}
	return GlobalFunc_6814(GlobalFunc_6674(PLAYER::PLAYER_PED_ID()), 1);
}




int func_166()//Position - 0x5CC2
{
	int iVar0;
	
	if (iLocal_296 != 0)
	{
		if (iLocal_60 < 2)
		{
			iVar0 = 3;
		}
		else if (iLocal_60 == 2)
		{
			iVar0 = 4;
		}
		else if (iLocal_60 == 3)
		{
			iVar0 = 5;
		}
		else
		{
			iVar0 = 6;
		}
	}
	else if (iLocal_60 < 3)
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_167(bool bParam0, bool bParam1)//Position - 0x5D0C
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_95, iLocal_78, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(2, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(PLAYER::PLAYER_PED_ID(), iLocal_78, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(2, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_168(bool bParam0, bool bParam1)//Position - 0x5D85
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_78, 0, 1, 0);
	func_153(iLocal_95, iLocal_78, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(2, 1, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
	func_153(PLAYER::PLAYER_PED_ID(), iLocal_78, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(2, 0, bParam0, bParam1), 1000f, -1000f, iVar0, 0, 1148846080);
}

void func_169(bool bParam0, bool bParam1)//Position - 0x5E05
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_95, iLocal_77, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
	func_151(PLAYER::PLAYER_PED_ID(), iLocal_77, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f, 0);
}

void func_170(bool bParam0, bool bParam1)//Position - 0x5E7E
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_77, 0, 0, 1);
	func_153(iLocal_95, iLocal_77, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(1, 1, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
	func_153(PLAYER::PLAYER_PED_ID(), iLocal_77, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(1, 0, bParam0, bParam1), 0.7f, -0.7f, iVar0, 0, 0.7f);
}

float func_171(int iParam0)//Position - 0x5EFE
{
	var uVar0;
	
	if (func_510())
	{
		uVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iParam0));
	}
	else
	{
		uVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0);
	}
	return uVar0;
}

void func_172(int iParam0)//Position - 0x5F26
{
	if (!func_210(iParam0))
	{
		return;
	}
}

void func_173(bool bParam0, bool bParam1)//Position - 0x5F3B
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_151(iLocal_95, iLocal_75, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(0, 1, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
	func_151(PLAYER::PLAYER_PED_ID(), iLocal_76, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(0, 0, bParam0, bParam1), 8f, -0.7f, iVar0, 0, 1000f, 0);
}

void func_174(bool bParam0, bool bParam1)//Position - 0x5FB4
{
	int iVar0;
	
	iVar0 = 2052;
	if (func_510())
	{
		iVar0 = 2056;
	}
	func_154(&iLocal_75, 1, 0, 1);
	func_153(iLocal_95, iLocal_75, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(0, 1, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
	func_154(&iLocal_76, 0, 0, 1);
	func_153(PLAYER::PLAYER_PED_ID(), iLocal_76, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_38(0, 0, bParam0, bParam1), 4f, -1000f, iVar0, 0, 1148846080);
}

void func_175(int iParam0, int iParam1)//Position - 0x6035
{
	if (!PED::IS_PED_IN_VEHICLE(iParam0, iLocal_98, 0))
	{
		if (!func_510())
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iLocal_98, iParam1);
		}
		else if (!PED::IS_PED_IN_VEHICLE(iParam0, iLocal_98, 0))
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iLocal_98, -1, iParam1, 2f, 16, 0);
		}
	}
}

void func_176(int iParam0)//Position - 0x607B
{
	var uVar0;
	var uVar1;
	struct<3> Var2;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	uVar0 = GlobalFunc_830(func_179(2), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_98, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_98, "windscreen")));
	uVar1 = GlobalFunc_830(func_179(1), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_98, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_98, "windscreen")));
	Var2 = { ENTITY::GET_ENTITY_ROTATION(iLocal_98, 2) };
	fVar5 = ENTITY::GET_ENTITY_HEADING(iLocal_98);
	if (fVar5 >= 180f)
	{
		fVar6 = (fVar5 - 180f);
	}
	else
	{
		fVar6 = (fVar5 + 180f);
	}
	fVar7 = (-7f - Var2.f_1);
	fVar8 = (-5f - Var2.x);
	fVar9 = (-2.5f + Var2.x);
	fVar10 = ((0f - (0.7f * Var2.x)) + (0.3f * Var2.f_1));
	if (!CAM::DOES_CAM_EXIST(Local_312[2 /*7*/]))
	{
		func_177(&(Local_312[2 /*7*/]), func_179(2), fVar7, Var2.x, uVar0, 50f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_312[1 /*7*/]))
	{
		func_177(&(Local_312[1 /*7*/]), func_179(1), fVar10, -Var2.f_1, uVar1, 37.3f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_312[0 /*7*/]))
	{
		func_177(&(Local_312[0 /*7*/]), func_179(0), fVar8, -Var2.f_1, fVar6, 50f);
	}
	if (!CAM::DOES_CAM_EXIST(Local_312[3 /*7*/]))
	{
		func_177(&(Local_312[3 /*7*/]), func_179(3), fVar9, Var2.f_1, fVar5, 45f);
	}
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	CAM::SET_CAM_ACTIVE(Local_312[*iParam0 /*7*/], 1);
}

void func_177(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x61E6
{
	uParam0->f_1 = { Param4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(*uParam0, 1);
	CAM::SET_CAM_PARAMS(*uParam0, Param1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}


Vector3 func_179(int iParam0)//Position - 0x6252
{
	struct<3> Var0;
	var uVar3;
	struct<2> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_95))
	{
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, 0))
	{
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_98), &uVar3, &Var6);
	Var9 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_98, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_98, "windscreen")) };
	Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_98, Var9) };
	switch (iParam0)
	{
		case 0:
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_98, 0f, (Var6.f_1 + 1.4f), Var12.f_2) };
			break;
		
		case 1:
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_98, 1.5f, (Var6.f_1 + 1.2f), (Var12.f_2 - 0.1f)) };
			break;
		
		case 2:
			Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_98, -3.7f, 0.7f, Var12.f_2) };
			break;
		
		case 3:
			Var0 = { func_180() };
			break;
	}
	return Var0;
}

Vector3 func_180()//Position - 0x632A
{
	struct<3> Var0;
	struct<3> Var3;
	struct<2> Var6;
	var uVar9;
	
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_98), &Var6, &uVar9);
	Var0 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_98, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_98, "windscreen")) };
	Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_98, Var0) };
	Var3.f_2 = (Var3.f_2 + 0.09f);
	Var6.f_1 = (Var6.f_1 - 1f);
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_98, 0f, -MISC::ABSF(Var6.f_1), Var3.f_2);
}


void func_182(int iParam0)//Position - 0x63B0
{
	if (!CAM::DOES_CAM_EXIST(Local_312[*iParam0 /*7*/]))
	{
		return;
	}
	if (!CAM::IS_CAM_RENDERING(Local_312[*iParam0 /*7*/]))
	{
		return;
	}
	CAM::SHAKE_CAM(Local_312[*iParam0 /*7*/], "HAND_SHAKE", 0.25f);
	if (!HUD::IS_PAUSE_MENU_ACTIVE())
	{
		func_185(&(Local_312[*iParam0 /*7*/]));
	}
	if (func_184())
	{
		if (!func_510())
		{
			if (!GlobalFunc_74("PROS_CAM_OC"))
			{
				GlobalFunc_Display_Help_Text("PROS_CAM_OC");
			}
		}
	}
	else
	{
		if (!func_510())
		{
			if (!GlobalFunc_74("PROS_CAM_TOG"))
			{
				GlobalFunc_Display_Help_Text("PROS_CAM_TOG");
			}
		}
		if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 0) && !HUD::IS_PAUSE_MENU_ACTIVE()) && !func_42(0, 1))
		{
			func_183(iParam0);
			CAM::SET_CAM_ACTIVE(Local_312[*iParam0 /*7*/], 1);
		}
	}
}

void func_183(var uParam0)//Position - 0x647B
{
	if (*uParam0 < 3)
	{
		*uParam0++;
	}
	else if (*uParam0 == 3)
	{
		*uParam0 = 0;
	}
	if (*uParam0 == 0)
	{
		if (GlobalFunc_2951(iLocal_50, 16))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 1)
	{
		if (GlobalFunc_2951(iLocal_50, 128))
		{
			*uParam0++;
		}
	}
	if (*uParam0 == 2)
	{
		if (GlobalFunc_2951(iLocal_50, 64))
		{
			*uParam0++;
		}
	}
}

int func_184()//Position - 0x64EE
{
	if ((GlobalFunc_2951(iLocal_50, 16) && GlobalFunc_2951(iLocal_50, 64)) && GlobalFunc_2951(iLocal_50, 128))
	{
		return 1;
	}
	return 0;
}

void func_185(var uParam0)//Position - 0x6520
{
	var uVar0[4];
	struct<3> Var5;
	float fVar8;
	struct<3> Var9;
	
	PAD::_0x7F4724035FDCA1DD(2);
	GlobalFunc_255(&(uVar0[0]), &(uVar0[1]), &(uVar0[2]), &(uVar0[3]), 0, 0);
	Var5.f_2 = (-(SYSTEM::TO_FLOAT(uVar0[2]) / 127f) * 10f);
	Var5.f_1 = ((-Var5.f_2 * 3f) / 10f);
	if (PAD::IS_LOOK_INVERTED())
	{
		Var5.x = ((SYSTEM::TO_FLOAT(uVar0[3]) / 127f) * 10f);
	}
	else
	{
		Var5.x = (-(SYSTEM::TO_FLOAT(uVar0[3]) / 127f) * 10f);
	}
	fVar8 = (30f * SYSTEM::TIMESTEP());
	Var9 = { Var5 };
	if (PAD::_IS_USING_KEYBOARD(0))
	{
		uParam0->f_4 = GlobalFunc_253((uParam0->f_4 + (Var9.x * 0.05f)), -3f, 3f);
		uParam0->f_4.f_1 = GlobalFunc_253((uParam0->f_4.f_1 + (Var9.f_1 * 0.05f)), -3f, 3f);
		uParam0->f_4.f_2 = GlobalFunc_253((uParam0->f_4.f_2 + (Var9.f_2 * 0.05f)), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = (uParam0->f_4 + GlobalFunc_253((((Var9.x - uParam0->f_4) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_1 = (uParam0->f_4.f_1 + GlobalFunc_253((((Var9.f_1 - uParam0->f_4.f_1) * 0.05f) * fVar8), -3f, 3f));
		uParam0->f_4.f_2 = (uParam0->f_4.f_2 + GlobalFunc_253((((Var9.f_2 - uParam0->f_4.f_2) * 0.05f) * fVar8), -3f, 3f));
	}
	CAM::SET_CAM_ROT(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
}



void func_188()//Position - 0x67E5
{
	int iVar0;
	float fVar1;
	
	if (!func_193())
	{
		if (func_192(iLocal_95))
		{
			if (!GlobalFunc_2951(iLocal_48, 256))
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				if (iLocal_71 == 1)
				{
					if (!func_510())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 15, 1);
					}
					PAD::SET_PAD_SHAKE(0, 4000, 252);
				}
				else if (iLocal_71 == 2)
				{
					if (!func_510())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 10, 1);
					}
					PAD::SET_PAD_SHAKE(0, 4000, 210);
				}
				else
				{
					if (!func_510())
					{
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 5, 1);
					}
					PAD::SET_PAD_SHAKE(0, 3000, 168);
				}
				func_441(&iLocal_48, 256);
			}
		}
	}
	else
	{
		switch (iLocal_297)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_95, 876132797))
				{
					PAD::SET_PAD_SHAKE(0, 200, 84);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_98, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			
			case 1:
			case 2:
				if (GlobalFunc_2951(iLocal_48, 32768))
				{
					if (func_510())
					{
						iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iLocal_78);
					}
					else
					{
						iVar0 = iLocal_78;
					}
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar0))
					{
						fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0);
						if ((((((((((((((fVar1 > 0.01f && fVar1 < 0.019f) || (fVar1 > 0.093f && fVar1 < 0.1f)) || (fVar1 > 0.165f && fVar1 < 0.172f)) || (fVar1 > 0.231f && fVar1 < 0.239f)) || (fVar1 > 0.308f && fVar1 < 0.317f)) || (fVar1 > 0.37f && fVar1 < 0.378f)) || (fVar1 > 0.437f && fVar1 < 0.443f)) || (fVar1 > 0.507f && fVar1 < 0.518f)) || (fVar1 > 0.58f && fVar1 < 0.587f)) || (fVar1 > 0.651f && fVar1 < 0.659f)) || (fVar1 > 0.72f && fVar1 < 0.729f)) || (fVar1 > 0.788f && fVar1 < 0.794f)) || (fVar1 > 0.862f && fVar1 < 0.87f)) || (fVar1 > 0.937f && fVar1 < 0.946f))
						{
							if (!func_483(512))
							{
								PAD::SET_PAD_SHAKE(0, 200, 252);
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_98, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
								func_190();
								func_189(512);
							}
						}
						else
						{
							func_487(512);
						}
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_95, 876132797))
				{
					PAD::SET_PAD_SHAKE(0, 200, 252);
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_98, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, 1, 1, 1, 1, 0);
					func_190();
				}
				break;
			}
	}
}

void func_189(int iParam0)//Position - 0x6B07
{
	if (!GlobalFunc_2951(iLocal_51, iParam0))
	{
		func_441(&iLocal_51, iParam0);
	}
}

void func_190()//Position - 0x6B23
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	iVar0 = (iVar0 + (1 + iLocal_296));
	if (iVar0 > ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());
	}
	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), iVar0);
	func_191();
}

void func_191()//Position - 0x6B64
{
	if (!func_510())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_58 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	}
}

bool func_192(int iParam0)//Position - 0x6B8C
{
	return (((ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_48(), func_40(11), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_48(), func_40(21), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_46(), func_39(11), 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_46(), func_39(21), 3));
}

bool func_193()//Position - 0x6BEA
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_95, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_194(iLocal_95, func_43(), 1), 3);
}

char* func_194(int iParam0, bool bParam1, bool bParam2)//Position - 0x6C0E
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
		{
			if (func_41(iVar1))
			{
				if (bParam1)
				{
					if (bParam2)
					{
						sVar0 = func_40(20);
					}
					else
					{
						sVar0 = func_40(25);
					}
				}
				else if (bParam2)
				{
					sVar0 = func_40(10);
				}
				else
				{
					sVar0 = func_40(15);
				}
			}
			else if (bParam1)
			{
				if (bParam2)
				{
					sVar0 = func_39(20);
				}
				else
				{
					sVar0 = func_39(25);
				}
			}
			else if (bParam2)
			{
				sVar0 = func_39(10);
			}
			else
			{
				sVar0 = func_39(15);
			}
		}
	}
	return sVar0;
}

void func_195()//Position - 0x6CB7
{
	if (!func_193())
	{
		return;
	}
	if (func_510())
	{
		func_199();
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95) || AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5000) > 2500)
	{
		func_196();
	}
}

void func_196()//Position - 0x6D01
{
	if (PED::IS_PED_INJURED(iLocal_95))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95) && !AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_296 == 0)
		{
			func_124("PROSTITUTES_BJ_SPEECH_SCENE");
		}
		if (!GlobalFunc_226(&uLocal_106))
		{
			GlobalFunc_7777(&uLocal_106);
		}
		else if (GlobalFunc_5182(&uLocal_106) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 5f))
		{
			if (!GlobalFunc_2951(iLocal_48, 65536))
			{
				func_441(&iLocal_48, 65536);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_197(iLocal_297);
			}
			else
			{
				GlobalFunc_6533(&iLocal_48, 65536);
				GlobalFunc_6877(&uLocal_106);
			}
		}
	}
}

void func_197(int iParam0)//Position - 0x6DA2
{
	switch (iParam0)
	{
		case 0:
			func_81("PROSTITUTES_BJ_SPEECH_SCENE");
			if (GlobalFunc_1409(PLAYER::PLAYER_ID()))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
		
		case 1:
		case 2:
			if (GlobalFunc_1409(PLAYER::PLAYER_ID()))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			else
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			}
			break;
	}
}


void func_199()//Position - 0x6E4A
{
	if (PED::IS_PED_INJURED(iLocal_95))
	{
		return;
	}
	if (func_200(0.4f))
	{
		func_189(4);
	}
	if (func_483(4))
	{
		if (!GlobalFunc_226(&uLocal_109))
		{
			GlobalFunc_7777(&uLocal_109);
		}
		else if (GlobalFunc_5182(&uLocal_109) > 2f)
		{
			if (!func_483(16) && !func_200(0.4f))
			{
				func_189(16);
				iLocal_60++;
			}
			else if (func_483(16))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95))
				{
					func_487(4);
					func_487(16);
					GlobalFunc_6877(&uLocal_109);
				}
			}
		}
	}
}

int func_200(float fParam0)//Position - 0x6EE1
{
	float fVar0;
	
	if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
	{
		fVar0 = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
		if (fVar0 > fParam0)
		{
			return 1;
		}
	}
	return 0;
}


void func_202(bool bParam0, bool bParam1)//Position - 0x6F51
{
	if (!func_510())
	{
		return;
	}
	func_174(bParam0, bParam1);
	func_170(bParam0, bParam1);
	func_168(bParam0, bParam1);
	func_159(bParam0, bParam1);
	func_152(bParam0, bParam1);
}








bool func_210(int iParam0)//Position - 0x7460
{
	var uVar0;
	
	if (func_510())
	{
		uVar0 = PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(iParam0));
	}
	else
	{
		uVar0 = PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0);
	}
	return uVar0;
}

void func_211()//Position - 0x7488
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_213(), 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_212());
		func_500();
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		PED::DELETE_PED(&iLocal_95);
	}
}

float func_212()//Position - 0x74D0
{
	switch (GlobalFunc_8315())
	{
		case 0:
			return 116.6356f;
			break;
		
		case 1:
			return 175.0504f;
			break;
		
		case 2:
			return 299.5673f;
			break;
	}
	return 0f;
}

Vector3 func_213()//Position - 0x7515
{
	switch (GlobalFunc_8315())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
			break;
		
		case 1:
			return -14.6005f, -1444.624f, 29.6472f;
			break;
		
		case 2:
			return 1979.961f, 3816.018f, 31.3641f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_214()//Position - 0x757A
{
	int iVar0;
	
	if (GlobalFunc_7084(&uLocal_103, 3f) && !CAM::IS_CAM_ACTIVE(uLocal_102))
	{
		iVar0 = SYSTEM::FLOOR(((func_215() - 2f) * 1000f));
		CAM::SET_CAM_ACTIVE(uLocal_101, 0);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_102, uLocal_101, iVar0, 1, 1);
	}
	if (GlobalFunc_7084(&uLocal_103, func_215()))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		iLocal_294 = 10;
	}
}

float func_215()//Position - 0x75D6
{
	switch (GlobalFunc_8315())
	{
		case 0:
			return 10f;
			break;
		
		case 1:
			return 12f;
			break;
		
		case 2:
			return 10f;
			break;
	}
	return 0f;
}


void func_217(var uParam0)//Position - 0x763D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 179:
				func_218(iVar0, uParam0);
				break;
		}
		iVar0++;
	}
}

void func_218(int iParam0, var uParam1)//Position - 0x767C
{
	var uVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &uVar0, 10))
	{
		func_219(&uVar0, uParam1);
	}
}

void func_219(var uParam0, var uParam1)//Position - 0x769A
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(*uParam0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) == ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam0))
					{
						func_116(0);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						func_500();
						func_495(uParam1);
					}
				}
			}
		}
	}
}

void func_220(var uParam0)//Position - 0x76F7
{
	int iVar0;
	
	if (!func_510())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_95))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(iLocal_95);
			if ((iVar0 - iLocal_59) < 0)
			{
				func_116(0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_500();
				func_495(uParam0);
			}
		}
	}
}

void func_221(var uParam0)//Position - 0x7746
{
	int iVar0;
	
	if (!func_510())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			iVar0 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
			if ((iVar0 - iLocal_58) < 0)
			{
				func_116(0);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_500();
				func_495(uParam0);
			}
		}
	}
}

void func_222(var uParam0)//Position - 0x7799
{
	int iVar0;
	struct<3> Var1;
	
	if (!func_510())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Local_55, Var1) >= 4f)
				{
					func_116(0);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_500();
					func_495(uParam0);
				}
			}
		}
	}
}

void func_223()//Position - 0x780A
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	
	if (!GlobalFunc_2951(iLocal_48, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 0);
		}
		func_441(&iLocal_48, 16);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_98 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (func_510())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_98))
			{
				VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_98, 1);
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_98, 4);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_98, 1);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_98, 0, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_98, 1);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_98, 4);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_98, 1);
		}
		if (!func_353() || !PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_98, 0))
		{
			func_432(0);
			return;
		}
	}
	else
	{
		func_432(0);
		return;
	}
	GlobalFunc_7629();
	if ((!VEHICLE::IS_VEHICLE_STOPPED(iLocal_98) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && !GlobalFunc_2951(iLocal_48, 1024))
	{
		iLocal_294 = 7;
		GlobalFunc_6489(1, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\HUD_321_GO", true);
		iLocal_300 = 0;
		GlobalFunc_587("WAITING FOR VEHICLE TO STOP ");
		return;
	}
	iVar0 = 0;
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	switch (iLocal_300)
	{
		case 0:
		case 1:
			if (func_510())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1) == PLAYER::PLAYER_PED_ID())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 0);
									}
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
									return;
								}
							}
						}
						else
						{
							NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
							return;
						}
					}
				}
			}
			func_350();
			func_349();
			func_191();
			if (func_346())
			{
				func_124("PROSTITUTES_DRIVE_SCENE");
				func_81("PROSTITUTES_PARKED_SCENE");
				func_345();
				if (func_510())
				{
					func_189(2);
					if (func_510())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4);
									VEHICLE::_0x2311DD7159F00582(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
								}
							}
						}
					}
				}
				PED::RESET_PED_IN_VEHICLE_CONTEXT(iLocal_95);
				iLocal_300 = 2;
			}
			break;
		
		case 2:
			if (GlobalFunc_6710(iLocal_303))
			{
				func_343(&iLocal_303);
				GlobalFunc_6533(&iLocal_74, 2);
			}
			func_341(iLocal_95, 0);
			if (func_341(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (func_340(0))
				{
					iLocal_47 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					iVar1 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (iVar1 != 4 && iLocal_47 == 4)
						{
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(4);
						}
						else if (iVar1 == 4 && iLocal_47 != 4)
						{
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
						}
					}
					func_325();
					iLocal_300 = 3;
					GlobalFunc_587("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					GlobalFunc_159("PROS_NO_MONEY", -1);
					GlobalFunc_6877(&uLocal_112);
					iLocal_296 = 3;
					iLocal_300 = 4;
				}
			}
			break;
		
		case 3:
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				return;
			}
			HUD::SHOW_HUD_COMPONENT_THIS_FRAME(3);
			func_305();
			GlobalFunc_8446(1, -1, 1, 0, 1, -1082130432, 0, 0);
			GlobalFunc_612(&uVar2, &iVar3, &uVar4, &uVar5, 0);
			PAD::DISABLE_CONTROL_ACTION(0, 48, 1);
			PAD::SET_INPUT_EXCLUSIVE(2, 187);
			PAD::SET_INPUT_EXCLUSIVE(2, 188);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
			iVar0 = 0;
			if (MISC::IS_PC_VERSION())
			{
				if (PAD::_IS_USING_KEYBOARD_2(2))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
					PAD::ENABLE_CONTROL_ACTION(0, 237, 1);
					PAD::ENABLE_CONTROL_ACTION(0, 238, 1);
					PAD::ENABLE_CONTROL_ACTION(0, 241, 1);
					PAD::ENABLE_CONTROL_ACTION(0, 242, 1);
					GlobalFunc_6900(0, 0, 0, 1);
					GlobalFunc_1393(0, -1);
					if (GlobalFunc_1391())
					{
						if (Global_2543381 != iLocal_69)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
							iLocal_69 = Global_2543381;
							GlobalFunc_587("Player highlighted a new option using the mouse!");
						}
						else
						{
							iVar0 = 1;
						}
					}
				}
			}
			if (((PAD::IS_CONTROL_JUST_PRESSED(2, 187) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, 242))) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 33))) || (((MISC::IS_PC_VERSION() && !PAD::_IS_USING_KEYBOARD(2)) && iVar3 > 100) && (MISC::GET_GAME_TIMER() - iLocal_88) > 300))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				GlobalFunc_587("DOWN pressed!");
				if (iLocal_69 < iLocal_70)
				{
					iLocal_69++;
				}
				else
				{
					iLocal_69 = 0;
				}
				iLocal_88 = MISC::GET_GAME_TIMER();
			}
			else if (((PAD::IS_CONTROL_JUST_PRESSED(2, 188) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_CONTROL_JUST_PRESSED(2, 241))) || (PAD::_IS_USING_KEYBOARD(2) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, 32))) || (((MISC::IS_PC_VERSION() && !PAD::_IS_USING_KEYBOARD(2)) && iVar3 < -100) && (MISC::GET_GAME_TIMER() - iLocal_88) > 300))
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				GlobalFunc_587("UP pressed!");
				if (iLocal_69 > 0)
				{
					iLocal_69 = (iLocal_69 - 1);
				}
				else
				{
					iLocal_69 = iLocal_70;
				}
				iLocal_88 = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar0 == 1)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
				func_265();
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
				iLocal_300 = 4;
			}
			GlobalFunc_1588(iLocal_69, 1, 1);
			break;
		
		case 4:
			iVar6 = PED::GET_PED_MONEY(iLocal_95);
			if (iLocal_296 == 3)
			{
				GlobalFunc_6489(1, -1);
				GlobalFunc_139();
				func_262(0);
				iLocal_63 = MISC::GET_GAME_TIMER();
				func_124("PROSTITUTES_PARKED_SCENE");
				GlobalFunc_587("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_294 = 6;
				if (iLocal_71 > 0)
				{
					if (func_120(iLocal_95))
					{
						func_119();
					}
					else
					{
						func_432(0);
					}
					return;
				}
				else
				{
					if (func_257() >= 20)
					{
						iVar6 += 20;
						func_225(20);
						PED::SET_PED_MONEY(iLocal_95, iVar6);
					}
					func_432(1);
					return;
				}
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_44(PLAYER::PLAYER_PED_ID(), 0, 0)))
			{
			}
			else
			{
				GlobalFunc_6489(1, -1);
				GlobalFunc_139();
				if (MISC::IS_AUSSIE_VERSION())
				{
					func_441(&iLocal_48, 1024);
					iLocal_296 = 3;
					GlobalFunc_587("AUSSIE VERSION IS TRUE!?!?!");
				}
				if (iLocal_296 != 3)
				{
					if (func_257() > func_224(iLocal_296))
					{
						func_225(func_224(iLocal_296));
						iVar6 = (iVar6 + func_224(iLocal_296));
					}
					GlobalFunc_4963(&uLocal_106, (14f - 4f));
					GlobalFunc_587("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					GlobalFunc_969();
					iLocal_294 = 11;
				}
				PED::SET_PED_MONEY(iLocal_95, iVar6);
				iLocal_63 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}

int func_224(int iParam0)//Position - 0x7E7C
{
	if (MISC::IS_AUSSIE_VERSION())
	{
		if (iParam0 == 0)
		{
			return 70;
		}
		else if (iParam0 == 1)
		{
			return 70;
		}
		else if (iParam0 == 2)
		{
			return 70;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == 0)
	{
		return 50;
	}
	if (iParam0 == 1)
	{
		return 70;
	}
	if (iParam0 == 2)
	{
		return 100;
	}
	return 0;
}

void func_225(int iParam0)//Position - 0x7EE7
{
	var uVar0;
	
	if (!func_510())
	{
		GlobalFunc_10834(GlobalFunc_8315(), 1, iParam0);
	}
	else
	{
		GlobalFunc_8416(-1359375127, iParam0, &uVar0, 0, 0);
	}
}
































int func_257()//Position - 0x9431
{
	if (func_510())
	{
		return GlobalFunc_6899(PLAYER::PLAYER_ID());
	}
	return GlobalFunc_469(GlobalFunc_8315());
}





void func_262(int iParam0)//Position - 0x9528
{
	if (AUDIO::GET_PLAYER_RADIO_STATION_INDEX() != 255)
	{
		AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(iParam0);
		AUDIO::SET_MOBILE_PHONE_RADIO_STATE(iParam0);
	}
}



void func_265()//Position - 0x96A5
{
	if (iLocal_69 == iLocal_70)
	{
		iLocal_296 = 3;
	}
	else
	{
		iLocal_297 = iLocal_288[iLocal_69];
		func_266();
		if (iLocal_297 == 0)
		{
			func_81("PROSTITUTES_BJ_SCENE");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PROSTITUTE_BLOWJOB", false);
			iLocal_296 = 0;
		}
		else if (iLocal_297 == 1)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_296 = 1;
		}
		else if (iLocal_297 == 2)
		{
			func_81("PROSTITUTES_SEX_SCENE");
			iLocal_296 = 2;
		}
	}
}

void func_266()//Position - 0x9712
{
	switch (iLocal_297)
	{
		case 0:
			func_268();
			break;
		
		case 1:
		case 2:
			func_267();
			break;
	}
}

void func_267()//Position - 0x9742
{
	iLocal_45++;
	iLocal_46 = 1;
}

void func_268()//Position - 0x9753
{
	iLocal_44++;
	iLocal_46 = 1;
}





































void func_305()//Position - 0xDABE
{
	if (!GlobalFunc_6710(iLocal_303))
	{
		iLocal_303 = GlobalFunc_7719();
		GlobalFunc_8385(&iLocal_303, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
	}
	else if (!GlobalFunc_2951(iLocal_74, 2))
	{
		if (GlobalFunc_8448(iLocal_303))
		{
			iLocal_303 = GlobalFunc_7719();
			GlobalFunc_8385(&iLocal_303, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
			func_441(&iLocal_74, 2);
		}
	}
	else if (GlobalFunc_8448(iLocal_303))
	{
		func_432(0);
	}
}




















void func_325()//Position - 0xE143
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	GlobalFunc_2032(1);
	func_262(1);
	HUD::DISPLAY_RADAR(0);
	GlobalFunc_262(0);
	GlobalFunc_1317(1, 1, 0, 0, 0);
	GlobalFunc_1316(1, 2, 1, 1, 1);
	GlobalFunc_1318("PROS_OPTS");
	GlobalFunc_1354(201, "PROS_SELECT", -1);
	iLocal_70 = 0;
	iVar0 = func_224(0);
	iVar1 = func_224(1);
	iVar2 = func_224(2);
	if (func_257() >= iVar0)
	{
		GlobalFunc_7830(iLocal_70, "PROS_DOLLAR", 1, 1, 0, 0);
		GlobalFunc_8495(iVar0, 0);
		iLocal_288[iLocal_70] = 0;
		iLocal_70++;
	}
	if (func_257() >= iVar1 && func_327(iLocal_98))
	{
		GlobalFunc_7830(iLocal_70, "PROS_DOLLAR", 1, 1, 0, 0);
		GlobalFunc_8495(iVar1, 0);
		iLocal_288[iLocal_70] = 1;
		iLocal_70++;
	}
	if (func_257() >= iVar2 && func_327(iLocal_98))
	{
		GlobalFunc_7830(iLocal_70, "PROS_DOLLAR", 1, 1, 0, 0);
		GlobalFunc_8495(iVar2, 0);
		iLocal_288[iLocal_70] = 2;
		iLocal_70++;
	}
	GlobalFunc_7830(iLocal_70, "PROS_QUIT", 0, 1, 0, 0);
	iLocal_69 = 0;
	GlobalFunc_1588(iLocal_69, 1, 1);
	GlobalFunc_138();
	iLocal_88 = MISC::GET_GAME_TIMER();
	iLocal_300 = 3;
}


int func_327(int iParam0)//Position - 0xE26D
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (((((((((iVar0 == joaat("infernus") || iVar0 == joaat("voltic")) || iVar0 == joaat("stingergt")) || iVar0 == joaat("stinger")) || iVar0 == joaat("bullet")) || iVar0 == joaat("entityxf")) || iVar0 == joaat("feltzer3")) || iVar0 == joaat("granger")) || iVar0 == joaat("panto")) || iVar0 == joaat("phoenix"))
		{
			return 0;
		}
	}
	return 1;
}













bool func_340(int iParam0)//Position - 0xF190
{
	return func_257() >= func_224(iParam0);
}

int func_341(int iParam0, bool bParam1)//Position - 0xF1A3
{
	int iVar0;
	
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_44(PLAYER::PLAYER_PED_ID(), 0, 0)))
	{
	}
	else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_103(bParam1), 3) && TASK::GET_SCRIPT_TASK_STATUS(iParam0, -2017877118) != 1)
	{
		if (func_510())
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				if (!GlobalFunc_1409(PLAYER::PLAYER_ID()))
				{
					iVar0 = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 6);
					if (!func_483(256))
					{
						func_189(256);
						iLocal_85 = iVar0;
						iLocal_86 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), 6);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, 1, 0, 0);
						func_189(1024);
					}
				}
				TASK::TASK_PLAY_ANIM(iParam0, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_342(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(iParam0, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_342(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
			}
		}
		else
		{
			TASK::TASK_PLAY_ANIM(iParam0, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_342(bParam1), 2f, -8f, -1, 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_342(bParam1), 3))
		{
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iParam0, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_342(bParam1)) >= 0.95f)
			{
				TASK::TASK_PLAY_ANIM(iParam0, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_103(bParam1), 8f, -2f, -1, 1, 0, 0, 0, 0);
			}
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_44(PLAYER::PLAYER_PED_ID(), 0, 0), func_103(bParam1), 3))
		{
			return 1;
		}
	}
	return 0;
}

var func_342(bool bParam0)//Position - 0xF335
{
	if (!GlobalFunc_2951(iLocal_48, 32768))
	{
		if (bParam0)
		{
			return func_39(0);
		}
		else
		{
			return func_39(1);
		}
	}
	if (bParam0)
	{
		return func_40(0);
	}
	return func_40(1);
}

void func_343(int iParam0)//Position - 0xF37B
{
	*iParam0 = -15;
}


void func_345()//Position - 0xF465
{
	if (PED::IS_PED_INJURED(iLocal_95))
	{
		return;
	}
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_95);
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95))
	{
		if (iLocal_71 < 1)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
	}
}

int func_346()//Position - 0xF4B0
{
	if (GlobalFunc_6490(0, -1) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\HUD_321_GO", true))
	{
		return 1;
	}
	return 0;
}



void func_349()//Position - 0xF644
{
	if (!func_510())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_95))
	{
		iLocal_59 = ENTITY::GET_ENTITY_HEALTH(iLocal_95);
	}
}

void func_350()//Position - 0xF668
{
	int iVar0;
	
	if (!func_510())
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_55 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
		}
	}
}



int func_353()//Position - 0xF778
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_98 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (!iLocal_98 == 0)
				{
					if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, 0) && !FIRE::IS_ENTITY_ON_FIRE(iLocal_98)) && !ENTITY::IS_ENTITY_UPSIDEDOWN(iLocal_98))
					{
						if (func_85(&iLocal_98))
						{
							GlobalFunc_6533(&iLocal_48, 1);
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

void func_354()//Position - 0xF7ED
{
	if (iLocal_71 == 0)
	{
		if (!GlobalFunc_2951(iLocal_50, 1) && !GlobalFunc_2951(iLocal_50, 16))
		{
			if (func_355(0))
			{
				func_441(&iLocal_50, 1);
			}
		}
		if (!GlobalFunc_2951(iLocal_50, 4) && !GlobalFunc_2951(iLocal_50, 64))
		{
			if (func_355(2))
			{
				func_441(&iLocal_50, 4);
			}
		}
		if (!GlobalFunc_2951(iLocal_50, 8) && !GlobalFunc_2951(iLocal_50, 128))
		{
			if (func_355(1))
			{
				func_441(&iLocal_50, 8);
			}
		}
	}
}

int func_355(int iParam0)//Position - 0xF875
{
	struct<3> Var0;
	struct<3> Var3;
	int iVar6;
	var uVar7;
	var uVar10;
	var uVar13;
	
	Var0 = { func_179(iParam0) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_98, 1) };
	if (iLocal_307[iParam0] == 0)
	{
		if (ENTITY::GET_ENTITY_MODEL(iLocal_98) == joaat("casco") || ENTITY::GET_ENTITY_MODEL(iLocal_98) == joaat("feltzer3"))
		{
			iLocal_307[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var0, Var3, 0.15f, 511, iLocal_98, 3);
		}
		else
		{
			iLocal_307[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(Var0, Var3, 0.25f, 511, iLocal_98, 3);
		}
	}
	else
	{
		switch (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_307[iParam0], &iVar6, &uVar7, &uVar10, &uVar13))
		{
			case 2:
				iLocal_307[iParam0] = 0;
				if (iVar6 != 0)
				{
					func_356(iParam0);
					return 0;
				}
				else
				{
					return 1;
				}
				break;
			
			case 1:
				break;
			
			case 0:
				iLocal_307[iParam0] = 0;
				break;
			}
	}
	return 0;
}

void func_356(int iParam0)//Position - 0xF95B
{
	switch (iParam0)
	{
		case 0:
			if (!GlobalFunc_2951(iLocal_50, 16))
			{
				func_441(&iLocal_50, 16);
				GlobalFunc_6533(&iLocal_50, 1);
			}
			break;
		
		case 1:
			if (!GlobalFunc_2951(iLocal_50, 128))
			{
				func_441(&iLocal_50, 128);
				GlobalFunc_6533(&iLocal_50, 8);
			}
			break;
		
		case 2:
			if (!GlobalFunc_2951(iLocal_50, 64))
			{
				func_441(&iLocal_50, 64);
				GlobalFunc_6533(&iLocal_50, 4);
			}
			break;
		
		case 3:
			if (!GlobalFunc_2951(iLocal_50, 32))
			{
				func_441(&iLocal_50, 32);
				GlobalFunc_6533(&iLocal_50, 2);
			}
			break;
	}
}

void func_357()//Position - 0xF9FB
{
	if (func_362() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		iLocal_294 = 9;
		func_360(iLocal_95);
		func_360(PLAYER::PLAYER_PED_ID());
		func_358();
		GlobalFunc_6877(&uLocal_103);
	}
}

void func_358()//Position - 0xFA36
{
	struct<7> Var0;
	struct<7> Var7;
	
	if (!CAM::DOES_CAM_EXIST(uLocal_101))
	{
		uLocal_101 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	if (!CAM::DOES_CAM_EXIST(uLocal_102))
	{
		uLocal_102 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
	}
	func_359(&Var0, &Var7);
	CAM::SET_CAM_COORD(uLocal_101, Var0);
	CAM::SET_CAM_ROT(uLocal_101, Var0.f_3, 2);
	CAM::SET_CAM_FOV(uLocal_101, Var0.f_6);
	CAM::SET_CAM_COORD(uLocal_102, Var7);
	CAM::SET_CAM_ROT(uLocal_102, Var7.f_3, 2);
	CAM::SET_CAM_FOV(uLocal_102, Var7.f_6);
	CAM::SET_CAM_ACTIVE(uLocal_101, 1);
	CAM::SET_CAM_ACTIVE(uLocal_102, 0);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}

void func_359(var uParam0, var uParam1)//Position - 0xFACC
{
	switch (GlobalFunc_8315())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
		
		case 1:
			*uParam0 = { -20.162f, -1443.916f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.92f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
		
		case 2:
			*uParam0 = { 1972.248f, 3804.805f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.194f, 3807.541f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}
}

void func_360(int iParam0)//Position - 0xFC06
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
		}
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_361(), 1f, -1, 0.5f, 8192, 1193033728);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

Vector3 func_361()//Position - 0xFC65
{
	switch (GlobalFunc_8315())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
			break;
		
		case 1:
			return -14.57f, -1437.56f, 30.12f;
			break;
		
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
			break;
	}
	return 0f, 0f, 0f;
}

bool func_362()//Position - 0xFCCA
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_364()) < (func_363() * func_363());
}

float func_363()//Position - 0xFCED
{
	switch (GlobalFunc_8315())
	{
		case 0:
			return 20.75f;
			break;
		
		case 1:
			return 10f;
			break;
		
		case 2:
			return 14f;
			break;
	}
	return 0f;
}

Vector3 func_364()//Position - 0xFD32
{
	switch (GlobalFunc_8315())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
			break;
		
		case 1:
			return -16.98f, -1451.59f, 29.57f;
			break;
		
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_365()//Position - 0xFD97
{
	func_305();
	func_380();
	if (!GlobalFunc_226(&uLocal_106))
	{
		GlobalFunc_7777(&uLocal_106);
	}
	if (func_379())
	{
		return;
	}
	if (!GlobalFunc_226(&uLocal_115))
	{
		GlobalFunc_7777(&uLocal_115);
	}
	if (func_353() && PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_98, 0))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(iLocal_98) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iLocal_98))
		{
			if ((func_372() && !func_362()) && !func_371())
			{
				func_370();
				if (GlobalFunc_5182(&uLocal_115) > 2.5f)
				{
					uLocal_84 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(ENTITY::GET_ENTITY_COORDS(iLocal_98, 0), 40f, 40f, 40f, ENTITY::GET_ENTITY_HEADING(iLocal_98), 0, 7);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 896);
					func_441(&iLocal_48, 2048);
					iLocal_99 = 0;
					PED::ADD_RELATIONSHIP_GROUP("ProstituteInPlay", &uLocal_306);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_306, 1862763509);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_95, uLocal_306);
					GlobalFunc_587("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					GlobalFunc_6533(&iLocal_48, 1024);
					iLocal_303 = -15;
					GlobalFunc_969();
					func_369();
					iLocal_82 = 3;
					if (func_42(0, 1))
					{
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
					}
					iLocal_294 = 8;
				}
			}
			else
			{
				if ((!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && GlobalFunc_5182(&uLocal_106) > 15f) && func_368())
				{
					if (!GlobalFunc_2951(iLocal_49, 4096))
					{
						GlobalFunc_159("PROS_SPOT", -1);
						func_441(&iLocal_49, 4096);
					}
					func_367();
					GlobalFunc_6877(&uLocal_106);
				}
				GlobalFunc_6877(&uLocal_115);
			}
		}
		else
		{
			GlobalFunc_6877(&uLocal_115);
			func_366();
		}
	}
	else if (!func_362())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_95))
		{
			if (!PED::IS_PED_INJURED(iLocal_95))
			{
				TASK::CLEAR_PED_TASKS(iLocal_95);
			}
		}
		func_432(0);
	}
}

void func_366()//Position - 0xFF49
{
	iLocal_50 = 0;
	iLocal_307[0] = 0;
	iLocal_307[1] = 0;
	iLocal_307[2] = 0;
	iLocal_307[3] = 0;
}

void func_367()//Position - 0xFF70
{
	if (PED::IS_PED_INJURED(iLocal_95))
	{
		return;
	}
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95))
	{
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	}
}

int func_368()//Position - 0xFF9D
{
	if (!GlobalFunc_2951(iLocal_50, 256))
	{
		return 1;
	}
	return GlobalFunc_2951(iLocal_50, 32);
}

void func_369()//Position - 0xFFBE
{
	if (func_510())
	{
		PED::SET_PED_CONFIG_FLAG(iLocal_95, 229, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_95, 26, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_95, 115, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_95, 1);
	}
}

void func_370()//Position - 0xFFEF
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	var uVar12;
	var uVar15;
	
	if (!GlobalFunc_2951(iLocal_48, 2097152))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_83)
		{
			if (iLocal_99 == 0)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_98, 1) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar6);
				Var0.f_2 = (fVar6 + 0.15f);
				Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_98, 0f, 0f, -2f) };
				iLocal_99 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Var0, Var3, 2f, 511, iLocal_98, 7);
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(iLocal_99, &iVar8, &uVar9, &uVar12, &iVar7, &uVar15) == 2)
			{
				if (iVar8 != 0)
				{
					if ((iVar7 == -1447280105 || iVar7 == 1925605558) || iVar7 == 2128369009)
					{
						GlobalFunc_6877(&uLocal_115);
					}
				}
				iLocal_83 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_99 = 0;
			}
		}
	}
}

int func_371()//Position - 0x100B9
{
	int iVar0;
	
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, 0))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_372()//Position - 0x10104
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iLocal_98 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var1, func_59(0), 12f, 0) || TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var1, func_59(1), 12f, 0))
		{
			return 0;
		}
		if (GlobalFunc_1593())
		{
			return 0;
		}
		if (func_377(iLocal_98, &Var4))
		{
			if (!func_376(Var4))
			{
				if (!func_375(Var1) || func_374(Var1))
				{
					return 0;
				}
			}
		}
		if (func_84(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), (30f * 0.5f)))
		{
			return 0;
		}
		if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_95, iLocal_98, 0, 0, 0))
		{
			return 0;
		}
		PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(1);
		if (PED::GET_CLOSEST_PED(Var1, 20f, 1, 1, &iVar0, 0, 1, -1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iVar0, iLocal_98, 17))
					{
						return 0;
					}
				}
			}
			else
			{
				GlobalFunc_587("NO VEHICLES FOUND");
			}
		}
		iVar7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
		if (!iVar7 == 0)
		{
			GlobalFunc_587("IN AN INTERIOR");
			return 0;
		}
		if (func_373())
		{
			return 0;
		}
	}
	return 1;
}

int func_373()//Position - 0x10256
{
	func_441(&iLocal_50, 256);
	if (!GlobalFunc_2951(iLocal_50, 2))
	{
		if (func_355(3))
		{
			func_441(&iLocal_50, 2);
			GlobalFunc_6533(&iLocal_50, 32);
		}
		return 1;
	}
	else
	{
		func_354();
	}
	return 0;
}

int func_374(struct<3> Param0)//Position - 0x10295
{
	if (((((((((SYSTEM::VDIST(Param0, 491.76f, -515.73f, 29.51f) <= 12f || SYSTEM::VDIST(Param0, -1453.385f, -594.2627f, 29.7966f) <= 12f) || SYSTEM::VDIST(Param0, -633.6086f, -332.3337f, 33.81f) <= 25f) || SYSTEM::VDIST(Param0, -1493.191f, -693.9906f, 26.0665f) <= 25f) || SYSTEM::VDIST(Param0, -1512.938f, -675.6082f, 27.4202f) <= 25f) || SYSTEM::VDIST(Param0, -1388.642f, -1342.266f, 3.1626f) <= 25f) || SYSTEM::VDIST(Param0, 50.2024f, -1392.306f, 28.4166f) <= 12f) || SYSTEM::VDIST(Param0, 25.9811f, -1392.289f, 28.3356f) <= 12f) || SYSTEM::VDIST(Param0, 10.0435f, -1391.596f, 28.3074f) <= 12f) || SYSTEM::VDIST(Param0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
	{
		return 1;
	}
	return 0;
}

int func_375(struct<3> Param0)//Position - 0x103FD
{
	if ((((((SYSTEM::VDIST(Param0, -1582.782f, 5168.163f, 18.5615f) <= 15f || SYSTEM::VDIST(Param0, -1445.73f, -640.8375f, 28.7804f) <= 15f) || SYSTEM::VDIST(Param0, -348.7544f, 292.5813f, 83.9843f) <= 15f) || SYSTEM::VDIST(Param0, -273f, 317.8898f, 92.2549f) <= 15f) || SYSTEM::VDIST(Param0, -1627.935f, -1083.443f, 3.2819f) <= 40f) || SYSTEM::VDIST(Param0, -1661.098f, -1057.73f, 2.5729f) <= 40f) || SYSTEM::VDIST(Param0, -1518.358f, -553.8981f, 32.1463f) <= 15f)
	{
		func_441(&iLocal_48, 2097152);
		return 1;
	}
	GlobalFunc_6533(&iLocal_48, 2097152);
	return 0;
}

int func_376(struct<3> Param0)//Position - 0x10510
{
	var uVar0;
	
	uVar0 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1, 1, 1077936128, 0);
	PATHFIND::GET_VEHICLE_NODE_POSITION(uVar0, &Param0);
	if (PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(uVar0))
	{
		if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(uVar0))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0) > 400f)
			{
				return 1;
			}
		}
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0) > 56.25f)
		{
			return 1;
		}
	}
	else if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(uVar0))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	else
	{
		uVar0 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1, 8, 1077936128, 0);
		PATHFIND::GET_VEHICLE_NODE_POSITION(uVar0, &Param0);
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Param0) > 400f)
		{
			return 1;
		}
	}
	return 0;
}

int func_377(int iParam0, var uParam1)//Position - 0x105F6
{
	struct<3> Var0[4];
	
	Var0[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 2f, 0f, 0f) };
	Var0[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, -2f, 0f, 0f) };
	Var0[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 2f, 0f) };
	Var0[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, -2f, 0f) };
	if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[0 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[1 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[2 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(Var0[3 /*3*/], uParam1, 1077936128, 0))
	{
		return 1;
	}
	return 0;
}


int func_379()//Position - 0x106C9
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("carwash1")) > 0 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("carwash2")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_380()//Position - 0x106F5
{
	if (!GlobalFunc_2951(iLocal_48, 128))
	{
		GlobalFunc_8523(39, 1);
		GlobalFunc_8523(40, 1);
		GlobalFunc_8523(41, 1);
		GlobalFunc_8523(42, 1);
		GlobalFunc_8523(43, 1);
		func_441(&iLocal_48, 128);
	}
}






void func_386(var uParam0)//Position - 0x10B44
{
	if (GlobalFunc_2951(iLocal_48, 2))
	{
		if (!func_57())
		{
			return;
		}
		GlobalFunc_587(1);
	}
	func_62();
	func_500();
	if (func_510())
	{
		func_495(uParam0);
	}
}

void func_387()//Position - 0x10B7B
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_95))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_95, PLAYER::PLAYER_PED_ID(), 5f, 5f, 5f, 0, 1, 0) || GlobalFunc_2951(iLocal_48, 8192))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
			PAD::SET_INPUT_EXCLUSIVE(0, 51);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_95, 0))
			{
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_95, 50);
				PED::SET_PED_LOD_MULTIPLIER(iLocal_95, 5f);
				if (GlobalFunc_2951(iLocal_48, 16))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
						GlobalFunc_6533(&iLocal_48, 16);
					}
				}
				iLocal_98 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_95, iLocal_98) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_98, 0))
					{
						GlobalFunc_587("***** prostitute IN VEHICLE****** ");
						if (GlobalFunc_2951(iLocal_48, 8))
						{
							if (STREAMING::HAS_CLIP_SET_LOADED(func_86()))
							{
								if (func_391(iLocal_98))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_95, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								}
								else if (func_390(iLocal_98))
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_95, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								}
								else
								{
									PED::SET_PED_IN_VEHICLE_CONTEXT(iLocal_95, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PASSENGER"));
								}
							}
						}
						if (func_510())
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_95, 0, 0);
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_95, 1, 1);
						}
						func_175(iLocal_95, 0);
						func_367();
						iLocal_63 = MISC::GET_GAME_TIMER();
						GlobalFunc_6877(&uLocal_106);
						iLocal_294 = 7;
					}
					else
					{
						GlobalFunc_587("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if ((GlobalFunc_156(iLocal_95, PLAYER::PLAYER_PED_ID(), 1) > 11f || func_388(20f)) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_98, 0))
				{
					GlobalFunc_235(&uLocal_112);
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_95, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_95);
						func_432(0);
						GlobalFunc_587("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_89(15);
					}
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, 0))
					{
						iLocal_98 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					}
					else if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_95, iLocal_98, 0, 0, 0))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_2951(iLocal_74, 1))
							{
								GlobalFunc_6877(&uLocal_118);
								func_441(&iLocal_74, 1);
							}
							else if (GlobalFunc_5182(&uLocal_118) > 20f)
							{
								func_119();
								GlobalFunc_587("prostitute couldn't get into the car");
								iLocal_294 = 6;
							}
						}
					}
				}
			}
		}
		else if (!GlobalFunc_2951(iLocal_74, 1))
		{
			GlobalFunc_587("PLAYER out of range for entering VEHICLE or wanted level");
			TASK::CLEAR_PED_TASKS(iLocal_95);
			func_89(15);
		}
	}
}

bool func_388(float fParam0)//Position - 0x10DDE
{
	if (!GlobalFunc_226(&uLocal_112))
	{
		GlobalFunc_6877(&uLocal_112);
	}
	return GlobalFunc_5425(&uLocal_112) > fParam0;
}


int func_390(int iParam0)//Position - 0x10E5B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case -782720499:
			case -38413156:
				return 1;
				break;
			}
	}
	return 0;
}

int func_391(int iParam0)//Position - 0x10E8C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(iParam0))
		{
			case 542797648:
			case 68566729:
			case 2033852426:
			case -1820894825:
				return 1;
				break;
			}
	}
	return 0;
}

void func_392(var uParam0)//Position - 0x10EC9
{
	int iVar0;
	
	if (!func_401(0))
	{
		return;
	}
	if (!GlobalFunc_2951(iLocal_48, 16))
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 0);
		func_441(&iLocal_48, 16);
	}
	if (!GlobalFunc_226(&uLocal_112))
	{
		GlobalFunc_7777(&uLocal_112);
	}
	if (GlobalFunc_5425(&uLocal_112) >= 20f || !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_95, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
	{
		if (GlobalFunc_2951(iLocal_74, 524288))
		{
			GlobalFunc_235(&uLocal_112);
			iLocal_294 = 6;
		}
		else if (func_400())
		{
			GlobalFunc_6877(&uLocal_112);
			func_441(&iLocal_74, 524288);
		}
	}
	func_63(iLocal_95);
	if (((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_95, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0) || GlobalFunc_2951(iLocal_74, 1)) && !GlobalFunc_116(0)) && !GlobalFunc_1593())
	{
		if (!VEHICLE::_IS_VEHICLE_SEAT_ACCESSIBLE(iLocal_95, iLocal_98, 0, 0, 0))
		{
			if (!GlobalFunc_111())
			{
				if (!GlobalFunc_2951(iLocal_74, 1))
				{
					GlobalFunc_6877(&uLocal_118);
					func_441(&iLocal_74, 1);
				}
				else if (GlobalFunc_5182(&uLocal_118) > 10f)
				{
					func_62();
					TASK::CLEAR_PED_TASKS(iLocal_95);
					GlobalFunc_587("prostitute couldn't get into the car");
					iLocal_294 = 6;
				}
			}
		}
		else
		{
			func_393();
		}
	}
	else if (GlobalFunc_74("PROS_ACCEPT"))
	{
		GlobalFunc_6533(&iLocal_48, 1048576);
		func_427();
		if (func_510())
		{
			iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, -2017877118);
			if (iVar0 != 1 && iVar0 != 0)
			{
				func_500();
				func_495(uParam0);
			}
		}
	}
}

void func_393()//Position - 0x11044
{
	if (iLocal_294 != 5 && func_340(0))
	{
		func_396();
		if (GlobalFunc_5079(iLocal_73, 1) || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_441(&iLocal_48, 8192);
			GlobalFunc_6877(&uLocal_112);
		}
		if (GlobalFunc_2951(iLocal_48, 8192))
		{
			func_427();
			Global_24594 = 1;
			func_124("PROSTITUTES_SOLICIT_SCENE");
			func_81("PROSTITUTES_DRIVE_SCENE");
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, -1794415470) != 1 && !PED::IS_PED_IN_VEHICLE(iLocal_95, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_95, iLocal_98, -1, 0, 1f, 8388609, 0);
				}
			}
			uLocal_62 = func_44(PLAYER::PLAYER_PED_ID(), 1, 0);
			STREAMING::REQUEST_ANIM_DICT(uLocal_62);
			uLocal_62 = func_44(PLAYER::PLAYER_PED_ID(), 0, 1);
			STREAMING::REQUEST_ANIM_DICT(uLocal_62);
			GlobalFunc_6877(&uLocal_106);
			iLocal_294 = 5;
		}
	}
}



void func_396()//Position - 0x11221
{
	if (Global_24594)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			return;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 101, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
		PAD::SET_INPUT_EXCLUSIVE(0, 51);
		if (!GlobalFunc_2951(iLocal_48, 8192))
		{
			if (iLocal_73 == -1)
			{
				GlobalFunc_6774(&iLocal_73, 5, "PROS_ACCEPT", 0, 0);
			}
		}
	}
	else if (GlobalFunc_5456(iLocal_73, 0))
	{
		func_427();
	}
}




int func_400()//Position - 0x1147C
{
	int iVar0;
	var uVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95) || PED::IS_PED_INJURED(iLocal_95))
	{
		return 1;
	}
	if (!func_510())
	{
		func_62();
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_95, 1))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_95, 1193033728, 0);
		}
		else if (GlobalFunc_2951(iLocal_48, 4194304))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
			TASK::OPEN_SEQUENCE_TASK(&uVar1);
			TASK::TASK_PLAY_ANIM(0, func_61(iLocal_292), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, func_61(iLocal_292), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar1);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_95, uVar1);
			TASK::CLEAR_SEQUENCE_TASK(&uVar1);
		}
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_95, 1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
		{
			TASK::TASK_WANDER_STANDARD(iLocal_95, 1193033728, 0);
			return 1;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
			return 0;
		}
	}
	switch (iLocal_54)
	{
		case 0:
			if (GlobalFunc_2951(iLocal_48, 4194304))
			{
				func_62();
				iLocal_54 = 1;
			}
			break;
		
		case 1:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
			{
				TASK::TASK_PLAY_ANIM(iLocal_95, func_61(iLocal_292), func_60(5), 2f, -2f, -1, 0, 0, 0, 0, 0);
				iLocal_54 = 2;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, -2017877118) == 7)
				{
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
					TASK::TASK_PLAY_ANIM(iLocal_95, func_61(iLocal_292), func_60(iVar0), 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_54 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
			}
			break;
		
		case 3:
			iLocal_54 = 0;
			return 1;
			break;
	}
	return 0;
}

int func_401(bool bParam0)//Position - 0x11633
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_95))
	{
		return 0;
	}
	if (GlobalFunc_2951(iLocal_48, 8192))
	{
	}
	if (GlobalFunc_156(iLocal_95, PLAYER::PLAYER_PED_ID(), 1) > 11f)
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (func_510())
	{
		if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 1)
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 2f)
		{
			return 0;
		}
	}
	if (func_84(ENTITY::GET_ENTITY_COORDS(iLocal_95, 1), 1106247680))
	{
		if (!GlobalFunc_2951(iLocal_49, 8192) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_159("PROS_COPS", -1);
			func_441(&iLocal_49, 8192);
		}
		return 0;
	}
	if (!func_353())
	{
		if (!func_510())
		{
			if ((!iLocal_87 && !Global_96400) && GlobalFunc_708(PLAYER::PLAYER_PED_ID()) == -1)
			{
				GlobalFunc_159("PROS_CAR", -1);
				iLocal_87 = 1;
			}
			func_402();
		}
		else if (!func_483(4096))
		{
			GlobalFunc_159("PROS_CAR", -1);
			func_189(4096);
		}
		return 0;
	}
	return 1;
}

void func_402()//Position - 0x1175A
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (!GlobalFunc_2951(iLocal_48, 1))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_95))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_441(&iLocal_48, 1);
		}
	}
}


void func_404()//Position - 0x11828
{
	if (func_401(0))
	{
		func_393();
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, 242628503) == 7 && !GlobalFunc_2951(iLocal_48, 8192))
		{
			if (func_66(1))
			{
				GlobalFunc_235(&uLocal_112);
				iLocal_63 = MISC::GET_GAME_TIMER();
				GlobalFunc_587("prostitute proposition player VEHICLE");
				iLocal_294 = 4;
			}
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iLocal_95);
		func_89(15);
	}
}

void func_405(var uParam0)//Position - 0x1188A
{
	if (func_401(0))
	{
		func_393();
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, 242628503) == 7 || GlobalFunc_2951(iLocal_48, 8192))
		{
			iLocal_294 = 3;
		}
		else if (func_388(20f))
		{
			GlobalFunc_235(&uLocal_112);
			func_432(0);
		}
		else
		{
			func_406(uParam0);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iLocal_95);
		func_89(15);
	}
}

void func_406(var uParam0)//Position - 0x118F3
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	var uVar18;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_98))
	{
		return;
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iLocal_98), &Var6, &Var3);
	Var0 = { Var3 - Var6 };
	Var0 = { Var0 / Vector(2f, 2f, 2f) };
	Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_98, -(Var0.x + 0.2f), 0f, 0f) };
	Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_98, (Var0.x + 0.2f), 0f, 0f) };
	Var15 = { ENTITY::GET_ENTITY_COORDS(iLocal_95, 1) };
	if (SYSTEM::VDIST(Var15, Var12) < SYSTEM::VDIST(Var15, Var9))
	{
		Var9 = { Var12 };
	}
	if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, -1794415470) != 1 || !GlobalFunc_2951(iLocal_48, 8192)) && SYSTEM::VDIST2(Local_92, Var9) > 0f)
	{
		if (func_510())
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_95))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_95, 0, 1);
			}
			func_416(&uLocal_286, func_61(iLocal_292));
			func_410(uParam0, 1);
			GlobalFunc_7078(&uLocal_286, uParam0);
		}
		TASK::OPEN_SEQUENCE_TASK(&uVar18);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Var9.x, Var9.f_1, Var9.f_2, 1f, -1, 1f, 8192, 1193033728);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f), 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar18);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_95, uVar18);
		TASK::CLEAR_SEQUENCE_TASK(&uVar18);
		Local_92 = { Var9 };
	}
}




void func_410(var uParam0, bool bParam1)//Position - 0x11B74
{
	int iVar0;
	
	if (!bParam1)
	{
		func_412(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		GlobalFunc_2281(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}


void func_412(var uParam0)//Position - 0x11BD0
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_413(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_413(var uParam0)//Position - 0x11C0A
{
	func_414(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_414(int iParam0, char* sParam1, int iParam2)//Position - 0x11C21
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (GlobalFunc_2270(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(uParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(uParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(uParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(uParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(uParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}


int func_416(var uParam0, char* sParam1)//Position - 0x11D0D
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL((*uParam0)[iVar0]))
		{
			if (MISC::ARE_STRINGS_EQUAL((*uParam0)[iVar0], uParam1))
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = GlobalFunc_2273(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = sParam1;
	return 1;
}


void func_418(var uParam0)//Position - 0x11DA1
{
	if (func_401(1))
	{
		if (!GlobalFunc_226(&uLocal_112))
		{
			GlobalFunc_7777(&uLocal_112);
		}
		func_441(&iLocal_48, 4);
		Global_24595 = 1;
		func_393();
		if (GlobalFunc_7950(&uLocal_112, 2f) || GlobalFunc_2951(iLocal_48, 8192))
		{
			func_441(&iLocal_48, 2);
			if (func_340(0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_95, -1, 2048, 4);
				func_406(uParam0);
				func_441(&iLocal_48, 4);
				Global_24594 = 1;
				iLocal_294 = 2;
			}
			else
			{
				GlobalFunc_159("PROS_NO_MONEY", -1);
				func_419();
				func_89(0);
				iLocal_295 = 0;
				func_441(&iLocal_48, 8388608);
				GlobalFunc_6533(&iLocal_48, 4);
				Global_24594 = 0;
			}
		}
	}
	else
	{
		GlobalFunc_6533(&iLocal_48, 4);
		Global_24595 = 0;
	}
}

void func_419()//Position - 0x11E6A
{
	if (!func_483(64))
	{
		GlobalFunc_7677(0, 31, 5);
		func_189(64);
	}
}








void func_427()//Position - 0x11FEF
{
	if (iLocal_73 != -1)
	{
		GlobalFunc_5084(&iLocal_73);
	}
}





void func_432(int iParam0)//Position - 0x120E7
{
	bool bVar0;
	
	func_119();
	if (iParam0 || iLocal_71 == 0)
	{
		bVar0 = true;
		if (func_510())
		{
			bVar0 = false;
		}
		func_99(bVar0);
		func_89(14);
	}
	else
	{
		func_99(0);
		func_89(15);
	}
}

int func_433()//Position - 0x12129
{
	if ((((((GlobalFunc_476() || GlobalFunc_1134()) || GlobalFunc_1135()) || GlobalFunc_1480()) || GlobalFunc_5441()) || Global_2394528) || Global_2394528.f_1 != 0)
	{
		return 1;
	}
	return 0;
}








void func_441(int iParam0, int iParam1)//Position - 0x12210
{
	GlobalFunc_814(iParam0, iParam1);
}


int func_443()//Position - 0x12231
{
	if (Global_24596)
	{
		return 0;
	}
	if (func_510())
	{
		return 0;
	}
	if (!func_446())
	{
		return 0;
	}
	if (func_444())
	{
		iLocal_295 = 4;
		return 1;
	}
	return 0;
}

int func_444()//Position - 0x1226A
{
	int iVar0;
	
	iLocal_97 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_95, 1), 15f, 0, 6);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_97) && !ENTITY::IS_ENTITY_DEAD(iLocal_97))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_97, 0))
		{
			if (func_85(&iLocal_97))
			{
				iLocal_96 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_97, -1);
				if (!iLocal_96 == 0)
				{
					if (func_445(&iLocal_96))
					{
						iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_97);
						if (!iVar0 == joaat("taxi") && !iVar0 == joaat("taxi"))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_96))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_96, 1, 0);
							}
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_97))
							{
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_97, 1, 0);
							}
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_96, 1);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_96, 0);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_97, 0);
							return 1;
						}
					}
				}
			}
		}
	}
	iLocal_97 = 0;
	iLocal_96 = 0;
	return 0;
}

int func_445(int iParam0)//Position - 0x1232E
{
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (PED::IS_PED_MALE(*iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_446()//Position - 0x12350
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_DEAD(iLocal_95))
	{
		return 0;
	}
	return 1;
}

int func_447()//Position - 0x12374
{
	if ((!func_446() || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) || GlobalFunc_2951(iLocal_48, 4096))
	{
		return 0;
	}
	if (GlobalFunc_2951(iLocal_48, 32))
	{
		iLocal_295 = 2;
		GlobalFunc_587(2);
		GlobalFunc_587("IS_CUSTOMER_A_PLAYER is TRUE");
		return 1;
	}
	return 0;
}

void func_448()//Position - 0x123C8
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_95))
	{
		if (!PED::IS_PED_FLEEING(iLocal_95))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, 1805844857) != 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_95, 0);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_95, 196628, 1);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_95);
				TASK::TASK_SMART_FLEE_PED(iLocal_95, PLAYER::PLAYER_PED_ID(), 300f, -1, 1, 0);
				PED::SET_PED_KEEP_TASK(iLocal_95, 1);
				func_89(15);
			}
		}
	}
}



int func_451()//Position - 0x12441
{
	if (PED::IS_PED_INJURED(iLocal_95))
	{
		return 0;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, 1435919172) == 1)
	{
		return 0;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_95))
	{
		return 0;
	}
	return 1;
}

int func_452()//Position - 0x12477
{
	switch (iLocal_299)
	{
		case 0:
			if (!func_510())
			{
				func_416(&uLocal_286, func_61(iLocal_292));
				GlobalFunc_7078(&uLocal_286, &uLocal_344);
				GlobalFunc_587("Moving to PROSTITUTE_INIT_STREAMING");
			}
			if (func_510())
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
			}
			iLocal_299 = 1;
			break;
		
		case 1:
			if (!func_510())
			{
				if (func_453(&uLocal_344))
				{
					func_441(&iLocal_48, 4194304);
					GlobalFunc_587("Moving to PROSTITUTE_INIT_INIT");
					iLocal_299 = 2;
				}
			}
			else if (func_510())
			{
				func_441(&iLocal_48, 4194304);
				GlobalFunc_587("Moving to PROSTITUTE_INIT_INIT");
				iLocal_299 = 2;
			}
			break;
		
		case 2:
			iLocal_296 = 0;
			iLocal_68 = iLocal_296;
			GlobalFunc_6533(&iLocal_48, 512);
			GlobalFunc_6533(&iLocal_48, 1024);
			iLocal_295 = 0;
			iLocal_96 = 0;
			iLocal_97 = 0;
			GlobalFunc_587("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_299 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_95))
			{
				if (!func_510())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_95, 0);
					PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_95, 0);
					GlobalFunc_173(&uLocal_121, 4, iLocal_95, "Prostitutes", 0, 1);
					return 1;
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_95);
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_95, 0);
					GlobalFunc_173(&uLocal_121, 4, iLocal_95, "Prostitutes", 0, 1);
					PED::SET_PED_CAN_EVASIVE_DIVE(iLocal_95, 0);
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iLocal_95);
					return 1;
				}
			}
			break;
	}
	return 0;
}

bool func_453(var uParam0)//Position - 0x125DB
{
	return func_454(uParam0);
}

int func_454(var uParam0)//Position - 0x125E9
{
	int iVar0;
	
	if (!uParam0->f_271)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_455(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_455(var uParam0)//Position - 0x1264D
{
	return func_456(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_456(int iParam0, char* sParam1, var uParam2)//Position - 0x12664
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(iParam0, 29))
		{
			switch (GlobalFunc_2270(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(uParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(uParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(uParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(iParam0, 27));
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(uParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(uParam2);
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

int func_457()//Position - 0x12757
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (GlobalFunc_8315() == 0)
		{
			if (GlobalFunc_713(iLocal_95, 537.0014f, 119.0252f, 96.0997f, 1) <= 8f)
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_95, 1))
				{
					if (func_510())
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_95, 0, 0);
					}
					else
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_95, 1, 1);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}


int func_459()//Position - 0x127F0
{
	if (PED::IS_PED_USING_SCENARIO(iLocal_95, func_59(0)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_95, "amb@world_human_prostitute@crackhooker@base", "base"))
		{
			return 0;
		}
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_95, "amb@world_human_prostitute@cokehead@base", "base"))
		{
			return 1;
		}
	}
	if (PED::IS_PED_USING_SCENARIO(iLocal_95, func_59(1)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_95, "amb@world_human_prostitute@french@base", "base"))
		{
			return 3;
		}
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_95, "amb@world_human_prostitute@hooker@base", "base"))
		{
			return 2;
		}
	}
	return -1;
}

void func_460()//Position - 0x12869
{
	if (ENTITY::IS_ENTITY_DEAD(iLocal_95))
	{
		return;
	}
	if (iLocal_293 != 3 && iLocal_293 != 4)
	{
		func_461(PLAYER::PLAYER_PED_ID());
	}
	else if (iLocal_293 == 3)
	{
		func_461(iLocal_96);
	}
}

void func_461(int iParam0)//Position - 0x128A7
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (func_510())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
			return;
		}
	}
	if (GlobalFunc_156(iParam0, iLocal_95, 1) < 30f)
	{
		if (!PED::IS_PED_HEADTRACKING_PED(iLocal_95, iParam0))
		{
			if (func_510())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
				{
					TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
					TASK::TASK_LOOK_AT_ENTITY(iLocal_95, iParam0, -1, 2048, 4);
				}
			}
			else
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
				TASK::TASK_LOOK_AT_ENTITY(iLocal_95, iParam0, -1, 2048, 4);
			}
		}
	}
	else if (PED::IS_PED_HEADTRACKING_PED(iLocal_95, iParam0))
	{
		if (func_510())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
			}
		}
		else
		{
			TASK::TASK_CLEAR_LOOK_AT(iLocal_95);
		}
	}
}

void func_462()//Position - 0x1295A
{
	if (Global_24594)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, 0))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_95, iLocal_98, 0))
			{
				func_463();
			}
		}
		return;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_95) || !ENTITY::DOES_ENTITY_EXIST(iLocal_95))
	{
		if (Global_24598 != SCRIPT::GET_ID_OF_THIS_THREAD() && GlobalFunc_2951(iLocal_48, 32))
		{
			GlobalFunc_6533(&iLocal_48, 32);
		}
		return;
	}
	if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_95, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) < Global_24597 || Global_24597 == 0f) && iLocal_295 != 4)
	{
		Global_24597 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_95, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
		Global_24598 = SCRIPT::GET_ID_OF_THIS_THREAD();
		func_441(&iLocal_48, 32);
	}
	else if (Global_24598 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_24597 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_95, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
	}
	else
	{
		GlobalFunc_6533(&iLocal_48, 32);
	}
}

void func_463()//Position - 0x12A52
{
	if (func_510())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
		{
			PED::SET_PED_RESET_FLAG(iLocal_95, 323, 1);
		}
	}
	else
	{
		PED::SET_PED_RESET_FLAG(iLocal_95, 323, 1);
	}
}

void func_464(var uParam0)//Position - 0x12A81
{
	if (!iLocal_294 == 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_95) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (func_468())
			{
				if (func_510())
				{
					func_116(0);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_95, 196624, 1);
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_95))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_95, 1, 0);
					}
					TASK::TASK_SMART_FLEE_PED(iLocal_95, PLAYER::PLAYER_PED_ID(), 300f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_95, 1);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_500();
					func_495(uParam0);
				}
				else
				{
					func_89(12);
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_95, PLAYER::PLAYER_PED_ID(), 1))
			{
				iLocal_66++;
				if (iLocal_66 >= 2)
				{
					GlobalFunc_587("prostitute CLASSED AS UNDER ATTACK");
					iLocal_294 = 12;
				}
				else
				{
					GlobalFunc_587("prostitute BEEN HIT BY PLAYER");
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_95);
				}
			}
			else if (func_466())
			{
				func_465();
				iLocal_294 = 12;
			}
		}
	}
}

void func_465()//Position - 0x12B5D
{
	if (PED::IS_PED_INJURED(iLocal_95))
	{
		return;
	}
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_95);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iLocal_95, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
}

int func_466()//Position - 0x12B86
{
	var uVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (!func_467())
	{
		return 0;
	}
	uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		return VEHICLE::IS_VEHICLE_SIREN_ON(iVar0);
	}
	return 0;
}

int func_467()//Position - 0x12BDA
{
	if (!func_510())
	{
		return 1;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1) == PLAYER::PLAYER_PED_ID())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 0);
					}
					return 1;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
		}
	}
	return 0;
}

int func_468()//Position - 0x12C7F
{
	struct<3> Var0;
	
	if (!GlobalFunc_2951(iLocal_48, 4096))
	{
		if (GlobalFunc_156(iLocal_95, PLAYER::PLAYER_PED_ID(), 1) < 30f)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_95, 1) };
			if ((((((EVENT::IS_SHOCKING_EVENT_IN_SPHERE(86, Var0, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(89, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(88, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(102, Var0, 30f)) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(114, Var0, 30f)) || (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(112, Var0, 30f) && !func_510())) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_510())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_95, 0);
				}
				func_441(&iLocal_48, 4096);
				return 1;
			}
		}
	}
	return 0;
}

int func_469()//Position - 0x12D63
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_95) && !ENTITY::IS_ENTITY_DEAD(iLocal_95)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (func_510())
		{
			if (GlobalFunc_5363(PLAYER::PLAYER_ID(), 0))
			{
				GlobalFunc_587("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_95, 0))
				{
					func_99(0);
				}
				func_89(15);
				return 0;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_95))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_95, 0))
			{
				if (!GlobalFunc_6687(9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_95) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_95, PLAYER::PLAYER_PED_ID(), 100f, 100f, 50f, 0, 1, 0))
						{
							return 1;
						}
						else
						{
							GlobalFunc_587("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_89(15);
						}
					}
				}
				else if (!(GlobalFunc_488() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
				{
					GlobalFunc_587("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_89(15);
				}
				else
				{
					return 1;
				}
			}
			else if (iLocal_294 == 0)
			{
				GlobalFunc_587("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!GlobalFunc_6687(9) && !GlobalFunc_6687(5))
			{
				return 1;
			}
			else if (!(GlobalFunc_488() || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_379())))
			{
				GlobalFunc_587("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_99(0);
				func_89(15);
			}
			else
			{
				return 1;
			}
		}
		else
		{
			GlobalFunc_587("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_95))
	{
		GlobalFunc_587("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_95))
	{
		GlobalFunc_587("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_587("prostitute SCRIPT SHOULD EXIT - Player is dead");
	}
	return 0;
}






void func_475()//Position - 0x131A4
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 168)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &Var2, 2);
			if (Var2 == 229)
			{
				if (Var2.f_1 == PLAYER::PLAYER_ID())
				{
					func_189(128);
				}
			}
		}
		iVar0++;
	}
}

void func_476()//Position - 0x131F5
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) != 1)
	{
		if (GlobalFunc_6841(1, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(0) <= 1)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
			}
		}
	}
}







bool func_483(int iParam0)//Position - 0x1345D
{
	return GlobalFunc_2951(iLocal_51, iParam0);
}

void func_484(var uParam0)//Position - 0x1346D
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || MISC::IS_BIT_SET(Global_Mission_Fail_State.f_20, 2)) || MISC::IS_BIT_SET(Global_Mission_Fail_State.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_485(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_485(var uParam0)//Position - 0x134FB
{
	func_486(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_486(var uParam0, char* sParam1, int iParam2)//Position - 0x13511
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (GlobalFunc_2270(*uParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(uParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(uParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(uParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(uParam1, MISC::IS_BIT_SET(*uParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, MISC::IS_BIT_SET(*uParam0, 27));
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(uParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, uParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(uParam0, 29);
	}
}

void func_487(int iParam0)//Position - 0x135EA
{
	if (GlobalFunc_2951(iLocal_51, iParam0))
	{
		GlobalFunc_6533(&iLocal_51, iParam0);
	}
}

void func_488()//Position - 0x13605
{
	func_2(0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_95))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_95))
		{
			func_2(1);
		}
		else
		{
			GlobalFunc_587("Prostitue: not continuing, prostitue is dead");
		}
	}
	else
	{
		GlobalFunc_587("Prostitue: not continuing, prostitue doesn't exist");
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		func_2(0);
		GlobalFunc_587("Prostitue: not continuing, player isn't player or is dead");
	}
}






void func_494()//Position - 0x137BA
{
	func_189(1);
}

void func_495(var uParam0)//Position - 0x137C7
{
	GlobalFunc_587();
	if (func_42(0, 1))
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	}
	if (!PED::IS_PED_INJURED(iLocal_95))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_95))
		{
			if ((func_510() && TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, 1805844857) != 1) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, -251125078) != 1)
			{
				TASK::TASK_WANDER_STANDARD(iLocal_95, 1193033728, 0);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
				{
					PED::SET_PED_KEEP_TASK(iLocal_95, 1);
				}
				if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_95))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_95);
				}
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_95);
			}
			else
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_95);
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iLocal_95);
			}
		}
	}
	iLocal_48 = 0;
	if (GlobalFunc_2951(iLocal_48, 64))
	{
		Global_24596 = 0;
	}
	if (!PED::IS_PED_INJURED(iLocal_96))
	{
		TASK::CLEAR_PED_TASKS(iLocal_96);
	}
	iLocal_96 = 0;
	iLocal_295 = 0;
	if (GlobalFunc_2951(iLocal_48, 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	GlobalFunc_6533(&iLocal_48, 2048);
	GlobalFunc_968();
	if (func_510())
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(uLocal_84))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_84);
		}
	}
	iLocal_97 = 0;
	GlobalFunc_587();
	GlobalFunc_587();
	Global_24597 = 0f;
	STREAMING::CLEAR_FOCUS();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), 1);
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (func_483(256))
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 6, iLocal_85, iLocal_86, 0);
			func_189(1024);
		}
	}
	if (GlobalFunc_74("PROS_ACCEPT") && !Global_24594)
	{
		HUD::CLEAR_HELP(1);
	}
	if (Global_24598 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_24594 = 0;
	}
	func_410(uParam0, 0);
	if (func_510())
	{
		func_189(2048);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}




void func_499(bool bParam0)//Position - 0x13978
{
	if (!PED::IS_PED_INJURED(iLocal_95))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_95, 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_95, -828834893) != 1)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_95, 0, 65536);
			}
		}
		if (bParam0)
		{
			if (func_510())
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_95))
				{
					if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iLocal_95))
					{
						if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(iLocal_95)))
						{
							PED::SET_PED_KEEP_TASK(iLocal_95, 1);
						}
					}
				}
			}
			else
			{
				PED::SET_PED_KEEP_TASK(iLocal_95, 1);
			}
		}
	}
}

void func_500()//Position - 0x139EA
{
	if (!func_510())
	{
		if (iLocal_294 == 11 || iLocal_294 == 13)
		{
			return;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_95))
	{
		if (!PED::IS_PED_FLEEING(iLocal_95))
		{
			func_89(0);
			iLocal_293 = 1;
		}
		if (func_510())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_95))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_95, 0);
				PED::RESET_PED_IN_VEHICLE_CONTEXT(iLocal_95);
			}
		}
		else
		{
			PED::RESET_PED_IN_VEHICLE_CONTEXT(iLocal_95);
		}
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_95, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_98, 0) && !ENTITY::IS_ENTITY_DEAD(iLocal_98))
	{
		if (func_510())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_98))
			{
				VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_98, 0);
				VEHICLE::SET_VEHICLE_LIGHTS(iLocal_98, 3);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_98, 0);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_98, 1, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(iLocal_98, 0);
			VEHICLE::SET_VEHICLE_LIGHTS(iLocal_98, 3);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(iLocal_98, 0);
		}
	}
	func_509(iLocal_75);
	func_509(iLocal_76);
	func_509(iLocal_77);
	func_509(iLocal_78);
	func_509(iLocal_79);
	func_509(iLocal_80);
	func_509(iLocal_81);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		if (func_510() && iLocal_296 != 3)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (GlobalFunc_2951(iLocal_48, 2048))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	GlobalFunc_6533(&iLocal_48, 2048);
	PAD::ENABLE_CONTROL_ACTION(2, 19, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 37, 1);
	GlobalFunc_968();
	iLocal_295 = 0;
	if (GlobalFunc_2951(iLocal_48, 4))
	{
		GlobalFunc_6533(&iLocal_48, 4);
		Global_24594 = 0;
		Global_24595 = 0;
	}
	if (GlobalFunc_2951(iLocal_48, 8))
	{
		if (STREAMING::HAS_CLIP_SET_LOADED(func_86()))
		{
			STREAMING::REMOVE_CLIP_SET(func_86());
		}
	}
	func_508();
	func_427();
	if (((GlobalFunc_74("PROS_ACCEPT") || GlobalFunc_74("PROS_CAM_TOG")) || GlobalFunc_74("PROS_RESPONSE")) || GlobalFunc_74("PROS_CAM_OC"))
	{
		GlobalFunc_6533(&iLocal_48, 1048576);
		HUD::CLEAR_HELP(1);
	}
	GlobalFunc_2032(0);
	HUD::DISPLAY_RADAR(1);
	if (GlobalFunc_2951(iLocal_48, 8))
	{
		if (STREAMING::HAS_CLIP_SET_LOADED(func_86()))
		{
			STREAMING::REMOVE_CLIP_SET(func_86());
		}
	}
	func_124("PROSTITUTES_SOLICIT_SCENE");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_116(0);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	func_501();
	if (func_510())
	{
		if (func_483(2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
					}
				}
			}
			else if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iLocal_98))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iLocal_98))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_98, 1);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iLocal_98);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_98, 1);
				}
			}
		}
	}
	GlobalFunc_601(23, 0);
	iLocal_48 = 0;
	iLocal_50 = 0;
}

void func_501()//Position - 0x13CAE
{
	struct<8> Var0[2];
	struct<6> Var17[2];
	
	if (!func_507())
	{
		return;
	}
	if (!iLocal_46)
	{
		return;
	}
	StringCopy(&(Var0[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var0[1 /*8*/]), "Type", 32);
	StringCopy(&(Var17[0 /*6*/]), "SP", 24);
	StringCopy(&(Var17[1 /*6*/]), "????", 24);
	if (GlobalFunc_5284(275, &Var17, &Var0, 2, -1, 0, 0))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, GlobalFunc_81(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(117, func_503(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(118, func_502(), 0f);
	}
}

int func_502()//Position - 0x13D33
{
	return iLocal_45;
}

int func_503()//Position - 0x13D3D
{
	return iLocal_44;
}




int func_507()//Position - 0x13E9B
{
	if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
	{
		return 1;
	}
	return 0;
}

void func_508()//Position - 0x13EC1
{
	if (GlobalFunc_2951(iLocal_48, 128))
	{
		GlobalFunc_8523(39, 0);
		GlobalFunc_8523(40, 0);
		GlobalFunc_8523(41, 0);
		GlobalFunc_8523(42, 0);
		GlobalFunc_8523(43, 0);
		GlobalFunc_6533(&iLocal_48, 128);
	}
}

void func_509(int iParam0)//Position - 0x13EFF
{
	if (func_510())
	{
		if (func_210(iParam0))
		{
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0);
		}
	}
}

bool func_510()//Position - 0x13F1D
{
	return func_483(1);
}



