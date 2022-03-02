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
	char[] cLocal_48[8] = 0;
	char[] cLocal_49[8] = 0;
	char[] cLocal_50[8] = 0;
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<2> Local_54[4];
	struct<10> Local_63[8];
	struct<5> Local_144[4];
	struct<3> Local_165 = { 0, 0, 0 } ;
	struct<2> Local_168[9];
	struct<6> Local_187 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_193 = 0;
	var uLocal_194 = 1092616192;
	var uLocal_195 = 1101004800;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 3;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 16;
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
	int iLocal_381 = 0;
	int iLocal_382 = 0;
	int iLocal_383 = 0;
	int iLocal_384 = 0;
	int iLocal_385 = 0;
	int iLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	int iLocal_409 = 0;
	struct<3> Local_410 = { 0, 0, 0 } ;
	float fLocal_413 = 0f;
	int iLocal_414 = 0;
	struct<3> Local_415 = { 0, 0, 0 } ;
	float fLocal_418 = 0f;
	int iLocal_419 = 0;
	struct<3> Local_420 = { 0, 0, 0 } ;
	float fLocal_423 = 0f;
	int iLocal_424 = 0;
	struct<3> Local_425 = { 0, 0, 0 } ;
	float fLocal_428 = 0f;
	struct<3> Local_429 = { 0, 0, 0 } ;
	struct<3> Local_432 = { 0, 0, 0 } ;
	struct<3> Local_435 = { 0, 0, 0 } ;
	int iLocal_438 = 0;
	struct<3> Local_439 = { 0, 0, 0 } ;
	float fLocal_442 = 0f;
	var uLocal_443 = 0;
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
	bool bLocal_454 = 0;
	int iLocal_455 = 0;
	bool bLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	var uLocal_459 = 30;
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
	var uLocal_610 = 10;
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
	var uLocal_661 = 10;
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
	var uLocal_732 = 20;
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
	var uLocal_833 = 20;
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
	var uLocal_934 = 30;
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
	var uLocal_996 = 0;
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
	var uLocal_1027 = 0;
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
	var uLocal_1077 = 0;
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
	var uLocal_1103 = 0;
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
	var uLocal_1115 = 5;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
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
	var uLocal_1146 = 7;
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
	var uLocal_1196 = 5;
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
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 3;
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
	var uLocal_1238 = 15;
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
	var uLocal_1265 = 0;
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
	var uLocal_1291 = 0;
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
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 10;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 5;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 5;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 0;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 8;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 12;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 0;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 12;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 0;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 12;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 0;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 9;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 9;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 0;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 12;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 12;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 0;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 12;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 0;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 9;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 9;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 12;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 0;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 12;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 12;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 0;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 9;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 9;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 12;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 0;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 12;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 0;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 12;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 0;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 9;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 9;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 0;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 12;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 0;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 12;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 12;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 9;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 9;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 0;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 12;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 0;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 12;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 0;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 12;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 0;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 9;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 9;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 0;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 12;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 0;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 12;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 0;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 12;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 9;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 9;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 12;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 0;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 12;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 12;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 0;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 9;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 9;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	int iLocal_2096 = 0;
	int iLocal_2097 = 0;
	int iLocal_2098 = 0;
	int iLocal_2099 = 0;
	int iLocal_2100 = 0;
	int iLocal_2101 = 0;
	int iLocal_2102 = 0;
	float fLocal_2103 = 0f;
	int iLocal_2104 = 0;
	int iLocal_2105 = 0;
	int iLocal_2106 = 0;
	var uLocal_2107[2] = { 0, 0 };
	int iLocal_2110 = 0;
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
	cLocal_48 = "REACTION@MALE_STAND@BIG_VARIATIONS@IDLE_B";
	cLocal_49 = "cellphone@str";
	cLocal_50 = "missheistdocksprep1ig_1";
	Local_51 = { -343.3761f, -2633.535f, 5.00103f };
	iLocal_395 = -1;
	Local_410 = { 327.263f, -2968.799f, -3f };
	fLocal_413 = 358.5f;
	iLocal_414 = joaat("prop_dock_crane_02_ld");
	Local_415 = { 305.053f, -2971.395f, 4.99f };
	fLocal_418 = 90f;
	iLocal_419 = joaat("prop_dock_crane_02_cab");
	Local_420 = { 0f, 0f, 19.907f };
	fLocal_423 = 0f;
	iLocal_424 = joaat("prop_dock_crane_02_hook");
	Local_425 = { -0.005f, -22.139f, -15f };
	fLocal_428 = 0f;
	Local_432 = { -0.005f, -22.139f, 32.825f };
	Local_435 = { 0f, 0f, 0.68f };
	Local_439 = { Vector(-1.499111f, 1.993344f, -9.107174f) - Vector(-2.452997f, 0.364908f, -9.052903f) };
	fLocal_2103 = 3f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("DHP1_FAIL");
		func_309();
		GlobalFunc_10632();
		if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		}
		func_304();
	}
	MISC::SET_MISSION_FLAG(1);
	func_299();
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_ThePortOfLSHeistPrep1", 0);
		GlobalFunc_8012(&uLocal_459);
		GlobalFunc_5195(&uLocal_1439);
		func_295();
		func_268();
		if (!iLocal_2101)
		{
			func_252();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x1CC
{
	switch (iLocal_2097)
	{
		case 0:
			func_206();
			break;
		
		case 1:
			func_173();
			break;
		
		case 2:
			func_8();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()//Position - 0x210
{
	switch (iLocal_2098)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(180f);
			iLocal_2098++;
			break;
		
		case 1:
			if (CAM::IS_SCREEN_FADED_IN())
			{
				func_3();
			}
			break;
	}
}

void func_3()//Position - 0x25C
{
	GlobalFunc_5103(0, 0);
	func_304();
}





void func_8()//Position - 0x3E2
{
	switch (iLocal_2098)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_101(2, "STAGE 2: Drop off sub", 1, 0, 0, 1);
			if (GlobalFunc_2773(Local_54[0 /*2*/]))
			{
				ENTITY::SET_ENTITY_PROOFS(Local_54[0 /*2*/], 0, 0, 0, 1, 0, 0, 0, 0);
			}
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_54[0 /*2*/], 0);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_54[1 /*2*/], 0);
			PATHFIND::SET_IGNORE_NO_GPS_FLAG(1);
			PATHFIND::SET_GPS_DISABLED_ZONE(288.0967f, -3133.249f, 0f, 301.0605f, -2969.622f, 11.47017f);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_54[0 /*2*/], 0);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_54[0 /*2*/], 0);
			RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
			iLocal_452 = 0;
			iLocal_453 = 0;
			iLocal_2098++;
			break;
		
		case 1:
			if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()) && GlobalFunc_2773(Local_54[0 /*2*/]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_54[0 /*2*/], 1), 1) > 400f && !ENTITY::IS_ENTITY_ON_SCREEN(Local_54[0 /*2*/]))
				{
					func_86(9);
				}
			}
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 324.7653f, -2974.495f, -1.5f, 1) > 150f)
			{
				GlobalFunc_129(&(Local_168[7 /*2*/]), 0);
				GlobalFunc_129(&(Local_168[8 /*2*/]), 0);
				GlobalFunc_129(&(Local_168[6 /*2*/]), 0);
				GlobalFunc_5174(&uLocal_459, joaat("prop_dock_crane_02_ld"));
				GlobalFunc_5174(&uLocal_459, joaat("prop_dock_crane_02_cab"));
				GlobalFunc_5174(&uLocal_459, joaat("prop_dock_crane_02_hook"));
			}
			if (!iLocal_452 && GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_51, 1) < 200f)
			{
				GlobalFunc_718(&uLocal_459, joaat("bison"));
				iLocal_453 = 1;
				iLocal_452 = 1;
			}
			else if (iLocal_452)
			{
				if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_51, 1) > 220f)
				{
					GlobalFunc_5174(&uLocal_459, joaat("bison"));
					iLocal_453 = 0;
					iLocal_452 = 0;
					if (ENTITY::DOES_ENTITY_EXIST(Local_54[3 /*2*/]))
					{
						VEHICLE::DELETE_VEHICLE(&(Local_54[3 /*2*/]));
					}
				}
				else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_51, 1) < 200f)
				{
					if (iLocal_453 && STREAMING::HAS_MODEL_LOADED(joaat("bison")))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_54[3 /*2*/]))
						{
							Local_54[3 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("bison"), -317.0741f, -2594.14f, 5.0004f, 316.2352f, 1, 1);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_54[3 /*2*/], 0);
						}
						iLocal_453 = 0;
					}
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_54[1 /*2*/], PLAYER::GET_PLAYERS_LAST_VEHICLE()) || ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_54[2 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_63[3 /*10*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_54[0 /*2*/], -333.6057f, -2623.681f, 5.00103f, -350.1272f, -2640.339f, 12.65742f, 15f, 0, 1, 0)))
			{
				if (GlobalFunc_2773(Local_54[1 /*2*/]))
				{
					VEHICLE::SET_TRAILER_INVERSE_MASS_SCALE(Local_54[1 /*2*/], 0.5f);
				}
				if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
				{
					HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(Local_187.f_5, 1);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_377))
				{
					HUD::REMOVE_BLIP(&uLocal_377);
				}
				if (iLocal_389)
				{
					HUD::CLEAR_PRINTS();
					iLocal_389 = 0;
				}
				if (GlobalFunc_9199(&Local_187, Local_51, 0.1f, 0.1f, 2f, 1, Local_63[3 /*10*/], 0, 0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), "dkp1_tk2", "DKP1_ABFLD", "", "", "", "DKP1_TRUCK", "DKP1_TRUCKBK", 0, 1, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_187.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), -340.1324f, -2630.243f, 5.001461f, -346.5508f, -2636.808f, 12.68896f, 14.9375f, 0, 1, 0)))
				{
					PED::REMOVE_SCENARIO_BLOCKING_AREAS();
					GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 7f, -1, 1056964608, 0, 1);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_54[0 /*2*/], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_54[0 /*2*/], 10);
					GlobalFunc_5652(&Local_187, 1, 0);
					PATHFIND::SET_IGNORE_NO_GPS_FLAG(0);
					PATHFIND::SET_GPS_DISABLED_ZONE(0f, 0f, 0f, 0f, 0f, 0f);
					iLocal_451 = MISC::GET_GAME_TIMER();
					iLocal_391 = 0;
					iLocal_2098++;
				}
			}
			else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_54[1 /*2*/], PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				GlobalFunc_629(&Local_187);
				if (!HUD::DOES_BLIP_EXIST(uLocal_377))
				{
					uLocal_377 = GlobalFunc_6783(Local_54[0 /*2*/], 0, 0);
				}
				if (!iLocal_389 && GlobalFunc_5171())
				{
					GlobalFunc_164("DKP1_ATTACH", 7500, 1);
					iLocal_389 = 1;
				}
			}
			break;
		
		case 2:
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (GlobalFunc_10618(&uLocal_212, "DHP1AUD", "DHP1_END", 7, 0, 0, 0))
				{
					PED::SET_PED_KEEP_TASK(Local_63[3 /*10*/], 1);
					TASK::TASK_LOOK_AT_ENTITY(Local_63[3 /*10*/], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 3f, 1f, 1073741824, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
					TASK::TASK_PERFORM_SEQUENCE(Local_63[3 /*10*/], uLocal_378);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
					iLocal_2098++;
				}
			}
			else if ((!iLocal_386 && GlobalFunc_5171()) && (MISC::GET_GAME_TIMER() - iLocal_451) > 3000)
			{
				GlobalFunc_164("dkp1_EXIT", 7500, 1);
				RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
				iLocal_386 = 1;
			}
			break;
		
		case 3:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_2773(Local_54[3 /*2*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_63[3 /*10*/]);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
					TASK::TASK_ENTER_VEHICLE(0, Local_54[3 /*2*/], -1, -1, 2f, 1, 0);
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_54[3 /*2*/], -189.8985f, -2622.707f, 5.0001f, 14, 30f, 786468, 5f, 1f, 1);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, Local_54[3 /*2*/], PLAYER::PLAYER_PED_ID(), 8, 30f, 786468, 1000f, 10f, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
					TASK::TASK_PERFORM_SEQUENCE(Local_63[3 /*10*/], uLocal_378);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
				}
				else
				{
					TASK::CLEAR_PED_TASKS(Local_63[3 /*10*/]);
					TASK::TASK_SMART_FLEE_COORD(Local_63[3 /*10*/], Local_51, 300f, -1, 0, 0);
				}
				iLocal_451 = MISC::GET_GAME_TIMER();
				iLocal_2098++;
			}
			break;
		
		case 4:
			if (GlobalFunc_156(Local_63[3 /*10*/], PLAYER::PLAYER_PED_ID(), 1) > 70f || (MISC::GET_GAME_TIMER() - iLocal_451) > 20000)
			{
				GlobalFunc_132(&(Local_63[3 /*10*/]), 1, 0, 1);
				func_3();
			}
			break;
	}
}














































































void func_86(int iParam0)//Position - 0x421A
{
	char* sVar0;
	
	AUDIO::TRIGGER_MUSIC_EVENT("DHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 1:
			sVar0 = "dkp1_fdes1";
			break;
		
		case 4:
			sVar0 = "dkp1_fstuck1";
			break;
		
		case 5:
			sVar0 = "DKP1_FLOST1";
			break;
		
		case 2:
			sVar0 = "dkp1_fdes2";
			break;
		
		case 3:
			sVar0 = "dkp1_fstuck2";
			break;
		
		case 7:
			sVar0 = "dkp1_ffloyd";
			break;
		
		case 8:
			sVar0 = "DKP1_FFCAR";
			break;
		
		case 9:
			sVar0 = "dkp1_FABD";
			break;
		
		case 10:
			sVar0 = "DKP1_FABS";
			break;
		
		case 11:
			sVar0 = "DKP1_FABF";
			break;
		
		case 6:
			sVar0 = "cmn_tdied";
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
	if (GlobalFunc_764())
	{
		func_309();
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1298.369f, -3062.1f, -71.22691f, 790.9125f, -3068.998f, 63.91419f, 250f, 0, 0, 0))
	{
		GlobalFunc_5129(787.0854f, -2973.872f, 5.0585f, 256.91f);
	}
	func_304();
	SCRIPT::TERMINATE_THIS_THREAD();
}















void func_101(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x5266
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_89999)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_89999)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_89999)
		{
		}
		iVar1 = GlobalFunc_5111(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[iVar1 /*6*/].f_1 = 0;
			uVar2 = GlobalFunc_5110(iVar1);
			cVar3 = { Global_81155[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_SAVE_DATA.FLOW_STRUCT.MF_CONTROLS_STRUCT.f_203[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_89999, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7703(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_89999, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_547(&(Global_89962.f_3));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_89999 = iParam0;
		GlobalFunc_10923(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}








































































void func_173()//Position - 0xC217
{
	int iVar0;
	var uVar1;
	
	switch (iLocal_2098)
	{
		case 0:
			GlobalFunc_5177(&uLocal_459, "PORT_OF_LS_PREP_1");
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			GlobalFunc_9194(&Local_187, 324.7653f, -2974.495f, -1f, 0.1f, 0.1f, 2f, 1, Local_54[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1);
			if (STREAMING::HAS_MODEL_LOADED(joaat("packer")) && STREAMING::HAS_MODEL_LOADED(joaat("armytrailer")))
			{
				func_101(1, "STAGE 1: Get to crane", 0, 0, 0, 1);
				GlobalFunc_574(587, 0);
				GlobalFunc_173(&uLocal_212, 1, 0, "FLOYD", 0, 1);
				GlobalFunc_2427(6, 0);
				Local_54[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("packer"), 298.2343f, -2942.77f, 5.0003f, 0f, 1, 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_54[2 /*2*/], 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_54[2 /*2*/], 1);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_54[2 /*2*/], 0);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_54[2 /*2*/], 0);
				Local_54[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer"), 298.27f, -2951.27f, 7.86f, 0f, 1, 1);
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_54[2 /*2*/], Local_54[1 /*2*/], 0.5f);
				VEHICLE::SET_TRAILER_LEGS_RAISED(Local_54[1 /*2*/]);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_54[1 /*2*/], 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_54[1 /*2*/], 1);
				iLocal_382 = 0;
				PED::ADD_SCENARIO_BLOCKING_AREA(289.0847f, -2980.382f, 9.24156f, 320.426f, -2931.6f, 4f, 0, 1, 1, 1);
				iLocal_391 = 1;
				AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 0);
				iLocal_2098++;
			}
			break;
		
		case 1:
			if (func_199())
			{
				GlobalFunc_5175(&uLocal_459, cLocal_48);
				GlobalFunc_5175(&uLocal_459, cLocal_49);
				iLocal_395 = -1;
				iLocal_396 = 0;
				iLocal_2098++;
			}
			break;
		
		case 2:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54[0 /*2*/], 0))
			{
				switch (iLocal_396)
				{
					case 0:
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (iLocal_395 == -1)
							{
								iLocal_395 = MISC::GET_GAME_TIMER() + 5000;
							}
							if (MISC::GET_GAME_TIMER() > iLocal_395)
							{
								GlobalFunc_159("DKP1_SUBTURN", -1);
								iLocal_396++;
							}
						}
						break;
					
					case 1:
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							GlobalFunc_159("SUB_HELP", -1);
							iLocal_396++;
						}
						break;
				}
			}
			else
			{
				if (iLocal_396 == 0)
				{
					iLocal_395 = -1;
				}
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (GlobalFunc_74("DKP1_SUBTURN") || GlobalFunc_74("SUB_HELP"))
					{
						HUD::CLEAR_HELP(1);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_54[0 /*2*/], 3, 10000))
			{
				func_86(1);
			}
			if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), 324.7653f, -2974.495f, -1.5f, 1) < 150f)
			{
				if (AUDIO::LOAD_STREAM("DOCKS_HEIST_PREP_1_LIFT_SUB", 0))
				{
					bLocal_456 = true;
				}
				GlobalFunc_129(&(Local_168[2 /*2*/]), 0);
				GlobalFunc_5174(&uLocal_459, joaat("prop_sub_release"));
			}
			else
			{
				AUDIO::STOP_STREAM();
				bLocal_456 = false;
			}
			if (GlobalFunc_2773(Local_63[6 /*10*/]))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || PED::IS_PED_FLEEING(Local_63[6 /*10*/])) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_63[6 /*10*/], 1) > 100f)
				{
					TASK::CLEAR_PED_TASKS(Local_63[6 /*10*/]);
					GlobalFunc_132(&(Local_63[6 /*10*/]), 1, 0, 1);
				}
			}
			if (GlobalFunc_2773(Local_63[7 /*10*/]))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || PED::IS_PED_FLEEING(Local_63[7 /*10*/])) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_63[7 /*10*/], 1) > 100f)
				{
					TASK::CLEAR_PED_TASKS(Local_63[7 /*10*/]);
					GlobalFunc_132(&(Local_63[7 /*10*/]), 1, 0, 1);
				}
			}
			if (GlobalFunc_2773(Local_63[4 /*10*/]))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || PED::IS_PED_FLEEING(Local_63[4 /*10*/])) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_63[4 /*10*/], 1) > 100f)
				{
					TASK::CLEAR_PED_TASKS(Local_63[4 /*10*/]);
					GlobalFunc_132(&(Local_63[4 /*10*/]), 1, 0, 1);
				}
			}
			if (GlobalFunc_2773(Local_63[5 /*10*/]))
			{
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || PED::IS_PED_FLEEING(Local_63[5 /*10*/])) || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_63[5 /*10*/], 1) > 100f)
				{
					TASK::CLEAR_PED_TASKS(Local_63[5 /*10*/]);
					GlobalFunc_132(&(Local_63[5 /*10*/]), 1, 0, 1);
				}
			}
			if (GlobalFunc_9194(&Local_187, 324.7653f, -2974.495f, -1.5f, 0.1f, 0.1f, 2f, 0, Local_54[0 /*2*/], "dkp1_tk1", "", "DKP1_SUBBK", 1, 0, 1, -1) || ((HUD::DOES_BLIP_EXIST(Local_187.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_54[0 /*2*/], 312.8557f, -2974.003f, 1.19166f, 339.1654f, -2974.348f, -6.70078f, 15f, 0, 1, 0)) && GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_54[0 /*2*/])))
			{
				if (GlobalFunc_2773(Local_54[2 /*2*/]) && GlobalFunc_2773(Local_54[1 /*2*/]))
				{
					GlobalFunc_7139(&Local_187, 0);
					GlobalFunc_2434(6, 0);
					AUDIO::TRIGGER_MUSIC_EVENT("DHP1_STOP");
					GlobalFunc_571(0, -1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 256);
					iLocal_451 = MISC::GET_GAME_TIMER();
					iLocal_2098++;
				}
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && HUD::DOES_BLIP_EXIST(Local_187.f_5))
			{
				GRAPHICS::DRAW_MARKER(6, 324.7653f, -2974.495f, -3.5f, 0f, 0f, 0f, 0f, 0f, 0f, 5f, 5f, 5f, 255, 255, 0, 65, 0, 0, 2, 0, 0, 0, 0);
			}
			break;
		
		case 3:
			if (GlobalFunc_644(Local_54[0 /*2*/]) || (MISC::GET_GAME_TIMER() - iLocal_451) > 3500)
			{
				uLocal_443 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 341.6419f, -2965.525f, 4.037704f, 17.06695f, 0.473599f, 112.4448f, 34f, 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_443, 1);
				CAM::SHAKE_CAM(uLocal_443, "HAND_SHAKE", 0.4f);
				CAM::SET_CAM_PARAMS(uLocal_443, 341.6419f, -2965.525f, 4.037704f, -4.346406f, 0.473595f, 112.4448f, 34f, 6000, 1, 1, 2);
				func_188(0, 340.6675f, -2964.01f, 1.4937f, 1, 0, 1, 3000, 0, 1);
				GlobalFunc_718(&uLocal_459, joaat("prop_tarp_strap"));
				ENTITY::SET_ENTITY_COORDS(Local_54[0 /*2*/], Local_410, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(Local_54[0 /*2*/], fLocal_413);
				iLocal_451 = MISC::GET_GAME_TIMER();
				iLocal_409 = 0;
				RECORDING::_0x293220DA1B46CEBC(8f, 0f, 4);
				iLocal_2098++;
			}
			else
			{
				GlobalFunc_530(Local_54[0 /*2*/], 7f, 1, 1056964608, 0, 1);
			}
			break;
		
		case 4:
			if (func_178())
			{
				iLocal_2098++;
			}
			break;
		
		case 5:
			if (CUTSCENE::HAS_CUTSCENE_LOADED() && STREAMING::HAS_MODEL_LOADED(joaat("prop_tarp_strap")))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_54[2 /*2*/], "DockHeist_truck", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_54[0 /*2*/], "submarine", 0, joaat("submersible"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_54[1 /*2*/], "dockheist_trailer", 0, joaat("armytrailer"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "sub_cover", 2, joaat("prop_sub_cover_01"), 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Floyd", 2, joaat("ig_floyd"), 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", PLAYER::PLAYER_PED_ID(), 0);
				VEHICLE::SET_VEHICLE_LIGHTS(Local_54[2 /*2*/], 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_54[2 /*2*/], 1);
				func_177(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
				CUTSCENE::START_CUTSCENE(0);
				iLocal_2098++;
			}
			break;
		
		case 6:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (STREAMING::IS_IPL_ACTIVE("PO1_08_sub_waterplane"))
				{
					STREAMING::REMOVE_IPL("PO1_08_sub_waterplane");
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				RECORDING::_0x81CBAE94390F9F89();
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_63[3 /*10*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Floyd", 0)))
				{
					Local_63[3 /*10*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Floyd", 0));
					GlobalFunc_173(&uLocal_212, 1, Local_63[3 /*10*/], "FLOYD", 0, 1);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_63[3 /*10*/], iLocal_393);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				iLocal_445 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Floyd", 0))
			{
				iLocal_446 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("DockHeist_truck", 0))
			{
				VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_54[2 /*2*/], 1, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_54[2 /*2*/], 1);
				iLocal_447 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("DockHeist_trailer", 0))
			{
				VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Local_54[1 /*2*/], 1, 0, 0);
				iLocal_450 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("submarine", 0))
			{
				iLocal_448 = 1;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("sub_cover", 0))
			{
				iLocal_449 = 1;
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(Local_168[4 /*2*/]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("sub_cover", joaat("prop_sub_cover_01"))))
				{
					Local_168[4 /*2*/] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("sub_cover", joaat("prop_sub_cover_01")));
				}
			}
			if (VEHICLE::GET_VEHICLE_LIGHTS_STATE(Local_54[2 /*2*/], &iVar0, &uVar1))
			{
				if (iVar0 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= 14200)
					{
						VEHICLE::SET_VEHICLE_LIGHTS(Local_54[2 /*2*/], 3);
					}
				}
			}
			if (((((iLocal_445 && iLocal_446) && iLocal_447) && iLocal_448) && iLocal_449) && iLocal_450)
			{
				if (CAM::IS_SCREEN_FADED_IN() || PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Local_63[3 /*10*/]))
				{
					PED::SET_PED_INTO_VEHICLE(Local_63[3 /*10*/], Local_54[2 /*2*/], 0);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54[2 /*2*/], -1);
					VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_54[0 /*2*/], Local_54[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_54[0 /*2*/], 0);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_54[0 /*2*/], 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_54[0 /*2*/], 10);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_54[0 /*2*/], 0, 1);
					VEHICLE::SET_VEHICLE_LIGHTS(Local_54[0 /*2*/], 1);
					AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_54[0 /*2*/], 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[4 /*2*/], Local_54[1 /*2*/], -1, Local_439, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					Local_168[5 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[5 /*2*/], Local_54[1 /*2*/], -1, Local_439, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					func_176(1, 0, 0, 3000, 0);
					func_175(&uLocal_459);
					iLocal_2098++;
				}
			}
			break;
		
		case 7:
			func_174(2);
			iLocal_2098 = 0;
			break;
	}
	if (HUD::DOES_BLIP_EXIST(Local_187.f_5))
	{
		HUD::SET_BLIP_ROUTE(Local_187.f_5, 0);
	}
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()) && GlobalFunc_2773(Local_54[0 /*2*/]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 324.7653f, -2974.495f, -1f, 1) > 2500f)
		{
			func_86(9);
		}
	}
}

int func_174(int iParam0)//Position - 0xCCF0
{
	if (iLocal_2096 == 0)
	{
		iLocal_2099 = iParam0;
		iLocal_2096 = 1;
		return 1;
	}
	return 0;
}

void func_175(var uParam0)//Position - 0xCD10
{
	if (uParam0->f_855)
	{
		if (uParam0->f_855.f_1)
		{
			STREAMING::REMOVE_PTFX_ASSET();
			GlobalFunc_700(&(uParam0->f_855));
		}
		else
		{
			uParam0->f_855.f_2 = 1;
			uParam0->f_977 = 1;
		}
	}
}

void func_176(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4)//Position - 0xCD48
{
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), iParam0, iParam4);
	CAM::RENDER_SCRIPT_CAMS(bParam1, iParam2, iParam3, 1, 0, 0);
	if (!bParam1)
	{
		CAM::DESTROY_ALL_CAMS(0);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
	}
}

void func_177(int iParam0)//Position - 0xCD98
{
	iLocal_445 = iParam0;
	iLocal_446 = iParam0;
	iLocal_447 = iParam0;
	iLocal_449 = iParam0;
	iLocal_448 = iParam0;
	iLocal_450 = iParam0;
}

int func_178()//Position - 0xCDBE
{
	float fVar0;
	
	switch (iLocal_409)
	{
		case 0:
			func_187();
			ENTITY::SET_ENTITY_COORDS(Local_54[0 /*2*/], Local_410, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(Local_54[0 /*2*/], fLocal_413);
			ENTITY::FREEZE_ENTITY_POSITION(Local_54[0 /*2*/], 1);
			uLocal_379 = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY("scr_pls_sub_water_drips", Local_54[0 /*2*/], 0f, 0f, 0f, 0f, 0f, 0f, 1065353216, 0, 0, 0);
			GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_379, "flow", 1f, 0);
			CUTSCENE::REQUEST_CUTSCENE("dhp1_mcs_1", 8);
			if (bLocal_456)
			{
				AUDIO::PLAY_STREAM_FRONTEND();
			}
			if (CLOCK::GET_CLOCK_HOURS() >= 20 || CLOCK::GET_CLOCK_HOURS() <= 7)
			{
				STREAMING::REQUEST_IPL("PO1_08_sub_waterplane");
			}
			func_185(&uLocal_459, 298.9806f, -2977.643f, 6.101f, Vector(7.886f, -2964.665f, 298.5479f) - Vector(6.101f, -2977.643f, 298.9806f), 3000f, 0);
			iLocal_409++;
			break;
		
		case 1:
			Local_429 = { ENTITY::GET_ENTITY_COORDS(Local_168[8 /*2*/], 1) };
			if (Local_429.f_2 <= 1f)
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_54[0 /*2*/], 0);
				CAM::SET_CAM_PARAMS(uLocal_443, 310.0923f, -2949.529f, 10.9528f, -20.2654f, 2.7992f, -141.6393f, 25.6f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_443, 308.3542f, -2950.972f, 10.8434f, 0.0544f, 2.7992f, -137.3849f, 25.6f, 12500, 1, 1, 2);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_54[0 /*2*/], Local_168[8 /*2*/], -1, 2.47f, 0f, -1.96f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
				iLocal_409++;
			}
			else
			{
				func_184(1, 2f);
			}
			break;
		
		case 2:
			Local_429 = { ENTITY::GET_ENTITY_COORDS(Local_168[8 /*2*/], 1) };
			if (Local_429.f_2 >= 12.5f)
			{
				CAM::SET_CAM_PARAMS(uLocal_443, 356.9992f, -2984.961f, 117.2741f, -68.2497f, -0.1106f, 66.9743f, 20f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_443, 361.4758f, -2966.824f, 117.2872f, -66.6976f, -0.1106f, 84.372f, 20f, 10000, 1, 1, 2);
				fLocal_442 = CAM::GET_CAM_NEAR_CLIP(uLocal_443);
				CAM::SET_CAM_NEAR_CLIP(uLocal_443, 1.8f);
				iLocal_409++;
			}
			else
			{
				func_184(0, 1f);
			}
			break;
		
		case 3:
			if (fLocal_423 >= 40f)
			{
				CAM::SET_CAM_PARAMS(uLocal_443, 289.8129f, -2944.046f, 5.5715f, 17.075f, 0.1698f, -109.4507f, 38.3f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_443, 290.8941f, -2941.987f, 5.5781f, 22.5176f, 0.1698f, -128.6537f, 38.3f, 7000, 1, 1, 2);
				CAM::SET_CAM_NEAR_CLIP(uLocal_443, fLocal_442);
				fLocal_423 = 80f;
				ENTITY::DETACH_ENTITY(Local_168[7 /*2*/], 1, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[7 /*2*/], Local_168[6 /*2*/], -1, Local_420, 0f, 0f, fLocal_423, 0, 0, 0, 0, 2, 1);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_168[8 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[7 /*2*/], Local_425), 0, 0, 1);
				iLocal_2104 = MISC::GET_GAME_TIMER();
				iLocal_409++;
			}
			else
			{
				func_183(1, 5.5f);
			}
			break;
		
		case 4:
			if (fLocal_423 >= 108f)
			{
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				CAM::SET_CAM_PARAMS(uLocal_443, 300.0253f, -2973.253f, 5.7369f, 10.5662f, 0.1117f, 4.0913f, 22.7929f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_443, 300.0292f, -2973.294f, 6.1746f, 5.2629f, 0.1117f, 4.0913f, 22.7929f, 8000, 1, 1, 2);
				CAM::SET_CAM_SHAKE_AMPLITUDE(uLocal_443, 0.25f);
				ENTITY::DETACH_ENTITY(Local_168[7 /*2*/], 1, 1);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[7 /*2*/], Local_168[6 /*2*/], -1, Local_420, 0f, 0f, fLocal_423, 0, 0, 0, 0, 2, 1);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_168[8 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[7 /*2*/], Local_425), 0, 0, 1);
				if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_379))
				{
					GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_379, 0);
				}
				iLocal_409++;
			}
			else
			{
				fVar0 = (1f - GlobalFunc_253((SYSTEM::TO_FLOAT((MISC::GET_GAME_TIMER() - iLocal_2104 + 1500)) / 3000f), 0f, 1f));
				GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uLocal_379, "flow", fVar0, 0);
				func_183(1, 5.5f);
			}
			break;
		
		case 5:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			Local_429 = { ENTITY::GET_ENTITY_COORDS(Local_168[8 /*2*/], 1) };
			if (Local_429.f_2 <= 11f)
			{
				ENTITY::DETACH_ENTITY(Local_54[0 /*2*/], 1, 1);
				iLocal_409++;
			}
			else
			{
				func_184(1, 1f);
			}
			break;
		
		case 6:
			if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(Local_54[0 /*2*/]))
			{
				iLocal_2104 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_409++;
			}
			break;
		
		case 7:
			if (MISC::GET_GAME_TIMER() > iLocal_2104)
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_168[8 /*2*/], 1);
				iLocal_409++;
			}
			else
			{
				func_183(0, 4f);
				func_184(0, 1f);
			}
			break;
		
		case 8:
			GlobalFunc_5181(&uLocal_459);
			return 1;
			break;
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (iLocal_409 > 0 && iLocal_409 < 5)
		{
			if (GlobalFunc_4926(1000))
			{
				CAM::DO_SCREEN_FADE_OUT(800);
			}
		}
	}
	else if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_379))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_379, 0);
		}
		GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_54[0 /*2*/], 1), 30f);
		iLocal_2102 = 2;
		iLocal_2101 = 1;
	}
	return 0;
}





void func_183(bool bParam0, float fParam1)//Position - 0xD3F0
{
	if (bParam0)
	{
		fLocal_423 = (fLocal_423 + (fParam1 * SYSTEM::TIMESTEP()));
	}
	else
	{
		fLocal_423 = (fLocal_423 - (fParam1 * SYSTEM::TIMESTEP()));
	}
	ENTITY::DETACH_ENTITY(Local_168[7 /*2*/], 1, 1);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[7 /*2*/], Local_168[6 /*2*/], -1, Local_420, 0f, 0f, fLocal_423, 0, 0, 0, 0, 2, 1);
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_168[8 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[7 /*2*/], Local_425), 0, 0, 1);
}

void func_184(bool bParam0, float fParam1)//Position - 0xD461
{
	if (bParam0)
	{
		Local_425.f_2 = (Local_425.f_2 - (fParam1 * SYSTEM::TIMESTEP()));
	}
	else
	{
		Local_425.f_2 = (Local_425.f_2 + (fParam1 * SYSTEM::TIMESTEP()));
	}
	ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_168[8 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[7 /*2*/], Local_425), 0, 0, 1);
}

int func_185(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8)//Position - 0xD4B0
{
	if (GlobalFunc_105(Param1) || GlobalFunc_105(Param4))
	{
		return 0;
	}
	if (uParam0->f_863)
	{
		if ((GlobalFunc_100(uParam0->f_863.f_4, Param1) && GlobalFunc_100(uParam0->f_863.f_7, Param4)) && uParam0->f_863.f_10 == fParam7)
		{
			uParam0->f_863.f_2 = 0;
			if (!uParam0->f_863.f_1)
			{
				uParam0->f_977 = 1;
				return 1;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		STREAMING::NEW_LOAD_SCENE_START(Param1, Param4, fParam7, iParam8);
		uParam0->f_863 = 1;
		uParam0->f_863.f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_863.f_4 = { Param1 };
		uParam0->f_863.f_7 = { Param4 };
		uParam0->f_863.f_10 = fParam7;
		uParam0->f_977 = 1;
		return 1;
	}
	return 0;
}


void func_187()//Position - 0xD5BE
{
	if (iLocal_382)
	{
		PHYSICS::DELETE_ROPE(&(Local_144[0 /*5*/]));
		PHYSICS::DELETE_ROPE(&(Local_144[1 /*5*/]));
		PHYSICS::DELETE_ROPE(&(Local_144[2 /*5*/]));
		PHYSICS::DELETE_ROPE(&(Local_144[3 /*5*/]));
		iLocal_382 = 0;
	}
}

void func_188(int iParam0, struct<3> Param1, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xD5F4
{
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), iParam0, iParam8);
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	CAM::RENDER_SCRIPT_CAMS(iParam4, iParam5, iParam7, 1, 0, 0);
	if (bParam6)
	{
		MISC::CLEAR_AREA_OF_PROJECTILES(Param1, 500f, 0);
	}
	FIRE::STOP_FIRE_IN_RANGE(Param1, 300f);
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
	}
	if (bParam9)
	{
		GlobalFunc_6685(0);
	}
}











int func_199()//Position - 0xD97C
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[6 /*2*/]))
	{
		Local_168[6 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_414, Local_415, 1, 1, 0);
		ENTITY::SET_ENTITY_COORDS(Local_168[6 /*2*/], Local_415, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(Local_168[6 /*2*/], fLocal_418);
		ENTITY::FREEZE_ENTITY_POSITION(Local_168[6 /*2*/], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[7 /*2*/]))
	{
		Local_168[7 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_419, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[6 /*2*/], Local_420), 1, 1, 0);
	}
	if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_168[7 /*2*/], Local_168[6 /*2*/]))
	{
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[7 /*2*/], Local_168[6 /*2*/], -1, Local_420, 0f, 0f, fLocal_423, 0, 0, 0, 0, 2, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[8 /*2*/]))
	{
		Local_168[8 /*2*/] = OBJECT::CREATE_OBJECT(iLocal_424, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[7 /*2*/], Local_425), 1, 1, 0);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_168[8 /*2*/], 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[8 /*2*/], Local_168[7 /*2*/], -1, Local_425, 0f, 0f, fLocal_428, 0, 0, 0, 0, 2, 1);
		ENTITY::DETACH_ENTITY(Local_168[8 /*2*/], 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_168[8 /*2*/], 1);
	}
	if (!iLocal_383)
	{
		if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_168[7 /*2*/]) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_168[8 /*2*/]))
		{
			iLocal_438 = PHYSICS::ADD_ROPE(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[7 /*2*/], Local_432), 0f, 0f, 0f, 70f, 0, -1f, 4f, 1.4f, 0, 0, 1, 1f, 0, 0);
			PHYSICS::_0x36CCB9BE67B970FD(iLocal_438, 1);
			PHYSICS::ROPE_SET_UPDATE_ORDER(iLocal_438, 2);
			PHYSICS::ROPE_DRAW_SHADOW_ENABLED(&iLocal_438, 0);
			PHYSICS::ATTACH_ENTITIES_TO_ROPE(iLocal_438, Local_168[7 /*2*/], Local_168[8 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[7 /*2*/], Local_432), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[8 /*2*/], Local_435), 70f, 0, 0, 0, 0);
			iLocal_383 = 1;
			return 1;
		}
		if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_168[7 /*2*/]))
		{
		}
		if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_168[8 /*2*/]))
		{
		}
	}
	return 0;
}







void func_206()//Position - 0xDD3A
{
	int iVar0;
	struct<3> Var1;
	
	switch (iLocal_2098)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			if (GlobalFunc_2773(Local_54[0 /*2*/]))
			{
				if (!HUD::DOES_BLIP_EXIST(Local_54[0 /*2*/].f_1))
				{
					Local_54[0 /*2*/].f_1 = GlobalFunc_6783(Local_54[0 /*2*/], 0, 0);
				}
				Local_165 = { PHYSICS::GET_CGOFFSET(Local_54[0 /*2*/]) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_168[2 /*2*/]) && !HUD::DOES_BLIP_EXIST(uLocal_377))
			{
				uLocal_377 = GlobalFunc_6799(Local_168[2 /*2*/]);
			}
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_377, "SUBBTN_LABEL");
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("DHP1_VEHICLE_ARRIVE");
			}
			else
			{
				AUDIO::TRIGGER_MUSIC_EVENT("DHP1_START");
			}
			if (GlobalFunc_2773(Local_63[4 /*10*/]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63[4 /*10*/], 1);
				TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(Local_63[4 /*10*/], 0);
			}
			GlobalFunc_719(&uLocal_459, cLocal_50);
			GlobalFunc_719(&uLocal_459, "MISSHEISTDOCKSPREP1HOLD_CELLPHONE");
			GlobalFunc_724(&uLocal_459, "PORT_OF_LS_PREP_1");
			GlobalFunc_164("dkp1_sub", 7500, 1);
			iLocal_398 = 0;
			iLocal_399 = 0;
			iLocal_400 = 0;
			iLocal_402 = MISC::GET_GAME_TIMER();
			iLocal_403 = 0;
			iLocal_387 = 0;
			iLocal_397 = 0;
			if (uLocal_2107[0] == -1)
			{
				uLocal_2107[0] = AUDIO::GET_SOUND_ID();
			}
			if (uLocal_2107[1] == -1)
			{
				uLocal_2107[1] = AUDIO::GET_SOUND_ID();
			}
			iLocal_2098++;
			break;
		
		case 1:
			if (iLocal_382)
			{
				if (((!PHYSICS::_0x84DE3B5FB3E666F0(&(Local_144[0 /*5*/])) && !PHYSICS::_0x84DE3B5FB3E666F0(&(Local_144[1 /*5*/]))) && !PHYSICS::_0x84DE3B5FB3E666F0(&(Local_144[2 /*5*/]))) && !PHYSICS::_0x84DE3B5FB3E666F0(&(Local_144[3 /*5*/])))
				{
					PHYSICS::ROPE_CONVERT_TO_SIMPLE(Local_168[0 /*2*/]);
					PHYSICS::ROPE_CONVERT_TO_SIMPLE(Local_168[1 /*2*/]);
					if (GlobalFunc_2773(Local_54[0 /*2*/]))
					{
						PHYSICS::SET_CGOFFSET(Local_54[0 /*2*/], Local_165);
					}
					if (HUD::DOES_BLIP_EXIST(uLocal_377))
					{
						HUD::REMOVE_BLIP(&uLocal_377);
					}
					func_245(1);
					GlobalFunc_718(&uLocal_459, joaat("s_m_m_security_01"));
					GlobalFunc_719(&uLocal_459, cLocal_48);
					AUDIO::TRIGGER_MUSIC_EVENT("DHP1_RELEASED");
					HUD::CLEAR_HELP(1);
					iLocal_451 = MISC::GET_GAME_TIMER();
					iLocal_2098 = 4;
				}
				func_244();
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1249.106f, -3007.908f, 10.84327f, 1249.962f, -3007.837f, 8.31909f, 1.68f, 0, 1, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) && !GlobalFunc_116(0))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 51))
					{
						uLocal_443 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1249.929f, -3010.267f, 9.590105f, 5.351202f, -1.57369f, 8.12499f, 21.33357f, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_443, 1249.929f, -3010.267f, 9.590105f, 4.448765f, -1.5737f, 12.68005f, 21.33357f, 3500, 0, 1, 2);
						CAM::SHAKE_CAM(uLocal_443, "hand_shake", 0.3f);
						func_188(0, 1249.787f, -3008.016f, 8.52751f, 1, 0, 1, 3000, 0, 1);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						uLocal_380 = PED::CREATE_SYNCHRONIZED_SCENE(1250.01f, -3007.9f, 9.32f, 0f, 0f, 90f, 2);
						if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_380, cLocal_50, "ig_1_stealth_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						else
						{
							TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), uLocal_380, cLocal_50, "ig_1_button", 1000f, -1.5f, 4, 0, 1000f, 2);
						}
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
						HUD::CLEAR_HELP(1);
						iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(1249.787f, -3008.016f, 8.52751f, 5f, 0, 4);
						if (GlobalFunc_2773(iVar0))
						{
							ENTITY::SET_ENTITY_COORDS(iVar0, 1250.333f, -3010.219f, 8.3191f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iVar0, 85.8086f);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
						}
						RECORDING::_0x293220DA1B46CEBC(4f, 0f, 4);
						RECORDING::_0x48621C9FCA3EBD28(4);
						iLocal_444 = 1;
						iLocal_2098++;
					}
					else if (!GlobalFunc_74("DKP1_BTN"))
					{
						GlobalFunc_1("DKP1_BTN");
					}
				}
				else if (GlobalFunc_74("DKP1_BTN"))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			break;
		
		case 2:
			if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_380) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_380) == 1f)
			{
				RECORDING::_0x81CBAE94390F9F89();
				AUDIO::PLAY_SOUND_FROM_COORD(-1, "SUB_RELEASE", 1260.896f, -3006.556f, 23.4213f, "DOCKS_HEIST_PREP_1_SOUNDSET", 0, 0, 0);
				CAM::SET_CAM_PARAMS(uLocal_443, 1249f, -3010.3f, 10.7f, 37.7f, 0f, -61.5f, 43.4f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(uLocal_443, 1249f, -3010.3f, 10.7f, -20.1f, 0f, -48.2f, 43.4f, 1700, 2, 2, 2);
				CAM::SET_CAM_SHAKE_AMPLITUDE(uLocal_443, 0.1f);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(Local_144[0 /*5*/], Local_54[0 /*2*/]);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(Local_144[1 /*5*/], Local_54[0 /*2*/]);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(Local_144[2 /*5*/], Local_54[0 /*2*/]);
				PHYSICS::DETACH_ROPE_FROM_ENTITY(Local_144[3 /*5*/], Local_54[0 /*2*/]);
				PHYSICS::ROPE_CONVERT_TO_SIMPLE(Local_168[0 /*2*/]);
				PHYSICS::ROPE_CONVERT_TO_SIMPLE(Local_168[1 /*2*/]);
				if (GlobalFunc_2773(Local_54[0 /*2*/]))
				{
					PHYSICS::SET_CGOFFSET(Local_54[0 /*2*/], Local_165);
					PHYSICS::ACTIVATE_PHYSICS(Local_54[0 /*2*/]);
				}
				iLocal_451 = MISC::GET_GAME_TIMER();
				AUDIO::TRIGGER_MUSIC_EVENT("DHP1_RELEASED");
				HUD::CLEAR_HELP(1);
				iLocal_444 = 1;
				iLocal_2098++;
			}
			else if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_380) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_380) >= 0.7f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) != 1)
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1252.594f, -3008.883f, 8.3191f, 1f, -1, 0.25f, 0, 40000f);
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_451) > 1500)
			{
				if (iLocal_444)
				{
					CAM::SET_CAM_PARAMS(uLocal_443, 1261.7f, -3013.3f, 21.7f, -62.7f, 0f, 29.5f, 40.4f, 0, 3, 3, 2);
					CAM::SET_CAM_PARAMS(uLocal_443, 1259.9f, -3014.1f, 21.7f, -67.7f, 0f, 16.5f, 40.4f, 4000, 3, 3, 2);
					iLocal_444 = 0;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_451) > 5000 || PAD::IS_CONTROL_JUST_PRESSED(2, 201))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_377))
					{
						HUD::REMOVE_BLIP(&uLocal_377);
					}
					func_245(1);
					GlobalFunc_718(&uLocal_459, joaat("s_m_m_security_01"));
					GlobalFunc_719(&uLocal_459, cLocal_48);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_176(1, 0, 0, 3000, 0);
					iLocal_451 = MISC::GET_GAME_TIMER();
					iLocal_2098++;
				}
			}
			break;
		
		case 4:
			if (!GlobalFunc_236())
			{
				if (GlobalFunc_8315() == 2)
				{
					if (!GlobalFunc_9813(GlobalFunc_9028(0), 0) && !GlobalFunc_9813(GlobalFunc_9028(1), 0))
					{
						GlobalFunc_770(12);
						iLocal_2098++;
					}
					else if (GlobalFunc_9813(GlobalFunc_9028(0), 0) && !GlobalFunc_9813(GlobalFunc_9028(1), 0))
					{
						GlobalFunc_173(&uLocal_212, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						GlobalFunc_173(&uLocal_212, 1, GlobalFunc_9028(0), "MICHAEL", 0, 1);
						if (GlobalFunc_10631(&uLocal_212, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_2", 7, 0, 0))
						{
							GlobalFunc_770(12);
							iLocal_2098++;
						}
					}
					else if (!GlobalFunc_9813(GlobalFunc_9028(0), 0) && GlobalFunc_9813(GlobalFunc_9028(1), 0))
					{
						GlobalFunc_173(&uLocal_212, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						GlobalFunc_173(&uLocal_212, 2, GlobalFunc_9028(1), "FRANKLIN", 0, 1);
						if (GlobalFunc_10631(&uLocal_212, "DHP1AUD", "DHP1_BUD", "DHP1_BUD_1", "DHP1_BUD", "DHP1_BUD_3", 7, 0, 0))
						{
							GlobalFunc_770(12);
							iLocal_2098++;
						}
					}
					else
					{
						GlobalFunc_173(&uLocal_212, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						GlobalFunc_173(&uLocal_212, 1, GlobalFunc_9028(0), "MICHAEL", 0, 1);
						GlobalFunc_173(&uLocal_212, 2, GlobalFunc_9028(1), "FRANKLIN", 0, 1);
						if (GlobalFunc_10618(&uLocal_212, "DHP1AUD", "DHP1_BUD", 7, 0, 0, 0))
						{
							GlobalFunc_770(12);
							iLocal_2098++;
						}
					}
				}
				else if (GlobalFunc_5171())
				{
					GlobalFunc_164("DKP1_SWTCH", 7500, 1);
				}
			}
			break;
		
		case 5:
			Var1 = { ENTITY::GET_ENTITY_COORDS(Local_54[0 /*2*/], 1) };
			if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Local_54[0 /*2*/]) > 0f || Var1.f_2 < -0.5f)
			{
				PHYSICS::DELETE_CHILD_ROPE(Local_144[0 /*5*/]);
				PHYSICS::DELETE_CHILD_ROPE(Local_144[1 /*5*/]);
				PHYSICS::DELETE_CHILD_ROPE(Local_144[2 /*5*/]);
				PHYSICS::DELETE_CHILD_ROPE(Local_144[3 /*5*/]);
				if (uLocal_2107[0] != -1)
				{
					AUDIO::STOP_SOUND(uLocal_2107[0]);
				}
				if (uLocal_2107[1] != -1)
				{
					AUDIO::STOP_SOUND(uLocal_2107[1]);
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54[0 /*2*/], 0))
			{
				GlobalFunc_10606(1218.237f, -3005.128f, 4.8658f, 359.5065f, 0, 145);
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					Local_63[6 /*10*/] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, 1);
					WEAPON::GIVE_WEAPON_TO_PED(Local_63[6 /*10*/], joaat("weapon_pistol"), -1, 0, 1);
					PED::SET_PED_CONFIG_FLAG(Local_63[6 /*10*/], 330, 1);
					PED::SET_PED_AS_COP(Local_63[6 /*10*/], 1);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
					TASK::TASK_PERFORM_SEQUENCE(Local_63[6 /*10*/], uLocal_378);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
					Local_63[7 /*10*/] = PED::CREATE_PED(26, joaat("s_m_m_security_01"), 1229.557f, -3002.882f, 8.31909f, -30.33f, 1, 1);
					PED::SET_PED_CONFIG_FLAG(Local_63[7 /*10*/], 330, 1);
					WEAPON::GIVE_WEAPON_TO_PED(Local_63[7 /*10*/], joaat("weapon_pistol"), -1, 0, 1);
					PED::SET_PED_AS_COP(Local_63[7 /*10*/], 1);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1252.056f, -3006.94f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
					TASK::TASK_PERFORM_SEQUENCE(Local_63[7 /*10*/], uLocal_378);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
					GlobalFunc_5174(&uLocal_459, joaat("s_m_m_security_01"));
				}
				else
				{
					Local_63[5 /*10*/] = PED::CREATE_PED(26, joaat("s_m_m_dockwork_01"), 1228.929f, -3015.008f, 8.31909f, 0f, 1, 1);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63[5 /*10*/], 1);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1252.876f, -3014.035f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
					TASK::TASK_PLAY_ANIM(0, cLocal_48, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, cLocal_48, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
					TASK::TASK_SMART_FLEE_COORD(0, 1252.876f, -3014.035f, 8.31909f, 300f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
					TASK::TASK_PERFORM_SEQUENCE(Local_63[5 /*10*/], uLocal_378);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
					GlobalFunc_5174(&uLocal_459, joaat("s_m_m_security_01"));
				}
				if (GlobalFunc_2773(Local_63[4 /*10*/]))
				{
					TASK::CLEAR_PED_TASKS(Local_63[4 /*10*/]);
					ENTITY::SET_ENTITY_COORDS(Local_63[4 /*10*/], 1229.557f, -3002.882f, 8.31909f, 1, 0, 0, 1);
				}
				else
				{
					Local_63[4 /*10*/] = PED::CREATE_PED(26, joaat("s_m_m_dockwork_01"), 1229.557f, -3002.882f, 8.31909f, -99f, 1, 1);
				}
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63[4 /*10*/], 1);
				AUDIO::STOP_PED_SPEAKING(Local_63[4 /*10*/], 1);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2096, 2);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1252.994f, -3004.134f, 9.319f, 2f, 20000, 0.25f, 0, 40000f);
				TASK::TASK_PLAY_ANIM(0, cLocal_48, "react_big_variations_f", 8f, -1.5f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_48, "react_big_variations_g", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_48, "react_big_variations_h", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_48, "react_big_variations_i", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, cLocal_48, "react_big_variations_f", 1.5f, -1.5f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_SMART_FLEE_COORD(0, 1252.994f, -3004.134f, 9.319f, 300f, -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
				TASK::TASK_PERFORM_SEQUENCE(Local_63[4 /*10*/], uLocal_378);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
				iLocal_455 = MISC::GET_GAME_TIMER();
				iLocal_458 = 0;
				iLocal_457 = 0;
				HUD::CLEAR_HELP(1);
				AUDIO::TRIGGER_MUSIC_EVENT("DHP1_SUB");
				if (HUD::DOES_BLIP_EXIST(Local_54[0 /*2*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_54[0 /*2*/].f_1));
				}
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_168[3 /*2*/]));
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_168[0 /*2*/]));
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Local_168[1 /*2*/]));
				GlobalFunc_5174(&uLocal_459, joaat("p_amb_phone_01"));
				GlobalFunc_5174(&uLocal_459, joaat("s_m_m_dockwork_01"));
				GlobalFunc_5174(&uLocal_459, joaat("prop_ld_test_01"));
				GlobalFunc_5174(&uLocal_459, joaat("prop_sub_release"));
				GlobalFunc_5175(&uLocal_459, cLocal_50);
				TASK::REMOVE_WAYPOINT_RECORDING("docksprep1");
				RECORDING::_0x293220DA1B46CEBC(15f, 10f, 4);
				func_174(1);
				iLocal_2098 = 0;
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_54[0 /*2*/], 1), 1) < 5f && !iLocal_387)
			{
				GlobalFunc_159("DKP1_CLIMB", -1);
				iLocal_387 = 1;
			}
			break;
	}
	if ((!iLocal_397 && GlobalFunc_2773(Local_54[0 /*2*/])) && ENTITY::IS_ENTITY_IN_WATER(Local_54[0 /*2*/]))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "SUB_SPLASH", Local_54[0 /*2*/], "DOCKS_HEIST_PREP_1_SOUNDSET", 0, 0);
		iLocal_397 = 1;
	}
	if (((!iLocal_382 && ENTITY::DOES_ENTITY_EXIST(Local_168[0 /*2*/])) && ENTITY::DOES_ENTITY_EXIST(Local_168[1 /*2*/])) && GlobalFunc_2773(Local_54[0 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_168[0 /*2*/]) && ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_168[1 /*2*/]))
		{
			PHYSICS::SET_CG_AT_BOUNDCENTER(Local_54[0 /*2*/]);
			Local_144[0 /*5*/] = PHYSICS::ADD_ROPE(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2103, 1, fLocal_2103, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_144[0 /*5*/], Local_168[0 /*2*/], Local_54[0 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[0 /*2*/], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54[0 /*2*/], 1.8f, 1.02f, 1.11f), fLocal_2103, 0, 0, 0, 0);
			Local_144[1 /*5*/] = PHYSICS::ADD_ROPE(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2103, 1, fLocal_2103, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_144[1 /*5*/], Local_168[0 /*2*/], Local_54[0 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[0 /*2*/], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54[0 /*2*/], -1.8f, 1.02f, 1.11f), fLocal_2103, 0, 0, 0, 0);
			Local_144[2 /*5*/] = PHYSICS::ADD_ROPE(1260.692f, -3008.286f, 23.73365f, 0f, 0f, 0f, fLocal_2103, 1, fLocal_2103, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_144[2 /*5*/], Local_168[1 /*2*/], Local_54[0 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[1 /*2*/], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54[0 /*2*/], 1.8f, -3.07f, 1.11f), fLocal_2103, 0, 0, 0, 0);
			Local_144[3 /*5*/] = PHYSICS::ADD_ROPE(1260.752f, -3004.994f, 22.68315f, 0f, 0f, 0f, fLocal_2103, 1, fLocal_2103, 0.5f, 0.5f, 0, 0, 0, 10f, 1, 0);
			PHYSICS::ATTACH_ENTITIES_TO_ROPE(Local_144[3 /*5*/], Local_168[1 /*2*/], Local_54[0 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_168[1 /*2*/], 0f, 0f, 0f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_54[0 /*2*/], -1.8f, -3.07f, 1.11f), fLocal_2103, 0, 0, 0, 0);
			iLocal_382 = 1;
			iLocal_384 = 0;
			PHYSICS::ACTIVATE_PHYSICS(Local_54[0 /*2*/]);
			ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_54[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
		}
	}
	else if (GlobalFunc_2773(Local_54[0 /*2*/]))
	{
		if (!iLocal_384)
		{
			PHYSICS::ACTIVATE_PHYSICS(Local_54[0 /*2*/]);
			iLocal_384 = 1;
		}
		ENTITY::FREEZE_ENTITY_POSITION(Local_54[0 /*2*/], 0);
		ENTITY::APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Local_54[0 /*2*/], 1, 0f, 0f, 0.01f, 0, 0, 1, 0);
	}
	if (!iLocal_385)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_168[3 /*2*/]))
		{
			if (ENTITY::DOES_ENTITY_HAVE_PHYSICS(Local_168[3 /*2*/]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[3 /*2*/], Local_63[4 /*10*/], PED::GET_PED_BONE_INDEX(Local_63[4 /*10*/], 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				iLocal_385 = 1;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_168[3 /*2*/]) && ((GlobalFunc_2773(Local_63[4 /*10*/]) && PED::IS_PED_FLEEING(Local_63[4 /*10*/])) || !GlobalFunc_2773(Local_63[4 /*10*/])))
	{
		if (GlobalFunc_2773(Local_63[4 /*10*/]) && ENTITY::IS_ENTITY_PLAYING_ANIM(Local_63[4 /*10*/], cLocal_49, "cellphone_call_listen_c", 3))
		{
			TASK::STOP_ANIM_TASK(Local_63[4 /*10*/], cLocal_49, "cellphone_call_listen_c", -1056964608);
		}
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(Local_168[3 /*2*/]))
		{
			ENTITY::DETACH_ENTITY(Local_168[3 /*2*/], 1, 1);
		}
	}
	if (GlobalFunc_8315() == 2)
	{
		if (GlobalFunc_2773(Local_54[0 /*2*/]))
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_54[0 /*2*/], 1);
		}
	}
	else if (GlobalFunc_2773(Local_54[0 /*2*/]))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_54[0 /*2*/], 0);
	}
}






































void func_244()//Position - 0x11B8E
{
	int iVar0;
	bool bVar1;
	
	iLocal_381 = 0;
	while (iLocal_381 < Local_144)
	{
		if (!PHYSICS::_0x84DE3B5FB3E666F0(&(Local_144[iLocal_381 /*5*/])))
		{
			if (!Local_144[iLocal_381 /*5*/].f_4)
			{
				bVar1 = true;
			}
			iVar0++;
		}
		iLocal_381++;
	}
	if (bVar1)
	{
		if (((((!PHYSICS::_0x84DE3B5FB3E666F0(&(Local_144[0 /*5*/])) && !PHYSICS::_0x84DE3B5FB3E666F0(&(Local_144[1 /*5*/]))) && (!Local_144[0 /*5*/].f_4 || !Local_144[1 /*5*/].f_4)) || ((!PHYSICS::_0x84DE3B5FB3E666F0(&(Local_144[2 /*5*/])) && !PHYSICS::_0x84DE3B5FB3E666F0(&(Local_144[3 /*5*/]))) && (!Local_144[2 /*5*/].f_4 || !Local_144[3 /*5*/].f_4))) || iVar0 == 3) && iVar0 < 4)
		{
			if (iLocal_2110 > 0)
			{
				if (uLocal_2107[(iLocal_2110 - 1)] != -1)
				{
					AUDIO::STOP_SOUND(uLocal_2107[(iLocal_2110 - 1)]);
				}
			}
			if (uLocal_2107[iLocal_2110] != -1)
			{
				AUDIO::PLAY_SOUND_FROM_COORD(uLocal_2107[iLocal_2110], "DOCKS_HEIST_PREP_1_SUB_SWING", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
				iLocal_2110++;
			}
		}
		else if (iVar0 <= 2)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "DOCKS_HEIST_PREP_1_SUB_TILT", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
		}
		iLocal_381 = 0;
		while (iLocal_381 < Local_144)
		{
			if (!PHYSICS::_0x84DE3B5FB3E666F0(&(Local_144[iLocal_381 /*5*/])))
			{
				if (!Local_144[iLocal_381 /*5*/].f_4)
				{
					AUDIO::PLAY_SOUND_FROM_COORD(-1, "DOCKS_HEIST_PREP_1_CABLE_SNAP", 1260.896f, -3006.556f, 23.4213f, 0, 0, 0, 0);
				}
				Local_144[iLocal_381 /*5*/].f_4 = 1;
			}
			iLocal_381++;
		}
		if (iVar0 >= 4)
		{
			if (uLocal_2107[0] != -1)
			{
				AUDIO::STOP_SOUND(uLocal_2107[0]);
			}
			if (uLocal_2107[1] != -1)
			{
				AUDIO::STOP_SOUND(uLocal_2107[1]);
			}
		}
	}
}

void func_245(int iParam0)//Position - 0x11D61
{
	switch (iParam0)
	{
		case 0:
			GlobalFunc_718(&uLocal_459, joaat("submersible"));
			GlobalFunc_718(&uLocal_459, joaat("prop_ld_test_01"));
			GlobalFunc_718(&uLocal_459, joaat("prop_sub_release"));
			GlobalFunc_718(&uLocal_459, joaat("s_m_m_dockwork_01"));
			GlobalFunc_719(&uLocal_459, cLocal_49);
			GlobalFunc_719(&uLocal_459, cLocal_50);
			GlobalFunc_727(&uLocal_459, "docksprep1");
			GlobalFunc_718(&uLocal_459, joaat("p_amb_phone_01"));
			func_247(&uLocal_459);
			GlobalFunc_724(&uLocal_459, "PORT_OF_LS_PREP_1");
			break;
		
		case 1:
			GlobalFunc_718(&uLocal_459, joaat("submersible"));
			GlobalFunc_718(&uLocal_459, joaat("packer"));
			GlobalFunc_718(&uLocal_459, joaat("armytrailer"));
			GlobalFunc_718(&uLocal_459, iLocal_414);
			GlobalFunc_718(&uLocal_459, iLocal_419);
			GlobalFunc_718(&uLocal_459, iLocal_424);
			GlobalFunc_734(&uLocal_459);
			func_247(&uLocal_459);
			break;
		
		case 2:
		case 3:
			GlobalFunc_718(&uLocal_459, joaat("submersible"));
			GlobalFunc_718(&uLocal_459, joaat("packer"));
			GlobalFunc_718(&uLocal_459, joaat("armytrailer"));
			GlobalFunc_718(&uLocal_459, joaat("prop_sub_cover_01"));
			GlobalFunc_718(&uLocal_459, joaat("prop_tarp_strap"));
			break;
	}
}


void func_247(var uParam0)//Position - 0x11ED0
{
	uParam0->f_859.f_2 = 0;
	if (!uParam0->f_859.f_1)
	{
		if (!uParam0->f_859)
		{
			PHYSICS::ROPE_LOAD_TEXTURES();
			uParam0->f_859 = 1;
		}
		uParam0->f_977 = 1;
	}
}





void func_252()//Position - 0x1216B
{
	int iVar0;
	
	iLocal_381 = 0;
	while (iLocal_381 <= (8 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_63[iLocal_381 /*10*/]))
		{
			if (Local_63[iLocal_381 /*10*/] != Local_63[3 /*10*/])
			{
				if (iLocal_2097 == 0)
				{
					GlobalFunc_661(Local_63[iLocal_381 /*10*/], &(Local_63[iLocal_381 /*10*/].f_2), -1, 0, 0, 0, -1082130432, 0);
				}
				else if (HUD::DOES_BLIP_EXIST(Local_63[iLocal_381 /*10*/].f_2))
				{
					HUD::REMOVE_BLIP(&(Local_63[iLocal_381 /*10*/].f_2));
				}
			}
			if (PED::IS_PED_INJURED(Local_63[iLocal_381 /*10*/]))
			{
				if (Local_63[iLocal_381 /*10*/] == Local_63[3 /*10*/])
				{
					func_86(7);
				}
				GlobalFunc_132(&(Local_63[iLocal_381 /*10*/]), 1, 0, 1);
			}
			else if (iLocal_2097 == 2 && Local_63[iLocal_381 /*10*/] == Local_63[3 /*10*/])
			{
				if (GlobalFunc_156(Local_63[3 /*10*/], PLAYER::PLAYER_PED_ID(), 1) > 300f)
				{
					func_86(11);
				}
			}
		}
		iLocal_381++;
	}
	iLocal_381 = 0;
	while (iLocal_381 <= (4 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_54[iLocal_381 /*2*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_54[iLocal_381 /*2*/], 0))
			{
				if (Local_54[iLocal_381 /*2*/] == Local_54[0 /*2*/])
				{
					func_86(1);
				}
				else if (Local_54[iLocal_381 /*2*/] == Local_54[2 /*2*/] || Local_54[iLocal_381 /*2*/] == Local_54[1 /*2*/])
				{
					func_86(2);
				}
				else if (iLocal_381 == 3)
				{
					func_86(8);
				}
				GlobalFunc_131(&(Local_54[iLocal_381 /*2*/]));
			}
			else if (iLocal_391)
			{
				if (Local_54[iLocal_381 /*2*/] == Local_54[0 /*2*/] || Local_54[iLocal_381 /*2*/] == Local_54[1 /*2*/])
				{
					if (iLocal_2097 == 2)
					{
						if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Local_54[iLocal_381 /*2*/]) > 0.5f)
						{
							func_86(5);
						}
					}
				}
				if (Local_54[iLocal_381 /*2*/] == Local_54[2 /*2*/] || Local_54[iLocal_381 /*2*/] == Local_54[1 /*2*/])
				{
					if (GlobalFunc_2250(&(Local_54[iLocal_381 /*2*/])))
					{
						func_86(3);
						GlobalFunc_131(&(Local_54[iLocal_381 /*2*/]));
					}
				}
				if (Local_54[iLocal_381 /*2*/] == Local_54[0 /*2*/])
				{
					if (iLocal_2097 == 1 && iLocal_2098 < 3)
					{
						if (GlobalFunc_2250(&(Local_54[iLocal_381 /*2*/])))
						{
							func_86(4);
							GlobalFunc_131(&(Local_54[iLocal_381 /*2*/]));
						}
					}
				}
			}
		}
		iLocal_381++;
	}
	if (GlobalFunc_2773(Local_54[0 /*2*/]) && GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_54[0 /*2*/], 1), 1) > 750f)
		{
			func_86(10);
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_54[0 /*2*/], 1), 1) > 700f)
		{
			if (!iLocal_388 && GlobalFunc_5171())
			{
				GlobalFunc_164("DKP1_ABSUB", 7500, 1);
				iLocal_388 = 1;
			}
		}
		else
		{
			iLocal_388 = 0;
		}
	}
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		func_258();
	}
	if (iLocal_2097 == 0 && iLocal_2098 > 0)
	{
		func_255();
	}
	if (iLocal_2097 == 0 || iLocal_2097 == 1)
	{
		if (GlobalFunc_2773(Local_54[0 /*2*/]))
		{
			if (!iLocal_2105)
			{
				GlobalFunc_504(Local_54[0 /*2*/], 588);
				iLocal_2105 = 1;
			}
		}
		else if (iLocal_2105)
		{
			GlobalFunc_504(0, 588);
			iLocal_2105 = 0;
		}
	}
	else if (iLocal_2097 == 2)
	{
		if (GlobalFunc_2773(Local_54[2 /*2*/]))
		{
			if (!iLocal_2106)
			{
				GlobalFunc_504(Local_54[2 /*2*/], 590);
				iLocal_2106 = 1;
			}
		}
		else if (iLocal_2106)
		{
			GlobalFunc_504(0, 590);
			iLocal_2106 = 0;
		}
	}
	if ((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.402f, -2880.396f, 8.25003f, 1240.384f, -2924.513f, 40.81909f, 28.875f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.222f, -3035.469f, 16.02625f, 1240.409f, -2924.159f, 8.06909f, 28.875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.464f, -3035.127f, 13.00698f, 1240.617f, -3057.122f, 16.97133f, 27.6875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.537f, -2967.822f, 32.94558f, 1240.792f, -2943.657f, 10.00659f, 12.1875f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1261.525f, -3006.275f, 29.21641f, 1237.788f, -3006.826f, 12.87723f, 8.1875f, 0, 1, 0))
	{
		HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeBoatPO1SH2A"), 1240f, -2970f, 0, 0);
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1);
		}
		else
		{
			iVar0 = PLAYER::PLAYER_PED_ID();
		}
		if ((!ENTITY::IS_ENTITY_IN_AIR(iVar0) && !ENTITY::IS_ENTITY_IN_WATER(iVar0)) && (!ENTITY::DOES_ENTITY_EXIST(Local_54[0 /*2*/]) || !ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, Local_54[0 /*2*/])))
		{
			if (!iLocal_390)
			{
				GlobalFunc_553(593);
				iLocal_390 = 1;
			}
		}
	}
	if (!iLocal_392)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			AUDIO::SET_AUDIO_FLAG("OnlyAllowScriptTriggerPoliceScanner", 1);
			AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_DH_PREP_1_01", 0f);
			iLocal_392 = 1;
		}
	}
	if (CAM::IS_AIM_CAM_ACTIVE())
	{
		CAM::_0xFD3151CD37EA2245(Local_54[0 /*2*/]);
	}
}



void func_255()//Position - 0x1278A
{
	switch (iLocal_398)
	{
		case 0:
			if (GlobalFunc_2773(Local_63[4 /*10*/]))
			{
				if (iLocal_403)
				{
					TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], cLocal_49, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksprep1"))
					{
						TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_63[4 /*10*/], "docksprep1", 0, 8, -1);
					}
					else
					{
						TASK::REQUEST_WAYPOINT_RECORDING("docksprep1");
					}
				}
			}
			iLocal_404 = 0;
			iLocal_398 = 1;
			break;
		
		case 1:
			if (!iLocal_403)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_402) > 2000 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_63[4 /*10*/], 1), 1) < 10f)
				{
					iLocal_403 = 1;
					iLocal_398 = 0;
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0))
			{
				if (GlobalFunc_2773(Local_63[4 /*10*/]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(Local_63[4 /*10*/], PLAYER::PLAYER_PED_ID()))
					{
						TASK::CLEAR_PED_TASKS(Local_63[4 /*10*/]);
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_63[4 /*10*/]);
						GlobalFunc_173(&uLocal_212, 3, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_398 = 2;
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_63[4 /*10*/], 1), 1) < 12f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 8.5f)
					{
						AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_63[4 /*10*/]);
						if (!GlobalFunc_2664(Local_63[4 /*10*/], 1464580341, 1))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(Local_63[4 /*10*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4000);
							TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_63[4 /*10*/], 1), 1) < 12f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!GlobalFunc_2664(Local_63[4 /*10*/], 1464580341, 1))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(Local_63[4 /*10*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4000);
							TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (((WEAPON::IS_FLASH_LIGHT_ON(PLAYER::PLAYER_PED_ID()) && (CLOCK::GET_CLOCK_HOURS() >= 19 || CLOCK::GET_CLOCK_HOURS() < 6)) && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_63[4 /*10*/], 1) < 25f) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_63[4 /*10*/]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_63[4 /*10*/])))
					{
						if (!GlobalFunc_2664(Local_63[4 /*10*/], 1464580341, 1))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(Local_63[4 /*10*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4000);
							TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_63[4 /*10*/], 1), 1) < 12f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (!GlobalFunc_2664(Local_63[4 /*10*/], 1464580341, 1))
						{
							TASK::TASK_TURN_PED_TO_FACE_COORD(Local_63[4 /*10*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 4000);
							TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 4f, -8f, -1, 49, 0, 0, 0, 0);
						}
					}
				}
				if (iLocal_2098 > 1)
				{
					if (GlobalFunc_2773(Local_63[4 /*10*/]))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_63[4 /*10*/], Local_54[0 /*2*/]))
						{
							AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_63[4 /*10*/]);
							GlobalFunc_173(&uLocal_212, 3, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
							iLocal_398 = 3;
							iLocal_400 = 3;
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_63[4 /*10*/]);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_63[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, -1, 0.25f, 0, -122.93f);
							iLocal_402 = MISC::GET_GAME_TIMER();
							iLocal_403 = 0;
						}
					}
				}
			}
			if (GlobalFunc_2773(Local_63[4 /*10*/]))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_63[4 /*10*/]))
				{
					if (iLocal_403)
					{
						if ((TASK::GET_SCRIPT_TASK_STATUS(Local_63[4 /*10*/], 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_63[4 /*10*/], 713668775) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_63[4 /*10*/], 1464580341) != 1)
						{
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_63[4 /*10*/], cLocal_49, "cellphone_call_listen_c", 3))
							{
								TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], cLocal_49, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
							}
							if (ENTITY::IS_ENTITY_AT_COORD(Local_63[4 /*10*/], 1228.056f, -3000.427f, 8.4424f, 2f, 2f, 2f, 0, 1, 0))
							{
								if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksprep1"))
								{
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_63[4 /*10*/], "docksprep1", 0, 0, -1);
								}
							}
							else if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksprep1"))
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_63[4 /*10*/], "docksprep1", 0, 8, -1);
							}
						}
					}
				}
				else
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_406) > 10000)
					{
						if (!TASK::WAYPOINT_PLAYBACK_GET_IS_PAUSED(Local_63[4 /*10*/]))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(Local_63[4 /*10*/], 1251.625f, -3003.338f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
							{
								TASK::WAYPOINT_PLAYBACK_PAUSE(Local_63[4 /*10*/], 0, 0);
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(Local_63[4 /*10*/], 1228.849f, -2986.284f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
							{
								TASK::WAYPOINT_PLAYBACK_PAUSE(Local_63[4 /*10*/], 0, 0);
							}
						}
						else
						{
							iLocal_406 = MISC::GET_GAME_TIMER();
							TASK::WAYPOINT_PLAYBACK_RESUME(Local_63[4 /*10*/], 1, -1, 3000);
						}
					}
					if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_63[4 /*10*/]) && (MISC::GET_GAME_TIMER() - iLocal_407) > 4000)
					{
						GlobalFunc_5117(Local_63[4 /*10*/], "Sol1_EFAA", "CONSTRUCTION2", 3);
						iLocal_407 = MISC::GET_GAME_TIMER();
					}
				}
				if (((PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 122) || PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 124)) || PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 116))
				{
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_63[4 /*10*/]);
					GlobalFunc_173(&uLocal_212, 3, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_398 = 3;
					iLocal_400 = 1;
					TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					TASK::TASK_HANDS_UP(Local_63[4 /*10*/], -1, PLAYER::PLAYER_PED_ID(), -1, 1);
				}
				else if (PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 23))
				{
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_63[4 /*10*/]);
					GlobalFunc_173(&uLocal_212, 3, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_398 = 3;
					iLocal_400 = 2;
					TASK::CLEAR_PED_TASKS(Local_63[4 /*10*/]);
					TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					TASK::TASK_COWER(Local_63[4 /*10*/], -1);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_63[4 /*10*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Local_63[4 /*10*/]);
					TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
					GlobalFunc_173(&uLocal_212, 3, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_398 = 3;
					iLocal_400 = 4;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_2773(Local_63[4 /*10*/]))
			{
				if (!PED::IS_PED_HEADTRACKING_PED(Local_63[4 /*10*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_63[4 /*10*/], PLAYER::PLAYER_PED_ID(), -1, 3104, 2);
				}
			}
			switch (iLocal_399)
			{
				case 0:
					if (GlobalFunc_2773(Local_63[4 /*10*/]))
					{
						if (GlobalFunc_10618(&uLocal_212, "SOL1AUD", "SOL1_SEE3", 7, 0, 0, 0))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
							TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 4f, 1073741824, 1073741824, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
							TASK::TASK_PERFORM_SEQUENCE(Local_63[4 /*10*/], uLocal_378);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
							TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
							iLocal_401 = MISC::GET_GAME_TIMER();
							iLocal_399 = 1;
						}
					}
					break;
				
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_401) > 4000)
					{
						if (GlobalFunc_2773(Local_63[4 /*10*/]))
						{
							if (GlobalFunc_10618(&uLocal_212, "SOL1AUD", "SOL1_SEE4", 7, 0, 0, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
								TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 3f, 1f, 1073741824, 0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
								TASK::TASK_PERFORM_SEQUENCE(Local_63[4 /*10*/], uLocal_378);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
								TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
								iLocal_401 = MISC::GET_GAME_TIMER();
								iLocal_399 = 2;
							}
						}
					}
					break;
				
				case 2:
					if ((MISC::GET_GAME_TIMER() - iLocal_401) > 8000)
					{
						if (GlobalFunc_2773(Local_63[4 /*10*/]))
						{
							if (GlobalFunc_10618(&uLocal_212, "SOL1AUD", "SOL1_COPS2", 7, 0, 0, 0))
							{
								iLocal_401 = MISC::GET_GAME_TIMER();
								iLocal_400 = 4;
								iLocal_398 = 3;
							}
						}
					}
					break;
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1240.513f, -2880.356f, 2.10339f, 1240.559f, -3057.271f, 17.4f, 29.45f, 0, 1, 0) || !GlobalFunc_2773(Local_63[4 /*10*/]))
			{
				iLocal_398 = 0;
			}
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_405, 1);
			if (GlobalFunc_2773(Local_63[4 /*10*/]))
			{
				if ((PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 122) || PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 124))
				{
					GlobalFunc_173(&uLocal_212, 3, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_398 = 3;
					iLocal_400 = 1;
					TASK::TASK_HANDS_UP(Local_63[4 /*10*/], -1, PLAYER::PLAYER_PED_ID(), -1, 1);
					TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				}
				else if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_63[4 /*10*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_63[4 /*10*/]))
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iLocal_405) != joaat("GROUP_MELEE") && iLocal_405 != joaat("weapon_unarmed"))
					{
						GlobalFunc_173(&uLocal_212, 3, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
						iLocal_398 = 3;
						iLocal_400 = 1;
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_63[4 /*10*/]);
						TASK::TASK_HANDS_UP(Local_63[4 /*10*/], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
				}
				else if (PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 23))
				{
					GlobalFunc_173(&uLocal_212, 3, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_398 = 3;
					iLocal_400 = 2;
					TASK::TASK_COWER(Local_63[4 /*10*/], -1);
					TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], "MISSHEISTDOCKSPREP1HOLD_CELLPHONE", "HOLD_CELLPHONE", 1000f, -8f, -1, 49, 0, 0, 0, 0);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_63[4 /*10*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					GlobalFunc_173(&uLocal_212, 3, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
					iLocal_398 = 3;
					iLocal_400 = 4;
				}
			}
			break;
		
		case 3:
			switch (iLocal_400)
			{
				case 1:
					if (GlobalFunc_2773(Local_63[4 /*10*/]))
					{
						if (GlobalFunc_10618(&uLocal_212, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
						{
							iLocal_404 = 1;
							iLocal_400 = 4;
						}
					}
					else
					{
						iLocal_403 = 1;
						iLocal_398 = 0;
					}
					break;
				
				case 2:
					if (GlobalFunc_2773(Local_63[4 /*10*/]))
					{
						if (GlobalFunc_10618(&uLocal_212, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
						{
							iLocal_404 = 1;
							iLocal_400 = 4;
						}
					}
					else
					{
						iLocal_403 = 1;
						iLocal_398 = 0;
					}
					break;
				
				case 3:
					if (GlobalFunc_2773(Local_63[4 /*10*/]))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(Local_63[4 /*10*/], 1252.558f, -3004.846f, 8.31909f, 2f, 2f, 2f, 0, 1, 0))
						{
							if (GlobalFunc_10618(&uLocal_212, "SOL1AUD", "SOL1_SUB1", 7, 0, 0, 0))
							{
								iLocal_404 = 1;
								iLocal_400 = 4;
							}
						}
						if (!PED::IS_PED_HEADTRACKING_ENTITY(Local_63[4 /*10*/], Local_54[0 /*2*/]))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_63[4 /*10*/], Local_54[0 /*2*/], -1, 2096, 2);
						}
					}
					else
					{
						iLocal_403 = 1;
						iLocal_398 = 0;
					}
					break;
				
				case 4:
					if (GlobalFunc_2773(Local_63[4 /*10*/]))
					{
						if (!PED::IS_PED_RAGDOLL(Local_63[4 /*10*/]) && !TASK::IS_PED_GETTING_UP(Local_63[4 /*10*/]))
						{
							if (GlobalFunc_10618(&uLocal_212, "SOL1AUD", "SOL1_COPSIN2", 7, 0, 0, 0))
							{
								TASK::CLEAR_PED_TASKS(Local_63[4 /*10*/]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
								TASK::TASK_PLAY_ANIM(0, cLocal_49, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
								if (iLocal_404)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
								}
								else
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.775f, -2923.852f, 8.31909f, 1f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_WANDER_IN_AREA(0, 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128, 1086324736);
								}
								TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
								TASK::TASK_PERFORM_SEQUENCE(Local_63[4 /*10*/], uLocal_378);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
								iLocal_401 = MISC::GET_GAME_TIMER();
								AUDIO::TRIGGER_MUSIC_EVENT("DHP1_ATTACKED");
								iLocal_408 = 0;
								iLocal_400 = 5;
							}
						}
					}
					else
					{
						iLocal_403 = 1;
						iLocal_398 = 0;
					}
					break;
				
				case 5:
					if ((MISC::GET_GAME_TIMER() - iLocal_401) > 8000)
					{
						if (!iLocal_408)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 1)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 1, 0);
								PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
								iLocal_408 = 1;
							}
						}
						if (GlobalFunc_2773(Local_63[4 /*10*/]))
						{
							if (iLocal_404)
							{
								if (!PED::IS_PED_FLEEING(Local_63[4 /*10*/]))
								{
									TASK::TASK_SMART_FLEE_PED(Local_63[4 /*10*/], PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(Local_63[4 /*10*/], 923520851) != 1)
							{
								TASK::TASK_WANDER_IN_AREA(Local_63[4 /*10*/], 1183.287f, -2947.87f, 4.8986f, 100f, 1077936128, 1086324736);
							}
						}
					}
					if (!iLocal_404)
					{
						WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_405, 1);
						if (GlobalFunc_2773(Local_63[4 /*10*/]))
						{
							if ((PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 122) || PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 123)) || PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 124))
							{
								GlobalFunc_173(&uLocal_212, 3, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (GlobalFunc_10618(&uLocal_212, "SOL1AUD", "SOL1_ARM2", 7, 0, 0, 0))
								{
									TASK::CLEAR_PED_TASKS(Local_63[4 /*10*/]);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
									TASK::TASK_HANDS_UP(0, 3000, PLAYER::PLAYER_PED_ID(), -1, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
									TASK::TASK_PERFORM_SEQUENCE(Local_63[4 /*10*/], uLocal_378);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
									iLocal_401 = MISC::GET_GAME_TIMER();
									iLocal_404 = 1;
								}
							}
							else if ((PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_63[4 /*10*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_63[4 /*10*/])) && PED::IS_PED_FACING_PED(Local_63[4 /*10*/], PLAYER::PLAYER_PED_ID(), 160f))
							{
								if (WEAPON::GET_WEAPONTYPE_GROUP(iLocal_405) != joaat("GROUP_MELEE") && iLocal_405 != joaat("weapon_unarmed"))
								{
									GlobalFunc_173(&uLocal_212, 4, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
									if (GlobalFunc_10618(&uLocal_212, "SOL1AUD", "SOL1_SCAR2", 7, 0, 0, 0))
									{
										TASK::CLEAR_PED_TASKS(Local_63[4 /*10*/]);
										TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
										TASK::TASK_HANDS_UP(0, 3000, PLAYER::PLAYER_PED_ID(), -1, 0);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
										TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
										TASK::TASK_PERFORM_SEQUENCE(Local_63[4 /*10*/], uLocal_378);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
										iLocal_404 = 1;
										iLocal_401 = MISC::GET_GAME_TIMER();
									}
								}
							}
							else if (PED::HAS_PED_RECEIVED_EVENT(Local_63[4 /*10*/], 23))
							{
								GlobalFunc_173(&uLocal_212, 3, Local_63[4 /*10*/], "CONSTRUCTION2", 0, 1);
								if (GlobalFunc_10618(&uLocal_212, "SOL1AUD", "SOL1_PAN2", 7, 0, 0, 0))
								{
									TASK::CLEAR_PED_TASKS(Local_63[4 /*10*/]);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
									TASK::TASK_COWER(0, -1);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
									TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
									TASK::TASK_PERFORM_SEQUENCE(Local_63[4 /*10*/], uLocal_378);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
									iLocal_404 = 1;
								}
							}
							else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_63[4 /*10*/], PLAYER::PLAYER_PED_ID(), 1))
							{
								TASK::CLEAR_PED_TASKS(Local_63[4 /*10*/]);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_378);
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 1228.775f, -2923.852f, 8.31909f, 2f, 20000, 0.25f, 0, 40000f);
								TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_378);
								TASK::TASK_PERFORM_SEQUENCE(Local_63[4 /*10*/], uLocal_378);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_378);
								iLocal_404 = 1;
								iLocal_401 = MISC::GET_GAME_TIMER();
							}
						}
					}
					break;
			}
			break;
	}
}



void func_258()//Position - 0x1385B
{
	switch (iLocal_458)
	{
		case 0:
			switch (iLocal_457)
			{
				case 0:
					if (GlobalFunc_2773(Local_54[0 /*2*/]))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54[0 /*2*/], 0)) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							GlobalFunc_5105();
							iLocal_455 = MISC::GET_GAME_TIMER();
							iLocal_457 = 1;
						}
					}
					break;
				
				case 1:
					if ((MISC::GET_GAME_TIMER() - iLocal_455) > 6000 && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54[0 /*2*/], 0))
					{
						GlobalFunc_173(&uLocal_212, 1, 0, "FLOYD", 0, 1);
						if (GlobalFunc_10618(&uLocal_212, "DHP1AUD", "DHP1_TSUB", 7, 0, 0, 0))
						{
							iLocal_457 = 2;
						}
					}
					break;
				
				case 2:
					if (GlobalFunc_111())
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54[0 /*2*/], 0))
						{
							if (GlobalFunc_620())
							{
								GlobalFunc_619(0);
							}
						}
						else if (!GlobalFunc_620())
						{
							GlobalFunc_619(1);
						}
					}
					else
					{
						iLocal_457 = 3;
					}
					break;
				
				case 3:
					iLocal_458 = 2;
					iLocal_457 = 0;
					iLocal_455 = MISC::GET_GAME_TIMER();
					break;
			}
			break;
		
		case 2:
			switch (iLocal_457)
			{
				case 0:
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54[0 /*2*/], 0)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 324.7653f, -2974.495f, -1f, 1) < 110f)
					{
						GlobalFunc_5105();
						iLocal_457 = 1;
					}
					break;
				
				case 1:
					if (GlobalFunc_10618(&uLocal_212, "DHP1AUD", "DHP1_APP", 7, 0, 0, 0))
					{
						iLocal_457 = 2;
					}
					break;
				
				case 2:
					if (GlobalFunc_111())
					{
					}
					else
					{
						iLocal_457 = 3;
					}
					break;
				
				case 3:
					iLocal_458 = 3;
					iLocal_457 = 0;
					iLocal_455 = MISC::GET_GAME_TIMER();
					break;
			}
			break;
		
		case 3:
			if (GlobalFunc_2773(Local_54[2 /*2*/]) && GlobalFunc_2773(Local_63[3 /*10*/]))
			{
				switch (iLocal_457)
				{
					case 0:
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54[2 /*2*/], 0) && PED::IS_PED_IN_VEHICLE(Local_63[3 /*10*/], Local_54[2 /*2*/], 0))
						{
							if (GlobalFunc_111())
							{
								GlobalFunc_5105();
							}
							else
							{
								iLocal_457 = 1;
							}
						}
						break;
					
					case 1:
						GlobalFunc_5117(Local_63[3 /*10*/], "DHP1_AIAA", "FLOYD", 24);
						iLocal_457 = 2;
						break;
					
					case 2:
						if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_63[3 /*10*/]))
						{
							iLocal_457 = 3;
						}
						break;
					
					case 3:
						iLocal_458 = 4;
						iLocal_457 = 0;
						iLocal_455 = MISC::GET_GAME_TIMER();
						break;
					}
			}
			break;
		
		case 4:
			if (GlobalFunc_2773(Local_54[2 /*2*/]) && GlobalFunc_2773(Local_63[3 /*10*/]))
			{
				switch (iLocal_457)
				{
					case 0:
						if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_VEHICLE(Local_63[3 /*10*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_54[1 /*2*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && !HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							GlobalFunc_5105();
							iLocal_455 = MISC::GET_GAME_TIMER();
							iLocal_457 = 1;
						}
						break;
					
					case 1:
						if ((MISC::GET_GAME_TIMER() - iLocal_455) > 2000)
						{
							GlobalFunc_173(&uLocal_212, 1, Local_63[3 /*10*/], "FLOYD", 0, 1);
							if (GlobalFunc_10618(&uLocal_212, "DHP1AUD", "DHP1_TRCK", 7, 0, 0, 0))
							{
								iLocal_457 = 2;
							}
						}
						break;
					
					case 2:
						if (GlobalFunc_111())
						{
							if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_VEHICLE(Local_63[3 /*10*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_54[1 /*2*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
							{
								if (GlobalFunc_620())
								{
									GlobalFunc_619(0);
								}
							}
							else if (!GlobalFunc_620())
							{
								GlobalFunc_619(1);
							}
						}
						else
						{
							iLocal_457 = 3;
						}
						break;
					
					case 3:
						iLocal_458 = 5;
						iLocal_457 = 0;
						iLocal_455 = MISC::GET_GAME_TIMER();
						break;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_54[0 /*2*/], 1), -323.73f, -2613.702f, 5f, 1) < 60f)
				{
					GlobalFunc_4935();
					iLocal_457 = 3;
				}
			}
			break;
		
		case 5:
			switch (iLocal_457)
			{
				case 0:
					if ((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_VEHICLE(Local_63[3 /*10*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_54[1 /*2*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -273.635f, -2558.818f, 4.751376f, -405.7218f, -2695.898f, 14.37495f, 51f, 0, 1, 0))
					{
						GlobalFunc_5105();
						iLocal_457 = 1;
					}
					break;
				
				case 1:
					bLocal_454 = GlobalFunc_745();
					GlobalFunc_173(&uLocal_212, 1, Local_63[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_454)
					{
						if (GlobalFunc_10630(&uLocal_212, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_1", 7, 0, 0))
						{
							iLocal_457 = 2;
						}
					}
					else if (GlobalFunc_10630(&uLocal_212, "DHP1AUD", "DHP1_WHSE", "DHP1_WHSE_2", 7, 0, 0))
					{
						iLocal_457 = 2;
					}
					break;
				
				case 2:
					if (!GlobalFunc_111())
					{
						iLocal_457 = 3;
					}
					break;
				
				case 3:
					iLocal_458 = 6;
					iLocal_457 = 0;
					iLocal_455 = MISC::GET_GAME_TIMER();
					break;
			}
			break;
		
		case 6:
			switch (iLocal_457)
			{
				case 0:
					if ((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_VEHICLE(Local_63[3 /*10*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0)) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_54[1 /*2*/], PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_54[0 /*2*/], 1), -323.73f, -2613.702f, 5f, 1) < 40f)
					{
						GlobalFunc_5105();
						iLocal_457 = 1;
					}
					break;
				
				case 1:
					bLocal_454 = GlobalFunc_745();
					GlobalFunc_173(&uLocal_212, 1, Local_63[3 /*10*/], "FLOYD", 0, 1);
					if (bLocal_454)
					{
						if (GlobalFunc_10630(&uLocal_212, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_1", 7, 0, 0))
						{
							iLocal_457 = 2;
						}
					}
					else if (GlobalFunc_10630(&uLocal_212, "DHP1AUD", "DHP1_PARK", "DHP1_PARK_2", 7, 0, 0))
					{
						iLocal_457 = 2;
					}
					break;
				
				case 2:
					if (!GlobalFunc_111())
					{
						iLocal_457 = 3;
					}
					break;
				
				case 3:
					break;
			}
			break;
	}
}










void func_268()//Position - 0x1410A
{
	struct<3> Var0;
	var uVar3;
	
	if (iLocal_2101 == 1)
	{
		if (iLocal_2096 == 0)
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
				func_174(iLocal_2102);
			}
		}
		else if (iLocal_2096 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			func_286();
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			GlobalFunc_762(&uLocal_459);
			if (!GlobalFunc_188())
			{
				func_283(iLocal_2102, &Var0, &uVar3);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_5184(&uLocal_459, Var0, 50f, 0);
			}
			func_245(iLocal_2097);
			while (!GlobalFunc_7725(&uLocal_459))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_2097)
			{
				case 0:
					func_278();
					break;
				
				case 1:
					func_277();
					break;
				
				case 2:
					func_273();
					break;
				
				case 3:
					func_269();
					break;
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			AUDIO::TRIGGER_MUSIC_EVENT("DHP1_START");
			iLocal_2101 = 0;
			if (!GlobalFunc_188())
			{
				GlobalFunc_5181(&uLocal_459);
			}
		}
	}
}

void func_269()//Position - 0x14241
{
	if (!GlobalFunc_2773(Local_54[0 /*2*/]))
	{
		Local_54[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), -337.7228f, -2623.835f, 8.6595f, 135.24f, 1, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_54[0 /*2*/], 0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_54[0 /*2*/], 0, 1);
		VEHICLE::SET_VEHICLE_LIGHTS(Local_54[0 /*2*/], 1);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_54[0 /*2*/], 1);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_54[0 /*2*/], 0);
	}
	if (!GlobalFunc_2773(Local_54[2 /*2*/]))
	{
		Local_54[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("packer"), -337.7228f, -2627.038f, 5.001f, 134.9894f, 1, 1);
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_54[2 /*2*/], 0);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_54[2 /*2*/], 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_54[2 /*2*/], 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_54[2 /*2*/], 1);
	}
	if (!GlobalFunc_2773(Local_54[1 /*2*/]))
	{
		Local_54[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer"), -331.728f, -2621.006f, 7.8828f, 135.24f, 1, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_54[1 /*2*/], 1);
	}
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_54[2 /*2*/], Local_54[1 /*2*/], 0.5f);
	VEHICLE::SET_TRAILER_LEGS_RAISED(Local_54[1 /*2*/]);
	VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_54[0 /*2*/], Local_54[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[4 /*2*/]))
	{
		Local_168[4 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[4 /*2*/], Local_54[1 /*2*/], -1, Local_439, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[5 /*2*/]))
	{
		Local_168[5 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[5 /*2*/], Local_54[1 /*2*/], -1, Local_439, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_5108(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
}




void func_273()//Position - 0x1453C
{
	if (!GlobalFunc_2773(Local_54[0 /*2*/]))
	{
		Local_54[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), 320.4211f, -2975.993f, -11.1896f, 2.5159f, 1, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_54[0 /*2*/], 0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(Local_54[0 /*2*/], 0, 1);
		VEHICLE::SET_VEHICLE_LIGHTS(Local_54[0 /*2*/], 1);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_54[0 /*2*/], 1);
		ENTITY::SET_CAN_CLIMB_ON_ENTITY(Local_54[0 /*2*/], 0);
	}
	if (!GlobalFunc_2773(Local_54[2 /*2*/]))
	{
		Local_54[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("packer"), 297.5948f, -2950.354f, 5.0008f, 359.1976f, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_54[2 /*2*/], 0);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_54[2 /*2*/], 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_54[2 /*2*/], 1);
	}
	if (!GlobalFunc_2773(Local_54[1 /*2*/]))
	{
		Local_54[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("armytrailer"), 297.2917f, -2970.246f, 4.8884f, 359.0483f, 1, 1);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_54[1 /*2*/], 0);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_54[1 /*2*/], 1);
	}
	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(Local_54[2 /*2*/], Local_54[1 /*2*/], 0.5f);
	VEHICLE::SET_TRAILER_LEGS_RAISED(Local_54[1 /*2*/]);
	VEHICLE::ATTACH_VEHICLE_ON_TO_TRAILER(Local_54[0 /*2*/], Local_54[1 /*2*/], 0f, -4f, -0.7f, 0f, 0f, 0f, 0f, 0f, 0f, -1f);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[4 /*2*/]))
	{
		Local_168[4 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_sub_cover_01"), 297.5948f, -2950.354f, 5.0008f, 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[4 /*2*/], Local_54[1 /*2*/], -1, Local_439, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[5 /*2*/]))
	{
		Local_168[5 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_tarp_strap"), -332.8449f, -2622.157f, 8.7838f, 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_168[5 /*2*/], Local_54[1 /*2*/], -1, Local_439, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
	}
	while (!GlobalFunc_7061(&(Local_63[3 /*10*/]), 32, Local_54[2 /*2*/], 0, 1))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_5108(Local_54[2 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54[2 /*2*/], -1);
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_63[3 /*10*/], iLocal_393);
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
	iLocal_458 = 3;
	iLocal_457 = 0;
}




void func_277()//Position - 0x14871
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_54[0 /*2*/]))
	{
		Local_54[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), 1272.398f, -2982.072f, -3.2414f, 201.5542f, 1, 1);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_54[0 /*2*/], 1);
	}
	if (GlobalFunc_188())
	{
		GlobalFunc_5108(Local_54[0 /*2*/], -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54[0 /*2*/], -1);
	}
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
	iLocal_458 = 0;
	iLocal_457 = 0;
}

void func_278()//Position - 0x148FE
{
	if (!ENTITY::DOES_ENTITY_EXIST(Local_54[0 /*2*/]))
	{
		Local_54[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("submersible"), 1260.802f, -3006.417f, 18.3289f, 178.9076f, 1, 1);
		GlobalFunc_743(Local_54[0 /*2*/], 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_54[0 /*2*/], 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_54[0 /*2*/], 1);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_54[0 /*2*/], 0);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_54[0 /*2*/], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_63[4 /*10*/]))
	{
		Local_63[4 /*10*/] = PED::CREATE_PED(26, joaat("s_m_m_dockwork_01"), 1229.322f, -3002.879f, 8.31861f, 270f, 1, 1);
		TASK::TASK_PLAY_ANIM(Local_63[4 /*10*/], cLocal_49, "cellphone_call_listen_c", 8f, -8f, -1, 49, 0, 0, 0, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_63[4 /*10*/], 512, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(Local_63[4 /*10*/], 17, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_63[4 /*10*/], iLocal_394);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_63[4 /*10*/], 1);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(Local_63[4 /*10*/], 45f);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(Local_63[4 /*10*/], 50f);
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(Local_63[4 /*10*/], -50f);
		AUDIO::STOP_PED_SPEAKING(Local_63[4 /*10*/], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[0 /*2*/]))
	{
		Local_168[0 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), 1260.692f, -3008.286f, 23.73365f, 1, 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_168[0 /*2*/], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[1 /*2*/]))
	{
		Local_168[1 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_ld_test_01"), 1260.752f, -3004.994f, 22.68315f, 1, 1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(Local_168[1 /*2*/], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[2 /*2*/]))
	{
		Local_168[2 /*2*/] = OBJECT::CREATE_OBJECT(joaat("prop_sub_release"), 1249.105f, -3007.968f, 9.68718f, 1, 1, 0);
		ENTITY::SET_ENTITY_ROTATION(Local_168[2 /*2*/], 0f, 0f, 90f, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(Local_168[2 /*2*/], 1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[3 /*2*/]))
	{
		Local_168[3 /*2*/] = OBJECT::CREATE_OBJECT(joaat("p_amb_phone_01"), 1229.322f, -3002.879f, 8.31861f, 1, 1, 0);
	}
	iLocal_382 = 0;
	TASK::REQUEST_WAYPOINT_RECORDING("docksprep1");
	while (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("docksprep1"))
	{
		SYSTEM::WAIT(0);
	}
	MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 100f, 1, 0, 0, 0);
	if (GlobalFunc_188())
	{
		GlobalFunc_5108(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
	iLocal_402 = MISC::GET_GAME_TIMER();
	iLocal_458 = 0;
	iLocal_457 = 0;
}





void func_283(int iParam0, var uParam1, var uParam2)//Position - 0x15615
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1219.186f, -2977.9f, 4.8653f };
			*uParam2 = 178.1887f;
			break;
		
		case 1:
			*uParam1 = { 1272.398f, -2982.072f, -3.2414f };
			*uParam2 = 201.5542f;
			break;
		
		case 2:
			*uParam1 = { 297.5948f, -2950.354f, 5.0008f };
			*uParam2 = 359.1976f;
			break;
		
		case 3:
			*uParam1 = { -317.3936f, -2610.798f, 5.0003f };
			*uParam2 = 328.0017f;
			break;
	}
}



void func_286()//Position - 0x15920
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			SYSTEM::WAIT(0);
		}
	}
	func_187();
	if (GlobalFunc_2773(Local_54[0 /*2*/]))
	{
		PHYSICS::SET_CGOFFSET(Local_54[0 /*2*/], Local_165);
	}
	Global_86864.f_357 = 0;
	if (iLocal_383)
	{
		PHYSICS::DELETE_ROPE(&iLocal_438);
		iLocal_383 = 0;
	}
	iLocal_381 = 0;
	while (iLocal_381 <= (8 - 1))
	{
		GlobalFunc_589(&(Local_63[iLocal_381 /*10*/].f_2));
		if (ENTITY::DOES_ENTITY_EXIST(Local_63[iLocal_381 /*10*/]) && !PED::IS_PED_INJURED(Local_63[iLocal_381 /*10*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_63[iLocal_381 /*10*/], 0))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_63[iLocal_381 /*10*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_63[iLocal_381 /*10*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			GlobalFunc_881(&(Local_63[iLocal_381 /*10*/]));
		}
		iLocal_381++;
	}
	iLocal_381 = 0;
	while (iLocal_381 <= (4 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_54[iLocal_381 /*2*/]))
		{
			func_292(Local_54[iLocal_381 /*2*/]);
			GlobalFunc_7089(&(Local_54[iLocal_381 /*2*/]));
		}
		iLocal_381++;
	}
	iLocal_381 = 0;
	while (iLocal_381 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_168[iLocal_381 /*2*/]))
		{
			GlobalFunc_130(&(Local_168[iLocal_381 /*2*/]));
		}
		iLocal_381++;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_379))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_379, 0);
	}
	GlobalFunc_4935();
	GlobalFunc_5652(&Local_187, 1, 0);
	GlobalFunc_562(72);
	func_176(1, 0, 0, 3000, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 300f, 1, 0, 0, 0);
	}
	MISC::CLEAR_AREA(1219.186f, -2977.9f, 4.8653f, 300f, 1, 0, 0, 0);
	iLocal_402 = MISC::GET_GAME_TIMER();
	iLocal_385 = 0;
	iLocal_403 = 0;
	iLocal_398 = 0;
	iLocal_399 = 0;
	iLocal_400 = 0;
	iLocal_457 = 0;
	iLocal_386 = 0;
	GlobalFunc_2434(6, 0);
	if (STREAMING::IS_IPL_ACTIVE("PO1_08_sub_waterplane"))
	{
		GlobalFunc_5181(&uLocal_459);
		STREAMING::REMOVE_IPL("PO1_08_sub_waterplane");
	}
	AUDIO::STOP_STREAM();
}






void func_292(int iParam0)//Position - 0x15C75
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
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



void func_295()//Position - 0x15DBB
{
	switch (iLocal_2096)
	{
		case 1:
			iLocal_2096 = 2;
			iLocal_2098 = -1;
			break;
		
		case 2:
			iLocal_2096 = 3;
			iLocal_2098 = 0;
			iLocal_2097 = iLocal_2099;
			break;
		
		case 3:
			iLocal_2099 = -1;
			iLocal_2096 = 0;
			break;
		
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_2100) > 2500)
			{
				iLocal_2100 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}




void func_299()//Position - 0x15FFF
{
	struct<3> Var0;
	var uVar3;
	
	if (GlobalFunc_199() || GlobalFunc_2(0))
	{
		if (GlobalFunc_199())
		{
			iLocal_2102 = GlobalFunc_198();
			if (Global_84544)
			{
				iLocal_2102++;
			}
			if (iLocal_2102 >= 3)
			{
				iLocal_2102 = 3;
			}
		}
		else if (GlobalFunc_2(0))
		{
			iLocal_2102 = 0;
		}
		if (GlobalFunc_199())
		{
			func_283(iLocal_2102, &Var0, &uVar3);
			GlobalFunc_5812(Var0, uVar3, 1, 0);
		}
		SYSTEM::SETTIMERA(0);
		iLocal_2101 = 1;
	}
	else
	{
		func_101(0, "STAGE 0: REACH SUB", 0, 0, 0, 1);
		iLocal_2097 = 0;
		func_245(0);
	}
	iLocal_2098 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
	PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), 0);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_393);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_394);
	PED::ADD_RELATIONSHIP_GROUP("REL_BUDDY", &iLocal_393);
	PED::ADD_RELATIONSHIP_GROUP("rel_dock", &iLocal_394);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_394, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_393);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_393, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_394, iLocal_394);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_54[0 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
			Local_54[0 /*2*/] = Global_86864[0];
			GlobalFunc_743(Local_54[0 /*2*/], 0);
			AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_54[0 /*2*/], 1);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_63[4 /*10*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
			Local_63[4 /*10*/] = Global_86864.f_9[0];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_63[4 /*10*/], iLocal_394);
			PED::SET_PED_CONFIG_FLAG(Local_63[4 /*10*/], 208, 1);
			PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(Local_63[4 /*10*/], 45f);
			PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(Local_63[4 /*10*/], 50f);
			PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(Local_63[4 /*10*/], -50f);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[0 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 1, 1);
			Local_168[0 /*2*/] = Global_86864.f_28[0];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[1 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[1], 1, 1);
			Local_168[1 /*2*/] = Global_86864.f_28[1];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[2 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[2], 1, 1);
			Local_168[2 /*2*/] = Global_86864.f_28[2];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_168[3 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[3], 1, 1);
			Local_168[3 /*2*/] = Global_86864.f_28[3];
		}
	}
	if (Global_86864.f_357)
	{
		if (PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[0])))
		{
			PHYSICS::_0xB1B6216CA2E7B55E(Global_86864.f_37[0], 1, 1);
			Local_144[0 /*5*/] = Global_86864.f_37[0];
			Global_86864.f_37[0] = 0;
		}
		if (PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[1])))
		{
			PHYSICS::_0xB1B6216CA2E7B55E(Global_86864.f_37[1], 1, 1);
			Local_144[1 /*5*/] = Global_86864.f_37[1];
			Global_86864.f_37[1] = 0;
		}
		if (PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[2])))
		{
			PHYSICS::_0xB1B6216CA2E7B55E(Global_86864.f_37[2], 1, 1);
			Local_144[2 /*5*/] = Global_86864.f_37[2];
			Global_86864.f_37[2] = 0;
		}
		if (PHYSICS::DOES_ROPE_EXIST(&(Global_86864.f_37[3])))
		{
			PHYSICS::_0xB1B6216CA2E7B55E(Global_86864.f_37[3], 1, 1);
			Local_144[3 /*5*/] = Global_86864.f_37[3];
			Global_86864.f_37[3] = 0;
		}
		iLocal_382 = 1;
	}
	else
	{
		iLocal_382 = 0;
	}
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKP1", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_173(&uLocal_212, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	GlobalFunc_1998(1);
	PLAYER::SET_MAX_WANTED_LEVEL(2);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	GlobalFunc_5198(72);
}





void func_304()//Position - 0x16563
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_2773(Local_54[0 /*2*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_54[0 /*2*/], 0))
			{
				PED::SET_PED_COORDS_NO_GANG(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(Local_54[0 /*2*/], 1) + Vector(2f, 0f, 0f));
			}
		}
	}
	func_187();
	if (GlobalFunc_2773(Local_54[0 /*2*/]))
	{
		PHYSICS::SET_CGOFFSET(Local_54[0 /*2*/], Local_165);
	}
	Global_86864.f_357 = 0;
	if (iLocal_383)
	{
		PHYSICS::DELETE_ROPE(&iLocal_438);
		iLocal_383 = 0;
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uLocal_379))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uLocal_379, 0);
	}
	iLocal_381 = 0;
	while (iLocal_381 <= (8 - 1))
	{
		if (GlobalFunc_2773(Local_63[iLocal_381 /*10*/]))
		{
			GlobalFunc_589(&(Local_63[iLocal_381 /*10*/].f_2));
			if (HUD::DOES_BLIP_EXIST(Local_63[iLocal_381 /*10*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_63[iLocal_381 /*10*/].f_1));
			}
			if (PED::IS_PED_IN_GROUP(Local_63[iLocal_381 /*10*/]))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_63[iLocal_381 /*10*/]);
			}
			if (Local_63[iLocal_381 /*10*/] != PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_132(&(Local_63[iLocal_381 /*10*/]), 1, 0, 1);
			}
		}
		iLocal_381++;
	}
	iLocal_381 = 0;
	while (iLocal_381 <= (4 - 1))
	{
		if (HUD::DOES_BLIP_EXIST(Local_54[iLocal_381 /*2*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_54[iLocal_381 /*2*/].f_1));
		}
		if (GlobalFunc_2773(Local_54[iLocal_381 /*2*/]))
		{
			if (iLocal_381 != 0)
			{
				GlobalFunc_131(&(Local_54[iLocal_381 /*2*/]));
			}
		}
		iLocal_381++;
	}
	GlobalFunc_563(0);
	iLocal_381 = 0;
	while (iLocal_381 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_168[iLocal_381 /*2*/]))
		{
			if (Local_168[iLocal_381 /*2*/] == Local_168[4 /*2*/] || Local_168[iLocal_381 /*2*/] == Local_168[5 /*2*/])
			{
				GlobalFunc_129(&(Local_168[iLocal_381 /*2*/]), 1);
			}
			else
			{
				GlobalFunc_130(&(Local_168[iLocal_381 /*2*/]));
			}
		}
		iLocal_381++;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), 1);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	GlobalFunc_1998(0);
	GlobalFunc_7139(&Local_187, 0);
	GlobalFunc_771();
	if (STREAMING::IS_IPL_ACTIVE("PO1_08_sub_waterplane"))
	{
		STREAMING::REMOVE_IPL("PO1_08_sub_waterplane");
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}





void func_309()//Position - 0x1688A
{
	GlobalFunc_5129(787.0854f, -2973.872f, 5.0585f, 256.91f);
}

