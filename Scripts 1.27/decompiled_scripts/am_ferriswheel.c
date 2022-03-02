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
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 16;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
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
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
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
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	char* sLocal_159 = NULL;
	int iLocal_160[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_177 = 0;
	float fLocal_178 = 0f;
	struct<3> Local_179 = { 0, 0, 0 } ;
	struct<3> Local_182 = { 0, 0, 0 } ;
	struct<3> Local_185 = { 0, 0, 0 } ;
	float fLocal_188 = 0f;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	bool bLocal_193 = 0;
	var uLocal_194 = 0;
	struct<22> Local_195 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_227 = 2;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 2;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 2;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = -1027211264;
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
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	char* sLocal_269 = NULL;
	char cLocal_270[24] = "";
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	char cLocal_276[24] = "";
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	char cLocal_282[24] = "";
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	int iLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 12;
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
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 1065353216;
	struct<9> Local_986 = { 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	struct<263> Local_997 = { 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 2, 0, 0, 32, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, 0 } ;
	var uLocal_1260 = 0;
	struct<5> Local_1261[32];
	struct<20> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1 } ;
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
	sLocal_20 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_37 = 3;
	iLocal_157 = joaat("prop_ld_ferris_wheel");
	iLocal_158 = joaat("prop_ferris_car_01");
	sLocal_159 = "MISSFINALE_C2IG_5";
	fLocal_178 = 2f;
	Local_179 = { -1663.97f, -1126.7f, 30.7f };
	Local_182 = { 0.5f, 0.5f, -1.94f };
	fLocal_188 = 13f;
	iLocal_189 = -1;
	iLocal_190 = -1;
	iLocal_191 = -1;
	iLocal_192 = -1;
	bLocal_193 = true;
	sLocal_269 = "anim@mp_ferris_wheel";
	iLocal_297 = 1;
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	if (bVar0)
	{
		if (!func_184(ScriptParam_0))
		{
			func_175();
		}
		func_172();
		MISC::SET_BIT(&Global_68493, 6);
	}
	while (true)
	{
		GlobalFunc_906();
		if (GlobalFunc_7741())
		{
			func_175();
		}
		if (((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1645.555f, -1123.872f, 17.3436f, 300f, 300f, 300f, 0, 1, 0) || GlobalFunc_1277()) || NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || (GlobalFunc_5396() && !GlobalFunc_5085()))
		{
			Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 3;
		}
		func_142();
		if (MISC::IS_BIT_SET(uLocal_288, 3))
		{
			if (!Global_90014.f_1318)
			{
				MISC::CLEAR_BIT(&uLocal_288, 3);
			}
		}
		switch (func_141(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_140() > 0)
				{
					Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 1;
				}
				break;
			
			case 1:
				if (func_140() > 1)
				{
					if (func_135())
					{
						Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 2;
					}
				}
				break;
			
			case 2:
				if (func_140() == 2)
				{
					func_30();
				}
				break;
			
			case 3:
				if (!GlobalFunc_439(&uLocal_995))
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						GlobalFunc_7621(64, 0, 0, 1, 0);
					}
				}
				if (((GlobalFunc_5071(&uLocal_995, 3000, 0) || GlobalFunc_268()) || GlobalFunc_895()) || GlobalFunc_7668(PLAYER::PLAYER_ID()))
				{
					func_175();
				}
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_140())
			{
				case 0:
					if (func_11())
					{
						Local_997.f_1 = 1;
					}
					break;
				
				case 1:
					if (func_10())
					{
						Local_997.f_1 = 2;
					}
					break;
				
				case 2:
					func_6();
					func_1();
					break;
				}
		}
	}
}

void func_1()//Position - 0x281
{
	int iVar0;
	var uVar1;
	
	if (iLocal_267 == 0)
	{
	}
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_267)))
	{
		uVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_267));
		switch (Local_997)
		{
			case 0:
				if (MISC::IS_BIT_SET(Local_1261[iLocal_267 /*5*/].f_2, 4) && !MISC::IS_BIT_SET(Local_997.f_3[iLocal_267], 1))
				{
					MISC::CLEAR_BIT(&(Local_997.f_2), 0);
					MISC::CLEAR_BIT(&(Local_997.f_3[iLocal_267]), 0);
					MISC::SET_BIT(&(Local_997.f_2), 2);
					iLocal_291 = 30000;
					Local_997 = 1;
					GlobalFunc_434(&uLocal_289);
					MISC::SET_BIT(&(Local_997.f_3[iLocal_267]), 1);
				}
				if (MISC::IS_BIT_SET(Local_1261[iLocal_267 /*5*/].f_2, 3) && !MISC::IS_BIT_SET(Local_997.f_3[iLocal_267], 0))
				{
					iVar0 = func_4(iLocal_267);
					if (iVar0 == -1)
					{
					}
					else
					{
						Local_997.f_197[iLocal_267 /*2*/].f_1 = uVar1;
						Local_997.f_197[iLocal_267 /*2*/] = iVar0;
						Local_997.f_262 = func_2();
						MISC::SET_BIT(&(Local_997.f_2), 0);
						MISC::SET_BIT(&(Local_997.f_3[iLocal_267]), 0);
					}
				}
				break;
			
			case 1:
				if (MISC::IS_BIT_SET(Local_997.f_3[iLocal_267], 1))
				{
					MISC::CLEAR_BIT(&(Local_997.f_3[iLocal_267]), 1);
				}
				break;
		}
	}
	else if ((Local_997.f_3[iLocal_267] != 0 || Local_997.f_197[iLocal_267 /*2*/] != -1) || Local_997.f_197[iLocal_267 /*2*/].f_1 != 0)
	{
		Local_997.f_3[iLocal_267] = 0;
		Local_997.f_197[iLocal_267 /*2*/] = -1;
		Local_997.f_197[iLocal_267 /*2*/].f_1 = 0;
		Local_997.f_262 = func_2();
	}
	iLocal_267++;
	if (iLocal_267 == NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iLocal_267 = 0;
	}
}

int func_2()//Position - 0x441
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar2 = func_3();
	iVar0 = iVar2;
	while (iVar0 != iVar2 || !bVar3)
	{
		if (!bVar3)
		{
			bVar3 = true;
		}
		iVar1 = 0;
		while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			if (Local_997.f_197[iVar1 /*2*/] == iVar0)
			{
				return iVar1;
			}
			iVar1++;
		}
		iVar0++;
		if (iVar0 == 16)
		{
			iVar0 = 0;
		}
	}
	return -1;
}

int func_3()//Position - 0x4A9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iVar0 == 0)
		{
			iVar0 = 1;
		}
		if (Local_997.f_36[iVar0 /*10*/].f_6 >= Global_2451157)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (Local_997.f_36[0 /*10*/].f_6 >= Global_2451157)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_4(int iParam0)//Position - 0x503
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (MISC::IS_BIT_SET(Local_1261[iParam0 /*5*/].f_2, 0))
		{
			return Local_1261[iParam0 /*5*/].f_3;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 16)
			{
				if (iVar0 == 0)
				{
					iVar0 = 1;
				}
				if (!Local_997.f_36[iVar0 /*10*/].f_3 >= 2)
				{
					if (Local_997.f_36[iVar0 /*10*/].f_6 >= Global_2451157)
					{
						if (!Local_997.f_36[iVar0 /*10*/].f_3 > 0 || bVar2)
						{
							return iVar0;
						}
					}
				}
				iVar0++;
			}
			if (!Local_997.f_36[0 /*10*/].f_3 >= 2)
			{
				if (Local_997.f_36[0 /*10*/].f_6 >= Global_2451157)
				{
					if (!Local_997.f_36[0 /*10*/].f_3 > 0 || bVar2)
					{
						return 0;
					}
				}
				else
				{
					return 1;
				}
			}
			if (!bVar2)
			{
				bVar2 = true;
			}
			else
			{
				return -1;
			}
		}
		iVar1++;
	}
	return -1;
}


void func_6()//Position - 0x5FE
{
	int iVar0;
	int iVar1;
	
	switch (Local_997)
	{
		case 0:
			break;
		
		case 1:
			if (GlobalFunc_5071(&uLocal_289, iLocal_291, 0))
			{
				if (func_9())
				{
					if (Local_997.f_262 != -1)
					{
						iVar1 = Local_997.f_197[Local_997.f_262 /*2*/];
						iVar0 = 0;
						while (iVar0 < 32)
						{
							if (Local_997.f_197[iVar0 /*2*/] == iVar1)
							{
								MISC::CLEAR_BIT(&(Local_997.f_3[iVar0]), 0);
								MISC::CLEAR_BIT(&(Local_997.f_3[iVar0]), 1);
								Local_997.f_197[iVar0 /*2*/] = -1;
								Local_997.f_197[iVar0 /*2*/].f_1 = 0;
							}
							iVar0++;
						}
						Local_997.f_197[Local_997.f_262 /*2*/] = -1;
						Local_997.f_197[Local_997.f_262 /*2*/].f_1 = 0;
					}
					if (func_8())
					{
						Local_997.f_262 = func_2();
					}
					else
					{
						Local_997.f_262 = -1;
					}
					if (Local_997.f_262 != -1)
					{
						MISC::SET_BIT(&(Local_997.f_2), 0);
					}
					MISC::CLEAR_BIT(&(Local_997.f_2), 3);
					MISC::CLEAR_BIT(&(Local_997.f_2), 4);
					Local_997 = 0;
				}
				else
				{
					iLocal_291 = 1000;
					GlobalFunc_434(&uLocal_289);
				}
			}
			else
			{
				if ((30000 - GlobalFunc_1328(&uLocal_289, 0, 0)) < 4000)
				{
					MISC::SET_BIT(&(Local_997.f_2), 4);
				}
				if ((30000 - GlobalFunc_1328(&uLocal_289, 0, 0)) < 3000)
				{
					MISC::SET_BIT(&(Local_997.f_2), 3);
				}
				if (((Local_997.f_262 != -1 && !MISC::IS_BIT_SET(Local_1261[Local_997.f_262 /*5*/].f_2, 6)) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(Local_997.f_197[Local_997.f_262 /*2*/].f_1), -1661.95f, -1127.011f, 12.6973f, 1f, 1f, 2f, 0, 1, 0)) && MISC::IS_BIT_SET(Local_997.f_2, 2))
				{
					if (!MISC::IS_BIT_SET(Local_997.f_2, 1))
					{
						MISC::SET_BIT(&(Local_997.f_2), 1);
					}
				}
				else if (MISC::IS_BIT_SET(Local_997.f_2, 1))
				{
					MISC::CLEAR_BIT(&(Local_997.f_2), 1);
				}
			}
			break;
	}
}


int func_8()//Position - 0x82F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (Local_997.f_197[iVar0 /*2*/] != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_9()//Position - 0x85E
{
	int iVar0;
	
	iVar0 = 30;
	while (iVar0 >= 0)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (MISC::IS_BIT_SET(Local_1261[iVar0 /*5*/].f_2, 9) || MISC::IS_BIT_SET(Local_1261[iVar0 /*5*/].f_2, 10))
			{
				return 0;
			}
		}
		iVar0 = (iVar0 + -1);
	}
	return 1;
}

int func_10()//Position - 0x8B2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Local_997.f_36[iVar0 /*10*/].f_6 = (((360f / 16f) * IntToFloat(iVar0)) - 21.5f);
		iVar0++;
	}
	Local_997.f_36[0 /*10*/].f_6 = (Local_997.f_36[0 /*10*/].f_6 + 360f);
	return 1;
}

int func_11()//Position - 0x908
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (GlobalFunc_252(iVar1, 0, 1))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYER_PED(iVar1), -1662.01f, -1126.869f, 12.6973f, 500f, 500f, 500f, 0, 1, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}



















void func_30()//Position - 0x4E20
{
	switch (Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1)
	{
		case 0:
			if (Local_997 == 1)
			{
				HUD::CLEAR_HELP(1);
				MISC::CLEAR_BIT(&uLocal_288, 1);
				MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 4);
				iLocal_268 = 0;
				Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1 = 1;
			}
			else
			{
				if (MISC::IS_BIT_SET(Local_997.f_2, 0))
				{
					if (Local_997.f_262 != -1)
					{
						if (Global_2451157 != Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_6)
						{
							func_131();
						}
					}
				}
				else
				{
					func_131();
				}
				if (MISC::IS_BIT_SET(Local_997.f_3[NETWORK::PARTICIPANT_ID_TO_INT()], 0))
				{
					Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 = Local_997.f_197[NETWORK::PARTICIPANT_ID_TO_INT() /*2*/];
					if (Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 != -1)
					{
						if (Global_2451157 != Local_997.f_36[Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 /*10*/].f_6)
						{
							if (MISC::IS_BIT_SET(uLocal_288, 0))
							{
								HUD::CLEAR_HELP(1);
								MISC::CLEAR_BIT(&uLocal_288, 0);
							}
							if (!MISC::IS_BIT_SET(uLocal_288, 1))
							{
								if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
								{
									GlobalFunc_159("AMFW_WAIT_OFF", -1);
								}
								else
								{
									GlobalFunc_159("AMFW_WAIT", -1);
								}
								MISC::SET_BIT(&uLocal_288, 1);
							}
						}
						else if (!MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 4))
						{
							MISC::SET_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 4);
							MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 3);
							iLocal_297 = 1;
						}
					}
					else
					{
						MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 3);
						iLocal_297 = 1;
					}
				}
				else if (!MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 8))
				{
					if (((!GlobalFunc_116(0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && VEHICLE::GET_CLOSEST_VEHICLE(-1661.95f, -1127.011f, 12.6973f, 1f, 0, 6) == 0)
					{
						if (!func_126())
						{
							if (!MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1661.95f, -1127.011f, 12.6973f, 1f, 1f, 2f, 0, 1, 0))
								{
									GlobalFunc_1479("AMFW_ENTER", Global_262145.f_6109, -1);
									MISC::SET_BIT(&uLocal_288, 0);
									if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
									{
										func_111();
										MISC::SET_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 3);
									}
								}
								else if (MISC::IS_BIT_SET(uLocal_288, 0))
								{
									HUD::CLEAR_HELP(1);
									MISC::CLEAR_BIT(&uLocal_288, 0);
								}
							}
						}
						else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
						{
						}
					}
				}
			}
			func_85();
			break;
		
		case 1:
			if (Local_997 == 0)
			{
				if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 5) || MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 7))
				{
					func_77();
					func_62(25);
				}
				if (!MISC::IS_BIT_SET(Local_997.f_3[NETWORK::PARTICIPANT_ID_TO_INT()], 0))
				{
					MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 8);
				}
				HUD::CLEAR_HELP(1);
				MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 7);
				MISC::CLEAR_BIT(&uLocal_288, 2);
				MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 11);
				MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 6);
				Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_1 = 0;
				if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
				{
					func_85();
				}
			}
			else
			{
				if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
				{
					if ((Local_997.f_262 != -1 && Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 != -1) && Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 == Local_997.f_197[Local_997.f_262 /*2*/])
					{
						if (!MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 7))
						{
							if (!MISC::IS_BIT_SET(Local_997.f_2, 4))
							{
								GlobalFunc_159("AMFW_GET_OUT", -1);
							}
							GlobalFunc_1475(&uLocal_265, 0);
							GlobalFunc_1475(&uLocal_194, 0);
							GlobalFunc_431(&Local_195, 0, 1);
							MISC::SET_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 7);
						}
						if (!MISC::IS_BIT_SET(Local_997.f_2, 3))
						{
							if (PAD::IS_CONTROL_JUST_PRESSED(2, 23))
							{
								func_58(GlobalFunc_5335(1));
							}
						}
					}
					else
					{
						func_85();
					}
				}
				else if (((!GlobalFunc_116(0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) && VEHICLE::GET_CLOSEST_VEHICLE(-1661.95f, -1127.011f, 12.6973f, 1f, 0, 6) == 0)
				{
					if (!func_126())
					{
						if (MISC::IS_BIT_SET(Local_997.f_2, 1))
						{
							if (Local_997.f_197[Local_997.f_262 /*2*/].f_1 == PLAYER::PLAYER_ID())
							{
								if (!MISC::IS_BIT_SET(Local_997.f_2, 3))
								{
									if (!MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 11))
									{
										func_58(GlobalFunc_5335(1));
										MISC::SET_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 11);
									}
								}
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1661.95f, -1127.011f, 12.6973f, 1f, 1f, 2f, 0, 1, 0))
						{
							if ((!MISC::IS_BIT_SET(Local_997.f_2, 3) && !MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 9)) && Local_997.f_262 != -1)
							{
								if (!Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_3 >= 2)
								{
									if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 8))
									{
										GlobalFunc_159("AMFW_GET_IN", -1);
									}
									else
									{
										GlobalFunc_1479("AMFW_GET_IN_P", Global_262145.f_6109, -1);
									}
									if (PAD::IS_CONTROL_JUST_PRESSED(0, 23))
									{
										if (!MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 8))
										{
											func_111();
										}
										func_58(GlobalFunc_5335(1));
									}
								}
								else if (!MISC::IS_BIT_SET(uLocal_288, 2))
								{
									GlobalFunc_159("AMFW_CAR_FULL", -1);
									MISC::SET_BIT(&uLocal_288, 2);
								}
							}
						}
					}
					else if ((MISC::GET_GAME_TIMER() % 1000) < 50)
					{
					}
				}
				if (Local_997.f_262 != -1)
				{
					if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 9))
					{
						func_50();
					}
					if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 10))
					{
						func_36();
					}
				}
			}
			break;
	}
	if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
	{
		GlobalFunc_7629();
	}
	if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::REMOVE_IPL("ferris_finale_Anim");
	}
	func_31();
}

void func_31()//Position - 0x5457
{
	struct<3> Var0;
	
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(-1666.711f, -1127.518f, 12.6973f, 3f) && (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1666.711f, -1127.518f, 12.6973f, 0.5f, 0.5f, 1f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1666.383f, -1126.286f, 12.6973f, 0.5f, 0.5f, 1f, 0, 1, 0)))
	{
		if (!MISC::IS_BIT_SET(uLocal_288, 5))
		{
			if (((TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_STRAFING(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_434(&uLocal_292);
				MISC::SET_BIT(&uLocal_288, 5);
			}
		}
		else if (GlobalFunc_5071(&uLocal_292, 2000, 0))
		{
			if (((TASK::IS_PED_WALKING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_STRAFING(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.x, Var0.f_1, (Var0.f_2 + 2f), 1, 0, 0, 1);
				MISC::CLEAR_BIT(&uLocal_288, 5);
			}
		}
	}
}





void func_36()//Position - 0x56C1
{
	StringCopy(&cLocal_282, "exit_player_", 24);
	if (Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 == 0)
	{
		StringConCat(&cLocal_282, "one", 24);
	}
	else
	{
		StringConCat(&cLocal_282, "two", 24);
	}
	uLocal_295 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_185, 0f, 0f, 0f, 2, 0, 0, 1065353216, 0, 1065353216);
	NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_295, sLocal_269, &cLocal_282, 8f, -8f, 131072, 0, 1148846080, 0);
	NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_295);
	HUD::CLEAR_HELP(1);
	GlobalFunc_6921(PLAYER::PLAYER_ID(), 1, 0, 1);
	GlobalFunc_9059();
	if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
		}
	}
	func_38(GlobalFunc_5335(0));
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	MISC::SET_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 6);
	MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 7);
	MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 0);
	MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 5);
	MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 10);
	Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_316 = 0;
	func_37(GlobalFunc_5335(1), Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 0);
	Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 = -1;
	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(0);
}

void func_37(int iParam0, var uParam1, int iParam2)//Position - 0x5815
{
	struct<4> Var0;
	
	Var0 = 347;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_3 = iParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 4, iParam0);
	}
}

void func_38(int iParam0)//Position - 0x584B
{
	struct<2> Var0;
	
	Var0 = 343;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}












void func_50()//Position - 0x5E9C
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	
	Var0 = { -1661.914f, -1126.842f, 12.6973f };
	switch (iLocal_296)
	{
		case 0:
			if (GlobalFunc_252(PLAYER::PLAYER_ID(), 1, 1))
			{
				Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3 = Local_997.f_197[Local_997.f_262 /*2*/];
				Local_185 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_160[Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3], 0f, 0f, 0f) };
				if (!Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/][0])
				{
					Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 = 0;
				}
				else if (!Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/][1])
				{
					Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 = 1;
				}
				StringCopy(&cLocal_270, "enter_player_", 24);
				StringCopy(&cLocal_276, "idle_a_player_", 24);
				if (Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4 == 0)
				{
					StringConCat(&cLocal_270, "one", 24);
					StringConCat(&cLocal_276, "one", 24);
				}
				else
				{
					StringConCat(&cLocal_270, "two", 24);
					StringConCat(&cLocal_276, "two", 24);
				}
				GlobalFunc_6921(PLAYER::PLAYER_ID(), 0, 260, 1);
				GlobalFunc_9060(0);
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), Var0, 1f, 20000, 98.6981f, 0.2f);
				Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_316 = 1;
				NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(1);
				GlobalFunc_5076();
				iLocal_296 = 1;
			}
			else
			{
				MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 9);
				func_37(GlobalFunc_5335(1), Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1);
			}
			break;
		
		case 1:
			if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 0 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2106541073) != 1)
			{
				uLocal_294 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_185, 0f, 0f, 0f, 2, 1, 0, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_294, sLocal_269, &cLocal_270, 8f, -8f, 131072, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_294);
				iLocal_296 = 2;
			}
			break;
		
		case 2:
			uVar6 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uLocal_294);
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uVar6) > 0.99f)
			{
				uLocal_294 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(Local_185, 0f, 0f, 0f, 2, 0, 1, 1065353216, 0, 1065353216);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_294, sLocal_269, &cLocal_276, 8f, -8f, 131072, 0, 1148846080, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uLocal_294);
				iLocal_296 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_LOD_DIST(PLAYER::PLAYER_PED_ID(), 1000);
			}
			Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_160[Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
			ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_160[Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3], 0, Var3, 0f, 0f, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0, 0, 0, 2, 1);
			NETWORK::_NETWORK_ALLOW_LOCAL_ENTITY_ATTACHMENT(PLAYER::PLAYER_PED_ID(), 1);
			func_51(GlobalFunc_5335(0), Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, Var3, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
			MISC::SET_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 5);
			MISC::SET_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 0);
			MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 9);
			iLocal_296 = 0;
			func_37(GlobalFunc_5335(1), Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_4, 1);
			break;
	}
}

void func_51(int iParam0, var uParam1, struct<3> Param2, var uParam5)//Position - 0x61DC
{
	struct<7> Var0;
	
	Var0 = 342;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam1;
	Var0.f_3 = { Param2 };
	Var0.f_6 = uParam5;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 7, iParam0);
	}
}







void func_58(int iParam0)//Position - 0x62E5
{
	struct<2> Var0;
	
	Var0 = 345;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}




void func_62(int iParam0)//Position - 0x6439
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!Global_262145.f_6828)
	{
		iVar1 = iParam0;
		iVar2 = -1;
		iVar3 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar0 /*3*/] == iVar1)
			{
				iVar2 = iVar0;
			}
			if (Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar0 /*3*/].f_1)
			{
				iVar3++;
			}
			iVar0++;
		}
		if (iVar2 > -1 && iVar2 < 3)
		{
			if (!Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1)
			{
				Global_2097152[GlobalFunc_177() /*8053*/].f_5756.f_1795[iVar2 /*3*/].f_1 = 1;
				MISC::SET_BIT(&Global_2445620, (8 + iVar2));
				func_71(2094, -1);
				func_66(67, -1);
				STATS::PLAYSTATS_ACTIVITY_DONE(1000, iVar1);
				if (iVar3 < 2)
				{
					GlobalFunc_4989(15, 0);
				}
			}
		}
	}
}




void func_66(int iParam0, int iParam1)//Position - 0x65F9
{
	int iVar0;
	
	iVar0 = GlobalFunc_6881(iParam0, GlobalFunc_4916(iParam1));
	iVar0++;
	GlobalFunc_6880(iParam0, iVar0, iParam1);
}





void func_71(int iParam0, int iParam1)//Position - 0x66AF
{
	int iVar0;
	
	iVar0 = GlobalFunc_6924(iParam0, GlobalFunc_4916(iParam1), 0);
	iVar0++;
	if (!GlobalFunc_243(iParam0))
	{
		GlobalFunc_6923(iParam0, iVar0, iParam1, 1);
	}
	else
	{
		GlobalFunc_6922(iParam0, iVar0, iParam1, 1);
	}
}






void func_77()//Position - 0x6A87
{
	GlobalFunc_5394(&uLocal_226, -1703.854f, -1082.222f, 42.006f, -8.3096f, 0f, -111.8213f, 0, 0);
	func_81(&uLocal_226, &uLocal_265, 0, 0, 1, 1);
	iLocal_189 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_189, "GENERATOR", uLocal_177, "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	iLocal_191 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_191, "SLOW_SQUEAK", uLocal_177, "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	iLocal_192 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_192, "SLOW_SQUEAK", iLocal_160[1], "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	iLocal_190 = AUDIO::GET_SOUND_ID();
	AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_190, "CARRIAGE", iLocal_160[1], "THE_FERRIS_WHALE_SOUNDSET", 0, 0);
	func_78();
	MISC::CLEAR_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 5);
}

void func_78()//Position - 0x6B38
{
	if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
	{
		func_79(&uLocal_249);
		GlobalFunc_431(&Local_195, 0, 1);
		func_81(&uLocal_226, &uLocal_265, 0, 0, 1, 1);
		iLocal_266 = 0;
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
		}
		AUDIO::START_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
	}
}

void func_79(var uParam0)//Position - 0x6B86
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_10))
	{
		func_80(uParam0);
		CAM::DESTROY_CAM(uParam0->f_10, 0);
	}
	uParam0->f_10 = 0;
}

void func_80(var uParam0)//Position - 0x6BAD
{
	if (CAM::DOES_CAM_EXIST(uParam0->f_10))
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		CAM::SET_CAM_ACTIVE(uParam0->f_10, 0);
	}
}

void func_81(var uParam0, var uParam1, bool bParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x6BD5
{
	struct<3> Var0;
	float fVar3;
	
	fVar3 = uParam0->f_15[1];
	if (*uParam0 == 0)
	{
		return;
	}
	GlobalFunc_1475(uParam1, 0);
	Var0 = { uParam0->f_1[0 /*3*/] };
	if (bParam2)
	{
		Var0.f_2 = (Var0.f_2 + uParam0->f_18);
	}
	*uParam1 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", Var0, uParam0->f_8[0 /*3*/], uParam0->f_15[0], 1, 2);
	if (!CAM::DOES_CAM_EXIST(*uParam1))
	{
		return;
	}
	uParam0->f_19 = MISC::GET_GAME_TIMER();
	CAM::SET_CAM_ACTIVE(*uParam1, 1);
	CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	if ((!bParam3 && uParam0->f_20 > 0) && !GlobalFunc_105(uParam0->f_1[1 /*3*/]))
	{
		Var0 = { uParam0->f_1[1 /*3*/] };
		if (bParam2)
		{
			Var0.f_2 = (Var0.f_2 + uParam0->f_18);
		}
		if (fVar3 == 0f)
		{
			fVar3 = uParam0->f_15[0];
		}
		CAM::SET_CAM_PARAMS(*uParam1, Var0, uParam0->f_8[1 /*3*/], fVar3, uParam0->f_20, iParam4, iParam5, 2);
	}
	else if (GlobalFunc_852(uParam0->f_21))
	{
		CAM::POINT_CAM_AT_ENTITY(*uParam1, uParam0->f_21, 0f, 0f, 0f, 1);
	}
}




void func_85()//Position - 0x6DB1
{
	if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iLocal_297 = 1;
		}
		if (!HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 236))
			{
				if (iLocal_266 == 0)
				{
					func_107();
				}
				else
				{
					func_78();
				}
			}
			if ((!MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 4) && !MISC::IS_BIT_SET(Local_997.f_3[NETWORK::PARTICIPANT_ID_TO_INT()], 0)) && !MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 3))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
				{
					MISC::SET_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 3);
					iLocal_297 = 1;
				}
			}
		}
		if (iLocal_266 == 1)
		{
			if (bLocal_193 == 0)
			{
				func_104(&uLocal_249);
			}
			else
			{
				GlobalFunc_4995(&Local_195, 1, 1, 0, 0, 0.1f, 0);
				CAM::SET_CAM_ROT(Local_195, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2) + Local_195.f_14, 2);
				NETWORK::SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(0);
			}
		}
	}
	func_86();
}

void func_86()//Position - 0x6EAB
{
	if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
	{
		if (MISC::IS_BIT_SET(uLocal_288, 4))
		{
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uLocal_298))
			{
				if (iLocal_297)
				{
					Local_986 = { GlobalFunc_1285() };
					GlobalFunc_5330(&uLocal_299);
					GlobalFunc_1282(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 236, 1), "AMFW_BTNCV", &uLocal_299, 0);
					if (!MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 3))
					{
						GlobalFunc_1282(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 51, 1), "AMFW_BTNEX", &uLocal_299, 0);
					}
					iLocal_297 = 0;
				}
				HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
				GlobalFunc_732(1);
				GlobalFunc_1100(1);
				GlobalFunc_5329(&uLocal_298, &Local_986, &uLocal_299, GlobalFunc_1281(&uLocal_299));
			}
		}
		else
		{
			uLocal_298 = unk_0x67D02A194A2FC2BD("instructional_buttons");
			MISC::SET_BIT(&uLocal_288, 4);
		}
	}
	else
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uLocal_298);
		MISC::CLEAR_BIT(&uLocal_288, 4);
		iLocal_297 = 1;
	}
}


















void func_104(var uParam0)//Position - 0x7B17
{
	var uVar0;
	var uVar1;
	float fVar2;
	
	if (!uParam0->f_1 == 1)
	{
		return;
	}
	PAD::_0x7F4724035FDCA1DD(2);
	if (*uParam0 == 1)
	{
		if (MISC::ABSF(PAD::GET_CONTROL_NORMAL(2, 220)) > 0.1f)
		{
			uParam0->f_12 = (uParam0->f_12 - ((PAD::GET_CONTROL_NORMAL(2, 220) * 60f) * SYSTEM::TIMESTEP()));
			if (uParam0->f_15)
			{
				if (uParam0->f_12 < -180f)
				{
					uParam0->f_12 = (uParam0->f_12 + 360f);
				}
				if (uParam0->f_12 > 180f)
				{
					uParam0->f_12 = (uParam0->f_12 - 360f);
				}
			}
			else
			{
				uParam0->f_12 = GlobalFunc_253(uParam0->f_12, -80f, 80f);
			}
		}
		if (MISC::ABSF(PAD::GET_CONTROL_NORMAL(2, 221)) > 0.1f)
		{
			fVar2 = ((PAD::GET_CONTROL_NORMAL(2, 221) * 60f) * SYSTEM::TIMESTEP());
			if (PAD::IS_LOOK_INVERTED())
			{
				fVar2 = (fVar2 * -1f);
			}
			uParam0->f_11 = (uParam0->f_11 - fVar2);
			if (uParam0->f_14)
			{
				if (uParam0->f_11 < -180f)
				{
					uParam0->f_11 = (uParam0->f_11 + 360f);
				}
				if (uParam0->f_11 > 180f)
				{
					uParam0->f_11 = (uParam0->f_11 - 360f);
				}
			}
			else
			{
				uParam0->f_11 = GlobalFunc_253(uParam0->f_11, -30f, 30f);
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 231))
		{
			uParam0->f_11 = 0f;
			uParam0->f_12 = 0f;
		}
		if (MISC::ABSF(PAD::GET_CONTROL_NORMAL(2, 219)) > 0.1f)
		{
			fVar2 = ((PAD::GET_CONTROL_NORMAL(2, 219) * (60f / 2f)) * SYSTEM::TIMESTEP());
			uParam0->f_13 = (uParam0->f_13 + fVar2);
			uParam0->f_13 = GlobalFunc_253(uParam0->f_13, 20f, 50f);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_10))
		{
			CAM::SET_CAM_FOV(uParam0->f_10, uParam0->f_13);
			if (!GlobalFunc_852(uParam0->f_8) && GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
			{
				CAM::SET_CAM_ROT(uParam0->f_10, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2) + Vector(uParam0->f_12, 0f, uParam0->f_11), 2);
			}
			else if (GlobalFunc_852(uParam0->f_8) && GlobalFunc_852(uParam0->f_9))
			{
				GlobalFunc_5395(ENTITY::GET_ENTITY_COORDS(uParam0->f_8, 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_9, 1), &uVar0, &uVar1, 1);
				CAM::SET_CAM_ROT(uParam0->f_10, Vector(uVar1, 0f, uVar0) + Vector(uParam0->f_12, 0f, uParam0->f_11), 2);
			}
		}
	}
}



void func_107()//Position - 0x7E14
{
	struct<3> Var0;
	
	if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_1475(&uLocal_265, 0);
		Local_195.f_20 = 160;
		Local_195.f_21 = 20;
		if (bLocal_193)
		{
			Var0 = { PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, -0.25f, 0f) };
			GlobalFunc_1478(&Local_195, Var0, ENTITY::GET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), 2), 50f, Local_195.f_20, Local_195.f_21, 3, 1101004800, 0, 0, -1082130432, 0);
			CAM::ATTACH_CAM_TO_PED_BONE(Local_195, PLAYER::PLAYER_PED_ID(), 31086, 0f, -0.25f, 0f, 1);
		}
		else
		{
			func_109(&uLocal_249, 1);
			func_108(&uLocal_249, 0, 3000);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
		{
			AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
		}
		AUDIO::START_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	iLocal_266 = 1;
}

int func_108(var uParam0, int iParam1, int iParam2)//Position - 0x7ECE
{
	if (!uParam0->f_1 == 1)
	{
		return 0;
	}
	uParam0->f_13 = 50f;
	if (!CAM::DOES_CAM_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_SCRIPTED_CAMERA", uParam0->f_2, uParam0->f_5, 50f, 1, 2);
	}
	if (GlobalFunc_852(uParam0->f_8))
	{
		CAM::ATTACH_CAM_TO_ENTITY(uParam0->f_10, uParam0->f_8, 0f, 0f, 0f, 1);
	}
	if (*uParam0 == 1)
	{
		if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()) && !GlobalFunc_852(uParam0->f_8))
		{
			CAM::ATTACH_CAM_TO_PED_BONE(uParam0->f_10, PLAYER::PLAYER_PED_ID(), 31086, 0f, 0.2f, 0f, 1);
		}
		uParam0->f_11 = 0f;
		uParam0->f_12 = 0f;
	}
	else if (GlobalFunc_852(uParam0->f_9))
	{
		CAM::POINT_CAM_AT_ENTITY(uParam0->f_10, uParam0->f_9, 0f, 0f, 0f, 1);
	}
	if (CAM::DOES_CAM_EXIST(uParam0->f_10))
	{
		CAM::SET_CAM_ACTIVE(uParam0->f_10, 1);
		CAM::RENDER_SCRIPT_CAMS(1, iParam1, iParam2, 1, 0, 0);
	}
	return 1;
}

void func_109(var uParam0, bool bParam1)//Position - 0x7FB3
{
	*uParam0 = 1;
	uParam0->f_1 = 1;
	uParam0->f_9 = PLAYER::PLAYER_PED_ID();
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
	if (bParam1)
	{
		uParam0->f_15 = 1;
	}
}


void func_111()//Position - 0x80DA
{
	int iVar0;
	
	if (GlobalFunc_470(1) >= Global_262145.f_6109)
	{
		if (MONEY::NETWORK_CAN_SPEND_MONEY(Global_262145.f_6109, 0, 0, 1, -1))
		{
			if (GlobalFunc_218())
			{
				GlobalFunc_8416(1643659499, Global_262145.f_6109, &iVar0, 0, 1);
				Global_2540096[iVar0 /*69*/].f_8.f_1 = 2;
			}
			else
			{
				MONEY::NETWORK_BUY_FAIRGROUND_RIDE(Global_262145.f_6109, 2, 0, 1);
			}
			MISC::SET_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 8);
		}
	}
	else if (!MISC::IS_BIT_SET(uLocal_288, 3))
	{
		GlobalFunc_7677(0, 31, 5);
		MISC::SET_BIT(&uLocal_288, 3);
	}
}















bool func_126()//Position - 0x8881
{
	return (((GlobalFunc_1480() || GlobalFunc_5396()) || GlobalFunc_1001() == 2) || GlobalFunc_1001() == 16);
}





void func_131()//Position - 0x893E
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (iLocal_268 != 0)
	{
		fVar4 = (IntToFloat(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), iLocal_268)) / 1000f);
	}
	iLocal_268 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (((Local_997.f_262 != -1 && MISC::IS_BIT_SET(Local_997.f_2, 0)) && Global_2451157 < Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_6) && (Global_2451157 + (fLocal_178 * fVar4)) > Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_6)
	{
		Global_2451157 = Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_6;
	}
	else
	{
		Global_2451157 = (Global_2451157 + (fLocal_178 * fVar4));
	}
	if (Global_2451157 >= 360f)
	{
		Global_2451157 = (Global_2451157 - 360f);
	}
	if (GlobalFunc_852(uLocal_177))
	{
		ENTITY::SET_ENTITY_COORDS(uLocal_177, Local_179, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_ROTATION(uLocal_177, (-Global_2451157 - (360f / 16f)), 0f, 0f, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_177, true);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		if (GlobalFunc_852(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		AUDIO::SET_AUDIO_SCENE_VARIABLE("FAIRGROUND_RIDES_FERRIS_WHALE", "HEIGHT", (Var1.f_2 - fLocal_188));
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_132(&(Local_997.f_36[iVar0 /*10*/]));
		iVar0++;
	}
}

void func_132(var uParam0)//Position - 0x8A9D
{
	struct<3> Var0;
	
	Var0 = { func_134(uParam0->f_5) };
	if (GlobalFunc_847(iLocal_160[uParam0->f_5]))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_160[uParam0->f_5], Var0, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_160[uParam0->f_5], 1000);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_160[uParam0->f_5], true);
	}
}


Vector3 func_134(int iParam0)//Position - 0x8B10
{
	float fVar0;
	
	fVar0 = ((360f / SYSTEM::TO_FLOAT(16)) * SYSTEM::TO_FLOAT(iParam0));
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_177, 0f, (15.3f * SYSTEM::SIN(fVar0)), (-15.3f * SYSTEM::COS(fVar0)));
}

int func_135()//Position - 0x8B4C
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_269);
	STREAMING::REQUEST_ANIM_DICT(sLocal_159);
	STREAMING::REQUEST_MODEL(iLocal_157);
	STREAMING::REQUEST_MODEL(iLocal_158);
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_269))
	{
		return 0;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_159))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_157))
	{
		return 0;
	}
	if (!STREAMING::HAS_MODEL_LOADED(iLocal_158))
	{
		return 0;
	}
	func_138();
	func_137(GlobalFunc_5335(0));
	func_136(GlobalFunc_5335(0));
	iLocal_296 = 0;
	return 1;
}

void func_136(int iParam0)//Position - 0x8BC1
{
	struct<2> Var0;
	
	Var0 = 341;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

void func_137(int iParam0)//Position - 0x8BEB
{
	struct<2> Var0;
	
	Var0 = 344;
	Var0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 2, iParam0);
	}
}

void func_138()//Position - 0x8C15
{
	int iVar0;
	
	iVar0 = 0;
	Global_2451157 = 0f;
	uLocal_177 = OBJECT::CREATE_OBJECT(iLocal_157, 0f, 1f, 2f, 0, 0, 0);
	ENTITY::SET_ENTITY_COORDS(uLocal_177, Local_179, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_ROTATION(uLocal_177, Global_2451157, 0f, 0f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(uLocal_177, true);
	ENTITY::SET_ENTITY_LOD_DIST(uLocal_177, 1000);
	ENTITY::SET_ENTITY_INVINCIBLE(uLocal_177, 1);
	ENTITY::_0x1A092BB0C3808B96(uLocal_177, 0);
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		AUDIO::START_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_139(&(Local_997.f_36[iVar0 /*10*/]), iVar0);
		iVar0++;
	}
	if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		GlobalFunc_7621(64, 1, 0, 1, 0);
	}
}

void func_139(var uParam0, int iParam1)//Position - 0x8CB6
{
	uParam0->f_5 = iParam1;
	iLocal_160[uParam0->f_5] = OBJECT::CREATE_OBJECT(iLocal_158, 0f, 1f, 2f, 0, 0, 0);
	ENTITY::SET_ENTITY_INVINCIBLE(iLocal_160[uParam0->f_5], 1);
	func_132(uParam0);
}

int func_140()//Position - 0x8CEB
{
	return Local_997.f_1;
}

int func_141(int iParam0)//Position - 0x8CF8
{
	return Local_1261[iParam0 /*5*/];
}

void func_142()//Position - 0x8D07
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 168:
				SCRIPT::GET_EVENT_DATA(1, iVar0, &Var2, 2);
				if (GlobalFunc_252(Var2.f_1, 0, 1))
				{
					if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var2.f_1))
					{
						switch (Var2)
						{
							case 344:
								func_154(iVar0);
								break;
							
							case 342:
								func_153(iVar0);
								break;
							
							case 343:
								func_152(iVar0);
								break;
							
							case 340:
								func_151(iVar0);
								break;
							
							case 341:
								func_149(iVar0);
								break;
							
							case 345:
								func_146(iVar0);
								break;
							
							case 346:
								func_145(iVar0);
								break;
							
							case 347:
								func_144(iVar0);
								break;
							
							case 348:
								func_143(iVar0);
								break;
							}
						}
				}
				break;
		}
		iVar0++;
	}
}

void func_143(int iParam0)//Position - 0x8DEF
{
	struct<3> Var0;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
		{
			Local_997.f_3[Var0.f_2] = 0;
			Local_997.f_197[Var0.f_2 /*2*/] = -1;
			Local_997.f_197[Var0.f_2 /*2*/].f_1 = 0;
			Local_997.f_262 = func_2();
		}
	}
}

void func_144(int iParam0)//Position - 0x8E3E
{
	struct<4> Var0;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
		{
			MISC::CLEAR_BIT(&(Local_997.f_2), 3);
			MISC::CLEAR_BIT(&(Local_997.f_2), 2);
			if ((Local_997.f_262 != -1 && Local_997.f_197[Local_997.f_262 /*2*/] != -1) && Var0.f_2 != -1)
			{
				if (!Var0.f_3)
				{
					Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_3 = (Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_3 - 1);
					Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/][Var0.f_2] = 0;
				}
				else
				{
					Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/].f_3++;
					Local_997.f_36[Local_997.f_197[Local_997.f_262 /*2*/] /*10*/][Var0.f_2] = 1;
				}
			}
		}
	}
}

void func_145(int iParam0)//Position - 0x8F3B
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		if (!Var0.f_2)
		{
			if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
			{
				MISC::SET_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 10);
			}
			else
			{
				MISC::SET_BIT(&(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2), 9);
			}
		}
	}
}

void func_146(int iParam0)//Position - 0x8F93
{
	struct<2> Var0;
	bool bVar2;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
		{
			bVar2 = MISC::IS_BIT_SET(Local_997.f_2, 3);
			func_147(GlobalFunc_924(Var0.f_1), bVar2);
			if (!bVar2)
			{
				MISC::SET_BIT(&(Local_997.f_2), 3);
			}
		}
	}
}

void func_147(int iParam0, bool bParam1)//Position - 0x8FDC
{
	struct<3> Var0;
	
	Var0.x = 346;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = bParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}


void func_149(int iParam0)//Position - 0x901E
{
	struct<2> Var0;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
		{
			func_150(GlobalFunc_924(Var0.f_1));
		}
	}
}

void func_150(int iParam0)//Position - 0x9049
{
	struct<3> Var0;
	
	Var0.x = 340;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = Global_2451157;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}

void func_151(int iParam0)//Position - 0x907B
{
	struct<3> Var0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		Global_2451157 = Var0.f_2;
	}
}

void func_152(int iParam0)//Position - 0x909B
{
	struct<2> Var0;
	var uVar2;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		uVar2 = PLAYER::GET_PLAYER_PED(Var0.f_1);
		if (GlobalFunc_252(Var0.f_1, 1, 1))
		{
			NETWORK::_NETWORK_ALLOW_LOCAL_ENTITY_ATTACHMENT(uVar2, 1);
			ENTITY::DETACH_ENTITY(uVar2, 0, 1);
		}
	}
}

void func_153(int iParam0)//Position - 0x90D9
{
	struct<7> Var0;
	var uVar7;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 7))
	{
		if (Var0.f_2 != -1)
		{
			uVar7 = PLAYER::GET_PLAYER_PED(Var0.f_1);
			if (GlobalFunc_252(Var0.f_1, 1, 1))
			{
				NETWORK::_NETWORK_ALLOW_LOCAL_ENTITY_ATTACHMENT(uVar7, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uVar7, iLocal_160[Var0.f_2], 0, Var0.f_3, 0f, 0f, Var0.f_6, 0, 0, 0, 0, 2, 1);
			}
		}
	}
}

void func_154(int iParam0)//Position - 0x913B
{
	struct<2> Var0;
	struct<3> Var2;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
	{
		if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
		{
			NETWORK::_NETWORK_ALLOW_LOCAL_ENTITY_ATTACHMENT(PLAYER::PLAYER_PED_ID(), 1);
			Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_160[Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
			func_51(GlobalFunc_924(Var0.f_1), Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_3, Var2, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
		}
	}
}


















void func_172()//Position - 0x94A6
{
	GlobalFunc_5397(&uLocal_39, 3, 4, "SCRIPT\FERRIS_WHALE_01", 0);
	GlobalFunc_5397(&uLocal_39, 4, 4, "SCRIPT\FERRIS_WHALE_02", 0);
}



void func_175()//Position - 0x95C6
{
	func_180();
	GlobalFunc_7632(0);
	GlobalFunc_1475(&uLocal_265, 0);
	GlobalFunc_1475(&uLocal_194, 0);
	GlobalFunc_431(&Local_195, 0, 1);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	Global_1582596[PLAYER::PLAYER_ID() /*324*/].f_316 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
			GlobalFunc_9059();
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	GlobalFunc_6925(&uLocal_39);
	BRAIN::_0x6D6840CEE8845831("fairgroundHub");
	SCRIPT::TERMINATE_THIS_THREAD();
}





void func_180()//Position - 0x9901
{
	int iVar0;
	
	if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		GlobalFunc_7621(64, 0, 0, 1, 0);
	}
	iVar0 = 0;
	while (iVar0 < Local_997.f_36)
	{
		func_183(&(Local_997.f_36[iVar0 /*10*/]));
		iVar0++;
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE"))
	{
		AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW"))
	{
		AUDIO::STOP_AUDIO_SCENE("FAIRGROUND_RIDES_FERRIS_WHALE_ALTERNATIVE_VIEW");
	}
	GlobalFunc_894(&iLocal_192);
	GlobalFunc_894(&iLocal_192);
	GlobalFunc_894(&iLocal_189);
	GlobalFunc_894(&iLocal_190);
	GlobalFunc_130(&uLocal_177);
}



void func_183(var uParam0)//Position - 0x99CE
{
	if (iLocal_160[uParam0->f_5] == 0)
	{
		return;
	}
	GlobalFunc_130(&(iLocal_160[uParam0->f_5]));
	iLocal_160[uParam0->f_5] = 0;
}

int func_184(struct<20> Param0)//Position - 0x99FA
{
	GlobalFunc_5238(GlobalFunc_907(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(0);
	GlobalFunc_5092(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_997, 264);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_1261, 161);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	Local_1261[NETWORK::PARTICIPANT_ID_TO_INT() /*5*/] = 0;
	func_185(GlobalFunc_5335(1));
	return 1;
}

void func_185(int iParam0)//Position - 0x9A4A
{
	struct<3> Var0;
	
	Var0.x = 348;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 3, iParam0);
	}
}






