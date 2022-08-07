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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
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
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<2> Local_51[2];
	struct<2> Local_56[4];
	struct<13> Local_65[4];
	var uLocal_118 = 16;
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
	struct<6> Local_283 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_289 = 0;
	var uLocal_290 = 1092616192;
	var uLocal_291 = 1101004800;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 3;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	var uLocal_311 = 0;
	int iLocal_312 = 0;
	char cLocal_313[128] = "";
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	var uLocal_338 = 0;
	int iLocal_339 = 0;
	var uLocal_340 = 30;
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
	var uLocal_491 = 10;
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
	var uLocal_542 = 10;
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
	var uLocal_613 = 20;
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
	var uLocal_714 = 20;
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
	var uLocal_815 = 30;
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
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 5;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 7;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 5;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 3;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 15;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 10;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 5;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 5;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	int iLocal_1320 = 0;
	int iLocal_1321 = 0;
	int iLocal_1322 = 0;
	int iLocal_1323 = 0;
	int iLocal_1324 = 0;
	bool bLocal_1325 = 0;
	int iLocal_1326 = 0;
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
	sLocal_17 = "NULL";
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
	Local_48 = { 692.8256f, -1012.544f, 21.722f };
	StringCopy(&cLocal_313, "", 64);
	iLocal_329 = 1;
	iLocal_337 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("JHP1B_FAIL");
		GlobalFunc_10632();
		func_470();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	MISC::SET_MISSION_FLAG(1);
	func_465();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_JewelStoreJobPrep1B", 0);
		GlobalFunc_8012(&uLocal_340);
		func_463();
		func_166();
		if (!bLocal_1325)
		{
			func_138();
			func_1();
		}
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.8f);
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xFB
{
	switch (iLocal_1321)
	{
		case 0:
			func_133();
			break;
		
		case 1:
			func_28();
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()//Position - 0x132
{
	switch (iLocal_1322)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_1322++;
			break;
		
		case 1:
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
			GlobalFunc_173(&uLocal_118, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
			GlobalFunc_173(&uLocal_118, 3, 0, "LESTER", 0, 1);
			if (GlobalFunc_10638(&uLocal_118, 12, "JHFAUD", "JHF_CARB", 7, 1, 0, 0, 0))
			{
				iLocal_1322++;
			}
			break;
		
		case 2:
			if (!GlobalFunc_111())
			{
				func_3();
			}
			break;
	}
}

void func_3()//Position - 0x1D1
{
	GlobalFunc_5103(0, 1);
	GlobalFunc_45(1, 1);
	func_470();
}

























void func_28()//Position - 0xC8A
{
	switch (iLocal_1322)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			AUDIO::TRIGGER_MUSIC_EVENT("JHP1B_VAN");
			GlobalFunc_10606(0f, 0f, 0f, -1f, 0, 145);
			GlobalFunc_574(906, 0);
			iLocal_337 = 0;
			iLocal_1322++;
			break;
		
		case 1:
			if (!iLocal_337)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("JHP1B_STOP");
					GlobalFunc_571(1, 906);
					RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
					iLocal_337 = 1;
				}
			}
			if (GlobalFunc_9194(&Local_283, Local_48, 0.1f, 0.1f, 2f, 1, Local_51[0 /*2*/], "JHP1B_RTNVAN", "", "JHP1B_BACK_VAN", 1, 0, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_283.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_51[0 /*2*/], 692.9143f, -1003.556f, 21.50839f, 692.6511f, -1021.604f, 26.20675f, 9.75f, 0, 1, 0)))
			{
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_51[0 /*2*/], 0);
				GlobalFunc_5652(&Local_283, 1, 0);
				GlobalFunc_571(1, 906);
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				iLocal_1322++;
			}
			break;
		
		case 2:
			if (GlobalFunc_530(Local_51[0 /*2*/], 10.5f, -1, 1056964608, 0, 1))
			{
				if (VEHICLE::IS_VEHICLE_SIREN_ON(Local_51[0 /*2*/]))
				{
					VEHICLE::SET_VEHICLE_SIREN(Local_51[0 /*2*/], 0);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_51[0 /*2*/], 0, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_2571(1);
				GlobalFunc_2536(1, 0);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_51[0 /*2*/], 0))
				{
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_51[0 /*2*/], 0);
				}
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				GlobalFunc_173(&uLocal_118, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				GlobalFunc_173(&uLocal_118, 3, 0, "LESTER", 0, 1);
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				iLocal_1322++;
			}
			break;
		
		case 3:
			if (GlobalFunc_10638(&uLocal_118, 12, "JHFAUD", "JHF_CARB", 7, 1, 0, 0, 0))
			{
				RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
				iLocal_1322++;
			}
			break;
		
		case 4:
			if (!GlobalFunc_111())
			{
				func_3();
			}
			break;
	}
}









































































































void func_133()//Position - 0x71B6
{
	bool bVar0;
	int iVar1;
	
	switch (iLocal_339)
	{
		case 0:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_65[iVar1 /*13*/]) && !PED::IS_PED_INJURED(Local_65[iVar1 /*13*/]))
					{
						if (PED::IS_PED_IN_COMBAT(Local_65[iVar1 /*13*/], PLAYER::PLAYER_PED_ID()))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (bVar0)
				{
					PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.5f, 1);
					HUD::FLASH_ABILITY_BAR(20000);
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						GlobalFunc_159("JHP1B_HLP_SPCL1_KM", 10000);
					}
					else
					{
						GlobalFunc_159("JHP1B_HLP_SPCL1", 10000);
					}
					iLocal_339++;
				}
			}
			break;
		
		case 1:
			if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				GlobalFunc_159("JHP1B_HLP_SPCL2", 10000);
				iLocal_339++;
			}
			break;
	}
	switch (iLocal_1322)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (GlobalFunc_2773(Local_51[0 /*2*/]) && !HUD::DOES_BLIP_EXIST(Local_51[0 /*2*/].f_1))
			{
				if (HUD::GET_BLIP_FROM_ENTITY(Local_51[0 /*2*/]) != 0)
				{
					Local_51[0 /*2*/].f_1 = HUD::GET_BLIP_FROM_ENTITY(Local_51[0 /*2*/]);
				}
				else
				{
					Local_51[0 /*2*/].f_1 = GlobalFunc_6783(Local_51[0 /*2*/], 0, 0);
				}
			}
			GlobalFunc_164("JHP1B_STEAL_VAN", 7500, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("JHP1B_START");
			iLocal_337 = 1;
			iLocal_332 = 1;
			iLocal_1322++;
			break;
		
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_51[0 /*2*/], 0))
			{
				if (HUD::DOES_BLIP_EXIST(Local_51[0 /*2*/].f_1))
				{
					MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
					HUD::REMOVE_BLIP(&(Local_51[0 /*2*/].f_1));
					MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
				}
				func_134(1);
				iLocal_1322 = 0;
			}
			break;
	}
}

int func_134(int iParam0)//Position - 0x736A
{
	if (iLocal_1320 == 0)
	{
		iLocal_1323 = iParam0;
		iLocal_1320 = 1;
		return 1;
	}
	return 0;
}




void func_138()//Position - 0x73FF
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_56[iVar0 /*2*/]))
		{
			if (PED::IS_PED_INJURED(Local_56[iVar0 /*2*/]))
			{
				GlobalFunc_132(&(Local_56[iVar0 /*2*/]), 1, 0, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_51[iVar0 /*2*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_51[iVar0 /*2*/], 0))
			{
				if (Local_51[iVar0 /*2*/] == Local_51[0 /*2*/])
				{
					func_154(2);
				}
				GlobalFunc_131(&(Local_51[iVar0 /*2*/]));
			}
			else if (Local_51[iVar0 /*2*/] == Local_51[0 /*2*/])
			{
				if (GlobalFunc_2250(&(Local_51[0 /*2*/])))
				{
					func_154(2);
					GlobalFunc_131(&(Local_51[iVar0 /*2*/]));
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[iVar0 /*13*/]))
		{
			if (PED::IS_PED_INJURED(Local_65[iVar0 /*13*/]))
			{
				if (HUD::DOES_BLIP_EXIST(Local_65[iVar0 /*13*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_65[iVar0 /*13*/].f_1));
				}
				if (Local_65[iVar0 /*13*/].f_11 == 0)
				{
					Local_65[iVar0 /*13*/].f_11 = 1;
				}
				GlobalFunc_132(&(Local_65[iVar0 /*13*/]), 1, 0, 1);
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(Local_65[iVar0 /*13*/], 0))
			{
				PED::SET_PED_CONFIG_FLAG(Local_65[iVar0 /*13*/], 330, 0);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(Local_65[iVar0 /*13*/], 330, 1);
			}
		}
		iVar0++;
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (GlobalFunc_2773(Local_51[0 /*2*/]))
	{
		if (!iLocal_330)
		{
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_51[0 /*2*/], 1))
				{
					AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_JSH_PREP_1B_01", 0f);
					iLocal_330 = 1;
				}
			}
		}
		bVar1 = true;
		iVar2 = 0;
		while (iVar2 <= (4 - 1))
		{
			if (GlobalFunc_2773(Local_65[iVar2 /*13*/]))
			{
				bVar1 = false;
			}
			iVar2++;
		}
		if (iLocal_329)
		{
			if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_51[0 /*2*/], 0) || func_148(Local_51[0 /*2*/])) || bVar1)
			{
				MISC::ENABLE_DISPATCH_SERVICE(1, 1);
				MISC::ENABLE_DISPATCH_SERVICE(8, 1);
				MISC::ENABLE_DISPATCH_SERVICE(2, 1);
				MISC::ENABLE_DISPATCH_SERVICE(6, 1);
				MISC::ENABLE_DISPATCH_SERVICE(4, 1);
				MISC::ENABLE_DISPATCH_SERVICE(12, 1);
				MISC::ENABLE_DISPATCH_SERVICE(5, 1);
				iLocal_329 = 0;
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
			}
		}
		if (bVar1)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_51[0 /*2*/], 0))
			{
				if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_51[0 /*2*/]))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_51[0 /*2*/], -1, 2048, 1);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
			GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1);
		}
		else
		{
			GlobalFunc_504(0, -1);
			GlobalFunc_503(0, -1);
		}
		GlobalFunc_504(PLAYER::PLAYER_PED_ID(), -1);
	}
	func_145();
	func_139();
}

void func_139()//Position - 0x76DC
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	switch (iLocal_332)
	{
		case 0:
			iLocal_332 = 1;
			break;
		
		case 1:
			if (!iLocal_331)
			{
				func_144();
				func_142();
			}
			else
			{
				iLocal_332 = 2;
				iLocal_333 = 0;
			}
			break;
		
		case 2:
			switch (iLocal_333)
			{
				case 0:
					PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					iVar0 = 0;
					while (iVar0 <= (4 - 1))
					{
						if (GlobalFunc_2773(Local_65[iVar0 /*13*/]) && GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_TO_LOAD_COVER(Local_65[iVar0 /*13*/], 0);
							PED::SET_PED_CONFIG_FLAG(Local_65[iVar0 /*13*/], 184, 0);
							if (iVar0 != 0)
							{
								switch (iVar0)
								{
									case 1:
										iVar1 = 300;
										break;
									
									case 2:
										iVar1 = 3000;
										break;
									
									case 3:
										iVar1 = 3300;
										break;
								}
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_65[iVar0 /*13*/], 0))
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(Local_65[iVar0 /*13*/], iVar1, 65536);
								}
							}
						}
						iVar0++;
					}
					iLocal_333 = 1;
					break;
				
				case 1:
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
					{
						bVar2 = true;
						iVar0 = 0;
						while (iVar0 <= (4 - 1))
						{
							if (GlobalFunc_2773(Local_65[iVar0 /*13*/]) && GlobalFunc_156(Local_51[0 /*2*/], Local_65[iVar0 /*13*/], 1) < 100f)
							{
								switch (iVar0)
								{
									case 0:
										iVar3 = -1;
										break;
									
									case 1:
										iVar3 = 0;
										break;
									
									case 2:
										iVar3 = 1;
										break;
									
									case 3:
										iVar3 = 2;
										break;
								}
								if (!PED::IS_PED_IN_VEHICLE(Local_65[iVar0 /*13*/], Local_51[0 /*2*/], 1))
								{
									if (!GlobalFunc_2664(Local_65[iVar0 /*13*/], -1794415470, 1))
									{
										TASK::TASK_ENTER_VEHICLE(Local_65[iVar0 /*13*/], Local_51[0 /*2*/], -1, iVar3, 2f, 1, 0);
									}
								}
								else
								{
									TASK::CLEAR_PED_TASKS(Local_65[iVar0 /*13*/]);
								}
								bVar2 = false;
							}
							else
							{
								GlobalFunc_132(&(Local_65[0 /*13*/]), 1, 0, 1);
							}
							iVar0++;
						}
						if (bVar2)
						{
							iLocal_332 = 3;
						}
						else
						{
							iLocal_331 = 0;
							iLocal_332 = 1;
							iLocal_334 = 2;
						}
					}
					break;
			}
			break;
	}
}



void func_142()//Position - 0x798A
{
	struct<3> Var0;
	struct<3> Var3;
	
	if ((GlobalFunc_2773(Local_51[0 /*2*/]) && GlobalFunc_2773(Local_65[0 /*13*/])) && GlobalFunc_2773(Local_65[3 /*13*/]))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51[0 /*2*/], 0f, 10f, 5.5f) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_51[0 /*2*/], 0f, 0f, -6f) };
		if (!VEHICLE::IS_VEHICLE_SIREN_ON(Local_51[0 /*2*/]))
		{
			VEHICLE::_0x9BECD4B9FEF3F8A6(Local_51[0 /*2*/], 1);
			VEHICLE::SET_VEHICLE_SIREN(Local_51[0 /*2*/], 1);
		}
		switch (iLocal_334)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, 5f, 0, 1, 0))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_335) > 1000)
					{
						TASK::CLEAR_PED_TASKS(Local_65[0 /*13*/]);
						VEHICLE::BRING_VEHICLE_TO_HALT(Local_51[0 /*2*/], 4f, 1, 0);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_308);
						if (PED::IS_PED_IN_ANY_VEHICLE(Local_65[3 /*13*/], 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
						}
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 3f, 1082130432, 1, 0, -957453492);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_308);
						TASK::TASK_PERFORM_SEQUENCE(Local_65[3 /*13*/], uLocal_308);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_308);
						iLocal_334 = 1;
					}
				}
				else
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_65[3 /*13*/], 0) && PED::IS_PED_IN_ANY_VEHICLE(Local_65[0 /*13*/], 0))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_51[0 /*2*/]))
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_65[0 /*13*/], Local_51[0 /*2*/], &cLocal_313, 786469, 0, 24, -1, 25f, 0, 1073741824);
						}
						VEHICLE::_0x88BC673CA9E0AE99(Local_51[0 /*2*/], 1);
						VEHICLE::_0x9BECD4B9FEF3F8A6(Local_51[0 /*2*/], 0);
						VEHICLE::_0x2C4A1590ABF43E8B(Local_51[0 /*2*/], 1);
					}
					iLocal_335 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 1:
				switch (iLocal_336)
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_65[3 /*13*/], 0))
						{
							GlobalFunc_173(&uLocal_118, 1, Local_65[3 /*13*/], "SWAT1", 0, 1);
							if (GlobalFunc_10618(&uLocal_118, "JP1bAUD", "JP1b_WANDER", 7, 0, 0, 0))
							{
								iLocal_335 = MISC::GET_GAME_TIMER();
								iLocal_336++;
							}
						}
						break;
					
					case 1:
						if ((MISC::GET_GAME_TIMER() - iLocal_335) > 5000 && !GlobalFunc_111())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_65[3 /*13*/], 0))
							{
								GlobalFunc_173(&uLocal_118, 1, Local_65[3 /*13*/], "SWAT1", 0, 1);
								if (GlobalFunc_10618(&uLocal_118, "JP1bAUD", "JP1b_WANDER", 7, 0, 0, 0))
								{
									iLocal_335 = MISC::GET_GAME_TIMER();
									iLocal_336++;
								}
							}
						}
						break;
					
					case 2:
						if ((MISC::GET_GAME_TIMER() - iLocal_335) > 5000 && !GlobalFunc_111())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_65[3 /*13*/], 0))
							{
								GlobalFunc_173(&uLocal_118, 1, Local_65[3 /*13*/], "SWAT1", 0, 1);
								if (GlobalFunc_10618(&uLocal_118, "JP1bAUD", "JP1b_WANDER", 7, 0, 0, 0))
								{
									iLocal_335 = MISC::GET_GAME_TIMER();
									iLocal_336++;
								}
							}
						}
						break;
					
					case 3:
						if ((MISC::GET_GAME_TIMER() - iLocal_335) > 8000 && !GlobalFunc_111())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(Local_65[3 /*13*/], 0))
							{
								GlobalFunc_173(&uLocal_118, 1, Local_65[3 /*13*/], "SWAT1", 0, 1);
								if (GlobalFunc_10618(&uLocal_118, "JP1bAUD", "JP1b_WANDER", 7, 0, 0, 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_308);
									TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 4f, 1082130432, 1, 0, -957453492);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_308);
									TASK::TASK_PERFORM_SEQUENCE(Local_65[3 /*13*/], uLocal_308);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_308);
									iLocal_335 = MISC::GET_GAME_TIMER();
									iLocal_336++;
								}
							}
						}
						break;
					
					case 4:
						break;
				}
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, 5f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_65[3 /*13*/], 1630799643) != 1)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(Local_65[3 /*13*/], PLAYER::PLAYER_PED_ID(), -1, 0);
					}
					if (SYSTEM::TIMERA() > 3000)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(Local_65[3 /*13*/], 0))
						{
							TASK::TASK_ENTER_VEHICLE(Local_65[3 /*13*/], Local_51[0 /*2*/], -1, 2, 2f, 1, 0);
						}
						iLocal_334 = 2;
					}
				}
				else
				{
					if (iLocal_336 == 4)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_335) > 8000 && !GlobalFunc_111())
						{
							TASK::TASK_ARREST_PED(Local_65[3 /*13*/], PLAYER::PLAYER_PED_ID());
							iLocal_331 = 1;
						}
					}
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, 5f, 0, 1, 0))
				{
					iLocal_334 = 0;
				}
				else if ((((!GlobalFunc_2773(Local_65[0 /*13*/]) || PED::IS_PED_IN_ANY_VEHICLE(Local_65[0 /*13*/], 0)) && (!GlobalFunc_2773(Local_65[1 /*13*/]) || PED::IS_PED_IN_ANY_VEHICLE(Local_65[1 /*13*/], 0))) && (!GlobalFunc_2773(Local_65[2 /*13*/]) || PED::IS_PED_IN_ANY_VEHICLE(Local_65[2 /*13*/], 0))) && (!GlobalFunc_2773(Local_65[3 /*13*/]) || PED::IS_PED_IN_ANY_VEHICLE(Local_65[3 /*13*/], 0)))
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_65[0 /*13*/], Local_51[0 /*2*/], &cLocal_313, 786469, 0, 24, -1, 25f, 0, 1073741824);
					iLocal_334 = 0;
				}
				break;
			}
	}
}


void func_144()//Position - 0x7EC3
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_309, 1);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (GlobalFunc_2773(Local_65[iVar0 /*13*/]))
		{
			if ((((((((PED::IS_PED_IN_COMBAT(Local_65[iVar0 /*13*/], PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_MELEE_COMBAT(Local_65[iVar0 /*13*/])) || PED::IS_PED_BEING_STUNNED(Local_65[iVar0 /*13*/], 0)) || PED::IS_PED_BEING_STEALTH_KILLED(Local_65[iVar0 /*13*/])) || PED::IS_PED_BEING_JACKED(Local_65[iVar0 /*13*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_65[iVar0 /*13*/], PLAYER::PLAYER_PED_ID(), 1)) || PED::HAS_PED_RECEIVED_EVENT(Local_65[iVar0 /*13*/], 122)) || PED::HAS_PED_RECEIVED_EVENT(Local_65[iVar0 /*13*/], 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_65[iVar0 /*13*/], 123))
			{
				iLocal_331 = 1;
			}
			else if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_65[iVar0 /*13*/], PLAYER::PLAYER_PED_ID()) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_65[iVar0 /*13*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_65[iVar0 /*13*/])))
			{
				if (WEAPON::GET_WEAPONTYPE_GROUP(iLocal_309) != joaat("GROUP_MELEE") && iLocal_309 != joaat("weapon_unarmed"))
				{
					if ((MISC::GET_GAME_TIMER() - Local_65[iVar0 /*13*/].f_10) > 800)
					{
						iLocal_331 = 1;
					}
				}
			}
			else
			{
				Local_65[iVar0 /*13*/].f_10 = MISC::GET_GAME_TIMER();
			}
		}
		iVar0++;
	}
	if (GlobalFunc_2773(Local_51[0 /*2*/]))
	{
		if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[0 /*2*/], PLAYER::PLAYER_PED_ID(), 0) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), Local_51[0 /*2*/], 0, -1)) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_51[0 /*2*/]))
		{
			iLocal_331 = 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Local_51[0 /*2*/]))
				{
					iLocal_331 = 1;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 7.5f)
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_51[0 /*2*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1))
				{
					iLocal_331 = 1;
				}
			}
			else
			{
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_51[0 /*2*/]);
			}
		}
	}
	else
	{
		iLocal_331 = 1;
	}
}

void func_145()//Position - 0x80FE
{
	if (GlobalFunc_2773(Local_51[0 /*2*/]) && GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_51[0 /*2*/], 457.5762f, -1014.587f, 23f, 427.6368f, -1014.974f, 33f, 27f, 0, 1, 0))
		{
			if (GlobalFunc_2773(Local_65[0 /*13*/]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_65[0 /*13*/], Local_51[0 /*2*/], 0))
				{
					func_154(4);
				}
			}
		}
	}
	if (GlobalFunc_2773(Local_51[0 /*2*/]) && GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[0 /*2*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 700f)
		{
			func_154(3);
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_51[0 /*2*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 600f)
		{
			if (!iLocal_312)
			{
				if (iLocal_332 == 1)
				{
					GlobalFunc_164("JHP1B_WARN_ESC", 7500, 1);
				}
				else
				{
					GlobalFunc_164("JHP1B_WARN_LVE", 7500, 1);
				}
				iLocal_312 = 1;
			}
		}
		else
		{
			iLocal_312 = 0;
		}
	}
}



int func_148(var uParam0)//Position - 0x8288
{
	int iVar0;
	int iVar1;
	
	if ((GlobalFunc_IsPedNotInjuredOrDead(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && GlobalFunc_4940(uParam0))
	{
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (GlobalFunc_4940(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("towtruck") || iVar1 == joaat("towtruck2"))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, uParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}






void func_154(int iParam0)//Position - 0x83EF
{
	char* sVar0;
	
	AUDIO::TRIGGER_MUSIC_EVENT("JHP1B_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 2:
			sVar0 = "JHP1B_VAN_DEAD";
			break;
		
		case 3:
			sVar0 = "JHP1B_ABAN";
			break;
		
		case 4:
			sVar0 = "JHP1B_STAT";
			break;
		
		default:
			sVar0 = "";
			break;
	}
	GlobalFunc_10835(sVar0);
	while (!GlobalFunc_145())
	{
		SYSTEM::WAIT(0);
	}
	func_470();
	SCRIPT::TERMINATE_THIS_THREAD();
}












void func_166()//Position - 0x9300
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_1325 == 1)
	{
		if (iLocal_1320 == 0)
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(800);
				}
			}
			else
			{
				func_134(iLocal_1326);
			}
		}
		else if (iLocal_1320 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			func_457();
			GlobalFunc_762(&uLocal_340);
			if (!GlobalFunc_188())
			{
				func_454(iLocal_1326, &Var0, &uVar3);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_5184(&uLocal_340, Var0, 50f, 0);
			}
			func_449(iLocal_1321);
			while (!GlobalFunc_7725(&uLocal_340))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_1321)
			{
				case 0:
					func_428();
					break;
				
				case 2:
					func_423();
					break;
			}
			func_167();
			bLocal_1325 = false;
			if (!GlobalFunc_188())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
}

void func_167()//Position - 0x93FB
{
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_118, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(PLAYER::PLAYER_PED_ID(), 1);
		func_168(PLAYER::PLAYER_PED_ID());
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
	if (GlobalFunc_2773(Local_51[0 /*2*/]))
	{
		uLocal_310 = OBJECT::CREATE_OBJECT(joaat("prop_box_ammo03a"), ENTITY::GET_ENTITY_COORDS(Local_51[0 /*2*/], 1), 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_310, Local_51[0 /*2*/], 0, 0f, -1.77f, 0f, 0f, 0f, 90f, 0, 0, 0, 0, 2, 1);
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_51[0 /*2*/]);
	}
}

void func_168(int iParam0)//Position - 0x9489
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
				if (GlobalFunc_3021(iParam0) != Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0])
				{
					GlobalFunc_521(iVar0);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1619[iVar0] = GlobalFunc_3021(iParam0);
				}
			}
		}
		GlobalFunc_11309(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
		if (!Global_89948[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!GlobalFunc_526(49))
				{
					iVar1 = GlobalFunc_11028(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					GlobalFunc_11185(GlobalFunc_4917(0), 12, 16, 0, 0, 0, 0);
				}
				if (!GlobalFunc_526(44))
				{
					iVar1 = GlobalFunc_11028(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = GlobalFunc_11028(iParam0, 4, -1);
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
				iVar1 = GlobalFunc_11028(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				GlobalFunc_521(iVar0);
				GlobalFunc_11309(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar0 /*65*/]), 0);
			}
		}
		Global_89948[iVar0] = 1;
	}
}































































































































































































































































void func_423()//Position - 0x506C1
{
	Local_51[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("fbi2"), 693.7152f, -1005.217f, 21.8993f, 180.4314f, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(Local_51[0 /*2*/], ENTITY::GET_ENTITY_HEALTH(Local_51[0 /*2*/]) * 2);
	VEHICLE::SET_VEHICLE_STRONG(Local_51[0 /*2*/], 1);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_51[0 /*2*/], (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_51[0 /*2*/]) * 2f));
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Local_51[0 /*2*/], 0);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_51[0 /*2*/], (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_51[0 /*2*/]) * 2f));
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_51[0 /*2*/], 1);
	VEHICLE::SET_VEHICLE_CAN_BREAK(Local_51[0 /*2*/], 0);
	VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_51[0 /*2*/], 5, 0);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_51[0 /*2*/], 0);
	GlobalFunc_743(Local_51[0 /*2*/], 0);
	if (GlobalFunc_188())
	{
		GlobalFunc_5108(Local_51[0 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_51[0 /*2*/], -1);
	}
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_51[0 /*2*/], 1), 100f, 1, 0, 0, 0);
}





void func_428()//Position - 0x508D8
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	
	TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_313, 0, &Var0);
	TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_313, 1, &Var3);
	uVar6 = GlobalFunc_830(Var0, Var3);
	MISC::CLEAR_AREA_OF_VEHICLES(Var0, 20f, 0, 0, 0, 0, 0);
	while (!func_430(&(Local_51[1 /*2*/]), 0, Var0, uVar6, 1, 0))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA_OF_VEHICLES(Var0, 20f, 0, 0, 0, 0, 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 1);
	TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_313, 10, &Var0);
	TASK::WAYPOINT_RECORDING_GET_COORD(&cLocal_313, 11, &Var3);
	uVar6 = GlobalFunc_830(Var0, Var3);
	MISC::CLEAR_AREA_OF_VEHICLES(Var0, 20f, 0, 0, 0, 0, 0);
	Local_51[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("fbi2"), Var0, uVar6, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(Local_51[0 /*2*/], ENTITY::GET_ENTITY_HEALTH(Local_51[0 /*2*/]) * 2);
	VEHICLE::SET_VEHICLE_STRONG(Local_51[0 /*2*/], 1);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_51[0 /*2*/], (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_51[0 /*2*/]) * 2f));
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Local_51[0 /*2*/], 0);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_51[0 /*2*/], (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_51[0 /*2*/]) * 2f));
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_51[0 /*2*/], 1);
	VEHICLE::SET_VEHICLE_CAN_BREAK(Local_51[0 /*2*/], 0);
	VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(Local_51[0 /*2*/], 5, 0);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_51[0 /*2*/], 0);
	GlobalFunc_743(Local_51[0 /*2*/], 0);
	iVar7 = 0;
	while (iVar7 <= 3)
	{
		if (!GlobalFunc_2773(Local_65[iVar7 /*13*/]))
		{
			func_429(iVar7, Local_51[0 /*2*/], 0);
		}
		iVar7++;
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_5108(Local_51[1 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_51[1 /*2*/], -1);
	}
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	if (GlobalFunc_2773(Local_65[0 /*13*/]) && GlobalFunc_2773(Local_51[0 /*2*/]))
	{
		TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_65[0 /*13*/], Local_51[0 /*2*/], &cLocal_313, 786469, 0, 24, -1, 25f, 0, 1073741824);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_65[0 /*13*/], 0, 0);
	}
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(Local_51[0 /*2*/], 1), 100f, 1, 0, 0, 0);
}

void func_429(int iParam0, var uParam1, bool bParam2)//Position - 0x50AE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam2)
	{
		iVar1 = joaat("s_m_y_cop_01");
		iVar2 = joaat("weapon_pistol");
	}
	else
	{
		iVar1 = joaat("s_m_y_swat_01");
		iVar2 = joaat("weapon_smg");
	}
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 2;
	}
	Local_65[iParam0 /*13*/] = PED::CREATE_PED_INSIDE_VEHICLE(uParam1, 6, iVar1, iVar0, 1, 1);
	PED::SET_PED_AS_ENEMY(Local_65[iParam0 /*13*/], 1);
	WEAPON::GIVE_WEAPON_TO_PED(Local_65[iParam0 /*13*/], iVar2, -1, 1, 1);
	PED::SET_PED_COMBAT_ABILITY(Local_65[iParam0 /*13*/], 2);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_65[iParam0 /*13*/], 64, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_65[iParam0 /*13*/], 66, 1);
	PED::SET_PED_MONEY(Local_65[iParam0 /*13*/], 0);
	ENTITY::SET_ENTITY_LOD_DIST(Local_65[iParam0 /*13*/], 250);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_65[iParam0 /*13*/], 1, 0);
	PED::SET_PED_TO_LOAD_COVER(Local_65[iParam0 /*13*/], 1);
	PED::SET_PED_CONFIG_FLAG(Local_65[iParam0 /*13*/], 184, 1);
	AUDIO::STOP_PED_SPEAKING(Local_65[iParam0 /*13*/], 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_65[iParam0 /*13*/], 1);
	PED::SET_PED_ACCURACY(Local_65[iParam0 /*13*/], 7);
	PED::SET_PED_AS_COP(Local_65[iParam0 /*13*/], 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_65[iParam0 /*13*/], 2);
	PED::SET_PED_CAN_PEEK_IN_COVER(Local_65[iParam0 /*13*/], 1);
	PED::SET_PED_ARMOUR(Local_65[iParam0 /*13*/], 25);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_65[iParam0 /*13*/], -183807561);
	if (!bParam2)
	{
		PED::SET_PED_COMPONENT_VARIATION(Local_65[iParam0 /*13*/], 10, 0, 0, 0);
	}
	Local_65[iParam0 /*13*/].f_11 = 0;
}

int func_430(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x50C4A
{
	var uVar0;
	var uVar1;
	struct<73> Var5;
	int iVar79;
	int iVar80;
	bool bVar81;
	char cVar82[16];
	int iVar86;
	
	if (GlobalFunc_42(iParam1))
	{
		Var5.f_11 = 12;
		Var5.f_31 = 25;
		Var5.f_57 = 2;
		GlobalFunc_97(iParam1, &Var5, iParam7);
		if (Var5 == 0)
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var5)
			{
			}
			return 1;
		}
		if ((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131])
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] = 0;
		}
		if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar79 = 0;
				while (iVar79 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar79 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_11[iVar79]);
					iVar79++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_4971(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_194(*iParam0, iParam1);
				return 1;
			}
		}
		else if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/] == Var5)
		{
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar80 = 0;
				while (iVar80 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar80 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_11[iVar80]);
					iVar80++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_27));
					if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_4971(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
					}
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/]);
				}
				GlobalFunc_194(*iParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var5);
			if (STREAMING::HAS_MODEL_LOADED(Var5))
			{
				bVar81 = true;
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var5, Param2, fParam5, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, 1);
				StringCopy(&cVar82, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var5.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Var5.f_5, Var5.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Var5.f_7, Var5.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var5.f_2);
				iVar86 = 0;
				while (iVar86 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar86 + 1, !Var5.f_11[iVar86]);
					iVar86++;
				}
				if (Var5.f_24)
				{
					VEHICLE::SET_CONVERTIBLE_ROOF(*iParam0, Var5.f_24);
				}
				if (GlobalFunc_197(&uVar1, &uVar0))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar1);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Var5.f_27));
					if (Var5.f_26 >= 0 && Var5.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Var5.f_26);
					}
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Var5.f_60, Var5.f_61, Var5.f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Var5.f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Var5.f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Var5.f_69, Var5.f_70, Var5.f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Var5.f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Var5.f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Var5.f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Var5.f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Var5.f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Var5.f_65);
				}
				if (Var5.f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Var5.f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Var5.f_66);
						}
					}
				}
				GlobalFunc_4971(iParam0, &(Var5.f_31), &(Var5.f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bagger") && !Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &cVar82);
						bVar81 = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_4970(iParam0);
					}
				}
				else if (((iParam1 == 0 && !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208) && Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_58[131]) && ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("tailgater"))
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*iParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, 2);
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3208 = 1;
					GlobalFunc_8962(iParam1, iParam0, 0, 1);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var5);
				}
				if (bVar81)
				{
					GlobalFunc_194(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}



















void func_449(int iParam0)//Position - 0x54E8E
{
	switch (iParam0)
	{
		case 0:
			GlobalFunc_718(&uLocal_340, joaat("s_m_y_swat_01"));
			GlobalFunc_718(&uLocal_340, joaat("fbi2"));
			GlobalFunc_727(&uLocal_340, &cLocal_313);
			GlobalFunc_718(&uLocal_340, joaat("prop_box_ammo03a"));
			break;
		
		case 1:
			GlobalFunc_718(&uLocal_340, joaat("fbi2"));
			GlobalFunc_718(&uLocal_340, joaat("prop_box_ammo03a"));
			break;
		
		case 2:
			GlobalFunc_718(&uLocal_340, joaat("fbi2"));
			GlobalFunc_718(&uLocal_340, joaat("prop_box_ammo03a"));
			break;
	}
}





void func_454(int iParam0, var uParam1, var uParam2)//Position - 0x5516F
{
	switch (iParam0)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(&cLocal_313, "JHP1BRoute2"))
			{
				*uParam1 = { -1517.221f, -654.4871f, 28.1211f };
				*uParam2 = 300.0097f;
			}
			else
			{
				*uParam1 = { 895.8368f, -788.0649f, 41.9022f };
				*uParam2 = 25.9344f;
			}
			break;
		
		case 2:
			*uParam1 = { 693.7152f, -1005.217f, 21.8993f };
			*uParam2 = 180.4314f;
			break;
	}
}



void func_457()//Position - 0x5545F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_56[iVar0 /*2*/]) && !PED::IS_PED_INJURED(Local_56[iVar0 /*2*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_56[iVar0 /*2*/], 0))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_56[iVar0 /*2*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_56[iVar0 /*2*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			GlobalFunc_881(&(Local_56[iVar0 /*2*/]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_65[iVar0 /*13*/]))
		{
			GlobalFunc_589(&(Local_65[iVar0 /*13*/].f_2));
			Local_65[iVar0 /*13*/].f_12 = 0;
			if (!PED::IS_PED_INJURED(Local_65[iVar0 /*13*/]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_65[iVar0 /*13*/], 0))
				{
					PED::SET_PED_COORDS_NO_GANG(Local_65[iVar0 /*13*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_65[iVar0 /*13*/], 0), 1) + Vector(0f, -2f, 0f));
				}
				GlobalFunc_881(&(Local_65[iVar0 /*13*/]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_51[iVar0 /*2*/]))
		{
			func_460(Local_51[iVar0 /*2*/]);
			GlobalFunc_6689(&(Local_51[iVar0 /*2*/]));
		}
		iVar0++;
	}
	GlobalFunc_130(&uLocal_310);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	CAM::DESTROY_ALL_CAMS(0);
	GlobalFunc_5652(&Local_283, 1, 0);
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	iLocal_332 = 0;
	iLocal_333 = 0;
	iLocal_334 = 0;
	iLocal_336 = 0;
	iLocal_331 = 0;
	iLocal_329 = 1;
}



void func_460(int iParam0)//Position - 0x556C1
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			uVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(uVar0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
				}
				else
				{
					PED::DELETE_PED(&iVar0);
				}
			}
			iVar2 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
			iVar1 = 0;
			while (iVar1 < iVar2)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar1))
				{
					iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
						}
						else
						{
							PED::DELETE_PED(&iVar0);
						}
					}
				}
				iVar1++;
			}
		}
	}
}



void func_463()//Position - 0x55807
{
	switch (iLocal_1320)
	{
		case 1:
			iLocal_1320 = 2;
			iLocal_1322 = -1;
			break;
		
		case 2:
			iLocal_1320 = 3;
			iLocal_1322 = 0;
			iLocal_1321 = iLocal_1323;
			break;
		
		case 3:
			iLocal_1323 = -1;
			iLocal_1320 = 0;
			break;
		
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1324) > 2500)
			{
				iLocal_1324 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}


void func_465()//Position - 0x5587D
{
	struct<3> Var0;
	var uVar3;
	
	GlobalFunc_3041();
	if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		iLocal_1326 = 0;
		if (GlobalFunc_Is_Mission_Retry())
		{
			if (Global_84544)
			{
				iLocal_1326 = 2;
			}
		}
		StringCopy(&cLocal_313, "JHP1BRoute2", 64);
		if (GlobalFunc_Is_Mission_Retry())
		{
			func_454(iLocal_1326, &Var0, &uVar3);
			GlobalFunc_5812(Var0, uVar3, 1, 0);
		}
		bLocal_1325 = true;
	}
	iLocal_1322 = 0;
	HUD::REQUEST_ADDITIONAL_TEXT("JHP1B", 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("fbi2"), 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(1, 0);
	MISC::ENABLE_DISPATCH_SERVICE(8, 0);
	MISC::ENABLE_DISPATCH_SERVICE(2, 0);
	MISC::ENABLE_DISPATCH_SERVICE(6, 0);
	MISC::ENABLE_DISPATCH_SERVICE(4, 0);
	MISC::ENABLE_DISPATCH_SERVICE(12, 0);
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	TASK::SET_SCENARIO_GROUP_ENABLED("MP_POLICE", 0);
	if (!GlobalFunc_Is_Mission_Retry() && !GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		while (!func_466())
		{
			SYSTEM::WAIT(0);
		}
		iLocal_1321 = 0;
		func_449(0);
	}
	while (Global_Mission_Fail_State == 12)
	{
		SYSTEM::WAIT(0);
	}
}

int func_466()//Position - 0x5597E
{
	int iVar0;
	
	Global_Mission_Fail_State.f_12[0] = Global_86864.f_358;
	cLocal_313 = { Global_87247 };
	GlobalFunc_786(219, 0f, 0f, 2000f);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_51[0 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
			Local_51[0 /*2*/] = Global_86864[0];
			GlobalFunc_743(Local_51[0 /*2*/], 0);
			ENTITY::RESET_ENTITY_ALPHA(Local_51[0 /*2*/]);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(Local_51[0 /*2*/]);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_65[0 /*13*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
			Local_65[0 /*13*/] = Global_86864.f_9[0];
			PED::SET_PED_ACCURACY(Local_65[0 /*13*/], 7);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_65[0 /*13*/], -183807561);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_65[1 /*13*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[1], 1, 1);
			Local_65[1 /*13*/] = Global_86864.f_9[1];
			PED::SET_PED_ACCURACY(Local_65[1 /*13*/], 7);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_65[1 /*13*/], -183807561);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_65[2 /*13*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[2], 1, 1);
			Local_65[2 /*13*/] = Global_86864.f_9[2];
			PED::SET_PED_ACCURACY(Local_65[2 /*13*/], 7);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_65[2 /*13*/], -183807561);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_65[3 /*13*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[3], 1, 1);
			Local_65[3 /*13*/] = Global_86864.f_9[3];
			PED::SET_PED_ACCURACY(Local_65[3 /*13*/], 7);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_65[3 /*13*/], -183807561);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_310))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 1, 1);
			iLocal_310 = Global_86864.f_28[0];
		}
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (GlobalFunc_2773(Local_65[iVar0 /*13*/]))
		{
			ENTITY::RESET_ENTITY_ALPHA(Local_65[iVar0 /*13*/]);
		}
		iVar0++;
	}
	GlobalFunc_786(219, 0f, 0f, 2000f);
	if (((((ENTITY::DOES_ENTITY_EXIST(Local_51[0 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(iLocal_310)) && ENTITY::DOES_ENTITY_EXIST(Local_65[0 /*13*/])) && ENTITY::DOES_ENTITY_EXIST(Local_65[1 /*13*/])) && ENTITY::DOES_ENTITY_EXIST(Local_65[2 /*13*/])) && ENTITY::DOES_ENTITY_EXIST(Local_65[3 /*13*/]))
	{
		return 1;
	}
	return 0;
}




void func_470()//Position - 0x55CFC
{
	int iVar0;
	
	GlobalFunc_5652(&Local_283, 1, 0);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (GlobalFunc_2773(Local_56[iVar0 /*2*/]))
		{
			if (Local_56[iVar0 /*2*/] != PLAYER::PLAYER_PED_ID())
			{
				PED::SET_PED_KEEP_TASK(Local_56[iVar0 /*2*/], 1);
				GlobalFunc_132(&(Local_56[iVar0 /*2*/]), 1, 0, 1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_56[iVar0 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_56[iVar0 /*2*/].f_1));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (GlobalFunc_2773(Local_65[iVar0 /*13*/]))
		{
			GlobalFunc_132(&(Local_65[iVar0 /*13*/]), 1, 0, 1);
			if (HUD::DOES_BLIP_EXIST(Local_65[iVar0 /*13*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_65[iVar0 /*13*/].f_1));
			}
			GlobalFunc_589(&(Local_65[iVar0 /*13*/].f_2));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (GlobalFunc_2773(Local_51[iVar0 /*2*/]))
		{
			GlobalFunc_131(&(Local_51[iVar0 /*2*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_51[iVar0 /*2*/].f_1))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Local_51[iVar0 /*2*/].f_1));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
		iVar0++;
	}
	GlobalFunc_129(&iLocal_310, 0);
	GlobalFunc_563(0);
	HUD::CLEAR_PRINTS();
	AUDIO::STOP_AUDIO_SCENES();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-827.5925f, -1101.782f, 14.48773f, -812.161f, -1081.684f, 8f, 1, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(-788.1345f, -1122.983f, 8f, -867.9253f, -1051.791f, 15.58141f, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("fbi2"), 0);
	TASK::SET_SCENARIO_GROUP_ENABLED("MP_POLICE", 1);
	iLocal_332 = 0;
	iLocal_331 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
}





