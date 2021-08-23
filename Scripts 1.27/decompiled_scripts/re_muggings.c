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
	int iLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
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
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	bool bLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	float fLocal_74 = 0f;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	float fLocal_77 = 0f;
	float fLocal_78 = 0f;
	struct<3> Local_79 = { 0, 0, 0 } ;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	struct<3> Local_86 = { 0, 0, 0 } ;
	int iLocal_89 = 0;
	struct<3> Local_90 = { 0, 0, 0 } ;
	struct<3> Local_93 = { 0, 0, 0 } ;
	struct<3> Local_96 = { 0, 0, 0 } ;
	struct<3> Local_99 = { 0, 0, 0 } ;
	char[] cLocal_102[8] = 0;
	char* sLocal_103 = NULL;
	char* sLocal_104 = NULL;
	char* sLocal_105 = NULL;
	char* sLocal_106 = NULL;
	char* sLocal_107 = NULL;
	char* sLocal_108 = NULL;
	char* sLocal_109 = NULL;
	char* sLocal_110 = NULL;
	char* sLocal_111 = NULL;
	char* sLocal_112 = NULL;
	char* sLocal_113 = NULL;
	char* sLocal_114 = NULL;
	char* sLocal_115 = NULL;
	char* sLocal_116 = NULL;
	char* sLocal_117 = NULL;
	char* sLocal_118 = NULL;
	char* sLocal_119 = NULL;
	var uLocal_120 = 0;
	struct<3> Local_121 = { 0, 0, 0 } ;
	struct<3> Local_124 = { 0, 0, 0 } ;
	struct<3> Local_127 = { 0, 0, 0 } ;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	bool bLocal_132 = 0;
	bool bLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	bool bLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	var uLocal_141 = 0;
	int iLocal_142 = 0;
	var uLocal_143 = 0;
	struct<3> Local_144 = { 0, 0, 0 } ;
	int iLocal_147 = 0;
	bool bLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	bool bLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	bool bLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	float fLocal_164 = 0f;
	struct<3> Local_165 = { 0, 0, 0 } ;
	struct<3> Local_168 = { 0, 0, 0 } ;
	struct<3> Local_171 = { 0, 0, 0 } ;
	struct<3> Local_174 = { 0, 0, 0 } ;
	struct<3> Local_177 = { 0, 0, 0 } ;
	struct<3> Local_180 = { 0, 0, 0 } ;
	struct<3> Local_183 = { 0, 0, 0 } ;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	var uLocal_190 = 0;
	int iLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 16;
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
	char[] cLocal_358[8] = 0;
	char[] cLocal_359[8] = 0;
	char[] cLocal_360[8] = 0;
	char* sLocal_361 = NULL;
	char* sLocal_362 = NULL;
	char* sLocal_363 = NULL;
	char* sLocal_364 = NULL;
	char* sLocal_365 = NULL;
	char* sLocal_366 = NULL;
	char* sLocal_367 = NULL;
	char* sLocal_368 = NULL;
	char* sLocal_369 = NULL;
	struct<3> Local_370 = { 0, 0, 0 } ;
	struct<3> Local_373 = { 0, 0, 0 } ;
	char[] cLocal_376[8] = 0;
	char[] cLocal_377[8] = 0;
	int iLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = -1;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 1000;
	var uLocal_389 = 1000;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 15;
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
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 1;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	struct<3> Local_669 = { 0, 0, 0 } ;
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
	iLocal_17 = 3;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_90 = { -131.052f, -1627f, 31.1755f };
	Local_93 = { 287.888f, -284.603f, 52.967f };
	Local_96 = { -319.66f, -832.28f, 31.61f };
	Local_99 = { 31f, -1019f, 28.5f };
	sLocal_119 = "";
	cLocal_358 = "RANDOM@MUGGING3";
	cLocal_359 = "pickup_object";
	cLocal_376 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	iLocal_378 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (iLocal_47 == 5 || iLocal_47 == 12)
		{
			func_274(25, iLocal_89);
			func_256();
		}
		else
		{
			func_256();
		}
	}
	Local_121 = { ScriptParam_0.f_1[0 /*3*/] };
	func_255(&uLocal_392, 3);
	func_254();
	if ((iLocal_89 == 1 && func_253(55)) && !func_252(55))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_211(Local_121, 25, iLocal_89, 0, 0))
	{
		func_208(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	bVar0 = false;
	while (true)
	{
		SYSTEM::WAIT(0);
		func_205(&uLocal_392);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
		func_204(uLocal_64, &uLocal_391);
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_148)
		{
			switch (iLocal_45)
			{
				case 0:
					if (func_190())
					{
						PED::SET_CREATE_RANDOM_COPS(0);
						MISC::CLEAR_AREA_OF_VEHICLES(-127.9025f, -1574.084f, 36.4128f, 10f, 0, 0, 0, 0, 0);
						iLocal_155 = 1;
						iLocal_45 = 1;
					}
					else if (func_189())
					{
						func_256();
					}
					break;
				
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						if (iLocal_140 == 0)
						{
							iLocal_140 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(99, Local_121, 0f);
						}
						PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
						switch (iLocal_47)
						{
							case 1:
								func_181();
								break;
							
							case 2:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("MUGGING_INTERACTION", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								switch (iLocal_48)
								{
									case 0:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("INITIAL_MUGGING_SEQ", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (PED::IS_PED_INJURED(iLocal_62) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 0))
										{
											bVar0 = PED::IS_PED_INJURED(iLocal_61);
											if (!OBJECT::DOES_PICKUP_EXIST(uLocal_190))
											{
											}
											if (bVar0 == 0 && iLocal_89 == 1)
											{
												PED::SET_PED_TO_RAGDOLL(iLocal_61, 500, 1000, 0, 0, 0, 0);
												TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
												PED::SET_PED_KEEP_TASK(iLocal_61, 1);
												func_180(1);
												func_175();
											}
										}
										else
										{
											func_145();
										}
										if (iLocal_668 == 1 && bLocal_148 == 1)
										{
											iLocal_47 = 4;
										}
										else if (bLocal_148)
										{
											iLocal_48 = 2;
										}
										break;
									
									case 2:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("VIC_CRY_OUT", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										func_144();
										if (iLocal_53 && !func_143())
										{
											iLocal_48 = 4;
										}
										break;
									
									case 4:
										GRAPHICS::DRAW_DEBUG_TEXT_2D("ASK_PLAYER_FOR_HELP", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
										if (func_142())
										{
											func_141();
										}
										if (bLocal_154)
										{
											iLocal_48 = 5;
										}
										if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 242628503) == 7)
										{
											TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
											TASK::TASK_LOOK_AT_ENTITY(0, iLocal_62, 5000, 0, 2);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000);
											TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_a", 4f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
											TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
											TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
											TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
										}
										break;
									
									case 5:
										func_138();
										if (!ENTITY::IS_ENTITY_DEAD(iLocal_61))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 242628503) == 7)
											{
												TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_62, 0);
												TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
												TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
												TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
												TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
												TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
												TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
											}
										}
										break;
								}
								if (func_137())
								{
									iLocal_47 = 11;
								}
								if (bLocal_148)
								{
								}
								func_136();
								if (iLocal_48 == 0)
								{
									if (func_134())
									{
										if (iLocal_142 == 4)
										{
											if (HUD::DOES_BLIP_EXIST(uLocal_65))
											{
												HUD::REMOVE_BLIP(&uLocal_65);
											}
											if (HUD::DOES_BLIP_EXIST(uLocal_64))
											{
												HUD::REMOVE_BLIP(&uLocal_64);
											}
											if (!HUD::DOES_BLIP_EXIST(iLocal_66))
											{
												iLocal_66 = func_132(uLocal_190);
											}
											iLocal_47 = 4;
										}
										else
										{
											iLocal_47 = 3;
										}
									}
									if (func_131())
									{
										func_130();
									}
								}
								if (func_129())
								{
									func_128();
									func_127();
									if (ENTITY::IS_ENTITY_AT_COORD(iLocal_61, Local_183, 7f, 7f, 7f, 0, 1, 0))
									{
										iLocal_142 = 2;
										iLocal_47 = 3;
									}
									else
									{
										iLocal_47 = 4;
									}
								}
								if (bLocal_148)
								{
									if (!PED::IS_PED_IN_COMBAT(iLocal_62, 0))
									{
										func_125(uLocal_65, &uLocal_141);
									}
									else if (HUD::DOES_BLIP_EXIST(uLocal_65))
									{
										if (HUD::GET_BLIP_COLOUR(iLocal_65) == 1)
										{
										}
										else
										{
											HUD::SET_BLIP_AS_FRIENDLY(iLocal_65, 0);
											HUD::SET_BLIP_COLOUR(iLocal_65, 1);
										}
									}
								}
								if (func_124())
								{
									iLocal_47 = 10;
								}
								break;
							
							case 4:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_123(1);
								if (func_142())
								{
									func_141();
									func_138();
								}
								if (func_137())
								{
									iLocal_47 = 11;
								}
								func_115();
								break;
							
							case 5:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER_HAS_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_123(1);
								if (!bLocal_151)
								{
									func_114(iLocal_61, &uLocal_192);
									uLocal_192 = uLocal_192;
									func_113();
									func_112();
									func_111();
									if (func_110())
									{
										func_109();
										func_175();
									}
									if (func_103(func_104()) < iLocal_191)
									{
										iLocal_47 = 12;
									}
								}
								func_49();
								break;
							
							case 10:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								func_48();
								break;
							
							case 3:
								func_47();
								break;
							
							case 11:
								func_46();
								break;
							
							case 6:
								if (func_137())
								{
									iLocal_47 = 11;
								}
								func_33();
								break;
							
							case 8:
								if (!PED::IS_PED_INJURED(iLocal_61))
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
									{
										iLocal_47 = 6;
									}
									else
									{
										func_256();
									}
								}
								break;
							
							case 9:
								GRAPHICS::DRAW_DEBUG_TEXT_2D("ABLE_TO_RETRIEVE_DROPPED_BAG", 0.02f, 0.1f, 0f, 0, 0, 255, 255);
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
								{
									if (PED::IS_PED_INJURED(iLocal_62))
									{
										if (HUD::DOES_BLIP_EXIST(iLocal_65))
										{
											HUD::REMOVE_BLIP(&iLocal_65);
										}
										if (!ENTITY::DOES_ENTITY_EXIST(iLocal_61))
										{
											if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
											{
												OBJECT::DELETE_OBJECT(&iLocal_63);
											}
											func_32();
											iLocal_55 = 1;
											func_115();
										}
									}
								}
								break;
							
							case 12:
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
								{
									OBJECT::DELETE_OBJECT(&iLocal_63);
								}
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
								func_175();
								break;
							
							case 13:
								func_31();
								break;
							}
					}
					if (bLocal_59)
					{
						if (OBJECT::DOES_PICKUP_EXIST(uLocal_190))
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_190))
							{
								if (SYSTEM::VDIST(Local_183, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) > 150f)
								{
									func_256();
								}
							}
						}
					}
					else if (bLocal_148)
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							if (iLocal_47 != 6)
							{
								if (func_30(PLAYER::PLAYER_PED_ID(), iLocal_62, 1) > 150f && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_62) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_62)))
								{
									func_29(&uLocal_379, 0, 0);
									iLocal_47 = 8;
								}
								else
								{
									func_4();
									func_3(iLocal_65, iLocal_62, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							func_29(&uLocal_379, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 1))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
								{
									if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_63, iLocal_61))
									{
										ENTITY::DETACH_ENTITY(iLocal_63, 1, 1);
									}
								}
							}
						}
					}
					if (iLocal_149)
					{
						if (!iLocal_162)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_62) && !ENTITY::IS_ENTITY_DEAD(iLocal_61))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_62, 1), ENTITY::GET_ENTITY_COORDS(iLocal_61, 1), 1) > 100f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_62, 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 100f)
								{
									TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
									iLocal_162 = 1;
								}
							}
						}
					}
					if (bLocal_148 && !iLocal_149)
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							if (iLocal_89 == 3)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_62, 1805844857) != 1)
								{
									TASK::CLEAR_PED_SECONDARY_TASK(iLocal_62);
									TASK::TASK_SMART_FLEE_PED(iLocal_62, iLocal_61, 200f, -1, 0, 0);
									PED::FORCE_PED_MOTION_STATE(iLocal_62, -530524, 1, 0, 0);
									iLocal_149 = 1;
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_62, 1805844857) != 1)
							{
								TASK::CLEAR_PED_SECONDARY_TASK(iLocal_62);
								TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
								PED::FORCE_PED_MOTION_STATE(iLocal_62, -530524, 1, 0, 0);
								iLocal_149 = 1;
							}
							if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_62, -2134635134))
							{
								TASK::TASK_SMART_FLEE_PED(iLocal_62, iLocal_61, 200f, -1, 0, 0);
								PED::FORCE_PED_MOTION_STATE(iLocal_62, -530524, 1, 0, 0);
								iLocal_149 = 1;
							}
							if (iLocal_89 == 1 || iLocal_89 == 4)
							{
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_358, sLocal_368, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_62, cLocal_358, sLocal_368) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										PED::FORCE_PED_MOTION_STATE(iLocal_62, -530524, 1, 0, 0);
										iLocal_149 = 1;
									}
								}
								if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_358, sLocal_366, 3))
								{
									if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_62, cLocal_358, sLocal_366) >= 0.922f)
									{
										TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										PED::FORCE_PED_MOTION_STATE(iLocal_62, -530524, 1, 0, 0);
										iLocal_149 = 1;
									}
								}
							}
						}
					}
					func_1();
					break;
			}
		}
		else
		{
			func_256();
		}
	}
}

void func_1()//Position - 0xA17
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
	{
		if (PED::IS_PED_INJURED(iLocal_61))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (PED::IS_PED_INJURED(iLocal_62))
				{
					func_256();
				}
			}
		}
	}
	if (PED::IS_PED_INJURED(iLocal_61))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
	}
	if (PED::IS_PED_INJURED(iLocal_62))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_65))
		{
			HUD::REMOVE_BLIP(&iLocal_65);
		}
	}
	if (!iLocal_160)
	{
		if (PED::IS_PED_INJURED(iLocal_62))
		{
			func_2(&uLocal_193, 1);
			iLocal_160 = 1;
		}
	}
	if (!iLocal_161)
	{
		if (PED::IS_PED_INJURED(iLocal_61))
		{
			func_2(&uLocal_193, 2);
			iLocal_161 = 1;
		}
	}
}

void func_2(var uParam0, int iParam1)//Position - 0xAA9
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_3(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4)//Position - 0xAC6
{
	int iVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = (fParam2 * fParam3);
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND((255f * ((fVar1 - fVar2) / (fParam2 - fVar2))));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, 1);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, 0);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1), 1);
					if (fVar1 >= fVar2 || iParam4)
					{
						iVar0 = SYSTEM::ROUND(((255f * (fVar1 - fVar2)) / (fParam2 - fVar2)));
						if (iVar0 <= 0)
						{
							iVar0 = 0;
						}
						if (iVar0 >= 255)
						{
							iVar0 = 255;
						}
						HUD::SET_BLIP_FLASHES(iParam0, 1);
						HUD::SET_BLIP_ALPHA(iParam0, (255 - iVar0));
					}
					else
					{
						HUD::SET_BLIP_FLASHES(iParam0, 0);
						HUD::SET_BLIP_ALPHA(iParam0, 255);
					}
				}
			}
		}
	}
}

void func_4()//Position - 0xC1F
{
	if (!PED::IS_PED_INJURED(iLocal_62) || !bLocal_132)
	{
		func_5(&uLocal_379, iLocal_62, 0, 0, 1, 1, 1);
	}
	else
	{
		func_29(&uLocal_379, 0, 0);
	}
}

void func_5(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0xC54
{
	func_6(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_6(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0xC6E
{
	func_7(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_7(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0xC8B
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_29(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_8(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_8(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)//Position - 0xCC3
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_28(iVar0))
	{
		func_27();
	}
	if (func_26(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_21(uParam0, bParam7, bParam9, 0))
			{
				func_17(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_13(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_28(iVar0))
							{
								func_12(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_11(1);
								}
							}
						}
					}
				}
			}
			else if (func_13(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_28(iVar0))
						{
							func_12(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_11(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
			{
				if (func_28(sParam5))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_29(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_29(uParam0, iVar0, 1);
				}
			}
			if (!func_21(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_10(uParam0))
				{
					func_9(uParam0);
				}
			}
		}
	}
	else
	{
		func_29(uParam0, iVar0, 0);
	}
}

void func_9(var uParam0)//Position - 0x102C
{
	if (func_26(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_10(var uParam0)//Position - 0x1095
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_11(bool bParam0)//Position - 0x10C0
{
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RC++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RC;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RE++;
			}
			return Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_RE;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_12(char* sParam0, int iParam1)//Position - 0x116A
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_13(char* sParam0)//Position - 0x1181
{
	if (!func_14(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_28(sParam0)) || func_28("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_34913)
	{
		case 0:
		case 3:
			if (func_11(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_11(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_14(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1219
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_16(0))
	{
		return 0;
	}
	if (func_15())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_67058)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_51932)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_15()//Position - 0x1395
{
	return MISC::GET_GAME_TIMER() <= Global_17236.f_5130 + 100;
}

int func_16(int iParam0)//Position - 0x13AA
{
	if (iParam0 == 1)
	{
		if (Global_14393.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2263, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14393.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_17(var uParam0, int iParam1, struct<3> Param2, int iParam5)//Position - 0x1404
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		func_29(uParam0, 0, 0);
	}
	if (func_20(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_18())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_18()//Position - 0x1507
{
	return func_19(PLAYER::PLAYER_ID());
}

int func_19(int iParam0)//Position - 0x1517
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_20(struct<3> Param0, struct<3> Param3)//Position - 0x1536
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

int func_21(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x155F
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_25(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_24(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_24(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_25(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_10(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_25(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_24(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_24(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_25(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_25(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_24(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_24(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_25(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_23(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_22(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_22(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_23(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_10(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_14(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_27();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_22(bool bParam0, bool bParam1, bool bParam2)//Position - 0x18CB
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_23(bool bParam0, bool bParam1, bool bParam2)//Position - 0x191D
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_24(bool bParam0, bool bParam1, bool bParam2)//Position - 0x1966
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_96)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_25(bool bParam0, bool bParam1, bool bParam2)//Position - 0x19C5
{
	if (!func_14(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_96)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x1A1B
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_27()//Position - 0x1A76
{
	MISC::SET_BIT(&Global_2264, 4);
}

bool func_28(char* sParam0)//Position - 0x1A86
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_29(var uParam0, int iParam1, int iParam2)//Position - 0x1A99
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2446554.f_4397, 25))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_11 = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_28(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_28(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

float func_30(int iParam0, int iParam1, int iParam2)//Position - 0x1B74
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, iParam2);
}

void func_31()//Position - 0x1BD0
{
	func_256();
}

void func_32()//Position - 0x1BDC
{
	if (!OBJECT::DOES_PICKUP_EXIST(uLocal_190))
	{
		if (PED::IS_PED_INJURED(iLocal_62))
		{
			Local_183 = { PED::GET_DEAD_PED_PICKUP_COORDS(iLocal_62, 1067030938, 1069547520) };
		}
		else
		{
			Local_183 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_62, 1), 1067030938, 1069547520) };
		}
		uLocal_190 = OBJECT::CREATE_PICKUP(joaat("pickup_money_wallet"), Local_183, uLocal_143, iLocal_191, 1, iLocal_84);
		iLocal_66 = func_132(uLocal_190);
		func_29(&uLocal_379, 0, 0);
		bLocal_59 = true;
	}
}

void func_33()//Position - 0x1C51
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "flee_backward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
		}
		func_34(&uLocal_193, cLocal_102, sLocal_109, 4, 0, 0, 0);
		iLocal_153 = 1;
		PED::SET_PED_KEEP_TASK(iLocal_61, 1);
		SYSTEM::WAIT(0);
		func_256();
	}
}

int func_34(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1D2E
{
	func_45(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_35(sParam2, iParam3, 0);
}

int func_35(char* sParam0, int iParam1, bool bParam2)//Position - 0x1D7C
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_44();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_43(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_42();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam2)
			{
				func_40();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_39())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_68245)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_38())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_2263, 9))
				{
					return 0;
				}
			}
			func_37();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_36();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_44();
	}
	return 0;
}

void func_36()//Position - 0x2048
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15692 = 1;
}

void func_37()//Position - 0x2078
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	MISC::CLEAR_BIT(&Global_2264, 16);
}

int func_38()//Position - 0x210D
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_39()//Position - 0x2134
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_40()//Position - 0x21CD
{
	if (func_41(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_104();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

bool func_41(int iParam0)//Position - 0x226E
{
	return Global_34913 == iParam0;
}

void func_42()//Position - 0x227C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_43(int iParam0, int iParam1)//Position - 0x22D2
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_44()//Position - 0x230D
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_45(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x2364
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = uParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

void func_46()//Position - 0x23BA
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		TASK::CLEAR_PED_TASKS(iLocal_61);
		TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_61, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			OBJECT::DELETE_OBJECT(&iLocal_63);
		}
		SYSTEM::WAIT(0);
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
	}
	if (PED::IS_PED_INJURED(iLocal_62) || PED::IS_PED_INJURED(iLocal_61))
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_65))
		{
			HUD::REMOVE_BLIP(&iLocal_65);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_190))
		{
			if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_190))
			{
				iLocal_55 = 1;
				func_115();
			}
			else
			{
				func_123(0);
				func_256();
			}
		}
		else
		{
			func_256();
		}
	}
}

void func_47()//Position - 0x2473
{
	bool bVar0;
	
	func_115();
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_190))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_190))
		{
		}
	}
	if (iLocal_142 == 1)
	{
		if (!iLocal_50)
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				TASK::CLEAR_PED_TASKS(iLocal_62);
				TASK::TASK_COMBAT_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_62, 1);
			}
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				if (OBJECT::DOES_PICKUP_EXIST(uLocal_190))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_190))
					{
						TASK::CLEAR_PED_TASKS(iLocal_61);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(uLocal_190), 1f, 20000, 0.25f, 0, 1193033728);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
					}
				}
			}
			iLocal_50 = 1;
		}
	}
	if (iLocal_142 == 2)
	{
		if (!iLocal_50)
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				TASK::CLEAR_PED_TASKS(iLocal_62);
				TASK::TASK_COMBAT_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(iLocal_62, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_62, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
			}
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				if (OBJECT::DOES_PICKUP_EXIST(uLocal_190))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_190))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_61, OBJECT::GET_PICKUP_COORDS(uLocal_190), 10f, 10f, 10f, 0, 1, 0))
						{
							if (iLocal_89 == 3)
							{
								if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "handsup_standing_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "handsup_standing_exit", 3))
								{
									TASK::CLEAR_PED_TASKS(iLocal_61);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(uLocal_190), 1f, 20000, 0.25f, 0, 1193033728);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
									iLocal_50 = 1;
								}
							}
							else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, sLocal_369, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, sLocal_365, 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, sLocal_367, 3))
							{
								TASK::CLEAR_PED_TASKS(iLocal_61);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, OBJECT::GET_PICKUP_COORDS(uLocal_190), 1f, 20000, 0.25f, 0, 1193033728);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
								iLocal_50 = 1;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
				if (bVar0)
				{
					if (iLocal_89 == 3)
					{
						if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "handsup_standing_enter", 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "handsup_standing_base", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "handsup_standing_exit", 3))
						{
							TASK::CLEAR_PED_TASKS(iLocal_61);
							TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_61, 1);
							if (HUD::DOES_BLIP_EXIST(iLocal_64))
							{
								HUD::REMOVE_BLIP(&iLocal_64);
							}
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
							iLocal_50 = 1;
							iLocal_47 = 9;
						}
					}
					else if ((!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, sLocal_369, 3) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, sLocal_365, 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, sLocal_367, 3))
					{
						TASK::CLEAR_PED_TASKS(iLocal_61);
						TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_61, 1);
						if (HUD::DOES_BLIP_EXIST(iLocal_64))
						{
							HUD::REMOVE_BLIP(&iLocal_64);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
						iLocal_50 = 1;
						iLocal_47 = 9;
					}
				}
			}
		}
	}
	if (iLocal_142 == 3)
	{
		if (!iLocal_50)
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				TASK::CLEAR_PED_TASKS(iLocal_62);
				TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_62, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_62, 0);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
			}
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				TASK::CLEAR_PED_TASKS(iLocal_61);
				TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
				PED::SET_PED_KEEP_TASK(iLocal_61, 1);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
			}
			iLocal_55 = 1;
			iLocal_50 = 1;
		}
	}
	if (iLocal_142 == 1 || iLocal_142 == 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_61))
		{
			if (iLocal_50)
			{
				if (OBJECT::DOES_PICKUP_EXIST(uLocal_190))
				{
					if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_190))
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_359, "pickup_low", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_61, cLocal_359, "pickup_low") > 0.5f)
							{
								if (OBJECT::DOES_PICKUP_EXIST(uLocal_190))
								{
									if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_190))
									{
										func_34(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0);
										OBJECT::REMOVE_PICKUP(uLocal_190);
										bLocal_51 = true;
									}
								}
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 242628503) == 7)
						{
							TASK::CLEAR_PED_TASKS(iLocal_61);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
							TASK::TASK_PLAY_ANIM(0, cLocal_359, "pickup_low", 8f, -8f, -1, 0, 0, 0, 0, 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
							PED::SET_PED_KEEP_TASK(iLocal_61, 1);
						}
					}
					else if (bLocal_51)
					{
						PED::SET_PED_MONEY(iLocal_61, iLocal_191);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
						func_180(3);
						func_175();
					}
					else
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_61, 1);
						if (HUD::DOES_BLIP_EXIST(iLocal_64))
						{
							HUD::REMOVE_BLIP(&iLocal_64);
						}
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
						iLocal_50 = 1;
						iLocal_47 = 12;
					}
				}
				else if (bLocal_51)
				{
					PED::SET_PED_MONEY(iLocal_61, iLocal_191);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
					func_180(3);
					func_175();
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_61, 1);
					if (HUD::DOES_BLIP_EXIST(iLocal_64))
					{
						HUD::REMOVE_BLIP(&iLocal_64);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
					iLocal_50 = 1;
					iLocal_47 = 12;
				}
			}
		}
		else
		{
			iLocal_47 = 9;
		}
	}
}

void func_48()//Position - 0x29A4
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		TASK::CLEAR_PED_TASKS(iLocal_61);
		TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_61, 1);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
	}
}

void func_49()//Position - 0x29DB
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	struct<2> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	struct<3> Var15;
	int iVar18;
	int iVar19;
	
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (!bLocal_151)
		{
			if (iLocal_152)
			{
				Var15 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				iVar18 = 1;
				if (iLocal_89 == 1)
				{
					if (Var15.f_2 > 33.5f)
					{
						iVar18 = 0;
					}
				}
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 5f, 5f, 5f, 0, 1, 0) && iVar18 == 1)
				{
					if (func_101(2))
					{
						HUD::CLEAR_HELP(1);
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (func_100(1, 0, 1))
						{
							if (!func_99())
							{
								if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
								{
									func_91(1, 1, 1, 0);
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										while (!func_90(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uLocal_76, 1, 1056964608, 0, 1) || func_143())
										{
											HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
											SYSTEM::WAIT(0);
										}
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
										}
									}
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
									if (!PED::IS_PED_INJURED(iLocal_61))
									{
										PED::SET_PED_CAN_RAGDOLL(iLocal_61, 0);
									}
									HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
									EVENT::REMOVE_ALL_SHOCKING_EVENTS(0);
									EVENT::REMOVE_SHOCKING_EVENT(iLocal_140);
									if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
									{
										func_88();
									}
									bLocal_151 = true;
									SYSTEM::SETTIMERA(0);
								}
							}
						}
					}
				}
				else
				{
					func_86(ENTITY::GET_ENTITY_COORDS(iLocal_61, 1), &uLocal_75, &uLocal_76);
				}
			}
			else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 15f, 15f, 15f, 0, 1, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
				if (iLocal_46 == 2)
				{
					TASK::TASK_PLAY_ANIM(0, cLocal_376, "RETURNING_FRONT_A", 8f, -1000f, -1, 0, 0, 0, 0, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
				PED::FORCE_PED_MOTION_STATE(iLocal_61, -668482597, 0, 0, 0);
				iLocal_152 = 1;
			}
		}
		if (bLocal_151)
		{
			switch (iLocal_150)
			{
				case 0:
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							func_83(iLocal_61, &Local_124, &Local_127, cLocal_360, sLocal_362);
							if (iLocal_89 == 1)
							{
								if (Local_127.f_2 > 225f && Local_127.f_2 < 265f)
								{
									if (Local_127.f_2 < 245f)
									{
										Local_127.f_2 = 225f;
									}
									else
									{
										Local_127.f_2 = 265f;
									}
								}
								else if (Local_127.f_2 > 45f && Local_127.f_2 < 85f)
								{
									if (Local_127.f_2 < 65f)
									{
										Local_127.f_2 = 45f;
									}
									else
									{
										Local_127.f_2 = 85f;
									}
								}
							}
							Local_124.f_2 = (Local_124.f_2 + 2f);
							MISC::GET_GROUND_Z_FOR_3D_COORD(Local_124, &(Local_124.f_2));
							Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_360, sLocal_362, Local_124, Local_127, 0f, 2) };
							Var10 = { Var1 - Local_124 };
							Var10.f_2 = 0f;
							fVar13 = SYSTEM::VMAG(Var10);
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var1.f_2));
							fVar14 = (Local_124.f_2 - Var1.f_2);
							Local_127.x = MISC::ATAN2(fVar14, fVar13);
							if (Local_127.x > 30f || Local_127.x < -30f)
							{
								Local_127.x = 0f;
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
						{
							if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
							{
								iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &uVar4, &Var7);
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_124, (Var7.f_1 + 1.5f), (Var7.f_1 + 1.5f), 3f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(iVar0, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_360, sLocal_362, Local_124, Local_127, 0, 2), (Var7.f_1 + 1f), (Var7.f_1 + 1f), 3f, 0, 1, 0))
								{
									if (iLocal_89 == 1)
									{
										if (Local_127.f_2 > 40f && Local_127.f_2 < 220f)
										{
											Local_79 = { -148.3897f, -1647.215f, 31.5867f };
											fLocal_78 = 331.9427f;
										}
										else
										{
											Local_79 = { -129.5632f, -1622.282f, 31.1122f };
											fLocal_78 = 148.9075f;
										}
									}
									else if (iLocal_89 == 3)
									{
										if (Local_127.f_2 > 160f && Local_127.f_2 < 340f)
										{
											Local_79 = { -319.709f, -837.0066f, 30.449f };
											fLocal_78 = 61.7986f;
										}
										else
										{
											Local_79 = { -346.8735f, -833.8024f, 30.4135f };
											fLocal_78 = 269.6216f;
										}
									}
									else if (iLocal_89 == 4)
									{
										if (Local_127.f_2 > 240f || Local_127.f_2 < 60f)
										{
											Local_79 = { 37.222f, -1005.04f, 28.4648f };
											fLocal_78 = 156.7986f;
										}
										else
										{
											Local_79 = { 29.9887f, -1033.184f, 28.3794f };
											fLocal_78 = 344.6216f;
										}
									}
									else
									{
										fLocal_78 = ENTITY::GET_ENTITY_HEADING(iVar0);
										Local_79 = { func_81(Local_124, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_360, sLocal_362, Local_124, Local_127, 0, 2)) };
									}
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
									{
										ENTITY::SET_ENTITY_COORDS(iVar0, Local_79, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(iVar0, fLocal_78);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
									}
								}
							}
						}
						MISC::CLEAR_AREA_OF_OBJECTS(Local_124, 20f, 2);
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_124, 20f, 0);
						MISC::CLEAR_AREA(Local_124, 2f, 1, 1, 0, 0);
						WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), 1);
						iLocal_63 = OBJECT::CREATE_OBJECT(iLocal_84, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1, 1, 0);
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
						}
						uLocal_130 = PED::CREATE_SYNCHRONIZED_SCENE(Local_124, Local_127, 2);
						PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_130, 0);
						uLocal_131 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", 0);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_131, uLocal_130, sLocal_363, cLocal_360);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_130, cLocal_360, sLocal_361, 1000f, -8f, 0, 0, 1148846080, 0);
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_61);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_61, uLocal_130, cLocal_360, sLocal_362, 1000f, -8f, 0, 0, 1148846080, 0);
						}
						CAM::SET_CAM_ACTIVE(uLocal_131, 1);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						func_34(&uLocal_193, cLocal_102, sLocal_114, 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_150++;
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				
				case 1:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_130) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_130) > 0.9f) || func_79(1000))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_CAM_ACTIVE(uLocal_131, 0);
						CAM::DESTROY_CAM(uLocal_131, 0);
						func_78();
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_61);
							PED::SET_PED_MONEY(iLocal_61, (iLocal_191 - (iLocal_191 / 10)));
							Var1 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_360, sLocal_362, Local_124, Local_127, 1f, 2) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var1, &(Var1.f_2));
							ENTITY::SET_ENTITY_COORDS(iLocal_61, Var1, 1, 0, 0, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_61, 0);
							Var1 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_360, sLocal_362, Local_124, Local_127, 1f, 2) };
							ENTITY::SET_ENTITY_HEADING(iLocal_61, Var1.f_2);
							if (iLocal_89 == 4)
							{
								if (func_77(Var1.f_2, 0f, 90f))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 38.2412f, -992.2134f, 28.4317f, 1f, 20000, 0.25f, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_61), 1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 58.803f, -1067.711f, 28.4411f, 1f, 20000, 0.25f, 0, 1193033728);
									TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_61), 1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
								}
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
								TASK::TASK_WANDER_STANDARD(0, Var1.f_2, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
							}
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_61, cLocal_377, 1048576000);
							PED::FORCE_PED_MOTION_STATE(iLocal_61, -668482597, 1, 0, 0);
							PED::SET_PED_KEEP_TASK(iLocal_61, 1);
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
						{
							OBJECT::DELETE_OBJECT(&iLocal_63);
						}
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							PED::SET_PED_MONEY(iLocal_61, (iLocal_191 - (iLocal_191 / 10)));
							PED::SET_PED_CAN_RAGDOLL(iLocal_61, 1);
						}
						iVar19 = (iLocal_191 / 100);
						iVar19 *= 90;
						SYSTEM::WAIT(0);
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
						func_52(func_104(), 1, iVar19);
						func_51(joaat("rc_wallets_returned"), 1);
						func_180(3);
						func_175();
					}
					else if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), -3856156))
					{
						if (!PED::IS_PED_INJURED(iLocal_61) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_63, PLAYER::PLAYER_PED_ID()))
							{
								ENTITY::DETACH_ENTITY(iLocal_63, 0, 1);
								if (PED::IS_PED_MALE(iLocal_61))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_63, iLocal_61, PED::GET_PED_BONE_INDEX(iLocal_61, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_63, iLocal_61, PED::GET_PED_BONE_INDEX(iLocal_61, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
								if (!iLocal_60)
								{
									if (func_34(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0) || func_50())
									{
										iLocal_60 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_60)
					{
						if (func_34(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0) || func_50())
						{
							iLocal_60 = 1;
						}
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				}
		}
	}
	else
	{
		func_256();
	}
}

int func_50()//Position - 0x332E
{
	if (Global_15692 == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_51(int iParam0, int iParam1)//Position - 0x3353
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

int func_52(int iParam0, int iParam1, int iParam2)//Position - 0x3376
{
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 3)
	{
		return 0;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 4)
	{
		return 0;
	}
	return func_53(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17, 0, iParam1, iParam2, 0);
}

int func_53(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x33BF
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_76();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_75(99, 1);
					func_51(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_51(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_51(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_61(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_60(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_60(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_51(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_51(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_51(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_60(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_51(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_51(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_51(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_59(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_75(95, iParam3);
					break;
				
				case 1:
					func_75(97, iParam3);
					break;
				
				case 2:
					func_75(96, iParam3);
					break;
			}
			func_75(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_56(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_56(iVar1);
	}
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_51(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_51(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_51(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_2[Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/]++;
		Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1++;
		if (Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_55(iParam0);
	if (Global_34913 == 15)
	{
		func_54(0);
	}
	return 1;
}

void func_54(bool bParam0)//Position - 0x39BE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_55(int iParam0)//Position - 0x3C40
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_56(int iParam0)//Position - 0x3C9A
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_58() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_58() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_57(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_57(int iParam0)//Position - 0x3D5B
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_58()//Position - 0x3DD4
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_59(int iParam0)//Position - 0x3DE1
{
	func_75(93, iParam0);
	func_75(29, iParam0);
	func_75(30, iParam0);
}

bool func_60(int iParam0)//Position - 0x3E01
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_58() /*8053*/].f_5756.f_10, iParam0);
}

int func_61(bool bParam0)//Position - 0x3E3D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_74(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_62(27, 1);
	return 1;
}

int func_62(int iParam0, int iParam1)//Position - 0x3EF4
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_63(iParam0, iParam1);
}

int func_63(int iParam0, int iParam1)//Position - 0x3F0F
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_73(&Global_2544859))
	{
		if (func_71(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_64(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_64(var uParam0, int iParam1)//Position - 0x3F93
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	func_67(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_65(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_65(var uParam0, int iParam1)//Position - 0x401C
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_71(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_66(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_66(var uParam0, int iParam1)//Position - 0x406C
{
	return (*uParam0)[iParam1] == 61;
}

void func_67(var uParam0)//Position - 0x407D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_70(uParam0, iVar0);
		iVar0++;
	}
	func_68(&(uParam0->f_62), (8f - 0.5f));
}

void func_68(var uParam0, float fParam1)//Position - 0x40B4
{
	uParam0->f_1 = (func_69(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_69(bool bParam0)//Position - 0x40E2
{
	int iVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_70(var uParam0, int iParam1)//Position - 0x412A
{
	(*uParam0)[iParam1] = 61;
}

bool func_71(var uParam0, int iParam1)//Position - 0x413A
{
	return func_72(uParam0, iParam1) != -1;
}

int func_72(var uParam0, int iParam1)//Position - 0x414C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_73(var uParam0)//Position - 0x4179
{
	return uParam0->f_68 == 1;
}

int func_74(int iParam0, int iParam1)//Position - 0x4187
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_75(int iParam0, int iParam1)//Position - 0x41D8
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_76()//Position - 0x4235
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

int func_77(float fParam0, float fParam1, float fParam2)//Position - 0x42AA
{
	float fVar0;
	float fVar1;
	
	fVar1 = (fParam1 - fParam2);
	if (fVar1 < 0f)
	{
		fVar1 = (fVar1 + 360f);
	}
	fVar0 = (fParam1 + fParam2);
	if (fVar0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	if (fVar0 > fVar1)
	{
		if (fParam0 < fVar0 && fParam0 > fVar1)
		{
			return 1;
		}
	}
	else if (fParam0 < fVar0 || fParam0 > fVar1)
	{
		return 1;
	}
	return 0;
}

void func_78()//Position - 0x431F
{
	var uVar0;
	
	uVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1115815936, 1, 2);
	CAM::SET_CAM_ACTIVE(uVar0, 1);
}

int func_79(int iParam0)//Position - 0x435D
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_27) > iParam0)
		{
			Global_26 = MISC::GET_GAME_TIMER();
		}
		Global_27 = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_26) > iParam0)
		{
			if (func_80())
			{
				Global_26 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_80()//Position - 0x43A7
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

Vector3 func_81(struct<3> Param0, struct<3> Param3)//Position - 0x43D9
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	var uVar19;
	struct<3> Var22;
	struct<3> Var25;
	var uVar28;
	var uVar29;
	
	iVar13 = 0;
	iVar14 = 1;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iVar0), &Var7, &Var10);
	PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, 3, &Var4, 1, 1077936128, 0);
	if (SYSTEM::VDIST(Param0, -3039.655f, 602.4346f, 6.5719f) <= 25f)
	{
		Var1 = { -3045.49f, 604.46f, 7.02f };
		iVar13 = 8;
	}
	else if (SYSTEM::VDIST(Param0, 288.06f, -1257.1f, 28.44f) <= 25f)
	{
		Var1 = { 278.97f, -1255.06f, 28.88f };
		iVar13 = 8;
	}
	while (iVar13 < 8)
	{
		switch (iVar13)
		{
			case 0:
				if (SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f)) < SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var10.f_1 + IntToFloat(iVar14)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						Var22 = { func_82(Var1, 0f, Var10) };
						Var25 = { func_82(Var1, 0f, Var7) };
						uVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 2;
						}
						else
						{
							iVar14++;
							iVar13 = 0;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 2:
				if (SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f)) < SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, (Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, 0f, -(Var10.f_1 - IntToFloat(iVar14)), 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						Var22 = { func_82(Var1, 0f, Var10) };
						Var25 = { func_82(Var1, 0f, Var7) };
						uVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 3:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 4;
						}
						else
						{
							iVar14++;
							iVar13 = 2;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 4:
				if (SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var10.x + IntToFloat(iVar14)), 0f, 0f)) < SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var10.x + IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var10.x + IntToFloat(iVar14)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						Var22 = { func_82(Var1, 0f, Var10) };
						Var25 = { func_82(Var1, 0f, Var7) };
						uVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 5:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 6;
						}
						else
						{
							iVar14++;
							iVar13 = 4;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 6:
				if (SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var10.x - IntToFloat(iVar14)), 0f, 0f)) < SYSTEM::VDIST(Var4, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var10.x - IntToFloat(iVar14)), 0f, 0f)))
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, (Var10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				else
				{
					Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, -(Var10.x - IntToFloat(iVar14)), 0f, 0f) };
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						Var22 = { func_82(Var1, 0f, Var10) };
						Var25 = { func_82(Var1, 0f, Var7) };
						uVar29 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Var22, Var25, 511, iVar0, 7);
						iVar13++;
					}
					else
					{
						iVar13 = 8;
					}
				}
				else
				{
					iVar13 = 8;
				}
				break;
			
			case 7:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar29, &iVar15, &uVar19, &uVar16, &uVar28) == 2)
				{
					if (iVar15 != 0)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param0, 1) <= 5f || MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, Param3, 1) <= 5f)
					{
						if (iVar14 >= 3)
						{
							iVar14 = 1;
							iVar13 = 8;
						}
						else
						{
							iVar14++;
							iVar13 = 6;
						}
					}
					else
					{
						iVar13 = 8;
					}
				}
				break;
			
			case 8:
				break;
		}
		SYSTEM::WAIT(0);
	}
	return Var1;
}

Vector3 func_82(struct<3> Param0, float fParam3, struct<2> Param4, var uParam6)//Position - 0x49D6
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	
	uVar3 = fParam3;
	fVar4 = SYSTEM::COS(uVar3);
	fVar5 = SYSTEM::SIN(uVar3);
	Var0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	Var0.f_1 = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	Var6 = { Param0 + Var0 };
	return Var6;
}

void func_83(int iParam0, var uParam1, var uParam2, char[4] cParam3, char* sParam4)//Position - 0x4A23
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	var uVar19;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 1;
	*uParam1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	uParam2->f_2 = func_85(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar3 = func_85(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar4 = func_85(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	Var16 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0) };
	if (STREAMING::HAS_ANIM_DICT_LOADED(cParam3))
	{
		Var13 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(cParam3, sParam4, *uParam1, *uParam2, 0, 2) };
	}
	else
	{
		Var13 = { *uParam1 + Vector(0f, 5f, 5f) };
	}
	while (iVar0 < 2)
	{
		switch (iVar0)
		{
			case 0:
				if (iVar1 > 20)
				{
					uParam2->f_2 = func_84(ENTITY::GET_ENTITY_COORDS(iParam0, 0), *uParam1, 1);
					*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 0), uParam2->f_2, Var16) };
					iVar0 = 2;
				}
				else
				{
					uVar5 = SHAPETEST::START_SHAPE_TEST_CAPSULE(*uParam1, Var13 + Vector(-1f, 0f, 0f), 0.5f, 17, 0, 4);
					iVar0++;
				}
				break;
			
			case 1:
				if (SHAPETEST::GET_SHAPE_TEST_RESULT(uVar5, &iVar6, &Var10, &uVar7, &uVar19) == 2)
				{
					if (iVar6 != 0)
					{
						if (Var10.f_2 > (uParam1->f_2 + 8.5f))
						{
							iVar0++;
						}
						else
						{
							if (iVar1 <= 3)
							{
								fVar4 = (fVar4 + 7.5f);
							}
							else
							{
								fVar4 = (fVar3 - (7.5f * IntToFloat(iVar2)));
								iVar2++;
							}
							*uParam1 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), fVar4, Var16) };
							iVar1++;
							iVar0 = 0;
						}
					}
					else
					{
						if (iVar1 > 0)
						{
							uParam2->f_2 = func_84(Var13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
						}
						iVar0++;
					}
				}
				break;
			
			case 2:
				break;
		}
		SYSTEM::WAIT(0);
	}
}

float func_84(struct<2> Param0, Vector3 vParam2, struct<2> Param3, var uParam5, int iParam6)//Position - 0x4BDB
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

float func_85(int iParam0, int iParam1, int iParam2)//Position - 0x4C40
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	Var3 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	return func_84(Var0, Var3, iParam2);
}

void func_86(struct<3> Param0, var uParam3, var uParam4)//Position - 0x4C6C
{
	bool bVar0;
	struct<3> Var1;
	float fVar4;
	
	bVar0 = false;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Param0 };
		fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
		if (func_87(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
		if (func_87(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 30f)
		{
			*uParam3 = (6f * 4f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 20f)
		{
			*uParam3 = (6f * 3f);
		}
		else if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 10f)
		{
			*uParam3 = (6f * 2f);
		}
		else
		{
			*uParam3 = 6f;
		}
		*uParam4 = ((*uParam3 / 1.33f) - 1f);
	}
	else
	{
		*uParam3 = 6f;
		*uParam4 = ((*uParam3 / 1.33f) - 1f);
	}
}

int func_87(int iParam0, float fParam1, float fParam2)//Position - 0x4D6D
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
		fVar2 = (fParam1 - fParam2);
		if (fVar2 < 0f)
		{
			fVar2 = (fVar2 + 360f);
		}
		fVar1 = (fParam1 + fParam2);
		if (fVar1 >= 360f)
		{
			fVar1 = (fVar1 - 360f);
		}
		if (fVar1 > fVar2)
		{
			if (fVar0 < fVar1 && fVar0 > fVar2)
			{
				return 1;
			}
		}
		else if (fVar0 < fVar1 || fVar0 > fVar2)
		{
			return 1;
		}
	}
	return 0;
}

void func_88()//Position - 0x4DF4
{
	Global_14558 = 0;
	func_89();
}

void func_89()//Position - 0x4E04
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

int func_90(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x4E25
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	if ((MISC::GET_GAME_TIMER() - Global_28) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, uParam1, iParam2, iParam4);
	}
	Global_28 = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_91(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x4FA7
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_98(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_14393.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_38())
			{
				Global_14393.f_1 = 3;
			}
			Global_15692 = 5;
		}
		func_97(1, iParam3, iParam2);
		Global_54756 = 1;
		Global_67061 = 1;
		Global_68243 = 1;
	}
	else
	{
		func_98(0);
		HUD::THEFEED_RESUME();
		Global_54756 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_97(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_92(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_68243 = 0;
	}
}

int func_92(int iParam0)//Position - 0x5078
{
	if (func_94(iParam0, 0))
	{
		return 1;
	}
	if (func_93())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2414009[iParam0 /*254*/].f_194, 2))
	{
		return 1;
	}
	return 0;
}

bool func_93()//Position - 0x50B9
{
	return MISC::IS_BIT_SET(Global_2359301, 3);
}

bool func_94(int iParam0, int iParam1)//Position - 0x50CA
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_95(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1582596[iParam0 /*324*/].f_180 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_95(int iParam0, bool bParam1)//Position - 0x5115
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_96();
	}
	if (Global_1315877[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312731[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_96()//Position - 0x5156
{
	return Global_1312737;
}

int func_97(int iParam0, var uParam1, var uParam2)//Position - 0x5162
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_98(int iParam0)//Position - 0x5193
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2263, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2263, 13);
	}
}

int func_99()//Position - 0x51B6
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (func_143())
		{
			return 1;
		}
	}
	return 0;
}

int func_100(bool bParam0, bool bParam1, bool bParam2)//Position - 0x51D7
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

bool func_101(int iParam0)//Position - 0x52B7
{
	return func_28(func_102(iParam0));
}

char* func_102(int iParam0)//Position - 0x52C9
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_103(int iParam0)//Position - 0x530B
{
	var uVar0;
	
	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 1:
			STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
			return uVar0;
		
		case 2:
			STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
			return uVar0;
		
		default:
	}
	return 0;
}

int func_104()//Position - 0x5363
{
	func_105();
	return Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
}

void func_105()//Position - 0x537C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_108(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_107(PLAYER::PLAYER_PED_ID());
			if (func_106(iVar0) && (!func_41(14) || Global_96306))
			{
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != iVar0 && func_106(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213))
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
				}
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = iVar0;
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 != 145)
			{
				Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3215 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213;
			}
			return;
		}
	}
	Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213 = 145;
}

bool func_106(int iParam0)//Position - 0x5479
{
	return iParam0 < 3;
}

int func_107(int iParam0)//Position - 0x5485
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_108(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_108(int iParam0)//Position - 0x54C2
{
	if (func_106(iParam0))
	{
		return Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_109()//Position - 0x54EC
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_61, 1);
		SYSTEM::WAIT(0);
	}
}

int func_110()//Position - 0x551C
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 3f, 3f, 3f };
	Var3 = { -3f, -3f, -3f };
	if (PED::IS_PED_INJURED(iLocal_61))
	{
		return 1;
	}
	else
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_61, 31086, 0f, 0f, 0f), 5f, 1))
		{
			return 1;
		}
		Var0 = { Var0 + PED::GET_PED_BONE_COORDS(iLocal_61, 31086, 0f, 0f, 0f) };
		Var3 = { Var3 + PED::GET_PED_BONE_COORDS(iLocal_61, 31086, 0f, 0f, 0f) };
		if ((MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_smokegrenade"), 1) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(Var3, Var0, joaat("weapon_stickybomb"), 1))
		{
			return 1;
		}
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(iLocal_61, 31086, 0f, 0f, 0f), 3f))
		{
			return 1;
		}
	}
	return 0;
}

void func_111()//Position - 0x5605
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_61))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_61, 1)) > (fLocal_164 + 50f))
		{
			func_175();
		}
		else if (func_103(func_104()) < iLocal_191)
		{
			func_175();
		}
	}
}

void func_112()//Position - 0x564F
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, Global_18, 0, 1, 0))
		{
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 3000, 0, 2);
			TASK::TASK_LOOK_AT_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 3000, 0, 2);
		}
	}
}

void func_113()//Position - 0x5694
{
	float fVar0;
	
	if (iLocal_89 == 1)
	{
		fVar0 = 13f;
	}
	if (iLocal_89 == 4)
	{
		fVar0 = 5.75f;
	}
	if (iLocal_89 == 1 || iLocal_89 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_165, Local_168, fVar0, 0, 1, 0))
		{
			if (!iLocal_156)
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_156 = 1;
					iLocal_157 = 0;
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_171, Local_174, fVar0, 0, 1, 0))
		{
			if (!iLocal_157)
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 0);
					iLocal_157 = 1;
					iLocal_156 = 0;
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_177, Local_180, fVar0, 0, 1, 0))
		{
			if (!iLocal_158)
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					iLocal_158 = 1;
				}
			}
		}
	}
	if (!iLocal_159)
	{
		if (!PED::IS_PED_INJURED(iLocal_61))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 25f, 25f, 5f, 0, 1, 0) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (func_34(&uLocal_193, cLocal_102, sLocal_107, 4, 0, 0, 0) || func_50())
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "flee_forward_outro_shopkeeper", 3))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						if (iLocal_46 == 2)
						{
							TASK::TASK_PLAY_ANIM(0, cLocal_376, "RETURNING_FRONT_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
						}
						TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
						iLocal_159 = 1;
					}
				}
			}
		}
	}
}

void func_114(int iParam0, var uParam1)//Position - 0x5816
{
	float fVar0;
	
	fVar0 = 65f;
	switch (*uParam1)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_120);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
				SYSTEM::SETTIMERA(0);
				*uParam1++;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1++;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (!PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), fVar0))
				{
					*uParam1 = 0;
				}
			}
			break;
	}
}

void func_115()//Position - 0x58CE
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_190))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_61))
		{
			fLocal_164 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_61, 1));
		}
		func_51(joaat("rc_wallets_recovered"), 1);
		PAD::SET_PAD_SHAKE(0, 200, 250);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			OBJECT::DELETE_OBJECT(&iLocal_63);
		}
		func_118();
		func_117(&uLocal_391);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_61, 0);
			}
		}
		func_123(0);
		OBJECT::REMOVE_PICKUP(uLocal_190);
		if (!iLocal_55)
		{
			iLocal_47 = 5;
			func_116(2);
		}
		else
		{
			iLocal_47 = 12;
		}
	}
}

void func_116(int iParam0)//Position - 0x5965
{
	switch (iParam0)
	{
		case 0:
			if (Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_12(func_102(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_97349, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_12(func_102(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLIP_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_97349, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_12(func_102(iParam0), -1);
					Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_ITEM_HELP_COUNT++;
					MISC::SET_BIT(&Global_97349, 2);
				}
			}
			break;
	}
}

void func_117(var uParam0)//Position - 0x5A46
{
	*uParam0 = -99;
}

void func_118()//Position - 0x5A54
{
	iLocal_66 = 0;
	if (!HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_61))
		{
			iLocal_64 = func_119(iLocal_61, 0, 0);
		}
	}
}

int func_119(int iParam0, bool bParam1, int iParam2)//Position - 0x5A7D
{
	iParam2 = iParam2;
	return func_120(iParam0, bParam1, 145);
}

int func_120(var uParam0, bool bParam1, int iParam2)//Position - 0x5A93
{
	var uVar0;
	
	uVar0 = func_121(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

int func_121(int iParam0, bool bParam1, bool bParam2)//Position - 0x5AE5
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_122(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_122(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_122(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_122(bool bParam0, float fParam1, float fParam2)//Position - 0x5B89
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_123(bool bParam0)//Position - 0x5BA0
{
	if (!PED::IS_PED_INJURED(iLocal_61) && iLocal_89 == 4)
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "flee_forward_loop_shopkeeper", 3))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
			TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			if (bParam0)
			{
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
			TASK::CLEAR_PED_TASKS(iLocal_61);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
		}
	}
}

int func_124()//Position - 0x5C86
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_63))
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_63, iLocal_61))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 18f, 18f, 18f, 0, 1, 0))
					{
						if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
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

void func_125(int iParam0, var uParam1)//Position - 0x5CE4
{
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		if (MISC::GET_GAME_TIMER() > *uParam1 + 500)
		{
			if (HUD::GET_BLIP_COLOUR(iParam0) == 1)
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, true);
			}
			else
			{
				HUD::SET_BLIP_AS_FRIENDLY(iParam0, false);
				HUD::SET_BLIP_COLOUR(iParam0, 1);
			}
			*uParam1 = MISC::GET_GAME_TIMER();
		}
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_126(0))
		{
			func_116(1);
		}
	}
}

bool func_126(int iParam0)//Position - 0x5D42
{
	return MISC::IS_BIT_SET(Global_97349, iParam0);
}

void func_127()//Position - 0x5D54
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 8f, 8f, 18f, 0, 1, 0) || ENTITY::IS_ENTITY_ON_SCREEN(iLocal_61))
		{
			HUD::CLEAR_PRINTS();
		}
	}
}

void func_128()//Position - 0x5D95
{
	if (HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		HUD::REMOVE_BLIP(&iLocal_65);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_63))
		{
			ENTITY::DETACH_ENTITY(iLocal_63, 1, 1);
			OBJECT::DELETE_OBJECT(&iLocal_63);
			func_32();
		}
	}
	else
	{
		func_32();
	}
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (func_34(&uLocal_193, cLocal_102, sLocal_106, 4, 0, 0, 0) || func_50())
		{
			if (iLocal_46 == 2)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_62, 128, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_62, 2, 1);
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_62, 1, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_62, 1);
		}
	}
}

int func_129()//Position - 0x5E34
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_62))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (bLocal_148)
			{
				return 1;
			}
		}
	}
	else if (bLocal_148)
	{
		return 1;
	}
	return 0;
}

void func_130()//Position - 0x5E6A
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		TASK::CLEAR_PED_TASKS(iLocal_61);
		TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_61, 1);
		SYSTEM::WAIT(0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
	}
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		func_34(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_62, uLocal_120);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
		PED::SET_PED_KEEP_TASK(iLocal_62, 1);
		SYSTEM::WAIT(0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_62, 0);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
	}
}

int func_131()//Position - 0x5F03
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (PED::IS_PED_RAGDOLL(iLocal_61))
		{
			return 1;
		}
	}
	return 0;
}

int func_132(var uParam0)//Position - 0x5F23
{
	return func_133(uParam0);
}

int func_133(var uParam0)//Position - 0x5F31
{
	var uVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_PICKUP(uParam0);
	HUD::SET_BLIP_SCALE(uVar0, func_122(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

int func_134()//Position - 0x5F69
{
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_190))
	{
		if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_190))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_62))
				{
					if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 18f, 18f, 18f, 0, 1, 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_142 = 1;
							return 1;
						}
					}
				}
				if (func_135())
				{
					SYSTEM::SETTIMERB(0);
					iLocal_142 = 2;
					return 1;
				}
				if (PED::IS_PED_INJURED(iLocal_62))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
						{
							if (!PED::IS_PED_INJURED(iLocal_61))
							{
								TASK::CLEAR_PED_TASKS(iLocal_61);
								PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_61, 0);
							}
						}
						SYSTEM::SETTIMERB(0);
						iLocal_142 = 2;
						return 1;
					}
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 1))
				{
					SYSTEM::SETTIMERB(0);
					iLocal_142 = 2;
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							TASK::CLEAR_PED_TASKS(iLocal_61);
							PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_61, 0);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_62))
					{
						TASK::CLEAR_PED_TASKS(iLocal_62);
						TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_62, 1);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_62, 0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
					}
					return 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_61))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 5.3f, 5.3f, 6f, 0, 1, 0))
					{
						if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_61) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_61))
							{
								SYSTEM::SETTIMERB(0);
								iLocal_142 = 3;
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

int func_135()//Position - 0x610A
{
	if (!PED::IS_PED_INJURED(iLocal_62))
	{
		if (PED::CAN_PED_SEE_HATED_PED(iLocal_62, PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 20f, 20f, 20f, 0, 1, 0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_62) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_62))
				{
					return 1;
				}
			}
		}
		if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_62))
		{
			return 1;
		}
	}
	return 0;
}

void func_136()//Position - 0x6194
{
	if (iLocal_57)
	{
		if (!iLocal_58)
		{
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				if (WEAPON::IS_PED_ARMED(iLocal_62, 4))
				{
					if ((func_34(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0) || func_50()) || func_50())
					{
						iLocal_58 = 1;
					}
				}
				else if ((func_34(&uLocal_193, cLocal_102, sLocal_106, 4, 0, 0, 0) || func_50()) || func_50())
				{
					iLocal_58 = 1;
				}
			}
		}
	}
	else if (func_135())
	{
		if ((func_34(&uLocal_193, cLocal_102, sLocal_115, 4, 0, 0, 0) || func_50()) || func_50())
		{
			if (WEAPON::IS_PED_ARMED(iLocal_62, 4))
			{
				TASK::TASK_COMBAT_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			else
			{
				func_128();
			}
			iLocal_57 = 1;
		}
	}
}

int func_137()//Position - 0x625E
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 20f, 20f, 20f, 0, 1, 0))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_61) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_61))
				{
					return 1;
				}
			}
		}
		if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
		{
			if (iVar0 == joaat("weapon_stungun"))
			{
				if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_61, joaat("weapon_stungun"), 0))
				{
					return 1;
				}
			}
		}
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_61, 31086, 0f, 0f, 0f), 3f, 1))
	{
		return 1;
	}
	return 0;
}

void func_138()//Position - 0x631A
{
	if (iLocal_46 == 2)
	{
	}
	if (!func_143())
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_61))
				{
					func_139(iLocal_61, "GENERIC_CURSE_MED", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
	if (!bLocal_59)
	{
		if (func_30(PLAYER::PLAYER_PED_ID(), iLocal_62, 1) > 200f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_62) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_62))
			{
				iLocal_47 = 8;
			}
		}
	}
}

void func_139(int iParam0, char* sParam1, int iParam2)//Position - 0x6393
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, sParam1, func_140(iParam2), 1);
}

int func_140(int iParam0)//Position - 0x63AA
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_141()//Position - 0x659F
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (!bLocal_52)
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "flee_backward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "flee_backward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
				iLocal_163 = 3;
				bLocal_52 = true;
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_61, cLocal_358, "flee_forward_loop_shopkeeper", 3))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "flee_forward_outro_shopkeeper", 8f, -4f, -1, 8, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
				iLocal_163 = 3;
				bLocal_52 = true;
			}
			else
			{
				bLocal_52 = true;
			}
		}
		if (bLocal_52)
		{
			if (!iLocal_135)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 7f, 7f, 7f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 242628503) == 1)
					{
						if (TASK::GET_SEQUENCE_PROGRESS(iLocal_61) == iLocal_163)
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
							func_34(&uLocal_193, cLocal_102, sLocal_105, 4, 0, 0, 0);
							bLocal_154 = true;
							iLocal_135 = 1;
						}
					}
					else
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_61, 1);
						func_34(&uLocal_193, cLocal_102, sLocal_105, 4, 0, 0, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
						TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
						SYSTEM::SETTIMERA(0);
						bLocal_154 = true;
						iLocal_135 = 1;
					}
				}
			}
		}
	}
}

int func_142()//Position - 0x6800
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 12f, 12f, 5f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_143()//Position - 0x6832
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_144()//Position - 0x6854
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (!bLocal_133)
		{
			iLocal_137 = MISC::GET_GAME_TIMER();
			bLocal_133 = true;
		}
		if (bLocal_133)
		{
			iLocal_138 = MISC::GET_GAME_TIMER();
			if (!iLocal_53)
			{
				if ((iLocal_138 - iLocal_137) > 500)
				{
					if (!func_143())
					{
						if (func_34(&uLocal_193, cLocal_102, sLocal_104, 4, 0, 0, 0) || func_50())
						{
							if (iLocal_46 == 2)
							{
								if (!PED::IS_PED_INJURED(iLocal_61))
								{
									if (!PED::IS_PED_INJURED(iLocal_62))
									{
									}
								}
							}
							if (iLocal_46 == 1)
							{
								if (!PED::IS_PED_INJURED(iLocal_61))
								{
								}
							}
							if (HUD::DOES_BLIP_EXIST(iLocal_64))
							{
								HUD::REMOVE_BLIP(&iLocal_64);
							}
							iLocal_53 = 1;
						}
					}
				}
			}
		}
	}
}

void func_145()//Position - 0x68F0
{
	float fVar0;
	
	if (!bLocal_54)
	{
		if (iLocal_89 == 1)
		{
			fVar0 = 1f;
		}
		if (iLocal_89 == 2)
		{
			fVar0 = 4f;
		}
		if (iLocal_89 != 2)
		{
			if (!PED::IS_PED_INJURED(iLocal_61) && !PED::IS_PED_INJURED(iLocal_62))
			{
				if (!func_172())
				{
					if (func_159())
					{
						func_256();
					}
				}
				if (func_158())
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_67))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_62))
						{
							iLocal_67 = func_119(iLocal_62, 1, 0);
						}
						func_150(1);
					}
				}
				if (func_149())
				{
					func_148();
					if (iLocal_89 == 3)
					{
						if (!iLocal_56)
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
							TASK::TASK_LOOK_AT_ENTITY(0, iLocal_62, 16000, 0, 2);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_86, 1f, 20000, fVar0, 4, 1193033728);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
							iLocal_56 = 1;
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
						TASK::TASK_LOOK_AT_ENTITY(0, iLocal_61, -1, 0, 2);
						TASK::TASK_PLAY_ANIM(0, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT", "exit_forward", 1000f, -1000f, -1, 512, 0, 0, 0, 0);
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_86, iLocal_61, 1f, 0, 1.5f, 1082130432, 1, 0, 0, -957453492, 20000);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_61, -1, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_62, uLocal_120);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
						SYSTEM::SETTIMERA(0);
						bLocal_54 = true;
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
					}
					else
					{
						if (iLocal_89 == 1)
						{
							sLocal_110 = sLocal_110;
						}
						func_147();
						bLocal_54 = true;
						bLocal_148 = true;
						SYSTEM::SETTIMERA(0);
					}
				}
			}
		}
	}
	if (bLocal_54)
	{
		if (!iLocal_134)
		{
			if (SYSTEM::TIMERA() > 1000)
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 60f, 60f, 50f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_61))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_61, iLocal_62, 0);
					}
					iLocal_134 = 1;
				}
				else
				{
					iLocal_134 = 1;
				}
			}
		}
		if (iLocal_134 && !bLocal_132)
		{
			if (!PED::IS_PED_INJURED(iLocal_61) && !PED::IS_PED_INJURED(iLocal_62))
			{
				if (func_34(&uLocal_193, cLocal_102, sLocal_103, 4, 0, 0, 0) || func_50())
				{
					TASK::CLEAR_PED_TASKS(iLocal_61);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
					TASK::TASK_PLAY_ANIM(0, cLocal_358, "handsup_standing_enter", 8f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, cLocal_358, "handsup_standing_base", 8f, -4f, 7000, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, cLocal_358, "handsup_standing_exit", 8f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
					func_148();
					uLocal_190 = OBJECT::CREATE_PICKUP(joaat("pickup_money_purse"), OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_61, 0f, 2.5f, 0f), 1067030938, 1069547520), uLocal_143, iLocal_191, 1, iLocal_84);
					bLocal_132 = true;
				}
			}
		}
		if (bLocal_132)
		{
			if (PED::IS_PED_INJURED(iLocal_62))
			{
				func_146();
			}
			else
			{
				switch (iLocal_666)
				{
					case 0:
						Local_669 = { OBJECT::GET_PICKUP_COORDS(uLocal_190) - Vector(0f, 0f, 0.75f) };
						if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_190))
						{
							TASK::CLEAR_PED_TASKS(iLocal_62);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Local_669, iLocal_61, 2f, 0, 0.1f, 1082130432, 1, 0, 0, -957453492, 20000);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_62, uLocal_120);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
							iLocal_667 = MISC::GET_GAME_TIMER();
						}
						iLocal_666 = 1;
						break;
					
					case 1:
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_62, 242628503) == 7)
						{
							Local_669 = { OBJECT::GET_PICKUP_COORDS(uLocal_190) - Vector(0f, 0f, 0.75f) };
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_190))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_62, 1), Local_669, 1) > 1f)
								{
									iLocal_668 = 1;
									iLocal_666 = 4;
								}
								else
								{
									TASK::CLEAR_PED_TASKS(iLocal_62);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
									TASK::TASK_PLAY_ANIM(0, cLocal_359, "pickup_low", 8f, -4f, -1, 8224, 0, 0, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_62, uLocal_120);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
									iLocal_666 = 2;
								}
							}
							else
							{
								iLocal_666 = 4;
							}
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_667) > 15000)
						{
							iLocal_668 = 1;
							iLocal_666 = 4;
						}
						break;
					
					case 2:
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_62, cLocal_359, "pickup_low") > 0.5f)
						{
							if (OBJECT::DOES_PICKUP_OBJECT_EXIST(uLocal_190))
							{
								OBJECT::REMOVE_PICKUP(uLocal_190);
								iLocal_666 = 3;
							}
							else
							{
								iLocal_666 = 4;
							}
						}
						break;
					
					case 3:
						if ((ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "pickup_low", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_62, cLocal_359, "pickup_low") > 0.58f) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_62, cLocal_359, "pickup_low", 3))
						{
							iLocal_666 = 4;
						}
						break;
					
					case 4:
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_62, 1);
						TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 50f, -1, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_62, 0, 0);
						bLocal_148 = true;
						break;
					}
				}
			}
	}
}

void func_146()//Position - 0x6D83
{
	if (HUD::DOES_BLIP_EXIST(iLocal_64))
	{
		HUD::REMOVE_BLIP(&iLocal_64);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_66))
	{
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_190))
		{
			iLocal_66 = func_132(uLocal_190);
		}
	}
	iLocal_47 = 4;
}

void func_147()//Position - 0x6DB8
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (PED::IS_PED_FACING_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 90f))
	{
		TASK::TASK_PLAY_ANIM(iLocal_62, cLocal_358, sLocal_366, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_46 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, sLocal_367, 8f, -8f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
		}
		else if (iLocal_89 == 4)
		{
			iLocal_378 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(39.7889f, -1014.392f, 28.4847f, 4f, 4f, 4f, 0f, 0, 4);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "flee_backward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "flee_backward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, sLocal_367, 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
		}
	}
	else
	{
		TASK::TASK_PLAY_ANIM(iLocal_62, cLocal_358, sLocal_368, 1000f, -1000f, -1, 8, 0, 0, 0, 0);
		if (iLocal_46 == 2)
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, sLocal_369, 8f, -8f, -1, 8, 0.1f, 0, 0, 0);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, -94.8543f, -1582.686f, 30.2862f, 3000);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_B", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_C", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, "RANDOM@BICYCLE_THIEF@IDLE_A", "IDLE_A", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
		}
		else if (iLocal_89 == 4)
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "flee_forward_intro_shopkeeper", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "flee_forward_loop_shopkeeper", 8f, -4f, -1, 9, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
		}
		else
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, sLocal_369, 8f, -4f, -1, 8, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_a", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_b", 8f, -4f, -1, 0, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(0, cLocal_358, "agitated_loop_c", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
		}
	}
}

void func_148()//Position - 0x7226
{
	if (HUD::DOES_BLIP_EXIST(iLocal_67))
	{
		HUD::REMOVE_BLIP(&iLocal_67);
	}
	if (!HUD::DOES_BLIP_EXIST(iLocal_65))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_62))
		{
			iLocal_65 = func_119(iLocal_62, 1, 0);
		}
	}
}

int func_149()//Position - 0x725B
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_89 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -170.3051f, -1670.362f, 53.73083f, -91.94043f, -1578.828f, 24.96221f, 18f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_89 == 2)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_62, 1), 1) < 30f)
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_89 == 4)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -41.32678f, -959.6443f, 38.4444f, 119.9208f, -1021.231f, 21.85738f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 95f)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_150(int iParam0)//Position - 0x7335
{
	if (func_152())
	{
		Global_97343 = 1;
		Global_97340 = MISC::GET_GAME_TIMER();
		if (func_151(Global_97342))
		{
			func_116(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_151(Global_97342))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

int func_151(int iParam0)//Position - 0x7388
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

int func_152()//Position - 0x73B7
{
	switch (func_153(&Global_24503, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_153(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x73ED
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_157(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_155(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_154(uParam0, iParam4);
		}
	}
	return 2;
}

void func_154(var uParam0, int iParam1)//Position - 0x7524
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_155(int iParam0)//Position - 0x7573
{
	return func_156(iParam0, Global_34913);
}

int func_156(int iParam0, int iParam1)//Position - 0x7584
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_157(int iParam0)//Position - 0x7765
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_155(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_158()//Position - 0x7787
{
	int iVar0;
	
	iVar0 = 0;
	if (iLocal_89 == 1)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -179.103f, -1682.421f, 53.693f, -83.53208f, -1567.584f, 25.18745f, 40.75f, 0, 0, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_89 == 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 353.1506f, -296.1962f, 62.76571f, 210.4646f, -243.5106f, 46.13731f, 123.75f, 0, 1, 0))
		{
			iVar0 = 1;
		}
	}
	else if (iLocal_89 == 3)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -325.7037f, -829.31f, 30.5812f, 1) < 105f)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_159()//Position - 0x783D
{
	if (!func_155(5))
	{
		return 1;
	}
	if (func_168())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_167())
		{
			return 0;
		}
	}
	if (func_160(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_160(float fParam0, bool bParam1)//Position - 0x789F
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_106(func_104()))
		{
			iVar36 = func_166();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar32 /*6*/], 3))
				{
					func_161(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_161(int iParam0, var uParam1)//Position - 0x7956
{
	switch (iParam0)
	{
		case 0:
			func_162(uParam1, "Abigail1", func_164(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 1:
			func_162(uParam1, "Abigail2", func_164(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 2:
			func_162(uParam1, "Barry1", func_164(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 3:
			func_162(uParam1, "Barry2", func_164(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 4:
			func_162(uParam1, "Barry3", func_164(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 5:
			func_162(uParam1, "Barry3A", func_164(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 6:
			func_162(uParam1, "Barry3C", func_164(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 7:
			func_162(uParam1, "Barry4", func_164(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_163(iParam0), 0, 0);
			break;
		
		case 8:
			func_162(uParam1, "Dreyfuss1", func_164(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 9:
			func_162(uParam1, "Epsilon1", func_164(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 10:
			func_162(uParam1, "Epsilon2", func_164(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 11:
			func_162(uParam1, "Epsilon3", func_164(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 12:
			func_162(uParam1, "Epsilon4", func_164(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 13:
			func_162(uParam1, "Epsilon5", func_164(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 14:
			func_162(uParam1, "Epsilon6", func_164(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 15:
			func_162(uParam1, "Epsilon7", func_164(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 16:
			func_162(uParam1, "Epsilon8", func_164(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 17:
			func_162(uParam1, "Extreme1", func_164(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 18:
			func_162(uParam1, "Extreme2", func_164(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 19:
			func_162(uParam1, "Extreme3", func_164(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 20:
			func_162(uParam1, "Extreme4", func_164(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 21:
			func_162(uParam1, "Fanatic1", func_164(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_163(iParam0), 1, 0);
			break;
		
		case 22:
			func_162(uParam1, "Fanatic2", func_164(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_163(iParam0), 1, 0);
			break;
		
		case 23:
			func_162(uParam1, "Fanatic3", func_164(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_163(iParam0), 0, 1);
			break;
		
		case 24:
			func_162(uParam1, "Hao1", func_164(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_163(iParam0), 0, 1);
			break;
		
		case 25:
			func_162(uParam1, "Hunting1", func_164(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 26:
			func_162(uParam1, "Hunting2", func_164(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 27:
			func_162(uParam1, "Josh1", func_164(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 28:
			func_162(uParam1, "Josh2", func_164(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 29:
			func_162(uParam1, "Josh3", func_164(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 30:
			func_162(uParam1, "Josh4", func_164(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 31:
			func_162(uParam1, "Maude1", func_164(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 32:
			func_162(uParam1, "Minute1", func_164(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 33:
			func_162(uParam1, "Minute2", func_164(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 34:
			func_162(uParam1, "Minute3", func_164(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 35:
			func_162(uParam1, "MrsPhilips1", func_164(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 36:
			func_162(uParam1, "MrsPhilips2", func_164(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 37:
			func_162(uParam1, "Nigel1", func_164(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 38:
			func_162(uParam1, "Nigel1A", func_164(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 39:
			func_162(uParam1, "Nigel1B", func_164(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_163(iParam0), 1, 1);
			break;
		
		case 40:
			func_162(uParam1, "Nigel1C", func_164(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_163(iParam0), 1, 1);
			break;
		
		case 41:
			func_162(uParam1, "Nigel1D", func_164(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_163(iParam0), 1, 1);
			break;
		
		case 42:
			func_162(uParam1, "Nigel2", func_164(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 43:
			func_162(uParam1, "Nigel3", func_164(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_163(iParam0), 1, 1);
			break;
		
		case 44:
			func_162(uParam1, "Omega1", func_164(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 45:
			func_162(uParam1, "Omega2", func_164(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 46:
			func_162(uParam1, "Paparazzo1", func_164(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 47:
			func_162(uParam1, "Paparazzo2", func_164(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 48:
			func_162(uParam1, "Paparazzo3", func_164(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 49:
			func_162(uParam1, "Paparazzo3A", func_164(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 50:
			func_162(uParam1, "Paparazzo3B", func_164(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 51:
			func_162(uParam1, "Paparazzo4", func_164(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 52:
			func_162(uParam1, "Rampage1", func_164(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 54:
			func_162(uParam1, "Rampage3", func_164(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 55:
			func_162(uParam1, "Rampage4", func_164(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 56:
			func_162(uParam1, "Rampage5", func_164(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_163(iParam0), 0, 0);
			break;
		
		case 53:
			func_162(uParam1, "Rampage2", func_164(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_163(iParam0), 1, 0);
			break;
		
		case 57:
			func_162(uParam1, "TheLastOne", func_164(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 58:
			func_162(uParam1, "Tonya1", func_164(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 59:
			func_162(uParam1, "Tonya2", func_164(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 60:
			func_162(uParam1, "Tonya3", func_164(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 61:
			func_162(uParam1, "Tonya4", func_164(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		case 62:
			func_162(uParam1, "Tonya5", func_164(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_163(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_162(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x8ACC
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_163(int iParam0)//Position - 0x8B5D
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_164(int iParam0)//Position - 0x8EA3
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_165(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_165(int iParam0)//Position - 0x8ED9
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_166()//Position - 0x9324
{
	func_105();
	switch (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3213)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_167()//Position - 0x936A
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_168()//Position - 0x9387
{
	if (func_171() && !func_167())
	{
		return 1;
	}
	if (func_170() && func_169())
	{
		return 1;
	}
	return 0;
}

bool func_169()//Position - 0x93B9
{
	return Global_97071 > 0;
}

int func_170()//Position - 0x93C7
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_171()//Position - 0x93DC
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_172()//Position - 0x9402
{
	if ((Global_97342 == func_173() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_97343)
	{
		return 1;
	}
	return 0;
}

int func_173()//Position - 0x942D
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_174(Var0);
	return uVar16;
}

int func_174(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x944A
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

void func_175()//Position - 0x9624
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
	}
	func_274(25, iLocal_89);
	func_179();
	func_176();
	func_256();
}

void func_176()//Position - 0x9655
{
	func_177();
}

int func_177()//Position - 0x9662
{
	if (func_178(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_178(bool bParam0)//Position - 0x96AD
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

int func_179()//Position - 0x96D8
{
	return 1;
}

void func_180(int iParam0)//Position - 0x96E1
{
	Global_97339 = iParam0;
}

void func_181()//Position - 0x96EF
{
	switch (iLocal_139)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_62))
			{
				TASK::TASK_PLAY_ANIM(iLocal_62, cLocal_358, "IG_1_guy_stickup_loop", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				TASK::TASK_PLAY_ANIM(iLocal_61, cLocal_360, "ortega_stand_loop_ort", 8f, -4f, -1, 1, 0, 0, 0, 0);
			}
			iLocal_139++;
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					if (func_158())
					{
						if (!HUD::DOES_BLIP_EXIST(iLocal_67))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_62))
							{
								iLocal_67 = func_119(iLocal_62, 1, 0);
							}
							if (!func_172())
							{
								func_150(1);
							}
						}
					}
					if (func_149())
					{
						func_34(&uLocal_193, cLocal_102, "REMG2_ARG", 4, 0, 0, 0);
						func_148();
						iLocal_186 = MISC::GET_GAME_TIMER();
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
						iLocal_189 = 1;
						iLocal_139++;
					}
				}
				else if (!PED::IS_PED_INJURED(iLocal_61))
				{
					TASK::TASK_SMART_FLEE_COORD(iLocal_61, Local_144, 250f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_61, 1);
					SYSTEM::WAIT(0);
					func_187();
				}
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_186())
				{
					iLocal_139 = 4;
				}
				if (func_135())
				{
					iLocal_139 = 9;
				}
				if (func_185())
				{
					iLocal_139 = 6;
				}
				if (func_184())
				{
					iLocal_139 = 4;
				}
			}
			if (!func_172())
			{
				if (func_159())
				{
					func_256();
				}
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 6f, 6f, 15f, 0, 1, 0))
					{
						if (PED::CAN_PED_SEE_HATED_PED(iLocal_62, PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 3f, 3f, 15f, 0, 1, 0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iLocal_62, 65f))
							{
								iLocal_188 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								func_34(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_139++;
							}
							else
							{
								iLocal_188 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								func_34(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_139++;
							}
						}
					}
				}
			}
			if (func_186() || func_184())
			{
				iLocal_139 = 4;
			}
			if (func_135())
			{
				iLocal_139 = 9;
			}
			if (func_185())
			{
				iLocal_139 = 6;
			}
			break;
		
		case 3:
			if ((iLocal_187 - iLocal_188) > 12500)
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					iLocal_139 = 4;
				}
			}
			if ((iLocal_187 - iLocal_188) > 5500)
			{
				if (!bLocal_136)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							func_34(&uLocal_193, cLocal_102, sLocal_113, 4, 0, 0, 0);
							TASK::TASK_COMBAT_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 0, 16);
							bLocal_136 = true;
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
							{
								if (!PED::IS_PED_INJURED(iLocal_61))
								{
									TASK::TASK_SMART_FLEE_COORD(iLocal_61, Local_144, 250f, -1, 0, 0);
									PED::SET_PED_KEEP_TASK(iLocal_61, 1);
									SYSTEM::WAIT(0);
								}
								if (!PED::IS_PED_INJURED(iLocal_61))
								{
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_64))
								{
									HUD::REMOVE_BLIP(&iLocal_64);
								}
							}
						}
					}
				}
			}
			if (bLocal_136)
			{
				iLocal_139 = 10;
			}
			else
			{
				if (func_186())
				{
					iLocal_139 = 4;
				}
				if (func_135())
				{
					iLocal_139 = 9;
				}
				if (func_185())
				{
					iLocal_139 = 6;
				}
				if (func_183())
				{
					iLocal_139 = 9;
				}
				if (func_184())
				{
					iLocal_139 = 4;
				}
			}
			break;
		
		case 10:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (PED::IS_PED_INJURED(iLocal_62) || func_30(PLAYER::PLAYER_PED_ID(), iLocal_62, 1) > 100f)
				{
					func_182();
					func_187();
				}
			}
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 1))
					{
						TASK::CLEAR_PED_TASKS(iLocal_61);
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
							TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_62, 0), 150f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
							PED::SET_PED_KEEP_TASK(iLocal_61, 1);
						}
						iLocal_147 = 1;
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_61);
						TASK::TASK_SMART_FLEE_PED(iLocal_61, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_61, 1);
						if (HUD::DOES_BLIP_EXIST(iLocal_64))
						{
							HUD::REMOVE_BLIP(&iLocal_64);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					TASK::CLEAR_PED_TASKS(iLocal_62);
					TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_62, 1);
					if (HUD::DOES_BLIP_EXIST(iLocal_65))
					{
						HUD::REMOVE_BLIP(&iLocal_65);
					}
				}
			}
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				func_88();
			}
			SYSTEM::WAIT(0);
			if (!iLocal_147)
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					func_34(&uLocal_193, cLocal_102, "REMG2_FKIT", 4, 0, 0, 0);
				}
				func_256();
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERB() > 250)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
				{
					if (!PED::IS_PED_INJURED(iLocal_62))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_62, 17, 1);
						PED::SET_PED_RESET_FLAG(iLocal_62, 156, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_62, uLocal_120);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
						PED::SET_PED_KEEP_TASK(iLocal_62, 1);
						SYSTEM::WAIT(0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_62, 0);
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_62);
						func_34(&uLocal_193, cLocal_102, sLocal_112, 4, 0, 0, 0);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
				{
					if (!PED::IS_PED_INJURED(iLocal_61))
					{
						if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 1))
						{
							TASK::CLEAR_PED_TASKS(iLocal_61);
							iLocal_147 = 1;
						}
					}
				}
				if (!iLocal_147)
				{
					SYSTEM::WAIT(0);
					func_256();
				}
			}
			break;
		
		case 6:
			if (SYSTEM::TIMERA() > 500)
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
					{
						if (!PED::IS_PED_INJURED(iLocal_61))
						{
							TASK::CLEAR_PED_TASKS(iLocal_61);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
							PED::SET_PED_KEEP_TASK(iLocal_61, 1);
							ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_61);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
					{
						if (!PED::IS_PED_INJURED(iLocal_62))
						{
							func_34(&uLocal_193, cLocal_102, sLocal_113, 4, 0, 0, 0);
							TASK::CLEAR_PED_TASKS(iLocal_62);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 10000, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_62, uLocal_120);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
							PED::SET_PED_KEEP_TASK(iLocal_62, 1);
						}
					}
				}
				SYSTEM::WAIT(0);
				func_256();
			}
			break;
		
		case 7:
			SYSTEM::SETTIMERA(0);
			iLocal_139++;
			break;
		
		case 8:
			if (SYSTEM::TIMERA() > 200)
			{
				func_187();
			}
			break;
		
		case 9:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_62))
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					PED::SET_PED_RESET_FLAG(iLocal_62, 156, 1);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iLocal_62, 50f, 0);
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						func_88();
					}
					SYSTEM::WAIT(0);
					func_34(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
			{
				if (!PED::IS_PED_INJURED(iLocal_61))
				{
					TASK::CLEAR_PED_TASKS(iLocal_61);
					TASK::TASK_COWER(iLocal_61, 2000);
					iLocal_147 = 1;
				}
			}
			break;
	}
	if (iLocal_139 != 8 && iLocal_147)
	{
		iLocal_139 = 7;
	}
	iLocal_187 = MISC::GET_GAME_TIMER();
	if (iLocal_189 && !bLocal_136)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_62) && ENTITY::DOES_ENTITY_EXIST(iLocal_62))
		{
			if (!PED::IS_PED_INJURED(iLocal_61) && !PED::IS_PED_INJURED(iLocal_62))
			{
				if ((((iLocal_187 - iLocal_186) > 12000 && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 3f, 3f, 35f, 0, 1, 0)) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_62)) && !func_143())
				{
					if ((func_34(&uLocal_193, cLocal_102, "REMG2_FKIT", 4, 0, 0, 0) || func_50()) || func_50())
					{
						PED::SET_PED_RESET_FLAG(iLocal_62, 156, 1);
						PED::SET_PED_SHOOTS_AT_COORD(iLocal_62, PED::GET_PED_BONE_COORDS(iLocal_61, 31086, 0f, 0f, 0f), 0);
						TASK::CLEAR_PED_TASKS(iLocal_61);
						ENTITY::SET_ENTITY_HEALTH(iLocal_61, 99);
						TASK::TASK_SMART_FLEE_COORD(iLocal_62, Local_144, 250f, -1, 0, 0);
						PED::SET_PED_KEEP_TASK(iLocal_62, 1);
						func_256();
					}
				}
			}
		}
	}
}

void func_182()//Position - 0x9EDF
{
	Global_14558 = 0;
	func_44();
}

int func_183()//Position - 0x9EEF
{
	if (!PED::IS_PED_INJURED(iLocal_61) && !PED::IS_PED_INJURED(iLocal_62))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61))
		{
			return 1;
		}
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 2f, 2f, 2f, 0, 1, 0))
		{
		}
	}
	return 0;
}

int func_184()//Position - 0x9F42
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_61))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 20f, 20f, 20f, 0, 1, 0))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_61) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_61))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	else
	{
		return 1;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_62))
	{
		if (func_135())
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_185()//Position - 0x9FCE
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_61, 5.3f, 5.3f, 6f, 0, 1, 0))
		{
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_61, PLAYER::PLAYER_PED_ID(), 17))
			{
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_INJURED(iLocal_62))
					{
						if (!PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_62))
						{
							if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_61) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_61))
							{
								SYSTEM::SETTIMERB(0);
								return 1;
							}
						}
					}
					else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_61) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_61))
					{
						SYSTEM::SETTIMERB(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_186()//Position - 0xA08C
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_61))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(iLocal_61, 31086, 0f, 0f, 0f), 5f, 1))
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_187()//Position - 0xA0C3
{
	if (!PED::IS_PED_INJURED(iLocal_61))
	{
		if (!PED::IS_PED_RAGDOLL(iLocal_61))
		{
			if (func_172())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 242628503) == 7 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 474215631) == 7)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						func_88();
					}
					if (!PED::IS_PED_INJURED(iLocal_62))
					{
						if (!PED::IS_PED_FLEEING(iLocal_61))
						{
							TASK::TASK_SMART_FLEE_PED(iLocal_61, iLocal_62, 150f, -1, 0, 0);
						}
					}
					else if (iLocal_46 == 3)
					{
						if (!PED::IS_PED_FLEEING(iLocal_61))
						{
							TASK::TASK_SMART_FLEE_COORD(iLocal_61, Local_121, 150f, -1, 0, 0);
						}
					}
					PED::SET_PED_KEEP_TASK(iLocal_61, 1);
					SYSTEM::WAIT(0);
					func_34(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0);
					SYSTEM::WAIT(0);
					if (iLocal_191 > 0)
					{
						PED::SET_PED_MONEY(PLAYER::PLAYER_PED_ID(), (iLocal_191 / 100) * 90);
						func_52(func_104(), 1, iLocal_191);
						SYSTEM::WAIT(0);
						func_188(func_104(), 1, (iLocal_191 / 10), 0, 1);
					}
					func_180(3);
					func_175();
				}
			}
			else
			{
				func_256();
			}
		}
		else
		{
			func_256();
		}
	}
	else
	{
		func_256();
	}
}

void func_188(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xA1D1
{
	int iVar0;
	int iVar1;
	
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_53(Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_189()//Position - 0xA2B8
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_167())
		{
			return 0;
		}
	}
	if (func_168())
	{
		return 1;
	}
	if (func_160(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_190()//Position - 0xA33E
{
	func_201();
	func_200(&uLocal_392, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	func_200(&uLocal_392, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	func_200(&uLocal_392, cLocal_376);
	func_200(&uLocal_392, cLocal_360);
	func_198(&uLocal_392, iLocal_82);
	func_198(&uLocal_392, iLocal_83);
	func_198(&uLocal_392, iLocal_84);
	func_200(&uLocal_392, cLocal_359);
	func_200(&uLocal_392, cLocal_358);
	func_200(&uLocal_392, cLocal_377);
	func_200(&uLocal_392, "RANDOM@BICYCLE_THIEF@IDLE_A");
	if (func_194(&uLocal_392))
	{
		func_191();
		return 1;
	}
	return 0;
}

void func_191()//Position - 0xA3CB
{
	iLocal_61 = PED::CREATE_PED(26, iLocal_82, Local_68, fLocal_74, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_61, 1);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_61, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 8, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 128, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_61, 512, 1);
	AUDIO::STOP_PED_SPEAKING(iLocal_61, 1);
	PED::SET_PED_INCREASED_AVOIDANCE_RADIUS(iLocal_61);
	PED::SET_PED_MONEY(iLocal_61, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_61, 1);
	if (iLocal_82 == joaat("a_m_y_genstreet_01"))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 3, 0, 3, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 4, 0, 2, 0);
	}
	if (iLocal_82 == joaat("a_m_y_business_02"))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 0, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 3, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 4, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_61, 8, 0, 0, 0);
	}
	PED::ADD_RELATIONSHIP_GROUP("theAssailant", &iLocal_85);
	iLocal_62 = PED::CREATE_PED(26, iLocal_83, Local_71, fLocal_77, 1, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_62, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_62, 1);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_62, 1, 0);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_62, joaat("weapon_pistol"), -1, 1, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_62, 13, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_62, 17, 0);
	PED::SET_PED_DIES_WHEN_INJURED(iLocal_62, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_62, 42, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_62, 137, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_62, 128, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_62, 2, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_62, iLocal_85);
	AUDIO::STOP_PED_SPEAKING(iLocal_62, 1);
	if (!MISC::IS_STRING_NULL(sLocal_119))
	{
		AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_61, sLocal_119);
	}
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_62, sLocal_118);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 45677184, iLocal_85);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1191392768, iLocal_85);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_85, 45677184);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_85, 1191392768);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_85, 1862763509);
	switch (func_104())
	{
		case 0:
			func_193(&uLocal_193, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			func_193(&uLocal_193, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			func_193(&uLocal_193, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	func_193(&uLocal_193, 1, iLocal_62, sLocal_117, 0, 1);
	func_193(&uLocal_193, 2, iLocal_61, sLocal_116, 0, 1);
	if (iLocal_46 == 2)
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_62, 1, 0);
	}
	if (iLocal_89 == 1 || iLocal_89 == 4)
	{
		func_192();
	}
	if (iLocal_89 == 3)
	{
		Local_124 = { -325.4189f, -828.8596f, 31.1f };
		Local_127 = { 0f, 0f, 180f };
		uLocal_130 = PED::CREATE_SYNCHRONIZED_SCENE(Local_124, Local_127, 2);
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_62, uLocal_130, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE", "base", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (iLocal_89 == 4)
	{
		PATHFIND::DISABLE_NAVMESH_IN_AREA(Vector(28.5315f, -1027.565f, 37.1197f) - Vector(1f, 1f, 1f), Vector(28.5315f, -1027.565f, 37.1197f) + Vector(1f, 1f, 1f), 1);
	}
}

void func_192()//Position - 0xA68B
{
	struct<3> Var0;
	
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_62, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_358, sLocal_364, Local_370, Local_373, 0, 2), 0, 0, 1);
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_358, sLocal_364, Local_370, Local_373, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	ENTITY::SET_ENTITY_HEADING(iLocal_62, Var0.f_2);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_61, PED::GET_ANIM_INITIAL_OFFSET_POSITION(cLocal_358, sLocal_365, Local_370, Local_373, 0, 2), 0, 0, 1);
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(cLocal_358, sLocal_365, Local_370, Local_373, 0, 2) };
	if (Var0.f_2 < 0f)
	{
		Var0.f_2 = (Var0.f_2 + 360f);
	}
	ENTITY::SET_ENTITY_HEADING(iLocal_61, Var0.f_2);
	TASK::TASK_PLAY_ANIM(iLocal_62, cLocal_358, sLocal_364, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(iLocal_61, cLocal_358, sLocal_365, 1000f, -1000f, -1, 9, 0, 0, 0, 0);
}

void func_193(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xA781
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_194(var uParam0)//Position - 0xA81C
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
			if (!func_195(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_271 = 0;
	return 1;
}

bool func_195(var uParam0)//Position - 0xA880
{
	return func_196(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_196(var uParam0, char[4] cParam1, var uParam2)//Position - 0xA897
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		if (MISC::IS_BIT_SET(uParam0, 29))
		{
			switch (func_197(uParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(uParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(uParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(cParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(cParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(uParam2, cParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(cParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(cParam1, MISC::IS_BIT_SET(uParam0, 27));
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

int func_197(var uParam0)//Position - 0xA98A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::IS_BIT_SET(uParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_198(var uParam0, int iParam1)//Position - 0xA9B6
{
	func_199(uParam0, 0, iParam1, "NULL", 0);
}

void func_199(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4)//Position - 0xA9CA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], iParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (iParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (iParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_271)
	{
		uParam0->f_271 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], iParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_200(var uParam0, char* sParam1)//Position - 0xAAB4
{
	func_199(uParam0, 1, -1, sParam1, 0);
}

void func_201()//Position - 0xAAC7
{
	func_254();
	MISC::SET_BIT(&uLocal_143, 3);
	MISC::SET_BIT(&uLocal_143, 4);
	MISC::SET_BIT(&uLocal_143, 1);
	if (iLocal_89 == 1)
	{
		cLocal_358 = "RANDOM@MUGGING1";
		sLocal_364 = "STRUGGLE_Loop_A_Thief";
		sLocal_365 = "STRUGGLE_Loop_A_Shopkeeper";
		sLocal_367 = "FLEE_BACKWARD_Shopkeeper";
		sLocal_366 = "FLEE_BACKWARD_Thief";
		sLocal_369 = "FLEE_FORWARD_Shopkeeper";
		sLocal_368 = "FLEE_FORWARD_Thief";
		func_203();
		iLocal_191 = 200;
		iLocal_47 = 2;
		Local_144 = { -132.2607f, -1628.336f, 31.2107f };
		iLocal_82 = joaat("a_m_y_business_02");
		iLocal_83 = joaat("g_m_y_strpunk_01");
		Local_68 = { -138.814f, -1635.975f, 31.357f };
		fLocal_74 = 318.519f;
		Local_71 = { -129.8504f, -1629.676f, 31.2506f };
		fLocal_77 = 98f;
		Local_370 = { Local_68 };
		Local_373 = { 0f, 0f, fLocal_74 };
		Local_165 = { -103.8951f, -1593.239f, 30.49198f };
		Local_168 = { -89.29615f, -1575.444f, 32.30938f };
		Local_171 = { -152.0367f, -1654.379f, 31.73599f };
		Local_174 = { -169.8183f, -1669.556f, 33.94173f };
		Local_177 = { -152.0367f, -1654.379f, 31.73599f };
		Local_180 = { -103.8951f, -1593.239f, 30.49198f };
		fLocal_78 = 340.0645f;
		Local_79 = { -151.0793f, -1650.322f, 31.6504f };
		Local_86 = { -133.6872f, -1630.245f, 31.2527f };
		iLocal_84 = joaat("prop_ld_wallet_pickup");
		cLocal_102 = "REMG1AU";
		sLocal_103 = "REMG1_VIC";
		sLocal_104 = "REMG1_SHT";
		sLocal_105 = "REMG1_ASK";
		sLocal_106 = "REMG1_DRP";
		sLocal_107 = "REMG1_OHY";
		sLocal_108 = "REMG1_THK";
		sLocal_109 = "REMG1_GIV";
		sLocal_110 = "REMG1_MUGA";
		sLocal_111 = "REMG1_WHO";
		switch (func_104())
		{
			case 0:
				sLocal_114 = "REMG1_HOM";
				sLocal_115 = "REMG1_WAM";
				break;
			
			case 1:
				sLocal_114 = "REMG1_HOF";
				sLocal_115 = "REMG1_WAF";
				break;
			
			case 2:
				sLocal_114 = "REMG1_HOT";
				sLocal_115 = "REMG1_WAT";
				break;
		}
		sLocal_118 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_119 = "A_M_Y_Business_02_WHITE_FULL_01";
		sLocal_116 = "MuggedMan";
		sLocal_117 = "MuggerGang";
		iLocal_49 = 1;
		cLocal_377 = "move_m@hurry@b";
	}
	if (iLocal_89 == 2)
	{
		cLocal_358 = "random@mugging2";
		cLocal_360 = "random@mugging2";
		iLocal_47 = 1;
		Local_144 = { 287.888f, -284.603f, 52.967f };
		iLocal_82 = joaat("a_f_y_genhot_01");
		iLocal_83 = joaat("g_m_y_strpunk_01");
		Local_68 = { 288.6728f, -282.4782f, 52.9707f };
		fLocal_74 = 260.7569f;
		Local_71 = { 290.5373f, -283.198f, 52.9799f };
		fLocal_77 = 45f;
		fLocal_78 = 251f;
		Local_79 = { 297.4484f, -261.2914f, 53.0037f };
		iLocal_84 = joaat("prop_ld_handbag");
		cLocal_102 = "REMG2AU";
		sLocal_103 = "REMG2_VIC";
		sLocal_104 = "REMG2_SHT";
		sLocal_105 = "REMG2_ASK";
		sLocal_106 = "REMG2_DRP";
		sLocal_107 = "REMG2_OHY";
		sLocal_108 = "REMG2_THK";
		sLocal_109 = "REMG2_GIV";
		sLocal_111 = "REMG2_WHO";
		sLocal_112 = "REMG2_GUN";
		sLocal_113 = "REMG2_FUT";
		switch (func_104())
		{
			case 0:
				sLocal_114 = "REMG2_HOM";
				sLocal_115 = "REMG2_WAM";
				break;
			
			case 1:
				sLocal_114 = "REMG2_HOF";
				sLocal_115 = "REMG2_WAF";
				break;
			
			case 2:
				sLocal_114 = "REMG2_HOT";
				sLocal_115 = "REMG2_WAT";
				break;
		}
		sLocal_118 = "G_M_Y_StreetPunk_01_BLACK_MINI_03";
		sLocal_116 = "MuggedYMan";
		sLocal_117 = "MuggerGang";
		iLocal_49 = 1;
		cLocal_377 = "move_m@hurry@b";
	}
	if (iLocal_46 == 1)
	{
		func_202();
		iLocal_191 = 2000;
		iLocal_47 = 2;
		if (iLocal_89 == 3)
		{
			cLocal_358 = "RANDOM@MUGGING3";
			Local_144 = { -317.1964f, -824.0751f, 31.4284f };
			iLocal_82 = joaat("a_f_y_hipster_01");
			iLocal_83 = joaat("a_m_o_tramp_01");
			Local_68 = { -310.9292f, -833.8435f, 30.6261f };
			fLocal_74 = 80.7161f;
			Local_71 = { -322.5526f, -827.186f, 30.5857f };
			fLocal_77 = 336.5502f;
			fLocal_78 = 81.8694f;
			Local_79 = { -322.3941f, -835.7213f, 30.6001f };
			Local_86 = { -320.9667f, -832.1209f, 30.5979f };
			iLocal_84 = joaat("prop_ld_purse_01");
			cLocal_102 = "REMG3AU";
			sLocal_103 = "REMG3_VIC";
			sLocal_104 = "REMG3_SHT";
			sLocal_105 = "REMG3_ASK";
			sLocal_106 = "REMG3_DRP";
			sLocal_107 = "REMG3_OHY";
			sLocal_108 = "REMG3_THK";
			sLocal_109 = "REMG3_GIV";
			sLocal_110 = "REMG3_MUGB";
			sLocal_111 = "REMG3_WHO";
			sLocal_112 = "REMG3_GUN";
			sLocal_113 = "REMG3_FUT";
			switch (func_104())
			{
				case 0:
					sLocal_114 = "REMG3_HOM";
					sLocal_115 = "REMG3_WAM";
					break;
				
				case 1:
					sLocal_114 = "REMG3_HOF";
					sLocal_115 = "REMG3_WAF";
					break;
				
				case 2:
					sLocal_114 = "REMG3_HOT";
					sLocal_115 = "REMG3_WAT";
					break;
			}
			sLocal_118 = "G_M_Y_Korean_02_Korean_MINI_02";
			sLocal_116 = "MUGGEDHIPSTER";
			sLocal_117 = "MuggerTramp";
			iLocal_49 = 1;
			cLocal_377 = "move_f@hurry@a";
		}
		if (iLocal_89 == 4)
		{
			func_202();
			cLocal_358 = "RANDOM@MUGGING4";
			sLocal_364 = "STRUGGLE_Loop_B_Thief";
			sLocal_365 = "STRUGGLE_Loop_B_Shopkeeper";
			sLocal_367 = "FLEE_BACKWARD_Shopkeeper";
			sLocal_366 = "FLEE_BACKWARD_Thief";
			sLocal_369 = "FLEE_FORWARD_Shopkeeper";
			sLocal_368 = "FLEE_FORWARD_Thief";
			Local_144 = { 32.8802f, -1016.061f, 28.4527f };
			iLocal_82 = joaat("a_f_m_tourist_01");
			iLocal_83 = joaat("g_m_y_armgoon_02");
			Local_68 = { 32.2169f, -1020.864f, 28.456f };
			fLocal_74 = 159.1445f;
			Local_370 = { Local_68 };
			Local_373 = { 0f, 0f, fLocal_74 };
			Local_71 = { 38.1933f, -1023.579f, 28.4889f };
			fLocal_77 = 60.1372f;
			fLocal_78 = 248f;
			Local_79 = { 42.5323f, -990.353f, 28.248f };
			Local_165 = { 38.15186f, -1001.485f, 28.42276f };
			Local_168 = { 40.13669f, -995.2711f, 30.37197f };
			Local_171 = { 37.21758f, -1040.354f, 28.41506f };
			Local_174 = { 19.91492f, -1036.814f, 30.28045f };
			Local_177 = { 28.4511f, -1035.718f, 28.3329f };
			Local_180 = { 38.6536f, -1001.073f, 28.407f };
			Local_86 = { 32.536f, -1020.293f, 28.4576f };
			iLocal_84 = joaat("prop_ld_wallet_pickup");
			cLocal_102 = "REMG4AU";
			sLocal_103 = "REMG4_VIC";
			sLocal_104 = "REMG4_SHT";
			sLocal_105 = "REMG4_ASK";
			sLocal_106 = "REMG4_DRP";
			sLocal_107 = "REMG4_OHY";
			sLocal_108 = "REMG4_THK";
			sLocal_109 = "REMG4_GIV";
			sLocal_110 = "REMG4_MUGB";
			sLocal_111 = "REMG4_WHO";
			sLocal_112 = "REMG4_GUN";
			sLocal_113 = "REMG4_FUT";
			switch (func_104())
			{
				case 0:
					sLocal_114 = "REMG4_HOM";
					sLocal_115 = "REMG4_WAM";
					break;
				
				case 1:
					sLocal_114 = "REMG4_HOF";
					sLocal_115 = "REMG4_WAF";
					break;
				
				case 2:
					sLocal_114 = "REMG4_HOT";
					sLocal_115 = "REMG4_WAT";
					break;
			}
			sLocal_118 = "G_M_Y_ArmGoon_02_White_Armenian_MINI_02";
			sLocal_116 = "MuggedWoman";
			sLocal_117 = "MuggerGang";
			iLocal_49 = 1;
			cLocal_377 = "move_f@hurry@a";
		}
	}
}

void func_202()//Position - 0xB156
{
	cLocal_360 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_FEMALE";
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_361 = "Return_Wallet_Positive_A_Player";
			sLocal_362 = "Return_Wallet_Positive_A_Female";
			sLocal_363 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_361 = "Return_Wallet_Positive_B_Player";
			sLocal_362 = "Return_Wallet_Positive_B_Female";
			sLocal_363 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_361 = "Return_Wallet_Positive_C_Player";
			sLocal_362 = "Return_Wallet_Positive_C_Female";
			sLocal_363 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_203()//Position - 0xB1CA
{
	cLocal_360 = "RANDOM@ATM_ROBBERY@RETURN_WALLET_MALE";
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			sLocal_361 = "Return_Wallet_Positive_A_Player";
			sLocal_362 = "Return_Wallet_Positive_A_Male";
			sLocal_363 = "Return_Wallet_Positive_A_Cam";
			break;
		
		case 1:
			sLocal_361 = "Return_Wallet_Positive_B_Player";
			sLocal_362 = "Return_Wallet_Positive_B_Male";
			sLocal_363 = "Return_Wallet_Positive_B_Cam";
			break;
		
		case 2:
			sLocal_361 = "Return_Wallet_Positive_C_Player";
			sLocal_362 = "Return_Wallet_Positive_C_Male";
			sLocal_363 = "Return_Wallet_Positive_C_Cam";
			break;
	}
}

void func_204(int iParam0, var uParam1)//Position - 0xB23E
{
	int iVar0;
	int iVar1;
	
	if (*uParam1 == -99)
	{
		*uParam1 = MISC::GET_GAME_TIMER();
	}
	if (HUD::DOES_BLIP_EXIST(uParam0))
	{
		iVar0 = (MISC::GET_GAME_TIMER() - *uParam1);
		if (iVar0 < 5000)
		{
			iVar1 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(iVar0) / 1000f));
			if ((iVar1 * 1000 - iVar0) < 500)
			{
				if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
				{
					HUD::SET_BLIP_ALPHA(iParam0, 255);
				}
			}
			else if (HUD::GET_BLIP_ALPHA(iParam0) != 0)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 0);
			}
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
			if (HUD::GET_BLIP_ALPHA(iParam0) != 255)
			{
				HUD::SET_BLIP_ALPHA(iParam0, 255);
			}
		}
	}
}

void func_205(var uParam0)//Position - 0xB2DD
{
	int iVar0;
	
	if (uParam0->f_271)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_272 + uParam0->f_273) || MISC::IS_BIT_SET(Global_89962.f_20, 2)) || MISC::IS_BIT_SET(Global_89962.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 29))
					{
						func_206(uParam0[iVar0 /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_206(var uParam0)//Position - 0xB36B
{
	func_207(uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_207(var uParam0, char[4] cParam1, var uParam2)//Position - 0xB381
{
	if (MISC::IS_BIT_SET(*uParam0, 30))
	{
		switch (func_197(*uParam0))
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
				VEHICLE::REQUEST_VEHICLE_RECORDING(uParam2, uParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(uParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uParam1, MISC::IS_BIT_SET(*uParam0, 27));
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(uParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(cParam1, uParam2);
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

void func_208(int iParam0)//Position - 0xB45A
{
	if (iParam0 == -1)
	{
		iParam0 = func_173();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_210(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_97339 = 0;
	func_209();
}

void func_209()//Position - 0xB490
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

void func_210(int iParam0)//Position - 0xB4CD
{
	Global_97342 = iParam0;
}

int func_211(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xB4DB
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
		iParam3 = func_173();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_251())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_167())
			{
				return 0;
			}
		}
		if (!Global_SAVE_DATA.isGameflowActive)
		{
			return 0;
		}
		if (func_178(0))
		{
			return 0;
		}
		if (func_168())
		{
			return 0;
		}
		if (func_250())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (func_106(func_104()))
		{
			if (func_160(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_249(iParam3))
		{
			return 0;
		}
		if (func_106(func_104()))
		{
			if (func_248(func_104()) == 4 || func_248(func_104()) == 5)
			{
				return 0;
			}
		}
		if (func_106(func_104()))
		{
			if (!func_247(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_246(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam3]))
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
		if (func_245())
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
		if (!func_236(4))
		{
			return 0;
		}
		if (!func_155(5))
		{
			return 0;
		}
		if (func_235(iParam3, iParam4) && !bParam5)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_235(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_249(30) && !func_235(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_106(func_104()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[iVar4 /*3*/] };
				iVar8 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iVar4];
				if (func_234(iVar8))
				{
					if (func_212(iVar4))
					{
						if (!func_20(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_104() != iVar4)
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

bool func_212(int iParam0)//Position - 0xB874
{
	int iVar0;
	
	iVar0 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1524[iParam0];
	return func_213(iVar0);
}

int func_213(int iParam0)//Position - 0xB895
{
	return func_214(iParam0, 1);
}

int func_214(int iParam0, int iParam1)//Position - 0xB8A4
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_234(iParam0))
	{
		return 0;
	}
	func_215(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_215(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0xB8F7
{
	func_216(func_227(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_216(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0xB915
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_226(iParam0, iParam1))
	{
		iVar0 = func_225(iParam1);
		iVar1 = func_223(iParam0);
		iVar2 = (func_223(iParam0) - func_223(iParam1));
		iVar3 = (func_225(iParam0) - func_225(iParam1));
		iVar4 = (func_222(iParam0) - func_222(iParam1));
		iVar5 = (func_221(iParam0) - func_221(iParam1));
		iVar6 = (func_220(iParam0) - func_220(iParam1));
		iVar7 = (func_219(iParam0) - func_219(iParam1));
	}
	else
	{
		iVar0 = func_225(iParam0);
		iVar1 = func_223(iParam1);
		iVar2 = (func_223(iParam1) - func_223(iParam0));
		iVar3 = (func_225(iParam1) - func_225(iParam0));
		iVar4 = (func_222(iParam1) - func_222(iParam0));
		iVar5 = (func_221(iParam1) - func_221(iParam0));
		iVar6 = (func_220(iParam1) - func_220(iParam0));
		iVar7 = (func_219(iParam1) - func_219(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_218(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_217(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_217(float fParam0, float fParam1, float fParam2)//Position - 0xBB16
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_218(int iParam0, int iParam1)//Position - 0xBB58
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_219(int iParam0)//Position - 0xBBFA
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_220(int iParam0)//Position - 0xBC0D
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_221(int iParam0)//Position - 0xBC20
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_222(int iParam0)//Position - 0xBC33
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_223(int iParam0)//Position - 0xBC45
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_224(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_224(bool bParam0, int iParam1, int iParam2)//Position - 0xBC6A
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_225(int iParam0)//Position - 0xBC81
{
	return iParam0 & 15;
}

int func_226(int iParam0, int iParam1)//Position - 0xBC8E
{
	int iVar0;
	int iVar1;
	
	if (!func_234(iParam1) || !func_234(iParam0))
	{
		return 1;
	}
	iVar0 = func_223(iParam0);
	iVar1 = func_223(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_225(iParam0);
	iVar1 = func_225(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_222(iParam0);
	iVar1 = func_222(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_221(iParam0);
	iVar1 = func_221(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_220(iParam0);
	iVar1 = func_220(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	iVar1 = func_219(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_227()//Position - 0xBD9A
{
	var uVar0;
	
	func_233(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_232(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_231(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_230(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_229(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_228(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_228(var uParam0, int iParam1)//Position - 0xBDE0
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_229(var uParam0, int iParam1)//Position - 0xBE66
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_230(var uParam0, int iParam1)//Position - 0xBE99
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_225(*uParam0);
	iVar1 = func_223(*uParam0);
	if (iParam1 < 1 || iParam1 > func_218(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_231(var uParam0, int iParam1)//Position - 0xBEEA
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_232(var uParam0, int iParam1)//Position - 0xBF24
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_233(var uParam0, int iParam1)//Position - 0xBF5F
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_234(int iParam0)//Position - 0xBF9B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_219(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_220(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_221(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_223(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_225(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_222(iParam0);
	if (iVar5 < 1 || iVar5 > func_218(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_235(int iParam0, int iParam1)//Position - 0xC078
{
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_236(int iParam0)//Position - 0xC09B
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_104();
				if (!func_106(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_244()) || Global_96400) || Global_24446) || func_243()) || func_43(8, -1)) || func_242()) || func_241()) || func_240()) || func_239()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_244()) || Global_24446) || func_243()) || func_43(8, -1)) || func_240()) || func_242()) || func_241()) || func_239()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_244()) || Global_96400) || Global_24446) || func_243()) || func_43(8, -1)) || func_240()) || func_242()) || func_241()) || func_239()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_244()) || Global_96400) || Global_24446) || func_243()) || func_43(8, -1)) || func_242()) || func_241()) || func_239()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_244() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_43(8, -1)) || func_239()) || func_238()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_43(8, -1) || func_242()) || func_241()) || func_238()) || func_237())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_244()) || Global_24446) || func_243()) || func_43(8, -1)) || func_241()) || func_240()) || func_239()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_244()) || func_241()) || Global_96400) || Global_24446) || func_243()) || Global_35957) || func_43(8, -1)) || func_240()) || func_238()) || func_239()) || Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_244()) || Global_96400) || Global_24446) || func_243()) || func_43(8, -1)) || func_240()) || func_238()) || func_242()) || func_241()) || func_239())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_237()//Position - 0xC7B8
{
	return Global_90001.f_1;
}

int func_238()//Position - 0xC7C6
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_239()//Position - 0xC7EC
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_240()//Position - 0xC806
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_241()//Position - 0xC830
{
	return Global_90014.f_291 > 0;
}

bool func_242()//Position - 0xC841
{
	return Global_90014.f_290 > 0;
}

var func_243()//Position - 0xC852
{
	return Global_1315900;
}

int func_244()//Position - 0xC85E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_245()//Position - 0xC87A
{
	func_40();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_246(int iParam0)//Position - 0xC8A2
{
	return func_226(func_227(), iParam0);
}

int func_247(int iParam0, int iParam1, int iParam2)//Position - 0xC8B4
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_104();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_248(int iParam0)//Position - 0xC998
{
	if (!func_106(iParam0))
	{
		return 7;
	}
	return Global_SAVE_DATA.COMM_CONTROL_DATA_STRUCT.COMM_CONTROL_CHAR_PRIORITY_ARRAY[iParam0];
}

bool func_249(int iParam0)//Position - 0xC9BC
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_251())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_SAVE_DATA.RE_FLAGS, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_TIME_REQ_SET, iVar0);
	}
	return bVar1;
}

int func_250()//Position - 0xCA1A
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_251()//Position - 0xCA51
{
	var uVar0;
	
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.SHOP_SAVED_DATA_STRUCT.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

bool func_252(int iParam0)//Position - 0xCAD4
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 3);
}

bool func_253(int iParam0)//Position - 0xCB02
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iParam0 /*6*/], 0);
}

void func_254()//Position - 0xCB30
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (SYSTEM::VDIST(Local_121, Local_90) < 20f)
		{
			iLocal_89 = 1;
			iLocal_46 = 2;
		}
		if (SYSTEM::VDIST(Local_121, Local_93) < 20f)
		{
			iLocal_89 = 2;
			iLocal_46 = 3;
		}
		if (SYSTEM::VDIST(Local_121, Local_96) < 20f)
		{
			iLocal_89 = 3;
			iLocal_46 = 1;
		}
		if (SYSTEM::VDIST(Local_121, Local_99) < 20f)
		{
			iLocal_89 = 4;
			iLocal_46 = 1;
		}
	}
}

void func_255(var uParam0, int iParam1)//Position - 0xCBAF
{
	if (iParam1 > 0)
	{
		uParam0->f_273 = iParam1;
	}
}

void func_256()//Position - 0xCBC7
{
	if (iLocal_155)
	{
		if (iLocal_49)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_82);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_84);
		}
		if (!PED::IS_PED_INJURED(iLocal_62))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_62, PLAYER::PLAYER_PED_ID(), 150f, -1, 0, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_62, 1);
			if (!bLocal_59)
			{
				PED::SET_PED_MONEY(iLocal_62, iLocal_191);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_61))
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_61, 1);
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, -1146898486) == 7 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 242628503) == 7)
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_120);
					if (PED::IS_PED_DUCKING(iLocal_61))
					{
						TASK::TASK_TOGGLE_DUCK(0, 0);
					}
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 9000, 0, 2);
					TASK::TASK_SMART_FLEE_COORD(0, Local_121, 250f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_120);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_61, uLocal_120);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_120);
					PED::SET_PED_KEEP_TASK(iLocal_61, 1);
					if (!iLocal_153 && !iLocal_147)
					{
						if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							func_88();
						}
					}
				}
			}
		}
		SYSTEM::WAIT(0);
		if (HUD::DOES_BLIP_EXIST(iLocal_65))
		{
			HUD::REMOVE_BLIP(&iLocal_65);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_64))
		{
			HUD::REMOVE_BLIP(&iLocal_64);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_63);
		}
		if (HUD::DOES_BLIP_EXIST(iLocal_66))
		{
			HUD::REMOVE_BLIP(&iLocal_66);
		}
	}
	if (iLocal_378 != -1)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_378))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_378);
		}
		iLocal_378 = -1;
	}
	if (func_172())
	{
		PED::SET_CREATE_RANDOM_COPS(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	func_29(&uLocal_379, 0, 0);
	func_91(0, 1, 1, 0);
	func_262(-1);
	func_257(&uLocal_392, 0);
	if (iLocal_140 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_140);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_257(var uParam0, bool bParam1)//Position - 0xCD69
{
	int iVar0;
	
	if (!bParam1)
	{
		func_259(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_258(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}

void func_258(var uParam0)//Position - 0xCDAC
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_259(var uParam0)//Position - 0xCDC5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			func_260(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}

void func_260(var uParam0)//Position - 0xCDFF
{
	func_261(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_261(int iParam0, var uParam1, int iParam2)//Position - 0xCE16
{
	if (MISC::IS_BIT_SET(uParam0, 30))
	{
		switch (func_197(iParam0))
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
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, uParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(uParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, MISC::IS_BIT_SET(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_262(int iParam0)//Position - 0xCED6
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_173();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_172())
	{
		func_267(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_97344 = MISC::GET_GAME_TIMER();
		func_266(30000);
		StringCopy(&cVar0, func_265(Global_97342, 1), 64);
		if (func_264(Global_97342) > 0)
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
	func_263(&Global_24503);
	Global_97343 = 0;
	func_210(-1);
}

void func_263(var uParam0)//Position - 0xCF8B
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

int func_264(int iParam0)//Position - 0xCFC8
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_265(int iParam0, bool bParam1)//Position - 0xD079
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_266(int iParam0)//Position - 0xD2C2
{
	Global_35464 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_267(int iParam0)//Position - 0xD2D4
{
	func_268(iParam0, 0, func_273(iParam0));
}

void func_268(int iParam0, int iParam1, int iParam2)//Position - 0xD2E9
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_227();
	func_271(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_270(iParam0, &uVar0);
	Var1 = { func_269(&uVar0) };
}

struct<16> func_269(var uParam0)//Position - 0xD318
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_221(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_220(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_219(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_222(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_225(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_223(*uParam0), 64);
	return Var0;
}

void func_270(int iParam0, var uParam1)//Position - 0xD3E7
{
	Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_BLOCK_TIME[iParam0] = *uParam1;
}

void func_271(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD3FF
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_223(*uParam0);
	iVar1 = func_225(*uParam0);
	iVar2 = func_222(*uParam0);
	iVar3 = func_221(*uParam0);
	iVar4 = func_220(*uParam0);
	iVar5 = func_219(*uParam0);
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
	iVar6 = func_218(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_218(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_272(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_272(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD581
{
	func_233(uParam0, iParam1);
	func_232(uParam0, iParam2);
	func_231(uParam0, iParam3);
	func_230(uParam0, iParam4);
	func_229(uParam0, iParam5);
	func_228(uParam0, iParam6);
}

int func_273(int iParam0)//Position - 0xD5B9
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

void func_274(int iParam0, int iParam1)//Position - 0xD75C
{
	if (iParam0 == -1)
	{
		iParam0 = func_173();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_264(iParam0))
	{
		func_285(iParam0, iParam1);
		if (!func_284(51))
		{
			func_281("RE_REWARD", 1, 0, 4000, 10000, func_166(), 0, 138, 0);
			func_280(51);
		}
		if (func_151(iParam0))
		{
			Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_HELP_COUNT = 3;
		}
		if (func_279(iParam0, iParam1) != 322)
		{
			func_275(func_279(iParam0, iParam1), Local_42.x, Local_42.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_180(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				func_180(7);
			}
			else
			{
				func_180(1);
			}
		}
	}
}

void func_275(int iParam0, var uParam1, var uParam2)//Position - 0xD860
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_278((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6 == 11 || Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_5 = 1;
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_10 = uParam1;
		Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_276();
	}
}

void func_276()//Position - 0xD948
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853;
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!MISC::IS_BIT_SET(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_97076, 0);
					MISC::SET_BIT(&(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_97089, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_97072, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_97090, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_97073, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_97091, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_97074, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_97092, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_97075, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_97079, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_97096, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_97097, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853))
	{
		func_74(13, SYSTEM::FLOOR(Global_SAVE_DATA.COMP_PERCENT_SAVED_ARRAY.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_68245)
		{
			if (func_277() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_177();
				}
			}
		}
	}
}

int func_277()//Position - 0xDE09
{
	return Global_24444;
}

int func_278(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDE14
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_96();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_279(int iParam0, int iParam1)//Position - 0xE071
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

void func_280(int iParam0)//Position - 0xE3E5
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1]), iVar0);
	}
}

void func_281(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0xE427
{
	func_282(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_282(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0xE447
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount < 9)
	{
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/]), sParam0, 16);
		StringCopy(&(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_4), sParam1, 16);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_9 = iParam5;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_11 = iParam6;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_12 = uParam2;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_13 = iParam7;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_14 = iParam8;
		Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount /*16*/].f_10 = -1;
		}
		Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount++;
		func_283();
	}
}

void func_283()//Position - 0xE619
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_SAVE_DATA.FLOW_HELP_STRUCT.iFlowHelpCount)
	{
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 0))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[0] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 1))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[1] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_11, 2))
		{
			if (Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12 > Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2])
			{
				Global_SAVE_DATA.FLOW_HELP_STRUCT.FLOW_HELP_PRIORITY_ARRAY[2] = Global_SAVE_DATA.FLOW_HELP_STRUCT_ARRAY[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_284(int iParam0)//Position - 0xE739
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_HELP_STRUCT.HELP_DISPLAYED_BITSET_ARRAY[iVar1], iVar0);
	}
	return 0;
}

void func_285(int iParam0, int iParam1)//Position - 0xE77C
{
	MISC::SET_BIT(&(Global_SAVE_DATA.RANDOM_EVENTS_SAVED.RE_VAR_COMPLETE[iParam0]), iParam1);
}

