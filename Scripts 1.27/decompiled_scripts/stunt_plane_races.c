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
	float fLocal_12 = 0f;
	float fLocal_13 = 0f;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	float fLocal_22 = 0f;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
	float fLocal_28 = 0f;
	struct<3> Local_29 = { 0, 0, 0 } ;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	struct<3> Local_47 = { 0, 0, 0 } ;
	struct<304> Local_50 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	var uLocal_365 = 8;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 4;
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
	var uLocal_384 = 4;
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
	var uLocal_399 = 4;
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
	var uLocal_414 = 4;
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
	var uLocal_429 = 4;
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
	var uLocal_444 = 4;
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
	var uLocal_459 = 4;
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
	var uLocal_474 = 4;
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
	struct<3> Local_492 = { 0, 0, 0 } ;
	int iLocal_495 = 0;
	int iLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	bool bLocal_500 = 0;
	bool bLocal_501 = 0;
	int iLocal_502 = 0;
	int iLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	int iLocal_506[5] = { 0, 0, 0, 0, 0 };
	float fLocal_512 = 0f;
	float fLocal_513 = 0f;
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
	var uLocal_528 = 8;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 2;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 8;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 8;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	float fLocal_558 = 0f;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	bool bLocal_561 = 0;
	var uLocal_562 = 35;
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
	var uLocal_878 = 50;
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
	var uLocal_982 = 40;
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
	var uLocal_1439 = 0;
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
	var uLocal_1483 = 0;
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
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 0;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
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
	var uLocal_1538 = 1;
	var uLocal_1539 = 0;
	var uLocal_1540 = 1;
	var uLocal_1541 = 1;
	var uLocal_1542 = 0;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 1;
	var uLocal_1546 = 1;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 3;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
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
	var uLocal_1565 = 0;
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
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 0;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 0;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 4;
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
	var uLocal_1621 = 0;
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
	var uLocal_1634 = 0;
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
	var uLocal_1647 = 0;
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
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 2;
	var uLocal_1663 = 0;
	var uLocal_1664 = 4;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
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
	var uLocal_1703 = 0;
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
	var uLocal_1716 = 0;
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
	var uLocal_1729 = 0;
	var uLocal_1730 = 4;
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
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 0;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
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
	var uLocal_1785 = 0;
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
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 12;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
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
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 0;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
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
	var uLocal_1867 = 0;
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
	var uLocal_1880 = 0;
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
	var uLocal_1893 = 0;
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
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 0;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
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
	var uLocal_1949 = 0;
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
	var uLocal_1962 = 0;
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
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 3;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	int iLocal_1986 = 0;
	var uLocal_1987 = 0;
	int iLocal_1988 = 0;
	int iLocal_1989 = 0;
	int iLocal_1990 = 0;
	int iLocal_1991 = 0;
	int iLocal_1992 = 0;
	int iLocal_1993 = 0;
	int iLocal_1994 = 0;
	int iLocal_1995 = 0;
	int iLocal_1996 = 0;
	int iLocal_1997 = 0;
	int iLocal_1998 = 0;
	int iLocal_1999 = 0;
	int iLocal_2000 = 0;
	int iLocal_2001 = 0;
	int iLocal_2002 = 0;
	int iLocal_2003 = 0;
	int iLocal_2004 = 0;
	int iLocal_2005 = 0;
	int iLocal_2006 = 0;
	int iLocal_2007 = 0;
	int iLocal_2008 = 0;
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
	var uLocal_2031 = 0;
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
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 0;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	int iLocal_2052[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2058[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2064[5] = { 0, 0, 0, 0, 0 };
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	int iLocal_2072 = 0;
	float fLocal_2073 = 0f;
	int iLocal_2074 = 0;
	int iLocal_2075 = 0;
	int iLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 16;
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
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 0;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	var uLocal_2160 = 0;
	var uLocal_2161 = 0;
	var uLocal_2162 = 0;
	var uLocal_2163 = 0;
	var uLocal_2164 = 0;
	var uLocal_2165 = 0;
	var uLocal_2166 = 0;
	var uLocal_2167 = 0;
	var uLocal_2168 = 0;
	var uLocal_2169 = 0;
	var uLocal_2170 = 0;
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	var uLocal_2178 = 0;
	var uLocal_2179 = 0;
	var uLocal_2180 = 0;
	var uLocal_2181 = 0;
	var uLocal_2182 = 0;
	var uLocal_2183 = 0;
	var uLocal_2184 = 0;
	var uLocal_2185 = 0;
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 0;
	var uLocal_2204 = 0;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 0;
	var uLocal_2209 = 0;
	var uLocal_2210 = 0;
	var uLocal_2211 = 0;
	var uLocal_2212 = 0;
	var uLocal_2213 = 0;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	var uLocal_2216 = 0;
	var uLocal_2217 = 0;
	var uLocal_2218 = 0;
	var uLocal_2219 = 0;
	var uLocal_2220 = 0;
	var uLocal_2221 = 0;
	var uLocal_2222 = 0;
	var uLocal_2223 = 0;
	var uLocal_2224 = 0;
	var uLocal_2225 = 0;
	var uLocal_2226 = 0;
	var uLocal_2227 = 0;
	var uLocal_2228 = 0;
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 0;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
	var uLocal_2243 = 0;
	var uLocal_2244 = 0;
	var uLocal_2245 = 0;
	char* sLocal_2246 = NULL;
	float fLocal_2247 = 0f;
	float fLocal_2248 = 0f;
	bool bLocal_2249 = 0;
	bool bLocal_2250 = 0;
	struct<3> Local_2251 = { 0, 0, 0 } ;
	struct<3> Local_2254 = { 0, 0, 0 } ;
	struct<3> Local_2257 = { 0, 0, 0 } ;
	float fLocal_2260 = 0f;
	float fLocal_2261 = 0f;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = -1;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 1000;
	var uLocal_2272 = 1000;
	var uLocal_2273 = 0;
	char[] cLocal_2274[8] = 0;
	char* sLocal_2275 = NULL;
	bool bLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 0;
	var uLocal_2285 = 0;
	bool bLocal_2286 = 0;
	int iLocal_2287 = 0;
	int iLocal_2288 = 0;
	struct<7> Local_2289 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	int iLocal_2301 = 0;
	var uLocal_2302 = 0;
	char* sLocal_2303 = NULL;
	char* sLocal_2304 = NULL;
	char* sLocal_2305 = NULL;
	struct<3> Local_2306 = { 0, 0, 0 } ;
	struct<3> Local_2309 = { 0, 0, 0 } ;
	int iLocal_2312 = 0;
	int iLocal_2313 = 0;
	int iLocal_2314 = 0;
	int iLocal_2315 = 0;
	int iLocal_2316 = 0;
	int iLocal_2317 = 0;
	int iLocal_2318 = 0;
	int iLocal_2319 = 0;
	struct<7> Local_2320 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2327 = 0;
	var uLocal_2328 = 0;
	var uLocal_2329 = 0;
	var uLocal_2330 = 1132396544;
	var uLocal_2331 = 1132396544;
	var uLocal_2332 = 1132396544;
	var uLocal_2333 = 0;
	var uLocal_2334 = -1082130432;
	var uLocal_2335 = 0;
	var uLocal_2336 = 0;
	var uLocal_2337 = 8;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 0;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 0;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 0;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 0;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 0;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 0;
	var uLocal_2393 = 0;
	var uLocal_2394 = -1;
	var uLocal_2395 = 1092616192;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 0;
	int iLocal_2404 = 0;
	int iLocal_2405 = 0;
	bool bLocal_2406 = 0;
	bool bLocal_2407 = 0;
	var uLocal_2408 = 0;
	bool bLocal_2409 = 0;
	int iLocal_2410 = 0;
	struct<2863> Local_2411 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_5274 = 1;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	struct<3> Local_5279 = { 0, 0, 0 } ;
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
	fLocal_22 = 80f;
	fLocal_23 = 140f;
	fLocal_24 = 180f;
	iLocal_27 = 3;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_44 = { 1691.228f, 3251.785f, 44.2574f };
	Local_47 = { 2.5652f, 0f, -4.1481f };
	Local_492 = { 500f, 500f, 500f };
	iLocal_495 = -1;
	iLocal_504 = 1;
	fLocal_512 = 0.008f;
	fLocal_513 = 0.013f;
	fLocal_558 = ((0.05f + 0.275f) - 0.01f);
	fLocal_2073 = -1f;
	iLocal_2074 = 1;
	fLocal_2247 = 0.2f;
	fLocal_2248 = 0.2f;
	fLocal_2261 = 0f;
	cLocal_2274 = "SPR_UI_FAILD";
	sLocal_2275 = "SPR_UI_FRETRY";
	sLocal_2303 = "CHECKPOINT_NORMAL";
	sLocal_2304 = "CHECKPOINT_MISSED";
	sLocal_2305 = "CHECKPOINT_PERFECT";
	Local_2306 = { 1694.74f, 3276.502f, 41.2796f };
	Local_2309 = { 8.79494f, 0.59893f, 154.8464f };
	bLocal_2406 = true;
	bLocal_2407 = true;
	bLocal_2409 = true;
	Local_5279 = { -1497.708f, -3449.576f, 7.3477f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114))
	{
		func_567();
	}
	MISC::SET_MISSION_FLAG(1);
	Local_2320.f_1 = 0;
	Local_2320.f_5 = 0;
	Local_2320.f_6 = 0;
	while (true)
	{
		GlobalFunc_587();
		switch (Local_2320.f_1)
		{
			case 0:
				if (!func_555())
				{
					Local_2320.f_1 = 1;
				}
				break;
			
			case 1:
				if (!func_1())
				{
					Local_2320.f_1 = 2;
				}
				break;
			
			case 2:
				func_567();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x1CA
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_50.f_1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_50.f_1))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_50.f_1, 0))
			{
				if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				{
					Local_50.f_1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				}
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
	{
		Local_50.f_1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	}
	else
	{
		Local_50.f_1 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, joaat("stunt"), 0);
	}
	if (Local_2411.f_2861 != 0)
	{
		Local_2411.f_2862 = (Local_2411.f_2862 - 25);
		if (Local_2411.f_2862 <= 0)
		{
			GRAPHICS::DELETE_CHECKPOINT(Local_2411.f_2861);
			Local_2411.f_2861 = 0;
			bLocal_2276 = false;
		}
		else
		{
			if (bLocal_2276)
			{
				iVar4 = 6;
			}
			else
			{
				iVar4 = 1;
			}
			GlobalFunc_4449(GlobalFunc_6295(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
			GRAPHICS::SET_CHECKPOINT_RGBA(Local_2411.f_2861, uVar0, uVar1, uVar2, GlobalFunc_3642(SYSTEM::CEIL((1.5f * IntToFloat(Local_2411.f_2862))), 255));
			GRAPHICS::SET_CHECKPOINT_RGBA2(Local_2411.f_2861, uVar0, uVar1, uVar2, Local_2411.f_2862);
		}
	}
	func_550();
	TASK::SET_EXCLUSIVE_SCENARIO_GROUP("AMMUNATION");
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	if (Local_2320.f_6 == 4)
	{
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_50.f_1, 0))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(Local_50.f_1))
			{
				FIRE::STOP_ENTITY_FIRE(Local_50.f_1);
			}
		}
	}
	switch (Local_2320.f_6)
	{
		case 0:
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			Local_2320 = -1;
			Local_50.f_10 = 0;
			VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(1734.802f, 3224.105f, 41.3709f, 1762.067f, 3258.69f, 40.5188f, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_50.f_1))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_50.f_1, 1);
				Local_2411.f_2859 = 0;
				Local_2320.f_6 = 3;
			}
			else
			{
				Local_2320.f_6 = 1;
			}
			break;
		
		case 1:
			Local_2320.f_6 = 18;
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_50.f_1))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 512);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_50.f_1, 1);
				Local_2411.f_2859 = 0;
				Local_2320.f_6 = 3;
			}
			break;
		
		case 3:
			if (Local_2411)
			{
			}
			else if ((CAM::DOES_CAM_EXIST(uLocal_2045) && CAM::IS_CAM_ACTIVE(uLocal_2045)) && CAM::IS_SCREEN_FADED_IN())
			{
				if (CAM::DOES_CAM_EXIST(Local_2411.f_2858))
				{
					CAM::DESTROY_CAM(Local_2411.f_2858, 0);
				}
				GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionOut");
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, 1);
				Local_2411.f_2858 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_44, Local_47, 34.9705f, 1, 2);
				CAM::SET_CINEMATIC_MODE_ACTIVE(0);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, 0);
				CAM::SET_CAM_COORD(uLocal_2045, Local_44.x, Local_44.f_1, (Local_44.f_2 + 1000f));
				CAM::SET_CAM_ROT(uLocal_2045, 90f, Local_47.f_1, Local_47.f_2, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_2411.f_2858, uLocal_2045, 500, 1, 1);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			else
			{
				GlobalFunc_4625(500);
				if (CAM::DOES_CAM_EXIST(Local_2411.f_2858))
				{
					CAM::DESTROY_CAM(Local_2411.f_2858, 0);
				}
				Local_2411.f_2858 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_44, Local_47, 34.9705f, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			}
			GlobalFunc_1092(&uLocal_2296);
			GlobalFunc_5208(1);
			STREAMING::CLEAR_FOCUS();
			Local_2320.f_6 = 4;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_50.f_1))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_50.f_1, 1, 0);
			}
			if (MISC::IS_PC_VERSION())
			{
				PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
			}
			PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
			HUD::DISPLAY_RADAR(0);
			Local_2411.f_2 = Local_2411;
			if (Local_2411)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2411.f_358[0 /*189*/].f_9))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2411.f_358[0 /*189*/].f_9, 4);
				}
				iLocal_1989 = 0;
				Local_2411 = 0;
				func_516();
				Local_2320.f_6 = 8;
			}
			else if (Local_2411.f_2859)
			{
				if (PLAYER::IS_PLAYER_ONLINE())
				{
					if ((Local_2411.f_2859 && PAD::IS_CONTROL_JUST_RELEASED(2, 202)) && SYSTEM::TIMERA() > 500)
					{
						AUDIO::PLAY_SOUND(-1, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
						Local_2411.f_2859 = 0;
						Local_2411.f_2860 = 1;
						func_515(&(Local_50.f_119));
						SYSTEM::SETTIMERA(0);
					}
					if (!Local_2411.f_2860 && GlobalFunc_2385(&uLocal_1549))
					{
						Local_2411.f_2860 = 1;
						func_512(Local_2411.f_2860);
					}
					func_450(&(Local_50.f_118), Global_96383, &(Local_50.f_24[Global_96383 /*8*/]));
				}
				else if (GlobalFunc_7112(&iLocal_1986, 0))
				{
					Local_2411.f_2859 = 0;
					iLocal_1986 = 0;
					func_515(&(Local_50.f_119));
					SYSTEM::SETTIMERA(0);
				}
			}
			else
			{
				if ((func_407(&Local_2411, 0) && !iLocal_502) && !bLocal_501)
				{
					func_515(&(Local_50.f_119));
				}
				if (iLocal_505 && PLAYER::IS_PLAYER_ONLINE())
				{
					func_515(&(Local_50.f_119));
					iLocal_505 = 0;
				}
				if ((((!Local_2411.f_2859 && !iLocal_502) && !bLocal_501) && (iLocal_504 || !PLAYER::IS_PLAYER_ONLINE())) && (PAD::IS_CONTROL_JUST_RELEASED(2, 211) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 211)))
				{
					Local_2411.f_2859 = 1;
					AUDIO::PLAY_SOUND(-1, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					GlobalFunc_1459(&uLocal_1549);
					Local_2411.f_2860 = GlobalFunc_2385(&uLocal_1549);
					func_512(Local_2411.f_2860);
					SYSTEM::SETTIMERA(0);
				}
				if (func_347(&uLocal_5274, &(Local_2411.f_1)))
				{
					iLocal_1989 = 0;
					if (Local_50.f_10 != -1)
					{
						func_339();
						func_516();
						if (ENTITY::IS_ENTITY_AT_COORD(Local_50.f_1, Local_2306, 5f, 5f, 5f, 0, 1, 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_50.f_1))
							{
								GlobalFunc_7731(&uLocal_5276);
								Local_2320.f_6 = 8;
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(Local_50.f_1))
						{
							Local_2320.f_6 = 8;
						}
					}
					else
					{
						Local_2320.f_6 = 7;
					}
				}
			}
			break;
		
		case 7:
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_50.f_1, 0))
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				Local_2320.f_6 = 18;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2411.f_358[0 /*189*/].f_9))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_2411.f_358[0 /*189*/].f_9, 0);
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2306, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(PLAYER::PLAYER_PED_ID(), Local_2309, 2, 1);
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0));
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2411.f_358[0 /*189*/].f_9))
				{
					if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_START(Local_2306, ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 500f, 0);
					}
					if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
						Local_2320.f_6 = 18;
					}
				}
				else
				{
					Local_2320.f_6 = 18;
				}
			}
			break;
		
		case 8:
			RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
			if (Local_50.f_10 == 0)
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_50.f_1);
				if (GlobalFunc_2951(iLocal_2287, 16))
				{
					GlobalFunc_6533(&iLocal_2287, 16);
				}
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_50.f_1, 1, 1);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_50.f_1, -1);
				VEHICLE::SET_VEHICLE_FIXED(Local_50.f_1);
				func_334();
				uLocal_2045 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 1702.487f, 3279.545f, 41.9968f, -2.9399f, 0f, 110.4428f, 45.0218f, 1, 2);
				CAM::SET_CAM_ACTIVE(Local_2411.f_2858, 0);
				Local_2320.f_6 = 9;
			}
			else if (GlobalFunc_4623(1000))
			{
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				VEHICLE::SET_VEHICLE_FIXED(Local_50.f_1);
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_50.f_1);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_334();
					Local_2320.f_6 = 10;
				}
			}
			break;
		
		case 9:
			if (!((CAM::IS_CAM_ACTIVE(uLocal_2045) && CAM::IS_CAM_INTERPOLATING(uLocal_2045)) || (CAM::IS_CAM_ACTIVE(Local_2411.f_2858) && CAM::IS_CAM_INTERPOLATING(Local_2411.f_2858))))
			{
				CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(1, 0, 3, 0);
				func_334();
				Local_2320.f_6 = 10;
			}
			break;
		
		case 10:
			Local_2411.f_25 = 0;
			Local_2320.f_6 = 11;
			break;
		
		case 11:
			if (!func_319(&Local_2411))
			{
				GlobalFunc_5208(1);
				if (Local_2411.f_2)
				{
					STREAMING::NEW_LOAD_SCENE_START(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::PLAYER_PED_ID()), 500f, 0);
				}
				if (Local_50.f_10 == 0)
				{
					GlobalFunc_527("SPR_TAXI_GATE", 10000, 1);
					if (!GlobalFunc_2951(iLocal_2287, 16))
					{
						func_310(&Local_2411, 0, 1);
						func_309(&iLocal_2287, 16);
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0);
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					}
					HUD::DISPLAY_HUD(1);
					HUD::DISPLAY_RADAR(1);
					Local_2320.f_6 = 13;
				}
				else
				{
					Local_2320.f_6 = 13;
				}
				Local_2411.f_2 = 0;
			}
			break;
		
		case 13:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
				}
				CAM::SET_CINEMATIC_MODE_ACTIVE(0);
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
				ENTITY::FREEZE_ENTITY_POSITION(Local_2411.f_358[0 /*189*/].f_9, 0);
				func_334();
				if (GlobalFunc_2951(iLocal_2287, 16))
				{
					GlobalFunc_6533(&iLocal_2287, 16);
				}
				if (Local_50.f_10 == 0)
				{
					if (GlobalFunc_4625(500))
					{
						Local_2411.f_26 = 0;
						Local_2320.f_6 = 14;
					}
				}
				else
				{
					func_308(&Local_2411);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					if (GlobalFunc_4625(500))
					{
						Local_2411.f_26 = 0;
						Local_2320.f_6 = 14;
					}
				}
			}
			break;
		
		case 14:
			if (Local_2320 == 1)
			{
				return 1;
			}
			if (func_24(&Local_2411))
			{
				return 1;
			}
			iLocal_1989 = 3;
			func_23();
			func_13();
			if (!Local_2411)
			{
				GlobalFunc_8389(&(Local_2411.f_6));
				func_9(&(Local_2411.f_358[0 /*189*/]), Local_50.f_3, Local_50.f_6, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2411.f_358[0 /*189*/].f_9))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_2411.f_358[0 /*189*/].f_9);
				}
				if (STREAMING::NEW_LOAD_SCENE_START(Local_44, GlobalFunc_590(Local_47), 4500f, 0))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && GlobalFunc_4981(&(Local_2411.f_6)) < 20f)
					{
						SYSTEM::WAIT(0);
					}
					STREAMING::NEW_LOAD_SCENE_STOP();
					STREAMING::SET_FOCUS_POS_AND_VEL(Local_44, GlobalFunc_590(Local_47));
					GlobalFunc_235(&(Local_2411.f_6));
					Local_2320.f_6 = 15;
				}
				else if (GlobalFunc_7072(&(Local_2411.f_6), 20f))
				{
					GlobalFunc_235(&(Local_2411.f_6));
					Local_2320.f_6 = 15;
				}
			}
			else
			{
				Local_2320.f_6 = 3;
			}
			break;
		
		case 15:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
			}
			Local_2411.f_2859 = 0;
			Local_2320.f_6 = 3;
			break;
		
		case 18:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
			}
			func_407(&Local_2411, 1);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				GlobalFunc_4625(1000);
			}
			else
			{
				return 0;
			}
			break;
	}
	return 1;
}








void func_9(var uParam0, struct<3> Param1, var uParam4, float fParam5)//Position - 0xDD9
{
	ENTITY::SET_ENTITY_COORDS(uParam0->f_9, Param1, 1, 0, 0, 1);
	ENTITY::SET_ENTITY_HEADING(uParam0->f_9, uParam4);
	VEHICLE::SET_VEHICLE_FORWARD_SPEED(uParam0->f_9, fParam5);
}




void func_13()//Position - 0xE63
{
	if (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_12[4 /*8*/].f_4 == 1)
	{
		if (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[4] > 0f)
		{
			if (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[4] <= func_22(4))
			{
				GlobalFunc_7610(125, 0, 0);
			}
		}
	}
}









float func_22(int iParam0)//Position - 0x1796
{
	switch (iParam0)
	{
		case 0:
			return 130f;
			break;
		
		case 1:
			return 120f;
			break;
		
		case 2:
			return 120f;
			break;
		
		case 3:
			return 170f;
			break;
		
		case 4:
			return 180f;
			break;
	}
	return -1f;
}

void func_23()//Position - 0x17FB
{
	iLocal_2312 = 0;
	iLocal_2313 = 0;
	iLocal_2314 = 0;
	iLocal_2315 = 0;
	iLocal_2316 = 0;
	iLocal_2317 = 0;
	iLocal_2318 = 0;
	iLocal_2319 = 0;
}

int func_24(var uParam0)//Position - 0x1823
{
	switch (uParam0->f_26)
	{
		case 0:
			GlobalFunc_6533(&iLocal_2287, 4);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			func_307(uParam0);
			uParam0->f_17 = GlobalFunc_816();
			if (Local_50.f_10 == 0)
			{
				if (!GlobalFunc_2951(iLocal_2287, 16))
				{
					func_310(uParam0, 0, 1);
					func_310(uParam0, 1, 0);
					func_309(&iLocal_2287, 16);
				}
			}
			else
			{
				func_308(uParam0);
				if (!GlobalFunc_2951(iLocal_2287, 16))
				{
					func_310(uParam0, 0, 1);
					func_310(uParam0, 1, 0);
					func_309(&iLocal_2287, 16);
				}
			}
			GlobalFunc_235(&(uParam0->f_14));
			iLocal_2301 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
			uParam0->f_26 = 1;
			break;
		
		case 1:
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			if (Local_50.f_10 == 0)
			{
				if (GlobalFunc_2951(iLocal_2287, 16))
				{
					GlobalFunc_6533(&iLocal_2287, 16);
				}
				func_304(uParam0);
				uParam0->f_26 = 7;
			}
			else
			{
				func_308(uParam0);
				if (!func_280(&(uParam0->f_14)))
				{
					if (!CAM::_0x3044240D2E0FA842())
					{
						CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 1, 0, 0);
					}
					if (GlobalFunc_2951(iLocal_2287, 16))
					{
						GlobalFunc_6533(&iLocal_2287, 16);
					}
					HUD::DISPLAY_HUD(1);
					func_304(uParam0);
					if (Local_50.f_10 == 0 && (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[0] > Local_50.f_112[0] || Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[0] == 0f))
					{
						GlobalFunc_159("SPR_HELP_GATE", 10000);
					}
					uParam0->f_26 = 7;
				}
			}
			break;
		
		case 2:
			if (!GlobalFunc_2951(iLocal_2287, 1))
			{
				SYSTEM::SETTIMERA(0);
				func_240(uParam0);
				GlobalFunc_5210(&(Local_50.f_119), 0, 0, 1, 1);
				GlobalFunc_813(&(Local_50.f_119), "SPR_CONT2", 2, 201, 1, 1, 0);
				GlobalFunc_5850(&(Local_50.f_119), 1);
				func_309(&iLocal_2287, 1);
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
			if (GlobalFunc_4406("SPR_RETR_FAIL", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(1);
			}
			if (GlobalFunc_4406("SPR_RETR_FAIL", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
			SYSTEM::SETTIMERA(0);
			func_234();
			func_233(0);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			GlobalFunc_4653(1);
			uParam0->f_26 = 4;
			break;
		
		case 4:
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			GlobalFunc_5077();
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9))
			{
				if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_358[0 /*189*/].f_9) && CAM::DOES_CAM_EXIST(uLocal_2046))
				{
					CAM::GET_CAM_ROT(uLocal_2046, 2);
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_358[0 /*189*/].f_9, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0 /*189*/].f_9, 1);
					func_229();
				}
			}
			if (!func_215(uParam0, bLocal_2406, bLocal_2407))
			{
				func_229();
				GlobalFunc_778(0);
				HUD::CLEAR_HELP(1);
				if (GlobalFunc_2951(iLocal_2287, 1))
				{
					GlobalFunc_6533(&iLocal_2287, 1);
				}
				GlobalFunc_842(0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				iLocal_2410 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2410, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				GlobalFunc_235(&uLocal_2277);
				uParam0->f_26 = 5;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9))
			{
				ENTITY::SET_ENTITY_COORDS(uParam0->f_358[0 /*189*/].f_9, Local_2306, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_358[0 /*189*/].f_9, Local_2309, 2, 1);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_358[0 /*189*/].f_9, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_358[0 /*189*/].f_9);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_2405 = 0;
			uParam0->f_26 = 6;
			uParam0->f_358[0 /*189*/].f_23 = 7;
			break;
		
		case 6:
			uParam0->f_26 = 8;
			break;
		
		case 7:
			GRAPHICS::DRAW_SCALEFORM_MOVIE(uLocal_2296, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
			if (!GlobalFunc_2951(iLocal_2287, 16))
			{
				func_310(uParam0, 0, 1);
				func_310(uParam0, 1, 0);
				func_309(&iLocal_2287, 16);
				func_233(1);
				func_212(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/]);
			}
			if (uParam0->f_1)
			{
				func_185(uParam0);
				func_183(uParam0);
			}
			else
			{
				GlobalFunc_7542(&uLocal_2262, 0);
				func_229();
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
			}
			if (!func_41(uParam0, Local_50))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("MGSP_END");
				func_28(uParam0);
				GlobalFunc_235(&(uParam0->f_14));
				uParam0->f_26 = 2;
				GlobalFunc_235(&(uParam0->f_22));
			}
			break;
		
		case 8:
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			GlobalFunc_833(&(uParam0->f_17));
			func_229();
			func_25();
			return 0;
			break;
	}
	return 1;
}

void func_25()//Position - 0x1CC7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (GlobalFunc_2951(uLocal_2070, iVar0))
		{
			GlobalFunc_6533(&uLocal_2070, iVar0);
		}
		if (GlobalFunc_2951(uLocal_2071, iVar0))
		{
			GlobalFunc_6533(&uLocal_2071, iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2058[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(uLocal_2058[iVar0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2064[iVar0]))
		{
			PED::DELETE_PED(&(uLocal_2064[iVar0]));
		}
		iVar0++;
	}
	GlobalFunc_2285(&iLocal_2052);
	iVar0 = 0;
	while (iVar0 < iLocal_2052)
	{
		iLocal_2052[iVar0] = 0;
		iVar0++;
	}
}



void func_28(var uParam0)//Position - 0x1DAC
{
	int iVar0;
	
	if (!GlobalFunc_225(&(uParam0->f_3)))
	{
		GlobalFunc_4985(&(uParam0->f_3));
	}
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_358[0 /*189*/].f_9, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	func_39(uParam0);
	if (Local_50 == 0)
	{
		func_38(uParam0);
	}
	func_32(uParam0);
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_30(&(uParam0->f_358[iVar0 /*189*/]));
		if (iVar0 != 0)
		{
			GlobalFunc_587(&(uParam0->f_358[iVar0 /*189*/]));
		}
		iVar0++;
	}
}


void func_30(var uParam0)//Position - 0x1E34
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (Local_50 != 0)
		{
			GlobalFunc_587();
		}
	}
}


void func_32(var uParam0)//Position - 0x1E5A
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar0 /*189*/].f_8))
		{
			if (uParam0->f_358[iVar0 /*189*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				iVar1 = func_37(Local_50.f_10);
				if (iVar1 <= 0 || iVar1 > uParam0->f_358[iVar0 /*189*/].f_12)
				{
					func_36(Local_50.f_10, uParam0->f_358[iVar0 /*189*/].f_12);
				}
				fVar2 = func_35(Local_50.f_10);
				func_34(Local_50.f_10, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_358[0 /*189*/].f_13)));
				if (fVar2 == 0f || fVar2 > uParam0->f_358[0 /*189*/].f_13)
				{
					func_33(Local_50.f_10, SYSTEM::TO_FLOAT(SYSTEM::CEIL(uParam0->f_358[0 /*189*/].f_13)));
				}
				return;
			}
		}
		iVar0++;
	}
}

void func_33(int iParam0, float fParam1)//Position - 0x1F2F
{
	Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[iParam0] = fParam1;
}

void func_34(int iParam0, float fParam1)//Position - 0x1F46
{
	Local_50.f_18[iParam0] = fParam1;
}

var func_35(int iParam0)//Position - 0x1F58
{
	var uVar0;
	
	uVar0 = Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[iParam0];
	return uVar0;
}

void func_36(int iParam0, var uParam1)//Position - 0x1F71
{
	Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT[iParam0] = uParam1;
}

int func_37(int iParam0)//Position - 0x1F86
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT[iParam0];
	return iVar0;
}

void func_38(var uParam0)//Position - 0x1FA0
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		iVar2 = 1;
		iVar1 = 0;
		while (iVar1 < uParam0->f_13)
		{
			if (iVar0 != iVar1)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_13 > uParam0->f_358[iVar1 /*189*/].f_13)
				{
					iVar2++;
				}
			}
			iVar1++;
		}
		uParam0->f_358[iVar0 /*189*/].f_12 = iVar2;
		iVar0++;
	}
}

void func_39(var uParam0)//Position - 0x2009
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar0 /*189*/].f_11 != uParam0->f_12)
		{
			uParam0->f_358[iVar0 /*189*/].f_13 = (uParam0->f_358[0 /*189*/].f_13 + (IntToFloat((uParam0->f_12 - uParam0->f_358[iVar0 /*189*/].f_11)) * MISC::GET_RANDOM_FLOAT_IN_RANGE(0.5f, 2.5f)));
		}
		iVar0++;
	}
}


int func_41(var uParam0, int iParam1)//Position - 0x20A8
{
	float fVar0;
	int iVar1;
	struct<10> Var2;
	struct<10> Var12;
	int iVar22;
	bool bVar23;
	int iVar24;
	char cVar25[16];
	
	if (Local_50.f_10 == 0)
	{
		if (uParam0->f_358[0 /*189*/].f_11 == 0)
		{
			GlobalFunc_6715(&(uParam0->f_3));
			if (GlobalFunc_2951(iLocal_2288, 131072))
			{
				VEHICLE::RESET_VEHICLE_STUCK_TIMER(uParam0->f_358[0 /*189*/].f_9, 4);
				GlobalFunc_6533(&iLocal_2288, 131072);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 1 && !GlobalFunc_2951(iLocal_2288, 131072))
		{
			GlobalFunc_159("SPR_INFO_BON", 10000);
			func_309(&iLocal_2288, 131072);
			if (GlobalFunc_2951(iLocal_2288, 262144))
			{
				GlobalFunc_6533(&iLocal_2288, 262144);
			}
		}
		else if (uParam0->f_358[0 /*189*/].f_11 == 4 && !GlobalFunc_2951(iLocal_2288, 262144))
		{
			GlobalFunc_159("SPR_INFO_RESET", 10000);
			func_309(&iLocal_2288, 262144);
		}
	}
	if (GlobalFunc_226(&(uParam0->f_3)))
	{
		fVar0 = GlobalFunc_4981(&(uParam0->f_3));
	}
	func_162(uParam0->f_358[0 /*189*/].f_11, uParam0->f_1);
	PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (uParam0->f_358[iVar1 /*189*/].f_11 < uParam0->f_12)
		{
			bVar23 = false;
			if (uParam0->f_358[iVar1 /*189*/].f_8 == PLAYER::PLAYER_PED_ID())
			{
				bVar23 = true;
			}
			iVar22 = uParam0->f_358[iVar1 /*189*/].f_11;
			if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
			{
				Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
			}
			else
			{
				Var2 = { uParam0->f_27[iVar22 /*10*/] };
			}
			if (iVar22 < (uParam0->f_12 - 1))
			{
				Var12 = { uParam0->f_27[iVar22 + 1 /*10*/] };
			}
			else
			{
				Var12 = { Var2 };
			}
			if (iVar22 != uParam0->f_12)
			{
				uParam0->f_358[iVar1 /*189*/].f_13 = (fVar0 - uParam0->f_358[iVar1 /*189*/].f_15);
				if (uParam0->f_358[iVar1 /*189*/].f_13 < 0f)
				{
					uParam0->f_358[iVar1 /*189*/].f_13 = 0f;
				}
			}
			if (!func_105(uParam0, &(uParam0->f_358[iVar1 /*189*/]), bVar23))
			{
				if ((bVar23 && uParam0->f_1) && (Local_50.f_10 != 0 || uParam0->f_358[0 /*189*/].f_11 > 0))
				{
					if (!GlobalFunc_226(&uLocal_2398))
					{
						GlobalFunc_7731(&uLocal_2398);
					}
					if (GlobalFunc_4981(&uLocal_2401) >= 6.5f)
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 222))
						{
							GlobalFunc_6715(&uLocal_2398);
						}
						else if (GlobalFunc_4981(&uLocal_2398) >= 1.5f)
						{
							uParam0->f_1 = 0;
							GlobalFunc_6533(&iLocal_2288, 32768);
							uParam0->f_358[0 /*189*/].f_23 = 6;
						}
					}
					else if (PAD::IS_CONTROL_PRESSED(2, 222))
					{
						if (GlobalFunc_4981(&(uParam0->f_3)) < 6.5f)
						{
							func_103("SPR_HELP_RST1", &iLocal_2288, 65536, 0);
						}
						else
						{
							func_103("SPR_HELP_RST", &iLocal_2288, 32768, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(uParam0->f_358[iVar1 /*189*/].f_8))
				{
					func_101(uParam0, iVar1);
					if (Local_50 == 0 && GlobalFunc_226(&uLocal_2283))
					{
						return 1;
					}
					if (bVar23)
					{
						if (uParam0->f_358[iVar1 /*189*/].f_14 != 0f)
						{
							GlobalFunc_7731(&(uParam0->f_14));
						}
						if (GlobalFunc_2951(iLocal_2287, 8))
						{
							func_310(uParam0, iVar22, 1);
							if (iVar22 < (uParam0->f_12 - 1))
							{
								func_310(uParam0, iVar22 + 1, 0);
							}
							GlobalFunc_6533(&iLocal_2287, 8);
						}
					}
					if (uParam0->f_1)
					{
						uParam0->f_11 = func_93(uParam0, &Var2, &Var12, uParam0->f_358[iVar1 /*189*/].f_8);
						func_90(&Var2, &Var12);
					}
					if (uParam0->f_11 != -1)
					{
						if (iParam1 == 0)
						{
							func_85(&(uParam0->f_358[iVar1 /*189*/]), bVar23, uParam0->f_11);
						}
						bLocal_2276 = func_84(uParam0->f_11);
						uParam0->f_358[iVar1 /*189*/].f_11++;
						iVar22 = uParam0->f_358[iVar1 /*189*/].f_11;
						if (iVar22 >= (uParam0->f_12 - 1))
						{
							Var2 = { uParam0->f_27[(uParam0->f_12 - 1) /*10*/] };
						}
						else
						{
							Var2 = { uParam0->f_27[iVar22 /*10*/] };
						}
						if (bVar23)
						{
							func_78(uParam0, (iVar22 - 1));
							if (iVar22 == uParam0->f_12)
							{
								iVar24 = 0;
								if (GlobalFunc_226(&(uParam0->f_3)))
								{
									if (!GlobalFunc_225(&(uParam0->f_3)))
									{
										GlobalFunc_4985(&(uParam0->f_3));
									}
									if (uParam0->f_358[0 /*189*/].f_13 > 0f)
									{
										if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_106[Local_50.f_10])
										{
											iVar24 = 1;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_50.f_112[Local_50.f_10] - Local_50.f_106[Local_50.f_10]) / 2f) + Local_50.f_106[Local_50.f_10]))
										{
											iVar24 = 2;
										}
										else if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_112[Local_50.f_10])
										{
											iVar24 = 3;
										}
									}
								}
								if (iVar24 == 0)
								{
								}
								if (iVar24 > 0)
								{
									return 0;
								}
								else
								{
									uParam0->f_1 = 0;
									uParam0->f_358[iVar1 /*189*/].f_11 = (uParam0->f_358[iVar1 /*189*/].f_11 - 1);
									HUD::CLEAR_PRINTS();
									sLocal_2275 = "SPR_TIME_FAIL";
									uParam0->f_358[0 /*189*/].f_23 = 0;
								}
							}
							else
							{
								func_310(uParam0, iVar22, 1);
								if (iVar22 < (uParam0->f_12 - 1))
								{
									func_310(uParam0, iVar22 + 1, 0);
								}
							}
							if (uParam0->f_358[iVar1 /*189*/].f_14 == 0f)
							{
								if (GlobalFunc_226(&(uParam0->f_14)))
								{
									GlobalFunc_235(&(uParam0->f_14));
								}
							}
							if (uParam0->f_12 > 0)
							{
								if (uParam0->f_10 > 0f)
								{
									if (iVar22 == SYSTEM::ROUND((IntToFloat(uParam0->f_12) / 2f)))
									{
										uParam0->f_358[iVar1 /*189*/].f_14 = 0f;
										GlobalFunc_6715(&(uParam0->f_14));
									}
								}
							}
						}
						else if (uParam0->f_358[iVar1 /*189*/].f_11 >= uParam0->f_12)
						{
							if (Local_50 != 2)
							{
								if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_8))
								{
									GlobalFunc_587(&(uParam0->f_358[iVar1 /*189*/]));
								}
							}
						}
						else
						{
							if (Local_50 != 1)
							{
								if (iVar1 != 0)
								{
									func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
								}
							}
							else
							{
								StringCopy(&cVar25, "Offroad_", 16);
								StringIntConCat(&cVar25, Local_50.f_10 + 1, 16);
								if (iVar1 == 1)
								{
									StringConCat(&cVar25, "a", 16);
								}
								if (iVar1 > 0)
								{
									if (bLocal_2409)
									{
										if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_9))
										{
											if (TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_358[iVar1 /*189*/].f_8, -235832601) == 1)
											{
											}
											else
											{
												TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, &cVar25, 262144, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_358[iVar1 /*189*/].f_9), 0, 1073741824);
											}
										}
									}
									else if (iVar1 != 0)
									{
										func_76(uParam0, uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_358[iVar1 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/].f_7, iVar1);
									}
								}
							}
							if (Local_50 != 2)
							{
								func_75(uParam0, iVar1);
							}
						}
					}
					if (iParam1 == 0)
					{
						if (bVar23)
						{
							func_74();
						}
					}
				}
			}
		}
		iVar1++;
	}
	if (uParam0->f_1 == 1)
	{
		func_67(uParam0);
		func_65(uParam0, &uLocal_2408);
		func_64(uParam0, &uLocal_2408);
		func_63();
		func_58(uParam0);
		func_57();
		func_56(uParam0);
		if (uParam0->f_358[0 /*189*/].f_23 != 0)
		{
			if (Local_50.f_10 == 0)
			{
				if (uParam0->f_358[0 /*189*/].f_11 > 0)
				{
					func_42(uParam0);
				}
			}
			else
			{
				func_42(uParam0);
			}
		}
	}
	return 1;
}

void func_42(var uParam0)//Position - 0x2835
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	
	if (HUD::IS_RADAR_HIDDEN())
	{
		HUD::DISPLAY_RADAR(1);
	}
	if (!GlobalFunc_226(&uLocal_2077))
	{
		iLocal_2075 = 0;
		iLocal_2076 = 0;
		GlobalFunc_7731(&uLocal_2077);
	}
	if (SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f)) != iLocal_2076)
	{
		iLocal_2075 = (SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f)) - iLocal_2076);
		iLocal_2076 = SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f));
		GlobalFunc_6715(&uLocal_2077);
	}
	iVar0 = (SYSTEM::FLOOR((GlobalFunc_4981(&(uParam0->f_3)) * 100f)) * 10 - SYSTEM::CEIL((uParam0->f_358[0 /*189*/].f_15 * 1000f)));
	iVar1 = 0;
	if (GlobalFunc_4981(&uLocal_2077) <= 2f)
	{
		if (uParam0->f_358[0 /*189*/].f_11 > 0)
		{
			iVar1 = -iLocal_2075;
		}
		else
		{
			iVar1 = 0;
		}
	}
	iVar2 = SYSTEM::FLOOR((Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[Local_50.f_10] * 100f)) * 10;
	if (iVar2 <= 0)
	{
		iVar2 = -1;
	}
	if (IntToFloat(iVar0) <= (Local_50.f_106[Local_50.f_10] * 1000f))
	{
		iVar3 = SYSTEM::FLOOR((Local_50.f_106[Local_50.f_10] * 1000f));
		iVar6 = 3;
		sVar4 = "SPR_GBEST";
		iVar5 = 109;
	}
	else if (IntToFloat(iVar0) <= ((((Local_50.f_112[Local_50.f_10] - Local_50.f_106[Local_50.f_10]) / 2f) + Local_50.f_106[Local_50.f_10]) * 1000f))
	{
		iVar6 = 2;
		iVar3 = SYSTEM::FLOOR(((((Local_50.f_112[Local_50.f_10] - Local_50.f_106[Local_50.f_10]) / 2f) + Local_50.f_106[Local_50.f_10]) * 1000f));
		sVar4 = "SPR_SBEST";
		iVar5 = 108;
	}
	else if (IntToFloat(iVar0) <= (Local_50.f_112[Local_50.f_10] * 1000f))
	{
		iVar6 = 1;
		iVar3 = SYSTEM::FLOOR((Local_50.f_112[Local_50.f_10] * 1000f));
		sVar4 = "SPR_BBEST";
		iVar5 = 107;
	}
	else
	{
		iVar3 = -1;
	}
	GlobalFunc_1470();
	func_43(iVar0, "", -1, -1, "", -1, -1, "", iVar1, 1, -1, -1, "SPR_GATES", 12, -1, -1, "", 12, iVar3, sVar4, iVar6, iVar5, iVar2, "SPRBEST", 0, 1, 1, -1, "", -1f, func_54());
}

void func_43(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, char* sParam12, int iParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, char* sParam19, int iParam20, int iParam21, int iParam22, char* sParam23, int iParam24, int iParam25, int iParam26, int iParam27, char* sParam28, float fParam29, var uParam30)//Position - 0x2A62
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	struct<8> Var6;
	int iVar22;
	
	if (fParam29 > -1f)
	{
		GlobalFunc_5969(0, "", iParam27, uParam30, 9, 0, sParam28, 1, fParam29, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	if (iParam14 > -1)
	{
		sVar0 = sParam16;
		if (func_50(sVar0))
		{
			sVar0 = "TIM_DAMAGE";
		}
		GlobalFunc_5968(iParam14, iParam15, sVar0, iParam17, iParam27, 8, -1f, -1f, 0, 1, 0, 0, 0, 0, 0);
	}
	if (iParam10 > -1)
	{
		sVar1 = sParam12;
		if (func_50(sVar1))
		{
			sVar1 = "TIM_CHECKPOIN";
		}
		func_48((iParam11 - iParam10), sVar1, iParam27, iParam13, 7, 0, 0, 1, 0, 0, 0);
	}
	if (iParam5 > -1)
	{
		sVar2 = sParam7;
		if (func_50(sVar2))
		{
			sVar2 = "TIM_POSIT";
		}
		GlobalFunc_5967(iParam5, iParam6, sVar2, iParam9, iParam27, 6, 0, 0, 0);
	}
	if (iParam2 > -1)
	{
		sVar3 = sParam4;
		if (func_50(sVar3))
		{
			sVar3 = "TIM_LAP";
		}
		iParam2 = iParam2;
		iParam3 = iParam3;
	}
	if (iParam18 > -1)
	{
		sVar4 = sParam19;
		if (func_50(sVar4))
		{
			sVar4 = "TIMER_BESTIME";
		}
		func_44(iParam18, sVar4, 0, 1, iParam27, iParam20, 4, 0, iParam21, 0, 0, 0, 0, 0);
	}
	if (iParam22 > -1)
	{
		sVar5 = sParam23;
		if (func_50(sVar5))
		{
			sVar5 = "TIMER_BESTIME";
		}
		func_44(iParam22, sVar5, 0, 1, iParam27, iParam24, 5, 0, iParam25, 0, 0, 0, 0, 0);
	}
	StringCopy(&Var6, sParam1, 64);
	if (iParam8 < 0)
	{
		StringCopy(&Var6, "TIMER_REWARD", 64);
	}
	else if (iParam8 > 0)
	{
		StringCopy(&Var6, "TIMER_PENAL", 64);
	}
	else if (func_50(&Var6))
	{
		StringCopy(&Var6, "TIM_TIMER", 64);
	}
	iParam26 = iParam26;
	iVar22 = 4;
	func_44(iParam0, &Var6, iParam8, iVar22, iParam27, 0, 3, 0, 1, 0, 0, 0, 0, 0);
}

void func_44(int iParam0, char* sParam1, int iParam2, int iParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x2BF2
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (GlobalFunc_659(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		GlobalFunc_658(7, iVar0);
		Global_1328872.f_3132[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_3132.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_3132.f_138[iVar0] = iParam2;
		Global_1328872.f_3132.f_174[iVar0] = iParam3;
		Global_1328872.f_3132.f_147[iVar0] = uParam4;
		Global_1328872.f_3132.f_156[iVar0] = iParam5;
		Global_1328872.f_3132.f_201[iVar0] = iParam6;
		Global_1328872.f_3132.f_210[iVar0] = iParam7;
		Global_1328872.f_3132.f_165[iVar0] = iParam8;
		Global_1328872.f_3132.f_254[iVar0] = iParam9;
		Global_1328872.f_3132.f_263[iVar0] = iParam10;
		Global_1328872.f_3132.f_289[iVar0] = iParam11;
		Global_1328872.f_3132.f_192[iVar0] = iParam12;
		Global_1328872.f_3132.f_219[iVar0] = iParam13;
	}
}




void func_48(int iParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x2E0B
{
	int iVar0;
	int iVar1;
	
	if (func_50(sParam6))
	{
		sParam6 = "NUMBER";
	}
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (GlobalFunc_659(3, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1328872.f_1 = 1;
		GlobalFunc_658(3, iVar0);
		Global_1328872.f_1840[iVar0] = iParam0;
		StringCopy(&(Global_1328872.f_1840.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1328872.f_1840.f_147[iVar0] = uParam3;
		Global_1328872.f_1840.f_138[iVar0] = uParam2;
		Global_1328872.f_1840.f_165[iVar0] = iParam4;
		Global_1328872.f_1840.f_174[iVar0] = iParam5;
		StringCopy(&(Global_1328872.f_1840.f_209[iVar0 /*16*/]), sParam6, 64);
		Global_1328872.f_1840.f_338[iVar0] = iParam7;
		Global_1328872.f_1840.f_365[iVar0] = iParam8;
		Global_1328872.f_1840.f_347[iVar0] = iParam9;
		Global_1328872.f_1840.f_356[iVar0] = iParam10;
	}
}


int func_50(char[4] cParam0)//Position - 0x3040
{
	if (MISC::IS_STRING_NULL(cParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(cParam0, "") || MISC::ARE_STRINGS_EQUAL(cParam0, "0"))
	{
		return 1;
	}
	return 0;
}




int func_54()//Position - 0x32AD
{
	return iLocal_2074;
}


void func_56(var uParam0)//Position - 0x32C8
{
	if (uParam0->f_13 == -1)
	{
	}
}

void func_57()//Position - 0x32D8
{
	if (Local_50 == 0)
	{
		HUD::SET_MINIMAP_COMPONENT(0, 0);
		HUD::SET_MINIMAP_COMPONENT(1, 0);
		HUD::SET_MINIMAP_COMPONENT(2, 0);
		HUD::SET_MINIMAP_COMPONENT(3, 0);
	}
}

void func_58(var uParam0)//Position - 0x3302
{
	if (GlobalFunc_4981(&(uParam0->f_3)) > 15f)
	{
		if (ENTITY::GET_ENTITY_SPEED(uParam0->f_358[0 /*189*/].f_9) < 5f)
		{
			if (!GlobalFunc_226(&uLocal_2280))
			{
				GlobalFunc_8389(&uLocal_2280);
			}
			else if (GlobalFunc_4981(&uLocal_2280) > 60f)
			{
				func_59("SPR_MOVE_FAIL", 5000, 0, &iLocal_2288, 8192);
				if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
					{
						HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
					}
				}
				if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
				{
					if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
					{
						HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
					}
				}
				GlobalFunc_6715(&uLocal_2280);
				GlobalFunc_6715(&uLocal_2277);
				uParam0->f_1 = 0;
				HUD::CLEAR_PRINTS();
				sLocal_2275 = "SPR_RETR_IDLE";
				uParam0->f_358[0 /*189*/].f_23 = 0;
			}
			else if (GlobalFunc_4981(&uLocal_2280) > 30f)
			{
				if (!GlobalFunc_2951(iLocal_2287, 32))
				{
					func_103("SPR_IDLE_WARN", &iLocal_2287, 32, 0);
				}
			}
		}
		else if (GlobalFunc_226(&uLocal_2280))
		{
			GlobalFunc_6533(&iLocal_2287, 32);
			GlobalFunc_6715(&uLocal_2280);
		}
	}
	else if (GlobalFunc_226(&uLocal_2280))
	{
		GlobalFunc_6533(&iLocal_2287, 32);
		GlobalFunc_6715(&uLocal_2280);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3482
{
	if (GlobalFunc_2987(*iParam3, iParam4))
	{
		return;
	}
	GlobalFunc_164(sParam0, iParam1, iParam2);
	GlobalFunc_814(iParam3, iParam4);
}




void func_63()//Position - 0x34E4
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
}

void func_64(var uParam0, var uParam1)//Position - 0x3500
{
	if (uParam0->f_1)
	{
		if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, 0) || ENTITY::GET_ENTITY_HEALTH(uParam0->f_358[0 /*189*/].f_9) < 5) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_6715(&uLocal_2277);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
			}
			if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
				}
			}
			if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
				{
					HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
				}
			}
			uParam0->f_1 = 0;
			HUD::CLEAR_PRINTS();
			sLocal_2275 = "SPR_RETR_DES";
			uParam0->f_358[0 /*189*/].f_23 = 0;
		}
		return;
	}
}

void func_65(var uParam0, var uParam1)//Position - 0x3607
{
	if (Local_50 == 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				HUD::CLEAR_PRINTS();
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::REMOVE_BLIP(uParam1);
					if (uParam0->f_358[0 /*189*/].f_11 <= (uParam0->f_12 - 1))
					{
						if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5))
						{
							HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_5, 0);
						}
					}
					if (uParam0->f_358[0 /*189*/].f_11 + 1 <= (uParam0->f_12 - 2))
					{
						if (HUD::DOES_BLIP_EXIST(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5))
						{
							HUD::SET_BLIP_DISPLAY(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/].f_5, 0);
						}
					}
				}
				uParam0->f_1 = 0;
				HUD::CLEAR_PRINTS();
				sLocal_2275 = "SPR_RETR_DES";
				GlobalFunc_815(&(Local_50.f_297), 1);
				uParam0->f_358[0 /*189*/].f_23 = 7;
			}
		}
	}
}


void func_67(var uParam0)//Position - 0x3729
{
	if (uParam0->f_1)
	{
		func_72(uParam0);
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x3744
{
	int iVar0;
	int iVar1;
	
	iVar0 = ENTITY::GET_ENTITY_HEALTH(uParam0->f_358[0 /*189*/].f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9))
	{
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(uParam0->f_358[0 /*189*/].f_9));
	}
	if (IntToFloat(iVar0) < 500f)
	{
		if (Local_50 == 2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_358[0 /*189*/].f_9, 0))
				{
					bLocal_2286 = true;
				}
			}
			if (bLocal_2286)
			{
				if (uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 6 || uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/].f_7 == 10)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2288, 2);
					}
				}
			}
		}
		else
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2288, 2);
		}
	}
	if (Local_50 == 1)
	{
		if (IntToFloat(iVar1) < 200f)
		{
			if (HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_PRINTS();
			}
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			func_59("SPR_HELP_DAMG", 5000, 0, &iLocal_2288, 2);
		}
	}
}




void func_72(var uParam0)//Position - 0x38FD
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	float fVar14;
	bool bVar15;
	bool bVar16;
	
	Var0 = { uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/] };
	if (uParam0->f_358[0 /*189*/].f_11 > 0)
	{
		Var3 = { uParam0->f_27[(uParam0->f_358[0 /*189*/].f_11 - 1) /*10*/] };
	}
	else
	{
		Var3 = { 0f, 0f, 0f };
	}
	fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var3, 1);
	fVar7 = fVar6;
	if (uParam0->f_358[0 /*189*/].f_11 == 0)
	{
		fVar6 = (fVar6 + 200f);
		fVar7 = (fVar7 + 750f);
	}
	else
	{
		fVar6 = (fVar6 + 200f);
		fVar7 = (fVar7 + 750f);
	}
	Var8 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_358[0 /*189*/].f_8, 1) };
	if (GlobalFunc_537(Var3, 0f, 0f, 0f, 1056964608))
	{
		Var11 = { Var0 };
	}
	else
	{
		Var11 = { MISC::_0x21C235BC64831E5A(Var8, Var3, Var0, 1) };
	}
	fVar14 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var11, Var8, 1);
	bVar15 = fVar14 >= fVar6;
	bVar16 = fVar14 >= fVar7;
	if (Local_50 == 1)
	{
		if (MISC::ABSF((Var11.f_2 - Var8.f_2)) > 15f)
		{
			bVar15 = true;
		}
	}
	if (bVar16)
	{
		GlobalFunc_6715(&uLocal_2277);
		uParam0->f_1 = 0;
		HUD::CLEAR_PRINTS();
		GlobalFunc_4653(1);
		uParam0->f_358[0 /*189*/].f_23 = 0;
		GlobalFunc_5210(&(Local_50.f_119), 0, 0, 1, 1);
		GlobalFunc_813(&(Local_50.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
		GlobalFunc_813(&(Local_50.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("MGSP_FAIL");
		sLocal_2275 = "SPR_HELP_FAIL";
	}
	else if (bVar15)
	{
		if (fVar14 <= (fVar7 - 15f))
		{
			GlobalFunc_159("SPR_HELP_RESET", -1);
		}
		if (fVar14 <= (fVar7 - 15f))
		{
			func_59("SPR_HELP_WARN", 5000, 0, &iLocal_2288, 4);
		}
	}
	else
	{
		HUD::CLEAR_THIS_PRINT("SPR_HELP_WARN");
		if (GlobalFunc_2951(iLocal_2288, 4))
		{
			GlobalFunc_6533(&iLocal_2288, 4);
		}
	}
}


void func_74()//Position - 0x3B27
{
	if (iLocal_1991 == 1)
	{
		if (GlobalFunc_226(&uLocal_2021))
		{
			if (GlobalFunc_4981(&uLocal_2021) <= 2.5f)
			{
				iLocal_2072 = "GATEMISS";
				fLocal_2073 = 5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1991 = 0;
			}
		}
	}
	if (iLocal_1992 == 1)
	{
		if (GlobalFunc_226(&uLocal_2027))
		{
			if (GlobalFunc_4981(&uLocal_2027) <= 2.5f)
			{
				iLocal_2072 = "GATEINNER";
				fLocal_2073 = 1f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1992 = 0;
			}
		}
	}
	if (iLocal_1993 == 1)
	{
		if (GlobalFunc_226(&uLocal_2024))
		{
			if (GlobalFunc_4981(&uLocal_2024) <= 2.5f)
			{
				iLocal_2072 = "GATEOUTTER";
				fLocal_2073 = 0f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1993 = 0;
			}
		}
	}
	if (iLocal_1994 == 1)
	{
		if (GlobalFunc_226(&uLocal_2036))
		{
			if (GlobalFunc_4981(&uLocal_2036) <= 2.5f)
			{
				iLocal_2072 = "GATEKNIFEINNER";
				fLocal_2073 = 2.5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1994 = 0;
			}
		}
	}
	if (iLocal_1995 == 1)
	{
		if (GlobalFunc_226(&uLocal_2039))
		{
			if (GlobalFunc_4981(&uLocal_2039) <= 2.5f)
			{
				iLocal_2072 = "GATEINVERTEDIN";
				fLocal_2073 = 3f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1995 = 0;
			}
		}
	}
	if (iLocal_1996 == 1)
	{
		if (GlobalFunc_226(&uLocal_2030))
		{
			if (GlobalFunc_4981(&uLocal_2030) <= 2.5f)
			{
				iLocal_2072 = "GATEKNIFEOUTTER";
				fLocal_2073 = 1.5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1996 = 0;
			}
		}
	}
	if (iLocal_1997 == 1)
	{
		if (GlobalFunc_226(&uLocal_2033))
		{
			if (GlobalFunc_4981(&uLocal_2033) <= 2.5f)
			{
				iLocal_2072 = "GATEINVERTEDOUT";
				fLocal_2073 = 2f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1997 = 0;
			}
		}
	}
	if (iLocal_1998 == 1)
	{
		if (GlobalFunc_226(&uLocal_2009))
		{
			if (GlobalFunc_4981(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFELEFT";
				fLocal_2073 = 4f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1998 = 0;
			}
		}
	}
	if (iLocal_1999 == 1)
	{
		if (GlobalFunc_226(&uLocal_2009))
		{
			if (GlobalFunc_4981(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFELEFTHIT";
				fLocal_2073 = 1.5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_1999 = 0;
			}
		}
	}
	if (iLocal_2000 == 1)
	{
		if (GlobalFunc_226(&uLocal_2009))
		{
			if (GlobalFunc_4981(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFELEFTMISS";
				fLocal_2073 = 5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2000 = 0;
			}
		}
	}
	if (iLocal_2001 == 1)
	{
		if (GlobalFunc_226(&uLocal_2009))
		{
			if (GlobalFunc_4981(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFERIGHT";
				fLocal_2073 = 4f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2001 = 0;
			}
		}
	}
	if (iLocal_2002 == 1)
	{
		if (GlobalFunc_226(&uLocal_2009))
		{
			if (GlobalFunc_4981(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFERIGHTHIT";
				fLocal_2073 = 1.5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2002 = 0;
			}
		}
	}
	if (iLocal_2003 == 1)
	{
		if (GlobalFunc_226(&uLocal_2009))
		{
			if (GlobalFunc_4981(&uLocal_2009) <= 2.5f)
			{
				iLocal_2072 = "STUNTKNIFERIGHTMISS";
				fLocal_2073 = 5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2003 = 0;
			}
		}
	}
	if (iLocal_2004 == 1)
	{
		if (GlobalFunc_226(&uLocal_2012))
		{
			if (GlobalFunc_4981(&uLocal_2012) <= 2.5f)
			{
				iLocal_2072 = "STUNTINVERTED";
				fLocal_2073 = 4f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2004 = 0;
			}
		}
	}
	if (iLocal_2005 == 1)
	{
		if (GlobalFunc_226(&uLocal_2012))
		{
			if (GlobalFunc_4981(&uLocal_2012) <= 2.5f)
			{
				iLocal_2072 = "STUNTINVERTEDHIT";
				fLocal_2073 = 1.5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2005 = 0;
			}
		}
	}
	if (iLocal_2006 == 1)
	{
		if (GlobalFunc_226(&uLocal_2012))
		{
			if (GlobalFunc_4981(&uLocal_2012) <= 2.5f)
			{
				iLocal_2072 = "STUNTINVERTEDMISS";
				fLocal_2073 = 5f;
				iLocal_2074 = 1;
			}
			else
			{
				iLocal_2072 = 0;
				fLocal_2073 = -1f;
				iLocal_2074 = 1;
				iLocal_2006 = 0;
			}
		}
	}
}

void func_75(var uParam0, int iParam1)//Position - 0x3F73
{
	float fVar0;
	
	if (iParam1 < 0 || iParam1 > uParam0->f_358)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_8))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_9))
		{
			if (PED::IS_PED_IN_VEHICLE(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, 0))
			{
				fVar0 = VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_358[iParam1 /*189*/].f_9);
				if (uParam0->f_358[0 /*189*/].f_11 == uParam0->f_358[iParam1 /*189*/].f_11)
				{
				}
				else if (uParam0->f_358[iParam1 /*189*/].f_11 > uParam0->f_358[0 /*189*/].f_11)
				{
					fVar0 = (fVar0 * 0.69f);
				}
				else
				{
					fVar0 = (fVar0 * 1f);
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(uParam0->f_358[iParam1 /*189*/].f_9, -1))
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_358[iParam1 /*189*/].f_8, uParam0->f_358[iParam1 /*189*/].f_9, -1);
						TASK::SET_DRIVE_TASK_CRUISE_SPEED(uParam0->f_358[iParam1 /*189*/].f_8, fVar0);
					}
				}
			}
		}
	}
}

void func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, var uParam6, int iParam7)//Position - 0x408A
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (Local_50 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam2))
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(iParam1, iParam2, Param3, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(iParam2), 1, 0, 786469, 5f, -1f);
			}
		}
		else if (Local_50 == 2)
		{
			uParam6 = uParam6;
			func_77(uParam0, Param3, iParam7);
		}
	}
}

void func_77(var uParam0, struct<3> Param1, var uParam4)//Position - 0x40DF
{
	uParam0->f_12 = uParam0->f_12;
	Param1 = { Param1 };
	uParam4 = uParam4;
}

void func_78(var uParam0, int iParam1)//Position - 0x40FB
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_81(&(uParam0->f_27[iParam1 /*10*/].f_6), &(uParam0->f_2861), &(uParam0->f_2862), uParam0->f_27[iParam1 /*10*/].f_7 == 4);
	if (iParam1 + 1 < uParam0->f_12)
	{
		func_82(&(uParam0->f_27[iParam1 + 1 /*10*/]));
		func_79(&(uParam0->f_27[iParam1 + 1 /*10*/]));
	}
}

void func_79(var uParam0)//Position - 0x416F
{
	func_80(&(uParam0->f_6));
}

void func_80(var uParam0)//Position - 0x417F
{
	if (*uParam0 != 0)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam0);
		*uParam0 = 0;
	}
}

void func_81(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x4199
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	
	func_80(uParam1);
	if (*uParam0 != 0)
	{
		*uParam1 = *uParam0;
		*uParam0 = 0;
		*uParam2 = 255;
		if (bParam3)
		{
			*uParam2 = 0;
		}
		if (bLocal_2276)
		{
			iVar3 = 6;
		}
		else
		{
			iVar3 = 1;
		}
		GlobalFunc_4449(GlobalFunc_6295(iVar3), &uVar0, &uVar1, &uVar2, uParam2);
		GRAPHICS::SET_CHECKPOINT_RGBA(*uParam1, uVar0, uVar1, uVar2, *uParam2);
		GRAPHICS::SET_CHECKPOINT_RGBA2(*uParam1, uVar0, uVar1, uVar2, *uParam2);
	}
}

void func_82(var uParam0)//Position - 0x4207
{
	GlobalFunc_703(&(uParam0->f_5));
}


int func_84(int iParam0)//Position - 0x422F
{
	if ((((((iParam0 == 9 || iParam0 == 12) || iParam0 == 15) || iParam0 == 10) || iParam0 == 13) || iParam0 == 16) || iParam0 == 7)
	{
		return 1;
	}
	return 0;
}

void func_85(var uParam0, bool bParam1, int iParam2)//Position - 0x4285
{
	if (bParam1)
	{
		if (Local_50 == 0)
		{
			if (GlobalFunc_226(&uLocal_2021))
			{
				GlobalFunc_7258(&uLocal_2021, 3f);
			}
			if (GlobalFunc_226(&uLocal_2015))
			{
				GlobalFunc_7258(&uLocal_2015, 3f);
			}
			if (GlobalFunc_226(&uLocal_2009))
			{
				GlobalFunc_7258(&uLocal_2009, 3f);
			}
			if (GlobalFunc_226(&uLocal_2018))
			{
				GlobalFunc_7258(&uLocal_2018, 3f);
			}
			if (GlobalFunc_226(&uLocal_2012))
			{
				GlobalFunc_7258(&uLocal_2012, 3f);
			}
			if (GlobalFunc_226(&uLocal_2024))
			{
				GlobalFunc_7258(&uLocal_2024, 3f);
			}
			if (GlobalFunc_226(&uLocal_2027))
			{
				GlobalFunc_7258(&uLocal_2027, 3f);
			}
			if (GlobalFunc_226(&uLocal_2030))
			{
				GlobalFunc_7258(&uLocal_2030, 3f);
			}
			if (GlobalFunc_226(&uLocal_2033))
			{
				GlobalFunc_7258(&uLocal_2033, 3f);
			}
			if (GlobalFunc_226(&uLocal_2036))
			{
				GlobalFunc_7258(&uLocal_2036, 3f);
			}
			if (GlobalFunc_226(&uLocal_2039))
			{
				GlobalFunc_7258(&uLocal_2039, 3f);
			}
			func_86(uParam0, iParam2);
			switch (iParam2)
			{
				case 7:
					iLocal_1991 = 1;
					GlobalFunc_6715(&uLocal_2021);
					break;
				
				case 1:
					iLocal_1992 = 1;
					GlobalFunc_6715(&uLocal_2027);
					break;
				
				case 2:
					iLocal_1993 = 1;
					GlobalFunc_6715(&uLocal_2024);
					break;
				
				case 3:
					iLocal_1994 = 1;
					GlobalFunc_6715(&uLocal_2036);
					break;
				
				case 4:
					iLocal_1995 = 1;
					GlobalFunc_6715(&uLocal_2039);
					break;
				
				case 5:
					iLocal_1996 = 1;
					GlobalFunc_6715(&uLocal_2030);
					break;
				
				case 6:
					iLocal_1997 = 1;
					GlobalFunc_6715(&uLocal_2033);
					break;
				
				case 8:
					iLocal_1998 = 1;
					GlobalFunc_6715(&uLocal_2009);
					break;
				
				case 9:
					iLocal_1999 = 1;
					GlobalFunc_6715(&uLocal_2018);
					break;
				
				case 10:
					iLocal_2000 = 1;
					GlobalFunc_6715(&uLocal_2021);
					break;
				
				case 11:
					iLocal_2001 = 1;
					GlobalFunc_6715(&uLocal_2009);
					break;
				
				case 12:
					iLocal_2002 = 1;
					GlobalFunc_6715(&uLocal_2018);
					break;
				
				case 13:
					iLocal_2003 = 1;
					GlobalFunc_6715(&uLocal_2021);
					break;
				
				case 14:
					iLocal_2004 = 1;
					GlobalFunc_6715(&uLocal_2012);
					break;
				
				case 15:
					iLocal_2005 = 1;
					GlobalFunc_6715(&uLocal_2018);
					break;
				
				case 16:
					iLocal_2006 = 1;
					GlobalFunc_6715(&uLocal_2021);
					break;
				}
			}
	}
}

void func_86(var uParam0, int iParam1)//Position - 0x44AD
{
	switch (iParam1)
	{
		case 7:
			func_88(uParam0, 5f);
			break;
		
		case 0:
			break;
		
		case 1:
			func_87(uParam0, 1f);
			break;
		
		case 2:
			func_87(uParam0, 0f);
			break;
		
		case 5:
			func_87(uParam0, 1.5f);
			break;
		
		case 6:
			func_87(uParam0, 2f);
			break;
		
		case 3:
			func_87(uParam0, 2.5f);
			break;
		
		case 4:
			func_87(uParam0, 3f);
			break;
		
		case 8:
			func_87(uParam0, 4f);
			break;
		
		case 9:
			func_88(uParam0, 1.5f);
			break;
		
		case 10:
			func_88(uParam0, 5f);
			break;
		
		case 11:
			func_87(uParam0, 4f);
			break;
		
		case 12:
			func_88(uParam0, 1.5f);
			break;
		
		case 13:
			func_88(uParam0, 5f);
			break;
		
		case 14:
			func_87(uParam0, 4f);
			break;
		
		case 15:
			func_88(uParam0, 1.5f);
			break;
		
		case 16:
			func_88(uParam0, 5f);
			break;
	}
}

void func_87(var uParam0, float fParam1)//Position - 0x45D9
{
	uParam0->f_14 = fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}

void func_88(var uParam0, float fParam1)//Position - 0x45F4
{
	uParam0->f_14 = -fParam1;
	uParam0->f_15 = (uParam0->f_15 + uParam0->f_14);
}


void func_90(var uParam0, var uParam1)//Position - 0x4633
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	
	if (uParam0->f_6 != 0)
	{
		iVar4 = GlobalFunc_4622();
		if (uParam0->f_8 == 2 || uParam0->f_8 == 3)
		{
			iVar4 = 18;
		}
		else if (uParam0->f_8 == 1)
		{
			iVar4 = 9;
		}
		GlobalFunc_4449(GlobalFunc_6295(iVar4), &uVar0, &uVar1, &uVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam0->f_6, uVar0, uVar1, uVar2, GlobalFunc_2419(*uParam0, 25, 200));
	}
	if (uParam1->f_6 != 0)
	{
		iVar5 = GlobalFunc_4622();
		if (uParam1->f_8 == 2 || uParam1->f_8 == 3)
		{
			iVar5 = 18;
		}
		else if (uParam1->f_8 == 1)
		{
			iVar5 = 9;
		}
		GlobalFunc_4449(GlobalFunc_6295(iVar5), &uVar0, &uVar1, &uVar2, &uVar3);
		GRAPHICS::SET_CHECKPOINT_RGBA(uParam1->f_6, uVar0, uVar1, uVar2, GlobalFunc_2419(*uParam1, 25, 200));
	}
}



int func_93(var uParam0, var uParam1, var uParam2, int iParam3)//Position - 0x4772
{
	var uVar0;
	var uVar3;
	struct<3> Var6;
	var uVar9;
	int iVar12;
	
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9))
	{
		return -1;
	}
	iVar12 = func_100(uParam1, iParam3);
	if (Local_50 == 0)
	{
		if (iVar12 != 17)
		{
			if (iVar12 == 1)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!GlobalFunc_2951(iLocal_2319, 262144))
						{
							func_98("Gate_PK", &iLocal_2318);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 262144);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 524288))
						{
							func_98("Con_PK", &iLocal_2318);
							func_309(&iLocal_2319, 524288);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 1048576))
						{
							func_98("Con_PK", &iLocal_2318);
							func_309(&iLocal_2319, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2318);
							return iVar12;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 3;
						if (!GlobalFunc_2951(iLocal_2319, 262144))
						{
							func_98("Gate_PK", &iLocal_2318);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 262144);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 524288))
						{
							func_98("Con_PK", &iLocal_2318);
							func_309(&iLocal_2319, 524288);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 1048576))
						{
							func_98("Con_PK", &iLocal_2318);
							func_309(&iLocal_2319, 1048576);
							return iVar12;
						}
						else
						{
							func_98("Con_PK", &iLocal_2318);
							return iVar12;
						}
					}
				}
				else
				{
					ENTITY::GET_ENTITY_MATRIX(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &Var6, &uVar9);
					if (Var6.f_2 <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (uParam1->f_8 == 2)
							{
								iVar12 = 9;
								return iVar12;
							}
							if (uParam1->f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 4;
							if (!GlobalFunc_2951(iLocal_2319, 32768))
							{
								func_98("Gate_PI", &iLocal_2317);
								iLocal_2319 = 0;
								func_309(&iLocal_2319, 32768);
								return iVar12;
							}
							else if (!GlobalFunc_2951(iLocal_2319, 65536))
							{
								func_98("Con_PI", &iLocal_2317);
								func_309(&iLocal_2319, 65536);
								return iVar12;
							}
							else if (!GlobalFunc_2951(iLocal_2319, 131072))
							{
								func_98("Con_PI", &iLocal_2317);
								func_309(&iLocal_2319, 131072);
								return iVar12;
							}
							else
							{
								func_98("Con_PI", &iLocal_2317);
								return iVar12;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 1;
						if (!GlobalFunc_2951(iLocal_2319, 4096))
						{
							func_98("Get_Perf", &iLocal_2314);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 4096);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 8192))
						{
							func_98("Con_Perf", &iLocal_2314);
							func_309(&iLocal_2319, 8192);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 16384))
						{
							func_98("Con_Perf", &iLocal_2314);
							func_309(&iLocal_2319, 16384);
							return iVar12;
						}
						else
						{
							func_98("Con_Perf", &iLocal_2314);
							return iVar12;
						}
					}
				}
			}
			if (iVar12 == 2)
			{
				if (func_99(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 8;
							return iVar12;
						}
						if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!GlobalFunc_2951(iLocal_2319, 64))
						{
							func_98("Gate_Kni", &iLocal_2316);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 64);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 128))
						{
							func_98("Con_Kni", &iLocal_2316);
							func_309(&iLocal_2319, 128);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 256))
						{
							func_98("Con_Kni", &iLocal_2316);
							func_309(&iLocal_2319, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2316);
							return iVar12;
						}
					}
				}
				else if (func_97(uParam0->f_358[0 /*189*/].f_9))
				{
					if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 3)
						{
							iVar12 = 11;
							return iVar12;
						}
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 5;
						if (!GlobalFunc_2951(iLocal_2319, 64))
						{
							func_98("Gate_Kni", &iLocal_2316);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 64);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 128))
						{
							func_98("Con_Kni", &iLocal_2316);
							func_309(&iLocal_2319, 128);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 256))
						{
							func_98("Con_Kni", &iLocal_2316);
							func_309(&iLocal_2319, 256);
							return iVar12;
						}
						else
						{
							func_98("Con_Kni", &iLocal_2316);
							return iVar12;
						}
					}
				}
				else
				{
					ENTITY::GET_ENTITY_MATRIX(uParam0->f_358[0 /*189*/].f_9, &uVar0, &uVar3, &Var6, &uVar9);
					if (Var6.f_2 <= -0.866f)
					{
						if (uParam1->f_8 != 0)
						{
							if (uParam1->f_8 == 1)
							{
								iVar12 = 14;
								return iVar12;
							}
							if (uParam1->f_8 == 2)
							{
								iVar12 = 8;
								return iVar12;
							}
							if (uParam1->f_8 == 3)
							{
								iVar12 = 12;
								return iVar12;
							}
						}
						else
						{
							iVar12 = 6;
							if (!GlobalFunc_2951(iLocal_2319, 512))
							{
								func_98("Gate_Inv", &iLocal_2315);
								iLocal_2319 = 0;
								func_309(&iLocal_2319, 512);
								return iVar12;
							}
							else if (!GlobalFunc_2951(iLocal_2319, 1024))
							{
								func_98("Con_Inv", &iLocal_2315);
								func_309(&iLocal_2319, 1024);
								return iVar12;
							}
							else if (!GlobalFunc_2951(iLocal_2319, 2048))
							{
								func_98("Con_Inv", &iLocal_2315);
								func_309(&iLocal_2319, 2048);
								return iVar12;
							}
							else
							{
								func_98("Con_Inv", &iLocal_2315);
								return iVar12;
							}
						}
					}
					else if (uParam1->f_8 != 0)
					{
						if (uParam1->f_8 == 2)
						{
							iVar12 = 9;
							return iVar12;
						}
						else if (uParam1->f_8 == 3)
						{
							iVar12 = 12;
							return iVar12;
						}
						else if (uParam1->f_8 == 1)
						{
							iVar12 = 15;
							return iVar12;
						}
					}
					else
					{
						iVar12 = 2;
						if (!GlobalFunc_2951(iLocal_2319, 8))
						{
							func_98("Gate_Hit", &iLocal_2313);
							iLocal_2319 = 0;
							func_309(&iLocal_2319, 8);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 16))
						{
							func_98("Con_Hit", &iLocal_2313);
							func_309(&iLocal_2319, 16);
							return iVar12;
						}
						else if (!GlobalFunc_2951(iLocal_2319, 32))
						{
							func_98("Con_Hit", &iLocal_2313);
							func_309(&iLocal_2319, 32);
							return iVar12;
						}
						else
						{
							func_98("Con_Hit", &iLocal_2313);
							return iVar12;
						}
					}
				}
			}
			if (func_94(uParam1, uParam2, iParam3))
			{
				if (uParam1->f_8 != 0)
				{
					if (uParam1->f_8 == 2)
					{
						iVar12 = 10;
						return iVar12;
					}
					if (uParam1->f_8 == 3)
					{
						iVar12 = 13;
						return iVar12;
					}
					if (uParam1->f_8 == 1)
					{
						iVar12 = 16;
						return iVar12;
					}
				}
				else
				{
					iVar12 = 7;
					if (!GlobalFunc_2951(iLocal_2319, 1))
					{
						func_98("Gate_Miss", &iLocal_2312);
						iLocal_2319 = 0;
						func_309(&iLocal_2319, 1);
						return iVar12;
					}
					else if (!GlobalFunc_2951(iLocal_2319, 2))
					{
						func_98("Con_Miss", &iLocal_2312);
						func_309(&iLocal_2319, 2);
						return iVar12;
					}
					else if (!GlobalFunc_2951(iLocal_2319, 4))
					{
						func_98("Con_Miss", &iLocal_2312);
						func_309(&iLocal_2319, 4);
						return iVar12;
					}
					else
					{
						func_98("Con_Miss", &iLocal_2312);
						return iVar12;
					}
				}
			}
			return iVar12;
		}
		if (func_94(uParam1, uParam2, iParam3))
		{
			if (uParam1->f_8 != 0)
			{
				if (uParam1->f_8 == 2)
				{
					iVar12 = 10;
					return iVar12;
				}
				if (uParam1->f_8 == 3)
				{
					iVar12 = 13;
					return iVar12;
				}
				if (uParam1->f_8 == 1)
				{
					iVar12 = 16;
					return iVar12;
				}
			}
			else
			{
				iVar12 = 7;
				if (!GlobalFunc_2951(iLocal_2319, 1))
				{
					func_98("Gate_Miss", &iLocal_2312);
					iLocal_2319 = 0;
					func_309(&iLocal_2319, 1);
					return iVar12;
				}
				else if (!GlobalFunc_2951(iLocal_2319, 2))
				{
					func_98("Con_Miss", &iLocal_2312);
					func_309(&iLocal_2319, 2);
					return iVar12;
				}
				else if (!GlobalFunc_2951(iLocal_2319, 4))
				{
					func_98("Con_Miss", &iLocal_2312);
					func_309(&iLocal_2319, 4);
					return iVar12;
				}
				else
				{
					func_98("Con_Miss", &iLocal_2312);
					return iVar12;
				}
			}
			return iVar12;
		}
	}
	else if (iVar12 != 17)
	{
		return iVar12;
	}
	return -1;
}

int func_94(var uParam0, var uParam1, int iParam2)//Position - 0x50D6
{
	float fVar0;
	struct<3> Var1;
	
	if (!GlobalFunc_537(*uParam0, *uParam1, 1056964608))
	{
		fVar0 = (uParam0->f_3 * 5f);
		if (ENTITY::IS_ENTITY_AT_COORD(iParam2, *uParam0, fVar0, fVar0, fVar0, 0, 1, 0))
		{
			Var1 = { GlobalFunc_107(*uParam1 - *uParam0) };
			if ((GlobalFunc_168(ENTITY::GET_ENTITY_COORDS(iParam2, 1), Var1) - GlobalFunc_168(*uParam0, Var1)) > 15f)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_2304, "HUD_MINI_GAME_SOUNDSET", 1);
				return 1;
			}
		}
	}
	return 0;
}



bool func_97(int iParam0)//Position - 0x51B8
{
	var uVar0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (MISC::ABSF(Var6.f_2) > 0.342f)
	{
		return 0;
	}
	return Var3.f_2 < 0f;
}

void func_98(char* sParam0, var uParam1)//Position - 0x51F6
{
	char cVar0[16];
	
	StringCopy(&cVar0, "Gate_Miss", 16);
	if (!GlobalFunc_2951(*uParam1, 1))
	{
		if (!iLocal_1990)
		{
			iLocal_1990 = 1;
			func_309(uParam1, 1);
			return;
		}
		else
		{
			iLocal_1990 = 0;
			if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
			{
				GlobalFunc_164("SPR_FAIL_GATE", 7500, 0);
			}
			return;
		}
	}
	if (GlobalFunc_2951(*uParam1, 1))
	{
		if (!GlobalFunc_2951(*uParam1, 2))
		{
			if (!iLocal_1990)
			{
				iLocal_1990 = 1;
				func_309(uParam1, 2);
				return;
			}
			else
			{
				iLocal_1990 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					GlobalFunc_164("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (GlobalFunc_2951(*uParam1, 2))
	{
		if (!GlobalFunc_2951(*uParam1, 4))
		{
			if (!iLocal_1990)
			{
				iLocal_1990 = 1;
				func_309(uParam1, 4);
				return;
			}
			else
			{
				iLocal_1990 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					GlobalFunc_164("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (GlobalFunc_2951(*uParam1, 4))
	{
		if (!GlobalFunc_2951(*uParam1, 8))
		{
			if (!iLocal_1990)
			{
				iLocal_1990 = 1;
				func_309(uParam1, 8);
				return;
			}
			else
			{
				iLocal_1990 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					GlobalFunc_164("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
	if (GlobalFunc_2951(*uParam1, 8))
	{
		if (!GlobalFunc_2951(*uParam1, 16))
		{
			if (!iLocal_1990)
			{
				iLocal_1990 = 1;
				func_309(uParam1, 16);
				return;
			}
			else
			{
				iLocal_1990 = 0;
				if (MISC::ARE_STRINGS_EQUAL(sParam0, &cVar0))
				{
					GlobalFunc_164("SPR_FAIL_GATE", 7500, 0);
				}
				return;
			}
		}
	}
}

bool func_99(int iParam0)//Position - 0x5381
{
	var uVar0;
	struct<3> Var3;
	struct<3> Var6;
	var uVar9;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	ENTITY::GET_ENTITY_MATRIX(iParam0, &uVar0, &Var3, &Var6, &uVar9);
	if (MISC::ABSF(Var6.f_2) > 0.342f)
	{
		return 0;
	}
	return Var3.f_2 > 0f;
}

int func_100(var uParam0, int iParam1)//Position - 0x53BF
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	
	Var0 = { *uParam0 };
	ENTITY::GET_ENTITY_MATRIX(iParam1, &Var12, &Var6, &Var9, &Var3);
	Var15 = { Var0 - Var3 };
	fVar18 = MISC::ABSF(GlobalFunc_168(Var15, Var12));
	fVar19 = MISC::ABSF(GlobalFunc_168(Var15, Var9));
	fVar20 = MISC::ABSF(GlobalFunc_168(Var15, Var6));
	fVar21 = ((fVar19 * fVar19) + (fVar20 * fVar20));
	if (fVar18 > 6.5f)
	{
		return 17;
	}
	else
	{
		if (fVar21 > 900f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_7542(&uLocal_2262, 0);
			}
			return 17;
		}
		if (fVar21 > 110f)
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_7542(&uLocal_2262, 0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_2303, "HUD_MINI_GAME_SOUNDSET", 1);
			return 2;
		}
		else
		{
			if (iParam1 == PLAYER::PLAYER_PED_ID())
			{
				GlobalFunc_7542(&uLocal_2262, 0);
			}
			AUDIO::PLAY_SOUND_FRONTEND(-1, sLocal_2303, "HUD_MINI_GAME_SOUNDSET", 1);
			return 1;
		}
	}
	return -1;
}

void func_101(var uParam0, int iParam1)//Position - 0x54B2
{
	int iVar0;
	int iVar1;
	struct<189> Var2;
	float fVar191;
	float fVar192;
	
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	iVar0 = uParam0->f_13;
	Var2 = { uParam0->f_358[iParam1 /*189*/] };
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (Var2.f_8 != uParam0->f_358[iVar1 /*189*/].f_8)
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar1 /*189*/].f_8) && !ENTITY::IS_ENTITY_DEAD(Var2.f_8))
			{
				if (Var2.f_11 > uParam0->f_358[iVar1 /*189*/].f_11)
				{
					iVar0 = (iVar0 - 1);
				}
				else if (Var2.f_11 == uParam0->f_358[iVar1 /*189*/].f_11)
				{
					fVar191 = GlobalFunc_2264(Var2.f_8, uParam0->f_27[Var2.f_11 /*10*/], 1);
					fVar192 = GlobalFunc_2264(uParam0->f_358[iVar1 /*189*/].f_8, uParam0->f_27[uParam0->f_358[iVar1 /*189*/].f_11 /*10*/], 1);
					if (fVar191 < fVar192)
					{
						iVar0 = (iVar0 - 1);
					}
				}
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
		}
		iVar1++;
	}
	uParam0->f_358[iParam1 /*189*/].f_12 = iVar0;
}


void func_103(char* sParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x55E8
{
	if (GlobalFunc_2987(*iParam1, iParam2))
	{
		return;
	}
	if (!bParam3)
	{
		GlobalFunc_159(sParam0, -1);
	}
	else
	{
		GlobalFunc_Display_Help_Text(sParam0);
	}
	GlobalFunc_814(iParam1, iParam2);
}


int func_105(var uParam0, var uParam1, bool bParam2)//Position - 0x5633
{
	int iVar0;
	
	switch (uParam1->f_23)
	{
		case 0:
			func_161(uParam0);
			func_229();
			GlobalFunc_5210(&(Local_50.f_119), 0, 0, 1, 1);
			GlobalFunc_813(&(Local_50.f_119), "IB_RETRY", 2, 201, 1, 1, 0);
			GlobalFunc_813(&(Local_50.f_119), "FE_HLP16", 2, 202, 1, 1, 0);
			GlobalFunc_4653(1);
			AUDIO::TRIGGER_MUSIC_EVENT("MGSP_FAIL");
			uParam1->f_23 = 1;
			break;
		
		case 1:
			if (func_155(&(Local_50.f_297), &(Local_50.f_303), &(uParam0->f_17), cLocal_2274, sLocal_2275, uParam0, 78))
			{
				iLocal_2405 = 0;
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_358[0 /*189*/].f_9, 4);
				}
				if (GlobalFunc_4406("SPR_HELP_DAMG", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("SPR_HELP_DAMG");
				}
				uParam0->f_1 = 0;
				GlobalFunc_815(&(Local_50.f_297), 1);
				if (*uParam0)
				{
					func_148(0, 0);
					func_147(0, 0);
					func_146();
					if (GlobalFunc_4406("SPR_RETR_DES", 0, 0))
					{
						HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
					}
					GlobalFunc_4653(0);
					*uParam0 = 1;
					uParam1->f_23 = 6;
				}
				else
				{
					func_148(0, 0);
					func_147(0, 0);
					func_146();
					GlobalFunc_7258(&uLocal_2277, 10f);
					GlobalFunc_4653(0);
					*uParam0 = 0;
					uParam1->f_23 = 7;
				}
			}
			break;
		
		case 2:
			func_138(&(Local_50.f_119), 1128792064, 7, 1, 1, 1065353216);
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
			{
				func_148(0, 0);
				func_147(0, 0);
				func_146();
				iLocal_2410 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2410, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
				if (GlobalFunc_4406("SPR_RETR_DES", 0, 0))
				{
					HUD::CLEAR_THIS_PRINT("SPR_RETR_DES");
				}
				GlobalFunc_4653(0);
				*uParam0 = 1;
				uParam1->f_23 = 6;
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
			{
				func_148(0, 0);
				func_147(0, 0);
				func_146();
				iLocal_2410 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iLocal_2410, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
				GlobalFunc_7258(&uLocal_2277, 10f);
				GlobalFunc_4653(0);
				*uParam0 = 0;
				uParam1->f_23 = 7;
			}
			break;
		
		case 4:
			if (*uParam0 == 1)
			{
				uParam0->f_1 = 0;
			}
			if (uParam1->f_11 > 0)
			{
				uParam1->f_16 = { uParam0->f_27[uParam1->f_11 /*10*/] };
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					GlobalFunc_5210(&(Local_50.f_119), 0, 0, 1, 1);
					GlobalFunc_813(&(Local_50.f_119), "SPR_UI_CONT", 2, 201, 1, 1, 0);
					GlobalFunc_813(&(Local_50.f_119), "IB_NO", 2, 202, 1, 1, 0);
				}
			}
			if (bParam2)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, 0))
				{
					uParam1->f_23 = 5;
				}
			}
			else
			{
				uParam1->f_23 = 8;
			}
			break;
		
		case 5:
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_358[0 /*189*/].f_9, 4);
			}
			uParam0->f_1 = 0;
			if (GlobalFunc_4981(&uLocal_2277) <= 10f)
			{
				if (bParam2)
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
					func_138(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 201))
					{
						*uParam0 = 1;
						iLocal_2410 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2410, "Phone_Generic_Key_02", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(2, 202))
					{
						*uParam0 = 0;
						GlobalFunc_7258(&uLocal_2277, 10f);
						iLocal_2410 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_2410, "Phone_Generic_Key_03", "HUD_MINIGAME_SOUNDSET", 1);
						uParam1->f_23 = 6;
					}
				}
			}
			else
			{
				HUD::CLEAR_PRINTS();
				sLocal_2275 = "SPR_RETR_DES";
				GlobalFunc_815(&(Local_50.f_297), 1);
				uParam1->f_23 = 14;
			}
			break;
		
		case 6:
			if (GlobalFunc_4623(500))
			{
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				uParam1->f_23 = 8;
			}
			break;
		
		case 7:
			if (GlobalFunc_226(&(uParam0->f_3)))
			{
				GlobalFunc_235(&(uParam0->f_3));
			}
			if (func_122())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_161(uParam0);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0 /*189*/].f_9))
					{
						ENTITY::SET_ENTITY_VELOCITY(uParam0->f_358[0 /*189*/].f_9, 0f, 0f, 0f);
						ENTITY::SET_ENTITY_HEALTH(uParam0->f_358[0 /*189*/].f_9, ENTITY::GET_ENTITY_MAX_HEALTH(uParam0->f_358[0 /*189*/].f_9));
					}
					uParam1->f_23 = 10;
				}
			}
			break;
		
		case 8:
			if (func_120(uParam1, 1))
			{
				if (*uParam0)
				{
					uParam0->f_26 = 8;
				}
				else
				{
					if (bParam2)
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
						if (Local_50 == 0)
						{
							PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
						}
					}
					uParam1->f_23 = 9;
				}
			}
			break;
		
		case 9:
			iVar0 = 0;
			while (iVar0 < uParam0->f_13)
			{
				if (uParam0->f_358[iVar0 /*189*/].f_8 == uParam1->f_8)
				{
					func_118(uParam0, iVar0, 0);
				}
				iVar0++;
			}
			if (bParam2)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9) && uParam0->f_358[0 /*189*/].f_11 != -1)
				{
					func_117(uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/], uParam0->f_358[0 /*189*/].f_9, uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 /*10*/], uParam0->f_358[0 /*189*/].f_11 == 0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				GlobalFunc_6715(&uLocal_2401);
				uParam1->f_23 = 11;
			}
			else
			{
				uParam1->f_23 = 13;
			}
			break;
		
		case 10:
			func_148(0, 0);
			func_147(0, 0);
			func_110(uParam1, 1);
			func_9(uParam1, Local_50.f_3, Local_50.f_6, 0f);
			SYSTEM::SETTIMERA(0);
			uParam1->f_23 = 12;
			break;
		
		case 11:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || STREAMING::IS_NEW_LOAD_SCENE_LOADED())
			{
				uParam0->f_1 = 1;
				GlobalFunc_6715(&uLocal_2401);
				func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 0);
				if (GlobalFunc_4625(500))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[0 /*189*/].f_9))
					{
						PED::SET_PED_INTO_VEHICLE(uParam0->f_358[0 /*189*/].f_8, uParam0->f_358[0 /*189*/].f_9, -1);
					}
					if (bParam2 && Local_50 == 0)
					{
						func_88(&(uParam0->f_358[0 /*189*/]), 5f);
					}
					uParam1->f_23 = 13;
				}
				return 0;
			}
			else if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				if (uParam0->f_358[0 /*189*/].f_11 < uParam0->f_12)
				{
					if (GlobalFunc_226(&uLocal_2401))
					{
						if (GlobalFunc_4986(&uLocal_2401) >= 3f)
						{
							STREAMING::NEW_LOAD_SCENE_STOP();
						}
					}
					else
					{
						GlobalFunc_8389(&uLocal_2401);
					}
				}
			}
			break;
		
		case 12:
			uParam0->f_26 = 8;
			return 0;
			break;
		
		case 13:
			if (uParam1->f_22 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam1->f_8))
				{
					if (func_106(uParam1))
					{
						GlobalFunc_6715(&uLocal_2277);
						sLocal_2275 = "SPR_RETR_STUK";
						uParam1->f_23 = 0;
						return 1;
					}
				}
			}
			return 0;
		
		case 14:
			func_161(uParam0);
			GlobalFunc_235(&(uParam0->f_3));
			uParam0->f_26 = 8;
			break;
	}
	return 1;
}

int func_106(var uParam0)//Position - 0x5CFF
{
	if (uParam0->f_22 != 0)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_9, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(uParam0->f_9) <= 15f)
				{
					if (uParam0->f_22 == joaat("stunt"))
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) < 3f || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_9))
						{
							if (ENTITY::IS_ENTITY_UPSIDEDOWN(uParam0->f_9) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(uParam0->f_9) < 1f)
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 0, 1000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 1, 1000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 2, 10000))
							{
								return 1;
							}
							if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_9, 3, 10000))
							{
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


void func_108(var uParam0, float fParam1, bool bParam2)//Position - 0x5E0A
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_22))
		{
			Var0 = { ENTITY::GET_ENTITY_ROTATION(uParam0->f_9, 2) };
			GlobalFunc_4654(uParam0->f_9, fParam1, bParam2, Var0.x, 0);
		}
	}
}


int func_110(var uParam0, bool bParam1)//Position - 0x5F76
{
	char cVar0[16];
	
	if (bParam1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9) || !VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_9, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 1);
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
				}
			}
			else
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
				}
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
				}
				else
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 1);
					VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
				}
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_9, 1000);
		VEHICLE::SET_VEHICLE_FIXED(uParam0->f_9);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_9, 1000f);
		ENTITY::SET_ENTITY_COORDS(uParam0->f_9, uParam0->f_16, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_9, uParam0->f_19);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uParam0->f_9);
	}
	else
	{
		if (uParam0->f_22 == 0)
		{
			return 1;
		}
		uParam0->f_9 = VEHICLE::CREATE_VEHICLE(joaat("stunt"), uParam0->f_16, uParam0->f_19, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 4);
		}
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_9, 1);
		GlobalFunc_6952(uParam0->f_9, &(Local_50.f_243), 0, 1);
	}
	AUDIO::ENABLE_STALL_WARNING_SOUNDS(uParam0->f_9, 0);
	VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, 1, 1);
	VEHICLE::SET_HELI_BLADES_FULL_SPEED(uParam0->f_9);
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
	{
		if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
		{
			PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
		}
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_9))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_9, 1, 0);
	}
	MemCopy(&cVar0, {*uParam0}, 4);
	StringConCat(&cVar0, "_Veh", 16);
	VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_9, &cVar0);
	if (uParam0->f_20 <= 3)
	{
		VEHICLE::_0xC50CE861B55EAB8B(uParam0->f_9, 0);
		Local_50.f_1 = uParam0->f_9;
	}
	return 1;
}







void func_117(struct<3> Param0, int iParam3, struct<3> Param4, bool bParam7)//Position - 0x6871
{
	var uVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	float fVar11;
	struct<3> Var12;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		if (bParam7 && Local_50.f_10 == 0)
		{
			ENTITY::SET_ENTITY_COORDS(iParam3, 1705.039f, 3251.13f, 40.0016f, 1, 0, 0, 1);
		}
		Var12 = { ENTITY::GET_ENTITY_COORDS(iParam3, 1) };
		STREAMING::REQUEST_COLLISION_AT_COORD(Var12);
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var12, &fVar11);
		Var5 = { ENTITY::GET_ENTITY_COORDS(iParam3, 1) };
		if (bParam7)
		{
			Var8 = { Param0 - Param4 };
		}
		else
		{
			Var8 = { Param4 - Var5 };
		}
		uVar0 = MISC::GET_HEADING_FROM_VECTOR_2D(Var8.x, Var8.f_1);
		fVar1 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var8.x, Var8.f_2) - 270f);
		while (fVar1 > 180f)
		{
			fVar1 = (fVar1 - 360f);
		}
		while (fVar1 < -180f)
		{
			fVar1 = (fVar1 + 360f);
		}
		if (fVar1 < -90f)
		{
			fVar1 = -(180f - MISC::ABSF(fVar1));
		}
		if (fVar1 > 90f)
		{
			fVar1 = (180f - MISC::ABSF(fVar1));
		}
		if (MISC::ABSF((Var12.f_2 - fVar11)) < 25f && (fVar1 > 15f || fVar1 < -15f))
		{
			Var12.f_2 = (fVar11 + 25f);
			ENTITY::SET_ENTITY_COORDS(iParam3, Var12, 1, 0, 0, 1);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iParam3, 1);
		Var2 = { ENTITY::GET_ENTITY_ROTATION(iParam3, 2) };
		Var2.x = fVar1;
		Var2.f_2 = uVar0;
		ENTITY::SET_ENTITY_ROTATION(iParam3, Var2, 2, 1);
		ENTITY::FREEZE_ENTITY_POSITION(iParam3, 0);
		STREAMING::NEW_LOAD_SCENE_START(Var12, ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3), 500f, 0);
	}
}

void func_118(var uParam0, int iParam1, bool bParam2)//Position - 0x6A05
{
	func_119(uParam0, iParam1, (uParam0->f_358[iParam1 /*189*/].f_11 - 1), bParam2);
}

void func_119(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x6A24
{
	struct<3> Var0;
	var uVar3;
	float fVar4;
	
	if (iParam2 < 0 || iParam2 > (uParam0->f_12 - 1))
	{
		return;
	}
	if (iParam1 < 0 || iParam1 > (uParam0->f_13 - 1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_8))
	{
		return;
	}
	if (uParam0->f_358[iParam1 /*189*/].f_22 != 0)
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iParam1 /*189*/].f_9))
		{
			return;
		}
	}
	Var0 = { uParam0->f_27[iParam2 + 1 /*10*/] - uParam0->f_27[iParam2 /*10*/] };
	uVar3 = MISC::GET_HEADING_FROM_VECTOR_2D(Var0.x, Var0.f_1);
	fVar4 = 0f;
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 0f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_CAR(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 25f;
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam0->f_358[iParam1 /*189*/].f_22))
	{
		fVar4 = 60f;
	}
	if (bParam3)
	{
	}
	func_9(&(uParam0->f_358[iParam1 /*189*/]), uParam0->f_27[iParam2 /*10*/], uVar3, fVar4);
}

int func_120(var uParam0, bool bParam1)//Position - 0x6B2E
{
	if (!func_110(uParam0, bParam1) || !func_121(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_121(var uParam0)//Position - 0x6B54
{
	char cVar0[16];
	
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
	{
		ENTITY::SET_ENTITY_HEALTH(uParam0->f_8, 1000);
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
		{
			if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_8, uParam0->f_9))
			{
				PED::SET_PED_INTO_VEHICLE(uParam0->f_8, uParam0->f_9, -1);
			}
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(uParam0->f_8, uParam0->f_16, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(uParam0->f_8, uParam0->f_19);
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		uParam0->f_8 = PED::CREATE_PED_INSIDE_VEHICLE(uParam0->f_9, uParam0->f_20, uParam0->f_21, -1, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			return 0;
		}
	}
	else
	{
		uParam0->f_8 = PED::CREATE_PED(uParam0->f_20, uParam0->f_21, uParam0->f_16, uParam0->f_19, 1, 1);
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			return 0;
		}
	}
	if (uParam0->f_20 > 3)
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_8))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_8, 1, 0);
		}
		MemCopy(&cVar0, {*uParam0}, 4);
		StringConCat(&cVar0, "_Drv", 16);
		PED::SET_PED_NAME_DEBUG(uParam0->f_8, &cVar0);
	}
	return 1;
}

int func_122()//Position - 0x6C68
{
	if (!MISC::IS_BIT_SET(iLocal_42, 0) && !MISC::IS_BIT_SET(iLocal_42, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_148(1, 0);
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
		if (!MISC::IS_BIT_SET(iLocal_42, 1))
		{
			func_147(1, 0);
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
			else if (iLocal_43 == 0)
			{
				iLocal_43 = MISC::GET_GAME_TIMER() + 1000;
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				}
				func_137(0, 2, 1);
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
				func_148(0, 0);
				func_123(0);
			}
			else if (MISC::GET_GAME_TIMER() < iLocal_43)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_123(int iParam0)//Position - 0x6DAC
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!MISC::IS_BIT_SET(iLocal_42, 3))
			{
				MISC::SET_GAME_PAUSED(1);
				MISC::SET_BIT(&iLocal_42, 3);
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_42, 3))
		{
			MISC::SET_GAME_PAUSED(0);
			MISC::CLEAR_BIT(&iLocal_42, 3);
		}
	}
}














void func_137(int iParam0, int iParam1, int iParam2)//Position - 0x71E7
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&iLocal_42, 2);
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
		if (MISC::IS_BIT_SET(iLocal_42, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		MISC::CLEAR_BIT(&iLocal_42, 2);
	}
}

void func_138(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x7248
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
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!GlobalFunc_747(uParam0->f_1, 256) || (GlobalFunc_747(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam5);
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
							GlobalFunc_257(sVar3);
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








void func_146()//Position - 0x759B
{
	iLocal_42 = 0;
	iLocal_43 = 0;
	GlobalFunc_8316(0, 1, 1, 0);
	GlobalFunc_7632(1);
}

void func_147(int iParam0, int iParam1)//Position - 0x75B6
{
	if (iParam0 == 1)
	{
		func_148(0, 0);
		GRAPHICS::ANIMPOSTFX_PLAY("DeathFailOut", 0, 0);
		MISC::SET_BIT(&iLocal_42, 1);
		func_137(1, 2, 0);
		CAM::_SET_CAM_EFFECT(2);
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_42, 1) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP("DeathFailOut");
			func_137(0, 2, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_42, 1);
	}
}

void func_148(int iParam0, int iParam1)//Position - 0x7617
{
	char* sVar0;
	
	switch (GlobalFunc_8315())
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
		if (!MISC::IS_BIT_SET(iLocal_42, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_PLAY(sVar0, 0, 0);
			MISC::SET_BIT(&iLocal_42, 0);
			func_137(1, 1, 0);
			CAM::_SET_CAM_EFFECT(1);
		}
	}
	else
	{
		if (MISC::IS_BIT_SET(iLocal_42, 0) || iParam1)
		{
			GRAPHICS::ANIMPOSTFX_STOP(sVar0);
			func_137(0, 1, 1);
			CAM::_SET_CAM_EFFECT(0);
		}
		MISC::CLEAR_BIT(&iLocal_42, 0);
	}
}







int func_155(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, var uParam5, int iParam6)//Position - 0x784E
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", 1);
			GlobalFunc_8389(&(uParam0->f_1));
			func_146();
			GlobalFunc_5212(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			break;
		
		case 1:
			if (func_122() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!GlobalFunc_2951(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", 1);
					func_309(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!GlobalFunc_2951(uParam0->f_4, 2))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", 1);
					func_309(&(uParam0->f_4), 2);
				}
				func_157(uParam2, uParam1, sParam3, sParam4, uParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_157(uParam2, uParam1, sParam3, sParam4, uParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_148(0, 1);
				func_147(0, 1);
				func_146();
				if (*uParam5)
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
				func_148(0, 1);
				func_147(0, 1);
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


int func_157(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x7A54
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
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
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
				switch (GlobalFunc_8315())
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
				func_138(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
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




void func_161(var uParam0)//Position - 0x7F37
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_78(uParam0, iVar0);
		iVar0++;
	}
}

void func_162(int iParam0, bool bParam1)//Position - 0x7F5C
{
	switch (iLocal_1989)
	{
		case 0:
			func_25();
			func_179();
			func_175();
			iLocal_1989 = 1;
			break;
		
		case 1:
			if (func_174())
			{
				iLocal_1989 = 2;
			}
			break;
		
		case 2:
			func_163(iParam0);
			break;
		
		case 3:
			if (bParam1)
			{
				iLocal_1989 = 0;
			}
			break;
	}
}

void func_163(int iParam0)//Position - 0x7FBA
{
	switch (Local_50.f_10)
	{
		case 3:
			func_173(iParam0);
			func_172(iParam0);
			break;
		
		case 0:
			func_171(iParam0);
			func_170(iParam0);
			break;
		
		case 1:
			func_169(iParam0);
			func_167(iParam0);
			break;
		
		case 2:
			func_166(iParam0);
			func_165(iParam0);
			break;
		
		case 4:
			func_164(iParam0);
			break;
	}
}

void func_164(int iParam0)//Position - 0x8031
{
	if (iParam0 == 5)
	{
		if (!GlobalFunc_2951(uLocal_2080, 1))
		{
			func_309(&uLocal_2080, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!GlobalFunc_2951(uLocal_2080, 2))
		{
			func_309(&uLocal_2080, 2);
		}
	}
}

void func_165(int iParam0)//Position - 0x806E
{
	if (iParam0 >= 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2058[0]) && !GlobalFunc_2951(uLocal_2070, 1))
		{
			uLocal_2058[0] = VEHICLE::CREATE_VEHICLE(joaat("hauler"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1);
			uLocal_2058[1] = VEHICLE::CREATE_VEHICLE(joaat("tanker"), -449.6041f, -2271.693f, 6.6086f, 267.5199f, 1, 1);
			VEHICLE::ATTACH_VEHICLE_TO_TRAILER(uLocal_2058[0], uLocal_2058[1], 1065353216);
			uLocal_2064[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_2058[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			func_309(&uLocal_2070, 1);
		}
		if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("SPR_Fluff_01"))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2058[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_2064[0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_2064[0], -235832601) == 1)
				{
				}
				else
				{
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_2064[0], uLocal_2058[0], "SPR_Fluff_01", 786469, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uLocal_2058[0]), 0, 1073741824);
				}
			}
		}
	}
}

void func_166(int iParam0)//Position - 0x8186
{
	if (iParam0 == 4)
	{
		if (!GlobalFunc_2951(uLocal_2080, 1))
		{
			func_309(&uLocal_2080, 1);
		}
	}
	if (iParam0 == 8)
	{
		if (!GlobalFunc_2951(uLocal_2080, 2))
		{
			func_309(&uLocal_2080, 2);
		}
	}
}

void func_167(int iParam0)//Position - 0x81C3
{
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2058[0]))
		{
			if (!GlobalFunc_2951(uLocal_2070, 1))
			{
				if (func_168(&iLocal_2052))
				{
					uLocal_2058[0] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), -2586.901f, 386.4225f, 208.0505f, 349.0836f, 1, 1);
					func_309(&uLocal_2070, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2058[0]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2064[0]))
			{
				if (!GlobalFunc_2951(uLocal_2070, 2))
				{
					uLocal_2064[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_2058[0], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_309(&uLocal_2070, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2058[0]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_2064[0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2058[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_2064[0]))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_2058[0], -2530.873f, 608.701f, 238.9111f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_2064[0], -1817882002) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_2064[0], uLocal_2058[0], -2530.873f, 608.701f, 238.9111f, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uLocal_2058[0]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
	if (iParam0 >= 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2058[1]))
		{
			if (!GlobalFunc_2951(uLocal_2071, 1))
			{
				if (func_168(&iLocal_2052))
				{
					uLocal_2058[1] = VEHICLE::CREATE_VEHICLE(joaat("sanchez"), -2582.93f, 384.918f, 208.5764f, 336.8248f, 1, 1);
					func_309(&uLocal_2071, 1);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_2058[1]))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2064[1]))
			{
				if (!GlobalFunc_2951(uLocal_2071, 2))
				{
					uLocal_2064[1] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_2058[1], 4, joaat("a_m_y_motox_01"), -1, 1, 1);
					func_309(&uLocal_2071, 2);
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2058[1]) && !ENTITY::DOES_ENTITY_EXIST(uLocal_2064[1]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2058[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_2064[1]))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_2058[1], -2527.712f, 609.6833f, 239.2568f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_2064[1], -1817882002) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_2064[1], uLocal_2058[1], -2527.712f, 609.6833f, 239.2568f, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uLocal_2058[1]), 0, 0, 262144, -1f, -1f);
					}
				}
			}
		}
	}
}

int func_168(int iParam0)//Position - 0x8461
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_169(int iParam0)//Position - 0x84A8
{
	if (iParam0 == 9)
	{
		if (!GlobalFunc_2951(uLocal_2080, 1))
		{
			func_309(&uLocal_2080, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!GlobalFunc_2951(uLocal_2080, 2))
		{
			func_309(&uLocal_2080, 2);
		}
	}
}

void func_170(int iParam0)//Position - 0x84E6
{
	if (iParam0 == 6)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2058[0]) && !GlobalFunc_2951(uLocal_2070, 1))
		{
			uLocal_2058[0] = VEHICLE::CREATE_VEHICLE(joaat("jetmax"), -1429.102f, 2602.645f, -1.0709f, 85.2614f, 1, 1);
			uLocal_2064[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_2058[0], 4, joaat("s_m_m_dockwork_01"), -1, 1, 1);
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2058[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_2064[0]))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_2058[0], -1552.281f, 2641.609f, -0.8283f, 3f, 3f, 3f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_2064[0], -1273030092) == 1)
					{
					}
					else
					{
						TASK::TASK_VEHICLE_MISSION_COORS_TARGET(uLocal_2064[0], uLocal_2058[0], -1552.281f, 2641.609f, -0.8283f, 4, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uLocal_2058[0]), 262144, 3f, -1f, 1);
					}
				}
			}
			func_309(&uLocal_2070, 1);
		}
	}
	else if (iParam0 == 12)
	{
		if (GlobalFunc_2951(uLocal_2070, 1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2064[0]))
			{
				PED::DELETE_PED(&(uLocal_2064[0]));
			}
			if (!ENTITY::IS_ENTITY_DEAD(uLocal_2058[0]))
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_2058[0]));
			}
		}
	}
}

void func_171(int iParam0)//Position - 0x8626
{
	if (iParam0 == 7)
	{
		if (!GlobalFunc_2951(uLocal_2080, 1))
		{
			func_309(&uLocal_2080, 1);
		}
	}
	if (iParam0 == 11)
	{
		if (!GlobalFunc_2951(uLocal_2080, 2))
		{
			func_309(&uLocal_2080, 2);
		}
	}
}

void func_172(int iParam0)//Position - 0x8663
{
	if (!GlobalFunc_2951(uLocal_2070, 1))
	{
		if (iParam0 < 3)
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "SPRStuntAF"))
			{
				STREAMING::REQUEST_COLLISION_AT_COORD(-943.8105f, -3173.692f, 12.9445f);
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_2058[0]))
				{
					uLocal_2058[0] = VEHICLE::CREATE_VEHICLE(joaat("jet"), -943.8105f, -3173.692f, 12.9445f, 60.537f, 1, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_2058[0]);
					VEHICLE::SET_VEHICLE_ENGINE_ON(uLocal_2058[0], 1, 1);
					if (Local_50 == 0)
					{
						VEHICLE::SET_HELI_BLADES_FULL_SPEED(uLocal_2058[0]);
					}
					uLocal_2064[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_2058[0], 4, joaat("s_m_m_highsec_01"), -1, 1, 1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_2058[0]))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(uLocal_2058[0], -943.8105f, -3173.692f, 12.9445f, 20f, 20f, 20f, 0, 1, 0))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2058[0]))
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_2058[0], 101, "SPRStuntAF", 1);
						}
					}
					else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2058[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uLocal_2064[0]))
						{
							if (!TASK::GET_SCRIPT_TASK_STATUS(uLocal_2064[0], -1817882002) == 1)
							{
								TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_2064[0], uLocal_2058[0], -6793.876f, -557.0385f, 781.0172f, 50f, 0, joaat("jet"), 262144, -1f, -1f);
							}
						}
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(uLocal_2058[0]))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_2058[0]))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uLocal_2058[0]);
			}
			else
			{
				VEHICLE::DELETE_VEHICLE(&(uLocal_2058[0]));
				func_309(&uLocal_2070, 1);
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_DEAD(uLocal_2058[0]))
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(ENTITY::GET_ENTITY_COORDS(uLocal_2058[0], 1));
	}
}

void func_173(int iParam0)//Position - 0x882C
{
	if (iParam0 == 6)
	{
		if (!GlobalFunc_2951(uLocal_2080, 1))
		{
			func_309(&uLocal_2080, 1);
		}
	}
	if (iParam0 == 12)
	{
		if (!GlobalFunc_2951(uLocal_2080, 2))
		{
			func_309(&uLocal_2080, 2);
		}
	}
}

int func_174()//Position - 0x8869
{
	switch (Local_50.f_10)
	{
		case 3:
			if (func_168(&iLocal_2052) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(101, "SPRStuntAF"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 0:
			if (func_168(&iLocal_2052))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (func_168(&iLocal_2052))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_168(&iLocal_2052) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("SPR_Fluff_01"))
			{
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			break;
	}
	return 1;
}

void func_175()//Position - 0x8918
{
	switch (Local_50.f_10)
	{
		case 3:
			func_177(&iLocal_2052, joaat("jet"));
			func_177(&iLocal_2052, joaat("s_m_m_highsec_01"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(101, "SPRStuntAF");
			break;
		
		case 0:
			func_177(&iLocal_2052, joaat("jetmax"));
			func_177(&iLocal_2052, joaat("s_m_m_dockwork_01"));
			break;
		
		case 1:
			func_177(&iLocal_2052, joaat("sanchez"));
			func_177(&iLocal_2052, joaat("a_m_y_motox_01"));
			break;
		
		case 2:
			func_177(&iLocal_2052, joaat("hauler"));
			func_177(&iLocal_2052, joaat("tanker"));
			func_177(&iLocal_2052, joaat("s_m_m_dockwork_01"));
			TASK::REQUEST_WAYPOINT_RECORDING("SPR_Fluff_01");
			break;
		
		case 4:
			break;
	}
	func_176(&iLocal_2052);
}

void func_176(int iParam0)//Position - 0x89E4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*iParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_177(int iParam0, int iParam1)//Position - 0x8A14
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if ((*iParam0)[iVar0] != 0)
		{
			if ((*iParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = GlobalFunc_1091(iParam0);
	if (iVar1 < 0 || iVar1 >= *iParam0)
	{
		return 0;
	}
	(*iParam0)[iVar1] = iParam1;
	return 1;
}


void func_179()//Position - 0x8A9D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (GlobalFunc_2951(uLocal_2080, iVar0))
		{
			GlobalFunc_6533(&uLocal_2080, iVar0);
		}
		iVar0++;
	}
}




void func_183(var uParam0)//Position - 0x8BCD
{
	float fVar0;
	
	if (uParam0->f_358[0 /*189*/].f_11 >= (uParam0->f_12 - 2))
	{
		fVar0 = SYSTEM::VDIST(uParam0->f_27[(uParam0->f_12 - 2) /*10*/], func_184());
		if (!STREAMING::STREAMVOL_IS_VALID(uLocal_2302))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_184()) <= ((fVar0 * 1.5f) * (fVar0 * 1.5f)))
			{
				uLocal_2302 = STREAMING::STREAMVOL_CREATE_FRUSTUM(func_184(), uParam0->f_27[(uParam0->f_12 - 1) /*10*/] - func_184(), 2000f, 12, 127);
			}
		}
		else if (!SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), func_184()) <= ((fVar0 * 2f) * (fVar0 * 2f)))
		{
			func_229();
		}
	}
}

Vector3 func_184()//Position - 0x8C7D
{
	switch (Local_50.f_10)
	{
		case 0:
			return -2591.965f, 2483.167f, 60.8904f;
			break;
		
		case 1:
			return 1827.956f, 585.8948f, 287.6289f;
			break;
		
		case 2:
			return 991.1072f, -2389.983f, 83.3701f;
			break;
		
		case 3:
			return -1721.049f, -2792.948f, 75.4149f;
			break;
		
		case 4:
			return -578.6125f, 5436.721f, 150.1292f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_185(var uParam0)//Position - 0x8D18
{
	if (GlobalFunc_4624())
	{
		if (!Local_2289)
		{
			Local_2289 = 1;
			Local_2289.f_1 = 1;
		}
		else
		{
			Local_2289.f_1 = 0;
		}
	}
	else if (func_210())
	{
		if (!Local_2289.f_1 || func_209() >= 1f)
		{
			if (Local_2289)
			{
				Local_2289 = 0;
			}
		}
	}
	if (func_210())
	{
		func_208();
	}
	else
	{
		func_207();
	}
	if (Local_2289)
	{
		if (!GlobalFunc_105(Local_2289.f_2) && !func_204(Local_2289.f_2))
		{
			func_187(&uLocal_2262, Local_2289.f_2);
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(Local_2289.f_6))
			{
				CAM::DESTROY_CAM(Local_2289.f_6, 0);
			}
			if (func_204(Local_2289.f_2))
			{
				Local_2289.f_2 = { func_186(uParam0) };
			}
			GlobalFunc_7542(&uLocal_2262, 0);
			Local_2289 = 0;
		}
	}
	else if (CAM::DOES_CAM_EXIST(Local_2289.f_6))
	{
		CAM::DESTROY_CAM(Local_2289.f_6, 0);
	}
	else
	{
		if (func_204(Local_2289.f_2))
		{
			Local_2289.f_2 = { func_186(uParam0) };
		}
		GlobalFunc_7542(&uLocal_2262, 0);
		Local_2289 = 0;
	}
}

Vector3 func_186(var uParam0)//Position - 0x8E33
{
	if (uParam0->f_358[0 /*189*/].f_11 < (Local_50.f_11 - 1))
	{
		return uParam0->f_27[uParam0->f_358[0 /*189*/].f_11 + 1 /*10*/];
	}
	return 0f, 0f, 0f;
}

void func_187(var uParam0, struct<3> Param1)//Position - 0x8E68
{
	func_188(uParam0, Param1, 0, 0, 1, 1, 1);
}

void func_188(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x8E7F
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		GlobalFunc_6531(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_189(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_189(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)//Position - 0x8EB5
{
	int iVar0;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
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
	if (GlobalFunc_74(iVar0))
	{
		GlobalFunc_163();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_198(uParam0, bParam6, bParam8, 0))
		{
			func_197(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (GlobalFunc_6696(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
					{
						if (!GlobalFunc_74(iVar0))
						{
							GlobalFunc_159(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								GlobalFunc_158(1);
							}
						}
					}
				}
			}
		}
		else if (GlobalFunc_6696(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
				{
					if (!GlobalFunc_74(iVar0))
					{
						GlobalFunc_159(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							GlobalFunc_158(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (GlobalFunc_74(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
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
					GlobalFunc_6531(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					GlobalFunc_6531(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					GlobalFunc_6531(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					GlobalFunc_6531(uParam0, iVar0, 1);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					GlobalFunc_6531(uParam0, iVar0, 1);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				GlobalFunc_6531(uParam0, iVar0, 1);
			}
		}
		if (!func_198(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !GlobalFunc_157(uParam0))
			{
				func_190(uParam0);
			}
		}
	}
}

void func_190(var uParam0)//Position - 0x918F
{
	if (GlobalFunc_162(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
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







void func_197(var uParam0, struct<3> Param1, int iParam4)//Position - 0x9552
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_198(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x95EE
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
					if (func_202(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (GlobalFunc_6700(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (GlobalFunc_6700(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_202(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (GlobalFunc_157(uParam0))
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
						if (!func_202(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!GlobalFunc_6700(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!GlobalFunc_6700(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_202(bParam1, bParam2, bParam3))
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
					if (!func_202(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!GlobalFunc_6700(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!GlobalFunc_6700(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
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
				else if (!func_202(bParam1, bParam2, bParam3))
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
						if (func_200(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (GlobalFunc_6698(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || GlobalFunc_6698(bParam1, bParam2, bParam3))
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
					else if (func_200(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!GlobalFunc_157(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!GlobalFunc_4953(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		GlobalFunc_163();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}


int func_200(bool bParam0, bool bParam1, bool bParam2)//Position - 0x99AC
{
	if (!GlobalFunc_4953(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}


int func_202(bool bParam0, bool bParam1, bool bParam2)//Position - 0x9A54
{
	if (!GlobalFunc_4953(bParam0, bParam1, bParam2))
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
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}


int func_204(struct<3> Param0)//Position - 0x9ABA
{
	float fVar0;
	
	fVar0 = ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID());
	if (SYSTEM::VDIST2(Param0, GlobalFunc_271(PLAYER::PLAYER_ID())) < (150f + (fVar0 * fVar0)))
	{
		return 1;
	}
	return 0;
}



void func_207()//Position - 0x9B2D
{
	Local_2289.f_5 = 0f;
}

void func_208()//Position - 0x9B3B
{
	Local_2289.f_5 = (Local_2289.f_5 + MISC::GET_FRAME_TIME());
}

float func_209()//Position - 0x9B52
{
	return Local_2289.f_5;
}

bool func_210()//Position - 0x9B5F
{
	return PAD::IS_CONTROL_JUST_RELEASED(0, 80);
}


void func_212(struct<3> Param0)//Position - 0x9B7D
{
	GlobalFunc_7542(&uLocal_2262, 0);
	Local_2289.f_2 = { Param0 };
}



int func_215(var uParam0, bool bParam1, bool bParam2)//Position - 0x9BC4
{
	PAD::STOP_PAD_SHAKE(0);
	switch (iLocal_1988)
	{
		case 0:
			iLocal_504 = 0;
			Local_2254 = { func_184() };
			Local_2257 = { func_228() };
			fLocal_2260 = func_227();
			HUD::DISPLAY_RADAR(0);
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			iLocal_1988 = 1;
			break;
		
		case 1:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (GlobalFunc_8315() == 0)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndMichael", 0, 0);
				}
				else if (GlobalFunc_8315() == 1)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndFranklin", 0, 0);
				}
				else if (GlobalFunc_8315() == 2)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("MinigameEndTrevor", 0, 0);
				}
				uLocal_2046 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_2254, Local_2257, fLocal_2260, 1, 2);
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (bParam2)
				{
					CAM::SHAKE_CAM(uLocal_2046, "HAND_SHAKE", 0.07f);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, 0) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_358[0 /*189*/].f_9))
				{
					TASK::TASK_VEHICLE_MISSION_COORS_TARGET(PLAYER::PLAYER_PED_ID(), uParam0->f_358[0 /*189*/].f_9, Local_2254.x, Local_2254.f_1, (Local_2254.f_2 + 15f), 4, ENTITY::GET_ENTITY_SPEED(uParam0->f_358[0 /*189*/].f_9), 262144, 10f, 10f, 1);
				}
				CAM::POINT_CAM_AT_COORD(uLocal_2046, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1));
				iLocal_1988 = 2;
			}
			break;
		
		case 2:
			CAM::STOP_CAM_POINTING(uLocal_2046);
			func_226(uLocal_2046);
			GlobalFunc_8389(&uLocal_2042);
			iLocal_1988 = 3;
			break;
		
		case 3:
			if (GlobalFunc_7944(&uLocal_2042, fLocal_2261))
			{
				GlobalFunc_8389(&uLocal_2042);
				func_226(uLocal_2046);
				iLocal_1988 = 4;
			}
			break;
		
		case 4:
			if (bParam1)
			{
				if (ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_358[0 /*189*/].f_9) && ENTITY::IS_ENTITY_IN_AIR(uParam0->f_358[0 /*189*/].f_9))
				{
					Local_2251 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_358[0 /*189*/].f_9, 1) };
					GlobalFunc_8389(&uLocal_2042);
				}
				func_222(uLocal_2046, Local_2251);
			}
			if (GlobalFunc_4986(&uLocal_2042) >= 1f)
			{
				iLocal_1988 = 5;
			}
			break;
		
		case 5:
			GlobalFunc_6715(&uLocal_2042);
			if (CAM::DOES_CAM_EXIST(uLocal_2045))
			{
				CAM::DESTROY_CAM(uLocal_2045, 0);
			}
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, 1);
			CAM::STOP_CAM_SHAKING(uLocal_2046, 0);
			Local_2254 = { CAM::GET_CAM_COORD(uLocal_2046) };
			Local_2257 = { CAM::GET_CAM_ROT(uLocal_2046, 2) };
			uLocal_2045 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_2254.x, Local_2254.f_1, (Local_2254.f_2 + 1000f), 90f, Local_2257.f_1, Local_2257.f_2, fLocal_2260, 0, 2);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_2045, uLocal_2046, 500, 1, 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "QUIT_WHOOSH", "HUD_MINI_GAME_SOUNDSET", 1);
			iLocal_1988 = 6;
			break;
		
		case 6:
			if (!CAM::IS_CAM_INTERPOLATING(uLocal_2045) && !CAM::IS_CAM_INTERPOLATING(uLocal_2046))
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_106[Local_50.f_10])
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_GOLD", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_50.f_106[Local_50.f_10] - Local_50.f_112[Local_50.f_10]) / 2f) + Local_50.f_112[Local_50.f_10]))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_SILVER", "HUD_AWARDS", 1);
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_112[Local_50.f_10])
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "MEDAL_BRONZE", "HUD_AWARDS", 1);
				}
				else
				{
					GlobalFunc_9029(1);
				}
				iLocal_1988 = 7;
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			}
			func_219(uParam0);
			GlobalFunc_815(&(Local_50.f_297), 1);
			GlobalFunc_6715(&uLocal_2042);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, 0))
			{
				sLocal_2246 = AUDIO::GET_PLAYER_RADIO_STATION_NAME();
				AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_358[0 /*189*/].f_9, 0);
			}
			iLocal_1988 = 8;
			break;
		
		case 8:
			if (func_218(uParam0))
			{
				iLocal_1988 = 9;
			}
			break;
		
		case 9:
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, 0);
			func_217(&uLocal_2047);
			GlobalFunc_842(1, 0);
			func_216(uParam0);
			GlobalFunc_4907();
			GlobalFunc_842(0, 0);
			iLocal_1988 = 0;
			return 0;
			break;
	}
	func_407(uParam0, 0);
	return 1;
}

int func_216(var uParam0)//Position - 0x9FE1
{
	if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_106[Local_50.f_10])
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_50.f_24[Local_50.f_10 /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 109, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_50.f_106[Local_50.f_10] - Local_50.f_112[Local_50.f_10]) / 2f) + Local_50.f_112[Local_50.f_10]))
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_50.f_24[Local_50.f_10 /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 108, "HUD_MED_UNLKED");
	}
	else if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_112[Local_50.f_10])
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&(Local_50.f_24[Local_50.f_10 /*8*/]));
		return HUD::END_TEXT_COMMAND_THEFEED_POST_AWARD("MPMedals_FEED", "Feed_Medal_FlightSchool", 0, 107, "HUD_MED_UNLKED");
	}
	return -1;
}

void func_217(var uParam0)//Position - 0xA0BC
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
	*uParam0 = 0;
}

int func_218(var uParam0)//Position - 0xA0CE
{
	float fVar0;
	
	fVar0 = 0f;
	if (!GlobalFunc_226(&(uParam0->f_17.f_2)))
	{
		GlobalFunc_6715(&(uParam0->f_17.f_2));
	}
	else
	{
		fVar0 = GlobalFunc_4981(&(uParam0->f_17.f_2));
	}
	if (!iLocal_2007)
	{
		if (fVar0 > 1f)
		{
			iLocal_2007 = 1;
		}
	}
	if (!iLocal_2008)
	{
		if (fVar0 > 4.25f)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_17, "TRANSITION_OUT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.5f);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			iLocal_2008 = 1;
		}
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_17, 255, 255, 255, 255, 0);
	if (fVar0 > 5f)
	{
		GlobalFunc_235(&(uParam0->f_17.f_2));
		iLocal_2007 = 0;
		iLocal_2008 = 0;
		return 1;
	}
	return 0;
}

void func_219(var uParam0)//Position - 0xA16F
{
	char* sVar0;
	
	sVar0 = GlobalFunc_2736(2);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_17, "RESET_MOVIE");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_17, sVar0);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL("SPR_UI_PASS");
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Local_50.f_24[Local_50.f_10 /*8*/]));
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(100f);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	uParam0->f_17.f_1 = 5000;
	GlobalFunc_235(&(uParam0->f_17.f_2));
	iLocal_2007 = 0;
	iLocal_2008 = 0;
}



void func_222(var uParam0, struct<3> Param1)//Position - 0xA2DB
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	float fVar14;
	float fVar15;
	float fVar16;
	
	if (!CAM::DOES_CAM_EXIST(uParam0))
	{
		return;
	}
	if (!CAM::IS_CAM_ACTIVE(uParam0))
	{
		return;
	}
	Var1 = { CAM::GET_CAM_ROT(uParam0, 2) };
	Var4 = { CAM::GET_CAM_COORD(uParam0) };
	Var7 = { GlobalFunc_590(Var1.x, Var1.f_1, (Var1.f_2 + 90f)) };
	Var10 = { Param1 - Var4 };
	Var10 = { GlobalFunc_107(Var10) };
	fVar13 = MISC::ATAN2((Param1.f_2 - Var4.f_2), MISC::GET_DISTANCE_BETWEEN_COORDS(Param1, Var4, 0));
	fVar14 = MISC::GET_HEADING_FROM_VECTOR_2D((Param1.x - Var4.x), (Param1.f_1 - Var4.f_1));
	fVar14 = GlobalFunc_739(fVar14, -180f, 180f);
	fVar0 = GlobalFunc_168(GlobalFunc_590(fVar13, Var1.f_1, Var1.f_2), Var7);
	fVar15 = (fVar13 - Var1.x);
	if (fVar15 > 270f)
	{
		fVar15 = (fVar15 - 360f);
	}
	else if (fVar15 < -270f)
	{
		fVar15 = (fVar15 + 360f);
	}
	fVar13 = (Var1.x + fVar15);
	if ((bLocal_2250 && fVar13 > Var1.x) || (!bLocal_2250 && fVar13 < Var1.x))
	{
		if (fVar0 > 0f)
		{
		}
		else if (fVar0 < 0f)
		{
		}
		fLocal_2247 = (fLocal_2247 * 0.9f);
		Var1.x = GlobalFunc_551(Var1.x, fVar13, fLocal_2247);
	}
	fVar16 = (fVar14 - Var1.f_2);
	if (fVar16 > 270f)
	{
		fVar16 = (fVar16 - 360f);
	}
	else if (fVar16 < -270f)
	{
		fVar16 = (fVar16 + 360f);
	}
	fVar14 = (Var1.f_2 + fVar16);
	if ((bLocal_2249 && (Var1.f_2 - fVar14) < 0f) || (!bLocal_2249 && (Var1.f_2 - fVar14) > 0f))
	{
		if (!bLocal_2249 && (Var1.f_2 - fVar14) > 0f)
		{
		}
		else if (bLocal_2249 && (Var1.f_2 - fVar14) < 0f)
		{
		}
		fLocal_2248 = (fLocal_2248 * 0.9f);
		Var1.f_2 = GlobalFunc_551(Var1.f_2, fVar14, fLocal_2248);
	}
	CAM::SET_CAM_ROT(uParam0, Var1, 2);
}




void func_226(var uParam0)//Position - 0xA566
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	var uVar18;
	struct<3> Var21;
	struct<3> Var24;
	float fVar27;
	float fVar28;
	
	ENTITY::GET_ENTITY_MATRIX(PLAYER::PLAYER_PED_ID(), &Var0, &uVar18, &uVar18, &Var3);
	Var15 = { CAM::GET_CAM_ROT(uParam0, 2) };
	Var12 = { CAM::GET_CAM_COORD(uParam0) };
	Var6 = { GlobalFunc_590((Var15.x + 90f), Var15.f_1, Var15.f_2) };
	Var9 = { GlobalFunc_590(Var15.x, Var15.f_1, (Var15.f_2 + 90f)) };
	fLocal_2247 = 0.2f;
	fLocal_2248 = 0.5f;
	Var21 = { CAM::GET_CAM_COORD(uParam0) - Var3 };
	Var24 = { Var3 + FtoV(GlobalFunc_168(Var21, Var0)) * Var0 };
	if (Var24.f_2 > Var12.f_2)
	{
		bLocal_2250 = true;
	}
	else
	{
		bLocal_2250 = false;
	}
	fVar27 = GlobalFunc_168(Var24, Var6);
	fVar28 = GlobalFunc_168(Var24, Var9);
	if (fVar27 < 0f)
	{
		bLocal_2249 = true;
	}
	else
	{
		bLocal_2249 = false;
	}
}

float func_227()//Position - 0xA642
{
	switch (Local_50.f_10)
	{
		case 0:
			return 46.9415f;
			break;
		
		case 1:
			return 37.9558f;
			break;
		
		case 2:
			return 48.4122f;
			break;
		
		case 3:
			return 35.2464f;
			break;
		
		case 4:
			return 42.5338f;
			break;
	}
	return 0f;
}

Vector3 func_228()//Position - 0xA6A9
{
	switch (Local_50.f_10)
	{
		case 0:
			return -7.5758f, 0f, 148.5448f;
			break;
		
		case 1:
			return -1.0194f, 0.7478f, 23.0628f;
			break;
		
		case 2:
			return -5.3368f, 0.0006f, 158.257f;
			break;
		
		case 3:
			return -1.3523f, 0f, 0.0891f;
			break;
		
		case 4:
			return 18.1009f, -0.5992f, -103.0214f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_229()//Position - 0xA73C
{
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_2302))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_2302);
	}
}




void func_233(bool bParam0)//Position - 0xA7A2
{
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(!bParam0);
}

void func_234()//Position - 0xA7B1
{
	func_235();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
}

void func_235()//Position - 0xA7C2
{
	Local_2289 = 0;
	Local_2289.f_1 = 0;
	Local_2289.f_2 = { 0f, 0f, 0f };
	Local_2289.f_6 = 0;
	Local_2289.f_5 = 0f;
}





void func_240(var uParam0)//Position - 0xA96F
{
	func_241(uParam0);
	SYSTEM::SETTIMERA(0);
	GlobalFunc_842(1, 0);
	GlobalFunc_4907();
}

void func_241(var uParam0)//Position - 0xA98D
{
	GlobalFunc_3491(&(uParam0->f_1871));
	GlobalFunc_6537(&(uParam0->f_1871.f_741));
	func_242(&(uParam0->f_1871));
}

void func_242(var uParam0)//Position - 0xA9B3
{
	GlobalFunc_6536(&(uParam0->f_316[0 /*2*/]), 254f, 74f, 1);
	GlobalFunc_6536(&(uParam0->f_316[1 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 127f, 1);
	GlobalFunc_6536(&(uParam0->f_316[2 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 297f, 1);
	GlobalFunc_6536(&(uParam0->f_316[3 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 324f, 1);
	GlobalFunc_6536(&(uParam0->f_316[4 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 351f, 1);
	GlobalFunc_6536(&(uParam0->f_316[5 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 378f, 1);
	GlobalFunc_6536(&(uParam0->f_316[6 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 405f, 1);
	GlobalFunc_6536(&(uParam0->f_316[11 /*2*/]), 257f, 297f, 1);
	GlobalFunc_6536(&(uParam0->f_316[12 /*2*/]), 257f, 324f, 1);
	GlobalFunc_6536(&(uParam0->f_316[13 /*2*/]), 257f, 351f, 1);
	GlobalFunc_6536(&(uParam0->f_316[14 /*2*/]), 257f, 378f, 1);
	GlobalFunc_6536(&(uParam0->f_316[15 /*2*/]), 257f, 405f, 1);
	GlobalFunc_6536(&(uParam0->f_316[18 /*2*/]), 298f, 567f, 1);
	GlobalFunc_6536(&(uParam0->f_316[17 /*2*/]), 384f, 567f, 1);
	GlobalFunc_6536(&(uParam0->f_316[16 /*2*/]), 470f, 567f, 1);
	func_251(uParam0[0 /*9*/], 208f, 55f, 864f, 570f, 1);
	func_250(uParam0[0 /*9*/], 0, 0, 0, 255);
	func_251(uParam0[2 /*9*/], 384f, 224f, 256f, 256f, 0);
	func_250(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[3 /*9*/], 495f, 306f, 32f, 32f, 0);
	func_250(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[6 /*9*/], 258.5f, 482.5f, 80f, 80f, 1);
	func_250(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[5 /*9*/], 344f, 482.5f, 80f, 80f, 1);
	func_250(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[4 /*9*/], 429.5f, 482.5f, 80f, 80f, 1);
	func_250(uParam0[4 /*9*/], 255, 255, 255, 255);
	GlobalFunc_7543(&(uParam0->f_420[1 /*8*/]), 257f, 119f, 254f, 5f, 1);
	GlobalFunc_4630(&(uParam0->f_420[1 /*8*/]), 70, 70, 130, 255);
	GlobalFunc_7543(&(uParam0->f_420[0 /*8*/]), 257f, 124f, 254f, 25f, 1);
	GlobalFunc_4630(&(uParam0->f_420[0 /*8*/]), 255, 255, 255, 255);
	GlobalFunc_7543(&(uParam0->f_420[2 /*8*/]), 257f, 159f, 254f, 133f, 1);
	GlobalFunc_3480(&(uParam0->f_420[2 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[3 /*8*/]), 257f, 294f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[3 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[4 /*8*/]), 257f, 321f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[4 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[5 /*8*/]), 257f, 348f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[5 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[6 /*8*/]), 257f, 375f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[6 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[7 /*8*/]), 257f, 402f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[7 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[8 /*8*/]), 257f, 429f, 254f, 52f, 1);
	GlobalFunc_3480(&(uParam0->f_420[8 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[11 /*8*/]), 257f, 483f, 83f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[11 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[12 /*8*/]), 342f, 483f, 84f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[12 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[13 /*8*/]), 428f, 483f, 83f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[13 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[14 /*8*/]), 428f, 564f, 83f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[14 /*8*/]), 107, 1);
	GlobalFunc_7543(&(uParam0->f_420[15 /*8*/]), 342f, 564f, 84f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[15 /*8*/]), 108, 1);
	GlobalFunc_7543(&(uParam0->f_420[16 /*8*/]), 257f, 564f, 83f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[16 /*8*/]), 109, 1);
	uParam0->f_986 = 1;
}








void func_250(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xB070
{
	fParam0->f_4 = iParam1;
	fParam0->f_5 = iParam2;
	fParam0->f_6 = iParam3;
	fParam0->f_7 = iParam4;
}

void func_251(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xB090
{
	GlobalFunc_6535(fParam0, fParam3, fParam4);
	GlobalFunc_6534(fParam0, fParam1, fParam2, bParam5);
}





























int func_280(var uParam0)//Position - 0xB91C
{
	func_284();
	switch (iLocal_2301)
	{
		case 0:
			GlobalFunc_8389(uParam0);
			GlobalFunc_2659(&uLocal_2296, 3);
			iLocal_2301 = 1;
			break;
		
		case 1:
			if (GlobalFunc_7072(uParam0, 1f))
			{
				func_281(&uLocal_2296, 1, 0, 1, 3, 1, 0);
				iLocal_2301 = 2;
			}
			break;
		
		case 2:
			if (func_281(&uLocal_2296, 0, 0, 1, 3, 1, 0))
			{
				return 0;
			}
			break;
			return 1;
	}
	return 1;
}

int func_281(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xB992
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	if (!GlobalFunc_226(&(uParam0->f_2)))
	{
		GlobalFunc_6715(&(uParam0->f_2));
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GRAPHICS::DRAW_SCALEFORM_MOVIE(*uParam0, 0.5f, 0.5f, 1f, 1f, 255, 255, 255, 100, 0);
	if (iParam4 > 3)
	{
		iParam4 = 3;
	}
	else if (iParam4 < 0)
	{
		iParam4 = 0;
	}
	if (bParam5)
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "HUD_MINI_GAME_SOUNDSET";
	}
	else
	{
		sVar0 = "3_2_1";
		sVar1 = "GO";
		sVar2 = "321_GO_LOW_VOL_SOUNDSET";
	}
	iVar3 = SYSTEM::FLOOR(GlobalFunc_4981(&(uParam0->f_2)));
	iVar4 = (iVar3 - iParam4);
	bVar5 = false;
	if (!GlobalFunc_2951(uParam0->f_1, 8))
	{
		if (iVar4 >= -3 && !GlobalFunc_2951(uParam0->f_1, 1))
		{
			func_309(&(uParam0->f_1), 1);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			GlobalFunc_2659(uParam0, iVar4);
		}
		else if (iVar4 >= -2 && !GlobalFunc_2951(uParam0->f_1, 2))
		{
			func_309(&(uParam0->f_1), 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			GlobalFunc_2659(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !GlobalFunc_2951(uParam0->f_1, 4))
		{
			func_309(&(uParam0->f_1), 4);
			AUDIO::PLAY_SOUND_FRONTEND(-1, sVar0, sVar2, 1);
			GlobalFunc_2659(uParam0, iVar4);
		}
		else if (iVar4 >= -1 && !GlobalFunc_2951(uParam0->f_1, 16))
		{
			if (MISC::ABSF((GlobalFunc_4981(&(uParam0->f_2)) - IntToFloat(iParam4))) < 0.65f)
			{
				if (bParam5 || bParam6)
				{
					func_309(&(uParam0->f_1), 16);
					AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
				}
			}
		}
		else if (iVar4 >= 0 && !GlobalFunc_2951(uParam0->f_1, 8))
		{
			if (!bParam5 && !bParam6)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, sVar1, sVar2, 1);
			}
			func_309(&(uParam0->f_1), 8);
			HUD::GET_HUD_COLOUR(18, &iVar6, &iVar7, &iVar8, &uVar9);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
			GlobalFunc_726("CNTDWN_GO");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar6);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (!bParam1)
			{
				bVar5 = true;
			}
		}
	}
	else if (iVar4 == 1)
	{
		bVar5 = true;
	}
	if ((iParam2 && GlobalFunc_1080()) || iVar3 > 5)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		if (bParam3)
		{
			uParam0->f_1 = 0;
			GlobalFunc_235(&(uParam0->f_2));
		}
		return 1;
	}
	return 0;
}



void func_284()//Position - 0xBC73
{
	struct<6> Var0;
	int iVar6;
	
	iVar6 = Global_96383;
	func_285(Var0, 0, 0, 0, 0, iVar6);
}

void func_285(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0xBC8F
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
				if (fLocal_28 > fVar0)
				{
					Global_68501 = MISC::GET_GAME_TIMER();
					Local_29 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_28 = 0f;
				}
				else
				{
					fLocal_28 = (fLocal_28 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_28 = 0f;
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
					fLocal_33 = 0.14f;
				}
				else
				{
					fLocal_33 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (GlobalFunc_117(&Var4) > fLocal_33)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, Local_29.x, (Local_29.f_1 + fLocal_32));
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
					fLocal_28 = 0f;
				}
			}
			else
			{
				GlobalFunc_53();
				fLocal_28 = 0f;
			}
		}
	}
}



















void func_304(var uParam0)//Position - 0xCB6F
{
	char cVar0[16];
	int iVar4;
	
	StringCopy(&cVar0, "Offroad_", 16);
	StringIntConCat(&cVar0, Local_50.f_10 + 1, 16);
	GlobalFunc_6715(&(uParam0->f_3));
	uParam0->f_358[0 /*189*/].f_15 = 0f;
	iLocal_2076 = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	if (Local_50 == 0)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 1);
	}
	uParam0->f_1 = 1;
	GlobalFunc_6715(&uLocal_2401);
	iVar4 = 0;
	while (iVar4 < uParam0->f_13)
	{
		func_305(&(uParam0->f_358[iVar4 /*189*/]));
		if (Local_50 != 1)
		{
			if (iVar4 != 0)
			{
				func_76(uParam0, uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
			}
		}
		else if (bLocal_2409)
		{
			if (iVar4 > 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar4 /*189*/].f_8) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_358[iVar4 /*189*/].f_9))
				{
					if (iVar4 == 1 && Local_50.f_10 == 0)
					{
						StringConCat(&cVar0, "a", 16);
					}
					TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, &cVar0, 262144, 0, 8, -1, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(uParam0->f_358[iVar4 /*189*/].f_9), 0, 1073741824);
				}
			}
		}
		else if (iVar4 != 0)
		{
			func_76(uParam0, uParam0->f_358[iVar4 /*189*/].f_8, uParam0->f_358[iVar4 /*189*/].f_9, uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/], uParam0->f_27[uParam0->f_358[iVar4 /*189*/].f_11 /*10*/].f_7, iVar4);
		}
		iVar4++;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_358[0 /*189*/].f_9, 0))
	{
		AUDIO::SET_VEHICLE_RADIO_ENABLED(uParam0->f_358[0 /*189*/].f_9, 1);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2246))
		{
			AUDIO::SET_RADIO_TO_STATION_NAME(sLocal_2246);
			AUDIO::SET_VEH_RADIO_STATION(uParam0->f_358[0 /*189*/].f_9, sLocal_2246);
		}
	}
}

void func_305(var uParam0)//Position - 0xCD52
{
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_8))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uParam0->f_9))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(uParam0->f_9);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_8, 1);
		}
	}
	uParam0->f_11 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_9))
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(uParam0->f_22))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_9, 1, 1);
		}
	}
}


void func_307(var uParam0)//Position - 0xCDC5
{
	uParam0->f_12 = uParam0->f_12;
}

void func_308(var uParam0)//Position - 0xCDD5
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, 512);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_108(&(uParam0->f_358[iVar0 /*189*/]), 60f, 1);
		iVar0++;
	}
}

void func_309(int iParam0, int iParam1)//Position - 0xCE1C
{
	GlobalFunc_814(iParam0, iParam1);
}

int func_310(var uParam0, int iParam1, bool bParam2)//Position - 0xCE2C
{
	struct<3> Var0;
	int iVar3;
	float fVar4;
	struct<3> Var5;
	struct<3> Var8;
	
	if (iParam1 < 0 || iParam1 > 32)
	{
		return 0;
	}
	iVar3 = -1;
	if (iParam1 == (uParam0->f_12 - 1))
	{
		iVar3 = 38;
	}
	fVar4 = 1.2f;
	if (!bParam2)
	{
		fVar4 = 0.7f;
	}
	if (!func_316(&(uParam0->f_27[iParam1 /*10*/]), iVar3, fVar4, iParam1, uParam0->f_12))
	{
		return 0;
	}
	if (bParam2)
	{
		Var5 = { uParam0->f_27[iParam1 /*10*/] };
		Var8 = { 0f, 0f, 0f };
		if (iParam1 < (uParam0->f_12 - 1))
		{
			if (!GlobalFunc_537(uParam0->f_27[iParam1 /*10*/], uParam0->f_27[iParam1 + 1 /*10*/], 1056964608))
			{
				Var5 = { uParam0->f_27[iParam1 + 1 /*10*/] };
			}
		}
		if (Local_50 == 1)
		{
			if (Local_50.f_10 == 1)
			{
				if (GlobalFunc_2951(uParam0->f_27[8 /*10*/].f_9, 4))
				{
					GlobalFunc_6533(&(uParam0->f_27[8 /*10*/].f_9), 4);
				}
			}
		}
		if (iParam1 > 0)
		{
			Var8 = { uParam0->f_27[(iParam1 - 1) /*10*/] };
		}
		if (!func_311(Var8, &(uParam0->f_27[iParam1 /*10*/]), Var5, 16f))
		{
			return 0;
		}
		if (iParam1 + 1 < uParam0->f_12)
		{
			if (iParam1 + 2 >= 33)
			{
				Var0 = { uParam0->f_27[0 /*10*/] };
			}
			else
			{
				Var0 = { uParam0->f_27[iParam1 + 2 /*10*/] };
			}
			if (!func_311(uParam0->f_27[iParam1 /*10*/], &(uParam0->f_27[iParam1 + 1 /*10*/]), Var0, 16f))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_311(struct<3> Param0, var uParam3, struct<3> Param4, float fParam7)//Position - 0xCFAA
{
	if (!func_312(Param0, uParam3, Param4, fParam7))
	{
		return 0;
	}
	return 1;
}

int func_312(struct<3> Param0, var uParam3, struct<3> Param4, var uParam7)//Position - 0xCFCB
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	Param0 = { Param0 };
	func_80(&(uParam3->f_6));
	if (uParam3->f_7 == 2)
	{
		uVar0 = GlobalFunc_6532(uParam3->f_7, Param0, *uParam3, Param4);
		GlobalFunc_4449(GlobalFunc_6295(GlobalFunc_4622()), &uVar1, &uVar2, &uVar3, &uVar4);
		uParam3->f_6 = GRAPHICS::CREATE_CHECKPOINT(uVar0, *uParam3, Param4, uParam7, uVar1, uVar2, uVar3, GlobalFunc_2419(*uParam3, 25, 200), 0);
	}
	else if (uParam3->f_7 == 3)
	{
		if (uParam3->f_8 == 2 || uParam3->f_8 == 3)
		{
			GlobalFunc_4449(GlobalFunc_6295(18), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_313(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, GlobalFunc_2419(*uParam3, 25, 200), 0);
		}
		else if (uParam3->f_8 == 1)
		{
			GlobalFunc_4449(GlobalFunc_6295(9), &iVar1, &iVar2, &iVar3, &uVar4);
			uParam3->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_313(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, iVar1, iVar2, iVar3, GlobalFunc_2419(*uParam3, 25, 200), 0);
		}
	}
	else
	{
		uParam3->f_6 = GRAPHICS::CREATE_CHECKPOINT(func_313(uParam3->f_7, uParam3->f_8), *uParam3, Param4, uParam7, 254, 207, 12, GlobalFunc_2419(*uParam3, 25, 200), 0);
	}
	if (uParam3->f_6 == 0)
	{
		return 0;
	}
	return 1;
}

int func_313(int iParam0, int iParam1)//Position - 0xD128
{
	switch (iParam0)
	{
		case 0:
			return 5;
			break;
		
		case 1:
			return 9;
			break;
		
		case 2:
			return 35;
			break;
		
		case 3:
			if (iParam1 == 2)
			{
				return 36;
			}
			else if (iParam1 == 3)
			{
				return 37;
			}
			else if (iParam1 == 1)
			{
				return 38;
			}
			break;
		
		case 4:
			return 14;
			break;
		
		case 5:
			return 25;
			break;
		
		case 6:
			return 30;
			break;
		
		case 7:
			return 20;
			break;
		
		case 8:
			return 24;
			break;
		
		case 9:
			return 29;
			break;
		
		case 10:
			return 34;
			break;
	}
	return 5;
}



int func_316(var uParam0, int iParam1, float fParam2, int iParam3, int iParam4)//Position - 0xD31B
{
	if (!func_317(&(uParam0->f_5), *uParam0, iParam1, fParam2, iParam3, iParam4, uParam0->f_8))
	{
		return 0;
	}
	return 1;
}

int func_317(var uParam0, struct<3> Param1, int iParam4, var uParam5, int iParam6, int iParam7, int iParam8)//Position - 0xD344
{
	GlobalFunc_703(uParam0);
	*uParam0 = HUD::ADD_BLIP_FOR_COORD(Param1);
	if (!HUD::DOES_BLIP_EXIST(*uParam0))
	{
		return 0;
	}
	if (iParam4 != -1)
	{
		HUD::SET_BLIP_SPRITE(*uParam0, iParam4);
	}
	HUD::SET_BLIP_SCALE(*uParam0, uParam5);
	HUD::SET_BLIP_DISPLAY(*uParam0, 4);
	if (iParam8 == 2 || iParam8 == 3)
	{
		HUD::SET_BLIP_COLOUR(*uParam0, 2);
	}
	if (iParam8 == 1)
	{
		HUD::SET_BLIP_COLOUR(*uParam0, 3);
	}
	if (iParam6 == (iParam7 - 1))
	{
		HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPFIN");
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam0);
	}
	else
	{
		if (iParam8 == 1)
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPINV");
		}
		else if (iParam8 == 2 || iParam8 == 3)
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPKNF");
		}
		else
		{
			HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("GATEBLIPDEF");
		}
		HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam0);
	}
	return 1;
}


int func_319(var uParam0)//Position - 0xD424
{
	switch (uParam0->f_25)
	{
		case 0:
			GlobalFunc_7632(1);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", 0);
			Local_50.f_118 = GlobalFunc_2407();
			switch (Local_50)
			{
				case 0:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", 0);
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", 0);
					break;
				
				case 1:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPROffroad", 0);
					break;
				
				case 2:
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Triathlon", 0);
					GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPMedals_FEED", 0);
					break;
			}
			uParam0->f_25 = 1;
			break;
		
		case 1:
			func_327(uParam0);
			uParam0->f_25 = 2;
			break;
		
		case 2:
			if (func_322(uParam0))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_50.f_118))
					{
						switch (Local_50)
						{
							case 0:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 1:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPROffroad"))
								{
									uParam0->f_25 = 3;
								}
								break;
							
							case 2:
								if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Triathlon") && GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPMedals_FEED"))
								{
									uParam0->f_25 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			if (Local_50.f_10 == 0 && !uParam0->f_2)
			{
			}
			else
			{
				func_320(uParam0);
			}
			uParam0->f_25 = 4;
			break;
		
		case 4:
			if (Local_50.f_10 == 0)
			{
				return 0;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0 /*189*/].f_9))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0 /*189*/].f_9, 1);
				}
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::REQUEST_COLLISION_AT_COORD(uParam0->f_358[0 /*189*/].f_16);
					STREAMING::NEW_LOAD_SCENE_START(uParam0->f_358[0 /*189*/].f_16, ENTITY::GET_ENTITY_FORWARD_VECTOR(uParam0->f_358[0 /*189*/].f_9), 5000f, 0);
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED())
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_358[0 /*189*/].f_9))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_358[0 /*189*/].f_9, 0);
					}
					func_308(uParam0);
					return 0;
				}
			}
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
	}
	return 1;
}

int func_320(var uParam0)//Position - 0xD648
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_321(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_321(var uParam0, int iParam1)//Position - 0xD679
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam1 > 0)
	{
		return func_120(&(uParam0->f_358[iParam1 /*189*/]), 1);
	}
	return func_120(&(uParam0->f_358[iParam1 /*189*/]), 0);
}

int func_322(var uParam0)//Position - 0xD6BE
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		if (!func_323(uParam0, iVar0))
		{
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_323(var uParam0, int iParam1)//Position - 0xD6EF
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return 0;
	}
	return func_324(&(uParam0->f_358[iParam1 /*189*/]));
}

int func_324(var uParam0)//Position - 0xD719
{
	if (!func_326(uParam0) || !func_325(uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_325(var uParam0)//Position - 0xD73D
{
	if (uParam0->f_22 == 0)
	{
		return 1;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_22);
}

bool func_326(var uParam0)//Position - 0xD759
{
	if (uParam0->f_21 == 0)
	{
		return 0;
	}
	return STREAMING::HAS_MODEL_LOADED(uParam0->f_21);
}

void func_327(var uParam0)//Position - 0xD775
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_328(uParam0, iVar0);
		iVar0++;
	}
}

void func_328(var uParam0, int iParam1)//Position - 0xD79A
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_329(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_329(var uParam0)//Position - 0xD7C3
{
	func_331(uParam0);
	GlobalFunc_4629(uParam0);
}


void func_331(var uParam0)//Position - 0xD7F2
{
	if (uParam0->f_21 == 0)
	{
		return;
	}
	STREAMING::REQUEST_MODEL(uParam0->f_21);
}



void func_334()//Position - 0xD841
{
	if (CAM::DOES_CAM_EXIST(uLocal_2045))
	{
		if (CAM::IS_CAM_ACTIVE(uLocal_2045))
		{
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			CAM::SET_CAM_ACTIVE(uLocal_2045, 0);
		}
		CAM::DESTROY_CAM(uLocal_2045, 0);
	}
}





void func_339()//Position - 0xD8C5
{
	GlobalFunc_6915(&uLocal_1549);
}








int func_347(var uParam0, var uParam1)//Position - 0xDCDC
{
	if (!func_398())
	{
		return 0;
	}
	if (func_392(&bLocal_500, uParam0))
	{
		if (iLocal_502 || bLocal_501)
		{
			HUD::SET_WARNING_MESSAGE_WITH_HEADER("SPR_QT_PLANE_T", "SPR_QUIT_PLANE", 36, 0, 0, -1, 0, 0, 1);
			if (!*uParam1)
			{
				if (iLocal_502)
				{
					if (GlobalFunc_226(&uLocal_497))
					{
						if (GlobalFunc_7944(&uLocal_497, SYSTEM::TO_FLOAT(0)))
						{
							iLocal_502 = 0;
							bLocal_501 = !bLocal_501;
						}
					}
					else
					{
						GlobalFunc_6715(&uLocal_497);
					}
				}
				else
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					func_138(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
				}
			}
		}
		else
		{
			*uParam1 = 0;
			func_352();
		}
		return 0;
	}
	if (bLocal_500)
	{
		func_351();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
		}
	}
	else
	{
		Local_50.f_10 = -1;
	}
	func_348();
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1);
	}
	return 1;
}

void func_348()//Position - 0xDDD7
{
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("MinigameTransitionIn"))
	{
		GRAPHICS::ANIMPOSTFX_STOP("MinigameTransitionIn");
	}
	GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionOut", 0, 0);
	iLocal_496 = 0;
	MISC::SET_GAME_PAUSED(0);
	GlobalFunc_7632(0);
	GlobalFunc_5105();
}



void func_351()//Position - 0xDE60
{
	switch (Global_96383)
	{
		case 0:
			Local_50.f_10 = 0;
			break;
		
		case 1:
			Local_50.f_10 = 1;
			break;
		
		case 2:
			Local_50.f_10 = 2;
			break;
		
		case 3:
			Local_50.f_10 = 3;
			break;
		
		case 4:
			Local_50.f_10 = 4;
			break;
	}
}

void func_352()//Position - 0xDEB7
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_353(&uLocal_562);
}

void func_353(var uParam0)//Position - 0xDECA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<2> Var5;
	struct<2> Var14;
	int iVar16;
	struct<2> Var17;
	struct<11> Var19;
	struct<2> Var30;
	char cVar34[16];
	struct<2> Var38;
	struct<11> Var40;
	
	if (!bLocal_561)
	{
		if (!MISC::IS_PC_VERSION())
		{
			HUD::SET_WIDESCREEN_FORMAT(1);
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	func_138(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
	func_384("Shared", "BGGradient_32x1024", uParam0[0 /*9*/], 0, 0, 1, 0);
	func_379(uParam0->f_420[0 /*8*/], 0, 0);
	func_379(uParam0->f_420[1 /*8*/], 0, 0);
	func_379(uParam0->f_420[2 /*8*/], 0, 0);
	func_379(uParam0->f_420[3 /*8*/], 0, 0);
	func_379(uParam0->f_420[4 /*8*/], 0, 0);
	func_379(uParam0->f_420[5 /*8*/], 0, 0);
	func_379(uParam0->f_420[6 /*8*/], 0, 0);
	func_379(uParam0->f_420[7 /*8*/], 0, 0);
	func_379(uParam0->f_420[8 /*8*/], 0, 0);
	func_379(uParam0->f_420[6 /*8*/], 0, 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	GlobalFunc_6063(&(uParam0->f_741.f_165));
	func_377(&(uParam0->f_316[0 /*2*/]), &(uParam0->f_741.f_165), "SPR_TITLE", 0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	GlobalFunc_6062(&(uParam0->f_741.f_176));
	GlobalFunc_4659(&(uParam0->f_741.f_176), &(uParam0->f_420[0 /*8*/]), 0f, 0f);
	func_372(&(uParam0->f_316[1 /*2*/]), &(uParam0->f_741.f_176), "SPR_CHALLENGES", 1, 0);
	GlobalFunc_4658(&(uParam0->f_741.f_176));
	GlobalFunc_4659(&(uParam0->f_741.f_176), &(uParam0->f_420[1 /*8*/]), 0f, 0f);
	func_372(&(uParam0->f_316[2 /*2*/]), &(uParam0->f_741.f_176), "SPR_INFO", 1, 0);
	GlobalFunc_4658(&(uParam0->f_741.f_176));
	GlobalFunc_4659(&(uParam0->f_741.f_176), &(uParam0->f_420[5 /*8*/]), 0f, 0f);
	func_372(&(uParam0->f_316[3 /*2*/]), &(uParam0->f_741.f_176), "SPR_AWARD_TITLE", 1, 0);
	GlobalFunc_4658(&(uParam0->f_741.f_176));
	GlobalFunc_6063(&(uParam0->f_741.f_198));
	iVar0 = 0;
	iVar1 = 9;
	iVar2 = 17;
	iVar3 = 1;
	func_379(uParam0->f_420[16 /*8*/], 0, 0);
	func_379(uParam0->f_420[17 /*8*/], 0, 0);
	func_379(uParam0->f_420[18 /*8*/], 0, 0);
	func_379(uParam0->f_420[19 /*8*/], 0, 0);
	func_379(uParam0->f_420[20 /*8*/], 0, 0);
	func_379(uParam0->f_420[21 /*8*/], 0, 0);
	bVar4 = true;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (iVar0 < 5)
		{
			Var14 = { uParam0->f_316[iVar2 /*2*/] };
			if (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[iVar0] > 0f)
			{
				iLocal_506[iVar0] = SYSTEM::CEIL(Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[iVar0]);
			}
			else
			{
				iLocal_506[iVar0] = -1;
			}
			if (iVar0 == Global_96383)
			{
				GlobalFunc_3480(&(uParam0->f_420[iVar1 /*8*/]), 1, 1);
				func_379(uParam0->f_420[iVar1 /*8*/], 0, 0);
				GlobalFunc_6062(&(uParam0->f_741.f_198));
				switch (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_12[iVar0 /*8*/].f_4)
				{
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							if (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[iVar0] <= 0f)
							{
								func_251(&Var5, 269f, 0f, 32f, 32f, 0);
								func_250(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_513);
								Var14 = (Var5 + fLocal_512);
								if (!bLocal_561)
								{
									GlobalFunc_4657(&Var5, 0);
								}
								func_369(&Var5, 1);
								func_384("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_561)
								{
									GlobalFunc_4656(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
					
					default:
						bVar4 = false;
						break;
				}
				if (iVar0 == Global_96383)
				{
					GlobalFunc_6062(&(uParam0->f_741.f_198));
				}
				GlobalFunc_4658(&(uParam0->f_741.f_198));
				func_377(&Var14, &(uParam0->f_741.f_198), &(Local_50.f_24[iVar0 /*8*/]), 0);
				GlobalFunc_6063(&(uParam0->f_741.f_198));
				func_369(uParam0[iVar3 /*9*/], 1);
				if (bVar4)
				{
					GlobalFunc_6063(&(uParam0->f_741.f_198));
				}
				else
				{
					GlobalFunc_6063(&(uParam0->f_741.f_198));
				}
				GlobalFunc_6063(&(uParam0->f_741.f_198));
				if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_106[iVar0] && iLocal_506[iVar0] > 1)
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					func_384("SPRRaces", "FlightStunt_Gold_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_377(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sGOLD", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					GlobalFunc_4658(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_506[iVar0]) <= (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]) && IntToFloat(iLocal_506[iVar0]) > Local_50.f_106[iVar0])
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					func_384("SPRRaces", "FlightStunt_Silver_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_377(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sSILVER", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					GlobalFunc_4658(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_112[iVar0] && IntToFloat(iLocal_506[iVar0]) > (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]))
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					func_384("SPRRaces", "FlightStunt_Bronze_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_377(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SPR_sBRONZE", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					GlobalFunc_4658(&(uParam0->f_741.f_198));
				}
				else if (IntToFloat(iLocal_506[iVar0]) > Local_50.f_112[iVar0] || iLocal_506[iVar0] == -1)
				{
					func_369(uParam0[iVar3 /*9*/], 1);
					func_369(uParam0[9 /*9*/], 1);
					GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[16 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_377(&(uParam0->f_316[5 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					func_384("SPRRaces", "Empty_128", uParam0[9 /*9*/], 0, 0, 5, 0);
					GlobalFunc_4655(uParam0[iVar3 /*9*/]);
				}
				if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_106[iVar0] && !iLocal_506[iVar0] == -1)
				{
					func_369(uParam0[13 /*9*/], 1);
				}
				else
				{
					(uParam0[13 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_506[iVar0]) <= (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]) && !iLocal_506[iVar0] == -1)
				{
					func_369(uParam0[12 /*9*/], 1);
				}
				else
				{
					(uParam0[12 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_112[iVar0] && !iLocal_506[iVar0] == -1)
				{
					func_369(uParam0[11 /*9*/], 1);
				}
				else
				{
					(uParam0[11 /*9*/])->f_7 = SYSTEM::ROUND((255f * 0.3f));
				}
				func_384("SPRRaces", "FlightStunt_Bronze_128", uParam0[11 /*9*/], 0, 0, 5, 0);
				func_384("SPRRaces", "FlightStunt_Silver_128", uParam0[12 /*9*/], 0, 0, 5, 0);
				func_384("SPRRaces", "FlightStunt_Gold_128", uParam0[13 /*9*/], 0, 0, 5, 0);
				GlobalFunc_6063(&(uParam0->f_741.f_198));
				if (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[Global_96383] > 0f)
				{
					GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_362(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[Global_96383] * 1000f)), 6, "", 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					GlobalFunc_4658(&(uParam0->f_741.f_198));
				}
				else
				{
					GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[17 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_377(&(uParam0->f_316[9 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					GlobalFunc_4658(&(uParam0->f_741.f_198));
				}
				func_377(&(uParam0->f_316[6 /*2*/]), &(uParam0->f_741.f_198), "SPR_RTIME", 0);
				if (Local_50.f_18[Global_96383] > 0f)
				{
					GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_362(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((Local_50.f_18[Global_96383] * 1000f)), 6, "", 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					GlobalFunc_4658(&(uParam0->f_741.f_198));
					GlobalFunc_6063(&(uParam0->f_741.f_198));
				}
				else
				{
					GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[18 /*8*/]), 0.0047f, 0.0055f);
					HUD::SET_TEXT_RIGHT_JUSTIFY(1);
					func_372(&(uParam0->f_316[7 /*2*/]), &(uParam0->f_741.f_198), "SC_LB_EMPTY", 0, 1);
					HUD::SET_TEXT_RIGHT_JUSTIFY(0);
					GlobalFunc_4658(&(uParam0->f_741.f_198));
					GlobalFunc_6063(&(uParam0->f_741.f_198));
				}
			}
			else
			{
				GlobalFunc_3481(&(uParam0->f_420[iVar1 /*8*/]));
				GlobalFunc_3480(&(uParam0->f_420[iVar1 /*8*/]), 117, 1);
				func_379(uParam0->f_420[iVar1 /*8*/], 0, 0);
				func_369(uParam0[iVar3 /*9*/], 1);
				switch (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_12[iVar0 /*8*/].f_4)
				{
					case 0:
						func_369(uParam0[iVar3 /*9*/], 1);
						GlobalFunc_6063(&(uParam0->f_741.f_198));
						break;
					
					case 2:
						break;
					
					case 1:
						if (iVar0 < 5)
						{
							GlobalFunc_6063(&(uParam0->f_741.f_198));
							if (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[iVar0] <= 0f)
							{
								func_251(&Var5, 269f, 0f, 32f, 32f, 0);
								func_250(&Var5, 255, 255, 255, 255);
								Var5.f_1 = (uParam0->f_316[iVar2 /*2*/].f_1 + fLocal_513);
								Var14 = (Var5 + fLocal_512);
								if (!bLocal_561)
								{
									GlobalFunc_4657(&Var5, 0);
								}
								func_369(&Var5, 1);
								func_384("Shared", "NewStar_32", &Var5, 0, 0, 5, 0);
								if (!bLocal_561)
								{
									GlobalFunc_4656(&Var14, &(uParam0->f_741.f_198));
								}
							}
						}
						break;
				}
				if (iVar0 == Global_96383)
				{
					GlobalFunc_6062(&(uParam0->f_741.f_198));
				}
				GlobalFunc_4658(&(uParam0->f_741.f_198));
				func_377(&Var14, &(uParam0->f_741.f_198), &(Local_50.f_24[iVar0 /*8*/]), 0);
				GlobalFunc_6063(&(uParam0->f_741.f_198));
				func_369(uParam0[iVar3 /*9*/], 1);
			}
			if (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_12[iVar0 /*8*/].f_4 == 0)
			{
				func_384("Shared", "Locked_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
			}
			else if (IntToFloat(iLocal_506[iVar0]) > 0f)
			{
				if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_106[iVar0] && IntToFloat(iLocal_506[iVar0]) <= Local_50.f_112[iVar0])
				{
					GlobalFunc_6541(uParam0[iVar3 /*9*/]);
					func_384("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_506[iVar0]) <= (((Local_50.f_112[iVar0] - Local_50.f_106[iVar0]) / 2f) + Local_50.f_106[iVar0]))
				{
					GlobalFunc_6540(uParam0[iVar3 /*9*/]);
					func_384("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
				else if (IntToFloat(iLocal_506[iVar0]) <= Local_50.f_112[iVar0])
				{
					GlobalFunc_6539(uParam0[iVar3 /*9*/]);
					func_384("Shared", "MedalDot_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
				}
			}
			iVar1++;
			iVar2++;
			iVar3++;
		}
		iVar0++;
	}
	iVar16 = 0;
	if (GlobalFunc_8633(0))
	{
		STATS::STAT_GET_INT(joaat("sp0_flying_ability"), &iVar16, -1);
	}
	else if (GlobalFunc_8633(1))
	{
		STATS::STAT_GET_INT(joaat("sp1_flying_ability"), &iVar16, -1);
	}
	else if (GlobalFunc_8633(2))
	{
		STATS::STAT_GET_INT(joaat("sp2_flying_ability"), &iVar16, -1);
	}
	if (iVar16 < 40)
	{
		GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[15 /*8*/]), 0.0047f, 0.0055f);
		HUD::SET_TEXT_LEADING(1);
		Var17 = { uParam0->f_316[22 /*2*/] };
		Var19 = { uParam0->f_741.f_198 };
		if (!bLocal_561)
		{
			Var19.f_9 = (Var19.f_9 - 0.08f);
			GlobalFunc_4656(&Var17, &Var19);
		}
		if (bLocal_561)
		{
			func_354(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 27f, 2f, 5, 159f);
		}
		else
		{
			func_354(&(uParam0->f_420[14 /*8*/]), "FLY_STAT_WARN", &Var17, &Var19, 18f, 1.55f, 5, 106f);
		}
		func_379(uParam0->f_420[14 /*8*/], 0, 0);
		func_384("Shared", "Info_Icon_32", uParam0[iVar3 /*9*/], 0, 0, 5, 0);
		func_377(&(uParam0->f_316[22 /*2*/]), &(uParam0->f_741.f_198), "FLY_STAT_WARN", 0);
		GlobalFunc_4658(&(uParam0->f_741.f_198));
	}
	StringCopy(&Var30, "SPR_DESC_", 16);
	StringIntConCat(&Var30, Global_96383 + 1, 16);
	func_369(uParam0[7 /*9*/], 1);
	func_384("SPRRaces", &Var30, uParam0[7 /*9*/], 0, 0, 5, 0);
	GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[25 /*8*/]), 0.0047f, 0.0055f);
	HUD::SET_TEXT_LEADING(1);
	StringCopy(&cVar34, "SPR_DESC_", 16);
	if (bVar4)
	{
		StringIntConCat(&cVar34, Global_96383 + 1, 16);
	}
	else
	{
		StringIntConCat(&cVar34, 0, 16);
	}
	Var38 = { uParam0->f_316[16 /*2*/] };
	Var40 = { uParam0->f_741.f_198 };
	if (!bLocal_561)
	{
		Var40.f_9 = (Var40.f_9 - 0.108f);
		GlobalFunc_4656(&Var38, &Var40);
	}
	if (bLocal_561)
	{
		func_354(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 27f, 2f, 5, 159f);
	}
	else
	{
		func_354(&(uParam0->f_420[25 /*8*/]), &cVar34, &Var38, &Var40, 18f, 1.55f, 5, 106f);
	}
	func_379(uParam0->f_420[25 /*8*/], 0, 0);
	func_377(&(uParam0->f_316[16 /*2*/]), &(uParam0->f_741.f_198), &cVar34, 0);
	GlobalFunc_4658(&(uParam0->f_741.f_198));
	GlobalFunc_6063(&(uParam0->f_741.f_198));
	func_377(&(uParam0->f_316[4 /*2*/]), &(uParam0->f_741.f_198), "SPR_AWARDS_SUB", 0);
	func_377(&(uParam0->f_316[8 /*2*/]), &(uParam0->f_741.f_198), "SPR_BEST", 0);
	GlobalFunc_6062(&(uParam0->f_741.f_198));
	func_379(uParam0->f_420[22 /*8*/], 0, 0);
	GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[22 /*8*/]), 0, 0);
	func_362(&(uParam0->f_316[13 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR(Local_50.f_112[Global_96383]) * 1000, 6, "", 1, 0);
	GlobalFunc_4658(&(uParam0->f_741.f_198));
	func_379(uParam0->f_420[23 /*8*/], 0, 0);
	GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[23 /*8*/]), 0, 0);
	func_362(&(uParam0->f_316[14 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR((((Local_50.f_112[Global_96383] - Local_50.f_106[Global_96383]) / 2f) + Local_50.f_106[Global_96383])) * 1000, 6, "", 1, 0);
	GlobalFunc_4658(&(uParam0->f_741.f_198));
	func_379(uParam0->f_420[24 /*8*/], 0, 0);
	GlobalFunc_4659(&(uParam0->f_741.f_198), &(uParam0->f_420[24 /*8*/]), 0, 0);
	func_362(&(uParam0->f_316[15 /*2*/]), &(uParam0->f_741.f_198), SYSTEM::FLOOR(Local_50.f_106[Global_96383]) * 1000, 6, "", 1, 0);
	GlobalFunc_4658(&(uParam0->f_741.f_198));
	GlobalFunc_6063(&(uParam0->f_741.f_198));
}

float func_354(var uParam0, char* sParam1, float fParam2, var uParam3, float fParam4, float fParam5, int iParam6, float fParam7)//Position - 0xEEFA
{
	int iVar0;
	int iVar1;
	
	GlobalFunc_981(uParam3, 0);
	HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(sParam1);
	iVar0 = HUD::_END_TEXT_COMMAND_LINE_COUNT(*fParam2, fParam2->f_1);
	iVar1 = 720;
	if (!GRAPHICS::GET_IS_WIDESCREEN())
	{
		iVar1 = 480;
	}
	uParam0->f_3 = GlobalFunc_4631(((SYSTEM::TO_FLOAT(iVar0) * fParam4) - fParam5), iVar1);
	uParam0->f_1 = GlobalFunc_4631(((fParam7 + ((SYSTEM::TO_FLOAT(iParam6) + (SYSTEM::TO_FLOAT(iVar0) * 0.5f)) * fParam4)) - (fParam5 * 0.5f)), iVar1);
	return 0f;
}








void func_362(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0xF09B
{
	char* sVar0;
	
	if (GlobalFunc_5263())
	{
		GlobalFunc_981(uParam1, 0);
		HUD::SET_TEXT_RIGHT_JUSTIFY(iParam6);
		HUD::SET_TEXT_CENTRE(iParam5);
		if (func_50(sParam4))
		{
			sVar0 = "STRING";
		}
		else
		{
			sVar0 = sParam4;
		}
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, iParam3);
		HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_364(*uParam0), func_363(uParam0->f_1), 0);
	}
}

float func_363(float fParam0)//Position - 0xF0F5
{
	return (fParam0 + fLocal_13);
}

float func_364(float fParam0)//Position - 0xF102
{
	return (fParam0 + fLocal_12);
}





void func_369(float fParam0, int iParam1)//Position - 0xF1CB
{
	fParam0->f_4 = 255;
	fParam0->f_5 = 255;
	fParam0->f_6 = 255;
	if (iParam1 == 1)
	{
		fParam0->f_7 = 255;
	}
}



void func_372(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)//Position - 0xF237
{
	var uVar0;
	
	uVar0 = sParam2;
	if (!func_50(uVar0))
	{
		if (GlobalFunc_5263())
		{
			GlobalFunc_981(uParam1, 0);
			HUD::SET_TEXT_RIGHT_JUSTIFY(iParam4);
			HUD::SET_TEXT_CENTRE(iParam3);
			func_373(func_364(*uParam0), func_363(uParam0->f_1), uVar0, 0);
		}
	}
}

void func_373(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0xF27D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(uParam0, uParam1, iParam3);
}




void func_377(float fParam0, var uParam1, char* sParam2, bool bParam3)//Position - 0xF315
{
	if (bParam3)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	}
	func_372(fParam0, uParam1, sParam2, 0, 0);
}


void func_379(struct<8> Param0, int iParam8, int iParam9)//Position - 0xF342
{
	struct<8> Var0;
	
	Var0 = { Param0 };
	switch (iParam8)
	{
		case 2:
			GlobalFunc_2693(&Var0);
			break;
		
		case 1:
			GlobalFunc_1450(&Var0);
			break;
		
		case 3:
			GlobalFunc_2692(&Var0);
			break;
		
		case 4:
			GlobalFunc_2691(&Var0);
			break;
	}
	if (GlobalFunc_5263())
	{
		if (iParam9 == 1)
		{
			GRAPHICS::DRAW_RECT(func_364(Var0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
		else
		{
			GRAPHICS::DRAW_RECT(func_364(Var0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, 0);
		}
	}
}





void func_384(char* sParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xF483
{
	struct<9> Var0;
	
	Var0 = { *fParam2 };
	switch (iParam4)
	{
		case 0:
			GlobalFunc_1451(&Var0);
			break;
		
		case 1:
			GlobalFunc_1450(&Var0);
			break;
		
		case 5:
			GlobalFunc_1449(&Var0);
			break;
		
		case 6:
			GlobalFunc_1448(&Var0);
			break;
		
		case 7:
			GlobalFunc_1447(&Var0);
			break;
		
		case 8:
			GlobalFunc_1446(&Var0);
			break;
		
		case 9:
			GlobalFunc_1445(&Var0);
			break;
	}
	if (GlobalFunc_5263())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam5);
		if (iParam3 == 1)
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_364(Var0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		else
		{
			GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_364(Var0), func_363(Var0.f_1), Var0.f_2, Var0.f_3, Var0.f_8, Var0.f_4, Var0.f_5, Var0.f_6, Var0.f_7, iParam6);
		}
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
	}
}








int func_392(var uParam0, var uParam1)//Position - 0xF647
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iLocal_502 == 1)
	{
		return 1;
	}
	if (iLocal_503)
	{
		return 0;
	}
	if (SYSTEM::TIMERA() < 500)
	{
		return 1;
	}
	if (bLocal_501)
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
		{
			iLocal_495 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_495, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			iLocal_502 = 1;
			iLocal_503 = 1;
			*uParam0 = 0;
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
		{
			iLocal_495 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND_FRONTEND(iLocal_495, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
			HUD::CLEAR_HELP(1);
			func_515(&(Local_50.f_119));
			iLocal_502 = 1;
		}
		else
		{
			return 1;
		}
	}
	else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 238))
	{
		iLocal_495 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_495, "QUIT", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
		GlobalFunc_5210(&(Local_50.f_119), 0, 0, 1, 1);
		GlobalFunc_813(&(Local_50.f_119), "FE_HLP29", 2, 201, 1, 1, 0);
		GlobalFunc_813(&(Local_50.f_119), "FE_HLP31", 2, 202, 1, 1, 0);
		GlobalFunc_235(&uLocal_497);
		iLocal_502 = 1;
		HUD::CLEAR_HELP(1);
		return 1;
	}
	iVar0 = 0;
	if (MISC::IS_PC_VERSION() && bLocal_501 == 0)
	{
		if (PAD::_IS_USING_KEYBOARD_2(2))
		{
			Global_2543381 = GlobalFunc_6545(0.201f, 0.222f, 0.198f, 0.0375f, 0.034f, 5, 255, 0, 1);
			GlobalFunc_1393(0, Global_96383);
			if (GlobalFunc_1391())
			{
				if (Global_2543381 == Global_96383)
				{
					iVar0 = 1;
				}
				else
				{
					iLocal_495 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND(iLocal_495, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
					Global_96383 = Global_2543381;
					func_515(&(Local_50.f_119));
				}
			}
		}
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(2, 201) || iVar0 == 1)
	{
		iVar0 = 0;
		if (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_12[Global_96383 /*8*/].f_4 == 0)
		{
			iLocal_495 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND(iLocal_495, "CANCEL", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		}
		else
		{
			iLocal_495 = AUDIO::GET_SOUND_ID();
			AUDIO::PLAY_SOUND(iLocal_495, "SELECT", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
			*uParam0 = 1;
			return 0;
		}
	}
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, 188) || GlobalFunc_4661(0, uParam1)) || PAD::IS_CONTROL_JUST_PRESSED(2, 241))
	{
		iVar1 = (Global_96383 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 4;
		}
		iLocal_495 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND(iLocal_495, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_96383 = iVar1;
		func_515(&(Local_50.f_119));
	}
	if ((PAD::IS_CONTROL_JUST_RELEASED(2, 187) || GlobalFunc_4661(1, uParam1)) || PAD::IS_CONTROL_JUST_PRESSED(2, 242))
	{
		iVar2 = Global_96383 + 1;
		if (iVar2 > 4)
		{
			iVar2 = 0;
		}
		iLocal_495 = AUDIO::GET_SOUND_ID();
		AUDIO::PLAY_SOUND(iLocal_495, "NAV_UP_DOWN", "HUD_MINI_GAME_SOUNDSET", 0, 0, 1);
		Global_96383 = iVar2;
		func_515(&(Local_50.f_119));
	}
	return 1;
}






int func_398()//Position - 0xFC36
{
	int iVar0;
	
	switch (iLocal_496)
	{
		case 0:
			HUD::CLEAR_HELP(1);
			HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("SPRRaces", 0);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHUD", 0);
			iLocal_496 = 1;
			break;
		
		case 1:
			if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("SP_SPR", 3))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("SPRRaces"))
				{
					if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHUD"))
					{
						iLocal_496 = 2;
					}
				}
			}
			break;
		
		case 2:
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(Local_50.f_119));
			Local_50.f_119 = 0;
			func_515(&(Local_50.f_119));
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 512);
			}
			GlobalFunc_7632(1);
			GRAPHICS::SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(1);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_50.f_1, 4);
			GlobalFunc_5105();
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Local_50.f_11)
			{
				iLocal_506[iVar0] = -1;
				iVar0++;
			}
			func_402(&uLocal_562);
			func_399();
			GRAPHICS::ANIMPOSTFX_PLAY("MinigameTransitionIn", 0, 1);
			iLocal_496 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_399()//Position - 0xFD3E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_12[iVar0 /*8*/] = { func_401(iVar0) };
		MemCopy(&(Local_50.f_24[iVar0 /*8*/]), {Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_12[iVar0 /*8*/]}, 8);
		Local_50.f_106[iVar0] = func_400(iVar0);
		Local_50.f_112[iVar0] = func_22(iVar0);
		if (iVar0 < (5 - 1))
		{
			if (Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[iVar0] > Local_50.f_112[iVar0] || Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_6[iVar0] <= 0f)
			{
				Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_12[iVar0 + 1 /*8*/].f_4 = 0;
			}
			else
			{
				Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_12[iVar0 + 1 /*8*/].f_4 = 1;
			}
		}
		iVar0++;
	}
	Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_12[0 /*8*/].f_4 = 1;
}

float func_400(int iParam0)//Position - 0xFE13
{
	switch (iParam0)
	{
		case 0:
			return 70f;
			break;
		
		case 1:
			return 75f;
			break;
		
		case 2:
			return 72f;
			break;
		
		case 3:
			return 120f;
			break;
		
		case 4:
			return 115f;
			break;
	}
	return -1f;
}

struct<4> func_401(int iParam0)//Position - 0xFE78
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "BRIDGEBINGE", 16);
			break;
		
		case 1:
			StringCopy(&Var0, "VINEWOOD", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "BRIDGEWORK", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "AIRPORT", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "ALTITUDE", 16);
			break;
	}
	return Var0;
}

void func_402(var uParam0)//Position - 0xFEE8
{
	GlobalFunc_2420();
	bLocal_561 = GRAPHICS::GET_IS_WIDESCREEN();
	GlobalFunc_3491(uParam0);
	GlobalFunc_6537(&(uParam0->f_741));
	func_403(uParam0);
}

void func_403(var uParam0)//Position - 0xFF10
{
	bool bVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	bVar0 = GRAPHICS::GET_IS_WIDESCREEN();
	GlobalFunc_6536(&(uParam0->f_316[0 /*2*/]), 262f, (71f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[1 /*2*/]), (257f + 127f), (125f - GlobalFunc_4663(0.00417f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[2 /*2*/]), (513f + 127f), (125f - GlobalFunc_4663(0.00417f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[3 /*2*/]), (769f + 127f), (125f - GlobalFunc_4663(0.00417f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[17 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 162f, 1);
	GlobalFunc_6536(&(uParam0->f_316[18 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 189f, 1);
	GlobalFunc_6536(&(uParam0->f_316[19 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 216f, 1);
	GlobalFunc_6536(&(uParam0->f_316[20 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 243f, 1);
	GlobalFunc_6536(&(uParam0->f_316[21 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 270f, 1);
	GlobalFunc_6536(&(uParam0->f_316[22 /*2*/]), (257f + GlobalFunc_4633(0.0047f, 1280, 1)), 297f, 1);
	GlobalFunc_6536(&(uParam0->f_316[16 /*2*/]), (513f + GlobalFunc_4633(0.0047f, 1280, 1)), (299f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[4 /*2*/]), (769f + GlobalFunc_4633(0.0047f, 1280, 1)), 297f, 1);
	GlobalFunc_6536(&(uParam0->f_316[5 /*2*/]), 769f, 297f, 1);
	GlobalFunc_6536(&(uParam0->f_316[8 /*2*/]), (769f + GlobalFunc_4633(0.0047f, 1280, 1)), 351f, 1);
	GlobalFunc_6536(&(uParam0->f_316[9 /*2*/]), 324f, 351f, 1);
	GlobalFunc_6536(&(uParam0->f_316[6 /*2*/]), (769f + GlobalFunc_4633(0.0047f, 1280, 1)), (324f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[7 /*2*/]), 324f, (324f - GlobalFunc_4663(0.00278f, 720, 1)), 1);
	GlobalFunc_6536(&(uParam0->f_316[15 /*2*/]), 810f, 459f, 1);
	GlobalFunc_6536(&(uParam0->f_316[14 /*2*/]), 896f, 459f, 1);
	GlobalFunc_6536(&(uParam0->f_316[13 /*2*/]), 982f, 459f, 1);
	func_251(uParam0[0 /*9*/], 257f, 55f, 766f, 105f, 1);
	HUD::GET_HUD_COLOUR(117, &uVar1, &uVar2, &uVar3, &uVar4);
	func_250(uParam0[0 /*9*/], uVar1, uVar2, uVar3, uVar4);
	func_251(uParam0[1 /*9*/], 496f, 171f, 32f, 32f, 0);
	func_250(uParam0[1 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[2 /*9*/], 496f, 198f, 32f, 32f, 0);
	func_250(uParam0[2 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[3 /*9*/], 496f, 225f, 32f, 32f, 0);
	func_250(uParam0[3 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[4 /*9*/], 496f, 252f, 32f, 32f, 0);
	func_250(uParam0[4 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[5 /*9*/], 496f, 279f, 32f, 32f, 0);
	func_250(uParam0[5 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[6 /*9*/], (486f + GlobalFunc_4633(0.0047f, 1280, 1)), 310f, 32f, 32f, 0);
	func_250(uParam0[6 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[7 /*9*/], 640f, 224f, 256f, 256f, 0);
	func_250(uParam0[7 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[9 /*9*/], 896f, 223f, 128f, 128f, 0);
	func_250(uParam0[9 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[13 /*9*/], 770.5f, 374.5f, 80f, 80f, 1);
	func_250(uParam0[13 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[12 /*9*/], 856f, 374.5f, 80f, 80f, 1);
	func_250(uParam0[12 /*9*/], 255, 255, 255, 255);
	func_251(uParam0[11 /*9*/], 941.5f, 374.5f, 80f, 80f, 1);
	func_250(uParam0[11 /*9*/], 255, 255, 255, 255);
	GlobalFunc_7543(&(uParam0->f_420[3 /*8*/]), 257f, 114f, 254f, 5f, 1);
	GlobalFunc_4630(&(uParam0->f_420[3 /*8*/]), 70, 70, 130, 255);
	GlobalFunc_7543(&(uParam0->f_420[4 /*8*/]), 513f, 114f, 254f, 5f, 1);
	GlobalFunc_4630(&(uParam0->f_420[4 /*8*/]), 70, 70, 130, 255);
	GlobalFunc_7543(&(uParam0->f_420[5 /*8*/]), 769f, 114f, 254f, 5f, 1);
	GlobalFunc_4630(&(uParam0->f_420[5 /*8*/]), 70, 70, 130, 255);
	GlobalFunc_7543(&(uParam0->f_420[0 /*8*/]), 257f, 119f, 254f, 26f, 1);
	GlobalFunc_3480(&(uParam0->f_420[0 /*8*/]), 1, 1);
	GlobalFunc_7543(&(uParam0->f_420[1 /*8*/]), 513f, 119f, 254f, 26f, 1);
	GlobalFunc_3480(&(uParam0->f_420[1 /*8*/]), 1, 1);
	GlobalFunc_7543(&(uParam0->f_420[2 /*8*/]), 769f, 119f, 254f, 26f, 1);
	GlobalFunc_3480(&(uParam0->f_420[2 /*8*/]), 1, 1);
	GlobalFunc_7543(&(uParam0->f_420[7 /*8*/]), 513f, 159f, 254f, 133f, 1);
	GlobalFunc_3480(&(uParam0->f_420[7 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[8 /*8*/]), 769f, 159f, 254f, 133f, 1);
	GlobalFunc_3480(&(uParam0->f_420[8 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[9 /*8*/]), 257f, 159f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[9 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[10 /*8*/]), 257f, 186f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[10 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[11 /*8*/]), 257f, 213f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[11 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[12 /*8*/]), 257f, 240f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[12 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[13 /*8*/]), 257f, 267f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[13 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[26 /*8*/]), 257f, 294f, 254f, 2f, 1);
	GlobalFunc_3480(&(uParam0->f_420[26 /*8*/]), 1, 1);
	GlobalFunc_7543(&(uParam0->f_420[14 /*8*/]), 257f, 294f, 254f, 75f, 1);
	GlobalFunc_3480(&(uParam0->f_420[14 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[15 /*8*/]), 257f, 294f, (254f - 32f), 75f, 1);
	GlobalFunc_3480(&(uParam0->f_420[15 /*8*/]), 1, 1);
	GlobalFunc_7543(&(uParam0->f_420[25 /*8*/]), 513f, 294f, 254f, 133f, 1);
	GlobalFunc_3480(&(uParam0->f_420[25 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[16 /*8*/]), 769f, 294f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[16 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[17 /*8*/]), 769f, 321f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[17 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[18 /*8*/]), 769f, 348f, 254f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[18 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[21 /*8*/]), 769f, 375f, 83f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[21 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[20 /*8*/]), 854f, 375f, 84f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[20 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[19 /*8*/]), 940f, 375f, 83f, 84f, 1);
	GlobalFunc_3480(&(uParam0->f_420[19 /*8*/]), 117, 1);
	GlobalFunc_7543(&(uParam0->f_420[22 /*8*/]), 769f, 456f, 83f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[22 /*8*/]), 109, 1);
	GlobalFunc_7543(&(uParam0->f_420[23 /*8*/]), 854f, 456f, 84f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[23 /*8*/]), 108, 1);
	GlobalFunc_7543(&(uParam0->f_420[24 /*8*/]), 940f, 456f, 83f, 25f, 1);
	GlobalFunc_3480(&(uParam0->f_420[24 /*8*/]), 107, 1);
	if (!bVar0)
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			(*uParam0)[iVar5 /*9*/] = ((((*uParam0)[iVar5 /*9*/] - 0.5f) * 1.33f) + 0.5f);
			(uParam0[iVar5 /*9*/])->f_2 = ((uParam0[iVar5 /*9*/])->f_2 * 1.33f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 23)
		{
			uParam0->f_316[iVar5 /*2*/] = (((uParam0->f_316[iVar5 /*2*/] - 0.5f) * 1.33f) + 0.5f);
			iVar5++;
		}
		iVar5 = 0;
		while (iVar5 < 27)
		{
			uParam0->f_420[iVar5 /*8*/] = (((uParam0->f_420[iVar5 /*8*/] - 0.5f) * 1.33f) + 0.5f);
			uParam0->f_420[iVar5 /*8*/].f_2 = (uParam0->f_420[iVar5 /*8*/].f_2 * 1.33f);
			iVar5++;
		}
	}
	uParam0->f_986 = 1;
}




int func_407(var uParam0, bool bParam1)//Position - 0x10B40
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (!iLocal_504)
		{
			iVar0 = 0;
			if (uParam0->f_358[0 /*189*/].f_13 > 0f)
			{
				if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_106[Local_50.f_10])
				{
					iVar0 = 1;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= (((Local_50.f_112[Local_50.f_10] - Local_50.f_106[Local_50.f_10]) / 2f) + Local_50.f_106[Local_50.f_10]))
				{
					iVar0 = 2;
				}
				else if (uParam0->f_358[0 /*189*/].f_13 <= Local_50.f_112[Local_50.f_10])
				{
					iVar0 = 3;
				}
			}
			if (iVar0 == 0)
			{
			}
			func_435(Local_50.f_10, &(Local_50.f_65[Local_50.f_10 /*8*/]));
			if (bParam1)
			{
				func_432(Local_50.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0);
				iLocal_504 = 1;
				return 1;
			}
			else if (func_408(Local_50.f_10, uParam0->f_358[0 /*189*/].f_13, iVar0))
			{
				iLocal_504 = 1;
				return 1;
			}
		}
	}
	else if (bParam1)
	{
		iLocal_504 = 1;
	}
	return 0;
}

int func_408(int iParam0, float fParam1, int iParam2)//Position - 0x10C3F
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_432(iParam0, fParam1, iParam2);
		Global_1835013.f_2 = 1;
	}
	if (GlobalFunc_9181(&uLocal_1549))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}
























void func_432(int iParam0, float fParam1, int iParam2)//Position - 0x117BA
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<6> Var3[3];
	struct<8> Var22[3];
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (iParam2 == 1)
	{
		iVar2++;
	}
	else if (iParam2 == 2)
	{
		iVar1++;
	}
	else if (iParam2 == 3)
	{
		iVar0++;
	}
	StringCopy(&(Var22[0 /*8*/]), "GameType", 32);
	StringCopy(&(Var22[1 /*8*/]), "Location", 32);
	StringCopy(&(Var22[2 /*8*/]), "Type", 32);
	StringCopy(&(Var3[0 /*6*/]), "SP", 24);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var3[1 /*6*/]), "TRIAL_05", 24);
			break;
	}
	StringCopy(&(Var3[2 /*6*/]), "StuntPlaneRace", 24);
	if (GlobalFunc_5284(817, &Var3, &Var22, 3, -1, 1, 0))
	{
		if (iParam2 <= 3 && iParam2 > 0)
		{
			GlobalFunc_5768(817, 131, -SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		}
		else
		{
			GlobalFunc_5768(817, 131, 0, 0f, 0);
		}
		GlobalFunc_5768(817, 96, ((iVar0 * 1 + iVar1 * 2) + iVar2 * 3), 0f, 0);
		GlobalFunc_5768(817, 2, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		GlobalFunc_5768(817, 147, SYSTEM::CEIL((fParam1 * 100f)) * 10, 0f, 0);
		GlobalFunc_5768(817, 149, 0, 0f, 0);
		GlobalFunc_5768(817, 148, 0, 0f, 0);
		GlobalFunc_5768(817, 109, 1, 0f, 0);
		GlobalFunc_5768(817, 157, iVar0, 0f, 0);
		GlobalFunc_5768(817, 158, iVar1, 0f, 0);
		GlobalFunc_5768(817, 86, iVar2, 0f, 0);
	}
}



void func_435(int iParam0, char[4] cParam1)//Position - 0x11BD0
{
	struct<3> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TRIAL_01", 24);
			cParam1 = "SPTTLB_1";
			break;
		
		case 1:
			StringCopy(&Var0, "TRIAL_02", 24);
			cParam1 = "SPTTLB_2";
			break;
		
		case 2:
			StringCopy(&Var0, "TRIAL_03", 24);
			cParam1 = "SPTTLB_3";
			break;
		
		case 3:
			StringCopy(&Var0, "TRIAL_04", 24);
			cParam1 = "SPTTLB_4";
			break;
		
		case 4:
			StringCopy(&Var0, "TRIAL_05", 24);
			cParam1 = "SPTTLB_5";
			break;
	}
	GlobalFunc_7120(&uLocal_1549, 86, &Var0, cParam1, -1, -1, 0, 0);
}















void func_450(var uParam0, int iParam1, char[4] cParam2)//Position - 0x168E5
{
	func_138(&(Local_50.f_119), 1128792064, 1, 0, 1, 1065353216);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	func_435(iParam1, cParam2);
	GlobalFunc_10706(uParam0, &uLocal_1549);
}






























































void func_512(bool bParam0)//Position - 0x1D453
{
	if (bParam0)
	{
		GlobalFunc_5210(&(Local_50.f_119), 0, 0, 1, 1);
		GlobalFunc_813(&(Local_50.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		GlobalFunc_813(&(Local_50.f_119), "SCLB_PROFILE", 2, 217, 1, 1, 0);
		GlobalFunc_5275(&(Local_50.f_119), 1);
	}
	else
	{
		GlobalFunc_5210(&(Local_50.f_119), 0, 0, 1, 1);
		GlobalFunc_813(&(Local_50.f_119), "HUD_INPUT53", 2, 202, 1, 1, 0);
		GlobalFunc_5275(&(Local_50.f_119), 1);
	}
}



void func_515(var uParam0)//Position - 0x1D523
{
	if (Global_96383 != 0 && Global_SAVE_DATA.SPTT_DATA_SAVED_STRUCT.f_12[Global_96383 /*8*/].f_4 == 0)
	{
		GlobalFunc_5210(uParam0, 0, 0, 1, 1);
		GlobalFunc_813(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			GlobalFunc_813(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_505 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && iLocal_504)
		{
			GlobalFunc_813(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_505 = 0;
		}
		else
		{
			iLocal_505 = 0;
		}
	}
	else
	{
		GlobalFunc_5210(uParam0, 0, 0, 1, 1);
		GlobalFunc_813(uParam0, "FE_HLP4", 2, 201, 1, 1, 0);
		GlobalFunc_813(uParam0, "IB_QUIT", 2, 202, 1, 1, 0);
		if (!PLAYER::IS_PLAYER_ONLINE())
		{
			GlobalFunc_813(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_505 = 1;
		}
		else if (PLAYER::IS_PLAYER_ONLINE() && iLocal_504)
		{
			GlobalFunc_813(uParam0, "HUD_INPUT68", 2, 211, 1, 1, 0);
			iLocal_505 = 0;
		}
		else
		{
			iLocal_505 = 0;
		}
	}
	GlobalFunc_5275(&(Local_50.f_119), 1);
}

void func_516()//Position - 0x1D635
{
	GlobalFunc_5770();
	GlobalFunc_2420();
	GlobalFunc_173(&(Local_2411.f_358[0 /*189*/].f_24), 0, 0, "PilotDispatch", 0, 1);
	GlobalFunc_173(&uLocal_2081, 0, 0, "PilotDispatch", 0, 1);
	func_533(&Local_2411);
	func_517(&Local_2411, Local_50.f_10);
	if (ENTITY::DOES_ENTITY_EXIST(Local_2411.f_358[0 /*189*/].f_9))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2411.f_358[0 /*189*/].f_9, 4);
	}
}

void func_517(var uParam0, int iParam1)//Position - 0x1D69F
{
	switch (iParam1)
	{
		case 0:
			func_532(&Local_2411);
			break;
		
		case 1:
			func_531(&Local_2411);
			break;
		
		case 2:
			func_530(&Local_2411);
			func_529(&(Local_2411.f_27[2 /*10*/]), 1);
			func_529(&(Local_2411.f_27[3 /*10*/]), 1);
			break;
		
		case 3:
			func_528(&Local_2411);
			break;
		
		case 4:
			func_518(&Local_2411);
			break;
	}
}

void func_518(var uParam0)//Position - 0x1D718
{
	func_533(uParam0);
	uParam0->f_12 = 32;
	func_527(&(uParam0->f_27[0 /*10*/]), 947.1314f, 4146.46f, 80.494f, 30f, 2, 0);
	func_527(&(uParam0->f_27[1 /*10*/]), 762.498f, 4589.213f, 105.5935f, 30f, 2, 0);
	func_527(&(uParam0->f_27[2 /*10*/]), 659.2919f, 4806.028f, 175.759f, 30f, 2, 0);
	func_527(&(uParam0->f_27[3 /*10*/]), 621.3849f, 5032.051f, 343.6387f, 30f, 2, 0);
	func_527(&(uParam0->f_27[4 /*10*/]), 503.8404f, 5297.335f, 508.6478f, 30f, 2, 0);
	func_527(&(uParam0->f_27[5 /*10*/]), 555.4404f, 5426.935f, 708.948f, 30f, 2, 0);
	func_527(&(uParam0->f_27[6 /*10*/]), 637.6946f, 5491.08f, 717.522f, 30f, 2, 0);
	func_527(&(uParam0->f_27[7 /*10*/]), 790.3913f, 5491.866f, 566.103f, 30f, 2, 0);
	func_527(&(uParam0->f_27[8 /*10*/]), 910.6804f, 5313.552f, 388.8567f, 30f, 2, 0);
	func_527(&(uParam0->f_27[9 /*10*/]), 1159.749f, 5183.155f, 253.1068f, 30f, 2, 0);
	func_527(&(uParam0->f_27[10 /*10*/]), 1354.13f, 4998.078f, 141.6288f, 30f, 2, 0);
	func_527(&(uParam0->f_27[11 /*10*/]), 1612.532f, 4941.23f, 61.8549f, 30f, 2, 0);
	func_527(&(uParam0->f_27[12 /*10*/]), 2200.396f, 4800.332f, 69.9321f, 30f, 3, 2);
	func_527(&(uParam0->f_27[13 /*10*/]), 2527.632f, 5144.98f, 66.763f, 30f, 3, 2);
	func_527(&(uParam0->f_27[14 /*10*/]), 2527.131f, 5275.334f, 62.3622f, 30f, 2, 0);
	func_527(&(uParam0->f_27[15 /*10*/]), 2413.345f, 5443.203f, 99.4297f, 30f, 2, 0);
	func_527(&(uParam0->f_27[16 /*10*/]), 2236.067f, 5524.246f, 108.3291f, 30f, 2, 0);
	func_527(&(uParam0->f_27[17 /*10*/]), 1944.463f, 5520.007f, 177.2808f, 30f, 2, 0);
	func_527(&(uParam0->f_27[18 /*10*/]), 1712.477f, 5624.937f, 324.9427f, 30f, 2, 0);
	func_527(&(uParam0->f_27[19 /*10*/]), 1601.158f, 5663.75f, 335.8832f, 30f, 2, 0);
	func_527(&(uParam0->f_27[20 /*10*/]), 1410.764f, 5675.836f, 425.9678f, 30f, 2, 0);
	func_527(&(uParam0->f_27[21 /*10*/]), 1225.682f, 5678.654f, 497.3169f, 30f, 2, 0);
	func_527(&(uParam0->f_27[22 /*10*/]), 1094.47f, 5664.07f, 563.0829f, 30f, 2, 0);
	func_527(&(uParam0->f_27[23 /*10*/]), 1001.427f, 5633.827f, 633.2537f, 30f, 2, 0);
	func_527(&(uParam0->f_27[24 /*10*/]), 875.5358f, 5642.667f, 682.5352f, 30f, 2, 0);
	func_527(&(uParam0->f_27[25 /*10*/]), 741.3275f, 5688.046f, 709.5683f, 30f, 2, 0);
	func_527(&(uParam0->f_27[26 /*10*/]), 487.2532f, 5654.821f, 802.0096f, 30f, 3, 1);
	func_527(&(uParam0->f_27[27 /*10*/]), 362.6602f, 5620.538f, 723.2353f, 30f, 2, 0);
	func_527(&(uParam0->f_27[28 /*10*/]), 134.4865f, 5555.637f, 520.3109f, 30f, 2, 0);
	func_527(&(uParam0->f_27[29 /*10*/]), -128.2242f, 5510.46f, 307.4505f, 30f, 2, 0);
	func_527(&(uParam0->f_27[30 /*10*/]), -397.7556f, 5438.69f, 175.4529f, 30f, 2, 0);
	func_527(&(uParam0->f_27[31 /*10*/]), -520.8975f, 5424.283f, 165.285f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_526(&(uParam0->f_358[0 /*189*/]));
	GlobalFunc_4627(&(uParam0->f_358[0 /*189*/]), "Player");
	func_521(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_50.f_1);
	GlobalFunc_4626(&(uParam0->f_358[0 /*189*/]), 1135.682f, 3700.644f, 80.494f, 22.3451f);
	func_519(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_519(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1DBD0
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = iParam2;
	uParam0->f_22 = iParam3;
}


void func_521(var uParam0, int iParam1, var uParam2)//Position - 0x1DC02
{
	uParam0->f_8 = iParam1;
	uParam0->f_9 = uParam2;
	func_522(uParam2, &(Local_50.f_243));
}

void func_522(int iParam0, var uParam1)//Position - 0x1DC20
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		GlobalFunc_14(uParam1);
		uParam1->f_42 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_38), &(uParam1->f_39), &(uParam1->f_40));
		uParam1->f_41 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_43 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_45 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_46 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_50), &(uParam1->f_51), &(uParam1->f_52));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_53), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_53), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_53), 31);
		}
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			uParam1->f_41 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_44 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 2:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::SET_BIT(&(uParam1->f_53), 22);
						break;
					
					case 3:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_53), 23);
						MISC::CLEAR_BIT(&(uParam1->f_53), 22);
						break;
					
					case 4:
						MISC::SET_BIT(&(uParam1->f_53), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_53), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 12);
		}
		func_523(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_53), GlobalFunc_101(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_53), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_53), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_53), 27);
		}
	}
}

int func_523(var uParam0, var uParam1, var uParam2)//Position - 0x1DECC
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}



void func_526(var uParam0)//Position - 0x1E065
{
	uParam0->f_10 = 0;
	uParam0->f_11 = -1;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0f;
	uParam0->f_23 = 13;
}

void func_527(var uParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)//Position - 0x1E087
{
	*uParam0 = { Param1 };
	uParam0->f_3 = fParam4;
	uParam0->f_7 = iParam5;
	uParam0->f_8 = iParam6;
}

void func_528(var uParam0)//Position - 0x1E0A9
{
	func_533(uParam0);
	uParam0->f_12 = 28;
	func_527(&(uParam0->f_27[0 /*10*/]), -1737.725f, -2720.967f, 38f, 30f, 2, 0);
	func_527(&(uParam0->f_27[1 /*10*/]), -1384.515f, -2880.773f, 38f, 30f, 2, 0);
	func_527(&(uParam0->f_27[2 /*10*/]), -1156.435f, -2957.284f, 40f, 30f, 2, 0);
	func_527(&(uParam0->f_27[3 /*10*/]), -795.3043f, -2987.754f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_27[4 /*10*/]), -429.0231f, -2969.528f, 30f, 30f, 3, 1);
	func_527(&(uParam0->f_27[5 /*10*/]), -15.5168f, -2912.484f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_27[6 /*10*/]), 656.9059f, -2798.444f, 80f, 30f, 3, 2);
	func_527(&(uParam0->f_27[7 /*10*/]), 990.7529f, -2452.092f, 70f, 30f, 2, 0);
	func_527(&(uParam0->f_27[8 /*10*/]), 1019.531f, -2182.119f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_27[9 /*10*/]), 1019.899f, -1886.15f, 60f, 30f, 2, 0);
	func_527(&(uParam0->f_27[10 /*10*/]), 944.9045f, -1488.589f, 107.7f, 30f, 2, 0);
	func_527(&(uParam0->f_27[11 /*10*/]), 698.908f, -1013.024f, 100.5f, 30f, 3, 2);
	func_527(&(uParam0->f_27[12 /*10*/]), 388.7276f, -822.8241f, 90f, 30f, 2, 0);
	func_527(&(uParam0->f_27[13 /*10*/]), 20.7016f, -653.9637f, 101.8f, 30f, 3, 2);
	func_527(&(uParam0->f_27[14 /*10*/]), -135.3874f, -670.6069f, 112f, 30f, 3, 3);
	func_527(&(uParam0->f_27[15 /*10*/]), -360.3365f, -655.137f, 90f, 30f, 2, 0);
	func_527(&(uParam0->f_27[16 /*10*/]), -700.3533f, -657.1476f, 70f, 30f, 2, 0);
	func_527(&(uParam0->f_27[17 /*10*/]), -951.5859f, -654.0262f, 68f, 30f, 3, 2);
	func_527(&(uParam0->f_27[18 /*10*/]), -1125.587f, -769.7247f, 67f, 30f, 2, 0);
	func_527(&(uParam0->f_27[19 /*10*/]), -1281.291f, -851.0229f, 82f, 30f, 3, 1);
	func_527(&(uParam0->f_27[20 /*10*/]), -1580.865f, -1009.944f, 40f, 30f, 2, 0);
	func_527(&(uParam0->f_27[21 /*10*/]), -1877.52f, -1152.927f, 30f, 30f, 2, 0);
	func_527(&(uParam0->f_27[22 /*10*/]), -2101.111f, -1330.267f, 20f, 30f, 2, 0);
	func_527(&(uParam0->f_27[23 /*10*/]), -2230.15f, -1555.89f, 10f, 30f, 3, 2);
	func_527(&(uParam0->f_27[24 /*10*/]), -2214.946f, -1978.262f, 10f, 30f, 2, 0);
	func_527(&(uParam0->f_27[25 /*10*/]), -2055.091f, -2359.626f, 20f, 30f, 2, 0);
	func_527(&(uParam0->f_27[26 /*10*/]), -1893.392f, -2559.46f, 22f, 30f, 2, 0);
	func_527(&(uParam0->f_27[27 /*10*/]), -1737.725f, -2720.967f, 83.7f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_526(&(uParam0->f_358[0 /*189*/]));
	GlobalFunc_4627(&(uParam0->f_358[0 /*189*/]), "Player");
	func_521(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_50.f_1);
	GlobalFunc_4626(&(uParam0->f_358[0 /*189*/]), -2102.16f, -2556.082f, 38f, 245.6561f);
	func_519(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_529(var uParam0, int iParam1)//Position - 0x1E4D9
{
	func_309(&(uParam0->f_9), iParam1);
}

void func_530(var uParam0)//Position - 0x1E4EB
{
	func_533(uParam0);
	uParam0->f_12 = 21;
	func_527(&(uParam0->f_27[0 /*10*/]), 1167.2f, -2557.195f, 90f, 30f, 2, 0);
	func_527(&(uParam0->f_27[1 /*10*/]), 869.9235f, -2613.705f, 57.8325f, 30f, 2, 0);
	func_527(&(uParam0->f_27[2 /*10*/]), 652.3818f, -2651.991f, 54.935f, 30f, 2, 0);
	func_527(&(uParam0->f_27[3 /*10*/]), 249.3849f, -2579.821f, 60.1264f, 30f, 3, 2);
	func_527(&(uParam0->f_27[4 /*10*/]), -31.7179f, -2590.793f, 19.9452f, 30f, 2, 0);
	func_527(&(uParam0->f_27[5 /*10*/]), -317.409f, -2582.66f, 48.7654f, 30f, 3, 3);
	func_527(&(uParam0->f_27[6 /*10*/]), -395.6915f, -2334.057f, 39.3612f, 30f, 2, 0);
	func_527(&(uParam0->f_27[7 /*10*/]), -300.2367f, -2118.431f, 53.3728f, 30f, 2, 0);
	func_527(&(uParam0->f_27[8 /*10*/]), -157.1812f, -1967.885f, 56.4093f, 30f, 3, 2);
	func_527(&(uParam0->f_27[9 /*10*/]), -199.4688f, -1803.328f, 13.6363f, 30f, 2, 0);
	func_527(&(uParam0->f_27[10 /*10*/]), -383.5264f, -1738.067f, 60.8194f, 30f, 2, 0);
	func_527(&(uParam0->f_27[11 /*10*/]), -649.8698f, -1710.374f, 61.3036f, 30f, 2, 0);
	func_527(&(uParam0->f_27[12 /*10*/]), -861.6902f, -1857.194f, 77.0621f, 30f, 3, 2);
	func_527(&(uParam0->f_27[13 /*10*/]), -716.8034f, -2111.744f, 65.9868f, 30f, 2, 0);
	func_527(&(uParam0->f_27[14 /*10*/]), -548.7557f, -2230.616f, 97.2887f, 30f, 2, 0);
	func_527(&(uParam0->f_27[15 /*10*/]), -270.7834f, -2425.144f, 96.7744f, 30f, 3, 1);
	func_527(&(uParam0->f_27[16 /*10*/]), 5.435f, -2665.31f, 46.2903f, 30f, 2, 0);
	func_527(&(uParam0->f_27[17 /*10*/]), 299.0821f, -2834.288f, 27.0191f, 30f, 2, 0);
	func_527(&(uParam0->f_27[18 /*10*/]), 514.295f, -2880.863f, 42.0956f, 30f, 3, 2);
	func_527(&(uParam0->f_27[19 /*10*/]), 842.6024f, -2599.042f, 25.978f, 30f, 2, 0);
	func_527(&(uParam0->f_27[20 /*10*/]), 991.974f, -2468.436f, 87.493f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_526(&(uParam0->f_358[0 /*189*/]));
	GlobalFunc_4627(&(uParam0->f_358[0 /*189*/]), "Player");
	func_521(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_50.f_1);
	GlobalFunc_4626(&(uParam0->f_358[0 /*189*/]), 1788.044f, -2438.835f, 130.9346f, 100.0275f);
	func_519(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_531(var uParam0)//Position - 0x1E82D
{
	func_533(uParam0);
	uParam0->f_12 = 19;
	func_527(&(uParam0->f_27[0 /*10*/]), -2819.07f, -81.2779f, 76.1411f, 30f, 2, 0);
	func_527(&(uParam0->f_27[1 /*10*/]), -2737.77f, 342.665f, 175.645f, 30f, 2, 0);
	func_527(&(uParam0->f_27[2 /*10*/]), -2631.929f, 499.7495f, 210.0935f, 30f, 2, 0);
	func_527(&(uParam0->f_27[3 /*10*/]), -2438.01f, 692.3843f, 285.745f, 30f, 3, 3);
	func_527(&(uParam0->f_27[4 /*10*/]), -2039.406f, 708.7898f, 170.6556f, 30f, 2, 0);
	func_527(&(uParam0->f_27[5 /*10*/]), -1633.076f, 751.8171f, 220.188f, 30f, 2, 0);
	func_527(&(uParam0->f_27[6 /*10*/]), -1187.955f, 874.4288f, 246.4972f, 30f, 3, 1);
	func_527(&(uParam0->f_27[7 /*10*/]), -893.826f, 994.239f, 239.512f, 30f, 2, 0);
	func_527(&(uParam0->f_27[8 /*10*/]), -565.788f, 1098.308f, 349.0507f, 30f, 2, 0);
	func_527(&(uParam0->f_27[9 /*10*/]), -326.8564f, 1129.9f, 336.1296f, 30f, 2, 0);
	func_527(&(uParam0->f_27[10 /*10*/]), -155.9212f, 1149.858f, 312.2522f, 30f, 2, 0);
	func_527(&(uParam0->f_27[11 /*10*/]), 145.603f, 1162.599f, 277.7465f, 30f, 3, 1);
	func_527(&(uParam0->f_27[12 /*10*/]), 355.6647f, 1234.464f, 287.6501f, 30f, 2, 0);
	func_527(&(uParam0->f_27[13 /*10*/]), 640.85f, 1191.643f, 329.783f, 30f, 2, 0);
	func_527(&(uParam0->f_27[14 /*10*/]), 783.3697f, 1157.395f, 329.0691f, 30f, 3, 3);
	func_527(&(uParam0->f_27[15 /*10*/]), 1016.378f, 1000.386f, 252.4894f, 30f, 2, 0);
	func_527(&(uParam0->f_27[16 /*10*/]), 1243.37f, 945.084f, 150.5214f, 30f, 2, 0);
	func_527(&(uParam0->f_27[17 /*10*/]), 1494.048f, 863.8886f, 110.4097f, 30f, 2, 0);
	func_527(&(uParam0->f_27[18 /*10*/]), 1751.842f, 687.7875f, 296.787f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_526(&(uParam0->f_358[0 /*189*/]));
	GlobalFunc_4627(&(uParam0->f_358[0 /*189*/]), "Player");
	func_521(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_50.f_1);
	GlobalFunc_4626(&(uParam0->f_358[0 /*189*/]), -2818.17f, -500.178f, 76.1411f, 0f);
	func_519(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_532(var uParam0)//Position - 0x1EB27
{
	func_533(uParam0);
	uParam0->f_12 = 18;
	func_527(&(uParam0->f_27[0 /*10*/]), 1025.724f, 3073.133f, 70f, 30f, 2, 0);
	func_527(&(uParam0->f_27[1 /*10*/]), 847.4132f, 3025.239f, 80f, 30f, 2, 0);
	func_527(&(uParam0->f_27[2 /*10*/]), 624.897f, 2968.416f, 80f, 30f, 3, 1);
	func_527(&(uParam0->f_27[3 /*10*/]), 398.5529f, 2921.654f, 75f, 30f, 2, 0);
	func_527(&(uParam0->f_27[4 /*10*/]), 68.1f, 2896.4f, 80f, 30f, 2, 0);
	func_527(&(uParam0->f_27[5 /*10*/]), -290.7f, 2895.4f, 80f, 30f, 2, 0);
	func_527(&(uParam0->f_27[6 /*10*/]), -1033.31f, 2832.959f, 37.5f, 30f, 3, 2);
	func_527(&(uParam0->f_27[7 /*10*/]), -1195.153f, 2729.109f, 18f, 30f, 2, 0);
	func_527(&(uParam0->f_27[8 /*10*/]), -1414.6f, 2636.365f, 8.25f, 30f, 2, 0);
	func_527(&(uParam0->f_27[9 /*10*/]), -1684.856f, 2630.035f, 10f, 30f, 2, 0);
	func_527(&(uParam0->f_27[10 /*10*/]), -2024.536f, 2677.336f, 30f, 30f, 3, 1);
	func_527(&(uParam0->f_27[11 /*10*/]), -2659.106f, 2670.574f, 5.4745f, 30f, 2, 0);
	func_527(&(uParam0->f_27[12 /*10*/]), -2880.136f, 2732.084f, 21.0365f, 30f, 2, 0);
	func_527(&(uParam0->f_27[13 /*10*/]), -3200.826f, 2826.548f, 40f, 30f, 3, 2);
	func_527(&(uParam0->f_27[14 /*10*/]), -3363.374f, 2580.812f, 50f, 30f, 2, 0);
	func_527(&(uParam0->f_27[15 /*10*/]), -3242.432f, 2370.19f, 40f, 30f, 2, 0);
	func_527(&(uParam0->f_27[16 /*10*/]), -2879.09f, 2382.111f, 20f, 30f, 2, 0);
	func_527(&(uParam0->f_27[17 /*10*/]), -2650.532f, 2450.207f, 66.6f, 30f, 4, 0);
	uParam0->f_13 = 1;
	func_526(&(uParam0->f_358[0 /*189*/]));
	GlobalFunc_4627(&(uParam0->f_358[0 /*189*/]), "Player");
	func_521(&(uParam0->f_358[0 /*189*/]), PLAYER::PLAYER_PED_ID(), Local_50.f_1);
	GlobalFunc_4626(&(uParam0->f_358[0 /*189*/]), Local_2306, 154.8464f);
	func_519(&(uParam0->f_358[0 /*189*/]), 0, joaat("player_one"), joaat("stunt"));
}

void func_533(var uParam0)//Position - 0x1EDF9
{
	float fVar0;
	
	GlobalFunc_235(&(uParam0->f_3));
	if (Local_50.f_10 != -1)
	{
		fVar0 = func_35(Local_50.f_10);
		if (fVar0 <= 0f || fVar0 > Local_50.f_12[Local_50.f_10])
		{
			fVar0 = Local_50.f_12[Local_50.f_10];
		}
		uParam0->f_9 = fVar0;
		uParam0->f_10 = (uParam0->f_9 / 2f);
	}
	func_541(uParam0);
	uParam0->f_12 = 0;
	func_534(uParam0);
	uParam0->f_13 = 0;
}

void func_534(var uParam0)//Position - 0x1EE67
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_13)
	{
		func_535(uParam0, iVar0);
		iVar0++;
	}
}

void func_535(var uParam0, int iParam1)//Position - 0x1EE8C
{
	if (iParam1 < 0 || iParam1 > 7)
	{
		return;
	}
	func_537(&(uParam0->f_358[iParam1 /*189*/]));
	func_536(&(uParam0->f_358[iParam1 /*189*/]));
}

void func_536(char* sParam0)//Position - 0x1EEC2
{
	StringCopy(sParam0, "Racer", 32);
	sParam0->f_8 = 0;
	sParam0->f_9 = 0;
	sParam0->f_10 = 0;
	sParam0->f_11 = -1;
	sParam0->f_12 = 0;
	sParam0->f_13 = 0f;
	sParam0->f_14 = 0f;
	sParam0->f_15 = 0f;
	sParam0->f_23 = 13;
	sParam0->f_16 = { Local_50.f_3 };
	sParam0->f_19 = Local_50.f_6;
	sParam0->f_20 = Local_50.f_7;
	sParam0->f_21 = Local_50.f_8;
	sParam0->f_22 = Local_50.f_9;
}

void func_537(var uParam0)//Position - 0x1EF2C
{
	GlobalFunc_6530(uParam0);
	func_539(uParam0);
	func_538(uParam0);
}

void func_538(var uParam0)//Position - 0x1EF46
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_9))
	{
		if (uParam0->f_9 != Local_50.f_1)
		{
			if (!(ENTITY::IS_ENTITY_DEAD(uParam0->f_8) || ENTITY::IS_ENTITY_DEAD(uParam0->f_9)))
			{
				if (PED::IS_PED_IN_VEHICLE(uParam0->f_8, uParam0->f_9, 0))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_8);
				}
			}
			VEHICLE::DELETE_VEHICLE(&(uParam0->f_9));
		}
	}
}

void func_539(var uParam0)//Position - 0x1EF9E
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		if (uParam0->f_8 != PLAYER::PLAYER_PED_ID())
		{
			PED::DELETE_PED(&(uParam0->f_8));
		}
	}
}


void func_541(var uParam0)//Position - 0x1EFD4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_12)
	{
		func_542(uParam0, iVar0);
		iVar0++;
	}
}

void func_542(var uParam0, int iParam1)//Position - 0x1EFF9
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return;
	}
	func_82(&(uParam0->f_27[iParam1 /*10*/]));
	func_79(&(uParam0->f_27[iParam1 /*10*/]));
	func_543(&(uParam0->f_27[iParam1 /*10*/]));
}

void func_543(var uParam0)//Position - 0x1F03A
{
	*uParam0 = { Local_50.f_3 };
	uParam0->f_3 = 16f;
	uParam0->f_7 = 0;
	uParam0->f_4 = 10f;
}







void func_550()//Position - 0x1F260
{
	int iVar0;
	
	if (!iLocal_2405)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						if (!CAM::IS_SCREEN_FADED_OUT())
						{
							AUDIO::TRIGGER_MUSIC_EVENT("MGSP_START");
							iLocal_2405 = 1;
						}
					}
				}
			}
		}
	}
}





int func_555()//Position - 0x1F369
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	GlobalFunc_601(23, 1);
	GlobalFunc_5771(10);
	switch (Local_2320.f_5)
	{
		case 0:
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 10f);
			GlobalFunc_138();
			GlobalFunc_2427(2, 0);
			GlobalFunc_2427(1, 0);
			GlobalFunc_2427(3, 0);
			GlobalFunc_2427(4, 0);
			GlobalFunc_2427(5, 0);
			GlobalFunc_2427(6, 0);
			GlobalFunc_2427(7, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 0);
			MISC::CLEAR_AREA_OF_VEHICLES(Local_5279, 600f, 0, 0, 0, 0, 0);
			func_556(&Local_2411, Local_50.f_10);
			PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 512);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				Local_2320.f_5 = 2;
			}
			else
			{
				Local_2320.f_5 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_4623(1000))
			{
				Local_2320.f_5 = 2;
			}
			break;
		
		case 2:
			HUD::REQUEST_ADDITIONAL_TEXT("SP_SPR", 3);
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", 0);
			while (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
			{
				SYSTEM::WAIT(0);
			}
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HUD_AWARDS", 0);
			Local_2320.f_5 = 3;
			break;
		
		case 3:
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
			{
				Local_2320.f_5 = 4;
			}
			break;
		
		case 4:
			Local_2320.f_5 = 5;
			GlobalFunc_6715(&(Local_2320.f_2));
			break;
		
		case 5:
			if (GlobalFunc_7072(&(Local_2320.f_2), 0.5f))
			{
				Local_2320.f_5 = 6;
			}
			break;
		
		case 6:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				Local_2320.f_5 = 9;
			}
			else
			{
				Local_2320.f_5 = 7;
				GlobalFunc_6715(&(Local_2320.f_2));
			}
			break;
		
		case 7:
			if (GlobalFunc_7072(&(Local_2320.f_2), 0.5f))
			{
				Local_2320.f_5 = 8;
			}
			break;
		
		case 8:
			if (GlobalFunc_4625(5000))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				Local_2320.f_5 = 9;
			}
			break;
		
		case 9:
			GlobalFunc_235(&(Local_2320.f_2));
			return 0;
			break;
		
		case 10:
			return 0;
			break;
	}
	return 1;
}

void func_556(var uParam0, int iParam1)//Position - 0x1F58D
{
	Local_50 = 0;
	Local_50.f_1 = 0;
	Local_50.f_2 = 2;
	Local_50.f_3 = { Local_2306 };
	Local_50.f_6 = 154.8464f;
	Local_50.f_7 = 4;
	Local_50.f_8 = joaat("a_m_y_genstreet_01");
	Local_50.f_9 = joaat("stunt");
	StringCopy(&(Local_50.f_24[0 /*8*/]), "AIRPORT", 32);
	Local_50.f_12[0] = 165f;
	StringCopy(&(Local_50.f_24[1 /*8*/]), "BRIDGEBINGE", 32);
	Local_50.f_12[1] = 80f;
	StringCopy(&(Local_50.f_24[2 /*8*/]), "VINEWOOD", 32);
	Local_50.f_12[2] = 165f;
	StringCopy(&(Local_50.f_24[3 /*8*/]), "BRIDGEWORK", 32);
	Local_50.f_12[3] = 165f;
	StringCopy(&(Local_50.f_24[4 /*8*/]), "ALTITUDE", 32);
	Local_50.f_12[4] = 165f;
	switch (iParam1)
	{
		case 0:
			GlobalFunc_587(&Local_2411);
			break;
		
		case 1:
			GlobalFunc_587(&Local_2411);
			break;
		
		case 2:
			GlobalFunc_587(&Local_2411);
			break;
		
		case 3:
			GlobalFunc_587(&Local_2411);
			break;
		
		case 4:
			GlobalFunc_587(&Local_2411);
			break;
	}
}











void func_567()//Position - 0x1F744
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_339();
	GlobalFunc_2420();
	GlobalFunc_5770();
	GlobalFunc_601(23, 0);
	GlobalFunc_5208(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	STREAMING::CLEAR_FOCUS();
	GlobalFunc_53();
	GlobalFunc_778(0);
	GlobalFunc_4653(0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	AUDIO::CANCEL_MUSIC_EVENT("MGSP_START");
	AUDIO::CANCEL_MUSIC_EVENT("MGSP_FAIL");
	AUDIO::CANCEL_MUSIC_EVENT("MGTR_COMPLETE");
	AUDIO::TRIGGER_MUSIC_EVENT("MGSP_END");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	GlobalFunc_2434(2, 0);
	GlobalFunc_2434(1, 0);
	GlobalFunc_2434(3, 0);
	GlobalFunc_2434(4, 0);
	GlobalFunc_2434(5, 0);
	GlobalFunc_2434(6, 0);
	GlobalFunc_2434(7, 0);
	PLAYER::ENABLE_SPECIAL_ABILITY(PLAYER::PLAYER_ID(), 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE();
	GlobalFunc_5772(&(Local_50.f_118));
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
	HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("PilotSchool");
	func_571(&Local_2411, 1);
	VEHICLE::REMOVE_VEHICLE_RECORDING(103, "SPRTaxi");
	VEHICLE::REMOVE_VEHICLE_RECORDING(104, "SPRTaxi");
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	GlobalFunc_139();
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	func_229();
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	GlobalFunc_5848();
	SCRIPT::TERMINATE_THIS_THREAD();
}




void func_571(var uParam0, bool bParam1)//Position - 0x1F922
{
	if (bParam1)
	{
		func_533(uParam0);
	}
	else
	{
		GlobalFunc_587(uParam0);
	}
	GlobalFunc_7632(0);
	GlobalFunc_833(&(uParam0->f_17));
	HUD::CLEAR_HELP(1);
	HUD::CLEAR_PRINTS();
	if (iLocal_2404)
	{
		GlobalFunc_164("SPR_MOVE_FAIL", 5000, 0);
		iLocal_2404 = 0;
	}
}





