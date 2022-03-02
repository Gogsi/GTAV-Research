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
	GlobalFunc_4723(&uLocal_392, 3);
	func_254();
	if ((iLocal_89 == 1 && GlobalFunc_4516(55)) && !GlobalFunc_794(55))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_211(Local_121, 25, iLocal_89, 0, 0))
	{
		GlobalFunc_6828(-1);
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
												GlobalFunc_4702(1);
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
										if (iLocal_53 && !GlobalFunc_111())
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
									if (GlobalFunc_469(GlobalFunc_8329()) < iLocal_191)
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
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_62, 1) > 150f && (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_62) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_62)))
								{
									GlobalFunc_4948(&uLocal_379, 0, 0);
									iLocal_47 = 8;
								}
								else
								{
									func_4();
									GlobalFunc_2515(iLocal_65, iLocal_62, 100f, 1061158912, 0);
								}
							}
						}
						else
						{
							GlobalFunc_4948(&uLocal_379, 0, 0);
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
			GlobalFunc_200(&uLocal_193, 1);
			iLocal_160 = 1;
		}
	}
	if (!iLocal_161)
	{
		if (PED::IS_PED_INJURED(iLocal_61))
		{
			GlobalFunc_200(&uLocal_193, 2);
			iLocal_161 = 1;
		}
	}
}



void func_4()//Position - 0xC1F
{
	if (!PED::IS_PED_INJURED(iLocal_62) || !bLocal_132)
	{
		GlobalFunc_10693(&uLocal_379, iLocal_62, 0, 0, 1, 1, 1);
	}
	else
	{
		GlobalFunc_4948(&uLocal_379, 0, 0);
	}
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
		GlobalFunc_4948(&uLocal_379, 0, 0);
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
		GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_109, 4, 0, 0, 0);
		iLocal_153 = 1;
		PED::SET_PED_KEEP_TASK(iLocal_61, 1);
		SYSTEM::WAIT(0);
		func_256();
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
										GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0);
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
						GlobalFunc_4702(3);
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
					GlobalFunc_4702(3);
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
					if (GlobalFunc_6566(2))
					{
						HUD::CLEAR_HELP(1);
					}
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (GlobalFunc_552(1, 0, 1))
						{
							if (!func_99())
							{
								if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
								{
									GlobalFunc_8316(1, 1, 1, 0);
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										while (!GlobalFunc_2267(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), uLocal_76, 1, 1056964608, 0, 1) || GlobalFunc_111())
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
										GlobalFunc_4956();
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
						GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_114, 4, 0, 0, 0);
						SYSTEM::SETTIMERA(0);
						iLocal_150++;
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					break;
				
				case 1:
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_130) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_130) > 0.9f) || GlobalFunc_4926(1000))
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
								if (GlobalFunc_1575(Var1.f_2, 0f, 90f))
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
						GlobalFunc_10834(GlobalFunc_8329(), 1, iVar19);
						GlobalFunc_183(joaat("rc_wallets_returned"), 1);
						GlobalFunc_4702(3);
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
									if (GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0) || GlobalFunc_687())
									{
										iLocal_60 = 1;
									}
								}
							}
						}
					}
					else if (!iLocal_60)
					{
						if (GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0) || GlobalFunc_687())
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





























void func_78()//Position - 0x431F
{
	var uVar0;
	
	uVar0 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, -1f, 0.5f), 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 1115815936, 1, 2);
	CAM::SET_CAM_ACTIVE(uVar0, 1);
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
						Var22 = { GlobalFunc_4722(Var1, 0f, Var10) };
						Var25 = { GlobalFunc_4722(Var1, 0f, Var7) };
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
						Var22 = { GlobalFunc_4722(Var1, 0f, Var10) };
						Var25 = { GlobalFunc_4722(Var1, 0f, Var7) };
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
						Var22 = { GlobalFunc_4722(Var1, 0f, Var10) };
						Var25 = { GlobalFunc_4722(Var1, 0f, Var7) };
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
						Var22 = { GlobalFunc_4722(Var1, 0f, Var10) };
						Var25 = { GlobalFunc_4722(Var1, 0f, Var7) };
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
	uParam2->f_2 = GlobalFunc_5821(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar3 = GlobalFunc_5821(iParam0, PLAYER::PLAYER_PED_ID(), 1);
	fVar4 = GlobalFunc_5821(iParam0, PLAYER::PLAYER_PED_ID(), 1);
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
					uParam2->f_2 = GlobalFunc_1695(ENTITY::GET_ENTITY_COORDS(iParam0, 0), *uParam1, 1);
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
							uParam2->f_2 = GlobalFunc_1695(Var13 + Vector(-0.75f, 0f, 0f), *uParam1, 1);
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
		if (GlobalFunc_4712(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
		{
			bVar0 = true;
		}
		Var1 = { Param0 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.x, Var1.f_1);
		if (GlobalFunc_4712(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), fVar4, 15f))
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













int func_99()//Position - 0x51B6
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (GlobalFunc_111())
		{
			return 1;
		}
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
		else if (GlobalFunc_469(GlobalFunc_8329()) < iLocal_191)
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
				if (GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_107, 4, 0, 0, 0) || GlobalFunc_687())
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
		GlobalFunc_183(joaat("rc_wallets_recovered"), 1);
		PAD::SET_PAD_SHAKE(0, 200, 250);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63))
		{
			OBJECT::DELETE_OBJECT(&iLocal_63);
		}
		func_118();
		GlobalFunc_4713(&uLocal_391);
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
			GlobalFunc_6567(2);
		}
		else
		{
			iLocal_47 = 12;
		}
	}
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
		HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
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
		HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
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
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && GlobalFunc_4714(0))
		{
			GlobalFunc_6567(1);
		}
	}
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
		if (GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_106, 4, 0, 0, 0) || GlobalFunc_687())
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
		GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
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
	HUD::SET_BLIP_SCALE(uVar0, GlobalFunc_512(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
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
					if ((GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0) || GlobalFunc_687()) || GlobalFunc_687())
					{
						iLocal_58 = 1;
					}
				}
				else if ((GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_106, 4, 0, 0, 0) || GlobalFunc_687()) || GlobalFunc_687())
				{
					iLocal_58 = 1;
				}
			}
		}
	}
	else if (func_135())
	{
		if ((GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_115, 4, 0, 0, 0) || GlobalFunc_687()) || GlobalFunc_687())
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
	if (!GlobalFunc_111())
	{
		if (SYSTEM::TIMERA() > 10000)
		{
			if (!PED::IS_PED_INJURED(iLocal_61))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(iLocal_61))
				{
					GlobalFunc_5130(iLocal_61, "GENERIC_CURSE_MED", 24);
					SYSTEM::SETTIMERA(0);
				}
			}
		}
	}
	if (!bLocal_59)
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_62, 1) > 200f)
		{
			if (!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_62) || ENTITY::IS_ENTITY_OCCLUDED(iLocal_62))
			{
				iLocal_47 = 8;
			}
		}
	}
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
							GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_105, 4, 0, 0, 0);
							bLocal_154 = true;
							iLocal_135 = 1;
						}
					}
					else
					{
						AUDIO::STOP_PED_SPEAKING(iLocal_61, 1);
						GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_105, 4, 0, 0, 0);
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
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_104, 4, 0, 0, 0) || GlobalFunc_687())
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
				if (!GlobalFunc_6827())
				{
					if (GlobalFunc_10586())
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
						GlobalFunc_9559(1);
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
				if (GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_103, 4, 0, 0, 0) || GlobalFunc_687())
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

















void func_175()//Position - 0x9624
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
	}
	func_274(25, iLocal_89);
	GlobalFunc_82();
	GlobalFunc_7068();
	func_256();
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
							if (!GlobalFunc_6827())
							{
								GlobalFunc_9559(1);
							}
						}
					}
					if (func_149())
					{
						GlobalFunc_10641(&uLocal_193, cLocal_102, "REMG2_ARG", 4, 0, 0, 0);
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
			if (!GlobalFunc_6827())
			{
				if (GlobalFunc_10586())
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
								GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
								SYSTEM::SETTIMERB(0);
								iLocal_139++;
							}
							else
							{
								iLocal_188 = MISC::GET_GAME_TIMER();
								TASK::TASK_LOOK_AT_ENTITY(iLocal_62, PLAYER::PLAYER_PED_ID(), 7000, 0, 2);
								GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
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
							GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_113, 4, 0, 0, 0);
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
				if (PED::IS_PED_INJURED(iLocal_62) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_62, 1) > 100f)
				{
					GlobalFunc_4935();
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
				GlobalFunc_4956();
			}
			SYSTEM::WAIT(0);
			if (!iLocal_147)
			{
				if (!PED::IS_PED_INJURED(iLocal_62))
				{
					GlobalFunc_10641(&uLocal_193, cLocal_102, "REMG2_FKIT", 4, 0, 0, 0);
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
						GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_112, 4, 0, 0, 0);
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
							GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_113, 4, 0, 0, 0);
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
						GlobalFunc_4956();
					}
					SYSTEM::WAIT(0);
					GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_111, 4, 0, 0, 0);
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
				if ((((iLocal_187 - iLocal_186) > 12000 && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62, 3f, 3f, 35f, 0, 1, 0)) && ENTITY::IS_ENTITY_ON_SCREEN(iLocal_62)) && !GlobalFunc_111())
				{
					if ((GlobalFunc_10641(&uLocal_193, cLocal_102, "REMG2_FKIT", 4, 0, 0, 0) || GlobalFunc_687()) || GlobalFunc_687())
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
			if (GlobalFunc_6827())
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 242628503) == 7 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_61, 474215631) == 7)
				{
					if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						GlobalFunc_4956();
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
					GlobalFunc_10641(&uLocal_193, cLocal_102, sLocal_108, 4, 0, 0, 0);
					SYSTEM::WAIT(0);
					if (iLocal_191 > 0)
					{
						PED::SET_PED_MONEY(PLAYER::PLAYER_PED_ID(), (iLocal_191 / 100) * 90);
						GlobalFunc_10834(GlobalFunc_8329(), 1, iLocal_191);
						SYSTEM::WAIT(0);
						GlobalFunc_10829(GlobalFunc_8329(), 1, (iLocal_191 / 10), 0, 1);
					}
					GlobalFunc_4702(3);
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


int func_189()//Position - 0xA2B8
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
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

int func_190()//Position - 0xA33E
{
	func_201();
	GlobalFunc_5686(&uLocal_392, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@BASE");
	GlobalFunc_5686(&uLocal_392, "AMB@PROP_HUMAN_SEAT_CHAIR@MALE@GENERIC@EXIT");
	GlobalFunc_5686(&uLocal_392, cLocal_376);
	GlobalFunc_5686(&uLocal_392, cLocal_360);
	GlobalFunc_6572(&uLocal_392, iLocal_82);
	GlobalFunc_6572(&uLocal_392, iLocal_83);
	GlobalFunc_6572(&uLocal_392, iLocal_84);
	GlobalFunc_5686(&uLocal_392, cLocal_359);
	GlobalFunc_5686(&uLocal_392, cLocal_358);
	GlobalFunc_5686(&uLocal_392, cLocal_377);
	GlobalFunc_5686(&uLocal_392, "RANDOM@BICYCLE_THIEF@IDLE_A");
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
	switch (GlobalFunc_8329())
	{
		case 0:
			GlobalFunc_1286(&uLocal_193, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			break;
		
		case 1:
			GlobalFunc_1286(&uLocal_193, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			break;
		
		case 2:
			GlobalFunc_1286(&uLocal_193, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			break;
	}
	GlobalFunc_1286(&uLocal_193, 1, iLocal_62, sLocal_117, 0, 1);
	GlobalFunc_1286(&uLocal_193, 2, iLocal_61, sLocal_116, 0, 1);
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
			switch (GlobalFunc_2270(uParam0))
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
		switch (GlobalFunc_8329())
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
		switch (GlobalFunc_8329())
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
			switch (GlobalFunc_8329())
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
			switch (GlobalFunc_8329())
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
	Local_42 = { Param0 };
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
		if (GlobalFunc_2(0))
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
			if ((Var1.f_2 - Local_42.f_2) > 50f)
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
							GlobalFunc_4956();
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
	if (GlobalFunc_6827())
	{
		PED::SET_CREATE_RANDOM_COPS(1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	}
	GlobalFunc_4948(&uLocal_379, 0, 0);
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_10823(-1);
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
		GlobalFunc_2281(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
}


void func_259(var uParam0)//Position - 0xCDC5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (MISC::IS_BIT_SET((*uParam0)[iVar0 /*18*/], 30))
		{
			GlobalFunc_7553(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_271 = 1;
}















void func_274(int iParam0, int iParam1)//Position - 0xD75C
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
			GlobalFunc_8276(GlobalFunc_4703(iParam0, iParam1), Local_42.x, Local_42.f_1);
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












