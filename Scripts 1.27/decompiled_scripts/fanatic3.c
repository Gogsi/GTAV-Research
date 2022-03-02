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
	struct<3> Local_21 = { 0, 0, 0 } ;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	int iLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	struct<61> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167 = 0;
	int iLocal_168 = 0;
	struct<3> Local_169 = { 0, 0, 0 } ;
	float fLocal_172 = 0f;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	int iLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	struct<3> Local_181[7];
	struct<3> Local_203[11];
	struct<3> Local_237[11];
	struct<3> Local_271 = { 0, 0, 0 } ;
	struct<3> Local_274 = { 0, 0, 0 } ;
	struct<3> Local_277 = { 0, 0, 0 } ;
	struct<3> Local_280 = { 0, 0, 0 } ;
	float fLocal_283 = 0f;
	float fLocal_284 = 0f;
	float fLocal_285 = 0f;
	float fLocal_286 = 0f;
	struct<3> Local_287 = { 0, 0, 0 } ;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	char* sLocal_307 = NULL;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	int iLocal_325 = 0;
	int iLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	int iLocal_330 = 0;
	int iLocal_331 = 0;
	int iLocal_332 = 0;
	int iLocal_333 = 0;
	int iLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	bool bLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	bool bLocal_346 = 0;
	int iLocal_347 = 0;
	struct<3> Local_348 = { 0, 0, 0 } ;
	struct<3> Local_351 = { 0, 0, 0 } ;
	float fLocal_354 = 0f;
	int iLocal_355 = 0;
	int iLocal_356 = 0;
	float fLocal_357 = 0f;
	float fLocal_358 = 0f;
	float fLocal_359 = 0f;
	float fLocal_360 = 0f;
	float fLocal_361 = 0f;
	int iLocal_362 = 0;
	int iLocal_363 = 0;
	int iLocal_364 = 0;
	var uLocal_365 = 0;
	int iLocal_366 = 0;
	struct<7> Local_367[5];
	var uLocal_403 = 16;
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
	var uLocal_568 = 16;
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
	var uLocal_733 = 15;
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
	var uLocal_785 = 15;
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
	float fLocal_837 = 0f;
	var uLocal_838 = 0;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_81 = 1;
	iLocal_82 = 65;
	iLocal_83 = 49;
	iLocal_84 = 64;
	uLocal_88 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_89 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_91 = GlobalFunc_4946(61);
	iLocal_156 = -1;
	iLocal_159 = joaat("scorcher");
	iLocal_160 = joaat("a_c_retriever");
	Local_169 = { 87.43864f, 7032.115f, 12.04437f };
	fLocal_172 = 151.459f;
	Local_271 = { -909.0488f, 6142.617f, 4.2883f };
	Local_274 = { -673.7409f, 6138.096f, 1.0698f };
	Local_277 = { 51.9898f, 6768.965f, 19.7661f };
	Local_280 = { 64.17f, 7048.68f, 15.61f };
	fLocal_283 = 270.65f;
	fLocal_284 = 264.38f;
	fLocal_285 = 313.15f;
	fLocal_286 = 195.495f;
	iLocal_292 = 180;
	iLocal_303 = 1;
	iLocal_309 = -1;
	iLocal_330 = 1;
	Local_348 = { -222.0532f, 6535.53f, 2.351944f };
	Local_351 = { -638.4162f, 6057.34f, 26.19158f };
	fLocal_354 = 176.25f;
	fLocal_357 = 30f;
	fLocal_358 = 0.35f;
	fLocal_359 = 0f;
	fLocal_360 = 0.1f;
	fLocal_361 = 0.075f;
	Local_95 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_95);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10102(1);
		func_506();
	}
	if (GlobalFunc_199())
	{
		iVar0 = GlobalFunc_198();
		if (Global_84544 == 1)
		{
			iVar0++;
		}
		if (iVar0 == 0)
		{
			Global_68490 = 1;
			iLocal_90 = 0;
			while (!func_496(&Local_95))
			{
				SYSTEM::WAIT(0);
			}
			Global_68490 = 0;
		}
		GlobalFunc_4923(&Local_95, 0, 1);
	}
	func_494();
	if (!GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
	}
	GlobalFunc_601(2, 1);
	GlobalFunc_601(3, 1);
	GlobalFunc_8535();
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_EDF", 0);
		SYSTEM::WAIT(0);
		func_474(Local_95.f_9, 1, 0, 0, 0, 0);
		GlobalFunc_5964();
		switch (iLocal_156)
		{
			case -1:
				func_471();
				break;
			
			case 0:
				func_436();
				break;
			
			case 1:
				func_430();
				break;
			
			case 2:
				func_427();
				break;
			
			case 3:
				func_363();
				break;
			
			case 4:
				func_350();
				break;
			
			case 5:
				func_265();
				break;
			
			case 8:
				func_263();
				break;
			
			case 6:
				func_11();
				break;
			
			case 7:
				func_1();
				break;
		}
	}
}

void func_1()//Position - 0x2C8
{
	char* sVar0;
	
	switch (iLocal_316)
	{
		case 0:
			GlobalFunc_146(&iLocal_296);
			GlobalFunc_146(&iLocal_293);
			GlobalFunc_146(&iLocal_295);
			GlobalFunc_146(&iLocal_294);
			GRAPHICS::DELETE_CHECKPOINT(iLocal_290);
			HUD::CLEAR_PRINTS();
			AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_FAIL");
			switch (iLocal_317)
			{
				case 0:
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_GENERIC");
					break;
				
				case 1:
					sVar0 = "FATIC3_11";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_BIKE_DESTROYED");
					break;
				
				case 2:
					sVar0 = "FATIC3_YOURBIKE";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_BIKE_DESTROYED");
					break;
				
				case 3:
					sVar0 = "FATIC3_16";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_OUT_OF_TIME");
					break;
				
				case 4:
					sVar0 = "FATIC3_8";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_LOST_RACE");
					break;
				
				case 5:
					sVar0 = "FATIC3_7";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_WOMAN_DIED");
					break;
				
				case 6:
					sVar0 = "FATIC3_10";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_WOMAN_HURT");
					break;
				
				case 7:
					sVar0 = "FATIC3_13";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_WOMAN_SCARED");
					break;
				
				case 9:
					sVar0 = "FATIC3_14";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_LEFT_AREA");
					break;
			}
			if (iLocal_317 == 0)
			{
				GlobalFunc_10102(1);
			}
			else
			{
				GlobalFunc_10700(sVar0, 1);
			}
			iLocal_316 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_2();
				func_506();
			}
			break;
	}
}

void func_2()//Position - 0x40A
{
	GlobalFunc_146(&iLocal_296);
	GlobalFunc_146(&iLocal_293);
	GlobalFunc_146(&iLocal_295);
	GlobalFunc_146(&iLocal_294);
	GRAPHICS::DELETE_CHECKPOINT(iLocal_290);
	GlobalFunc_6692(&iLocal_165);
	GlobalFunc_69(&iLocal_173);
	GlobalFunc_69(&iLocal_174);
	GlobalFunc_6692(&iLocal_166);
	GlobalFunc_6692(&iLocal_167);
	GlobalFunc_69(&iLocal_175);
	GlobalFunc_69(&iLocal_306);
	GlobalFunc_6692(&iLocal_161);
	GlobalFunc_6692(&iLocal_162);
}









void func_11()//Position - 0x61E
{
	switch (iLocal_315)
	{
		case 0:
			GlobalFunc_2838("WAITING FOR OUTRO ASSETS");
			STREAMING::REQUEST_ANIM_DICT("rcmfanatic3leadinoutef_3_mcs_1");
			iLocal_347 = 0;
			bLocal_346 = false;
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic3leadinoutef_3_mcs_1"))
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				GlobalFunc_6692(&iLocal_168);
				if (!GlobalFunc_4947(iLocal_168))
				{
					GlobalFunc_6692(&iLocal_168);
					iLocal_168 = VEHICLE::CREATE_VEHICLE(joaat("scorcher"), Local_169, fLocal_172, 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_168, Local_169, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_168, fLocal_172);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168);
				}
				iLocal_315++;
				GlobalFunc_2838("DOING OUTRO");
			}
			break;
		
		case 1:
			uLocal_838 = CAM::CREATE_CAM_WITH_PARAMS("DEFAULT_ANIMATED_CAMERA", 71.2335f, 7032.092f, 25.1157f, -2.4036f, 0f, 17.3552f, 25f, 0, 2);
			iLocal_315++;
			MISC::CLEAR_AREA_OF_PEDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 25f, 0);
			GlobalFunc_2838("Going to case 2");
			break;
		
		case 2:
			if (GlobalFunc_115(iLocal_306))
			{
				TASK::CLEAR_PED_TASKS(iLocal_306);
				GlobalFunc_2838("*** Clearing Mary Ann tasks (Cutscene)");
				if (bLocal_346)
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_306, 64.0768f, 7045.163f, 14.9558f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_306, 70.469f);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_306, 65.61f, 7038.87f, 13.69f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_306, 13.469f);
				}
				if (bLocal_346)
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
					TASK::TASK_PLAY_ANIM(0, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann", 8f, -4f, -1, 0, 0.164f, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
					TASK::TASK_PLAY_ANIM(0, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann", 8f, -4f, -1, 0, 0, 0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
				}
				TASK::TASK_PERFORM_SEQUENCE(iLocal_306, uLocal_365);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
					GlobalFunc_5705(PLAYER::PLAYER_PED_ID(), Local_280, fLocal_286, 1, 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				CAM::PLAY_CAM_ANIM(uLocal_838, "leadout_ef_3_mcs_maryann_cam", "rcmfanatic3leadinoutef_3_mcs_1", ENTITY::GET_ENTITY_COORDS(iLocal_306, 1), ENTITY::GET_ENTITY_ROTATION(iLocal_306, 2), 0, 2);
				CAM::SET_CAM_ACTIVE(uLocal_838, 1);
			}
			RECORDING::_0x48621C9FCA3EBD28(1);
			func_245();
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			GlobalFunc_79(500, 0);
			GlobalFunc_173(&uLocal_403, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			GlobalFunc_173(&uLocal_403, 3, iLocal_306, "MARYANN", 0, 1);
			TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_306, -1, 0, 2);
			SYSTEM::WAIT(1000);
			if (GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_2", 8, 0, 0, 0))
			{
				iLocal_318 = MISC::GET_GAME_TIMER();
				iLocal_315++;
				GlobalFunc_2838("Going to case 3");
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - iLocal_318) < 3000)
			{
				if (GlobalFunc_4926(1000))
				{
					GlobalFunc_2350(500, 1);
					if (GlobalFunc_115(iLocal_306))
					{
						TASK::CLEAR_PED_TASKS(iLocal_306);
					}
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					GlobalFunc_2838("Intro skip case 3");
					SYSTEM::WAIT(750);
					func_218(1);
					func_12();
				}
			}
			else
			{
				iLocal_318 = MISC::GET_GAME_TIMER();
				iLocal_315++;
				GlobalFunc_2838("Going to case 4");
			}
			break;
		
		case 4:
			if ((MISC::GET_GAME_TIMER() - iLocal_318) < 10000)
			{
				if (GlobalFunc_4926(1000))
				{
					GlobalFunc_2350(500, 1);
					if (GlobalFunc_115(iLocal_306))
					{
						TASK::CLEAR_PED_TASKS(iLocal_306);
					}
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					GlobalFunc_2838("Intro skip case 4");
					SYSTEM::WAIT(750);
					func_218(1);
					func_12();
				}
			}
			else
			{
				iLocal_315++;
				GlobalFunc_2838("Going to case 5");
			}
			break;
		
		case 5:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (GlobalFunc_4926(1000))
				{
					GlobalFunc_2350(500, 1);
					if (GlobalFunc_115(iLocal_306))
					{
						TASK::CLEAR_PED_TASKS(iLocal_306);
					}
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					GlobalFunc_2838("Intro skip case 5");
					SYSTEM::WAIT(750);
					func_218(1);
					func_12();
				}
				if (GlobalFunc_115(iLocal_306))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_306, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_306, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann") >= 0.9f)
						{
							iLocal_315++;
							GlobalFunc_2838("Going to case 6");
						}
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_306, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann") >= 0.98f)
						{
							if (iLocal_347 == 0)
							{
								if (GlobalFunc_4947(iLocal_168))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
									TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_168, -2.5f, 0f, 0f), 2f, 20000, 1193033728, 1056964608);
									TASK::TASK_ENTER_VEHICLE(0, iLocal_168, 20000, -1, 2f, 1, 0);
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_168, 104.65f, 7003.12f, 6.43f, 4, 10f, 262144, 1f, -1f, 1);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_168, 15f, 786599);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_306, uLocal_365);
									PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_306, 1, 0);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
									iLocal_347 = 1;
								}
							}
						}
					}
					else if (iLocal_347 == 0)
					{
						if (GlobalFunc_4947(iLocal_168))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
							TASK::TASK_GO_STRAIGHT_TO_COORD(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_168, -2.5f, 0f, 0f), 2f, 20000, 1193033728, 1056964608);
							TASK::TASK_ENTER_VEHICLE(0, iLocal_168, 20000, -1, 2f, 1, 0);
							TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_168, 104.65f, 7003.12f, 6.43f, 4, 10f, 262144, 1f, -1f, 1);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_168, 15f, 786599);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_306, uLocal_365);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_306, 1, 0);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
							iLocal_347 = 1;
						}
					}
				}
			}
			else
			{
				func_218(0);
				RECORDING::_0x81CBAE94390F9F89();
				func_12();
			}
			break;
		
		case 6:
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (GlobalFunc_4926(1000))
				{
					GlobalFunc_2350(500, 1);
					if (GlobalFunc_115(iLocal_306))
					{
						TASK::CLEAR_PED_TASKS(iLocal_306);
					}
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					GlobalFunc_2838("Intro skip case 6");
					SYSTEM::WAIT(750);
					func_218(1);
					func_12();
				}
				if (GlobalFunc_115(iLocal_306))
				{
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_306, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann", 3))
					{
						if (iLocal_347 == 0)
						{
							if (GlobalFunc_4947(iLocal_168))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, 86.6f, 7032.51f, 11.35f, 2f, 20000, 1193033728, 1.5f);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_168, 20000, -1, 2f, 1, 0);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_168, 104.65f, 7003.12f, 6.43f, 4, 10f, 262144, 1f, -1f, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_306, uLocal_365);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_306, 1, 0);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
								iLocal_347 = 1;
							}
						}
					}
					else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_306, "rcmfanatic3leadinoutef_3_mcs_1", "leadout_ef_3_mcs_maryann") >= 0.98f)
					{
						if (iLocal_347 == 0)
						{
							if (GlobalFunc_4947(iLocal_168))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
								TASK::TASK_GO_STRAIGHT_TO_COORD(0, 86.6f, 7032.51f, 11.35f, 2f, 20000, 1193033728, 1.5f);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_168, 20000, -1, 2f, 1, 0);
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_168, 104.65f, 7003.12f, 6.43f, 4, 10f, 262144, 1f, -1f, 1);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_306, uLocal_365);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_306, 1, 0);
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
								iLocal_347 = 1;
							}
						}
					}
				}
			}
			else
			{
				SYSTEM::WAIT(500);
				func_218(0);
				func_12();
			}
			break;
	}
}

void func_12()//Position - 0xDEF
{
	if (iLocal_331 == 0)
	{
		GlobalFunc_553(766);
	}
	GlobalFunc_702(0, 0, 1);
	func_215();
	func_214();
	func_22(87, 1);
	GlobalFunc_9621(61, 1, 1);
	func_506();
}










void func_22(int iParam0, bool bParam1)//Position - 0x128B
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8537();
	if (iVar0 == -1)
	{
		return;
	}
	if (!Global_96440[iVar0 /*10*/].f_4)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_5)
	{
		return;
	}
	if (Global_96440[iVar0 /*10*/].f_6)
	{
		return;
	}
	GlobalFunc_9620(iVar0, 0);
	MISC::SET_BIT(&Global_68493, 1);
	if (Global_96440[iVar0 /*10*/].f_9 == -1)
	{
	}
	else
	{
		GlobalFunc_54(&(Global_96440[iVar0 /*10*/].f_9));
	}
	if (bParam1)
	{
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	GlobalFunc_8949(iVar0, 1, 0, 0);
	GlobalFunc_45(0, 0);
	MemCopy(&uVar1, {GlobalFunc_4918(iVar0)}, 4);
	GlobalFunc_43(&uVar1, GlobalFunc_8310());
	GlobalFunc_11303();
	if (MISC::IS_BIT_SET(Global_SAVE_DATA.FLOW_CUSTOM_STRUCT.spInitBitset, 3))
	{
		GlobalFunc_18();
	}
	GlobalFunc_8306();
	if (iParam0 == 210 || iParam0 == 211)
	{
		GlobalFunc_7610(iParam0, 406.38f, -1635.86f);
	}
	else if (iParam0 == 111)
	{
		GlobalFunc_7610(iParam0, 1973.84f, 3814.89f);
	}
	else if (iParam0 != 322)
	{
		GlobalFunc_7610(iParam0, 0, 0);
	}
	GlobalFunc_4907();
}
































































































































































































void func_214()//Position - 0x25ACF
{
	GRAPHICS::DELETE_CHECKPOINT(iLocal_290);
}

void func_215()//Position - 0x25ADE
{
	GlobalFunc_146(&iLocal_293);
	GlobalFunc_146(&iLocal_294);
}



void func_218(int iParam0)//Position - 0x25B96
{
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
	}
	if (iLocal_347 == 0)
	{
		if (GlobalFunc_115(iLocal_306) && GlobalFunc_4947(iLocal_168))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
			TASK::TASK_ENTER_VEHICLE(0, iLocal_168, 20000, -1, 2f, 1, 0);
			TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, iLocal_168, 104.65f, 7003.12f, 6.43f, 4, 10f, 262144, 1f, -1f, 1);
			TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_168, 15f, 786599);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_306, uLocal_365);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
			TASK::TASK_CLEAR_LOOK_AT(iLocal_306);
			PED::FORCE_PED_MOTION_STATE(iLocal_306, -530524, 0, 0, 0);
		}
	}
	if (GlobalFunc_115(iLocal_306))
	{
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_306, 0);
	}
	if (iParam0 == 0)
	{
		CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
	}
	else
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic1out_of_breath");
	GlobalFunc_2297(&iLocal_306, 1, 0, 1);
	GlobalFunc_190(&iLocal_168);
	func_219(1, 1, 1, 1);
	GlobalFunc_79(500, 1);
}

void func_219(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x25CBF
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
	GlobalFunc_8380(0, 1, 0, 0);
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
		if ((iLocal_35 != 0 && iLocal_35 != joaat("object")) && iLocal_35 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_35, 0);
				}
			}
		}
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}


























void func_245()//Position - 0x26754
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, 1, 0, 0);
	}
	GlobalFunc_9805(62.86098f, 7052.179f, 21.1989f, 67.86642f, 7037.953f, 12.46974f, 13f, 84.29f, 7038.63f, 12.66f, 267.13f, GlobalFunc_625(), 1, 1, 1, 0, 0);
	func_246(200.53f, 6626.14f, 30.56f, 1, 1, 0, 1, 1, 0, 1, 1, 1, 1);
}

void func_246(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x267E1
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
	{
		GlobalFunc_9249(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						GlobalFunc_11254(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_35 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_35 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}

















void func_263()//Position - 0x2747C
{
	switch (iLocal_158)
	{
		case 0:
			GlobalFunc_2838("DOING LOST SETUP");
			iLocal_158 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				iLocal_158 = 2;
			}
			else
			{
				GlobalFunc_2838("Waiting for Lost race convo to finish...");
			}
			break;
		
		case 2:
			func_264(4);
			break;
	}
}

void func_264(int iParam0)//Position - 0x274CC
{
	GlobalFunc_2838("MISSION_FAILED CALLED!");
	switch (iParam0)
	{
		case 0:
			GlobalFunc_2838("MISSION_FAILED reason=FAILED_GENERIC");
			break;
		
		case 1:
			GlobalFunc_2838("MISSION_FAILED reason=FAILED_BIKE_DESTROYED");
			break;
		
		case 2:
			GlobalFunc_2838("MISSION_FAILED reason=FAILED_BIKE_DESTROYED");
			break;
		
		case 3:
			GlobalFunc_2838("MISSION_FAILED reason=FAILED_OUT_OF_TIME");
			break;
		
		case 4:
			GlobalFunc_2838("MISSION_FAILED reason=FAILED_LOST_RACE");
			break;
		
		case 5:
			GlobalFunc_2838("MISSION_FAILED reason=FAILED_WOMAN_DIED");
			break;
		
		case 6:
			GlobalFunc_2838("MISSION_FAILED reason=FAILED_WOMAN_HURT");
			break;
		
		case 7:
			GlobalFunc_2838("MISSION_FAILED reason=FAILED_WOMAN_SCARED");
			break;
		
		case 9:
			GlobalFunc_2838("MISSION_FAILED reason=FAILED_LEFT_AREA");
			break;
	}
	iLocal_317 = iParam0;
	iLocal_156 = 7;
}

void func_265()//Position - 0x2757F
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_337();
	func_310();
	func_307();
	func_306();
	func_304();
	func_301();
	func_300();
	func_299();
	func_296();
	func_295();
	func_271();
	if (iLocal_291 != 0)
	{
		iLocal_292 = (iLocal_292 - 25);
		if (iLocal_292 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_291, uVar0, uVar1, uVar2, iLocal_292);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_291, uVar0, uVar1, uVar2, iLocal_292);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_291);
		}
	}
	switch (iLocal_158)
	{
		case 0:
			GlobalFunc_2838("DOING RUN SETUP");
			iLocal_158 = 1;
			iLocal_344 = 0;
			iLocal_340 = 0;
			STREAMING::REQUEST_ANIM_DICT("rcmfanatic3leadinoutef_3_mcs_1");
			GlobalFunc_2838("DOING RUN RUNNING");
			break;
		
		case 1:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_237[iLocal_300 /*3*/], 1) > 75f)
			{
				if (!iLocal_344)
				{
					GlobalFunc_527("FATIC3_15", 7500, 1);
					iLocal_344 = 1;
				}
			}
			else
			{
				iLocal_344 = 0;
			}
			if (func_266(&Local_237))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic3leadinoutef_3_mcs_1", "Fra_outofbreath_intro", 2f, -8f, -1, 0, 0, 0, 0, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_STOP");
				GlobalFunc_702(1, 0, 1);
				iLocal_321 = 1;
				iLocal_158 = 2;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic3leadinoutef_3_mcs_1", "Fra_outofbreath_intro", 3))
			{
				if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "rcmfanatic3leadinoutef_3_mcs_1", "Fra_outofbreath_intro") >= 0.9f)
				{
					GlobalFunc_2838("Player done lead-out info");
					iLocal_156 = 6;
				}
			}
			else
			{
				GlobalFunc_2838("Player not playing anim, cut to outro");
				iLocal_156 = 6;
			}
			break;
	}
}

int func_266(var uParam0)//Position - 0x27713
{
	struct<3> Var0;
	float fVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	struct<3> Var7;
	float fVar10;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	var uVar20;
	var uVar21;
	var uVar22;
	int iVar23;
	float fVar24;
	var uVar25;
	var uVar26;
	var uVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	var uVar31;
	var uVar32;
	var uVar33;
	int iVar34;
	float fVar35;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, *(uParam0[iLocal_300 /*3*/]), 0);
	if (fVar3 < 5.5f)
	{
		GlobalFunc_146(&iLocal_293);
		GlobalFunc_146(&iLocal_294);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
		if (iLocal_290 != 0)
		{
			GlobalFunc_2838("Create prev CP");
			HUD::GET_HUD_COLOUR(1, &uVar4, &uVar5, &uVar6, &iLocal_292);
			iLocal_292 = 180;
			Var7 = { *(uParam0[iLocal_300 /*3*/]) };
			switch (iLocal_156)
			{
				case 1:
					if (iLocal_300 == (iLocal_299 - 1))
					{
						Var7 = { Var7 + Vector(1.7f, 0f, 0f) };
					}
					else
					{
						if (iLocal_300 == 6)
						{
							fVar10 = 1.5f;
						}
						else
						{
							fVar10 = 0.4f;
						}
						Var7 = { Var7 + Vector(fVar10, 0f, 0f) };
					}
					break;
				
				case 3:
					if (iLocal_300 == (iLocal_299 - 1))
					{
						Var7 = { Var7 + Vector(1.7f, 0f, 0f) };
					}
					else
					{
						Var7 = { Var7 + Vector(2f, 0f, 0f) };
					}
					break;
				
				case 5:
					if (iLocal_300 == (iLocal_299 - 1))
					{
						Var7 = { Var7 + Vector(1.7f, 0f, 0f) };
					}
					else
					{
						Var7 = { Var7 + Vector(2f, 0f, 0f) };
					}
					break;
			}
			if (iLocal_300 == (iLocal_299 - 1))
			{
				Var11 = { *(uParam0[iLocal_300 /*3*/]) };
				iLocal_291 = GRAPHICS::CREATE_CHECKPOINT(9, Var7, Var11, 3.2f, uVar4, uVar5, uVar6, iLocal_292, 0);
			}
			else
			{
				Var14 = { *(uParam0[iLocal_300 + 1 /*3*/]) };
				if (iLocal_156 == 1 && iLocal_300 == 0)
				{
					Var7 = { *(uParam0[iLocal_300 /*3*/]) + Vector(2f, 0f, 0f) };
					iLocal_291 = GRAPHICS::CREATE_CHECKPOINT(5, Var7, Var14, 3.2f, iVar4, iVar5, iVar6, iLocal_292, 0);
				}
				else if (iLocal_156 == 3 && iLocal_300 == 0)
				{
					Var7 = { Var7 - Vector(0.3f, 0f, 0f) };
					iLocal_291 = GRAPHICS::CREATE_CHECKPOINT(6, Var7, Var14, 3.2f, iVar4, iVar5, iVar6, iLocal_292, 0);
				}
				else
				{
					iLocal_291 = GRAPHICS::CREATE_CHECKPOINT(func_269(iLocal_300, uParam0), Var7, Var14, 3.2f, iVar4, iVar5, iVar6, iLocal_292, 0);
				}
			}
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_291, iVar4, iVar5, iVar6, iLocal_292);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_291, iVar4, iVar5, iVar6, iLocal_292);
		}
		GRAPHICS::DELETE_CHECKPOINT(iLocal_290);
		iLocal_300++;
		if (iLocal_300 == iLocal_299)
		{
			return 1;
		}
		else
		{
			iLocal_293 = GlobalFunc_2324(*(uParam0[iLocal_300 /*3*/]), 5, 0);
			HUD::SET_BLIP_COLOUR(iLocal_293, 5);
			HUD::SET_BLIP_SCALE(iLocal_293, 1.2f);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_293, 0);
			if (iLocal_300 == (iLocal_299 - 1))
			{
				HUD::SET_BLIP_SPRITE(iLocal_293, 38);
			}
			if (iLocal_300 < (iLocal_299 - 1))
			{
				iLocal_294 = GlobalFunc_2324(*(uParam0[iLocal_300 + 1 /*3*/]), 5, 0);
				HUD::SET_BLIP_COLOUR(iLocal_294, 5);
				if (iLocal_300 == (iLocal_299 - 2))
				{
					HUD::SET_BLIP_SCALE(iLocal_294, 1.2f);
					HUD::SET_BLIP_SPRITE(iLocal_294, 38);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_294, 0);
				}
				else
				{
					HUD::SET_BLIP_SCALE(iLocal_294, 0.7f);
					HUD::SHOW_HEIGHT_ON_BLIP(iLocal_294, 0);
				}
			}
			if (iLocal_300 == (iLocal_299 - 1))
			{
				Var17 = { *(uParam0[iLocal_300 /*3*/]) };
				iLocal_305 = func_267(func_269(iLocal_300, uParam0));
				HUD::GET_HUD_COLOUR(iLocal_305, &uVar20, &uVar21, &uVar22, &iVar23);
				switch (iLocal_156)
				{
					case 1:
						iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(9, *(uParam0[iLocal_300 /*3*/]) + Vector(1.7f, 0f, 0f), Var17, 3.2f, uVar20, uVar21, uVar22, iVar23, 0);
						break;
					
					case 3:
						iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(9, *(uParam0[iLocal_300 /*3*/]) + Vector(1.7f, 0f, 0f), Var17, 3.2f, iVar20, iVar21, iVar22, iVar23, 0);
						break;
					
					case 5:
						iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(9, *(uParam0[iLocal_300 /*3*/]) + Vector(1.7f, 0f, 0f), Var17, 3.2f, iVar20, iVar21, iVar22, iVar23, 0);
						break;
				}
				HUD::GET_HUD_COLOUR(13, &iVar20, &iVar21, &iVar22, &iVar23);
				GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar20, iVar21, iVar22, iVar23);
				HUD::GET_HUD_COLOUR(134, &iVar20, &iVar21, &iVar22, &iVar23);
				GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar20, iVar21, iVar22, iVar23);
				GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_290, 1.6f, 1.6f, 100f);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					fVar24 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iLocal_300 /*3*/]), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
					if (iLocal_290 != 0)
					{
						if (fVar24 > 100f)
						{
							HUD::GET_HUD_COLOUR(13, &iVar20, &iVar21, &iVar22, &iVar23);
							iVar23 = 240;
							GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar20, iVar21, iVar22, iVar23);
							HUD::GET_HUD_COLOUR(134, &iVar20, &iVar21, &iVar22, &iVar23);
							iVar23 = 240;
							GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar20, iVar21, iVar22, iVar23);
						}
						else
						{
							HUD::GET_HUD_COLOUR(13, &iVar20, &iVar21, &iVar22, &iVar23);
							iVar23 = SYSTEM::ROUND((fVar24 * 2.4f));
							if (iVar23 < 60)
							{
								iVar23 = 60;
							}
							GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar20, iVar21, iVar22, iVar23);
							HUD::GET_HUD_COLOUR(134, &iVar20, &iVar21, &iVar22, &iVar23);
							iVar23 = SYSTEM::ROUND((fVar24 * 2.4f));
							if (iVar23 < 60)
							{
								iVar23 = 60;
							}
							GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar20, iVar21, iVar22, iVar23);
						}
					}
				}
			}
			else
			{
				iLocal_305 = func_267(func_269(iLocal_300, uParam0));
				HUD::GET_HUD_COLOUR(iLocal_305, &uVar25, &uVar26, &uVar27, &iVar28);
				Var17 = { *(uParam0[iLocal_300 + 1 /*3*/]) };
				if (iLocal_156 == 1)
				{
					if (iLocal_300 == 6)
					{
						fVar29 = 1.5f;
					}
					else
					{
						fVar29 = 0.4f;
					}
					iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(func_269(iLocal_300, uParam0), *(uParam0[iLocal_300 /*3*/]) + Vector(fVar29, 0f, 0f), Var17, 3.2f, uVar25, uVar26, uVar27, iVar28, 0);
				}
				else if (iLocal_156 == 3)
				{
					iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(func_269(iLocal_300, uParam0), *(uParam0[iLocal_300 /*3*/]) + Vector(2f, 0f, 0f), Var17, 3.2f, iVar25, iVar26, iVar27, iVar28, 0);
				}
				else
				{
					iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(func_269(iLocal_300, uParam0), *(uParam0[iLocal_300 /*3*/]) + Vector(2f, 0f, 0f), Var17, 3.2f, iVar25, iVar26, iVar27, iVar28, 0);
				}
				HUD::GET_HUD_COLOUR(13, &iVar25, &iVar26, &iVar27, &iVar28);
				GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar25, iVar26, iVar27, iVar28);
				HUD::GET_HUD_COLOUR(134, &iVar25, &iVar26, &iVar27, &iVar28);
				GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar25, iVar26, iVar27, iVar28);
				GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_290, 1.6f, 1.6f, 100f);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					fVar30 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iLocal_300 /*3*/]), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
					if (iLocal_290 != 0)
					{
						if (fVar30 > 100f)
						{
							HUD::GET_HUD_COLOUR(13, &iVar25, &iVar26, &iVar27, &iVar28);
							iVar28 = 240;
							GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar25, iVar26, iVar27, iVar28);
							HUD::GET_HUD_COLOUR(134, &iVar25, &iVar26, &iVar27, &iVar28);
							iVar28 = 240;
							GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar25, iVar26, iVar27, iVar28);
						}
						else
						{
							HUD::GET_HUD_COLOUR(13, &iVar25, &iVar26, &iVar27, &iVar28);
							iVar28 = SYSTEM::ROUND((fVar30 * 2.4f));
							if (iVar28 < 60)
							{
								iVar28 = 60;
							}
							GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar25, iVar26, iVar27, iVar28);
							HUD::GET_HUD_COLOUR(134, &iVar25, &iVar26, &iVar27, &iVar28);
							iVar28 = SYSTEM::ROUND((fVar30 * 2.4f));
							if (iVar28 < 60)
							{
								iVar28 = 60;
							}
							GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar25, iVar26, iVar27, iVar28);
						}
					}
				}
			}
		}
	}
	else
	{
		iLocal_305 = func_267(func_269(iLocal_300, uParam0));
		HUD::GET_HUD_COLOUR(iLocal_305, &uVar31, &uVar32, &uVar33, &iVar34);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iLocal_300 /*3*/]), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
			if (iLocal_290 != 0)
			{
				if (fVar35 > 100f)
				{
					HUD::GET_HUD_COLOUR(13, &uVar31, &uVar32, &uVar33, &iVar34);
					iVar34 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, uVar31, uVar32, uVar33, iVar34);
					HUD::GET_HUD_COLOUR(134, &iVar31, &iVar32, &iVar33, &iVar34);
					iVar34 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar31, iVar32, iVar33, iVar34);
				}
				else
				{
					HUD::GET_HUD_COLOUR(13, &iVar31, &iVar32, &iVar33, &iVar34);
					iVar34 = SYSTEM::ROUND((fVar35 * 2.4f));
					if (iVar34 < 60)
					{
						iVar34 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar31, iVar32, iVar33, iVar34);
					HUD::GET_HUD_COLOUR(134, &iVar31, &iVar32, &iVar33, &iVar34);
					iVar34 = SYSTEM::ROUND((fVar35 * 2.4f));
					if (iVar34 < 60)
					{
						iVar34 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar31, iVar32, iVar33, iVar34);
				}
			}
		}
	}
	return 0;
}

int func_267(int iParam0)//Position - 0x27F6B
{
	iParam0 = iParam0;
	return 13;
}


int func_269(int iParam0, var uParam1)//Position - 0x27FA7
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	
	fVar16 = 180f;
	fVar17 = 140f;
	fVar18 = 80f;
	Var0 = { *(uParam1[iParam0 /*3*/]) };
	if (iParam0 == (iLocal_299 - 1))
	{
		switch (iLocal_156)
		{
			case 1:
				return 9;
				break;
			
			case 3:
				return 9;
				break;
			
			case 5:
				return 9;
				break;
		}
	}
	else if (iParam0 == 0)
	{
		switch (iLocal_156)
		{
			case 1:
				Var6 = { 64.17f, 7048.68f, 15.6112f };
				break;
			
			case 3:
				Var6 = { Local_181[6 /*3*/] };
				break;
			
			case 5:
				Var6 = { Local_203[10 /*3*/] };
				break;
		}
		Var3 = { *(uParam1[iParam0 + 1 /*3*/]) };
	}
	else
	{
		Var6 = { *(uParam1[(iParam0 - 1) /*3*/]) };
		Var3 = { *(uParam1[iParam0 + 1 /*3*/]) };
	}
	Var9 = { Var6 - Var0 };
	Var12 = { Var3 - Var0 };
	fVar15 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var9.x, Var9.f_1, Var12.x, Var12.f_1);
	if (fVar15 > 180f)
	{
		fVar15 = (360f - fVar15);
	}
	switch (iLocal_156)
	{
		case 1:
			if (fVar15 < fVar18)
			{
				return 7;
			}
			else if (fVar15 < fVar17)
			{
				return 6;
			}
			else if (fVar15 < fVar16)
			{
				return 5;
			}
			else
			{
				return 5;
			}
			break;
		
		case 2:
		case 3:
			if (fVar15 < fVar18)
			{
				return 7;
			}
			else if (fVar15 < fVar17)
			{
				return 6;
			}
			else if (fVar15 < fVar16)
			{
				return 5;
			}
			else
			{
				return 5;
			}
			break;
		
		case 5:
			if (fVar15 < fVar18)
			{
				return 7;
			}
			else if (fVar15 < fVar17)
			{
				return 6;
			}
			else if (fVar15 < fVar16)
			{
				return 5;
			}
			else
			{
				return 5;
			}
			break;
	}
	return 5;
}


void func_271()//Position - 0x281A3
{
	struct<6> Var0;
	
	switch (iLocal_314)
	{
		case 0:
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 52.11f, 6965.68f, 9.73f, 5f))
				{
					iLocal_179 = PED::CREATE_PED(26, joaat("a_f_y_runner_01"), 56.3978f, 7015.165f, 8.8828f, 101.1728f, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_runner_01"));
					GlobalFunc_2838("*** Dog owner created");
					iLocal_314++;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_179))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_179))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_179, "fan3_ownerroute", 0, 0, -1);
					GlobalFunc_2838("*** Dog owner playing back recording");
					iLocal_314++;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_115(iLocal_179))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_179))
				{
					if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_179) < 16f)
					{
						if (!GlobalFunc_111())
						{
							GlobalFunc_173(&uLocal_568, 5, iLocal_179, "FAN3DOGOWNER", 0, 1);
							GlobalFunc_173(&uLocal_568, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							if (GlobalFunc_10618(&uLocal_568, "FAN3AUD", "FAN3_DOG", 7, 0, 0, 0))
							{
								TASK::TASK_LOOK_AT_ENTITY(iLocal_179, PLAYER::PLAYER_PED_ID(), 6000, 0, 2);
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_179, 6000, 0, 2);
								iLocal_314++;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (GlobalFunc_115(iLocal_179))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_179))
				{
					iLocal_314++;
				}
			}
			break;
		
		case 4:
			if (GlobalFunc_115(iLocal_179))
			{
				if (!GlobalFunc_111())
				{
					PED::SET_PED_KEEP_TASK(iLocal_179, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_179);
				}
			}
			break;
	}
	if (GlobalFunc_115(iLocal_179))
	{
		if (func_274(iLocal_179, 1, 1116471296, 1126825984, 0, 0, 0, 0) || PED::IS_PED_IN_COMBAT(iLocal_179, 0))
		{
			TASK::CLEAR_PED_TASKS(iLocal_179);
			TASK::TASK_SMART_FLEE_PED(iLocal_179, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			if (GlobalFunc_111())
			{
				Var0 = { GlobalFunc_560() };
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "FAN3_DOG"))
				{
					GlobalFunc_4956();
					GlobalFunc_173(&uLocal_568, 5, iLocal_179, "FAN3DOGOWNER", 0, 1);
					GlobalFunc_173(&uLocal_568, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_5157(&uLocal_568, "FAN3AUD", "FAN3_DSCARE", 7, 0, 0);
				}
			}
			else
			{
				GlobalFunc_173(&uLocal_568, 5, iLocal_179, "FAN3DOGOWNER", 0, 1);
				GlobalFunc_173(&uLocal_568, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				GlobalFunc_10618(&uLocal_568, "FAN3AUD", "FAN3_DSCARE", 7, 0, 0, 0);
			}
			iLocal_314 = 4;
		}
	}
}



int func_274(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x2846C
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8324(iParam0, bParam1, bParam5, bParam6, bParam7))
		{
			return 1;
		}
		if (!WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
				if ((((Var0.x * Var0.x) + (Var0.f_1 * Var0.f_1)) + (Var0.f_2 * Var0.f_2)) <= 5f)
				{
					return GlobalFunc_171(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_275(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_275(int iParam0, float fParam1)//Position - 0x28527
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_170(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_276(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_276(int iParam0, float fParam1)//Position - 0x2859D
{
	return func_277(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_277(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x285B5
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_284(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_36[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_280();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_36[iVar4 /*4*/].f_1 = iParam0;
		Local_36[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = GlobalFunc_4957(&(Local_36[iVar4 /*4*/]), Var1, iParam1, &(Local_36[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar4 /*4*/].f_3) < iParam4);
}



int func_280()//Position - 0x28867
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}




int func_284(int iParam0, int iParam1)//Position - 0x2897E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}











void func_295()//Position - 0x28E28
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (GlobalFunc_775(PLAYER::PLAYER_PED_ID(), Local_237[1 /*3*/], 5f))
		{
			if (GlobalFunc_115(iLocal_178))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_178))
				{
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_178, "fan3_dogroute", 0, 0, -1);
				}
			}
		}
	}
}

void func_296()//Position - 0x28E6E
{
	if (GlobalFunc_115(iLocal_175))
	{
		switch (iLocal_311)
		{
			case 0:
				if (func_274(iLocal_175, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_175);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_175, 2, 1);
					PED::SET_PED_KEEP_TASK(iLocal_175, 1);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_180))
					{
						ENTITY::DETACH_ENTITY(iLocal_180, 1, 1);
					}
					GlobalFunc_5130(iLocal_175, "GENERIC_CURSE_MED", 4);
					if (GlobalFunc_4947(iLocal_167))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
						TASK::TASK_ENTER_VEHICLE(0, iLocal_167, 20000, -1, 3f, 8, 0);
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_167, PLAYER::PLAYER_PED_ID(), 8, 30f, 786468, 300f, 10f, 1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_175, uLocal_365);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
						GlobalFunc_2838("iBinocStage = 1");
						iLocal_311 = 1;
					}
					else if (!GlobalFunc_4947(iLocal_167))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_175, uLocal_365);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
						GlobalFunc_2838("iBinocStage = 2");
						iLocal_311 = 2;
					}
				}
				if (GlobalFunc_115(iLocal_167))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_167, 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_180))
						{
							ENTITY::DETACH_ENTITY(iLocal_180, 1, 1);
						}
						TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_175, uLocal_365);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
						GlobalFunc_2838("iBinocStage = 2");
						iLocal_311 = 2;
					}
				}
				break;
			
			case 1:
				if (GlobalFunc_4947(iLocal_167))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_167, 0))
					{
						TASK::CLEAR_PED_TASKS(iLocal_175);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_175, 2, 0);
						PED::SET_PED_KEEP_TASK(iLocal_175, 1);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
						if (PED::IS_PED_IN_VEHICLE(iLocal_175, iLocal_167, 0))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_175, uLocal_365);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
						GlobalFunc_2838("iBinocStage = 2");
						iLocal_311 = 2;
					}
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_175);
					PED::SET_PED_FLEE_ATTRIBUTES(iLocal_175, 2, 0);
					PED::SET_PED_KEEP_TASK(iLocal_175, 1);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
					if (PED::IS_PED_IN_VEHICLE(iLocal_175, iLocal_167, 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 320);
					}
					TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_175, uLocal_365);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
					GlobalFunc_2838("Car wrecked - iBinocStage = 2");
					iLocal_311 = 2;
				}
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_175, 1) > 300f)
				{
					GlobalFunc_2838("iBinocStage = 3");
					iLocal_311 = 3;
				}
				break;
			
			case 2:
				if (GlobalFunc_115(iLocal_175))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_175, 1) > 100f)
					{
						GlobalFunc_2838("iBinocStage = 3");
						iLocal_311 = 3;
					}
				}
				break;
			
			case 3:
				GlobalFunc_2297(&iLocal_175, 1, 0, 1);
				GlobalFunc_190(&iLocal_167);
				break;
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(iLocal_175))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_180))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iLocal_180))
			{
				ENTITY::DETACH_ENTITY(iLocal_180, 1, 1);
			}
		}
	}
}



void func_299()//Position - 0x2937C
{
	if (GlobalFunc_115(iLocal_177))
	{
		switch (iLocal_312)
		{
			case 0:
				if (func_274(iLocal_177, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_177);
					TASK::TASK_SMART_FLEE_PED(iLocal_177, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					iLocal_312++;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_300()//Position - 0x293D9
{
	if (GlobalFunc_115(iLocal_176))
	{
		switch (iLocal_313)
		{
			case 0:
				if (func_274(iLocal_176, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_176);
					TASK::TASK_SMART_FLEE_PED(iLocal_176, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					iLocal_313++;
				}
				break;
			
			default:
				break;
			}
	}
}

void func_301()//Position - 0x29436
{
	if (!GlobalFunc_496(&uLocal_733, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
	{
		if (iLocal_336)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_297) > 10000)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				iLocal_336 = 0;
				func_264(9);
			}
		}
		else
		{
			GlobalFunc_164("FATIC3_15", 5000, 1);
			iLocal_297 = MISC::GET_GAME_TIMER();
			iLocal_336 = 1;
		}
		return;
	}
	else if (iLocal_336)
	{
		iLocal_297 = 0;
		HUD::CLEAR_THIS_PRINT("FATIC3_15");
		iLocal_336 = 0;
	}
}



void func_304()//Position - 0x29586
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if ((iLocal_156 == 2 || iLocal_156 == 3) || iLocal_156 == 4)
		{
			if (GlobalFunc_2997(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				return;
			}
		}
		if (iLocal_156 != 7)
		{
			if (!GlobalFunc_2997(ENTITY::GET_ENTITY_MODEL(iVar0)))
			{
				if (GlobalFunc_115(iLocal_306) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					if (!GlobalFunc_111() && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_306) < 20f)
						{
							GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_CHEAT2", 8, 0, 0, 0);
						}
						else
						{
							GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_CHEAT1", 8, 0, 0, 0);
						}
					}
				}
			}
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			GlobalFunc_2838("Telling player to leave any vehicle...");
		}
	}
}


void func_306()//Position - 0x296A9
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 59.70891f, 6931.386f, 10.60823f, 69.71092f, 6899.878f, 15.37432f, 11f, 0, 1, 0))
	{
		if (!iLocal_342)
		{
			if (GlobalFunc_115(iLocal_306))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_306, 1) < 20f)
				{
					if (Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticCheated == 1)
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4935();
							GlobalFunc_5157(&uLocal_403, "FAN3AUD", "FAN3_JOGCH2B", 8, 0, 0);
						}
						else
						{
							GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_JOGCH2B", 8, 0, 0, 0);
						}
					}
					else if (GlobalFunc_111())
					{
						GlobalFunc_4935();
						GlobalFunc_5157(&uLocal_403, "FAN3AUD", "FAN3_JOGCH2A", 8, 0, 0);
					}
					else
					{
						GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_JOGCH2A", 8, 0, 0, 0);
					}
					iLocal_342 = 1;
					iLocal_341 = 0;
					iLocal_331 = 1;
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 42.00794f, 6994.05f, 5.189813f, 51.55843f, 6969.847f, 12.56655f, 7f, 0, 1, 0))
	{
		if (!iLocal_343)
		{
			if (GlobalFunc_115(iLocal_306))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_306, 1) < 20f)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_4935();
						GlobalFunc_5157(&uLocal_403, "FAN3AUD", "FAN3_JOGCH3", 8, 0, 0);
					}
					else
					{
						GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_JOGCH3", 8, 0, 0, 0);
					}
					iLocal_343 = 1;
					iLocal_341 = 0;
					iLocal_331 = 1;
				}
			}
		}
	}
}

void func_307()//Position - 0x2982F
{
	if (!GlobalFunc_111())
	{
		if (iLocal_333)
		{
			iLocal_333 = 0;
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_319) > 13000)
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_306, 1) < 30f && iLocal_157 == iLocal_156)
			{
				if (iLocal_156 == 1)
				{
					if (GlobalFunc_115(iLocal_306))
					{
						if (PED::IS_PED_SWIMMING(iLocal_306) && PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
						{
							func_308();
						}
					}
				}
				else
				{
					func_308();
				}
			}
		}
	}
	else if (GlobalFunc_115(iLocal_306))
	{
		if (!iLocal_341)
		{
			if ((GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_306, 1) > 40f && !iLocal_327) && iLocal_333)
			{
				AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
				GlobalFunc_2838("*** PAUSING TRASH TALK");
				iLocal_341 = 1;
			}
		}
		else if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_306, 1) < 30f)
		{
			AUDIO::RESTART_SCRIPTED_CONVERSATION();
			GlobalFunc_2838("*** RESTARTING TRASH TALK");
			iLocal_341 = 0;
		}
	}
}

void func_308()//Position - 0x2991D
{
	int iVar0;
	int iVar1;
	
	if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
	{
		if (iLocal_156 == 1)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		}
		else
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
		}
		iVar1 = func_309(iLocal_156);
		if (!iVar1 == -1)
		{
			if (iLocal_304 == 1)
			{
				iVar1++;
			}
			if (Local_367[iVar1 /*7*/][iVar0 /*2*/] == 0)
			{
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_173(&uLocal_403, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				}
				if (GlobalFunc_115(iLocal_306))
				{
					GlobalFunc_173(&uLocal_403, 3, iLocal_306, "MARYANN", 0, 1);
				}
				GlobalFunc_10618(&uLocal_403, "FAN3AUD", Local_367[iVar1 /*7*/][iVar0 /*2*/].f_1, 7, 0, 0, 0);
				Local_367[iVar1 /*7*/][iVar0 /*2*/] = 1;
				iLocal_333 = 1;
				iLocal_319 = MISC::GET_GAME_TIMER();
				GlobalFunc_2838("*** CREATING TRASH TALK");
			}
		}
	}
	else
	{
		GlobalFunc_2838("*** Trying to start trash talk, but god text is preventing it");
	}
}

int func_309(int iParam0)//Position - 0x29A01
{
	int iVar0;
	
	if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	else if (iParam0 == 2)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 4)
	{
		iVar0 = -1;
	}
	else
	{
		iVar0 = 3;
	}
	return iVar0;
}

void func_310()//Position - 0x29A3E
{
	func_336();
	func_333();
	GlobalFunc_7248(&iLocal_296, iLocal_306, 1, 1092616192, 1);
	switch (iLocal_157)
	{
		case 1:
			func_329();
			func_326();
			break;
		
		case 2:
			func_325();
			break;
		
		case 3:
			func_323();
			func_326();
			func_320();
			break;
		
		case 4:
			func_319();
			break;
		
		case 5:
			func_315();
			func_326();
			break;
		
		case 6:
			if (!iLocal_321)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
				}
				if (GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_MAWIN", 8, 0, 0, 0))
				{
					iLocal_156 = 8;
					iLocal_158 = 0;
					GRAPHICS::DELETE_CHECKPOINT(iLocal_290);
					GlobalFunc_146(&iLocal_293);
					GlobalFunc_146(&iLocal_294);
					func_311(8);
				}
			}
			break;
		
		case 8:
			break;
		
		case 7:
			break;
		
		default:
			break;
	}
}

void func_311(int iParam0)//Position - 0x29B21
{
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
	}
	if (iParam0 != iLocal_157)
	{
		iLocal_157 = iParam0;
		func_312(iParam0);
	}
	else if (iLocal_340 == 1)
	{
		func_312(iParam0);
	}
	iLocal_341 = 0;
}

void func_312(int iParam0)//Position - 0x29B59
{
	iLocal_301 = 0;
	switch (iParam0)
	{
		case 1:
			iLocal_302 = 7;
			if (GlobalFunc_115(iLocal_306))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_306, Local_181[iLocal_301 /*3*/], 2f, 20000, 1193033728, 1056964608);
			}
			break;
		
		case 2:
			if (GlobalFunc_115(iLocal_161) && GlobalFunc_115(iLocal_162))
			{
				if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_162, -1))
				{
					iLocal_164 = iLocal_162;
				}
				else if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_161, -1))
				{
					iLocal_164 = iLocal_161;
				}
				if (GlobalFunc_115(iLocal_306))
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_306, iLocal_164, 20000, -1, 3f, 1, 0);
				}
				if (!GlobalFunc_111())
				{
					if (iLocal_303 == 1)
					{
						GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_SWIMWIN", 7, 1, 0, 0);
					}
					else
					{
						GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_SWIMLOS", 7, 1, 0, 0);
					}
				}
				iLocal_298 = MISC::GET_GAME_TIMER();
				iLocal_310 = 0;
			}
			break;
		
		case 3:
			iLocal_302 = 11;
			if (!GlobalFunc_111())
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_RUNTO", 7, 0, 0, 0);
				}
				else
				{
					GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_RUNTO", 7, 1, 0, 0);
				}
			}
			func_314();
			break;
		
		case 4:
			if (GlobalFunc_115(iLocal_306) && GlobalFunc_4947(iLocal_164))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_164))
				{
					TASK::REMOVE_WAYPOINT_RECORDING("Fan3_pedBike");
					TASK::REMOVE_WAYPOINT_RECORDING("Fan3_pedBikePanic");
				}
				if (PED::IS_PED_IN_VEHICLE(iLocal_306, iLocal_164, 0))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_164, 5f, 10, 0);
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_306, 0, 0);
				}
				if (!GlobalFunc_111())
				{
					if (iLocal_303 == 1)
					{
						GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_BIKEWIN", 7, 1, 0, 0);
					}
					else
					{
						GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_BIKELOS", 7, 1, 0, 0);
					}
				}
			}
			break;
		
		case 5:
			iLocal_302 = 11;
			func_313();
			break;
		
		case 7:
			break;
		
		default:
			break;
	}
}

int func_313()//Position - 0x29D53
{
	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fan3_pedJog"))
	{
		GlobalFunc_2838("Requesting Mary Ann's jog waypoint recording");
		TASK::REQUEST_WAYPOINT_RECORDING("fan3_pedJog");
		return 0;
	}
	return 1;
}

int func_314()//Position - 0x29D7F
{
	if (((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBike") || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBikePanic")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBikePrep")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Fan3_MaryAnnBikeJump"))
	{
		GlobalFunc_2838("Waiting for Mary Ann's bike recordings to load");
		TASK::REQUEST_WAYPOINT_RECORDING("Fan3_pedBike");
		TASK::REQUEST_WAYPOINT_RECORDING("Fan3_pedBikePanic");
		TASK::REQUEST_WAYPOINT_RECORDING("Fan3_pedBikePrep");
		VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Fan3_MaryAnnBikeJump");
		return 0;
	}
	return 1;
}

void func_315()//Position - 0x29DFC
{
	if (func_313())
	{
		if (func_318(&Local_237))
		{
			func_311(6);
		}
		else
		{
			func_316();
		}
	}
}

void func_316()//Position - 0x29E20
{
	switch (iLocal_157)
	{
		case 1:
			TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_306, Local_181[iLocal_301 /*3*/], 3f, 20000, 0.25f, 1056964608);
			GlobalFunc_2837("*** Updating Mary Ann swimming task to pos", iLocal_301);
			break;
		
		case 2:
			break;
		
		case 3:
			if (GlobalFunc_115(iLocal_306) && GlobalFunc_4947(iLocal_164))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_164) && iLocal_328 == 0)
				{
					if (iLocal_301 > 2)
					{
						GlobalFunc_2838("*** Mary Ann has missed a position but reached the end of the bike route!!");
						GlobalFunc_2838("*** Changing position to 11 so the check returns true...");
						iLocal_301 = 11;
					}
					GlobalFunc_2838("*** Mary Ann: Doing start of bike section setup");
					sLocal_307 = "Fan3_pedBike";
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_164, 3);
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_164, 0);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_306, iLocal_164, sLocal_307, 786485, 0, 24, -1, -1082130432, 0, 1073741824);
					GlobalFunc_146(&iLocal_295);
				}
			}
			break;
		
		case 4:
			if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_306, iLocal_164))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_164, 5f, 10, 0);
				TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_306, 0, 0);
			}
			break;
		
		case 5:
			if (GlobalFunc_115(iLocal_306))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_306))
				{
					GlobalFunc_2838("*** Telling Mary Ann to play waypoint recording");
					TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_306, "fan3_pedJog", 0, 0, -1);
				}
			}
			break;
		
		case 7:
			break;
		
		default:
			break;
	}
}


int func_318(var uParam0)//Position - 0x29F7A
{
	struct<3> Var0;
	float fVar3;
	
	if (GlobalFunc_115(iLocal_306))
	{
		if (iLocal_301 < iLocal_302)
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_306, 1) };
			fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, *(uParam0[iLocal_301 /*3*/]), 1);
			if (fVar3 < 6f)
			{
				iLocal_301++;
				GlobalFunc_2837("*** UPDATED Mary Ann position = ", iLocal_301);
				if (iLocal_301 >= iLocal_302)
				{
					GlobalFunc_2838("*** Mary Ann position >= max positions");
					return 1;
				}
				if (iLocal_157 == 1)
				{
					if (iLocal_301 != iLocal_302)
					{
						TASK::CLEAR_PED_TASKS(iLocal_306);
						GlobalFunc_2838("*** Clearing Mary Ann tasks (ma_pDoCheckpoints())");
						func_316();
					}
					else
					{
						GlobalFunc_2838("*** Mary Ann position = max position and she is stuck... this wasn't caught by the previous check?!");
					}
				}
			}
		}
		else if (iLocal_301 >= iLocal_302)
		{
			GlobalFunc_2838("*** Mary Ann's checkpoints have been manipulated by some sort of fix before being checked");
			GlobalFunc_2838("... and she should finish the race without hitting the final checkpoint");
			return 1;
		}
	}
	return 0;
}

void func_319()//Position - 0x2A038
{
	if (GlobalFunc_115(iLocal_306) && GlobalFunc_4947(iLocal_164))
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_306, iLocal_164, 0))
		{
			func_311(5);
		}
	}
}

void func_320()//Position - 0x2A068
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	if (iLocal_157 == 3 && iLocal_156 == 3)
	{
		if (iLocal_303 == 1)
		{
			if (GlobalFunc_115(iLocal_306) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (MISC::ARE_STRINGS_EQUAL(sLocal_307, "Fan3_pedBike"))
				{
					TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_307, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iVar0);
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_306, 1), 1) > 65f && iVar0 > 26) && TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_164))
					{
						if (GlobalFunc_115(iLocal_164))
						{
							if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_164))
							{
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_307, ENTITY::GET_ENTITY_COORDS(iLocal_164, 1), &uVar1);
								TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_307, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), &iVar0);
							}
							iVar0 = (iVar0 - 5);
							TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_307, iVar0, &Var2);
							TASK::WAYPOINT_RECORDING_GET_COORD(sLocal_307, iVar0 + 1, &Var5);
							if (!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_306, 1), 3f) && !CAM::IS_SPHERE_VISIBLE(Var2, 3f))
							{
								fVar8 = ENTITY::GET_ENTITY_SPEED(iLocal_306);
								ENTITY::SET_ENTITY_COORDS(iLocal_164, Var2, 1, 0, 0, 1);
								GlobalFunc_5971(iLocal_164, Var5);
								if (!PED::IS_PED_IN_VEHICLE(iLocal_306, iLocal_164, 0))
								{
									PED::SET_PED_INTO_VEHICLE(iLocal_306, iLocal_164, -1);
								}
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_306, iLocal_164, sLocal_307, 786485, 0, 24, -1, -1082130432, 0, 1073741824);
								VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_164, fVar8);
								GlobalFunc_2837("*** Teleported Mary Ann to waypoint ", iVar0);
								if (iVar0 < 14)
								{
									iLocal_301 = 0;
								}
								else if (iVar0 < 26)
								{
									iLocal_301 = 1;
								}
								else if (iVar0 < 35)
								{
									iLocal_301 = 2;
								}
								else if (iVar0 < 45)
								{
									iLocal_301 = 3;
								}
								else if (iVar0 < 53)
								{
									iLocal_301 = 4;
								}
								else if (iVar0 < 60)
								{
									iLocal_301 = 5;
								}
								else if (iVar0 < 68)
								{
									iLocal_301 = 6;
								}
								else if (iVar0 < 79)
								{
									iLocal_301 = 7;
								}
								else if (iVar0 < 98)
								{
									iLocal_301 = 8;
								}
								else if (iVar0 < 135)
								{
									iLocal_301 = 9;
								}
								else
								{
									iLocal_301 = 9;
								}
							}
							else
							{
								GlobalFunc_2838("*** Trying to teleport, but points are visible!!");
							}
						}
					}
				}
			}
		}
	}
}



void func_323()//Position - 0x2A2FB
{
	if (func_314())
	{
		if (func_318(&Local_203))
		{
			func_311(4);
		}
		else
		{
			func_324();
			func_316();
		}
	}
}

void func_324()//Position - 0x2A323
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -151.0294f, 6589.512f, 7.479042f, -164.0833f, 6577.416f, 9.015114f, 6f, 0, 1, 0))
	{
		iLocal_330 = 0;
		GlobalFunc_2838("*** Detected player failed bridge jump");
	}
	if (!iLocal_330)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -149.3777f, 6592.478f, 1.723418f, -167.0964f, 6574.677f, 7.915183f, 21.25f, 0, 1, 0))
		{
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_306, 1) < 30f)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_JMPFAIL", 7, 1, 0, 0))
					{
						iLocal_330 = 1;
					}
				}
			}
		}
	}
}

void func_325()//Position - 0x2A3D5
{
	if (GlobalFunc_115(iLocal_306) && GlobalFunc_4947(iLocal_164))
	{
		if (PED::IS_PED_IN_VEHICLE(iLocal_306, iLocal_164, 0))
		{
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
				{
					GlobalFunc_2838("Adding Mary Ann's bike to mix group!");
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_164, "FANATIC_MIX_MARY_BIKE", 0);
				}
			}
			func_311(3);
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_164, 1))
		{
			if (iLocal_164 == iLocal_162)
			{
				iLocal_164 = iLocal_161;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_306);
				GlobalFunc_2838("*** Clearing Mary Ann tasks (ma_pDoToBikeTask())");
				if (GlobalFunc_115(iLocal_164) && GlobalFunc_115(iLocal_306))
				{
					GlobalFunc_2838("Making Mary Ann use default player's bike");
					TASK::TASK_ENTER_VEHICLE(iLocal_306, iLocal_164, 20000, -1, 3f, 1, 0);
				}
			}
			else if (iLocal_164 == iLocal_161)
			{
				iLocal_164 = iLocal_162;
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_306);
				GlobalFunc_2838("*** Clearing Mary Ann tasks (ma_pDoToBikeTask())");
				if (GlobalFunc_115(iLocal_164) && GlobalFunc_115(iLocal_306))
				{
					GlobalFunc_2838("Making Mary Ann use default opponent bike");
					TASK::TASK_ENTER_VEHICLE(iLocal_306, iLocal_164, 20000, -1, 3f, 1, 0);
				}
			}
		}
	}
}

void func_326()//Position - 0x2A4D4
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	
	fVar2 = 2f;
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_306, 1), 1);
	if (fVar0 > 45f)
	{
		fVar0 = 45f;
	}
	fVar1 = (fVar0 / 100f);
	if (iLocal_303 == 2)
	{
		if (iLocal_157 == 1)
		{
			if (GlobalFunc_115(iLocal_306))
			{
				fVar2 = (fVar2 - fVar1);
				TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_306, (fVar2 + 0.2f));
				if (bLocal_337)
				{
					GlobalFunc_2839("fDist is", fVar0);
					GlobalFunc_2839("Setting fMoveRatio to", fVar2);
				}
			}
		}
		else if (iLocal_157 == 5)
		{
			if (GlobalFunc_115(iLocal_306))
			{
				fVar2 = (fVar2 - fVar1);
				fVar2 = (fVar2 + 0.5f);
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_306))
				{
					TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_306, fVar2, 0);
				}
				if (bLocal_337)
				{
					GlobalFunc_2839("fDist is", fVar0);
					GlobalFunc_2839("Setting fMoveRatio to", fVar2);
				}
			}
		}
		else if (iLocal_157 == 3)
		{
			if (fVar0 < 5f)
			{
				fVar0 = 5f;
				fVar1 = (fVar0 / 100f);
			}
			if (GlobalFunc_115(iLocal_164))
			{
				if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBike") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBikePrep"))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_164))
					{
						TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_307, ENTITY::GET_ENTITY_COORDS(iLocal_164, 1), &iVar3);
						if (MISC::ARE_STRINGS_EQUAL(sLocal_307, "Fan3_pedBike"))
						{
							if (iVar3 < 98 || iVar3 >= 107)
							{
								fVar4 = TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sLocal_307, iVar3);
								fVar1 = (fVar1 * 10f);
								fVar4 = ((fVar4 - fVar1) - 7.5f);
								if (bLocal_337)
								{
									GlobalFunc_2839("fRatioModifier is ", fVar1);
									GlobalFunc_2839("Setting fPlaybackSpd to ", fVar4);
									GlobalFunc_2839("Actual entity speed is ", ENTITY::GET_ENTITY_SPEED(iLocal_306));
								}
								TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_164, fVar4);
							}
							if (iVar3 > 93 && iVar3 < 98)
							{
								GlobalFunc_2838("**** SWITCHING TO JUMP PREP");
								sLocal_307 = "Fan3_pedBikePrep";
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_306, iLocal_164, sLocal_307, 262144, 0, 24, -1, -1082130432, 0, 1073741824);
							}
						}
						else
						{
							func_327(iVar3);
						}
					}
					else
					{
						func_327(0);
					}
				}
			}
		}
	}
	else if (iLocal_157 == 1)
	{
		if (GlobalFunc_115(iLocal_306))
		{
			fVar2 = (fVar2 + fVar1);
			fVar2 = (fVar2 + 0.9f);
			if (fVar2 > 3f)
			{
				fVar2 = 3f;
			}
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iLocal_306, fVar2);
			if (bLocal_337)
			{
				GlobalFunc_2839("fDist is ", fVar0);
				GlobalFunc_2839("Setting fMoveRatio to ", fVar2);
				GlobalFunc_2839("Actual speed is ", ENTITY::GET_ENTITY_SPEED(iLocal_306));
			}
		}
	}
	else if (iLocal_157 == 5)
	{
		fVar2 = (fVar2 + fVar1);
		fVar2 = (fVar2 + 0.4f);
		if (fVar0 <= 3f)
		{
			fVar2 = (fVar2 + 0.12f);
		}
		if (fVar2 > 3f)
		{
			fVar2 = 3f;
		}
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_306))
		{
			TASK::WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_306, fVar2, 0);
		}
		if (bLocal_337)
		{
			GlobalFunc_2839("fDist is ", fVar0);
			GlobalFunc_2839("Setting fMoveRatio to ", fVar2);
			GlobalFunc_2839("Actual speed is ", ENTITY::GET_ENTITY_SPEED(iLocal_306));
		}
	}
	else if (iLocal_157 == 3)
	{
		if (GlobalFunc_115(iLocal_164))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_164))
			{
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_307, ENTITY::GET_ENTITY_COORDS(iLocal_164, 1), &iVar5);
				if (MISC::ARE_STRINGS_EQUAL(sLocal_307, "Fan3_pedBike"))
				{
					if (iVar5 < 98 || iVar5 >= 107)
					{
						fVar6 = TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sLocal_307, iVar5);
						fVar1 = (fVar1 * 10f);
						fVar6 = ((fVar6 + fVar1) + 3f);
						if (bLocal_337)
						{
							GlobalFunc_2839("fRatioModifier is ", fVar1);
							GlobalFunc_2839("Setting fPlaybackSpd to ", fVar6);
							GlobalFunc_2839("Actual entity speed is ", ENTITY::GET_ENTITY_SPEED(iLocal_306));
						}
						TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(iLocal_164, fVar6);
					}
					if (iVar5 > 93 && iVar5 < 98)
					{
						GlobalFunc_2838("**** SWITCHING TO JUMP PREP");
						sLocal_307 = "Fan3_pedBikePrep";
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_306, iLocal_164, sLocal_307, 262160, 0, 24, -1, -1082130432, 0, 1073741824);
					}
				}
				else
				{
					func_327(iVar5);
				}
			}
			else
			{
				func_327(0);
			}
		}
	}
}

void func_327(int iParam0)//Position - 0x2A8A0
{
	float fVar0;
	
	if (GlobalFunc_115(iLocal_164))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_164))
		{
			if (iParam0 >= 7)
			{
				if (!VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_164) && !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_164))
				{
					GlobalFunc_2838("******* USING RECORDING NOW");
					iLocal_328 = 1;
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(iLocal_164, 500, "Fan3_MaryAnnBikeJump", (20f + 1f), 262144);
					VEHICLE::SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(iLocal_164, 1250, 262144, 1);
				}
			}
			if (fLocal_837 == 0f)
			{
				fLocal_837 = ENTITY::GET_ENTITY_SPEED(iLocal_306);
			}
			if (iParam0 >= 7 && iParam0 <= 16)
			{
				fVar0 = (fLocal_837 + 0.1f);
				if (fVar0 > 20f)
				{
					fVar0 = 20f;
				}
				fLocal_837 = fVar0;
			}
			if (iParam0 >= 20)
			{
				GlobalFunc_2838("******* SWITCHING BACK TO WAYPOINT");
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_164))
				{
					GlobalFunc_2838("******* STOPPING PLAYBACK");
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_164);
				}
				sLocal_307 = "Fan3_pedBike";
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_306, iLocal_164, sLocal_307, 786485, 0, 24, -1, -1082130432, 0, 1073741824);
				iLocal_328 = 0;
			}
		}
		else
		{
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(sLocal_307, ENTITY::GET_ENTITY_COORDS(iLocal_164, 1), &iParam0);
			GlobalFunc_2837("DOING RECORDING, CLOSEST WP IS: ", iParam0);
			if (iParam0 >= 20)
			{
				GlobalFunc_2838("******* SWITCHING BACK TO WAYPOINT");
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_164) || VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_164))
				{
					GlobalFunc_2838("******* STOPPING PLAYBACK");
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_164);
				}
				sLocal_307 = "Fan3_pedBike";
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_306, iLocal_164, sLocal_307, 786485, 0, 24, -1, -1082130432, 0, 1073741824);
				iLocal_328 = 0;
			}
		}
	}
}


void func_329()//Position - 0x2AA30
{
	if (func_318(&Local_181))
	{
		GlobalFunc_2838("*** Mary Ann swim complete");
		func_311(2);
	}
	if (iLocal_301 >= 6)
	{
		if (GlobalFunc_115(iLocal_306))
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_306, 2f);
		}
	}
}




void func_333()//Position - 0x2AB7D
{
	if (iLocal_334)
	{
		if (GlobalFunc_111())
		{
			GlobalFunc_4956();
		}
		else if (iLocal_157 == 3 || iLocal_157 == 2)
		{
			switch (iLocal_310)
			{
				case 0:
					if (GlobalFunc_10630(&uLocal_403, "FAN3AUD", "FAN3_PUSH", "FAN3_PUSH_1", 8, 0, 0))
					{
						iLocal_310++;
						iLocal_334 = 0;
						GlobalFunc_2838("Push warning given: 1...");
						iLocal_298 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 1:
					if (GlobalFunc_10630(&uLocal_403, "FAN3AUD", "FAN3_PUSH", "FAN3_PUSH_2", 8, 0, 0))
					{
						iLocal_310++;
						iLocal_334 = 0;
						GlobalFunc_2838("Push warning given: 2...");
						iLocal_298 = MISC::GET_GAME_TIMER();
					}
					break;
				
				case 2:
					GlobalFunc_2838("Push warning given: 3, you fail...");
					func_334();
					break;
			}
		}
		else if (iLocal_157 == 1)
		{
			switch (iLocal_310)
			{
				case 0:
				case 1:
				case 2:
					if (GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_IMP", 7, 0, 0, 0))
					{
						iLocal_334 = 0;
						GlobalFunc_2837("Swim push warning given: ", iLocal_310);
						iLocal_298 = MISC::GET_GAME_TIMER();
						iLocal_310++;
					}
					break;
				}
			}
	}
}

void func_334()//Position - 0x2ACA6
{
	if (GlobalFunc_111())
	{
		GlobalFunc_4956();
		GlobalFunc_5157(&uLocal_403, "FAN3AUD", "FAN3_SCARED", 9, 1, 0);
	}
	else
	{
		GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_SCARED", 9, 1, 0, 0);
	}
	GlobalFunc_146(&iLocal_296);
	PED::SET_PED_KEEP_TASK(iLocal_306, 1);
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_306, 0))
	{
		TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_306, PED::GET_VEHICLE_PED_IS_IN(iLocal_306, 0), PLAYER::PLAYER_PED_ID(), 8, 30f, 786469, 100f, 0.1f, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_306, 2, 1);
		GlobalFunc_2838("Setting Mary Ann Use Vehicle flee attribute");
	}
	else
	{
		TASK::TASK_SMART_FLEE_PED(iLocal_306, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
	}
	if (GlobalFunc_115(iLocal_175))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_175, 130, 1);
		PED::SET_PED_KEEP_TASK(iLocal_306, 1);
		TASK::TASK_SMART_FLEE_PED(iLocal_306, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
	}
	func_264(7);
}


void func_336()//Position - 0x2ADD7
{
	if (GlobalFunc_115(iLocal_306))
	{
		if ((GlobalFunc_8324(iLocal_306, 1, 0, 0, 0) || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_306, 1), 40f, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_306, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_334();
		}
		if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iLocal_306) < 1f)
		{
			if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
			{
				func_334();
			}
		}
		if (iLocal_157 == 3 || iLocal_157 == 2)
		{
			if (!GlobalFunc_496(&uLocal_785, ENTITY::GET_ENTITY_COORDS(iLocal_306, 1)))
			{
				GlobalFunc_2838("Mary Ann not detected in race area! Failing the mission for this!!");
				func_334();
			}
			if (!iLocal_334)
			{
				if (GlobalFunc_4947(iLocal_163) && GlobalFunc_4947(iLocal_164))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_163, iLocal_164) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_164))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_163, iLocal_164))
						{
							GlobalFunc_2838("Player's bike touched Mary Ann's bike!");
						}
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_164))
						{
							GlobalFunc_2838("The player touched Mary Ann's bike!");
						}
						if ((MISC::GET_GAME_TIMER() - iLocal_298) > 2000)
						{
							iLocal_334 = 1;
						}
					}
				}
			}
		}
		else if (iLocal_157 == 1)
		{
			if (!iLocal_334)
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_306) && iLocal_303 == 1)
				{
					GlobalFunc_2838("The player touched Mary Ann's during swim!");
					if ((MISC::GET_GAME_TIMER() - iLocal_298) > 2000)
					{
						iLocal_334 = 1;
					}
				}
			}
		}
		if (iLocal_303 == 2)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_306, 1), 1) >= 300f)
			{
				func_264(3);
			}
		}
	}
}

void func_337()//Position - 0x2AF55
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_306))
		{
			Local_287 = { ENTITY::GET_ENTITY_COORDS(iLocal_306, 1) };
		}
	}
	if (iLocal_156 != 7 || !CAM::IS_SCREEN_FADED_OUT())
	{
		if (iLocal_156 < 2)
		{
			if (iLocal_300 < 7)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_181[iLocal_300 /*3*/], 1);
			}
			else if (iLocal_300 == 7)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_181[6 /*3*/], 1);
			}
		}
		else if (iLocal_156 < 4)
		{
			if (iLocal_300 < 11)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_203[iLocal_300 /*3*/], 1);
			}
			else if (iLocal_300 == 11)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_203[10 /*3*/], 1);
			}
		}
		else if (iLocal_156 == 4 || iLocal_156 == 5)
		{
			if (iLocal_300 < 11)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_237[iLocal_300 /*3*/], 1);
			}
			else if (iLocal_300 == 11)
			{
				fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Local_237[(iLocal_300 - 1) /*3*/], 1);
			}
		}
		else
		{
			GlobalFunc_2838("Trying to update the race logic when not in a race stage? Mission failed just now?");
		}
		if (iLocal_157 < 2)
		{
			fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_287, Local_181[iLocal_301 /*3*/], 1);
		}
		else if (iLocal_157 < 4)
		{
			if (iLocal_301 < 11)
			{
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_287, Local_203[iLocal_301 /*3*/], 1);
			}
			else if (iLocal_301 == 11)
			{
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_287, Local_203[10 /*3*/], 1);
			}
		}
		else if (iLocal_157 != 6)
		{
			fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Local_287, Local_237[iLocal_301 /*3*/], 1);
		}
		if (!iLocal_321)
		{
			if (iLocal_156 < iLocal_157)
			{
				iLocal_303 = 2;
			}
			else if (iLocal_156 > iLocal_157)
			{
				iLocal_303 = 1;
			}
			else if (iLocal_300 < iLocal_301)
			{
				iLocal_303 = 2;
			}
			else if (iLocal_300 > iLocal_301)
			{
				iLocal_303 = 1;
			}
			else if (fVar3 < fVar4)
			{
				iLocal_303 = 1;
			}
			else
			{
				iLocal_303 = 2;
			}
		}
		iLocal_363 = ((MISC::GET_GAME_TIMER() - iLocal_362) + iLocal_364);
		GlobalFunc_1470();
		func_338(iLocal_363, "", -1, -1, "", iLocal_303, 2, "", 0, 1, -1, -1, 0, 12, -1, -1, 0, 6, -1, 0, 0, 1, -1, 0, -1082130432, 1, 1);
	}
}

void func_338(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, bool bParam21, int iParam22, char* sParam23, float fParam24, int iParam25, int iParam26)//Position - 0x2B193
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	
	if (fParam24 > -1f)
	{
		GlobalFunc_5969(0, "", iParam22, iParam25, 9, 0, sParam23, 1, fParam24, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam14 > -1)
	{
		sVar0 = iParam16;
		if (GlobalFunc_1561(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		GlobalFunc_5968(iParam14, iParam15, sVar0, iParam17, iParam22, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0);
	}
	if (iParam10 > -1)
	{
		sVar1 = iParam12;
		if (GlobalFunc_1561(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		iParam13 = iParam13;
		iParam11 = iParam11;
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (GlobalFunc_1561(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		GlobalFunc_5967(iParam5, iParam6, sVar2, iParam9, iParam22, 9, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (GlobalFunc_1561(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
		GlobalFunc_5966(iParam2, iParam3, sVar3, iParam22, 1, 8, 0, 0, 0, 0, 0);
	}
	if (iParam18 > -1)
	{
		sVar4 = iParam19;
		if (GlobalFunc_1561(sVar4))
		{
			sVar4 = "TIMER_BESLAP";
		}
		iParam26 = iParam26;
		iParam20 = iParam20;
	}
	sVar5 = sParam1;
	if (GlobalFunc_1561(sVar5))
	{
		sVar5 = "TIMER_TIME_RCE";
	}
	if (bParam21)
	{
		iVar6 = 1;
	}
	else
	{
		iVar6 = 0;
	}
	GlobalFunc_5965(iParam0, sVar5, iParam8, iVar6, iParam22, 0, 3, 0, 1, 0, 0, 0, 0, 0);
}












void func_350()//Position - 0x2B9AC
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	struct<3> Var8;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	struct<3> Var15;
	
	func_337();
	func_310();
	func_307();
	func_304();
	if (!iLocal_340)
	{
		func_362();
		func_361();
	}
	func_301();
	func_360();
	if (iLocal_291 != 0)
	{
		iLocal_292 = (iLocal_292 - 25);
		if (iLocal_292 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_291, uVar0, uVar1, uVar2, iLocal_292);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_291, iVar0, iVar1, iVar2, iLocal_292);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_291);
		}
	}
	switch (iLocal_158)
	{
		case 0:
			RECORDING::_0x293220DA1B46CEBC(5f, 15f, 1);
			GlobalFunc_2838("DOING OFF BIKE SETUP");
			iLocal_158 = 1;
			GlobalFunc_2838("DOING OFF BIKE RUNNING");
			break;
		
		case 1:
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 7f, 10, 1056964608, 0, 1))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					GlobalFunc_2838("Telling player to leave bike...");
				}
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!iLocal_339)
				{
					func_358();
					if (func_353())
					{
						iLocal_339 = 1;
					}
				}
				else
				{
					iLocal_158 = 2;
				}
			}
			break;
		
		case 2:
			GlobalFunc_2838("DOING OFF BIKE CLEANUP");
			iLocal_299 = 11;
			HUD::CLEAR_PRINTS();
			GlobalFunc_164("FATIC3_6", 7500, 1);
			if (iLocal_345)
			{
				iLocal_293 = GlobalFunc_2324(Local_237[iLocal_300 /*3*/], 5, 0);
				HUD::SET_BLIP_COLOUR(iLocal_293, 5);
				if (iLocal_300 == (iLocal_299 - 1))
				{
					iLocal_305 = func_267(func_269(iLocal_300, &Local_237));
					HUD::GET_HUD_COLOUR(iLocal_305, &uVar4, &uVar5, &uVar6, &uVar7);
					Var8 = { Local_237[iLocal_300 /*3*/] };
					iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(24, Local_237[iLocal_300 /*3*/] + Vector(0.1f, 0f, 0f), Var8, 3.2f, 254, 207, 12, 100, 0);
				}
				else
				{
					iLocal_305 = func_267(func_269(iLocal_300, &Local_237));
					HUD::GET_HUD_COLOUR(iLocal_305, &uVar11, &uVar12, &uVar13, &uVar14);
					Var15 = { Local_237[iLocal_300 + 1 /*3*/] };
					iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(func_269(iLocal_300, &Local_237), Local_237[iLocal_300 /*3*/], Var15, 3.2f, 254, 207, 12, 100, 0);
				}
				iLocal_345 = 0;
			}
			else
			{
				func_351(&Local_237);
				iLocal_300 = 0;
			}
			iLocal_319 = MISC::GET_GAME_TIMER();
			if (iLocal_340)
			{
				iLocal_340 = 0;
			}
			iLocal_156 = 5;
			iLocal_158 = 0;
			break;
	}
}

void func_351(var uParam0)//Position - 0x2BBEE
{
	GlobalFunc_2838("*** Creating first blip");
	iLocal_293 = GlobalFunc_2324(*(uParam0[iLocal_300 /*3*/]), 5, 0);
	HUD::SET_BLIP_COLOUR(iLocal_293, 5);
	HUD::SET_BLIP_SCALE(iLocal_293, 1.2f);
	HUD::SHOW_HEIGHT_ON_BLIP(iLocal_293, 0);
	if (iLocal_300 < (iLocal_299 - 1))
	{
		iLocal_294 = GlobalFunc_2324(*(uParam0[iLocal_300 + 1 /*3*/]), 5, 0);
		HUD::SET_BLIP_COLOUR(iLocal_294, 5);
		if (iLocal_300 == (iLocal_299 - 2))
		{
			HUD::SET_BLIP_SCALE(iLocal_294, 1.2f);
			HUD::SET_BLIP_SPRITE(iLocal_294, 38);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_294, 0);
		}
		else
		{
			HUD::SET_BLIP_SCALE(iLocal_294, 0.7f);
			HUD::SHOW_HEIGHT_ON_BLIP(iLocal_294, 0);
		}
	}
	GlobalFunc_2837("***current_position: ", iLocal_300);
	func_352(uParam0);
}

void func_352(var uParam0)//Position - 0x2BCA5
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	float fVar9;
	
	if (iLocal_300 == (iLocal_299 - 1))
	{
		iLocal_305 = func_267(func_269(iLocal_300, uParam0));
		HUD::GET_HUD_COLOUR(iLocal_305, &uVar0, &uVar1, &uVar2, &iVar3);
		switch (iLocal_156)
		{
			case 1:
				iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(9, *(uParam0[iLocal_300 /*3*/]), Local_203[0 /*3*/], 3.2f, uVar0, uVar1, uVar2, iVar3, 0);
				break;
			
			case 2:
			case 3:
				iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(9, *(uParam0[iLocal_300 /*3*/]) + Vector(2f, 0f, 0f), Local_237[0 /*3*/], 3.2f, iVar0, iVar1, iVar2, iVar3, 0);
				break;
			
			case 5:
				iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(9, *(uParam0[iLocal_300 /*3*/]) + Vector(0.1f, 0f, 0f), *(uParam0[iLocal_300 /*3*/]), 3.2f, iVar0, iVar1, iVar2, iVar3, 0);
				break;
		}
		GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_290, 1.6f, 1.6f, 100f);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iLocal_300 /*3*/]), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
			if (iLocal_290 != 0)
			{
				if (fVar4 > 100f)
				{
					HUD::GET_HUD_COLOUR(13, &iVar0, &iVar1, &iVar2, &iVar3);
					iVar3 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar0, iVar1, iVar2, iVar3);
					HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &iVar3);
					iVar3 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar0, iVar1, iVar2, iVar3);
				}
				else
				{
					HUD::GET_HUD_COLOUR(13, &iVar0, &iVar1, &iVar2, &iVar3);
					iVar3 = SYSTEM::ROUND((fVar4 * 2.4f));
					if (iVar3 < 60)
					{
						iVar3 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar0, iVar1, iVar2, iVar3);
					HUD::GET_HUD_COLOUR(134, &iVar0, &iVar1, &iVar2, &iVar3);
					iVar3 = SYSTEM::ROUND((fVar4 * 2.4f));
					if (iVar3 < 60)
					{
						iVar3 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar0, iVar1, iVar2, iVar3);
				}
			}
		}
	}
	else
	{
		iLocal_305 = func_267(func_269(iLocal_300, uParam0));
		HUD::GET_HUD_COLOUR(iLocal_305, &uVar5, &uVar6, &uVar7, &iVar8);
		if (iLocal_156 == 1 && iLocal_300 == 0)
		{
			iLocal_305 = func_267(5);
			HUD::GET_HUD_COLOUR(iLocal_305, &uVar5, &uVar6, &uVar7, &iVar8);
			iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(5, *(uParam0[iLocal_300 /*3*/]) + Vector(2f, 0f, 0f), *(uParam0[iLocal_300 + 1 /*3*/]), 3.2f, uVar5, uVar6, uVar7, iVar8, 0);
		}
		else
		{
			iLocal_305 = func_267(5);
			HUD::GET_HUD_COLOUR(iLocal_305, &iVar5, &iVar6, &iVar7, &iVar8);
			iLocal_290 = GRAPHICS::CREATE_CHECKPOINT(func_269(iLocal_300, uParam0), *(uParam0[iLocal_300 /*3*/]) + Vector(1.7f, 0f, 0f), *(uParam0[iLocal_300 + 1 /*3*/]), 3.2f, iVar5, iVar6, iVar7, iVar8, 0);
		}
		HUD::GET_HUD_COLOUR(13, &iVar5, &iVar6, &iVar7, &iVar8);
		GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar5, iVar6, iVar7, iVar8);
		HUD::GET_HUD_COLOUR(134, &iVar5, &iVar6, &iVar7, &iVar8);
		GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar5, iVar6, iVar7, iVar8);
		GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(iLocal_290, 1.6f, 1.6f, 100f);
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			fVar9 = MISC::GET_DISTANCE_BETWEEN_COORDS(*(uParam0[iLocal_300 /*3*/]), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1);
			if (iLocal_290 != 0)
			{
				if (fVar9 > 100f)
				{
					HUD::GET_HUD_COLOUR(13, &iVar5, &iVar6, &iVar7, &iVar8);
					iVar8 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar5, iVar6, iVar7, iVar8);
					HUD::GET_HUD_COLOUR(134, &iVar5, &iVar6, &iVar7, &iVar8);
					iVar8 = 240;
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar5, iVar6, iVar7, iVar8);
				}
				else
				{
					HUD::GET_HUD_COLOUR(13, &iVar5, &iVar6, &iVar7, &iVar8);
					iVar8 = SYSTEM::ROUND((fVar9 * 2.4f));
					if (iVar8 < 60)
					{
						iVar8 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_290, iVar5, iVar6, iVar7, iVar8);
					HUD::GET_HUD_COLOUR(134, &iVar5, &iVar6, &iVar7, &iVar8);
					iVar8 = SYSTEM::ROUND((fVar9 * 2.4f));
					if (iVar8 < 60)
					{
						iVar8 = 60;
					}
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_290, iVar5, iVar6, iVar7, iVar8);
				}
			}
		}
	}
}

int func_353()//Position - 0x2C085
{
	STREAMING::REQUEST_MODEL(joaat("baller"));
	STREAMING::REQUEST_MODEL(joaat("a_m_y_beachvesp_01"));
	STREAMING::REQUEST_MODEL(joaat("a_m_y_musclbeac_02"));
	STREAMING::REQUEST_MODEL(joaat("a_f_y_runner_01"));
	STREAMING::REQUEST_MODEL(iLocal_160);
	STREAMING::REQUEST_MODEL(joaat("scorcher"));
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic3");
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic1maryann_stretchidle_b");
	TASK::REQUEST_WAYPOINT_RECORDING("fan3_pedJog");
	TASK::REQUEST_WAYPOINT_RECORDING("fan3_dogroute");
	TASK::REQUEST_WAYPOINT_RECORDING("fan3_ownerroute");
	if ((((((((((!STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic3") || !STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic1maryann_stretchidle_b")) || !STREAMING::HAS_MODEL_LOADED(joaat("baller"))) || !STREAMING::HAS_MODEL_LOADED(joaat("scorcher"))) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_beachvesp_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_runner_01"))) || !STREAMING::HAS_MODEL_LOADED(iLocal_160)) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_musclbeac_02"))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fan3_pedJog")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fan3_dogroute")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fan3_ownerroute"))
	{
		return 0;
	}
	iLocal_311 = 0;
	iLocal_312 = 0;
	iLocal_313 = 0;
	iLocal_314 = 0;
	GlobalFunc_6692(&iLocal_167);
	iLocal_167 = VEHICLE::CREATE_VEHICLE(joaat("baller"), 12.08639f, 6967.021f, 10.15097f, 0.588968f, 1, 1);
	if (GlobalFunc_4947(iLocal_167))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_167);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_167, 400f);
	}
	GlobalFunc_69(&iLocal_175);
	GlobalFunc_130(&iLocal_180);
	iLocal_175 = PED::CREATE_PED(26, joaat("a_m_y_beachvesp_01"), 14.1481f, 6966.537f, 9.486f, 335.3788f, 1, 1);
	iLocal_180 = OBJECT::CREATE_OBJECT(joaat("prop_binoc_01"), 14.1481f, 6966.537f, 9.486f, 1, 1, 0);
	if (GlobalFunc_115(iLocal_175))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_175, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_175, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_175, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_175, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_175, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_175, 8, 0, 0, 0);
		PED::SET_PED_CAN_RAGDOLL(iLocal_175, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_180, iLocal_175, PED::GET_PED_BONE_INDEX(iLocal_175, 18905), 0.12f, 0f, 0.1f, -22f, 90f, -20f, 1, 0, 0, 0, 2, 1);
		TASK::TASK_PLAY_ANIM(iLocal_175, "rcmfanatic3", "binoculars", 8f, -8f, -1, 1, 0, 0, 0, 0);
		GlobalFunc_173(&uLocal_568, 4, iLocal_175, "FAN3BIRDWATCHER", 0, 1);
	}
	GlobalFunc_69(&iLocal_176);
	iLocal_176 = PED::CREATE_PED(26, joaat("a_m_y_musclbeac_02"), 64.7329f, 6938.625f, 12.2245f, 241.6f, 1, 1);
	if (GlobalFunc_115(iLocal_176))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_176, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 3, 1, 1, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_176, 8, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(iLocal_176, "rcmfanatic3", "base", 8f, -8f, -1, 1, 0, 0, 0, 0);
	}
	GlobalFunc_69(&iLocal_177);
	iLocal_177 = PED::CREATE_PED(26, joaat("a_f_y_runner_01"), 76.5829f, 6957.753f, 10.3747f, 30.24f, 1, 1);
	if (GlobalFunc_115(iLocal_177))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_177, 1);
		TASK::TASK_PLAY_ANIM(iLocal_177, "rcmfanatic1maryann_stretchidle_b", "idle_e", 8f, -8f, -1, 1, 0, 0, 0, 0);
	}
	GlobalFunc_69(&iLocal_178);
	iLocal_178 = PED::CREATE_PED(26, iLocal_160, 114.038f, 6900.039f, 20.455f, 56.723f, 1, 1);
	if (GlobalFunc_115(iLocal_178))
	{
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_178);
	}
	GlobalFunc_69(&iLocal_179);
	GlobalFunc_6692(&iLocal_168);
	iLocal_168 = VEHICLE::CREATE_VEHICLE(joaat("scorcher"), Local_169, fLocal_172, 1, 1);
	if (GlobalFunc_4947(iLocal_168))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_168);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_hiker_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("patriot"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_musclbeac_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_160);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("baller"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_binoc_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_hiker_01"));
	GlobalFunc_500(&uLocal_733);
	GlobalFunc_499(&uLocal_733, 42.25f, 6775.99f, 20.035f);
	GlobalFunc_499(&uLocal_733, 70.9f, 6811.02f, 16.56f);
	GlobalFunc_499(&uLocal_733, 30.55f, 6908.24f, 12.57f);
	GlobalFunc_499(&uLocal_733, 17.22f, 6966.57f, 9.87f);
	GlobalFunc_499(&uLocal_733, 42.16f, 7088.71f, 0.65f);
	GlobalFunc_499(&uLocal_733, 133.71f, 7050.03f, 0.35f);
	GlobalFunc_499(&uLocal_733, 119.44f, 6923.47f, 19.92f);
	GlobalFunc_499(&uLocal_733, 144.19f, 6821.13f, 21.8f);
	GlobalFunc_499(&uLocal_733, 128.37f, 6764.95f, 26.39f);
	GlobalFunc_499(&uLocal_733, 49.68f, 6736.11f, 30.31f);
	GlobalFunc_498(&uLocal_733);
	GlobalFunc_173(&uLocal_403, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	GlobalFunc_173(&uLocal_403, 3, iLocal_306, "MARYANN", 0, 1);
	if (!iLocal_340)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_RUN");
		GlobalFunc_2838("Starting run music");
	}
	return 1;
}





void func_358()//Position - 0x2C6B1
{
	GlobalFunc_2297(&iLocal_173, 1, 0, 1);
	GlobalFunc_2297(&iLocal_174, 1, 0, 1);
	GlobalFunc_190(&iLocal_166);
	TASK::REMOVE_WAYPOINT_RECORDING("Fan3_baddriver");
	STREAMING::REMOVE_ANIM_DICT("rcmfanatic3");
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-191.0984f, 6550.964f, 10.0973f, -199.4099f, 6542.312f, 11.09729f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-226.3857f, 6498.877f, 9.2147f, -173.1313f, 6595.771f, 20.7218f, 1, 1);
}


void func_360()//Position - 0x2C8AD
{
	if (iLocal_156 == 3)
	{
		if (GlobalFunc_4947(iLocal_166) && GlobalFunc_115(iLocal_173))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -402.2801f, 6407.981f, 9.086394f, -382.6009f, 6364.857f, 16.76248f, 5f, 0, 1, 0))
			{
				if (!iLocal_327)
				{
					GlobalFunc_2838("Starting bad driver");
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_166, 1);
					GlobalFunc_173(&uLocal_568, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iLocal_173, iLocal_166, "Fan3_baddriver", 786469, 0, 0, -1, -1082130432, 0, 1073741824);
					iLocal_327 = 1;
				}
			}
			else if (iLocal_327)
			{
				if (GlobalFunc_156(iLocal_166, PLAYER::PLAYER_PED_ID(), 1) < 15f)
				{
					VEHICLE::START_VEHICLE_HORN(iLocal_166, 4000, 0, 0);
				}
				if (GlobalFunc_156(iLocal_166, PLAYER::PLAYER_PED_ID(), 1) < 6f)
				{
					GlobalFunc_2838("Play conversation");
					if (!GlobalFunc_111())
					{
						GlobalFunc_10618(&uLocal_568, "FAN3AUD", "FAN3_SHOUT", 7, 0, 0, 0);
					}
				}
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_166))
				{
					GlobalFunc_2838("bad_driver_car no longer needed");
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_166, 0);
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_166, 1);
					GlobalFunc_190(&iLocal_166);
					iLocal_327 = 0;
				}
			}
		}
	}
}

void func_361()//Position - 0x2C9D1
{
	if (!GlobalFunc_115(iLocal_161) || !GlobalFunc_115(iLocal_162))
	{
		if (iLocal_157 >= 3)
		{
			func_264(2);
		}
		else
		{
			func_264(1);
		}
	}
}

void func_362()//Position - 0x2CA03
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_163))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_163))
		{
			if (iLocal_157 >= 3)
			{
				func_264(2);
			}
			else
			{
				func_264(1);
			}
		}
	}
}

void func_363()//Position - 0x2CA30
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_310();
	func_337();
	if (iLocal_291 != 0)
	{
		iLocal_292 = (iLocal_292 - 25);
		if (iLocal_292 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_291, uVar0, uVar1, uVar2, iLocal_292);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_291, iVar0, iVar1, iVar2, iLocal_292);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_291);
		}
	}
	switch (iLocal_158)
	{
		case 0:
			GlobalFunc_2838("DOING BIKE SETUP");
			iLocal_158 = 1;
			GlobalFunc_2838("DOING BIKE RUNNING");
			break;
		
		case 1:
			func_307();
			func_304();
			func_362();
			func_361();
			func_301();
			func_360();
			func_426();
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				GlobalFunc_146(&iLocal_293);
				GlobalFunc_146(&iLocal_294);
				iLocal_293 = GlobalFunc_5743(iLocal_163, 1, 5);
				GRAPHICS::DELETE_CHECKPOINT(iLocal_290);
				if (iLocal_325 == 0)
				{
					GlobalFunc_164("FATIC3_BACKON", 7500, 1);
					iLocal_325 = 1;
				}
				iLocal_345 = 1;
				iLocal_156 = 2;
				iLocal_158 = 0;
			}
			else
			{
				if (GlobalFunc_663("FATIC3_BACKON", 0, 0))
				{
					GlobalFunc_2838("Clearing 'FATIC3_BACKON' print");
					HUD::CLEAR_PRINTS();
				}
				if (func_266(&Local_203))
				{
					GlobalFunc_2838("Player finished bike section, going into cleanup");
					iLocal_158 = 2;
				}
			}
			break;
		
		case 2:
			GlobalFunc_2838("DOING BIKE CLEANUP");
			iLocal_300 = 0;
			iLocal_299 = 11;
			iLocal_345 = 0;
			if (iLocal_156 < iLocal_157)
			{
				GlobalFunc_2838("Player lost cycling");
				iLocal_304 = 0;
			}
			else
			{
				GlobalFunc_2838("Player won cycling");
				iLocal_304 = 1;
			}
			GlobalFunc_11077(2, "Jog section", 0, 0, 0, 1);
			Global_89962.f_12[0] = iLocal_363;
			iLocal_156 = 4;
			iLocal_158 = 0;
			break;
	}
}































































void func_426()//Position - 0x31F31
{
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (GlobalFunc_115(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
		{
			if (!iLocal_366)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -162.9305f, 6574.679f, 11.03543f, -166.7214f, 6578.559f, 15.14065f, 3.5f, 0, 1, 0))
				{
					RECORDING::_0x48621C9FCA3EBD28(3);
					iLocal_366 = 1;
					GlobalFunc_2838("*** Started tracking jump replay");
				}
			}
			else if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -152.1211f, 6592.195f, 8.325163f, -149.1945f, 6588.718f, 13.28955f, 5.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -183.9688f, 6611.616f, -1.050815f, -146.163f, 6575.147f, 7.485405f, 46.5f, 0, 1, 0)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -182.5904f, 6607.474f, 0.027168f, -143.88f, 6571.712f, 37.02929f, 70.75f, 0, 1, 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				iLocal_366 = 0;
				GlobalFunc_2838("*** Stopped tracking jump replay");
			}
		}
	}
	else if (iLocal_366)
	{
		GlobalFunc_2838("*** Stopped tracking jump replay (player not in vehicle)");
		iLocal_366 = 0;
		RECORDING::_0x81CBAE94390F9F89();
	}
}

void func_427()//Position - 0x32088
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_310();
	func_337();
	func_307();
	func_304();
	func_362();
	func_361();
	func_301();
	func_360();
	if (iLocal_291 != 0)
	{
		iLocal_292 = (iLocal_292 - 25);
		if (iLocal_292 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_291, uVar0, uVar1, uVar2, iLocal_292);
			GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_291, iVar0, iVar1, iVar2, iLocal_292);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(iLocal_291);
		}
	}
	switch (iLocal_158)
	{
		case 0:
			GlobalFunc_2838("DOING TO BIKE SETUP");
			iLocal_158 = 1;
			iLocal_329 = 0;
			iLocal_327 = 0;
			iLocal_340 = 0;
			GlobalFunc_2838("DOING TO BIKE RUNNING");
			break;
		
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_163 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (iLocal_161 == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0) || iLocal_162 == PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))
				{
					GlobalFunc_146(&iLocal_293);
					GlobalFunc_146(&iLocal_295);
					RECORDING::_0x293220DA1B46CEBC(5f, 15f, 1);
					iLocal_158 = 2;
				}
			}
			break;
		
		case 2:
			GlobalFunc_2838("DOING TO BIKE CLEANUP");
			if (!iLocal_338)
			{
				GlobalFunc_587();
				if (func_428())
				{
					GlobalFunc_2838("Loaded bike resources");
					iLocal_338 = 1;
				}
			}
			else
			{
				if (iLocal_163 == 0)
				{
					iLocal_163 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				}
				HUD::CLEAR_THIS_PRINT("FATIC3_12");
				if (!iLocal_345)
				{
					func_351(&Local_203);
				}
				else
				{
					iLocal_293 = GlobalFunc_2324(Local_203[iLocal_300 /*3*/], 5, 0);
					HUD::SET_BLIP_COLOUR(iLocal_293, 5);
					if (iLocal_300 == (iLocal_299 - 1))
					{
						HUD::SET_BLIP_SPRITE(iLocal_293, 38);
					}
					if (iLocal_300 == (iLocal_299 - 2))
					{
						iLocal_294 = GlobalFunc_2324(Local_203[iLocal_300 + 1 /*3*/], 5, 0);
						HUD::SET_BLIP_SCALE(iLocal_294, 1.2f);
						HUD::SET_BLIP_SPRITE(iLocal_294, 38);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_294, 0);
					}
					else if (iLocal_300 < (iLocal_299 - 1))
					{
						iLocal_294 = GlobalFunc_2324(Local_203[iLocal_300 + 1 /*3*/], 5, 0);
						HUD::SET_BLIP_SCALE(iLocal_294, 0.7f);
						HUD::SHOW_HEIGHT_ON_BLIP(iLocal_294, 0);
					}
					iLocal_345 = 0;
					func_352(&Local_203);
				}
				if (iLocal_326 == 0)
				{
					GlobalFunc_164("FATIC3_3", 7500, 1);
					iLocal_326 = 1;
				}
				iLocal_319 = MISC::GET_GAME_TIMER();
				iLocal_156 = 3;
				iLocal_158 = 0;
			}
			break;
	}
}

int func_428()//Position - 0x322B9
{
	STREAMING::REQUEST_MODEL(joaat("patriot"));
	STREAMING::REQUEST_MODEL(joaat("a_f_m_ktown_02"));
	TASK::REQUEST_WAYPOINT_RECORDING("Fan3_baddriver");
	VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Fan3_MaryAnnBikeJump");
	TASK::REQUEST_WAYPOINT_RECORDING("Fan3_pedBike");
	STREAMING::REQUEST_MODEL(joaat("s_m_m_dockwork_01"));
	STREAMING::REQUEST_ANIM_DICT("rcmfanatic3");
	if ((((((!STREAMING::HAS_MODEL_LOADED(joaat("patriot")) || !STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_ktown_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_dockwork_01"))) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_baddriver")) || !VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Fan3_MaryAnnBikeJump")) || !TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_pedBike")) || !STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic3"))
	{
		GlobalFunc_2838("Waiting for bike resources");
		return 0;
	}
	GlobalFunc_6692(&iLocal_166);
	iLocal_166 = VEHICLE::CREATE_VEHICLE(joaat("patriot"), -206.0824f, 6557.376f, 11.0625f, 220.94f, 1, 1);
	GlobalFunc_69(&iLocal_173);
	if (GlobalFunc_4947(iLocal_166) && !GlobalFunc_115(iLocal_173))
	{
		iLocal_173 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_166, 26, joaat("a_f_m_ktown_02"), -1, 1, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("patriot"));
	if (GlobalFunc_115(iLocal_173))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_173, 1);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_m_ktown_02"));
	GlobalFunc_69(&iLocal_174);
	iLocal_174 = PED::CREATE_PED(26, joaat("s_m_m_dockwork_01"), -185.1444f, 6561.338f, 10.1026f, 310f, 1, 1);
	if (GlobalFunc_115(iLocal_174))
	{
		TASK::TASK_PLAY_ANIM(iLocal_174, "rcmfanatic3", "KNEEL_IDLE_A", 8f, -8f, -1, 1, 0, 0, 0, 0);
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_dockwork_01"));
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Local_348, Local_351, fLocal_354, 0, 0, 0, 0, 0);
	GlobalFunc_500(&uLocal_733);
	GlobalFunc_499(&uLocal_733, -669.58f, 6153.29f, 0.45f);
	GlobalFunc_499(&uLocal_733, -522.75f, 6317.6f, 9.79f);
	GlobalFunc_499(&uLocal_733, -221.87f, 6550.84f, 8.87f);
	GlobalFunc_499(&uLocal_733, -220.85f, 6657.39f, 0.47f);
	GlobalFunc_499(&uLocal_733, -98.01f, 6746.05f, 0.66f);
	GlobalFunc_499(&uLocal_733, 58.62f, 6800.74f, 19.35f);
	GlobalFunc_499(&uLocal_733, 92.21f, 6746.91f, 37.55f);
	GlobalFunc_499(&uLocal_733, -346.8f, 6373.35f, 20.4f);
	GlobalFunc_499(&uLocal_733, -464f, 6242.33f, 27.31f);
	GlobalFunc_499(&uLocal_733, -478.26f, 6133.85f, 13.53f);
	GlobalFunc_499(&uLocal_733, -632.49f, 6112.85f, 9.95f);
	GlobalFunc_499(&uLocal_733, -679.62f, 6097.66f, 2.07f);
	GlobalFunc_499(&uLocal_733, -721.78f, 6112.86f, -0.68f);
	GlobalFunc_498(&uLocal_733);
	GlobalFunc_173(&uLocal_403, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	GlobalFunc_173(&uLocal_403, 3, iLocal_306, "MARYANN", 0, 1);
	iLocal_328 = 0;
	if (!iLocal_340)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_CYCLE");
		GlobalFunc_2838("Starting bike music");
	}
	return 1;
}


void func_430()//Position - 0x325DD
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	func_310();
	func_337();
	func_307();
	switch (iLocal_158)
	{
		case 0:
			GlobalFunc_2838("DOING SWIM SETUP");
			GlobalFunc_4923(&Local_95, 0, 1);
			func_304();
			func_361();
			func_301();
			func_435();
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				GlobalFunc_173(&uLocal_403, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			}
			if (GlobalFunc_115(iLocal_306))
			{
				GlobalFunc_173(&uLocal_403, 3, iLocal_306, "MARYANN", 0, 1);
			}
			iLocal_340 = 0;
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 4000, 0, 1, 0);
			func_434();
			func_433(0, 1, 1);
			GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_OPENER", 8, 1, 0, 0);
			GlobalFunc_164("FATIC3_1", 7500, 1);
			GlobalFunc_2838("DOING SWIM RUNNING");
			RECORDING::_0x293220DA1B46CEBC(0f, 15f, 1);
			iLocal_158 = 1;
			break;
		
		case 1:
			if (!Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticHelp)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_159("FAN_HELP", -1);
					Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticHelp = 1;
				}
			}
			func_304();
			func_361();
			func_301();
			func_435();
			func_434();
			if (iLocal_291 != 0)
			{
				iLocal_292 = (iLocal_292 - 25);
				if (iLocal_292 > 0)
				{
					HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
					GRAPHICS::SET_CHECKPOINT_RGBA(iLocal_291, uVar0, uVar1, uVar2, iLocal_292);
					GRAPHICS::SET_CHECKPOINT_RGBA2(iLocal_291, iVar0, iVar1, iVar2, iLocal_292);
				}
				else
				{
					GRAPHICS::DELETE_CHECKPOINT(iLocal_291);
				}
			}
			if (func_266(&Local_181))
			{
				iLocal_158 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_2838("DOING SWIM CLEANUP");
			if (GlobalFunc_111())
			{
				if (!GlobalFunc_5664("FAN3_SWIMWIN") || !GlobalFunc_5664("FAN3_SWIMLOS"))
				{
					GlobalFunc_4935();
				}
			}
			iLocal_293 = GlobalFunc_5743(iLocal_161, 1, 5);
			iLocal_300 = 0;
			iLocal_299 = 11;
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
			{
				GlobalFunc_164("FATIC3_12", 7500, 1);
			}
			else
			{
				GlobalFunc_164("FATIC3_2", 7500, 1);
				iLocal_295 = GlobalFunc_5743(iLocal_162, 1, 5);
			}
			if (iLocal_156 < iLocal_157)
			{
				GlobalFunc_2838("Player lost swimming");
				iLocal_304 = 0;
			}
			else
			{
				GlobalFunc_2838("Player won swimming");
				iLocal_304 = 1;
			}
			GlobalFunc_11077(1, "Bike section", 0, 0, 0, 1);
			Global_89962.f_12[0] = iLocal_363;
			iLocal_338 = 0;
			iLocal_158 = 0;
			iLocal_156 = 2;
			break;
	}
}



void func_433(int iParam0, int iParam1, int iParam2)//Position - 0x32852
{
	func_219(0, 0, iParam2, 1);
	if (iParam0 == 1)
	{
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
	if (iParam1 == 1)
	{
		GlobalFunc_79(500, 0);
	}
}

void func_434()//Position - 0x32886
{
	if (iLocal_308 && GlobalFunc_115(iLocal_306))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_309) <= 5000)
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_306, 3f);
		}
	}
}

void func_435()//Position - 0x328B6
{
	if (iLocal_300 > 4)
	{
		if (!iLocal_332)
		{
			if (!PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_COLD", 8, 0, 0, 0))
					{
						iLocal_332 = 1;
					}
				}
			}
		}
	}
}

void func_436()//Position - 0x328FC
{
	int iVar0;
	
	iLocal_159 = joaat("scorcher");
	if (GlobalFunc_199() && !iLocal_340)
	{
		GlobalFunc_2838("Replay in progress - skipping cutscene and jumping to checkpointed stage...");
		func_466();
		iVar0 = GlobalFunc_198();
		GlobalFunc_2837("ReplayStage: ", iVar0);
		if (Global_84544 == 1)
		{
			iVar0++;
			GlobalFunc_2837("ReplayStage after shitskip: ", iVar0);
		}
		switch (iVar0)
		{
			case 0:
				func_449(1, 0);
				break;
			
			case 1:
				func_449(2, 0);
				break;
			
			case 2:
				func_449(3, 0);
				break;
			
			case 3:
				func_449(4, 0);
				break;
			
			default:
				break;
		}
	}
	else if (iLocal_323 == 0)
	{
		if (iLocal_322 == 0)
		{
			GlobalFunc_10364("ef_3_rcm_concat", 0);
			GlobalFunc_2838("Requesting cutscene...");
			iLocal_322 = 1;
		}
		else
		{
			GlobalFunc_2838("Waiting for cutscene...");
		}
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_2838("Trying to set Mary Ann component variation");
			if (GlobalFunc_115(iLocal_306))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", iLocal_306, 0);
			}
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", PLAYER::PLAYER_PED_ID(), 0);
			}
		}
		iLocal_320 = 0;
		if (GlobalFunc_7961(1, 1093140480, 0))
		{
			func_466();
			if (GlobalFunc_115(iLocal_306))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_306, "Mary_Ann", 0, 0, 0);
			}
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			GlobalFunc_9161();
			PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
			CAM::STOP_GAMEPLAY_HINT(0);
			RECORDING::_0x48621C9FCA3EBD28(1);
			CUTSCENE::START_CUTSCENE(0);
			SYSTEM::WAIT(0);
			GlobalFunc_9805(-921.5067f, 6138.839f, 3.262831f, -903.9019f, 6142.16f, 9.201322f, 14.5f, -913.52f, 6151.76f, 4.74f, 317.56f, GlobalFunc_625(), 1, 1, 1, 0, 0);
			GlobalFunc_9805(-867.7527f, 6134.874f, -0.996085f, -913.1636f, 6140.983f, 7.133643f, 13.5f, -913.52f, 6151.76f, 4.74f, 317.56f, GlobalFunc_625(), 1, 1, 1, 0, 0);
			func_246(-915.46f, 6139.21f, 4.52f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
			GlobalFunc_2838("Starting cutscene...");
			iLocal_323 = 1;
		}
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_159);
		TASK::REQUEST_WAYPOINT_RECORDING("Fan3_RollingStart");
		HUD::REQUEST_ADDITIONAL_TEXT("FATIC3", 0);
		if (iLocal_320 == 0)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				GlobalFunc_2838("*** Cam exit state pitch/heading");
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				iLocal_324 = 1;
				iLocal_320 = 1;
			}
			if (func_442())
			{
				iLocal_320 = 1;
			}
			func_441();
			func_434();
		}
		else if (iLocal_320 == 1)
		{
			func_441();
			func_434();
			func_442();
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (iLocal_324 == 1)
				{
					if (GlobalFunc_115(iLocal_306))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_306, -903.2273f, 6142.639f, 4.1911f, 1, 1, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_306, 264.8848f);
					}
					if (!iLocal_335)
					{
						GlobalFunc_2838("*** Cutscene skip detected");
						func_439(1, 1);
						func_311(1);
						if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
						{
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						}
						iLocal_335 = 1;
					}
				}
				GlobalFunc_11077(0, "Swim section", 0, 0, 0, 1);
				iLocal_362 = MISC::GET_GAME_TIMER();
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("FANATIC_MIX_SCENE");
					if (GlobalFunc_115(iLocal_306))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_306, "FANATIC_MIX_MARY_ANNE", 0);
					}
				}
				func_437();
			}
		}
	}
}

void func_437()//Position - 0x32C6E
{
	func_311(1);
	STREAMING::REQUEST_MODEL(iLocal_159);
	TASK::REQUEST_WAYPOINT_RECORDING("Fan3_RollingStart");
	HUD::REQUEST_ADDITIONAL_TEXT("FATIC3", 0);
	while ((!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_RollingStart") || !HUD::HAS_ADDITIONAL_TEXT_LOADED(0)) || !STREAMING::HAS_MODEL_LOADED(iLocal_159))
	{
		func_434();
		GlobalFunc_2838("Waiting for swim assets...");
		SYSTEM::WAIT(0);
	}
	GlobalFunc_500(&uLocal_733);
	GlobalFunc_499(&uLocal_733, -911.33f, 6156.95f, 3.78f);
	GlobalFunc_499(&uLocal_733, -833.3f, 6159.46f, 1.19f);
	GlobalFunc_499(&uLocal_733, -712.84f, 6161.51f, 0.18f);
	GlobalFunc_499(&uLocal_733, -653.84f, 6154.68f, 1.39f);
	GlobalFunc_499(&uLocal_733, -651.92f, 6134.7f, 3.2f);
	GlobalFunc_499(&uLocal_733, -683.51f, 6108.33f, 1.6f);
	GlobalFunc_499(&uLocal_733, -922.48f, 6125.13f, 5.71f);
	GlobalFunc_498(&uLocal_733);
	GlobalFunc_173(&uLocal_403, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	GlobalFunc_173(&uLocal_403, 3, iLocal_306, "MARYANN", 0, 1);
	TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("Fan3_RollingStart", 1, 1065353216, 1056964608);
	iLocal_300 = 0;
	iLocal_299 = 7;
	iLocal_156 = 1;
	func_351(&Local_181);
	if (!iLocal_340)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_START");
		GlobalFunc_2838("Starting swim music");
	}
	iLocal_323 = 0;
	iLocal_332 = 0;
	iLocal_319 = MISC::GET_GAME_TIMER();
	if (!GlobalFunc_188())
	{
		func_219(1, 1, 1, 1);
	}
	GlobalFunc_164("FATIC3_1", 7500, 1);
}


void func_439(bool bParam0, bool bParam1)//Position - 0x32E19
{
	if (bParam0)
	{
		func_440(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_246(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_440(bool bParam0, int iParam1, int iParam2)//Position - 0x32E4C
{
	bool bVar0;
	
	bVar0 = true;
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		while (bVar0)
		{
			bVar0 = CUTSCENE::IS_CUTSCENE_ACTIVE();
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CUTSCENE::STOP_CUTSCENE(0);
			}
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			if (CUTSCENE::IS_CUTSCENE_ACTIVE() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				bVar0 = false;
			}
			SYSTEM::WAIT(0);
		}
		if (bParam0)
		{
			func_219(iParam1, iParam2, 1, 1);
		}
	}
}

void func_441()//Position - 0x32EAB
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Mary_Ann", joaat("ig_maryann")))
	{
		if (GlobalFunc_115(iLocal_306))
		{
			PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_306, 3f);
			PED::FORCE_PED_MOTION_STATE(iLocal_306, -1115154469, 0, 1, 0);
			TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_306, Local_181[0 /*3*/], 2f, 20000, 1193033728, 1056964608);
			iLocal_309 = MISC::GET_GAME_TIMER();
			iLocal_308 = 1;
			GlobalFunc_2838("*** Forcing opponent's move state");
		}
	}
}

int func_442()//Position - 0x32F16
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 1, 0);
			PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 5000, 0, 1, 0);
			GlobalFunc_2838("*** Forcing player's move state");
			return 1;
		}
	}
	return 0;
}







void func_449(int iParam0, int iParam1)//Position - 0x33114
{
	if (iLocal_156 == 6)
	{
		CAM::RENDER_SCRIPT_CAMS(0, 0, 0, 1, 0, 0);
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		STREAMING::REMOVE_ANIM_DICT("rcmfanatic1out_of_breath");
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		func_219(1, 1, 1, 1);
		GlobalFunc_79(500, 1);
	}
	PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
	if (iParam1 == 0)
	{
		func_439(1, 1);
	}
	iLocal_340 = 1;
	if (iParam0 == 0)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
		{
			if (GlobalFunc_115(iLocal_306))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_306, 0);
			}
			AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
		}
	}
	else if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		AUDIO::START_AUDIO_SCENE("FANATIC_MIX_SCENE");
		if (GlobalFunc_115(iLocal_306))
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_306, "FANATIC_MIX_MARY_ANNE", 0);
		}
	}
	if (iParam0 == 0)
	{
		func_465();
	}
	else if (iParam0 == 1)
	{
		func_440(1, 1, 1);
		func_464();
	}
	else if (iParam0 == 2)
	{
		func_440(1, 1, 1);
		func_463();
	}
	else if (iParam0 == 3)
	{
		func_440(1, 1, 1);
		func_453();
	}
	else if (iParam0 == 4)
	{
		func_440(1, 1, 1);
		func_450();
	}
}

void func_450()//Position - 0x3322E
{
	func_215();
	func_214();
	HUD::CLEAR_PRINTS();
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_STOP");
	iLocal_315 = 0;
	iLocal_156 = 6;
	iLocal_345 = 0;
	while (!func_353())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_323 = 0;
	iLocal_340 = 0;
	func_452();
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
	}
}


void func_452()//Position - 0x33344
{
	switch (iLocal_156)
	{
		case 0:
			if (GlobalFunc_115(iLocal_306))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_306);
				GlobalFunc_2838("*** Clearing Mary Ann tasks (ma_pSkip())");
				ENTITY::SET_ENTITY_COORDS(iLocal_306, -910.3204f, 6144.248f, 4.2755f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_306, 312.68f);
				GlobalFunc_146(&iLocal_296);
				func_311(0);
			}
			break;
		
		case 1:
			if (GlobalFunc_115(iLocal_306))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_306);
				GlobalFunc_2838("*** Clearing Mary Ann tasks (ma_pSkip() CASE MS_SWIM)");
				ENTITY::SET_ENTITY_COORDS(iLocal_306, -903.2273f, 6142.639f, 4.1911f, 1, 1, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_306, 264.8848f);
				GlobalFunc_146(&iLocal_296);
				func_311(1);
			}
			break;
		
		case 2:
		case 3:
			if (GlobalFunc_115(iLocal_306))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_306);
				GlobalFunc_2838("*** Clearing Mary Ann tasks (ma_pSkip() CASE MS_BIKE)");
				ENTITY::SET_ENTITY_COORDS(iLocal_306, -674.4872f, 6134.139f, 1.072f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_306, 259.44f);
				GlobalFunc_146(&iLocal_296);
				func_311(2);
			}
			break;
		
		case 4:
		case 5:
			iLocal_164 = iLocal_162;
			if (GlobalFunc_115(iLocal_306))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_306);
				GlobalFunc_2838("*** Clearing Mary Ann tasks (ma_pSkip() CASE MS_RUN)");
				ENTITY::SET_ENTITY_COORDS(iLocal_306, 51.1448f, 6773.212f, 19.2801f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_306, 313.146f);
				GlobalFunc_146(&iLocal_296);
				func_311(5);
			}
			break;
	}
}

void func_453()//Position - 0x334B7
{
	func_215();
	func_214();
	if (!GlobalFunc_188())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_277, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_285);
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	if (GlobalFunc_115(iLocal_306))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_306);
		GlobalFunc_2838("*** Clearing Mary Ann tasks (Run skip)");
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_RESTART3");
	iLocal_362 = MISC::GET_GAME_TIMER();
	if (!GlobalFunc_188())
	{
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, 0, 1, 0);
	}
	iLocal_156 = 4;
	iLocal_158 = 0;
	iLocal_345 = 0;
	iLocal_321 = 0;
	iLocal_300 = 0;
	iLocal_299 = 11;
	func_456();
	if (GlobalFunc_4947(iLocal_161))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_161, 49.01611f, 6771.453f, 20.0558f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_161, -62.49037f);
	}
	if (GlobalFunc_4947(iLocal_162))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_162, 52.37f, 6767.48f, 20.66f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_162, 312.42f);
	}
	GlobalFunc_11077(2, "Jog section", 1, 0, 0, 1);
	iLocal_308 = 0;
	iLocal_309 = -1;
	func_358();
	func_454();
	while (!func_353() || !func_313())
	{
		SYSTEM::WAIT(0);
	}
	iLocal_340 = 0;
	func_452();
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, 0, 1, 0);
		SYSTEM::WAIT(1000);
	}
	func_433(1, 1, 1);
}

void func_454()//Position - 0x33649
{
	GlobalFunc_190(&iLocal_167);
	GlobalFunc_2297(&iLocal_175, 1, 0, 1);
	GlobalFunc_129(&iLocal_180, 0);
	GlobalFunc_2297(&iLocal_177, 1, 0, 1);
	GlobalFunc_2297(&iLocal_178, 1, 0, 1);
	GlobalFunc_2297(&iLocal_179, 1, 0, 1);
	GlobalFunc_190(&iLocal_168);
	GlobalFunc_2297(&iLocal_176, 1, 0, 1);
}


void func_456()//Position - 0x336CC
{
	if (GlobalFunc_4947(iLocal_164))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_164, 0);
		}
	}
	if (GlobalFunc_4947(iLocal_161) && GlobalFunc_4947(iLocal_162))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_161))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_161);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_162);
		}
		ENTITY::SET_ENTITY_COORDS(iLocal_161, -664.34f, 6138.38f, 1.2f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_161, 235f);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_161, 1);
		ENTITY::SET_ENTITY_COORDS(iLocal_162, -664.32f, 6133.73f, 2.4f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_162, -84.69f);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_162, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_161);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_162);
	}
	else
	{
		if (!GlobalFunc_4947(iLocal_161))
		{
			iLocal_161 = VEHICLE::CREATE_VEHICLE(iLocal_159, -664.34f, 6138.38f, 1.2f, 235f, 1, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_161, 235f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_161, 1);
		}
		if (!GlobalFunc_4947(iLocal_162))
		{
			iLocal_162 = VEHICLE::CREATE_VEHICLE(iLocal_159, -664.32f, 6133.73f, 2.4f, -84.69f, 1, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_162, -84.69f);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_162, 2);
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_161);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_162);
	}
	iLocal_164 = 0;
	iLocal_163 = 0;
}







void func_463()//Position - 0x339F4
{
	if (!GlobalFunc_188())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_274, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_284);
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_RESTART2");
	iLocal_362 = MISC::GET_GAME_TIMER();
	fLocal_837 = 0f;
	if (!GlobalFunc_188())
	{
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 1200, 0, 1, 0);
	}
	func_215();
	func_214();
	iLocal_293 = GlobalFunc_5743(iLocal_161, 1, 5);
	iLocal_156 = 2;
	iLocal_158 = 0;
	iLocal_164 = iLocal_162;
	iLocal_300 = 0;
	iLocal_299 = 11;
	if (!GlobalFunc_115(iLocal_161) || !GlobalFunc_115(iLocal_162))
	{
	}
	iLocal_345 = 0;
	iLocal_334 = 0;
	iLocal_338 = 0;
	iLocal_339 = 0;
	iLocal_321 = 0;
	iLocal_298 = 0;
	iLocal_310 = 0;
	iLocal_308 = 0;
	iLocal_309 = -1;
	GlobalFunc_11077(1, "Bike section", 0, 0, 0, 1);
	GlobalFunc_587();
	func_454();
	while (!func_428())
	{
		SYSTEM::WAIT(0);
		iLocal_338 = 1;
	}
	func_456();
	func_452();
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 1200, 0, 1, 0);
		PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 0, 0);
		SYSTEM::WAIT(1000);
	}
	func_433(1, 1, 1);
	HUD::CLEAR_PRINTS();
	GlobalFunc_164("FATIC3_2", 7500, 1);
}

void func_464()//Position - 0x33B56
{
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::STOP_CUTSCENE(0);
	}
	iLocal_362 = MISC::GET_GAME_TIMER();
	func_215();
	func_214();
	if (GlobalFunc_115(iLocal_306))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_306, -903.2273f, 6142.639f, 4.1911f, 1, 1, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_306, 264.8848f);
	}
	if (!GlobalFunc_188())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_271, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_283);
		GlobalFunc_8326(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1112014848, 12, 5000, 0, 0);
	}
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC3_RESTART1");
	GlobalFunc_2838("Skipping to swim");
	iLocal_156 = 1;
	iLocal_158 = 0;
	iLocal_301 = 0;
	iLocal_300 = 0;
	iLocal_299 = 7;
	iLocal_302 = 7;
	iLocal_335 = 0;
	iLocal_345 = 0;
	iLocal_321 = 0;
	iLocal_338 = 0;
	iLocal_339 = 0;
	iLocal_308 = 1;
	iLocal_309 = MISC::GET_GAME_TIMER();
	func_454();
	func_358();
	func_437();
	func_456();
	func_452();
	if (GlobalFunc_188())
	{
		GlobalFunc_4967(0, -1, 1);
		PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 4000, 0, 1, 0);
		SYSTEM::WAIT(500);
	}
	func_433(1, 1, 1);
}

void func_465()//Position - 0x33C6D
{
	func_215();
	func_214();
	iLocal_156 = 0;
	iLocal_158 = 0;
	GlobalFunc_2838("Skipping to intro");
	iLocal_301 = 0;
	iLocal_300 = 0;
	iLocal_299 = 7;
	iLocal_302 = 7;
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_STOP");
	iLocal_320 = 0;
	iLocal_322 = 0;
	iLocal_323 = 0;
	iLocal_345 = 0;
	iLocal_308 = 0;
	iLocal_309 = -1;
	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -909.0488f, 6142.617f, 4.2883f, 1, 0, 0, 1);
	func_452();
	func_433(1, 1, 1);
}

void func_466()//Position - 0x33CE3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Local_367[0 /*7*/][iVar0 /*2*/] = 0;
		Local_367[1 /*7*/][iVar0 /*2*/] = 0;
		Local_367[2 /*7*/][iVar0 /*2*/] = 0;
		iVar0++;
	}
	Local_367[0 /*7*/][0 /*2*/].f_1 = "FAN3_SW1";
	Local_367[0 /*7*/][1 /*2*/].f_1 = "FAN3_SW2";
	Local_367[1 /*7*/][0 /*2*/].f_1 = "FAN3_1WON1";
	Local_367[1 /*7*/][2 /*2*/].f_1 = "FAN3_GEN2";
	Local_367[2 /*7*/][1 /*2*/].f_1 = "FAN3_1LOSS2";
	Local_367[2 /*7*/][2 /*2*/].f_1 = "FAN3_GEN2";
	Local_367[3 /*7*/][1 /*2*/].f_1 = "FAN3_2WON2";
	Local_367[3 /*7*/][2 /*2*/].f_1 = "FAN3_GEN3";
	Local_367[4 /*7*/][0 /*2*/].f_1 = "FAN3_2LOSS1";
	Local_367[4 /*7*/][2 /*2*/].f_1 = "FAN3_GEN3";
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (func_468(3))
		{
			Local_367[2 /*7*/][0 /*2*/].f_1 = "FAN3_1LOSS1B";
			Local_367[1 /*7*/][1 /*2*/].f_1 = "FAN3_1WON2B";
			Local_367[3 /*7*/][0 /*2*/].f_1 = "FAN3_2WON1B";
			Local_367[4 /*7*/][1 /*2*/].f_1 = "FAN3_2LOSS2B";
		}
		else
		{
			Local_367[2 /*7*/][0 /*2*/].f_1 = "FAN3_1LOSS1A";
			Local_367[3 /*7*/][0 /*2*/].f_1 = "FAN3_2WON1A";
			Local_367[1 /*7*/][1 /*2*/].f_1 = "FAN3_1WON2A";
			Local_367[4 /*7*/][1 /*2*/].f_1 = "FAN3_2LOSS2A";
		}
	}
	Local_203[0 /*3*/] = { -624.82f, 6164.18f, 2.71f };
	Local_203[1 /*3*/] = { -569.97f, 6172.85f, 5.51f };
	Local_203[2 /*3*/] = { -510.38f, 6213.4f, 9.35f };
	Local_203[3 /*3*/] = { -497.67f, 6272.69f, 10.6f };
	Local_203[4 /*3*/] = { -476.6988f, 6310.297f, 12.6412f };
	Local_203[5 /*3*/] = { -452.44f, 6356.24f, 11.58f };
	Local_203[6 /*3*/] = { -410.0162f, 6381.526f, 13.0197f };
	Local_203[7 /*3*/] = { -324.23f, 6429.89f, 11.94f };
	Local_203[8 /*3*/] = { -197.2431f, 6543.643f, 10.0969f };
	Local_203[9 /*3*/] = { -5.04f, 6728.77f, 18.69f };
	Local_203[10 /*3*/] = { 50.6f, 6770.79f, 19.5f };
	Local_237[0 /*3*/] = { 90.94f, 6804.34f, 18.4f };
	Local_237[1 /*3*/] = { 117.87f, 6829.98f, 15.7f };
	Local_237[2 /*3*/] = { 101.52f, 6851.33f, 14.67f };
	Local_237[3 /*3*/] = { 67.33f, 6889.14f, 12.48f };
	Local_237[4 /*3*/] = { 48.75f, 6927.61f, 13.21f };
	Local_237[5 /*3*/] = { 61.77f, 6955.45f, 10.81f };
	Local_237[6 /*3*/] = { 47.11f, 6965.58f, 9.81f };
	Local_237[7 /*3*/] = { 36.23f, 6995.43f, 7.34f };
	Local_237[8 /*3*/] = { 51.32f, 7024.07f, 8.87f };
	Local_237[9 /*3*/] = { 68.42f, 7030.54f, 11.75f };
	Local_237[10 /*3*/] = { 61.6f, 7049.5f, 15.45f };
	GlobalFunc_500(&uLocal_785);
	GlobalFunc_499(&uLocal_785, -669.58f, 6153.29f, 0.45f);
	GlobalFunc_499(&uLocal_785, -522.75f, 6317.6f, 9.79f);
	GlobalFunc_499(&uLocal_785, -221.87f, 6550.84f, 8.87f);
	GlobalFunc_499(&uLocal_785, -220.85f, 6657.39f, 0.47f);
	GlobalFunc_499(&uLocal_785, -98.01f, 6746.05f, 0.66f);
	GlobalFunc_499(&uLocal_785, 82.53f, 6814.59f, 17.29f);
	GlobalFunc_499(&uLocal_785, 100.83f, 6770.48f, 28.49f);
	GlobalFunc_499(&uLocal_785, -346.8f, 6373.35f, 20.4f);
	GlobalFunc_499(&uLocal_785, -464f, 6242.33f, 27.31f);
	GlobalFunc_499(&uLocal_785, -478.26f, 6133.85f, 13.53f);
	GlobalFunc_499(&uLocal_785, -632.49f, 6112.85f, 9.95f);
	GlobalFunc_499(&uLocal_785, -679.62f, 6097.66f, 2.07f);
	GlobalFunc_499(&uLocal_785, -721.78f, 6112.86f, -0.68f);
	GlobalFunc_498(&uLocal_785);
	func_467(-888.0333f, 6142.658f, 2.3874f, -679.05f, 6139.86f, 0.7f, &Local_181, 7);
	iLocal_159 = joaat("scorcher");
	sLocal_307 = "Fan3_pedBike";
	if (GlobalFunc_199())
	{
		iLocal_364 = Global_89962.f_12[0];
	}
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-191.0984f, 6550.964f, 10.0973f, -199.4099f, 6542.312f, 11.09729f, 0, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-226.3857f, 6498.877f, 9.2147f, -173.1313f, 6595.771f, 20.7218f, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_348, Local_351, fLocal_354, 0, 0, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	STREAMING::REQUEST_MODEL(iLocal_159);
	STREAMING::REQUEST_ANIM_SET("FEMALE_FAST_RUNNER");
	while (!STREAMING::HAS_MODEL_LOADED(iLocal_159) || !STREAMING::HAS_ANIM_SET_LOADED("FEMALE_FAST_RUNNER"))
	{
		SYSTEM::WAIT(0);
	}
	func_456();
	if (GlobalFunc_115(iLocal_306))
	{
		PED::SET_PED_DIES_IN_WATER(iLocal_306, 0);
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_306, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_306, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_306, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_306, 0);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_306, 1);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iLocal_306, 1);
		PED::SET_PED_MOVEMENT_CLIPSET(iLocal_306, "FEMALE_FAST_RUNNER", 1048576000);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_306, 0);
	}
}

void func_467(struct<3> Param0, struct<3> Param3, var uParam6, int iParam7)//Position - 0x342AB
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	Var1 = { Param3 - Param0 };
	Var1 = { Var1 / FtoV(SYSTEM::TO_FLOAT((iParam7 - 1))) };
	iVar0 = 0;
	while (iVar0 < iParam7)
	{
		*(uParam6[iVar0 /*3*/]) = { Param0 + Var1 * FtoV(SYSTEM::TO_FLOAT(iVar0)) };
		iVar0++;
	}
}

int func_468(int iParam0)//Position - 0x34301
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_469(iParam0, 12))
			{
				return 1;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (iVar0 != 12)
				{
					if (!func_469(iParam0, iVar0))
					{
						return 0;
					}
				}
				iVar0++;
			}
			return 1;
			break;
		
		case 3:
			if (GlobalFunc_10911(PLAYER::PLAYER_PED_ID(), 12, 6))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_469(int iParam0, int iParam1)//Position - 0x3437B
{
	int iVar0;
	
	if (iParam1 != 14)
	{
		iVar0 = GlobalFunc_11032(PLAYER::PLAYER_PED_ID(), iParam1, -1);
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 3:
					if ((((((iVar0 == 69 || (iVar0 >= 17 && iVar0 <= 32)) || iVar0 == 69) || (iVar0 >= 77 && iVar0 <= 84)) || (iVar0 >= 85 && iVar0 <= 90)) || (iVar0 >= 113 && iVar0 <= 128)) || (iVar0 >= 171 && iVar0 <= 173))
					{
						return 1;
					}
					break;
				
				case 4:
					if (((iVar0 == 40 || (iVar0 >= 41 && iVar0 <= 45)) || (iVar0 >= 89 && iVar0 <= 91)) || (iVar0 >= 96 && iVar0 <= 111))
					{
						return 1;
					}
					break;
				
				case 6:
					if (((iVar0 == 6 || iVar0 == 13) || iVar0 == 7) || (iVar0 >= 20 && iVar0 <= 29))
					{
						return 1;
					}
					break;
				
				case 8:
					if (((iVar0 == 0 || iVar0 == 10) || iVar0 == 11) || iVar0 == 16)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iVar0 == 0)
					{
						return 1;
					}
					break;
				
				case 12:
					if (iVar0 == 13 || iVar0 == 9)
					{
						return 1;
					}
					break;
				
				case 14:
					iVar0 = GlobalFunc_11032(PLAYER::PLAYER_PED_ID(), iParam1, 1);
					if ((((((iVar0 == 58 || (iVar0 >= 70 && iVar0 <= 79)) || iVar0 == 61) || (iVar0 >= 62 && iVar0 <= 69)) || (iVar0 >= 80 && iVar0 <= 89)) || (iVar0 >= 91 && iVar0 <= 102)) || (iVar0 >= 103 && iVar0 <= 110))
					{
						return 1;
					}
					if (!func_470(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
					break;
				
				default:
					return 1;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 3:
					if ((((((((iVar0 >= 0 && iVar0 <= 15) || (iVar0 >= 18 && iVar0 <= 26)) || iVar0 == 53) || (iVar0 >= 54 && iVar0 <= 69)) || (iVar0 >= 79 && iVar0 <= 94)) || iVar0 == 95) || (iVar0 >= 120 && iVar0 <= 135)) || (iVar0 >= 162 && iVar0 <= 177))
					{
						return 1;
					}
					break;
				
				case 4:
					if (((iVar0 == 17 || iVar0 == 33) || (iVar0 >= 54 && iVar0 <= 61)) || iVar0 == 91)
					{
						return 1;
					}
					break;
				
				case 6:
					if ((iVar0 == 8 || iVar0 == 11) || iVar0 == 34)
					{
						return 1;
					}
					break;
				
				case 8:
					if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 10) || iVar0 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iVar0 == 0 || iVar0 == 7)
					{
						return 1;
					}
					break;
				
				case 12:
					if (iVar0 == 5 || iVar0 == 9)
					{
						return 1;
					}
					break;
				
				case 14:
					iVar0 = GlobalFunc_11032(PLAYER::PLAYER_PED_ID(), iParam1, 1);
					if (((((((iVar0 == 89 || (iVar0 >= 100 && iVar0 <= 109)) || iVar0 == 111) || (iVar0 >= 113 && iVar0 <= 122)) || (iVar0 >= 123 && iVar0 <= 132)) || (iVar0 >= 133 && iVar0 <= 142)) || (iVar0 >= 90 && iVar0 <= 99)) || (iVar0 >= 143 && iVar0 <= 152))
					{
						return 1;
					}
					if (!func_470(PLAYER::PLAYER_PED_ID()))
					{
						return 1;
					}
					break;
				
				default:
					return 1;
					break;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_470(int iParam0)//Position - 0x3482D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (PED::GET_PED_PROP_INDEX(uParam0, iVar0) != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_471()//Position - 0x34859
{
	int iVar0;
	
	GlobalFunc_8535();
	switch (iLocal_158)
	{
		case 0:
			GlobalFunc_2838("Doing leadin init");
			if (GlobalFunc_199() && !iLocal_340)
			{
				GlobalFunc_2838("Replay in progress - skipping leadin & cutscene and jumping to checkpointed stage...");
				func_466();
				if (GlobalFunc_115(iLocal_306))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_306, 0);
				}
				iVar0 = GlobalFunc_198();
				GlobalFunc_2837("ReplayStage: ", iVar0);
				if (Global_84544 == 1)
				{
					iVar0++;
					GlobalFunc_2837("ReplayStage after shitskip: ", iVar0);
				}
				switch (iVar0)
				{
					case 0:
						if (GlobalFunc_199())
						{
							GlobalFunc_4972(Local_271, fLocal_283, 1, 0);
						}
						func_449(1, 1);
						break;
					
					case 1:
						if (GlobalFunc_199())
						{
							GlobalFunc_4972(Local_274, fLocal_284, 1, 0);
						}
						func_449(2, 1);
						break;
					
					case 2:
						if (GlobalFunc_199())
						{
							GlobalFunc_4972(Local_277, fLocal_285, 1, 0);
						}
						func_449(3, 1);
						break;
					
					case 3:
						if (GlobalFunc_199())
						{
							GlobalFunc_4972(Local_280, fLocal_286, 1, 0);
						}
						func_449(4, 1);
						break;
					
					default:
						break;
				}
			}
			else if (GlobalFunc_2(0))
			{
				GlobalFunc_2838("Skipping leadin because repeat play is active");
				iLocal_158 = 2;
			}
			STREAMING::REQUEST_ANIM_DICT("rcmfanatic3");
			GlobalFunc_173(&uLocal_403, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			GlobalFunc_173(&uLocal_403, 3, iLocal_306, "MARYANN", 0, 1);
			if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_306, 1) <= 1.5f)
			{
				if (GlobalFunc_111())
				{
					GlobalFunc_4956();
				}
				GlobalFunc_2838("Player too close to Mary Ann, starting cutscene early");
				iLocal_158 = 2;
			}
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic3"))
			{
				if (GlobalFunc_115(iLocal_306))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_306, "rcmfanatic3", "ef_3_rcm_loop_maryann", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_306, "rcmfanatic3", "ef_3_rcm_loop_maryann") < 0.1f)
						{
							TASK::TASK_PLAY_ANIM(iLocal_306, "rcmfanatic3", "ef_3_rcm_action_maryann", 8f, -8f, -1, 2, 0, 0, 0, 0);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_306, 0);
							CUTSCENE::REMOVE_CUTSCENE();
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("EF_3_RCM_CONCAT", 2, 8);
							iLocal_322 = 1;
							if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
							{
								if (GlobalFunc_115(iLocal_306))
								{
									CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_306, 0f, 0f, -0.5f, 1, 30000, 2000, 2000, 0);
									if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_306, 1) <= 7f)
									{
										GlobalFunc_2838("Using FOV 40 instead");
										fLocal_357 = 40f;
									}
									CAM::SET_GAMEPLAY_HINT_FOV(fLocal_357);
									CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_358);
									CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_359);
									CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_360);
									CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_361);
									CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
								}
							}
							else
							{
								CAM::_0xCCD078C2665D2973(1);
							}
							GlobalFunc_8380(1, 1, 0, 0);
							GlobalFunc_2838("Done Mary Ann leadin anim");
							iLocal_158 = 1;
						}
					}
					else if (iLocal_156 == -1)
					{
						GlobalFunc_2838("Mary Ann not in leadin loop, starting cutscene early");
						iLocal_158 = 2;
					}
					else
					{
						GlobalFunc_2838("Mary Ann not in leadin loop, but not in leadin stage, not doing anything!");
					}
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_4924(iLocal_306))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_306, "rcmfanatic3", "ef_3_rcm_action_maryann", 3))
				{
					if (!iLocal_356)
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_306, "rcmfanatic3", "ef_3_rcm_action_maryann") > 0.17f)
						{
							if (GlobalFunc_10618(&uLocal_403, "FAN3AUD", "FAN3_LDI", 8, 0, 0, 0))
							{
								iLocal_356 = 1;
							}
						}
					}
					if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						if (GlobalFunc_115(iLocal_306))
						{
							CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_306, 0f, 0f, -0.5f, 1, 30000, 2000, 2000, 0);
							if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_306, 1) <= 7f)
							{
								GlobalFunc_2838("Using FOV 40 instead");
								fLocal_357 = 40f;
							}
							CAM::SET_GAMEPLAY_HINT_FOV(fLocal_357);
							CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_358);
							CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_359);
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_360);
							CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_361);
							CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
						}
					}
					else
					{
						CAM::_0xCCD078C2665D2973(1);
					}
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_306, "rcmfanatic3", "ef_3_rcm_action_maryann") > 0.9f)
					{
						ENTITY::FREEZE_ENTITY_POSITION(iLocal_306, 0);
						GlobalFunc_2838("Mary Ann leadin anim over");
						iLocal_158 = 2;
					}
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_306, 1) <= 2.5f)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_306, 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
						GlobalFunc_2838("Player too close to Mary Ann, starting cutscene early");
					}
				}
				else
				{
					GlobalFunc_2838("Mary Ann not playing leadin anim anymore - skip to cutscene for safety");
					iLocal_158 = 2;
				}
			}
			break;
		
		case 2:
			GlobalFunc_2838("Doing leadin cleanup");
			iLocal_158 = 0;
			iLocal_156 = 0;
			break;
	}
}



void func_474(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x34D54
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_68499 != 6)
	{
		if (Global_68501 == -1)
		{
			if (GlobalFunc_7630(1, Param0))
			{
				if (Global_68502 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_20 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_21 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_20 = 0f;
				}
				else
				{
					fLocal_20 = (fLocal_20 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_20 = 0f;
			}
		}
		else
		{
			if (!GlobalFunc_7630(0, Param0))
			{
				Global_68501 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_68501);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_68499)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar12 = GlobalFunc_8315();
				if (Global_68502 == 1 && Global_68500 == 62)
				{
					iVar12 = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_3214;
				}
				switch (iVar12)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { GlobalFunc_6686(Global_68500, Global_68502, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_25 = 0.14f;
				}
				else
				{
					fLocal_25 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_25)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_21.x, (Local_21.f_1 + fLocal_24));
							Global_68504 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_68503 == 1)
				{
					GlobalFunc_53();
					fLocal_20 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_20 = 0f;
			}
		}
	}
}




















void func_494()//Position - 0x35843
{
	if (GlobalFunc_115(Local_95.f_28[0]))
	{
		iLocal_306 = Local_95.f_28[0];
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_306, 2, 1);
		PED::ADD_RELATIONSHIP_GROUP("Buddy", &iLocal_355);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_306, iLocal_355);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_355, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_355);
		PED::SET_DRIVER_RACING_MODIFIER(iLocal_306, 0.5f);
	}
	else
	{
		STREAMING::REQUEST_MODEL(joaat("ig_maryann"));
		while (!STREAMING::HAS_MODEL_LOADED(joaat("ig_maryann")))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_306 = PED::CREATE_PED(26, joaat("ig_maryann"), 809.66f, 1279.76f, 360.49f, 122.53f, 1, 1);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_306, 2, 1);
		PED::ADD_RELATIONSHIP_GROUP("Buddy", &iLocal_355);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_306, iLocal_355);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_355, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, iLocal_355);
		PED::SET_DRIVER_RACING_MODIFIER(iLocal_306, 0.5f);
	}
	iLocal_157 = 0;
}


int func_496(var uParam0)//Position - 0x35A2B
{
	int iVar0[5];
	int iVar6;
	bool bVar7;
	struct<3> Var8;
	
	iVar0[0] = uLocal_91;
	iVar0[1] = joaat("prop_beach_towel_01");
	iVar0[2] = joaat("prop_energy_drink");
	iVar0[3] = joaat("prop_freeweight_01");
	iVar0[4] = joaat("prop_freeweight_02");
	switch (iLocal_90)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			StringCopy(&(uParam0->f_9), "EF_3_RCM_CONCAT", 24);
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar6]);
				iVar6++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcmfanatic3", "ef_3_rcm_loop_maryann", 0);
			iLocal_90 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_90 = 2;
			break;
		
		case 2:
			bVar7 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (GlobalFunc_8025(&(uParam0->f_28[0]), 61, -915.6f, 6139.192f, 5.525f, 111.24f, "FANATIC LAUNCHER RC", 1))
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_28[0], -915.6f, 6139.192f, 5.525f, 1, 0, 1);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_28[0], 2.52f, 0f, 111.24f, 0, 0);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[0]))
			{
				Var8 = { -916.6389f, 6137.046f, 4.7157f };
				uParam0->f_41[0] = OBJECT::CREATE_OBJECT(iVar0[1], Var8, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[0], -916.6389f, 6137.046f, 4.7157f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[0], 1.7f, 19.1067f, 79.515f, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[0], -0.0949f, 0.1369f, 0.6325f, 0.7564f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[0], 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[1]))
			{
				Var8 = { -917.7f, 6138.89f, 4.72f };
				MISC::GET_GROUND_Z_FOR_3D_COORD(Var8, &(Var8.f_2));
				uParam0->f_41[1] = OBJECT::CREATE_OBJECT(iVar0[2], Var8, 1, 1, 0);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[1], 1);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[1], -6.625818f, 1.30159f, -1.248891f, 0, 0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[2]))
			{
				Var8 = { -915.6122f, 6137.662f, 4.6129f };
				uParam0->f_41[2] = OBJECT::CREATE_OBJECT(iVar0[3], Var8, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[2], -915.6122f, 6137.662f, 4.6129f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[2], -1.6843f, 2.1363f, -0.0913f, 0, 1);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[2], -0.0147f, 0.0187f, -0.0011f, 0.9997f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[2], 1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_41[3]))
			{
				Var8 = { -915.4199f, 6137.855f, 4.6221f };
				uParam0->f_41[3] = OBJECT::CREATE_OBJECT(iVar0[4], Var8, 1, 1, 0);
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam0->f_41[3], -915.4199f, 6137.855f, 4.6221f, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_41[3], -5.793f, 1.496f, -36.333f, 2, 1);
				ENTITY::SET_ENTITY_QUATERNION(uParam0->f_41[3], -0.0439f, 0.0281f, -0.312f, 0.9487f);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_41[3], 1);
			}
			if (bVar7)
			{
				iLocal_90 = 3;
			}
			break;
		
		case 3:
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar6]);
				iVar6++;
			}
			return 1;
			break;
	}
	return 0;
}










void func_506()//Position - 0x36026
{
	GlobalFunc_9161();
	if (GlobalFunc_9162())
	{
	}
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
	}
	GlobalFunc_146(&iLocal_296);
	func_215();
	func_214();
	if (GlobalFunc_115(iLocal_306))
	{
		if (GlobalFunc_4947(iLocal_168))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_306, iLocal_168, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
				TASK::TASK_ENTER_VEHICLE(0, iLocal_168, 20000, -1, 1f, 1, 0);
				TASK::TASK_GO_TO_COORD_ANY_MEANS(0, 253.0988f, 6751.997f, 14.2161f, 1f, 0, 0, 786603, -1082130432);
				TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_168, 15f, 786599);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_306, uLocal_365);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
			}
		}
		else
		{
			TASK::TASK_WANDER_STANDARD(iLocal_306, ENTITY::GET_ENTITY_HEADING(iLocal_306), 0);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_306, 1);
		GlobalFunc_190(&iLocal_168);
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_164, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_306))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_306, 0);
		}
		AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
	}
	GlobalFunc_2297(&iLocal_173, 1, 0, 1);
	GlobalFunc_2297(&iLocal_174, 1, 0, 1);
	GlobalFunc_190(&iLocal_166);
	if (GlobalFunc_115(iLocal_175))
	{
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_175, 2, 1);
		PED::SET_PED_KEEP_TASK(iLocal_175, 1);
		if (GlobalFunc_115(iLocal_167) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_365);
			TASK::TASK_ENTER_VEHICLE(0, iLocal_167, 20000, -1, 3f, 8, 0);
			TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_365);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_175, uLocal_365);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_365);
		}
		GlobalFunc_2297(&iLocal_175, 1, 0, 1);
	}
	GlobalFunc_2297(&iLocal_177, 1, 0, 1);
	GlobalFunc_2297(&iLocal_176, 1, 0, 1);
	GlobalFunc_190(&iLocal_167);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	GlobalFunc_2297(&iLocal_306, 1, 1, 1);
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_STOP");
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(129.2214f, 6658.975f, 30.17703f, 140.8783f, 6646.863f, 36.36416f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-191.0984f, 6550.964f, 10.0973f, -199.4099f, 6542.312f, 11.09729f, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-226.3857f, 6498.877f, 9.2147f, -173.1313f, 6595.771f, 20.7218f, 1, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_348, Local_351, fLocal_354, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fanatic3_assist"))
	{
		TASK::USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE("fanatic3_assist", 0, 1065353216, 1056964608);
		TASK::REMOVE_WAYPOINT_RECORDING("fanatic3_assist");
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("fan3_pedJog"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("fan3_pedJog");
	}
	if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan3_jetskiRoute"))
	{
		TASK::REMOVE_WAYPOINT_RECORDING("Fan3_jetskiRoute");
	}
	GlobalFunc_601(2, 0);
	GlobalFunc_601(3, 0);
	GlobalFunc_7632(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}






















