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
	struct<3> Local_51 = { 0, 0, 0 } ;
	struct<3> Local_54 = { 0, 0, 0 } ;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<3> Local_60 = { 0, 0, 0 } ;
	struct<3> Local_63 = { 0, 0, 0 } ;
	struct<3> Local_66 = { 0, 0, 0 } ;
	struct<3> Local_69 = { 0, 0, 0 } ;
	struct<3> Local_72 = { 0, 0, 0 } ;
	struct<3> Local_75 = { 0, 0, 0 } ;
	struct<3> Local_78 = { 0, 0, 0 } ;
	struct<8> Local_81 = { 0, 0, -1, 0, 0, 0, 0, 0 } ;
	var uLocal_89 = 0;
	var uLocal_90 = 1000;
	var uLocal_91 = 1000;
	var uLocal_92 = 0;
	struct<2> Local_93[3];
	struct<2> Local_100[3];
	var uLocal_107[2] = { 0, 0 };
	struct<14> Local_110[9];
	var uLocal_237 = 16;
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
	struct<6> Local_402 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_408 = 0;
	var uLocal_409 = 1092616192;
	var uLocal_410 = 1101004800;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 3;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	int iLocal_427 = 0;
	var uLocal_428[3] = { 0, 0, 0 };
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	float fLocal_437 = 0f;
	float fLocal_438 = 0f;
	float fLocal_439 = 0f;
	float fLocal_440 = 0f;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	int iLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	bool bLocal_451 = 0;
	int iLocal_452 = 0;
	int iLocal_453 = 0;
	int iLocal_454 = 0;
	bool bLocal_455 = 0;
	bool bLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	struct<3> Local_459 = { 0, 0, 0 } ;
	float fLocal_462 = 0f;
	float fLocal_463 = 0f;
	float fLocal_464 = 0f;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	bool bLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	char cLocal_474[64] = "";
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	char* sLocal_490 = NULL;
	int iLocal_491 = 0;
	int iLocal_492 = 0;
	var uLocal_493 = 30;
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
	var uLocal_644 = 10;
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
	var uLocal_695 = 10;
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
	var uLocal_766 = 20;
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
	var uLocal_867 = 20;
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
	var uLocal_968 = 30;
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
	var uLocal_1115 = 0;
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
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 5;
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
	var uLocal_1180 = 7;
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
	var uLocal_1214 = 0;
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
	var uLocal_1230 = 5;
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
	var uLocal_1256 = 3;
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
	var uLocal_1272 = 15;
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
	var uLocal_1333 = 0;
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
	var uLocal_1367 = 10;
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
	var uLocal_1384 = 0;
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
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = 5;
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
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 5;
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
	var uLocal_1457 = 0;
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
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	int iLocal_1473 = 0;
	int iLocal_1474 = 0;
	int iLocal_1475 = 0;
	int iLocal_1476 = 0;
	int iLocal_1477 = 0;
	bool bLocal_1478 = 0;
	int iLocal_1479 = 0;
	float fLocal_1480[3] = { 0f, 0f, 0f };
	bool bLocal_1484 = 0;
	int iLocal_1485 = 0;
	int iLocal_1486 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
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
	Local_48 = { 1358.197f, 3618.234f, 33.89066f };
	Local_51 = { 0f, 5f, -0.5f };
	Local_54 = { 4f, 3f, -0.5f };
	Local_57 = { 4f, -3f, -0.5f };
	Local_60 = { 0f, -5f, -0.5f };
	Local_63 = { -4f, -3f, -0.5f };
	Local_66 = { -4f, 3f, -0.5f };
	Local_69 = { 0f, 2f, -0.5f };
	Local_72 = { 4f, 0f, -0.5f };
	Local_75 = { 0f, -2.2f, -0.5f };
	Local_78 = { -4f, 0f, -0.5f };
	iLocal_450 = joaat("weapon_assaultrifle");
	Local_459 = { 0f, 0f, 0f };
	iLocal_465 = 30000;
	bLocal_469 = true;
	StringCopy(&cLocal_474, "Rural_prep_trigger1", 64);
	sLocal_490 = "rural_prep_park";
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_310();
	}
	MISC::SET_MISSION_FLAG(1);
	func_251();
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_ThePaletoScorePrep", 0);
		GlobalFunc_8012(&uLocal_493);
		if (((((iLocal_1474 == 0 && ENTITY::DOES_ENTITY_EXIST(Local_93[0 /*2*/])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93[0 /*2*/], 0)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 1)) < 5625f)
		{
			bVar0 = false;
			if ((!Local_81.f_7 && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID())) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				iVar1 = 0;
				WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
				if (iVar1 != joaat("weapon_unarmed"))
				{
					iVar2 = 0;
					WEAPON::GET_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar1, &iVar2);
					if (iVar2 < WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iVar1, 1))
					{
						bVar0 = true;
					}
				}
			}
			if (!bVar0)
			{
				func_230(&Local_81, Local_93[0 /*2*/], 0, 0, 1, 1, 1);
			}
		}
		else
		{
			GlobalFunc_4948(&Local_81, 0, 0);
		}
		func_227();
		func_194();
		if (!bLocal_1478)
		{
			func_140();
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x27A
{
	switch (iLocal_1474)
	{
		case 0:
			func_138();
			break;
		
		case 1:
			func_104();
			break;
		
		case 2:
			func_8();
			break;
		
		case 3:
			func_2();
			break;
	}
}

void func_2()//Position - 0x2BE
{
	switch (iLocal_1475)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			iLocal_1475++;
			break;
		
		case 1:
			func_3();
			break;
	}
}

void func_3()//Position - 0x2FF
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93[0 /*2*/], 0))
	{
		DECORATOR::DECOR_SET_BOOL(Local_93[0 /*2*/], "IgnoredByQuickSave", 1);
	}
	GlobalFunc_5103(0, 0);
	func_310();
}





void func_8()//Position - 0x4A0
{
	int iVar0;
	
	if (!iLocal_441)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_427) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_427, 0)) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_427, 1))
		{
			GlobalFunc_9257(iLocal_427, 0, 145);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_427);
			iLocal_441 = 1;
		}
	}
	PATHFIND::_REQUEST_PATHS_PREFER_ACCURATE_BOUNDINGSTRUCT(-94.3112f, 3003.016f, 2711.273f, 4857.763f);
	switch (iLocal_1475)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			GlobalFunc_574(724, 0);
			AUDIO::TRIGGER_MUSIC_EVENT("RHP1_TRUCK");
			RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
			iLocal_1475++;
			break;
		
		case 1:
			if (GlobalFunc_9194(&Local_402, Local_48, 0.1f, 0.1f, 2f, 1, Local_93[0 /*2*/], "RHP_RTN", "", "RHP_BK", 1, 0, 1, -1) || (HUD::DOES_BLIP_EXIST(Local_402.f_5) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_93[0 /*2*/], 1359.476f, 3614.326f, 36.87141f, 1356.748f, 3621.605f, 33.72731f, 5f, 0, 1, 0)))
			{
				GlobalFunc_530(Local_93[0 /*2*/], 10.5f, -1, 1056964608, 0, 1);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_93[0 /*2*/], 0);
				GlobalFunc_5652(&Local_402, 1, 0);
				GlobalFunc_571(1, 724);
				bLocal_451 = false;
				iLocal_452 = 0;
				iLocal_1475++;
			}
			break;
		
		case 2:
			bLocal_456 = true;
			iVar0 = 0;
			while (iVar0 <= (9 - 1))
			{
				if (GlobalFunc_2773(Local_110[iVar0 /*14*/]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_110[iVar0 /*14*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 400f)
					{
						if (!PED::IS_PED_IN_COMBAT(Local_110[iVar0 /*14*/], 0))
						{
							TASK::TASK_COMBAT_PED(Local_110[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						bLocal_456 = false;
					}
					else
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_110[iVar0 /*14*/]));
					}
				}
				iVar0++;
			}
			if (bLocal_456)
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				iLocal_1475++;
			}
			else if (!bLocal_451)
			{
				HUD::CLEAR_PRINTS();
				RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
				GlobalFunc_164("RHP_KILL", 7500, 1);
				bLocal_451 = true;
			}
			break;
		
		case 3:
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], 0))
			{
				if (HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					HUD::CLEAR_PRINTS();
				}
				if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 2)
				{
					GlobalFunc_173(&uLocal_237, 0, PLAYER::PLAYER_PED_ID(), "Trevor", 0, 1);
					if (bLocal_451)
					{
						if (GlobalFunc_10630(&uLocal_237, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
						{
							iLocal_1475 = 4;
						}
					}
					else if (GlobalFunc_10630(&uLocal_237, "RHPAUD", "RHP_END", "RHP_END_3", 7, 0, 0))
					{
						iLocal_1475 = 4;
					}
				}
				else if (GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) == 0)
				{
					GlobalFunc_173(&uLocal_237, 0, PLAYER::PLAYER_PED_ID(), "Michael", 0, 1);
					if (bLocal_451)
					{
						if (GlobalFunc_10630(&uLocal_237, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
						{
							iLocal_1475 = 4;
						}
					}
					else if (GlobalFunc_10630(&uLocal_237, "RHPAUD", "RHP_END", "RHP_END_1", 7, 0, 0))
					{
						iLocal_1475 = 4;
					}
				}
				if (iLocal_1475 == 4)
				{
					SYSTEM::SETTIMERA(0);
				}
			}
			else if (!iLocal_452 && GlobalFunc_5171())
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 7f, 4);
				AUDIO::TRIGGER_MUSIC_EVENT("RHP1_END");
				GlobalFunc_164("RHP_EXIT", 7500, 1);
				iLocal_452 = 1;
			}
			break;
		
		case 4:
			if (!GlobalFunc_111() || SYSTEM::TIMERA() > 6000)
			{
				func_3();
			}
			break;
	}
}
































































































void func_104()//Position - 0x4EEB
{
	int iVar0;
	
	switch (iLocal_1475)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iVar0 = 0;
			while (iVar0 <= 8)
			{
				if (GlobalFunc_2773(Local_110[iVar0 /*14*/]))
				{
					if (!iLocal_449)
					{
						GlobalFunc_173(&uLocal_237, 1, Local_110[iVar0 /*14*/], "ArmyPed", 0, 1);
						GlobalFunc_4956();
						AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_110[iVar0 /*14*/], "GENERIC_WAR_CRY", GlobalFunc_566(3), 1);
						iLocal_449 = 1;
					}
				}
				iVar0++;
			}
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_492);
			RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
			iLocal_1475++;
			break;
		
		case 1:
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], 0))
			{
				RECORDING::_0x293220DA1B46CEBC(3f, 5f, 4);
				GlobalFunc_10606(0f, 0f, 0f, -1f, 0, 145);
				if (HUD::DOES_BLIP_EXIST(Local_93[0 /*2*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_93[0 /*2*/].f_1));
				}
				func_106(2);
				iLocal_1475 = 0;
			}
			else if (GlobalFunc_2773(Local_93[0 /*2*/]) && !HUD::DOES_BLIP_EXIST(Local_93[0 /*2*/].f_1))
			{
				Local_93[0 /*2*/].f_1 = GlobalFunc_6783(Local_93[0 /*2*/], 0, 0);
			}
			break;
	}
}


int func_106(int iParam0)//Position - 0x5018
{
	if (iLocal_1473 == 0)
	{
		iLocal_1476 = iParam0;
		iLocal_1473 = 1;
		return 1;
	}
	return 0;
}
































void func_138()//Position - 0x74F1
{
	switch (iLocal_1475)
	{
		case 0:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			while (Global_Mission_Fail_State == 12)
			{
				SYSTEM::WAIT(0);
			}
			if (GlobalFunc_2773(Local_93[0 /*2*/]) && !HUD::DOES_BLIP_EXIST(Local_93[0 /*2*/].f_1))
			{
				if (HUD::GET_BLIP_FROM_ENTITY(Local_93[0 /*2*/]) != 0)
				{
					Local_93[0 /*2*/].f_1 = HUD::GET_BLIP_FROM_ENTITY(Local_93[0 /*2*/]);
				}
				else
				{
					Local_93[0 /*2*/].f_1 = GlobalFunc_6783(Local_93[0 /*2*/], 0, 0);
				}
			}
			RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
			GlobalFunc_164("RHP_GOODS", 7500, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("RHP1_START");
			GlobalFunc_159("RHP_HELP", -1);
			iLocal_433 = 0;
			iLocal_1475++;
			break;
		
		case 1:
			if (bLocal_455)
			{
				iLocal_449 = 0;
				func_106(1);
				iLocal_1475 = 0;
			}
			break;
	}
}


void func_140()//Position - 0x75DD
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_100[iLocal_446 /*2*/]))
		{
			if (PED::IS_PED_INJURED(Local_100[iLocal_446 /*2*/]))
			{
				GlobalFunc_132(&(Local_100[iLocal_446 /*2*/]), 1, 0, 1);
			}
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_93[iLocal_446 /*2*/]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93[iLocal_446 /*2*/], 0))
			{
				if (iLocal_446 == 0)
				{
					func_182(3);
				}
				GlobalFunc_131(&(Local_93[iLocal_446 /*2*/]));
			}
			else if (Local_93[iLocal_446 /*2*/] == Local_93[0 /*2*/])
			{
				if (GlobalFunc_2250(&(Local_93[0 /*2*/])))
				{
					func_182(4);
					GlobalFunc_131(&(Local_93[0 /*2*/]));
				}
			}
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_110[iLocal_446 /*14*/]))
		{
			if (bLocal_455)
			{
				GlobalFunc_661(Local_110[iLocal_446 /*14*/], &(Local_110[iLocal_446 /*14*/].f_2), -1, 0, 0, 0, 400f, 0);
			}
			if (PED::IS_PED_INJURED(Local_110[iLocal_446 /*14*/]))
			{
				if (Local_110[iLocal_446 /*14*/].f_10 == 0)
				{
					GlobalFunc_565(719, 1, 0);
					Local_110[iLocal_446 /*14*/].f_10 = 1;
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_110[iLocal_446 /*14*/]));
			}
		}
		if ((((GlobalFunc_2773(Local_110[iLocal_446 /*14*/]) && (MISC::GET_GAME_TIMER() - iLocal_454) > 8000) && bLocal_455) && !AUDIO::IS_AMBIENT_SPEECH_PLAYING(Local_110[iLocal_446 /*14*/])) && !PED::IS_PED_IN_ANY_VEHICLE(Local_110[iLocal_446 /*14*/], 0))
		{
			if (ENTITY::GET_ENTITY_HEALTH(Local_110[iLocal_446 /*14*/]) < 110)
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_110[iLocal_446 /*14*/], "DYING_MOAN", GlobalFunc_566(3), 1);
				iLocal_454 = MISC::GET_GAME_TIMER();
			}
			else if (ENTITY::GET_ENTITY_HEALTH(Local_110[iLocal_446 /*14*/]) < 140)
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_110[iLocal_446 /*14*/], "DYING_HELP", GlobalFunc_566(3), 1);
				iLocal_454 = MISC::GET_GAME_TIMER();
			}
			else if (PED::IS_PED_GOING_INTO_COVER(Local_110[iLocal_446 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_110[iLocal_446 /*14*/], "TAKE_COVER", GlobalFunc_566(3), 1);
				iLocal_454 = MISC::GET_GAME_TIMER();
			}
			else if (TASK::IS_PED_RUNNING(Local_110[iLocal_446 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_110[iLocal_446 /*14*/], "COVER_ME", GlobalFunc_566(3), 1);
				iLocal_454 = MISC::GET_GAME_TIMER();
			}
			else if (PED::IS_PED_SHOOTING(Local_110[iLocal_446 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_110[iLocal_446 /*14*/], "COVER_YOU", GlobalFunc_566(3), 1);
				iLocal_454 = MISC::GET_GAME_TIMER();
			}
			else if (!WEAPON::IS_PED_WEAPON_READY_TO_SHOOT(Local_110[iLocal_446 /*14*/]))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_110[iLocal_446 /*14*/], "RELOADING", GlobalFunc_566(3), 1);
				iLocal_454 = MISC::GET_GAME_TIMER();
			}
			else if (GlobalFunc_2664(Local_110[iLocal_446 /*14*/], -828834893, 1) || GlobalFunc_2664(Local_110[iLocal_446 /*14*/], 451360105, 1))
			{
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(Local_110[iLocal_446 /*14*/], "GENERIC_WAR_CRY", GlobalFunc_566(3), 1);
				iLocal_454 = MISC::GET_GAME_TIMER();
			}
		}
		iLocal_446++;
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::SET_POLICE_RADAR_BLIPS(1);
	}
	else
	{
		PLAYER::SET_POLICE_RADAR_BLIPS(0);
	}
	if (GlobalFunc_2773(Local_93[0 /*2*/]) && GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_93[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f, 2794.875f, 21.45629f, 30f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], 0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		}
	}
	if (GlobalFunc_2773(Local_93[0 /*2*/]) && GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_1474 > 0)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 650f)
			{
				func_182(5);
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 1), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 600f)
			{
				if (!iLocal_453)
				{
					GlobalFunc_164("RHP_LWARN", 7500, 1);
					iLocal_453 = 1;
				}
			}
			else
			{
				iLocal_453 = 0;
			}
		}
	}
	if (GlobalFunc_2773(Local_93[0 /*2*/]))
	{
		bVar0 = true;
		iVar1 = 0;
		while (iVar1 <= (9 - 1))
		{
			if (GlobalFunc_2773(Local_110[iVar1 /*14*/]))
			{
				bVar0 = false;
			}
			iVar1++;
		}
		if (bVar0)
		{
			if ((!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], 0) && !PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/]))
				{
					TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], -1, 2048, 1);
				}
			}
			else if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/]))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
		}
	}
	if (!iLocal_443)
	{
		if (iLocal_1474 == 0)
		{
			if (fLocal_440 != 0f)
			{
				fLocal_440 = 0f;
			}
		}
		else if (iLocal_1474 == 1)
		{
			if (fLocal_440 < 5f)
			{
				fLocal_440 = (fLocal_440 + MISC::GET_FRAME_TIME());
			}
		}
		if (fLocal_440 < 3f)
		{
			iVar2 = 0;
			while (iVar2 < Local_93)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_93[iVar2 /*2*/]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_428[iVar2]))
				{
					uLocal_428[iVar2] = Local_93[iVar2 /*2*/];
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_428[iVar2]))
				{
					if (ENTITY::IS_ENTITY_DEAD(uLocal_428[iVar2]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_428[iVar2], 0))
					{
						iVar3 = VEHICLE::GET_VEHICLE_CAUSE_OF_DESTRUCTION(uLocal_428[iVar2]);
						if (iVar3 == joaat("weapon_stickybomb"))
						{
							GlobalFunc_553(726);
							iLocal_443 = 1;
						}
					}
				}
				iVar2++;
			}
			iVar2 = 0;
			while (iVar2 < Global_86864)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar2]))
				{
					if (ENTITY::IS_ENTITY_DEAD(Global_86864[iVar2]) || !VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[iVar2], 0))
					{
						iVar4 = VEHICLE::GET_VEHICLE_CAUSE_OF_DESTRUCTION(Global_86864[iVar2]);
						if (iVar4 == joaat("weapon_stickybomb"))
						{
							GlobalFunc_553(726);
							iLocal_443 = 1;
						}
					}
				}
				iVar2++;
			}
		}
	}
	func_159();
	func_149();
	func_145();
	func_144();
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	if (!iLocal_442)
	{
		if (GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 0, 0))
		{
			iLocal_442 = 1;
			MISC::_0xD9F692D349249528();
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			PLAYER::SET_POLICE_RADAR_BLIPS(1);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(PLAYER::PLAYER_ID(), 3, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			iLocal_442 = 1;
		}
	}
	else if (!GlobalFunc_877(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 3, 0, 0))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			MISC::ENABLE_DISPATCH_SERVICE(5, 0);
			MISC::ENABLE_DISPATCH_SERVICE(3, 0);
			MISC::ENABLE_DISPATCH_SERVICE(1, 0);
			MISC::ENABLE_DISPATCH_SERVICE(10, 0);
			MISC::ENABLE_DISPATCH_SERVICE(9, 0);
			MISC::_0xE532EC1A63231B4F(1, 0);
			MISC::_0xE532EC1A63231B4F(2, 0);
			MISC::_0xE532EC1A63231B4F(8, 0);
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_POLICE_RADAR_BLIPS(0);
			iLocal_442 = 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!iLocal_1485)
			{
				GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 725);
				GlobalFunc_503(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 718);
				iLocal_1485 = 1;
			}
		}
		else if (iLocal_1485)
		{
			iLocal_1485 = 0;
		}
		if (!iLocal_1486)
		{
			GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 722);
			iLocal_1486 = 1;
		}
	}
	if (!iLocal_441)
	{
		iVar5 = 0;
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
			{
				iVar5 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		else if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1)) < 10000f)
		{
			iVar5 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		}
		if ((((((ENTITY::DOES_ENTITY_EXIST(iVar5) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar5, 0)) && iVar5 != iLocal_427) && iVar5 != Local_93[1 /*2*/]) && iVar5 != Local_93[2 /*2*/]) && iVar5 != Local_93[0 /*2*/]) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar5)))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar5, 1, 1);
			iLocal_427 = iVar5;
		}
	}
}




void func_144()//Position - 0x8BA5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_1474 < 1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_INTERCEPT_CONVOY"))
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_93[iVar0 /*2*/]))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_93[iVar0 /*2*/], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0)) < 1000f)
					{
						AUDIO::START_AUDIO_SCENE("PS_PREP_INTERCEPT_CONVOY");
					}
				}
				iVar0++;
			}
		}
	}
	else if (iLocal_1474 == 1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			AUDIO::START_AUDIO_SCENE("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
	else if (iLocal_1474 >= 1)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_INTERCEPT_CONVOY"))
		{
			AUDIO::STOP_AUDIO_SCENE("PS_PREP_INTERCEPT_CONVOY");
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_93[1 /*2*/]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_93[1 /*2*/], 0);
				}
				iVar1++;
			}
			iVar2 = 0;
			while (iVar2 <= 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_86864[iVar2]))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_86864[iVar2], 0);
				}
				iVar2++;
			}
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("PS_PREP_MILITARY_TRUCK_SHOOTOUT"))
		{
			AUDIO::STOP_AUDIO_SCENE("PS_PREP_MILITARY_TRUCK_SHOOTOUT");
		}
	}
}

void func_145()//Position - 0x8CAE
{
	switch (iLocal_436)
	{
		case 1:
			if (fLocal_439 != 0f)
			{
				fLocal_439 = 0f;
			}
			if (fLocal_438 <= 0f)
			{
				fLocal_438 = 0f;
				iLocal_436 = 0;
			}
			else if (fLocal_438 > 0f)
			{
				fLocal_438 = (fLocal_438 - 0.02f);
			}
		
		case 0:
			if (func_148())
			{
				iLocal_436 = 3;
				fLocal_437 = fLocal_438;
				fLocal_439 = 1f;
			}
			break;
		
		case 3:
			if (fLocal_439 != 1f)
			{
				fLocal_439 = 1f;
			}
			if (fLocal_438 >= 1f)
			{
				iLocal_436 = 2;
				fLocal_438 = 1f;
			}
			else if (fLocal_438 < 1f)
			{
				fLocal_438 = (fLocal_438 + 0.02f);
			}
		
		case 2:
			if (!func_148())
			{
				iLocal_436 = 1;
				fLocal_437 = fLocal_438;
				fLocal_439 = 0f;
			}
			break;
	}
	if (iLocal_436 == 3 || iLocal_436 == 1)
	{
		GlobalFunc_5180(fLocal_437, fLocal_439, fLocal_438);
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_34036[20 /*31*/], fLocal_438, 0, 1);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_34036[20 /*31*/], 4, 0, 1);
	}
}



int func_148()//Position - 0x8DEB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Local_93[iVar0 /*2*/]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_93[iVar0 /*2*/], 0)) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_93[iVar0 /*2*/], -1591.019f, 2803.731f, 15.41812f, -1569.92f, 2777.878f, 22.14856f, 8.25f, 0, 1, 0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_149()//Position - 0x8E5C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = GlobalFunc_9028(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (!GlobalFunc_9814(iVar1))
			{
				if (GlobalFunc_9813(iVar1, 0))
				{
					if (func_154(iVar1) || func_152(iVar1))
					{
						if (GlobalFunc_9812(iVar1, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
							TASK::CLEAR_PED_TASKS(iVar1);
						}
					}
				}
			}
			else if (func_154(iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, 1))
			{
				TASK::REQUEST_WAYPOINT_RECORDING(sLocal_490);
				bLocal_1484 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1, 1365.772f, 3625.582f, 33.69244f, 1374.662f, 3598.951f, 36.8947f, 34f, 0, 1, 0);
				if (!bLocal_1484)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1273030092) != 0)
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(iVar1, PED::GET_VEHICLE_PED_IS_IN(iVar1, 0), 1376.77f, 3605.09f, 33.88f, 30f, 786469, 2f);
					}
				}
				else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_93[0 /*2*/]))
				{
					TASK::REQUEST_WAYPOINT_RECORDING(sLocal_490);
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sLocal_490))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar1, Local_93[0 /*2*/], sLocal_490, 786469, 0, 8, -1, 10f, 0, 2f);
					}
				}
			}
			else if (func_152(iVar1) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar1, 1))
			{
				if (GlobalFunc_2773(Local_110[5 /*14*/]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar1, -1273030092) != 0)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar1, PED::GET_VEHICLE_PED_IS_IN(iVar1, 0), Local_110[5 /*14*/], 7, 15f, 786469, 15f, -1f, 1);
					}
				}
			}
			else
			{
				GlobalFunc_9811(iVar1);
			}
		}
		iVar0++;
	}
}



int func_152(int iParam0)//Position - 0x90FC
{
	if (!GlobalFunc_236())
	{
		if (GlobalFunc_2773(Local_93[0 /*2*/]) && iLocal_433 == 0)
		{
			if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}


int func_154(int iParam0)//Position - 0x9185
{
	if (!GlobalFunc_236())
	{
		if (GlobalFunc_2773(Local_93[0 /*2*/]) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_93[0 /*2*/], 1364.248f, 3620.511f, 33.89069f, 1350.9f, 3616.225f, 37.12358f, 6.5f, 0, 1, 0))
		{
			if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iParam0, Local_93[0 /*2*/], 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_93[0 /*2*/], -1) == iParam0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}





void func_159()//Position - 0x932B
{
	int iVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	switch (iLocal_433)
	{
		case 0:
			if (!bLocal_455)
			{
				func_175();
				func_169();
				if (((((GlobalFunc_2773(Local_110[4 /*14*/]) && GlobalFunc_2773(Local_110[0 /*14*/])) && GlobalFunc_2773(Local_110[5 /*14*/])) && GlobalFunc_2773(Local_93[1 /*2*/])) && GlobalFunc_2773(Local_93[2 /*2*/])) && GlobalFunc_2773(Local_93[0 /*2*/]))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_93[0 /*2*/], -1521.829f, 2725.003f, 16.64367f, -1600.763f, 2794.875f, 21.45629f, 30f, 0, 1, 0) && PED::IS_PED_IN_VEHICLE(Local_110[4 /*14*/], Local_93[0 /*2*/], 0))
					{
						iLocal_433 = 2;
						iLocal_470 = 0;
					}
					fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_93[1 /*2*/], 0), ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 0));
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_93[1 /*2*/], 0), ENTITY::GET_ENTITY_COORDS(Local_93[2 /*2*/], 0)) > fVar1)
					{
						fVar1 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(Local_93[1 /*2*/], 0), ENTITY::GET_ENTITY_COORDS(Local_93[2 /*2*/], 0));
					}
					fVar3 = (11f + ((11f / (100f - 40f)) * 40f));
					uVar2 = GlobalFunc_253((((-11f / (100f - 40f)) * fVar1) + fVar3), 0f, 11f);
					if (PED::IS_PED_SITTING_IN_VEHICLE(Local_110[0 /*14*/], Local_93[1 /*2*/]))
					{
						TASK::SET_DRIVE_TASK_CRUISE_SPEED(Local_110[0 /*14*/], uVar2);
					}
				}
			}
			else
			{
				if (GlobalFunc_2773(Local_93[0 /*2*/]))
				{
					Local_459 = { ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 0) };
				}
				iLocal_435 = 0;
				iLocal_434 = 0;
				iLocal_433 = 1;
			}
			break;
		
		case 2:
			if (!bLocal_455)
			{
				func_169();
				if (((((GlobalFunc_2773(Local_110[4 /*14*/]) && GlobalFunc_2773(Local_110[0 /*14*/])) && GlobalFunc_2773(Local_110[5 /*14*/])) && GlobalFunc_2773(Local_93[1 /*2*/])) && GlobalFunc_2773(Local_93[2 /*2*/])) && GlobalFunc_2773(Local_93[0 /*2*/]))
				{
					switch (iLocal_470)
					{
						case 0:
							if (!GlobalFunc_2664(Local_110[0 /*14*/], 242628503, 1))
							{
								if (iLocal_436 == 2 || (iLocal_436 == 3 && fLocal_438 > 0.8f))
								{
									TASK::OPEN_SEQUENCE_TASK(&uVar4);
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_93[1 /*2*/], -1785.46f, 3169.625f, 31.93f, 4, 10f, 786603, 3f, 3f, 1);
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, Local_93[1 /*2*/], -1885.875f, 3006.152f, 31.81027f, 4, 10f, 786603, -1f, -1f, 1);
									TASK::CLOSE_SEQUENCE_TASK(uVar4);
									TASK::TASK_PERFORM_SEQUENCE(Local_110[0 /*14*/], uVar4);
									TASK::CLEAR_SEQUENCE_TASK(&uVar4);
								}
							}
							if (!GlobalFunc_2664(Local_110[4 /*14*/], -1273030092, 1))
							{
								TASK::TASK_VEHICLE_ESCORT(Local_110[4 /*14*/], Local_93[0 /*2*/], Local_93[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (!GlobalFunc_2664(Local_110[5 /*14*/], -1273030092, 1))
							{
								TASK::TASK_VEHICLE_ESCORT(Local_110[5 /*14*/], Local_93[2 /*2*/], Local_93[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
							}
							if (ENTITY::IS_ENTITY_AT_COORD(Local_110[0 /*14*/], -1885.875f, 3006.152f, 31.81027f, 5f, 5f, 5f, 0, 1, 0))
							{
								iVar0 = 0;
								while (iVar0 <= (9 - 1))
								{
									if (GlobalFunc_2773(Local_110[iVar0 /*14*/]))
									{
										PED::SET_PED_AS_COP(Local_110[iVar0 /*14*/], 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 3, 1);
										PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 1, 1);
										if ((iVar0 == 0 || iVar0 == 5) || iVar0 == 4)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_110[iVar0 /*14*/], 200, 65536);
										}
										else if ((iVar0 == 1 || iVar0 == 6) || iVar0 == 7)
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_110[iVar0 /*14*/], 0, 65536);
										}
										else
										{
											TASK::TASK_LEAVE_ANY_VEHICLE(Local_110[iVar0 /*14*/], 1000, 65536);
										}
										GlobalFunc_132(&(Local_110[iVar0 /*14*/]), 1, 1, 1);
									}
									iVar0++;
								}
								iLocal_470++;
							}
							break;
						
						case 1:
							break;
						}
				}
			}
			else
			{
				if (GlobalFunc_2773(Local_93[0 /*2*/]))
				{
					Local_459 = { ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 1) };
				}
				iLocal_435 = 0;
				iLocal_434 = 0;
				iLocal_433 = 1;
			}
			break;
		
		case 1:
			PED::GET_CLOSEST_PED(Local_459, 50f, 1, 0, &iVar5, 0, 0, -1);
			if (GlobalFunc_2773(iVar5))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar5, 2, 0);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar5, 2048, 0);
			}
			switch (iLocal_434)
			{
				case 0:
					switch (iLocal_435)
					{
						case 0:
							iLocal_435 = func_167(Local_93[0 /*2*/]);
							break;
						
						case 1:
							if (GlobalFunc_2773(Local_110[0 /*14*/]) && GlobalFunc_2773(Local_93[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[0 /*14*/], Local_93[1 /*2*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
									if (ENTITY::GET_ENTITY_SPEED(Local_110[0 /*14*/]) > 5f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[1 /*2*/], 5, 1000);
									}
									else
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[1 /*2*/], 14, 1500);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 720, 65536);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
									TASK::TASK_PERFORM_SEQUENCE(Local_110[0 /*14*/], uLocal_445);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
								}
							}
							if (GlobalFunc_2773(Local_110[4 /*14*/]) && GlobalFunc_2773(Local_93[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[4 /*14*/], Local_93[0 /*2*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
									if (ENTITY::GET_ENTITY_SPEED(Local_110[4 /*14*/]) > 5f)
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[0 /*2*/], 4, 2500);
									}
									else
									{
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[0 /*2*/], 13, 1500);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 65536);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
									TASK::TASK_PERFORM_SEQUENCE(Local_110[4 /*14*/], uLocal_445);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
								}
							}
							if ((GlobalFunc_2773(Local_110[5 /*14*/]) && GlobalFunc_2773(Local_93[2 /*2*/])) && GlobalFunc_2773(Local_93[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[5 /*14*/], Local_93[2 /*2*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_93[2 /*2*/], 0), ENTITY::GET_ENTITY_COORDS(Local_93[1 /*2*/], 0)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_93[2 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_93[1 /*2*/], -3f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[2 /*2*/], 5, 1000);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
									TASK::TASK_PERFORM_SEQUENCE(Local_110[5 /*14*/], uLocal_445);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
								}
							}
							iLocal_434 = 1;
							break;
						
						case 2:
							if (GlobalFunc_2773(Local_110[0 /*14*/]) && GlobalFunc_2773(Local_93[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[0 /*14*/], Local_93[1 /*2*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[1 /*2*/], 5, 1500);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 900, 65536);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
									TASK::TASK_PERFORM_SEQUENCE(Local_110[0 /*14*/], uLocal_445);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
								}
							}
							if (GlobalFunc_2773(Local_110[4 /*14*/]) && GlobalFunc_2773(Local_93[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[4 /*14*/], Local_93[0 /*2*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[0 /*2*/], 5, 1000);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 100, 65536);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
									TASK::TASK_PERFORM_SEQUENCE(Local_110[4 /*14*/], uLocal_445);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
								}
							}
							if ((GlobalFunc_2773(Local_110[5 /*14*/]) && GlobalFunc_2773(Local_93[2 /*2*/])) && GlobalFunc_2773(Local_93[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[5 /*14*/], Local_93[2 /*2*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_93[2 /*2*/], 0), ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 0)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_93[2 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_93[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 120, 65536);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
									TASK::TASK_PERFORM_SEQUENCE(Local_110[5 /*14*/], uLocal_445);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
								}
							}
							iLocal_434 = 1;
							break;
						
						case 3:
							if ((GlobalFunc_2773(Local_110[0 /*14*/]) && GlobalFunc_2773(Local_93[1 /*2*/])) && GlobalFunc_2773(Local_93[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[0 /*14*/], Local_93[1 /*2*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[1 /*2*/], 6, 500);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_93[1 /*2*/], 0), ENTITY::GET_ENTITY_COORDS(Local_93[2 /*2*/], 0)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_93[1 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_93[2 /*2*/], 2f, 0f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[1 /*2*/], 5, 1000);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 420, 65536);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
									TASK::TASK_PERFORM_SEQUENCE(Local_110[0 /*14*/], uLocal_445);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
								}
							}
							if (GlobalFunc_2773(Local_110[4 /*14*/]) && GlobalFunc_2773(Local_93[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[4 /*14*/], Local_93[0 /*2*/], 0))
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_110[4 /*14*/]) > 5f)
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[0 /*2*/], 5, 1500);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 380, 65536);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
										TASK::TASK_PERFORM_SEQUENCE(Local_110[4 /*14*/], uLocal_445);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
									}
								}
							}
							if (GlobalFunc_2773(Local_110[5 /*14*/]) && GlobalFunc_2773(Local_93[2 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[5 /*14*/], Local_93[2 /*2*/], 0))
								{
									if (ENTITY::GET_ENTITY_SPEED(Local_110[5 /*14*/]) > 5f)
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
										TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[2 /*2*/], 4, 1500);
										TASK::TASK_LEAVE_ANY_VEHICLE(0, 250, 65536);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
										TASK::TASK_PERFORM_SEQUENCE(Local_110[5 /*14*/], uLocal_445);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
									}
								}
							}
							iLocal_434 = 1;
							break;
						
						case 4:
							if (GlobalFunc_2773(Local_110[0 /*14*/]) && GlobalFunc_2773(Local_93[1 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[0 /*14*/], Local_93[1 /*2*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[1 /*2*/], 4, 1500);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 800, 65536);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
									TASK::TASK_PERFORM_SEQUENCE(Local_110[0 /*14*/], uLocal_445);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
								}
							}
							if (GlobalFunc_2773(Local_110[4 /*14*/]) && GlobalFunc_2773(Local_93[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[4 /*14*/], Local_93[0 /*2*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
									TASK::TASK_VEHICLE_TEMP_ACTION(0, Local_93[0 /*2*/], 4, 1500);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 50, 65536);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
									TASK::TASK_PERFORM_SEQUENCE(Local_110[4 /*14*/], uLocal_445);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
								}
							}
							if ((GlobalFunc_2773(Local_110[5 /*14*/]) && GlobalFunc_2773(Local_93[2 /*2*/])) && GlobalFunc_2773(Local_93[0 /*2*/]))
							{
								if (PED::IS_PED_IN_VEHICLE(Local_110[5 /*14*/], Local_93[2 /*2*/], 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(Local_93[2 /*2*/], 0), ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 0)) < 1000f)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, Local_93[2 /*2*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_93[0 /*2*/], -2f, 1f, 0f), 10f, 0, joaat("crusader"), 786469, 4f, -1f);
									}
									TASK::TASK_LEAVE_ANY_VEHICLE(0, 500, 65536);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
									TASK::TASK_PERFORM_SEQUENCE(Local_110[5 /*14*/], uLocal_445);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
								}
							}
							iLocal_434 = 1;
							break;
					}
					break;
				
				case 1:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (GlobalFunc_2773(Local_110[iVar0 /*14*/]) && GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_ACCURACY(Local_110[iVar0 /*14*/], 10);
							PED::SET_PED_SEEING_RANGE(Local_110[iVar0 /*14*/], 580f);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 0, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 50, 1);
							PED::SET_PED_CONFIG_FLAG(Local_110[iVar0 /*14*/], 184, 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_110[iVar0 /*14*/], 1);
							func_166(iVar0);
							if ((iVar0 != 0 && iVar0 != 4) && iVar0 != 5)
							{
								if (iVar0 == 6)
								{
									iVar6 = 300;
								}
								else if (iVar0 == 1)
								{
									iVar6 = 900;
								}
								else if (iVar0 == 7)
								{
									iVar6 = 250;
								}
								else if (iVar0 == 2)
								{
									iVar6 = 350;
								}
								else if (iVar0 == 8)
								{
									iVar6 = 500;
								}
								else if (iVar0 == 3)
								{
									iVar6 = 650;
								}
								TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
								if (PED::IS_PED_IN_ANY_VEHICLE(Local_110[iVar0 /*14*/], 0))
								{
									TASK::TASK_PAUSE(0, iVar6);
								}
								TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar6, 65536);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
								TASK::TASK_PERFORM_SEQUENCE(Local_110[iVar0 /*14*/], uLocal_445);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 3, 1);
							}
						}
						iVar0++;
					}
					iLocal_434 = func_165();
					break;
				
				case 2:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (GlobalFunc_2773(Local_110[iVar0 /*14*/]) && GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
						{
							func_166(iVar0);
							if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
							{
								iLocal_465 = 8000;
							}
							else
							{
								iLocal_465 = 12000;
							}
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_110[iVar0 /*14*/], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 75f)
							{
								if (!Local_110[iVar0 /*14*/].f_12 && (MISC::GET_GAME_TIMER() - iLocal_466) > iLocal_465)
								{
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 51, 1);
									Local_110[iVar0 /*14*/].f_12 = 1;
									iLocal_466 = MISC::GET_GAME_TIMER();
								}
							}
							else
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_110[iVar0 /*14*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 51, 0);
								Local_110[iVar0 /*14*/].f_12 = 0;
							}
							if (!GlobalFunc_2664(Local_110[iVar0 /*14*/], 780511057, 1))
							{
								TASK::TASK_COMBAT_PED(Local_110[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_434 = func_165();
					break;
				
				case 3:
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if (GlobalFunc_2773(Local_110[iVar0 /*14*/]) && GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_110[iVar0 /*14*/], 0), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 120f)
							{
								PED::SET_PED_COMBAT_MOVEMENT(Local_110[iVar0 /*14*/], 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 51, 0);
								Local_110[iVar0 /*14*/].f_12 = 0;
								func_166(iVar0);
							}
							if (!GlobalFunc_2664(Local_110[iVar0 /*14*/], 780511057, 1))
							{
								TASK::TASK_COMBAT_PED(Local_110[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						iVar0++;
					}
					iLocal_434 = func_165();
					break;
				
				case 4:
					if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_48, 1) < 30f)
					{
						iVar7 = 1;
					}
					iVar0 = 0;
					while (iVar0 <= (9 - 1))
					{
						if ((GlobalFunc_2773(PLAYER::PLAYER_PED_ID()) && GlobalFunc_2773(Local_110[iVar0 /*14*/])) && GlobalFunc_2773(Local_93[0 /*2*/]))
						{
							if (iVar7 && GlobalFunc_713(Local_110[iVar0 /*14*/], Local_48, 1) < 30f)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 3, 1);
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_110[iVar0 /*14*/], 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_110[iVar0 /*14*/], 2);
								if (!PED::IS_PED_IN_COMBAT(Local_110[iVar0 /*14*/], 0))
								{
									TASK::TASK_COMBAT_PED(Local_110[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], 0) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 0), ENTITY::GET_ENTITY_COORDS(Local_110[iVar0 /*14*/], 0), 1) > (120f / 2f))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 1, 1);
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_110[iVar0 /*14*/], 0), 1) > (120f * 2f))
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(Local_110[iVar0 /*14*/], 0) && !ENTITY::IS_ENTITY_ON_SCREEN(Local_110[iVar0 /*14*/]))
									{
										iVar9 = func_163(Local_110[iVar0 /*14*/]);
										if (GlobalFunc_2773(iVar9))
										{
											iVar8 = -1;
											if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, -1))
											{
												iVar8 = -1;
											}
											else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, 0))
											{
												iVar8 = 0;
											}
											else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, 1))
											{
												iVar8 = 1;
											}
											else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iVar9, 2))
											{
												iVar8 = 2;
											}
											if (GlobalFunc_4273(iVar9))
											{
												if (TASK::GET_SCRIPT_TASK_STATUS(Local_110[iVar0 /*14*/], -1794415470) != 1)
												{
													TASK::TASK_ENTER_VEHICLE(Local_110[iVar0 /*14*/], iVar9, 1000, iVar8, 2f, 16, 0);
												}
												PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 3, 0);
											}
											else
											{
												ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_110[iVar0 /*14*/]));
											}
										}
										else
										{
											ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_110[iVar0 /*14*/]));
										}
									}
									else if (!PED::IS_PED_IN_COMBAT(Local_110[iVar0 /*14*/], 0))
									{
										TASK::TASK_COMBAT_PED(Local_110[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
									}
								}
								else if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_110[iVar0 /*14*/]))
								{
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_110[iVar0 /*14*/], 1) < 35f)
									{
										if (GlobalFunc_2234(Local_110[iVar0 /*14*/], PED::GET_VEHICLE_PED_IS_IN(Local_110[iVar0 /*14*/], 0)) == -1)
										{
											if ((MISC::GET_GAME_TIMER() - iLocal_468) > 40000)
											{
												if (bLocal_469)
												{
													bLocal_469 = false;
													iLocal_468 = MISC::GET_GAME_TIMER();
												}
												else
												{
													bLocal_469 = true;
													iLocal_468 = MISC::GET_GAME_TIMER();
												}
											}
											if (bLocal_469)
											{
												if (!GlobalFunc_2664(Local_110[iVar0 /*14*/], -1273030092, 1))
												{
													TASK::TASK_VEHICLE_ESCORT(Local_110[iVar0 /*14*/], PED::GET_VEHICLE_PED_IS_IN(Local_110[iVar0 /*14*/], 0), Local_93[0 /*2*/], 1, 11f, 786468, -1f, 20, 0f);
												}
											}
											else if (!PED::IS_PED_IN_COMBAT(Local_110[iVar0 /*14*/], 0))
											{
												TASK::TASK_COMBAT_PED(Local_110[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
											}
										}
										else if (!PED::IS_PED_IN_COMBAT(Local_110[iVar0 /*14*/], 0))
										{
											TASK::TASK_COMBAT_PED(Local_110[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
										}
										if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 2f && GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_110[iVar0 /*14*/], 1) < 20f)
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 3, 1);
										}
										else
										{
											PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 3, 0);
										}
									}
									else if (!PED::IS_PED_IN_COMBAT(Local_110[iVar0 /*14*/], 0))
									{
										TASK::TASK_COMBAT_PED(Local_110[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
									}
								}
								else if (!PED::IS_PED_IN_COMBAT(Local_110[iVar0 /*14*/], 0))
								{
									TASK::TASK_COMBAT_PED(Local_110[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], 0))
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iVar0 /*14*/], 3, 1);
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_110[iVar0 /*14*/], 0);
								PED::SET_PED_COMBAT_MOVEMENT(Local_110[iVar0 /*14*/], 2);
							}
						}
						iVar0++;
					}
					iLocal_434 = func_165();
					break;
			}
			break;
	}
}




var func_163(int iParam0)//Position - 0xA67C
{
	var uVar0;
	float fVar1;
	
	uVar0 = Local_93[1 /*2*/];
	fVar1 = 9999f;
	if (GlobalFunc_2773(Local_93[1 /*2*/]))
	{
		if (GlobalFunc_156(iParam0, Local_93[1 /*2*/], 1) < fVar1)
		{
			fVar1 = GlobalFunc_156(iParam0, Local_93[1 /*2*/], 1);
			if (GlobalFunc_4273(Local_93[1 /*2*/]))
			{
				uVar0 = Local_93[1 /*2*/];
			}
			else
			{
				uVar0 = Local_93[2 /*2*/];
			}
		}
	}
	if (GlobalFunc_2773(Local_93[2 /*2*/]))
	{
		if (GlobalFunc_156(iParam0, Local_93[2 /*2*/], 1) < fVar1)
		{
			fVar1 = GlobalFunc_156(iParam0, Local_93[2 /*2*/], 1);
			if (GlobalFunc_4273(Local_93[2 /*2*/]))
			{
				uVar0 = Local_93[2 /*2*/];
			}
			else
			{
				uVar0 = Local_93[1 /*2*/];
			}
		}
	}
	return uVar0;
}


int func_165()//Position - 0xA75F
{
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()) && GlobalFunc_2773(Local_93[0 /*2*/]))
	{
		if (GlobalFunc_713(Local_93[0 /*2*/], Local_459, 1) > 120f)
		{
			return 4;
		}
		else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_459, 1) <= 120f)
		{
			return 2;
		}
		else if (GlobalFunc_713(PLAYER::PLAYER_PED_ID(), Local_459, 1) > 120f && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], 0))
		{
			return 3;
		}
	}
	return 2;
}

void func_166(int iParam0)//Position - 0xA7ED
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (GlobalFunc_2773(Local_110[iParam0 /*14*/]))
	{
		if (iParam0 == 0)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_51 };
				fVar4 = 3.8f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
		}
		else if (iParam0 == 1)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_63 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_63 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[1 /*2*/];
			}
		}
		else if (iParam0 == 2)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_60 };
				fVar4 = 3.8f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
		}
		else if (iParam0 == 3)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_63 };
				fVar4 = 4.5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[1 /*2*/];
			}
		}
		else if (iParam0 == 5)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_75 };
				fVar4 = 2.8f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_69 };
				fVar4 = 2.8f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_54 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
		}
		else if (iParam0 == 6)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_66 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_69 };
				fVar4 = 2.8f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
		}
		else if (iParam0 == 7)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_78 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_57 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
		}
		else if (iParam0 == 8)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_54 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_63 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_72 };
				fVar4 = 4.5f;
				iVar0 = Local_93[2 /*2*/];
			}
		}
		else if (iParam0 == 4)
		{
			if (func_167(0) == 1)
			{
				Var1 = { Local_57 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 2)
			{
				Var1 = { Local_66 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 3)
			{
				Var1 = { Local_66 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
			else if (func_167(0) == 4)
			{
				Var1 = { Local_54 };
				fVar4 = 5f;
				iVar0 = Local_93[0 /*2*/];
			}
		}
		if (!Local_110[iParam0 /*14*/].f_12)
		{
			if (GlobalFunc_2773(iVar0))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(Local_110[iParam0 /*14*/], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar0, Var1), fVar4, 0, 0);
			}
			else if (GlobalFunc_2773(Local_93[0 /*2*/]))
			{
				if (func_167(Local_93[0 /*2*/]) == 1)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_110[iParam0 /*14*/], Local_93[0 /*2*/], Local_60, 3.8f, 0);
				}
				else if (func_167(Local_93[0 /*2*/]) == 2)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_110[iParam0 /*14*/], Local_93[0 /*2*/], -6f, 0f, -0.5f, 6f, 0);
				}
				else if (func_167(Local_93[0 /*2*/]) == 3)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_110[iParam0 /*14*/], Local_93[0 /*2*/], Local_51, 3.8f, 0);
				}
				else if (func_167(Local_93[0 /*2*/]) == 4)
				{
					PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_110[iParam0 /*14*/], Local_93[0 /*2*/], 6f, 0f, -0.5f, 6f, 0);
				}
			}
		}
	}
}

int func_167(int iParam0)//Position - 0xADB1
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iParam0 == 0)
	{
		iParam0 = Local_93[0 /*2*/];
	}
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()) && GlobalFunc_2773(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, Var0) };
		fVar6 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.x, Var0.f_1, Var3.x, Var3.f_1);
		if (Var3.x < 0f)
		{
			fVar6 = (fVar6 * -1f);
		}
	}
	if ((fVar6 <= 45f && fVar6 >= 0f) || (fVar6 >= -45f && fVar6 <= 0f))
	{
		return 1;
	}
	else if (fVar6 <= 135f && fVar6 >= 0f)
	{
		return 2;
	}
	else if (fVar6 >= -135f && fVar6 <= 0f)
	{
		return 4;
	}
	else
	{
		return 3;
	}
	return 1;
}


void func_169()//Position - 0xAEAA
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	int iVar19;
	struct<3> Var20;
	struct<3> Var23;
	
	WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iLocal_458, 1);
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (GlobalFunc_2773(Local_110[iVar0 /*14*/]))
		{
			if (((((PED::IS_PED_IN_COMBAT(Local_110[iVar0 /*14*/], 0) || PED::IS_PED_IN_MELEE_COMBAT(Local_110[iVar0 /*14*/])) || PED::IS_PED_BEING_STUNNED(Local_110[iVar0 /*14*/], 0)) || PED::IS_PED_BEING_STEALTH_KILLED(Local_110[iVar0 /*14*/])) || PED::IS_PED_BEING_JACKED(Local_110[iVar0 /*14*/])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_110[iVar0 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
			{
				bLocal_455 = true;
			}
			if ((MISC::GET_GAME_TIMER() - iLocal_467) > 800)
			{
				if (PED::HAS_PED_RECEIVED_EVENT(Local_110[iVar0 /*14*/], 123) || PED::HAS_PED_RECEIVED_EVENT(Local_110[iVar0 /*14*/], 124))
				{
					bLocal_455 = true;
				}
			}
			if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Local_110[iVar0 /*14*/], PLAYER::PLAYER_PED_ID()) && (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), Local_110[iVar0 /*14*/]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), Local_110[iVar0 /*14*/])))
			{
				if (iLocal_458 != 0)
				{
					if (WEAPON::GET_WEAPONTYPE_GROUP(iLocal_458) != joaat("GROUP_MELEE") && iLocal_458 != joaat("weapon_unarmed"))
					{
						if ((MISC::GET_GAME_TIMER() - Local_110[iVar0 /*14*/].f_11) > 800)
						{
							bLocal_455 = true;
						}
					}
				}
			}
			else
			{
				Local_110[iVar0 /*14*/].f_11 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			bLocal_455 = true;
		}
		iVar0++;
	}
	if (GlobalFunc_2773(Local_93[1 /*2*/]))
	{
		if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_93[1 /*2*/], PLAYER::PLAYER_PED_ID(), 0) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), Local_93[1 /*2*/], 0, -1)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[1 /*2*/], 1)) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[1 /*2*/]))
		{
			bLocal_455 = true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Local_93[1 /*2*/]))
				{
					bLocal_455 = true;
				}
			}
		}
		if (func_173(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(Local_93[1 /*2*/], 0), 30f, 0))
		{
			bLocal_455 = true;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_93[1 /*2*/]) && fLocal_462 >= 7f)
			{
				bLocal_455 = true;
			}
			Var1 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) - ENTITY::GET_ENTITY_COORDS(Local_93[1 /*2*/], 0)) };
			Var4 = { ENTITY::GET_ENTITY_VELOCITY(Local_93[1 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) };
			fLocal_462 = GlobalFunc_168(Var4, Var1);
		}
	}
	else
	{
		bLocal_455 = true;
	}
	if (GlobalFunc_2773(Local_93[2 /*2*/]))
	{
		if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_93[2 /*2*/], PLAYER::PLAYER_PED_ID(), 0) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), Local_93[2 /*2*/], 0, -1)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[2 /*2*/], 1)) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[2 /*2*/]))
		{
			bLocal_455 = true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Local_93[2 /*2*/]))
				{
					bLocal_455 = true;
				}
			}
		}
		if (func_173(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(Local_93[2 /*2*/], 0), 30f, 0))
		{
			bLocal_455 = true;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_93[2 /*2*/]) && fLocal_464 >= 7f)
			{
				bLocal_455 = true;
			}
			Var7 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) - ENTITY::GET_ENTITY_COORDS(Local_93[2 /*2*/], 0)) };
			Var10 = { ENTITY::GET_ENTITY_VELOCITY(Local_93[2 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) };
			fLocal_464 = GlobalFunc_168(Var10, Var7);
		}
	}
	else
	{
		bLocal_455 = true;
	}
	if (GlobalFunc_2773(Local_93[0 /*2*/]))
	{
		if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1) < 45f && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			bLocal_455 = true;
		}
		if (func_173(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 0), 30f, 0))
		{
			bLocal_455 = true;
		}
		if (((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_93[0 /*2*/], PLAYER::PLAYER_PED_ID(), 0) || WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], 0, -1)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/], 1)) || PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/]))
		{
			bLocal_455 = true;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("towtruck2")))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), Local_93[0 /*2*/]))
				{
					bLocal_455 = true;
				}
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_93[0 /*2*/]) && fLocal_463 >= 7f)
			{
				bLocal_455 = true;
			}
			Var13 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) - ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 0)) };
			Var16 = { ENTITY::GET_ENTITY_VELOCITY(Local_93[0 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) };
			fLocal_463 = GlobalFunc_168(Var16, Var13);
		}
		if (GlobalFunc_2236())
		{
			iVar19 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar19, 0))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar19, Local_93[0 /*2*/]))
				{
					bLocal_455 = true;
				}
				Var20 = { GlobalFunc_107(ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0) - ENTITY::GET_ENTITY_COORDS(Local_93[0 /*2*/], 0)) };
				Var23 = { ENTITY::GET_ENTITY_VELOCITY(Local_93[0 /*2*/]) - ENTITY::GET_ENTITY_VELOCITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) };
				fLocal_463 = GlobalFunc_168(Var23, Var20);
			}
		}
	}
	else
	{
		bLocal_455 = true;
	}
}




int func_173(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, bool bParam10)//Position - 0xB4EB
{
	int iVar0;
	
	iVar0 = 0;
	if (!GlobalFunc_105(Param0 + Param3))
	{
		if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_AREA(5, Param3, Param0) || (FIRE::IS_EXPLOSION_IN_AREA(2, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(20, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(4, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(28, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(32, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(25, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(9, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(3, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(6, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(0, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(1, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(23, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(34, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(14, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(30, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(12, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(7, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(21, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(18, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(15, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(10, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_SPHERE(5, Param6, fParam9) || (FIRE::IS_EXPLOSION_IN_SPHERE(2, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(20, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(28, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(32, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(9, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(3, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(6, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(23, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(34, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(14, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(30, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(12, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(21, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(18, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(15, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(27, Param6, fParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}


void func_175()//Position - 0xB920
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	
	if (((((GlobalFunc_2773(Local_93[0 /*2*/]) && GlobalFunc_2773(Local_93[1 /*2*/])) && GlobalFunc_2773(Local_93[2 /*2*/])) && GlobalFunc_2773(Local_110[4 /*14*/])) && GlobalFunc_2773(Local_110[0 /*14*/])) && GlobalFunc_2773(Local_110[5 /*14*/]))
	{
		Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_93[0 /*2*/], 0f, GlobalFunc_253(GlobalFunc_156(Local_93[0 /*2*/], Local_93[1 /*2*/], 1), 3f, 25f), 5.5f) };
		Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_93[0 /*2*/], 0f, 0f, -6f) };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_93[1 /*2*/], 0f, 20f, 5f) };
		Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_93[1 /*2*/], 0f, 0f, -6f) };
		Var12 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_93[2 /*2*/], 0f, GlobalFunc_253(GlobalFunc_156(Local_93[2 /*2*/], Local_93[0 /*2*/], 1), 3f, 25f), 5f) };
		Var15 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_93[2 /*2*/], 0f, 0f, -6f) };
		switch (iLocal_432)
		{
			case 0:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var6, Var9, 9f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_93[1 /*2*/]) < 1f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
					{
						fLocal_1480[1] = (fLocal_1480[1] + MISC::GET_FRAME_TIME());
					}
					else if (fLocal_1480[1] > 0f)
					{
						fLocal_1480[1] = (fLocal_1480[1] - (MISC::GET_FRAME_TIME() * 10f));
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, 9f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_93[0 /*2*/]) < 1f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
					{
						fLocal_1480[0] = (fLocal_1480[0] + MISC::GET_FRAME_TIME());
					}
					else if (fLocal_1480[0] > 0f)
					{
						fLocal_1480[0] = (fLocal_1480[0] - (MISC::GET_FRAME_TIME() * 10f));
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var12, Var15, 9f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(Local_93[2 /*2*/]) < 1f && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) < 1f)
					{
						fLocal_1480[2] = (fLocal_1480[2] + MISC::GET_FRAME_TIME());
					}
					else if (fLocal_1480[2] > 0f)
					{
						fLocal_1480[2] = (fLocal_1480[2] - (MISC::GET_FRAME_TIME() * 10f));
					}
				}
				if (fLocal_1480[1] > 1.5f)
				{
					iLocal_473 = Local_110[0 /*14*/];
					TASK::CLEAR_PED_TASKS(Local_110[4 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_110[0 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_110[5 /*14*/]);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_93[0 /*2*/], 4f, 1, 0);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_93[1 /*2*/], 4f, 1, 0);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_93[2 /*2*/], 4f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_110[0 /*14*/], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000, 0, 1);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 3f, 1082130432, 1, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
					TASK::TASK_PERFORM_SEQUENCE(Local_110[0 /*14*/], uLocal_445);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
					iLocal_432 = 1;
				}
				else if (fLocal_1480[0] > 1.5f)
				{
					iLocal_473 = Local_110[4 /*14*/];
					TASK::CLEAR_PED_TASKS(Local_110[4 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_110[0 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_110[5 /*14*/]);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_93[0 /*2*/], 4f, 1, 0);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_93[1 /*2*/], 4f, 1, 0);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_93[2 /*2*/], 4f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_110[4 /*14*/], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000, 0, 1);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 3f, 1082130432, 1, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
					TASK::TASK_PERFORM_SEQUENCE(Local_110[4 /*14*/], uLocal_445);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
					iLocal_432 = 1;
				}
				else if (fLocal_1480[2] > 1.5f)
				{
					iLocal_473 = Local_110[5 /*14*/];
					TASK::CLEAR_PED_TASKS(Local_110[4 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_110[0 /*14*/]);
					TASK::CLEAR_PED_TASKS(Local_110[5 /*14*/]);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_93[0 /*2*/], 4f, 1, 0);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_93[1 /*2*/], 4f, 1, 0);
					VEHICLE::BRING_VEHICLE_TO_HALT(Local_93[2 /*2*/], 4f, 1, 0);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_110[5 /*14*/], 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 65536);
					}
					TASK::TASK_AIM_GUN_AT_COORD(0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000, 0, 1);
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 3f, 1082130432, 1, 0, -957453492);
					TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
					TASK::TASK_PERFORM_SEQUENCE(Local_110[5 /*14*/], uLocal_445);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
					iLocal_432 = 1;
				}
				else
				{
					if ((PED::IS_PED_IN_ANY_VEHICLE(Local_110[5 /*14*/], 0) && PED::IS_PED_IN_ANY_VEHICLE(Local_110[0 /*14*/], 0)) && PED::IS_PED_IN_ANY_VEHICLE(Local_110[4 /*14*/], 0))
					{
						if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_93[1 /*2*/]))
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_110[0 /*14*/], Local_93[1 /*2*/], &cLocal_474, 786603, 0, 24, -1, 11f, 0, 1073741824);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_110[4 /*14*/], -1273030092) != 1)
						{
							TASK::TASK_VEHICLE_ESCORT(Local_110[4 /*14*/], Local_93[0 /*2*/], Local_93[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_110[5 /*14*/], -1273030092) != 1)
						{
							TASK::TASK_VEHICLE_ESCORT(Local_110[5 /*14*/], Local_93[2 /*2*/], Local_93[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
						}
						VEHICLE::_0x88BC673CA9E0AE99(Local_93[0 /*2*/], 1);
						VEHICLE::_0xBE5C1255A1830FF5(Local_93[0 /*2*/], 1);
						VEHICLE::_0x2C4A1590ABF43E8B(Local_93[0 /*2*/], 1);
						VEHICLE::_0x88BC673CA9E0AE99(Local_93[1 /*2*/], 1);
						VEHICLE::_0xBE5C1255A1830FF5(Local_93[1 /*2*/], 1);
						VEHICLE::_0x2C4A1590ABF43E8B(Local_93[1 /*2*/], 1);
						VEHICLE::_0x88BC673CA9E0AE99(Local_93[2 /*2*/], 1);
						VEHICLE::_0xBE5C1255A1830FF5(Local_93[2 /*2*/], 1);
						VEHICLE::_0x2C4A1590ABF43E8B(Local_93[2 /*2*/], 1);
					}
					iLocal_472 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 1:
				switch (iLocal_471)
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_473, 0))
						{
							GlobalFunc_173(&uLocal_237, 1, iLocal_473, "Armyped", 0, 1);
							iLocal_472 = MISC::GET_GAME_TIMER();
							fLocal_1480[1] = 0f;
							fLocal_1480[2] = 0f;
							fLocal_1480[0] = 0f;
							iLocal_471++;
						}
						break;
					
					case 1:
						if ((MISC::GET_GAME_TIMER() - iLocal_472) > 8000 && !GlobalFunc_111())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_473, 0))
							{
								GlobalFunc_173(&uLocal_237, 1, iLocal_473, "Armyped", 0, 1);
								if (iLocal_457)
								{
									iLocal_457 = 0;
								}
								else
								{
									iLocal_472 = MISC::GET_GAME_TIMER();
									iLocal_471++;
								}
							}
						}
						break;
					
					case 2:
						if ((MISC::GET_GAME_TIMER() - iLocal_472) > 8000 && !GlobalFunc_111())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_473, 0))
							{
								GlobalFunc_173(&uLocal_237, 1, iLocal_473, "Armyped", 0, 1);
								if (iLocal_457)
								{
									iLocal_457 = 0;
								}
								else
								{
									iLocal_472 = MISC::GET_GAME_TIMER();
									iLocal_471++;
								}
							}
						}
						break;
					
					case 3:
						if ((MISC::GET_GAME_TIMER() - iLocal_472) > 8000 && !GlobalFunc_111())
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_473, 0))
							{
								GlobalFunc_173(&uLocal_237, 1, iLocal_473, "Armyped", 0, 1);
								if (iLocal_457)
								{
									iLocal_457 = 0;
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_445);
									TASK::TASK_SHOOT_AT_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0.5f, 0f, -1f), 1000, 1566631136);
									TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 4f, 1082130432, 1, 0, -957453492);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_445);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_473, uLocal_445);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_445);
									iLocal_472 = MISC::GET_GAME_TIMER();
									iLocal_467 = MISC::GET_GAME_TIMER();
									iLocal_471++;
								}
							}
						}
						break;
					
					case 4:
						break;
				}
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, 9f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var6, Var9, 9f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var12, Var15, 9f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_473, 1630799643) != 1)
					{
						TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_473, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
					if (SYSTEM::TIMERA() > 3000)
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_473, 0))
						{
							if (iLocal_473 == Local_110[4 /*14*/])
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_473, Local_93[0 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_473 == Local_110[0 /*14*/])
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_473, Local_93[1 /*2*/], 20000, -1, 2f, 1, 0);
							}
							else if (iLocal_473 == Local_110[5 /*14*/])
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_473, Local_93[2 /*2*/], 20000, -1, 2f, 1, 0);
							}
						}
						iLocal_432 = 2;
					}
				}
				else
				{
					if (iLocal_471 == 4)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_472) > 9000 && !GlobalFunc_111())
						{
							bLocal_455 = true;
						}
					}
					SYSTEM::SETTIMERA(0);
				}
				break;
			
			case 2:
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var0, Var3, 9f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var6, Var9, 9f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Var12, Var15, 9f, 0, 1, 0))
				{
					iLocal_457 = 0;
					iLocal_432 = 0;
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_473, 0))
				{
					TASK::TASK_VEHICLE_ESCORT(Local_110[4 /*14*/], Local_93[0 /*2*/], Local_93[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_110[0 /*14*/], Local_93[1 /*2*/], &cLocal_474, 786603, 0, 24, -1, 11f, 0, 1073741824);
					TASK::TASK_VEHICLE_ESCORT(Local_110[5 /*14*/], Local_93[2 /*2*/], Local_93[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
					iLocal_457 = 1;
					iLocal_432 = 0;
				}
				break;
			}
	}
}







void func_182(int iParam0)//Position - 0xC5F4
{
	char* sVar0;
	
	AUDIO::TRIGGER_MUSIC_EVENT("RHP1_FAIL");
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "";
			break;
		
		case 3:
			sVar0 = "RHP_FDES";
			break;
		
		case 4:
			sVar0 = "RHP_TRKSTCK";
			break;
		
		case 2:
			sVar0 = "RHP_FEND";
			break;
		
		case 5:
			sVar0 = "RHP_FABN";
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
	iLocal_446 = 0;
	while (iLocal_446 <= (2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_107[iLocal_446]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_107[iLocal_446]));
		}
		iLocal_446++;
	}
	func_310();
	SCRIPT::TERMINATE_THIS_THREAD();
}












void func_194()//Position - 0xD54D
{
	struct<3> Var0;
	var uVar3;
	
	if (bLocal_1478 == 1)
	{
		if (iLocal_1473 == 0)
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
				func_106(iLocal_1479);
			}
		}
		else if (iLocal_1473 == 3)
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			func_219();
			GlobalFunc_762(&uLocal_493);
			if (!GlobalFunc_188())
			{
				func_216(iLocal_1479, &Var0, &uVar3);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uVar3);
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 1);
				GlobalFunc_5184(&uLocal_493, Var0, 50f, 0);
			}
			func_212(iLocal_1474);
			while (!GlobalFunc_7725(&uLocal_493))
			{
				SYSTEM::WAIT(0);
			}
			switch (iLocal_1474)
			{
				case 0:
					func_207();
					break;
				
				case 1:
					func_202();
					break;
				
				case 2:
					func_201();
					break;
				
				case 3:
					func_195();
					break;
			}
			bLocal_1478 = false;
			if (!GlobalFunc_188())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
		}
	}
}

void func_195()//Position - 0xD65E
{
	func_199(1357.7f, 3618.28f, 33.8905f, 110.4135f);
	bLocal_455 = true;
	if (GlobalFunc_188())
	{
		GlobalFunc_5108(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
}




void func_199(struct<3> Param0, float fParam3)//Position - 0xD7AD
{
	Local_93[0 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("barracks"), Param0, fParam3, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(Local_93[0 /*2*/], ENTITY::GET_ENTITY_HEALTH(Local_93[0 /*2*/]) * 2);
	VEHICLE::SET_VEHICLE_STRONG(Local_93[0 /*2*/], 1);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_93[0 /*2*/], (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_93[0 /*2*/]) * 2f));
	VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Local_93[0 /*2*/], 0);
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_93[0 /*2*/], (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_93[0 /*2*/]) * 2f));
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(Local_93[0 /*2*/], 0);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(Local_93[0 /*2*/], 0);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(Local_93[0 /*2*/], 1);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_93[0 /*2*/], 0, 0);
	GlobalFunc_743(Local_93[0 /*2*/], 0);
	uLocal_107[0] = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_107[0], Local_93[0 /*2*/], 0, 0f, -0.5f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	uLocal_107[1] = OBJECT::CREATE_OBJECT(joaat("prop_mil_crate_01"), 1006.765f, 2128.32f, 48.0929f, 1, 1, 0);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_107[1], Local_93[0 /*2*/], 0, 0f, -2.85f, 1.5f, 0f, 0f, -90f, 0, 0, 0, 0, 2, 1);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_93[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}


void func_201()//Position - 0xD8FF
{
	func_199(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	bLocal_455 = true;
	if (GlobalFunc_188())
	{
		GlobalFunc_5108(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
}

void func_202()//Position - 0xD93D
{
	int iVar0;
	
	func_206(-284.0175f, 2949.104f, 28.3715f, 46.1483f);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_205(iVar0, Local_93[1 /*2*/]);
		GlobalFunc_593(Local_110[iVar0 /*14*/], 0);
		iVar0++;
	}
	func_199(-248.6621f, 2950.037f, 28.9996f, 93.5394f);
	func_203(-223.1415f, 2952.188f, 28.8053f, 121.2339f);
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		func_205(iVar0, Local_93[2 /*2*/]);
		GlobalFunc_593(Local_110[iVar0 /*14*/], 0);
		iVar0++;
	}
	bLocal_455 = true;
	if (GlobalFunc_188())
	{
		GlobalFunc_5108(0, -1, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	}
}

void func_203(struct<3> Param0, float fParam3)//Position - 0xD9FC
{
	Local_93[2 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("crusader"), Param0, fParam3, 1, 1);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_93[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}


void func_205(int iParam0, int iParam1)//Position - 0xDAC3
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == Local_93[1 /*2*/] || iParam1 == Local_93[2 /*2*/])
	{
		iVar0 = joaat("s_m_y_marine_03");
	}
	else if (iParam1 == Local_93[0 /*2*/])
	{
		iVar0 = joaat("s_m_m_marine_01");
	}
	if ((iParam0 == 0 || iParam0 == 5) || iParam0 == 4)
	{
		iVar1 = -1;
		iLocal_450 = joaat("weapon_pistol");
	}
	else if (iParam0 == 1 || iParam0 == 6)
	{
		iVar1 = 0;
		iLocal_450 = joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 2 || iParam0 == 7)
	{
		iVar1 = 1;
		iLocal_450 = joaat("weapon_smg");
	}
	else if (iParam0 == 3 || iParam0 == 8)
	{
		iVar1 = 2;
		iLocal_450 = joaat("weapon_carbinerifle");
	}
	Local_110[iParam0 /*14*/] = PED::CREATE_PED_INSIDE_VEHICLE(iParam1, 26, iVar0, iVar1, 1, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_110[iParam0 /*14*/], iLocal_492);
	PED::SET_PED_AS_ENEMY(Local_110[iParam0 /*14*/], 1);
	WEAPON::GIVE_WEAPON_TO_PED(Local_110[iParam0 /*14*/], iLocal_450, -1, 1, 1);
	WEAPON::GIVE_WEAPON_TO_PED(Local_110[iParam0 /*14*/], joaat("weapon_pistol"), -1, 1, 1);
	PED::SET_PED_MONEY(Local_110[iParam0 /*14*/], 0);
	PED::SET_PED_COMPONENT_VARIATION(Local_110[iParam0 /*14*/], 2, 1, 0, 0);
	PED::SET_PED_ALERTNESS(Local_110[iParam0 /*14*/], 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(Local_110[iParam0 /*14*/], 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iParam0 /*14*/], 0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(Local_110[iParam0 /*14*/], 1, 0);
	PED::SET_PED_COMBAT_MOVEMENT(Local_110[iParam0 /*14*/], 1);
	PED::SET_PED_CONFIG_FLAG(Local_110[iParam0 /*14*/], 184, 1);
	PED::SET_PED_CONFIG_FLAG(Local_110[iParam0 /*14*/], 272, 1);
	AUDIO::STOP_PED_SPEAKING(Local_110[iParam0 /*14*/], 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_110[iParam0 /*14*/], 1);
	PED::SET_PED_ACCURACY(Local_110[iParam0 /*14*/], 10);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_110[iParam0 /*14*/], 1);
	Local_110[iParam0 /*14*/].f_10 = 0;
}

void func_206(struct<3> Param0, float fParam3)//Position - 0xDC74
{
	Local_93[1 /*2*/] = VEHICLE::CREATE_VEHICLE(joaat("crusader"), Param0, fParam3, 1, 1);
	AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_93[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
}

void func_207()//Position - 0xDCA0
{
	int iVar0;
	
	if (!GlobalFunc_2773(Local_93[1 /*2*/]))
	{
		func_206(996.9448f, 2140.02f, 47.9112f, 39.7091f);
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (!GlobalFunc_2773(Local_110[iVar0 /*14*/]))
		{
			func_205(iVar0, Local_93[1 /*2*/]);
			GlobalFunc_593(Local_110[iVar0 /*14*/], 0);
			if (iVar0 == 0)
			{
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_110[0 /*14*/], Local_93[1 /*2*/], &cLocal_474, 786603, 0, 24, -1, 11f, 0, 1073741824);
			}
		}
		iVar0++;
	}
	if (!GlobalFunc_2773(Local_93[0 /*2*/]))
	{
		func_199(1006.765f, 2128.32f, 48.0929f, 39.898f);
	}
	if (!GlobalFunc_2773(Local_110[4 /*14*/]))
	{
		func_205(4, Local_93[0 /*2*/]);
		TASK::TASK_VEHICLE_ESCORT(Local_110[4 /*14*/], Local_93[0 /*2*/], Local_93[1 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
		GlobalFunc_593(Local_110[4 /*14*/], 0);
	}
	if (!GlobalFunc_2773(Local_93[2 /*2*/]))
	{
		func_203(1018.995f, 2112.951f, 48.4754f, 34.6812f);
	}
	iVar0 = 5;
	while (iVar0 <= 8)
	{
		if (!GlobalFunc_2773(Local_110[iVar0 /*14*/]))
		{
			func_205(iVar0, Local_93[2 /*2*/]);
			GlobalFunc_593(Local_110[iVar0 /*14*/], 0);
			if (iVar0 == 5)
			{
				TASK::TASK_VEHICLE_ESCORT(Local_110[5 /*14*/], Local_93[2 /*2*/], Local_93[0 /*2*/], -1, 11f, 786603, -1f, 20, 0f);
			}
		}
		iVar0++;
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





void func_212(int iParam0)//Position - 0xE850
{
	switch (iParam0)
	{
		case 0:
			GlobalFunc_718(&uLocal_493, joaat("s_m_m_marine_01"));
			GlobalFunc_718(&uLocal_493, joaat("s_m_y_marine_03"));
			GlobalFunc_718(&uLocal_493, joaat("crusader"));
			GlobalFunc_718(&uLocal_493, joaat("barracks"));
			GlobalFunc_727(&uLocal_493, &cLocal_474);
			GlobalFunc_718(&uLocal_493, joaat("prop_mil_crate_01"));
			break;
		
		case 1:
			GlobalFunc_718(&uLocal_493, joaat("s_m_y_marine_03"));
			GlobalFunc_718(&uLocal_493, joaat("s_m_m_marine_01"));
			GlobalFunc_718(&uLocal_493, joaat("crusader"));
			GlobalFunc_718(&uLocal_493, joaat("barracks"));
			GlobalFunc_718(&uLocal_493, joaat("prop_mil_crate_01"));
			break;
		
		case 2:
		case 3:
			GlobalFunc_718(&uLocal_493, joaat("barracks"));
			GlobalFunc_718(&uLocal_493, joaat("prop_mil_crate_01"));
			break;
	}
}




void func_216(int iParam0, var uParam1, var uParam2)//Position - 0xEB4E
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -260.5082f, 2925.446f, 40.1977f };
			*uParam2 = 303.6227f;
			break;
		
		case 1:
			*uParam1 = { -276.0887f, 2920.386f, 40.1317f };
			*uParam2 = 0f;
			break;
		
		case 2:
			*uParam1 = { -253.7471f, 2941.485f, 29.131f };
			*uParam2 = 330.8292f;
			break;
		
		case 3:
			*uParam1 = { 1367.324f, 3618.374f, 33.8914f };
			*uParam2 = -118.28f;
			break;
	}
}



void func_219()//Position - 0xEE55
{
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_100[iLocal_446 /*2*/]) && !PED::IS_PED_INJURED(Local_100[iLocal_446 /*2*/]))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(Local_100[iLocal_446 /*2*/], 0))
			{
				PED::SET_PED_COORDS_NO_GANG(Local_100[iLocal_446 /*2*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_100[iLocal_446 /*2*/], 0), 1) + Vector(0f, -2f, 0f));
			}
			GlobalFunc_881(&(Local_100[iLocal_446 /*2*/]));
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (9 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_110[iLocal_446 /*14*/]))
		{
			GlobalFunc_589(&(Local_110[iLocal_446 /*14*/].f_2));
			Local_110[iLocal_446 /*14*/].f_12 = 0;
			if (!PED::IS_PED_INJURED(Local_110[iLocal_446 /*14*/]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_110[iLocal_446 /*14*/], 0))
				{
					PED::SET_PED_COORDS_NO_GANG(Local_110[iLocal_446 /*14*/], ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Local_110[iLocal_446 /*14*/], 0), 1) + Vector(0f, -2f, 0f));
				}
				GlobalFunc_881(&(Local_110[iLocal_446 /*14*/]));
			}
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_107[iLocal_446]))
		{
			GlobalFunc_130(&(uLocal_107[iLocal_446]));
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_93[iLocal_446 /*2*/]))
		{
			func_223(Local_93[iLocal_446 /*2*/]);
			GlobalFunc_7089(&(Local_93[iLocal_446 /*2*/]));
		}
		iLocal_446++;
	}
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	CAM::DESTROY_ALL_CAMS(0);
	GlobalFunc_5652(&Local_402, 1, 0);
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
	iLocal_433 = 0;
	iLocal_435 = 0;
	iLocal_434 = 0;
	iLocal_432 = 0;
	iLocal_471 = 0;
	bLocal_455 = false;
	bLocal_456 = false;
	StringCopy(&cLocal_474, "Rural_prep_trigger1", 64);
}




void func_223(int iParam0)//Position - 0xF125
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




void func_227()//Position - 0xF296
{
	switch (iLocal_1473)
	{
		case 1:
			iLocal_1473 = 2;
			iLocal_1475 = -1;
			break;
		
		case 2:
			iLocal_1473 = 3;
			iLocal_1475 = 0;
			iLocal_1474 = iLocal_1476;
			break;
		
		case 3:
			iLocal_1476 = -1;
			iLocal_1473 = 0;
			break;
		
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_1477) > 2500)
			{
				iLocal_1477 = MISC::GET_GAME_TIMER();
			}
			break;
	}
}



void func_230(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0xF3ED
{
	func_231(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_231(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0xF407
{
	uParam0->f_6 = 0;
	GlobalFunc_8374(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}




















void func_251()//Position - 0x101C1
{
	struct<3> Var0;
	var uVar3;
	
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_491);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_492);
	PED::ADD_RELATIONSHIP_GROUP("trevor", &iLocal_491);
	PED::ADD_RELATIONSHIP_GROUP("enemies", &iLocal_492);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_492, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_492, iLocal_491);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_491, iLocal_492);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_492, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_492);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_492, iLocal_492);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_492, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -472287501, iLocal_492);
	HUD::REQUEST_ADDITIONAL_TEXT("ruralp", 0);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	MISC::ENABLE_DISPATCH_SERVICE(5, 0);
	MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	MISC::ENABLE_DISPATCH_SERVICE(1, 0);
	MISC::ENABLE_DISPATCH_SERVICE(10, 0);
	MISC::ENABLE_DISPATCH_SERVICE(9, 0);
	MISC::_0xE532EC1A63231B4F(1, 0);
	MISC::_0xE532EC1A63231B4F(2, 0);
	MISC::_0xE532EC1A63231B4F(8, 0);
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	PLAYER::SET_MAX_WANTED_LEVEL(0);
	PLAYER::SET_POLICE_RADAR_BLIPS(0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("crusader"), 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("barracks"), 1);
	uLocal_444 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(35.39456f, 3600.538f, 1375.234f) - Vector(0f, 7f, 14.25f), Vector(35.39456f, 3600.538f, 1375.234f) + Vector(3f, 7f, 14.25f), 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), 0, 1);
	if (GlobalFunc_Is_Mission_Retry() || GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
	{
		if (GlobalFunc_Is_Mission_Retry())
		{
			iLocal_1479 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (Global_84544)
			{
				iLocal_1479++;
			}
			if (iLocal_1479 >= 3)
			{
				iLocal_1479 = 3;
			}
		}
		else if (GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0))
		{
			iLocal_1479 = 0;
		}
		if (GlobalFunc_Is_Mission_Retry())
		{
			func_216(iLocal_1479, &Var0, &uVar3);
			GlobalFunc_5812(Var0, uVar3, 1, 0);
		}
		bLocal_1478 = true;
	}
	else
	{
		while (!func_306())
		{
			SYSTEM::WAIT(0);
		}
		checkpoint(0, "stage 0: reached ambush", 0, 0, 0, 1);
		iLocal_1474 = 0;
		func_212(0);
	}
	iLocal_1475 = 0;
	GlobalFunc_5198(92);
}



void checkpoint(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x10470
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
		if (iParam0 != Global_Current_Checkpoint)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_Current_Checkpoint)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		GlobalFunc_174(1);
		if (iParam0 <= Global_Current_Checkpoint)
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
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_Current_Checkpoint, iParam0);
		}
		else
		{
			iVar5 = GlobalFunc_7703(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar5 != -1)
			{
				Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {GlobalFunc_44(iVar5)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar6, 0, Global_Current_Checkpoint, iParam0);
			}
			else
			{
				iVar10 = GlobalFunc_547(&(Global_Mission_Fail_State.Failed_Script_Name));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_Current_Checkpoint = iParam0;
		GlobalFunc_10923(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_Current_Checkpoint)
	{
	}
}




















































int func_306()//Position - 0x167E7
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(Local_93[0 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
			Local_93[0 /*2*/] = Global_86864[0];
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_86864[0], 0);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_93[0 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			GlobalFunc_743(Local_93[0 /*2*/], 0);
			ENTITY::RESET_ENTITY_ALPHA(Local_93[0 /*2*/]);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_93[1 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[1], 1, 1);
			Local_93[1 /*2*/] = Global_86864[1];
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_86864[1], 0);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_93[1 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			ENTITY::RESET_ENTITY_ALPHA(Local_93[1 /*2*/]);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_93[2 /*2*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[2], 1, 1);
			Local_93[2 /*2*/] = Global_86864[2];
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Global_86864[2], 0);
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_93[2 /*2*/], "PS_PREP_VEHICLES_GROUP", 0);
			ENTITY::RESET_ENTITY_ALPHA(Local_93[2 /*2*/]);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_110[4 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
			Local_110[4 /*14*/] = Global_86864.f_9[0];
			GlobalFunc_593(Local_110[4 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_110[0 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[2], 1, 1);
			Local_110[0 /*14*/] = Global_86864.f_9[2];
			GlobalFunc_593(Local_110[0 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_110[1 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[3], 1, 1);
			Local_110[1 /*14*/] = Global_86864.f_9[3];
			GlobalFunc_593(Local_110[1 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_110[2 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[4]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[4], 1, 1);
			Local_110[2 /*14*/] = Global_86864.f_9[4];
			GlobalFunc_593(Local_110[2 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_110[3 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[5]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[5], 1, 1);
			Local_110[3 /*14*/] = Global_86864.f_9[5];
			GlobalFunc_593(Local_110[3 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_110[5 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[6]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[6], 1, 1);
			Local_110[5 /*14*/] = Global_86864.f_9[6];
			GlobalFunc_593(Local_110[5 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_110[6 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[7]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[7], 1, 1);
			Local_110[6 /*14*/] = Global_86864.f_9[7];
			GlobalFunc_593(Local_110[6 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_110[7 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[8]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[8], 1, 1);
			Local_110[7 /*14*/] = Global_86864.f_9[8];
			GlobalFunc_593(Local_110[7 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_110[8 /*14*/]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[9]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[9], 1, 1);
			Local_110[8 /*14*/] = Global_86864.f_9[9];
			GlobalFunc_593(Local_110[8 /*14*/], 0);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_107[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[0], 1, 1);
			uLocal_107[0] = Global_86864.f_28[0];
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_107[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_28[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_28[1], 1, 1);
			uLocal_107[1] = Global_86864.f_28[1];
		}
	}
	iVar0 = 0;
	while (iVar0 <= (9 - 1))
	{
		if (GlobalFunc_2773(Local_110[iVar0 /*14*/]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_110[iVar0 /*14*/], iLocal_492);
			ENTITY::RESET_ENTITY_ALPHA(Local_110[iVar0 /*14*/]);
		}
		iVar0++;
	}
	cLocal_474 = { Global_87265 };
	StringCopy(&Global_87265, "", 64);
	GlobalFunc_786(228, 0f, 0f, 2000f);
	if (((((((((((((ENTITY::DOES_ENTITY_EXIST(Local_93[0 /*2*/]) && ENTITY::DOES_ENTITY_EXIST(Local_93[1 /*2*/])) && ENTITY::DOES_ENTITY_EXIST(Local_93[2 /*2*/])) && ENTITY::DOES_ENTITY_EXIST(Local_110[4 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_110[0 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_110[1 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_110[2 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_110[3 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_110[5 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_110[6 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_110[7 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(Local_110[8 /*14*/])) && ENTITY::DOES_ENTITY_EXIST(uLocal_107[0])) && ENTITY::DOES_ENTITY_EXIST(uLocal_107[1]))
	{
		return 1;
	}
	return 0;
}




void func_310()//Position - 0x16E11
{
	GlobalFunc_5652(&Local_402, 1, 0);
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (GlobalFunc_2773(Local_100[iLocal_446 /*2*/]))
		{
			if (Local_100[iLocal_446 /*2*/] != PLAYER::PLAYER_PED_ID())
			{
				PED::SET_PED_KEEP_TASK(Local_100[iLocal_446 /*2*/], 1);
				GlobalFunc_132(&(Local_100[iLocal_446 /*2*/]), 1, 0, 1);
			}
			if (HUD::DOES_BLIP_EXIST(Local_100[iLocal_446 /*2*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_100[iLocal_446 /*2*/].f_1));
			}
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (9 - 1))
	{
		if (GlobalFunc_2773(Local_110[iLocal_446 /*14*/]))
		{
			GlobalFunc_132(&(Local_110[iLocal_446 /*14*/]), 1, 0, 1);
			if (HUD::DOES_BLIP_EXIST(Local_110[iLocal_446 /*14*/].f_1))
			{
				HUD::REMOVE_BLIP(&(Local_110[iLocal_446 /*14*/].f_1));
			}
			GlobalFunc_589(&(Local_110[iLocal_446 /*14*/].f_2));
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (2 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_107[iLocal_446]))
		{
			GlobalFunc_129(&(uLocal_107[iLocal_446]), 0);
		}
		iLocal_446++;
	}
	iLocal_446 = 0;
	while (iLocal_446 <= (3 - 1))
	{
		if (GlobalFunc_2773(Local_93[iLocal_446 /*2*/]))
		{
			GlobalFunc_131(&(Local_93[iLocal_446 /*2*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_93[iLocal_446 /*2*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_93[iLocal_446 /*2*/].f_1));
		}
		iLocal_446++;
	}
	GlobalFunc_563(0);
	HUD::CLEAR_PRINTS();
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	GlobalFunc_771();
	if (GlobalFunc_2773(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_444, 0);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	HUD::DISPLAY_RADAR(1);
	HUD::DISPLAY_HUD(1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(10, 1);
	MISC::ENABLE_DISPATCH_SERVICE(9, 1);
	MISC::_0xD9F692D349249528();
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(33.8865f, 3596.518f, 1383.51f) - Vector(1f, 5f, 5f), Vector(33.8865f, 3596.518f, 1383.51f) + Vector(2f, 5f, 5f), 1, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("crusader"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("barracks"), 0);
	iLocal_433 = 0;
	bLocal_455 = false;
	PLAYER::SET_POLICE_RADAR_BLIPS(1);
	GlobalFunc_4948(&Local_81, 0, 0);
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}






