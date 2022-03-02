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
	int iLocal_35 = 0;
	struct<4> Local_36[10];
	bool bLocal_77 = 0;
	struct<13> Local_78[10];
	int iLocal_209 = 0;
	var uLocal_210 = 0;
	int iLocal_211 = 0;
	var uLocal_212 = 0;
	struct<61> Local_213 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
	var uLocal_278 = 0;
	int iLocal_279 = 0;
	struct<3> Local_280 = { 0, 0, 0 } ;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	struct<9> Local_294[4];
	struct<6> Local_331 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	struct<6> Local_340 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	struct<9> Local_349[2];
	struct<6> Local_368 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	struct<6> Local_377[2];
	struct<6> Local_390 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_396 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_402 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_408 = 0;
	bool bLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	bool bLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	int iLocal_433 = 0;
	int iLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	bool bLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	int iLocal_442 = 0;
	int iLocal_443 = 0;
	int iLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446 = 0;
	bool bLocal_447 = 0;
	int iLocal_448 = 0;
	int iLocal_449 = 0;
	int iLocal_450 = 0;
	int iLocal_451 = 0;
	int iLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	int iLocal_459 = 0;
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	var uLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480[4] = { 0, 0, 0, 0 };
	int iLocal_485[2] = { 0, 0 };
	int iLocal_488 = 0;
	struct<3> Local_489 = { 0, 0, 0 } ;
	struct<3> Local_492 = { 0, 0, 0 } ;
	struct<3> Local_495 = { 0, 0, 0 } ;
	var uLocal_498 = 15;
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
	var uLocal_550 = 15;
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
	var uLocal_602 = 15;
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
	var uLocal_654 = 15;
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
	var uLocal_706 = 15;
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
	var uLocal_760 = 16;
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
	char* sLocal_925 = NULL;
	char* sLocal_926 = NULL;
	char* sLocal_927 = NULL;
	int iLocal_928 = 0;
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
	uLocal_210 = GlobalFunc_4946(50);
	iLocal_211 = joaat("pcj");
	Local_489 = { 1070.36f, -776.11f, 58.25f };
	Local_492 = { 1068.518f, -789.5724f, 57.2626f };
	sLocal_925 = "rcmpaparazzo_3b";
	sLocal_926 = "amb@world_human_stand_impatient@male@no_sign@idle_a";
	sLocal_927 = "amb@world_human_stand_impatient@male@no_sign@base";
	iLocal_928 = -1;
	Local_213 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_213);
	GlobalFunc_9161();
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10539(1);
		func_495(1);
	}
	if (GlobalFunc_199())
	{
		Global_68490 = 1;
		iLocal_209 = 0;
		while (!func_493(&Local_213))
		{
			SYSTEM::WAIT(0);
		}
		Global_68490 = 0;
	}
	func_485();
	if (GlobalFunc_230(71) == 1 || GlobalFunc_794(49))
	{
		iLocal_440 = 1;
	}
	else
	{
		iLocal_440 = 0;
	}
	GlobalFunc_2795(1);
	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::_0x208784099002BC30("SF_TH", 0);
		func_466(Local_213.f_9, 0, 0, 0, 0, 0);
		func_465();
		if (iLocal_274 == 8)
		{
			func_459();
		}
		else if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
		{
			switch (iLocal_274)
			{
				case 0:
					func_382();
					break;
				
				case 1:
					func_380();
					break;
				
				case 2:
					func_378();
					break;
				
				case 3:
					func_376();
					break;
				
				case 4:
					func_278();
					break;
				
				case 5:
					func_247();
					break;
				
				case 6:
					func_229();
					break;
				
				case 7:
					func_3();
					break;
			}
		}
		else
		{
			func_1(0);
		}
	}
}

void func_1(int iParam0)//Position - 0x1E9
{
	bLocal_447 = true;
	iLocal_488 = iParam0;
	func_2(8);
}

void func_2(int iParam0)//Position - 0x200
{
	iLocal_408 = 0;
	iLocal_274 = iParam0;
	iLocal_275 = 0;
}

void func_3()//Position - 0x215
{
	func_224();
	switch (iLocal_275)
	{
		case 0:
			iLocal_415 = 0;
			iLocal_275 = 1;
			if ((GlobalFunc_4924(Local_331) && GlobalFunc_155(Local_331, PLAYER::PLAYER_PED_ID(), 150f)) && iLocal_432 == 1)
			{
				iLocal_450 = MISC::GET_GAME_TIMER() + 15000;
			}
			else
			{
				iLocal_450 = MISC::GET_GAME_TIMER() + 4001;
			}
			iLocal_433 = 0;
			break;
		
		case 1:
			func_221();
			if (MISC::GET_GAME_TIMER() > iLocal_450 || iLocal_276 == 5)
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					if ((((!GlobalFunc_111() && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()))
					{
						if (!iLocal_415)
						{
							GlobalFunc_173(&uLocal_760, 3, 0, "BEVERLY", 0, 1);
							GlobalFunc_173(&uLocal_760, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
							if (bLocal_418)
							{
								if (GlobalFunc_10638(&uLocal_760, 50, "pap3bau", "PAP3_ENDCAL2", 9, 1, 0, 0, 0))
								{
									RECORDING::_0x293220DA1B46CEBC(1f, 4.5f, 0);
									iLocal_415 = 1;
								}
							}
							else if (GlobalFunc_10638(&uLocal_760, 50, "pap3bau", "PAP3_ENDCALL", 9, 1, 0, 0, 0))
							{
								RECORDING::_0x293220DA1B46CEBC(1f, 4.5f, 0);
								iLocal_415 = 1;
							}
						}
						else if (!GlobalFunc_111())
						{
							if (GlobalFunc_1993())
							{
								iLocal_275 = 2;
							}
						}
					}
				}
				else
				{
					iLocal_450 = MISC::GET_GAME_TIMER() + 3000;
					if (iLocal_433 == 0)
					{
						GlobalFunc_164("PAP3B_COPS", 7500, 0);
						iLocal_433 = 1;
					}
				}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			iLocal_408 = 0;
			func_4();
			break;
	}
}

void func_4()//Position - 0x3C0
{
	func_202(1);
	GlobalFunc_11329(104, 1);
	func_495(1);
}






































































































































































































void func_202(int iParam0)//Position - 0x24B47
{
	GlobalFunc_2793(0);
	GlobalFunc_2792(0);
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
		}
	}
	if (iParam0 == 1)
	{
		HUD::CLEAR_PRINTS();
	}
	HUD::CLEAR_HELP(1);
}



















void func_221()//Position - 0x25364
{
	if (GlobalFunc_4924(Local_331) && GlobalFunc_115(Local_377[0 /*6*/]))
	{
		if (GlobalFunc_4924(Local_294[0 /*9*/]) && GlobalFunc_4924(Local_331))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_294[0 /*9*/], Local_377[0 /*6*/], 0))
			{
				if (((TASK::GET_SCRIPT_TASK_STATUS(Local_294[0 /*9*/], -235832601) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_294[0 /*9*/], -235832601) != 0) && TASK::GET_SCRIPT_TASK_STATUS(Local_294[0 /*9*/], -1273030092) != 1) && TASK::GET_SCRIPT_TASK_STATUS(Local_294[0 /*9*/], -1273030092) != 0)
				{
					if (PED::IS_PED_IN_VEHICLE(Local_331, Local_377[0 /*6*/], 0) && PED::IS_PED_IN_VEHICLE(Local_294[1 /*9*/], Local_377[0 /*6*/], 0))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_294[0 /*9*/], Local_377[0 /*6*/], "PAP3_Security1", 262144, 0, 8, -1, -1082130432, 0, 1073741824);
					}
				}
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(Local_331, -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_331, -1794415470) != 0)
			{
				TASK::TASK_ENTER_VEHICLE(Local_331, Local_377[0 /*6*/], 20000, 1, 1f, 1, 0);
			}
		}
		if (GlobalFunc_4924(Local_294[2 /*9*/]) && GlobalFunc_115(Local_377[1 /*6*/]))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_294[2 /*9*/], Local_377[1 /*6*/], 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_294[2 /*9*/], -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_294[2 /*9*/], -1273030092) != 0)
				{
					if (PED::IS_PED_FACING_PED(Local_294[2 /*9*/], Local_331, 70f))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_294[2 /*9*/], -235832601) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_294[2 /*9*/], -235832601) != 0)
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_294[2 /*9*/], Local_377[1 /*6*/], "PAP3_Security1", 262144, 0, 8, -1, -1082130432, 0, 1073741824);
						}
					}
				}
			}
		}
	}
	if (GlobalFunc_4924(Local_294[0 /*9*/]) && PED::IS_PED_IN_ANY_VEHICLE(Local_294[0 /*9*/], 0))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_294[0 /*9*/], 1158.52f, -759.3739f, 56.32278f, 1116.869f, -759.6908f, 61.70632f, 13.75f, 0, 1, 0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(Local_294[0 /*9*/], -1273030092) != 1)
			{
				PED::SET_PED_KEEP_TASK(Local_294[0 /*9*/], 1);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_294[0 /*9*/], PED::GET_VEHICLE_PED_IS_IN(Local_294[0 /*9*/], 0), PLAYER::PLAYER_PED_ID(), 8, 25f, 786468, 20f, 20f, 1);
			}
		}
		if (GlobalFunc_4924(Local_294[2 /*9*/]) && GlobalFunc_115(Local_377[1 /*6*/]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_294[2 /*9*/], 1158.52f, -759.3739f, 56.32278f, 1116.869f, -759.6908f, 61.70632f, 13.75f, 0, 1, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_294[2 /*9*/], -1273030092) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_294[2 /*9*/], -1273030092) != 0)
				{
					PED::SET_PED_KEEP_TASK(Local_294[2 /*9*/], 1);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_294[2 /*9*/], Local_377[1 /*6*/], Local_331, 12, 25f, 786469, 20f, 10f, 1);
					if (iLocal_411 == 0)
					{
						func_1(1);
					}
					iLocal_276 = 5;
				}
			}
		}
	}
}



void func_224()//Position - 0x256EB
{
	struct<6> Var0;
	
	if (iLocal_416 == 0)
	{
		if (iLocal_455 == 0)
		{
			iLocal_455 = MISC::GET_GAME_TIMER();
		}
		Var0 = { GlobalFunc_560() };
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER"))
		{
			GlobalFunc_4935();
		}
		if (GlobalFunc_4924(Local_331))
		{
			if (GlobalFunc_4940(Local_377[0 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_377[0 /*6*/], 1))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_331, Local_377[0 /*6*/], 0))
				{
					if (!GlobalFunc_6964(Local_331, -1794415470))
					{
						TASK::TASK_ENTER_VEHICLE(Local_331, Local_377[0 /*6*/], 20000, 1, 1f, 1, 0);
						iLocal_276 = 2;
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_455) > 20)
		{
			if (GlobalFunc_4924(Local_294[0 /*9*/]))
			{
				if (GlobalFunc_4940(Local_377[0 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_377[0 /*6*/], -1))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_294[0 /*9*/], Local_377[0 /*6*/], 0))
					{
						if (!GlobalFunc_6964(Local_294[0 /*9*/], -1794415470))
						{
							TASK::TASK_ENTER_VEHICLE(Local_294[0 /*9*/], Local_377[0 /*6*/], 20000, -1, 1f, 1, 0);
							iLocal_480[0] = 5;
						}
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_455) > 400)
		{
			if (GlobalFunc_4924(Local_294[1 /*9*/]))
			{
				if (GlobalFunc_4940(Local_377[0 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_377[0 /*6*/], 0))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_294[1 /*9*/], Local_377[0 /*6*/], 0))
					{
						if (!GlobalFunc_6964(Local_294[1 /*9*/], -1794415470))
						{
							TASK::TASK_ENTER_VEHICLE(Local_294[1 /*9*/], Local_377[0 /*6*/], 20000, 0, 1f, 1, 0);
							iLocal_480[1] = 5;
						}
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_455) > 600)
		{
			if (GlobalFunc_4924(Local_294[2 /*9*/]))
			{
				if (GlobalFunc_4940(Local_377[1 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_377[1 /*6*/], -1))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_294[2 /*9*/], Local_377[1 /*6*/], 0))
					{
						if (!GlobalFunc_6964(Local_294[2 /*9*/], -1794415470))
						{
							TASK::TASK_ENTER_VEHICLE(Local_294[2 /*9*/], Local_377[1 /*6*/], 20000, -1, 1f, 1, 0);
							iLocal_480[2] = 5;
						}
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_455) > 500)
		{
			if (GlobalFunc_4924(Local_294[3 /*9*/]))
			{
				if (GlobalFunc_4940(Local_377[1 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_377[1 /*6*/], 1))
				{
					if (!PED::IS_PED_IN_VEHICLE(Local_294[3 /*9*/], Local_377[1 /*6*/], 0))
					{
						if (!GlobalFunc_6964(Local_294[3 /*9*/], -1794415470))
						{
							TASK::TASK_ENTER_VEHICLE(Local_294[3 /*9*/], Local_377[1 /*6*/], 20000, 1, 1f, 1, 0);
							iLocal_480[3] = 5;
						}
					}
				}
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_455) > 100)
		{
			if (GlobalFunc_4924(Local_340) && !GlobalFunc_6964(Local_340, 63541484))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_340, -1146898486) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_340, -1146898486) != 0)
				{
					PED::FORCE_PED_MOTION_STATE(Local_340, -668482597, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_340, 1f);
					TASK::TASK_WANDER_STANDARD(Local_340, 1193033728, 0);
				}
				iLocal_277 = 4;
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_455) > 350)
		{
			if (GlobalFunc_4924(Local_349[0 /*9*/]) && !GlobalFunc_6964(Local_349[0 /*9*/], -1146898486))
			{
				TASK::TASK_WANDER_STANDARD(Local_349[0 /*9*/], 1193033728, 0);
				iLocal_485[0] = 4;
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_455) > 600)
		{
			if (GlobalFunc_4924(Local_349[1 /*9*/]) && !GlobalFunc_6964(Local_349[1 /*9*/], -1146898486))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(Local_349[1 /*9*/], -1146898486) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_349[1 /*9*/], -1146898486) != 0)
				{
					PED::FORCE_PED_MOTION_STATE(Local_349[1 /*9*/], -668482597, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(Local_349[1 /*9*/], 1f);
					TASK::TASK_WANDER_STANDARD(Local_349[1 /*9*/], 1193033728, 0);
				}
				iLocal_485[1] = 4;
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_455) > 5000)
		{
			if (iLocal_410 == 0)
			{
				func_1(1);
			}
			iLocal_416 = 1;
		}
	}
}





void func_229()//Position - 0x25B74
{
	struct<6> Var0;
	struct<6> Var6;
	int iVar12;
	int iVar13;
	var uVar14;
	
	Var0 = { GlobalFunc_2209() };
	Var6 = { GlobalFunc_560() };
	if (GlobalFunc_111())
	{
		if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER"))
		{
			GlobalFunc_4956();
		}
	}
	if (!GlobalFunc_663("PAP3_10", 0, 0))
	{
		iVar12 = 0;
	}
	else
	{
		iVar12 = 1;
	}
	switch (iLocal_275)
	{
		case 0:
			if (iLocal_408 == 0)
			{
				GlobalFunc_164("PAP3_10", 7500, 1);
				iLocal_408 = 1;
			}
			GlobalFunc_553(804);
			iLocal_458 = iLocal_458;
			iLocal_459 = 0;
			iLocal_457 = 0;
			iLocal_467 = 0;
			iLocal_470 = 0;
			MISC::SET_INSTANCE_PRIORITY_HINT(1);
			iVar13 = 0;
			while (iVar13 <= 3)
			{
				if (HUD::DOES_BLIP_EXIST(Local_294[iVar13 /*9*/].f_8))
				{
				}
				else if (GlobalFunc_115(Local_294[iVar13 /*9*/]))
				{
					Local_294[iVar13 /*9*/].f_8 = GlobalFunc_4955(Local_294[iVar13 /*9*/], 1, 0, 5);
					iLocal_459++;
				}
				iVar13++;
			}
			if (PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
			if (GlobalFunc_4924(Local_294[2 /*9*/]) && GlobalFunc_115(Local_377[1 /*6*/]))
			{
				PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Local_294[2 /*9*/], Local_377[1 /*6*/], 0f, 0f, 0f, 5f, 0);
			}
			TASK::OPEN_SEQUENCE_TASK(&uVar14);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
			if (GlobalFunc_4924(Local_349[0 /*9*/]))
			{
				TASK::TASK_COMBAT_PED(0, Local_349[0 /*9*/], 67108864, 16);
			}
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
			}
			TASK::CLOSE_SEQUENCE_TASK(uVar14);
			if (GlobalFunc_4924(Local_294[1 /*9*/]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_294[1 /*9*/], 50, 1);
				TASK::TASK_PERFORM_SEQUENCE(Local_294[1 /*9*/], uVar14);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uVar14);
			iLocal_479 = 0;
			iLocal_414 = 0;
			iLocal_275 = 1;
			break;
		
		case 1:
			if (GlobalFunc_4924(Local_294[0 /*9*/]))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_COMBAT_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			if (GlobalFunc_4924(Local_294[3 /*9*/]))
			{
				if (!PED::IS_PED_IN_COMBAT(Local_294[3 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_COMBAT_PED(Local_294[3 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			if (!GlobalFunc_4924(Local_349[0 /*9*/]))
			{
				if (GlobalFunc_4924(Local_294[1 /*9*/]))
				{
					if (!PED::IS_PED_IN_COMBAT(Local_294[1 /*9*/], PLAYER::PLAYER_PED_ID()))
					{
						TASK::TASK_COMBAT_PED(Local_294[1 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
			if (GlobalFunc_4924(Local_294[2 /*9*/]))
			{
				if (iLocal_467 == 0)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1114.697f, -787.0848f, 56.64847f, 1051.764f, -787.1609f, 64.14056f, 23f, 0, 1, 0))
					{
						if (GlobalFunc_115(Local_377[1 /*6*/]))
						{
							if (!PED::IS_PED_IN_VEHICLE(Local_294[2 /*9*/], Local_377[1 /*6*/], 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_294[2 /*9*/], -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_294[2 /*9*/], -1794415470) != 0)
								{
									TASK::TASK_ENTER_VEHICLE(Local_294[2 /*9*/], Local_377[1 /*6*/], 20000, -1, 2f, 1, 0);
								}
							}
							else
							{
								TASK::TASK_COMBAT_PED(Local_294[2 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								iLocal_467 = 1;
							}
						}
					}
				}
				else if (iLocal_467 == 1)
				{
					if (!GlobalFunc_775(Local_294[2 /*9*/], Local_489, 100f))
					{
						iLocal_467 = 2;
					}
				}
			}
			if (bLocal_409 == 1)
			{
				if (!GlobalFunc_115(Local_331))
				{
					func_1(4);
				}
				else
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_331, 1083.386f, -793.4014f, 55.295f, 1092.126f, -793.568f, 60.51268f, 11f, 0, 1, 0))
					{
						if (GlobalFunc_4924(Local_294[0 /*9*/]))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_294[0 /*9*/], 0, 1);
						}
						if (GlobalFunc_4924(Local_294[1 /*9*/]))
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_294[1 /*9*/], 0, 1);
						}
					}
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_331, PLAYER::PLAYER_PED_ID(), 1))
					{
						func_1(3);
					}
					if (iLocal_479 == 2)
					{
						func_237();
					}
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_SECUR2_2"))
			{
				GlobalFunc_5105();
			}
			if (!GlobalFunc_111())
			{
				if (iLocal_479 == 1)
				{
					if (GlobalFunc_10630(&uLocal_760, "pap3bau", "PAP3_SECUR4", "PAP3_SECUR4_3", 8, iVar12, 0))
					{
						iLocal_479 = 2;
					}
				}
				else if (iLocal_479 == 0)
				{
					GlobalFunc_173(&uLocal_760, 4, Local_294[0 /*9*/], "Paparazzo3BBodyGuard1", 0, 1);
					GlobalFunc_173(&uLocal_760, 6, Local_340, "Paparazzo3BDrugDealer", 0, 1);
					GlobalFunc_173(&uLocal_760, 7, Local_294[1 /*9*/], "Paparazzo3BBodyGuard2", 0, 1);
					GlobalFunc_173(&uLocal_760, 8, Local_349[0 /*9*/], "Paparazzo3BDealerGoon1", 0, 1);
					if (GlobalFunc_115(Local_331))
					{
						if (GlobalFunc_10630(&uLocal_760, "pap3bau", "PAP3_SHOCK", "PAP3_SHOCK_5", 8, iVar12, 0))
						{
							iLocal_479 = 1;
						}
					}
					else
					{
						iLocal_479 = 1;
					}
				}
			}
			if (func_230())
			{
				iLocal_275 = 2;
			}
			if (GlobalFunc_4924(Local_331) && PED::IS_PED_IN_ANY_VEHICLE(Local_331, 0))
			{
				if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(PED::GET_VEHICLE_PED_IS_IN(Local_331, 0)))
				{
					TASK::VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(PED::GET_VEHICLE_PED_IS_IN(Local_331, 0), 20f);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_331, 1158.52f, -759.3739f, 56.32278f, 1116.869f, -759.6908f, 61.70632f, 13.75f, 0, 1, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_331, -1273030092) != 1)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_331, PED::GET_VEHICLE_PED_IS_IN(Local_331, 0), PLAYER::PLAYER_PED_ID(), 8, 50f, 786469, 20f, 20f, 1);
					}
				}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			iLocal_408 = 0;
			if (iLocal_415 == 0)
			{
				func_2(7);
			}
			else
			{
				func_4();
			}
			break;
	}
}

int func_230()//Position - 0x260E5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (GlobalFunc_115(Local_294[iVar0 /*9*/]))
		{
			if (!GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_294[iVar0 /*9*/], 200f))
			{
				if (HUD::DOES_BLIP_EXIST(Local_294[iVar0 /*9*/].f_8))
				{
					GlobalFunc_846(&(Local_294[iVar0 /*9*/].f_8));
					GlobalFunc_881(&(Local_294[iVar0 /*9*/]));
					if (iVar0 == 2)
					{
						GlobalFunc_131(&(Local_377[1 /*6*/]));
					}
					iLocal_457++;
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Local_294[iVar0 /*9*/].f_8))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_294[iVar0 /*9*/], 0))
				{
					HUD::SET_BLIP_SCALE(Local_294[iVar0 /*9*/].f_8, 1f);
				}
				else
				{
					HUD::SET_BLIP_SCALE(Local_294[iVar0 /*9*/].f_8, 0.7f);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(Local_294[iVar0 /*9*/].f_8))
		{
			GlobalFunc_846(&(Local_294[iVar0 /*9*/].f_8));
			iLocal_458++;
			iLocal_457++;
		}
		iVar0++;
	}
	if (iLocal_457 >= iLocal_459)
	{
		return 1;
	}
	return 0;
}







void func_237()//Position - 0x26306
{
	if (iLocal_470 < 2)
	{
		if (MISC::GET_GAME_TIMER() > iLocal_471 + 10000)
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_331, 1) < 50f)
				{
					if (GlobalFunc_10618(&uLocal_760, "pap3bau", "PAP3_SHOCK", 7, 1, 0, 0))
					{
						iLocal_470++;
						iLocal_471 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 4000));
					}
				}
			}
		}
	}
}










void func_247()//Position - 0x2658B
{
	switch (iLocal_275)
	{
		case 0:
			if (iLocal_408 == 0)
			{
				iLocal_408 = 1;
			}
			iLocal_450 = MISC::GET_GAME_TIMER() + 15000;
			iLocal_451 = MISC::GET_GAME_TIMER() + 5000;
			iLocal_452 = MISC::GET_GAME_TIMER() + 10000;
			bLocal_418 = false;
			GlobalFunc_846(&uLocal_287);
			iLocal_275 = 1;
			break;
		
		case 1:
			func_274();
			func_254();
			if (bLocal_447)
			{
				return;
			}
			if (iLocal_412 == 0 && iLocal_413 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_450 && iLocal_416 == 0)
				{
					func_224();
					iLocal_275 = 2;
				}
			}
			else
			{
				iLocal_275 = 2;
			}
			if (((MISC::GET_GAME_TIMER() > iLocal_451 && func_253()) || (MISC::GET_GAME_TIMER() > iLocal_452 && (func_253() || iLocal_413))) || func_251())
			{
				if (iLocal_414 == 0)
				{
					GlobalFunc_173(&uLocal_760, 3, 0, "BEVERLY", 0, 1);
					GlobalFunc_173(&uLocal_760, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (func_253() || iLocal_413 == 1)
					{
						if (GlobalFunc_10638(&uLocal_760, 50, "pap3bau", "PAP3_ENDCAL1", 9, 1, 0, 0, 0))
						{
							iLocal_414 = 1;
							bLocal_418 = true;
							if (GlobalFunc_4924(Local_294[0 /*9*/]))
							{
								TASK::CLEAR_PED_TASKS(Local_294[0 /*9*/]);
								AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_294[0 /*9*/], "PAP3B_BFAA", "Paparazzo3BBodyGuard1", "SPEECH_PARAMS_STANDARD", 0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
							}
						}
					}
					else if (iLocal_412 == 0 && iLocal_413 == 0)
					{
						func_224();
						iLocal_275 = 2;
					}
				}
				else if (iLocal_417 == 0)
				{
					if (func_250())
					{
						iLocal_417 = 1;
					}
					else
					{
						GlobalFunc_173(&uLocal_760, 4, Local_294[0 /*9*/], "Paparazzo3BBodyGuard1", 0, 1);
						if (GlobalFunc_10630(&uLocal_760, "pap3bau", "PAP3_SECUR4", "PAP3_SECUR4_1", 8, 1, 0))
						{
							func_248(0);
							iLocal_275 = 2;
						}
					}
				}
				else
				{
					GlobalFunc_4956();
					GlobalFunc_173(&uLocal_760, 5, Local_331, "PRINCESS", 0, 1);
					if (GlobalFunc_10618(&uLocal_760, "pap3bau", "PAP3_PANIC", 8, 1, 0, 0))
					{
						func_248(1);
						iLocal_275 = 2;
					}
				}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			GlobalFunc_846(&uLocal_287);
			iLocal_408 = 0;
			if (iLocal_412 == 1 || iLocal_413 == 1)
			{
				func_2(6);
			}
			else
			{
				func_224();
				func_2(7);
			}
			break;
	}
}

void func_248(int iParam0)//Position - 0x267DD
{
	struct<6> Var0;
	
	Var0 = { GlobalFunc_560() };
	if (iParam0 == 1)
	{
		if (GlobalFunc_111())
		{
			if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER"))
			{
				GlobalFunc_4956();
			}
		}
	}
	if (iLocal_413 == 0)
	{
		if (iParam0 == 1)
		{
			if (GlobalFunc_4924(Local_294[0 /*9*/]))
			{
				if (GlobalFunc_4924(Local_349[0 /*9*/]))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0);
					iLocal_480[0] = 9;
					iLocal_485[0] = 1;
					uLocal_454 = MISC::GET_GAME_TIMER() + 3000;
					uLocal_453 = MISC::GET_GAME_TIMER() + 2000;
				}
			}
		}
		else if (GlobalFunc_4924(Local_294[0 /*9*/]))
		{
			if (GlobalFunc_4924(Local_349[0 /*9*/]))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(Local_294[0 /*9*/], Local_492, 3f, 20000, 353f, 1056964608);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_294[0 /*9*/], 1);
				iLocal_480[0] = 11;
			}
		}
		if (GlobalFunc_4924(Local_294[1 /*9*/]))
		{
			if (GlobalFunc_4924(Local_349[1 /*9*/]))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_294[1 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
				iLocal_480[1] = 9;
				iLocal_485[1] = 1;
				uLocal_454 = MISC::GET_GAME_TIMER() + 3000;
				uLocal_453 = MISC::GET_GAME_TIMER() + 2000;
			}
		}
		if (GlobalFunc_4924(Local_294[2 /*9*/]))
		{
			if (GlobalFunc_4940(Local_377[1 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_377[1 /*6*/], -1))
			{
				TASK::CLEAR_PED_TASKS(Local_294[2 /*9*/]);
				TASK::TASK_ENTER_VEHICLE(Local_294[2 /*9*/], Local_377[1 /*6*/], 20000, -1, 3f, 1, 0);
				iLocal_480[2] = 2;
			}
		}
		if (GlobalFunc_4924(Local_294[3 /*9*/]))
		{
			if (GlobalFunc_4924(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Local_294[3 /*9*/], 1094.245f, -791.3043f, 57.2632f, PLAYER::PLAYER_PED_ID(), 3f, 0, 9f, 15f, 1, 0, 0, -957453492, 20000);
				iLocal_480[3] = 10;
			}
		}
		if (GlobalFunc_4924(Local_331))
		{
			if (GlobalFunc_111())
			{
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER"))
				{
					GlobalFunc_5105();
				}
			}
			if (GlobalFunc_4940(Local_377[0 /*6*/]) && VEHICLE::IS_VEHICLE_SEAT_FREE(Local_377[0 /*6*/], -1))
			{
				if (!PED::IS_PED_IN_VEHICLE(Local_331, Local_377[0 /*6*/], 0))
				{
					TASK::CLEAR_PED_TASKS(Local_331);
					TASK::TASK_ENTER_VEHICLE(Local_331, Local_377[0 /*6*/], 20000, -1, 3f, 1, 0);
					iLocal_276 = 2;
				}
			}
			else
			{
				func_249(Local_331, 0);
				iLocal_276 = 4;
			}
		}
		if (GlobalFunc_4924(Local_340))
		{
			if (iParam0 == 1)
			{
				iLocal_277 = 2;
			}
			else
			{
				iLocal_277 = 3;
			}
		}
		GlobalFunc_553(804);
		iLocal_413 = 1;
	}
}

void func_249(int iParam0, int iParam1)//Position - 0x26A49
{
	if (GlobalFunc_4924(iParam0))
	{
		if (iParam1 == 0)
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 8, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 1, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 64, 0);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 200f, -1, 0, 0);
			PED::SET_PED_KEEP_TASK(iParam0, 1);
		}
		else
		{
			TASK::CLEAR_PED_TASKS(iParam0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 2, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 8, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 1, 0);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 32, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 64, 0);
			TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 200f, -1, 1, 0);
			PED::SET_PED_KEEP_TASK(iParam0, 1);
		}
	}
}

int func_250()//Position - 0x26B1B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (GlobalFunc_115(Local_294[iVar0 /*9*/]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_294[iVar0 /*9*/], 1);
			if (PED::CAN_PED_SEE_HATED_PED(Local_294[iVar0 /*9*/], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_251()//Position - 0x26B66
{
	if (GlobalFunc_496(&uLocal_550, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
	{
		return 0;
	}
	return 1;
}


int func_253()//Position - 0x26C42
{
	if (GlobalFunc_496(&uLocal_654, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1)))
	{
		return 1;
	}
	return 0;
}

void func_254()//Position - 0x26C62
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_368))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_368))
		{
			if (PED::IS_PED_INJURED(Local_368))
			{
				func_1(6);
			}
			else if (func_255(Local_368, 1, 1116471296, 1126825984, 0, 0, 0, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_368, 0);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_368);
				if (!PED::IS_PED_FLEEING(Local_368))
				{
					TASK::TASK_SMART_FLEE_PED(Local_368, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
				func_1(5);
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_368, PLAYER::PLAYER_PED_ID(), 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_368, 0);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_368);
				if (!PED::IS_PED_FLEEING(Local_368))
				{
					TASK::TASK_SMART_FLEE_PED(Local_368, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
				func_1(5);
			}
			else if (GlobalFunc_115(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_368, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_368, 0);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_368);
				if (!PED::IS_PED_FLEEING(Local_368))
				{
					TASK::TASK_SMART_FLEE_PED(Local_368, PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 0);
				}
				func_1(5);
			}
		}
		else
		{
			func_1(6);
		}
	}
}

int func_255(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x26D79
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
		else if (func_256(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_256(int iParam0, float fParam1)//Position - 0x26E34
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
				if (func_257(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_257(int iParam0, float fParam1)//Position - 0x26EAA
{
	return func_258(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_258(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x26EC2
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_266(iParam0, iParam1);
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
		iVar4 = func_261();
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



int func_261()//Position - 0x27174
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





int func_266(int iParam0, int iParam1)//Position - 0x272CA
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








void func_274()//Position - 0x276EA
{
	int iVar0;
	
	if (bLocal_409 == 0)
	{
		if (func_277(0))
		{
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				func_276(&(Local_294[iVar0 /*9*/]), 0);
				ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_294[iVar0 /*9*/], 1, 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_294[iVar0 /*9*/], uLocal_758);
				if (iVar0 == 3)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(Local_294[iVar0 /*9*/], "WORLD_HUMAN_GUARD_STAND", 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_294[iVar0 /*9*/], 13, 1);
					PED::SET_PED_COMBAT_MOVEMENT(Local_294[iVar0 /*9*/], 2);
				}
				if (iVar0 == 0 || iVar0 == 3)
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_294[iVar0 /*9*/], joaat("weapon_appistol"), -1, 0, 0);
					WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_294[iVar0 /*9*/], joaat("weapon_appistol"), joaat("component_at_pi_flsh"));
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_294[iVar0 /*9*/]);
				}
				else
				{
					WEAPON::GIVE_WEAPON_TO_PED(Local_294[iVar0 /*9*/], joaat("weapon_appistol"), -1, 0, 0);
					if (iVar0 == 1)
					{
						PED::SET_PED_COMBAT_MOVEMENT(Local_294[iVar0 /*9*/], 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_294[iVar0 /*9*/], 13, 1);
						PED::SET_PED_COMBAT_RANGE(Local_294[iVar0 /*9*/], 0);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_294[1 /*9*/], 1);
					}
					else
					{
						PED::SET_PED_ACCURACY(Local_294[iVar0 /*9*/], 25);
					}
				}
				if (iVar0 == 0 || iVar0 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_294[iVar0 /*9*/], 0, 0);
				}
				PED::ADD_ARMOUR_TO_PED(Local_294[iVar0 /*9*/], 70);
				PED::SET_PED_CONFIG_FLAG(Local_294[iVar0 /*9*/], 324, 1);
				if (iVar0 == 0)
				{
					PED::SET_PED_SEEING_RANGE(Local_294[iVar0 /*9*/], 5f);
				}
				else
				{
					PED::SET_PED_SEEING_RANGE(Local_294[iVar0 /*9*/], 20f);
				}
				if (iVar0 == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 0, 1, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 11, 1, 0, 0);
				}
				else if (iVar0 == 1)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 3, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 11, 0, 2, 0);
				}
				else if (iVar0 == 2)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 0, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 4, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 11, 1, 1, 0);
				}
				else if (iVar0 == 3)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 0, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 3, 0, 2, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 8, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_294[iVar0 /*9*/], 11, 0, 1, 0);
				}
				iVar0++;
			}
			func_276(&Local_331, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_331, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_331, uLocal_758);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_331, 1);
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_331, "WORLD_HUMAN_SMOKING", 0, 0);
			PED::SET_PED_PROP_INDEX(Local_331, 1, 0, 0, false);
			func_276(&Local_340, 0);
			ENTITY::SET_ENTITY_HEALTH(Local_340, 125);
			PED::SET_PED_COMBAT_ATTRIBUTES(Local_340, 17, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_340, uLocal_759);
			PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Local_340);
			PED::SET_PED_COMPONENT_VARIATION(Local_340, 0, 1, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_340, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_340, 4, 0, 1, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_340, 1);
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				func_276(&(Local_349[iVar0 /*9*/]), 0);
				ENTITY::SET_ENTITY_HEALTH(Local_349[iVar0 /*9*/], 125);
				PED::SET_PED_ACCURACY(Local_349[iVar0 /*9*/], 1);
				if (iVar0 == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_349[iVar0 /*9*/], 0, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_349[iVar0 /*9*/], 3, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_349[iVar0 /*9*/], 4, 0, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_349[iVar0 /*9*/], 8, 0, 1, 0);
					WEAPON::GIVE_WEAPON_TO_PED(Local_349[iVar0 /*9*/], joaat("weapon_microsmg"), -1, 0, 1);
					if (GlobalFunc_115(Local_349[iVar0 /*9*/]))
					{
						TASK::TASK_LOOK_AT_ENTITY(Local_349[iVar0 /*9*/], Local_331, -1, 0, 2);
					}
					PED::SET_PED_COMBAT_MOVEMENT(Local_349[iVar0 /*9*/], 3);
				}
				else
				{
					PED::SET_PED_COMPONENT_VARIATION(Local_349[iVar0 /*9*/], 0, 1, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_349[iVar0 /*9*/], 3, 1, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_349[iVar0 /*9*/], 4, 0, 1, 0);
					PED::SET_PED_COMPONENT_VARIATION(Local_349[iVar0 /*9*/], 8, 0, 1, 0);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_349[iVar0 /*9*/], uLocal_759);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_349[iVar0 /*9*/], 1);
				if (iVar0 == 0)
				{
					TASK::TASK_START_SCENARIO_IN_PLACE(Local_349[iVar0 /*9*/], "WORLD_HUMAN_STAND_IMPATIENT", 0, 0);
				}
				iVar0++;
			}
			func_276(&Local_368, 0);
			PED::SET_PED_CAN_BE_TARGETTED(Local_368, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_368, 1);
			PED::SET_PED_FLEE_ATTRIBUTES(Local_368, 128, 1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_368, Local_368.f_1, 0, 0, 1);
			WEAPON::GIVE_WEAPON_TO_PED(Local_368, joaat("weapon_knife"), -1, 0, 1);
			TASK::TASK_START_SCENARIO_IN_PLACE(Local_368, "WORLD_HUMAN_SMOKING", 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_368, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_368, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_368, 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_368, 8, 0, 0, 0);
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				func_275(&(Local_377[iVar0 /*6*/]), 0);
				if (iVar0 == 0)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_377[iVar0 /*6*/], 3);
				}
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_377[iVar0 /*6*/].f_5, 1);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_377[iVar0 /*6*/], 0);
				if (iVar0 == 1)
				{
					if (GlobalFunc_115(Local_294[2 /*9*/]))
					{
						PED::SET_PED_INTO_VEHICLE(Local_294[2 /*9*/], Local_377[iVar0 /*6*/], -1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_294[2 /*9*/], 1, 1);
					}
				}
				iVar0++;
			}
			func_275(&Local_390, 1);
			VEHICLE::SET_VEHICLE_ALARM(Local_390, 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_390.f_5, 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_390, 3);
			func_275(&Local_396, 1);
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_396.f_5, 1);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_396, 0);
			bLocal_409 = true;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_294[iVar0 /*9*/].f_5);
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_377[iVar0 /*6*/].f_5);
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_340.f_5);
			uLocal_292 = PED::CREATE_SYNCHRONIZED_SCENE(Local_377[0 /*6*/].f_1, 0f, 0f, Local_377[0 /*6*/].f_4, 2);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_292, 1);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_340, uLocal_292, "rcmpaparazzo_3big_1", "_idle_dealer_a", 4f, -4f, 65, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_349[1 /*9*/], uLocal_292, "rcmpaparazzo_3big_1", "_idle_dealer_b", 4f, -4f, 65, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_294[0 /*9*/], uLocal_292, "rcmpaparazzo_3big_1", "_idle_guard_a", 4f, -4f, 65, 0, 1148846080, 0);
			TASK::TASK_SYNCHRONIZED_SCENE(Local_294[1 /*9*/], uLocal_292, "rcmpaparazzo_3big_1", "_idle_guard_b", 4f, -4f, 65, 0, 1148846080, 0);
		}
	}
}

void func_275(var uParam0, int iParam1)//Position - 0x27DA7
{
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
	{
		*uParam0 = VEHICLE::CREATE_VEHICLE(uParam0->f_5, uParam0->f_1, uParam0->f_4, 1, 1);
	}
	if (iParam1 == 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_5);
	}
}

void func_276(var uParam0, int iParam1)//Position - 0x27DDF
{
	if (STREAMING::HAS_MODEL_LOADED(uParam0->f_5))
	{
		*uParam0 = PED::CREATE_PED(26, uParam0->f_5, uParam0->f_1, uParam0->f_4, 1, 1);
		if (iParam1 == 1)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_5);
		}
	}
}

int func_277(int iParam0)//Position - 0x27E19
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		STREAMING::REQUEST_MODEL(Local_294[iVar0 /*9*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::REQUEST_MODEL(Local_349[iVar0 /*9*/].f_5);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(Local_331.f_5);
	STREAMING::REQUEST_MODEL(Local_340.f_5);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::REQUEST_MODEL(Local_377[iVar0 /*6*/].f_5);
		iVar0++;
	}
	STREAMING::REQUEST_MODEL(Local_390.f_5);
	STREAMING::REQUEST_MODEL(Local_396.f_5);
	VEHICLE::REQUEST_VEHICLE_RECORDING(103, "PAP3Security1");
	TASK::REQUEST_WAYPOINT_RECORDING("PAP3_Security1");
	STREAMING::REQUEST_MODEL(Local_402.f_5);
	STREAMING::REQUEST_MODEL(joaat("prop_drug_package_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_cash_pile_02"));
	STREAMING::REQUEST_ANIM_DICT("rcmpaparazzo_3big_1");
	if (iParam0 == 0)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_294[iVar0 /*9*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_349[iVar0 /*9*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_drug_package_02")))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_cash_pile_02")))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_331.f_5))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_340.f_5))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_390.f_5))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_396.f_5))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(Local_377[iVar0 /*6*/].f_5))
			{
				return 0;
			}
			iVar0++;
		}
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "PAP3Security1"))
		{
			return 0;
		}
		if (!STREAMING::HAS_MODEL_LOADED(Local_402.f_5))
		{
			return 0;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_3big_1"))
		{
			return 0;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 == 0)
		{
			SYSTEM::WAIT(0);
			iVar1 = 1;
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_294[iVar0 /*9*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_349[iVar0 /*9*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_drug_package_02")))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_cash_pile_02")))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_331.f_5))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_340.f_5))
			{
				iVar1 = 0;
			}
			iVar0 = 0;
			while (iVar0 <= 1)
			{
				if (!STREAMING::HAS_MODEL_LOADED(Local_377[iVar0 /*6*/].f_5))
				{
					iVar1 = 0;
				}
				iVar0++;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_390.f_5))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_396.f_5))
			{
				iVar1 = 0;
			}
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(103, "PAP3Security1"))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_MODEL_LOADED(Local_402.f_5))
			{
				iVar1 = 0;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("rcmpaparazzo_3big_1"))
			{
				iVar1 = 0;
			}
		}
	}
	return 1;
}

void func_278()//Position - 0x28106
{
	struct<6> Var0;
	struct<6> Var6;
	int iVar12;
	
	switch (iLocal_275)
	{
		case 0:
			if (iLocal_408 == 0)
			{
				GlobalFunc_164("PAP3_PRIN", 7500, 1);
				iLocal_408 = 1;
			}
			GlobalFunc_2794(50);
			iLocal_450 = (MISC::GET_GAME_TIMER() + 80000);
			iLocal_420 = 0;
			iLocal_421 = 0;
			iLocal_422 = 1;
			iLocal_423 = 0;
			iLocal_424 = 0;
			iLocal_425 = 0;
			iLocal_426 = 0;
			iLocal_460 = 0;
			iLocal_461 = 0;
			iLocal_462 = 0;
			iLocal_428 = 0;
			iLocal_429 = 0;
			iLocal_430 = 0;
			iLocal_465 = 0;
			iLocal_466 = 0;
			iLocal_431 = 0;
			iLocal_432 = 0;
			iLocal_434 = 0;
			iLocal_435 = 0;
			iLocal_436 = 0;
			bLocal_437 = false;
			iLocal_438 = 0;
			iLocal_439 = 0;
			iLocal_468 = 0;
			iLocal_469 = 0;
			iLocal_474 = 0;
			iLocal_475 = 0;
			iLocal_478 = 0;
			iLocal_449 = 0;
			GlobalFunc_846(&uLocal_287);
			uLocal_287 = GlobalFunc_4955(Local_331, 1, 1, 5);
			if (GlobalFunc_4924(Local_331))
			{
				iLocal_928 = func_373(PLAYER::PLAYER_PED_ID(), Local_331, 0f);
			}
			if (GlobalFunc_4940(Local_377[0 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_377[0 /*6*/], 0);
			}
			if (GlobalFunc_4940(Local_377[1 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_377[1 /*6*/], 0);
			}
			if (GlobalFunc_4940(Local_390))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_390, 0);
			}
			func_311(1, "At Princess Location", 1, 0, 0, 1);
			func_274();
			iLocal_473 = 0;
			GlobalFunc_173(&uLocal_760, 5, Local_331, "PRINCESS", 0, 1);
			GlobalFunc_173(&uLocal_760, 6, Local_340, "Paparazzo3BDrugDealer", 0, 1);
			iLocal_472 = MISC::GET_GAME_TIMER();
			iLocal_275 = 1;
			iLocal_276 = 1;
			break;
		
		case 1:
			if ((iLocal_424 && !iLocal_430) && !iLocal_427)
			{
				func_309();
			}
			if (GlobalFunc_1536())
			{
				GlobalFunc_1100(1);
			}
			if ((GlobalFunc_4924(Local_368) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_368, PLAYER::PLAYER_PED_ID(), 1)) && !AUDIO::IS_ANY_SPEECH_PLAYING(Local_213.f_28[0]))
			{
				GlobalFunc_5122(Local_213.f_28[0], "GENERIC_CURSE_HIGH", 3);
			}
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_293))
			{
				if (GlobalFunc_4924(Local_294[1 /*9*/]) && GlobalFunc_4924(Local_349[1 /*9*/]))
				{
					if (iLocal_473 == 0)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_293) >= 0.259f)
						{
							uLocal_290 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_drug_package_02"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_349[1 /*9*/], 0f, 0f, 10f), 1, 1, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_290, Local_349[1 /*9*/], PED::GET_PED_BONE_INDEX(Local_349[1 /*9*/], 28422), 0.135f, 0f, -0.05f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							ENTITY::SET_ENTITY_VISIBLE(uLocal_290, 1);
							iLocal_473 = 1;
						}
					}
					else if (iLocal_473 == 1)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_293) >= 0.821f)
						{
							uLocal_291 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_cash_pile_02"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_294[1 /*9*/], 0f, 0f, 10f), 1, 1, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_291, Local_294[1 /*9*/], PED::GET_PED_BONE_INDEX(Local_294[1 /*9*/], 28422), 0.07f, 0f, -0.04f, 0f, 0f, -30f, 1, 1, 0, 0, 2, 1);
							iLocal_473 = 2;
						}
					}
					else if (iLocal_473 == 2)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_293) >= 0.844f)
						{
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_294[1 /*9*/]);
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_349[1 /*9*/]);
							ENTITY::DETACH_ENTITY(uLocal_290, 1, 1);
							ENTITY::SET_ENTITY_VISIBLE(uLocal_290, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_290, Local_294[1 /*9*/], PED::GET_PED_BONE_INDEX(Local_294[1 /*9*/], 60309), 0.1f, 0f, 0.05f, 0f, 0f, 0f, 1, 1, 0, 0, 2, 1);
							iLocal_473 = 3;
						}
					}
					else if (iLocal_473 == 3)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_293) >= 0.849f)
						{
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_294[1 /*9*/]);
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_349[1 /*9*/]);
							ENTITY::DETACH_ENTITY(uLocal_291, 1, 1);
							ENTITY::SET_ENTITY_VISIBLE(uLocal_291, 0);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uLocal_291, Local_349[1 /*9*/], PED::GET_PED_BONE_INDEX(Local_349[1 /*9*/], 28422), 0.07f, 0f, 0f, 0f, 0f, 90f, 1, 1, 0, 0, 2, 1);
							ENTITY::DETACH_ENTITY(uLocal_290, 1, 1);
							OBJECT::DELETE_OBJECT(&uLocal_290);
							iLocal_473 = 4;
						}
					}
					else if (iLocal_473 == 4)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_293) >= 0.861f)
						{
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_294[1 /*9*/]);
							ENTITY::PROCESS_ENTITY_ATTACHMENTS(Local_349[1 /*9*/]);
							ENTITY::DETACH_ENTITY(uLocal_291, 1, 1);
							OBJECT::DELETE_OBJECT(&uLocal_291);
							iLocal_473 = 5;
						}
					}
					else if (iLocal_473 == 5)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_293) >= 0.865f)
						{
							iLocal_473 = 6;
						}
					}
				}
			}
			if (iLocal_438 == 0)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_472 + 1000)
				{
					iLocal_438 = 1;
				}
			}
			else if (!GlobalFunc_111() && !GlobalFunc_663("PAP3_PRIN", 0, 0))
			{
				bLocal_437 = true;
			}
			if (bLocal_437)
			{
				if (iLocal_424 == 0)
				{
					if (GlobalFunc_10618(&uLocal_760, "pap3bau", "PAP3_DEALER", 8, 0, 0, 0))
					{
						uLocal_293 = PED::CREATE_SYNCHRONIZED_SCENE(Local_377[0 /*6*/].f_1, 0f, 0f, Local_377[0 /*6*/].f_4, 2);
						if (GlobalFunc_4924(Local_340))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_340, uLocal_293, "rcmpaparazzo_3big_1", "_action_dealer_a", 2f, -2f, 0, 0, 1148846080, 0);
						}
						if (GlobalFunc_4924(Local_349[1 /*9*/]))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_349[1 /*9*/], uLocal_293, "rcmpaparazzo_3big_1", "_action_dealer_b", 2f, -2f, 0, 0, 1148846080, 0);
						}
						if (GlobalFunc_4924(Local_294[0 /*9*/]))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_294[0 /*9*/], uLocal_293, "rcmpaparazzo_3big_1", "_action_guard_a", 2f, -2f, 0, 0, 1148846080, 0);
						}
						if (GlobalFunc_4924(Local_294[1 /*9*/]))
						{
							TASK::TASK_SYNCHRONIZED_SCENE(Local_294[1 /*9*/], uLocal_293, "rcmpaparazzo_3big_1", "_action_guard_b", 2f, -2f, 0, 0, 1148846080, 0);
						}
						iLocal_424 = 1;
					}
				}
				else
				{
					if (!iLocal_449)
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_293) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_293) >= 0.04f)
						{
							if (GlobalFunc_4924(Local_331))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_331, uLocal_293, "rcmpaparazzo_3big_1", "_action_princess", 1f, -2f, 0, 0, 1f, 0);
								iLocal_449 = 1;
							}
						}
					}
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_293) || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_293) >= 0.893f)
					{
						iLocal_432 = 1;
						PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
						func_224();
						func_221();
					}
					if (iLocal_411 && !GlobalFunc_775(PLAYER::PLAYER_PED_ID(), 1087.297f, -791.3091f, 57.2626f, 60f))
					{
						iLocal_432 = 1;
						PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
						func_224();
						func_221();
					}
					Var0 = { GlobalFunc_2209() };
					if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER_23"))
					{
						GlobalFunc_5105();
					}
					if (!iLocal_439)
					{
						if ((MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER_20") && PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_293)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_293) < 0.758f)
						{
							if (GlobalFunc_4924(Local_331))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_331, uLocal_293, "rcmpaparazzo_3big_1", "_action_princess", 1f, -2f, 0, 0, 1148846080, 0);
							}
							if (GlobalFunc_4924(Local_340))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_340, uLocal_293, "rcmpaparazzo_3big_1", "_action_dealer_a", 1f, -2f, 0, 0, 1148846080, 0);
							}
							if (GlobalFunc_4924(Local_349[1 /*9*/]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_349[1 /*9*/], uLocal_293, "rcmpaparazzo_3big_1", "_action_dealer_b", 1f, -2f, 0, 0, 1148846080, 0);
							}
							if (GlobalFunc_4924(Local_294[0 /*9*/]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_294[0 /*9*/], uLocal_293, "rcmpaparazzo_3big_1", "_action_guard_a", 1f, -2f, 0, 0, 1148846080, 0);
							}
							if (GlobalFunc_4924(Local_294[1 /*9*/]))
							{
								TASK::TASK_SYNCHRONIZED_SCENE(Local_294[1 /*9*/], uLocal_293, "rcmpaparazzo_3big_1", "_action_guard_b", 1f, -2f, 0, 0, 1148846080, 0);
							}
							PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_293, 0.758f);
							iLocal_439 = 1;
						}
					}
				}
			}
			if (iLocal_432 == 0)
			{
				if (iLocal_410)
				{
					if (!iLocal_411)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_456 + 15000)
						{
							if (!iLocal_446)
							{
								RECORDING::_0x293220DA1B46CEBC(6f, 6f, 1);
								GlobalFunc_159("PAP3_HELP8", -1);
								iLocal_446 = 1;
							}
						}
					}
				}
				if (iLocal_423)
				{
					if (GlobalFunc_4924(Local_294[0 /*9*/]))
					{
						PED::SET_PED_SEEING_RANGE(Local_294[0 /*9*/], 150f);
					}
					if (GlobalFunc_4924(Local_294[1 /*9*/]))
					{
						PED::SET_PED_SEEING_RANGE(Local_294[1 /*9*/], 150f);
					}
					if (GlobalFunc_4924(Local_294[2 /*9*/]))
					{
						PED::SET_PED_SEEING_RANGE(Local_294[2 /*9*/], 150f);
					}
					if (GlobalFunc_4924(Local_294[3 /*9*/]))
					{
						PED::SET_PED_SEEING_RANGE(Local_294[3 /*9*/], 150f);
					}
				}
				if (GlobalFunc_115(Local_331) && !ENTITY::IS_ENTITY_OCCLUDED(Local_331))
				{
					func_302();
				}
				if (iLocal_426 == 0)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1114.694f, -779.025f, 54.92999f, 1104.67f, -779.1714f, 60.32433f, 5f, 0, 1, 0))
					{
						if (GlobalFunc_4924(Local_294[3 /*9*/]))
						{
							TASK::TASK_LOOK_AT_ENTITY(Local_294[3 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_294[3 /*9*/], "PAP3B_BCAA", "Paparazzo3BBodyGuard1", "SPEECH_PARAMS_STANDARD", 0);
							iLocal_426 = 1;
						}
					}
				}
				else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1114.694f, -779.025f, 54.92999f, 1104.67f, -779.1714f, 60.32433f, 5f, 0, 1, 0))
				{
					iLocal_435 = 0;
					iLocal_468++;
					if (iLocal_469 == 0)
					{
						if (iLocal_468 >= 50)
						{
							if (GlobalFunc_4924(Local_294[3 /*9*/]))
							{
								WEAPON::GIVE_WEAPON_TO_PED(Local_294[3 /*9*/], joaat("weapon_combatpistol"), -1, 1, 1);
								WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_294[3 /*9*/], joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
								TASK::TASK_AIM_GUN_AT_ENTITY(Local_294[3 /*9*/], PLAYER::PLAYER_PED_ID(), 8000, 0);
								iLocal_469 = 1;
							}
						}
					}
					else if (iLocal_469 == 1)
					{
						if (iLocal_468 >= 150)
						{
							if (GlobalFunc_4924(Local_294[3 /*9*/]))
							{
								TASK::TASK_COMBAT_PED(Local_294[3 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
							if (iLocal_423 == 0)
							{
								PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
								iLocal_423 = 1;
							}
							iLocal_469 = 2;
						}
					}
				}
				else if (!iLocal_435 && !iLocal_423)
				{
					if (GlobalFunc_4924(Local_294[3 /*9*/]))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(Local_294[3 /*9*/], 1630799643) != 1)
						{
							TASK::TASK_ACHIEVE_HEADING(Local_294[3 /*9*/], 0f, 0);
							iLocal_469 = 0;
							iLocal_435 = 1;
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1114.719f, -786.1467f, 57.15265f, 1095.79f, -786.2317f, 60.53243f, 9.75f, 0, 1, 0) && (PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 1f || PED::IS_PED_FACING_PED(Local_294[3 /*9*/], PLAYER::PLAYER_PED_ID(), 90f)))
				{
					if (iLocal_423 == 0)
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
						iLocal_423 = 1;
					}
					if (GlobalFunc_4924(Local_294[3 /*9*/]))
					{
						if (!PED::IS_PED_FACING_PED(Local_294[3 /*9*/], PLAYER::PLAYER_PED_ID(), 30f))
						{
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_294[3 /*9*/], PLAYER::PLAYER_PED_ID(), 0);
							Local_495 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
							iLocal_477 = MISC::GET_GAME_TIMER();
							iLocal_478 = 1;
						}
					}
				}
				if ((iLocal_478 == 1 && MISC::GET_GAME_TIMER() > iLocal_477 + 1000) && GlobalFunc_4924(Local_294[3 /*9*/]))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(Local_294[3 /*9*/], Local_495, 1f, -1, 0.25f, 0, 1193033728);
					iLocal_478 = 2;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1078.845f, -796.3937f, 57.01259f, 1091.735f, -796.5964f, 60.38212f, 6f, 0, 1, 0))
				{
					if (GlobalFunc_4924(Local_294[0 /*9*/]))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_COMBAT_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
					iLocal_423 = 1;
				}
				if (iLocal_423 == 0)
				{
					if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, 1114.697f, -787.0848f, 56.64847f, 1051.764f, -787.1609f, 64.14056f, 23f))
					{
						if (GlobalFunc_4924(Local_294[0 /*9*/]))
						{
							if (!PED::IS_PED_IN_COMBAT(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_COMBAT_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
						iLocal_423 = 1;
					}
					if (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1071.381f, -793.3854f, 57.05151f, 1101.543f, -793.3998f, 61.01268f, 11.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1095.905f, -786.5956f, 57.1032f, 1114.59f, -786.7163f, 60.15023f, 15.25f, 0, 1, 0)) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1071.381f, -793.3854f, 57.05151f, 1101.543f, -793.3998f, 61.01268f, 11.75f, 0, 1, 0))) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1095.905f, -786.5956f, 57.1032f, 1114.59f, -786.7163f, 60.15023f, 15.25f, 0, 1, 0)))
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
						iLocal_423 = 1;
					}
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1051.458f, -794.5156f, 55.68565f, 1117.848f, -794.2987f, 77.44183f, 33.75f, 0, 1, 0))
						{
							if (GlobalFunc_4924(Local_294[0 /*9*/]))
							{
								if (!PED::IS_PED_IN_COMBAT(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID()))
								{
									TASK::TASK_COMBAT_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
							iLocal_423 = 1;
						}
					}
				}
				if (GlobalFunc_4924(Local_294[0 /*9*/]))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_294[0 /*9*/], 1) < 12f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 20f)
					{
						if (!PED::IS_PED_IN_COMBAT(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_COMBAT_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
						iLocal_423 = 1;
					}
				}
				if (iLocal_427 == 0)
				{
					if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1051.791f, -793.2307f, 57.1418f, 1071.548f, -793.1798f, 60.55063f, 11.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1064.095f, -784.5695f, 56.83767f, 1061.792f, -789.8588f, 60.01268f, 11.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1058.49f, -785.6928f, 53.26268f, 1057.05f, -791.674f, 60.01268f, 9.5f, 0, 1, 0))
					{
						if (PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 1f)
						{
							iLocal_461 += 5;
						}
						if (iLocal_430 == 1)
						{
							iLocal_461 += 3;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1051.507f, -792.2719f, 60.62209f, 1070.429f, -792.2669f, 57.01259f, 9.5f, 0, 1, 0))
						{
							iLocal_461 += 2;
							if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								iLocal_461 += 50;
							}
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_461 += 5;
						}
						iLocal_461 += 3;
						if (iLocal_461 > 1000)
						{
							if (iLocal_427 == 0)
							{
								if (GlobalFunc_115(Local_294[0 /*9*/]))
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									if (!PED::IS_PED_FACING_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
									}
									iLocal_463 = MISC::GET_GAME_TIMER();
								}
								iLocal_427 = 1;
							}
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1067.675f, -788.5863f, 53.27134f, 1067.798f, -798.8701f, 60.04082f, 8.25f, 0, 1, 0))
					{
						if (!PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
						{
							iLocal_460++;
							if (iLocal_460 > 70)
							{
								if (iLocal_427 == 0)
								{
									if (GlobalFunc_115(Local_294[0 /*9*/]))
									{
										TASK::TASK_LOOK_AT_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
										if (!PED::IS_PED_FACING_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
										{
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
										}
										iLocal_463 = MISC::GET_GAME_TIMER();
									}
									iLocal_427 = 1;
								}
							}
						}
					}
					if (GlobalFunc_115(Local_390) && VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(Local_390))
					{
						if (iLocal_427 == 0)
						{
							if (GlobalFunc_115(Local_294[0 /*9*/]))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								if (!PED::IS_PED_FACING_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
								}
								iLocal_463 = MISC::GET_GAME_TIMER();
							}
							iLocal_427 = 1;
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1084.465f, -800.1337f, 57.39651f, 1081.145f, -800.1677f, 59.99038f, 1.5f, 0, 1, 0) && !PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_427 == 0)
						{
							if (GlobalFunc_115(Local_294[0 /*9*/]))
							{
								TASK::TASK_LOOK_AT_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
								if (!PED::IS_PED_FACING_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
								}
								iLocal_463 = MISC::GET_GAME_TIMER();
							}
							iLocal_427 = 1;
						}
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1087.937f, -793.1239f, 54.7728f, 1100.255f, -793.1273f, 61.01268f, 12.25f, 0, 1, 0) || (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1087.937f, -793.1239f, 54.7728f, 1100.255f, -793.1273f, 61.01268f, 12.25f, 0, 1, 0)))
				{
					if (GlobalFunc_4924(Local_294[1 /*9*/]))
					{
						if (!PED::IS_PED_FACING_PED(Local_294[1 /*9*/], PLAYER::PLAYER_PED_ID(), 45f))
						{
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_294[1 /*9*/], 0);
							TASK::TASK_LOOK_AT_ENTITY(Local_294[1 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_294[1 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
						}
					}
				}
				if (iLocal_427 == 1)
				{
					if (GlobalFunc_4924(Local_294[0 /*9*/]))
					{
						PED::SET_PED_SEEING_RANGE(Local_294[0 /*9*/], 100f);
					}
					if (MISC::GET_GAME_TIMER() > iLocal_463 + 3500)
					{
						if (GlobalFunc_4924(Local_294[0 /*9*/]))
						{
							if (!PED::IS_PED_IN_COMBAT(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID()))
							{
								TASK::TASK_COMBAT_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						if (iLocal_423 == 0)
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
							iLocal_423 = 1;
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_463 + 1200)
					{
						if (GlobalFunc_4924(Local_294[0 /*9*/]))
						{
							if (PED::IS_PED_FACING_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 50f))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_294[0 /*9*/], 1630799643) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_294[0 /*9*/], 1630799643) != 0)
								{
									if (GlobalFunc_4924(Local_294[1 /*9*/]))
									{
										TASK::CLEAR_PED_TASKS(Local_294[1 /*9*/]);
										TASK::TASK_LOOK_AT_ENTITY(Local_294[1 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									}
									WEAPON::GIVE_WEAPON_TO_PED(Local_294[0 /*9*/], joaat("weapon_combatpistol"), -1, 1, 1);
									WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(Local_294[0 /*9*/], joaat("weapon_combatpistol"), joaat("component_at_pi_flsh"));
									TASK::TASK_AIM_GUN_AT_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 5000, 0);
									AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_294[0 /*9*/], "PAP3B_BDAA", "Paparazzo3BBodyGuard1", "SPEECH_PARAMS_FORCE", 0);
								}
							}
						}
					}
				}
			}
			else if (!iLocal_411)
			{
				if (iLocal_410)
				{
					if (!iLocal_446)
					{
						RECORDING::_0x293220DA1B46CEBC(6f, 6f, 1);
						GlobalFunc_159("PAP3_HELP8", -1);
						iLocal_446 = 1;
					}
				}
			}
			iVar12 = 0;
			while (iVar12 <= 1)
			{
				if (GlobalFunc_4924(Local_349[iVar12 /*9*/]))
				{
					if (PED::IS_PED_IN_COMBAT(Local_349[iVar12 /*9*/], 0))
					{
						if (iLocal_423 == 0)
						{
							PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
							iLocal_423 = 1;
						}
						if (GlobalFunc_4924(Local_294[0 /*9*/]))
						{
							if (!PED::IS_PED_IN_COMBAT(Local_294[0 /*9*/], 0))
							{
								TASK::TASK_COMBAT_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
				else
				{
					if (iLocal_423 == 0)
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
						iLocal_423 = 1;
					}
					if (GlobalFunc_4924(Local_294[0 /*9*/]))
					{
						if (!PED::IS_PED_IN_COMBAT(Local_294[0 /*9*/], 0))
						{
							TASK::TASK_COMBAT_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
				}
				iVar12++;
			}
			iVar12 = 0;
			while (iVar12 <= 3)
			{
				if (GlobalFunc_4924(Local_294[iVar12 /*9*/]))
				{
					if (iLocal_423 == 0)
					{
						PED::SET_PED_RESET_FLAG(Local_294[iVar12 /*9*/], 112, 1);
					}
					if (PED::IS_PED_IN_COMBAT(Local_294[iVar12 /*9*/], 0))
					{
						if (GlobalFunc_4924(Local_331))
						{
							if (GlobalFunc_115(Local_377[0 /*6*/]))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_331, -235832601) != 1 && TASK::GET_SCRIPT_TASK_STATUS(Local_331, -235832601) != 0)
								{
									TASK::TASK_LOOK_AT_ENTITY(Local_331, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_331, Local_377[0 /*6*/], "PAP3_Security1", 262144, 0, 8, -1, -1082130432, 0, 1073741824);
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_331, "amb@world_human_smoking@female@idle_a", "idle_a", 3))
									{
										TASK::STOP_ANIM_TASK(Local_331, "amb@world_human_smoking@female@idle_a", "idle_a", -8f);
									}
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_331, "amb@world_human_smoking@female@idle_a", "idle_b", 3))
									{
										TASK::STOP_ANIM_TASK(Local_331, "amb@world_human_smoking@female@idle_a", "idle_b", -8f);
									}
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_331, "amb@world_human_smoking@female@idle_a", "idle_c", 3))
									{
										TASK::STOP_ANIM_TASK(Local_331, "amb@world_human_smoking@female@idle_a", "idle_c", -8f);
									}
									if (GlobalFunc_4924(Local_294[0 /*9*/]))
									{
										PED::SET_PED_SEEING_RANGE(Local_294[0 /*9*/], 150f);
									}
									if (GlobalFunc_4924(Local_294[1 /*9*/]))
									{
										PED::SET_PED_SEEING_RANGE(Local_294[1 /*9*/], 150f);
									}
									if (GlobalFunc_4924(Local_294[2 /*9*/]))
									{
										PED::SET_PED_SEEING_RANGE(Local_294[2 /*9*/], 150f);
									}
									if (GlobalFunc_4924(Local_294[3 /*9*/]))
									{
										PED::SET_PED_SEEING_RANGE(Local_294[3 /*9*/], 150f);
									}
									GlobalFunc_130(&uLocal_291);
									GlobalFunc_846(&uLocal_287);
									iLocal_414 = 0;
									iLocal_408 = 0;
									if (GlobalFunc_4924(Local_294[2 /*9*/]))
									{
										TASK::TASK_COMBAT_PED(Local_294[2 /*9*/], PLAYER::PLAYER_PED_ID(), 67108864, 16);
									}
									if (iLocal_411 == 1)
									{
										iLocal_274 = 6;
										iLocal_275 = 0;
									}
									else
									{
										if (GlobalFunc_4924(Local_294[1 /*9*/]))
										{
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_294[1 /*9*/], 0);
										}
										func_1(2);
									}
								}
							}
						}
					}
				}
				else if (iLocal_423 == 0)
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
					iLocal_423 = 1;
				}
				iVar12++;
			}
			func_300();
			if (iLocal_410 == 1)
			{
				if (iLocal_411 == 0)
				{
					if (GlobalFunc_2791(50))
					{
						iLocal_456 = MISC::GET_GAME_TIMER();
						GlobalFunc_6685(0);
						GlobalFunc_2793(0);
						GlobalFunc_2792(0);
						iLocal_411 = 1;
					}
					else if (iLocal_428 == 1)
					{
						if (iLocal_436 == 0)
						{
							if (GlobalFunc_4455())
							{
								GlobalFunc_159("PAP3_HELP7", -1);
								iLocal_456 = MISC::GET_GAME_TIMER();
								iLocal_436 = 1;
							}
						}
					}
				}
				else
				{
					if (iLocal_432 == 0)
					{
						if (iLocal_430 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_456 + 6000)
							{
								if (func_283(50, "PAP3A_TXT5", 1, 0, 0, 0, 0, 1, 0, 1))
								{
									iLocal_430 = 1;
								}
							}
						}
						else
						{
							if (iLocal_434 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_456 + 4800)
								{
									iLocal_434 = 1;
								}
							}
							if (!GlobalFunc_155(Local_331, PLAYER::PLAYER_PED_ID(), 60f))
							{
								Var6 = { GlobalFunc_560() };
								if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER"))
								{
									GlobalFunc_5105();
								}
							}
						}
					}
					if (iLocal_432 == 0)
					{
						if (iLocal_430 == 1 && MISC::GET_GAME_TIMER() > iLocal_456 + 7500)
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1071.562f, -787.9003f, 56.7723f, 1071.65f, -793.4357f, 59.30243f, 3.25f, 0, 1, 0) && PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (GlobalFunc_115(Local_390))
								{
									if (iLocal_425 == 0)
									{
										VEHICLE::START_VEHICLE_ALARM(Local_390);
										if (iLocal_427 == 0)
										{
											if (GlobalFunc_115(Local_294[0 /*9*/]))
											{
												TASK::TASK_LOOK_AT_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
												if (!PED::IS_PED_FACING_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
												{
													TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
												}
												iLocal_463 = MISC::GET_GAME_TIMER();
											}
											iLocal_427 = 1;
										}
										iLocal_425 = 1;
									}
								}
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1095.303f, -789.9751f, 62.40207f, 1078.776f, -789.9934f, 64.40999f, 1.5f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1078.399f, -785.0526f, 60.16986f, 1071.268f, -785.0859f, 62.19881f, 4.25f, 0, 1, 0))
							{
								iLocal_462++;
								if (iLocal_462 > 50)
								{
									if (iLocal_427 == 0)
									{
										if (GlobalFunc_115(Local_294[0 /*9*/]))
										{
											TASK::TASK_LOOK_AT_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
											if (!PED::IS_PED_FACING_PED(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), 20f))
											{
												TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_294[0 /*9*/], PLAYER::PLAYER_PED_ID(), -1);
											}
											AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Local_294[0 /*9*/], "PAP3B_BDAA", "Paparazzo3BBodyGuard1", "SPEECH_PARAMS_STANDARD", 0);
											iLocal_463 = MISC::GET_GAME_TIMER();
										}
										iLocal_427 = 1;
									}
								}
							}
						}
					}
					if (GlobalFunc_4924(Local_294[0 /*9*/]) && PED::IS_PED_IN_ANY_VEHICLE(Local_294[0 /*9*/], 0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_294[0 /*9*/], 1158.52f, -759.3739f, 56.32278f, 1116.869f, -759.6908f, 61.70632f, 13.75f, 0, 1, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_294[0 /*9*/], -1273030092) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_PED_TARGET(Local_294[0 /*9*/], PED::GET_VEHICLE_PED_IS_IN(Local_294[0 /*9*/], 0), PLAYER::PLAYER_PED_ID(), 8, 50f, 786469, 20f, 20f, 1);
								iLocal_276 = 5;
								iLocal_274 = 7;
								iLocal_275 = 0;
							}
						}
					}
					if (GlobalFunc_115(Local_331) && !GlobalFunc_155(PLAYER::PLAYER_PED_ID(), Local_331, 209f))
					{
						iLocal_274 = 7;
						iLocal_275 = 0;
					}
				}
			}
			else
			{
				if (iLocal_428 == 1)
				{
					if (GlobalFunc_2791(50))
					{
						if (iLocal_431 == 0)
						{
							iLocal_456 = MISC::GET_GAME_TIMER();
							iLocal_431 = 1;
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_456 + 4000)
						{
							if (iLocal_429 == 0)
							{
								if (iLocal_465 == 0)
								{
									if (func_283(50, "PAP3A_TXT1", 1, 0, 0, 0, 0, 1, 0, 1))
									{
										GlobalFunc_2794(50);
										iLocal_428 = 0;
										iLocal_465 = 1;
									}
								}
								else if (iLocal_465 == 1)
								{
									if (func_283(50, "PAP3A_TXT2", 1, 0, 0, 0, 0, 1, 0, 1))
									{
										GlobalFunc_2794(50);
										iLocal_428 = 0;
										iLocal_465 = 2;
									}
								}
								else if (iLocal_465 == 2)
								{
									if (func_283(50, "PAP3A_TXT3", 1, 0, 0, 0, 0, 1, 0, 1))
									{
										GlobalFunc_2794(50);
										iLocal_428 = 0;
										iLocal_465 = 3;
									}
								}
								else if (iLocal_465 == 3)
								{
									if (func_283(50, "PAP3A_TXT4", 1, 0, 0, 0, 0, 1, 0, 1))
									{
										GlobalFunc_2794(50);
										iLocal_428 = 0;
										iLocal_465 = 4;
									}
								}
							}
							else
							{
								if (iLocal_466 == 0)
								{
									if (func_283(50, "PAP3A_TXT8", 1, 0, 0, 0, 0, 1, 0, 1))
									{
										GlobalFunc_2794(50);
										iLocal_428 = 0;
										iLocal_466 = 1;
									}
								}
								else if (iLocal_466 == 1)
								{
									if (func_283(50, "PAP3A_TXT7", 1, 0, 0, 0, 0, 1, 0, 1))
									{
										GlobalFunc_2794(50);
										iLocal_428 = 0;
										iLocal_466 = 2;
									}
								}
								iLocal_429 = 0;
							}
						}
					}
				}
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
				{
					if (GlobalFunc_2796())
					{
						GlobalFunc_2794(50);
						iLocal_428 = 1;
						iLocal_431 = 0;
						if (ENTITY::IS_ENTITY_ON_SCREEN(Local_331))
						{
							if (func_280())
							{
								if (func_279())
								{
									GlobalFunc_553(805);
									RECORDING::_0x293220DA1B46CEBC(3f, 0f, 0);
								}
								GlobalFunc_2793(1);
								GlobalFunc_2792(1);
								GlobalFunc_846(&uLocal_287);
								iLocal_456 = MISC::GET_GAME_TIMER();
								iLocal_410 = 1;
							}
							else
							{
								GlobalFunc_2793(1);
								GlobalFunc_2792(1);
								GlobalFunc_2794(50);
								iLocal_456 = MISC::GET_GAME_TIMER();
							}
						}
						else
						{
							GlobalFunc_2793(1);
							GlobalFunc_2792(1);
							GlobalFunc_2794(50);
							iLocal_456 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			if (bLocal_409 == 1)
			{
				if (!GlobalFunc_115(Local_331))
				{
					func_1(4);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_331, PLAYER::PLAYER_PED_ID(), 1))
				{
					func_1(3);
				}
			}
			break;
		
		case 2:
			HUD::CLEAR_PRINTS();
			GlobalFunc_846(&uLocal_287);
			iLocal_414 = 0;
			iLocal_408 = 0;
			break;
	}
}

int func_279()//Position - 0x29C74
{
	if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_293))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_293) >= 0.803f && PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_293) < 0.871f)
		{
			return 1;
		}
	}
	return 0;
}

int func_280()//Position - 0x29CAD
{
	if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1060.736f, -776.3729f, 56.7626f, 1087.983f, -792.0965f, 59.31259f, 8.25f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1051.626f, -768.4251f, 56.18585f, 1104.971f, -768.8157f, 60.03636f, 28.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1057.153f, -785.1578f, 59.00606f, 1057.153f, -782.0903f, 60.70669f, 1.95f, 0, 1, 0))
	{
		return 0;
	}
	if (GlobalFunc_4924(Local_331))
	{
		if (!func_281(Local_331))
		{
			return 0;
		}
		if (((GlobalFunc_4924(Local_340) && ENTITY::IS_ENTITY_ON_SCREEN(Local_331)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_340)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(Local_331, 1), 1f))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1095.334f, -783.0236f, 61.67838f, 1078.834f, -783.1444f, 64.36657f, 15.75f, 0, 1, 0))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_331, 126) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_340, 17))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_331, 126) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), Local_340, 17))
			{
				if (!GlobalFunc_155(Local_331, PLAYER::PLAYER_PED_ID(), 50f))
				{
					iLocal_429 = 1;
					return 0;
				}
				else
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_281(int iParam0)//Position - 0x29E46
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<3> Var3;
	
	if (GlobalFunc_4924(iParam0))
	{
		iVar0 = PED::GET_PED_BONE_INDEX(iParam0, 23553);
		if (iVar0 != -1)
		{
			Var3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iParam0, iVar0) };
			GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(Var3, &fVar1, &fVar2);
			if (((fVar1 > 0.2f && fVar1 < 0.8f) && fVar2 > 0.2f) && fVar2 < 0.8f)
			{
				return 1;
			}
		}
	}
	return 0;
}


int func_283(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x29ECE
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2263, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_284(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_2970 = iParam6;
			Global_2873[3 /*6*/] = { Global_SAVE_DATA.CHARSHEET_SAVED_ARRAY[iParam0 /*29*/].f_3 };
			Global_2950 = iParam0;
			MISC::SET_BIT(&Global_2263, 1);
			MISC::SET_BIT(&Global_2263, 7);
		}
		return 1;
	}
	return 0;
}

int func_284(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x29F66
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	GlobalFunc_8951();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14393 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14393 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14393 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (GlobalFunc_5406() == 0)
	{
		GlobalFunc_5405();
		return 0;
	}
	GlobalFunc_2246(Global_16759);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/]), sParam1, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_24 = iParam2;
	}
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_25 = iParam7;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_26 = uParam8;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_29 = uParam9;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_30 = uParam12;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_31 = uParam11;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_28 = 0;
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_33), sParam4, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_50), sParam5, 64);
	Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2263, 10))
	{
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
		Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
		Global_2969 = 4;
		GlobalFunc_1494(0);
		GlobalFunc_1494(2);
		GlobalFunc_1494(1);
	}
	else
	{
		GlobalFunc_8951();
		switch (iParam16)
		{
			case 3:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[Global_14393] = 1;
				break;
			
			case 0:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_SAVE_DATA.TEXT_MESSAGES_SAVED_ARRAY[Global_16759 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14393)
			{
				case 0:
					GlobalFunc_1494(0);
					Global_2969 = 0;
					break;
				
				case 1:
					GlobalFunc_1494(1);
					Global_2969 = 1;
					break;
				
				case 2:
					GlobalFunc_1494(2);
					Global_2969 = 2;
					break;
				
				case 3:
					GlobalFunc_1494(3);
					Global_2969 = 3;
					break;
				
				default:
					Global_2969 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2263, 10))
		{
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
			Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[Global_14393 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_SAVE_DATA.CELLPHONE_SETTINGS_SAVED_ARRAY[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16761[Global_16759] = 0;
	if (bParam10)
	{
		GlobalFunc_8951();
		if (Global_14336)
		{
			StringCopy(&Global_14382, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14393)
			{
				case 0:
					StringCopy(&Global_14382, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14382, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14382, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14382, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!GlobalFunc_268())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14382, 1);
			}
		}
	}
	if (!Global_14552)
	{
		if (Global_14393.f_1 == 6)
		{
			GlobalFunc_1493(Global_14374, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			GlobalFunc_7199(1);
			GlobalFunc_1493(Global_14374, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14373), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}
















void func_300()//Position - 0x2AF35
{
	struct<3> Var0;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	if (GlobalFunc_496(&uLocal_706, Var0) && Var0.f_2 < 61f)
	{
		if (iLocal_422)
		{
			if (!PED::GET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 1, 0);
			}
			iLocal_422 = 0;
		}
	}
	else if (iLocal_422 == 0)
	{
		iLocal_422 = 1;
	}
}


void func_302()//Position - 0x2AFC0
{
	if (iLocal_440 == 0)
	{
		switch (iLocal_441)
		{
			case 0:
				iLocal_443 = 0;
				iLocal_444 = 0;
				if (!GlobalFunc_116(0))
				{
					if (!GlobalFunc_74("PAP3_HELP1"))
					{
						if (iLocal_442 == 0)
						{
							GlobalFunc_159("PAP3_HELP1", -1);
							iLocal_442 = 1;
						}
					}
				}
				else
				{
					iLocal_442 = 0;
					iLocal_441++;
				}
				break;
			
			case 1:
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					if (!GlobalFunc_74("PAP3_HELP2"))
					{
						if (iLocal_443 == 0)
						{
							GlobalFunc_159("PAP3_HELP2", -1);
							iLocal_443 = 1;
						}
					}
				}
				else
				{
					if (GlobalFunc_74("PAP3_HELP2"))
					{
						HUD::CLEAR_HELP(1);
					}
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
					{
						iLocal_441++;
					}
				}
				if (!GlobalFunc_116(0))
				{
					iLocal_441 = 0;
				}
				break;
			
			case 2:
				if (iLocal_410 == 1)
				{
					iLocal_441++;
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
				{
					iLocal_443 = 0;
					iLocal_444 = 0;
					iLocal_441 = 1;
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
				{
					if (iLocal_444 == 0)
					{
						iLocal_444 = 1;
					}
				}
				else if (!GlobalFunc_116(0))
				{
					iLocal_441 = 0;
				}
				break;
			
			case 3:
				break;
		}
	}
	else
	{
		if (iLocal_410 == 0)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) == 0)
			{
				if (!GlobalFunc_74("PAP3_HELP6"))
				{
					if (iLocal_445 == 0)
					{
						GlobalFunc_159("PAP3_HELP6", -1);
						iLocal_445 = 1;
					}
				}
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
		{
			if (GlobalFunc_74("PAP3_HELP6"))
			{
				HUD::CLEAR_HELP(1);
			}
		}
	}
}







void func_309()//Position - 0x2B3AC
{
	struct<6> Var0;
	struct<6> Var6;
	
	Var0 = { GlobalFunc_560() };
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
	{
		if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_DEALER") && AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 0)
		{
			if (iLocal_474 == 0)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_331, 1) > 40f)
				{
					iLocal_286 = 1;
					iLocal_474 = 1;
					iLocal_475 = 1;
				}
			}
			else if (iLocal_474 == 1)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_331, 1) <= 40f)
				{
					iLocal_286 = 0;
					iLocal_474 = 0;
					iLocal_475 = 1;
				}
			}
		}
	}
	if (iLocal_475 == 1)
	{
		Var6 = { GlobalFunc_2209() };
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var6))
		{
			if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_1"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_2", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_2"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_3", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_3"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_4", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_4"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_5", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_5"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_6", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_6"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_7", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_7"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_8", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_8"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_9", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_9"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_10", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_10"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_11", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_11"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_12", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_12"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_13", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_13"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_14", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_14"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_15", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_15"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_16", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_16"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_17", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_17"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_18", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_18"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_19", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_19"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_20", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_20"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_21", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_21"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_22", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_22"))
			{
				StringCopy(&Local_280, "PAP3_DEALER_23", 24);
			}
			else if (MISC::ARE_STRINGS_EQUAL(&Var6, "PAP3_DEALER_23"))
			{
				iLocal_475 = 4;
			}
			GlobalFunc_5105();
			iLocal_475 = 2;
		}
	}
	else if (iLocal_475 == 2)
	{
		if (!GlobalFunc_111())
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_280))
			{
				if (GlobalFunc_10626(&uLocal_760, "pap3bau", "PAP3_DEALER", &Local_280, 8, iLocal_286, 0))
				{
					iLocal_475 = 3;
				}
			}
			else
			{
				iLocal_475 = 3;
			}
		}
	}
}


void func_311(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2B74B
{
	int iVar0;
	int iVar1;
	int iVar2;
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
			iVar2 = GlobalFunc_5110(iVar1);
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
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_89999, iParam0);
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
				iVar10 = GlobalFunc_133(&(Global_89962.f_3));
				if (iVar10 > -1)
				{
					Global_SAVE_DATA.BAIL_BOND_SAVED_STRUCT.f_4[iVar10] = 0;
				}
			}
		}
		Global_84545 = iParam2;
		Global_89999 = iParam0;
		func_312(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_89999)
	{
	}
}

void func_312(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2B8C3
{
	func_313(&Global_93588, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_313(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2B8DF
{
	int iVar0;
	int iVar1;
	
	*uParam0 = GlobalFunc_8315();
	uParam0->f_1 = GlobalFunc_7626();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_10628(&(uParam0->f_2161), 0);
		GlobalFunc_7705(PLAYER::PLAYER_PED_ID());
		GlobalFunc_7904(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_17[iVar1] = Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_294[iVar1];
		if (iVar1 == GlobalFunc_8315())
		{
			GlobalFunc_8358(PLAYER::PLAYER_PED_ID(), &(uParam0->f_472[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_472[iVar1 /*65*/][iVar0] = Global_89752[iVar1 /*65*/][iVar0];
				uParam0->f_472[iVar1 /*65*/].f_13[iVar0] = Global_89752[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_472[iVar1 /*65*/].f_59 = Global_89752[iVar1 /*65*/].f_59;
			uParam0->f_472[iVar1 /*65*/].f_60 = Global_89752[iVar1 /*65*/].f_60;
			uParam0->f_472[iVar1 /*65*/].f_61 = Global_89752[iVar1 /*65*/].f_61;
			uParam0->f_472[iVar1 /*65*/].f_62 = Global_89752[iVar1 /*65*/].f_62;
			uParam0->f_472[iVar1 /*65*/].f_63 = Global_89752[iVar1 /*65*/].f_63;
			uParam0->f_472[iVar1 /*65*/].f_64 = Global_89752[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_472[iVar1 /*65*/].f_39[iVar0] = Global_89752[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_472[iVar1 /*65*/].f_49[iVar0] = Global_89752[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_668[iVar1 /*284*/][iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_668[iVar1 /*284*/].f_133[iVar0 /*3*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_1521[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_1521[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_1521[iVar1 /*32*/].f_16[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_1521[iVar1 /*32*/].f_16[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_1521[iVar1 /*32*/].f_16[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_1521[iVar1 /*32*/].f_16[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_1521[iVar1 /*32*/].f_16[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_1521[iVar1 /*32*/].f_16[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_1521[iVar1 /*32*/].f_16[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_1521[iVar1 /*32*/].f_16[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_1521[iVar1 /*32*/].f_16[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_1521[iVar1 /*32*/].f_16[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_1521[iVar1 /*32*/].f_16[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_1521[iVar1 /*32*/].f_16[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_SAVE_DATA.FINANCE_SAVED_ARRAY.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_51925[iVar1];
		uParam0->f_25[0 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_25[1 /*223*/][iVar1 /*74*/] = { Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_2115[iVar1 /*15*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/][iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_5[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2115[iVar1 /*15*/].f_10[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY.TATTOOS_ARRAY[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_1622[iVar1 /*164*/][iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/][iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_4[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_8[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_12[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_16[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_20[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_24[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_28[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_32[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_36[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_40[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_44[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_48[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_52[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_56[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_60[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_64[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_68[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_72[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_76[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_80[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_84[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_88[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_92[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_96[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_100[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_104[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_108[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_112[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_116[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_120[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_124[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_128[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_132[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_136[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_140[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_144[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_148[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_152[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_156[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1622[iVar1 /*164*/].f_160[iVar0] = Global_SAVE_DATA.COMPONENTS_ARRAY[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_1618[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_1618[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_1618[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		GlobalFunc_9750(&(uParam0->f_2167), uParam0, iParam5, 1, 1, 0);
	}
	GlobalFunc_542(&(uParam0->f_2233));
	uParam3 = uParam3;
	uParam2 = uParam2;
}




























































int func_373(int iParam0, int iParam1, float fParam2)//Position - 0x30BBC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_78)
	{
		if (Local_78[iVar0 /*13*/].f_1 == iParam0 && Local_78[iVar0 /*13*/].f_2 == iParam1)
		{
			Local_78[iVar0 /*13*/].f_3 = fParam2;
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = func_374();
	if (iVar0 == -1)
	{
		return -1;
	}
	Local_78[iVar0 /*13*/] = 0;
	Local_78[iVar0 /*13*/].f_1 = iParam0;
	Local_78[iVar0 /*13*/].f_2 = iParam1;
	Local_78[iVar0 /*13*/].f_4 = 0;
	Local_78[iVar0 /*13*/].f_3 = fParam2;
	Local_78[iVar0 /*13*/].f_5 = 0;
	Local_78[iVar0 /*13*/].f_12 = iVar0;
	return iVar0;
}

int func_374()//Position - 0x30C57
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_78)
	{
		if (Local_78[iVar0 /*13*/] == 1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}


void func_376()//Position - 0x30CAE
{
	struct<6> Var0;
	int iVar6;
	
	if (bLocal_409)
	{
		iVar6 = 0;
		while (iVar6 <= 3)
		{
			if (GlobalFunc_4924(Local_294[iVar6 /*9*/]))
			{
				if (PED::IS_PED_IN_COMBAT(Local_294[iVar6 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_294[iVar6 /*9*/], 0);
					func_1(2);
					return;
				}
				else if (GlobalFunc_155(Local_294[iVar6 /*9*/], PLAYER::PLAYER_PED_ID(), 5f))
				{
					TASK::TASK_COMBAT_PED(Local_294[iVar6 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			else
			{
				func_1(2);
				return;
			}
			iVar6++;
		}
	}
	if (GlobalFunc_4924(Local_368))
	{
		if (!PED::IS_PED_HEADTRACKING_PED(Local_368, PLAYER::PLAYER_PED_ID()))
		{
			TASK::TASK_LOOK_AT_ENTITY(Local_368, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
	}
	switch (iLocal_275)
	{
		case 0:
			if (!func_377())
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_287))
				{
					HUD::SET_BLIP_ROUTE(uLocal_287, 0);
				}
				else
				{
					uLocal_287 = GlobalFunc_4955(Local_368, 1, 1, 5);
					GlobalFunc_164("PAP3_CON", 7500, 1);
				}
			}
			if (GlobalFunc_4940(Local_377[0 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_377[0 /*6*/], 0);
			}
			if (GlobalFunc_4940(Local_377[1 /*6*/]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_377[1 /*6*/], 0);
			}
			if (GlobalFunc_4940(Local_390))
			{
				ENTITY::FREEZE_ENTITY_POSITION(Local_390, 0);
			}
			GlobalFunc_173(&uLocal_760, 8, Local_368, "Paparazzo3BDealerGoon1", 0, 1);
			iLocal_275 = 1;
			break;
		
		case 1:
			func_274();
			func_254();
			if (bLocal_447)
			{
				return;
			}
			func_300();
			if (bLocal_409 == 1)
			{
				if (func_377())
				{
					GlobalFunc_846(&uLocal_287);
					iLocal_275 = 2;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_489, 5f, 5f, 2f, 0, 1, 0) && GlobalFunc_4924(Local_368))
				{
					if (!PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					{
						GlobalFunc_173(&uLocal_760, 8, Local_368, "Paparazzo3BDealerGoon1", 0, 1);
						GlobalFunc_173(&uLocal_760, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						if (GlobalFunc_10618(&uLocal_760, "pap3bau", "PAP3_CONTACT", 8, 0, 0, 0))
						{
							RECORDING::_0x293220DA1B46CEBC(4f, 10f, 1);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_368, PLAYER::PLAYER_PED_ID(), -1);
							GlobalFunc_846(&uLocal_287);
							iLocal_275 = 2;
						}
					}
				}
				if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_489, 15f, 15f, 2f, 0, 1, 0) && GlobalFunc_4924(Local_368)) && TASK::GET_SCRIPT_TASK_STATUS(Local_368, 993674639) == 1)
				{
					TASK::CLEAR_PED_TASKS(Local_368);
					TASK::TASK_LOOK_AT_ENTITY(Local_368, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
				}
			}
			break;
		
		case 2:
			func_274();
			func_254();
			if (bLocal_447)
			{
				return;
			}
			if ((!GlobalFunc_111() || GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_368, 1) > (5f * 2f)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1071.164f, -783.0585f, 53.73021f, 1062.915f, -782.8473f, 59.3433f, 3f, 0, 1, 0))
			{
				GlobalFunc_5105();
				if (GlobalFunc_4924(Local_368) && !PED::IS_PED_FLEEING(Local_368))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_368, -1146898486) != 1)
					{
						PED::SET_PED_CAN_BE_TARGETTED(Local_368, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_368, 0);
						TASK::TASK_WANDER_STANDARD(Local_368, 1193033728, 0);
					}
				}
				func_2(4);
			}
			else
			{
				Var0 = { GlobalFunc_2209() };
				if (MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_CONTACT_4") || MISC::ARE_STRINGS_EQUAL(&Var0, "PAP3_CONTACT_5"))
				{
					iLocal_476++;
					if (iLocal_476 > 30)
					{
						if (GlobalFunc_4924(Local_368))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_368, -1146898486) != 1)
							{
								PED::SET_PED_CAN_BE_TARGETTED(Local_368, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_368, 0);
								TASK::TASK_WANDER_STANDARD(Local_368, 281.0714f, 0);
							}
						}
					}
				}
			}
			break;
	}
}

int func_377()//Position - 0x31035
{
	if ((((((GlobalFunc_4924(Local_331) && GlobalFunc_155(Local_331, PLAYER::PLAYER_PED_ID(), 55f)) && ENTITY::IS_ENTITY_ON_SCREEN(Local_331)) && CAM::IS_SPHERE_VISIBLE(ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(Local_331, PED::GET_PED_BONE_INDEX(Local_331, 31086)), 0.1f)) && !ENTITY::IS_ENTITY_OCCLUDED(Local_331)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1114.024f, -758.6504f, 54.94576f, 1054.396f, -758.6326f, 64.53705f, 47.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1046.05f, -754.8271f, 56.04185f, 1144.92f, -755.2141f, 59.98388f, 20.75f, 0, 1, 0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1051.438f, -791.6494f, 56.68583f, 1114.935f, -791.4409f, 66.16802f, 15.5f, 0, 1, 0))
	{
		return 1;
	}
	return 0;
}

void func_378()//Position - 0x31136
{
	int iVar0;
	
	if (bLocal_409)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (GlobalFunc_4924(Local_294[iVar0 /*9*/]))
			{
				if (PED::IS_PED_IN_COMBAT(Local_294[iVar0 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_294[iVar0 /*9*/], 0);
					func_1(2);
					return;
				}
				else if (GlobalFunc_155(Local_294[iVar0 /*9*/], PLAYER::PLAYER_PED_ID(), 5f))
				{
					TASK::TASK_COMBAT_PED(Local_294[iVar0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			else
			{
				func_1(2);
				return;
			}
			iVar0++;
		}
	}
	switch (iLocal_275)
	{
		case 0:
			if (!HUD::DOES_BLIP_EXIST(uLocal_287))
			{
				uLocal_287 = GlobalFunc_4955(Local_368, 1, 1, 5);
				HUD::SET_BLIP_ROUTE(uLocal_287, 1);
			}
			GlobalFunc_164("PAP3_CON", 7500, 1);
			iLocal_275 = 1;
			break;
		
		case 1:
			func_274();
			func_254();
			if (bLocal_447)
			{
				return;
			}
			if (bLocal_409 == 1)
			{
				if (func_377())
				{
					iLocal_275 = 2;
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_489, 20f, 20f, 2f, 0, 1, 0))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 5f)
						{
						}
						else
						{
							iLocal_275 = 2;
						}
					}
					else
					{
						iLocal_275 = 2;
					}
				}
			}
			break;
		
		case 2:
			iLocal_408 = 0;
			func_379();
			func_2(3);
			break;
	}
}

void func_379()//Position - 0x3128B
{
	if (GlobalFunc_4940(Local_396))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_396, 0);
	}
	if (GlobalFunc_4940(Local_390))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_390, 0);
	}
	if (GlobalFunc_4940(Local_377[0 /*6*/]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_377[0 /*6*/], 0);
	}
	if (GlobalFunc_4940(Local_377[1 /*6*/]))
	{
		ENTITY::FREEZE_ENTITY_POSITION(Local_377[1 /*6*/], 0);
	}
}

void func_380()//Position - 0x312E7
{
	int iVar0;
	
	if (bLocal_409)
	{
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			if (GlobalFunc_4924(Local_294[iVar0 /*9*/]))
			{
				if (PED::IS_PED_IN_COMBAT(Local_294[iVar0 /*9*/], PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_294[iVar0 /*9*/], 0);
					func_1(2);
					return;
				}
				else if (GlobalFunc_155(Local_294[iVar0 /*9*/], PLAYER::PLAYER_PED_ID(), 5f))
				{
					TASK::TASK_COMBAT_PED(Local_294[iVar0 /*9*/], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
			else
			{
				func_1(2);
				return;
			}
			iVar0++;
		}
	}
	switch (iLocal_275)
	{
		case 0:
			GlobalFunc_173(&uLocal_760, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			GlobalFunc_173(&uLocal_760, 3, 0, "BEVERLY", 0, 1);
			if (iLocal_279 == 1)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (!CAM::IS_SCREEN_FADING_IN())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
				}
			}
			if (GlobalFunc_116(0))
			{
				GlobalFunc_6685(0);
			}
			iLocal_414 = 0;
			GlobalFunc_846(&uLocal_287);
			iLocal_275 = 1;
			break;
		
		case 1:
			func_274();
			func_254();
			if (bLocal_447)
			{
				return;
			}
			if (bLocal_409 == 1)
			{
				if (func_377())
				{
					GlobalFunc_6685(0);
					HUD::CLEAR_PRINTS();
					iLocal_408 = 0;
					func_379();
					func_2(3);
				}
			}
			if (!iLocal_414)
			{
				if (GlobalFunc_10664(&uLocal_760, 50, "PAP3BAU", "PAP3_INTRO", 9, 0, 0, 1))
				{
					RECORDING::_0x293220DA1B46CEBC(2f, 5f, 1);
					iLocal_414 = 1;
				}
			}
			else if (GlobalFunc_111())
			{
				if ((AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE() > 6 && !HUD::DOES_BLIP_EXIST(uLocal_287)) && GlobalFunc_4924(Local_368))
				{
					uLocal_287 = GlobalFunc_4955(Local_368, 1, 1, 5);
					if (HUD::DOES_BLIP_EXIST(uLocal_287))
					{
						HUD::SET_BLIP_ROUTE(uLocal_287, 1);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_489, 20f, 20f, 2f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1046.05f, -754.8271f, 56.04185f, 1144.92f, -755.2141f, 59.98388f, 20.75f, 0, 1, 0))
				{
					GlobalFunc_6685(0);
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 5f)
						{
						}
						else
						{
							HUD::CLEAR_PRINTS();
							iLocal_408 = 0;
							func_379();
							func_2(3);
						}
					}
					else
					{
						HUD::CLEAR_PRINTS();
						iLocal_408 = 0;
						func_379();
						func_2(3);
					}
				}
			}
			else if (GlobalFunc_1993())
			{
				iLocal_275 = 2;
			}
			break;
		
		case 2:
			iLocal_408 = 0;
			func_2(2);
			break;
	}
}


void func_382()//Position - 0x31598
{
	int iVar0;
	int iVar1;
	
	if (func_457(0))
	{
		uLocal_288 = PED::ADD_SCENARIO_BLOCKING_AREA(1051.859f, -799.0458f, 53f, 1114.582f, -779.1284f, 60f, 0, 1, 1, 1);
		uLocal_289 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(56.7705f, -761.915f, 1090.248f) - Vector(5f, 5f, 5f), Vector(56.7705f, -761.915f, 1090.248f) + Vector(5f, 5f, 5f), 0, 1, 1, 1);
		if (GlobalFunc_199())
		{
			iVar1 = GlobalFunc_198();
			if (Global_84544 == 1)
			{
				iVar1++;
			}
			switch (iVar1)
			{
				case 0:
					GlobalFunc_4972(1039.866f, -536.2775f, 60.0808f, 173f, 1, 0);
					func_450(1, 1);
					while (!func_277(1))
					{
						SYSTEM::WAIT(0);
					}
					bLocal_409 = false;
					func_274();
					PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
					GlobalFunc_10698(&iVar0, 1027.591f, -550.1744f, 59.2083f, 175.1857f, 1, 0, 0, 1, 1, joaat("asterope"), 0, 145);
					GlobalFunc_4967(iVar0, -1, 1);
					func_394();
					iLocal_275 = 2;
					iLocal_274 = 1;
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					GlobalFunc_737();
					func_384(1, 1, 1);
					break;
				
				case 1:
					MISC::CLEAR_AREA_OF_OBJECTS(1077.067f, -797.3167f, 57.3309f, 150f, 2);
					GlobalFunc_4972(1066.643f, -774.0832f, 57.1322f, 245.0544f, 1, 0);
					func_450(1, 1);
					while (!func_277(1))
					{
						SYSTEM::WAIT(0);
					}
					bLocal_409 = false;
					func_274();
					PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
					GlobalFunc_10698(&iVar0, 1077.736f, -765.1624f, 56.6271f, 271.4277f, 0, 0, 0, 1, 1, joaat("buffalo"), 0, 145);
					iLocal_275 = 2;
					iLocal_274 = 3;
					GlobalFunc_4967(0, -1, 1);
					GlobalFunc_881(&Local_368);
					func_394();
					MISC::CLEAR_AREA(1075.642f, -793.8809f, 57.3145f, 40f, 1, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					GlobalFunc_737();
					func_384(1, 1, 1);
					break;
				
				case 2:
					GlobalFunc_4972(1066.643f, -774.0832f, 57.1322f, 245.0544f, 1, 0);
					PED::CLEAR_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_758, 1862763509);
					GlobalFunc_4967(0, -1, 1);
					GlobalFunc_737();
					SYSTEM::WAIT(600);
					GlobalFunc_79(500, 1);
					func_384(1, 1, 1);
					func_4();
					break;
				
				default:
					break;
			}
		}
		else
		{
			if (GlobalFunc_2(0))
			{
				iLocal_209 = 0;
				while (!func_493(&Local_213))
				{
					SYSTEM::WAIT(0);
				}
				GlobalFunc_79(500, 1);
			}
			iLocal_275 = 0;
			iLocal_274 = 1;
		}
	}
}


void func_384(int iParam0, int iParam1, int iParam2)//Position - 0x31869
{
	func_385(0, 0, iParam2, 1);
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

void func_385(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3189D
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	PLAYER::SET_EVERYONE_IGNORE_PLAYER(uVar0, 0);
	PLAYER::SET_PLAYER_CONTROL(uVar0, iParam3, 0);
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









void func_394()//Position - 0x31B73
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
}
























































void func_450(bool bParam0, bool bParam1)//Position - 0x3860B
{
	if (bParam0)
	{
		func_454(0, 1, 1);
	}
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_OUT(0);
	}
	func_451(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}

void func_451(struct<3> Param0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)//Position - 0x3863E
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_PLAYING(uVar0))
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



void func_454(bool bParam0, int iParam1, int iParam2)//Position - 0x38843
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
			func_385(iParam1, iParam2, 1, 1);
		}
	}
}



int func_457(bool bParam0)//Position - 0x38961
{
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	else if (HUD::HAS_ADDITIONAL_TEXT_LOADED(0) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
	{
		return 1;
	}
	return 0;
}


void func_459()//Position - 0x389C9
{
	char* sVar0;
	
	switch (iLocal_275)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(1);
			GlobalFunc_846(&uLocal_287);
			switch (iLocal_488)
			{
				case 0:
					break;
				
				case 1:
					sVar0 = "PAP3_08";
					break;
				
				case 2:
					sVar0 = "PAP3_ALERT";
					break;
				
				case 3:
					sVar0 = "PAP3_INJUR2";
					break;
				
				case 4:
					sVar0 = "PAP3_KILL1";
					break;
				
				case 6:
					sVar0 = "PAP3_KILL3";
					break;
				
				case 5:
					sVar0 = "PAP3_THREAT";
					break;
			}
			if (iLocal_488 == 0)
			{
				GlobalFunc_10539(1);
			}
			else
			{
				GlobalFunc_10811(sVar0, 1);
			}
			GlobalFunc_4956();
			iLocal_419 = 0;
			iLocal_275 = 1;
			break;
		
		case 1:
			if (iLocal_419)
			{
				if (GlobalFunc_145())
				{
					if (!GlobalFunc_111())
					{
						func_202(1);
						func_460();
						if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
						{
							GlobalFunc_4935();
						}
						func_495(0);
					}
				}
			}
			else if (iLocal_488 == 2)
			{
				if (iLocal_413)
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_173(&uLocal_760, 4, Local_294[0 /*9*/], "Paparazzo3BBodyGuard1", 0, 1);
						GlobalFunc_173(&uLocal_760, 6, Local_340, "Paparazzo3BDrugDealer", 0, 1);
						GlobalFunc_173(&uLocal_760, 7, Local_294[1 /*9*/], "Paparazzo3BBodyGuard2", 0, 1);
						GlobalFunc_173(&uLocal_760, 8, Local_349[0 /*9*/], "Paparazzo3BDealerGoon1", 0, 1);
						iLocal_419 = GlobalFunc_10618(&uLocal_760, "pap3bau", "PAP3_SECUR2", 8, 1, 0, 0);
					}
				}
				else if (!GlobalFunc_111())
				{
					GlobalFunc_173(&uLocal_760, 4, Local_294[1 /*9*/], "Paparazzo3BBodyGuard1", 0, 1);
					iLocal_419 = GlobalFunc_10630(&uLocal_760, "pap3bau", "PAP3_SECUR4", "PAP3_SECUR4_3", 8, 1, 0);
				}
			}
			else if (iLocal_488 == 5)
			{
				if (GlobalFunc_4924(Local_368))
				{
					GlobalFunc_4956();
					GlobalFunc_173(&uLocal_760, 8, Local_368, "Paparazzo3BDealerGoon1", 0, 1);
					GlobalFunc_173(&uLocal_760, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					iLocal_419 = GlobalFunc_10618(&uLocal_760, "pap3bau", "PAP3_FAIL", 8, 1, 0, 0);
				}
			}
			else
			{
				iLocal_419 = 1;
			}
			break;
	}
}

void func_460()//Position - 0x38BCA
{
	int iVar0;
	
	GlobalFunc_881(&Local_331);
	GlobalFunc_881(&Local_340);
	GlobalFunc_881(&Local_368);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		GlobalFunc_881(&(Local_294[iVar0 /*9*/]));
		GlobalFunc_846(&(Local_294[iVar0 /*9*/].f_8));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		GlobalFunc_881(&(Local_349[iVar0 /*9*/]));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		GlobalFunc_6689(&(Local_377[iVar0 /*6*/]));
		iVar0++;
	}
	GlobalFunc_6689(&Local_390);
	GlobalFunc_6689(&Local_396);
	GlobalFunc_846(&uLocal_287);
	GlobalFunc_130(&Local_402);
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_758);
	PED::REMOVE_RELATIONSHIP_GROUP(uLocal_759);
}





void func_465()//Position - 0x38D91
{
	int iVar0;
	
	if (iLocal_423 || iLocal_432)
	{
		if (!iLocal_448)
		{
			if (GlobalFunc_115(Local_340))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_340, 0);
			}
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (GlobalFunc_115(Local_349[iVar0 /*9*/]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_349[iVar0 /*9*/], 0);
				}
				iVar0++;
			}
			iLocal_448 = 1;
		}
	}
}

void func_466(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x38DF1
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



















void func_485()//Position - 0x398A7
{
	iLocal_448 = 0;
	func_492();
	iLocal_408 = 0;
	bLocal_409 = false;
	iLocal_410 = 0;
	iLocal_411 = 0;
	iLocal_412 = 0;
	iLocal_413 = 0;
	iLocal_414 = 0;
	iLocal_416 = 0;
	iLocal_417 = 0;
	iLocal_455 = 0;
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_smoking@female@idle_a");
	STREAMING::REQUEST_ANIM_DICT("amb@world_human_smoking@female@base");
	STREAMING::REQUEST_ANIM_DICT(sLocal_925);
	STREAMING::REQUEST_ANIM_DICT(sLocal_926);
	STREAMING::REQUEST_ANIM_DICT(sLocal_927);
	PED::ADD_RELATIONSHIP_GROUP("PrincessGroup", &uLocal_758);
	PED::ADD_RELATIONSHIP_GROUP("DealersGroup", &uLocal_759);
	GlobalFunc_9621(50, 1, 0);
	GlobalFunc_500(&uLocal_498);
	GlobalFunc_499(&uLocal_498, 1073.593f, -787.5071f, 57.2626f);
	GlobalFunc_499(&uLocal_498, 1071.346f, -796.4704f, 57.3459f);
	GlobalFunc_499(&uLocal_498, 1074.568f, -798.8521f, 57.3658f);
	GlobalFunc_499(&uLocal_498, 1091.103f, -798.9657f, 57.2626f);
	GlobalFunc_499(&uLocal_498, 1101.366f, -794.2939f, 57.2626f);
	GlobalFunc_499(&uLocal_498, 1114.66f, -794.1965f, 57.3977f);
	GlobalFunc_499(&uLocal_498, 1114.48f, -781.67f, 58.42f);
	GlobalFunc_499(&uLocal_498, 1106.92f, -781.76f, 58.26f);
	GlobalFunc_499(&uLocal_498, 1096.149f, -782.6533f, 57.2632f);
	GlobalFunc_498(&uLocal_498);
	GlobalFunc_500(&uLocal_550);
	GlobalFunc_499(&uLocal_550, 1051.814f, -777.9432f, 57.3783f);
	GlobalFunc_499(&uLocal_550, 1042.556f, -810.4073f, 56.8677f);
	GlobalFunc_499(&uLocal_550, 1121.786f, -815.4036f, 55.5302f);
	GlobalFunc_499(&uLocal_550, 1124.271f, -771.0333f, 56.7566f);
	GlobalFunc_499(&uLocal_550, 1103.765f, -766.3374f, 56.663f);
	GlobalFunc_499(&uLocal_550, 1072.296f, -766.3906f, 56.7058f);
	GlobalFunc_498(&uLocal_550);
	GlobalFunc_500(&uLocal_602);
	GlobalFunc_499(&uLocal_602, 1104.459f, -775.0743f, 57.3526f);
	GlobalFunc_499(&uLocal_602, 1114.681f, -775.0476f, 57.3626f);
	GlobalFunc_499(&uLocal_602, 1114.679f, -781.0639f, 57.4212f);
	GlobalFunc_499(&uLocal_602, 1103.593f, -782.3363f, 57.2626f);
	GlobalFunc_498(&uLocal_602);
	GlobalFunc_500(&uLocal_654);
	GlobalFunc_499(&uLocal_654, 1070.706f, -786.0175f, 57.2632f);
	GlobalFunc_499(&uLocal_654, 1063.445f, -781.0466f, 57.2632f);
	GlobalFunc_499(&uLocal_654, 1051.712f, -785.5277f, 57.3895f);
	GlobalFunc_499(&uLocal_654, 1051.752f, -797.8251f, 57.3918f);
	GlobalFunc_499(&uLocal_654, 1055.24f, -798.9913f, 57.2626f);
	GlobalFunc_499(&uLocal_654, 1069.971f, -796.5669f, 57.3245f);
	GlobalFunc_499(&uLocal_654, 1075.095f, -793.6094f, 57.3137f);
	GlobalFunc_498(&uLocal_654);
	GlobalFunc_5902(&uLocal_706, &uLocal_654, 5f);
	HUD::REQUEST_ADDITIONAL_TEXT("PAP3BAU", 6);
	HUD::REQUEST_ADDITIONAL_TEXT("PAP3", 0);
}







void func_492()//Position - 0x39FEA
{
	Local_294[0 /*9*/].f_1 = { 1083.619f, -795.7248f, 58.30753f };
	Local_294[0 /*9*/].f_4 = 6.89694f;
	Local_294[0 /*9*/].f_5 = joaat("s_m_m_highsec_02");
	Local_294[1 /*9*/].f_1 = { 1087.1f, -792.7405f, 58.27478f };
	Local_294[1 /*9*/].f_4 = 94.73335f;
	Local_294[1 /*9*/].f_5 = joaat("s_m_m_highsec_01");
	Local_294[2 /*9*/].f_1 = { 1110.243f, -781.5825f, 57.2626f };
	Local_294[2 /*9*/].f_4 = 8f;
	Local_294[2 /*9*/].f_5 = joaat("s_m_m_highsec_02");
	Local_294[3 /*9*/].f_1 = { 1108.883f, -782.283f, 58.26268f };
	Local_294[3 /*9*/].f_4 = -0.55027f;
	Local_294[3 /*9*/].f_5 = joaat("s_m_m_highsec_01");
	Local_331.f_1 = { 1084.57f, -794.883f, 58.3022f };
	Local_331.f_4 = 114.5275f;
	Local_331.f_5 = joaat("u_f_y_princess");
	Local_340.f_1 = { 1084.756f, -793.6358f, 58.29034f };
	Local_340.f_4 = -160f;
	Local_340.f_5 = joaat("s_m_y_dealer_01");
	Local_349[0 /*9*/].f_1 = { 1074.095f, -789.9508f, 58.28485f };
	Local_349[0 /*9*/].f_4 = -101.4592f;
	Local_349[0 /*9*/].f_5 = joaat("g_m_y_mexgoon_03");
	Local_349[1 /*9*/].f_1 = { 1083.943f, -789.5262f, 58.27326f };
	Local_349[1 /*9*/].f_4 = -171.7938f;
	Local_349[1 /*9*/].f_5 = joaat("g_m_y_mexgoon_03");
	Local_368.f_1 = { Local_489 };
	Local_368.f_4 = 35.52f;
	Local_368.f_5 = joaat("g_m_y_mexgoon_03");
	Local_377[0 /*6*/].f_1 = { 1086.703f, -796.6877f, 57.76878f };
	Local_377[0 /*6*/].f_4 = -58.43335f;
	Local_377[0 /*6*/].f_5 = joaat("landstalker");
	Local_377[1 /*6*/].f_1 = { 1110.928f, -789.2598f, 57.2627f };
	Local_377[1 /*6*/].f_4 = 0f;
	Local_377[1 /*6*/].f_5 = joaat("landstalker");
	Local_390.f_1 = { 1071.818f, -790.1667f, 57.62096f };
	Local_390.f_4 = 176.8383f;
	Local_390.f_5 = joaat("buccaneer");
	Local_396.f_1 = { 1137.38f, -792.8448f, 56.6033f };
	Local_396.f_4 = 89.9365f;
	Local_396.f_5 = joaat("benson");
	Local_402.f_1 = { 1084.054f, -792.4236f, 57.2626f };
	Local_402.f_5 = joaat("p_amb_joint_01");
}

int func_493(var uParam0)//Position - 0x3A26E
{
	uParam0->f_16 = 3;
	uParam0->f_17[0 /*3*/] = { 1040.96f, -534.42f, 60.17f };
	uParam0->f_15 = 90f;
	uParam0->f_27 = 1;
	return 1;
}


void func_495(int iParam0)//Position - 0x3A2C6
{
	int iVar0;
	
	if (GlobalFunc_9162())
	{
		func_202(iParam0);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_288, 0);
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_289, 0);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		func_507();
		func_221();
		GlobalFunc_131(&Local_390);
		GlobalFunc_131(&Local_396);
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			GlobalFunc_132(&(Local_294[iVar0 /*9*/]), 1, 0, 1);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			GlobalFunc_131(&(Local_377[iVar0 /*6*/]));
			iVar0++;
		}
		GlobalFunc_132(&Local_331, 1, 0, 1);
		GlobalFunc_132(&Local_340, 1, 0, 1);
		GlobalFunc_9755("PAP3_16");
	}
	GlobalFunc_9165(&Local_213, 0, 0, 0);
	GlobalFunc_2795(0);
	SCRIPT::TERMINATE_THIS_THREAD();
}












void func_507()//Position - 0x3A617
{
	int iVar0;
	
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_331.f_5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_340.f_5);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_402.f_5);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_294[iVar0 /*9*/].f_5);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_377[iVar0 /*6*/].f_5);
		iVar0++;
	}
}























