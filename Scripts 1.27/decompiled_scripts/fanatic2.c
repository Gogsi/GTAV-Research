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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	float fLocal_42 = 0f;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	struct<4> Local_57[10];
	bool bLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	int iLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	bool bLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	var uLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135[2] = { 0, 0 };
	var uLocal_138 = 0;
	int iLocal_139 = 0;
	struct<3> Local_140[2];
	float fLocal_147[2] = { 0f, 0f };
	struct<3> Local_150[2];
	float fLocal_157[2] = { 0f, 0f };
	int iLocal_160 = 0;
	var uLocal_161 = 0;
	int iLocal_162 = 0;
	int iLocal_163 = 0;
	struct<15> Local_164 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<127> Local_179 = { 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 16;
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
	char* sLocal_477[5] = { NULL, NULL, NULL, NULL, NULL };
	int iLocal_483[5] = { 0, 0, 0, 0, 0 };
	int iLocal_489 = 0;
	int iLocal_490 = 0;
	int iLocal_491 = 0;
	var uLocal_492 = 16;
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
	char* sLocal_657[4] = { NULL, NULL, NULL, NULL };
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	bool bLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	int iLocal_673 = 0;
	int iLocal_674 = 0;
	bool bLocal_675 = 0;
	var uLocal_676 = 16;
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
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843 = 0;
	int iLocal_844 = 0;
	int iLocal_845 = 0;
	int iLocal_846 = 0;
	bool bLocal_847 = 0;
	int iLocal_848 = 0;
	int iLocal_849 = 0;
	int iLocal_850 = 0;
	bool bLocal_851 = 0;
	int iLocal_852 = 0;
	int iLocal_853 = 0;
	int iLocal_854 = 0;
	int iLocal_855 = 0;
	int iLocal_856 = 0;
	int iLocal_857 = 0;
	bool bLocal_858 = 0;
	int iLocal_859 = 0;
	var uLocal_860 = 0;
	int iLocal_861 = 0;
	int iLocal_862 = 0;
	int iLocal_863 = 0;
	int iLocal_864 = 0;
	int iLocal_865 = 0;
	int iLocal_866 = 0;
	int iLocal_867 = 0;
	int iLocal_868 = 0;
	bool bLocal_869 = 0;
	var uLocal_870 = 0;
	float fLocal_871 = 0f;
	float fLocal_872 = 0f;
	float fLocal_873 = 0f;
	float fLocal_874 = 0f;
	float fLocal_875 = 0f;
	int iLocal_876 = 0;
	struct<61> Local_877 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<61> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	fLocal_42 = 20f;
	uLocal_102 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_103 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_105 = GlobalFunc_4946(61);
	iLocal_109 = 1;
	iLocal_110 = 1;
	iLocal_113 = joaat("u_m_y_cyclist_01");
	iLocal_114 = 1;
	iLocal_118 = 1;
	fLocal_871 = 30f;
	fLocal_872 = 0.35f;
	fLocal_873 = 0f;
	fLocal_874 = 0.05f;
	fLocal_875 = -0.05f;
	Local_877 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_877);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_FAIL");
		GlobalFunc_9624(1);
		func_434();
	}
	if (GlobalFunc_199() || GlobalFunc_2(0))
	{
		Global_68490 = 1;
		iLocal_104 = 0;
		while (!func_421(&Local_877))
		{
			SYSTEM::WAIT(0);
		}
		GlobalFunc_4923(&Local_877, 0, 1);
		Global_68490 = 0;
	}
	uLocal_135[0] = Local_877.f_35[0];
	uLocal_135[1] = Local_877.f_35[1];
	uLocal_134 = func_419();
	MISC::CLEAR_AREA_OF_PEDS(816.3f, 1275.61f, 359.5f, 75f, 0);
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		uLocal_126 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("SF_EDT", 0);
		SYSTEM::WAIT(0);
		func_402(Local_877.f_9, 1, 0, 0, 0, 0);
		func_401();
		GlobalFunc_5964();
		switch (iLocal_110)
		{
			case 1:
				func_392();
				break;
			
			case 2:
				func_359();
				break;
			
			case 3:
				func_350();
				break;
			
			case 4:
				func_250();
				break;
			
			case 5:
				func_236();
				break;
			
			case 6:
				func_231();
				break;
			
			case 7:
				func_37();
				break;
			
			case 8:
				func_2();
				break;
		}
		GlobalFunc_587();
	}
}


void func_2()//Position - 0x228
{
	char* sVar0;
	
	switch (iLocal_128)
	{
		case 0:
			func_36();
			func_34();
			func_31(1);
			HUD::CLEAR_PRINTS();
			bLocal_869 = true;
			if (iLocal_112 == 5)
			{
				bLocal_869 = false;
			}
			switch (iLocal_112)
			{
				case 0:
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_GENERIC");
					break;
				
				case 1:
					sVar0 = "FAN2_F1";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_BIKE_DESTROYED");
					break;
				
				case 2:
					sVar0 = "FAN2_F2";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_OUT_OF_TIME");
					break;
				
				case 3:
					sVar0 = "FAN2_F3";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_WOMAN_DIED");
					break;
				
				case 4:
					sVar0 = "FAN2_F4";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_WOMAN_HURT");
					break;
				
				case 5:
					sVar0 = "FAN2_F5";
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_WOMAN_SCARED");
					break;
				
				case 6:
					sVar0 = "FAN2_F6";
					func_31(1);
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_LEFT_BIKE");
					break;
				
				case 7:
					sVar0 = "FAN2_F7";
					func_31(1);
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_PUSHED_WOMAN");
					break;
				
				case 8:
					sVar0 = "FAN2_F8";
					func_31(1);
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_LOST_RACE");
					break;
				
				case 9:
					sVar0 = "FAN2_F9";
					func_31(1);
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_ABANDONED_RACE");
					break;
				
				case 10:
					sVar0 = "FAN2_F10";
					func_31(1);
					GlobalFunc_2838("MISSION_FAILED reason=FAILED_ABANDONED_RACE");
					break;
			}
			if (iLocal_112 == 0)
			{
				GlobalFunc_9624(1);
			}
			else
			{
				GlobalFunc_10702(sVar0, 1);
			}
			iLocal_128 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_20();
				func_434();
			}
			else if (bLocal_869 == 0)
			{
				if (iLocal_112 == 5)
				{
					bLocal_869 = GlobalFunc_10607(&uLocal_492, "FAN2AU", "FAN2_SCARED", 8, 1, 0, 0);
				}
			}
			break;
	}
}


















void func_20()//Position - 0xBDD
{
	if (GlobalFunc_111())
	{
		GlobalFunc_4935();
	}
	GlobalFunc_69(&(Local_877.f_28[0]));
	GlobalFunc_69(&iLocal_866);
	GlobalFunc_69(&iLocal_867);
	GlobalFunc_69(&iLocal_864);
	GlobalFunc_6692(&iLocal_861);
	GlobalFunc_69(&iLocal_868);
	GlobalFunc_6692(&iLocal_863);
	GlobalFunc_6692(&(uLocal_135[1]));
}











void func_31(bool bParam0)//Position - 0xE13
{
	if (GlobalFunc_111())
	{
		if (bParam0)
		{
			GlobalFunc_4956();
		}
		else
		{
			GlobalFunc_4935();
		}
	}
}



void func_34()//Position - 0xE63
{
	GlobalFunc_846(&(Local_164.f_2));
	GRAPHICS::DELETE_CHECKPOINT(Local_164.f_4);
	GlobalFunc_846(&(Local_164.f_3));
}


void func_36()//Position - 0xEA3
{
	GlobalFunc_846(&uLocal_138);
	GlobalFunc_846(&uLocal_161);
}

void func_37()//Position - 0xEB7
{
	func_40(86, 1);
	GlobalFunc_9621(61, 2, 1);
	func_434();
}



void func_40(int iParam0, bool bParam1)//Position - 0x10FD
{
	int iVar0;
	var uVar1;
	
	iVar0 = GlobalFunc_8314();
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
	func_67();
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



























void func_67()//Position - 0x247E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		iVar1 = Global_87736[iVar0];
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_INJURED(iVar1))
		{
			iVar3 = GlobalFunc_6674(iVar1);
			iVar2 = -99;
			switch (iVar3)
			{
				case 0:
					iVar2 = 112;
					break;
				
				case 1:
					iVar2 = 158;
					break;
				
				case 2:
					iVar2 = 154;
					break;
			}
			if (iVar2 != -99)
			{
				if (GlobalFunc_10995(iVar1, 14, iVar2))
				{
					func_68(iVar1, 14, iVar2);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] == iVar2)
				{
					Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT[iVar3 /*65*/].f_39[2] = -1;
				}
			}
		}
		iVar0++;
	}
}

int func_68(int iParam0, int iParam1, int iParam2)//Position - 0x253F
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar30;
	int iVar46;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == -99)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, iParam2) };
	if (!MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (!GlobalFunc_10995(iParam0, iParam1, iParam2))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar2 = { GlobalFunc_7617(iVar0, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 14)
		{
			if (uVar2[iVar1] != -99)
			{
				func_68(iParam0, iVar1, uVar2[iVar1]);
			}
			iVar1++;
		}
	}
	else if (iParam1 == 13)
	{
		uVar20 = { GlobalFunc_7616(iVar0, iParam2) };
		iVar18 = 0;
		while (iVar18 <= 8)
		{
			if (!func_68(iParam0, 14, uVar20[iVar18]))
			{
				iVar19 = 0;
			}
			iVar18++;
		}
		return iVar19;
	}
	else if (iParam1 == 14)
	{
		PED::CLEAR_PED_PROP(iParam0, Global_68106[1 /*14*/].f_12);
	}
	else
	{
		uVar30 = { GlobalFunc_7617(iVar0, 0) };
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar0, iParam1, uVar30[iParam1]) };
		if (PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, GlobalFunc_33(iParam1)) > 0 && PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3) > 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, GlobalFunc_33(iParam1), Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4, 0);
		}
	}
	if (GlobalFunc_11115(iParam0, iVar0, &iVar46, 0))
	{
		func_71(iParam0, 2, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	if (GlobalFunc_11114(iParam0, iVar0, &iVar46))
	{
		func_71(iParam0, 1, iVar46, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	return 1;
}



int func_71(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x27BF
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
		Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iParam1, iParam2) };
		if (!GlobalFunc_32(iParam3))
		{
			Global_68105 = (Global_68105 - 1);
			return 0;
		}
		GlobalFunc_8308(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = GlobalFunc_7247(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = -99;
				}
			}
			iVar6 = GlobalFunc_7247(iParam0, 9);
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
			iVar7 = GlobalFunc_7953(iParam0, 1);
			if (!GlobalFunc_6667(iVar10, 14, iVar7))
			{
				iVar7 = -99;
			}
			iVar8 = GlobalFunc_7953(iParam0, 0);
			if (!GlobalFunc_6666(iVar10, 14, iVar8) && !GlobalFunc_6665(iVar10, 14, iVar8))
			{
				iVar8 = -99;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = GlobalFunc_7953(iParam0, 2);
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
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, uVar11[iVar0]) };
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
							Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar27[iVar1]) };
							GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
							GlobalFunc_8308(14);
							if (Global_68105 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = GlobalFunc_11241(iParam0, iVar10, 14, uVar27[iVar1], iVar2, 0);
									if (iVar3 != -99)
									{
										func_71(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
						GlobalFunc_8308(iVar0);
						if (Global_68105 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = GlobalFunc_11241(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != -99)
								{
									func_71(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, iVar0, func_77(iParam0, iVar0, -1)) };
				if (MISC::IS_BIT_SET(Global_68106[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (GlobalFunc_11115(iParam0, iVar10, &iVar4, 1))
							{
								func_71(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
							}
						}
					}
					else
					{
						uVar37 = { GlobalFunc_7617(iVar10, 0) };
						func_71(iParam0, iVar0, uVar37[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var53 = { GlobalFunc_10828(iVar10, 8, iVar5) };
			if (iVar5 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 8, iVar5, &uVar11, &Var53))
				{
					func_71(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 9, iVar6) };
			if (iVar6 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 9, iVar6, &uVar11, &Var53))
				{
					func_71(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar7) };
			if (iVar7 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar7, &uVar11, &Var53))
				{
					func_71(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar8) };
			if (iVar8 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar8, &uVar11, &Var53))
				{
					func_71(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
				}
			}
			Var53 = { GlobalFunc_10828(iVar10, 14, iVar9) };
			if (iVar9 != -99)
			{
				if (GlobalFunc_8307(iVar10, iParam2, 14, iVar9, &uVar11, &Var53))
				{
					func_71(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0);
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
			Global_68106[1 /*14*/] = { GlobalFunc_10828(iVar10, 14, uVar67[iVar1]) };
			GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
			GlobalFunc_8308(14);
			if (Global_68105 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = GlobalFunc_11241(iParam0, iVar10, 14, uVar67[iVar1], iVar2, 0);
					if (iVar3 != -99)
					{
						func_71(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		GlobalFunc_515(iParam0, Global_68106[1 /*14*/].f_12, Global_68106[1 /*14*/].f_3, Global_68106[1 /*14*/].f_4);
		GlobalFunc_8308(iParam1);
		if (Global_68105 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = GlobalFunc_11241(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_71(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
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
				iVar3 = GlobalFunc_11241(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != -99)
				{
					func_71(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			GlobalFunc_11027(iVar10, iParam1, iParam2);
		}
	}
	if (Global_68105 == 1)
	{
		if (GlobalFunc_11115(iParam0, iVar10, &iVar4, 0))
		{
			func_71(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		if (GlobalFunc_11114(iParam0, iVar10, &iVar4))
		{
			func_71(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0);
		}
	}
	Global_68105 = (Global_68105 - 1);
	return 1;
}






int func_77(int iParam0, int iParam1, int iParam2)//Position - 0x37D2
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (GlobalFunc_10995(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (GlobalFunc_10995(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == -1)
			{
			}
			else
			{
				return GlobalFunc_7953(iParam0, iParam2);
			}
		}
		else
		{
			return GlobalFunc_7247(iParam0, iParam1);
		}
	}
	return -99;
}


























































































































































void func_231()//Position - 0x25ACF
{
	if (func_235())
	{
		GlobalFunc_2838("Init MS_RESULT");
		if (GlobalFunc_115(Local_877.f_28[0]) && GlobalFunc_4947(uLocal_135[1]))
		{
			PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_877.f_28[0], 0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_135[1], 1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_135[1], 1);
		}
		GlobalFunc_2838("Running MS_RESULT");
	}
	else if (bLocal_851 == 0 || iLocal_845)
	{
		func_234();
	}
	else
	{
		func_233(8);
	}
	if (func_232())
	{
		GlobalFunc_2838("Cleaned up MS_RESULT");
	}
}

int func_232()//Position - 0x25B5C
{
	if (iLocal_119 == 1)
	{
		HUD::CLEAR_HELP(1);
		iLocal_118 = 1;
		iLocal_119 = 0;
		if (iLocal_111 == 0)
		{
			iLocal_110++;
		}
		else
		{
			iLocal_110 = iLocal_111;
		}
		iLocal_111 = 0;
		return 1;
	}
	return 0;
}

void func_233(int iParam0)//Position - 0x25B93
{
	AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_FAIL");
	iLocal_112 = iParam0;
	iLocal_110 = 8;
}

void func_234()//Position - 0x25BAB
{
	iLocal_119 = 1;
}

int func_235()//Position - 0x25BB6
{
	if (iLocal_118 == 1)
	{
		iLocal_118 = 0;
		return 1;
	}
	return 0;
}

void func_236()//Position - 0x25BCF
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	
	if (Local_164.f_5 != 0)
	{
		iLocal_43 = (iLocal_43 - 25);
		if (iLocal_43 > 0)
		{
			HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(Local_164.f_5, uVar0, uVar1, uVar2, iLocal_43);
			GRAPHICS::SET_CHECKPOINT_RGBA2(Local_164.f_5, uVar0, uVar1, uVar2, iLocal_43);
		}
		else
		{
			GRAPHICS::DELETE_CHECKPOINT(Local_164.f_5);
		}
	}
	if (func_235())
	{
		GlobalFunc_2838("Init MS_OUTRO");
		if (iLocal_844)
		{
			func_240(1, 1, 1);
			iLocal_844 = 0;
		}
		iLocal_124 = 0;
		func_34();
		func_36();
		RECORDING::_0x293220DA1B46CEBC(10f, 15f, 1);
		GlobalFunc_2838("Running MS_OUTRO");
	}
	else if (!bLocal_851)
	{
		switch (iLocal_127)
		{
			case 0:
				if (GlobalFunc_115(Local_877.f_28[0]))
				{
					func_36();
					func_34();
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_877.f_28[0], 1) > 80f)
					{
						if (GlobalFunc_10607(&uLocal_676, "FAN2AU", "FAN2_BIGWIN", 8, 0, 0, 0))
						{
							GlobalFunc_2838("Player won by large margin");
							func_36();
							func_34();
							GlobalFunc_2297(&(Local_877.f_28[0]), 1, 0, 1);
							bLocal_847 = true;
							SYSTEM::WAIT(500);
							iLocal_127++;
						}
					}
					else if (GlobalFunc_10607(&uLocal_676, "FAN2AU", "FAN2_WIN", 8, 0, 0, 0))
					{
						GlobalFunc_2838("Player won normally");
						if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(Local_877.f_28[0]))
						{
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_877.f_28[0], -1, 2096, 4);
							TASK::TASK_LOOK_AT_ENTITY(Local_877.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							TASK::CLEAR_PED_TASKS(Local_877.f_28[0]);
						}
						iLocal_127++;
					}
				}
				else
				{
					GlobalFunc_2838("Mary Ann not found in the outro?!");
				}
				break;
			
			case 1:
				if (!bLocal_847)
				{
					if (GlobalFunc_115(Local_877.f_28[0]) && GlobalFunc_4947(uLocal_135[1]))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uLocal_135[1]))
						{
							GlobalFunc_2838("Bringing Mary Ann to a halt...");
							VEHICLE::BRING_VEHICLE_TO_HALT(uLocal_135[1], 2f, 1, 0);
						}
						else if (GlobalFunc_111())
						{
							if (!iLocal_124)
							{
								if (GlobalFunc_4947(uLocal_135[0]))
								{
									if (!VEHICLE::IS_VEHICLE_STOPPED(uLocal_135[0]))
									{
										GlobalFunc_530(uLocal_135[0], 10f, 1, 0.3f, 0, 1);
									}
									else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], 0))
									{
										TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic2", "celebrate_a", 8f, -8f, -1, 16, 0, 0, 0, 0);
										iLocal_124 = 1;
									}
								}
							}
							if (AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 3)
							{
								if (GlobalFunc_4947(uLocal_135[1]))
								{
									VEHICLE::MODIFY_VEHICLE_TOP_SPEED(uLocal_135[1], 0f);
								}
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_877.f_28[0], 282.2179f, 954.2027f, 209.2517f, 279.217f, 937.9849f, 213.6286f, 14f, 0, 1, 0))
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_870);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_135[1], 262.37f, 961.25f, 209.75f, 13f, 0, iLocal_139, 786469, 5f, 50f);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, uLocal_135[1], 16f, 786603);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_870);
									TASK::TASK_PERFORM_SEQUENCE(Local_877.f_28[0], uLocal_870);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_870);
									iLocal_127++;
								}
								else
								{
									TASK::OPEN_SEQUENCE_TASK(&uLocal_870);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_135[1], 281.59f, 951.66f, 209.85f, 7f, 0, iLocal_139, 262144, 3f, 50f);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, uLocal_135[1], 262.37f, 961.25f, 209.75f, 13f, 0, iLocal_139, 786469, 5f, 50f);
									TASK::TASK_VEHICLE_DRIVE_WANDER(0, uLocal_135[1], 16f, 786603);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_870);
									TASK::TASK_PERFORM_SEQUENCE(Local_877.f_28[0], uLocal_870);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_870);
									iLocal_127++;
								}
							}
						}
					}
				}
				else if (!iLocal_124)
				{
					if (GlobalFunc_4947(uLocal_135[0]))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uLocal_135[0]))
						{
							GlobalFunc_530(uLocal_135[0], 10f, 1, 0.3f, 0, 1);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "rcmfanatic2", "celebrate_a", 8f, -8f, -1, 16, 0, 0, 0, 0);
							iLocal_124 = 1;
							iLocal_127++;
						}
					}
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					func_234();
				}
				break;
		}
	}
	else
	{
		switch (iLocal_127)
		{
			case 0:
				if (GlobalFunc_111())
				{
					GlobalFunc_4935();
					iLocal_127++;
				}
				else
				{
					iLocal_127++;
				}
				break;
			
			case 1:
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_877.f_28[0], 1) < 25f)
				{
					if (GlobalFunc_4924(Local_877.f_28[0]) && GlobalFunc_4947(uLocal_135[1]))
					{
						if (!VEHICLE::IS_VEHICLE_STOPPED(uLocal_135[1]))
						{
							GlobalFunc_2838("Bringing Mary Ann to a halt...");
							VEHICLE::BRING_VEHICLE_TO_HALT(uLocal_135[1], 2f, 1, 0);
						}
						else if (GlobalFunc_10607(&uLocal_492, "FAN2AU", "FAN2_MAWIN", 8, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(Local_877.f_28[0], "rcmfanatic2", "celebrate_b", 8f, -8f, -1, 16, 0, 0, 0, 0);
							TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), Local_877.f_28[0], -1, 2048, 4);
							TASK::TASK_LOOK_AT_ENTITY(Local_877.f_28[0], PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
							iLocal_127++;
							SYSTEM::WAIT(0);
						}
					}
				}
				else
				{
					func_233(8);
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					func_233(8);
				}
				break;
			}
	}
	if (func_232())
	{
		func_31(1);
		GlobalFunc_2838("Cleaned up MS_OUTRO");
	}
}




void func_240(int iParam0, int iParam1, int iParam2)//Position - 0x2636E
{
	func_242(0, 0, iParam2, 1);
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


void func_242(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x263DE
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(iVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(iVar0, bParam3, 0);
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
		if ((iLocal_44 != 0 && iLocal_44 != joaat("object")) && iLocal_44 != joaat("gadget_parachute"))
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_44, 0))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_44, 0);
				}
			}
		}
	}
	if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
	}
}








void func_250()//Position - 0x26688
{
	int iVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	struct<3> Var5;
	
	if (func_235())
	{
		GlobalFunc_1470();
		func_338((MISC::GET_GAME_TIMER() - iLocal_162), "", -1, -1, "", iLocal_849, 2, 0, 0, 1, -1, -1, 0, 12, -1, -1, 0, 6, -1, 0, 0, 1, -1, 0, -1082130432, 1, 1);
		func_332(&Local_164, &Local_179, 1);
		GlobalFunc_2838("Init MS_RACE");
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (GlobalFunc_4947(uLocal_135[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_135[iVar0], 0);
			}
			iVar0++;
		}
		iLocal_850 = 0;
		iLocal_853 = 0;
		iLocal_129 = MISC::GET_GAME_TIMER();
		iLocal_130 = MISC::GET_GAME_TIMER();
		GlobalFunc_2838("Run MS_RACE");
	}
	else
	{
		if (iLocal_844)
		{
			func_240(1, 1, 1);
			iLocal_844 = 0;
		}
		GlobalFunc_1470();
		func_338((MISC::GET_GAME_TIMER() - iLocal_162), "", -1, -1, "", iLocal_849, 2, 0, 0, 1, -1, -1, 0, 12, -1, -1, 0, 6, -1, 0, 0, 1, -1, 0, -1082130432, 1, 1);
		func_401();
		if (iLocal_850 == 0)
		{
			if (!Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticHelp)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					GlobalFunc_159("FAN_HELP", -1);
					Global_SAVE_DATA.SAVED_RANDOM_CHARACTERS.g_bFanaticHelp = 1;
				}
			}
			func_332(&Local_164, &Local_179, 1);
			func_329();
			func_326();
			func_325();
			func_324();
			func_323();
			func_301();
			func_300();
			func_299();
			func_274();
			if (iLocal_160 == 1)
			{
				GlobalFunc_7248(&uLocal_161, Local_877.f_28[0], 1, 1092616192, 1);
				GlobalFunc_2216(uLocal_161, Local_877.f_28[0], 230f, 0.8f, 0);
			}
			else
			{
				GlobalFunc_846(&uLocal_161);
			}
			if (iLocal_160 == 1)
			{
				func_269();
				func_268();
				func_263();
			}
			func_257();
			func_253();
			if (Local_164.f_14 == 5)
			{
				HUD::GET_HUD_COLOUR(1, &uVar1, &uVar2, &uVar3, &uVar4);
				iLocal_43 = 180;
				Var5 = { 279.85f, 946.37f, 209.82f };
				Var5 = { Var5 + Vector(7.5f, 0f, 0f) };
				Local_164.f_5 = GRAPHICS::CREATE_CHECKPOINT(9, Var5, 279.85f, 946.37f, 209.82f, 20f, uVar1, uVar2, uVar3, iLocal_43, 0);
				GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(Local_164.f_5, 3f, 3f, 100f);
				GRAPHICS::SET_CHECKPOINT_RGBA(Local_164.f_5, uVar1, uVar2, uVar3, iLocal_43);
				GRAPHICS::SET_CHECKPOINT_RGBA2(Local_164.f_5, uVar1, uVar2, uVar3, iLocal_43);
				iLocal_850 = 1;
				iLocal_163 = MISC::GET_GAME_TIMER();
				if (GlobalFunc_4947(uLocal_135[1]))
				{
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_135[1]))
					{
						TASK::REMOVE_WAYPOINT_RECORDING("Fan2_BikeRoute");
						VEHICLE::BRING_VEHICLE_TO_HALT(uLocal_135[1], 4f, 1, 0);
					}
				}
			}
		}
		else
		{
			if (GlobalFunc_4947(uLocal_135[0]))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], 0))
				{
					iLocal_850 = 0;
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_STOP");
					GlobalFunc_2838("Doing music trigger stop");
					GlobalFunc_530(uLocal_135[0], 10f, 1, 0.3f, 0, 1);
					GlobalFunc_2837("Total race time: ", (iLocal_163 - iLocal_162));
					if ((iLocal_163 - iLocal_162) <= 102000)
					{
						GlobalFunc_553(765);
					}
				}
			}
			func_234();
		}
	}
	if (func_232())
	{
		func_31(0);
		GlobalFunc_2838("Cleaned up MS_RACE");
	}
}



void func_253()//Position - 0x26A01
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	if (func_256())
	{
		if (GlobalFunc_4947(uLocal_135[1]))
		{
			fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_135[1], 1), 1);
			if (fVar0 > 60f)
			{
				fVar0 = 60f;
			}
			fVar1 = ((fVar0 / 50f) * 1.6f);
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_135[1]))
			{
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("Fan2_BikeRoute", ENTITY::GET_ENTITY_COORDS(uLocal_135[1], 1), &uVar2);
				fVar3 = TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT("Fan2_BikeRoute", uVar2);
				fVar4 = 4.8f;
				fVar3 = (fVar3 + fVar4);
				if (iLocal_849 == 2)
				{
					fVar3 = ((fVar3 - fVar1) - 0.5f);
				}
				else
				{
					fVar3 = ((fVar3 + fVar1) + 2f);
				}
				if (iLocal_121 == 1)
				{
					func_255("Player fDist=", fVar0, " fPlaybackModifier=", fVar1, " Final fPlaybackSpeed=", fVar3);
					if (GlobalFunc_115(Local_877.f_28[0]))
					{
						GlobalFunc_2839("Actual opponent speed= ", ENTITY::GET_ENTITY_SPEED(Local_877.f_28[0]));
					}
				}
				TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(uLocal_135[1], fVar3);
			}
		}
	}
}


void func_255(char* sParam0, float fParam1, char* sParam2, float fParam3, char* sParam4, float fParam5)//Position - 0x26B0D
{
	sParam0 = sParam0;
	fParam1 = fParam1;
	sParam2 = sParam2;
	fParam3 = fParam3;
	sParam4 = sParam4;
	fParam5 = fParam5;
}

int func_256()//Position - 0x26B2D
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_257()//Position - 0x26B51
{
	float fVar0;
	int iVar1;
	
	switch (iLocal_114)
	{
		case 1:
			if (iLocal_671 == 0)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
				{
					if (GlobalFunc_10607(&uLocal_492, "FAN2AU", "FAN2_START", 8, 0, 0, 0))
					{
						GlobalFunc_2838("*** Doing start conversation");
						iLocal_671 = 1;
					}
				}
			}
			else if (!GlobalFunc_111())
			{
				GlobalFunc_2838("*** Start conversation over, conv state free");
				iLocal_490 = MISC::GET_GAME_TIMER();
				iLocal_114 = 0;
			}
			break;
		
		case 0:
			if (func_256())
			{
				if (GlobalFunc_115(Local_877.f_28[0]))
				{
					fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_877.f_28[0], 1), 1);
					if (iLocal_856)
					{
						GlobalFunc_2838("*** Starting road rage");
						iLocal_114 = 7;
					}
					else if (fVar0 > 30f)
					{
						GlobalFunc_2838("*** Too far apart (>30m) to do anything with a conversation");
						iLocal_114 = 8;
					}
					else if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
					{
						if (bLocal_675)
						{
							GlobalFunc_2838("*** Starting end conversation routine");
							iLocal_114 = 9;
						}
						else if (iLocal_857)
						{
							GlobalFunc_2838("*** Starting push warning");
							iLocal_114 = 4;
						}
						else if (iLocal_669)
						{
							GlobalFunc_2838("*** Starting overtake routine");
							iLocal_114 = 5;
						}
						else
						{
							func_262();
						}
					}
				}
			}
			break;
		
		case 8:
			if (func_256())
			{
				if (GlobalFunc_115(Local_877.f_28[0]))
				{
					fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_877.f_28[0], 1), 1);
					if (fVar0 <= 30f)
					{
						GlobalFunc_2838("*** Close enough (<=30m) to do a conversation");
						iLocal_114 = 0;
					}
				}
			}
			break;
		
		case 9:
			if (!iLocal_854)
			{
				if (!GlobalFunc_111())
				{
					if (iLocal_849 == 1)
					{
						if (GlobalFunc_10607(&uLocal_312, "FAN2AU", "FAN2_WINNING", 8, 0, 0, 0))
						{
							iLocal_854 = 1;
							iLocal_855 = 1;
							GlobalFunc_2838("*** Trevor saying FAN2_WINNING");
						}
					}
					else if (GlobalFunc_10607(&uLocal_312, "FAN2AU", "FAN2_LOSING", 8, 0, 0, 0))
					{
						iLocal_854 = 1;
						GlobalFunc_2838("*** Trevor saying FAN2_LOSING");
					}
				}
			}
			else if (iLocal_855 == 1)
			{
				if (iLocal_849 == 2)
				{
					if (GlobalFunc_115(Local_877.f_28[0]))
					{
						GlobalFunc_2838("*** Mary Ann passed player after saying 'WINNING' line...");
						GlobalFunc_5117(Local_877.f_28[0], "FAN2_BQAA", "MARYANN", 4);
						TASK::TASK_DRIVE_BY(Local_877.f_28[0], PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 50f, 100, 1, -957453492);
						iLocal_855 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (iLocal_672 == 0)
			{
				if (GlobalFunc_10607(&uLocal_492, "FAN2AU", "FAN2_PUSH", 8, 0, 0, 0))
				{
					GlobalFunc_2838("*** Done a push warning");
					iLocal_672 = 1;
				}
			}
			else if (!GlobalFunc_111())
			{
				GlobalFunc_2838("*** Push warning over, conv state free");
				iLocal_857 = 0;
				iLocal_672 = 0;
				iLocal_129 = MISC::GET_GAME_TIMER();
				iLocal_114 = 0;
			}
			break;
		
		case 5:
			if (iLocal_673 == 0)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_667) < 750)
				{
					if (iLocal_849 == 1)
					{
						if (iLocal_666 < 4)
						{
							if (GlobalFunc_10607(&uLocal_492, "FAN2AU", "FAN2_OVERT", 8, 0, 0, 0))
							{
								GlobalFunc_2838("*** Doing overtake line");
								iLocal_673 = 1;
								iLocal_666++;
							}
						}
						else
						{
							GlobalFunc_2838("*** All overtake lines played!");
							iLocal_669 = 0;
							iLocal_114 = 0;
						}
					}
					else
					{
						GlobalFunc_2838("*** Tried to do overtake line when Mary Ann passed Trevor!");
						iLocal_669 = 0;
						iLocal_114 = 0;
					}
				}
				else
				{
					GlobalFunc_2838("*** Too much time passed between overtake and a free spot in the conversation; skipping...");
					iLocal_669 = 0;
					iLocal_114 = 0;
				}
			}
			else if (!GlobalFunc_111())
			{
				GlobalFunc_2838("*** Overtake line over, conv state free");
				iLocal_669 = 0;
				iLocal_673 = 0;
				iLocal_670 = MISC::GET_GAME_TIMER();
				iLocal_114 = 0;
			}
			break;
		
		case 7:
			if ((MISC::GET_GAME_TIMER() - iLocal_667) < 1000)
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
				if (func_259(iVar1))
				{
					GlobalFunc_2838("*** Did a road rage line");
					iLocal_856 = 0;
					iLocal_114 = 0;
				}
			}
			else
			{
				GlobalFunc_2838("*** Too long between trying to trigger road rage and free moment in conversation, skipping...");
				iLocal_856 = 0;
				iLocal_114 = 0;
			}
			break;
		
		case 2:
			if (iLocal_674 == 0)
			{
				if (iLocal_662 < 4)
				{
					if (func_256())
					{
						if (GlobalFunc_115(Local_877.f_28[0]))
						{
							if (GlobalFunc_10607(&uLocal_492, "FAN2AU", sLocal_657[iLocal_662], 8, 0, 0, 0))
							{
								GlobalFunc_2837("*** Started banter conversation #", iLocal_662 + 1);
								iLocal_674 = 1;
								iLocal_662++;
							}
						}
					}
				}
				else
				{
					GlobalFunc_2838("*** Tried to play more banter than convos available... not good!");
					iLocal_674 = 0;
					iLocal_490 = MISC::GET_GAME_TIMER();
					iLocal_115 = 0;
					iLocal_114 = 0;
				}
			}
			else if (!GlobalFunc_111())
			{
				GlobalFunc_2838("*** Finished banter!");
				iLocal_674 = 0;
				iLocal_490 = MISC::GET_GAME_TIMER();
				iLocal_115 = 0;
				iLocal_114 = 0;
			}
			else if (func_256())
			{
				if (GlobalFunc_115(Local_877.f_28[0]))
				{
					fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_877.f_28[0], 1), 1);
					if (fVar0 > 30f || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						GlobalFunc_2838("*** Paused banter!");
						AUDIO::PAUSE_SCRIPTED_CONVERSATION(1);
						iLocal_114 = 3;
					}
				}
			}
			break;
		
		case 3:
			if (func_256())
			{
				if (GlobalFunc_115(Local_877.f_28[0]))
				{
					fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_877.f_28[0], 1), 1);
					if (fVar0 <= 30f && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						GlobalFunc_2838("*** Unpaused banter!");
						AUDIO::RESTART_SCRIPTED_CONVERSATION();
						iLocal_114 = 2;
					}
				}
			}
			break;
		
		case 6:
			if (iLocal_674 == 0)
			{
				bLocal_668 = GlobalFunc_745();
				if (bLocal_668)
				{
					if (iLocal_849 == 1)
					{
						if (iLocal_663 < 4)
						{
							if (GlobalFunc_10607(&uLocal_492, "FAN2AU", "FAN2_BEHIND", 8, 0, 0, 0))
							{
								GlobalFunc_2838("*** Doing Behind line");
								iLocal_663++;
								iLocal_674 = 1;
							}
						}
						else
						{
							GlobalFunc_2838("*** Tried doing a Behind one-liner, but have run out!");
							iLocal_490 = MISC::GET_GAME_TIMER();
							iLocal_115 = 0;
							iLocal_114 = 0;
						}
					}
					else if (iLocal_664 < 4)
					{
						if (GlobalFunc_10607(&uLocal_492, "FAN2AU", "FAN2_AHEAD", 8, 0, 0, 0))
						{
							GlobalFunc_2838("*** Doing Ahead line");
							iLocal_664++;
							iLocal_674 = 1;
						}
					}
					else
					{
						GlobalFunc_2838("*** Tried doing an Ahead one-liner, but have run out!");
						iLocal_490 = MISC::GET_GAME_TIMER();
						iLocal_115 = 0;
						iLocal_114 = 0;
					}
				}
				else if (iLocal_665 < 6)
				{
					if (GlobalFunc_10607(&uLocal_492, "FAN2AU", "FAN2_TREV1L", 8, 0, 0, 0))
					{
						GlobalFunc_2838("*** Doing Trevor one-liner");
						iLocal_665++;
						iLocal_674 = 1;
					}
				}
				else
				{
					GlobalFunc_2838("*** Tried doing a Trevor one-liner, but have run out!");
					iLocal_490 = MISC::GET_GAME_TIMER();
					iLocal_115 = 0;
					iLocal_114 = 0;
				}
			}
			else if (!GlobalFunc_111())
			{
				GlobalFunc_2838("*** Oneliner over, conv state free");
				iLocal_674 = 0;
				iLocal_490 = MISC::GET_GAME_TIMER();
				iLocal_115 = 0;
				iLocal_114 = 0;
			}
			break;
	}
}


int func_259(int iParam0)//Position - 0x271B3
{
	if (iLocal_483[iParam0] == 0)
	{
		if (GlobalFunc_10607(&uLocal_312, "FAN2AU", sLocal_477[iParam0], 8, 0, 0, 0))
		{
			iLocal_483[iParam0] = 1;
			iLocal_489++;
			GlobalFunc_2837("iRoadRageConversationsPlayed = ", iLocal_489);
			return 1;
		}
	}
	return 0;
}



void func_262()//Position - 0x27434
{
	switch (iLocal_115)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_490) > 10000)
			{
				iLocal_115 = 1;
			}
			break;
		
		case 1:
			switch (iLocal_491)
			{
				case 0:
					iLocal_114 = 2;
					break;
				
				case 1:
					iLocal_114 = 6;
					break;
				
				case 2:
					iLocal_114 = 2;
					break;
				
				case 3:
					iLocal_114 = 6;
					break;
				
				case 4:
					iLocal_114 = 2;
					break;
				
				case 5:
					iLocal_114 = 6;
					break;
				
				case 6:
					iLocal_114 = 2;
					break;
				
				default:
					iLocal_114 = 6;
					break;
			}
			iLocal_491++;
			break;
	}
}

void func_263()//Position - 0x274D0
{
	struct<3> Var0;
	
	if (!iLocal_857)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_129) > 3000)
		{
			if (GlobalFunc_4947(uLocal_135[0]) && GlobalFunc_4947(uLocal_135[1]))
			{
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uLocal_135[0], uLocal_135[1]))
				{
					if (!GlobalFunc_111())
					{
						iLocal_857 = 1;
						GlobalFunc_553(764);
					}
				}
			}
		}
	}
	if (GlobalFunc_4947(uLocal_135[0]) && GlobalFunc_4947(uLocal_135[1]))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uLocal_135[0], uLocal_135[1]))
		{
			Var0 = { -ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uLocal_135[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)) };
			ENTITY::APPLY_FORCE_TO_ENTITY(uLocal_135[0], 1, Var0, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
		}
	}
	if (GlobalFunc_4947(uLocal_135[1]))
	{
		if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_135[1]))
		{
			TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("Fan2_BikeRoute", ENTITY::GET_ENTITY_COORDS(uLocal_135[1], 1), &iLocal_132);
		}
	}
	if (GlobalFunc_4947(uLocal_135[1]) && iLocal_116 != 1)
	{
		if (((((((((((ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 797.1988f, 1150.205f, 297.7592f, 636.3047f, 1194.311f, 323.5919f, 33.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 529.2574f, 1137.587f, 244.0458f, 636.8788f, 1189.194f, 321.8586f, 33.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 595.2324f, 1124.2f, 260.2946f, 497.3239f, 1209.941f, 306.2784f, 30.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 510.0784f, 1209.081f, 266.6116f, 446.2863f, 1214.47f, 295.9254f, 30.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 433.5023f, 1264.279f, 259.0397f, 440.9848f, 1213.487f, 275.7219f, 18f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 436.5225f, 1281.199f, 263.655f, 435.0948f, 1271.009f, 277.8855f, 11.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 441.8611f, 1238.9f, 260.4148f, 458.7801f, 1220.361f, 283.4165f, 11.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 451.619f, 1060.921f, 212.0014f, 434.7438f, 1015.888f, 251.3387f, 14f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 442.6712f, 1022.329f, 210.5374f, 387.1651f, 1018.87f, 244.8419f, 14f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 374.6094f, 1002.934f, 187.2442f, 353.4876f, 1095.726f, 253.1393f, 14f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 362.5221f, 1059.685f, 209.3328f, 302.6266f, 1158.893f, 250.1798f, 14f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(uLocal_135[1], 279.92f, 1234.31f, 209.727f, 305.6058f, 1150.027f, 246.7506f, 15f, 0, 1, 0))
		{
			iLocal_116 = 1;
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_135[1]))
			{
				TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("Fan2_BikeRoute", ENTITY::GET_ENTITY_COORDS(uLocal_135[1], 1), &iLocal_133);
			}
			iLocal_117 = MISC::GET_GAME_TIMER();
		}
	}
	func_264();
}

void func_264()//Position - 0x2786C
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	switch (iLocal_116)
	{
		case 0:
			break;
		
		case 1:
			TASK::WAYPOINT_RECORDING_GET_COORD("Fan2_BikeRoute", iLocal_133, &Var0);
			if (GlobalFunc_4947(uLocal_135[1]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_135[1], 1), Var0, 1) < 2f)
				{
					GlobalFunc_2837("*** Mary Ann seems to have got herself back on track, carrying on as normal from #", iLocal_133);
					func_267(iLocal_133);
					iLocal_116 = 0;
				}
				if ((!CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(uLocal_135[1], 1), 3f) && !CAM::IS_SPHERE_VISIBLE(Var0, 3f)) || (MISC::GET_GAME_TIMER() - iLocal_117) > 2500)
				{
					iLocal_116 = 2;
				}
			}
			break;
		
		case 2:
			TASK::WAYPOINT_RECORDING_GET_COORD("Fan2_BikeRoute", iLocal_133, &Var0);
			TASK::WAYPOINT_RECORDING_GET_COORD("Fan2_BikeRoute", iLocal_133 + 1, &Var3);
			if (GlobalFunc_4947(uLocal_135[1]) && GlobalFunc_115(Local_877.f_28[0]))
			{
				fVar6 = ENTITY::GET_ENTITY_SPEED(Local_877.f_28[0]);
				ENTITY::SET_ENTITY_COORDS(uLocal_135[1], Var0, 1, 0, 0, 1);
				GlobalFunc_5971(uLocal_135[1], Var3);
				if (!PED::IS_PED_IN_VEHICLE(Local_877.f_28[0], uLocal_135[1], 0))
				{
					PED::SET_PED_INTO_VEHICLE(Local_877.f_28[0], uLocal_135[1], -1);
				}
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_877.f_28[0], uLocal_135[1], "Fan2_BikeRoute", 786468, 0, 8, -1, -1082130432, 0, 1073741824);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_135[1], fVar6);
				GlobalFunc_2837("*** Teleported Mary Ann to waypoint ", iLocal_133);
				func_267(iLocal_133);
				iLocal_116 = 0;
			}
			break;
	}
}



void func_267(int iParam0)//Position - 0x27A6C
{
	if (iParam0 <= 10)
	{
		iLocal_852 = 2;
	}
	else if (iParam0 <= 17)
	{
		iLocal_852 = 3;
	}
	else if (iParam0 <= 22)
	{
		iLocal_852 = 4;
	}
	else if (iParam0 <= 29)
	{
		iLocal_852 = 5;
	}
	else if (iParam0 <= 37)
	{
		iLocal_852 = 6;
	}
	else if (iParam0 <= 43)
	{
		iLocal_852 = 7;
	}
	else if (iParam0 <= 50)
	{
		iLocal_852 = 8;
	}
	else if (iParam0 <= 58)
	{
		iLocal_852 = 9;
	}
	else if (iParam0 <= 67)
	{
		iLocal_852 = 10;
	}
	else if (iParam0 <= 77)
	{
		iLocal_852 = 11;
	}
	else if (iParam0 <= 81)
	{
		iLocal_852 = 12;
	}
	else if (iParam0 <= 90)
	{
		iLocal_852 = 13;
	}
	else if (iParam0 <= 101)
	{
		iLocal_852 = 14;
	}
	else if (iParam0 <= 110)
	{
		iLocal_852 = 15;
	}
	else if (iParam0 <= 116)
	{
		iLocal_852 = 16;
	}
	else if (iParam0 <= 121)
	{
		iLocal_852 = 17;
	}
	else if (iParam0 <= 124)
	{
		iLocal_852 = 18;
	}
	else if (iParam0 <= 129)
	{
		iLocal_852 = 19;
	}
	else if (iParam0 <= 137)
	{
		iLocal_852 = 20;
	}
	else if (iParam0 <= 144)
	{
		iLocal_852 = 21;
	}
	else if (iParam0 <= 151)
	{
		iLocal_852 = 22;
	}
	else if (iParam0 <= 157)
	{
		iLocal_852 = 23;
	}
	else if (iParam0 <= 167)
	{
		iLocal_852 = 24;
	}
	else if (iParam0 <= 176)
	{
		iLocal_852 = 25;
	}
	else if (iParam0 <= 184)
	{
		iLocal_852 = 26;
	}
	GlobalFunc_2837("*** Recovery race checkpoint for Mary Ann set to: ", iLocal_852);
}

void func_268()//Position - 0x27BEE
{
	struct<3> Var0;
	int iVar3;
	
	if (iLocal_489 < 5)
	{
		if (iLocal_856 == 0)
		{
			if (func_256())
			{
				if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
				{
					Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0f, 8f, 0f) };
					if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var0, 3.5f))
					{
						iVar3 = VEHICLE::GET_CLOSEST_VEHICLE(Var0, 3.5f, 0, 2);
						if (iVar3 != 0)
						{
							if (!VEHICLE::IS_VEHICLE_MODEL(iVar3, joaat("scorcher")) || !VEHICLE::IS_VEHICLE_MODEL(iVar3, joaat("tribike")))
							{
								iLocal_856 = 1;
								iLocal_667 = MISC::GET_GAME_TIMER();
							}
						}
						iVar3 = VEHICLE::GET_CLOSEST_VEHICLE(Var0, 3.5f, 0, 4);
						if (iVar3 != 0)
						{
							if (!VEHICLE::IS_VEHICLE_MODEL(iVar3, joaat("scorcher")) || !VEHICLE::IS_VEHICLE_MODEL(iVar3, joaat("tribike")))
							{
								iLocal_856 = 1;
								iLocal_667 = MISC::GET_GAME_TIMER();
								if (iLocal_114 == 3 || iLocal_114 == 8)
								{
									GlobalFunc_4935();
									iLocal_114 = 0;
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_269()//Position - 0x27CDF
{
	if (Local_164.f_9 >= 26)
	{
		if (bLocal_675 == 0)
		{
			GlobalFunc_4935();
			bLocal_675 = true;
		}
	}
}





void func_274()//Position - 0x27F6D
{
	if (GlobalFunc_4947(uLocal_135[1]))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uLocal_135[1], 1), 1) <= 50f)
		{
			if (iLocal_849 == 2)
			{
				GlobalFunc_10692(&uLocal_45, uLocal_135[1], 0, 0, 1, 1, 1);
			}
			else
			{
				GlobalFunc_4948(&uLocal_45, 0, 0);
			}
		}
		else
		{
			GlobalFunc_4948(&uLocal_45, 0, 0);
		}
	}
}

























void func_299()//Position - 0x28EF9
{
	if (GlobalFunc_115(Local_877.f_28[0]))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_877.f_28[0], 591.0933f, 1192.419f, 305.529f, 585.4529f, 1205.725f, 311.526f, 2f, 0, 1, 0))
		{
			GlobalFunc_2838("*** Setting Mary Ann to AvoidCars_Reckless (if this works)");
			TASK::SET_DRIVE_TASK_DRIVING_STYLE(Local_877.f_28[0], 786468);
		}
	}
}

void func_300()//Position - 0x28F5A
{
	if (bLocal_851)
	{
		func_234();
	}
	else
	{
		if (iLocal_849 == 2)
		{
			if (func_256())
			{
				if (GlobalFunc_115(Local_877.f_28[0]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(Local_877.f_28[0], 1), 1) > 230f)
					{
						func_233(2);
					}
				}
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_179.f_4[Local_164.f_9 /*3*/], 1) > 130f)
		{
			if (Local_164.f_9 + 1 <= Local_179.f_126)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_179.f_4[Local_164.f_9 + 1 /*3*/], 1) < 100f)
				{
					func_233(10);
				}
				else
				{
					func_233(9);
				}
			}
			else
			{
				func_233(9);
			}
		}
	}
}

void func_301()//Position - 0x29022
{
	if (iLocal_109 == 1 || iLocal_109 == 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 458.5923f, 1066.151f, 232.1796f, 428.8209f, 1059.497f, 241.8942f, 9.75f, 0, 1, 0) && !bLocal_858)
		{
			STREAMING::REQUEST_MODEL(joaat("a_m_y_cyclist_01"));
			if (STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_cyclist_01")))
			{
				if (GlobalFunc_4947(iLocal_863))
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_863))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_863, 500, "Fan2_Cyclist", 1);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_863, 1);
						GlobalFunc_2838("Playing cyclist");
						bLocal_858 = true;
					}
				}
				else
				{
					func_322(&iLocal_863, joaat("tribike"), 292.3295f, 1244.04f, 234.0005f, 0, -1, 0);
					if (!GlobalFunc_115(iLocal_868) && GlobalFunc_4947(iLocal_863))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_863, -1))
						{
							iLocal_868 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_863, 26, joaat("a_m_y_cyclist_01"), -1, 1, 1);
							GlobalFunc_2838("Created cyclist.");
						}
					}
				}
			}
		}
		if (GlobalFunc_4947(iLocal_863) && GlobalFunc_115(iLocal_868))
		{
			if (bLocal_858)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_cyclist_01"));
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_863))
				{
					GlobalFunc_2297(&iLocal_868, 1, 0, 1);
					GlobalFunc_190(&iLocal_863);
					GlobalFunc_2838("Killing cyclist");
				}
			}
		}
		if (GlobalFunc_115(iLocal_868))
		{
			if (func_302(iLocal_868, 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_868, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
				GlobalFunc_2297(&iLocal_868, 1, 0, 1);
			}
		}
	}
}

int func_302(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x291AE
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8640(iParam0, bParam1, bParam5, bParam6, bParam7))
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
					return GlobalFunc_2995(PLAYER::PLAYER_PED_ID(), iParam0, fParam2);
				}
			}
		}
		if (bParam4)
		{
			return 0;
		}
		else if (func_303(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_303(int iParam0, float fParam1)//Position - 0x29269
{
	float fVar0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (GlobalFunc_2994(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
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
				if (func_304(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_304(int iParam0, float fParam1)//Position - 0x292DF
{
	return func_305(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_305(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x292F7
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_313(iParam0, iParam1);
	if (!GlobalFunc_115(iParam0) || !GlobalFunc_115(iParam1))
	{
		if (iVar4 != -1)
		{
			GlobalFunc_169(&(Local_57[iVar4 /*4*/]));
		}
		return 0;
	}
	if (!GlobalFunc_4958(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar4 == -1)
	{
		iVar4 = func_308();
		if (iVar4 == -1)
		{
			return 0;
		}
		Local_57[iVar4 /*4*/].f_1 = iParam0;
		Local_57[iVar4 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_306(&(Local_57[iVar4 /*4*/]), Var1, iParam1, &(Local_57[iVar4 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_57[iVar4 /*4*/].f_3) < iParam4);
}

int func_306(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7)//Position - 0x293B8
{
	var uVar0;
	struct<3> Var1;
	var uVar4;
	int iVar7;
	int iVar8;
	
	iVar7 = 0;
	if (!GlobalFunc_115(iParam4))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { GlobalFunc_167(iParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam6, 7);
		return 0;
	}
	iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar4, &iVar7);
	if (iVar8 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar8 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar7))
	{
		GlobalFunc_115(iVar7);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar7) == iParam4)
		{
			if (bLocal_98)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar7))
	{
		GlobalFunc_115(iVar7);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam4, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar7) == PED::GET_VEHICLE_PED_IS_IN(iParam4, 0))
			{
				if (bLocal_98)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam4, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}


int func_308()//Position - 0x295A9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_57)
	{
		if ((Local_57[iVar0 /*4*/] == 0 && Local_57[iVar0 /*4*/].f_1 == 0) && Local_57[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}





int func_313(int iParam0, int iParam1)//Position - 0x296FF
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_57)
	{
		if (Local_57[iVar0 /*4*/].f_1 == iParam0 && Local_57[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}









void func_322(int iParam0, int iParam1, struct<3> Param2, int iParam5, int iParam6, int iParam7)//Position - 0x29B56
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(iParam1))
		{
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, iParam5, 1, 1);
			if (iParam6 >= 0)
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam6);
			}
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, iParam7);
		}
	}
}

void func_323()//Position - 0x29B9B
{
	if (iLocal_109 == 1 || iLocal_109 == 2)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 838.8253f, 1255.185f, 352.5532f, 871.4733f, 1263.308f, 364.4244f, 30.25f, 0, 1, 0))
		{
			if (!GlobalFunc_115(iLocal_866) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_runner_01")))
			{
				iLocal_866 = PED::CREATE_PED(26, joaat("a_f_y_runner_01"), 590.1751f, 1203.141f, 307.694f, 293.4f, 1, 1);
				GlobalFunc_2838("Created jogger 1");
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_y_runner_01"));
			}
			else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_866))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_866, "Fan2_Jogger1", 0, 0, -1);
			}
			else if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_866) > 93)
			{
				GlobalFunc_2838("Released jogger 1 (waypoint > 93)");
				GlobalFunc_2297(&iLocal_866, 1, 0, 1);
			}
			if (!GlobalFunc_115(iLocal_867) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_runner_01")))
			{
				iLocal_867 = PED::CREATE_PED(26, joaat("a_m_y_runner_01"), 592.1368f, 1200.911f, 307.7926f, 286.58f, 1, 1);
				GlobalFunc_2838("Created jogger 2");
				if (GlobalFunc_199())
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_runner_01"));
				}
			}
			else if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_867))
			{
				TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_867, "Fan2_Jogger2", 0, 0, -1);
			}
			else if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_867) > 93)
			{
				GlobalFunc_2838("Released jogger 2 (waypoint > 93)");
				GlobalFunc_2297(&iLocal_867, 1, 0, 1);
			}
		}
		else
		{
			if (GlobalFunc_115(iLocal_866))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_866))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_866) > 93)
					{
						GlobalFunc_2297(&iLocal_866, 1, 0, 1);
						GlobalFunc_2838("Released jogger 1 (waypoint > 93)");
					}
					else if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_866) > 51)
					{
						if (GlobalFunc_156(iLocal_866, PLAYER::PLAYER_PED_ID(), 1) > 70f)
						{
							GlobalFunc_2297(&iLocal_866, 1, 0, 1);
							GlobalFunc_2838("Released jogger 1 (distance > 70)");
						}
					}
				}
				else
				{
					GlobalFunc_2297(&iLocal_866, 1, 0, 1);
					GlobalFunc_2838("Released jogger 1 (no waypoint playback)");
				}
			}
			else
			{
				GlobalFunc_2297(&iLocal_866, 1, 0, 1);
			}
			if (GlobalFunc_115(iLocal_867))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_867))
				{
					if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_867) > 93)
					{
						GlobalFunc_2297(&iLocal_867, 1, 0, 1);
						GlobalFunc_2838("Released jogger 2 (waypoint > 93)");
					}
					else if (TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_867) > 51)
					{
						if (GlobalFunc_156(iLocal_867, PLAYER::PLAYER_PED_ID(), 1) > 70f)
						{
							GlobalFunc_2297(&iLocal_867, 1, 0, 1);
							GlobalFunc_2838("Released jogger 2 (distance > 70)");
						}
					}
				}
				else
				{
					GlobalFunc_2297(&iLocal_867, 1, 0, 1);
					GlobalFunc_2838("Released jogger 2 (no waypoint playback)");
				}
			}
			else
			{
				GlobalFunc_2297(&iLocal_867, 1, 0, 1);
			}
			if (func_302(iLocal_866, 1, 1116471296, 1126825984, 0, 0, 0, 0) || func_302(iLocal_867, 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				if (GlobalFunc_4924(iLocal_866) && GlobalFunc_4924(iLocal_867))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_866, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					TASK::TASK_SMART_FLEE_PED(iLocal_867, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				}
				GlobalFunc_2297(&iLocal_866, 1, 0, 1);
				GlobalFunc_2297(&iLocal_867, 1, 0, 1);
				GlobalFunc_2838("Released joggers 1 & 2 (threatened)");
			}
		}
	}
}

void func_324()//Position - 0x29EB3
{
	if (!GlobalFunc_199())
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 435.1628f, 1275.777f, 269.5054f, 455.5966f, 1285.542f, 278.7485f, 8.5f, 0, 1, 0))
		{
			if (iLocal_859 == 0)
			{
				STREAMING::REQUEST_MODEL(joaat("penumbra"));
				STREAMING::REQUEST_MODEL(joaat("police3"));
				VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Fan2_Driver");
				VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Fan2_DriverCop");
				if (((STREAMING::HAS_MODEL_LOADED(joaat("penumbra")) && STREAMING::HAS_MODEL_LOADED(joaat("police3"))) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Fan2_Driver")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Fan2_DriverCop"))
				{
					func_322(&iLocal_861, joaat("penumbra"), 543.5132f, 1022.728f, 216.7213f, 0, -1, 0);
					if (!GlobalFunc_115(iLocal_864) && GlobalFunc_4947(iLocal_861))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_861, -1))
						{
							iLocal_864 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_861, 26, joaat("a_m_y_runner_01"), -1, 1, 1);
							GlobalFunc_2838("Created car.");
						}
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("penumbra"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_runner_01"));
					func_322(&iLocal_862, joaat("police3"), 537.1293f, 1009.889f, 214.4232f, 0, -1, 0);
					if (!GlobalFunc_115(iLocal_865) && GlobalFunc_4947(iLocal_862))
					{
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_862, -1))
						{
							iLocal_865 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_862, 6, joaat("s_m_y_cop_01"), -1, 1, 1);
							GlobalFunc_2838("Created cop car.");
						}
					}
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("police3"));
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_y_cop_01"));
					if (GlobalFunc_4947(iLocal_861))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_861))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_861, 500, "Fan2_Driver", 1);
						}
					}
					if (GlobalFunc_4947(iLocal_862))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_862))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_862, 500, "Fan2_DriverCop", 1);
							VEHICLE::SET_VEHICLE_SIREN(iLocal_862, 1);
						}
					}
					iLocal_859 = 1;
				}
			}
		}
		else
		{
			if (GlobalFunc_4947(iLocal_861))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_861))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_861, 1.2f);
				}
			}
			if (GlobalFunc_4947(iLocal_862))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_862))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_862, 1.3f);
				}
			}
		}
	}
}

void func_325()//Position - 0x2A0D7
{
	struct<3> Var0;
	int iVar3;
	
	if (func_256())
	{
		if (GlobalFunc_4947(uLocal_135[0]) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
			{
				Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0f, 6f, 0f) };
				if ((MISC::GET_GAME_TIMER() - iLocal_130) > 4000)
				{
					iVar3 = VEHICLE::GET_CLOSEST_VEHICLE(Var0, 8f, 0, 2);
					if (iVar3 != 0)
					{
						GlobalFunc_2838("HONKING: Entity exists!");
						if ((!VEHICLE::IS_VEHICLE_MODEL(iVar3, joaat("scorcher")) && !VEHICLE::IS_VEHICLE_MODEL(iVar3, joaat("tribike"))) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iVar3, -1))
						{
							VEHICLE::START_VEHICLE_HORN(iVar3, 4000, 0, 0);
							GlobalFunc_2838("Honking!");
							if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iVar3, 3000, 0, 2);
							}
							iLocal_130 = MISC::GET_GAME_TIMER();
						}
					}
					iVar3 = VEHICLE::GET_CLOSEST_VEHICLE(Var0, 8f, 0, 4);
					if (iVar3 != 0)
					{
						GlobalFunc_2838("HONKING: Entity exists!");
						if ((!VEHICLE::IS_VEHICLE_MODEL(iVar3, joaat("scorcher")) && !VEHICLE::IS_VEHICLE_MODEL(iVar3, joaat("tribike"))) && !VEHICLE::IS_VEHICLE_SEAT_FREE(iVar3, -1))
						{
							VEHICLE::START_VEHICLE_HORN(iVar3, 4000, 0, 0);
							GlobalFunc_2838("Honking!");
							if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iVar3, 3000, 0, 2);
							}
							iLocal_130 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}
}

void func_326()//Position - 0x2A230
{
	if (func_256())
	{
		if (GlobalFunc_4947(uLocal_135[0]))
		{
			if (iLocal_160 == 1)
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], 0))
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_138))
					{
						uLocal_138 = GlobalFunc_5743(uLocal_135[0], 1, 5);
					}
					if (iLocal_853 == 0)
					{
						GlobalFunc_164("FATIC2_1", 7500, 1);
						iLocal_853 = 1;
					}
					iLocal_160 = 0;
				}
			}
			else
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], 0))
				{
					HUD::CLEAR_PRINTS();
					GlobalFunc_846(&uLocal_138);
					iLocal_160 = 1;
				}
				if (GlobalFunc_4947(uLocal_135[0]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), uLocal_135[0], 1) > 40f)
					{
						func_233(6);
					}
				}
			}
		}
	}
}



void func_329()//Position - 0x2A32C
{
	float fVar0;
	float fVar1;
	
	if (ENTITY::IS_ENTITY_AT_COORD(Local_877.f_28[0], Local_179.f_4[iLocal_852 /*3*/], 6f, 6f, 6f, 0, 1, 0))
	{
		iLocal_852++;
		GlobalFunc_2837("Next Mary Ann checkpoint: ", iLocal_852);
		if (iLocal_852 == 22)
		{
			TASK::SET_DRIVE_TASK_DRIVING_STYLE(Local_877.f_28[0], 786468);
			GlobalFunc_2838("Also setting Mary Ann to never go offroad");
		}
	}
	if (iLocal_852 >= 27)
	{
		iLocal_849 = 2;
		bLocal_851 = true;
		GlobalFunc_2838("You lost!");
	}
	else
	{
		if (iLocal_852 > 2)
		{
			if (func_330(iLocal_852) + 10 < iLocal_132)
			{
				GlobalFunc_2837("iWomanNextCheckpoint+10 is ", iLocal_852 + 10);
				GlobalFunc_2837("but iClosestWaypoint is ", iLocal_132);
				GlobalFunc_2838("Re-setting Mary Ann's current checkpoint...");
				func_267(iLocal_132);
			}
		}
		if (iLocal_852 > Local_164.f_9)
		{
			if (iLocal_849 != 2)
			{
				iLocal_849 = 2;
			}
		}
		else if (iLocal_852 < Local_164.f_9)
		{
			if (iLocal_849 != 1)
			{
				iLocal_849 = 1;
				if ((MISC::GET_GAME_TIMER() - iLocal_670) > 3000)
				{
					iLocal_669 = 1;
					iLocal_667 = MISC::GET_GAME_TIMER();
				}
			}
		}
		else
		{
			if (func_256())
			{
				fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_179.f_4[Local_164.f_9 /*3*/], 1);
			}
			if (GlobalFunc_115(Local_877.f_28[0]))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(Local_877.f_28[0], 1), Local_179.f_4[iLocal_852 /*3*/], 1);
			}
			if (fVar0 > fVar1)
			{
				if (iLocal_849 != 2)
				{
					iLocal_849 = 2;
				}
			}
			else if (iLocal_849 != 1)
			{
				iLocal_849 = 1;
				if ((MISC::GET_GAME_TIMER() - iLocal_670) > 3000)
				{
					iLocal_669 = 1;
					iLocal_667 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

int func_330(int iParam0)//Position - 0x2A4B6
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			return 10;
			break;
		
		case 3:
			return 17;
			break;
		
		case 4:
			return 22;
			break;
		
		case 5:
			return 29;
			break;
		
		case 6:
			return 37;
			break;
		
		case 7:
			return 43;
			break;
		
		case 8:
			return 50;
			break;
		
		case 9:
			return 58;
			break;
		
		case 10:
			return 67;
			break;
		
		case 11:
			return 77;
			break;
		
		case 12:
			return 81;
			break;
		
		case 13:
			return 90;
			break;
		
		case 14:
			return 101;
			break;
		
		case 15:
			return 110;
			break;
		
		case 16:
			return 116;
			break;
		
		case 17:
			return 121;
			break;
		
		case 18:
			return 124;
			break;
		
		case 19:
			return 129;
			break;
		
		case 20:
			return 137;
			break;
		
		case 21:
			return 144;
			break;
		
		case 22:
			return 151;
			break;
		
		case 23:
			return 157;
			break;
		
		case 24:
			return 167;
			break;
		
		case 25:
			return 176;
			break;
		
		case 26:
			return 184;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}


int func_332(var uParam0, var uParam1, int iParam2)//Position - 0x2A64E
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	
	if (func_337(uParam0, uParam1->f_130) || iParam2 == 0)
	{
		if (uParam0->f_5 != 0)
		{
			iLocal_43 = (iLocal_43 - 25);
			if (iLocal_43 > 0)
			{
				HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
				GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_5, uVar0, uVar1, uVar2, iLocal_43);
				GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_5, uVar0, uVar1, uVar2, iLocal_43);
			}
			else
			{
				GRAPHICS::DELETE_CHECKPOINT(uParam0->f_5);
			}
		}
		if (func_336(uParam0, uParam1))
		{
			if (uParam0->f_9 < (uParam1->f_126 - 1))
			{
				uParam0->f_9++;
				if (uParam0->f_10 == (uParam1->f_126 - 1))
				{
					if (uParam0->f_11 < uParam1->f_127)
					{
						uParam0->f_10 = 0;
					}
				}
				else
				{
					uParam0->f_10++;
				}
				func_335(uParam0, uParam1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
				return 1;
			}
			else if (uParam0->f_11 < uParam1->f_127)
			{
				uParam0->f_9 = 0;
				uParam0->f_10 = 1;
				uParam0->f_11++;
				func_335(uParam0, uParam1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
				return 1;
			}
			else if (HUD::DOES_BLIP_EXIST(uParam0->f_2))
			{
				uParam0->f_14 = 5;
				HUD::REMOVE_BLIP(&(uParam0->f_2));
				GRAPHICS::DELETE_CHECKPOINT(uParam0->f_4);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 0);
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(uParam0->f_2))
		{
			func_335(uParam0, uParam1);
		}
		uVar4 = func_334(uParam0->f_9, uParam1);
		HUD::GET_HUD_COLOUR(func_333(uVar4), &uVar5, &uVar6, &uVar7, &iVar8);
		uParam0->f_13 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(*uParam0, 1), uParam1->f_4[uParam0->f_9 /*3*/]);
		if (uParam0->f_4 != 0)
		{
			if (uParam0->f_13 > 100f)
			{
				HUD::GET_HUD_COLOUR(13, &uVar5, &uVar6, &uVar7, &iVar8);
				iVar8 = 240;
				GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar5, uVar6, uVar7, iVar8);
				HUD::GET_HUD_COLOUR(134, &uVar5, &uVar6, &uVar7, &iVar8);
				iVar8 = 240;
				GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar5, uVar6, uVar7, iVar8);
			}
			else
			{
				HUD::GET_HUD_COLOUR(13, &uVar5, &uVar6, &uVar7, &iVar8);
				iVar8 = SYSTEM::ROUND((uParam0->f_13 * 2.4f));
				if (iVar8 < 60)
				{
					iVar8 = 60;
				}
				GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar5, uVar6, uVar7, iVar8);
				HUD::GET_HUD_COLOUR(134, &uVar5, &uVar6, &uVar7, &iVar8);
				iVar8 = SYSTEM::ROUND((uParam0->f_13 * 2.4f));
				if (iVar8 < 60)
				{
					iVar8 = 60;
				}
				GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar5, uVar6, uVar7, iVar8);
			}
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uParam0->f_2))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_2));
			GRAPHICS::DELETE_CHECKPOINT(uParam0->f_4);
		}
		if (HUD::DOES_BLIP_EXIST(uParam0->f_3))
		{
			HUD::REMOVE_BLIP(&(uParam0->f_3));
		}
	}
	return 0;
}

int func_333(var uParam0)//Position - 0x2A8E4
{
	uParam0 = uParam0;
	return 14;
}

int func_334(int iParam0, var uParam1)//Position - 0x2A8F2
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
	Var0 = { uParam1->f_4[iParam0 /*3*/] };
	if (iParam0 + 1 == (uParam1->f_126 - 1))
	{
		Var3 = { uParam1->f_4[0 /*3*/] };
	}
	else
	{
		Var3 = { uParam1->f_4[iParam0 + 1 /*3*/] };
	}
	if ((iParam0 - 1) >= 0)
	{
		Var6 = { uParam1->f_4[(iParam0 - 1) /*3*/] };
	}
	Var9 = { Var6 - Var0 };
	Var12 = { Var3 - Var0 };
	fVar15 = MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var9.x, Var9.f_1, Var12.x, Var12.f_1);
	if (fVar15 > 180f)
	{
		fVar15 = (360f - fVar15);
	}
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
	return 5;
}

void func_335(var uParam0, var uParam1)//Position - 0x2A9D5
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	
	fVar3 = 0.7f;
	fVar4 = ((7.5f * 2f) * 0.66f);
	bVar5 = true;
	iVar6 = func_334(uParam0->f_9, uParam1);
	iVar7 = 9;
	HUD::GET_HUD_COLOUR(func_333(iVar6), &uVar8, &uVar9, &uVar10, &iVar11);
	if (HUD::DOES_BLIP_EXIST(uParam0->f_2))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_2));
		GRAPHICS::DELETE_CHECKPOINT(uParam0->f_4);
		HUD::GET_HUD_COLOUR(1, &uVar12, &uVar13, &uVar14, &uVar15);
		iLocal_43 = 180;
		Var0 = { uParam1->f_4[(uParam0->f_9 - 1) /*3*/] };
		Var0 = { Var0 + Vector(7.5f, 0f, 0f) };
		if (uParam0->f_9 == (uParam1->f_126 - 1))
		{
			uParam0->f_5 = GRAPHICS::CREATE_CHECKPOINT(iVar7, Var0, uParam1->f_4[uParam0->f_9 /*3*/], fVar4, uVar12, uVar13, uVar14, iLocal_43, 0);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_5, 3f, 3f, 100f);
			GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_5, uVar12, uVar13, uVar14, iLocal_43);
			GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_5, uVar12, uVar13, uVar14, iLocal_43);
		}
		else
		{
			uParam0->f_5 = GRAPHICS::CREATE_CHECKPOINT(func_334((uParam0->f_9 - 1), uParam1), Var0, uParam1->f_4[uParam0->f_9 /*3*/], fVar4, uVar12, uVar13, uVar14, iLocal_43, 0);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_5, 3f, 3f, 100f);
			GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_5, uVar12, uVar13, uVar14, iLocal_43);
			GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_5, uVar12, uVar13, uVar14, iLocal_43);
		}
	}
	if (!HUD::DOES_BLIP_EXIST(uParam0->f_2))
	{
		uParam0->f_2 = HUD::ADD_BLIP_FOR_COORD(uParam1->f_4[uParam0->f_9 /*3*/]);
		HUD::SET_BLIP_DISPLAY(uParam0->f_2, 2);
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_2, "BLIP_CPOINT");
		HUD::SET_BLIP_SCALE(uParam0->f_2, 1.2f);
		HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_2, 0);
		Var0 = { uParam1->f_4[uParam0->f_9 /*3*/] };
		Var0 = { Var0 + Vector(7.5f, 0f, 0f) };
		if (uParam0->f_9 == (uParam1->f_126 - 1))
		{
			if (uParam0->f_11 == uParam1->f_127)
			{
				uParam0->f_4 = GRAPHICS::CREATE_CHECKPOINT(iVar7, Var0, uParam1->f_4[uParam0->f_9 /*3*/], fVar4, uVar8, uVar9, uVar10, 100, 0);
				HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
				GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
				GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_4, 3f, 3f, 100f);
				fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam1->f_4[uParam0->f_9 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1);
				if (uParam0->f_4 != 0)
				{
					if (uParam0->f_13 > 100f)
					{
						iVar11 = 200;
						HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
						GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
						HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
						GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					}
					else
					{
						HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
						iVar11 = SYSTEM::ROUND((fVar16 * 2f));
						GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
						HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
						iVar11 = SYSTEM::ROUND((fVar16 * 2f));
						GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					}
				}
				HUD::SET_BLIP_SPRITE(uParam0->f_2, 38);
				bVar5 = false;
			}
			else
			{
				uParam0->f_4 = GRAPHICS::CREATE_CHECKPOINT(iVar7, Var0, uParam1->f_4[0 /*3*/], fVar4, uVar8, uVar9, uVar10, iVar11, 0);
				HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
				GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
				GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_4, 3f, 3f, 100f);
				fVar17 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam1->f_4[uParam0->f_9 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1);
				if (uParam0->f_4 != 0)
				{
					if (uParam0->f_13 > 100f)
					{
						iVar11 = 200;
						HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
						GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
						HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
						GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					}
					else
					{
						HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
						iVar11 = SYSTEM::ROUND((fVar17 * 2f));
						GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
						HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
						iVar11 = SYSTEM::ROUND((fVar17 * 2f));
						GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					}
				}
			}
		}
		else
		{
			uParam0->f_4 = GRAPHICS::CREATE_CHECKPOINT(iVar6, Var0, uParam1->f_4[uParam0->f_9 + 1 /*3*/], fVar4, uVar8, uVar9, uVar10, 150, 0);
			HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
			GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
			HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
			GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
			GRAPHICS::SET_CHECKPOINT_CYLINDER_HEIGHT(uParam0->f_4, 3f, 3f, 100f);
			fVar18 = MISC::GET_DISTANCE_BETWEEN_COORDS(uParam1->f_4[uParam0->f_9 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 1);
			if (uParam0->f_4 != 0)
			{
				if (uParam0->f_13 > 100f)
				{
					iVar11 = 200;
					GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
					GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
					GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				}
				else
				{
					HUD::GET_HUD_COLOUR(13, &uVar8, &uVar9, &uVar10, &iVar11);
					iVar11 = SYSTEM::ROUND((fVar18 * 2f));
					GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
					HUD::GET_HUD_COLOUR(134, &uVar8, &uVar9, &uVar10, &iVar11);
					iVar11 = SYSTEM::ROUND((fVar18 * 2f));
					GRAPHICS::SET_CHECKPOINT_RGBA2(uParam0->f_4, uVar8, uVar9, uVar10, iVar11);
				}
			}
		}
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_3))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_3));
	}
	if (bVar5)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_3))
		{
			if (uParam0->f_10 < (uParam1->f_126 - 1))
			{
				uParam0->f_3 = HUD::ADD_BLIP_FOR_COORD(uParam1->f_4[uParam0->f_10 /*3*/]);
				HUD::SET_BLIP_DISPLAY(uParam0->f_3, 2);
				HUD::SET_BLIP_SCALE(uParam0->f_3, fVar3);
				HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_3, 0);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_CPOINT");
			}
			else if (uParam0->f_10 == (uParam1->f_126 - 1))
			{
				if (uParam0->f_11 == uParam1->f_127)
				{
					uParam0->f_3 = HUD::ADD_BLIP_FOR_COORD(uParam1->f_4[uParam0->f_10 /*3*/]);
					HUD::SET_BLIP_SPRITE(uParam0->f_3, 38);
					HUD::SET_BLIP_DISPLAY(uParam0->f_3, 2);
					HUD::SET_BLIP_SCALE(uParam0->f_3, 1.2f);
					HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_3, 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_CPOINT");
				}
				else
				{
					uParam0->f_3 = HUD::ADD_BLIP_FOR_COORD(uParam1->f_4[uParam0->f_10 /*3*/]);
					HUD::SET_BLIP_DISPLAY(uParam0->f_3, 2);
					HUD::SET_BLIP_SCALE(uParam0->f_3, fVar3);
					HUD::SHOW_HEIGHT_ON_BLIP(uParam0->f_3, 0);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_3, "BLIP_CPOINT");
				}
			}
		}
	}
}

int func_336(var uParam0, var uParam1)//Position - 0x2B07D
{
	if (uParam1->f_130 == 2 || uParam1->f_130 == 1)
	{
		fLocal_42 = 4f;
	}
	else if (uParam1->f_129 == 5)
	{
		fLocal_42 = (6f + 2f);
	}
	else
	{
		fLocal_42 = 6f;
	}
	if (uParam0->f_9 > -1)
	{
		if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, uParam1->f_4[uParam0->f_9 /*3*/], fLocal_42, fLocal_42, fLocal_42, 0, 1, 0))
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

int func_337(var uParam0, int iParam1)//Position - 0x2B0E6
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		if (PED::IS_PED_IN_VEHICLE(*uParam0, uParam0->f_1, 0))
		{
			if (iParam1 == 4)
			{
				if (!PED::IS_PED_ON_ANY_BIKE(*uParam0))
				{
					return 0;
				}
				else
				{
					return 1;
				}
			}
			else if ((VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1, joaat("fbi")) || VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1, joaat("firetruk"))) || VEHICLE::IS_VEHICLE_MODEL(uParam0->f_1, joaat("police")))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_338(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, bool bParam21, int iParam22, char* sParam23, float fParam24, int iParam25, int iParam26)//Position - 0x2B16A
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
		sVar2 = iParam7;
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












void func_350()//Position - 0x2B983
{
	int iVar0;
	
	if (func_235())
	{
		HUD::_HIDE_AREA_AND_VEHICLE_NAME_THIS_FRAME();
		GlobalFunc_2838("Init MS_COUNTDOWN");
		GRAPHICS::FORCE_RENDER_IN_GAME_UI(0);
		Local_179 = { Local_140[0 /*3*/] };
		Local_179.f_3 = fLocal_147[0];
		Local_164.f_9 = 1;
		Local_164.f_10 = 2;
		func_358();
		if (iLocal_844 || iLocal_842)
		{
			GlobalFunc_2838("Doing Countdown init reset...");
			func_357();
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			func_242(1, 1, 1, 1);
		}
		func_354();
		if (GlobalFunc_4947(uLocal_135[0]))
		{
			if (func_256())
			{
				iLocal_122 = 1;
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_135[0], 3.5f);
			}
		}
		else
		{
			GlobalFunc_2838("No bike in MS_COUNTDOWN init?");
		}
		if (bLocal_123)
		{
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 236, 1);
				GlobalFunc_2838("Setting PRF_PreventGoingIntoStillInVehicleState on Trevor");
			}
		}
		if (GlobalFunc_4947(uLocal_135[1]))
		{
			if (GlobalFunc_115(Local_877.f_28[0]))
			{
				PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Local_877.f_28[0], 1);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uLocal_135[1], 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uLocal_135[1], 3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_877.f_28[0], 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_877.f_28[0], 1);
				PED::SET_DRIVER_RACING_MODIFIER(Local_877.f_28[0], 1f);
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(uLocal_135[1], 125f);
			}
		}
		if (iLocal_842 || GlobalFunc_199())
		{
			iLocal_852 = 2;
		}
		else
		{
			iLocal_852 = 1;
		}
		iLocal_849 = 2;
		iLocal_160 = 1;
		iLocal_489 = 0;
		iLocal_662 = 0;
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iLocal_483[iVar0] = 0;
			iVar0++;
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			GlobalFunc_2838("Unlock gate 1.");
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 801.7148f, 1270.138f, 359.2855f, 0, 0f, 0);
		}
		if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9218f, 1281.675f, 359.2962f, 6f, joaat("prop_fnclink_03gate1"), 0))
		{
			GlobalFunc_2838("Unlock gate 2.");
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_fnclink_03gate1"), 802.9218f, 1281.675f, 359.2962f, 0, 0f, 0);
		}
		if (iLocal_844)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_RESTART1");
		}
		else
		{
			AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_START");
		}
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("FANATIC_MIX_SCENE");
			if (GlobalFunc_115(Local_877.f_28[0]))
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_877.f_28[0], "FANATIC_MIX_MARY_ANNE", 0);
			}
			if (GlobalFunc_115(uLocal_135[1]))
			{
				GlobalFunc_2838("Trying to add Mary Ann's bike to mix group...");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_135[1], "FANATIC_MIX_MARY_BIKE", 0);
			}
		}
		if (GlobalFunc_199())
		{
			SYSTEM::SETTIMERA(0);
			if (GlobalFunc_188())
			{
				GlobalFunc_4967(uLocal_135[0], -1, 1);
			}
			while (SYSTEM::TIMERA() < 750)
			{
				SYSTEM::WAIT(0);
				GlobalFunc_2838("In fade in wait...");
				if (GlobalFunc_4947(uLocal_135[0]))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_135[0], 3.5f);
				}
			}
			func_240(1, 1, 1);
		}
		else if (iLocal_842)
		{
			while ((MISC::GET_GAME_TIMER() - iLocal_131) < 1250)
			{
				SYSTEM::WAIT(0);
				GlobalFunc_2838("In fade wait...");
				if (GlobalFunc_4947(uLocal_135[0]))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_135[0], 3.5f);
				}
			}
			GlobalFunc_79(500, 0);
		}
		if (iLocal_844 || iLocal_842)
		{
			iLocal_842 = 0;
			iLocal_844 = 0;
			iLocal_854 = 0;
			GlobalFunc_69(&iLocal_866);
			GlobalFunc_69(&iLocal_867);
		}
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		GlobalFunc_164("FAN2_OBJ", 7500, 1);
		iLocal_162 = MISC::GET_GAME_TIMER();
		iLocal_848 = MISC::GET_GAME_TIMER();
		GlobalFunc_2838("Running MS_COUNTDOWN");
	}
	else
	{
		HUD::_HIDE_AREA_AND_VEHICLE_NAME_THIS_FRAME();
		GlobalFunc_1470();
		func_338((MISC::GET_GAME_TIMER() - iLocal_162), "", -1, -1, "", iLocal_849, 2, 0, 0, 1, -1, -1, 0, 12, -1, -1, 0, 6, -1, 0, 0, 1, -1, 0, -1082130432, 1, 1);
		func_332(&Local_164, &Local_179, 1);
		func_401();
		func_274();
		func_329();
		if (iLocal_122)
		{
			GlobalFunc_2838("Continuing push");
			if (GlobalFunc_4947(uLocal_135[0]))
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_135[0], 3.5f);
			}
			if (func_351())
			{
				iLocal_122 = 0;
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_848) > 2000)
		{
			if (GlobalFunc_4947(uLocal_135[0]))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_135[0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_135[0]);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_234();
				}
				else
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					func_234();
				}
			}
		}
	}
	if (func_232())
	{
		GlobalFunc_2838("Cleaned up MS_COUNTDOWN");
	}
}

int func_351()//Position - 0x2BDDE
{
	if (((((PAD::IS_CONTROL_PRESSED(0, 59) || PAD::IS_CONTROL_PRESSED(0, 60)) || PAD::IS_CONTROL_PRESSED(0, 76)) || PAD::IS_CONTROL_PRESSED(0, 73)) || PAD::IS_CONTROL_PRESSED(0, 102)) || PAD::IS_CONTROL_PRESSED(0, 72))
	{
		GlobalFunc_2838("*** Player input detected");
		return 1;
	}
	return 0;
}



void func_354()//Position - 0x2BF17
{
	Local_164.f_1 = uLocal_135[0];
	Local_164 = PLAYER::PLAYER_PED_ID();
	GlobalFunc_2838("Setting up race info");
	Local_179.f_129 = 3;
	func_355(&Local_179);
}

void func_355(var uParam0)//Position - 0x2BF42
{
	uParam0->f_126 = 0;
	if (uParam0->f_129 == 0)
	{
	}
	switch (uParam0->f_129)
	{
		case 1:
			uParam0->f_130 = 8;
			*uParam0 = { -331.1481f, 4753.729f, 227.6643f };
			uParam0->f_3 = 229f;
			uParam0->f_128 = 2;
			func_356(uParam0, -329.1481f, 4749.729f, 228.6643f);
			func_356(uParam0, -291.5515f, 4691.305f, 235.7776f);
			func_356(uParam0, -310.1067f, 4684.866f, 246.5917f);
			func_356(uParam0, -415.3808f, 4672.355f, 253.3204f);
			func_356(uParam0, -430.98f, 4707.399f, 253.2198f);
			func_356(uParam0, -447.766f, 4737.784f, 244.1033f);
			func_356(uParam0, -502.0252f, 4732.673f, 239.5285f);
			func_356(uParam0, -579.2366f, 4750.397f, 211.4045f);
			func_356(uParam0, -622.6068f, 4716.045f, 225.8445f);
			func_356(uParam0, -672.1638f, 4728.694f, 238.2206f);
			func_356(uParam0, -736.2177f, 4783.163f, 226.502f);
			func_356(uParam0, -795.5958f, 4867.998f, 255.8227f);
			func_356(uParam0, -855.1999f, 4865.062f, 289.7517f);
			func_356(uParam0, -876.2197f, 4796.166f, 298.3487f);
			func_356(uParam0, -944.431f, 4773.479f, 284.3422f);
			func_356(uParam0, -1026.636f, 4834.163f, 255.4192f);
			func_356(uParam0, -1070.029f, 4825.063f, 231.3936f);
			func_356(uParam0, -1089.925f, 4804.061f, 216.7211f);
			func_356(uParam0, -1279.261f, 4841.332f, 151.8451f);
			func_356(uParam0, -1375.767f, 4798.228f, 126.2156f);
			func_356(uParam0, -1467.242f, 4803.929f, 81.1326f);
			func_356(uParam0, -1485.863f, 4750.45f, 58.8107f);
			func_356(uParam0, -1541.965f, 4738.958f, 50.8111f);
			func_356(uParam0, -1581.132f, 4839.46f, 52.7062f);
			func_356(uParam0, -1494.741f, 4971.167f, 46.7483f);
			uParam0->f_127 = 0;
			uParam0->f_125 = 15f;
			break;
		
		case 2:
			uParam0->f_130 = 8;
			*uParam0 = { 376.5668f, 1058.377f, 236.1919f };
			uParam0->f_3 = 2.9613f;
			uParam0->f_128 = 1;
			func_356(uParam0, 374.2899f, 1074.483f, 235.7123f);
			func_356(uParam0, 362.0448f, 1110.634f, 235.1055f);
			func_356(uParam0, 319.5104f, 1161.185f, 235.4029f);
			func_356(uParam0, 300.0755f, 1237.272f, 234.0581f);
			func_356(uParam0, 269.5442f, 1263.074f, 232.5312f);
			func_356(uParam0, 240.08f, 1180.87f, 224.46f);
			func_356(uParam0, 214.48f, 1216.27f, 224.59f);
			func_356(uParam0, 183.42f, 1205.29f, 224.59f);
			func_356(uParam0, 188.68f, 1187.18f, 224.59f);
			func_356(uParam0, 198.22f, 1180.16f, 226.01f);
			func_356(uParam0, 203.38f, 1121.57f, 224.59f);
			func_356(uParam0, 260.94f, 1135.36f, 220.6f);
			func_356(uParam0, 290.6088f, 1094.698f, 215.5821f);
			func_356(uParam0, 309.9068f, 1019.827f, 209.4761f);
			uParam0->f_127 = 0;
			uParam0->f_125 = 15f;
			break;
		
		case 3:
			uParam0->f_130 = 8;
			*uParam0 = { 857.7981f, 1278.242f, 358.1998f };
			uParam0->f_3 = 152.4354f;
			uParam0->f_128 = 1;
			func_356(uParam0, 827.49f, 1278.53f, 359.37f);
			func_356(uParam0, 846.14f, 1276.5f, 358.83f);
			func_356(uParam0, 835.834f, 1244.057f, 351.752f);
			func_356(uParam0, 799.0862f, 1223.35f, 340.1938f);
			func_356(uParam0, 741.2345f, 1201.069f, 325.2563f);
			func_356(uParam0, 676.7847f, 1219.026f, 322.9875f);
			func_356(uParam0, 624.7384f, 1217.078f, 315.5874f);
			func_356(uParam0, 566.5258f, 1191.433f, 301.3754f);
			func_356(uParam0, 519.7023f, 1226.515f, 290.0847f);
			func_356(uParam0, 469.1648f, 1233.832f, 277.0887f);
			func_356(uParam0, 439.77f, 1292.51f, 270.32f);
			func_356(uParam0, 407.94f, 1253.81f, 258f);
			func_356(uParam0, 409.55f, 1205.16f, 249.29f);
			func_356(uParam0, 422.5302f, 1114.816f, 233f);
			func_356(uParam0, 436.9201f, 1045.166f, 235.1103f);
			func_356(uParam0, 406.2167f, 1031.145f, 236.0167f);
			func_356(uParam0, 380.8393f, 1048.071f, 236.4371f);
			func_356(uParam0, 374.2899f, 1074.483f, 235.7123f);
			func_356(uParam0, 362.0448f, 1110.634f, 235.1055f);
			func_356(uParam0, 319.5104f, 1161.185f, 235.4029f);
			func_356(uParam0, 300.0755f, 1237.272f, 234.0581f);
			func_356(uParam0, 267.55f, 1261.09f, 232f);
			func_356(uParam0, 252.79f, 1238.97f, 230f);
			func_356(uParam0, 268.05f, 1137f, 220.53f);
			func_356(uParam0, 307.27f, 1050.44f, 210.96f);
			func_356(uParam0, 298.58f, 989.24f, 209.66f);
			func_356(uParam0, 279.85f, 946.37f, 209.82f);
			uParam0->f_127 = 0;
			uParam0->f_125 = 15f;
			break;
		
		case 4:
			uParam0->f_130 = 8;
			*uParam0 = { 857.7981f, 1278.242f, 358.1998f };
			uParam0->f_3 = 152.4354f;
			uParam0->f_128 = 1;
			func_356(uParam0, 827.49f, 1278.53f, 359.37f);
			func_356(uParam0, 850.14f, 1280.21f, 358.57f);
			func_356(uParam0, 852.6194f, 1265.312f, 357.7758f);
			func_356(uParam0, 835.834f, 1244.057f, 351.752f);
			func_356(uParam0, 799.0862f, 1223.35f, 340.1938f);
			func_356(uParam0, 741.2345f, 1201.069f, 325.2563f);
			func_356(uParam0, 676.7847f, 1219.026f, 322.9875f);
			func_356(uParam0, 624.7384f, 1217.078f, 315.5874f);
			func_356(uParam0, 566.5258f, 1191.433f, 301.3754f);
			func_356(uParam0, 519.7023f, 1226.515f, 290.0847f);
			func_356(uParam0, 469.1648f, 1233.832f, 277.0887f);
			func_356(uParam0, 445.0087f, 1295.196f, 271.5344f);
			func_356(uParam0, 411.0428f, 1234.254f, 254.587f);
			func_356(uParam0, 438.2f, 1112.65f, 231.8f);
			func_356(uParam0, 500.16f, 1096.98f, 229.77f);
			func_356(uParam0, 532.43f, 1064.83f, 223.78f);
			func_356(uParam0, 533.5f, 1027.03f, 216.61f);
			func_356(uParam0, 491.57f, 968.53f, 204.7f);
			func_356(uParam0, 462.99f, 893.08f, 197.09f);
			func_356(uParam0, 416.58f, 894.3f, 198f);
			func_356(uParam0, 399.39f, 933.08f, 201.46f);
			func_356(uParam0, 377.99f, 993.49f, 207.88f);
			func_356(uParam0, 328.88f, 1007.05f, 209.52f);
			uParam0->f_127 = 0;
			uParam0->f_125 = 15f;
			break;
		
		case 5:
			uParam0->f_130 = 8;
			*uParam0 = { 500.677f, 5598.262f, 794.8943f };
			uParam0->f_3 = 156.5849f;
			uParam0->f_128 = 2;
			func_356(uParam0, 481.4428f, 5521.119f, 771.8f);
			func_356(uParam0, 435.2f, 5507.4f, 743.7f);
			func_356(uParam0, 380.6f, 5498.7f, 713.3f);
			func_356(uParam0, 349.6f, 5447.3f, 675.5f);
			func_356(uParam0, 312.5256f, 5385.502f, 642.6f);
			func_356(uParam0, 276.9f, 5347.8f, 630.6f);
			func_356(uParam0, 226.4586f, 5295.504f, 618.1f);
			func_356(uParam0, 231.5871f, 5249.364f, 600.8f);
			func_356(uParam0, 201.4f, 5247.7f, 590f);
			func_356(uParam0, 172.3f, 5203.5f, 570f);
			func_356(uParam0, 145.6254f, 5185.032f, 551.3f);
			func_356(uParam0, 130.1801f, 5224.447f, 541.8f);
			func_356(uParam0, 113.3f, 5174.3f, 526.5f);
			func_356(uParam0, 113.9507f, 5107.92f, 509.5f);
			func_356(uParam0, 88.1f, 5073.2f, 491.5f);
			func_356(uParam0, 89.5557f, 5017.571f, 460.8f);
			func_356(uParam0, 30.4282f, 5050.168f, 454.2f);
			func_356(uParam0, 7.4203f, 5010.681f, 443.9f);
			func_356(uParam0, -46.7f, 5005.9f, 408.6f);
			func_356(uParam0, -65.7f, 4955.6f, 392.4f);
			func_356(uParam0, -131.1f, 4919f, 353.3f);
			func_356(uParam0, -184.3982f, 4900.463f, 329.1f);
			func_356(uParam0, -271.4f, 4916.4f, 290f);
			func_356(uParam0, -304f, 4950.3f, 261f);
			func_356(uParam0, -335.4192f, 4997.425f, 220.3f);
			func_356(uParam0, -366.6329f, 4919.25f, 196f);
			func_356(uParam0, -460.1884f, 4883.479f, 186.7f);
			func_356(uParam0, -544.8522f, 4874.647f, 167.6f);
			func_356(uParam0, -573.751f, 4893.331f, 168.5f);
			func_356(uParam0, -590.3f, 4962.9f, 156.5f);
			func_356(uParam0, -625.4877f, 5013.735f, 143.4f);
			func_356(uParam0, -634.5757f, 5056.167f, 142.8f);
			func_356(uParam0, -706.3599f, 5069.932f, 140.4f);
			func_356(uParam0, -762.2672f, 5126.632f, 135.7f);
			func_356(uParam0, -764.7f, 5192.5f, 111.5f);
			func_356(uParam0, -789.0667f, 5263.042f, 88.1f);
			func_356(uParam0, -849.2f, 5259.7f, 86f);
			uParam0->f_127 = 0;
			uParam0->f_125 = 15f;
			break;
	}
}

void func_356(var uParam0, struct<3> Param1)//Position - 0x2CAEF
{
	uParam0->f_4[uParam0->f_126 /*3*/] = { Param1 };
	uParam0->f_126++;
}

void func_357()//Position - 0x2CB11
{
	TASK::CLEAR_PED_TASKS(Local_877.f_28[0]);
	if (GlobalFunc_4947(uLocal_135[1]))
	{
		if (!PED::IS_PED_IN_VEHICLE(Local_877.f_28[0], uLocal_135[1], 0))
		{
			PED::SET_PED_INTO_VEHICLE(Local_877.f_28[0], uLocal_135[1], -1);
		}
		if (iLocal_842 || GlobalFunc_199())
		{
			PED::SET_PED_COORDS_KEEP_VEHICLE(Local_877.f_28[0], 845.9933f, 1274.5f, 358.8672f);
			ENTITY::SET_ENTITY_HEADING(Local_877.f_28[0], 229.7011f);
		}
		else
		{
			PED::SET_PED_COORDS_KEEP_VEHICLE(Local_877.f_28[0], 831.5367f, 1275.386f, 359.3159f);
			ENTITY::SET_ENTITY_HEADING(Local_877.f_28[0], 273.46f);
		}
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_135[1]))
		{
			TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_877.f_28[0], uLocal_135[1], "Fan2_BikeRoute", 786468, 0, 8, -1, -1082130432, 0, 1073741824);
		}
	}
}

void func_358()//Position - 0x2CBF9
{
	GlobalFunc_4956();
	iLocal_490 = MISC::GET_GAME_TIMER();
	iLocal_670 = MISC::GET_GAME_TIMER();
	iLocal_667 = MISC::GET_GAME_TIMER();
	iLocal_669 = 0;
	iLocal_671 = 0;
	iLocal_672 = 0;
	iLocal_673 = 0;
	iLocal_674 = 0;
	bLocal_675 = false;
	iLocal_856 = 0;
	iLocal_857 = 0;
	iLocal_114 = 1;
	iLocal_115 = 0;
	iLocal_664 = 0;
	iLocal_663 = 0;
	iLocal_662 = 0;
	iLocal_665 = 0;
	iLocal_491 = 0;
}

void func_359()//Position - 0x2CC54
{
	int iVar0;
	
	iVar0 = 0;
	if (func_235())
	{
		GlobalFunc_2838("Init MS_INTRO");
		while (!func_391(2))
		{
			SYSTEM::WAIT(0);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 80);
		}
		iLocal_841 = 0;
		iLocal_842 = 0;
		iLocal_843 = 0;
		iLocal_844 = 0;
		CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
		if (!GlobalFunc_199() || iLocal_846 == 1)
		{
			while (!GlobalFunc_8027(1, 1093140480, 0))
			{
				SYSTEM::WAIT(0);
			}
			Local_179 = { Local_140[0 /*3*/] };
			Local_179.f_3 = fLocal_147[0];
			Local_164.f_1 = uLocal_135[0];
			Local_164 = PLAYER::PLAYER_PED_ID();
			Local_164.f_9 = 1;
			Local_164.f_10 = 2;
			func_354();
			GRAPHICS::FORCE_RENDER_IN_GAME_UI(1);
			func_376();
			RECORDING::_0x48621C9FCA3EBD28(1);
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		GlobalFunc_2838("Running MS_INTRO");
	}
	else
	{
		HUD::_HIDE_AREA_AND_VEHICLE_NAME_THIS_FRAME();
		if (GlobalFunc_199() && iLocal_846 == 0)
		{
			GlobalFunc_2838("Replay detected, skipping Intro state...");
			while (!func_391(3))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_844 = 1;
			GlobalFunc_2838("Reset bikes from MS_INTRO skip");
			func_375();
			Local_179 = { Local_140[0 /*3*/] };
			Local_179.f_3 = fLocal_147[0];
			Local_164.f_1 = uLocal_135[0];
			Local_164 = PLAYER::PLAYER_PED_ID();
			Local_164.f_9 = 1;
			Local_164.f_10 = 2;
			func_354();
			func_373();
			iLocal_131 = MISC::GET_GAME_TIMER();
			func_366(1);
		}
		else
		{
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				GlobalFunc_2838("Detected the cutscene was skipped!! Do our own fade...");
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
				iLocal_842 = 1;
				iLocal_841 = 1;
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() > 64000)
				{
					func_332(&Local_164, &Local_179, 0);
					GlobalFunc_2838("Running checkpoints during intro now");
				}
			}
			if (iLocal_841 == 0)
			{
				while (!func_391(3))
				{
					SYSTEM::WAIT(0);
					if (GlobalFunc_75())
					{
						GlobalFunc_2838("Cutscene skipped in while!!");
						if (iLocal_842 == 0)
						{
							if (CUTSCENE::IS_CUTSCENE_ACTIVE())
							{
								CUTSCENE::STOP_CUTSCENE(0);
							}
							iLocal_842 = 1;
							iLocal_131 = MISC::GET_GAME_TIMER();
						}
					}
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						GlobalFunc_2838("Detected the cutscene was skipped!! Do our own fade... (in while)");
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
						iLocal_842 = 1;
						iLocal_841 = 1;
					}
					func_362();
					func_361();
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				func_362();
				if (func_361())
				{
					iLocal_841 = 1;
				}
			}
			else if (iLocal_841 == 1)
			{
				func_362();
				func_361();
				if (bLocal_123)
				{
					if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 236, 1);
						GlobalFunc_2838("Setting PRF_PreventGoingIntoStillInVehicleState on Trevor");
					}
				}
				if (iLocal_122)
				{
					if (GlobalFunc_4947(uLocal_135[0]))
					{
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_135[0], 3.5f);
					}
				}
				if (iLocal_842)
				{
					if (!iLocal_843)
					{
						GlobalFunc_2838("Doing out-of-loop Z-skip");
						iLocal_131 = MISC::GET_GAME_TIMER();
						GlobalFunc_2350(500, 0);
						while ((MISC::GET_GAME_TIMER() - iLocal_131) < 750)
						{
							SYSTEM::WAIT(0);
							GlobalFunc_2838("In fade out wait...");
							func_362();
							func_361();
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (GlobalFunc_4947(uLocal_135[0]))
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_135[0], 3.5f);
								}
							}
						}
						iLocal_131 = MISC::GET_GAME_TIMER();
						iLocal_843 = 1;
					}
					func_373();
				}
				if (!CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					RECORDING::_0x81CBAE94390F9F89();
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 1);
					MISC::CLEAR_AREA_OF_VEHICLES(850.99f, 1284.06f, 358.39f, 14f, 0, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(856.54f, 1270.78f, 358.24f, 14f, 0, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(850.71f, 1256.57f, 356.34f, 14f, 0, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(840.86f, 1245.39f, 352.97f, 14f, 0, 0, 0, 0, 0);
					if (!iLocal_842)
					{
						func_242(1, 1, 1, 1);
					}
					if (GlobalFunc_4947(uLocal_135[0]))
					{
						if (func_256())
						{
							iLocal_122 = 1;
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_135[0], 3.5f);
						}
					}
					GlobalFunc_4923(&Local_877, 0, 1);
					iVar0 = 0;
					while (iVar0 < 2)
					{
						if (GlobalFunc_115(uLocal_135[iVar0]))
						{
							ENTITY::SET_ENTITY_PROOFS(uLocal_135[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
						}
						iVar0++;
					}
					func_234();
				}
			}
		}
	}
	if (func_232())
	{
		func_332(&Local_164, &Local_179, 1);
		GlobalFunc_2838("Cleaned up MS_INTRO");
	}
}


int func_361()//Position - 0x2D0BB
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
	{
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_2838("Setting exit state for Trevor");
			if (GlobalFunc_4947(uLocal_135[0]))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], 0))
				{
					GlobalFunc_2838("Putting Trevor on bike");
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], -1);
				}
				if (iLocal_842)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				}
			}
			bLocal_123 = true;
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 236, 1);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 247561816, 0, 1, 0);
			return 1;
		}
	}
	return 0;
}

void func_362()//Position - 0x2D152
{
	func_364();
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MaryAnnes_Friend", 0))
	{
		func_373();
	}
	func_363();
}

void func_363()//Position - 0x2D173
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Players_Bike", 0))
	{
		GlobalFunc_2838("Setting exit state for bike");
		if (GlobalFunc_4947(uLocal_135[0]) && GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_2839("Bike speed on exit: ", ENTITY::GET_ENTITY_SPEED(uLocal_135[0]));
			iLocal_122 = 1;
			VEHICLE::SET_VEHICLE_FORWARD_SPEED(uLocal_135[0], 3.5f);
		}
	}
}

void func_364()//Position - 0x2D1CD
{
	if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Mary_Ann", joaat("ig_maryann")))
	{
		if (GlobalFunc_115(Local_877.f_28[0]))
		{
			GlobalFunc_2838("Setting exit state for Mary Ann");
			if (GlobalFunc_4947(uLocal_135[1]))
			{
				func_357();
				PED::FORCE_PED_MOTION_STATE(Local_877.f_28[0], 247561816, 0, 1, 0);
			}
		}
	}
}


void func_366(int iParam0)//Position - 0x2D255
{
	int iVar0;
	
	func_368(1, 1);
	GlobalFunc_2837("Jumping to stage: ", iParam0);
	iLocal_116 = 0;
	if (iParam0 == 0)
	{
		Local_164.f_1 = uLocal_135[0];
		Local_164 = PLAYER::PLAYER_PED_ID();
		Local_164.f_9 = 1;
		Local_164.f_10 = 2;
		iLocal_111 = 1;
		if (GlobalFunc_115(uLocal_135[1]) && GlobalFunc_115(Local_877.f_28[0]))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_135[1]))
			{
				TASK::CLEAR_PED_TASKS(Local_877.f_28[0]);
			}
		}
		AUDIO::TRIGGER_MUSIC_EVENT("FANATIC2_STOP");
		GlobalFunc_2838("Doing music trigger stop");
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_135[1], 0);
			AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
		}
		GlobalFunc_2838("Reset bikes from JUMP_TO_STAGE(0)");
		func_358();
		func_375();
		func_335(&Local_164, &Local_179);
		bLocal_858 = false;
		iLocal_122 = 0;
		func_234();
	}
	else if (iParam0 == 1)
	{
		GlobalFunc_2838("Reset bikes from JUMP_TO_STAGE(1)");
		func_375();
		Local_179 = { Local_140[0 /*3*/] };
		Local_179.f_3 = fLocal_147[0];
		Local_164.f_1 = uLocal_135[0];
		Local_164 = PLAYER::PLAYER_PED_ID();
		Local_164.f_9 = 1;
		Local_164.f_10 = 2;
		iLocal_111 = 3;
		while (!func_391(3))
		{
			SYSTEM::WAIT(0);
		}
		while (CUTSCENE::IS_CUTSCENE_ACTIVE())
		{
			CUTSCENE::STOP_CUTSCENE(0);
			SYSTEM::WAIT(0);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], 0))
		{
			GlobalFunc_2838("Putting Trevor on bike...");
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], -1);
		}
		func_373();
		func_358();
		if (GlobalFunc_115(uLocal_135[1]) && GlobalFunc_115(Local_877.f_28[0]))
		{
			func_357();
		}
		func_335(&Local_164, &Local_179);
		bLocal_858 = false;
		func_234();
	}
	else if (iParam0 == 2)
	{
		Local_164.f_1 = uLocal_135[0];
		Local_164 = PLAYER::PLAYER_PED_ID();
		Local_164.f_9 = 11;
		Local_164.f_10 = 12;
		while (!func_391(3))
		{
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 438.3714f, 1292.807f, 269.9339f);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 24f);
		}
		if (GlobalFunc_4947(uLocal_135[1]) && GlobalFunc_115(Local_877.f_28[0]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_877.f_28[0], uLocal_135[1], 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_877.f_28[0], uLocal_135[1], -1);
			}
			PED::SET_PED_COORDS_KEEP_VEHICLE(Local_877.f_28[0], 449.6093f, 1261.474f, 272.4526f);
			ENTITY::SET_ENTITY_HEADING(Local_877.f_28[0], 13.4976f);
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_135[1]))
			{
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_877.f_28[0], uLocal_135[1], "Fan2_BikeRoute", 786468, 0, 8, -1, -1082130432, 0, 1073741824);
			}
		}
		func_367();
		func_335(&Local_164, &Local_179);
		bLocal_858 = false;
		iLocal_852 = 12;
	}
	else if (iParam0 == 3)
	{
		Local_164.f_1 = uLocal_135[0];
		Local_164 = PLAYER::PLAYER_PED_ID();
		Local_164.f_9 = 22;
		Local_164.f_10 = 23;
		while (!func_391(3))
		{
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_COORDS_KEEP_VEHICLE(PLAYER::PLAYER_PED_ID(), 272.8283f, 1261.005f, 232.5672f);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 122.43f);
		}
		if (GlobalFunc_4947(uLocal_135[1]) && GlobalFunc_115(Local_877.f_28[0]))
		{
			if (!PED::IS_PED_IN_VEHICLE(Local_877.f_28[0], uLocal_135[1], 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_877.f_28[0], uLocal_135[1], -1);
			}
			PED::SET_PED_COORDS_KEEP_VEHICLE(Local_877.f_28[0], 295.4509f, 1244.075f, 233.5478f);
			ENTITY::SET_ENTITY_HEADING(Local_877.f_28[0], 43.0307f);
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_135[1]))
			{
				TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_877.f_28[0], uLocal_135[1], "Fan2_BikeRoute", 786468, 0, 8, -1, -1082130432, 0, 1073741824);
			}
		}
		func_367();
		func_335(&Local_164, &Local_179);
		iLocal_852 = 23;
	}
	else if (iParam0 == 4)
	{
		if (GlobalFunc_115(uLocal_135[1]))
		{
			if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_135[1]))
			{
				TASK::CLEAR_PED_TASKS(Local_877.f_28[0]);
			}
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (GlobalFunc_4947(uLocal_135[iVar0]))
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_135[iVar0], Local_150[iVar0 /*3*/], 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uLocal_135[iVar0], fLocal_157[iVar0]);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_135[iVar0]);
				GlobalFunc_2837("Bike exists, set coords/heading: ", iVar0);
			}
			else
			{
				func_322(&(uLocal_135[iVar0]), iLocal_139, Local_150[iVar0 /*3*/], fLocal_157[iVar0], iVar0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_135[iVar0]);
				GlobalFunc_2837("Bike doesn't exist, recreate: ", iVar0);
			}
			iVar0++;
		}
		if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_4947(uLocal_135[0]))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], 0))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], -1);
			}
		}
		if (GlobalFunc_4947(uLocal_135[1]) && GlobalFunc_115(Local_877.f_28[0]))
		{
			TASK::CLEAR_PED_TASKS(Local_877.f_28[0]);
			if (!PED::IS_PED_IN_VEHICLE(Local_877.f_28[0], uLocal_135[1], 0))
			{
				PED::SET_PED_INTO_VEHICLE(Local_877.f_28[0], uLocal_135[1], -1);
			}
		}
		iLocal_111 = 5;
		iLocal_845 = 1;
		SYSTEM::WAIT(1000);
		func_234();
	}
}

void func_367()//Position - 0x2D77D
{
	GlobalFunc_4956();
	iLocal_490 = MISC::GET_GAME_TIMER();
	iLocal_670 = MISC::GET_GAME_TIMER();
	iLocal_667 = MISC::GET_GAME_TIMER();
	iLocal_115 = 0;
	iLocal_669 = 0;
	iLocal_671 = 0;
	iLocal_672 = 0;
	iLocal_673 = 0;
	iLocal_674 = 0;
	bLocal_675 = false;
	iLocal_856 = 0;
	iLocal_857 = 0;
}

void func_368(bool bParam0, bool bParam1)//Position - 0x2D7C1
{
	if (bParam0)
	{
		func_372(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_369(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_369(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x2D7F4
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(iVar0))
	{
		GlobalFunc_8955(0);
		if (bParam9)
		{
			PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), 1);
		}
		if (bParam8)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 15))
					{
						func_71(PLAYER::PLAYER_PED_ID(), 8, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 9, 6))
					{
						func_71(PLAYER::PLAYER_PED_ID(), 9, 0, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 1:
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 1) || GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 10))
					{
						func_71(PLAYER::PLAYER_PED_ID(), 8, 26, 1, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					break;
				
				case 2:
					if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 8, 4))
					{
						func_71(PLAYER::PLAYER_PED_ID(), 8, 15, 1, -1, 0, 0, 0, -1, -1, -1, 0);
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
			iLocal_44 = 0;
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_44 = WEAPON::GET_SELECTED_PED_WEAPON(PLAYER::PLAYER_PED_ID());
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			}
		}
		if (iParam5 == 1)
		{
			GlobalFunc_79(500, 0);
		}
	}
}



void func_372(bool bParam0, int iParam1, int iParam2)//Position - 0x2D9F9
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
			func_242(iParam1, iParam2, 1, 1);
		}
	}
}

void func_373()//Position - 0x2DA58
{
	var uVar0;
	struct<3> Var1;
	
	if (GlobalFunc_115(Local_877.f_28[1]))
	{
		PED::FORCE_PED_MOTION_STATE(Local_877.f_28[1], 247561816, 0, 0, 0);
		TASK::TASK_PLAY_ANIM(Local_877.f_28[1], "rcm_fanatic2", "ef_2_rcm_cyclist_punched_out", 8f, -8f, -1, 9, 0, 0, 0, 0);
		MISC::GET_GROUND_Z_FOR_3D_COORD(ENTITY::GET_ENTITY_COORDS(Local_877.f_28[1], 1), &uVar0);
		Var1 = { ENTITY::GET_ENTITY_COORDS(Local_877.f_28[1], 1) };
		Var1.f_2 = uVar0;
		GlobalFunc_5823(Local_877.f_28[1], Var1, ENTITY::GET_ENTITY_HEADING(Local_877.f_28[1]), 0, 1);
		PED::SET_PED_KEEP_TASK(Local_877.f_28[1], 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_113);
	}
}


void func_375()//Position - 0x2DB62
{
	int iVar0;
	
	GlobalFunc_2838("Resetting bikes...");
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (GlobalFunc_4947(uLocal_135[iVar0]))
		{
			ENTITY::SET_ENTITY_COORDS(uLocal_135[iVar0], Local_140[iVar0 /*3*/], 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uLocal_135[iVar0], fLocal_147[iVar0]);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_135[iVar0]);
			GlobalFunc_2837("Bike exists, set coords/heading: ", iVar0);
		}
		else
		{
			func_322(&(uLocal_135[iVar0]), iLocal_139, Local_140[iVar0 /*3*/], fLocal_147[iVar0], iVar0, 0);
			GlobalFunc_2837("Bike doesn't exist, recreate: ", iVar0);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_135[iVar0]);
			if (iVar0 == 0 && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], 0))
			{
				if (!GlobalFunc_188())
				{
					GlobalFunc_2838("Putting Trevor on bike...");
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), uLocal_135[0], -1);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 2f, 2000, 0, 1, 0);
				}
			}
			else if (iVar0 == 1)
			{
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_135[1], "FANATIC_MIX_MARY_BIKE", 0);
				}
			}
		}
		iVar0++;
	}
}

void func_376()//Position - 0x2DC71
{
	int iVar0;
	
	if (GlobalFunc_115(Local_877.f_28[0]))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_877.f_28[0], "Mary_Ann", 0, 0, 0);
	}
	if (GlobalFunc_115(Local_877.f_28[1]))
	{
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_877.f_28[1], "MaryAnnes_Friend", 0, joaat("a_m_y_cyclist_01"), 0);
	}
	else
	{
		Local_877.f_28[1] = PED::CREATE_PED(26, iLocal_113, 808.43f, 1279.16f, 360.48f, -79.11f, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_877.f_28[1], 1);
		PED::SET_PED_COMPONENT_VARIATION(Local_877.f_28[1], 3, 1, 2, 0);
		PED::SET_PED_COMPONENT_VARIATION(Local_877.f_28[1], 4, 1, 0, 0);
		PED::SET_PED_PROP_INDEX(Local_877.f_28[1], 0, 0, 0, false);
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_877.f_28[1], "MaryAnnes_Friend", 0, joaat("a_m_y_cyclist_01"), 0);
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_facgate_03_l"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_l"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
		GlobalFunc_2838("Fanatic2: Gate 1 Closed");
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9195f, 1280.92f, 360.7272f, 6f, joaat("prop_facgate_03_r"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_r"), 802.9195f, 1280.92f, 360.7272f, 1, 0f, 0);
		GlobalFunc_2838("Fanatic2:Gate 2 Closed");
	}
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(864.3021f, 1274.852f, 361.4736f, 393.9782f, 1197.084f, 224.3141f, 176f, 0, 0, 0, 0, 0);
	MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(878.2955f, 1291.728f, 355.5366f, 817.8235f, 1271.439f, 362.9736f, 12.75f, 0, 0, 0, 0, 0);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_322(&(uLocal_135[iVar0]), iLocal_139, Local_140[iVar0 /*3*/], fLocal_147[iVar0], iVar0, 0);
		if (GlobalFunc_4947(uLocal_135[iVar0]))
		{
			if (iVar0 == 0)
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_135[0], "Players_Bike", 0, 0, 32);
			}
			else
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_135[1], "MaryAnnes_Bike", 0, 0, 0);
			}
		}
		iVar0++;
	}
	iLocal_842 = 0;
	GlobalFunc_8954();
	CUTSCENE::START_CUTSCENE(128);
	CUTSCENE::_0x7F96F23FA9B73327(iLocal_139);
	SYSTEM::WAIT(0);
	GlobalFunc_10159(803.1363f, 1275.785f, 357.813f, 862.7411f, 1287.391f, 365.5514f, 40.75f, 836.74f, 1284.85f, 359.59f, 102.86f, GlobalFunc_625(), 1, 1, 1, 0, 0);
	func_369(807.57f, 1275.24f, 359.47f, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1);
	GlobalFunc_2838("Starting cutscene...");
}















int func_391(int iParam0)//Position - 0x2EA54
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			STREAMING::REQUEST_MODEL(iLocal_139);
			STREAMING::REQUEST_MODEL(iLocal_113);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_139) && STREAMING::HAS_MODEL_LOADED(iLocal_113))
			{
				GlobalFunc_2838("All assets loaded.");
				iVar0 = 1;
			}
			else
			{
				GlobalFunc_2838("Still loading assets.");
			}
			break;
		
		case 3:
			STREAMING::REQUEST_MODEL(iLocal_139);
			STREAMING::REQUEST_MODEL(joaat("tribike"));
			STREAMING::REQUEST_MODEL(joaat("s_m_y_cop_01"));
			STREAMING::REQUEST_MODEL(joaat("a_f_y_runner_01"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_runner_01"));
			TASK::REQUEST_WAYPOINT_RECORDING("Fan2_BikeRoute");
			VEHICLE::REQUEST_VEHICLE_RECORDING(500, "Fan2_Cyclist");
			TASK::REQUEST_WAYPOINT_RECORDING("Fan2_Jogger1");
			TASK::REQUEST_WAYPOINT_RECORDING("Fan2_Jogger2");
			STREAMING::REQUEST_ANIM_DICT("rcm_fanatic2");
			STREAMING::REQUEST_ANIM_DICT("rcmfanatic2");
			if ((((((((((VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(500, "Fan2_Cyclist") && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan2_BikeRoute")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan2_Jogger1")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("Fan2_Jogger2")) && STREAMING::HAS_MODEL_LOADED(iLocal_139)) && STREAMING::HAS_MODEL_LOADED(joaat("tribike"))) && STREAMING::HAS_MODEL_LOADED(joaat("s_m_y_cop_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_runner_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_runner_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("rcm_fanatic2")) && STREAMING::HAS_ANIM_DICT_LOADED("rcmfanatic2"))
			{
				iVar0 = 1;
			}
			else
			{
				GlobalFunc_2838("Still loading assets.");
			}
			break;
	}
	return iVar0;
}

void func_392()//Position - 0x2EBB8
{
	if (func_235())
	{
		GlobalFunc_2838("Init MS_INIT");
		if (GlobalFunc_199())
		{
			GlobalFunc_4972(815.2971f, 1277.636f, 359.4897f, 274.5829f, 1, 0);
		}
		else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (GlobalFunc_115(Local_877.f_28[0]))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_877.f_28[0], 0f, 0f, 0f, 1, 30000, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOV(fLocal_871);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_872);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_873);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_874);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_875);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				iLocal_876 = MISC::GET_GAME_TIMER();
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(PLAYER::PLAYER_PED_ID(), Local_877.f_28[0], 0f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
		else
		{
			CAM::_0xCCD078C2665D2973(1);
		}
		if (iLocal_120 == 0)
		{
			func_395();
		}
		while (!func_391(2))
		{
			SYSTEM::WAIT(0);
		}
		if (GlobalFunc_115(Local_877.f_28[0]))
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_877.f_28[0], uLocal_126);
			PED::SET_PED_CONFIG_FLAG(Local_877.f_28[0], 132, 1);
		}
		GlobalFunc_173(&uLocal_312, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		GlobalFunc_173(&uLocal_492, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		GlobalFunc_173(&uLocal_492, 3, Local_877.f_28[0], "MARYANN", 0, 1);
		GlobalFunc_173(&uLocal_676, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		GlobalFunc_173(&uLocal_676, 3, Local_877.f_28[0], "MARYANN", 0, 1);
		GlobalFunc_2838("Running MS_INIT");
	}
	else if (!GlobalFunc_199() || iLocal_846 == 1)
	{
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (GlobalFunc_115(Local_877.f_28[0]))
			{
				CAM::SET_GAMEPLAY_ENTITY_HINT(Local_877.f_28[0], 0f, 0f, 0f, 1, 30000, 2000, 2000, 0);
				CAM::SET_GAMEPLAY_HINT_FOV(fLocal_871);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_872);
				CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_873);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_874);
				CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_875);
				CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				iLocal_876 = MISC::GET_GAME_TIMER();
				if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(PLAYER::PLAYER_PED_ID(), Local_877.f_28[0], 0f, 0f, 0f, 1f, -1, 1036831949, 1);
				}
			}
		}
		else
		{
			CAM::_0xCCD078C2665D2973(1);
		}
		if (!CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			GlobalFunc_9623("ef_2_rcm", 0);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_2838("Trying to set Mary Ann component variation");
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Mary_Ann", Local_877.f_28[0], 0);
			}
			GlobalFunc_2838("Requesting cutscene...");
		}
		else if ((MISC::GET_GAME_TIMER() - iLocal_876) > 3000)
		{
			GlobalFunc_2838("Cutscene loaded & timer expired, moving on...");
			func_234();
		}
		else
		{
			GlobalFunc_2838("Waiting for focus push timer...");
			if (iLocal_876 > 1000)
			{
				if (!iLocal_125)
				{
					if (GlobalFunc_10607(&uLocal_492, "FAN2AU", "FAN2_AMB", 7, 0, 0, 0))
					{
						iLocal_125 = 1;
					}
				}
			}
			if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(Local_877.f_28[0]))
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_877.f_28[0], 1) < 6f)
				{
					GlobalFunc_2838("Trevor got too close to Mary Ann, breaking out of focus push and playing intro");
					func_234();
				}
			}
		}
	}
	else
	{
		GlobalFunc_2838("Replay detected, skipping cutscene init...");
		MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(864.3021f, 1274.852f, 361.4736f, 393.9782f, 1197.084f, 224.3141f, 176f, 0, 0, 0, 0, 0);
		MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(878.2955f, 1291.728f, 355.5366f, 817.8235f, 1271.439f, 362.9736f, 12.75f, 0, 0, 0, 0, 0);
		func_234();
	}
	if (func_232())
	{
		GlobalFunc_2838("Cleaned up MS_INIT");
	}
}



void func_395()//Position - 0x2EFD3
{
	GlobalFunc_2838("MISSION_SETUP");
	HUD::REQUEST_ADDITIONAL_TEXT("FATIC2", 0);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		GlobalFunc_2838("Loading text");
		SYSTEM::WAIT(0);
	}
	bLocal_858 = false;
	iLocal_139 = joaat("scorcher");
	sLocal_477[0] = "FAN2_RANT1";
	sLocal_477[1] = "FAN2_RANT2";
	sLocal_477[2] = "FAN2_RANT3";
	sLocal_477[3] = "FAN2_RANT4";
	sLocal_477[4] = "FAN2_RANT5";
	sLocal_657[0] = "FAN2_FEM1";
	if (GlobalFunc_199())
	{
		if (func_396(2))
		{
			sLocal_657[2] = "FAN2_FEM4B";
		}
		else
		{
			sLocal_657[2] = "FAN2_FEM4A";
		}
		sLocal_657[3] = "FAN2_FEM3";
	}
	else
	{
		if (func_396(2))
		{
			sLocal_657[3] = "FAN2_FEM4B";
		}
		else
		{
			sLocal_657[3] = "FAN2_FEM4A";
		}
		sLocal_657[2] = "FAN2_FEM3";
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (func_396(2))
		{
			sLocal_657[1] = "FAN2_FEM2B";
		}
		else
		{
			sLocal_657[1] = "FAN2_FEM2A";
		}
	}
	Local_140[0 /*3*/] = { 808.8217f, 1276.939f, 359.4989f };
	fLocal_147[0] = 261.78f;
	Local_140[1 /*3*/] = { 820.96f, 1274.52f, 359.47f };
	fLocal_147[1] = 268.5713f;
	Local_150[0 /*3*/] = { 280.9698f, 948.4752f, 209.7963f };
	fLocal_157[0] = 167.6198f;
	Local_150[1 /*3*/] = { 284.93f, 968.38f, 210.09f };
	fLocal_157[1] = 167.6198f;
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(864.3021f, 1274.852f, 361.4736f, 393.9782f, 1197.084f, 224.3141f, 176f, 0, 0, 1);
	uLocal_860 = PED::ADD_SCENARIO_BLOCKING_AREA(379.31f, 1017.51f, 218.82f, 419.57f, 1062.59f, 247.17f, 0, 1, 1, 1);
	GlobalFunc_2838("Finished mission setup.");
}

int func_396(int iParam0)//Position - 0x2F1BF
{
	int iVar0;
	
	switch (iParam0)
	{
		case 1:
		case 2:
			if (func_397(iParam0, 12))
			{
				return 1;
			}
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (iVar0 != 12)
				{
					if (!func_397(iParam0, iVar0))
					{
						return 0;
					}
				}
				iVar0++;
			}
			return 1;
			break;
		
		case 3:
			if (GlobalFunc_10995(PLAYER::PLAYER_PED_ID(), 12, 6))
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_397(int iParam0, int iParam1)//Position - 0x2F239
{
	int iVar0;
	
	if (iParam1 != 14)
	{
		iVar0 = func_77(PLAYER::PLAYER_PED_ID(), iParam1, -1);
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
					iVar0 = func_77(PLAYER::PLAYER_PED_ID(), iParam1, 1);
					if ((((((iVar0 == 58 || (iVar0 >= 70 && iVar0 <= 79)) || iVar0 == 61) || (iVar0 >= 62 && iVar0 <= 69)) || (iVar0 >= 80 && iVar0 <= 89)) || (iVar0 >= 91 && iVar0 <= 102)) || (iVar0 >= 103 && iVar0 <= 110))
					{
						return 1;
					}
					if (!func_398(PLAYER::PLAYER_PED_ID()))
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
					iVar0 = func_77(PLAYER::PLAYER_PED_ID(), iParam1, 1);
					if (((((((iVar0 == 89 || (iVar0 >= 100 && iVar0 <= 109)) || iVar0 == 111) || (iVar0 >= 113 && iVar0 <= 122)) || (iVar0 >= 123 && iVar0 <= 132)) || (iVar0 >= 133 && iVar0 <= 142)) || (iVar0 >= 90 && iVar0 <= 99)) || (iVar0 >= 143 && iVar0 <= 152))
					{
						return 1;
					}
					if (!func_398(PLAYER::PLAYER_PED_ID()))
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

int func_398(int iParam0)//Position - 0x2F6EB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, iVar0) != -1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}



void func_401()//Position - 0x2F7EC
{
	if (iLocal_110 == 4)
	{
		if (!GlobalFunc_4947(uLocal_135[0]))
		{
			func_233(1);
		}
	}
	if (!bLocal_847)
	{
		if (!GlobalFunc_115(Local_877.f_28[0]))
		{
			func_233(3);
		}
	}
	if (GlobalFunc_115(Local_877.f_28[0]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_877.f_28[0], PLAYER::PLAYER_PED_ID(), 1))
		{
			if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(Local_877.f_28[0], 0, 2))
			{
				if (func_302(iLocal_866, 1, 1116471296, 1126825984, 0, 0, 0, 0) || func_302(iLocal_867, 1, 1116471296, 1126825984, 0, 0, 0, 0))
				{
					if (GlobalFunc_4924(iLocal_866) && GlobalFunc_4924(iLocal_867))
					{
						TASK::TASK_SMART_FLEE_PED(iLocal_866, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
						TASK::TASK_SMART_FLEE_PED(iLocal_867, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
					}
					GlobalFunc_2297(&iLocal_866, 1, 0, 1);
					GlobalFunc_2297(&iLocal_867, 1, 0, 1);
				}
				func_233(4);
			}
		}
	}
	if (GlobalFunc_8640(Local_877.f_28[0], 1, 0, 0, 0))
	{
		PED::SET_PED_KEEP_TASK(Local_877.f_28[0], 1);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_877.f_28[0], 2, 1);
		TASK::TASK_SMART_FLEE_PED(Local_877.f_28[0], PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
		if (func_302(iLocal_866, 1, 1116471296, 1126825984, 0, 0, 0, 0) || func_302(iLocal_867, 1, 1116471296, 1126825984, 0, 0, 0, 0))
		{
			if (GlobalFunc_4924(iLocal_866) && GlobalFunc_4924(iLocal_867))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_866, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_867, PLAYER::PLAYER_PED_ID(), 100f, -1, 0, 0);
			}
			GlobalFunc_2297(&iLocal_866, 1, 0, 1);
			GlobalFunc_2297(&iLocal_867, 1, 0, 1);
		}
		func_233(5);
	}
}

void func_402(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2F9B6
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

















var func_419()//Position - 0x30418
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(744.7144f, 1254.726f, 357.0291f, 847.8754f, 1342.243f, 370.0352f, 0, 1, 1, 1);
}


int func_421(var uParam0)//Position - 0x3053A
{
	int iVar0[3];
	int iVar4;
	bool bVar5;
	
	iVar0[0] = uLocal_105;
	iVar0[1] = joaat("u_m_y_cyclist_01");
	iVar0[2] = joaat("scorcher");
	switch (iLocal_104)
	{
		case 0:
			uParam0->f_16 = 0;
			uParam0->f_15 = 14f;
			uParam0->f_27 = 1;
			uParam0->f_25 = 1;
			uParam0->f_26 = 1;
			StringCopy(&(uParam0->f_9), "EF_2_RCM", 24);
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar4]);
				iVar4++;
			}
			GlobalFunc_2800(&(uParam0->f_48), "rcm_fanatic2", "ef_2_rcm__maryann_biking_maryann", 0);
			iLocal_104 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_2359(&iVar0) || !GlobalFunc_5736(&(uParam0->f_48)))
			{
				return 0;
			}
			iLocal_104 = 2;
			break;
		
		case 2:
			bVar5 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[0]))
			{
				if (!GlobalFunc_8025(&(uParam0->f_28[0]), 61, 809.66f, 1279.76f, 360.49f, 122.53f, "FANATIC LAUNCHER RC", 1))
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28[1]))
			{
				GlobalFunc_5903(&(uParam0->f_28[1]), iVar0[1], 808.43f, 1279.16f, 360.47f, -79.11f, 26);
				if (GlobalFunc_115(uParam0->f_28[1]))
				{
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 3, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(uParam0->f_28[1], 4, 1, 0, 0);
					PED::SET_PED_PROP_INDEX(uParam0->f_28[1], 0, 0, 0, false);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_28[1], 1);
					PED::SET_PED_LOD_MULTIPLIER(uParam0->f_28[1], 3.5f);
				}
				else
				{
					bVar5 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[0]))
			{
				GlobalFunc_8026(&(uParam0->f_35[0]), iVar0[2], 808.35f, 1277.2f, 360.15f, 216.5f);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_35[1]))
			{
				GlobalFunc_8026(&(uParam0->f_35[1]), iVar0[2], 807.89f, 1275.73f, 360.18f, 208.2f);
			}
			if (bVar5)
			{
				iLocal_104 = 3;
			}
			break;
		
		case 3:
			iVar4 = 0;
			while (iVar4 <= 1)
			{
				if (GlobalFunc_115(uParam0->f_35[iVar4]))
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_35[iVar4], iVar4);
				}
				iVar4++;
			}
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[2], 1);
			if (STREAMING::HAS_ANIM_DICT_LOADED("rcm_fanatic2"))
			{
				if (GlobalFunc_115(uParam0->f_28[1]))
				{
					TASK::TASK_PLAY_ANIM(uParam0->f_28[1], "rcm_fanatic2", "ef_2_rcm__maryann_biking_cyclist", 8f, -8f, -1, 1, 0, 0, 0, 0);
					GlobalFunc_143("Playing Mary Ann's friend anim...");
				}
			}
			func_422();
			iVar4 = 0;
			while (iVar4 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar4]);
				iVar4++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_422()//Position - 0x307F4
{
	int iVar0;
	
	iVar0 = 0;
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(801.7148f, 1270.138f, 359.2855f, 6f, joaat("prop_facgate_03_l"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_l"), 801.7148f, 1270.138f, 359.2855f, 1, 0f, 0);
		iVar0++;
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(802.9195f, 1280.92f, 360.7272f, 6f, joaat("prop_facgate_03_r"), 0))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("prop_facgate_03_r"), 802.9195f, 1280.92f, 360.7272f, 1, 0f, 0);
		iVar0++;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}












void func_434()//Position - 0x30B1C
{
	GlobalFunc_8954();
	if (GlobalFunc_111())
	{
		GlobalFunc_4956();
	}
	if (GlobalFunc_4947(uLocal_135[1]))
	{
		VEHICLE::MODIFY_VEHICLE_TOP_SPEED(uLocal_135[1], 0f);
	}
	if (GlobalFunc_9159())
	{
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FANATIC_MIX_SCENE"))
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_135[1]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_135[1], 0);
		}
		AUDIO::STOP_AUDIO_SCENE("FANATIC_MIX_SCENE");
	}
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (GlobalFunc_115(Local_877.f_28[0]))
	{
		TASK::TASK_CLEAR_LOOK_AT(Local_877.f_28[0]);
	}
	GRAPHICS::FORCE_RENDER_IN_GAME_UI(0);
	GlobalFunc_200(&uLocal_312, 0);
	GlobalFunc_200(&uLocal_492, 0);
	GlobalFunc_200(&uLocal_492, 1);
	func_34();
	func_36();
	func_436(0);
	func_435(0);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(864.3021f, 1274.852f, 361.4736f, 393.9782f, 1197.084f, 224.3141f, 176f, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_860, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_134, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_435(bool bParam0)//Position - 0x30C13
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!bParam0)
		{
			GlobalFunc_190(&(uLocal_135[iVar0]));
		}
		else
		{
			GlobalFunc_6692(&(uLocal_135[iVar0]));
		}
		iVar0++;
	}
	if (!bParam0)
	{
		GlobalFunc_190(&iLocal_861);
		GlobalFunc_190(&iLocal_862);
		GlobalFunc_190(&iLocal_863);
	}
	else
	{
		GlobalFunc_6692(&iLocal_861);
		GlobalFunc_6692(&iLocal_862);
		GlobalFunc_6692(&iLocal_863);
	}
	GlobalFunc_2838("Removed all vehicles");
}

void func_436(bool bParam0)//Position - 0x30C89
{
	func_437(&(Local_877.f_28[0]), bParam0);
	func_437(&iLocal_864, bParam0);
	func_437(&iLocal_866, bParam0);
	func_437(&iLocal_867, bParam0);
	func_437(&iLocal_865, bParam0);
	func_437(&iLocal_868, bParam0);
	GlobalFunc_2838("Removed all peds");
}

void func_437(var uParam0, bool bParam1)//Position - 0x30CD5
{
	if (bParam1)
	{
		GlobalFunc_69(uParam0);
	}
	else
	{
		GlobalFunc_2297(uParam0, 1, 0, 1);
	}
}




























