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
	float fLocal_27 = 0f;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	int iLocal_32 = 0;
	int iLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	struct<3> Local_44[6];
	int iLocal_63 = 4;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 4;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 4;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 4;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 4;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 4;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 4;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	struct<20> Local_107 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144[5] = { 0, 0, 0, 0, 0 };
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158[5] = { 0, 0, 0, 0, 0 };
	int iLocal_164[2] = { 0, 0 };
	int iLocal_167[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_174[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_183[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199[3] = { 0, 0, 0 };
	int iLocal_203[4] = { 0, 0, 0, 0 };
	int iLocal_208 = 0;
	int iLocal_209[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_225 = 0;
	int iLocal_226 = 0;
	int iLocal_227[3] = { 0, 0, 0 };
	int iLocal_231 = 0;
	int iLocal_232 = 0;
	int iLocal_233 = 0;
	int iLocal_234 = 0;
	var uLocal_235[3] = { 0, 0, 0 };
	var uLocal_239[2] = { 0, 0 };
	var uLocal_242[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	var uLocal_252[3] = { 0, 0, 0 };
	var uLocal_256[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266[6] = { 0, 0, 0, 0, 0, 0 };
	var uLocal_273[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_282[4] = { 0, 0, 0, 0 };
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	int iLocal_292 = 0;
	int iLocal_293[27] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_321[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_335[22] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_358[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_365[1] = { 0 };
	int iLocal_367[2] = { 0, 0 };
	int iLocal_370[4] = { 0, 0, 0, 0 };
	int iLocal_375 = 0;
	bool bLocal_376 = 0;
	int iLocal_377 = 0;
	bool bLocal_378 = 0;
	int iLocal_379 = 0;
	int iLocal_380 = 0;
	bool bLocal_381 = 0;
	bool bLocal_382 = 0;
	int iLocal_383 = 0;
	bool bLocal_384 = 0;
	int iLocal_385 = 0;
	bool bLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	bool bLocal_389 = 0;
	int iLocal_390 = 0;
	bool bLocal_391 = 0;
	bool bLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	bool bLocal_402 = 0;
	int iLocal_403 = 0;
	int iLocal_404 = 0;
	int iLocal_405 = 0;
	int iLocal_406 = 0;
	int iLocal_407 = 0;
	int iLocal_408 = 0;
	bool bLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412[3] = { 0, 0, 0 };
	int iLocal_416 = 0;
	bool bLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	bool bLocal_421 = 0;
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
	bool bLocal_434 = 0;
	int iLocal_435 = 0;
	int iLocal_436 = 0;
	int iLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	int iLocal_441 = 0;
	bool bLocal_442 = 0;
	int iLocal_443 = 0;
	bool bLocal_444 = 0;
	int iLocal_445 = 0;
	int iLocal_446[4] = { 0, 0, 0, 0 };
	int iLocal_451[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_460 = 0;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	int iLocal_463 = 0;
	bool bLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467[4] = { 0, 0, 0, 0 };
	int iLocal_472 = 0;
	int iLocal_473[4] = { 0, 0, 0, 0 };
	bool bLocal_478[4] = { 0, 0, 0, 0 };
	int iLocal_483[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_496 = 0;
	int iLocal_497 = 0;
	int iLocal_498 = 0;
	int iLocal_499 = 0;
	int iLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	bool bLocal_503 = 0;
	int iLocal_504 = 0;
	bool bLocal_505 = 0;
	int iLocal_506[4] = { 0, 0, 0, 0 };
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	int iLocal_515 = 0;
	bool bLocal_516 = 0;
	bool bLocal_517 = 0;
	int iLocal_518 = 0;
	bool bLocal_519 = 0;
	int iLocal_520 = 0;
	bool bLocal_521 = 0;
	bool bLocal_522 = 0;
	int iLocal_523 = 0;
	int iLocal_524 = 0;
	bool bLocal_525 = 0;
	int iLocal_526 = 0;
	bool bLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529 = 0;
	int iLocal_530 = 0;
	int iLocal_531 = 0;
	bool bLocal_532 = 0;
	bool bLocal_533 = 0;
	bool bLocal_534 = 0;
	bool bLocal_535 = 0;
	bool bLocal_536 = 0;
	bool bLocal_537 = 0;
	int iLocal_538 = 0;
	int iLocal_539 = 0;
	int iLocal_540 = 0;
	int iLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	int iLocal_546 = 0;
	bool bLocal_547 = 0;
	bool bLocal_548 = 0;
	bool bLocal_549 = 0;
	bool bLocal_550 = 0;
	bool bLocal_551 = 0;
	bool bLocal_552 = 0;
	bool bLocal_553 = 0;
	bool bLocal_554 = 0;
	bool bLocal_555 = 0;
	int iLocal_556 = 0;
	bool bLocal_557 = 0;
	int iLocal_558 = 0;
	int iLocal_559 = 0;
	int iLocal_560 = 0;
	bool bLocal_561 = 0;
	int iLocal_562 = 0;
	bool bLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	bool bLocal_566 = 0;
	bool bLocal_567 = 0;
	bool bLocal_568 = 0;
	bool bLocal_569 = 0;
	bool bLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	bool bLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	int iLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	bool bLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	bool bLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	bool bLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	bool bLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	bool bLocal_601 = 0;
	int iLocal_602 = 0;
	bool bLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	bool bLocal_606 = 0;
	int iLocal_607 = 0;
	bool bLocal_608 = 0;
	bool bLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	bool bLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	bool bLocal_623 = 0;
	int iLocal_624 = 0;
	bool bLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	int iLocal_630 = 0;
	bool bLocal_631 = 0;
	bool bLocal_632 = 0;
	float fLocal_633 = 0f;
	float fLocal_634 = 0f;
	float fLocal_635 = 0f;
	float fLocal_636 = 0f;
	float fLocal_637 = 0f;
	float fLocal_638 = 0f;
	float fLocal_639 = 0f;
	float fLocal_640 = 0f;
	float fLocal_641 = 0f;
	float fLocal_642 = 0f;
	float fLocal_643 = 0f;
	float fLocal_644 = 0f;
	float fLocal_645 = 0f;
	float fLocal_646 = 0f;
	float fLocal_647[3] = { 0f, 0f, 0f };
	float fLocal_651 = 0f;
	float fLocal_652 = 0f;
	float fLocal_653 = 0f;
	int iLocal_654 = 0;
	int iLocal_655 = 0;
	int iLocal_656 = 0;
	int iLocal_657 = 0;
	int iLocal_658 = 0;
	int iLocal_659 = 0;
	int iLocal_660 = 0;
	int iLocal_661 = 0;
	int iLocal_662 = 0;
	int iLocal_663 = 0;
	int iLocal_664 = 0;
	int iLocal_665 = 0;
	int iLocal_666 = 0;
	int iLocal_667 = 0;
	int iLocal_668 = 0;
	int iLocal_669 = 0;
	int iLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672[3] = { 0, 0, 0 };
	int iLocal_676[4] = { 0, 0, 0, 0 };
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_696[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_703[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_710[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_719 = 0;
	int iLocal_720 = 0;
	int iLocal_721 = 0;
	int iLocal_722 = 0;
	int iLocal_723 = 0;
	int iLocal_724 = 0;
	int iLocal_725 = 0;
	int iLocal_726 = 0;
	int iLocal_727 = 0;
	int iLocal_728 = 0;
	int iLocal_729 = 0;
	int iLocal_730 = 0;
	int iLocal_731 = 0;
	int iLocal_732 = 0;
	int iLocal_733 = 0;
	int iLocal_734 = 0;
	int iLocal_735 = 0;
	int iLocal_736 = 0;
	int iLocal_737 = 0;
	int iLocal_738 = 0;
	int iLocal_739 = 0;
	int iLocal_740 = 0;
	int iLocal_741 = 0;
	int iLocal_742 = 0;
	int iLocal_743 = 0;
	int iLocal_744 = 0;
	int iLocal_745 = 0;
	int iLocal_746 = 0;
	int iLocal_747 = 0;
	int iLocal_748 = 0;
	int iLocal_749 = 0;
	int iLocal_750 = 0;
	int iLocal_751 = 0;
	int iLocal_752 = 0;
	int iLocal_753 = 0;
	int iLocal_754 = 0;
	int iLocal_755 = 0;
	int iLocal_756 = 0;
	int iLocal_757 = 0;
	int iLocal_758 = 0;
	int iLocal_759 = 0;
	int iLocal_760 = 0;
	int iLocal_761 = 0;
	int iLocal_762 = 0;
	int iLocal_763 = 0;
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	int iLocal_772 = 0;
	int iLocal_773 = 0;
	int iLocal_774 = 0;
	int iLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	int iLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	int iLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	int iLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	struct<3> Local_795 = { 0, 0, 0 } ;
	struct<3> Local_798 = { 0, 0, 0 } ;
	struct<3> Local_801[3];
	struct<3> Local_811 = { 0, 0, 0 } ;
	float fLocal_814 = 0f;
	int iLocal_815 = 0;
	struct<92> Local_816 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_908 = 0;
	var uLocal_909 = 1065353216;
	var uLocal_910 = 1065353216;
	var uLocal_911 = 1036831949;
	var uLocal_912 = 1000593162;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	int iLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 16;
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
	int iLocal_1088 = 0;
	struct<5> Local_1089 = { 0, 0, 0, 0, 0 } ;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 21;
	var uLocal_1097 = 6;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = -1;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 1000;
	var uLocal_1111 = 1000;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	struct<6> Local_1114 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_1120[48] = "";
	int iLocal_1126 = 0;
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
	struct<3> Local_1144 = { 0, 0, 0 } ;
	struct<3> Local_1147 = { 0, 0, 0 } ;
	int iLocal_1150 = 0;
	int iLocal_1151 = 0;
	bool bLocal_1152 = 0;
	bool bLocal_1153 = 0;
	bool bLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 2;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 2;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 20;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = -1;
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
	var uLocal_1201 = 1065353216;
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
	var uLocal_1228 = -1;
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
	var uLocal_1258 = 1065353216;
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
	var uLocal_1285 = -1;
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
	var uLocal_1315 = 1065353216;
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
	var uLocal_1342 = -1;
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
	var uLocal_1372 = 1065353216;
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
	var uLocal_1399 = -1;
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
	var uLocal_1429 = 1065353216;
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
	var uLocal_1456 = -1;
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
	var uLocal_1486 = 1065353216;
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
	var uLocal_1513 = -1;
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
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 0;
	var uLocal_1543 = 1065353216;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
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
	var uLocal_1570 = -1;
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
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 1065353216;
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
	var uLocal_1627 = -1;
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
	var uLocal_1657 = 1065353216;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 0;
	var uLocal_1664 = 0;
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
	var uLocal_1684 = -1;
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
	var uLocal_1714 = 1065353216;
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
	var uLocal_1741 = -1;
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
	var uLocal_1771 = 1065353216;
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
	var uLocal_1798 = -1;
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
	var uLocal_1828 = 1065353216;
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
	var uLocal_1855 = -1;
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
	var uLocal_1885 = 1065353216;
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
	var uLocal_1912 = -1;
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
	var uLocal_1942 = 1065353216;
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
	var uLocal_1969 = -1;
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
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 0;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 1065353216;
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
	var uLocal_2026 = -1;
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
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 1065353216;
	var uLocal_2057 = 0;
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
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 0;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = -1;
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
	var uLocal_2113 = 1065353216;
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
	var uLocal_2140 = -1;
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
	var uLocal_2170 = 1065353216;
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
	var uLocal_2197 = -1;
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
	var uLocal_2227 = 1065353216;
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
	var uLocal_2246 = 0;
	var uLocal_2247 = 0;
	var uLocal_2248 = 0;
	var uLocal_2249 = 0;
	var uLocal_2250 = 0;
	var uLocal_2251 = 0;
	var uLocal_2252 = 0;
	var uLocal_2253 = 0;
	var uLocal_2254 = -1;
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = 0;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
	var uLocal_2279 = 0;
	var uLocal_2280 = 0;
	var uLocal_2281 = 0;
	var uLocal_2282 = 0;
	var uLocal_2283 = 0;
	var uLocal_2284 = 1065353216;
	var uLocal_2285 = 0;
	var uLocal_2286 = 0;
	var uLocal_2287 = 0;
	var uLocal_2288 = 0;
	var uLocal_2289 = 0;
	var uLocal_2290 = 0;
	var uLocal_2291 = 0;
	var uLocal_2292 = 0;
	var uLocal_2293 = 0;
	var uLocal_2294 = 0;
	var uLocal_2295 = 0;
	var uLocal_2296 = 0;
	var uLocal_2297 = 0;
	var uLocal_2298 = 0;
	var uLocal_2299 = 0;
	var uLocal_2300 = 0;
	var uLocal_2301 = 0;
	var uLocal_2302 = 0;
	var uLocal_2303 = 0;
	var uLocal_2304 = 0;
	var uLocal_2305 = 0;
	var uLocal_2306 = 0;
	var uLocal_2307 = 0;
	var uLocal_2308 = 16;
	var uLocal_2309 = 0;
	var uLocal_2310 = -1082130432;
	var uLocal_2311 = 0;
	var uLocal_2312 = -1082130432;
	var uLocal_2313 = 0;
	var uLocal_2314 = -1082130432;
	var uLocal_2315 = 0;
	var uLocal_2316 = -1082130432;
	var uLocal_2317 = 0;
	var uLocal_2318 = -1082130432;
	var uLocal_2319 = 0;
	var uLocal_2320 = -1082130432;
	var uLocal_2321 = 0;
	var uLocal_2322 = -1082130432;
	var uLocal_2323 = 0;
	var uLocal_2324 = -1082130432;
	var uLocal_2325 = 0;
	var uLocal_2326 = -1082130432;
	var uLocal_2327 = 0;
	var uLocal_2328 = -1082130432;
	var uLocal_2329 = 0;
	var uLocal_2330 = -1082130432;
	var uLocal_2331 = 0;
	var uLocal_2332 = -1082130432;
	var uLocal_2333 = 0;
	var uLocal_2334 = -1082130432;
	var uLocal_2335 = 0;
	var uLocal_2336 = -1082130432;
	var uLocal_2337 = 0;
	var uLocal_2338 = -1082130432;
	var uLocal_2339 = 0;
	var uLocal_2340 = -1082130432;
	var uLocal_2341 = 16;
	var uLocal_2342 = 0;
	var uLocal_2343 = -1082130432;
	var uLocal_2344 = 0;
	var uLocal_2345 = -1082130432;
	var uLocal_2346 = 0;
	var uLocal_2347 = -1082130432;
	var uLocal_2348 = 0;
	var uLocal_2349 = -1082130432;
	var uLocal_2350 = 0;
	var uLocal_2351 = -1082130432;
	var uLocal_2352 = 0;
	var uLocal_2353 = -1082130432;
	var uLocal_2354 = 0;
	var uLocal_2355 = -1082130432;
	var uLocal_2356 = 0;
	var uLocal_2357 = -1082130432;
	var uLocal_2358 = 0;
	var uLocal_2359 = -1082130432;
	var uLocal_2360 = 0;
	var uLocal_2361 = -1082130432;
	var uLocal_2362 = 0;
	var uLocal_2363 = -1082130432;
	var uLocal_2364 = 0;
	var uLocal_2365 = -1082130432;
	var uLocal_2366 = 0;
	var uLocal_2367 = -1082130432;
	var uLocal_2368 = 0;
	var uLocal_2369 = -1082130432;
	var uLocal_2370 = 0;
	var uLocal_2371 = -1082130432;
	var uLocal_2372 = 0;
	var uLocal_2373 = -1082130432;
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
	var uLocal_2390 = -1082130432;
	var uLocal_2391 = -1082130432;
	var uLocal_2392 = 1;
	var uLocal_2393 = 1;
	var uLocal_2394 = 1;
	var uLocal_2395 = -1;
	var uLocal_2396 = -1;
	var uLocal_2397 = -1;
	struct<2> Local_2398 = { 0, 0 } ;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 2;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 2;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 20;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = -1;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 1065353216;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = -1;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 1065353216;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = -1;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 1065353216;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 0;
	var uLocal_2575 = 0;
	var uLocal_2576 = 0;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = -1;
	var uLocal_2584 = 0;
	var uLocal_2585 = 0;
	var uLocal_2586 = 0;
	var uLocal_2587 = 0;
	var uLocal_2588 = 0;
	var uLocal_2589 = 0;
	var uLocal_2590 = 0;
	var uLocal_2591 = 0;
	var uLocal_2592 = 0;
	var uLocal_2593 = 0;
	var uLocal_2594 = 0;
	var uLocal_2595 = 0;
	var uLocal_2596 = 0;
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = 0;
	var uLocal_2602 = 0;
	var uLocal_2603 = 0;
	var uLocal_2604 = 0;
	var uLocal_2605 = 0;
	var uLocal_2606 = 0;
	var uLocal_2607 = 0;
	var uLocal_2608 = 0;
	var uLocal_2609 = 0;
	var uLocal_2610 = 0;
	var uLocal_2611 = 0;
	var uLocal_2612 = 0;
	var uLocal_2613 = 1065353216;
	var uLocal_2614 = 0;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	var uLocal_2617 = 0;
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	var uLocal_2620 = 0;
	var uLocal_2621 = 0;
	var uLocal_2622 = 0;
	var uLocal_2623 = 0;
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 0;
	var uLocal_2632 = 0;
	var uLocal_2633 = 0;
	var uLocal_2634 = 0;
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	var uLocal_2638 = 0;
	var uLocal_2639 = 0;
	var uLocal_2640 = -1;
	var uLocal_2641 = 0;
	var uLocal_2642 = 0;
	var uLocal_2643 = 0;
	var uLocal_2644 = 0;
	var uLocal_2645 = 0;
	var uLocal_2646 = 0;
	var uLocal_2647 = 0;
	var uLocal_2648 = 0;
	var uLocal_2649 = 0;
	var uLocal_2650 = 0;
	var uLocal_2651 = 0;
	var uLocal_2652 = 0;
	var uLocal_2653 = 0;
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = 0;
	var uLocal_2659 = 0;
	var uLocal_2660 = 0;
	var uLocal_2661 = 0;
	var uLocal_2662 = 0;
	var uLocal_2663 = 0;
	var uLocal_2664 = 0;
	var uLocal_2665 = 0;
	var uLocal_2666 = 0;
	var uLocal_2667 = 0;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 1065353216;
	var uLocal_2671 = 0;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 0;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 0;
	var uLocal_2689 = 0;
	var uLocal_2690 = 0;
	var uLocal_2691 = 0;
	var uLocal_2692 = 0;
	var uLocal_2693 = 0;
	var uLocal_2694 = 0;
	var uLocal_2695 = 0;
	var uLocal_2696 = 0;
	var uLocal_2697 = -1;
	var uLocal_2698 = 0;
	var uLocal_2699 = 0;
	var uLocal_2700 = 0;
	var uLocal_2701 = 0;
	var uLocal_2702 = 0;
	var uLocal_2703 = 0;
	var uLocal_2704 = 0;
	var uLocal_2705 = 0;
	var uLocal_2706 = 0;
	var uLocal_2707 = 0;
	var uLocal_2708 = 0;
	var uLocal_2709 = 0;
	var uLocal_2710 = 0;
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = 0;
	var uLocal_2716 = 0;
	var uLocal_2717 = 0;
	var uLocal_2718 = 0;
	var uLocal_2719 = 0;
	var uLocal_2720 = 0;
	var uLocal_2721 = 0;
	var uLocal_2722 = 0;
	var uLocal_2723 = 0;
	var uLocal_2724 = 0;
	var uLocal_2725 = 0;
	var uLocal_2726 = 0;
	var uLocal_2727 = 1065353216;
	var uLocal_2728 = 0;
	var uLocal_2729 = 0;
	var uLocal_2730 = 0;
	var uLocal_2731 = 0;
	var uLocal_2732 = 0;
	var uLocal_2733 = 0;
	var uLocal_2734 = 0;
	var uLocal_2735 = 0;
	var uLocal_2736 = 0;
	var uLocal_2737 = 0;
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 0;
	var uLocal_2746 = 0;
	var uLocal_2747 = 0;
	var uLocal_2748 = 0;
	var uLocal_2749 = 0;
	var uLocal_2750 = 0;
	var uLocal_2751 = 0;
	var uLocal_2752 = 0;
	var uLocal_2753 = 0;
	var uLocal_2754 = -1;
	var uLocal_2755 = 0;
	var uLocal_2756 = 0;
	var uLocal_2757 = 0;
	var uLocal_2758 = 0;
	var uLocal_2759 = 0;
	var uLocal_2760 = 0;
	var uLocal_2761 = 0;
	var uLocal_2762 = 0;
	var uLocal_2763 = 0;
	var uLocal_2764 = 0;
	var uLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = 0;
	var uLocal_2773 = 0;
	var uLocal_2774 = 0;
	var uLocal_2775 = 0;
	var uLocal_2776 = 0;
	var uLocal_2777 = 0;
	var uLocal_2778 = 0;
	var uLocal_2779 = 0;
	var uLocal_2780 = 0;
	var uLocal_2781 = 0;
	var uLocal_2782 = 0;
	var uLocal_2783 = 0;
	var uLocal_2784 = 1065353216;
	var uLocal_2785 = 0;
	var uLocal_2786 = 0;
	var uLocal_2787 = 0;
	var uLocal_2788 = 0;
	var uLocal_2789 = 0;
	var uLocal_2790 = 0;
	var uLocal_2791 = 0;
	var uLocal_2792 = 0;
	var uLocal_2793 = 0;
	var uLocal_2794 = 0;
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 0;
	var uLocal_2803 = 0;
	var uLocal_2804 = 0;
	var uLocal_2805 = 0;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = -1;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	var uLocal_2819 = 0;
	var uLocal_2820 = 0;
	var uLocal_2821 = 0;
	var uLocal_2822 = 0;
	var uLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	var uLocal_2832 = 0;
	var uLocal_2833 = 0;
	var uLocal_2834 = 0;
	var uLocal_2835 = 0;
	var uLocal_2836 = 0;
	var uLocal_2837 = 0;
	var uLocal_2838 = 0;
	var uLocal_2839 = 0;
	var uLocal_2840 = 0;
	var uLocal_2841 = 1065353216;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	var uLocal_2847 = 0;
	var uLocal_2848 = 0;
	var uLocal_2849 = 0;
	var uLocal_2850 = 0;
	var uLocal_2851 = 0;
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 0;
	var uLocal_2860 = 0;
	var uLocal_2861 = 0;
	var uLocal_2862 = 0;
	var uLocal_2863 = 0;
	var uLocal_2864 = 0;
	var uLocal_2865 = 0;
	var uLocal_2866 = 0;
	var uLocal_2867 = 0;
	var uLocal_2868 = -1;
	var uLocal_2869 = 0;
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	var uLocal_2878 = 0;
	var uLocal_2879 = 0;
	var uLocal_2880 = 0;
	var uLocal_2881 = 0;
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = 0;
	var uLocal_2887 = 0;
	var uLocal_2888 = 0;
	var uLocal_2889 = 0;
	var uLocal_2890 = 0;
	var uLocal_2891 = 0;
	var uLocal_2892 = 0;
	var uLocal_2893 = 0;
	var uLocal_2894 = 0;
	var uLocal_2895 = 0;
	var uLocal_2896 = 0;
	var uLocal_2897 = 0;
	var uLocal_2898 = 1065353216;
	var uLocal_2899 = 0;
	var uLocal_2900 = 0;
	var uLocal_2901 = 0;
	var uLocal_2902 = 0;
	var uLocal_2903 = 0;
	var uLocal_2904 = 0;
	var uLocal_2905 = 0;
	var uLocal_2906 = 0;
	var uLocal_2907 = 0;
	var uLocal_2908 = 0;
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 0;
	var uLocal_2917 = 0;
	var uLocal_2918 = 0;
	var uLocal_2919 = 0;
	var uLocal_2920 = 0;
	var uLocal_2921 = 0;
	var uLocal_2922 = 0;
	var uLocal_2923 = 0;
	var uLocal_2924 = 0;
	var uLocal_2925 = -1;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	var uLocal_2933 = 0;
	var uLocal_2934 = 0;
	var uLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	var uLocal_2939 = 0;
	var uLocal_2940 = 0;
	var uLocal_2941 = 0;
	var uLocal_2942 = 0;
	var uLocal_2943 = 0;
	var uLocal_2944 = 0;
	var uLocal_2945 = 0;
	var uLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 0;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 1065353216;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	var uLocal_2961 = 0;
	var uLocal_2962 = 0;
	var uLocal_2963 = 0;
	var uLocal_2964 = 0;
	var uLocal_2965 = 0;
	var uLocal_2966 = 0;
	var uLocal_2967 = 0;
	var uLocal_2968 = 0;
	var uLocal_2969 = 0;
	var uLocal_2970 = 0;
	var uLocal_2971 = 0;
	var uLocal_2972 = 0;
	var uLocal_2973 = 0;
	var uLocal_2974 = 0;
	var uLocal_2975 = 0;
	var uLocal_2976 = 0;
	var uLocal_2977 = 0;
	var uLocal_2978 = 0;
	var uLocal_2979 = 0;
	var uLocal_2980 = 0;
	var uLocal_2981 = 0;
	var uLocal_2982 = -1;
	var uLocal_2983 = 0;
	var uLocal_2984 = 0;
	var uLocal_2985 = 0;
	var uLocal_2986 = 0;
	var uLocal_2987 = 0;
	var uLocal_2988 = 0;
	var uLocal_2989 = 0;
	var uLocal_2990 = 0;
	var uLocal_2991 = 0;
	var uLocal_2992 = 0;
	var uLocal_2993 = 0;
	var uLocal_2994 = 0;
	var uLocal_2995 = 0;
	var uLocal_2996 = 0;
	var uLocal_2997 = 0;
	var uLocal_2998 = 0;
	var uLocal_2999 = 0;
	var uLocal_3000 = 0;
	var uLocal_3001 = 0;
	var uLocal_3002 = 0;
	var uLocal_3003 = 0;
	var uLocal_3004 = 0;
	var uLocal_3005 = 0;
	var uLocal_3006 = 0;
	var uLocal_3007 = 0;
	var uLocal_3008 = 0;
	var uLocal_3009 = 0;
	var uLocal_3010 = 0;
	var uLocal_3011 = 0;
	var uLocal_3012 = 1065353216;
	var uLocal_3013 = 0;
	var uLocal_3014 = 0;
	var uLocal_3015 = 0;
	var uLocal_3016 = 0;
	var uLocal_3017 = 0;
	var uLocal_3018 = 0;
	var uLocal_3019 = 0;
	var uLocal_3020 = 0;
	var uLocal_3021 = 0;
	var uLocal_3022 = 0;
	var uLocal_3023 = 0;
	var uLocal_3024 = 0;
	var uLocal_3025 = 0;
	var uLocal_3026 = 0;
	var uLocal_3027 = 0;
	var uLocal_3028 = 0;
	var uLocal_3029 = 0;
	var uLocal_3030 = 0;
	var uLocal_3031 = 0;
	var uLocal_3032 = 0;
	var uLocal_3033 = 0;
	var uLocal_3034 = 0;
	var uLocal_3035 = 0;
	var uLocal_3036 = 0;
	var uLocal_3037 = 0;
	var uLocal_3038 = 0;
	var uLocal_3039 = -1;
	var uLocal_3040 = 0;
	var uLocal_3041 = 0;
	var uLocal_3042 = 0;
	var uLocal_3043 = 0;
	var uLocal_3044 = 0;
	var uLocal_3045 = 0;
	var uLocal_3046 = 0;
	var uLocal_3047 = 0;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	var uLocal_3052 = 0;
	var uLocal_3053 = 0;
	var uLocal_3054 = 0;
	var uLocal_3055 = 0;
	var uLocal_3056 = 0;
	var uLocal_3057 = 0;
	var uLocal_3058 = 0;
	var uLocal_3059 = 0;
	var uLocal_3060 = 0;
	var uLocal_3061 = 0;
	var uLocal_3062 = 0;
	var uLocal_3063 = 0;
	var uLocal_3064 = 0;
	var uLocal_3065 = 0;
	var uLocal_3066 = 0;
	var uLocal_3067 = 0;
	var uLocal_3068 = 0;
	var uLocal_3069 = 1065353216;
	var uLocal_3070 = 0;
	var uLocal_3071 = 0;
	var uLocal_3072 = 0;
	var uLocal_3073 = 0;
	var uLocal_3074 = 0;
	var uLocal_3075 = 0;
	var uLocal_3076 = 0;
	var uLocal_3077 = 0;
	var uLocal_3078 = 0;
	var uLocal_3079 = 0;
	var uLocal_3080 = 0;
	var uLocal_3081 = 0;
	var uLocal_3082 = 0;
	var uLocal_3083 = 0;
	var uLocal_3084 = 0;
	var uLocal_3085 = 0;
	var uLocal_3086 = 0;
	var uLocal_3087 = 0;
	var uLocal_3088 = 0;
	var uLocal_3089 = 0;
	var uLocal_3090 = 0;
	var uLocal_3091 = 0;
	var uLocal_3092 = 0;
	var uLocal_3093 = 0;
	var uLocal_3094 = 0;
	var uLocal_3095 = 0;
	var uLocal_3096 = -1;
	var uLocal_3097 = 0;
	var uLocal_3098 = 0;
	var uLocal_3099 = 0;
	var uLocal_3100 = 0;
	var uLocal_3101 = 0;
	var uLocal_3102 = 0;
	var uLocal_3103 = 0;
	var uLocal_3104 = 0;
	var uLocal_3105 = 0;
	var uLocal_3106 = 0;
	var uLocal_3107 = 0;
	var uLocal_3108 = 0;
	var uLocal_3109 = 0;
	var uLocal_3110 = 0;
	var uLocal_3111 = 0;
	var uLocal_3112 = 0;
	var uLocal_3113 = 0;
	var uLocal_3114 = 0;
	var uLocal_3115 = 0;
	var uLocal_3116 = 0;
	var uLocal_3117 = 0;
	var uLocal_3118 = 0;
	var uLocal_3119 = 0;
	var uLocal_3120 = 0;
	var uLocal_3121 = 0;
	var uLocal_3122 = 0;
	var uLocal_3123 = 0;
	var uLocal_3124 = 0;
	var uLocal_3125 = 0;
	var uLocal_3126 = 1065353216;
	var uLocal_3127 = 0;
	var uLocal_3128 = 0;
	var uLocal_3129 = 0;
	var uLocal_3130 = 0;
	var uLocal_3131 = 0;
	var uLocal_3132 = 0;
	var uLocal_3133 = 0;
	var uLocal_3134 = 0;
	var uLocal_3135 = 0;
	var uLocal_3136 = 0;
	var uLocal_3137 = 0;
	var uLocal_3138 = 0;
	var uLocal_3139 = 0;
	var uLocal_3140 = 0;
	var uLocal_3141 = 0;
	var uLocal_3142 = 0;
	var uLocal_3143 = 0;
	var uLocal_3144 = 0;
	var uLocal_3145 = 0;
	var uLocal_3146 = 0;
	var uLocal_3147 = 0;
	var uLocal_3148 = 0;
	var uLocal_3149 = 0;
	var uLocal_3150 = 0;
	var uLocal_3151 = 0;
	var uLocal_3152 = 0;
	var uLocal_3153 = -1;
	var uLocal_3154 = 0;
	var uLocal_3155 = 0;
	var uLocal_3156 = 0;
	var uLocal_3157 = 0;
	var uLocal_3158 = 0;
	var uLocal_3159 = 0;
	var uLocal_3160 = 0;
	var uLocal_3161 = 0;
	var uLocal_3162 = 0;
	var uLocal_3163 = 0;
	var uLocal_3164 = 0;
	var uLocal_3165 = 0;
	var uLocal_3166 = 0;
	var uLocal_3167 = 0;
	var uLocal_3168 = 0;
	var uLocal_3169 = 0;
	var uLocal_3170 = 0;
	var uLocal_3171 = 0;
	var uLocal_3172 = 0;
	var uLocal_3173 = 0;
	var uLocal_3174 = 0;
	var uLocal_3175 = 0;
	var uLocal_3176 = 0;
	var uLocal_3177 = 0;
	var uLocal_3178 = 0;
	var uLocal_3179 = 0;
	var uLocal_3180 = 0;
	var uLocal_3181 = 0;
	var uLocal_3182 = 0;
	var uLocal_3183 = 1065353216;
	var uLocal_3184 = 0;
	var uLocal_3185 = 0;
	var uLocal_3186 = 0;
	var uLocal_3187 = 0;
	var uLocal_3188 = 0;
	var uLocal_3189 = 0;
	var uLocal_3190 = 0;
	var uLocal_3191 = 0;
	var uLocal_3192 = 0;
	var uLocal_3193 = 0;
	var uLocal_3194 = 0;
	var uLocal_3195 = 0;
	var uLocal_3196 = 0;
	var uLocal_3197 = 0;
	var uLocal_3198 = 0;
	var uLocal_3199 = 0;
	var uLocal_3200 = 0;
	var uLocal_3201 = 0;
	var uLocal_3202 = 0;
	var uLocal_3203 = 0;
	var uLocal_3204 = 0;
	var uLocal_3205 = 0;
	var uLocal_3206 = 0;
	var uLocal_3207 = 0;
	var uLocal_3208 = 0;
	var uLocal_3209 = 0;
	var uLocal_3210 = -1;
	var uLocal_3211 = 0;
	var uLocal_3212 = 0;
	var uLocal_3213 = 0;
	var uLocal_3214 = 0;
	var uLocal_3215 = 0;
	var uLocal_3216 = 0;
	var uLocal_3217 = 0;
	var uLocal_3218 = 0;
	var uLocal_3219 = 0;
	var uLocal_3220 = 0;
	var uLocal_3221 = 0;
	var uLocal_3222 = 0;
	var uLocal_3223 = 0;
	var uLocal_3224 = 0;
	var uLocal_3225 = 0;
	var uLocal_3226 = 0;
	var uLocal_3227 = 0;
	var uLocal_3228 = 0;
	var uLocal_3229 = 0;
	var uLocal_3230 = 0;
	var uLocal_3231 = 0;
	var uLocal_3232 = 0;
	var uLocal_3233 = 0;
	var uLocal_3234 = 0;
	var uLocal_3235 = 0;
	var uLocal_3236 = 0;
	var uLocal_3237 = 0;
	var uLocal_3238 = 0;
	var uLocal_3239 = 0;
	var uLocal_3240 = 1065353216;
	var uLocal_3241 = 0;
	var uLocal_3242 = 0;
	var uLocal_3243 = 0;
	var uLocal_3244 = 0;
	var uLocal_3245 = 0;
	var uLocal_3246 = 0;
	var uLocal_3247 = 0;
	var uLocal_3248 = 0;
	var uLocal_3249 = 0;
	var uLocal_3250 = 0;
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	var uLocal_3254 = 0;
	var uLocal_3255 = 0;
	var uLocal_3256 = 0;
	var uLocal_3257 = 0;
	var uLocal_3258 = 0;
	var uLocal_3259 = 0;
	var uLocal_3260 = 0;
	var uLocal_3261 = 0;
	var uLocal_3262 = 0;
	var uLocal_3263 = 0;
	var uLocal_3264 = 0;
	var uLocal_3265 = 0;
	var uLocal_3266 = 0;
	var uLocal_3267 = -1;
	var uLocal_3268 = 0;
	var uLocal_3269 = 0;
	var uLocal_3270 = 0;
	var uLocal_3271 = 0;
	var uLocal_3272 = 0;
	var uLocal_3273 = 0;
	var uLocal_3274 = 0;
	var uLocal_3275 = 0;
	var uLocal_3276 = 0;
	var uLocal_3277 = 0;
	var uLocal_3278 = 0;
	var uLocal_3279 = 0;
	var uLocal_3280 = 0;
	var uLocal_3281 = 0;
	var uLocal_3282 = 0;
	var uLocal_3283 = 0;
	var uLocal_3284 = 0;
	var uLocal_3285 = 0;
	var uLocal_3286 = 0;
	var uLocal_3287 = 0;
	var uLocal_3288 = 0;
	var uLocal_3289 = 0;
	var uLocal_3290 = 0;
	var uLocal_3291 = 0;
	var uLocal_3292 = 0;
	var uLocal_3293 = 0;
	var uLocal_3294 = 0;
	var uLocal_3295 = 0;
	var uLocal_3296 = 0;
	var uLocal_3297 = 1065353216;
	var uLocal_3298 = 0;
	var uLocal_3299 = 0;
	var uLocal_3300 = 0;
	var uLocal_3301 = 0;
	var uLocal_3302 = 0;
	var uLocal_3303 = 0;
	var uLocal_3304 = 0;
	var uLocal_3305 = 0;
	var uLocal_3306 = 0;
	var uLocal_3307 = 0;
	var uLocal_3308 = 0;
	var uLocal_3309 = 0;
	var uLocal_3310 = 0;
	var uLocal_3311 = 0;
	var uLocal_3312 = 0;
	var uLocal_3313 = 0;
	var uLocal_3314 = 0;
	var uLocal_3315 = 0;
	var uLocal_3316 = 0;
	var uLocal_3317 = 0;
	var uLocal_3318 = 0;
	var uLocal_3319 = 0;
	var uLocal_3320 = 0;
	var uLocal_3321 = 0;
	var uLocal_3322 = 0;
	var uLocal_3323 = 0;
	var uLocal_3324 = -1;
	var uLocal_3325 = 0;
	var uLocal_3326 = 0;
	var uLocal_3327 = 0;
	var uLocal_3328 = 0;
	var uLocal_3329 = 0;
	var uLocal_3330 = 0;
	var uLocal_3331 = 0;
	var uLocal_3332 = 0;
	var uLocal_3333 = 0;
	var uLocal_3334 = 0;
	var uLocal_3335 = 0;
	var uLocal_3336 = 0;
	var uLocal_3337 = 0;
	var uLocal_3338 = 0;
	var uLocal_3339 = 0;
	var uLocal_3340 = 0;
	var uLocal_3341 = 0;
	var uLocal_3342 = 0;
	var uLocal_3343 = 0;
	var uLocal_3344 = 0;
	var uLocal_3345 = 0;
	var uLocal_3346 = 0;
	var uLocal_3347 = 0;
	var uLocal_3348 = 0;
	var uLocal_3349 = 0;
	var uLocal_3350 = 0;
	var uLocal_3351 = 0;
	var uLocal_3352 = 0;
	var uLocal_3353 = 0;
	var uLocal_3354 = 1065353216;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	var uLocal_3360 = 0;
	var uLocal_3361 = 0;
	var uLocal_3362 = 0;
	var uLocal_3363 = 0;
	var uLocal_3364 = 0;
	var uLocal_3365 = 0;
	var uLocal_3366 = 0;
	var uLocal_3367 = 0;
	var uLocal_3368 = 0;
	var uLocal_3369 = 0;
	var uLocal_3370 = 0;
	var uLocal_3371 = 0;
	var uLocal_3372 = 0;
	var uLocal_3373 = 0;
	var uLocal_3374 = 0;
	var uLocal_3375 = 0;
	var uLocal_3376 = 0;
	var uLocal_3377 = 0;
	var uLocal_3378 = 0;
	var uLocal_3379 = 0;
	var uLocal_3380 = 0;
	var uLocal_3381 = -1;
	var uLocal_3382 = 0;
	var uLocal_3383 = 0;
	var uLocal_3384 = 0;
	var uLocal_3385 = 0;
	var uLocal_3386 = 0;
	var uLocal_3387 = 0;
	var uLocal_3388 = 0;
	var uLocal_3389 = 0;
	var uLocal_3390 = 0;
	var uLocal_3391 = 0;
	var uLocal_3392 = 0;
	var uLocal_3393 = 0;
	var uLocal_3394 = 0;
	var uLocal_3395 = 0;
	var uLocal_3396 = 0;
	var uLocal_3397 = 0;
	var uLocal_3398 = 0;
	var uLocal_3399 = 0;
	var uLocal_3400 = 0;
	var uLocal_3401 = 0;
	var uLocal_3402 = 0;
	var uLocal_3403 = 0;
	var uLocal_3404 = 0;
	var uLocal_3405 = 0;
	var uLocal_3406 = 0;
	var uLocal_3407 = 0;
	var uLocal_3408 = 0;
	var uLocal_3409 = 0;
	var uLocal_3410 = 0;
	var uLocal_3411 = 1065353216;
	var uLocal_3412 = 0;
	var uLocal_3413 = 0;
	var uLocal_3414 = 0;
	var uLocal_3415 = 0;
	var uLocal_3416 = 0;
	var uLocal_3417 = 0;
	var uLocal_3418 = 0;
	var uLocal_3419 = 0;
	var uLocal_3420 = 0;
	var uLocal_3421 = 0;
	var uLocal_3422 = 0;
	var uLocal_3423 = 0;
	var uLocal_3424 = 0;
	var uLocal_3425 = 0;
	var uLocal_3426 = 0;
	var uLocal_3427 = 0;
	var uLocal_3428 = 0;
	var uLocal_3429 = 0;
	var uLocal_3430 = 0;
	var uLocal_3431 = 0;
	var uLocal_3432 = 0;
	var uLocal_3433 = 0;
	var uLocal_3434 = 0;
	var uLocal_3435 = 0;
	var uLocal_3436 = 0;
	var uLocal_3437 = 0;
	var uLocal_3438 = -1;
	var uLocal_3439 = 0;
	var uLocal_3440 = 0;
	var uLocal_3441 = 0;
	var uLocal_3442 = 0;
	var uLocal_3443 = 0;
	var uLocal_3444 = 0;
	var uLocal_3445 = 0;
	var uLocal_3446 = 0;
	var uLocal_3447 = 0;
	var uLocal_3448 = 0;
	var uLocal_3449 = 0;
	var uLocal_3450 = 0;
	var uLocal_3451 = 0;
	var uLocal_3452 = 0;
	var uLocal_3453 = 0;
	var uLocal_3454 = 0;
	var uLocal_3455 = 0;
	var uLocal_3456 = 0;
	var uLocal_3457 = 0;
	var uLocal_3458 = 0;
	var uLocal_3459 = 0;
	var uLocal_3460 = 0;
	var uLocal_3461 = 0;
	var uLocal_3462 = 0;
	var uLocal_3463 = 0;
	var uLocal_3464 = 0;
	var uLocal_3465 = 0;
	var uLocal_3466 = 0;
	var uLocal_3467 = 0;
	var uLocal_3468 = 1065353216;
	var uLocal_3469 = 0;
	var uLocal_3470 = 0;
	var uLocal_3471 = 0;
	var uLocal_3472 = 0;
	var uLocal_3473 = 0;
	var uLocal_3474 = 0;
	var uLocal_3475 = 0;
	var uLocal_3476 = 0;
	var uLocal_3477 = 0;
	var uLocal_3478 = 0;
	var uLocal_3479 = 0;
	var uLocal_3480 = 0;
	var uLocal_3481 = 0;
	var uLocal_3482 = 0;
	var uLocal_3483 = 0;
	var uLocal_3484 = 0;
	var uLocal_3485 = 0;
	var uLocal_3486 = 0;
	var uLocal_3487 = 0;
	var uLocal_3488 = 0;
	var uLocal_3489 = 0;
	var uLocal_3490 = 0;
	var uLocal_3491 = 0;
	var uLocal_3492 = 0;
	var uLocal_3493 = 0;
	var uLocal_3494 = 0;
	var uLocal_3495 = -1;
	var uLocal_3496 = 0;
	var uLocal_3497 = 0;
	var uLocal_3498 = 0;
	var uLocal_3499 = 0;
	var uLocal_3500 = 0;
	var uLocal_3501 = 0;
	var uLocal_3502 = 0;
	var uLocal_3503 = 0;
	var uLocal_3504 = 0;
	var uLocal_3505 = 0;
	var uLocal_3506 = 0;
	var uLocal_3507 = 0;
	var uLocal_3508 = 0;
	var uLocal_3509 = 0;
	var uLocal_3510 = 0;
	var uLocal_3511 = 0;
	var uLocal_3512 = 0;
	var uLocal_3513 = 0;
	var uLocal_3514 = 0;
	var uLocal_3515 = 0;
	var uLocal_3516 = 0;
	var uLocal_3517 = 0;
	var uLocal_3518 = 0;
	var uLocal_3519 = 0;
	var uLocal_3520 = 0;
	var uLocal_3521 = 0;
	var uLocal_3522 = 0;
	var uLocal_3523 = 0;
	var uLocal_3524 = 0;
	var uLocal_3525 = 1065353216;
	var uLocal_3526 = 0;
	var uLocal_3527 = 0;
	var uLocal_3528 = 0;
	var uLocal_3529 = 0;
	var uLocal_3530 = 0;
	var uLocal_3531 = 0;
	var uLocal_3532 = 0;
	var uLocal_3533 = 0;
	var uLocal_3534 = 0;
	var uLocal_3535 = 0;
	var uLocal_3536 = 0;
	var uLocal_3537 = 0;
	var uLocal_3538 = 0;
	var uLocal_3539 = 0;
	var uLocal_3540 = 0;
	var uLocal_3541 = 0;
	var uLocal_3542 = 0;
	var uLocal_3543 = 0;
	var uLocal_3544 = 0;
	var uLocal_3545 = 0;
	var uLocal_3546 = 0;
	var uLocal_3547 = 0;
	var uLocal_3548 = 0;
	var uLocal_3549 = 16;
	var uLocal_3550 = 0;
	var uLocal_3551 = -1082130432;
	var uLocal_3552 = 0;
	var uLocal_3553 = -1082130432;
	var uLocal_3554 = 0;
	var uLocal_3555 = -1082130432;
	var uLocal_3556 = 0;
	var uLocal_3557 = -1082130432;
	var uLocal_3558 = 0;
	var uLocal_3559 = -1082130432;
	var uLocal_3560 = 0;
	var uLocal_3561 = -1082130432;
	var uLocal_3562 = 0;
	var uLocal_3563 = -1082130432;
	var uLocal_3564 = 0;
	var uLocal_3565 = -1082130432;
	var uLocal_3566 = 0;
	var uLocal_3567 = -1082130432;
	var uLocal_3568 = 0;
	var uLocal_3569 = -1082130432;
	var uLocal_3570 = 0;
	var uLocal_3571 = -1082130432;
	var uLocal_3572 = 0;
	var uLocal_3573 = -1082130432;
	var uLocal_3574 = 0;
	var uLocal_3575 = -1082130432;
	var uLocal_3576 = 0;
	var uLocal_3577 = -1082130432;
	var uLocal_3578 = 0;
	var uLocal_3579 = -1082130432;
	var uLocal_3580 = 0;
	var uLocal_3581 = -1082130432;
	var uLocal_3582 = 16;
	var uLocal_3583 = 0;
	var uLocal_3584 = -1082130432;
	var uLocal_3585 = 0;
	var uLocal_3586 = -1082130432;
	var uLocal_3587 = 0;
	var uLocal_3588 = -1082130432;
	var uLocal_3589 = 0;
	var uLocal_3590 = -1082130432;
	var uLocal_3591 = 0;
	var uLocal_3592 = -1082130432;
	var uLocal_3593 = 0;
	var uLocal_3594 = -1082130432;
	var uLocal_3595 = 0;
	var uLocal_3596 = -1082130432;
	var uLocal_3597 = 0;
	var uLocal_3598 = -1082130432;
	var uLocal_3599 = 0;
	var uLocal_3600 = -1082130432;
	var uLocal_3601 = 0;
	var uLocal_3602 = -1082130432;
	var uLocal_3603 = 0;
	var uLocal_3604 = -1082130432;
	var uLocal_3605 = 0;
	var uLocal_3606 = -1082130432;
	var uLocal_3607 = 0;
	var uLocal_3608 = -1082130432;
	var uLocal_3609 = 0;
	var uLocal_3610 = -1082130432;
	var uLocal_3611 = 0;
	var uLocal_3612 = -1082130432;
	var uLocal_3613 = 0;
	var uLocal_3614 = -1082130432;
	var uLocal_3615 = 0;
	var uLocal_3616 = 0;
	var uLocal_3617 = 0;
	var uLocal_3618 = 0;
	var uLocal_3619 = 0;
	var uLocal_3620 = 0;
	var uLocal_3621 = 0;
	var uLocal_3622 = 0;
	var uLocal_3623 = 0;
	var uLocal_3624 = 0;
	var uLocal_3625 = 0;
	var uLocal_3626 = 0;
	var uLocal_3627 = 0;
	var uLocal_3628 = 0;
	var uLocal_3629 = 0;
	var uLocal_3630 = 0;
	var uLocal_3631 = -1082130432;
	var uLocal_3632 = -1082130432;
	var uLocal_3633 = 1;
	var uLocal_3634 = 1;
	var uLocal_3635 = 1;
	var uLocal_3636 = -1;
	var uLocal_3637 = -1;
	var uLocal_3638 = -1;
	var uLocal_3639 = 0;
	var uLocal_3640 = 0;
	var uLocal_3641 = 0;
	var uLocal_3642 = 0;
	var uLocal_3643 = 2;
	var uLocal_3644 = 0;
	var uLocal_3645 = 0;
	var uLocal_3646 = 2;
	var uLocal_3647 = 0;
	var uLocal_3648 = 0;
	var uLocal_3649 = 20;
	var uLocal_3650 = 0;
	var uLocal_3651 = 0;
	var uLocal_3652 = 0;
	var uLocal_3653 = -1;
	var uLocal_3654 = 0;
	var uLocal_3655 = 0;
	var uLocal_3656 = 0;
	var uLocal_3657 = 0;
	var uLocal_3658 = 0;
	var uLocal_3659 = 0;
	var uLocal_3660 = 0;
	var uLocal_3661 = 0;
	var uLocal_3662 = 0;
	var uLocal_3663 = 0;
	var uLocal_3664 = 0;
	var uLocal_3665 = 0;
	var uLocal_3666 = 0;
	var uLocal_3667 = 0;
	var uLocal_3668 = 0;
	var uLocal_3669 = 0;
	var uLocal_3670 = 0;
	var uLocal_3671 = 0;
	var uLocal_3672 = 0;
	var uLocal_3673 = 0;
	var uLocal_3674 = 0;
	var uLocal_3675 = 0;
	var uLocal_3676 = 0;
	var uLocal_3677 = 0;
	var uLocal_3678 = 0;
	var uLocal_3679 = 0;
	var uLocal_3680 = 0;
	var uLocal_3681 = 0;
	var uLocal_3682 = 0;
	var uLocal_3683 = 1065353216;
	var uLocal_3684 = 0;
	var uLocal_3685 = 0;
	var uLocal_3686 = 0;
	var uLocal_3687 = 0;
	var uLocal_3688 = 0;
	var uLocal_3689 = 0;
	var uLocal_3690 = 0;
	var uLocal_3691 = 0;
	var uLocal_3692 = 0;
	var uLocal_3693 = 0;
	var uLocal_3694 = 0;
	var uLocal_3695 = 0;
	var uLocal_3696 = 0;
	var uLocal_3697 = 0;
	var uLocal_3698 = 0;
	var uLocal_3699 = 0;
	var uLocal_3700 = 0;
	var uLocal_3701 = 0;
	var uLocal_3702 = 0;
	var uLocal_3703 = 0;
	var uLocal_3704 = 0;
	var uLocal_3705 = 0;
	var uLocal_3706 = 0;
	var uLocal_3707 = 0;
	var uLocal_3708 = 0;
	var uLocal_3709 = 0;
	var uLocal_3710 = -1;
	var uLocal_3711 = 0;
	var uLocal_3712 = 0;
	var uLocal_3713 = 0;
	var uLocal_3714 = 0;
	var uLocal_3715 = 0;
	var uLocal_3716 = 0;
	var uLocal_3717 = 0;
	var uLocal_3718 = 0;
	var uLocal_3719 = 0;
	var uLocal_3720 = 0;
	var uLocal_3721 = 0;
	var uLocal_3722 = 0;
	var uLocal_3723 = 0;
	var uLocal_3724 = 0;
	var uLocal_3725 = 0;
	var uLocal_3726 = 0;
	var uLocal_3727 = 0;
	var uLocal_3728 = 0;
	var uLocal_3729 = 0;
	var uLocal_3730 = 0;
	var uLocal_3731 = 0;
	var uLocal_3732 = 0;
	var uLocal_3733 = 0;
	var uLocal_3734 = 0;
	var uLocal_3735 = 0;
	var uLocal_3736 = 0;
	var uLocal_3737 = 0;
	var uLocal_3738 = 0;
	var uLocal_3739 = 0;
	var uLocal_3740 = 1065353216;
	var uLocal_3741 = 0;
	var uLocal_3742 = 0;
	var uLocal_3743 = 0;
	var uLocal_3744 = 0;
	var uLocal_3745 = 0;
	var uLocal_3746 = 0;
	var uLocal_3747 = 0;
	var uLocal_3748 = 0;
	var uLocal_3749 = 0;
	var uLocal_3750 = 0;
	var uLocal_3751 = 0;
	var uLocal_3752 = 0;
	var uLocal_3753 = 0;
	var uLocal_3754 = 0;
	var uLocal_3755 = 0;
	var uLocal_3756 = 0;
	var uLocal_3757 = 0;
	var uLocal_3758 = 0;
	var uLocal_3759 = 0;
	var uLocal_3760 = 0;
	var uLocal_3761 = 0;
	var uLocal_3762 = 0;
	var uLocal_3763 = 0;
	var uLocal_3764 = 0;
	var uLocal_3765 = 0;
	var uLocal_3766 = 0;
	var uLocal_3767 = -1;
	var uLocal_3768 = 0;
	var uLocal_3769 = 0;
	var uLocal_3770 = 0;
	var uLocal_3771 = 0;
	var uLocal_3772 = 0;
	var uLocal_3773 = 0;
	var uLocal_3774 = 0;
	var uLocal_3775 = 0;
	var uLocal_3776 = 0;
	var uLocal_3777 = 0;
	var uLocal_3778 = 0;
	var uLocal_3779 = 0;
	var uLocal_3780 = 0;
	var uLocal_3781 = 0;
	var uLocal_3782 = 0;
	var uLocal_3783 = 0;
	var uLocal_3784 = 0;
	var uLocal_3785 = 0;
	var uLocal_3786 = 0;
	var uLocal_3787 = 0;
	var uLocal_3788 = 0;
	var uLocal_3789 = 0;
	var uLocal_3790 = 0;
	var uLocal_3791 = 0;
	var uLocal_3792 = 0;
	var uLocal_3793 = 0;
	var uLocal_3794 = 0;
	var uLocal_3795 = 0;
	var uLocal_3796 = 0;
	var uLocal_3797 = 1065353216;
	var uLocal_3798 = 0;
	var uLocal_3799 = 0;
	var uLocal_3800 = 0;
	var uLocal_3801 = 0;
	var uLocal_3802 = 0;
	var uLocal_3803 = 0;
	var uLocal_3804 = 0;
	var uLocal_3805 = 0;
	var uLocal_3806 = 0;
	var uLocal_3807 = 0;
	var uLocal_3808 = 0;
	var uLocal_3809 = 0;
	var uLocal_3810 = 0;
	var uLocal_3811 = 0;
	var uLocal_3812 = 0;
	var uLocal_3813 = 0;
	var uLocal_3814 = 0;
	var uLocal_3815 = 0;
	var uLocal_3816 = 0;
	var uLocal_3817 = 0;
	var uLocal_3818 = 0;
	var uLocal_3819 = 0;
	var uLocal_3820 = 0;
	var uLocal_3821 = 0;
	var uLocal_3822 = 0;
	var uLocal_3823 = 0;
	var uLocal_3824 = -1;
	var uLocal_3825 = 0;
	var uLocal_3826 = 0;
	var uLocal_3827 = 0;
	var uLocal_3828 = 0;
	var uLocal_3829 = 0;
	var uLocal_3830 = 0;
	var uLocal_3831 = 0;
	var uLocal_3832 = 0;
	var uLocal_3833 = 0;
	var uLocal_3834 = 0;
	var uLocal_3835 = 0;
	var uLocal_3836 = 0;
	var uLocal_3837 = 0;
	var uLocal_3838 = 0;
	var uLocal_3839 = 0;
	var uLocal_3840 = 0;
	var uLocal_3841 = 0;
	var uLocal_3842 = 0;
	var uLocal_3843 = 0;
	var uLocal_3844 = 0;
	var uLocal_3845 = 0;
	var uLocal_3846 = 0;
	var uLocal_3847 = 0;
	var uLocal_3848 = 0;
	var uLocal_3849 = 0;
	var uLocal_3850 = 0;
	var uLocal_3851 = 0;
	var uLocal_3852 = 0;
	var uLocal_3853 = 0;
	var uLocal_3854 = 1065353216;
	var uLocal_3855 = 0;
	var uLocal_3856 = 0;
	var uLocal_3857 = 0;
	var uLocal_3858 = 0;
	var uLocal_3859 = 0;
	var uLocal_3860 = 0;
	var uLocal_3861 = 0;
	var uLocal_3862 = 0;
	var uLocal_3863 = 0;
	var uLocal_3864 = 0;
	var uLocal_3865 = 0;
	var uLocal_3866 = 0;
	var uLocal_3867 = 0;
	var uLocal_3868 = 0;
	var uLocal_3869 = 0;
	var uLocal_3870 = 0;
	var uLocal_3871 = 0;
	var uLocal_3872 = 0;
	var uLocal_3873 = 0;
	var uLocal_3874 = 0;
	var uLocal_3875 = 0;
	var uLocal_3876 = 0;
	var uLocal_3877 = 0;
	var uLocal_3878 = 0;
	var uLocal_3879 = 0;
	var uLocal_3880 = 0;
	var uLocal_3881 = -1;
	var uLocal_3882 = 0;
	var uLocal_3883 = 0;
	var uLocal_3884 = 0;
	var uLocal_3885 = 0;
	var uLocal_3886 = 0;
	var uLocal_3887 = 0;
	var uLocal_3888 = 0;
	var uLocal_3889 = 0;
	var uLocal_3890 = 0;
	var uLocal_3891 = 0;
	var uLocal_3892 = 0;
	var uLocal_3893 = 0;
	var uLocal_3894 = 0;
	var uLocal_3895 = 0;
	var uLocal_3896 = 0;
	var uLocal_3897 = 0;
	var uLocal_3898 = 0;
	var uLocal_3899 = 0;
	var uLocal_3900 = 0;
	var uLocal_3901 = 0;
	var uLocal_3902 = 0;
	var uLocal_3903 = 0;
	var uLocal_3904 = 0;
	var uLocal_3905 = 0;
	var uLocal_3906 = 0;
	var uLocal_3907 = 0;
	var uLocal_3908 = 0;
	var uLocal_3909 = 0;
	var uLocal_3910 = 0;
	var uLocal_3911 = 1065353216;
	var uLocal_3912 = 0;
	var uLocal_3913 = 0;
	var uLocal_3914 = 0;
	var uLocal_3915 = 0;
	var uLocal_3916 = 0;
	var uLocal_3917 = 0;
	var uLocal_3918 = 0;
	var uLocal_3919 = 0;
	var uLocal_3920 = 0;
	var uLocal_3921 = 0;
	var uLocal_3922 = 0;
	var uLocal_3923 = 0;
	var uLocal_3924 = 0;
	var uLocal_3925 = 0;
	var uLocal_3926 = 0;
	var uLocal_3927 = 0;
	var uLocal_3928 = 0;
	var uLocal_3929 = 0;
	var uLocal_3930 = 0;
	var uLocal_3931 = 0;
	var uLocal_3932 = 0;
	var uLocal_3933 = 0;
	var uLocal_3934 = 0;
	var uLocal_3935 = 0;
	var uLocal_3936 = 0;
	var uLocal_3937 = 0;
	var uLocal_3938 = -1;
	var uLocal_3939 = 0;
	var uLocal_3940 = 0;
	var uLocal_3941 = 0;
	var uLocal_3942 = 0;
	var uLocal_3943 = 0;
	var uLocal_3944 = 0;
	var uLocal_3945 = 0;
	var uLocal_3946 = 0;
	var uLocal_3947 = 0;
	var uLocal_3948 = 0;
	var uLocal_3949 = 0;
	var uLocal_3950 = 0;
	var uLocal_3951 = 0;
	var uLocal_3952 = 0;
	var uLocal_3953 = 0;
	var uLocal_3954 = 0;
	var uLocal_3955 = 0;
	var uLocal_3956 = 0;
	var uLocal_3957 = 0;
	var uLocal_3958 = 0;
	var uLocal_3959 = 0;
	var uLocal_3960 = 0;
	var uLocal_3961 = 0;
	var uLocal_3962 = 0;
	var uLocal_3963 = 0;
	var uLocal_3964 = 0;
	var uLocal_3965 = 0;
	var uLocal_3966 = 0;
	var uLocal_3967 = 0;
	var uLocal_3968 = 1065353216;
	var uLocal_3969 = 0;
	var uLocal_3970 = 0;
	var uLocal_3971 = 0;
	var uLocal_3972 = 0;
	var uLocal_3973 = 0;
	var uLocal_3974 = 0;
	var uLocal_3975 = 0;
	var uLocal_3976 = 0;
	var uLocal_3977 = 0;
	var uLocal_3978 = 0;
	var uLocal_3979 = 0;
	var uLocal_3980 = 0;
	var uLocal_3981 = 0;
	var uLocal_3982 = 0;
	var uLocal_3983 = 0;
	var uLocal_3984 = 0;
	var uLocal_3985 = 0;
	var uLocal_3986 = 0;
	var uLocal_3987 = 0;
	var uLocal_3988 = 0;
	var uLocal_3989 = 0;
	var uLocal_3990 = 0;
	var uLocal_3991 = 0;
	var uLocal_3992 = 0;
	var uLocal_3993 = 0;
	var uLocal_3994 = 0;
	var uLocal_3995 = -1;
	var uLocal_3996 = 0;
	var uLocal_3997 = 0;
	var uLocal_3998 = 0;
	var uLocal_3999 = 0;
	var uLocal_4000 = 0;
	var uLocal_4001 = 0;
	var uLocal_4002 = 0;
	var uLocal_4003 = 0;
	var uLocal_4004 = 0;
	var uLocal_4005 = 0;
	var uLocal_4006 = 0;
	var uLocal_4007 = 0;
	var uLocal_4008 = 0;
	var uLocal_4009 = 0;
	var uLocal_4010 = 0;
	var uLocal_4011 = 0;
	var uLocal_4012 = 0;
	var uLocal_4013 = 0;
	var uLocal_4014 = 0;
	var uLocal_4015 = 0;
	var uLocal_4016 = 0;
	var uLocal_4017 = 0;
	var uLocal_4018 = 0;
	var uLocal_4019 = 0;
	var uLocal_4020 = 0;
	var uLocal_4021 = 0;
	var uLocal_4022 = 0;
	var uLocal_4023 = 0;
	var uLocal_4024 = 0;
	var uLocal_4025 = 1065353216;
	var uLocal_4026 = 0;
	var uLocal_4027 = 0;
	var uLocal_4028 = 0;
	var uLocal_4029 = 0;
	var uLocal_4030 = 0;
	var uLocal_4031 = 0;
	var uLocal_4032 = 0;
	var uLocal_4033 = 0;
	var uLocal_4034 = 0;
	var uLocal_4035 = 0;
	var uLocal_4036 = 0;
	var uLocal_4037 = 0;
	var uLocal_4038 = 0;
	var uLocal_4039 = 0;
	var uLocal_4040 = 0;
	var uLocal_4041 = 0;
	var uLocal_4042 = 0;
	var uLocal_4043 = 0;
	var uLocal_4044 = 0;
	var uLocal_4045 = 0;
	var uLocal_4046 = 0;
	var uLocal_4047 = 0;
	var uLocal_4048 = 0;
	var uLocal_4049 = 0;
	var uLocal_4050 = 0;
	var uLocal_4051 = 0;
	var uLocal_4052 = -1;
	var uLocal_4053 = 0;
	var uLocal_4054 = 0;
	var uLocal_4055 = 0;
	var uLocal_4056 = 0;
	var uLocal_4057 = 0;
	var uLocal_4058 = 0;
	var uLocal_4059 = 0;
	var uLocal_4060 = 0;
	var uLocal_4061 = 0;
	var uLocal_4062 = 0;
	var uLocal_4063 = 0;
	var uLocal_4064 = 0;
	var uLocal_4065 = 0;
	var uLocal_4066 = 0;
	var uLocal_4067 = 0;
	var uLocal_4068 = 0;
	var uLocal_4069 = 0;
	var uLocal_4070 = 0;
	var uLocal_4071 = 0;
	var uLocal_4072 = 0;
	var uLocal_4073 = 0;
	var uLocal_4074 = 0;
	var uLocal_4075 = 0;
	var uLocal_4076 = 0;
	var uLocal_4077 = 0;
	var uLocal_4078 = 0;
	var uLocal_4079 = 0;
	var uLocal_4080 = 0;
	var uLocal_4081 = 0;
	var uLocal_4082 = 1065353216;
	var uLocal_4083 = 0;
	var uLocal_4084 = 0;
	var uLocal_4085 = 0;
	var uLocal_4086 = 0;
	var uLocal_4087 = 0;
	var uLocal_4088 = 0;
	var uLocal_4089 = 0;
	var uLocal_4090 = 0;
	var uLocal_4091 = 0;
	var uLocal_4092 = 0;
	var uLocal_4093 = 0;
	var uLocal_4094 = 0;
	var uLocal_4095 = 0;
	var uLocal_4096 = 0;
	var uLocal_4097 = 0;
	var uLocal_4098 = 0;
	var uLocal_4099 = 0;
	var uLocal_4100 = 0;
	var uLocal_4101 = 0;
	var uLocal_4102 = 0;
	var uLocal_4103 = 0;
	var uLocal_4104 = 0;
	var uLocal_4105 = 0;
	var uLocal_4106 = 0;
	var uLocal_4107 = 0;
	var uLocal_4108 = 0;
	var uLocal_4109 = -1;
	var uLocal_4110 = 0;
	var uLocal_4111 = 0;
	var uLocal_4112 = 0;
	var uLocal_4113 = 0;
	var uLocal_4114 = 0;
	var uLocal_4115 = 0;
	var uLocal_4116 = 0;
	var uLocal_4117 = 0;
	var uLocal_4118 = 0;
	var uLocal_4119 = 0;
	var uLocal_4120 = 0;
	var uLocal_4121 = 0;
	var uLocal_4122 = 0;
	var uLocal_4123 = 0;
	var uLocal_4124 = 0;
	var uLocal_4125 = 0;
	var uLocal_4126 = 0;
	var uLocal_4127 = 0;
	var uLocal_4128 = 0;
	var uLocal_4129 = 0;
	var uLocal_4130 = 0;
	var uLocal_4131 = 0;
	var uLocal_4132 = 0;
	var uLocal_4133 = 0;
	var uLocal_4134 = 0;
	var uLocal_4135 = 0;
	var uLocal_4136 = 0;
	var uLocal_4137 = 0;
	var uLocal_4138 = 0;
	var uLocal_4139 = 1065353216;
	var uLocal_4140 = 0;
	var uLocal_4141 = 0;
	var uLocal_4142 = 0;
	var uLocal_4143 = 0;
	var uLocal_4144 = 0;
	var uLocal_4145 = 0;
	var uLocal_4146 = 0;
	var uLocal_4147 = 0;
	var uLocal_4148 = 0;
	var uLocal_4149 = 0;
	var uLocal_4150 = 0;
	var uLocal_4151 = 0;
	var uLocal_4152 = 0;
	var uLocal_4153 = 0;
	var uLocal_4154 = 0;
	var uLocal_4155 = 0;
	var uLocal_4156 = 0;
	var uLocal_4157 = 0;
	var uLocal_4158 = 0;
	var uLocal_4159 = 0;
	var uLocal_4160 = 0;
	var uLocal_4161 = 0;
	var uLocal_4162 = 0;
	var uLocal_4163 = 0;
	var uLocal_4164 = 0;
	var uLocal_4165 = 0;
	var uLocal_4166 = -1;
	var uLocal_4167 = 0;
	var uLocal_4168 = 0;
	var uLocal_4169 = 0;
	var uLocal_4170 = 0;
	var uLocal_4171 = 0;
	var uLocal_4172 = 0;
	var uLocal_4173 = 0;
	var uLocal_4174 = 0;
	var uLocal_4175 = 0;
	var uLocal_4176 = 0;
	var uLocal_4177 = 0;
	var uLocal_4178 = 0;
	var uLocal_4179 = 0;
	var uLocal_4180 = 0;
	var uLocal_4181 = 0;
	var uLocal_4182 = 0;
	var uLocal_4183 = 0;
	var uLocal_4184 = 0;
	var uLocal_4185 = 0;
	var uLocal_4186 = 0;
	var uLocal_4187 = 0;
	var uLocal_4188 = 0;
	var uLocal_4189 = 0;
	var uLocal_4190 = 0;
	var uLocal_4191 = 0;
	var uLocal_4192 = 0;
	var uLocal_4193 = 0;
	var uLocal_4194 = 0;
	var uLocal_4195 = 0;
	var uLocal_4196 = 1065353216;
	var uLocal_4197 = 0;
	var uLocal_4198 = 0;
	var uLocal_4199 = 0;
	var uLocal_4200 = 0;
	var uLocal_4201 = 0;
	var uLocal_4202 = 0;
	var uLocal_4203 = 0;
	var uLocal_4204 = 0;
	var uLocal_4205 = 0;
	var uLocal_4206 = 0;
	var uLocal_4207 = 0;
	var uLocal_4208 = 0;
	var uLocal_4209 = 0;
	var uLocal_4210 = 0;
	var uLocal_4211 = 0;
	var uLocal_4212 = 0;
	var uLocal_4213 = 0;
	var uLocal_4214 = 0;
	var uLocal_4215 = 0;
	var uLocal_4216 = 0;
	var uLocal_4217 = 0;
	var uLocal_4218 = 0;
	var uLocal_4219 = 0;
	var uLocal_4220 = 0;
	var uLocal_4221 = 0;
	var uLocal_4222 = 0;
	var uLocal_4223 = -1;
	var uLocal_4224 = 0;
	var uLocal_4225 = 0;
	var uLocal_4226 = 0;
	var uLocal_4227 = 0;
	var uLocal_4228 = 0;
	var uLocal_4229 = 0;
	var uLocal_4230 = 0;
	var uLocal_4231 = 0;
	var uLocal_4232 = 0;
	var uLocal_4233 = 0;
	var uLocal_4234 = 0;
	var uLocal_4235 = 0;
	var uLocal_4236 = 0;
	var uLocal_4237 = 0;
	var uLocal_4238 = 0;
	var uLocal_4239 = 0;
	var uLocal_4240 = 0;
	var uLocal_4241 = 0;
	var uLocal_4242 = 0;
	var uLocal_4243 = 0;
	var uLocal_4244 = 0;
	var uLocal_4245 = 0;
	var uLocal_4246 = 0;
	var uLocal_4247 = 0;
	var uLocal_4248 = 0;
	var uLocal_4249 = 0;
	var uLocal_4250 = 0;
	var uLocal_4251 = 0;
	var uLocal_4252 = 0;
	var uLocal_4253 = 1065353216;
	var uLocal_4254 = 0;
	var uLocal_4255 = 0;
	var uLocal_4256 = 0;
	var uLocal_4257 = 0;
	var uLocal_4258 = 0;
	var uLocal_4259 = 0;
	var uLocal_4260 = 0;
	var uLocal_4261 = 0;
	var uLocal_4262 = 0;
	var uLocal_4263 = 0;
	var uLocal_4264 = 0;
	var uLocal_4265 = 0;
	var uLocal_4266 = 0;
	var uLocal_4267 = 0;
	var uLocal_4268 = 0;
	var uLocal_4269 = 0;
	var uLocal_4270 = 0;
	var uLocal_4271 = 0;
	var uLocal_4272 = 0;
	var uLocal_4273 = 0;
	var uLocal_4274 = 0;
	var uLocal_4275 = 0;
	var uLocal_4276 = 0;
	var uLocal_4277 = 0;
	var uLocal_4278 = 0;
	var uLocal_4279 = 0;
	var uLocal_4280 = -1;
	var uLocal_4281 = 0;
	var uLocal_4282 = 0;
	var uLocal_4283 = 0;
	var uLocal_4284 = 0;
	var uLocal_4285 = 0;
	var uLocal_4286 = 0;
	var uLocal_4287 = 0;
	var uLocal_4288 = 0;
	var uLocal_4289 = 0;
	var uLocal_4290 = 0;
	var uLocal_4291 = 0;
	var uLocal_4292 = 0;
	var uLocal_4293 = 0;
	var uLocal_4294 = 0;
	var uLocal_4295 = 0;
	var uLocal_4296 = 0;
	var uLocal_4297 = 0;
	var uLocal_4298 = 0;
	var uLocal_4299 = 0;
	var uLocal_4300 = 0;
	var uLocal_4301 = 0;
	var uLocal_4302 = 0;
	var uLocal_4303 = 0;
	var uLocal_4304 = 0;
	var uLocal_4305 = 0;
	var uLocal_4306 = 0;
	var uLocal_4307 = 0;
	var uLocal_4308 = 0;
	var uLocal_4309 = 0;
	var uLocal_4310 = 1065353216;
	var uLocal_4311 = 0;
	var uLocal_4312 = 0;
	var uLocal_4313 = 0;
	var uLocal_4314 = 0;
	var uLocal_4315 = 0;
	var uLocal_4316 = 0;
	var uLocal_4317 = 0;
	var uLocal_4318 = 0;
	var uLocal_4319 = 0;
	var uLocal_4320 = 0;
	var uLocal_4321 = 0;
	var uLocal_4322 = 0;
	var uLocal_4323 = 0;
	var uLocal_4324 = 0;
	var uLocal_4325 = 0;
	var uLocal_4326 = 0;
	var uLocal_4327 = 0;
	var uLocal_4328 = 0;
	var uLocal_4329 = 0;
	var uLocal_4330 = 0;
	var uLocal_4331 = 0;
	var uLocal_4332 = 0;
	var uLocal_4333 = 0;
	var uLocal_4334 = 0;
	var uLocal_4335 = 0;
	var uLocal_4336 = 0;
	var uLocal_4337 = -1;
	var uLocal_4338 = 0;
	var uLocal_4339 = 0;
	var uLocal_4340 = 0;
	var uLocal_4341 = 0;
	var uLocal_4342 = 0;
	var uLocal_4343 = 0;
	var uLocal_4344 = 0;
	var uLocal_4345 = 0;
	var uLocal_4346 = 0;
	var uLocal_4347 = 0;
	var uLocal_4348 = 0;
	var uLocal_4349 = 0;
	var uLocal_4350 = 0;
	var uLocal_4351 = 0;
	var uLocal_4352 = 0;
	var uLocal_4353 = 0;
	var uLocal_4354 = 0;
	var uLocal_4355 = 0;
	var uLocal_4356 = 0;
	var uLocal_4357 = 0;
	var uLocal_4358 = 0;
	var uLocal_4359 = 0;
	var uLocal_4360 = 0;
	var uLocal_4361 = 0;
	var uLocal_4362 = 0;
	var uLocal_4363 = 0;
	var uLocal_4364 = 0;
	var uLocal_4365 = 0;
	var uLocal_4366 = 0;
	var uLocal_4367 = 1065353216;
	var uLocal_4368 = 0;
	var uLocal_4369 = 0;
	var uLocal_4370 = 0;
	var uLocal_4371 = 0;
	var uLocal_4372 = 0;
	var uLocal_4373 = 0;
	var uLocal_4374 = 0;
	var uLocal_4375 = 0;
	var uLocal_4376 = 0;
	var uLocal_4377 = 0;
	var uLocal_4378 = 0;
	var uLocal_4379 = 0;
	var uLocal_4380 = 0;
	var uLocal_4381 = 0;
	var uLocal_4382 = 0;
	var uLocal_4383 = 0;
	var uLocal_4384 = 0;
	var uLocal_4385 = 0;
	var uLocal_4386 = 0;
	var uLocal_4387 = 0;
	var uLocal_4388 = 0;
	var uLocal_4389 = 0;
	var uLocal_4390 = 0;
	var uLocal_4391 = 0;
	var uLocal_4392 = 0;
	var uLocal_4393 = 0;
	var uLocal_4394 = -1;
	var uLocal_4395 = 0;
	var uLocal_4396 = 0;
	var uLocal_4397 = 0;
	var uLocal_4398 = 0;
	var uLocal_4399 = 0;
	var uLocal_4400 = 0;
	var uLocal_4401 = 0;
	var uLocal_4402 = 0;
	var uLocal_4403 = 0;
	var uLocal_4404 = 0;
	var uLocal_4405 = 0;
	var uLocal_4406 = 0;
	var uLocal_4407 = 0;
	var uLocal_4408 = 0;
	var uLocal_4409 = 0;
	var uLocal_4410 = 0;
	var uLocal_4411 = 0;
	var uLocal_4412 = 0;
	var uLocal_4413 = 0;
	var uLocal_4414 = 0;
	var uLocal_4415 = 0;
	var uLocal_4416 = 0;
	var uLocal_4417 = 0;
	var uLocal_4418 = 0;
	var uLocal_4419 = 0;
	var uLocal_4420 = 0;
	var uLocal_4421 = 0;
	var uLocal_4422 = 0;
	var uLocal_4423 = 0;
	var uLocal_4424 = 1065353216;
	var uLocal_4425 = 0;
	var uLocal_4426 = 0;
	var uLocal_4427 = 0;
	var uLocal_4428 = 0;
	var uLocal_4429 = 0;
	var uLocal_4430 = 0;
	var uLocal_4431 = 0;
	var uLocal_4432 = 0;
	var uLocal_4433 = 0;
	var uLocal_4434 = 0;
	var uLocal_4435 = 0;
	var uLocal_4436 = 0;
	var uLocal_4437 = 0;
	var uLocal_4438 = 0;
	var uLocal_4439 = 0;
	var uLocal_4440 = 0;
	var uLocal_4441 = 0;
	var uLocal_4442 = 0;
	var uLocal_4443 = 0;
	var uLocal_4444 = 0;
	var uLocal_4445 = 0;
	var uLocal_4446 = 0;
	var uLocal_4447 = 0;
	var uLocal_4448 = 0;
	var uLocal_4449 = 0;
	var uLocal_4450 = 0;
	var uLocal_4451 = -1;
	var uLocal_4452 = 0;
	var uLocal_4453 = 0;
	var uLocal_4454 = 0;
	var uLocal_4455 = 0;
	var uLocal_4456 = 0;
	var uLocal_4457 = 0;
	var uLocal_4458 = 0;
	var uLocal_4459 = 0;
	var uLocal_4460 = 0;
	var uLocal_4461 = 0;
	var uLocal_4462 = 0;
	var uLocal_4463 = 0;
	var uLocal_4464 = 0;
	var uLocal_4465 = 0;
	var uLocal_4466 = 0;
	var uLocal_4467 = 0;
	var uLocal_4468 = 0;
	var uLocal_4469 = 0;
	var uLocal_4470 = 0;
	var uLocal_4471 = 0;
	var uLocal_4472 = 0;
	var uLocal_4473 = 0;
	var uLocal_4474 = 0;
	var uLocal_4475 = 0;
	var uLocal_4476 = 0;
	var uLocal_4477 = 0;
	var uLocal_4478 = 0;
	var uLocal_4479 = 0;
	var uLocal_4480 = 0;
	var uLocal_4481 = 1065353216;
	var uLocal_4482 = 0;
	var uLocal_4483 = 0;
	var uLocal_4484 = 0;
	var uLocal_4485 = 0;
	var uLocal_4486 = 0;
	var uLocal_4487 = 0;
	var uLocal_4488 = 0;
	var uLocal_4489 = 0;
	var uLocal_4490 = 0;
	var uLocal_4491 = 0;
	var uLocal_4492 = 0;
	var uLocal_4493 = 0;
	var uLocal_4494 = 0;
	var uLocal_4495 = 0;
	var uLocal_4496 = 0;
	var uLocal_4497 = 0;
	var uLocal_4498 = 0;
	var uLocal_4499 = 0;
	var uLocal_4500 = 0;
	var uLocal_4501 = 0;
	var uLocal_4502 = 0;
	var uLocal_4503 = 0;
	var uLocal_4504 = 0;
	var uLocal_4505 = 0;
	var uLocal_4506 = 0;
	var uLocal_4507 = 0;
	var uLocal_4508 = -1;
	var uLocal_4509 = 0;
	var uLocal_4510 = 0;
	var uLocal_4511 = 0;
	var uLocal_4512 = 0;
	var uLocal_4513 = 0;
	var uLocal_4514 = 0;
	var uLocal_4515 = 0;
	var uLocal_4516 = 0;
	var uLocal_4517 = 0;
	var uLocal_4518 = 0;
	var uLocal_4519 = 0;
	var uLocal_4520 = 0;
	var uLocal_4521 = 0;
	var uLocal_4522 = 0;
	var uLocal_4523 = 0;
	var uLocal_4524 = 0;
	var uLocal_4525 = 0;
	var uLocal_4526 = 0;
	var uLocal_4527 = 0;
	var uLocal_4528 = 0;
	var uLocal_4529 = 0;
	var uLocal_4530 = 0;
	var uLocal_4531 = 0;
	var uLocal_4532 = 0;
	var uLocal_4533 = 0;
	var uLocal_4534 = 0;
	var uLocal_4535 = 0;
	var uLocal_4536 = 0;
	var uLocal_4537 = 0;
	var uLocal_4538 = 1065353216;
	var uLocal_4539 = 0;
	var uLocal_4540 = 0;
	var uLocal_4541 = 0;
	var uLocal_4542 = 0;
	var uLocal_4543 = 0;
	var uLocal_4544 = 0;
	var uLocal_4545 = 0;
	var uLocal_4546 = 0;
	var uLocal_4547 = 0;
	var uLocal_4548 = 0;
	var uLocal_4549 = 0;
	var uLocal_4550 = 0;
	var uLocal_4551 = 0;
	var uLocal_4552 = 0;
	var uLocal_4553 = 0;
	var uLocal_4554 = 0;
	var uLocal_4555 = 0;
	var uLocal_4556 = 0;
	var uLocal_4557 = 0;
	var uLocal_4558 = 0;
	var uLocal_4559 = 0;
	var uLocal_4560 = 0;
	var uLocal_4561 = 0;
	var uLocal_4562 = 0;
	var uLocal_4563 = 0;
	var uLocal_4564 = 0;
	var uLocal_4565 = -1;
	var uLocal_4566 = 0;
	var uLocal_4567 = 0;
	var uLocal_4568 = 0;
	var uLocal_4569 = 0;
	var uLocal_4570 = 0;
	var uLocal_4571 = 0;
	var uLocal_4572 = 0;
	var uLocal_4573 = 0;
	var uLocal_4574 = 0;
	var uLocal_4575 = 0;
	var uLocal_4576 = 0;
	var uLocal_4577 = 0;
	var uLocal_4578 = 0;
	var uLocal_4579 = 0;
	var uLocal_4580 = 0;
	var uLocal_4581 = 0;
	var uLocal_4582 = 0;
	var uLocal_4583 = 0;
	var uLocal_4584 = 0;
	var uLocal_4585 = 0;
	var uLocal_4586 = 0;
	var uLocal_4587 = 0;
	var uLocal_4588 = 0;
	var uLocal_4589 = 0;
	var uLocal_4590 = 0;
	var uLocal_4591 = 0;
	var uLocal_4592 = 0;
	var uLocal_4593 = 0;
	var uLocal_4594 = 0;
	var uLocal_4595 = 1065353216;
	var uLocal_4596 = 0;
	var uLocal_4597 = 0;
	var uLocal_4598 = 0;
	var uLocal_4599 = 0;
	var uLocal_4600 = 0;
	var uLocal_4601 = 0;
	var uLocal_4602 = 0;
	var uLocal_4603 = 0;
	var uLocal_4604 = 0;
	var uLocal_4605 = 0;
	var uLocal_4606 = 0;
	var uLocal_4607 = 0;
	var uLocal_4608 = 0;
	var uLocal_4609 = 0;
	var uLocal_4610 = 0;
	var uLocal_4611 = 0;
	var uLocal_4612 = 0;
	var uLocal_4613 = 0;
	var uLocal_4614 = 0;
	var uLocal_4615 = 0;
	var uLocal_4616 = 0;
	var uLocal_4617 = 0;
	var uLocal_4618 = 0;
	var uLocal_4619 = 0;
	var uLocal_4620 = 0;
	var uLocal_4621 = 0;
	var uLocal_4622 = -1;
	var uLocal_4623 = 0;
	var uLocal_4624 = 0;
	var uLocal_4625 = 0;
	var uLocal_4626 = 0;
	var uLocal_4627 = 0;
	var uLocal_4628 = 0;
	var uLocal_4629 = 0;
	var uLocal_4630 = 0;
	var uLocal_4631 = 0;
	var uLocal_4632 = 0;
	var uLocal_4633 = 0;
	var uLocal_4634 = 0;
	var uLocal_4635 = 0;
	var uLocal_4636 = 0;
	var uLocal_4637 = 0;
	var uLocal_4638 = 0;
	var uLocal_4639 = 0;
	var uLocal_4640 = 0;
	var uLocal_4641 = 0;
	var uLocal_4642 = 0;
	var uLocal_4643 = 0;
	var uLocal_4644 = 0;
	var uLocal_4645 = 0;
	var uLocal_4646 = 0;
	var uLocal_4647 = 0;
	var uLocal_4648 = 0;
	var uLocal_4649 = 0;
	var uLocal_4650 = 0;
	var uLocal_4651 = 0;
	var uLocal_4652 = 1065353216;
	var uLocal_4653 = 0;
	var uLocal_4654 = 0;
	var uLocal_4655 = 0;
	var uLocal_4656 = 0;
	var uLocal_4657 = 0;
	var uLocal_4658 = 0;
	var uLocal_4659 = 0;
	var uLocal_4660 = 0;
	var uLocal_4661 = 0;
	var uLocal_4662 = 0;
	var uLocal_4663 = 0;
	var uLocal_4664 = 0;
	var uLocal_4665 = 0;
	var uLocal_4666 = 0;
	var uLocal_4667 = 0;
	var uLocal_4668 = 0;
	var uLocal_4669 = 0;
	var uLocal_4670 = 0;
	var uLocal_4671 = 0;
	var uLocal_4672 = 0;
	var uLocal_4673 = 0;
	var uLocal_4674 = 0;
	var uLocal_4675 = 0;
	var uLocal_4676 = 0;
	var uLocal_4677 = 0;
	var uLocal_4678 = 0;
	var uLocal_4679 = -1;
	var uLocal_4680 = 0;
	var uLocal_4681 = 0;
	var uLocal_4682 = 0;
	var uLocal_4683 = 0;
	var uLocal_4684 = 0;
	var uLocal_4685 = 0;
	var uLocal_4686 = 0;
	var uLocal_4687 = 0;
	var uLocal_4688 = 0;
	var uLocal_4689 = 0;
	var uLocal_4690 = 0;
	var uLocal_4691 = 0;
	var uLocal_4692 = 0;
	var uLocal_4693 = 0;
	var uLocal_4694 = 0;
	var uLocal_4695 = 0;
	var uLocal_4696 = 0;
	var uLocal_4697 = 0;
	var uLocal_4698 = 0;
	var uLocal_4699 = 0;
	var uLocal_4700 = 0;
	var uLocal_4701 = 0;
	var uLocal_4702 = 0;
	var uLocal_4703 = 0;
	var uLocal_4704 = 0;
	var uLocal_4705 = 0;
	var uLocal_4706 = 0;
	var uLocal_4707 = 0;
	var uLocal_4708 = 0;
	var uLocal_4709 = 1065353216;
	var uLocal_4710 = 0;
	var uLocal_4711 = 0;
	var uLocal_4712 = 0;
	var uLocal_4713 = 0;
	var uLocal_4714 = 0;
	var uLocal_4715 = 0;
	var uLocal_4716 = 0;
	var uLocal_4717 = 0;
	var uLocal_4718 = 0;
	var uLocal_4719 = 0;
	var uLocal_4720 = 0;
	var uLocal_4721 = 0;
	var uLocal_4722 = 0;
	var uLocal_4723 = 0;
	var uLocal_4724 = 0;
	var uLocal_4725 = 0;
	var uLocal_4726 = 0;
	var uLocal_4727 = 0;
	var uLocal_4728 = 0;
	var uLocal_4729 = 0;
	var uLocal_4730 = 0;
	var uLocal_4731 = 0;
	var uLocal_4732 = 0;
	var uLocal_4733 = 0;
	var uLocal_4734 = 0;
	var uLocal_4735 = 0;
	var uLocal_4736 = -1;
	var uLocal_4737 = 0;
	var uLocal_4738 = 0;
	var uLocal_4739 = 0;
	var uLocal_4740 = 0;
	var uLocal_4741 = 0;
	var uLocal_4742 = 0;
	var uLocal_4743 = 0;
	var uLocal_4744 = 0;
	var uLocal_4745 = 0;
	var uLocal_4746 = 0;
	var uLocal_4747 = 0;
	var uLocal_4748 = 0;
	var uLocal_4749 = 0;
	var uLocal_4750 = 0;
	var uLocal_4751 = 0;
	var uLocal_4752 = 0;
	var uLocal_4753 = 0;
	var uLocal_4754 = 0;
	var uLocal_4755 = 0;
	var uLocal_4756 = 0;
	var uLocal_4757 = 0;
	var uLocal_4758 = 0;
	var uLocal_4759 = 0;
	var uLocal_4760 = 0;
	var uLocal_4761 = 0;
	var uLocal_4762 = 0;
	var uLocal_4763 = 0;
	var uLocal_4764 = 0;
	var uLocal_4765 = 0;
	var uLocal_4766 = 1065353216;
	var uLocal_4767 = 0;
	var uLocal_4768 = 0;
	var uLocal_4769 = 0;
	var uLocal_4770 = 0;
	var uLocal_4771 = 0;
	var uLocal_4772 = 0;
	var uLocal_4773 = 0;
	var uLocal_4774 = 0;
	var uLocal_4775 = 0;
	var uLocal_4776 = 0;
	var uLocal_4777 = 0;
	var uLocal_4778 = 0;
	var uLocal_4779 = 0;
	var uLocal_4780 = 0;
	var uLocal_4781 = 0;
	var uLocal_4782 = 0;
	var uLocal_4783 = 0;
	var uLocal_4784 = 0;
	var uLocal_4785 = 0;
	var uLocal_4786 = 0;
	var uLocal_4787 = 0;
	var uLocal_4788 = 0;
	var uLocal_4789 = 0;
	var uLocal_4790 = 16;
	var uLocal_4791 = 0;
	var uLocal_4792 = -1082130432;
	var uLocal_4793 = 0;
	var uLocal_4794 = -1082130432;
	var uLocal_4795 = 0;
	var uLocal_4796 = -1082130432;
	var uLocal_4797 = 0;
	var uLocal_4798 = -1082130432;
	var uLocal_4799 = 0;
	var uLocal_4800 = -1082130432;
	var uLocal_4801 = 0;
	var uLocal_4802 = -1082130432;
	var uLocal_4803 = 0;
	var uLocal_4804 = -1082130432;
	var uLocal_4805 = 0;
	var uLocal_4806 = -1082130432;
	var uLocal_4807 = 0;
	var uLocal_4808 = -1082130432;
	var uLocal_4809 = 0;
	var uLocal_4810 = -1082130432;
	var uLocal_4811 = 0;
	var uLocal_4812 = -1082130432;
	var uLocal_4813 = 0;
	var uLocal_4814 = -1082130432;
	var uLocal_4815 = 0;
	var uLocal_4816 = -1082130432;
	var uLocal_4817 = 0;
	var uLocal_4818 = -1082130432;
	var uLocal_4819 = 0;
	var uLocal_4820 = -1082130432;
	var uLocal_4821 = 0;
	var uLocal_4822 = -1082130432;
	var uLocal_4823 = 16;
	var uLocal_4824 = 0;
	var uLocal_4825 = -1082130432;
	var uLocal_4826 = 0;
	var uLocal_4827 = -1082130432;
	var uLocal_4828 = 0;
	var uLocal_4829 = -1082130432;
	var uLocal_4830 = 0;
	var uLocal_4831 = -1082130432;
	var uLocal_4832 = 0;
	var uLocal_4833 = -1082130432;
	var uLocal_4834 = 0;
	var uLocal_4835 = -1082130432;
	var uLocal_4836 = 0;
	var uLocal_4837 = -1082130432;
	var uLocal_4838 = 0;
	var uLocal_4839 = -1082130432;
	var uLocal_4840 = 0;
	var uLocal_4841 = -1082130432;
	var uLocal_4842 = 0;
	var uLocal_4843 = -1082130432;
	var uLocal_4844 = 0;
	var uLocal_4845 = -1082130432;
	var uLocal_4846 = 0;
	var uLocal_4847 = -1082130432;
	var uLocal_4848 = 0;
	var uLocal_4849 = -1082130432;
	var uLocal_4850 = 0;
	var uLocal_4851 = -1082130432;
	var uLocal_4852 = 0;
	var uLocal_4853 = -1082130432;
	var uLocal_4854 = 0;
	var uLocal_4855 = -1082130432;
	var uLocal_4856 = 0;
	var uLocal_4857 = 0;
	var uLocal_4858 = 0;
	var uLocal_4859 = 0;
	var uLocal_4860 = 0;
	var uLocal_4861 = 0;
	var uLocal_4862 = 0;
	var uLocal_4863 = 0;
	var uLocal_4864 = 0;
	var uLocal_4865 = 0;
	var uLocal_4866 = 0;
	var uLocal_4867 = 0;
	var uLocal_4868 = 0;
	var uLocal_4869 = 0;
	var uLocal_4870 = 0;
	var uLocal_4871 = 0;
	var uLocal_4872 = -1082130432;
	var uLocal_4873 = -1082130432;
	var uLocal_4874 = 1;
	var uLocal_4875 = 1;
	var uLocal_4876 = 1;
	var uLocal_4877 = -1;
	var uLocal_4878 = -1;
	var uLocal_4879 = -1;
	var uLocal_4880 = 0;
	var uLocal_4881 = 0;
	var uLocal_4882 = 0;
	var uLocal_4883 = 0;
	var uLocal_4884 = 2;
	var uLocal_4885 = 0;
	var uLocal_4886 = 0;
	var uLocal_4887 = 2;
	var uLocal_4888 = 0;
	var uLocal_4889 = 0;
	var uLocal_4890 = 20;
	var uLocal_4891 = 0;
	var uLocal_4892 = 0;
	var uLocal_4893 = 0;
	var uLocal_4894 = -1;
	var uLocal_4895 = 0;
	var uLocal_4896 = 0;
	var uLocal_4897 = 0;
	var uLocal_4898 = 0;
	var uLocal_4899 = 0;
	var uLocal_4900 = 0;
	var uLocal_4901 = 0;
	var uLocal_4902 = 0;
	var uLocal_4903 = 0;
	var uLocal_4904 = 0;
	var uLocal_4905 = 0;
	var uLocal_4906 = 0;
	var uLocal_4907 = 0;
	var uLocal_4908 = 0;
	var uLocal_4909 = 0;
	var uLocal_4910 = 0;
	var uLocal_4911 = 0;
	var uLocal_4912 = 0;
	var uLocal_4913 = 0;
	var uLocal_4914 = 0;
	var uLocal_4915 = 0;
	var uLocal_4916 = 0;
	var uLocal_4917 = 0;
	var uLocal_4918 = 0;
	var uLocal_4919 = 0;
	var uLocal_4920 = 0;
	var uLocal_4921 = 0;
	var uLocal_4922 = 0;
	var uLocal_4923 = 0;
	var uLocal_4924 = 1065353216;
	var uLocal_4925 = 0;
	var uLocal_4926 = 0;
	var uLocal_4927 = 0;
	var uLocal_4928 = 0;
	var uLocal_4929 = 0;
	var uLocal_4930 = 0;
	var uLocal_4931 = 0;
	var uLocal_4932 = 0;
	var uLocal_4933 = 0;
	var uLocal_4934 = 0;
	var uLocal_4935 = 0;
	var uLocal_4936 = 0;
	var uLocal_4937 = 0;
	var uLocal_4938 = 0;
	var uLocal_4939 = 0;
	var uLocal_4940 = 0;
	var uLocal_4941 = 0;
	var uLocal_4942 = 0;
	var uLocal_4943 = 0;
	var uLocal_4944 = 0;
	var uLocal_4945 = 0;
	var uLocal_4946 = 0;
	var uLocal_4947 = 0;
	var uLocal_4948 = 0;
	var uLocal_4949 = 0;
	var uLocal_4950 = 0;
	var uLocal_4951 = -1;
	var uLocal_4952 = 0;
	var uLocal_4953 = 0;
	var uLocal_4954 = 0;
	var uLocal_4955 = 0;
	var uLocal_4956 = 0;
	var uLocal_4957 = 0;
	var uLocal_4958 = 0;
	var uLocal_4959 = 0;
	var uLocal_4960 = 0;
	var uLocal_4961 = 0;
	var uLocal_4962 = 0;
	var uLocal_4963 = 0;
	var uLocal_4964 = 0;
	var uLocal_4965 = 0;
	var uLocal_4966 = 0;
	var uLocal_4967 = 0;
	var uLocal_4968 = 0;
	var uLocal_4969 = 0;
	var uLocal_4970 = 0;
	var uLocal_4971 = 0;
	var uLocal_4972 = 0;
	var uLocal_4973 = 0;
	var uLocal_4974 = 0;
	var uLocal_4975 = 0;
	var uLocal_4976 = 0;
	var uLocal_4977 = 0;
	var uLocal_4978 = 0;
	var uLocal_4979 = 0;
	var uLocal_4980 = 0;
	var uLocal_4981 = 1065353216;
	var uLocal_4982 = 0;
	var uLocal_4983 = 0;
	var uLocal_4984 = 0;
	var uLocal_4985 = 0;
	var uLocal_4986 = 0;
	var uLocal_4987 = 0;
	var uLocal_4988 = 0;
	var uLocal_4989 = 0;
	var uLocal_4990 = 0;
	var uLocal_4991 = 0;
	var uLocal_4992 = 0;
	var uLocal_4993 = 0;
	var uLocal_4994 = 0;
	var uLocal_4995 = 0;
	var uLocal_4996 = 0;
	var uLocal_4997 = 0;
	var uLocal_4998 = 0;
	var uLocal_4999 = 0;
	var uLocal_5000 = 0;
	var uLocal_5001 = 0;
	var uLocal_5002 = 0;
	var uLocal_5003 = 0;
	var uLocal_5004 = 0;
	var uLocal_5005 = 0;
	var uLocal_5006 = 0;
	var uLocal_5007 = 0;
	var uLocal_5008 = -1;
	var uLocal_5009 = 0;
	var uLocal_5010 = 0;
	var uLocal_5011 = 0;
	var uLocal_5012 = 0;
	var uLocal_5013 = 0;
	var uLocal_5014 = 0;
	var uLocal_5015 = 0;
	var uLocal_5016 = 0;
	var uLocal_5017 = 0;
	var uLocal_5018 = 0;
	var uLocal_5019 = 0;
	var uLocal_5020 = 0;
	var uLocal_5021 = 0;
	var uLocal_5022 = 0;
	var uLocal_5023 = 0;
	var uLocal_5024 = 0;
	var uLocal_5025 = 0;
	var uLocal_5026 = 0;
	var uLocal_5027 = 0;
	var uLocal_5028 = 0;
	var uLocal_5029 = 0;
	var uLocal_5030 = 0;
	var uLocal_5031 = 0;
	var uLocal_5032 = 0;
	var uLocal_5033 = 0;
	var uLocal_5034 = 0;
	var uLocal_5035 = 0;
	var uLocal_5036 = 0;
	var uLocal_5037 = 0;
	var uLocal_5038 = 1065353216;
	var uLocal_5039 = 0;
	var uLocal_5040 = 0;
	var uLocal_5041 = 0;
	var uLocal_5042 = 0;
	var uLocal_5043 = 0;
	var uLocal_5044 = 0;
	var uLocal_5045 = 0;
	var uLocal_5046 = 0;
	var uLocal_5047 = 0;
	var uLocal_5048 = 0;
	var uLocal_5049 = 0;
	var uLocal_5050 = 0;
	var uLocal_5051 = 0;
	var uLocal_5052 = 0;
	var uLocal_5053 = 0;
	var uLocal_5054 = 0;
	var uLocal_5055 = 0;
	var uLocal_5056 = 0;
	var uLocal_5057 = 0;
	var uLocal_5058 = 0;
	var uLocal_5059 = 0;
	var uLocal_5060 = 0;
	var uLocal_5061 = 0;
	var uLocal_5062 = 0;
	var uLocal_5063 = 0;
	var uLocal_5064 = 0;
	var uLocal_5065 = -1;
	var uLocal_5066 = 0;
	var uLocal_5067 = 0;
	var uLocal_5068 = 0;
	var uLocal_5069 = 0;
	var uLocal_5070 = 0;
	var uLocal_5071 = 0;
	var uLocal_5072 = 0;
	var uLocal_5073 = 0;
	var uLocal_5074 = 0;
	var uLocal_5075 = 0;
	var uLocal_5076 = 0;
	var uLocal_5077 = 0;
	var uLocal_5078 = 0;
	var uLocal_5079 = 0;
	var uLocal_5080 = 0;
	var uLocal_5081 = 0;
	var uLocal_5082 = 0;
	var uLocal_5083 = 0;
	var uLocal_5084 = 0;
	var uLocal_5085 = 0;
	var uLocal_5086 = 0;
	var uLocal_5087 = 0;
	var uLocal_5088 = 0;
	var uLocal_5089 = 0;
	var uLocal_5090 = 0;
	var uLocal_5091 = 0;
	var uLocal_5092 = 0;
	var uLocal_5093 = 0;
	var uLocal_5094 = 0;
	var uLocal_5095 = 1065353216;
	var uLocal_5096 = 0;
	var uLocal_5097 = 0;
	var uLocal_5098 = 0;
	var uLocal_5099 = 0;
	var uLocal_5100 = 0;
	var uLocal_5101 = 0;
	var uLocal_5102 = 0;
	var uLocal_5103 = 0;
	var uLocal_5104 = 0;
	var uLocal_5105 = 0;
	var uLocal_5106 = 0;
	var uLocal_5107 = 0;
	var uLocal_5108 = 0;
	var uLocal_5109 = 0;
	var uLocal_5110 = 0;
	var uLocal_5111 = 0;
	var uLocal_5112 = 0;
	var uLocal_5113 = 0;
	var uLocal_5114 = 0;
	var uLocal_5115 = 0;
	var uLocal_5116 = 0;
	var uLocal_5117 = 0;
	var uLocal_5118 = 0;
	var uLocal_5119 = 0;
	var uLocal_5120 = 0;
	var uLocal_5121 = 0;
	var uLocal_5122 = -1;
	var uLocal_5123 = 0;
	var uLocal_5124 = 0;
	var uLocal_5125 = 0;
	var uLocal_5126 = 0;
	var uLocal_5127 = 0;
	var uLocal_5128 = 0;
	var uLocal_5129 = 0;
	var uLocal_5130 = 0;
	var uLocal_5131 = 0;
	var uLocal_5132 = 0;
	var uLocal_5133 = 0;
	var uLocal_5134 = 0;
	var uLocal_5135 = 0;
	var uLocal_5136 = 0;
	var uLocal_5137 = 0;
	var uLocal_5138 = 0;
	var uLocal_5139 = 0;
	var uLocal_5140 = 0;
	var uLocal_5141 = 0;
	var uLocal_5142 = 0;
	var uLocal_5143 = 0;
	var uLocal_5144 = 0;
	var uLocal_5145 = 0;
	var uLocal_5146 = 0;
	var uLocal_5147 = 0;
	var uLocal_5148 = 0;
	var uLocal_5149 = 0;
	var uLocal_5150 = 0;
	var uLocal_5151 = 0;
	var uLocal_5152 = 1065353216;
	var uLocal_5153 = 0;
	var uLocal_5154 = 0;
	var uLocal_5155 = 0;
	var uLocal_5156 = 0;
	var uLocal_5157 = 0;
	var uLocal_5158 = 0;
	var uLocal_5159 = 0;
	var uLocal_5160 = 0;
	var uLocal_5161 = 0;
	var uLocal_5162 = 0;
	var uLocal_5163 = 0;
	var uLocal_5164 = 0;
	var uLocal_5165 = 0;
	var uLocal_5166 = 0;
	var uLocal_5167 = 0;
	var uLocal_5168 = 0;
	var uLocal_5169 = 0;
	var uLocal_5170 = 0;
	var uLocal_5171 = 0;
	var uLocal_5172 = 0;
	var uLocal_5173 = 0;
	var uLocal_5174 = 0;
	var uLocal_5175 = 0;
	var uLocal_5176 = 0;
	var uLocal_5177 = 0;
	var uLocal_5178 = 0;
	var uLocal_5179 = -1;
	var uLocal_5180 = 0;
	var uLocal_5181 = 0;
	var uLocal_5182 = 0;
	var uLocal_5183 = 0;
	var uLocal_5184 = 0;
	var uLocal_5185 = 0;
	var uLocal_5186 = 0;
	var uLocal_5187 = 0;
	var uLocal_5188 = 0;
	var uLocal_5189 = 0;
	var uLocal_5190 = 0;
	var uLocal_5191 = 0;
	var uLocal_5192 = 0;
	var uLocal_5193 = 0;
	var uLocal_5194 = 0;
	var uLocal_5195 = 0;
	var uLocal_5196 = 0;
	var uLocal_5197 = 0;
	var uLocal_5198 = 0;
	var uLocal_5199 = 0;
	var uLocal_5200 = 0;
	var uLocal_5201 = 0;
	var uLocal_5202 = 0;
	var uLocal_5203 = 0;
	var uLocal_5204 = 0;
	var uLocal_5205 = 0;
	var uLocal_5206 = 0;
	var uLocal_5207 = 0;
	var uLocal_5208 = 0;
	var uLocal_5209 = 1065353216;
	var uLocal_5210 = 0;
	var uLocal_5211 = 0;
	var uLocal_5212 = 0;
	var uLocal_5213 = 0;
	var uLocal_5214 = 0;
	var uLocal_5215 = 0;
	var uLocal_5216 = 0;
	var uLocal_5217 = 0;
	var uLocal_5218 = 0;
	var uLocal_5219 = 0;
	var uLocal_5220 = 0;
	var uLocal_5221 = 0;
	var uLocal_5222 = 0;
	var uLocal_5223 = 0;
	var uLocal_5224 = 0;
	var uLocal_5225 = 0;
	var uLocal_5226 = 0;
	var uLocal_5227 = 0;
	var uLocal_5228 = 0;
	var uLocal_5229 = 0;
	var uLocal_5230 = 0;
	var uLocal_5231 = 0;
	var uLocal_5232 = 0;
	var uLocal_5233 = 0;
	var uLocal_5234 = 0;
	var uLocal_5235 = 0;
	var uLocal_5236 = -1;
	var uLocal_5237 = 0;
	var uLocal_5238 = 0;
	var uLocal_5239 = 0;
	var uLocal_5240 = 0;
	var uLocal_5241 = 0;
	var uLocal_5242 = 0;
	var uLocal_5243 = 0;
	var uLocal_5244 = 0;
	var uLocal_5245 = 0;
	var uLocal_5246 = 0;
	var uLocal_5247 = 0;
	var uLocal_5248 = 0;
	var uLocal_5249 = 0;
	var uLocal_5250 = 0;
	var uLocal_5251 = 0;
	var uLocal_5252 = 0;
	var uLocal_5253 = 0;
	var uLocal_5254 = 0;
	var uLocal_5255 = 0;
	var uLocal_5256 = 0;
	var uLocal_5257 = 0;
	var uLocal_5258 = 0;
	var uLocal_5259 = 0;
	var uLocal_5260 = 0;
	var uLocal_5261 = 0;
	var uLocal_5262 = 0;
	var uLocal_5263 = 0;
	var uLocal_5264 = 0;
	var uLocal_5265 = 0;
	var uLocal_5266 = 1065353216;
	var uLocal_5267 = 0;
	var uLocal_5268 = 0;
	var uLocal_5269 = 0;
	var uLocal_5270 = 0;
	var uLocal_5271 = 0;
	var uLocal_5272 = 0;
	var uLocal_5273 = 0;
	var uLocal_5274 = 0;
	var uLocal_5275 = 0;
	var uLocal_5276 = 0;
	var uLocal_5277 = 0;
	var uLocal_5278 = 0;
	var uLocal_5279 = 0;
	var uLocal_5280 = 0;
	var uLocal_5281 = 0;
	var uLocal_5282 = 0;
	var uLocal_5283 = 0;
	var uLocal_5284 = 0;
	var uLocal_5285 = 0;
	var uLocal_5286 = 0;
	var uLocal_5287 = 0;
	var uLocal_5288 = 0;
	var uLocal_5289 = 0;
	var uLocal_5290 = 0;
	var uLocal_5291 = 0;
	var uLocal_5292 = 0;
	var uLocal_5293 = -1;
	var uLocal_5294 = 0;
	var uLocal_5295 = 0;
	var uLocal_5296 = 0;
	var uLocal_5297 = 0;
	var uLocal_5298 = 0;
	var uLocal_5299 = 0;
	var uLocal_5300 = 0;
	var uLocal_5301 = 0;
	var uLocal_5302 = 0;
	var uLocal_5303 = 0;
	var uLocal_5304 = 0;
	var uLocal_5305 = 0;
	var uLocal_5306 = 0;
	var uLocal_5307 = 0;
	var uLocal_5308 = 0;
	var uLocal_5309 = 0;
	var uLocal_5310 = 0;
	var uLocal_5311 = 0;
	var uLocal_5312 = 0;
	var uLocal_5313 = 0;
	var uLocal_5314 = 0;
	var uLocal_5315 = 0;
	var uLocal_5316 = 0;
	var uLocal_5317 = 0;
	var uLocal_5318 = 0;
	var uLocal_5319 = 0;
	var uLocal_5320 = 0;
	var uLocal_5321 = 0;
	var uLocal_5322 = 0;
	var uLocal_5323 = 1065353216;
	var uLocal_5324 = 0;
	var uLocal_5325 = 0;
	var uLocal_5326 = 0;
	var uLocal_5327 = 0;
	var uLocal_5328 = 0;
	var uLocal_5329 = 0;
	var uLocal_5330 = 0;
	var uLocal_5331 = 0;
	var uLocal_5332 = 0;
	var uLocal_5333 = 0;
	var uLocal_5334 = 0;
	var uLocal_5335 = 0;
	var uLocal_5336 = 0;
	var uLocal_5337 = 0;
	var uLocal_5338 = 0;
	var uLocal_5339 = 0;
	var uLocal_5340 = 0;
	var uLocal_5341 = 0;
	var uLocal_5342 = 0;
	var uLocal_5343 = 0;
	var uLocal_5344 = 0;
	var uLocal_5345 = 0;
	var uLocal_5346 = 0;
	var uLocal_5347 = 0;
	var uLocal_5348 = 0;
	var uLocal_5349 = 0;
	var uLocal_5350 = -1;
	var uLocal_5351 = 0;
	var uLocal_5352 = 0;
	var uLocal_5353 = 0;
	var uLocal_5354 = 0;
	var uLocal_5355 = 0;
	var uLocal_5356 = 0;
	var uLocal_5357 = 0;
	var uLocal_5358 = 0;
	var uLocal_5359 = 0;
	var uLocal_5360 = 0;
	var uLocal_5361 = 0;
	var uLocal_5362 = 0;
	var uLocal_5363 = 0;
	var uLocal_5364 = 0;
	var uLocal_5365 = 0;
	var uLocal_5366 = 0;
	var uLocal_5367 = 0;
	var uLocal_5368 = 0;
	var uLocal_5369 = 0;
	var uLocal_5370 = 0;
	var uLocal_5371 = 0;
	var uLocal_5372 = 0;
	var uLocal_5373 = 0;
	var uLocal_5374 = 0;
	var uLocal_5375 = 0;
	var uLocal_5376 = 0;
	var uLocal_5377 = 0;
	var uLocal_5378 = 0;
	var uLocal_5379 = 0;
	var uLocal_5380 = 1065353216;
	var uLocal_5381 = 0;
	var uLocal_5382 = 0;
	var uLocal_5383 = 0;
	var uLocal_5384 = 0;
	var uLocal_5385 = 0;
	var uLocal_5386 = 0;
	var uLocal_5387 = 0;
	var uLocal_5388 = 0;
	var uLocal_5389 = 0;
	var uLocal_5390 = 0;
	var uLocal_5391 = 0;
	var uLocal_5392 = 0;
	var uLocal_5393 = 0;
	var uLocal_5394 = 0;
	var uLocal_5395 = 0;
	var uLocal_5396 = 0;
	var uLocal_5397 = 0;
	var uLocal_5398 = 0;
	var uLocal_5399 = 0;
	var uLocal_5400 = 0;
	var uLocal_5401 = 0;
	var uLocal_5402 = 0;
	var uLocal_5403 = 0;
	var uLocal_5404 = 0;
	var uLocal_5405 = 0;
	var uLocal_5406 = 0;
	var uLocal_5407 = -1;
	var uLocal_5408 = 0;
	var uLocal_5409 = 0;
	var uLocal_5410 = 0;
	var uLocal_5411 = 0;
	var uLocal_5412 = 0;
	var uLocal_5413 = 0;
	var uLocal_5414 = 0;
	var uLocal_5415 = 0;
	var uLocal_5416 = 0;
	var uLocal_5417 = 0;
	var uLocal_5418 = 0;
	var uLocal_5419 = 0;
	var uLocal_5420 = 0;
	var uLocal_5421 = 0;
	var uLocal_5422 = 0;
	var uLocal_5423 = 0;
	var uLocal_5424 = 0;
	var uLocal_5425 = 0;
	var uLocal_5426 = 0;
	var uLocal_5427 = 0;
	var uLocal_5428 = 0;
	var uLocal_5429 = 0;
	var uLocal_5430 = 0;
	var uLocal_5431 = 0;
	var uLocal_5432 = 0;
	var uLocal_5433 = 0;
	var uLocal_5434 = 0;
	var uLocal_5435 = 0;
	var uLocal_5436 = 0;
	var uLocal_5437 = 1065353216;
	var uLocal_5438 = 0;
	var uLocal_5439 = 0;
	var uLocal_5440 = 0;
	var uLocal_5441 = 0;
	var uLocal_5442 = 0;
	var uLocal_5443 = 0;
	var uLocal_5444 = 0;
	var uLocal_5445 = 0;
	var uLocal_5446 = 0;
	var uLocal_5447 = 0;
	var uLocal_5448 = 0;
	var uLocal_5449 = 0;
	var uLocal_5450 = 0;
	var uLocal_5451 = 0;
	var uLocal_5452 = 0;
	var uLocal_5453 = 0;
	var uLocal_5454 = 0;
	var uLocal_5455 = 0;
	var uLocal_5456 = 0;
	var uLocal_5457 = 0;
	var uLocal_5458 = 0;
	var uLocal_5459 = 0;
	var uLocal_5460 = 0;
	var uLocal_5461 = 0;
	var uLocal_5462 = 0;
	var uLocal_5463 = 0;
	var uLocal_5464 = -1;
	var uLocal_5465 = 0;
	var uLocal_5466 = 0;
	var uLocal_5467 = 0;
	var uLocal_5468 = 0;
	var uLocal_5469 = 0;
	var uLocal_5470 = 0;
	var uLocal_5471 = 0;
	var uLocal_5472 = 0;
	var uLocal_5473 = 0;
	var uLocal_5474 = 0;
	var uLocal_5475 = 0;
	var uLocal_5476 = 0;
	var uLocal_5477 = 0;
	var uLocal_5478 = 0;
	var uLocal_5479 = 0;
	var uLocal_5480 = 0;
	var uLocal_5481 = 0;
	var uLocal_5482 = 0;
	var uLocal_5483 = 0;
	var uLocal_5484 = 0;
	var uLocal_5485 = 0;
	var uLocal_5486 = 0;
	var uLocal_5487 = 0;
	var uLocal_5488 = 0;
	var uLocal_5489 = 0;
	var uLocal_5490 = 0;
	var uLocal_5491 = 0;
	var uLocal_5492 = 0;
	var uLocal_5493 = 0;
	var uLocal_5494 = 1065353216;
	var uLocal_5495 = 0;
	var uLocal_5496 = 0;
	var uLocal_5497 = 0;
	var uLocal_5498 = 0;
	var uLocal_5499 = 0;
	var uLocal_5500 = 0;
	var uLocal_5501 = 0;
	var uLocal_5502 = 0;
	var uLocal_5503 = 0;
	var uLocal_5504 = 0;
	var uLocal_5505 = 0;
	var uLocal_5506 = 0;
	var uLocal_5507 = 0;
	var uLocal_5508 = 0;
	var uLocal_5509 = 0;
	var uLocal_5510 = 0;
	var uLocal_5511 = 0;
	var uLocal_5512 = 0;
	var uLocal_5513 = 0;
	var uLocal_5514 = 0;
	var uLocal_5515 = 0;
	var uLocal_5516 = 0;
	var uLocal_5517 = 0;
	var uLocal_5518 = 0;
	var uLocal_5519 = 0;
	var uLocal_5520 = 0;
	var uLocal_5521 = -1;
	var uLocal_5522 = 0;
	var uLocal_5523 = 0;
	var uLocal_5524 = 0;
	var uLocal_5525 = 0;
	var uLocal_5526 = 0;
	var uLocal_5527 = 0;
	var uLocal_5528 = 0;
	var uLocal_5529 = 0;
	var uLocal_5530 = 0;
	var uLocal_5531 = 0;
	var uLocal_5532 = 0;
	var uLocal_5533 = 0;
	var uLocal_5534 = 0;
	var uLocal_5535 = 0;
	var uLocal_5536 = 0;
	var uLocal_5537 = 0;
	var uLocal_5538 = 0;
	var uLocal_5539 = 0;
	var uLocal_5540 = 0;
	var uLocal_5541 = 0;
	var uLocal_5542 = 0;
	var uLocal_5543 = 0;
	var uLocal_5544 = 0;
	var uLocal_5545 = 0;
	var uLocal_5546 = 0;
	var uLocal_5547 = 0;
	var uLocal_5548 = 0;
	var uLocal_5549 = 0;
	var uLocal_5550 = 0;
	var uLocal_5551 = 1065353216;
	var uLocal_5552 = 0;
	var uLocal_5553 = 0;
	var uLocal_5554 = 0;
	var uLocal_5555 = 0;
	var uLocal_5556 = 0;
	var uLocal_5557 = 0;
	var uLocal_5558 = 0;
	var uLocal_5559 = 0;
	var uLocal_5560 = 0;
	var uLocal_5561 = 0;
	var uLocal_5562 = 0;
	var uLocal_5563 = 0;
	var uLocal_5564 = 0;
	var uLocal_5565 = 0;
	var uLocal_5566 = 0;
	var uLocal_5567 = 0;
	var uLocal_5568 = 0;
	var uLocal_5569 = 0;
	var uLocal_5570 = 0;
	var uLocal_5571 = 0;
	var uLocal_5572 = 0;
	var uLocal_5573 = 0;
	var uLocal_5574 = 0;
	var uLocal_5575 = 0;
	var uLocal_5576 = 0;
	var uLocal_5577 = 0;
	var uLocal_5578 = -1;
	var uLocal_5579 = 0;
	var uLocal_5580 = 0;
	var uLocal_5581 = 0;
	var uLocal_5582 = 0;
	var uLocal_5583 = 0;
	var uLocal_5584 = 0;
	var uLocal_5585 = 0;
	var uLocal_5586 = 0;
	var uLocal_5587 = 0;
	var uLocal_5588 = 0;
	var uLocal_5589 = 0;
	var uLocal_5590 = 0;
	var uLocal_5591 = 0;
	var uLocal_5592 = 0;
	var uLocal_5593 = 0;
	var uLocal_5594 = 0;
	var uLocal_5595 = 0;
	var uLocal_5596 = 0;
	var uLocal_5597 = 0;
	var uLocal_5598 = 0;
	var uLocal_5599 = 0;
	var uLocal_5600 = 0;
	var uLocal_5601 = 0;
	var uLocal_5602 = 0;
	var uLocal_5603 = 0;
	var uLocal_5604 = 0;
	var uLocal_5605 = 0;
	var uLocal_5606 = 0;
	var uLocal_5607 = 0;
	var uLocal_5608 = 1065353216;
	var uLocal_5609 = 0;
	var uLocal_5610 = 0;
	var uLocal_5611 = 0;
	var uLocal_5612 = 0;
	var uLocal_5613 = 0;
	var uLocal_5614 = 0;
	var uLocal_5615 = 0;
	var uLocal_5616 = 0;
	var uLocal_5617 = 0;
	var uLocal_5618 = 0;
	var uLocal_5619 = 0;
	var uLocal_5620 = 0;
	var uLocal_5621 = 0;
	var uLocal_5622 = 0;
	var uLocal_5623 = 0;
	var uLocal_5624 = 0;
	var uLocal_5625 = 0;
	var uLocal_5626 = 0;
	var uLocal_5627 = 0;
	var uLocal_5628 = 0;
	var uLocal_5629 = 0;
	var uLocal_5630 = 0;
	var uLocal_5631 = 0;
	var uLocal_5632 = 0;
	var uLocal_5633 = 0;
	var uLocal_5634 = 0;
	var uLocal_5635 = -1;
	var uLocal_5636 = 0;
	var uLocal_5637 = 0;
	var uLocal_5638 = 0;
	var uLocal_5639 = 0;
	var uLocal_5640 = 0;
	var uLocal_5641 = 0;
	var uLocal_5642 = 0;
	var uLocal_5643 = 0;
	var uLocal_5644 = 0;
	var uLocal_5645 = 0;
	var uLocal_5646 = 0;
	var uLocal_5647 = 0;
	var uLocal_5648 = 0;
	var uLocal_5649 = 0;
	var uLocal_5650 = 0;
	var uLocal_5651 = 0;
	var uLocal_5652 = 0;
	var uLocal_5653 = 0;
	var uLocal_5654 = 0;
	var uLocal_5655 = 0;
	var uLocal_5656 = 0;
	var uLocal_5657 = 0;
	var uLocal_5658 = 0;
	var uLocal_5659 = 0;
	var uLocal_5660 = 0;
	var uLocal_5661 = 0;
	var uLocal_5662 = 0;
	var uLocal_5663 = 0;
	var uLocal_5664 = 0;
	var uLocal_5665 = 1065353216;
	var uLocal_5666 = 0;
	var uLocal_5667 = 0;
	var uLocal_5668 = 0;
	var uLocal_5669 = 0;
	var uLocal_5670 = 0;
	var uLocal_5671 = 0;
	var uLocal_5672 = 0;
	var uLocal_5673 = 0;
	var uLocal_5674 = 0;
	var uLocal_5675 = 0;
	var uLocal_5676 = 0;
	var uLocal_5677 = 0;
	var uLocal_5678 = 0;
	var uLocal_5679 = 0;
	var uLocal_5680 = 0;
	var uLocal_5681 = 0;
	var uLocal_5682 = 0;
	var uLocal_5683 = 0;
	var uLocal_5684 = 0;
	var uLocal_5685 = 0;
	var uLocal_5686 = 0;
	var uLocal_5687 = 0;
	var uLocal_5688 = 0;
	var uLocal_5689 = 0;
	var uLocal_5690 = 0;
	var uLocal_5691 = 0;
	var uLocal_5692 = -1;
	var uLocal_5693 = 0;
	var uLocal_5694 = 0;
	var uLocal_5695 = 0;
	var uLocal_5696 = 0;
	var uLocal_5697 = 0;
	var uLocal_5698 = 0;
	var uLocal_5699 = 0;
	var uLocal_5700 = 0;
	var uLocal_5701 = 0;
	var uLocal_5702 = 0;
	var uLocal_5703 = 0;
	var uLocal_5704 = 0;
	var uLocal_5705 = 0;
	var uLocal_5706 = 0;
	var uLocal_5707 = 0;
	var uLocal_5708 = 0;
	var uLocal_5709 = 0;
	var uLocal_5710 = 0;
	var uLocal_5711 = 0;
	var uLocal_5712 = 0;
	var uLocal_5713 = 0;
	var uLocal_5714 = 0;
	var uLocal_5715 = 0;
	var uLocal_5716 = 0;
	var uLocal_5717 = 0;
	var uLocal_5718 = 0;
	var uLocal_5719 = 0;
	var uLocal_5720 = 0;
	var uLocal_5721 = 0;
	var uLocal_5722 = 1065353216;
	var uLocal_5723 = 0;
	var uLocal_5724 = 0;
	var uLocal_5725 = 0;
	var uLocal_5726 = 0;
	var uLocal_5727 = 0;
	var uLocal_5728 = 0;
	var uLocal_5729 = 0;
	var uLocal_5730 = 0;
	var uLocal_5731 = 0;
	var uLocal_5732 = 0;
	var uLocal_5733 = 0;
	var uLocal_5734 = 0;
	var uLocal_5735 = 0;
	var uLocal_5736 = 0;
	var uLocal_5737 = 0;
	var uLocal_5738 = 0;
	var uLocal_5739 = 0;
	var uLocal_5740 = 0;
	var uLocal_5741 = 0;
	var uLocal_5742 = 0;
	var uLocal_5743 = 0;
	var uLocal_5744 = 0;
	var uLocal_5745 = 0;
	var uLocal_5746 = 0;
	var uLocal_5747 = 0;
	var uLocal_5748 = 0;
	var uLocal_5749 = -1;
	var uLocal_5750 = 0;
	var uLocal_5751 = 0;
	var uLocal_5752 = 0;
	var uLocal_5753 = 0;
	var uLocal_5754 = 0;
	var uLocal_5755 = 0;
	var uLocal_5756 = 0;
	var uLocal_5757 = 0;
	var uLocal_5758 = 0;
	var uLocal_5759 = 0;
	var uLocal_5760 = 0;
	var uLocal_5761 = 0;
	var uLocal_5762 = 0;
	var uLocal_5763 = 0;
	var uLocal_5764 = 0;
	var uLocal_5765 = 0;
	var uLocal_5766 = 0;
	var uLocal_5767 = 0;
	var uLocal_5768 = 0;
	var uLocal_5769 = 0;
	var uLocal_5770 = 0;
	var uLocal_5771 = 0;
	var uLocal_5772 = 0;
	var uLocal_5773 = 0;
	var uLocal_5774 = 0;
	var uLocal_5775 = 0;
	var uLocal_5776 = 0;
	var uLocal_5777 = 0;
	var uLocal_5778 = 0;
	var uLocal_5779 = 1065353216;
	var uLocal_5780 = 0;
	var uLocal_5781 = 0;
	var uLocal_5782 = 0;
	var uLocal_5783 = 0;
	var uLocal_5784 = 0;
	var uLocal_5785 = 0;
	var uLocal_5786 = 0;
	var uLocal_5787 = 0;
	var uLocal_5788 = 0;
	var uLocal_5789 = 0;
	var uLocal_5790 = 0;
	var uLocal_5791 = 0;
	var uLocal_5792 = 0;
	var uLocal_5793 = 0;
	var uLocal_5794 = 0;
	var uLocal_5795 = 0;
	var uLocal_5796 = 0;
	var uLocal_5797 = 0;
	var uLocal_5798 = 0;
	var uLocal_5799 = 0;
	var uLocal_5800 = 0;
	var uLocal_5801 = 0;
	var uLocal_5802 = 0;
	var uLocal_5803 = 0;
	var uLocal_5804 = 0;
	var uLocal_5805 = 0;
	var uLocal_5806 = -1;
	var uLocal_5807 = 0;
	var uLocal_5808 = 0;
	var uLocal_5809 = 0;
	var uLocal_5810 = 0;
	var uLocal_5811 = 0;
	var uLocal_5812 = 0;
	var uLocal_5813 = 0;
	var uLocal_5814 = 0;
	var uLocal_5815 = 0;
	var uLocal_5816 = 0;
	var uLocal_5817 = 0;
	var uLocal_5818 = 0;
	var uLocal_5819 = 0;
	var uLocal_5820 = 0;
	var uLocal_5821 = 0;
	var uLocal_5822 = 0;
	var uLocal_5823 = 0;
	var uLocal_5824 = 0;
	var uLocal_5825 = 0;
	var uLocal_5826 = 0;
	var uLocal_5827 = 0;
	var uLocal_5828 = 0;
	var uLocal_5829 = 0;
	var uLocal_5830 = 0;
	var uLocal_5831 = 0;
	var uLocal_5832 = 0;
	var uLocal_5833 = 0;
	var uLocal_5834 = 0;
	var uLocal_5835 = 0;
	var uLocal_5836 = 1065353216;
	var uLocal_5837 = 0;
	var uLocal_5838 = 0;
	var uLocal_5839 = 0;
	var uLocal_5840 = 0;
	var uLocal_5841 = 0;
	var uLocal_5842 = 0;
	var uLocal_5843 = 0;
	var uLocal_5844 = 0;
	var uLocal_5845 = 0;
	var uLocal_5846 = 0;
	var uLocal_5847 = 0;
	var uLocal_5848 = 0;
	var uLocal_5849 = 0;
	var uLocal_5850 = 0;
	var uLocal_5851 = 0;
	var uLocal_5852 = 0;
	var uLocal_5853 = 0;
	var uLocal_5854 = 0;
	var uLocal_5855 = 0;
	var uLocal_5856 = 0;
	var uLocal_5857 = 0;
	var uLocal_5858 = 0;
	var uLocal_5859 = 0;
	var uLocal_5860 = 0;
	var uLocal_5861 = 0;
	var uLocal_5862 = 0;
	var uLocal_5863 = -1;
	var uLocal_5864 = 0;
	var uLocal_5865 = 0;
	var uLocal_5866 = 0;
	var uLocal_5867 = 0;
	var uLocal_5868 = 0;
	var uLocal_5869 = 0;
	var uLocal_5870 = 0;
	var uLocal_5871 = 0;
	var uLocal_5872 = 0;
	var uLocal_5873 = 0;
	var uLocal_5874 = 0;
	var uLocal_5875 = 0;
	var uLocal_5876 = 0;
	var uLocal_5877 = 0;
	var uLocal_5878 = 0;
	var uLocal_5879 = 0;
	var uLocal_5880 = 0;
	var uLocal_5881 = 0;
	var uLocal_5882 = 0;
	var uLocal_5883 = 0;
	var uLocal_5884 = 0;
	var uLocal_5885 = 0;
	var uLocal_5886 = 0;
	var uLocal_5887 = 0;
	var uLocal_5888 = 0;
	var uLocal_5889 = 0;
	var uLocal_5890 = 0;
	var uLocal_5891 = 0;
	var uLocal_5892 = 0;
	var uLocal_5893 = 1065353216;
	var uLocal_5894 = 0;
	var uLocal_5895 = 0;
	var uLocal_5896 = 0;
	var uLocal_5897 = 0;
	var uLocal_5898 = 0;
	var uLocal_5899 = 0;
	var uLocal_5900 = 0;
	var uLocal_5901 = 0;
	var uLocal_5902 = 0;
	var uLocal_5903 = 0;
	var uLocal_5904 = 0;
	var uLocal_5905 = 0;
	var uLocal_5906 = 0;
	var uLocal_5907 = 0;
	var uLocal_5908 = 0;
	var uLocal_5909 = 0;
	var uLocal_5910 = 0;
	var uLocal_5911 = 0;
	var uLocal_5912 = 0;
	var uLocal_5913 = 0;
	var uLocal_5914 = 0;
	var uLocal_5915 = 0;
	var uLocal_5916 = 0;
	var uLocal_5917 = 0;
	var uLocal_5918 = 0;
	var uLocal_5919 = 0;
	var uLocal_5920 = -1;
	var uLocal_5921 = 0;
	var uLocal_5922 = 0;
	var uLocal_5923 = 0;
	var uLocal_5924 = 0;
	var uLocal_5925 = 0;
	var uLocal_5926 = 0;
	var uLocal_5927 = 0;
	var uLocal_5928 = 0;
	var uLocal_5929 = 0;
	var uLocal_5930 = 0;
	var uLocal_5931 = 0;
	var uLocal_5932 = 0;
	var uLocal_5933 = 0;
	var uLocal_5934 = 0;
	var uLocal_5935 = 0;
	var uLocal_5936 = 0;
	var uLocal_5937 = 0;
	var uLocal_5938 = 0;
	var uLocal_5939 = 0;
	var uLocal_5940 = 0;
	var uLocal_5941 = 0;
	var uLocal_5942 = 0;
	var uLocal_5943 = 0;
	var uLocal_5944 = 0;
	var uLocal_5945 = 0;
	var uLocal_5946 = 0;
	var uLocal_5947 = 0;
	var uLocal_5948 = 0;
	var uLocal_5949 = 0;
	var uLocal_5950 = 1065353216;
	var uLocal_5951 = 0;
	var uLocal_5952 = 0;
	var uLocal_5953 = 0;
	var uLocal_5954 = 0;
	var uLocal_5955 = 0;
	var uLocal_5956 = 0;
	var uLocal_5957 = 0;
	var uLocal_5958 = 0;
	var uLocal_5959 = 0;
	var uLocal_5960 = 0;
	var uLocal_5961 = 0;
	var uLocal_5962 = 0;
	var uLocal_5963 = 0;
	var uLocal_5964 = 0;
	var uLocal_5965 = 0;
	var uLocal_5966 = 0;
	var uLocal_5967 = 0;
	var uLocal_5968 = 0;
	var uLocal_5969 = 0;
	var uLocal_5970 = 0;
	var uLocal_5971 = 0;
	var uLocal_5972 = 0;
	var uLocal_5973 = 0;
	var uLocal_5974 = 0;
	var uLocal_5975 = 0;
	var uLocal_5976 = 0;
	var uLocal_5977 = -1;
	var uLocal_5978 = 0;
	var uLocal_5979 = 0;
	var uLocal_5980 = 0;
	var uLocal_5981 = 0;
	var uLocal_5982 = 0;
	var uLocal_5983 = 0;
	var uLocal_5984 = 0;
	var uLocal_5985 = 0;
	var uLocal_5986 = 0;
	var uLocal_5987 = 0;
	var uLocal_5988 = 0;
	var uLocal_5989 = 0;
	var uLocal_5990 = 0;
	var uLocal_5991 = 0;
	var uLocal_5992 = 0;
	var uLocal_5993 = 0;
	var uLocal_5994 = 0;
	var uLocal_5995 = 0;
	var uLocal_5996 = 0;
	var uLocal_5997 = 0;
	var uLocal_5998 = 0;
	var uLocal_5999 = 0;
	var uLocal_6000 = 0;
	var uLocal_6001 = 0;
	var uLocal_6002 = 0;
	var uLocal_6003 = 0;
	var uLocal_6004 = 0;
	var uLocal_6005 = 0;
	var uLocal_6006 = 0;
	var uLocal_6007 = 1065353216;
	var uLocal_6008 = 0;
	var uLocal_6009 = 0;
	var uLocal_6010 = 0;
	var uLocal_6011 = 0;
	var uLocal_6012 = 0;
	var uLocal_6013 = 0;
	var uLocal_6014 = 0;
	var uLocal_6015 = 0;
	var uLocal_6016 = 0;
	var uLocal_6017 = 0;
	var uLocal_6018 = 0;
	var uLocal_6019 = 0;
	var uLocal_6020 = 0;
	var uLocal_6021 = 0;
	var uLocal_6022 = 0;
	var uLocal_6023 = 0;
	var uLocal_6024 = 0;
	var uLocal_6025 = 0;
	var uLocal_6026 = 0;
	var uLocal_6027 = 0;
	var uLocal_6028 = 0;
	var uLocal_6029 = 0;
	var uLocal_6030 = 0;
	var uLocal_6031 = 16;
	var uLocal_6032 = 0;
	var uLocal_6033 = -1082130432;
	var uLocal_6034 = 0;
	var uLocal_6035 = -1082130432;
	var uLocal_6036 = 0;
	var uLocal_6037 = -1082130432;
	var uLocal_6038 = 0;
	var uLocal_6039 = -1082130432;
	var uLocal_6040 = 0;
	var uLocal_6041 = -1082130432;
	var uLocal_6042 = 0;
	var uLocal_6043 = -1082130432;
	var uLocal_6044 = 0;
	var uLocal_6045 = -1082130432;
	var uLocal_6046 = 0;
	var uLocal_6047 = -1082130432;
	var uLocal_6048 = 0;
	var uLocal_6049 = -1082130432;
	var uLocal_6050 = 0;
	var uLocal_6051 = -1082130432;
	var uLocal_6052 = 0;
	var uLocal_6053 = -1082130432;
	var uLocal_6054 = 0;
	var uLocal_6055 = -1082130432;
	var uLocal_6056 = 0;
	var uLocal_6057 = -1082130432;
	var uLocal_6058 = 0;
	var uLocal_6059 = -1082130432;
	var uLocal_6060 = 0;
	var uLocal_6061 = -1082130432;
	var uLocal_6062 = 0;
	var uLocal_6063 = -1082130432;
	var uLocal_6064 = 16;
	var uLocal_6065 = 0;
	var uLocal_6066 = -1082130432;
	var uLocal_6067 = 0;
	var uLocal_6068 = -1082130432;
	var uLocal_6069 = 0;
	var uLocal_6070 = -1082130432;
	var uLocal_6071 = 0;
	var uLocal_6072 = -1082130432;
	var uLocal_6073 = 0;
	var uLocal_6074 = -1082130432;
	var uLocal_6075 = 0;
	var uLocal_6076 = -1082130432;
	var uLocal_6077 = 0;
	var uLocal_6078 = -1082130432;
	var uLocal_6079 = 0;
	var uLocal_6080 = -1082130432;
	var uLocal_6081 = 0;
	var uLocal_6082 = -1082130432;
	var uLocal_6083 = 0;
	var uLocal_6084 = -1082130432;
	var uLocal_6085 = 0;
	var uLocal_6086 = -1082130432;
	var uLocal_6087 = 0;
	var uLocal_6088 = -1082130432;
	var uLocal_6089 = 0;
	var uLocal_6090 = -1082130432;
	var uLocal_6091 = 0;
	var uLocal_6092 = -1082130432;
	var uLocal_6093 = 0;
	var uLocal_6094 = -1082130432;
	var uLocal_6095 = 0;
	var uLocal_6096 = -1082130432;
	var uLocal_6097 = 0;
	var uLocal_6098 = 0;
	var uLocal_6099 = 0;
	var uLocal_6100 = 0;
	var uLocal_6101 = 0;
	var uLocal_6102 = 0;
	var uLocal_6103 = 0;
	var uLocal_6104 = 0;
	var uLocal_6105 = 0;
	var uLocal_6106 = 0;
	var uLocal_6107 = 0;
	var uLocal_6108 = 0;
	var uLocal_6109 = 0;
	var uLocal_6110 = 0;
	var uLocal_6111 = 0;
	var uLocal_6112 = 0;
	var uLocal_6113 = -1082130432;
	var uLocal_6114 = -1082130432;
	var uLocal_6115 = 1;
	var uLocal_6116 = 1;
	var uLocal_6117 = 1;
	var uLocal_6118 = -1;
	var uLocal_6119 = -1;
	var uLocal_6120 = -1;
	var uLocal_6121 = 0;
	var uLocal_6122 = 0;
	var uLocal_6123 = 0;
	var uLocal_6124 = 0;
	var uLocal_6125 = 2;
	var uLocal_6126 = 0;
	var uLocal_6127 = 0;
	var uLocal_6128 = 2;
	var uLocal_6129 = 0;
	var uLocal_6130 = 0;
	var uLocal_6131 = 20;
	var uLocal_6132 = 0;
	var uLocal_6133 = 0;
	var uLocal_6134 = 0;
	var uLocal_6135 = -1;
	var uLocal_6136 = 0;
	var uLocal_6137 = 0;
	var uLocal_6138 = 0;
	var uLocal_6139 = 0;
	var uLocal_6140 = 0;
	var uLocal_6141 = 0;
	var uLocal_6142 = 0;
	var uLocal_6143 = 0;
	var uLocal_6144 = 0;
	var uLocal_6145 = 0;
	var uLocal_6146 = 0;
	var uLocal_6147 = 0;
	var uLocal_6148 = 0;
	var uLocal_6149 = 0;
	var uLocal_6150 = 0;
	var uLocal_6151 = 0;
	var uLocal_6152 = 0;
	var uLocal_6153 = 0;
	var uLocal_6154 = 0;
	var uLocal_6155 = 0;
	var uLocal_6156 = 0;
	var uLocal_6157 = 0;
	var uLocal_6158 = 0;
	var uLocal_6159 = 0;
	var uLocal_6160 = 0;
	var uLocal_6161 = 0;
	var uLocal_6162 = 0;
	var uLocal_6163 = 0;
	var uLocal_6164 = 0;
	var uLocal_6165 = 1065353216;
	var uLocal_6166 = 0;
	var uLocal_6167 = 0;
	var uLocal_6168 = 0;
	var uLocal_6169 = 0;
	var uLocal_6170 = 0;
	var uLocal_6171 = 0;
	var uLocal_6172 = 0;
	var uLocal_6173 = 0;
	var uLocal_6174 = 0;
	var uLocal_6175 = 0;
	var uLocal_6176 = 0;
	var uLocal_6177 = 0;
	var uLocal_6178 = 0;
	var uLocal_6179 = 0;
	var uLocal_6180 = 0;
	var uLocal_6181 = 0;
	var uLocal_6182 = 0;
	var uLocal_6183 = 0;
	var uLocal_6184 = 0;
	var uLocal_6185 = 0;
	var uLocal_6186 = 0;
	var uLocal_6187 = 0;
	var uLocal_6188 = 0;
	var uLocal_6189 = 0;
	var uLocal_6190 = 0;
	var uLocal_6191 = 0;
	var uLocal_6192 = -1;
	var uLocal_6193 = 0;
	var uLocal_6194 = 0;
	var uLocal_6195 = 0;
	var uLocal_6196 = 0;
	var uLocal_6197 = 0;
	var uLocal_6198 = 0;
	var uLocal_6199 = 0;
	var uLocal_6200 = 0;
	var uLocal_6201 = 0;
	var uLocal_6202 = 0;
	var uLocal_6203 = 0;
	var uLocal_6204 = 0;
	var uLocal_6205 = 0;
	var uLocal_6206 = 0;
	var uLocal_6207 = 0;
	var uLocal_6208 = 0;
	var uLocal_6209 = 0;
	var uLocal_6210 = 0;
	var uLocal_6211 = 0;
	var uLocal_6212 = 0;
	var uLocal_6213 = 0;
	var uLocal_6214 = 0;
	var uLocal_6215 = 0;
	var uLocal_6216 = 0;
	var uLocal_6217 = 0;
	var uLocal_6218 = 0;
	var uLocal_6219 = 0;
	var uLocal_6220 = 0;
	var uLocal_6221 = 0;
	var uLocal_6222 = 1065353216;
	var uLocal_6223 = 0;
	var uLocal_6224 = 0;
	var uLocal_6225 = 0;
	var uLocal_6226 = 0;
	var uLocal_6227 = 0;
	var uLocal_6228 = 0;
	var uLocal_6229 = 0;
	var uLocal_6230 = 0;
	var uLocal_6231 = 0;
	var uLocal_6232 = 0;
	var uLocal_6233 = 0;
	var uLocal_6234 = 0;
	var uLocal_6235 = 0;
	var uLocal_6236 = 0;
	var uLocal_6237 = 0;
	var uLocal_6238 = 0;
	var uLocal_6239 = 0;
	var uLocal_6240 = 0;
	var uLocal_6241 = 0;
	var uLocal_6242 = 0;
	var uLocal_6243 = 0;
	var uLocal_6244 = 0;
	var uLocal_6245 = 0;
	var uLocal_6246 = 0;
	var uLocal_6247 = 0;
	var uLocal_6248 = 0;
	var uLocal_6249 = -1;
	var uLocal_6250 = 0;
	var uLocal_6251 = 0;
	var uLocal_6252 = 0;
	var uLocal_6253 = 0;
	var uLocal_6254 = 0;
	var uLocal_6255 = 0;
	var uLocal_6256 = 0;
	var uLocal_6257 = 0;
	var uLocal_6258 = 0;
	var uLocal_6259 = 0;
	var uLocal_6260 = 0;
	var uLocal_6261 = 0;
	var uLocal_6262 = 0;
	var uLocal_6263 = 0;
	var uLocal_6264 = 0;
	var uLocal_6265 = 0;
	var uLocal_6266 = 0;
	var uLocal_6267 = 0;
	var uLocal_6268 = 0;
	var uLocal_6269 = 0;
	var uLocal_6270 = 0;
	var uLocal_6271 = 0;
	var uLocal_6272 = 0;
	var uLocal_6273 = 0;
	var uLocal_6274 = 0;
	var uLocal_6275 = 0;
	var uLocal_6276 = 0;
	var uLocal_6277 = 0;
	var uLocal_6278 = 0;
	var uLocal_6279 = 1065353216;
	var uLocal_6280 = 0;
	var uLocal_6281 = 0;
	var uLocal_6282 = 0;
	var uLocal_6283 = 0;
	var uLocal_6284 = 0;
	var uLocal_6285 = 0;
	var uLocal_6286 = 0;
	var uLocal_6287 = 0;
	var uLocal_6288 = 0;
	var uLocal_6289 = 0;
	var uLocal_6290 = 0;
	var uLocal_6291 = 0;
	var uLocal_6292 = 0;
	var uLocal_6293 = 0;
	var uLocal_6294 = 0;
	var uLocal_6295 = 0;
	var uLocal_6296 = 0;
	var uLocal_6297 = 0;
	var uLocal_6298 = 0;
	var uLocal_6299 = 0;
	var uLocal_6300 = 0;
	var uLocal_6301 = 0;
	var uLocal_6302 = 0;
	var uLocal_6303 = 0;
	var uLocal_6304 = 0;
	var uLocal_6305 = 0;
	var uLocal_6306 = -1;
	var uLocal_6307 = 0;
	var uLocal_6308 = 0;
	var uLocal_6309 = 0;
	var uLocal_6310 = 0;
	var uLocal_6311 = 0;
	var uLocal_6312 = 0;
	var uLocal_6313 = 0;
	var uLocal_6314 = 0;
	var uLocal_6315 = 0;
	var uLocal_6316 = 0;
	var uLocal_6317 = 0;
	var uLocal_6318 = 0;
	var uLocal_6319 = 0;
	var uLocal_6320 = 0;
	var uLocal_6321 = 0;
	var uLocal_6322 = 0;
	var uLocal_6323 = 0;
	var uLocal_6324 = 0;
	var uLocal_6325 = 0;
	var uLocal_6326 = 0;
	var uLocal_6327 = 0;
	var uLocal_6328 = 0;
	var uLocal_6329 = 0;
	var uLocal_6330 = 0;
	var uLocal_6331 = 0;
	var uLocal_6332 = 0;
	var uLocal_6333 = 0;
	var uLocal_6334 = 0;
	var uLocal_6335 = 0;
	var uLocal_6336 = 1065353216;
	var uLocal_6337 = 0;
	var uLocal_6338 = 0;
	var uLocal_6339 = 0;
	var uLocal_6340 = 0;
	var uLocal_6341 = 0;
	var uLocal_6342 = 0;
	var uLocal_6343 = 0;
	var uLocal_6344 = 0;
	var uLocal_6345 = 0;
	var uLocal_6346 = 0;
	var uLocal_6347 = 0;
	var uLocal_6348 = 0;
	var uLocal_6349 = 0;
	var uLocal_6350 = 0;
	var uLocal_6351 = 0;
	var uLocal_6352 = 0;
	var uLocal_6353 = 0;
	var uLocal_6354 = 0;
	var uLocal_6355 = 0;
	var uLocal_6356 = 0;
	var uLocal_6357 = 0;
	var uLocal_6358 = 0;
	var uLocal_6359 = 0;
	var uLocal_6360 = 0;
	var uLocal_6361 = 0;
	var uLocal_6362 = 0;
	var uLocal_6363 = -1;
	var uLocal_6364 = 0;
	var uLocal_6365 = 0;
	var uLocal_6366 = 0;
	var uLocal_6367 = 0;
	var uLocal_6368 = 0;
	var uLocal_6369 = 0;
	var uLocal_6370 = 0;
	var uLocal_6371 = 0;
	var uLocal_6372 = 0;
	var uLocal_6373 = 0;
	var uLocal_6374 = 0;
	var uLocal_6375 = 0;
	var uLocal_6376 = 0;
	var uLocal_6377 = 0;
	var uLocal_6378 = 0;
	var uLocal_6379 = 0;
	var uLocal_6380 = 0;
	var uLocal_6381 = 0;
	var uLocal_6382 = 0;
	var uLocal_6383 = 0;
	var uLocal_6384 = 0;
	var uLocal_6385 = 0;
	var uLocal_6386 = 0;
	var uLocal_6387 = 0;
	var uLocal_6388 = 0;
	var uLocal_6389 = 0;
	var uLocal_6390 = 0;
	var uLocal_6391 = 0;
	var uLocal_6392 = 0;
	var uLocal_6393 = 1065353216;
	var uLocal_6394 = 0;
	var uLocal_6395 = 0;
	var uLocal_6396 = 0;
	var uLocal_6397 = 0;
	var uLocal_6398 = 0;
	var uLocal_6399 = 0;
	var uLocal_6400 = 0;
	var uLocal_6401 = 0;
	var uLocal_6402 = 0;
	var uLocal_6403 = 0;
	var uLocal_6404 = 0;
	var uLocal_6405 = 0;
	var uLocal_6406 = 0;
	var uLocal_6407 = 0;
	var uLocal_6408 = 0;
	var uLocal_6409 = 0;
	var uLocal_6410 = 0;
	var uLocal_6411 = 0;
	var uLocal_6412 = 0;
	var uLocal_6413 = 0;
	var uLocal_6414 = 0;
	var uLocal_6415 = 0;
	var uLocal_6416 = 0;
	var uLocal_6417 = 0;
	var uLocal_6418 = 0;
	var uLocal_6419 = 0;
	var uLocal_6420 = -1;
	var uLocal_6421 = 0;
	var uLocal_6422 = 0;
	var uLocal_6423 = 0;
	var uLocal_6424 = 0;
	var uLocal_6425 = 0;
	var uLocal_6426 = 0;
	var uLocal_6427 = 0;
	var uLocal_6428 = 0;
	var uLocal_6429 = 0;
	var uLocal_6430 = 0;
	var uLocal_6431 = 0;
	var uLocal_6432 = 0;
	var uLocal_6433 = 0;
	var uLocal_6434 = 0;
	var uLocal_6435 = 0;
	var uLocal_6436 = 0;
	var uLocal_6437 = 0;
	var uLocal_6438 = 0;
	var uLocal_6439 = 0;
	var uLocal_6440 = 0;
	var uLocal_6441 = 0;
	var uLocal_6442 = 0;
	var uLocal_6443 = 0;
	var uLocal_6444 = 0;
	var uLocal_6445 = 0;
	var uLocal_6446 = 0;
	var uLocal_6447 = 0;
	var uLocal_6448 = 0;
	var uLocal_6449 = 0;
	var uLocal_6450 = 1065353216;
	var uLocal_6451 = 0;
	var uLocal_6452 = 0;
	var uLocal_6453 = 0;
	var uLocal_6454 = 0;
	var uLocal_6455 = 0;
	var uLocal_6456 = 0;
	var uLocal_6457 = 0;
	var uLocal_6458 = 0;
	var uLocal_6459 = 0;
	var uLocal_6460 = 0;
	var uLocal_6461 = 0;
	var uLocal_6462 = 0;
	var uLocal_6463 = 0;
	var uLocal_6464 = 0;
	var uLocal_6465 = 0;
	var uLocal_6466 = 0;
	var uLocal_6467 = 0;
	var uLocal_6468 = 0;
	var uLocal_6469 = 0;
	var uLocal_6470 = 0;
	var uLocal_6471 = 0;
	var uLocal_6472 = 0;
	var uLocal_6473 = 0;
	var uLocal_6474 = 0;
	var uLocal_6475 = 0;
	var uLocal_6476 = 0;
	var uLocal_6477 = -1;
	var uLocal_6478 = 0;
	var uLocal_6479 = 0;
	var uLocal_6480 = 0;
	var uLocal_6481 = 0;
	var uLocal_6482 = 0;
	var uLocal_6483 = 0;
	var uLocal_6484 = 0;
	var uLocal_6485 = 0;
	var uLocal_6486 = 0;
	var uLocal_6487 = 0;
	var uLocal_6488 = 0;
	var uLocal_6489 = 0;
	var uLocal_6490 = 0;
	var uLocal_6491 = 0;
	var uLocal_6492 = 0;
	var uLocal_6493 = 0;
	var uLocal_6494 = 0;
	var uLocal_6495 = 0;
	var uLocal_6496 = 0;
	var uLocal_6497 = 0;
	var uLocal_6498 = 0;
	var uLocal_6499 = 0;
	var uLocal_6500 = 0;
	var uLocal_6501 = 0;
	var uLocal_6502 = 0;
	var uLocal_6503 = 0;
	var uLocal_6504 = 0;
	var uLocal_6505 = 0;
	var uLocal_6506 = 0;
	var uLocal_6507 = 1065353216;
	var uLocal_6508 = 0;
	var uLocal_6509 = 0;
	var uLocal_6510 = 0;
	var uLocal_6511 = 0;
	var uLocal_6512 = 0;
	var uLocal_6513 = 0;
	var uLocal_6514 = 0;
	var uLocal_6515 = 0;
	var uLocal_6516 = 0;
	var uLocal_6517 = 0;
	var uLocal_6518 = 0;
	var uLocal_6519 = 0;
	var uLocal_6520 = 0;
	var uLocal_6521 = 0;
	var uLocal_6522 = 0;
	var uLocal_6523 = 0;
	var uLocal_6524 = 0;
	var uLocal_6525 = 0;
	var uLocal_6526 = 0;
	var uLocal_6527 = 0;
	var uLocal_6528 = 0;
	var uLocal_6529 = 0;
	var uLocal_6530 = 0;
	var uLocal_6531 = 0;
	var uLocal_6532 = 0;
	var uLocal_6533 = 0;
	var uLocal_6534 = -1;
	var uLocal_6535 = 0;
	var uLocal_6536 = 0;
	var uLocal_6537 = 0;
	var uLocal_6538 = 0;
	var uLocal_6539 = 0;
	var uLocal_6540 = 0;
	var uLocal_6541 = 0;
	var uLocal_6542 = 0;
	var uLocal_6543 = 0;
	var uLocal_6544 = 0;
	var uLocal_6545 = 0;
	var uLocal_6546 = 0;
	var uLocal_6547 = 0;
	var uLocal_6548 = 0;
	var uLocal_6549 = 0;
	var uLocal_6550 = 0;
	var uLocal_6551 = 0;
	var uLocal_6552 = 0;
	var uLocal_6553 = 0;
	var uLocal_6554 = 0;
	var uLocal_6555 = 0;
	var uLocal_6556 = 0;
	var uLocal_6557 = 0;
	var uLocal_6558 = 0;
	var uLocal_6559 = 0;
	var uLocal_6560 = 0;
	var uLocal_6561 = 0;
	var uLocal_6562 = 0;
	var uLocal_6563 = 0;
	var uLocal_6564 = 1065353216;
	var uLocal_6565 = 0;
	var uLocal_6566 = 0;
	var uLocal_6567 = 0;
	var uLocal_6568 = 0;
	var uLocal_6569 = 0;
	var uLocal_6570 = 0;
	var uLocal_6571 = 0;
	var uLocal_6572 = 0;
	var uLocal_6573 = 0;
	var uLocal_6574 = 0;
	var uLocal_6575 = 0;
	var uLocal_6576 = 0;
	var uLocal_6577 = 0;
	var uLocal_6578 = 0;
	var uLocal_6579 = 0;
	var uLocal_6580 = 0;
	var uLocal_6581 = 0;
	var uLocal_6582 = 0;
	var uLocal_6583 = 0;
	var uLocal_6584 = 0;
	var uLocal_6585 = 0;
	var uLocal_6586 = 0;
	var uLocal_6587 = 0;
	var uLocal_6588 = 0;
	var uLocal_6589 = 0;
	var uLocal_6590 = 0;
	var uLocal_6591 = -1;
	var uLocal_6592 = 0;
	var uLocal_6593 = 0;
	var uLocal_6594 = 0;
	var uLocal_6595 = 0;
	var uLocal_6596 = 0;
	var uLocal_6597 = 0;
	var uLocal_6598 = 0;
	var uLocal_6599 = 0;
	var uLocal_6600 = 0;
	var uLocal_6601 = 0;
	var uLocal_6602 = 0;
	var uLocal_6603 = 0;
	var uLocal_6604 = 0;
	var uLocal_6605 = 0;
	var uLocal_6606 = 0;
	var uLocal_6607 = 0;
	var uLocal_6608 = 0;
	var uLocal_6609 = 0;
	var uLocal_6610 = 0;
	var uLocal_6611 = 0;
	var uLocal_6612 = 0;
	var uLocal_6613 = 0;
	var uLocal_6614 = 0;
	var uLocal_6615 = 0;
	var uLocal_6616 = 0;
	var uLocal_6617 = 0;
	var uLocal_6618 = 0;
	var uLocal_6619 = 0;
	var uLocal_6620 = 0;
	var uLocal_6621 = 1065353216;
	var uLocal_6622 = 0;
	var uLocal_6623 = 0;
	var uLocal_6624 = 0;
	var uLocal_6625 = 0;
	var uLocal_6626 = 0;
	var uLocal_6627 = 0;
	var uLocal_6628 = 0;
	var uLocal_6629 = 0;
	var uLocal_6630 = 0;
	var uLocal_6631 = 0;
	var uLocal_6632 = 0;
	var uLocal_6633 = 0;
	var uLocal_6634 = 0;
	var uLocal_6635 = 0;
	var uLocal_6636 = 0;
	var uLocal_6637 = 0;
	var uLocal_6638 = 0;
	var uLocal_6639 = 0;
	var uLocal_6640 = 0;
	var uLocal_6641 = 0;
	var uLocal_6642 = 0;
	var uLocal_6643 = 0;
	var uLocal_6644 = 0;
	var uLocal_6645 = 0;
	var uLocal_6646 = 0;
	var uLocal_6647 = 0;
	var uLocal_6648 = -1;
	var uLocal_6649 = 0;
	var uLocal_6650 = 0;
	var uLocal_6651 = 0;
	var uLocal_6652 = 0;
	var uLocal_6653 = 0;
	var uLocal_6654 = 0;
	var uLocal_6655 = 0;
	var uLocal_6656 = 0;
	var uLocal_6657 = 0;
	var uLocal_6658 = 0;
	var uLocal_6659 = 0;
	var uLocal_6660 = 0;
	var uLocal_6661 = 0;
	var uLocal_6662 = 0;
	var uLocal_6663 = 0;
	var uLocal_6664 = 0;
	var uLocal_6665 = 0;
	var uLocal_6666 = 0;
	var uLocal_6667 = 0;
	var uLocal_6668 = 0;
	var uLocal_6669 = 0;
	var uLocal_6670 = 0;
	var uLocal_6671 = 0;
	var uLocal_6672 = 0;
	var uLocal_6673 = 0;
	var uLocal_6674 = 0;
	var uLocal_6675 = 0;
	var uLocal_6676 = 0;
	var uLocal_6677 = 0;
	var uLocal_6678 = 1065353216;
	var uLocal_6679 = 0;
	var uLocal_6680 = 0;
	var uLocal_6681 = 0;
	var uLocal_6682 = 0;
	var uLocal_6683 = 0;
	var uLocal_6684 = 0;
	var uLocal_6685 = 0;
	var uLocal_6686 = 0;
	var uLocal_6687 = 0;
	var uLocal_6688 = 0;
	var uLocal_6689 = 0;
	var uLocal_6690 = 0;
	var uLocal_6691 = 0;
	var uLocal_6692 = 0;
	var uLocal_6693 = 0;
	var uLocal_6694 = 0;
	var uLocal_6695 = 0;
	var uLocal_6696 = 0;
	var uLocal_6697 = 0;
	var uLocal_6698 = 0;
	var uLocal_6699 = 0;
	var uLocal_6700 = 0;
	var uLocal_6701 = 0;
	var uLocal_6702 = 0;
	var uLocal_6703 = 0;
	var uLocal_6704 = 0;
	var uLocal_6705 = -1;
	var uLocal_6706 = 0;
	var uLocal_6707 = 0;
	var uLocal_6708 = 0;
	var uLocal_6709 = 0;
	var uLocal_6710 = 0;
	var uLocal_6711 = 0;
	var uLocal_6712 = 0;
	var uLocal_6713 = 0;
	var uLocal_6714 = 0;
	var uLocal_6715 = 0;
	var uLocal_6716 = 0;
	var uLocal_6717 = 0;
	var uLocal_6718 = 0;
	var uLocal_6719 = 0;
	var uLocal_6720 = 0;
	var uLocal_6721 = 0;
	var uLocal_6722 = 0;
	var uLocal_6723 = 0;
	var uLocal_6724 = 0;
	var uLocal_6725 = 0;
	var uLocal_6726 = 0;
	var uLocal_6727 = 0;
	var uLocal_6728 = 0;
	var uLocal_6729 = 0;
	var uLocal_6730 = 0;
	var uLocal_6731 = 0;
	var uLocal_6732 = 0;
	var uLocal_6733 = 0;
	var uLocal_6734 = 0;
	var uLocal_6735 = 1065353216;
	var uLocal_6736 = 0;
	var uLocal_6737 = 0;
	var uLocal_6738 = 0;
	var uLocal_6739 = 0;
	var uLocal_6740 = 0;
	var uLocal_6741 = 0;
	var uLocal_6742 = 0;
	var uLocal_6743 = 0;
	var uLocal_6744 = 0;
	var uLocal_6745 = 0;
	var uLocal_6746 = 0;
	var uLocal_6747 = 0;
	var uLocal_6748 = 0;
	var uLocal_6749 = 0;
	var uLocal_6750 = 0;
	var uLocal_6751 = 0;
	var uLocal_6752 = 0;
	var uLocal_6753 = 0;
	var uLocal_6754 = 0;
	var uLocal_6755 = 0;
	var uLocal_6756 = 0;
	var uLocal_6757 = 0;
	var uLocal_6758 = 0;
	var uLocal_6759 = 0;
	var uLocal_6760 = 0;
	var uLocal_6761 = 0;
	var uLocal_6762 = -1;
	var uLocal_6763 = 0;
	var uLocal_6764 = 0;
	var uLocal_6765 = 0;
	var uLocal_6766 = 0;
	var uLocal_6767 = 0;
	var uLocal_6768 = 0;
	var uLocal_6769 = 0;
	var uLocal_6770 = 0;
	var uLocal_6771 = 0;
	var uLocal_6772 = 0;
	var uLocal_6773 = 0;
	var uLocal_6774 = 0;
	var uLocal_6775 = 0;
	var uLocal_6776 = 0;
	var uLocal_6777 = 0;
	var uLocal_6778 = 0;
	var uLocal_6779 = 0;
	var uLocal_6780 = 0;
	var uLocal_6781 = 0;
	var uLocal_6782 = 0;
	var uLocal_6783 = 0;
	var uLocal_6784 = 0;
	var uLocal_6785 = 0;
	var uLocal_6786 = 0;
	var uLocal_6787 = 0;
	var uLocal_6788 = 0;
	var uLocal_6789 = 0;
	var uLocal_6790 = 0;
	var uLocal_6791 = 0;
	var uLocal_6792 = 1065353216;
	var uLocal_6793 = 0;
	var uLocal_6794 = 0;
	var uLocal_6795 = 0;
	var uLocal_6796 = 0;
	var uLocal_6797 = 0;
	var uLocal_6798 = 0;
	var uLocal_6799 = 0;
	var uLocal_6800 = 0;
	var uLocal_6801 = 0;
	var uLocal_6802 = 0;
	var uLocal_6803 = 0;
	var uLocal_6804 = 0;
	var uLocal_6805 = 0;
	var uLocal_6806 = 0;
	var uLocal_6807 = 0;
	var uLocal_6808 = 0;
	var uLocal_6809 = 0;
	var uLocal_6810 = 0;
	var uLocal_6811 = 0;
	var uLocal_6812 = 0;
	var uLocal_6813 = 0;
	var uLocal_6814 = 0;
	var uLocal_6815 = 0;
	var uLocal_6816 = 0;
	var uLocal_6817 = 0;
	var uLocal_6818 = 0;
	var uLocal_6819 = -1;
	var uLocal_6820 = 0;
	var uLocal_6821 = 0;
	var uLocal_6822 = 0;
	var uLocal_6823 = 0;
	var uLocal_6824 = 0;
	var uLocal_6825 = 0;
	var uLocal_6826 = 0;
	var uLocal_6827 = 0;
	var uLocal_6828 = 0;
	var uLocal_6829 = 0;
	var uLocal_6830 = 0;
	var uLocal_6831 = 0;
	var uLocal_6832 = 0;
	var uLocal_6833 = 0;
	var uLocal_6834 = 0;
	var uLocal_6835 = 0;
	var uLocal_6836 = 0;
	var uLocal_6837 = 0;
	var uLocal_6838 = 0;
	var uLocal_6839 = 0;
	var uLocal_6840 = 0;
	var uLocal_6841 = 0;
	var uLocal_6842 = 0;
	var uLocal_6843 = 0;
	var uLocal_6844 = 0;
	var uLocal_6845 = 0;
	var uLocal_6846 = 0;
	var uLocal_6847 = 0;
	var uLocal_6848 = 0;
	var uLocal_6849 = 1065353216;
	var uLocal_6850 = 0;
	var uLocal_6851 = 0;
	var uLocal_6852 = 0;
	var uLocal_6853 = 0;
	var uLocal_6854 = 0;
	var uLocal_6855 = 0;
	var uLocal_6856 = 0;
	var uLocal_6857 = 0;
	var uLocal_6858 = 0;
	var uLocal_6859 = 0;
	var uLocal_6860 = 0;
	var uLocal_6861 = 0;
	var uLocal_6862 = 0;
	var uLocal_6863 = 0;
	var uLocal_6864 = 0;
	var uLocal_6865 = 0;
	var uLocal_6866 = 0;
	var uLocal_6867 = 0;
	var uLocal_6868 = 0;
	var uLocal_6869 = 0;
	var uLocal_6870 = 0;
	var uLocal_6871 = 0;
	var uLocal_6872 = 0;
	var uLocal_6873 = 0;
	var uLocal_6874 = 0;
	var uLocal_6875 = 0;
	var uLocal_6876 = -1;
	var uLocal_6877 = 0;
	var uLocal_6878 = 0;
	var uLocal_6879 = 0;
	var uLocal_6880 = 0;
	var uLocal_6881 = 0;
	var uLocal_6882 = 0;
	var uLocal_6883 = 0;
	var uLocal_6884 = 0;
	var uLocal_6885 = 0;
	var uLocal_6886 = 0;
	var uLocal_6887 = 0;
	var uLocal_6888 = 0;
	var uLocal_6889 = 0;
	var uLocal_6890 = 0;
	var uLocal_6891 = 0;
	var uLocal_6892 = 0;
	var uLocal_6893 = 0;
	var uLocal_6894 = 0;
	var uLocal_6895 = 0;
	var uLocal_6896 = 0;
	var uLocal_6897 = 0;
	var uLocal_6898 = 0;
	var uLocal_6899 = 0;
	var uLocal_6900 = 0;
	var uLocal_6901 = 0;
	var uLocal_6902 = 0;
	var uLocal_6903 = 0;
	var uLocal_6904 = 0;
	var uLocal_6905 = 0;
	var uLocal_6906 = 1065353216;
	var uLocal_6907 = 0;
	var uLocal_6908 = 0;
	var uLocal_6909 = 0;
	var uLocal_6910 = 0;
	var uLocal_6911 = 0;
	var uLocal_6912 = 0;
	var uLocal_6913 = 0;
	var uLocal_6914 = 0;
	var uLocal_6915 = 0;
	var uLocal_6916 = 0;
	var uLocal_6917 = 0;
	var uLocal_6918 = 0;
	var uLocal_6919 = 0;
	var uLocal_6920 = 0;
	var uLocal_6921 = 0;
	var uLocal_6922 = 0;
	var uLocal_6923 = 0;
	var uLocal_6924 = 0;
	var uLocal_6925 = 0;
	var uLocal_6926 = 0;
	var uLocal_6927 = 0;
	var uLocal_6928 = 0;
	var uLocal_6929 = 0;
	var uLocal_6930 = 0;
	var uLocal_6931 = 0;
	var uLocal_6932 = 0;
	var uLocal_6933 = -1;
	var uLocal_6934 = 0;
	var uLocal_6935 = 0;
	var uLocal_6936 = 0;
	var uLocal_6937 = 0;
	var uLocal_6938 = 0;
	var uLocal_6939 = 0;
	var uLocal_6940 = 0;
	var uLocal_6941 = 0;
	var uLocal_6942 = 0;
	var uLocal_6943 = 0;
	var uLocal_6944 = 0;
	var uLocal_6945 = 0;
	var uLocal_6946 = 0;
	var uLocal_6947 = 0;
	var uLocal_6948 = 0;
	var uLocal_6949 = 0;
	var uLocal_6950 = 0;
	var uLocal_6951 = 0;
	var uLocal_6952 = 0;
	var uLocal_6953 = 0;
	var uLocal_6954 = 0;
	var uLocal_6955 = 0;
	var uLocal_6956 = 0;
	var uLocal_6957 = 0;
	var uLocal_6958 = 0;
	var uLocal_6959 = 0;
	var uLocal_6960 = 0;
	var uLocal_6961 = 0;
	var uLocal_6962 = 0;
	var uLocal_6963 = 1065353216;
	var uLocal_6964 = 0;
	var uLocal_6965 = 0;
	var uLocal_6966 = 0;
	var uLocal_6967 = 0;
	var uLocal_6968 = 0;
	var uLocal_6969 = 0;
	var uLocal_6970 = 0;
	var uLocal_6971 = 0;
	var uLocal_6972 = 0;
	var uLocal_6973 = 0;
	var uLocal_6974 = 0;
	var uLocal_6975 = 0;
	var uLocal_6976 = 0;
	var uLocal_6977 = 0;
	var uLocal_6978 = 0;
	var uLocal_6979 = 0;
	var uLocal_6980 = 0;
	var uLocal_6981 = 0;
	var uLocal_6982 = 0;
	var uLocal_6983 = 0;
	var uLocal_6984 = 0;
	var uLocal_6985 = 0;
	var uLocal_6986 = 0;
	var uLocal_6987 = 0;
	var uLocal_6988 = 0;
	var uLocal_6989 = 0;
	var uLocal_6990 = -1;
	var uLocal_6991 = 0;
	var uLocal_6992 = 0;
	var uLocal_6993 = 0;
	var uLocal_6994 = 0;
	var uLocal_6995 = 0;
	var uLocal_6996 = 0;
	var uLocal_6997 = 0;
	var uLocal_6998 = 0;
	var uLocal_6999 = 0;
	var uLocal_7000 = 0;
	var uLocal_7001 = 0;
	var uLocal_7002 = 0;
	var uLocal_7003 = 0;
	var uLocal_7004 = 0;
	var uLocal_7005 = 0;
	var uLocal_7006 = 0;
	var uLocal_7007 = 0;
	var uLocal_7008 = 0;
	var uLocal_7009 = 0;
	var uLocal_7010 = 0;
	var uLocal_7011 = 0;
	var uLocal_7012 = 0;
	var uLocal_7013 = 0;
	var uLocal_7014 = 0;
	var uLocal_7015 = 0;
	var uLocal_7016 = 0;
	var uLocal_7017 = 0;
	var uLocal_7018 = 0;
	var uLocal_7019 = 0;
	var uLocal_7020 = 1065353216;
	var uLocal_7021 = 0;
	var uLocal_7022 = 0;
	var uLocal_7023 = 0;
	var uLocal_7024 = 0;
	var uLocal_7025 = 0;
	var uLocal_7026 = 0;
	var uLocal_7027 = 0;
	var uLocal_7028 = 0;
	var uLocal_7029 = 0;
	var uLocal_7030 = 0;
	var uLocal_7031 = 0;
	var uLocal_7032 = 0;
	var uLocal_7033 = 0;
	var uLocal_7034 = 0;
	var uLocal_7035 = 0;
	var uLocal_7036 = 0;
	var uLocal_7037 = 0;
	var uLocal_7038 = 0;
	var uLocal_7039 = 0;
	var uLocal_7040 = 0;
	var uLocal_7041 = 0;
	var uLocal_7042 = 0;
	var uLocal_7043 = 0;
	var uLocal_7044 = 0;
	var uLocal_7045 = 0;
	var uLocal_7046 = 0;
	var uLocal_7047 = -1;
	var uLocal_7048 = 0;
	var uLocal_7049 = 0;
	var uLocal_7050 = 0;
	var uLocal_7051 = 0;
	var uLocal_7052 = 0;
	var uLocal_7053 = 0;
	var uLocal_7054 = 0;
	var uLocal_7055 = 0;
	var uLocal_7056 = 0;
	var uLocal_7057 = 0;
	var uLocal_7058 = 0;
	var uLocal_7059 = 0;
	var uLocal_7060 = 0;
	var uLocal_7061 = 0;
	var uLocal_7062 = 0;
	var uLocal_7063 = 0;
	var uLocal_7064 = 0;
	var uLocal_7065 = 0;
	var uLocal_7066 = 0;
	var uLocal_7067 = 0;
	var uLocal_7068 = 0;
	var uLocal_7069 = 0;
	var uLocal_7070 = 0;
	var uLocal_7071 = 0;
	var uLocal_7072 = 0;
	var uLocal_7073 = 0;
	var uLocal_7074 = 0;
	var uLocal_7075 = 0;
	var uLocal_7076 = 0;
	var uLocal_7077 = 1065353216;
	var uLocal_7078 = 0;
	var uLocal_7079 = 0;
	var uLocal_7080 = 0;
	var uLocal_7081 = 0;
	var uLocal_7082 = 0;
	var uLocal_7083 = 0;
	var uLocal_7084 = 0;
	var uLocal_7085 = 0;
	var uLocal_7086 = 0;
	var uLocal_7087 = 0;
	var uLocal_7088 = 0;
	var uLocal_7089 = 0;
	var uLocal_7090 = 0;
	var uLocal_7091 = 0;
	var uLocal_7092 = 0;
	var uLocal_7093 = 0;
	var uLocal_7094 = 0;
	var uLocal_7095 = 0;
	var uLocal_7096 = 0;
	var uLocal_7097 = 0;
	var uLocal_7098 = 0;
	var uLocal_7099 = 0;
	var uLocal_7100 = 0;
	var uLocal_7101 = 0;
	var uLocal_7102 = 0;
	var uLocal_7103 = 0;
	var uLocal_7104 = -1;
	var uLocal_7105 = 0;
	var uLocal_7106 = 0;
	var uLocal_7107 = 0;
	var uLocal_7108 = 0;
	var uLocal_7109 = 0;
	var uLocal_7110 = 0;
	var uLocal_7111 = 0;
	var uLocal_7112 = 0;
	var uLocal_7113 = 0;
	var uLocal_7114 = 0;
	var uLocal_7115 = 0;
	var uLocal_7116 = 0;
	var uLocal_7117 = 0;
	var uLocal_7118 = 0;
	var uLocal_7119 = 0;
	var uLocal_7120 = 0;
	var uLocal_7121 = 0;
	var uLocal_7122 = 0;
	var uLocal_7123 = 0;
	var uLocal_7124 = 0;
	var uLocal_7125 = 0;
	var uLocal_7126 = 0;
	var uLocal_7127 = 0;
	var uLocal_7128 = 0;
	var uLocal_7129 = 0;
	var uLocal_7130 = 0;
	var uLocal_7131 = 0;
	var uLocal_7132 = 0;
	var uLocal_7133 = 0;
	var uLocal_7134 = 1065353216;
	var uLocal_7135 = 0;
	var uLocal_7136 = 0;
	var uLocal_7137 = 0;
	var uLocal_7138 = 0;
	var uLocal_7139 = 0;
	var uLocal_7140 = 0;
	var uLocal_7141 = 0;
	var uLocal_7142 = 0;
	var uLocal_7143 = 0;
	var uLocal_7144 = 0;
	var uLocal_7145 = 0;
	var uLocal_7146 = 0;
	var uLocal_7147 = 0;
	var uLocal_7148 = 0;
	var uLocal_7149 = 0;
	var uLocal_7150 = 0;
	var uLocal_7151 = 0;
	var uLocal_7152 = 0;
	var uLocal_7153 = 0;
	var uLocal_7154 = 0;
	var uLocal_7155 = 0;
	var uLocal_7156 = 0;
	var uLocal_7157 = 0;
	var uLocal_7158 = 0;
	var uLocal_7159 = 0;
	var uLocal_7160 = 0;
	var uLocal_7161 = -1;
	var uLocal_7162 = 0;
	var uLocal_7163 = 0;
	var uLocal_7164 = 0;
	var uLocal_7165 = 0;
	var uLocal_7166 = 0;
	var uLocal_7167 = 0;
	var uLocal_7168 = 0;
	var uLocal_7169 = 0;
	var uLocal_7170 = 0;
	var uLocal_7171 = 0;
	var uLocal_7172 = 0;
	var uLocal_7173 = 0;
	var uLocal_7174 = 0;
	var uLocal_7175 = 0;
	var uLocal_7176 = 0;
	var uLocal_7177 = 0;
	var uLocal_7178 = 0;
	var uLocal_7179 = 0;
	var uLocal_7180 = 0;
	var uLocal_7181 = 0;
	var uLocal_7182 = 0;
	var uLocal_7183 = 0;
	var uLocal_7184 = 0;
	var uLocal_7185 = 0;
	var uLocal_7186 = 0;
	var uLocal_7187 = 0;
	var uLocal_7188 = 0;
	var uLocal_7189 = 0;
	var uLocal_7190 = 0;
	var uLocal_7191 = 1065353216;
	var uLocal_7192 = 0;
	var uLocal_7193 = 0;
	var uLocal_7194 = 0;
	var uLocal_7195 = 0;
	var uLocal_7196 = 0;
	var uLocal_7197 = 0;
	var uLocal_7198 = 0;
	var uLocal_7199 = 0;
	var uLocal_7200 = 0;
	var uLocal_7201 = 0;
	var uLocal_7202 = 0;
	var uLocal_7203 = 0;
	var uLocal_7204 = 0;
	var uLocal_7205 = 0;
	var uLocal_7206 = 0;
	var uLocal_7207 = 0;
	var uLocal_7208 = 0;
	var uLocal_7209 = 0;
	var uLocal_7210 = 0;
	var uLocal_7211 = 0;
	var uLocal_7212 = 0;
	var uLocal_7213 = 0;
	var uLocal_7214 = 0;
	var uLocal_7215 = 0;
	var uLocal_7216 = 0;
	var uLocal_7217 = 0;
	var uLocal_7218 = -1;
	var uLocal_7219 = 0;
	var uLocal_7220 = 0;
	var uLocal_7221 = 0;
	var uLocal_7222 = 0;
	var uLocal_7223 = 0;
	var uLocal_7224 = 0;
	var uLocal_7225 = 0;
	var uLocal_7226 = 0;
	var uLocal_7227 = 0;
	var uLocal_7228 = 0;
	var uLocal_7229 = 0;
	var uLocal_7230 = 0;
	var uLocal_7231 = 0;
	var uLocal_7232 = 0;
	var uLocal_7233 = 0;
	var uLocal_7234 = 0;
	var uLocal_7235 = 0;
	var uLocal_7236 = 0;
	var uLocal_7237 = 0;
	var uLocal_7238 = 0;
	var uLocal_7239 = 0;
	var uLocal_7240 = 0;
	var uLocal_7241 = 0;
	var uLocal_7242 = 0;
	var uLocal_7243 = 0;
	var uLocal_7244 = 0;
	var uLocal_7245 = 0;
	var uLocal_7246 = 0;
	var uLocal_7247 = 0;
	var uLocal_7248 = 1065353216;
	var uLocal_7249 = 0;
	var uLocal_7250 = 0;
	var uLocal_7251 = 0;
	var uLocal_7252 = 0;
	var uLocal_7253 = 0;
	var uLocal_7254 = 0;
	var uLocal_7255 = 0;
	var uLocal_7256 = 0;
	var uLocal_7257 = 0;
	var uLocal_7258 = 0;
	var uLocal_7259 = 0;
	var uLocal_7260 = 0;
	var uLocal_7261 = 0;
	var uLocal_7262 = 0;
	var uLocal_7263 = 0;
	var uLocal_7264 = 0;
	var uLocal_7265 = 0;
	var uLocal_7266 = 0;
	var uLocal_7267 = 0;
	var uLocal_7268 = 0;
	var uLocal_7269 = 0;
	var uLocal_7270 = 0;
	var uLocal_7271 = 0;
	var uLocal_7272 = 16;
	var uLocal_7273 = 0;
	var uLocal_7274 = -1082130432;
	var uLocal_7275 = 0;
	var uLocal_7276 = -1082130432;
	var uLocal_7277 = 0;
	var uLocal_7278 = -1082130432;
	var uLocal_7279 = 0;
	var uLocal_7280 = -1082130432;
	var uLocal_7281 = 0;
	var uLocal_7282 = -1082130432;
	var uLocal_7283 = 0;
	var uLocal_7284 = -1082130432;
	var uLocal_7285 = 0;
	var uLocal_7286 = -1082130432;
	var uLocal_7287 = 0;
	var uLocal_7288 = -1082130432;
	var uLocal_7289 = 0;
	var uLocal_7290 = -1082130432;
	var uLocal_7291 = 0;
	var uLocal_7292 = -1082130432;
	var uLocal_7293 = 0;
	var uLocal_7294 = -1082130432;
	var uLocal_7295 = 0;
	var uLocal_7296 = -1082130432;
	var uLocal_7297 = 0;
	var uLocal_7298 = -1082130432;
	var uLocal_7299 = 0;
	var uLocal_7300 = -1082130432;
	var uLocal_7301 = 0;
	var uLocal_7302 = -1082130432;
	var uLocal_7303 = 0;
	var uLocal_7304 = -1082130432;
	var uLocal_7305 = 16;
	var uLocal_7306 = 0;
	var uLocal_7307 = -1082130432;
	var uLocal_7308 = 0;
	var uLocal_7309 = -1082130432;
	var uLocal_7310 = 0;
	var uLocal_7311 = -1082130432;
	var uLocal_7312 = 0;
	var uLocal_7313 = -1082130432;
	var uLocal_7314 = 0;
	var uLocal_7315 = -1082130432;
	var uLocal_7316 = 0;
	var uLocal_7317 = -1082130432;
	var uLocal_7318 = 0;
	var uLocal_7319 = -1082130432;
	var uLocal_7320 = 0;
	var uLocal_7321 = -1082130432;
	var uLocal_7322 = 0;
	var uLocal_7323 = -1082130432;
	var uLocal_7324 = 0;
	var uLocal_7325 = -1082130432;
	var uLocal_7326 = 0;
	var uLocal_7327 = -1082130432;
	var uLocal_7328 = 0;
	var uLocal_7329 = -1082130432;
	var uLocal_7330 = 0;
	var uLocal_7331 = -1082130432;
	var uLocal_7332 = 0;
	var uLocal_7333 = -1082130432;
	var uLocal_7334 = 0;
	var uLocal_7335 = -1082130432;
	var uLocal_7336 = 0;
	var uLocal_7337 = -1082130432;
	var uLocal_7338 = 0;
	var uLocal_7339 = 0;
	var uLocal_7340 = 0;
	var uLocal_7341 = 0;
	var uLocal_7342 = 0;
	var uLocal_7343 = 0;
	var uLocal_7344 = 0;
	var uLocal_7345 = 0;
	var uLocal_7346 = 0;
	var uLocal_7347 = 0;
	var uLocal_7348 = 0;
	var uLocal_7349 = 0;
	var uLocal_7350 = 0;
	var uLocal_7351 = 0;
	var uLocal_7352 = 0;
	var uLocal_7353 = 0;
	var uLocal_7354 = -1082130432;
	var uLocal_7355 = -1082130432;
	var uLocal_7356 = 1;
	var uLocal_7357 = 1;
	var uLocal_7358 = 1;
	var uLocal_7359 = -1;
	var uLocal_7360 = -1;
	var uLocal_7361 = -1;
	var uLocal_7362 = 0;
	var uLocal_7363 = 0;
	var uLocal_7364 = 0;
	var uLocal_7365 = 0;
	var uLocal_7366 = 2;
	var uLocal_7367 = 0;
	var uLocal_7368 = 0;
	var uLocal_7369 = 2;
	var uLocal_7370 = 0;
	var uLocal_7371 = 0;
	var uLocal_7372 = 20;
	var uLocal_7373 = 0;
	var uLocal_7374 = 0;
	var uLocal_7375 = 0;
	var uLocal_7376 = -1;
	var uLocal_7377 = 0;
	var uLocal_7378 = 0;
	var uLocal_7379 = 0;
	var uLocal_7380 = 0;
	var uLocal_7381 = 0;
	var uLocal_7382 = 0;
	var uLocal_7383 = 0;
	var uLocal_7384 = 0;
	var uLocal_7385 = 0;
	var uLocal_7386 = 0;
	var uLocal_7387 = 0;
	var uLocal_7388 = 0;
	var uLocal_7389 = 0;
	var uLocal_7390 = 0;
	var uLocal_7391 = 0;
	var uLocal_7392 = 0;
	var uLocal_7393 = 0;
	var uLocal_7394 = 0;
	var uLocal_7395 = 0;
	var uLocal_7396 = 0;
	var uLocal_7397 = 0;
	var uLocal_7398 = 0;
	var uLocal_7399 = 0;
	var uLocal_7400 = 0;
	var uLocal_7401 = 0;
	var uLocal_7402 = 0;
	var uLocal_7403 = 0;
	var uLocal_7404 = 0;
	var uLocal_7405 = 0;
	var uLocal_7406 = 1065353216;
	var uLocal_7407 = 0;
	var uLocal_7408 = 0;
	var uLocal_7409 = 0;
	var uLocal_7410 = 0;
	var uLocal_7411 = 0;
	var uLocal_7412 = 0;
	var uLocal_7413 = 0;
	var uLocal_7414 = 0;
	var uLocal_7415 = 0;
	var uLocal_7416 = 0;
	var uLocal_7417 = 0;
	var uLocal_7418 = 0;
	var uLocal_7419 = 0;
	var uLocal_7420 = 0;
	var uLocal_7421 = 0;
	var uLocal_7422 = 0;
	var uLocal_7423 = 0;
	var uLocal_7424 = 0;
	var uLocal_7425 = 0;
	var uLocal_7426 = 0;
	var uLocal_7427 = 0;
	var uLocal_7428 = 0;
	var uLocal_7429 = 0;
	var uLocal_7430 = 0;
	var uLocal_7431 = 0;
	var uLocal_7432 = 0;
	var uLocal_7433 = -1;
	var uLocal_7434 = 0;
	var uLocal_7435 = 0;
	var uLocal_7436 = 0;
	var uLocal_7437 = 0;
	var uLocal_7438 = 0;
	var uLocal_7439 = 0;
	var uLocal_7440 = 0;
	var uLocal_7441 = 0;
	var uLocal_7442 = 0;
	var uLocal_7443 = 0;
	var uLocal_7444 = 0;
	var uLocal_7445 = 0;
	var uLocal_7446 = 0;
	var uLocal_7447 = 0;
	var uLocal_7448 = 0;
	var uLocal_7449 = 0;
	var uLocal_7450 = 0;
	var uLocal_7451 = 0;
	var uLocal_7452 = 0;
	var uLocal_7453 = 0;
	var uLocal_7454 = 0;
	var uLocal_7455 = 0;
	var uLocal_7456 = 0;
	var uLocal_7457 = 0;
	var uLocal_7458 = 0;
	var uLocal_7459 = 0;
	var uLocal_7460 = 0;
	var uLocal_7461 = 0;
	var uLocal_7462 = 0;
	var uLocal_7463 = 1065353216;
	var uLocal_7464 = 0;
	var uLocal_7465 = 0;
	var uLocal_7466 = 0;
	var uLocal_7467 = 0;
	var uLocal_7468 = 0;
	var uLocal_7469 = 0;
	var uLocal_7470 = 0;
	var uLocal_7471 = 0;
	var uLocal_7472 = 0;
	var uLocal_7473 = 0;
	var uLocal_7474 = 0;
	var uLocal_7475 = 0;
	var uLocal_7476 = 0;
	var uLocal_7477 = 0;
	var uLocal_7478 = 0;
	var uLocal_7479 = 0;
	var uLocal_7480 = 0;
	var uLocal_7481 = 0;
	var uLocal_7482 = 0;
	var uLocal_7483 = 0;
	var uLocal_7484 = 0;
	var uLocal_7485 = 0;
	var uLocal_7486 = 0;
	var uLocal_7487 = 0;
	var uLocal_7488 = 0;
	var uLocal_7489 = 0;
	var uLocal_7490 = -1;
	var uLocal_7491 = 0;
	var uLocal_7492 = 0;
	var uLocal_7493 = 0;
	var uLocal_7494 = 0;
	var uLocal_7495 = 0;
	var uLocal_7496 = 0;
	var uLocal_7497 = 0;
	var uLocal_7498 = 0;
	var uLocal_7499 = 0;
	var uLocal_7500 = 0;
	var uLocal_7501 = 0;
	var uLocal_7502 = 0;
	var uLocal_7503 = 0;
	var uLocal_7504 = 0;
	var uLocal_7505 = 0;
	var uLocal_7506 = 0;
	var uLocal_7507 = 0;
	var uLocal_7508 = 0;
	var uLocal_7509 = 0;
	var uLocal_7510 = 0;
	var uLocal_7511 = 0;
	var uLocal_7512 = 0;
	var uLocal_7513 = 0;
	var uLocal_7514 = 0;
	var uLocal_7515 = 0;
	var uLocal_7516 = 0;
	var uLocal_7517 = 0;
	var uLocal_7518 = 0;
	var uLocal_7519 = 0;
	var uLocal_7520 = 1065353216;
	var uLocal_7521 = 0;
	var uLocal_7522 = 0;
	var uLocal_7523 = 0;
	var uLocal_7524 = 0;
	var uLocal_7525 = 0;
	var uLocal_7526 = 0;
	var uLocal_7527 = 0;
	var uLocal_7528 = 0;
	var uLocal_7529 = 0;
	var uLocal_7530 = 0;
	var uLocal_7531 = 0;
	var uLocal_7532 = 0;
	var uLocal_7533 = 0;
	var uLocal_7534 = 0;
	var uLocal_7535 = 0;
	var uLocal_7536 = 0;
	var uLocal_7537 = 0;
	var uLocal_7538 = 0;
	var uLocal_7539 = 0;
	var uLocal_7540 = 0;
	var uLocal_7541 = 0;
	var uLocal_7542 = 0;
	var uLocal_7543 = 0;
	var uLocal_7544 = 0;
	var uLocal_7545 = 0;
	var uLocal_7546 = 0;
	var uLocal_7547 = -1;
	var uLocal_7548 = 0;
	var uLocal_7549 = 0;
	var uLocal_7550 = 0;
	var uLocal_7551 = 0;
	var uLocal_7552 = 0;
	var uLocal_7553 = 0;
	var uLocal_7554 = 0;
	var uLocal_7555 = 0;
	var uLocal_7556 = 0;
	var uLocal_7557 = 0;
	var uLocal_7558 = 0;
	var uLocal_7559 = 0;
	var uLocal_7560 = 0;
	var uLocal_7561 = 0;
	var uLocal_7562 = 0;
	var uLocal_7563 = 0;
	var uLocal_7564 = 0;
	var uLocal_7565 = 0;
	var uLocal_7566 = 0;
	var uLocal_7567 = 0;
	var uLocal_7568 = 0;
	var uLocal_7569 = 0;
	var uLocal_7570 = 0;
	var uLocal_7571 = 0;
	var uLocal_7572 = 0;
	var uLocal_7573 = 0;
	var uLocal_7574 = 0;
	var uLocal_7575 = 0;
	var uLocal_7576 = 0;
	var uLocal_7577 = 1065353216;
	var uLocal_7578 = 0;
	var uLocal_7579 = 0;
	var uLocal_7580 = 0;
	var uLocal_7581 = 0;
	var uLocal_7582 = 0;
	var uLocal_7583 = 0;
	var uLocal_7584 = 0;
	var uLocal_7585 = 0;
	var uLocal_7586 = 0;
	var uLocal_7587 = 0;
	var uLocal_7588 = 0;
	var uLocal_7589 = 0;
	var uLocal_7590 = 0;
	var uLocal_7591 = 0;
	var uLocal_7592 = 0;
	var uLocal_7593 = 0;
	var uLocal_7594 = 0;
	var uLocal_7595 = 0;
	var uLocal_7596 = 0;
	var uLocal_7597 = 0;
	var uLocal_7598 = 0;
	var uLocal_7599 = 0;
	var uLocal_7600 = 0;
	var uLocal_7601 = 0;
	var uLocal_7602 = 0;
	var uLocal_7603 = 0;
	var uLocal_7604 = -1;
	var uLocal_7605 = 0;
	var uLocal_7606 = 0;
	var uLocal_7607 = 0;
	var uLocal_7608 = 0;
	var uLocal_7609 = 0;
	var uLocal_7610 = 0;
	var uLocal_7611 = 0;
	var uLocal_7612 = 0;
	var uLocal_7613 = 0;
	var uLocal_7614 = 0;
	var uLocal_7615 = 0;
	var uLocal_7616 = 0;
	var uLocal_7617 = 0;
	var uLocal_7618 = 0;
	var uLocal_7619 = 0;
	var uLocal_7620 = 0;
	var uLocal_7621 = 0;
	var uLocal_7622 = 0;
	var uLocal_7623 = 0;
	var uLocal_7624 = 0;
	var uLocal_7625 = 0;
	var uLocal_7626 = 0;
	var uLocal_7627 = 0;
	var uLocal_7628 = 0;
	var uLocal_7629 = 0;
	var uLocal_7630 = 0;
	var uLocal_7631 = 0;
	var uLocal_7632 = 0;
	var uLocal_7633 = 0;
	var uLocal_7634 = 1065353216;
	var uLocal_7635 = 0;
	var uLocal_7636 = 0;
	var uLocal_7637 = 0;
	var uLocal_7638 = 0;
	var uLocal_7639 = 0;
	var uLocal_7640 = 0;
	var uLocal_7641 = 0;
	var uLocal_7642 = 0;
	var uLocal_7643 = 0;
	var uLocal_7644 = 0;
	var uLocal_7645 = 0;
	var uLocal_7646 = 0;
	var uLocal_7647 = 0;
	var uLocal_7648 = 0;
	var uLocal_7649 = 0;
	var uLocal_7650 = 0;
	var uLocal_7651 = 0;
	var uLocal_7652 = 0;
	var uLocal_7653 = 0;
	var uLocal_7654 = 0;
	var uLocal_7655 = 0;
	var uLocal_7656 = 0;
	var uLocal_7657 = 0;
	var uLocal_7658 = 0;
	var uLocal_7659 = 0;
	var uLocal_7660 = 0;
	var uLocal_7661 = -1;
	var uLocal_7662 = 0;
	var uLocal_7663 = 0;
	var uLocal_7664 = 0;
	var uLocal_7665 = 0;
	var uLocal_7666 = 0;
	var uLocal_7667 = 0;
	var uLocal_7668 = 0;
	var uLocal_7669 = 0;
	var uLocal_7670 = 0;
	var uLocal_7671 = 0;
	var uLocal_7672 = 0;
	var uLocal_7673 = 0;
	var uLocal_7674 = 0;
	var uLocal_7675 = 0;
	var uLocal_7676 = 0;
	var uLocal_7677 = 0;
	var uLocal_7678 = 0;
	var uLocal_7679 = 0;
	var uLocal_7680 = 0;
	var uLocal_7681 = 0;
	var uLocal_7682 = 0;
	var uLocal_7683 = 0;
	var uLocal_7684 = 0;
	var uLocal_7685 = 0;
	var uLocal_7686 = 0;
	var uLocal_7687 = 0;
	var uLocal_7688 = 0;
	var uLocal_7689 = 0;
	var uLocal_7690 = 0;
	var uLocal_7691 = 1065353216;
	var uLocal_7692 = 0;
	var uLocal_7693 = 0;
	var uLocal_7694 = 0;
	var uLocal_7695 = 0;
	var uLocal_7696 = 0;
	var uLocal_7697 = 0;
	var uLocal_7698 = 0;
	var uLocal_7699 = 0;
	var uLocal_7700 = 0;
	var uLocal_7701 = 0;
	var uLocal_7702 = 0;
	var uLocal_7703 = 0;
	var uLocal_7704 = 0;
	var uLocal_7705 = 0;
	var uLocal_7706 = 0;
	var uLocal_7707 = 0;
	var uLocal_7708 = 0;
	var uLocal_7709 = 0;
	var uLocal_7710 = 0;
	var uLocal_7711 = 0;
	var uLocal_7712 = 0;
	var uLocal_7713 = 0;
	var uLocal_7714 = 0;
	var uLocal_7715 = 0;
	var uLocal_7716 = 0;
	var uLocal_7717 = 0;
	var uLocal_7718 = -1;
	var uLocal_7719 = 0;
	var uLocal_7720 = 0;
	var uLocal_7721 = 0;
	var uLocal_7722 = 0;
	var uLocal_7723 = 0;
	var uLocal_7724 = 0;
	var uLocal_7725 = 0;
	var uLocal_7726 = 0;
	var uLocal_7727 = 0;
	var uLocal_7728 = 0;
	var uLocal_7729 = 0;
	var uLocal_7730 = 0;
	var uLocal_7731 = 0;
	var uLocal_7732 = 0;
	var uLocal_7733 = 0;
	var uLocal_7734 = 0;
	var uLocal_7735 = 0;
	var uLocal_7736 = 0;
	var uLocal_7737 = 0;
	var uLocal_7738 = 0;
	var uLocal_7739 = 0;
	var uLocal_7740 = 0;
	var uLocal_7741 = 0;
	var uLocal_7742 = 0;
	var uLocal_7743 = 0;
	var uLocal_7744 = 0;
	var uLocal_7745 = 0;
	var uLocal_7746 = 0;
	var uLocal_7747 = 0;
	var uLocal_7748 = 1065353216;
	var uLocal_7749 = 0;
	var uLocal_7750 = 0;
	var uLocal_7751 = 0;
	var uLocal_7752 = 0;
	var uLocal_7753 = 0;
	var uLocal_7754 = 0;
	var uLocal_7755 = 0;
	var uLocal_7756 = 0;
	var uLocal_7757 = 0;
	var uLocal_7758 = 0;
	var uLocal_7759 = 0;
	var uLocal_7760 = 0;
	var uLocal_7761 = 0;
	var uLocal_7762 = 0;
	var uLocal_7763 = 0;
	var uLocal_7764 = 0;
	var uLocal_7765 = 0;
	var uLocal_7766 = 0;
	var uLocal_7767 = 0;
	var uLocal_7768 = 0;
	var uLocal_7769 = 0;
	var uLocal_7770 = 0;
	var uLocal_7771 = 0;
	var uLocal_7772 = 0;
	var uLocal_7773 = 0;
	var uLocal_7774 = 0;
	var uLocal_7775 = -1;
	var uLocal_7776 = 0;
	var uLocal_7777 = 0;
	var uLocal_7778 = 0;
	var uLocal_7779 = 0;
	var uLocal_7780 = 0;
	var uLocal_7781 = 0;
	var uLocal_7782 = 0;
	var uLocal_7783 = 0;
	var uLocal_7784 = 0;
	var uLocal_7785 = 0;
	var uLocal_7786 = 0;
	var uLocal_7787 = 0;
	var uLocal_7788 = 0;
	var uLocal_7789 = 0;
	var uLocal_7790 = 0;
	var uLocal_7791 = 0;
	var uLocal_7792 = 0;
	var uLocal_7793 = 0;
	var uLocal_7794 = 0;
	var uLocal_7795 = 0;
	var uLocal_7796 = 0;
	var uLocal_7797 = 0;
	var uLocal_7798 = 0;
	var uLocal_7799 = 0;
	var uLocal_7800 = 0;
	var uLocal_7801 = 0;
	var uLocal_7802 = 0;
	var uLocal_7803 = 0;
	var uLocal_7804 = 0;
	var uLocal_7805 = 1065353216;
	var uLocal_7806 = 0;
	var uLocal_7807 = 0;
	var uLocal_7808 = 0;
	var uLocal_7809 = 0;
	var uLocal_7810 = 0;
	var uLocal_7811 = 0;
	var uLocal_7812 = 0;
	var uLocal_7813 = 0;
	var uLocal_7814 = 0;
	var uLocal_7815 = 0;
	var uLocal_7816 = 0;
	var uLocal_7817 = 0;
	var uLocal_7818 = 0;
	var uLocal_7819 = 0;
	var uLocal_7820 = 0;
	var uLocal_7821 = 0;
	var uLocal_7822 = 0;
	var uLocal_7823 = 0;
	var uLocal_7824 = 0;
	var uLocal_7825 = 0;
	var uLocal_7826 = 0;
	var uLocal_7827 = 0;
	var uLocal_7828 = 0;
	var uLocal_7829 = 0;
	var uLocal_7830 = 0;
	var uLocal_7831 = 0;
	var uLocal_7832 = -1;
	var uLocal_7833 = 0;
	var uLocal_7834 = 0;
	var uLocal_7835 = 0;
	var uLocal_7836 = 0;
	var uLocal_7837 = 0;
	var uLocal_7838 = 0;
	var uLocal_7839 = 0;
	var uLocal_7840 = 0;
	var uLocal_7841 = 0;
	var uLocal_7842 = 0;
	var uLocal_7843 = 0;
	var uLocal_7844 = 0;
	var uLocal_7845 = 0;
	var uLocal_7846 = 0;
	var uLocal_7847 = 0;
	var uLocal_7848 = 0;
	var uLocal_7849 = 0;
	var uLocal_7850 = 0;
	var uLocal_7851 = 0;
	var uLocal_7852 = 0;
	var uLocal_7853 = 0;
	var uLocal_7854 = 0;
	var uLocal_7855 = 0;
	var uLocal_7856 = 0;
	var uLocal_7857 = 0;
	var uLocal_7858 = 0;
	var uLocal_7859 = 0;
	var uLocal_7860 = 0;
	var uLocal_7861 = 0;
	var uLocal_7862 = 1065353216;
	var uLocal_7863 = 0;
	var uLocal_7864 = 0;
	var uLocal_7865 = 0;
	var uLocal_7866 = 0;
	var uLocal_7867 = 0;
	var uLocal_7868 = 0;
	var uLocal_7869 = 0;
	var uLocal_7870 = 0;
	var uLocal_7871 = 0;
	var uLocal_7872 = 0;
	var uLocal_7873 = 0;
	var uLocal_7874 = 0;
	var uLocal_7875 = 0;
	var uLocal_7876 = 0;
	var uLocal_7877 = 0;
	var uLocal_7878 = 0;
	var uLocal_7879 = 0;
	var uLocal_7880 = 0;
	var uLocal_7881 = 0;
	var uLocal_7882 = 0;
	var uLocal_7883 = 0;
	var uLocal_7884 = 0;
	var uLocal_7885 = 0;
	var uLocal_7886 = 0;
	var uLocal_7887 = 0;
	var uLocal_7888 = 0;
	var uLocal_7889 = -1;
	var uLocal_7890 = 0;
	var uLocal_7891 = 0;
	var uLocal_7892 = 0;
	var uLocal_7893 = 0;
	var uLocal_7894 = 0;
	var uLocal_7895 = 0;
	var uLocal_7896 = 0;
	var uLocal_7897 = 0;
	var uLocal_7898 = 0;
	var uLocal_7899 = 0;
	var uLocal_7900 = 0;
	var uLocal_7901 = 0;
	var uLocal_7902 = 0;
	var uLocal_7903 = 0;
	var uLocal_7904 = 0;
	var uLocal_7905 = 0;
	var uLocal_7906 = 0;
	var uLocal_7907 = 0;
	var uLocal_7908 = 0;
	var uLocal_7909 = 0;
	var uLocal_7910 = 0;
	var uLocal_7911 = 0;
	var uLocal_7912 = 0;
	var uLocal_7913 = 0;
	var uLocal_7914 = 0;
	var uLocal_7915 = 0;
	var uLocal_7916 = 0;
	var uLocal_7917 = 0;
	var uLocal_7918 = 0;
	var uLocal_7919 = 1065353216;
	var uLocal_7920 = 0;
	var uLocal_7921 = 0;
	var uLocal_7922 = 0;
	var uLocal_7923 = 0;
	var uLocal_7924 = 0;
	var uLocal_7925 = 0;
	var uLocal_7926 = 0;
	var uLocal_7927 = 0;
	var uLocal_7928 = 0;
	var uLocal_7929 = 0;
	var uLocal_7930 = 0;
	var uLocal_7931 = 0;
	var uLocal_7932 = 0;
	var uLocal_7933 = 0;
	var uLocal_7934 = 0;
	var uLocal_7935 = 0;
	var uLocal_7936 = 0;
	var uLocal_7937 = 0;
	var uLocal_7938 = 0;
	var uLocal_7939 = 0;
	var uLocal_7940 = 0;
	var uLocal_7941 = 0;
	var uLocal_7942 = 0;
	var uLocal_7943 = 0;
	var uLocal_7944 = 0;
	var uLocal_7945 = 0;
	var uLocal_7946 = -1;
	var uLocal_7947 = 0;
	var uLocal_7948 = 0;
	var uLocal_7949 = 0;
	var uLocal_7950 = 0;
	var uLocal_7951 = 0;
	var uLocal_7952 = 0;
	var uLocal_7953 = 0;
	var uLocal_7954 = 0;
	var uLocal_7955 = 0;
	var uLocal_7956 = 0;
	var uLocal_7957 = 0;
	var uLocal_7958 = 0;
	var uLocal_7959 = 0;
	var uLocal_7960 = 0;
	var uLocal_7961 = 0;
	var uLocal_7962 = 0;
	var uLocal_7963 = 0;
	var uLocal_7964 = 0;
	var uLocal_7965 = 0;
	var uLocal_7966 = 0;
	var uLocal_7967 = 0;
	var uLocal_7968 = 0;
	var uLocal_7969 = 0;
	var uLocal_7970 = 0;
	var uLocal_7971 = 0;
	var uLocal_7972 = 0;
	var uLocal_7973 = 0;
	var uLocal_7974 = 0;
	var uLocal_7975 = 0;
	var uLocal_7976 = 1065353216;
	var uLocal_7977 = 0;
	var uLocal_7978 = 0;
	var uLocal_7979 = 0;
	var uLocal_7980 = 0;
	var uLocal_7981 = 0;
	var uLocal_7982 = 0;
	var uLocal_7983 = 0;
	var uLocal_7984 = 0;
	var uLocal_7985 = 0;
	var uLocal_7986 = 0;
	var uLocal_7987 = 0;
	var uLocal_7988 = 0;
	var uLocal_7989 = 0;
	var uLocal_7990 = 0;
	var uLocal_7991 = 0;
	var uLocal_7992 = 0;
	var uLocal_7993 = 0;
	var uLocal_7994 = 0;
	var uLocal_7995 = 0;
	var uLocal_7996 = 0;
	var uLocal_7997 = 0;
	var uLocal_7998 = 0;
	var uLocal_7999 = 0;
	var uLocal_8000 = 0;
	var uLocal_8001 = 0;
	var uLocal_8002 = 0;
	var uLocal_8003 = -1;
	var uLocal_8004 = 0;
	var uLocal_8005 = 0;
	var uLocal_8006 = 0;
	var uLocal_8007 = 0;
	var uLocal_8008 = 0;
	var uLocal_8009 = 0;
	var uLocal_8010 = 0;
	var uLocal_8011 = 0;
	var uLocal_8012 = 0;
	var uLocal_8013 = 0;
	var uLocal_8014 = 0;
	var uLocal_8015 = 0;
	var uLocal_8016 = 0;
	var uLocal_8017 = 0;
	var uLocal_8018 = 0;
	var uLocal_8019 = 0;
	var uLocal_8020 = 0;
	var uLocal_8021 = 0;
	var uLocal_8022 = 0;
	var uLocal_8023 = 0;
	var uLocal_8024 = 0;
	var uLocal_8025 = 0;
	var uLocal_8026 = 0;
	var uLocal_8027 = 0;
	var uLocal_8028 = 0;
	var uLocal_8029 = 0;
	var uLocal_8030 = 0;
	var uLocal_8031 = 0;
	var uLocal_8032 = 0;
	var uLocal_8033 = 1065353216;
	var uLocal_8034 = 0;
	var uLocal_8035 = 0;
	var uLocal_8036 = 0;
	var uLocal_8037 = 0;
	var uLocal_8038 = 0;
	var uLocal_8039 = 0;
	var uLocal_8040 = 0;
	var uLocal_8041 = 0;
	var uLocal_8042 = 0;
	var uLocal_8043 = 0;
	var uLocal_8044 = 0;
	var uLocal_8045 = 0;
	var uLocal_8046 = 0;
	var uLocal_8047 = 0;
	var uLocal_8048 = 0;
	var uLocal_8049 = 0;
	var uLocal_8050 = 0;
	var uLocal_8051 = 0;
	var uLocal_8052 = 0;
	var uLocal_8053 = 0;
	var uLocal_8054 = 0;
	var uLocal_8055 = 0;
	var uLocal_8056 = 0;
	var uLocal_8057 = 0;
	var uLocal_8058 = 0;
	var uLocal_8059 = 0;
	var uLocal_8060 = -1;
	var uLocal_8061 = 0;
	var uLocal_8062 = 0;
	var uLocal_8063 = 0;
	var uLocal_8064 = 0;
	var uLocal_8065 = 0;
	var uLocal_8066 = 0;
	var uLocal_8067 = 0;
	var uLocal_8068 = 0;
	var uLocal_8069 = 0;
	var uLocal_8070 = 0;
	var uLocal_8071 = 0;
	var uLocal_8072 = 0;
	var uLocal_8073 = 0;
	var uLocal_8074 = 0;
	var uLocal_8075 = 0;
	var uLocal_8076 = 0;
	var uLocal_8077 = 0;
	var uLocal_8078 = 0;
	var uLocal_8079 = 0;
	var uLocal_8080 = 0;
	var uLocal_8081 = 0;
	var uLocal_8082 = 0;
	var uLocal_8083 = 0;
	var uLocal_8084 = 0;
	var uLocal_8085 = 0;
	var uLocal_8086 = 0;
	var uLocal_8087 = 0;
	var uLocal_8088 = 0;
	var uLocal_8089 = 0;
	var uLocal_8090 = 1065353216;
	var uLocal_8091 = 0;
	var uLocal_8092 = 0;
	var uLocal_8093 = 0;
	var uLocal_8094 = 0;
	var uLocal_8095 = 0;
	var uLocal_8096 = 0;
	var uLocal_8097 = 0;
	var uLocal_8098 = 0;
	var uLocal_8099 = 0;
	var uLocal_8100 = 0;
	var uLocal_8101 = 0;
	var uLocal_8102 = 0;
	var uLocal_8103 = 0;
	var uLocal_8104 = 0;
	var uLocal_8105 = 0;
	var uLocal_8106 = 0;
	var uLocal_8107 = 0;
	var uLocal_8108 = 0;
	var uLocal_8109 = 0;
	var uLocal_8110 = 0;
	var uLocal_8111 = 0;
	var uLocal_8112 = 0;
	var uLocal_8113 = 0;
	var uLocal_8114 = 0;
	var uLocal_8115 = 0;
	var uLocal_8116 = 0;
	var uLocal_8117 = -1;
	var uLocal_8118 = 0;
	var uLocal_8119 = 0;
	var uLocal_8120 = 0;
	var uLocal_8121 = 0;
	var uLocal_8122 = 0;
	var uLocal_8123 = 0;
	var uLocal_8124 = 0;
	var uLocal_8125 = 0;
	var uLocal_8126 = 0;
	var uLocal_8127 = 0;
	var uLocal_8128 = 0;
	var uLocal_8129 = 0;
	var uLocal_8130 = 0;
	var uLocal_8131 = 0;
	var uLocal_8132 = 0;
	var uLocal_8133 = 0;
	var uLocal_8134 = 0;
	var uLocal_8135 = 0;
	var uLocal_8136 = 0;
	var uLocal_8137 = 0;
	var uLocal_8138 = 0;
	var uLocal_8139 = 0;
	var uLocal_8140 = 0;
	var uLocal_8141 = 0;
	var uLocal_8142 = 0;
	var uLocal_8143 = 0;
	var uLocal_8144 = 0;
	var uLocal_8145 = 0;
	var uLocal_8146 = 0;
	var uLocal_8147 = 1065353216;
	var uLocal_8148 = 0;
	var uLocal_8149 = 0;
	var uLocal_8150 = 0;
	var uLocal_8151 = 0;
	var uLocal_8152 = 0;
	var uLocal_8153 = 0;
	var uLocal_8154 = 0;
	var uLocal_8155 = 0;
	var uLocal_8156 = 0;
	var uLocal_8157 = 0;
	var uLocal_8158 = 0;
	var uLocal_8159 = 0;
	var uLocal_8160 = 0;
	var uLocal_8161 = 0;
	var uLocal_8162 = 0;
	var uLocal_8163 = 0;
	var uLocal_8164 = 0;
	var uLocal_8165 = 0;
	var uLocal_8166 = 0;
	var uLocal_8167 = 0;
	var uLocal_8168 = 0;
	var uLocal_8169 = 0;
	var uLocal_8170 = 0;
	var uLocal_8171 = 0;
	var uLocal_8172 = 0;
	var uLocal_8173 = 0;
	var uLocal_8174 = -1;
	var uLocal_8175 = 0;
	var uLocal_8176 = 0;
	var uLocal_8177 = 0;
	var uLocal_8178 = 0;
	var uLocal_8179 = 0;
	var uLocal_8180 = 0;
	var uLocal_8181 = 0;
	var uLocal_8182 = 0;
	var uLocal_8183 = 0;
	var uLocal_8184 = 0;
	var uLocal_8185 = 0;
	var uLocal_8186 = 0;
	var uLocal_8187 = 0;
	var uLocal_8188 = 0;
	var uLocal_8189 = 0;
	var uLocal_8190 = 0;
	var uLocal_8191 = 0;
	var uLocal_8192 = 0;
	var uLocal_8193 = 0;
	var uLocal_8194 = 0;
	var uLocal_8195 = 0;
	var uLocal_8196 = 0;
	var uLocal_8197 = 0;
	var uLocal_8198 = 0;
	var uLocal_8199 = 0;
	var uLocal_8200 = 0;
	var uLocal_8201 = 0;
	var uLocal_8202 = 0;
	var uLocal_8203 = 0;
	var uLocal_8204 = 1065353216;
	var uLocal_8205 = 0;
	var uLocal_8206 = 0;
	var uLocal_8207 = 0;
	var uLocal_8208 = 0;
	var uLocal_8209 = 0;
	var uLocal_8210 = 0;
	var uLocal_8211 = 0;
	var uLocal_8212 = 0;
	var uLocal_8213 = 0;
	var uLocal_8214 = 0;
	var uLocal_8215 = 0;
	var uLocal_8216 = 0;
	var uLocal_8217 = 0;
	var uLocal_8218 = 0;
	var uLocal_8219 = 0;
	var uLocal_8220 = 0;
	var uLocal_8221 = 0;
	var uLocal_8222 = 0;
	var uLocal_8223 = 0;
	var uLocal_8224 = 0;
	var uLocal_8225 = 0;
	var uLocal_8226 = 0;
	var uLocal_8227 = 0;
	var uLocal_8228 = 0;
	var uLocal_8229 = 0;
	var uLocal_8230 = 0;
	var uLocal_8231 = -1;
	var uLocal_8232 = 0;
	var uLocal_8233 = 0;
	var uLocal_8234 = 0;
	var uLocal_8235 = 0;
	var uLocal_8236 = 0;
	var uLocal_8237 = 0;
	var uLocal_8238 = 0;
	var uLocal_8239 = 0;
	var uLocal_8240 = 0;
	var uLocal_8241 = 0;
	var uLocal_8242 = 0;
	var uLocal_8243 = 0;
	var uLocal_8244 = 0;
	var uLocal_8245 = 0;
	var uLocal_8246 = 0;
	var uLocal_8247 = 0;
	var uLocal_8248 = 0;
	var uLocal_8249 = 0;
	var uLocal_8250 = 0;
	var uLocal_8251 = 0;
	var uLocal_8252 = 0;
	var uLocal_8253 = 0;
	var uLocal_8254 = 0;
	var uLocal_8255 = 0;
	var uLocal_8256 = 0;
	var uLocal_8257 = 0;
	var uLocal_8258 = 0;
	var uLocal_8259 = 0;
	var uLocal_8260 = 0;
	var uLocal_8261 = 1065353216;
	var uLocal_8262 = 0;
	var uLocal_8263 = 0;
	var uLocal_8264 = 0;
	var uLocal_8265 = 0;
	var uLocal_8266 = 0;
	var uLocal_8267 = 0;
	var uLocal_8268 = 0;
	var uLocal_8269 = 0;
	var uLocal_8270 = 0;
	var uLocal_8271 = 0;
	var uLocal_8272 = 0;
	var uLocal_8273 = 0;
	var uLocal_8274 = 0;
	var uLocal_8275 = 0;
	var uLocal_8276 = 0;
	var uLocal_8277 = 0;
	var uLocal_8278 = 0;
	var uLocal_8279 = 0;
	var uLocal_8280 = 0;
	var uLocal_8281 = 0;
	var uLocal_8282 = 0;
	var uLocal_8283 = 0;
	var uLocal_8284 = 0;
	var uLocal_8285 = 0;
	var uLocal_8286 = 0;
	var uLocal_8287 = 0;
	var uLocal_8288 = -1;
	var uLocal_8289 = 0;
	var uLocal_8290 = 0;
	var uLocal_8291 = 0;
	var uLocal_8292 = 0;
	var uLocal_8293 = 0;
	var uLocal_8294 = 0;
	var uLocal_8295 = 0;
	var uLocal_8296 = 0;
	var uLocal_8297 = 0;
	var uLocal_8298 = 0;
	var uLocal_8299 = 0;
	var uLocal_8300 = 0;
	var uLocal_8301 = 0;
	var uLocal_8302 = 0;
	var uLocal_8303 = 0;
	var uLocal_8304 = 0;
	var uLocal_8305 = 0;
	var uLocal_8306 = 0;
	var uLocal_8307 = 0;
	var uLocal_8308 = 0;
	var uLocal_8309 = 0;
	var uLocal_8310 = 0;
	var uLocal_8311 = 0;
	var uLocal_8312 = 0;
	var uLocal_8313 = 0;
	var uLocal_8314 = 0;
	var uLocal_8315 = 0;
	var uLocal_8316 = 0;
	var uLocal_8317 = 0;
	var uLocal_8318 = 1065353216;
	var uLocal_8319 = 0;
	var uLocal_8320 = 0;
	var uLocal_8321 = 0;
	var uLocal_8322 = 0;
	var uLocal_8323 = 0;
	var uLocal_8324 = 0;
	var uLocal_8325 = 0;
	var uLocal_8326 = 0;
	var uLocal_8327 = 0;
	var uLocal_8328 = 0;
	var uLocal_8329 = 0;
	var uLocal_8330 = 0;
	var uLocal_8331 = 0;
	var uLocal_8332 = 0;
	var uLocal_8333 = 0;
	var uLocal_8334 = 0;
	var uLocal_8335 = 0;
	var uLocal_8336 = 0;
	var uLocal_8337 = 0;
	var uLocal_8338 = 0;
	var uLocal_8339 = 0;
	var uLocal_8340 = 0;
	var uLocal_8341 = 0;
	var uLocal_8342 = 0;
	var uLocal_8343 = 0;
	var uLocal_8344 = 0;
	var uLocal_8345 = -1;
	var uLocal_8346 = 0;
	var uLocal_8347 = 0;
	var uLocal_8348 = 0;
	var uLocal_8349 = 0;
	var uLocal_8350 = 0;
	var uLocal_8351 = 0;
	var uLocal_8352 = 0;
	var uLocal_8353 = 0;
	var uLocal_8354 = 0;
	var uLocal_8355 = 0;
	var uLocal_8356 = 0;
	var uLocal_8357 = 0;
	var uLocal_8358 = 0;
	var uLocal_8359 = 0;
	var uLocal_8360 = 0;
	var uLocal_8361 = 0;
	var uLocal_8362 = 0;
	var uLocal_8363 = 0;
	var uLocal_8364 = 0;
	var uLocal_8365 = 0;
	var uLocal_8366 = 0;
	var uLocal_8367 = 0;
	var uLocal_8368 = 0;
	var uLocal_8369 = 0;
	var uLocal_8370 = 0;
	var uLocal_8371 = 0;
	var uLocal_8372 = 0;
	var uLocal_8373 = 0;
	var uLocal_8374 = 0;
	var uLocal_8375 = 1065353216;
	var uLocal_8376 = 0;
	var uLocal_8377 = 0;
	var uLocal_8378 = 0;
	var uLocal_8379 = 0;
	var uLocal_8380 = 0;
	var uLocal_8381 = 0;
	var uLocal_8382 = 0;
	var uLocal_8383 = 0;
	var uLocal_8384 = 0;
	var uLocal_8385 = 0;
	var uLocal_8386 = 0;
	var uLocal_8387 = 0;
	var uLocal_8388 = 0;
	var uLocal_8389 = 0;
	var uLocal_8390 = 0;
	var uLocal_8391 = 0;
	var uLocal_8392 = 0;
	var uLocal_8393 = 0;
	var uLocal_8394 = 0;
	var uLocal_8395 = 0;
	var uLocal_8396 = 0;
	var uLocal_8397 = 0;
	var uLocal_8398 = 0;
	var uLocal_8399 = 0;
	var uLocal_8400 = 0;
	var uLocal_8401 = 0;
	var uLocal_8402 = -1;
	var uLocal_8403 = 0;
	var uLocal_8404 = 0;
	var uLocal_8405 = 0;
	var uLocal_8406 = 0;
	var uLocal_8407 = 0;
	var uLocal_8408 = 0;
	var uLocal_8409 = 0;
	var uLocal_8410 = 0;
	var uLocal_8411 = 0;
	var uLocal_8412 = 0;
	var uLocal_8413 = 0;
	var uLocal_8414 = 0;
	var uLocal_8415 = 0;
	var uLocal_8416 = 0;
	var uLocal_8417 = 0;
	var uLocal_8418 = 0;
	var uLocal_8419 = 0;
	var uLocal_8420 = 0;
	var uLocal_8421 = 0;
	var uLocal_8422 = 0;
	var uLocal_8423 = 0;
	var uLocal_8424 = 0;
	var uLocal_8425 = 0;
	var uLocal_8426 = 0;
	var uLocal_8427 = 0;
	var uLocal_8428 = 0;
	var uLocal_8429 = 0;
	var uLocal_8430 = 0;
	var uLocal_8431 = 0;
	var uLocal_8432 = 1065353216;
	var uLocal_8433 = 0;
	var uLocal_8434 = 0;
	var uLocal_8435 = 0;
	var uLocal_8436 = 0;
	var uLocal_8437 = 0;
	var uLocal_8438 = 0;
	var uLocal_8439 = 0;
	var uLocal_8440 = 0;
	var uLocal_8441 = 0;
	var uLocal_8442 = 0;
	var uLocal_8443 = 0;
	var uLocal_8444 = 0;
	var uLocal_8445 = 0;
	var uLocal_8446 = 0;
	var uLocal_8447 = 0;
	var uLocal_8448 = 0;
	var uLocal_8449 = 0;
	var uLocal_8450 = 0;
	var uLocal_8451 = 0;
	var uLocal_8452 = 0;
	var uLocal_8453 = 0;
	var uLocal_8454 = 0;
	var uLocal_8455 = 0;
	var uLocal_8456 = 0;
	var uLocal_8457 = 0;
	var uLocal_8458 = 0;
	var uLocal_8459 = -1;
	var uLocal_8460 = 0;
	var uLocal_8461 = 0;
	var uLocal_8462 = 0;
	var uLocal_8463 = 0;
	var uLocal_8464 = 0;
	var uLocal_8465 = 0;
	var uLocal_8466 = 0;
	var uLocal_8467 = 0;
	var uLocal_8468 = 0;
	var uLocal_8469 = 0;
	var uLocal_8470 = 0;
	var uLocal_8471 = 0;
	var uLocal_8472 = 0;
	var uLocal_8473 = 0;
	var uLocal_8474 = 0;
	var uLocal_8475 = 0;
	var uLocal_8476 = 0;
	var uLocal_8477 = 0;
	var uLocal_8478 = 0;
	var uLocal_8479 = 0;
	var uLocal_8480 = 0;
	var uLocal_8481 = 0;
	var uLocal_8482 = 0;
	var uLocal_8483 = 0;
	var uLocal_8484 = 0;
	var uLocal_8485 = 0;
	var uLocal_8486 = 0;
	var uLocal_8487 = 0;
	var uLocal_8488 = 0;
	var uLocal_8489 = 1065353216;
	var uLocal_8490 = 0;
	var uLocal_8491 = 0;
	var uLocal_8492 = 0;
	var uLocal_8493 = 0;
	var uLocal_8494 = 0;
	var uLocal_8495 = 0;
	var uLocal_8496 = 0;
	var uLocal_8497 = 0;
	var uLocal_8498 = 0;
	var uLocal_8499 = 0;
	var uLocal_8500 = 0;
	var uLocal_8501 = 0;
	var uLocal_8502 = 0;
	var uLocal_8503 = 0;
	var uLocal_8504 = 0;
	var uLocal_8505 = 0;
	var uLocal_8506 = 0;
	var uLocal_8507 = 0;
	var uLocal_8508 = 0;
	var uLocal_8509 = 0;
	var uLocal_8510 = 0;
	var uLocal_8511 = 0;
	var uLocal_8512 = 0;
	var uLocal_8513 = 16;
	var uLocal_8514 = 0;
	var uLocal_8515 = -1082130432;
	var uLocal_8516 = 0;
	var uLocal_8517 = -1082130432;
	var uLocal_8518 = 0;
	var uLocal_8519 = -1082130432;
	var uLocal_8520 = 0;
	var uLocal_8521 = -1082130432;
	var uLocal_8522 = 0;
	var uLocal_8523 = -1082130432;
	var uLocal_8524 = 0;
	var uLocal_8525 = -1082130432;
	var uLocal_8526 = 0;
	var uLocal_8527 = -1082130432;
	var uLocal_8528 = 0;
	var uLocal_8529 = -1082130432;
	var uLocal_8530 = 0;
	var uLocal_8531 = -1082130432;
	var uLocal_8532 = 0;
	var uLocal_8533 = -1082130432;
	var uLocal_8534 = 0;
	var uLocal_8535 = -1082130432;
	var uLocal_8536 = 0;
	var uLocal_8537 = -1082130432;
	var uLocal_8538 = 0;
	var uLocal_8539 = -1082130432;
	var uLocal_8540 = 0;
	var uLocal_8541 = -1082130432;
	var uLocal_8542 = 0;
	var uLocal_8543 = -1082130432;
	var uLocal_8544 = 0;
	var uLocal_8545 = -1082130432;
	var uLocal_8546 = 16;
	var uLocal_8547 = 0;
	var uLocal_8548 = -1082130432;
	var uLocal_8549 = 0;
	var uLocal_8550 = -1082130432;
	var uLocal_8551 = 0;
	var uLocal_8552 = -1082130432;
	var uLocal_8553 = 0;
	var uLocal_8554 = -1082130432;
	var uLocal_8555 = 0;
	var uLocal_8556 = -1082130432;
	var uLocal_8557 = 0;
	var uLocal_8558 = -1082130432;
	var uLocal_8559 = 0;
	var uLocal_8560 = -1082130432;
	var uLocal_8561 = 0;
	var uLocal_8562 = -1082130432;
	var uLocal_8563 = 0;
	var uLocal_8564 = -1082130432;
	var uLocal_8565 = 0;
	var uLocal_8566 = -1082130432;
	var uLocal_8567 = 0;
	var uLocal_8568 = -1082130432;
	var uLocal_8569 = 0;
	var uLocal_8570 = -1082130432;
	var uLocal_8571 = 0;
	var uLocal_8572 = -1082130432;
	var uLocal_8573 = 0;
	var uLocal_8574 = -1082130432;
	var uLocal_8575 = 0;
	var uLocal_8576 = -1082130432;
	var uLocal_8577 = 0;
	var uLocal_8578 = -1082130432;
	var uLocal_8579 = 0;
	var uLocal_8580 = 0;
	var uLocal_8581 = 0;
	var uLocal_8582 = 0;
	var uLocal_8583 = 0;
	var uLocal_8584 = 0;
	var uLocal_8585 = 0;
	var uLocal_8586 = 0;
	var uLocal_8587 = 0;
	var uLocal_8588 = 0;
	var uLocal_8589 = 0;
	var uLocal_8590 = 0;
	var uLocal_8591 = 0;
	var uLocal_8592 = 0;
	var uLocal_8593 = 0;
	var uLocal_8594 = 0;
	var uLocal_8595 = -1082130432;
	var uLocal_8596 = -1082130432;
	var uLocal_8597 = 1;
	var uLocal_8598 = 1;
	var uLocal_8599 = 1;
	var uLocal_8600 = -1;
	var uLocal_8601 = -1;
	var uLocal_8602 = -1;
	struct<2> Local_8603 = { 0, 0 } ;
	var uLocal_8605 = 0;
	var uLocal_8606 = 0;
	var uLocal_8607 = 2;
	var uLocal_8608 = 0;
	var uLocal_8609 = 0;
	var uLocal_8610 = 2;
	var uLocal_8611 = 0;
	var uLocal_8612 = 0;
	var uLocal_8613 = 20;
	var uLocal_8614 = 0;
	var uLocal_8615 = 0;
	var uLocal_8616 = 0;
	var uLocal_8617 = -1;
	var uLocal_8618 = 0;
	var uLocal_8619 = 0;
	var uLocal_8620 = 0;
	var uLocal_8621 = 0;
	var uLocal_8622 = 0;
	var uLocal_8623 = 0;
	var uLocal_8624 = 0;
	var uLocal_8625 = 0;
	var uLocal_8626 = 0;
	var uLocal_8627 = 0;
	var uLocal_8628 = 0;
	var uLocal_8629 = 0;
	var uLocal_8630 = 0;
	var uLocal_8631 = 0;
	var uLocal_8632 = 0;
	var uLocal_8633 = 0;
	var uLocal_8634 = 0;
	var uLocal_8635 = 0;
	var uLocal_8636 = 0;
	var uLocal_8637 = 0;
	var uLocal_8638 = 0;
	var uLocal_8639 = 0;
	var uLocal_8640 = 0;
	var uLocal_8641 = 0;
	var uLocal_8642 = 0;
	var uLocal_8643 = 0;
	var uLocal_8644 = 0;
	var uLocal_8645 = 0;
	var uLocal_8646 = 0;
	var uLocal_8647 = 1065353216;
	var uLocal_8648 = 0;
	var uLocal_8649 = 0;
	var uLocal_8650 = 0;
	var uLocal_8651 = 0;
	var uLocal_8652 = 0;
	var uLocal_8653 = 0;
	var uLocal_8654 = 0;
	var uLocal_8655 = 0;
	var uLocal_8656 = 0;
	var uLocal_8657 = 0;
	var uLocal_8658 = 0;
	var uLocal_8659 = 0;
	var uLocal_8660 = 0;
	var uLocal_8661 = 0;
	var uLocal_8662 = 0;
	var uLocal_8663 = 0;
	var uLocal_8664 = 0;
	var uLocal_8665 = 0;
	var uLocal_8666 = 0;
	var uLocal_8667 = 0;
	var uLocal_8668 = 0;
	var uLocal_8669 = 0;
	var uLocal_8670 = 0;
	var uLocal_8671 = 0;
	var uLocal_8672 = 0;
	var uLocal_8673 = 0;
	var uLocal_8674 = -1;
	var uLocal_8675 = 0;
	var uLocal_8676 = 0;
	var uLocal_8677 = 0;
	var uLocal_8678 = 0;
	var uLocal_8679 = 0;
	var uLocal_8680 = 0;
	var uLocal_8681 = 0;
	var uLocal_8682 = 0;
	var uLocal_8683 = 0;
	var uLocal_8684 = 0;
	var uLocal_8685 = 0;
	var uLocal_8686 = 0;
	var uLocal_8687 = 0;
	var uLocal_8688 = 0;
	var uLocal_8689 = 0;
	var uLocal_8690 = 0;
	var uLocal_8691 = 0;
	var uLocal_8692 = 0;
	var uLocal_8693 = 0;
	var uLocal_8694 = 0;
	var uLocal_8695 = 0;
	var uLocal_8696 = 0;
	var uLocal_8697 = 0;
	var uLocal_8698 = 0;
	var uLocal_8699 = 0;
	var uLocal_8700 = 0;
	var uLocal_8701 = 0;
	var uLocal_8702 = 0;
	var uLocal_8703 = 0;
	var uLocal_8704 = 1065353216;
	var uLocal_8705 = 0;
	var uLocal_8706 = 0;
	var uLocal_8707 = 0;
	var uLocal_8708 = 0;
	var uLocal_8709 = 0;
	var uLocal_8710 = 0;
	var uLocal_8711 = 0;
	var uLocal_8712 = 0;
	var uLocal_8713 = 0;
	var uLocal_8714 = 0;
	var uLocal_8715 = 0;
	var uLocal_8716 = 0;
	var uLocal_8717 = 0;
	var uLocal_8718 = 0;
	var uLocal_8719 = 0;
	var uLocal_8720 = 0;
	var uLocal_8721 = 0;
	var uLocal_8722 = 0;
	var uLocal_8723 = 0;
	var uLocal_8724 = 0;
	var uLocal_8725 = 0;
	var uLocal_8726 = 0;
	var uLocal_8727 = 0;
	var uLocal_8728 = 0;
	var uLocal_8729 = 0;
	var uLocal_8730 = 0;
	var uLocal_8731 = -1;
	var uLocal_8732 = 0;
	var uLocal_8733 = 0;
	var uLocal_8734 = 0;
	var uLocal_8735 = 0;
	var uLocal_8736 = 0;
	var uLocal_8737 = 0;
	var uLocal_8738 = 0;
	var uLocal_8739 = 0;
	var uLocal_8740 = 0;
	var uLocal_8741 = 0;
	var uLocal_8742 = 0;
	var uLocal_8743 = 0;
	var uLocal_8744 = 0;
	var uLocal_8745 = 0;
	var uLocal_8746 = 0;
	var uLocal_8747 = 0;
	var uLocal_8748 = 0;
	var uLocal_8749 = 0;
	var uLocal_8750 = 0;
	var uLocal_8751 = 0;
	var uLocal_8752 = 0;
	var uLocal_8753 = 0;
	var uLocal_8754 = 0;
	var uLocal_8755 = 0;
	var uLocal_8756 = 0;
	var uLocal_8757 = 0;
	var uLocal_8758 = 0;
	var uLocal_8759 = 0;
	var uLocal_8760 = 0;
	var uLocal_8761 = 1065353216;
	var uLocal_8762 = 0;
	var uLocal_8763 = 0;
	var uLocal_8764 = 0;
	var uLocal_8765 = 0;
	var uLocal_8766 = 0;
	var uLocal_8767 = 0;
	var uLocal_8768 = 0;
	var uLocal_8769 = 0;
	var uLocal_8770 = 0;
	var uLocal_8771 = 0;
	var uLocal_8772 = 0;
	var uLocal_8773 = 0;
	var uLocal_8774 = 0;
	var uLocal_8775 = 0;
	var uLocal_8776 = 0;
	var uLocal_8777 = 0;
	var uLocal_8778 = 0;
	var uLocal_8779 = 0;
	var uLocal_8780 = 0;
	var uLocal_8781 = 0;
	var uLocal_8782 = 0;
	var uLocal_8783 = 0;
	var uLocal_8784 = 0;
	var uLocal_8785 = 0;
	var uLocal_8786 = 0;
	var uLocal_8787 = 0;
	var uLocal_8788 = -1;
	var uLocal_8789 = 0;
	var uLocal_8790 = 0;
	var uLocal_8791 = 0;
	var uLocal_8792 = 0;
	var uLocal_8793 = 0;
	var uLocal_8794 = 0;
	var uLocal_8795 = 0;
	var uLocal_8796 = 0;
	var uLocal_8797 = 0;
	var uLocal_8798 = 0;
	var uLocal_8799 = 0;
	var uLocal_8800 = 0;
	var uLocal_8801 = 0;
	var uLocal_8802 = 0;
	var uLocal_8803 = 0;
	var uLocal_8804 = 0;
	var uLocal_8805 = 0;
	var uLocal_8806 = 0;
	var uLocal_8807 = 0;
	var uLocal_8808 = 0;
	var uLocal_8809 = 0;
	var uLocal_8810 = 0;
	var uLocal_8811 = 0;
	var uLocal_8812 = 0;
	var uLocal_8813 = 0;
	var uLocal_8814 = 0;
	var uLocal_8815 = 0;
	var uLocal_8816 = 0;
	var uLocal_8817 = 0;
	var uLocal_8818 = 1065353216;
	var uLocal_8819 = 0;
	var uLocal_8820 = 0;
	var uLocal_8821 = 0;
	var uLocal_8822 = 0;
	var uLocal_8823 = 0;
	var uLocal_8824 = 0;
	var uLocal_8825 = 0;
	var uLocal_8826 = 0;
	var uLocal_8827 = 0;
	var uLocal_8828 = 0;
	var uLocal_8829 = 0;
	var uLocal_8830 = 0;
	var uLocal_8831 = 0;
	var uLocal_8832 = 0;
	var uLocal_8833 = 0;
	var uLocal_8834 = 0;
	var uLocal_8835 = 0;
	var uLocal_8836 = 0;
	var uLocal_8837 = 0;
	var uLocal_8838 = 0;
	var uLocal_8839 = 0;
	var uLocal_8840 = 0;
	var uLocal_8841 = 0;
	var uLocal_8842 = 0;
	var uLocal_8843 = 0;
	var uLocal_8844 = 0;
	var uLocal_8845 = -1;
	var uLocal_8846 = 0;
	var uLocal_8847 = 0;
	var uLocal_8848 = 0;
	var uLocal_8849 = 0;
	var uLocal_8850 = 0;
	var uLocal_8851 = 0;
	var uLocal_8852 = 0;
	var uLocal_8853 = 0;
	var uLocal_8854 = 0;
	var uLocal_8855 = 0;
	var uLocal_8856 = 0;
	var uLocal_8857 = 0;
	var uLocal_8858 = 0;
	var uLocal_8859 = 0;
	var uLocal_8860 = 0;
	var uLocal_8861 = 0;
	var uLocal_8862 = 0;
	var uLocal_8863 = 0;
	var uLocal_8864 = 0;
	var uLocal_8865 = 0;
	var uLocal_8866 = 0;
	var uLocal_8867 = 0;
	var uLocal_8868 = 0;
	var uLocal_8869 = 0;
	var uLocal_8870 = 0;
	var uLocal_8871 = 0;
	var uLocal_8872 = 0;
	var uLocal_8873 = 0;
	var uLocal_8874 = 0;
	var uLocal_8875 = 1065353216;
	var uLocal_8876 = 0;
	var uLocal_8877 = 0;
	var uLocal_8878 = 0;
	var uLocal_8879 = 0;
	var uLocal_8880 = 0;
	var uLocal_8881 = 0;
	var uLocal_8882 = 0;
	var uLocal_8883 = 0;
	var uLocal_8884 = 0;
	var uLocal_8885 = 0;
	var uLocal_8886 = 0;
	var uLocal_8887 = 0;
	var uLocal_8888 = 0;
	var uLocal_8889 = 0;
	var uLocal_8890 = 0;
	var uLocal_8891 = 0;
	var uLocal_8892 = 0;
	var uLocal_8893 = 0;
	var uLocal_8894 = 0;
	var uLocal_8895 = 0;
	var uLocal_8896 = 0;
	var uLocal_8897 = 0;
	var uLocal_8898 = 0;
	var uLocal_8899 = 0;
	var uLocal_8900 = 0;
	var uLocal_8901 = 0;
	var uLocal_8902 = -1;
	var uLocal_8903 = 0;
	var uLocal_8904 = 0;
	var uLocal_8905 = 0;
	var uLocal_8906 = 0;
	var uLocal_8907 = 0;
	var uLocal_8908 = 0;
	var uLocal_8909 = 0;
	var uLocal_8910 = 0;
	var uLocal_8911 = 0;
	var uLocal_8912 = 0;
	var uLocal_8913 = 0;
	var uLocal_8914 = 0;
	var uLocal_8915 = 0;
	var uLocal_8916 = 0;
	var uLocal_8917 = 0;
	var uLocal_8918 = 0;
	var uLocal_8919 = 0;
	var uLocal_8920 = 0;
	var uLocal_8921 = 0;
	var uLocal_8922 = 0;
	var uLocal_8923 = 0;
	var uLocal_8924 = 0;
	var uLocal_8925 = 0;
	var uLocal_8926 = 0;
	var uLocal_8927 = 0;
	var uLocal_8928 = 0;
	var uLocal_8929 = 0;
	var uLocal_8930 = 0;
	var uLocal_8931 = 0;
	var uLocal_8932 = 1065353216;
	var uLocal_8933 = 0;
	var uLocal_8934 = 0;
	var uLocal_8935 = 0;
	var uLocal_8936 = 0;
	var uLocal_8937 = 0;
	var uLocal_8938 = 0;
	var uLocal_8939 = 0;
	var uLocal_8940 = 0;
	var uLocal_8941 = 0;
	var uLocal_8942 = 0;
	var uLocal_8943 = 0;
	var uLocal_8944 = 0;
	var uLocal_8945 = 0;
	var uLocal_8946 = 0;
	var uLocal_8947 = 0;
	var uLocal_8948 = 0;
	var uLocal_8949 = 0;
	var uLocal_8950 = 0;
	var uLocal_8951 = 0;
	var uLocal_8952 = 0;
	var uLocal_8953 = 0;
	var uLocal_8954 = 0;
	var uLocal_8955 = 0;
	var uLocal_8956 = 0;
	var uLocal_8957 = 0;
	var uLocal_8958 = 0;
	var uLocal_8959 = -1;
	var uLocal_8960 = 0;
	var uLocal_8961 = 0;
	var uLocal_8962 = 0;
	var uLocal_8963 = 0;
	var uLocal_8964 = 0;
	var uLocal_8965 = 0;
	var uLocal_8966 = 0;
	var uLocal_8967 = 0;
	var uLocal_8968 = 0;
	var uLocal_8969 = 0;
	var uLocal_8970 = 0;
	var uLocal_8971 = 0;
	var uLocal_8972 = 0;
	var uLocal_8973 = 0;
	var uLocal_8974 = 0;
	var uLocal_8975 = 0;
	var uLocal_8976 = 0;
	var uLocal_8977 = 0;
	var uLocal_8978 = 0;
	var uLocal_8979 = 0;
	var uLocal_8980 = 0;
	var uLocal_8981 = 0;
	var uLocal_8982 = 0;
	var uLocal_8983 = 0;
	var uLocal_8984 = 0;
	var uLocal_8985 = 0;
	var uLocal_8986 = 0;
	var uLocal_8987 = 0;
	var uLocal_8988 = 0;
	var uLocal_8989 = 1065353216;
	var uLocal_8990 = 0;
	var uLocal_8991 = 0;
	var uLocal_8992 = 0;
	var uLocal_8993 = 0;
	var uLocal_8994 = 0;
	var uLocal_8995 = 0;
	var uLocal_8996 = 0;
	var uLocal_8997 = 0;
	var uLocal_8998 = 0;
	var uLocal_8999 = 0;
	var uLocal_9000 = 0;
	var uLocal_9001 = 0;
	var uLocal_9002 = 0;
	var uLocal_9003 = 0;
	var uLocal_9004 = 0;
	var uLocal_9005 = 0;
	var uLocal_9006 = 0;
	var uLocal_9007 = 0;
	var uLocal_9008 = 0;
	var uLocal_9009 = 0;
	var uLocal_9010 = 0;
	var uLocal_9011 = 0;
	var uLocal_9012 = 0;
	var uLocal_9013 = 0;
	var uLocal_9014 = 0;
	var uLocal_9015 = 0;
	var uLocal_9016 = -1;
	var uLocal_9017 = 0;
	var uLocal_9018 = 0;
	var uLocal_9019 = 0;
	var uLocal_9020 = 0;
	var uLocal_9021 = 0;
	var uLocal_9022 = 0;
	var uLocal_9023 = 0;
	var uLocal_9024 = 0;
	var uLocal_9025 = 0;
	var uLocal_9026 = 0;
	var uLocal_9027 = 0;
	var uLocal_9028 = 0;
	var uLocal_9029 = 0;
	var uLocal_9030 = 0;
	var uLocal_9031 = 0;
	var uLocal_9032 = 0;
	var uLocal_9033 = 0;
	var uLocal_9034 = 0;
	var uLocal_9035 = 0;
	var uLocal_9036 = 0;
	var uLocal_9037 = 0;
	var uLocal_9038 = 0;
	var uLocal_9039 = 0;
	var uLocal_9040 = 0;
	var uLocal_9041 = 0;
	var uLocal_9042 = 0;
	var uLocal_9043 = 0;
	var uLocal_9044 = 0;
	var uLocal_9045 = 0;
	var uLocal_9046 = 1065353216;
	var uLocal_9047 = 0;
	var uLocal_9048 = 0;
	var uLocal_9049 = 0;
	var uLocal_9050 = 0;
	var uLocal_9051 = 0;
	var uLocal_9052 = 0;
	var uLocal_9053 = 0;
	var uLocal_9054 = 0;
	var uLocal_9055 = 0;
	var uLocal_9056 = 0;
	var uLocal_9057 = 0;
	var uLocal_9058 = 0;
	var uLocal_9059 = 0;
	var uLocal_9060 = 0;
	var uLocal_9061 = 0;
	var uLocal_9062 = 0;
	var uLocal_9063 = 0;
	var uLocal_9064 = 0;
	var uLocal_9065 = 0;
	var uLocal_9066 = 0;
	var uLocal_9067 = 0;
	var uLocal_9068 = 0;
	var uLocal_9069 = 0;
	var uLocal_9070 = 0;
	var uLocal_9071 = 0;
	var uLocal_9072 = 0;
	var uLocal_9073 = -1;
	var uLocal_9074 = 0;
	var uLocal_9075 = 0;
	var uLocal_9076 = 0;
	var uLocal_9077 = 0;
	var uLocal_9078 = 0;
	var uLocal_9079 = 0;
	var uLocal_9080 = 0;
	var uLocal_9081 = 0;
	var uLocal_9082 = 0;
	var uLocal_9083 = 0;
	var uLocal_9084 = 0;
	var uLocal_9085 = 0;
	var uLocal_9086 = 0;
	var uLocal_9087 = 0;
	var uLocal_9088 = 0;
	var uLocal_9089 = 0;
	var uLocal_9090 = 0;
	var uLocal_9091 = 0;
	var uLocal_9092 = 0;
	var uLocal_9093 = 0;
	var uLocal_9094 = 0;
	var uLocal_9095 = 0;
	var uLocal_9096 = 0;
	var uLocal_9097 = 0;
	var uLocal_9098 = 0;
	var uLocal_9099 = 0;
	var uLocal_9100 = 0;
	var uLocal_9101 = 0;
	var uLocal_9102 = 0;
	var uLocal_9103 = 1065353216;
	var uLocal_9104 = 0;
	var uLocal_9105 = 0;
	var uLocal_9106 = 0;
	var uLocal_9107 = 0;
	var uLocal_9108 = 0;
	var uLocal_9109 = 0;
	var uLocal_9110 = 0;
	var uLocal_9111 = 0;
	var uLocal_9112 = 0;
	var uLocal_9113 = 0;
	var uLocal_9114 = 0;
	var uLocal_9115 = 0;
	var uLocal_9116 = 0;
	var uLocal_9117 = 0;
	var uLocal_9118 = 0;
	var uLocal_9119 = 0;
	var uLocal_9120 = 0;
	var uLocal_9121 = 0;
	var uLocal_9122 = 0;
	var uLocal_9123 = 0;
	var uLocal_9124 = 0;
	var uLocal_9125 = 0;
	var uLocal_9126 = 0;
	var uLocal_9127 = 0;
	var uLocal_9128 = 0;
	var uLocal_9129 = 0;
	var uLocal_9130 = -1;
	var uLocal_9131 = 0;
	var uLocal_9132 = 0;
	var uLocal_9133 = 0;
	var uLocal_9134 = 0;
	var uLocal_9135 = 0;
	var uLocal_9136 = 0;
	var uLocal_9137 = 0;
	var uLocal_9138 = 0;
	var uLocal_9139 = 0;
	var uLocal_9140 = 0;
	var uLocal_9141 = 0;
	var uLocal_9142 = 0;
	var uLocal_9143 = 0;
	var uLocal_9144 = 0;
	var uLocal_9145 = 0;
	var uLocal_9146 = 0;
	var uLocal_9147 = 0;
	var uLocal_9148 = 0;
	var uLocal_9149 = 0;
	var uLocal_9150 = 0;
	var uLocal_9151 = 0;
	var uLocal_9152 = 0;
	var uLocal_9153 = 0;
	var uLocal_9154 = 0;
	var uLocal_9155 = 0;
	var uLocal_9156 = 0;
	var uLocal_9157 = 0;
	var uLocal_9158 = 0;
	var uLocal_9159 = 0;
	var uLocal_9160 = 1065353216;
	var uLocal_9161 = 0;
	var uLocal_9162 = 0;
	var uLocal_9163 = 0;
	var uLocal_9164 = 0;
	var uLocal_9165 = 0;
	var uLocal_9166 = 0;
	var uLocal_9167 = 0;
	var uLocal_9168 = 0;
	var uLocal_9169 = 0;
	var uLocal_9170 = 0;
	var uLocal_9171 = 0;
	var uLocal_9172 = 0;
	var uLocal_9173 = 0;
	var uLocal_9174 = 0;
	var uLocal_9175 = 0;
	var uLocal_9176 = 0;
	var uLocal_9177 = 0;
	var uLocal_9178 = 0;
	var uLocal_9179 = 0;
	var uLocal_9180 = 0;
	var uLocal_9181 = 0;
	var uLocal_9182 = 0;
	var uLocal_9183 = 0;
	var uLocal_9184 = 0;
	var uLocal_9185 = 0;
	var uLocal_9186 = 0;
	var uLocal_9187 = -1;
	var uLocal_9188 = 0;
	var uLocal_9189 = 0;
	var uLocal_9190 = 0;
	var uLocal_9191 = 0;
	var uLocal_9192 = 0;
	var uLocal_9193 = 0;
	var uLocal_9194 = 0;
	var uLocal_9195 = 0;
	var uLocal_9196 = 0;
	var uLocal_9197 = 0;
	var uLocal_9198 = 0;
	var uLocal_9199 = 0;
	var uLocal_9200 = 0;
	var uLocal_9201 = 0;
	var uLocal_9202 = 0;
	var uLocal_9203 = 0;
	var uLocal_9204 = 0;
	var uLocal_9205 = 0;
	var uLocal_9206 = 0;
	var uLocal_9207 = 0;
	var uLocal_9208 = 0;
	var uLocal_9209 = 0;
	var uLocal_9210 = 0;
	var uLocal_9211 = 0;
	var uLocal_9212 = 0;
	var uLocal_9213 = 0;
	var uLocal_9214 = 0;
	var uLocal_9215 = 0;
	var uLocal_9216 = 0;
	var uLocal_9217 = 1065353216;
	var uLocal_9218 = 0;
	var uLocal_9219 = 0;
	var uLocal_9220 = 0;
	var uLocal_9221 = 0;
	var uLocal_9222 = 0;
	var uLocal_9223 = 0;
	var uLocal_9224 = 0;
	var uLocal_9225 = 0;
	var uLocal_9226 = 0;
	var uLocal_9227 = 0;
	var uLocal_9228 = 0;
	var uLocal_9229 = 0;
	var uLocal_9230 = 0;
	var uLocal_9231 = 0;
	var uLocal_9232 = 0;
	var uLocal_9233 = 0;
	var uLocal_9234 = 0;
	var uLocal_9235 = 0;
	var uLocal_9236 = 0;
	var uLocal_9237 = 0;
	var uLocal_9238 = 0;
	var uLocal_9239 = 0;
	var uLocal_9240 = 0;
	var uLocal_9241 = 0;
	var uLocal_9242 = 0;
	var uLocal_9243 = 0;
	var uLocal_9244 = -1;
	var uLocal_9245 = 0;
	var uLocal_9246 = 0;
	var uLocal_9247 = 0;
	var uLocal_9248 = 0;
	var uLocal_9249 = 0;
	var uLocal_9250 = 0;
	var uLocal_9251 = 0;
	var uLocal_9252 = 0;
	var uLocal_9253 = 0;
	var uLocal_9254 = 0;
	var uLocal_9255 = 0;
	var uLocal_9256 = 0;
	var uLocal_9257 = 0;
	var uLocal_9258 = 0;
	var uLocal_9259 = 0;
	var uLocal_9260 = 0;
	var uLocal_9261 = 0;
	var uLocal_9262 = 0;
	var uLocal_9263 = 0;
	var uLocal_9264 = 0;
	var uLocal_9265 = 0;
	var uLocal_9266 = 0;
	var uLocal_9267 = 0;
	var uLocal_9268 = 0;
	var uLocal_9269 = 0;
	var uLocal_9270 = 0;
	var uLocal_9271 = 0;
	var uLocal_9272 = 0;
	var uLocal_9273 = 0;
	var uLocal_9274 = 1065353216;
	var uLocal_9275 = 0;
	var uLocal_9276 = 0;
	var uLocal_9277 = 0;
	var uLocal_9278 = 0;
	var uLocal_9279 = 0;
	var uLocal_9280 = 0;
	var uLocal_9281 = 0;
	var uLocal_9282 = 0;
	var uLocal_9283 = 0;
	var uLocal_9284 = 0;
	var uLocal_9285 = 0;
	var uLocal_9286 = 0;
	var uLocal_9287 = 0;
	var uLocal_9288 = 0;
	var uLocal_9289 = 0;
	var uLocal_9290 = 0;
	var uLocal_9291 = 0;
	var uLocal_9292 = 0;
	var uLocal_9293 = 0;
	var uLocal_9294 = 0;
	var uLocal_9295 = 0;
	var uLocal_9296 = 0;
	var uLocal_9297 = 0;
	var uLocal_9298 = 0;
	var uLocal_9299 = 0;
	var uLocal_9300 = 0;
	var uLocal_9301 = -1;
	var uLocal_9302 = 0;
	var uLocal_9303 = 0;
	var uLocal_9304 = 0;
	var uLocal_9305 = 0;
	var uLocal_9306 = 0;
	var uLocal_9307 = 0;
	var uLocal_9308 = 0;
	var uLocal_9309 = 0;
	var uLocal_9310 = 0;
	var uLocal_9311 = 0;
	var uLocal_9312 = 0;
	var uLocal_9313 = 0;
	var uLocal_9314 = 0;
	var uLocal_9315 = 0;
	var uLocal_9316 = 0;
	var uLocal_9317 = 0;
	var uLocal_9318 = 0;
	var uLocal_9319 = 0;
	var uLocal_9320 = 0;
	var uLocal_9321 = 0;
	var uLocal_9322 = 0;
	var uLocal_9323 = 0;
	var uLocal_9324 = 0;
	var uLocal_9325 = 0;
	var uLocal_9326 = 0;
	var uLocal_9327 = 0;
	var uLocal_9328 = 0;
	var uLocal_9329 = 0;
	var uLocal_9330 = 0;
	var uLocal_9331 = 1065353216;
	var uLocal_9332 = 0;
	var uLocal_9333 = 0;
	var uLocal_9334 = 0;
	var uLocal_9335 = 0;
	var uLocal_9336 = 0;
	var uLocal_9337 = 0;
	var uLocal_9338 = 0;
	var uLocal_9339 = 0;
	var uLocal_9340 = 0;
	var uLocal_9341 = 0;
	var uLocal_9342 = 0;
	var uLocal_9343 = 0;
	var uLocal_9344 = 0;
	var uLocal_9345 = 0;
	var uLocal_9346 = 0;
	var uLocal_9347 = 0;
	var uLocal_9348 = 0;
	var uLocal_9349 = 0;
	var uLocal_9350 = 0;
	var uLocal_9351 = 0;
	var uLocal_9352 = 0;
	var uLocal_9353 = 0;
	var uLocal_9354 = 0;
	var uLocal_9355 = 0;
	var uLocal_9356 = 0;
	var uLocal_9357 = 0;
	var uLocal_9358 = -1;
	var uLocal_9359 = 0;
	var uLocal_9360 = 0;
	var uLocal_9361 = 0;
	var uLocal_9362 = 0;
	var uLocal_9363 = 0;
	var uLocal_9364 = 0;
	var uLocal_9365 = 0;
	var uLocal_9366 = 0;
	var uLocal_9367 = 0;
	var uLocal_9368 = 0;
	var uLocal_9369 = 0;
	var uLocal_9370 = 0;
	var uLocal_9371 = 0;
	var uLocal_9372 = 0;
	var uLocal_9373 = 0;
	var uLocal_9374 = 0;
	var uLocal_9375 = 0;
	var uLocal_9376 = 0;
	var uLocal_9377 = 0;
	var uLocal_9378 = 0;
	var uLocal_9379 = 0;
	var uLocal_9380 = 0;
	var uLocal_9381 = 0;
	var uLocal_9382 = 0;
	var uLocal_9383 = 0;
	var uLocal_9384 = 0;
	var uLocal_9385 = 0;
	var uLocal_9386 = 0;
	var uLocal_9387 = 0;
	var uLocal_9388 = 1065353216;
	var uLocal_9389 = 0;
	var uLocal_9390 = 0;
	var uLocal_9391 = 0;
	var uLocal_9392 = 0;
	var uLocal_9393 = 0;
	var uLocal_9394 = 0;
	var uLocal_9395 = 0;
	var uLocal_9396 = 0;
	var uLocal_9397 = 0;
	var uLocal_9398 = 0;
	var uLocal_9399 = 0;
	var uLocal_9400 = 0;
	var uLocal_9401 = 0;
	var uLocal_9402 = 0;
	var uLocal_9403 = 0;
	var uLocal_9404 = 0;
	var uLocal_9405 = 0;
	var uLocal_9406 = 0;
	var uLocal_9407 = 0;
	var uLocal_9408 = 0;
	var uLocal_9409 = 0;
	var uLocal_9410 = 0;
	var uLocal_9411 = 0;
	var uLocal_9412 = 0;
	var uLocal_9413 = 0;
	var uLocal_9414 = 0;
	var uLocal_9415 = -1;
	var uLocal_9416 = 0;
	var uLocal_9417 = 0;
	var uLocal_9418 = 0;
	var uLocal_9419 = 0;
	var uLocal_9420 = 0;
	var uLocal_9421 = 0;
	var uLocal_9422 = 0;
	var uLocal_9423 = 0;
	var uLocal_9424 = 0;
	var uLocal_9425 = 0;
	var uLocal_9426 = 0;
	var uLocal_9427 = 0;
	var uLocal_9428 = 0;
	var uLocal_9429 = 0;
	var uLocal_9430 = 0;
	var uLocal_9431 = 0;
	var uLocal_9432 = 0;
	var uLocal_9433 = 0;
	var uLocal_9434 = 0;
	var uLocal_9435 = 0;
	var uLocal_9436 = 0;
	var uLocal_9437 = 0;
	var uLocal_9438 = 0;
	var uLocal_9439 = 0;
	var uLocal_9440 = 0;
	var uLocal_9441 = 0;
	var uLocal_9442 = 0;
	var uLocal_9443 = 0;
	var uLocal_9444 = 0;
	var uLocal_9445 = 1065353216;
	var uLocal_9446 = 0;
	var uLocal_9447 = 0;
	var uLocal_9448 = 0;
	var uLocal_9449 = 0;
	var uLocal_9450 = 0;
	var uLocal_9451 = 0;
	var uLocal_9452 = 0;
	var uLocal_9453 = 0;
	var uLocal_9454 = 0;
	var uLocal_9455 = 0;
	var uLocal_9456 = 0;
	var uLocal_9457 = 0;
	var uLocal_9458 = 0;
	var uLocal_9459 = 0;
	var uLocal_9460 = 0;
	var uLocal_9461 = 0;
	var uLocal_9462 = 0;
	var uLocal_9463 = 0;
	var uLocal_9464 = 0;
	var uLocal_9465 = 0;
	var uLocal_9466 = 0;
	var uLocal_9467 = 0;
	var uLocal_9468 = 0;
	var uLocal_9469 = 0;
	var uLocal_9470 = 0;
	var uLocal_9471 = 0;
	var uLocal_9472 = -1;
	var uLocal_9473 = 0;
	var uLocal_9474 = 0;
	var uLocal_9475 = 0;
	var uLocal_9476 = 0;
	var uLocal_9477 = 0;
	var uLocal_9478 = 0;
	var uLocal_9479 = 0;
	var uLocal_9480 = 0;
	var uLocal_9481 = 0;
	var uLocal_9482 = 0;
	var uLocal_9483 = 0;
	var uLocal_9484 = 0;
	var uLocal_9485 = 0;
	var uLocal_9486 = 0;
	var uLocal_9487 = 0;
	var uLocal_9488 = 0;
	var uLocal_9489 = 0;
	var uLocal_9490 = 0;
	var uLocal_9491 = 0;
	var uLocal_9492 = 0;
	var uLocal_9493 = 0;
	var uLocal_9494 = 0;
	var uLocal_9495 = 0;
	var uLocal_9496 = 0;
	var uLocal_9497 = 0;
	var uLocal_9498 = 0;
	var uLocal_9499 = 0;
	var uLocal_9500 = 0;
	var uLocal_9501 = 0;
	var uLocal_9502 = 1065353216;
	var uLocal_9503 = 0;
	var uLocal_9504 = 0;
	var uLocal_9505 = 0;
	var uLocal_9506 = 0;
	var uLocal_9507 = 0;
	var uLocal_9508 = 0;
	var uLocal_9509 = 0;
	var uLocal_9510 = 0;
	var uLocal_9511 = 0;
	var uLocal_9512 = 0;
	var uLocal_9513 = 0;
	var uLocal_9514 = 0;
	var uLocal_9515 = 0;
	var uLocal_9516 = 0;
	var uLocal_9517 = 0;
	var uLocal_9518 = 0;
	var uLocal_9519 = 0;
	var uLocal_9520 = 0;
	var uLocal_9521 = 0;
	var uLocal_9522 = 0;
	var uLocal_9523 = 0;
	var uLocal_9524 = 0;
	var uLocal_9525 = 0;
	var uLocal_9526 = 0;
	var uLocal_9527 = 0;
	var uLocal_9528 = 0;
	var uLocal_9529 = -1;
	var uLocal_9530 = 0;
	var uLocal_9531 = 0;
	var uLocal_9532 = 0;
	var uLocal_9533 = 0;
	var uLocal_9534 = 0;
	var uLocal_9535 = 0;
	var uLocal_9536 = 0;
	var uLocal_9537 = 0;
	var uLocal_9538 = 0;
	var uLocal_9539 = 0;
	var uLocal_9540 = 0;
	var uLocal_9541 = 0;
	var uLocal_9542 = 0;
	var uLocal_9543 = 0;
	var uLocal_9544 = 0;
	var uLocal_9545 = 0;
	var uLocal_9546 = 0;
	var uLocal_9547 = 0;
	var uLocal_9548 = 0;
	var uLocal_9549 = 0;
	var uLocal_9550 = 0;
	var uLocal_9551 = 0;
	var uLocal_9552 = 0;
	var uLocal_9553 = 0;
	var uLocal_9554 = 0;
	var uLocal_9555 = 0;
	var uLocal_9556 = 0;
	var uLocal_9557 = 0;
	var uLocal_9558 = 0;
	var uLocal_9559 = 1065353216;
	var uLocal_9560 = 0;
	var uLocal_9561 = 0;
	var uLocal_9562 = 0;
	var uLocal_9563 = 0;
	var uLocal_9564 = 0;
	var uLocal_9565 = 0;
	var uLocal_9566 = 0;
	var uLocal_9567 = 0;
	var uLocal_9568 = 0;
	var uLocal_9569 = 0;
	var uLocal_9570 = 0;
	var uLocal_9571 = 0;
	var uLocal_9572 = 0;
	var uLocal_9573 = 0;
	var uLocal_9574 = 0;
	var uLocal_9575 = 0;
	var uLocal_9576 = 0;
	var uLocal_9577 = 0;
	var uLocal_9578 = 0;
	var uLocal_9579 = 0;
	var uLocal_9580 = 0;
	var uLocal_9581 = 0;
	var uLocal_9582 = 0;
	var uLocal_9583 = 0;
	var uLocal_9584 = 0;
	var uLocal_9585 = 0;
	var uLocal_9586 = -1;
	var uLocal_9587 = 0;
	var uLocal_9588 = 0;
	var uLocal_9589 = 0;
	var uLocal_9590 = 0;
	var uLocal_9591 = 0;
	var uLocal_9592 = 0;
	var uLocal_9593 = 0;
	var uLocal_9594 = 0;
	var uLocal_9595 = 0;
	var uLocal_9596 = 0;
	var uLocal_9597 = 0;
	var uLocal_9598 = 0;
	var uLocal_9599 = 0;
	var uLocal_9600 = 0;
	var uLocal_9601 = 0;
	var uLocal_9602 = 0;
	var uLocal_9603 = 0;
	var uLocal_9604 = 0;
	var uLocal_9605 = 0;
	var uLocal_9606 = 0;
	var uLocal_9607 = 0;
	var uLocal_9608 = 0;
	var uLocal_9609 = 0;
	var uLocal_9610 = 0;
	var uLocal_9611 = 0;
	var uLocal_9612 = 0;
	var uLocal_9613 = 0;
	var uLocal_9614 = 0;
	var uLocal_9615 = 0;
	var uLocal_9616 = 1065353216;
	var uLocal_9617 = 0;
	var uLocal_9618 = 0;
	var uLocal_9619 = 0;
	var uLocal_9620 = 0;
	var uLocal_9621 = 0;
	var uLocal_9622 = 0;
	var uLocal_9623 = 0;
	var uLocal_9624 = 0;
	var uLocal_9625 = 0;
	var uLocal_9626 = 0;
	var uLocal_9627 = 0;
	var uLocal_9628 = 0;
	var uLocal_9629 = 0;
	var uLocal_9630 = 0;
	var uLocal_9631 = 0;
	var uLocal_9632 = 0;
	var uLocal_9633 = 0;
	var uLocal_9634 = 0;
	var uLocal_9635 = 0;
	var uLocal_9636 = 0;
	var uLocal_9637 = 0;
	var uLocal_9638 = 0;
	var uLocal_9639 = 0;
	var uLocal_9640 = 0;
	var uLocal_9641 = 0;
	var uLocal_9642 = 0;
	var uLocal_9643 = -1;
	var uLocal_9644 = 0;
	var uLocal_9645 = 0;
	var uLocal_9646 = 0;
	var uLocal_9647 = 0;
	var uLocal_9648 = 0;
	var uLocal_9649 = 0;
	var uLocal_9650 = 0;
	var uLocal_9651 = 0;
	var uLocal_9652 = 0;
	var uLocal_9653 = 0;
	var uLocal_9654 = 0;
	var uLocal_9655 = 0;
	var uLocal_9656 = 0;
	var uLocal_9657 = 0;
	var uLocal_9658 = 0;
	var uLocal_9659 = 0;
	var uLocal_9660 = 0;
	var uLocal_9661 = 0;
	var uLocal_9662 = 0;
	var uLocal_9663 = 0;
	var uLocal_9664 = 0;
	var uLocal_9665 = 0;
	var uLocal_9666 = 0;
	var uLocal_9667 = 0;
	var uLocal_9668 = 0;
	var uLocal_9669 = 0;
	var uLocal_9670 = 0;
	var uLocal_9671 = 0;
	var uLocal_9672 = 0;
	var uLocal_9673 = 1065353216;
	var uLocal_9674 = 0;
	var uLocal_9675 = 0;
	var uLocal_9676 = 0;
	var uLocal_9677 = 0;
	var uLocal_9678 = 0;
	var uLocal_9679 = 0;
	var uLocal_9680 = 0;
	var uLocal_9681 = 0;
	var uLocal_9682 = 0;
	var uLocal_9683 = 0;
	var uLocal_9684 = 0;
	var uLocal_9685 = 0;
	var uLocal_9686 = 0;
	var uLocal_9687 = 0;
	var uLocal_9688 = 0;
	var uLocal_9689 = 0;
	var uLocal_9690 = 0;
	var uLocal_9691 = 0;
	var uLocal_9692 = 0;
	var uLocal_9693 = 0;
	var uLocal_9694 = 0;
	var uLocal_9695 = 0;
	var uLocal_9696 = 0;
	var uLocal_9697 = 0;
	var uLocal_9698 = 0;
	var uLocal_9699 = 0;
	var uLocal_9700 = -1;
	var uLocal_9701 = 0;
	var uLocal_9702 = 0;
	var uLocal_9703 = 0;
	var uLocal_9704 = 0;
	var uLocal_9705 = 0;
	var uLocal_9706 = 0;
	var uLocal_9707 = 0;
	var uLocal_9708 = 0;
	var uLocal_9709 = 0;
	var uLocal_9710 = 0;
	var uLocal_9711 = 0;
	var uLocal_9712 = 0;
	var uLocal_9713 = 0;
	var uLocal_9714 = 0;
	var uLocal_9715 = 0;
	var uLocal_9716 = 0;
	var uLocal_9717 = 0;
	var uLocal_9718 = 0;
	var uLocal_9719 = 0;
	var uLocal_9720 = 0;
	var uLocal_9721 = 0;
	var uLocal_9722 = 0;
	var uLocal_9723 = 0;
	var uLocal_9724 = 0;
	var uLocal_9725 = 0;
	var uLocal_9726 = 0;
	var uLocal_9727 = 0;
	var uLocal_9728 = 0;
	var uLocal_9729 = 0;
	var uLocal_9730 = 1065353216;
	var uLocal_9731 = 0;
	var uLocal_9732 = 0;
	var uLocal_9733 = 0;
	var uLocal_9734 = 0;
	var uLocal_9735 = 0;
	var uLocal_9736 = 0;
	var uLocal_9737 = 0;
	var uLocal_9738 = 0;
	var uLocal_9739 = 0;
	var uLocal_9740 = 0;
	var uLocal_9741 = 0;
	var uLocal_9742 = 0;
	var uLocal_9743 = 0;
	var uLocal_9744 = 0;
	var uLocal_9745 = 0;
	var uLocal_9746 = 0;
	var uLocal_9747 = 0;
	var uLocal_9748 = 0;
	var uLocal_9749 = 0;
	var uLocal_9750 = 0;
	var uLocal_9751 = 0;
	var uLocal_9752 = 0;
	var uLocal_9753 = 0;
	var uLocal_9754 = 16;
	var uLocal_9755 = 0;
	var uLocal_9756 = -1082130432;
	var uLocal_9757 = 0;
	var uLocal_9758 = -1082130432;
	var uLocal_9759 = 0;
	var uLocal_9760 = -1082130432;
	var uLocal_9761 = 0;
	var uLocal_9762 = -1082130432;
	var uLocal_9763 = 0;
	var uLocal_9764 = -1082130432;
	var uLocal_9765 = 0;
	var uLocal_9766 = -1082130432;
	var uLocal_9767 = 0;
	var uLocal_9768 = -1082130432;
	var uLocal_9769 = 0;
	var uLocal_9770 = -1082130432;
	var uLocal_9771 = 0;
	var uLocal_9772 = -1082130432;
	var uLocal_9773 = 0;
	var uLocal_9774 = -1082130432;
	var uLocal_9775 = 0;
	var uLocal_9776 = -1082130432;
	var uLocal_9777 = 0;
	var uLocal_9778 = -1082130432;
	var uLocal_9779 = 0;
	var uLocal_9780 = -1082130432;
	var uLocal_9781 = 0;
	var uLocal_9782 = -1082130432;
	var uLocal_9783 = 0;
	var uLocal_9784 = -1082130432;
	var uLocal_9785 = 0;
	var uLocal_9786 = -1082130432;
	var uLocal_9787 = 16;
	var uLocal_9788 = 0;
	var uLocal_9789 = -1082130432;
	var uLocal_9790 = 0;
	var uLocal_9791 = -1082130432;
	var uLocal_9792 = 0;
	var uLocal_9793 = -1082130432;
	var uLocal_9794 = 0;
	var uLocal_9795 = -1082130432;
	var uLocal_9796 = 0;
	var uLocal_9797 = -1082130432;
	var uLocal_9798 = 0;
	var uLocal_9799 = -1082130432;
	var uLocal_9800 = 0;
	var uLocal_9801 = -1082130432;
	var uLocal_9802 = 0;
	var uLocal_9803 = -1082130432;
	var uLocal_9804 = 0;
	var uLocal_9805 = -1082130432;
	var uLocal_9806 = 0;
	var uLocal_9807 = -1082130432;
	var uLocal_9808 = 0;
	var uLocal_9809 = -1082130432;
	var uLocal_9810 = 0;
	var uLocal_9811 = -1082130432;
	var uLocal_9812 = 0;
	var uLocal_9813 = -1082130432;
	var uLocal_9814 = 0;
	var uLocal_9815 = -1082130432;
	var uLocal_9816 = 0;
	var uLocal_9817 = -1082130432;
	var uLocal_9818 = 0;
	var uLocal_9819 = -1082130432;
	var uLocal_9820 = 0;
	var uLocal_9821 = 0;
	var uLocal_9822 = 0;
	var uLocal_9823 = 0;
	var uLocal_9824 = 0;
	var uLocal_9825 = 0;
	var uLocal_9826 = 0;
	var uLocal_9827 = 0;
	var uLocal_9828 = 0;
	var uLocal_9829 = 0;
	var uLocal_9830 = 0;
	var uLocal_9831 = 0;
	var uLocal_9832 = 0;
	var uLocal_9833 = 0;
	var uLocal_9834 = 0;
	var uLocal_9835 = 0;
	var uLocal_9836 = -1082130432;
	var uLocal_9837 = -1082130432;
	var uLocal_9838 = 1;
	var uLocal_9839 = 1;
	var uLocal_9840 = 1;
	var uLocal_9841 = -1;
	var uLocal_9842 = -1;
	var uLocal_9843 = -1;
	int iLocal_9844 = 0;
	int iLocal_9845 = 0;
	float fLocal_9846 = 0f;
	int iLocal_9847 = 0;
	int iLocal_9848 = 0;
	float fLocal_9849 = 0f;
	float fLocal_9850 = 0f;
	float fLocal_9851 = 0f;
	float fLocal_9852 = 0f;
	float fLocal_9853 = 0f;
	struct<3> Local_9854 = { 0, 0, 0 } ;
	int iLocal_9857 = 0;
	int iLocal_9858 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	
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
	fLocal_27 = 1f;
	iLocal_150 = 82;
	fLocal_653 = -1f;
	iLocal_733 = AUDIO::GET_SOUND_ID();
	uLocal_734 = AUDIO::GET_SOUND_ID();
	iLocal_735 = AUDIO::GET_SOUND_ID();
	iLocal_736 = AUDIO::GET_SOUND_ID();
	iLocal_737 = AUDIO::GET_SOUND_ID();
	iLocal_790 = -1;
	Local_1144 = { -136.7f, -592.6f, 211.87f };
	Local_1147 = { -1.7f, 0f, -98.1f };
	bLocal_1152 = true;
	fLocal_9846 = 0.449f;
	fLocal_9849 = 0f;
	fLocal_9850 = 0f;
	fLocal_9851 = 0f;
	fLocal_9852 = 165f;
	fLocal_9853 = 0.95f;
	Local_9854 = { 0f, 350f, -10f };
	iLocal_9857 = 1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_10632();
		func_996();
	}
	if (Global_3)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar0))
					{
					}
					iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
					if (!PED::IS_PED_INJURED(iVar1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, 1, 1);
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_2))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89491.f_2, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_3))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89491.f_3, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_7))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89491.f_7, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_9))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89491.f_9, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_8))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89491.f_8, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_4))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89491.f_4, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_5))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89491.f_5, 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_89491.f_6))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_89491.f_6, 1, 1);
		}
	}
	bLocal_521 = false;
	bLocal_522 = false;
	bLocal_522 = bLocal_522;
	fLocal_640 = fLocal_640;
	iLocal_730 = iLocal_730;
	fLocal_639 = fLocal_639;
	iLocal_526 = iLocal_526;
	iLocal_657 = iLocal_657;
	PAD::_SWITCH_TO_INPUT_MAPPING_SCHEME("Rappelling");
	while (true)
	{
		RECORDING::_0x208784099002BC30(func_995(), 0);
		if (func_953())
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_951(0);
				func_945();
				GlobalFunc_502();
				switch (iLocal_30)
				{
					case 0:
						func_934();
						break;
					
					case 1:
						func_917();
						break;
					
					case 2:
						func_897();
						break;
					
					case 3:
						func_878();
						break;
					
					case 4:
						func_840();
						break;
					
					case 5:
						func_626();
						break;
					
					case 6:
						func_1();
						break;
					}
				}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x315
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	float fVar15;
	int iVar16;
	
	if (!iLocal_377)
	{
		if (!iLocal_571)
		{
			if (!PED::IS_PED_INJURED(func_625()))
			{
				WEAPON::GET_CURRENT_PED_WEAPON(func_625(), &iVar0, 1);
				if (iVar0 != func_624(5))
				{
					WEAPON::SET_CURRENT_PED_WEAPON(func_625(), func_624(5), 1);
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_625(), func_624(5)) == 0)
					{
						WEAPON::SET_PED_AMMO(func_625(), func_624(5), 1);
					}
					WEAPON::SET_PED_INFINITE_AMMO(func_625(), 1, func_624(5));
					WEAPON::SET_PED_INFINITE_AMMO_CLIP(func_625(), 1);
				}
			}
			func_443();
			if (!iLocal_511)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar1]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_203[iVar1]));
					}
					iVar1++;
				}
				iVar1 = 0;
				while (iVar1 < iLocal_183)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_183[iVar1]))
					{
						ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_183[iVar1]));
					}
					iVar1++;
				}
				iLocal_511 = 1;
			}
			func_442();
			if (func_441())
			{
				if (!bLocal_376)
				{
					if (iLocal_37 == 0 || iLocal_37 == 1)
					{
						if (!bLocal_505)
						{
							bLocal_505 = func_429("FBI2_GOBACK", 1, 0, 0, 1, 0);
						}
						else if (!bLocal_384)
						{
							bLocal_384 = func_429("FBI2_TCONT", 0, 0, 0, 1, 0);
						}
					}
				}
			}
			if (iLocal_37 == 0)
			{
				func_407(1, 0, 0, 1);
				if (GlobalFunc_126(1) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) != 4)
				{
					if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_199[0], Local_9854, 1, -1, 600, 600);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_9853);
						CAM::SET_GAMEPLAY_HINT_FOV(CAM::GET_GAMEPLAY_CAM_FOV());
					}
				}
				else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
			}
			else if (iLocal_37 == 1)
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_264))
				{
					HUD::REMOVE_BLIP(&uLocal_264);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_263))
				{
					HUD::REMOVE_BLIP(&uLocal_263);
				}
				if (!bLocal_381)
				{
					if (bLocal_384)
					{
						bLocal_381 = true;
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(39), 12f, 12f, 200f, 0, 0, 0))
				{
					if (!iLocal_513)
					{
						TASK::TASK_HELI_MISSION(func_404(), iLocal_199[0], 0, 0, func_405(39), 19, 10f, 2f, -1f, 0, 0, -1082130432, 0);
						iLocal_513 = 1;
					}
				}
				else if (iLocal_513)
				{
					iLocal_513 = 0;
				}
			}
			if (!bLocal_376)
			{
				if (iLocal_37 == 1 || iLocal_37 == 0)
				{
					if (bLocal_601)
					{
						iLocal_541 = 1;
					}
					if (!iLocal_541)
					{
						if (bLocal_381)
						{
							iLocal_541 = func_429("FBI2_LEAVE", 0, 0, 0, 1, 0);
						}
					}
					else if (!iLocal_539)
					{
						iLocal_539 = func_429("FBI2_MKTALK", 0, 0, 0, 1, 0);
					}
					else if (!iLocal_540)
					{
						iLocal_540 = func_429("FBI2_MKTALK2", 0, 0, 0, 1, 0);
					}
				}
			}
			if (iLocal_541)
			{
				if (!PED::IS_PED_INJURED(iLocal_63[1]))
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63[1], 200f, 200f, 200f, 0, 0, 0))
					{
						PED::DELETE_PED(&(iLocal_63[1]));
					}
				}
			}
			if (!Global_3)
			{
				if (iLocal_42 == 2)
				{
					func_403("fbi_2_ext", func_405(39), 100f, 120f);
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						if (!PED::IS_PED_INJURED(func_625()))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_625(), 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_164[0]))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("FIB_Agent_near_Van", iLocal_164[0], 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_164[1]))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("FIB_Agent_near_heli", iLocal_164[1], 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_156))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("MR_K", iLocal_156, 0);
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MR_K", 8, 0, 0, 0);
						}
					}
				}
				if (func_441())
				{
					if (GlobalFunc_8315() == 2)
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0], 0))
						{
							ENTITY::IS_ENTITY_AT_COORD(iLocal_199[0], func_405(39), 7f, 7f, 2f, 1, 1, 0);
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(39), 100f, 100f, 60f, 0, 1, 0) && GlobalFunc_8315() == 2)
					{
						VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_199[0], 0f);
						VEHICLE::_0xE5810AC70602F2F5(iLocal_199[0], 0f);
					}
					else
					{
						VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_199[0], 1f);
						VEHICLE::_0xE5810AC70602F2F5(iLocal_199[0], 1f);
					}
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0]))
					{
						if (!bLocal_376)
						{
							if (!bLocal_516)
							{
								if (!iLocal_518)
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(39), func_405(40), 0, 1, 0))
									{
										GlobalFunc_4935();
										iLocal_539 = 1;
										iLocal_540 = 1;
										iLocal_541 = 1;
										iLocal_518 = 1;
									}
								}
								else
								{
									bLocal_516 = func_429("FBI2_LAN", 0, 0, 0, 1, 0);
								}
							}
							else if (!bLocal_517)
							{
								if (!GlobalFunc_111())
								{
									bLocal_517 = func_398(14);
								}
							}
						}
						if (GlobalFunc_8315() == 2)
						{
							fVar2 = 2f;
						}
						else
						{
							fVar2 = 2f;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_199[0], 1376.403f, -2083.443f, 50.998f, 1360.366f, -2064.322f, (50.998f + fVar2), 28f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_199[0], 1374.36f, -2059.423f, 50.998f, 1383.849f, -2050.67f, (50.998f + fVar2), 10f, 0, 1, 0))
						{
							if (!bLocal_555)
							{
								bLocal_555 = GlobalFunc_2867("FIB2_COMPLETE");
							}
							fLocal_638 = (fLocal_638 + (1f * SYSTEM::TIMESTEP()));
						}
						else
						{
							fLocal_638 = 0f;
							iLocal_380 = 0;
						}
						if (!iLocal_380)
						{
							if (fLocal_638 >= 2f && iLocal_42 == 2)
							{
								GlobalFunc_4935();
								iLocal_380 = 1;
							}
						}
						else if (!GlobalFunc_111())
						{
							if (GlobalFunc_Has_Cutscene_Loaded())
							{
								iLocal_377 = 1;
							}
						}
					}
				}
			}
			else
			{
				switch (iLocal_757)
				{
					case 0:
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0]) || iLocal_37 == 1)
						{
							if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == GlobalFunc_4917(2))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1375.57f, -2072.22f, 51f, 100f, 100f, 100f, 0, 0, 0))
								{
									PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
									{
										Var12 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
										Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], 20f, 300f, 0f) };
										Var9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], 0f, 20f, 0f) };
										Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], -150f, 100f, 0f) };
										fVar15 = ENTITY::GET_ENTITY_HEADING(iLocal_199[0]);
										iVar16 = SYSTEM::ROUND(ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(iLocal_199[0]));
										Var3.f_2 = Var12.f_2;
										Var9.f_2 = (Var12.f_2 + 20f);
										Var6.f_2 = (Var12.f_2 + 20f);
										if (!PED::IS_PED_INJURED(func_404()))
										{
											TASK::TASK_HELI_MISSION(func_404(), iLocal_199[0], 0, 0, Var3, 4, 30f, 0f, fVar15, iVar16, 20, -1082130432, 0);
										}
										else
										{
											TASK::TASK_HELI_MISSION(PLAYER::PLAYER_PED_ID(), iLocal_199[0], 0, 0, Var3, 4, 30f, 0f, fVar15, iVar16, 20, -1082130432, 0);
										}
									}
									iLocal_289 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, CAM::GET_FINAL_RENDERED_CAM_COORD(), CAM::GET_FINAL_RENDERED_CAM_ROT(2), CAM::GET_FINAL_RENDERED_CAM_FOV(), 1, 2);
									iLocal_290 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var9, CAM::GET_FINAL_RENDERED_CAM_ROT(2), CAM::GET_FINAL_RENDERED_CAM_FOV(), 0, 2);
									CAM::SHAKE_CAM(iLocal_289, "HAND_SHAKE", 0.2f);
									CAM::SHAKE_CAM(iLocal_290, "HAND_SHAKE", 0.2f);
									CAM::POINT_CAM_AT_COORD(iLocal_290, Var6);
									CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_290, iLocal_289, 6500, 2, 2);
									CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
									GlobalFunc_8380(1, 1, 1, 0);
									HUD::DISPLAY_HUD(0);
									HUD::DISPLAY_RADAR(0);
									iLocal_560 = 1;
									SYSTEM::SETTIMERB(0);
									iLocal_757++;
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1375.57f, -2072.22f, 51f, 100f, 100f, 100f, 0, 0, 0))
							{
								GlobalFunc_2867("FIB2_COMPLETE");
								CAM::DO_SCREEN_FADE_OUT(1000);
								while (!CAM::IS_SCREEN_FADED_OUT())
								{
									SYSTEM::WAIT(0);
								}
								func_385();
								func_381();
							}
						}
						break;
					
					case 1:
						if (SYSTEM::TIMERB() > 5000)
						{
							GlobalFunc_2867("FIB2_COMPLETE");
							CAM::DO_SCREEN_FADE_OUT(1000);
							while (!CAM::IS_SCREEN_FADED_OUT())
							{
								SYSTEM::WAIT(0);
							}
							CAM::DESTROY_ALL_CAMS(0);
							CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
							GlobalFunc_8380(0, 1, 1, 0);
							HUD::DISPLAY_HUD(1);
							HUD::DISPLAY_RADAR(1);
							func_385();
							func_381();
						}
						break;
					}
			}
		}
		else if (MISC::GET_GAME_TIMER() >= iLocal_764 + 13000)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[2]))
			{
				func_379(2, 0);
				GlobalFunc_11319(iLocal_63[2], 1);
				PED::DELETE_PED(&(iLocal_63[2]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[1]))
			{
				PED::DELETE_PED(&(iLocal_63[1]));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_199[0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_199[0]));
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, 0))
				{
					VEHICLE::SET_PLAYERS_LAST_VEHICLE(iLocal_231);
				}
			}
			func_381();
		}
	}
	else
	{
		func_2();
	}
}

void func_2()//Position - 0xBB5
{
	int iVar0;
	struct<3> Var1;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_35)
	{
		case 0:
			func_377(12);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
			if (!PED::IS_PED_INJURED(func_625()))
			{
				PED::SET_PED_CONFIG_FLAG(func_625(), 101, 0);
			}
			if (!PED::IS_PED_INJURED(func_625()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_625(), "Michael", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(func_404()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_404(), "Trevor", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_156))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_156, "MR_K", 1, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_164[1]))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_164[1]);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_164[1], "FIB_Agent_near_heli", 1, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_164[0]))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_164[0]);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_164[0], "FIB_Agent_near_Van", 1, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_208, 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_208, "FBI_2_Burrito_Van", 1, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_199[0], "Main_heli", 0, 0, 0);
			}
			if (GlobalFunc_8315() == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 256;
			}
			CUTSCENE::START_CUTSCENE(iVar0);
			RECORDING::_0x293220DA1B46CEBC(6f, 0f, 4);
			RECORDING::_0x48621C9FCA3EBD28(4);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_35 = 1;
			break;
		
		case 1:
			if (!iLocal_379)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_376();
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					if (GlobalFunc_8315() != 0)
					{
						bLocal_614 = true;
						GlobalFunc_9019(&iLocal_63, 0);
						GlobalFunc_10980(&iLocal_63, 1, 1, 1);
						func_301(1);
					}
					func_300();
					func_297();
					MISC::CLEAR_AREA(1373.974f, -2070.953f, 54.1842f, 30f, 1, 0, 0, 0);
					FIRE::STOP_FIRE_IN_RANGE(1373.974f, -2070.953f, 54.1842f, 30f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(1373.974f, -2070.953f, 54.1842f, 30f);
					if (PHYSICS::DOES_ROPE_EXIST(&(Local_816.f_5)))
					{
						GlobalFunc_605(&Local_816);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
					{
						OBJECT::DELETE_OBJECT(&iLocal_232);
					}
					AUDIO::STOP_SOUND(iLocal_733);
					func_295();
					if (!PED::IS_PED_INJURED(iLocal_156))
					{
						PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 8, 1, 0, 0);
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
					{
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_199[0], 0, 0);
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_199[0], 0, 0, 0f);
					}
					GlobalFunc_2882(iLocal_199[0]);
					if (!PED::IS_PED_INJURED(func_625()))
					{
						PED::REMOVE_PED_HELMET(func_625(), 1);
					}
					iLocal_379 = 1;
				}
			}
			if (!iLocal_405)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 23397)
				{
					GlobalFunc_11318(func_625());
					PED::CLEAR_PED_WETNESS(func_625());
					PED::CLEAR_PED_ENV_DIRT(func_625());
					PED::CLEAR_PED_BLOOD_DAMAGE(func_625());
					PED::RESET_PED_VISIBLE_DAMAGE(func_625());
					iLocal_405 = 1;
				}
			}
			if (!iLocal_605)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 47617)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
					{
						iLocal_198 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_199[0], 26, func_16(12), -1, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_198, 1);
						AUDIO::STOP_PED_SPEAKING(iLocal_198, 1);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_198, 0);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_199[0], 1, 0);
						iLocal_605 = 1;
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Main_Heli", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_63[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_198))
					{
						PED::DELETE_PED(&iLocal_198);
					}
					PED::SET_PED_INTO_VEHICLE(iLocal_63[2], iLocal_199[0], -1);
					Var1 = { Var1 };
					Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_918);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_918);
					TASK::TASK_HELI_MISSION(0, iLocal_199[0], 0, 0, Var1.x, Var1.f_1, 65f, 4, 100f, 5f, -1f, 65, 0, -1082130432, 0);
					TASK::TASK_HELI_MISSION(0, iLocal_199[0], 0, 0, 1450.547f, -1332.499f, 110f, 4, 100f, 0f, -1f, 110, 0, -1082130432, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_918);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_63[2], uLocal_918);
					func_15();
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_199[0], 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_199[0]);
					ENTITY::SET_ENTITY_VELOCITY(iLocal_199[0], 0f, 4f, 5f);
					VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_199[0], 1f);
					VEHICLE::_0xE5810AC70602F2F5(iLocal_199[0], 1f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, 1);
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					while (!CAM::IS_SCREEN_FADED_OUT())
					{
						SYSTEM::WAIT(0);
					}
					GlobalFunc_11318(func_625());
					PED::CLEAR_PED_WETNESS(func_625());
					PED::CLEAR_PED_ENV_DIRT(func_625());
					PED::CLEAR_PED_BLOOD_DAMAGE(func_625());
					PED::RESET_PED_VISIBLE_DAMAGE(func_625());
					SYSTEM::WAIT(1500);
				}
				iLocal_764 = MISC::GET_GAME_TIMER();
				iLocal_571 = 1;
				PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
				func_4(0, 1, 1, 1, 0, 1);
				func_3();
				if (bLocal_614)
				{
					if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					}
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_3()//Position - 0x1079
{
	var uVar0;
	
	uVar0 = func_625();
	WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(uVar0))
	{
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::SET_PED_INFINITE_AMMO_CLIP(PLAYER::PLAYER_PED_ID(), 0);
		PED::RESET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID());
		PED::CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(PLAYER::PLAYER_PED_ID());
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		WEAPON::SET_PED_INFINITE_AMMO_CLIP(iVar0, 0);
		PED::RESET_PED_IN_VEHICLE_CONTEXT(iVar0);
		PED::CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(iVar0);
		PED::SET_PED_CAN_SWITCH_WEAPON(iVar0, 1);
	}
	if (iLocal_790 >= 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("weapon_carbinerifle"), 0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					WEAPON::SET_PED_AMMO(iVar0, joaat("weapon_carbinerifle"), iLocal_790);
				}
				WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, joaat("weapon_carbinerifle"));
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("weapon_assaultrifle"), 0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					WEAPON::SET_PED_AMMO(iVar0, joaat("weapon_assaultrifle"), iLocal_790);
				}
				WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, joaat("weapon_assaultrifle"));
			}
		}
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0))
	{
		WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, joaat("weapon_carbinerifle"));
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0))
	{
		WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, joaat("weapon_assaultrifle"));
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), func_624(5), 0))
	{
		WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 0, func_624(5));
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), func_624(5));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("weapon_carbinerifle"), 0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, joaat("weapon_carbinerifle"));
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(iVar0, joaat("weapon_assaultrifle"), 0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, joaat("weapon_assaultrifle"));
		}
		if (WEAPON::HAS_PED_GOT_WEAPON(iVar0, func_624(5), 0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iVar0, 0, func_624(5));
			WEAPON::REMOVE_WEAPON_FROM_PED(iVar0, func_624(5));
		}
	}
}

void func_4(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x1242
{
	if (bParam3)
	{
		GlobalFunc_7206(1, 1, 1, 0);
	}
	if (bParam0)
	{
		GlobalFunc_8622();
		GlobalFunc_8380(1, 1, iParam5, 0);
		HUD::DISPLAY_RADAR(0);
		HUD::DISPLAY_HUD(0);
		iLocal_655 = MISC::GET_GAME_TIMER();
	}
	else
	{
		GlobalFunc_8380(0, 1, iParam5, 0);
		if (bParam1)
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			GlobalFunc_7632(0);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(uLocal_291))
			{
				CAM::DESTROY_CAM(uLocal_291, 0);
			}
			GlobalFunc_2866(&iLocal_289);
			GlobalFunc_2866(&iLocal_290);
			if (bParam4)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			}
		}
		iLocal_377 = 0;
		iLocal_379 = 0;
		bLocal_378 = false;
		iLocal_380 = 0;
		iLocal_35 = 0;
		if (bParam2)
		{
			func_5();
		}
	}
}

void func_5()//Position - 0x12F6
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
}










void func_15()//Position - 0x156E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_199[0], 1, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_199[0], 0, 1);
	}
}

int func_16(int iParam0)//Position - 0x1599
{
	struct<58> Var0;
	
	switch (iParam0)
	{
		case 0:
			return GlobalFunc_4917(0);
			break;
		
		case 1:
			return GlobalFunc_4917(1);
			break;
		
		case 2:
			return GlobalFunc_4917(2);
			break;
		
		case 3:
			return GlobalFunc_4946(30);
			break;
		
		case 4:
			return GlobalFunc_4946(23);
			break;
		
		case 5:
			return GlobalFunc_4946(67);
			break;
		
		case 6:
			return joaat("cs_mrk");
			break;
		
		case 7:
			return joaat("ig_mrk");
			break;
		
		case 9:
			return joaat("s_m_m_ciasec_01");
			break;
		
		case 8:
			return joaat("s_m_m_pilot_02");
			break;
		
		case 10:
			return joaat("cs_michelle");
			break;
		
		case 11:
			return joaat("ig_fbisuit_01");
			break;
		
		case 12:
			return joaat("s_m_m_fiboffice_01");
			break;
		
		case 13:
			return joaat("frogger");
			break;
		
		case 14:
			return joaat("buzzard");
			break;
		
		case 15:
			return GlobalFunc_5112(30, 0);
			break;
		
		case 16:
			Var0.f_11 = 12;
			Var0.f_31 = 25;
			Var0.f_57 = 2;
			GlobalFunc_97(1, &Var0, 2);
			return Var0;
			break;
		
		case 17:
			return joaat("burrito");
			break;
		
		case 18:
			return joaat("fbi2");
			break;
		
		case 19:
			return joaat("utillitruck2");
			break;
		
		case 20:
			return joaat("utillitruck3");
			break;
		
		case 21:
			if (func_20())
			{
				return GlobalFunc_2575();
			}
			else
			{
				return joaat("voltic");
			}
			break;
		
		case 22:
			return GlobalFunc_614();
			break;
		
		case 23:
			return GlobalFunc_615();
			break;
		
		case 24:
			return joaat("prop_cs_police_torch");
			break;
		
		case 25:
			return joaat("v_corp_offchair");
			break;
		
		case 26:
			return joaat("p_ing_coffeecup_01");
			break;
	}
	return 0;
}




int func_20()//Position - 0x17D1
{
	if (GlobalFunc_7984())
	{
		if (GlobalFunc_7091(GlobalFunc_625(), 1))
		{
			return 1;
		}
	}
	return 0;
}



















































































































































































































































































void func_295()//Position - 0x4990E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_183)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_183[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_183[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_203[iVar0]));
		}
		iVar0++;
	}
}


void func_297()//Position - 0x499B6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_298(iVar0);
		iVar0++;
	}
}

void func_298(int iParam0)//Position - 0x499D7
{
	AUDIO::STOP_AUDIO_SCENE(func_299(iParam0));
}

char* func_299(int iParam0)//Position - 0x499E9
{
	switch (iParam0)
	{
		case 0:
			return "FBI_2_DRIVE_TO_LOT";
			break;
		
		case 1:
			return "FBI_2_FLY_TO_AGENCY";
			break;
		
		case 2:
			return "FBI_2_FOCUS_ON_ROOF";
			break;
		
		case 3:
			return "SNATCH_AND_GRAB_RAPPEL";
			break;
		
		case 4:
			return "SNATCH_AND_GRAB_INDOOR";
			break;
		
		case 5:
			return "FBI_2_BREAK_THE_GLASS";
			break;
		
		case 6:
			return "FBI_2_MR_K_HOSTAGE";
			break;
		
		case 7:
			return "FBI_2_FRANKLIN_SNIPE_ENEMIES";
			break;
		
		case 8:
			return "FBI_2_MICHAEL_SHOOT_ENEMIES";
			break;
		
		case 9:
			return "FBI_2_CHOPPERS_ARRIVE_FRANKLIN";
			break;
		
		case 10:
			return "FBI_2_CHOPPERS_ARRIVE_MICHAEL";
			break;
		
		case 11:
			return "FBI_2_CHOPPERS_ARRIVE_TREVOR";
			break;
		
		case 12:
			return "FBI_2_FLY_BACK_AS_TREVOR";
			break;
		
		case 13:
			return "FBI_2_RIDE_BACK_AS_MICHAEL";
			break;
		
		case 14:
			return "FBI_2_LAND_THE_HELI";
			break;
	}
	return "";
}

void func_300()//Position - 0x49AFB
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(uLocal_263))
	{
		HUD::REMOVE_BLIP(&uLocal_263);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_264))
	{
		HUD::REMOVE_BLIP(&uLocal_264);
	}
	Global_89491.f_1 = 0;
	if (HUD::DOES_BLIP_EXIST(uLocal_265))
	{
		HUD::REMOVE_BLIP(&uLocal_265);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_266[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_266[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_273[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_273[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_282[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_282[iVar0]));
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_287))
	{
		HUD::REMOVE_BLIP(&uLocal_287);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_288))
	{
		HUD::REMOVE_BLIP(&uLocal_288);
	}
}

void func_301(bool bParam0)//Position - 0x49BE1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_63)
	{
		if (!PED::IS_PED_INJURED(iLocal_63[iVar0]))
		{
			func_302(iLocal_63[iVar0]);
		}
		iVar0++;
	}
	if (bParam0)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		}
	}
}

void func_302(int iParam0)//Position - 0x49C3E
{
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, 1862763509);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, 0);
	PED::SET_PED_KEEP_TASK(iParam0, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 32, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, 1);
	PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
	ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iParam0, 1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 1, 1);
}










































































void func_376()//Position - 0x518F7
{
	GlobalFunc_7206(1, 1, 1, 0);
	GlobalFunc_8622();
	GlobalFunc_8380(1, 1, 1, 0);
}

void func_377(int iParam0)//Position - 0x51913
{
	var uVar0;
	
	uVar0 = func_16(iParam0);
	STREAMING::REQUEST_MODEL(uVar0);
	iLocal_293[iParam0] = 1;
}


void func_379(int iParam0, bool bParam1)//Position - 0x51B16
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 0:
			iVar1 = 112;
			break;
		
		case 1:
			iVar1 = 158;
			break;
		
		case 2:
			iVar1 = 154;
			break;
	}
	if (GlobalFunc_8315() == iParam0)
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
	}
	else
	{
		iVar0 = iLocal_63[GlobalFunc_237(iParam0)];
	}
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (bParam1)
		{
			GlobalFunc_11257(iVar0, 14, iVar1, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		}
		else
		{
			GlobalFunc_11293(iVar0, 14, iVar1);
		}
	}
}


void func_381()//Position - 0x51D54
{
	func_295();
	GlobalFunc_5103(0, 0);
	func_996();
}




void func_385()//Position - 0x51EB3
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1315.36f, -1979.53f, 45.69f, 1, 0, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		GlobalFunc_2998(&iLocal_63, iVar0, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_63[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_153))
	{
		PED::DELETE_PED(&iLocal_153);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_156))
	{
		PED::DELETE_PED(&iLocal_156);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_157))
	{
		PED::DELETE_PED(&iLocal_157);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_197))
	{
		PED::DELETE_PED(&iLocal_197);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_164[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_164[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_208))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_208);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_203[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_227)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_227[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_167[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_174[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_183[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_183[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_199)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_199[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_199[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_209)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_209[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_209[iVar0]));
		}
		iVar0++;
	}
	SYSTEM::WAIT(0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
	{
		OBJECT::DELETE_OBJECT(&iLocal_232);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
	{
		OBJECT::DELETE_OBJECT(&iLocal_233);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_234))
	{
		OBJECT::DELETE_OBJECT(&iLocal_234);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_239[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_239[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_250))
	{
		OBJECT::DELETE_OBJECT(&iLocal_250);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_251))
	{
		OBJECT::DELETE_OBJECT(&iLocal_251);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_289))
	{
		CAM::DESTROY_CAM(iLocal_289, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_291))
	{
		CAM::DESTROY_CAM(iLocal_291, 0);
	}
	if (CAM::DOES_CAM_EXIST(uLocal_292))
	{
		CAM::DESTROY_CAM(iLocal_292, 0);
	}
	func_386(&iLocal_1126);
}

void func_386(int iParam0)//Position - 0x52162
{
	if (CAM::DOES_CAM_EXIST(iParam0->f_1))
	{
		CAM::DESTROY_CAM(iParam0->f_1, 0);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_2))
	{
		CAM::DESTROY_CAM(iParam0->f_2, 0);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_3))
	{
		CAM::DESTROY_CAM(iParam0->f_3, 0);
	}
	if (CAM::DOES_CAM_EXIST(iParam0->f_4))
	{
		CAM::DESTROY_CAM(iParam0->f_4, 0);
	}
}












bool func_398(int iParam0)//Position - 0x52430
{
	return AUDIO::START_AUDIO_SCENE(func_299(iParam0));
}





void func_403(char* sParam0, struct<3> Param1, float fParam4, float fParam5)//Position - 0x524E4
{
	switch (iLocal_34)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam4, fParam4, fParam4, 0, 1, 0))
			{
				CUTSCENE::REQUEST_CUTSCENE(sParam0, 8);
				iLocal_34 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				iLocal_34 = 2;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, fParam5, fParam5, fParam5, 0, 1, 0))
			{
				CUTSCENE::REMOVE_CUTSCENE();
				iLocal_34 = 0;
			}
			break;
	}
}

int func_404()//Position - 0x5255B
{
	if (GlobalFunc_8315() == 2)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_63[2];
}

Vector3 func_405(int iParam0)//Position - 0x5257A
{
	switch (iParam0)
	{
		case 0:
			return 147.914f, -678.0013f, 41.02758f;
			break;
		
		case 1:
			return 147.9f, -678.2f, 41.02758f;
			break;
		
		case 2:
			return 148.9593f, -677.5041f, 41.02758f;
			break;
		
		case 3:
			return 149.5708f, -678.4264f, 41.02729f;
			break;
		
		case 4:
			return 84.65f, -670.03f, 43.73f;
			break;
		
		case 5:
			return 1368.473f, -2076.731f, 51f;
			break;
		
		case 6:
			return 1368.473f, -2076.731f, 51.685f;
			break;
		
		case 7:
			return 110.62f, -619.5f, 269.85f;
			break;
		
		case 8:
			return 111.6f, -619.5f, 270.85f;
			break;
		
		case 9:
			return 1373.39f, -2072.44f, 51.38f;
			break;
		
		case 10:
			return 1373.06f, -2079.65f, 51f;
			break;
		
		case 11:
			return -139.69f, -591.94f, 207.58f;
			break;
		
		case 12:
			return 1373.42f, -2079.67f, 51f;
			break;
		
		case 13:
			return 1381.31f, -2077.68f, 51f;
			break;
		
		case 14:
			return -1.2f, 0.9f, 1.6f;
			break;
		
		case 15:
			return 0f, 0f, -99.76f;
			break;
		
		case 17:
			return 0f, 0f, 3f;
			break;
		
		case 18:
			return 0f, 0f, 0f;
			break;
		
		case 19:
			return -0.12f, 0.165f, -0.212f;
			break;
		
		case 20:
			return 1375.166f, -2065.929f, 50.99826f;
			break;
		
		case 21:
			return 111.67f, -619.11f, 207.6f;
			break;
		
		case 22:
			return 110.5f, -618.5f, 207.8f;
			break;
		
		case 23:
			return 110.15f, -618.2f, 207.1f;
			break;
		
		case 24:
			return 110.9f, -615.81f, 207.1f;
			break;
		
		case 25:
			return 112.15f, -619.09f, 206.78f;
			break;
		
		case 26:
			return 112.92f, -619.09f, 205.94f;
			break;
		
		case 27:
			return 113.47f, -619.19f, 205.49f;
			break;
		
		case 28:
			return 113.77f, -619.37f, 205.48f;
			break;
		
		case 29:
			return 112.082f, -619.063f, 206.05f;
			break;
		
		case 30:
			return 112.85f, -619.72f, 206.33f;
			break;
		
		case 31:
			return 117.97f, -618.96f, 205.05f;
			break;
		
		case 32:
			return 119.57f, -619.96f, 205.05f;
			break;
		
		case 33:
			return 118.704f, -620.003f, 205.05f;
			break;
		
		case 34:
			return -137.9f, -593f, 207.55f;
			break;
		
		case 35:
			return 98.25f, -617.81f, 205.5f;
			break;
		
		case 36:
			return 99.2f, -618f, 206.9f;
			break;
		
		case 37:
			return -129.43f, -561.09f, 209.27f;
			break;
		
		case 38:
			return 173.95f, -990.51f, 136.94f;
			break;
		
		case 39:
			return 1373.928f, -2070.67f, 51f;
			break;
		
		case 40:
			return 75f, 75f, 85f;
			break;
		
		case 41:
			return 15f, 15f, 4f;
			break;
		
		case 42:
			return 1378.586f, -2074.405f, 50.99809f;
			break;
		
		case 43:
			return 122.021f, -692.2114f, 41.02729f;
			break;
		
		case 44:
			return 55.089f, -750.924f, 43.084f;
			break;
	}
	return 0f, 0f, 0f;
}


void func_407(bool bParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x52A35
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	struct<3> Var9;
	char* sVar12;
	
	if (iLocal_30 == 1)
	{
		iVar0 = iLocal_153;
		iVar1 = iLocal_199[1];
	}
	else
	{
		iVar0 = iLocal_63[0];
		iVar1 = iLocal_199[0];
	}
	bVar2 = true;
	bVar3 = true;
	bVar4 = true;
	bVar5 = true;
	bVar6 = false;
	if (bParam1)
	{
		if (!PED::IS_PED_INJURED(iVar0))
		{
			if (iLocal_152 == 2)
			{
				bVar4 = false;
			}
		}
	}
	if (bParam0)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
		{
			if (bParam1)
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (!PED::IS_PED_IN_VEHICLE(iVar0, iVar1, 0))
					{
						bVar3 = false;
					}
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, 0))
			{
				bVar2 = false;
			}
		}
	}
	if (bParam2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			bVar5 = false;
		}
	}
	if (bVar4)
	{
		if (bVar2)
		{
			if (bParam0)
			{
				if (iLocal_659 < 2)
				{
					iLocal_659 = 2;
				}
			}
			if (bVar3)
			{
				if (iLocal_30 == 2)
				{
					if (iLocal_661 < 3)
					{
						if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_660 && bLocal_384)
							{
								switch (iLocal_661)
								{
									case 0:
										if (!Global_3)
										{
											func_426("SG_FLYHLP1", 0, -1);
										}
										break;
									
									case 1:
										if (!Global_3)
										{
											func_426("SG_FLYHLP2", 0, -1);
										}
										break;
									
									case 2:
										if (!Global_3)
										{
											func_426("SG_FLYHLP3", 0, -1);
										}
										break;
								}
								iLocal_661++;
							}
						}
					}
					if (!iLocal_407)
					{
						if (iLocal_661 >= 2)
						{
							iLocal_407 = 1;
						}
						else
						{
							Var9 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
							MISC::GET_GROUND_Z_FOR_3D_COORD(Var9, &fVar7);
							if (fVar7 < 0f)
							{
								fVar7 = 0f;
							}
							fVar8 = (Var9.f_2 - fVar7);
							if (fVar8 >= 15f)
							{
								if (GlobalFunc_74("SG_FLYHLP1"))
								{
									if (MISC::GET_GAME_TIMER() >= iLocal_721 + 1000)
									{
										HUD::CLEAR_HELP(0);
										iLocal_721 = MISC::GET_GAME_TIMER();
									}
								}
								iLocal_407 = 1;
							}
						}
					}
				}
				if (bVar5)
				{
					bVar6 = true;
					iLocal_388 = 0;
					bLocal_389 = false;
					if (!HUD::DOES_BLIP_EXIST(uLocal_264) && iLocal_30 != 5)
					{
						GlobalFunc_7206(0, 1, 0, 0);
						func_300();
						switch (iLocal_30)
						{
							case 1:
								if (!HUD::DOES_BLIP_EXIST(Global_89491))
								{
									uLocal_264 = func_423(func_405(20), 1);
								}
								else
								{
									Global_89491.f_1 = 1;
								}
								break;
							
							case 2:
								uLocal_264 = func_423(func_405(8), 0);
								break;
							
							case 6:
								uLocal_264 = func_423(func_405(39), 0);
								break;
						}
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_263))
					{
						HUD::REMOVE_BLIP(&uLocal_263);
					}
					if (!bLocal_384)
					{
						switch (iLocal_30)
						{
							case 2:
								bLocal_384 = func_429("FBI2_MGO", 0, 0, 0, 1, 0);
								iLocal_660 = MISC::GET_GAME_TIMER() + 200;
								break;
							}
					}
					if (!bLocal_381)
					{
						switch (iLocal_30)
						{
							case 1:
								if (bLocal_384 && bLocal_402)
								{
									bLocal_381 = func_421("SG_GOLOC", 1, 0);
								}
								break;
							
							case 2:
								if (bLocal_384)
								{
									bLocal_381 = func_421("SG_GOBLD", 1, 0);
								}
								break;
							
							case 6:
								if (bLocal_384)
								{
									bLocal_381 = func_421("SG_GOLND", 1, 0);
								}
								break;
							}
					}
				}
				else
				{
					if (!iLocal_388)
					{
						func_300();
						iLocal_388 = 1;
					}
					func_420();
					func_418();
					if (!bLocal_389)
					{
						if (iLocal_30 != 1 || iLocal_582)
						{
							bLocal_389 = func_421("LOSE_WANTED", 1, 0);
						}
					}
				}
			}
			else
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_265))
				{
					GlobalFunc_7206(0, 1, 0, 0);
					func_300();
					uLocal_265 = func_416(iVar0, 0);
				}
				if (!bLocal_391)
				{
					if (iVar0 == iLocal_153)
					{
						bLocal_391 = func_421("SG_WAITD", 1, 0);
					}
					else
					{
						bLocal_391 = func_421("SG_WAIT", 1, 0);
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_287))
			{
				HUD::REMOVE_BLIP(&uLocal_287);
			}
			if (iLocal_30 == 2)
			{
				if ((GlobalFunc_74("SG_FLYHLP1") || GlobalFunc_74("SG_FLYHLP2")) || GlobalFunc_74("SG_FLYHLP3"))
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_721 + 1000)
					{
						HUD::CLEAR_HELP(0);
						iLocal_721 = MISC::GET_GAME_TIMER();
					}
				}
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_263))
			{
				GlobalFunc_7206(0, 1, 0, 0);
				if (bParam3)
				{
					func_300();
				}
				if (iLocal_659 == 0 || iLocal_659 == 2)
				{
					iLocal_385 = 1;
				}
				uLocal_263 = func_412(iVar1, 0);
			}
			if (iLocal_385)
			{
				if (iLocal_30 == 1)
				{
					switch (iLocal_659)
					{
						case 0:
							sVar12 = "SG_GETDCAR1";
							break;
						
						case 2:
							sVar12 = "SG_GETDCAR2";
							break;
					}
				}
				else
				{
					switch (iLocal_659)
					{
						case 0:
							sVar12 = "CMN_GENGETINHE";
							break;
						
						case 2:
							sVar12 = "CMN_GENGETBCKHE";
							break;
						}
				}
				if (bLocal_384 && (bLocal_566 || iLocal_30 > 1))
				{
					if (func_421(sVar12, 1, 0))
					{
						iLocal_385 = 0;
						iLocal_659++;
					}
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0, 12f, 12f, 6f, 0, 1, 0))
	{
	}
	else
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_265))
		{
			GlobalFunc_7206(0, 1, 0, 0);
			func_300();
			uLocal_265 = func_416(iVar0, 0);
		}
		if (!bLocal_392)
		{
			if (iVar0 == iLocal_153)
			{
				bLocal_392 = func_421("SG_LEAVE", 1, 0);
			}
			else
			{
				bLocal_392 = func_421("CMN_MLEAVE", 1, 0);
			}
		}
	}
	if (bVar6)
	{
		if (GlobalFunc_331())
		{
			bVar6 = false;
		}
	}
	if (!bVar6)
	{
		if (iLocal_30 != 1 || (bLocal_567 || !bVar4))
		{
			if (!iLocal_387)
			{
				if (func_408())
				{
					GlobalFunc_4935();
				}
			}
		}
	}
}

int func_408()//Position - 0x52FA4
{
	struct<6> Var0;
	
	if (GlobalFunc_111())
	{
		Var0 = { GlobalFunc_560() };
		if ((((((((MISC::ARE_STRINGS_EQUAL(&Var0, "FBI2_B1AV1") || MISC::ARE_STRINGS_EQUAL(&Var0, "FBI2_B1BV1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FBI2_B2AV1")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FBI2_B2AV2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FBI2_B2BV2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FBI2_MKTALK")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FBI2_MKTALK2")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FBI2_TOCAR")) || MISC::ARE_STRINGS_EQUAL(&Var0, "FBI2_TOCAR2"))
		{
			iLocal_387 = 1;
			Local_1114 = { Var0 };
			cLocal_1120 = { GlobalFunc_514() };
			return 1;
		}
	}
	return 0;
}




int func_412(int iParam0, bool bParam1)//Position - 0x53149
{
	if (func_441())
	{
		return GlobalFunc_6783(iParam0, bParam1, 0);
	}
	return 0;
}




int func_416(int iParam0, bool bParam1)//Position - 0x53233
{
	if (func_441())
	{
		return GlobalFunc_6797(iParam0, bParam1, 145);
	}
	return 0;
}


void func_418()//Position - 0x532A2
{
	if (HUD::DOES_BLIP_EXIST(uLocal_263))
	{
		HUD::REMOVE_BLIP(&uLocal_263);
	}
	if (GlobalFunc_663("SG_GETDCAR1", 0, 0) || GlobalFunc_663("SG_GETDCAR2", 0, 0))
	{
		GlobalFunc_7206(1, 1, 0, 0);
	}
}


void func_420()//Position - 0x53300
{
	if (HUD::DOES_BLIP_EXIST(uLocal_263))
	{
		HUD::REMOVE_BLIP(&uLocal_263);
	}
	if (GlobalFunc_663("CMN_GENGETINHE", 0, 0) || GlobalFunc_663("CMN_GENGETBCKHE", 0, 0))
	{
		GlobalFunc_7206(1, 1, 0, 0);
	}
}

int func_421(char* sParam0, int iParam1, int iParam2)//Position - 0x53340
{
	if (iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if ((iParam2 || !GlobalFunc_111()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (func_441())
			{
				GlobalFunc_164(sParam0, 7500, 1);
				return 1;
			}
		}
	}
	return 0;
}


int func_423(struct<3> Param0, int iParam3)//Position - 0x533A2
{
	if (func_441())
	{
		return GlobalFunc_5914(Param0, iParam3);
	}
	return 0;
}



int func_426(char* sParam0, bool bParam1, int iParam2)//Position - 0x533FE
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (func_441())
		{
			if (!bParam1)
			{
				GlobalFunc_159(sParam0, iParam2);
			}
			else
			{
				GlobalFunc_Display_Help_Text(sParam0);
			}
			return 1;
		}
	}
	return 0;
}



int func_429(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x5345E
{
	int iVar0;
	struct<2> Var1;
	
	if ((iParam1 || !HUD::IS_MESSAGE_BEING_DISPLAYED()) || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (!GlobalFunc_111() || iParam3)
		{
			if (func_441())
			{
				if (bParam4)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
				if (iParam2 == 0)
				{
					return GlobalFunc_10618(&uLocal_923, "FBI2AUD", sParam0, 8, iVar0, 0, 0);
				}
				else
				{
					StringCopy(&Var1, sParam0, 16);
					StringConCat(&Var1, "_", 16);
					StringIntConCat(&Var1, iParam2, 16);
					if (!bParam5)
					{
						return GlobalFunc_10630(&uLocal_923, "FBI2AUD", sParam0, &Var1, 8, iVar0, 0);
					}
					else
					{
						return GlobalFunc_10626(&uLocal_923, "FBI2AUD", sParam0, &Var1, 8, iVar0, 0);
					}
				}
			}
		}
	}
	return 0;
}












int func_441()//Position - 0x53BC0
{
	if (iLocal_29 == 0 && !GlobalFunc_331())
	{
		return 1;
	}
	return 0;
}

void func_442()//Position - 0x53BDE
{
	if (iLocal_520)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_732 + 1300)
		{
			iLocal_520 = 0;
		}
		else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
		{
			ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_199[0], 2, 0f, 0f, 1f, 0f, 1f, 0f, 0, 1, 1, 1, 0, 1);
		}
	}
}

void func_443()//Position - 0x53C23
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	bool bVar10;
	struct<3> Var11;
	bool bVar14;
	bool bVar15;
	struct<3> Var16;
	struct<3> Var19;
	bool bVar22;
	int iVar23;
	struct<3> Var24;
	bool bVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	bool bVar37;
	struct<3> Var38;
	struct<3> Var41;
	struct<3> Var44;
	float fVar47;
	
	CAM::_0x4008EDF7D6E48175(1);
	if (GlobalFunc_8315() == 0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 308, 1);
	}
	else if (GlobalFunc_8315() == 1)
	{
		CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
		RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
		GlobalFunc_7629();
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	}
	if (!PED::IS_PED_INJURED(func_625()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(func_625(), 0);
		PED::SET_PED_RESET_FLAG(func_625(), 287, 1);
	}
	if (!PED::IS_PED_INJURED(func_622()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(func_622(), 0);
	}
	if (!PED::IS_PED_INJURED(func_404()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(func_404(), 1);
	}
	iVar1 = func_622();
	if (!PED::IS_PED_INJURED(iVar1))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iVar1, func_624(4), 0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iVar1, &iVar2, 1);
			if (iVar2 != func_624(4))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar1, func_624(4), 1);
			}
		}
	}
	func_611();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[2], 0))
	{
		if ((iLocal_37 != 2 && iLocal_37 != 7) && iLocal_37 != 8)
		{
		}
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!iLocal_506[iVar0])
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_203[iVar0]))
			{
				if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[iVar0], -1)))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "FBI_02_SNATCH_AND_GRAB_HELI_DOWN", iLocal_203[iVar0], 0, 0, 0);
					VEHICLE::SET_VEHICLE_OUT_OF_CONTROL(iLocal_203[iVar0], 0, 1);
					iLocal_506[iVar0] = 1;
				}
			}
		}
		iVar0++;
	}
	if (!PED::IS_PED_INJURED(iLocal_63[1]))
	{
		if (iLocal_30 == 6)
		{
			if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_63[1], PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_63[1], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
			}
		}
		PED::SET_PED_RESET_FLAG(iLocal_63[1], 71, 1);
		PED::SET_PED_ACCURACY(iLocal_63[1], 0);
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_63[1]))
		{
			ENTITY::DETACH_ENTITY(iLocal_63[1], 1, 1);
		}
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_63[1], 1);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_199[0]))
		{
			if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(iLocal_199[0], iLocal_63[1]) && ENTITY::GET_ENTITY_SPEED(iLocal_199[0]) >= 2f) || (PED::IS_PED_RAGDOLL(iLocal_63[1]) && (iLocal_37 == 1 || iLocal_37 == 0)))
			{
				ENTITY::DETACH_ENTITY(iLocal_63[1], 1, 1);
				PED::APPLY_DAMAGE_TO_PED(iLocal_63[1], 1000, 1);
			}
		}
	}
	if (!iLocal_460)
	{
		func_610();
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0]))
			{
				if (!PED::IS_PED_INJURED(iLocal_174[iVar0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_174[iVar0]);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_174[iVar0]));
			}
			iVar0++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_234))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_234);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_233);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_157))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_157);
		}
		func_608(0, 0);
		iLocal_460 = 1;
	}
	if (!iLocal_461)
	{
		if ((IntToFloat(MISC::GET_GAME_TIMER()) >= (IntToFloat(iLocal_670) + 4000f) || bLocal_522) || iLocal_30 == 6)
		{
			if (PHYSICS::DOES_ROPE_EXIST(&(Local_816.f_5)))
			{
				PHYSICS::STOP_ROPE_UNWINDING_FRONT(Local_816.f_5);
				PHYSICS::START_ROPE_WINDING(Local_816.f_5);
				iLocal_671 = MISC::GET_GAME_TIMER();
				iLocal_461 = 1;
			}
		}
	}
	else if (!iLocal_462)
	{
		if (!bLocal_522)
		{
			if (IntToFloat(MISC::GET_GAME_TIMER()) >= (IntToFloat(iLocal_671) + 16000f))
			{
				if (PHYSICS::DOES_ROPE_EXIST(&(Local_816.f_5)))
				{
					PHYSICS::STOP_ROPE_WINDING(Local_816.f_5);
					iLocal_462 = 1;
				}
			}
		}
	}
	switch (iLocal_42)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1387.84f, -2061.63f, 51f, 500f, 500f, 500f, 0, 0, 0))
			{
				func_377(12);
				func_377(17);
				func_377(21);
				func_377(19);
				func_377(20);
				iLocal_42 = 1;
			}
			break;
		
		case 1:
			if (func_607())
			{
				func_606(5);
				func_605(5);
				if (func_20())
				{
					iLocal_231 = func_566(1387.1f, -2044.61f, 51.56f, 130.9f);
				}
				else
				{
					iLocal_231 = VEHICLE::CREATE_VEHICLE(func_16(21), 1387.1f, -2044.61f, 51.56f, 130.9f, 1, 1);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_231, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, 0))
				{
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_231, 1);
				}
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_231);
				iLocal_42 = 2;
			}
			break;
		
		case 2:
			break;
	}
	if (iLocal_37 == 0)
	{
	}
	if (!PED::IS_PED_INJURED(func_625()))
	{
		PED::SET_PED_RESET_FLAG(func_625(), 95, 1);
	}
	if (iLocal_30 == 6)
	{
		if (((iLocal_37 != 0 && iLocal_37 != 3) && iLocal_37 != 4) && GlobalFunc_8315() != 2)
		{
			if (!iLocal_499)
			{
				if (bLocal_384)
				{
					if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[0]))
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_756)
						{
							func_562();
							iLocal_499 = 1;
						}
					}
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				if (iLocal_684 < 0)
				{
					if (iLocal_683 > 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_199[0], Local_801[iLocal_683 /*3*/], 40f, 40f, 40f, 0, 0, 0))
						{
							iLocal_683 = (iLocal_683 - 1);
							func_561(-1, -1, -1082130432, -1082130432);
						}
					}
				}
				else
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
					func_557();
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, func_556(iLocal_684), 0) <= 30f || !func_554(Var3))
					{
						func_562();
					}
				}
			}
		}
	}
	if ((iLocal_37 != 0 && iLocal_37 != 2) && iLocal_37 != 1)
	{
		iLocal_1150 = MISC::GET_GAME_TIMER() + 100;
	}
	if (MISC::GET_GAME_TIMER() <= iLocal_1150 + 100)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	}
	switch (iLocal_37)
	{
		case 0:
			if (!iLocal_559)
			{
				GlobalFunc_612(&iVar6, &iVar7, &uVar8, &uVar9, 0);
				if ((((((((MISC::GET_GAME_TIMER() >= iLocal_755 || iVar6 > 20) || iVar6 < -20) || iVar7 > 20) || iVar7 < -20) || PAD::IS_CONTROL_PRESSED(0, 87)) || PAD::IS_CONTROL_PRESSED(0, 88)) || PAD::IS_CONTROL_PRESSED(0, 89)) || PAD::IS_CONTROL_PRESSED(0, 90))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[0]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[0]);
					}
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					iLocal_559 = 1;
				}
			}
			if (iLocal_30 == 6)
			{
				if (!iLocal_512)
				{
					if (bLocal_381)
					{
						iLocal_512 = 1;
					}
				}
			}
			func_552();
			func_551();
			if (GlobalFunc_5885(1))
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				iLocal_792 = MISC::GET_GAME_TIMER();
			}
			else if (MISC::GET_GAME_TIMER() <= iLocal_792 + 200)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			}
			if ((func_441() && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0])) && !iLocal_560)
			{
				if (GlobalFunc_10238(&iLocal_63, 0, 1))
				{
					bVar10 = false;
					fLocal_653 = GRAPHICS::_0xE59343E9E96529E7();
					if (iLocal_63.f_7 == 0)
					{
						iLocal_466 = 0;
						GlobalFunc_565(291, 1, 0);
						func_534(0, 0);
						iLocal_794 = MISC::GET_GAME_TIMER();
						iLocal_37 = 6;
						iLocal_756 = MISC::GET_GAME_TIMER() + 3000;
						bVar10 = true;
					}
					else if (iLocal_63.f_7 == 1)
					{
						GlobalFunc_565(291, 1, 0);
						iLocal_794 = MISC::GET_GAME_TIMER();
						iLocal_37 = 8;
						GRAPHICS::_0xB3C641F3630BF6DA(10f);
						func_534(1, 0);
						bVar10 = true;
					}
					if (bVar10)
					{
						iLocal_723 = -1;
						iLocal_684 = -1;
						iLocal_500 = 0;
						iLocal_499 = 0;
						iLocal_513 = 0;
						iLocal_465 = 1;
					}
				}
			}
			break;
		
		case 1:
			PLAYER::SET_PLAYER_LOCKON_RANGE_OVERRIDE(PLAYER::PLAYER_ID(), 130f);
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			func_551();
			if (MISC::GET_GAME_TIMER() <= iLocal_791)
			{
				if (!PED::IS_PED_INJURED(func_625()))
				{
					PED::SET_PED_RESET_FLAG(func_625(), 128, 1);
				}
			}
			if (MISC::GET_GAME_TIMER() >= iLocal_782)
			{
				if (FIRE::IS_EXPLOSION_IN_AREA(-1, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) - Vector(6f, 6f, 6f), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(6f, 6f, 6f)))
				{
					PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), 20, 1);
				}
				iLocal_782 = MISC::GET_GAME_TIMER() + 5000;
			}
			if (iLocal_445)
			{
				if ((func_441() && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0])) && !iLocal_560)
				{
					if (GlobalFunc_10238(&iLocal_63, 0, 1))
					{
						fLocal_653 = GRAPHICS::_0xE59343E9E96529E7();
						if (iLocal_63.f_7 == 2)
						{
							if (GlobalFunc_74("SG_HOTHLP2"))
							{
								HUD::CLEAR_HELP(0);
							}
							GlobalFunc_565(291, 1, 0);
							func_534(2, 0);
							iLocal_794 = MISC::GET_GAME_TIMER();
							iLocal_37 = 3;
						}
						else if (iLocal_63.f_7 == 1)
						{
							GlobalFunc_565(291, 1, 0);
							iLocal_794 = MISC::GET_GAME_TIMER();
							iLocal_37 = 7;
							GRAPHICS::_0xB3C641F3630BF6DA(10f);
							func_534(1, 0);
						}
					}
				}
			}
			break;
		
		case 2:
			Var11 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
			ENTITY::SET_ENTITY_ROTATION(iLocal_250, 0f, 0f, Var11.f_2, 2, 1);
			if (!bLocal_586)
			{
				if ((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[0], 0) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[1], 0)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[3], 0))
				{
					GlobalFunc_2779(&iLocal_63, 2, 0, 1);
					bLocal_586 = true;
				}
			}
			bVar14 = false;
			if (func_441())
			{
				bVar14 = GlobalFunc_10238(&iLocal_63, 0, 1);
			}
			if (!bLocal_601)
			{
				if (iLocal_30 == 6)
				{
					bLocal_601 = func_429("FBI2_LEAVE", 0, 0, 0, 1, 0);
				}
			}
			else if (!GlobalFunc_111())
			{
				iLocal_63.f_7 = 2;
				bVar14 = true;
			}
			if (bVar14)
			{
				ENTITY::SET_ENTITY_VISIBLE(func_622(), 1);
				fLocal_653 = GRAPHICS::_0xE59343E9E96529E7();
				GRAPHICS::_0xB3C641F3630BF6DA(10f);
				if (iLocal_63.f_7 == 0 || iLocal_63.f_7 == 2)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "Mood_Angry_1", 0);
					}
					if (iLocal_63.f_7 == 0)
					{
						GlobalFunc_565(291, 1, 0);
						func_534(0, 0);
						iLocal_794 = MISC::GET_GAME_TIMER();
						iLocal_37 = 5;
					}
					else
					{
						GlobalFunc_565(291, 1, 0);
						func_534(2, 0);
						iLocal_794 = MISC::GET_GAME_TIMER();
						iLocal_37 = 4;
					}
				}
			}
			else if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
				if (GlobalFunc_126(1))
				{
					iLocal_765 = 0;
					if (!CAM::DOES_CAM_EXIST(iLocal_289))
					{
						func_532(&iLocal_289);
						ENTITY::SET_ENTITY_VISIBLE(func_622(), 1);
						CAM::SET_CAM_FOV(iLocal_289, 45f);
						CAM::ATTACH_CAM_TO_ENTITY(iLocal_289, func_622(), 0f, -2.5f, 0.7f, 1);
						CAM::POINT_CAM_AT_ENTITY(iLocal_289, func_622(), 0f, 0f, 0.4f, 1);
					}
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				}
				else if (iLocal_765 == 4)
				{
					GlobalFunc_2866(&iLocal_289);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
				}
				else
				{
					iLocal_765++;
				}
			}
			break;
		
		case 4:
		case 3:
			bVar15 = false;
			if (iLocal_37 == 4)
			{
				bVar15 = func_450(2, 0, 1, 4, 0);
			}
			else
			{
				bVar15 = func_450(2, 0, 1, 2, 0);
			}
			iLocal_791 = MISC::GET_GAME_TIMER() + 500;
			if (!PED::IS_PED_INJURED(func_625()))
			{
				if (iLocal_30 == 6 || !bLocal_632)
				{
					PED::SET_PED_RESET_FLAG(func_625(), 128, 1);
				}
			}
			if (bVar15)
			{
				func_449();
				if (iLocal_30 == 5)
				{
					GlobalFunc_2774(&iLocal_63, 1, 0);
				}
				GlobalFunc_2774(&iLocal_63, 0, 0);
				GlobalFunc_2774(&iLocal_63, 2, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[2], 0))
				{
					GlobalFunc_2779(&iLocal_63, 1, 0, 2);
				}
				else
				{
					GlobalFunc_2779(&iLocal_63, 0, 2, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_63[1]))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_63[1], 16);
				}
				VEHICLE::SET_FAR_DRAW_VEHICLES(0);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
				GRAPHICS::CASCADE_SHADOWS_SET_AIRCRAFT_MODE(1);
				iLocal_196 = 0;
				iLocal_225 = 0;
				GlobalFunc_2866(&iLocal_289);
				GRAPHICS::_0xB3C641F3630BF6DA(fLocal_653);
				MISC::SET_TIME_SCALE(1f);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_199[0]);
				}
				iLocal_559 = 0;
				iLocal_755 = MISC::GET_GAME_TIMER() + 5000;
				iLocal_32 = 0;
				GlobalFunc_7632(0);
				iLocal_37 = 0;
			}
			else
			{
				if (iLocal_815)
				{
					Var16 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
					Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], 0f, 500f, 0f) };
					Var19.f_2 = Var16.f_2;
					func_447(Var19, ENTITY::GET_ENTITY_SPEED(iLocal_199[0]), fLocal_814, -1f, SYSTEM::FLOOR(Var16.f_2), 1, 1);
				}
				iLocal_815 = 0;
			}
			break;
		
		case 5:
		case 6:
			bVar22 = false;
			if (iLocal_37 == 5)
			{
				bVar22 = func_450(0, 0, 1, 4, 0);
			}
			else if (!bLocal_632)
			{
				bVar22 = func_450(0, 0, 1, 1, 0);
			}
			else
			{
				iVar23 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(func_625(), 2104565373) != 7)
				{
					iVar23 = 1;
				}
				bVar22 = func_450(0, 0, 1, 1, iVar23);
			}
			if (iLocal_30 == 5)
			{
				iLocal_791 = MISC::GET_GAME_TIMER() + 500;
			}
			else
			{
				iLocal_791 = MISC::GET_GAME_TIMER() + 1000;
			}
			if (!PED::IS_PED_INJURED(func_625()))
			{
				if (iLocal_30 == 6 || !bLocal_632)
				{
					PED::SET_PED_RESET_FLAG(func_625(), 128, 1);
				}
			}
			if (!iLocal_9847)
			{
				if (iLocal_37 == 6)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
					{
						Var24 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
						func_447(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], 0f, 100f, 0f), 40f, 10f, -1f, SYSTEM::FLOOR(Var24.f_2), 10, 0);
						iLocal_9847 = 1;
					}
				}
			}
			if (GlobalFunc_8315() == 0)
			{
				bVar27 = false;
				if (CAM::DOES_CAM_EXIST(Local_2398.f_1) || CAM::DOES_CAM_EXIST(Local_8603.f_1))
				{
					if (CAM::DOES_CAM_EXIST(Local_2398.f_1))
					{
						if (CAM::GET_CAM_SPLINE_PHASE(Local_2398.f_1) >= 0f)
						{
							bVar27 = true;
						}
					}
					if (CAM::DOES_CAM_EXIST(Local_8603.f_1))
					{
						if (CAM::GET_CAM_SPLINE_PHASE(Local_8603.f_1) >= 0f)
						{
							bVar27 = true;
						}
					}
				}
				else
				{
					bVar27 = true;
				}
				if (iLocal_37 == 6)
				{
					bVar27 = true;
				}
				if (bVar27)
				{
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
					PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
				}
				else
				{
					PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iLocal_759], 0))
				{
					fVar30 = fLocal_9852;
					Var32 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_203[iLocal_759], 1)) };
					fVar35 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_203[iLocal_759], 0);
					fVar36 = Var32.f_2;
					fVar31 = MISC::ATAN((fVar36 / fVar35));
					fVar28 = fVar30;
					fVar29 = fVar31;
					if (fVar31 > 7f)
					{
						fVar31 = 7f;
					}
					else if (fVar31 < -7f)
					{
						fVar31 = -7f;
					}
				}
				else
				{
					fVar28 = fLocal_9852;
					fVar29 = 0f;
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 2104565373) != 7 || !bLocal_632)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar28);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fVar29, 1065353216);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(30f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
			}
			if (bVar22)
			{
				if (iLocal_30 == 5)
				{
					GlobalFunc_2774(&iLocal_63, 1, 0);
				}
				GlobalFunc_2774(&iLocal_63, 0, 0);
				GlobalFunc_2774(&iLocal_63, 2, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[2], 0))
				{
					GlobalFunc_2779(&iLocal_63, 1, 0, 2);
				}
				else
				{
					GlobalFunc_2779(&iLocal_63, 0, 2, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_199[0]);
				}
				if (!PED::IS_PED_INJURED(iLocal_63[1]))
				{
					PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_63[1], 16);
				}
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
				GRAPHICS::CASCADE_SHADOWS_SET_AIRCRAFT_MODE(1);
				VEHICLE::SET_FAR_DRAW_VEHICLES(1);
				func_449();
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_624(5), 1);
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_624(5)) == 0)
				{
					WEAPON::SET_PED_AMMO(PLAYER::PLAYER_PED_ID(), func_624(5), 1);
				}
				WEAPON::SET_PED_INFINITE_AMMO(PLAYER::PLAYER_PED_ID(), 1, func_624(5));
				WEAPON::SET_PED_INFINITE_AMMO_CLIP(PLAYER::PLAYER_PED_ID(), 1);
				GRAPHICS::_0xB3C641F3630BF6DA(fLocal_653);
				MISC::SET_TIME_SCALE(1f);
				iLocal_32 = 0;
				iLocal_37 = 1;
				iLocal_9847 = 0;
			}
			else if (!iLocal_466)
			{
				if (GlobalFunc_8315() == 0)
				{
					if (!bLocal_503)
					{
						iLocal_466 = 1;
					}
				}
			}
			break;
		
		case 7:
		case 8:
			bVar37 = false;
			bVar37 = func_450(1, 0, 1, 3, 1);
			if (bVar37)
			{
				if (iLocal_30 >= 5)
				{
					if (!PED::IS_PED_INJURED(iLocal_63[0]))
					{
						TASK::TASK_PAUSE(iLocal_63[0], 100);
					}
				}
				if (iLocal_30 == 5)
				{
					GlobalFunc_2774(&iLocal_63, 1, 0);
				}
				GlobalFunc_2774(&iLocal_63, 0, 0);
				GlobalFunc_2774(&iLocal_63, 2, 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[2], 0))
				{
					if (bLocal_586)
					{
						GlobalFunc_2779(&iLocal_63, 1, 2, 0);
					}
					else
					{
						GlobalFunc_2779(&iLocal_63, 1, 0, 2);
					}
				}
				else if (bLocal_586)
				{
					GlobalFunc_2779(&iLocal_63, 2, 0, 1);
				}
				else
				{
					GlobalFunc_2779(&iLocal_63, 0, 2, 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_156))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_156, 0, 0, 0, 0, 0, 0, 0, 0);
				}
				VEHICLE::SET_FAR_DRAW_VEHICLES(0);
				GRAPHICS::CASCADE_SHADOWS_SET_AIRCRAFT_MODE(0);
				GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(2f);
				func_449();
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_199[0]);
				GRAPHICS::_0xB3C641F3630BF6DA(fLocal_653);
				PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(PLAYER::PLAYER_PED_ID(), 16);
				ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(PLAYER::PLAYER_PED_ID(), 0);
				func_445(0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_624(4), 1);
				iLocal_225 = 0;
				iLocal_724 = 0;
				iLocal_196 = 0;
				iLocal_9848 = 0;
				iLocal_32 = 0;
				iLocal_37 = 2;
			}
			else
			{
				if (!iLocal_9848)
				{
					if (iLocal_1156 == 4)
					{
						Var38 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
						Var41 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], 0f, 500f, 0f) };
						Var41.f_2 = (Var41.f_2 * 0.5f);
						TASK::CLEAR_PED_TASKS(func_404());
						fLocal_814 = 1000f;
						func_447(Var41, ENTITY::GET_ENTITY_SPEED(iLocal_199[0]), fLocal_814, -1f, SYSTEM::FLOOR(Var38.f_2), 1, 1);
						iLocal_9848 = 1;
					}
				}
				if (GlobalFunc_8315() == 1)
				{
					PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
					HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[2], 0))
					{
						Var44 = { ENTITY::GET_ENTITY_COORDS(iLocal_203[2], 1) - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						fVar47 = (MISC::GET_HEADING_FROM_VECTOR_2D(Var44.x, Var44.f_1) - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()));
					}
					else
					{
						fVar47 = 0f;
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar47);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(5f, 1065353216);
				}
			}
			break;
	}
	if (MISC::GET_GAME_TIMER() <= iLocal_1150)
	{
		func_444(1, 0);
		HUD::DISPLAY_RADAR(0);
		iLocal_624 = 1;
	}
	else if (iLocal_624)
	{
		HUD::DISPLAY_RADAR(1);
		iLocal_624 = 0;
	}
	if (!bLocal_521 && !bLocal_522)
	{
	}
}

void func_444(int iParam0, int iParam1)//Position - 0x54D91
{
	Global_17098.f_9 = iParam0;
	Global_17098.f_10 = iParam1;
}

void func_445(bool bParam0)//Position - 0x54DA7
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = func_622();
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_250))
		{
			OBJECT::DELETE_OBJECT(&iLocal_250);
		}
		if (bParam0)
		{
			Var1 = { func_405(36) };
		}
		else
		{
			Var1 = { -139.44f, -594.43f, 211.77f };
		}
		iLocal_250 = OBJECT::CREATE_OBJECT(func_16(22), Var1, 1, 1, 0);
		ENTITY::SET_ENTITY_HEADING(iLocal_250, -96.9f);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_250, 1);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_250, 0);
		ENTITY::SET_ENTITY_COLLISION(iLocal_250, 0, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, iLocal_250, 0, 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		if (bParam0)
		{
			ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
		}
	}
}


void func_447(struct<3> Param0, float fParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x54EAB
{
	int iVar0;
	
	iVar0 = func_404();
	if (!PED::IS_PED_INJURED(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		if (iVar0 != PLAYER::PLAYER_PED_ID() || bParam8)
		{
			if (!iLocal_513)
			{
				TASK::TASK_HELI_MISSION(iVar0, iLocal_199[0], 0, 0, Param0, 4, fParam3, fParam4, fParam5, iParam6, iParam7, -1082130432, 0);
			}
		}
		if (!bParam8)
		{
			iLocal_815 = 1;
		}
	}
}


void func_449()//Position - 0x54F2F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_183)
	{
		if (!PED::IS_PED_INJURED(iLocal_183[iVar0]))
		{
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_183[iVar0]);
		}
		iVar0++;
	}
}

int func_450(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x54F62
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	bool bVar24;
	
	Var0 = { Local_1144 };
	Var3 = { Local_1147 };
	Var6 = { 101.5139f, -615.4832f, 206.7403f };
	Var9 = { 0.34073f, 0f, -103.845f };
	switch (iLocal_32)
	{
		case 0:
			GlobalFunc_7206(0, 1, 1, 0);
			iLocal_63.f_39 = 1;
			iLocal_63.f_7 = iParam0;
			Local_107.f_12 = iLocal_63[iParam0];
			Local_107.f_19 = 0;
			iLocal_627 = 0;
			iLocal_628 = 0;
			iLocal_629 = 0;
			iLocal_1126 = 0;
			iLocal_32 = 1;
		
		case 1:
			switch (iParam3)
			{
				case 6:
					if (!Local_107.f_15)
					{
						func_531(180543640);
						Local_107[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var0, Var3, 35f, 1, 2);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(Local_107.f_9, Local_107[0], 0, 3);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(Local_107[0], 0.2f);
						Var12 = { GlobalFunc_721(Var0, Var6, 0.008f) };
						Local_107[1] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var12, Var3, 35f, 1, 2);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(Local_107.f_9, Local_107[1], 400, 2);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(Local_107[1], 0.4f);
						Local_107[2] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var6, Var9, 35f, 1, 2);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(Local_107.f_9, Local_107[2], 1000, 2);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(Local_107[2], 0.8f);
						CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_107.f_9, 1);
						CAM::SET_CAM_SPLINE_DURATION(Local_107.f_9, 1000);
						iLocal_628 = 0;
						iLocal_629 = 0;
						func_529();
						GlobalFunc_2866(&iLocal_289);
					}
					break;
				
				case 5:
					if (!Local_107.f_15 && !iLocal_627)
					{
						func_531(180543640);
						func_528(&iLocal_1126, iLocal_197, 1, 0.2f, 500, 500, 200, 300, 1045220557);
						func_527(&iLocal_1126, 0f, 0f, 5f);
						Var15 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
						if (Var15.f_2 > 0f)
						{
							Var15.f_2 = (Var15.f_2 - 360f);
						}
						Local_107[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, CAM::GET_FINAL_RENDERED_CAM_COORD(), Var15, CAM::GET_FINAL_RENDERED_CAM_FOV(), 1, 2);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(Local_107.f_9, Local_107[0], 0, 2);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(Local_107[0], 0.5f);
						Var21 = { GlobalFunc_721(Var15, Local_1147, 0.6f) };
						Var21.f_1 = Local_1147.f_1;
						Var18 = { GlobalFunc_721(CAM::GET_FINAL_RENDERED_CAM_COORD(), Local_1144, 0.1f) };
						Local_107[1] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var18, Var21, CAM::GET_FINAL_RENDERED_CAM_FOV(), 1, 2);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(Local_107.f_9, Local_107[1], 600, 2);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(Local_107[1], 0.8f);
						Local_107[3] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1144, Local_1147, 35f, 1, 2);
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(Local_107.f_9, Local_107[3], 900, 2);
						CAM::SET_CAM_MOTION_BLUR_STRENGTH(Local_107[3], 1f);
						CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(Local_107.f_9, 1);
						CAM::SET_CAM_SPLINE_DURATION(Local_107.f_9, 1000);
						iLocal_628 = 0;
						iLocal_629 = 0;
						func_529();
					}
					break;
				
				case 1:
					if (!Local_107.f_15)
					{
						func_531(180543640);
						iLocal_1155 = 2;
						if (CAM::_0xEAF0FA793D05C592())
						{
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
							{
								bLocal_632 = true;
							}
							else
							{
								bLocal_632 = false;
							}
						}
						else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
						{
							bLocal_632 = true;
						}
						else
						{
							bLocal_632 = false;
						}
						func_529();
					}
					break;
				
				case 2:
					if (!Local_107.f_15)
					{
						func_531(180543640);
						iLocal_1155 = 2;
						if (CAM::_0xEAF0FA793D05C592())
						{
							if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
							{
								bLocal_632 = true;
							}
							else
							{
								bLocal_632 = false;
							}
						}
						else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
						{
							bLocal_632 = true;
						}
						else
						{
							bLocal_632 = false;
						}
						func_529();
					}
					break;
				
				case 3:
					if (!Local_107.f_15)
					{
						func_531(1775630800);
						if (CAM::_0xEAF0FA793D05C592())
						{
							if (PLAYER::PLAYER_PED_ID() == func_625())
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
								{
									bLocal_632 = true;
								}
								else
								{
									bLocal_632 = false;
								}
							}
							else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
							{
								bLocal_632 = true;
							}
							else
							{
								bLocal_632 = false;
							}
						}
						else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
						{
							bLocal_632 = true;
						}
						else
						{
							bLocal_632 = false;
						}
						if (PLAYER::PLAYER_PED_ID() == func_625())
						{
							if (!bLocal_632)
							{
								func_526(&uLocal_6121, func_625(), func_622());
							}
							else
							{
								func_525(&uLocal_6121, func_625(), func_622());
							}
							iLocal_1156 = 3;
						}
						else
						{
							if (!bLocal_632)
							{
								func_524(&uLocal_4880, iLocal_199[0], func_622());
							}
							else
							{
								func_523(&uLocal_4880, func_404(), func_622());
							}
							iLocal_1156 = 4;
						}
						iLocal_1155 = 2;
						func_529();
					}
					break;
				
				case 4:
					if (!Local_107.f_15)
					{
						func_531(1775630800);
						if (CAM::_0xEAF0FA793D05C592())
						{
							if (iParam0 == 0)
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
								{
									bLocal_632 = true;
								}
								else
								{
									bLocal_632 = false;
								}
							}
							else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
							{
								bLocal_632 = true;
							}
							else
							{
								bLocal_632 = false;
							}
						}
						else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(CAM::_GET_CAM_ACTIVE_VIEW_MODE_CONTEXT()) == 4)
						{
							bLocal_632 = true;
						}
						else
						{
							bLocal_632 = false;
						}
						if (!Local_107.f_15)
						{
							if (iParam0 == 0)
							{
								if (!bLocal_632)
								{
									func_522(&Local_8603, func_622(), func_625());
								}
								else
								{
									func_521(&Local_8603, func_622(), func_625());
								}
								iLocal_1156 = 2;
							}
							else
							{
								if (!bLocal_632)
								{
									func_520(&uLocal_7362, func_622(), iLocal_199[0]);
								}
								else
								{
									func_519(&uLocal_7362, func_622(), func_404());
								}
								iLocal_1156 = 1;
							}
							iLocal_1155 = 2;
							func_529();
							GlobalFunc_2866(&iLocal_289);
						}
					}
					break;
			}
			if (!bParam1)
			{
				switch (iParam3)
				{
					case 0:
						bVar24 = func_517(&Local_107, 0, 0, 0, -1, 0, 800);
						break;
					
					case 1:
						bVar24 = func_514(&Local_2398, 1);
						break;
					
					case 4:
						if (iLocal_1156 == 2)
						{
							bVar24 = func_512(&Local_8603, 1);
						}
						else
						{
							bVar24 = func_512(&uLocal_7362, 1);
						}
						break;
					
					case 6:
						bVar24 = func_517(&Local_107, 1000f, 1000f, 1, 0, 0, 800);
						break;
					
					case 3:
						if (iLocal_1156 == 3)
						{
							bVar24 = func_505(&uLocal_6121, 1);
						}
						else
						{
							bVar24 = func_505(&uLocal_4880, 1);
						}
						break;
					
					case 2:
						bVar24 = func_470(&uLocal_3639, 1);
						break;
					
					case 5:
						bVar24 = true;
						if (!iLocal_627)
						{
							if (!func_455(&Local_107, 400, 0))
							{
								iLocal_627 = 1;
							}
						}
						else if (func_452(&iLocal_1126, 1, 0, 1, 0, 1, 0))
						{
							bVar24 = false;
						}
						break;
				}
				PAD::DISABLE_CONTROL_ACTION(0, 2, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 1, 1);
				if (bVar24)
				{
					if (Local_107.f_18)
					{
						if (!Local_107.f_19)
						{
							if (GlobalFunc_10980(&iLocal_63, 1, bParam2, iParam4))
							{
								func_301(0);
								Local_107.f_19 = 1;
							}
						}
					}
				}
				else
				{
					func_451();
					if (CAM::DOES_CAM_EXIST(Local_107.f_9))
					{
						CAM::DESTROY_CAM(Local_107.f_9, 0);
					}
					func_386(&iLocal_1126);
					if (iParam3 == 5)
					{
						CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(3f);
					}
					func_301(1);
					iLocal_32 = 2;
					return 1;
				}
			}
			else if (GlobalFunc_10980(&iLocal_63, 1, bParam2, iParam4))
			{
				Local_107.f_19 = 1;
				func_301(1);
				iLocal_32 = 2;
				return 1;
			}
			break;
	}
	return 0;
}

void func_451()//Position - 0x55682
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_107)
	{
		if (CAM::DOES_CAM_EXIST(Local_107[iVar0]))
		{
			CAM::DESTROY_CAM(Local_107[iVar0], 0);
		}
		iVar0++;
	}
}

int func_452(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x556B5
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	struct<3> Var15;
	struct<3> Var18;
	var uVar21;
	
	switch (*iParam0)
	{
		case 0:
			GlobalFunc_5077();
			if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_5))
			{
				func_386(iParam0);
				Var0 = { CAM::GET_FINAL_RENDERED_CAM_COORD() };
				if (bParam1)
				{
					Var0 = { Var0 + ENTITY::GET_ENTITY_VELOCITY(iParam0->f_5) * FtoV(MISC::GET_FRAME_TIME()) };
				}
				Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0->f_5, Var0) };
				Var6 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
				Var9 = { Var6 + iParam0->f_9 };
				Var12 = { Var9 - ENTITY::GET_ENTITY_ROTATION(iParam0->f_5, 2) };
				Var15 = { (-SYSTEM::SIN(Var9.f_2) * SYSTEM::COS(Var9.x)), (SYSTEM::COS(Var9.f_2) * SYSTEM::COS(Var9.x)), SYSTEM::SIN(Var9.x) };
				Var18 = { (-SYSTEM::SIN(Var12.f_2) * SYSTEM::COS(Var12.x)), (SYSTEM::COS(Var12.f_2) * SYSTEM::COS(Var12.x)), SYSTEM::SIN(Var12.x) };
				uVar21 = CAM::GET_FINAL_RENDERED_CAM_FOV();
				if (iParam0->f_17 > 0 || iParam6 != 0)
				{
					iParam0->f_3 = CAM::CREATE_CAMERA(1775630800, 0);
				}
				iParam0->f_1 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1)
				{
					CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_1, iParam0->f_5, Var3, 1);
				}
				else
				{
					CAM::SET_CAM_COORD(iParam0->f_1, Var0);
				}
				CAM::SET_CAM_ROT(iParam0->f_1, Var6, 2);
				CAM::SET_CAM_FOV(iParam0->f_1, uVar21);
				iParam0->f_2 = CAM::CREATE_CAMERA(26379945, 1);
				if (bParam1 && !bParam4)
				{
					CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_2, iParam0->f_5, Var3 + Var18 * Vector(iParam0->f_12, iParam0->f_12, iParam0->f_12), 1);
				}
				else
				{
					CAM::SET_CAM_COORD(iParam0->f_2, Var0 + Var15 * Vector(iParam0->f_12, iParam0->f_12, iParam0->f_12));
				}
				CAM::SET_CAM_ROT(iParam0->f_2, Var6, 2);
				CAM::SET_CAM_FOV(iParam0->f_2, fVar21);
				if (iParam0->f_17 > 0 && iParam6 == 0)
				{
					iParam0->f_4 = CAM::CREATE_CAMERA(26379945, 1);
					if (bParam1 && !bParam4)
					{
						CAM::ATTACH_CAM_TO_ENTITY(iParam0->f_4, iParam0->f_5, Var3 + Var18 * Vector(iParam0->f_12, iParam0->f_12, iParam0->f_12) * Vector(iParam0->f_13, iParam0->f_13, iParam0->f_13), 1);
					}
					else
					{
						CAM::SET_CAM_COORD(iParam0->f_4, Var0 + Var15 * Vector(iParam0->f_12, iParam0->f_12, iParam0->f_12) * Vector(iParam0->f_13, iParam0->f_13, iParam0->f_13));
					}
					CAM::SET_CAM_ROT(iParam0->f_4, Var6, 2);
					CAM::SET_CAM_FOV(iParam0->f_4, fVar21);
				}
				if (iParam0->f_17 > 0 || iParam6 != 0)
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iParam0->f_3, iParam0->f_1, 0, 2);
					if (iParam6 == 0)
					{
						CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iParam0->f_3, iParam0->f_4, iParam0->f_17, 2);
					}
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iParam0->f_3, iParam0->f_2, (iParam0->f_14 - iParam0->f_17), 2);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iParam0->f_3, iParam6);
					CAM::SET_CAM_ACTIVE(iParam0->f_3, 1);
				}
				else
				{
					CAM::SET_CAM_ACTIVE_WITH_INTERP(iParam0->f_2, iParam0->f_1, iParam0->f_14, 2, 2);
				}
				CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				iParam0->f_7 = MISC::GET_GAME_TIMER();
				iParam0->f_8 = 0;
				*iParam0 = 1;
			}
			else
			{
				return 1;
			}
			break;
		
		case 1:
			GlobalFunc_5077();
			if (bParam3)
			{
				if (!iParam0->f_8)
				{
					if (MISC::GET_GAME_TIMER() >= (iParam0->f_7 + iParam0->f_16))
					{
						if (bParam5)
						{
							switch (iParam0->f_6)
							{
								case 1:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInFranklin", 0, 0);
									break;
								
								case 0:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInMichael", 0, 0);
									break;
								
								case 2:
									GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, 0);
									break;
							}
						}
						else
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iParam0->f_8 = 1;
					}
				}
			}
			if (MISC::GET_GAME_TIMER() >= (iParam0->f_7 + iParam0->f_15))
			{
				if (bParam2)
				{
					func_386(iParam0);
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				}
				return 1;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}



int func_455(var uParam0, int iParam1, int iParam2)//Position - 0x55A79
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	float fVar23;
	bool bVar24;
	float fVar25;
	
	if (!uParam0->f_15)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && CAM::DOES_CAM_EXIST(uParam0->f_10))
		{
			uParam0->f_27 = 0;
			Var16 = { CAM::GET_CAM_COORD(uParam0->f_10) };
			Var19 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar22 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var19, Var16, 0);
			fVar23 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var19, Var16, 1);
			if (!CAM::DOES_CAM_EXIST(uParam0->f_9))
			{
				uParam0->f_9 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			}
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar0]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar0], 0);
				}
				iVar0++;
			}
			fVar3 = 450f;
			if (Var19.f_2 > Var16.f_2)
			{
				fVar3 = GlobalFunc_567(fVar3, (Var19.f_2 + 25f));
			}
			else
			{
				fVar3 = GlobalFunc_567(fVar3, (Var16.f_2 + 25f));
			}
			fVar2 = 20f;
			Var13 = { Var16 - Var19 };
			Var13.f_2 = 0f;
			Var13 = { GlobalFunc_903(Var13, GlobalFunc_2776((fVar3 * MISC::TAN(fVar2)), (fVar22 / 3f))) };
			fVar23 = GlobalFunc_253(fVar23, 50f, 4000f);
			iVar1 = SYSTEM::ROUND(((fVar23 / ((4000f - 50f) / (2000f - 1000f))) + 1000f));
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar6 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				bVar5 = true;
			}
			Var7 = { CAM::GET_CAM_ROT(uParam0->f_10, 2) };
			fVar4 = Var7.f_2;
			if (fVar4 > 180f)
			{
				fVar4 = (fVar4 - 360f);
			}
			Var7 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
			uParam0->f_24 = 0;
			CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
			if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
			{
				(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			if (bVar5)
			{
				Var10 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar6, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar6, Var10, 1);
			}
			else
			{
				Var10 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var10, 1);
			}
			CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var7, 2);
			CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
			uParam0->f_24++;
			uParam0->f_27 = uParam0->f_27;
			if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
			{
				(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			if (bVar5)
			{
				Var10 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar6, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar6, Var10 + Vector(15f, 0f, 0f), 1);
			}
			else
			{
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), 0f, 0f, 5f, 0);
			}
			CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var7.f_2, 2);
			CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
			uParam0->f_24++;
			uParam0->f_27 += 400;
			if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
			{
				(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			if (bVar5)
			{
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar6, Vector(fVar3, 0f, 0f) + Var13, 0);
			}
			else
			{
				CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Vector(fVar3, 0f, 0f) + Var13, 0);
			}
			CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var7.f_2, 2);
			CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 800, 1);
			uParam0->f_24++;
			uParam0->f_27 += 800;
			if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
			{
				(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			CAM::SET_CAM_COORD((*uParam0)[uParam0->f_24], OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(CAM::GET_CAM_COORD(uParam0->f_10), fVar4, Vector(fVar3, 0f, 0f) - Var13));
			CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar4, 2);
			CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iVar1, 1);
			uParam0->f_24++;
			uParam0->f_27 = (uParam0->f_27 + iVar1);
			if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
			{
				(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			CAM::SET_CAM_COORD((*uParam0)[uParam0->f_24], CAM::GET_CAM_COORD(uParam0->f_10) + Vector(5f, 0f, 0f));
			CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar4, 2);
			CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 800, 1);
			uParam0->f_24++;
			uParam0->f_27 += 800;
			if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
			{
				(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
			}
			CAM::SET_CAM_COORD((*uParam0)[uParam0->f_24], CAM::GET_CAM_COORD(uParam0->f_10));
			CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], CAM::GET_CAM_ROT(uParam0->f_10, 2), 2);
			CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_CAM_FOV(uParam0->f_10));
			CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iParam1, 1);
			uParam0->f_24++;
			uParam0->f_27 = (uParam0->f_27 + iParam1);
			uParam0->f_15 = 1;
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_15 && !uParam0->f_16)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				uParam0->f_21 = GlobalFunc_701();
				GlobalFunc_7632(1);
				if (uParam0->f_24 > 0)
				{
					iVar0 = 0;
					while (iVar0 <= (uParam0->f_24 - 1))
					{
						CAM::SET_CAM_ACTIVE((*uParam0)[iVar0], 1);
						iVar0++;
					}
				}
				GlobalFunc_7723(0, 1);
				CAM::SET_CAM_ACTIVE(uParam0->f_9, 1);
				if (iParam2 == 0)
				{
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(true, 1, iParam2, 1, 0, 0);
				}
				if (!Global_17098.f_111)
				{
					if (uParam0->f_14 == 3)
					{
						AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
						if (Global_17098.f_109 == -1)
						{
							Global_17098.f_109 = AUDIO::GET_SOUND_ID();
							Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
						}
						AUDIO::PLAY_SOUND(Global_17098.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
						AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
						{
						}
					}
				}
				uParam0->f_28 = func_457(uParam0->f_9);
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				GlobalFunc_748(1);
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			bVar24 = true;
			if (uParam0->f_24 > 0)
			{
				iVar0 = 0;
				while (iVar0 <= (uParam0->f_24 - 1))
				{
					if (!CAM::DOES_CAM_EXIST((*uParam0)[iVar0]))
					{
						bVar24 = false;
					}
					iVar0++;
				}
			}
			if (bVar24)
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_9))
				{
					if (!Global_17098.f_111)
					{
						if (uParam0->f_14 == 3)
						{
							fVar25 = func_457(uParam0->f_9);
							if (fVar25 > uParam0->f_28)
							{
								uParam0->f_28 = fVar25;
							}
							else if (uParam0->f_28 > (fVar25 + 1f))
							{
								if (Global_17098.f_107 == -1)
								{
									Global_17098.f_107 = AUDIO::GET_SOUND_ID();
									Global_17098.f_108 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
									AUDIO::PLAY_SOUND(Global_17098.f_107, "CHARACTER_CHANGE_DOWN_MASTER", 0, 0, 0, 1);
								}
								if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
								{
									AUDIO::STOP_SOUND(Global_17098.f_109);
									AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
									Global_17098.f_109 = -1;
									Global_17098.f_110 = 0;
									AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
								}
							}
						}
					}
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_9) > 0.5f && CAM::IS_CAM_RENDERING(uParam0->f_9))
					{
						uParam0->f_18 = 1;
					}
				}
				else
				{
					uParam0->f_17 = 1;
				}
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			CAM::DESTROY_CAM(uParam0->f_9, 0);
		}
		if (uParam0->f_24 > 0)
		{
			iVar0 = 0;
			while (iVar0 <= (uParam0->f_24 - 1))
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar0]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar0], 0);
				}
				iVar0++;
			}
		}
		uParam0->f_15 = 0;
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
			Global_17098.f_109 = -1;
			Global_17098.f_110 = 0;
		}
		if (Global_17098.f_107 != -1 && Global_17098.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_107);
			Global_17098.f_107 = -1;
			Global_17098.f_108 = 0;
		}
		GlobalFunc_7632(uParam0->f_21);
		if (CAM::DOES_CAM_EXIST(uParam0->f_10))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_10, 1);
		}
		GlobalFunc_748(0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}


float func_457(int iParam0)//Position - 0x5637B
{
	struct<3> Var0;
	
	if (CAM::DOES_CAM_EXIST(uParam0))
	{
		Var0 = { CAM::GET_CAM_COORD(iParam0) };
		return Var0.f_2;
	}
	return 0f;
}













int func_470(var uParam0, bool bParam1)//Position - 0x56585
{
	int iVar0;
	int iVar1;
	
	PED::IS_PED_INJURED(func_622());
	PED::IS_PED_INJURED(func_625());
	PED::IS_PED_INJURED(func_404());
	VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0);
	switch (iLocal_1155)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			if (!bLocal_632)
			{
				func_504(uParam0, func_625(), func_404());
			}
			else
			{
				func_503(uParam0, func_625(), func_404());
			}
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			func_484(uParam0);
			if (bLocal_632)
			{
				iVar1 = 0;
				while (iVar1 < uParam0->f_10)
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_10[iVar1 /*57*/].f_1))
					{
						CAM::SET_CAM_INHERIT_ROLL_VEHICLE(uParam0->f_10[iVar1 /*57*/].f_1, iLocal_199[0]);
					}
					iVar1++;
				}
			}
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			SYSTEM::SETTIMERB(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_9844 = 0;
			if (iLocal_30 == 6)
			{
				if (!bLocal_632)
				{
					TASK::CLEAR_PED_TASKS(func_625());
				}
			}
			iLocal_1155 = 3;
			return 1;
			break;
		
		case 3:
			iVar0 = func_471(uParam0);
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (iVar0 >= uParam0->f_1218)
				{
					Local_107.f_18 = 1;
				}
				if (bLocal_632)
				{
					if (!iLocal_628)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_656 + 20)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_793 = MISC::GET_GAME_TIMER();
							iLocal_628 = 1;
						}
					}
					if (!iLocal_629)
					{
						if (iLocal_628)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_793 + 150)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_629 = 1;
							}
						}
					}
				}
				if (CAM::DOES_CAM_EXIST(uParam0->f_1))
				{
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
					{
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
						iLocal_1155 = 5;
					}
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					iLocal_1155 = 5;
				}
			}
			return 1;
			break;
		
		case 5:
			MISC::SET_TIME_SCALE(1f);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_1, 0);
			}
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			if (!iLocal_9844)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				iLocal_9844 = 1;
			}
			SYSTEM::SETTIMERA(0);
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
			iLocal_1155 = 0;
			uParam0->f_1232 = 1;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			Local_107.f_15 = 0;
			Local_107.f_18 = 0;
			TASK::CLEAR_PED_TASKS(func_625());
			return 0;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

int func_471(var uParam0)//Position - 0x56807
{
	int iVar0;
	int iVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	bool bVar5;
	
	iVar0 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1);
	iVar1 = CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1;
	if (iVar1 > uParam0->f_1217)
	{
		iVar1 = uParam0->f_1217;
	}
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		switch (uParam0->f_10[iVar1 /*57*/].f_34)
		{
			case 0:
				fLocal_27 = GlobalFunc_551(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1));
				break;
			
			case 1:
				fLocal_27 = GlobalFunc_5161(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 2:
				fLocal_27 = GlobalFunc_5160(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
			
			case 3:
				fLocal_27 = GlobalFunc_5159(uParam0->f_10[iVar1 /*57*/].f_33, uParam0->f_10[iVar1 + 1 /*57*/].f_33, GlobalFunc_253((CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) * (1f / uParam0->f_10[iVar1 /*57*/].f_35)), 0f, 1f));
				break;
		}
		MISC::SET_TIME_SCALE(fLocal_27);
	}
	else
	{
		MISC::SET_TIME_SCALE(1f);
	}
	if (uParam0->f_10[iVar0 /*57*/].f_2 == 8)
	{
		GlobalFunc_674(uParam0, iVar0, 0);
	}
	if (!uParam0->f_10[iVar1 /*57*/].f_56)
	{
		if (uParam0->f_10[iVar1 /*57*/].f_50 != 0)
		{
			if (!uParam0->f_1231 || (iVar1 > 1 && uParam0->f_10[iVar0 /*57*/].f_50 != uParam0->f_10[iVar1 /*57*/].f_50))
			{
				if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
				{
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
							sVar2 = "switch_cam_2";
							break;
						
						case 2:
							sVar2 = "switch_cam_1";
							break;
						
						case 3:
							sVar2 = "SwitchHUDIn";
							break;
					}
					switch (uParam0->f_10[iVar1 /*57*/].f_50)
					{
						case 1:
						case 2:
							GlobalFunc_5158(uParam0, iVar1);
							if (uParam0->f_10[iVar1 /*57*/].f_51 > 0f)
							{
								GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER(sVar2, uParam0->f_10[iVar1 /*57*/].f_51);
							}
							else
							{
								GRAPHICS::SET_TIMECYCLE_MODIFIER(sVar2);
							}
							break;
						
						case 3:
							GlobalFunc_5158(uParam0, iVar1);
							GRAPHICS::ANIMPOSTFX_PLAY(sVar2, SYSTEM::FLOOR((1000f * uParam0->f_10[iVar1 /*57*/].f_51)), 0);
							break;
					}
					uParam0->f_1231 = 1;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
		else if (uParam0->f_1231)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_52)
			{
				if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1)
				{
					GRAPHICS::_0x1CBA05AE7BD7EE05(uParam0->f_10[iVar1 /*57*/].f_51);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
				else if (!MISC::ARE_STRINGS_EQUAL(GlobalFunc_673(), ""))
				{
					GlobalFunc_5158(uParam0, iVar1);
					uParam0->f_1231 = 0;
					uParam0->f_10[iVar1 /*57*/].f_56 = 1;
				}
			}
		}
	}
	if (uParam0->f_10[iVar1 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_44)
		{
			if (CAM::GET_CAM_SPLINE_NODE_PHASE(uParam0->f_1) >= uParam0->f_10[iVar1 /*57*/].f_38)
			{
				GlobalFunc_672(uParam0, iVar1);
				uParam0->f_10[iVar1 /*57*/].f_44 = 1;
			}
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_36)
	{
		if (!uParam0->f_10[iVar0 /*57*/].f_44)
		{
			GlobalFunc_672(uParam0, iVar0);
			uParam0->f_10[iVar0 /*57*/].f_44 = 1;
		}
	}
	GRAPHICS::_0xE3E2C1B4C59DBC77(6);
	if (iVar1 < (uParam0->f_1217 - 1))
	{
		if (!uParam0->f_10[iVar1 /*57*/].f_55)
		{
			if (uParam0->f_10[iVar1 /*57*/].f_54)
			{
				CAM::STOP_CAM_SHAKING(uParam0->f_10[iVar1 /*57*/].f_1, 1);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_53 != 0)
			{
				sVar4 = "shake_cam_all@";
				if (uParam0->f_10[iVar1 /*57*/].f_53 == 1)
				{
					sVar3 = "light";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 2)
				{
					sVar3 = "medium";
				}
				else if (uParam0->f_10[iVar1 /*57*/].f_53 == 3)
				{
					sVar3 = "heavy";
				}
				CAM::ANIMATED_SHAKE_CAM(uParam0->f_10[iVar1 /*57*/].f_1, sVar4, sVar3, "", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			else
			{
				CAM::SHAKE_CAM(uParam0->f_1, "SKY_DIVING_SHAKE", uParam0->f_10[iVar1 /*57*/].f_23);
			}
			uParam0->f_10[iVar1 /*57*/].f_55 = 1;
		}
	}
	if (uParam0->f_10[iVar0 /*57*/].f_45)
	{
		GlobalFunc_671(0, 0, 1, 1);
	}
	else
	{
		GlobalFunc_671(3, 3, 0, 0);
	}
	if (CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) < uParam0->f_1217)
	{
		if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) + 1 /*57*/].f_46)
		{
			bVar5 = true;
		}
	}
	if (uParam0->f_10[CAM::GET_CAM_SPLINE_NODE_INDEX(uParam0->f_1) /*57*/].f_46)
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		CAM::SET_USE_HI_DOF();
	}
	GlobalFunc_670(uParam0);
	return iVar0;
}













void func_484(var uParam0)//Position - 0x571D6
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!GlobalFunc_5163(uParam0))
	{
	}
	iVar0 = 0;
	uParam0->f_1232 = 0;
	GlobalFunc_685(uParam0);
	iVar1 = 0;
	while (iVar1 < 20)
	{
		uParam0->f_10[iVar1 /*57*/].f_44 = 0;
		iVar1++;
	}
	uParam0->f_1231 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	uParam0->f_1 = CAM::CREATE_CAMERA(1665938388, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_1217)
		{
			func_488(uParam0, iVar1);
			if (uParam0->f_10[iVar1 /*57*/].f_4 || uParam0->f_10[iVar1 /*57*/].f_2 == 2)
			{
				if (GlobalFunc_676(uParam0, iVar1))
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_1, uParam0->f_10[iVar1 /*57*/].f_1, uParam0->f_10[iVar1 /*57*/].f_5, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(uParam0->f_1, uParam0->f_10[iVar1 /*57*/].f_5, 2);
				}
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_1, uParam0->f_10[iVar1 /*57*/].f_1, uParam0->f_10[iVar1 /*57*/].f_5, 2);
			}
			if (GlobalFunc_676(uParam0, iVar1))
			{
				GlobalFunc_6816(uParam0, iVar1);
			}
			if (uParam0->f_10[iVar1 /*57*/].f_28 > 0 && uParam0->f_10[iVar1 /*57*/].f_29 > 0f)
			{
				switch (uParam0->f_10[iVar1 /*57*/].f_28)
				{
					case 1:
						iVar0 = 4;
						break;
					
					case 2:
						iVar0 = 8;
						break;
					
					case 3:
						iVar0 = 16;
						break;
				}
				CAM::SET_CAM_SPLINE_NODE_EASE(uParam0->f_1, iVar1, iVar0, uParam0->f_10[iVar1 /*57*/].f_29);
			}
			iVar2 = 0;
			if (uParam0->f_10[iVar1 /*57*/].f_30)
			{
				iVar2++;
			}
			if (uParam0->f_10[iVar1 /*57*/].f_31)
			{
				iVar2 += 8;
			}
			CAM::SET_CAM_SPLINE_NODE_VELOCITY_SCALE(uParam0->f_1, iVar1, uParam0->f_10[iVar1 /*57*/].f_32);
			CAM::SET_CAM_SPLINE_NODE_EXTRA_FLAGS(uParam0->f_1, iVar1, iVar2);
			iVar1++;
		}
		if (uParam0->f_3)
		{
			if (uParam0->f_1219 >= 0)
			{
				CAM::ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(uParam0->f_1, uParam0->f_1219, 2);
			}
		}
		if (uParam0->f_2)
		{
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_1, 0);
		}
		iVar1 = 0;
		while (iVar1 < 16)
		{
			if (uParam0->f_1151[iVar1 /*2*/].f_1 > -1f)
			{
				CAM::OVERRIDE_CAM_SPLINE_VELOCITY(uParam0->f_1, iVar1, uParam0->f_1151[iVar1 /*2*/], uParam0->f_1151[iVar1 /*2*/].f_1);
			}
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 16)
		{
			CAM::OVERRIDE_CAM_SPLINE_MOTION_BLUR(uParam0->f_1, iVar1, uParam0->f_1184[iVar1 /*2*/], uParam0->f_1184[iVar1 /*2*/].f_1);
			iVar1++;
		}
		CAM::_0x271017B9BA825366(uParam0->f_1, 0);
	}
}




void func_488(var uParam0, int iParam1)//Position - 0x575D8
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	struct<3> Var32;
	float fVar35;
	float fVar36;
	struct<3> Var37;
	struct<3> Var40;
	struct<3> Var43;
	float fVar46;
	struct<3> Var47;
	var uVar50;
	
	if (GlobalFunc_676(uParam0, iParam1))
	{
		GlobalFunc_684(uParam0, iParam1);
	}
	if (uParam0->f_10[iParam1 /*57*/].f_21 == 0f)
	{
		fVar0 = CAM::GET_GAMEPLAY_CAM_FOV();
	}
	else
	{
		fVar0 = uParam0->f_10[iParam1 /*57*/].f_21;
	}
	if (GlobalFunc_683(uParam0, iParam1))
	{
		GlobalFunc_682(uParam0, iParam1);
		if (iParam1 == (uParam0->f_1217 - 1))
		{
			uParam0->f_10[iParam1 /*57*/].f_54 = 0;
		}
	}
	if (iParam1 == (uParam0->f_1217 - 1))
	{
		uParam0->f_10[iParam1 /*57*/].f_54 = 0;
	}
	if (uParam0->f_10[iParam1 /*57*/].f_2 == 4)
	{
		if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
		{
			Var1 = { GlobalFunc_681(uParam0, uParam0->f_10[iParam1 /*57*/].f_3) };
		}
		else
		{
			Var1 = { uParam0->f_10[iParam1 /*57*/].f_13 };
		}
		if ((iParam1 == 0 || (iParam1 > 0 && uParam0->f_10[(iParam1 - 1) /*57*/].f_4)) || (iParam1 > 0 && uParam0->f_10[(iParam1 - 1) /*57*/].f_2 == 2))
		{
			Var4 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		}
		else
		{
			Var4 = { uParam0->f_10[(iParam1 - 1) /*57*/].f_6 };
			if (GlobalFunc_680(uParam0, (iParam1 - 1)))
			{
				ENTITY::GET_ENTITY_MATRIX(GlobalFunc_5162(uParam0, (iParam1 - 1), -1), &Var7, &Var10, &Var13, &Var16);
				if (uParam0->f_10[iParam1 /*57*/].f_20)
				{
					Var4 = { Var16 + Var7 * FtoV(uParam0->f_10[(iParam1 - 1) /*57*/].f_6.f_1) + Var10 * FtoV(uParam0->f_10[(iParam1 - 1) /*57*/].f_6) + Var13 * FtoV(uParam0->f_10[(iParam1 - 1) /*57*/].f_6.f_2) };
				}
				else
				{
					Var4 = { Var16 + uParam0->f_10[(iParam1 - 1) /*57*/].f_6 };
				}
			}
		}
		Var19 = { Var1 - Var4 };
		fVar22 = (SYSTEM::VMAG(Var19) - uParam0->f_10[iParam1 /*57*/].f_12);
		Var19 = { GlobalFunc_107(Var19) };
		Var19 = { Var19 * Vector(fVar22, fVar22, fVar22) };
		uParam0->f_10[iParam1 /*57*/].f_6 = { Var4 + Var19 };
		if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
		{
			uParam0->f_10[iParam1 /*57*/].f_13 = { Var1 };
		}
	}
	else if (uParam0->f_10[iParam1 /*57*/].f_2 == 5 || uParam0->f_10[iParam1 /*57*/].f_2 == 6)
	{
		Var23 = { 0f, 0f, 0f };
		if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_5162(uParam0, uParam0->f_1218, -1)))
		{
			if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
			{
				Var23 = { GlobalFunc_681(uParam0, uParam0->f_10[iParam1 /*57*/].f_3) };
			}
			else
			{
				Var23 = { ENTITY::GET_ENTITY_COORDS(GlobalFunc_5162(uParam0, uParam0->f_1218, -1), 1) };
			}
		}
		Var26 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		Var29 = { CAM::GET_GAMEPLAY_CAM_COORD() };
		Var32 = { Var23 - Var29 };
		fVar35 = 0f;
		if (iParam1 < uParam0->f_1218 || uParam0->f_1218 == 0)
		{
			fVar35 = uParam0->f_10[iParam1 /*57*/].f_12;
		}
		fVar36 = (SYSTEM::VMAG(Var32) - fVar35);
		Var32 = { GlobalFunc_679(Var26) };
		Var29 = { Var29 + Var32 * Vector(fVar35, fVar35, fVar35) };
		if (iParam1 < uParam0->f_1218)
		{
			uParam0->f_10[iParam1 /*57*/].f_6 = { Var29 };
		}
		else
		{
			uParam0->f_10[iParam1 /*57*/].f_6 = { Var29 + Var32 * FtoV((fVar36 - uParam0->f_10[iParam1 /*57*/].f_12)) };
		}
		uParam0->f_10[iParam1 /*57*/].f_9 = { Var26 };
	}
	else if (uParam0->f_10[iParam1 /*57*/].f_2 == 7)
	{
		Var37 = { uParam0->f_10[iParam1 /*57*/].f_13 };
		Var40 = { ENTITY::GET_ENTITY_COORDS(GlobalFunc_5162(uParam0, iParam1, -1), 1) };
		Var43 = { Var37 - Var40 };
		fVar46 = 0f;
		fVar46 = uParam0->f_10[iParam1 /*57*/].f_12;
		Var43 = { GlobalFunc_107(Var43) };
		Var47 = { Var40 + Var43 * Vector(fVar46, fVar46, fVar46) };
		Var47.f_2 = (Var47.f_2 + uParam0->f_10[iParam1 /*57*/].f_16);
		uParam0->f_10[iParam1 /*57*/].f_6 = { Var47 };
	}
	if (uParam0->f_10[iParam1 /*57*/].f_2 == 8)
	{
		GlobalFunc_678(uParam0, iParam1);
		fVar0 = uParam0->f_10[iParam1 /*57*/].f_21;
	}
	uParam0->f_10[iParam1 /*57*/].f_1 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, uParam0->f_10[iParam1 /*57*/].f_6, uParam0->f_10[iParam1 /*57*/].f_9, fVar0, 1, 2);
	uVar50 = uParam0->f_10[iParam1 /*57*/].f_1;
	if (CAM::DOES_CAM_EXIST(uParam0->f_10[iParam1 /*57*/].f_1))
	{
		CAM::SET_CAM_MOTION_BLUR_STRENGTH(uVar50, uParam0->f_10[iParam1 /*57*/].f_22);
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 4)
		{
			CAM::POINT_CAM_AT_COORD(uVar50, uParam0->f_10[iParam1 /*57*/].f_13);
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 3 && uParam0->f_10[iParam1 /*57*/].f_3 > -1)
		{
			CAM::POINT_CAM_AT_ENTITY(iVar50, GlobalFunc_5162(uParam0, iParam1, uParam0->f_10[iParam1 /*57*/].f_3), uParam0->f_10[iParam1 /*57*/].f_9, uParam0->f_10[iParam1 /*57*/].f_19);
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 6)
		{
			if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
			{
				CAM::ATTACH_CAM_TO_ENTITY(iVar50, GlobalFunc_5162(uParam0, iParam1, uParam0->f_10[iParam1 /*57*/].f_3), uParam0->f_10[iParam1 /*57*/].f_6 - GlobalFunc_681(uParam0, uParam0->f_10[iParam1 /*57*/].f_3) + uParam0->f_10[iParam1 /*57*/].f_24, 0);
			}
			else
			{
				CAM::ATTACH_CAM_TO_ENTITY(iVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_9, 0);
			}
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 7)
		{
			if (uParam0->f_10[iParam1 /*57*/].f_17)
			{
				CAM::ATTACH_CAM_TO_ENTITY(iVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_6 - ENTITY::GET_ENTITY_COORDS(GlobalFunc_5162(uParam0, iParam1, -1), 1), 0);
			}
		}
		if (GlobalFunc_680(uParam0, iParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(GlobalFunc_5162(uParam0, iParam1, -1)))
			{
				CAM::ATTACH_CAM_TO_ENTITY(iVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_6, uParam0->f_10[iParam1 /*57*/].f_20);
				if (uParam0->f_10[iParam1 /*57*/].f_18)
				{
					if (uParam0->f_10[iParam1 /*57*/].f_3 > -1)
					{
						CAM::POINT_CAM_AT_ENTITY(iVar50, GlobalFunc_5162(uParam0, iParam1, uParam0->f_10[iParam1 /*57*/].f_3), uParam0->f_10[iParam1 /*57*/].f_9, uParam0->f_10[iParam1 /*57*/].f_19);
					}
					else
					{
						CAM::POINT_CAM_AT_ENTITY(iVar50, GlobalFunc_5162(uParam0, iParam1, -1), uParam0->f_10[iParam1 /*57*/].f_9, uParam0->f_10[iParam1 /*57*/].f_19);
					}
				}
			}
		}
		if (uParam0->f_10[iParam1 /*57*/].f_2 == 7)
		{
			CAM::POINT_CAM_AT_COORD(iVar50, uParam0->f_10[iParam1 /*57*/].f_13);
		}
		if (uParam0->f_10[iParam1 /*57*/].f_46)
		{
			GlobalFunc_677(uParam0, iParam1);
		}
	}
	uParam0->f_10[iParam1 /*57*/].f_55 = 0;
	uParam0->f_10[iParam1 /*57*/].f_56 = 0;
}















void func_503(var uParam0, int iParam1, var uParam2)//Position - 0x583F1
{
	int iVar0;
	
	uParam0->f_10[0 /*57*/].f_2 = 0;
	uParam0->f_10[0 /*57*/].f_3 = -1;
	uParam0->f_10[0 /*57*/].f_4 = 0;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { -1.9125f, 1.3081f, -0.1774f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { 0f, -1f, 0.7f };
	uParam0->f_10[0 /*57*/].f_18 = 1;
	uParam0->f_10[0 /*57*/].f_19 = 1;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 40f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0f;
	uParam0->f_10[0 /*57*/].f_53 = 2;
	uParam0->f_10[0 /*57*/].f_23 = 0.5f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 0;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 1f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 1;
	uParam0->f_10[0 /*57*/].f_37 = 9;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 0;
	uParam0->f_10[1 /*57*/].f_3 = -1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 400;
	uParam0->f_10[1 /*57*/].f_6 = { -1.8625f, 1.5081f, -0.0774f };
	uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_12 = 0f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { 0f, -0.8f, 0.5f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 40f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 1f;
	uParam0->f_10[1 /*57*/].f_53 = 2;
	uParam0->f_10[1 /*57*/].f_23 = 0.5f;
	uParam0->f_10[1 /*57*/].f_28 = 0;
	uParam0->f_10[1 /*57*/].f_29 = 0f;
	uParam0->f_10[1 /*57*/].f_32 = 0.6f;
	uParam0->f_10[1 /*57*/].f_30 = 0;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 0.3f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 0;
	uParam0->f_10[1 /*57*/].f_37 = 0;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 0;
	uParam0->f_10[2 /*57*/].f_3 = -1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 600;
	uParam0->f_10[2 /*57*/].f_6 = { -1.6125f, 2.0081f, 0.6774f };
	uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { -0.5f, 0.9f, 0.3f };
	uParam0->f_10[2 /*57*/].f_18 = 1;
	uParam0->f_10[2 /*57*/].f_19 = 1;
	uParam0->f_10[2 /*57*/].f_20 = 1;
	uParam0->f_10[2 /*57*/].f_21 = 40f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 1f;
	uParam0->f_10[2 /*57*/].f_53 = 2;
	uParam0->f_10[2 /*57*/].f_23 = 0.5f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0f;
	uParam0->f_10[2 /*57*/].f_30 = 0;
	uParam0->f_10[2 /*57*/].f_31 = 0;
	uParam0->f_10[2 /*57*/].f_33 = 0.3f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 1;
	uParam0->f_10[2 /*57*/].f_37 = 11;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0.3f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_2 = 0;
	uParam0->f_10[3 /*57*/].f_3 = -1;
	uParam0->f_10[3 /*57*/].f_4 = 0;
	uParam0->f_10[3 /*57*/].f_5 = 400;
	uParam0->f_10[3 /*57*/].f_6 = { -1.6125f, 2.0081f, 0.6774f };
	uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[3 /*57*/].f_12 = 0f;
	uParam0->f_10[3 /*57*/].f_16 = 0f;
	uParam0->f_10[3 /*57*/].f_17 = 0;
	uParam0->f_10[3 /*57*/].f_9 = { -0.5f, 0.9f, 0.3f };
	uParam0->f_10[3 /*57*/].f_18 = 1;
	uParam0->f_10[3 /*57*/].f_19 = 1;
	uParam0->f_10[3 /*57*/].f_20 = 1;
	uParam0->f_10[3 /*57*/].f_21 = 40f;
	uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[3 /*57*/].f_27 = 0;
	uParam0->f_10[3 /*57*/].f_50 = 0;
	uParam0->f_10[3 /*57*/].f_51 = 0f;
	uParam0->f_10[3 /*57*/].f_52 = 0f;
	uParam0->f_10[3 /*57*/].f_22 = 0f;
	uParam0->f_10[3 /*57*/].f_53 = 0;
	uParam0->f_10[3 /*57*/].f_23 = 0.5f;
	uParam0->f_10[3 /*57*/].f_28 = 0;
	uParam0->f_10[3 /*57*/].f_29 = 0f;
	uParam0->f_10[3 /*57*/].f_32 = 0f;
	uParam0->f_10[3 /*57*/].f_30 = 0;
	uParam0->f_10[3 /*57*/].f_31 = 0;
	uParam0->f_10[3 /*57*/].f_33 = 1f;
	uParam0->f_10[3 /*57*/].f_34 = 0;
	uParam0->f_10[3 /*57*/].f_35 = 0f;
	uParam0->f_10[3 /*57*/].f_36 = 0;
	uParam0->f_10[3 /*57*/].f_37 = 0;
	uParam0->f_10[3 /*57*/].f_39 = 0f;
	uParam0->f_10[3 /*57*/].f_40 = 0f;
	uParam0->f_10[3 /*57*/].f_41 = 0;
	uParam0->f_10[3 /*57*/].f_42 = 0;
	uParam0->f_10[3 /*57*/].f_43 = 0;
	uParam0->f_10[3 /*57*/].f_38 = 0f;
	uParam0->f_10[3 /*57*/].f_45 = 0;
	uParam0->f_10[3 /*57*/].f_46 = 0;
	uParam0->f_10[3 /*57*/].f_47 = 0f;
	uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1151)
	{
		uParam0->f_1151[iVar0 /*2*/] = 0f;
		uParam0->f_1151[iVar0 /*2*/].f_1 = -1f;
		iVar0++;
	}
	uParam0->f_1217 = 4;
	uParam0->f_1218 = 2;
	uParam0->f_1233 = 0.25f;
	uParam0->f_1234 = 0.48f;
	uParam0->f_1235 = 0;
	uParam0->f_1236 = 0;
	uParam0->f_1237 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_1219 = 0;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_HeliMichaelToFranklin.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_HeliMichaelToFranklin.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_504(var uParam0, int iParam1, var uParam2)//Position - 0x58C2F
{
	int iVar0;
	
	uParam0->f_10[0 /*57*/].f_2 = 2;
	uParam0->f_10[0 /*57*/].f_3 = 1;
	uParam0->f_10[0 /*57*/].f_4 = 1;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { 296.6279f, -1209.565f, 139.091f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { -2.8198f, -7.8459f, 83.1772f };
	uParam0->f_10[0 /*57*/].f_18 = 1;
	uParam0->f_10[0 /*57*/].f_19 = 1;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 35f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0.2f;
	uParam0->f_10[0 /*57*/].f_53 = 0;
	uParam0->f_10[0 /*57*/].f_23 = 0f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0.3f;
	uParam0->f_10[0 /*57*/].f_30 = 0;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 0.01f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 0;
	uParam0->f_10[0 /*57*/].f_37 = 0;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 1;
	uParam0->f_10[1 /*57*/].f_3 = 1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 1000;
	uParam0->f_10[1 /*57*/].f_6 = { 2.5f, -1.1f, 0.3f };
	uParam0->f_10[1 /*57*/].f_13 = { 0.6f, 0f, 0.8f };
	uParam0->f_10[1 /*57*/].f_12 = 5f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { 0f, 0f, 0.8f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 50f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 0.5f;
	uParam0->f_10[1 /*57*/].f_53 = 0;
	uParam0->f_10[1 /*57*/].f_23 = 0f;
	uParam0->f_10[1 /*57*/].f_28 = 0;
	uParam0->f_10[1 /*57*/].f_29 = 0f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 0;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 1f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 1;
	uParam0->f_10[1 /*57*/].f_37 = 9;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0.3f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 1;
	uParam0->f_10[2 /*57*/].f_3 = 1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 1000;
	uParam0->f_10[2 /*57*/].f_6 = { 5f, -5f, 0.6f };
	uParam0->f_10[2 /*57*/].f_13 = { 0.6f, 0f, 0.8f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { 0f, 0f, 0.8f };
	uParam0->f_10[2 /*57*/].f_18 = 1;
	uParam0->f_10[2 /*57*/].f_19 = 1;
	uParam0->f_10[2 /*57*/].f_20 = 1;
	uParam0->f_10[2 /*57*/].f_21 = 50f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 0.5f;
	uParam0->f_10[2 /*57*/].f_53 = 0;
	uParam0->f_10[2 /*57*/].f_23 = 0f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0f;
	uParam0->f_10[2 /*57*/].f_30 = 0;
	uParam0->f_10[2 /*57*/].f_31 = 0;
	uParam0->f_10[2 /*57*/].f_33 = 1f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 0;
	uParam0->f_10[2 /*57*/].f_37 = 0;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_2 = 1;
	uParam0->f_10[3 /*57*/].f_3 = 1;
	uParam0->f_10[3 /*57*/].f_4 = 0;
	uParam0->f_10[3 /*57*/].f_5 = 1000;
	uParam0->f_10[3 /*57*/].f_6 = { 3.9762f, -10.9954f, 1.5856f };
	uParam0->f_10[3 /*57*/].f_13 = { 0.6f, 0f, 0.8f };
	uParam0->f_10[3 /*57*/].f_12 = 0f;
	uParam0->f_10[3 /*57*/].f_16 = 0f;
	uParam0->f_10[3 /*57*/].f_17 = 0;
	uParam0->f_10[3 /*57*/].f_9 = { 0.6412f, -1.7077f, 0.7227f };
	uParam0->f_10[3 /*57*/].f_18 = 1;
	uParam0->f_10[3 /*57*/].f_19 = 1;
	uParam0->f_10[3 /*57*/].f_20 = 1;
	uParam0->f_10[3 /*57*/].f_21 = 50f;
	uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[3 /*57*/].f_27 = 0;
	uParam0->f_10[3 /*57*/].f_50 = 0;
	uParam0->f_10[3 /*57*/].f_51 = 0f;
	uParam0->f_10[3 /*57*/].f_52 = 0f;
	uParam0->f_10[3 /*57*/].f_22 = 0.3f;
	uParam0->f_10[3 /*57*/].f_53 = 0;
	uParam0->f_10[3 /*57*/].f_23 = 0f;
	uParam0->f_10[3 /*57*/].f_28 = 0;
	uParam0->f_10[3 /*57*/].f_29 = 0f;
	uParam0->f_10[3 /*57*/].f_32 = 0f;
	uParam0->f_10[3 /*57*/].f_30 = 0;
	uParam0->f_10[3 /*57*/].f_31 = 0;
	uParam0->f_10[3 /*57*/].f_33 = 1f;
	uParam0->f_10[3 /*57*/].f_34 = 0;
	uParam0->f_10[3 /*57*/].f_35 = 0f;
	uParam0->f_10[3 /*57*/].f_36 = 1;
	uParam0->f_10[3 /*57*/].f_37 = 11;
	uParam0->f_10[3 /*57*/].f_39 = 0f;
	uParam0->f_10[3 /*57*/].f_40 = 0f;
	uParam0->f_10[3 /*57*/].f_41 = 0;
	uParam0->f_10[3 /*57*/].f_42 = 0;
	uParam0->f_10[3 /*57*/].f_43 = 0;
	uParam0->f_10[3 /*57*/].f_38 = 0.75f;
	uParam0->f_10[3 /*57*/].f_45 = 0;
	uParam0->f_10[3 /*57*/].f_46 = 0;
	uParam0->f_10[3 /*57*/].f_47 = 0f;
	uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1151)
	{
		uParam0->f_1151[iVar0 /*2*/] = 0f;
		uParam0->f_1151[iVar0 /*2*/].f_1 = -1f;
		iVar0++;
	}
	uParam0->f_1151[0 /*2*/] = 0f;
	uParam0->f_1151[0 /*2*/].f_1 = 5f;
	uParam0->f_1151[1 /*2*/] = 1.5f;
	uParam0->f_1151[1 /*2*/].f_1 = 20f;
	uParam0->f_1151[2 /*2*/] = 2f;
	uParam0->f_1151[2 /*2*/].f_1 = 50f;
	uParam0->f_1151[3 /*2*/] = 3f;
	uParam0->f_1151[3 /*2*/].f_1 = 50f;
	uParam0->f_1151[4 /*2*/] = 3.2f;
	uParam0->f_1151[4 /*2*/].f_1 = 50f;
	uParam0->f_1151[5 /*2*/] = 3.6f;
	uParam0->f_1151[5 /*2*/].f_1 = 30f;
	uParam0->f_1151[6 /*2*/] = 4f;
	uParam0->f_1151[6 /*2*/].f_1 = 7f;
	uParam0->f_1217 = 4;
	uParam0->f_1218 = 1;
	uParam0->f_1233 = 0.03f;
	uParam0->f_1234 = 0.6f;
	uParam0->f_1235 = 1;
	uParam0->f_1236 = 1;
	uParam0->f_1237 = 1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 1;
	uParam0->f_1219 = 286;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_HeliMichaelToTrevor.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_HeliMichaelToTrevor.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

int func_505(var uParam0, bool bParam1)//Position - 0x5952B
{
	int iVar0;
	int iVar1;
	
	PED::IS_PED_INJURED(func_622());
	PED::IS_PED_INJURED(func_625());
	PED::IS_PED_INJURED(func_404());
	VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0);
	switch (iLocal_1155)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			func_484(uParam0);
			if (bLocal_632)
			{
				iVar1 = 0;
				while (iVar1 < uParam0->f_10)
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_10[iVar1 /*57*/].f_1))
					{
						if (iVar1 < 3)
						{
							CAM::SET_CAM_INHERIT_ROLL_VEHICLE(uParam0->f_10[iVar1 /*57*/].f_1, iLocal_199[0]);
						}
					}
					iVar1++;
				}
			}
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			SYSTEM::SETTIMERB(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_9844 = 0;
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(-144.6f, -593.7f, 211.8f, 20f, 1);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_622());
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[2], 0))
			{
				iLocal_9858 = iLocal_203[2];
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iLocal_759], 0))
			{
				iLocal_9858 = iLocal_203[iLocal_759];
			}
			else
			{
				iLocal_9858 = iLocal_199[0];
			}
			TASK::TASK_AIM_GUN_AT_ENTITY(func_622(), iLocal_9858, 8000, 1);
			if (iLocal_1156 == 4)
			{
				fLocal_9849 = fLocal_9851;
			}
			else if (iLocal_1156 == 3)
			{
				fLocal_9849 = fLocal_9850;
			}
			MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(func_622(), 1), 10f, 1, 1, 1, 0);
			TASK::CLEAR_PED_TASKS(func_622());
			if (iLocal_1156 == 4)
			{
				iLocal_756 = MISC::GET_GAME_TIMER() + 2000;
			}
			iLocal_1155 = 3;
			return 1;
			break;
		
		case 3:
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (!iLocal_628)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_656 + 20)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_793 = MISC::GET_GAME_TIMER();
						iLocal_628 = 1;
					}
				}
				if (!iLocal_629)
				{
					if (iLocal_628)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_793 + 250)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_629 = 1;
						}
					}
				}
				iVar0 = func_471(uParam0);
				if (iVar0 >= (uParam0->f_1218 - iLocal_9857))
				{
					if (!Local_107.f_18)
					{
						Local_107.f_18 = 1;
						MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(func_622(), 1), 10f, 1, 1, 1, 0);
					}
				}
				else
				{
					CAM::SET_CAM_COORD(uParam0->f_10[2 /*57*/].f_1, CAM::GET_GAMEPLAY_CAM_COORD() + func_510(func_511(CAM::GET_GAMEPLAY_CAM_ROT(2)), uParam0->f_10[2 /*57*/].f_24.f_2));
					CAM::SET_CAM_ROT(uParam0->f_10[2 /*57*/].f_1, CAM::GET_GAMEPLAY_CAM_ROT(2), 2);
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) > fLocal_9849)
				{
					if (!GlobalFunc_709(func_622(), -2017877118, 1))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_622());
						TASK::TASK_PLAY_ANIM(func_622(), func_507(21), "ig_7_m_door_f_sniping_franklin", 1000f, -1000f, -1, 2, 0.55f, 0, 0, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_622(), 1, 0);
						func_506();
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
				{
					if (!PED::IS_PED_INJURED(func_622()))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_622());
						PED::SET_PED_RESET_FLAG(func_622(), 156, 1);
						PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
					}
					iLocal_1155 = 5;
				}
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_622());
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
				iLocal_1155 = 2;
			}
			return 1;
			break;
		
		case 5:
			MISC::SET_TIME_SCALE(1f);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_1, 0);
			}
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			if (!iLocal_9844)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				iLocal_9844 = 1;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_1155 = 0;
			uParam0->f_1232 = 1;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			TASK::CLEAR_PED_TASKS(func_625());
			Local_107.f_15 = 0;
			Local_107.f_18 = 0;
			iLocal_1156 = 0;
			STREAMING::NEW_LOAD_SCENE_STOP();
			return 0;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

void func_506()//Position - 0x59914
{
	SYSTEM::WAIT(0);
	RECORDING::_0x208784099002BC30(func_995(), 0);
}

char* func_507(int iParam0)//Position - 0x5992A
{
	switch (iParam0)
	{
		case 0:
			return "MISSSAGRAB";
			break;
		
		case 1:
			return GlobalFunc_608();
			break;
		
		case 2:
			return "MISSFBI2";
			break;
		
		case 3:
			return "MISSFBI2CUTS";
			break;
		
		case 4:
			return "MISSFBI2_intro";
			break;
		
		case 5:
			return "amb@prop_human_seat_computer@male@base";
			break;
		
		case 6:
			return "amb@prop_human_seat_computer@male@react_shock";
			break;
		
		case 7:
			return "amb@world_human_stand_guard@male@base";
			break;
		
		case 8:
			return "reaction@male_stand@small_intro@left";
			break;
		
		case 9:
			return "reaction@male_stand@small_intro@right";
			break;
		
		case 10:
			return "reaction@male_stand@small_variations@idle_a";
			break;
		
		case 11:
			return "combat@aim_variations@pistol";
			break;
		
		case 12:
			return "combat@gestures@pistol@panic";
			break;
		
		case 13:
			return "combat@gestures@pistol@overthere";
			break;
		
		case 14:
			return "combat@panic@pistol";
			break;
		
		case 15:
			return "combat@gestures@pistol@beckon";
			break;
		
		case 16:
			return "MISSFBI2@LeadInOut";
			break;
		
		case 17:
			return "MISSFBI2@LeadInOutFBI_2_MCS_1";
			break;
		
		case 18:
			return "MISSSAGRAB_INOFFICE";
			break;
		
		case 19:
			return "MISSSAGRAB_FLYHOME";
			break;
		
		case 20:
			return "shake_cam_all@";
			break;
		
		case 21:
			return "missheistdocks2aswitchig_7";
			break;
	}
	return "invalid!";
}



Vector3 func_510(struct<3> Param0, float fParam3)//Position - 0x59B06
{
	struct<3> Var0;
	
	Var0 = { GlobalFunc_107(Param0) };
	Var0.x = (Var0.x * fParam3);
	Var0.f_1 = (Var0.f_1 * fParam3);
	Var0.f_2 = (Var0.f_2 * fParam3);
	return Var0;
}

Vector3 func_511(struct<3> Param0)//Position - 0x59B3B
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	Var0.f_2 = SYSTEM::COS(Param0.f_1);
	fVar3 = SYSTEM::SIN(Param0.f_1);
	fVar4 = SYSTEM::COS(Param0.f_2);
	fVar5 = SYSTEM::SIN(Param0.f_2);
	fVar6 = (Var0.f_2 * SYSTEM::SIN(Param0.x));
	Var0.f_1 = (fVar3 * fVar5);
	Var0.f_1 = (Var0.f_1 - (fVar6 * fVar4));
	Var0.x = (fVar6 * fVar5);
	Var0.x = (Var0.x + (fVar3 * fVar4));
	Var0.f_2 = (Var0.f_2 * SYSTEM::COS(Param0.x));
	return Var0;
}

int func_512(var uParam0, bool bParam1)//Position - 0x59BB5
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	
	switch (iLocal_1155)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			func_484(uParam0);
			if (bLocal_632)
			{
				iVar13 = 0;
				while (iVar13 < uParam0->f_10)
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_10[iVar13 /*57*/].f_1))
					{
						if (iVar13 > 3)
						{
							CAM::SET_CAM_INHERIT_ROLL_VEHICLE(uParam0->f_10[iVar13 /*57*/].f_1, iLocal_199[0]);
						}
					}
					iVar13++;
				}
			}
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			SYSTEM::SETTIMERB(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
			iLocal_9844 = 0;
			if (!bLocal_632)
			{
				TASK::CLEAR_PED_TASKS(func_625());
			}
			if (!GlobalFunc_709(func_622(), -2017877118, 1))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_622());
				TASK::TASK_PLAY_ANIM(func_622(), func_507(21), "ig_7_m_door_f_sniping_franklin", 1000f, -1000f, -1, 131072, 0.85f, 0, 2, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_622(), 0, 0);
			}
			iLocal_1155 = 3;
			return 1;
			break;
		
		case 3:
			if (bLocal_632)
			{
			}
			if (!iLocal_628)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_656 + 20)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_793 = MISC::GET_GAME_TIMER();
					iLocal_628 = 1;
				}
			}
			if (!iLocal_629)
			{
				if (iLocal_628)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_793 + 200)
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_629 = 1;
					}
				}
			}
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				iVar0 = func_471(uParam0);
				if (iVar0 >= (uParam0->f_1218 - 2))
				{
					Local_107.f_18 = 1;
					if (!bLocal_632)
					{
						GlobalFunc_674(uParam0, iVar0, 1);
					}
				}
				if (iLocal_1156 == 2 || bLocal_632)
				{
					if (!GlobalFunc_709(func_625(), 2104565373, 1) || bLocal_632)
					{
						if (!bLocal_632)
						{
							TASK::CLEAR_PED_TASKS(func_625());
						}
						Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
						Var7 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_199[0]) };
						Var10 = { GlobalFunc_415(Var7, fLocal_9852) };
						Var10.f_2 = 0f;
						Var10 = { GlobalFunc_903(Var10, 150f) };
						Var1 = { Var4 + Var10 };
						TASK::TASK_DRIVE_BY(func_625(), 0, 0, Var1, 10000f, 0, 0, 1566631136);
					}
				}
				if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
				{
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					iLocal_1155 = 5;
				}
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				iLocal_1155 = 2;
			}
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(1);
			}
			return 1;
			break;
		
		case 5:
			MISC::SET_TIME_SCALE(1f);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_1, 0);
			}
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			if (!iLocal_9844)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				iLocal_9844 = 1;
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_625(), 0);
			SYSTEM::SETTIMERA(0);
			iLocal_1155 = 0;
			uParam0->f_1232 = 1;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			PED::SET_PED_FIRING_PATTERN(func_625(), -957453492);
			Local_107.f_15 = 0;
			Local_107.f_18 = 0;
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[2], 0))
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(func_622(), iLocal_203[2], -1, 1);
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iLocal_759], 0))
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(func_622(), iLocal_203[iLocal_759], -1, 1);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(func_622(), iLocal_199[0], -1, 1);
			}
			iLocal_1156 = 0;
			return 0;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}


int func_514(var uParam0, bool bParam1)//Position - 0x59F98
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	struct<3> Var7;
	struct<3> Var10;
	int iVar13;
	
	PED::IS_PED_INJURED(func_622());
	PED::IS_PED_INJURED(func_625());
	PED::IS_PED_INJURED(func_404());
	VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0);
	switch (iLocal_1155)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			if (!bLocal_632)
			{
				func_516(uParam0, func_404(), func_625());
			}
			else
			{
				func_515(uParam0, func_404(), func_625());
			}
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			if (!bLocal_632)
			{
				CAM::_CLAMP_GAMEPLAY_CAM_YAW(-30f, 20f);
				CAM::_CLAMP_GAMEPLAY_CAM_PITCH(-40f, 40f);
			}
			func_506();
			func_484(uParam0);
			if (bLocal_632)
			{
				iVar13 = 0;
				while (iVar13 < uParam0->f_10)
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_10[iVar13 /*57*/].f_1))
					{
						CAM::SET_CAM_INHERIT_ROLL_VEHICLE(uParam0->f_10[iVar13 /*57*/].f_1, iLocal_199[0]);
					}
					iVar13++;
				}
			}
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			func_506();
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			SYSTEM::SETTIMERB(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
			if (!bLocal_632)
			{
				if (!PED::IS_PED_INJURED(func_625()))
				{
					TASK::CLEAR_PED_TASKS(func_625());
					PED::SET_PED_FIRING_PATTERN(func_625(), -957453492);
				}
			}
			iLocal_9844 = 0;
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			iLocal_1155 = 3;
			return 1;
		
		case 3:
			iVar0 = func_471(uParam0);
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if ((iVar0 >= uParam0->f_1218 && !bLocal_632) || (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f && bLocal_632))
				{
					Local_107.f_18 = 1;
					CAM::STOP_GAMEPLAY_HINT(1);
				}
				if (bLocal_632)
				{
					if (!iLocal_628)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_656 + 20)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_793 = MISC::GET_GAME_TIMER();
							iLocal_628 = 1;
						}
					}
					if (!iLocal_629)
					{
						if (iLocal_628)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_793 + 150)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_629 = 1;
							}
						}
					}
				}
				if (CAM::DOES_CAM_EXIST(uParam0->f_1))
				{
					if (!PED::IS_PED_INJURED(func_625()))
					{
						if (!GlobalFunc_709(func_625(), 2104565373, 1))
						{
							Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
							Var7 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_199[0]) };
							Var10 = { GlobalFunc_415(Var7, fLocal_9852) };
							Var10.f_2 = 0f;
							Var10 = { GlobalFunc_903(Var10, 150f) };
							Var1 = { Var4 + Var10 };
							TASK::TASK_DRIVE_BY(func_625(), 0, 0, Var1, 10000f, 0, 0, 1566631136);
						}
					}
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f && GlobalFunc_8315() == 0)
					{
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
						iLocal_1155 = 5;
					}
				}
				else
				{
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					iLocal_1155 = 5;
				}
			}
			return 1;
			break;
		
		case 5:
			MISC::SET_TIME_SCALE(1f);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_1, 0);
			}
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			if (!iLocal_9844)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				iLocal_9844 = 1;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_1155 = 0;
			uParam0->f_1232 = 1;
			if (!PED::IS_PED_INJURED(func_625()))
			{
				PED::SET_PED_FIRING_PATTERN(func_625(), -957453492);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
			Local_107.f_15 = 0;
			Local_107.f_18 = 0;
			return 0;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

void func_515(var uParam0, var uParam1, int iParam2)//Position - 0x5A329
{
	int iVar0;
	
	uParam0->f_10[0 /*57*/].f_2 = 0;
	uParam0->f_10[0 /*57*/].f_3 = -1;
	uParam0->f_10[0 /*57*/].f_4 = 0;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { -1.6125f, 2.0081f, 0.6774f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { -0.5f, 0.9f, 0.3f };
	uParam0->f_10[0 /*57*/].f_18 = 1;
	uParam0->f_10[0 /*57*/].f_19 = 1;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 40f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0f;
	uParam0->f_10[0 /*57*/].f_53 = 0;
	uParam0->f_10[0 /*57*/].f_23 = 0.5f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 0;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 1f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 1;
	uParam0->f_10[0 /*57*/].f_37 = 14;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 0;
	uParam0->f_10[1 /*57*/].f_3 = -1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 400;
	uParam0->f_10[1 /*57*/].f_6 = { -1.7125f, 1.8081f, 0.5774f };
	uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_12 = 0f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { -0.5f, 0.6f, 0.3f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 40f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 1f;
	uParam0->f_10[1 /*57*/].f_53 = 2;
	uParam0->f_10[1 /*57*/].f_23 = 0.5f;
	uParam0->f_10[1 /*57*/].f_28 = 0;
	uParam0->f_10[1 /*57*/].f_29 = 0f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 0;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 0.3f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 0;
	uParam0->f_10[1 /*57*/].f_37 = 0;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0.3f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 0;
	uParam0->f_10[2 /*57*/].f_3 = -1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 600;
	uParam0->f_10[2 /*57*/].f_6 = { -1.9125f, 1.3081f, -0.1774f };
	uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { 0f, -1f, 0.6f };
	uParam0->f_10[2 /*57*/].f_18 = 1;
	uParam0->f_10[2 /*57*/].f_19 = 1;
	uParam0->f_10[2 /*57*/].f_20 = 1;
	uParam0->f_10[2 /*57*/].f_21 = 40f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 1f;
	uParam0->f_10[2 /*57*/].f_53 = 2;
	uParam0->f_10[2 /*57*/].f_23 = 0.5f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0.6f;
	uParam0->f_10[2 /*57*/].f_30 = 0;
	uParam0->f_10[2 /*57*/].f_31 = 0;
	uParam0->f_10[2 /*57*/].f_33 = 0.3f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 1;
	uParam0->f_10[2 /*57*/].f_37 = 8;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_2 = 0;
	uParam0->f_10[3 /*57*/].f_3 = -1;
	uParam0->f_10[3 /*57*/].f_4 = 0;
	uParam0->f_10[3 /*57*/].f_5 = 400;
	uParam0->f_10[3 /*57*/].f_6 = { -1.9125f, 1.3081f, -0.1774f };
	uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[3 /*57*/].f_12 = 0f;
	uParam0->f_10[3 /*57*/].f_16 = 0f;
	uParam0->f_10[3 /*57*/].f_17 = 0;
	uParam0->f_10[3 /*57*/].f_9 = { 0f, -1f, 0.6f };
	uParam0->f_10[3 /*57*/].f_18 = 1;
	uParam0->f_10[3 /*57*/].f_19 = 1;
	uParam0->f_10[3 /*57*/].f_20 = 1;
	uParam0->f_10[3 /*57*/].f_21 = 40f;
	uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[3 /*57*/].f_27 = 0;
	uParam0->f_10[3 /*57*/].f_50 = 0;
	uParam0->f_10[3 /*57*/].f_51 = 0f;
	uParam0->f_10[3 /*57*/].f_52 = 0f;
	uParam0->f_10[3 /*57*/].f_22 = 0f;
	uParam0->f_10[3 /*57*/].f_53 = 2;
	uParam0->f_10[3 /*57*/].f_23 = 0.5f;
	uParam0->f_10[3 /*57*/].f_28 = 0;
	uParam0->f_10[3 /*57*/].f_29 = 0f;
	uParam0->f_10[3 /*57*/].f_32 = 0f;
	uParam0->f_10[3 /*57*/].f_30 = 0;
	uParam0->f_10[3 /*57*/].f_31 = 0;
	uParam0->f_10[3 /*57*/].f_33 = 1f;
	uParam0->f_10[3 /*57*/].f_34 = 0;
	uParam0->f_10[3 /*57*/].f_35 = 0f;
	uParam0->f_10[3 /*57*/].f_36 = 0;
	uParam0->f_10[3 /*57*/].f_37 = 0;
	uParam0->f_10[3 /*57*/].f_39 = 0f;
	uParam0->f_10[3 /*57*/].f_40 = 0f;
	uParam0->f_10[3 /*57*/].f_41 = 0;
	uParam0->f_10[3 /*57*/].f_42 = 0;
	uParam0->f_10[3 /*57*/].f_43 = 0;
	uParam0->f_10[3 /*57*/].f_38 = 0f;
	uParam0->f_10[3 /*57*/].f_45 = 0;
	uParam0->f_10[3 /*57*/].f_46 = 0;
	uParam0->f_10[3 /*57*/].f_47 = 0f;
	uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
	uParam0->f_1217 = 4;
	uParam0->f_1218 = 2;
	uParam0->f_1233 = 0.25f;
	uParam0->f_1234 = 0.45f;
	uParam0->f_1235 = 0;
	uParam0->f_1236 = 0;
	uParam0->f_1237 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_1219 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1151)
	{
		uParam0->f_1151[iVar0 /*2*/] = 0f;
		uParam0->f_1151[iVar0 /*2*/].f_1 = -1f;
		iVar0++;
	}
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_HeliMichaelToFranklin.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_HeliMichaelToFranklin.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = uParam1;
	uParam0->f_7[1] = iParam2;
}

void func_516(var uParam0, var uParam1, int iParam2)//Position - 0x5AB63
{
	int iVar0;
	
	uParam0->f_10[0 /*57*/].f_2 = 2;
	uParam0->f_10[0 /*57*/].f_3 = 1;
	uParam0->f_10[0 /*57*/].f_4 = 1;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { 94.2251f, -1245.58f, 145.5685f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { -23.5406f, 9.1208f, -84.6748f };
	uParam0->f_10[0 /*57*/].f_18 = 1;
	uParam0->f_10[0 /*57*/].f_19 = 1;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 0f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0.2f;
	uParam0->f_10[0 /*57*/].f_53 = 0;
	uParam0->f_10[0 /*57*/].f_23 = 0f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 0;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 0.01f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 1;
	uParam0->f_10[0 /*57*/].f_37 = 14;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 1;
	uParam0->f_10[1 /*57*/].f_3 = 1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 100;
	uParam0->f_10[1 /*57*/].f_6 = { 4f, -11f, 1.1f };
	uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0.8f };
	uParam0->f_10[1 /*57*/].f_12 = 5f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { 0f, 0f, 0.8f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 69f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 0.3f;
	uParam0->f_10[1 /*57*/].f_53 = 0;
	uParam0->f_10[1 /*57*/].f_23 = 0f;
	uParam0->f_10[1 /*57*/].f_28 = 0;
	uParam0->f_10[1 /*57*/].f_29 = 0f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 0;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 0.01f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 0;
	uParam0->f_10[1 /*57*/].f_37 = 0;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 1;
	uParam0->f_10[2 /*57*/].f_3 = 1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 900;
	uParam0->f_10[2 /*57*/].f_6 = { 5f, -5f, 0.6f };
	uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0.8f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { 0f, 0f, 0.8f };
	uParam0->f_10[2 /*57*/].f_18 = 1;
	uParam0->f_10[2 /*57*/].f_19 = 1;
	uParam0->f_10[2 /*57*/].f_20 = 1;
	uParam0->f_10[2 /*57*/].f_21 = 50f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 0.3f;
	uParam0->f_10[2 /*57*/].f_53 = 0;
	uParam0->f_10[2 /*57*/].f_23 = 0f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0f;
	uParam0->f_10[2 /*57*/].f_30 = 0;
	uParam0->f_10[2 /*57*/].f_31 = 0;
	uParam0->f_10[2 /*57*/].f_33 = 0.01f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 0;
	uParam0->f_10[2 /*57*/].f_37 = 0;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_2 = 1;
	uParam0->f_10[3 /*57*/].f_3 = 1;
	uParam0->f_10[3 /*57*/].f_4 = 0;
	uParam0->f_10[3 /*57*/].f_5 = 1000;
	uParam0->f_10[3 /*57*/].f_6 = { 2.5f, -0.4f, 0.3f };
	uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0.8f };
	uParam0->f_10[3 /*57*/].f_12 = 0f;
	uParam0->f_10[3 /*57*/].f_16 = 0f;
	uParam0->f_10[3 /*57*/].f_17 = 0;
	uParam0->f_10[3 /*57*/].f_9 = { 0f, 0f, 0.8f };
	uParam0->f_10[3 /*57*/].f_18 = 1;
	uParam0->f_10[3 /*57*/].f_19 = 1;
	uParam0->f_10[3 /*57*/].f_20 = 1;
	uParam0->f_10[3 /*57*/].f_21 = 50f;
	uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[3 /*57*/].f_27 = 0;
	uParam0->f_10[3 /*57*/].f_50 = 0;
	uParam0->f_10[3 /*57*/].f_51 = 0f;
	uParam0->f_10[3 /*57*/].f_52 = 0f;
	uParam0->f_10[3 /*57*/].f_22 = 0.3f;
	uParam0->f_10[3 /*57*/].f_53 = 0;
	uParam0->f_10[3 /*57*/].f_23 = 0f;
	uParam0->f_10[3 /*57*/].f_28 = 0;
	uParam0->f_10[3 /*57*/].f_29 = 0f;
	uParam0->f_10[3 /*57*/].f_32 = 0.372f;
	uParam0->f_10[3 /*57*/].f_30 = 0;
	uParam0->f_10[3 /*57*/].f_31 = 0;
	uParam0->f_10[3 /*57*/].f_33 = 0.01f;
	uParam0->f_10[3 /*57*/].f_34 = 0;
	uParam0->f_10[3 /*57*/].f_35 = 0f;
	uParam0->f_10[3 /*57*/].f_36 = 1;
	uParam0->f_10[3 /*57*/].f_37 = 8;
	uParam0->f_10[3 /*57*/].f_39 = 0f;
	uParam0->f_10[3 /*57*/].f_40 = 0f;
	uParam0->f_10[3 /*57*/].f_41 = 0;
	uParam0->f_10[3 /*57*/].f_42 = 0;
	uParam0->f_10[3 /*57*/].f_43 = 0;
	uParam0->f_10[3 /*57*/].f_38 = 0.9f;
	uParam0->f_10[3 /*57*/].f_45 = 0;
	uParam0->f_10[3 /*57*/].f_46 = 0;
	uParam0->f_10[3 /*57*/].f_47 = 0f;
	uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1151)
	{
		uParam0->f_1151[iVar0 /*2*/] = 0f;
		uParam0->f_1151[iVar0 /*2*/].f_1 = -1f;
		iVar0++;
	}
	uParam0->f_1151[0 /*2*/] = 0f;
	uParam0->f_1151[0 /*2*/].f_1 = 10f;
	uParam0->f_1151[1 /*2*/] = 1f;
	uParam0->f_1151[1 /*2*/].f_1 = 50f;
	uParam0->f_1151[2 /*2*/] = 3f;
	uParam0->f_1151[2 /*2*/].f_1 = 50f;
	uParam0->f_1151[3 /*2*/] = 3.6f;
	uParam0->f_1151[3 /*2*/].f_1 = 20f;
	uParam0->f_1151[4 /*2*/] = 3.9f;
	uParam0->f_1151[4 /*2*/].f_1 = 10f;
	uParam0->f_1151[5 /*2*/] = 4f;
	uParam0->f_1151[5 /*2*/].f_1 = 5f;
	uParam0->f_1217 = 4;
	uParam0->f_1218 = 1;
	uParam0->f_1233 = 0.01f;
	uParam0->f_1234 = 0.6f;
	uParam0->f_1235 = 1;
	uParam0->f_1236 = 1;
	uParam0->f_1237 = 1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 1;
	uParam0->f_1219 = 100;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_HeliTrevorToMichael.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_HeliTrevorToMichael.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = uParam1;
	uParam0->f_7[1] = iParam2;
}

int func_517(var uParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x5B431
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var13;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	float fVar25;
	float fVar26;
	bool bVar27;
	float fVar28;
	int iVar29;
	struct<3> Var30;
	struct<3> Var33;
	
	if (!uParam0->f_15)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(uParam0->f_12))
		{
			uParam0->f_27 = 0;
			Var19 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_12, 1) };
			Var22 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			fVar25 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var22, Var19, 0);
			fVar26 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var22, Var19, 1);
			if (iParam3 == 0)
			{
				if (fVar26 < 8f)
				{
					uParam0->f_14 = 1;
				}
				else if (fVar25 < 30f)
				{
					uParam0->f_14 = 2;
				}
				else
				{
					uParam0->f_14 = 3;
				}
			}
			else
			{
				uParam0->f_14 = iParam3;
			}
			if (!CAM::DOES_CAM_EXIST(uParam0->f_9))
			{
				uParam0->f_9 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			}
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar1], 0);
				}
				iVar1++;
			}
			switch (uParam0->f_14)
			{
				case 1:
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13, 1);
					}
					else
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var13, 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, GlobalFunc_2777(uParam0->f_12), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, GlobalFunc_2777(uParam0->f_12), 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iParam6, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iParam6);
					uParam0->f_15 = 1;
					break;
				
				case 2:
					if (Var22.f_2 > Var19.f_2)
					{
						fVar4 = GlobalFunc_567((Var22.f_2 + 5f), (Var19.f_2 + fVar25));
					}
					else
					{
						fVar4 = GlobalFunc_567((Var19.f_2 + 5f), (Var22.f_2 + fVar25));
					}
					fVar3 = 10f;
					Var16 = { Var19 - Var22 };
					Var16.f_2 = 0f;
					Var16 = { GlobalFunc_903(Var16, GlobalFunc_2776((fVar4 * MISC::TAN(fVar3)), (fVar25 / 3f))) };
					iVar2 = SYSTEM::ROUND(((fVar26 / ((30f - 7.5f) / (800f - 200f))) + 500f));
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13, 1);
					}
					else
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var13, 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13 + Vector(15f, 0f, 0f), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iVar2, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iVar2);
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, 0f, 0f, 15f, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, GlobalFunc_2777(uParam0->f_12), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, GlobalFunc_2777(uParam0->f_12), 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					uParam0->f_15 = 1;
					break;
				
				case 3:
					fVar4 = 450f;
					if (Var22.f_2 > Var19.f_2)
					{
						fVar4 = GlobalFunc_567(fVar4, (Var22.f_2 + 25f));
					}
					else
					{
						fVar4 = GlobalFunc_567(fVar4, (Var19.f_2 + 25f));
					}
					fVar3 = 20f;
					Var16 = { Var19 - Var22 };
					Var16.f_2 = 0f;
					Var16 = { GlobalFunc_903(Var16, GlobalFunc_2776((fVar4 * MISC::TAN(fVar3)), (fVar25 / 3f))) };
					fVar26 = GlobalFunc_253(fVar26, 50f, 4000f);
					iVar2 = SYSTEM::ROUND(((fVar26 / ((4000f - 50f) / (2000f - 1000f))) + 1000f));
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar8 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
						bVar6 = true;
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
					{
						iVar9 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
						bVar7 = true;
						fVar5 = ENTITY::GET_ENTITY_HEADING(iVar9);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					else
					{
						fVar5 = ENTITY::GET_ENTITY_HEADING(uParam0->f_12);
						if (fVar5 > 180f)
						{
							fVar5 = (fVar5 - 360f);
						}
					}
					Var10 = { CAM::GET_FINAL_RENDERED_CAM_ROT(2) };
					uParam0->f_24 = 0;
					CAM::SET_CAM_FOV(uParam0->f_9, CAM::GET_FINAL_RENDERED_CAM_FOV());
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13, 1);
					}
					else
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Var13, 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], Var10, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 0, 1);
					uParam0->f_24++;
					uParam0->f_27 = uParam0->f_27;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						Var13 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar8, CAM::GET_FINAL_RENDERED_CAM_COORD()) };
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Var13 + Vector(15f, 0f, 0f), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar6)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar8, Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], PLAYER::PLAYER_PED_ID(), Vector(fVar4, 0f, 0f) + Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, Var10.f_2, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 800, 1);
					uParam0->f_24++;
					uParam0->f_27 += 800;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, Vector(fVar4, 0f, 0f) - Var16, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], iVar2, 1);
					uParam0->f_24++;
					uParam0->f_27 = (uParam0->f_27 + iVar2);
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, 0f, 0f, 15f, 0);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, 0f, 0f, 5f, 0);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -87.5f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 800, 1);
					uParam0->f_24++;
					uParam0->f_27 += 800;
					if (!CAM::DOES_CAM_EXIST((*uParam0)[uParam0->f_24]))
					{
						(*uParam0)[uParam0->f_24] = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 0);
					}
					if (bVar7)
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], iVar9, GlobalFunc_2777(uParam0->f_12), 1);
					}
					else
					{
						CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[uParam0->f_24], uParam0->f_12, GlobalFunc_2777(uParam0->f_12), 1);
					}
					CAM::SET_CAM_ROT((*uParam0)[uParam0->f_24], -0.951428f, 0f, fVar5, 2);
					CAM::SET_CAM_FOV((*uParam0)[uParam0->f_24], CAM::GET_FINAL_RENDERED_CAM_FOV());
					CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(uParam0->f_9, (*uParam0)[uParam0->f_24], 400, 1);
					uParam0->f_24++;
					uParam0->f_27 += 400;
					uParam0->f_15 = 1;
					break;
			}
		}
		else
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
			}
			else if (PED::IS_PED_INJURED(uParam0->f_12))
			{
			}
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_15 && !uParam0->f_16)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(uParam0->f_12))
			{
				uParam0->f_13 = PLAYER::PLAYER_PED_ID();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 1);
				uParam0->f_21 = GlobalFunc_701();
				GlobalFunc_7632(1);
				if (uParam0->f_24 > 0)
				{
					iVar1 = 0;
					while (iVar1 <= (uParam0->f_24 - 1))
					{
						CAM::SET_CAM_ACTIVE((*uParam0)[iVar1], 1);
						iVar1++;
					}
				}
				GlobalFunc_7723(0, 1);
				CAM::SET_CAM_ACTIVE(uParam0->f_9, 1);
				if (iParam5 == 0)
				{
					CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
				}
				else if (iParam5 > 0)
				{
					CAM::RENDER_SCRIPT_CAMS(true, 1, iParam5, 1, 0, 0);
				}
				if (!Global_17098.f_111)
				{
					if (uParam0->f_14 == 3)
					{
						AUDIO::PLAY_SOUND(-1, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
						if (Global_17098.f_109 == -1)
						{
							Global_17098.f_109 = AUDIO::GET_SOUND_ID();
							Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
						}
						AUDIO::PLAY_SOUND(Global_17098.f_109, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
						AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
						{
						}
					}
					else if (uParam0->f_14 == 2)
					{
						if (Global_17098.f_109 == -1)
						{
							Global_17098.f_109 = AUDIO::GET_SOUND_ID();
							Global_17098.f_110 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
						}
						AUDIO::PLAY_SOUND(Global_17098.f_109, "All", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
				}
				uParam0->f_28 = func_457(uParam0->f_9);
				uParam0->f_25 = MISC::GET_GAME_TIMER();
				uParam0->f_16 = 1;
				GlobalFunc_748(1);
				if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(0))
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(0));
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(2))
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(2));
				}
				else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_12) == GlobalFunc_4917(1))
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(GlobalFunc_707(1));
				}
				else
				{
					GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
				}
				GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(0f);
			}
			else
			{
				uParam0->f_17 = 1;
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_16)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			GRAPHICS::SET_PLAYER_TCMODIFIER_TRANSITION(CAM::GET_CAM_SPLINE_PHASE(uParam0->f_9));
			bVar27 = true;
			if (uParam0->f_24 > 0)
			{
				iVar1 = 0;
				while (iVar1 <= (uParam0->f_24 - 1))
				{
					if (!CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
					{
						bVar27 = false;
					}
					iVar1++;
				}
			}
			if (bVar27)
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_9))
				{
					if (!Global_17098.f_111)
					{
						if (uParam0->f_14 == 3)
						{
							fVar28 = func_457(uParam0->f_9);
							if (fVar28 > uParam0->f_28)
							{
								uParam0->f_28 = fVar28;
							}
							else if (uParam0->f_28 > (fVar28 + 1f))
							{
								if (Global_17098.f_107 == -1)
								{
									Global_17098.f_107 = AUDIO::GET_SOUND_ID();
									Global_17098.f_108 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
									AUDIO::PLAY_SOUND(Global_17098.f_107, "CHARACTER_CHANGE_DOWN_MASTER", 0, 0, 0, 1);
								}
								if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
								{
									AUDIO::STOP_SOUND(Global_17098.f_109);
									AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
									Global_17098.f_109 = -1;
									Global_17098.f_110 = 0;
									AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
								}
							}
						}
					}
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_9) > 0.5f && CAM::IS_CAM_RENDERING(uParam0->f_9))
					{
						uParam0->f_18 = 1;
					}
					if (uParam0->f_18)
					{
						if (PLAYER::PLAYER_PED_ID() == uParam0->f_12)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_12))
							{
								if (uParam0->f_24 >= 1)
								{
									if (CAM::DOES_CAM_EXIST((*uParam0)[(uParam0->f_24 - 1)]))
									{
										if (PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_12, 0))
										{
											iVar29 = PED::GET_VEHICLE_PED_IS_USING(uParam0->f_12);
											Var30 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar29, CAM::GET_GAMEPLAY_CAM_COORD()) };
											CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[(uParam0->f_24 - 1)], iVar29, Var30, 1);
										}
										else
										{
											Var33 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_12, CAM::GET_GAMEPLAY_CAM_COORD()) };
											CAM::ATTACH_CAM_TO_ENTITY((*uParam0)[(uParam0->f_24 - 1)], uParam0->f_12, Var33, 1);
										}
										CAM::SET_CAM_ROT((*uParam0)[(uParam0->f_24 - 1)], CAM::GET_GAMEPLAY_CAM_ROT(2), 2);
										CAM::SET_CAM_FOV((*uParam0)[(uParam0->f_24 - 1)], CAM::GET_GAMEPLAY_CAM_FOV());
										bVar0 = true;
									}
								}
							}
						}
					}
				}
				else if (!uParam0->f_18)
				{
					uParam0->f_18 = 1;
				}
				else
				{
					uParam0->f_17 = 1;
				}
			}
		}
		else
		{
			uParam0->f_17 = 1;
		}
	}
	if (uParam0->f_17)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_9))
		{
			CAM::DESTROY_CAM(uParam0->f_9, 0);
		}
		if (uParam0->f_24 > 0)
		{
			iVar1 = 0;
			while (iVar1 <= (uParam0->f_24 - 1))
			{
				if (CAM::DOES_CAM_EXIST((*uParam0)[iVar1]))
				{
					CAM::DESTROY_CAM((*uParam0)[iVar1], 0);
				}
				iVar1++;
			}
		}
		GlobalFunc_7632(uParam0->f_21);
		uParam0->f_15 = 0;
		uParam0->f_16 = 0;
		uParam0->f_17 = 0;
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
		uParam0->f_20 = 0;
		uParam0->f_24 = 0;
		uParam0->f_27 = 0;
		if (Global_17098.f_109 != -1 && Global_17098.f_110 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_109);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_109);
			Global_17098.f_109 = -1;
			Global_17098.f_110 = 0;
		}
		if (Global_17098.f_107 != -1 && Global_17098.f_108 == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_17098.f_107);
			AUDIO::RELEASE_SOUND_ID(Global_17098.f_107);
			Global_17098.f_107 = -1;
			Global_17098.f_108 = 0;
		}
		if (fParam2 <= 360f && fParam2 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam2);
		}
		if (fParam1 <= 360f && fParam1 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1065353216);
		}
		if (!Global_35923)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::_0x487A82C650EB7799(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (iParam4 == -1)
		{
			if (bVar0)
			{
				CAM::RENDER_SCRIPT_CAMS(false, 1, 100, 1, 0, 0);
			}
			else
			{
				CAM::RENDER_SCRIPT_CAMS(false, 1, 1000, 1, 0, 0);
			}
		}
		else if (iParam4 == 0)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		}
		else
		{
			CAM::RENDER_SCRIPT_CAMS(false, 1, iParam4, 1, 0, 0);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
			PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), 1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), 1, 0);
			}
		}
		GlobalFunc_749(0);
		if (!PED::IS_PED_INJURED(uParam0->f_13))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_13, 0);
		}
		if (!PED::IS_PED_INJURED(uParam0->f_12))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_12, 0);
		}
		GRAPHICS::SET_CURRENT_PLAYER_TCMODIFIER(GlobalFunc_707(GlobalFunc_8315()));
		GlobalFunc_748(0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}


void func_519(var uParam0, int iParam1, var uParam2)//Position - 0x5C915
{
	uParam0->f_10[0 /*57*/].f_2 = 0;
	uParam0->f_10[0 /*57*/].f_3 = -1;
	uParam0->f_10[0 /*57*/].f_4 = 0;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[0 /*57*/].f_18 = 1;
	uParam0->f_10[0 /*57*/].f_19 = 1;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 40f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0f;
	uParam0->f_10[0 /*57*/].f_53 = 2;
	uParam0->f_10[0 /*57*/].f_23 = 0.3f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 1;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 0.01f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 0;
	uParam0->f_10[0 /*57*/].f_37 = 0;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 0;
	uParam0->f_10[1 /*57*/].f_3 = -1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 10;
	uParam0->f_10[1 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0.2f };
	uParam0->f_10[1 /*57*/].f_12 = 0f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 40f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 0f;
	uParam0->f_10[1 /*57*/].f_53 = 2;
	uParam0->f_10[1 /*57*/].f_23 = 0.3f;
	uParam0->f_10[1 /*57*/].f_28 = 2;
	uParam0->f_10[1 /*57*/].f_29 = 1f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 1;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 1f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 1;
	uParam0->f_10[1 /*57*/].f_37 = 12;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0.4f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 0;
	uParam0->f_10[2 /*57*/].f_3 = -1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 600;
	uParam0->f_10[2 /*57*/].f_6 = { 0.0646f, 1.3472f, 1.4595f };
	uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { 0.3564f, 0.2439f, 1.4688f };
	uParam0->f_10[2 /*57*/].f_18 = 1;
	uParam0->f_10[2 /*57*/].f_19 = 1;
	uParam0->f_10[2 /*57*/].f_20 = 1;
	uParam0->f_10[2 /*57*/].f_21 = 40f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 1f;
	uParam0->f_10[2 /*57*/].f_53 = 0;
	uParam0->f_10[2 /*57*/].f_23 = 0f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0f;
	uParam0->f_10[2 /*57*/].f_30 = 1;
	uParam0->f_10[2 /*57*/].f_31 = 0;
	uParam0->f_10[2 /*57*/].f_33 = 1f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 1;
	uParam0->f_10[2 /*57*/].f_37 = 11;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0.5f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_54 = 1;
	uParam0->f_10[4 /*57*/].f_2 = 0;
	uParam0->f_10[4 /*57*/].f_3 = -1;
	uParam0->f_10[4 /*57*/].f_4 = 0;
	uParam0->f_10[4 /*57*/].f_5 = 0;
	uParam0->f_10[4 /*57*/].f_6 = { -1.6125f, 2.0081f, -1.4774f };
	uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[4 /*57*/].f_12 = 0f;
	uParam0->f_10[4 /*57*/].f_16 = 0f;
	uParam0->f_10[4 /*57*/].f_17 = 0;
	uParam0->f_10[4 /*57*/].f_9 = { -0.5f, 0.9f, -1.7f };
	uParam0->f_10[4 /*57*/].f_18 = 1;
	uParam0->f_10[4 /*57*/].f_19 = 1;
	uParam0->f_10[4 /*57*/].f_20 = 1;
	uParam0->f_10[4 /*57*/].f_21 = 40f;
	uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[4 /*57*/].f_27 = 0;
	uParam0->f_10[4 /*57*/].f_50 = 0;
	uParam0->f_10[4 /*57*/].f_51 = 0f;
	uParam0->f_10[4 /*57*/].f_52 = 0f;
	uParam0->f_10[4 /*57*/].f_22 = 1f;
	uParam0->f_10[4 /*57*/].f_53 = 2;
	uParam0->f_10[4 /*57*/].f_23 = 0.5f;
	uParam0->f_10[4 /*57*/].f_28 = 0;
	uParam0->f_10[4 /*57*/].f_29 = 0f;
	uParam0->f_10[4 /*57*/].f_32 = 0f;
	uParam0->f_10[4 /*57*/].f_30 = 0;
	uParam0->f_10[4 /*57*/].f_31 = 0;
	uParam0->f_10[4 /*57*/].f_33 = 0.3f;
	uParam0->f_10[4 /*57*/].f_34 = 0;
	uParam0->f_10[4 /*57*/].f_35 = 0f;
	uParam0->f_10[4 /*57*/].f_36 = 0;
	uParam0->f_10[4 /*57*/].f_37 = 0;
	uParam0->f_10[4 /*57*/].f_39 = 0f;
	uParam0->f_10[4 /*57*/].f_40 = 0f;
	uParam0->f_10[4 /*57*/].f_41 = 0;
	uParam0->f_10[4 /*57*/].f_42 = 0;
	uParam0->f_10[4 /*57*/].f_43 = 0;
	uParam0->f_10[4 /*57*/].f_38 = 0f;
	uParam0->f_10[4 /*57*/].f_45 = 0;
	uParam0->f_10[4 /*57*/].f_46 = 0;
	uParam0->f_10[4 /*57*/].f_47 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[5 /*57*/].f_2 = 0;
	uParam0->f_10[5 /*57*/].f_3 = -1;
	uParam0->f_10[5 /*57*/].f_4 = 0;
	uParam0->f_10[5 /*57*/].f_5 = 600;
	uParam0->f_10[5 /*57*/].f_6 = { -1.6125f, 2.0081f, 0.6774f };
	uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_12 = 0f;
	uParam0->f_10[5 /*57*/].f_16 = 0f;
	uParam0->f_10[5 /*57*/].f_17 = 0;
	uParam0->f_10[5 /*57*/].f_9 = { -0.5f, 0.9f, 0.3f };
	uParam0->f_10[5 /*57*/].f_18 = 1;
	uParam0->f_10[5 /*57*/].f_19 = 1;
	uParam0->f_10[5 /*57*/].f_20 = 1;
	uParam0->f_10[5 /*57*/].f_21 = 40f;
	uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_27 = 0;
	uParam0->f_10[5 /*57*/].f_50 = 0;
	uParam0->f_10[5 /*57*/].f_51 = 0f;
	uParam0->f_10[5 /*57*/].f_52 = 0f;
	uParam0->f_10[5 /*57*/].f_22 = 1f;
	uParam0->f_10[5 /*57*/].f_53 = 2;
	uParam0->f_10[5 /*57*/].f_23 = 0.5f;
	uParam0->f_10[5 /*57*/].f_28 = 0;
	uParam0->f_10[5 /*57*/].f_29 = 0f;
	uParam0->f_10[5 /*57*/].f_32 = 0.6f;
	uParam0->f_10[5 /*57*/].f_30 = 0;
	uParam0->f_10[5 /*57*/].f_31 = 0;
	uParam0->f_10[5 /*57*/].f_33 = 0.3f;
	uParam0->f_10[5 /*57*/].f_34 = 0;
	uParam0->f_10[5 /*57*/].f_35 = 0f;
	uParam0->f_10[5 /*57*/].f_36 = 0;
	uParam0->f_10[5 /*57*/].f_37 = 0;
	uParam0->f_10[5 /*57*/].f_39 = 0f;
	uParam0->f_10[5 /*57*/].f_40 = 0f;
	uParam0->f_10[5 /*57*/].f_41 = 0;
	uParam0->f_10[5 /*57*/].f_42 = 0;
	uParam0->f_10[5 /*57*/].f_43 = 0;
	uParam0->f_10[5 /*57*/].f_38 = 0f;
	uParam0->f_10[5 /*57*/].f_45 = 0;
	uParam0->f_10[5 /*57*/].f_46 = 0;
	uParam0->f_10[5 /*57*/].f_47 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[6 /*57*/].f_2 = 0;
	uParam0->f_10[6 /*57*/].f_3 = -1;
	uParam0->f_10[6 /*57*/].f_4 = 0;
	uParam0->f_10[6 /*57*/].f_5 = 400;
	uParam0->f_10[6 /*57*/].f_6 = { -1.6125f, 2.0081f, 0.6774f };
	uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[6 /*57*/].f_12 = 0f;
	uParam0->f_10[6 /*57*/].f_16 = 0f;
	uParam0->f_10[6 /*57*/].f_17 = 0;
	uParam0->f_10[6 /*57*/].f_9 = { -0.5f, 0.9f, 0.3f };
	uParam0->f_10[6 /*57*/].f_18 = 1;
	uParam0->f_10[6 /*57*/].f_19 = 1;
	uParam0->f_10[6 /*57*/].f_20 = 1;
	uParam0->f_10[6 /*57*/].f_21 = 40f;
	uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[6 /*57*/].f_27 = 0;
	uParam0->f_10[6 /*57*/].f_50 = 0;
	uParam0->f_10[6 /*57*/].f_51 = 0f;
	uParam0->f_10[6 /*57*/].f_52 = 0f;
	uParam0->f_10[6 /*57*/].f_22 = 0f;
	uParam0->f_10[6 /*57*/].f_53 = 2;
	uParam0->f_10[6 /*57*/].f_23 = 0.5f;
	uParam0->f_10[6 /*57*/].f_28 = 0;
	uParam0->f_10[6 /*57*/].f_29 = 0f;
	uParam0->f_10[6 /*57*/].f_32 = 0f;
	uParam0->f_10[6 /*57*/].f_30 = 0;
	uParam0->f_10[6 /*57*/].f_31 = 0;
	uParam0->f_10[6 /*57*/].f_33 = 1f;
	uParam0->f_10[6 /*57*/].f_34 = 0;
	uParam0->f_10[6 /*57*/].f_35 = 0f;
	uParam0->f_10[6 /*57*/].f_36 = 0;
	uParam0->f_10[6 /*57*/].f_37 = 0;
	uParam0->f_10[6 /*57*/].f_39 = 0f;
	uParam0->f_10[6 /*57*/].f_40 = 0f;
	uParam0->f_10[6 /*57*/].f_41 = 0;
	uParam0->f_10[6 /*57*/].f_42 = 0;
	uParam0->f_10[6 /*57*/].f_43 = 0;
	uParam0->f_10[6 /*57*/].f_38 = 0f;
	uParam0->f_10[6 /*57*/].f_45 = 0;
	uParam0->f_10[6 /*57*/].f_46 = 0;
	uParam0->f_10[6 /*57*/].f_47 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
	uParam0->f_1217 = 7;
	uParam0->f_1218 = 3;
	uParam0->f_1233 = 0.015f;
	uParam0->f_1234 = 0.34f;
	uParam0->f_1235 = 0;
	uParam0->f_1236 = 0;
	uParam0->f_1237 = 0;
	uParam0->f_2 = 0;
	uParam0->f_1219 = 0;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_FranklinToMike.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_FranklinToMike.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = uParam2;
}

void func_520(var uParam0, int iParam1, var uParam2)//Position - 0x5D505
{
	uParam0->f_10[0 /*57*/].f_2 = 0;
	uParam0->f_10[0 /*57*/].f_3 = -1;
	uParam0->f_10[0 /*57*/].f_4 = 0;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[0 /*57*/].f_18 = 1;
	uParam0->f_10[0 /*57*/].f_19 = 1;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 40f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0f;
	uParam0->f_10[0 /*57*/].f_53 = 0;
	uParam0->f_10[0 /*57*/].f_23 = 0f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 0;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 0.01f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 0;
	uParam0->f_10[0 /*57*/].f_37 = 0;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 0;
	uParam0->f_10[1 /*57*/].f_3 = -1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 10;
	uParam0->f_10[1 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0.2f };
	uParam0->f_10[1 /*57*/].f_12 = 0f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 40f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 0f;
	uParam0->f_10[1 /*57*/].f_53 = 0;
	uParam0->f_10[1 /*57*/].f_23 = 0f;
	uParam0->f_10[1 /*57*/].f_28 = 2;
	uParam0->f_10[1 /*57*/].f_29 = 1f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 0;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 1f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 1;
	uParam0->f_10[1 /*57*/].f_37 = 12;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0.1f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 0;
	uParam0->f_10[2 /*57*/].f_3 = -1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 600;
	uParam0->f_10[2 /*57*/].f_6 = { 0.0646f, 1.3472f, 1.4595f };
	uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { 0.3564f, 0.2439f, 1.4688f };
	uParam0->f_10[2 /*57*/].f_18 = 1;
	uParam0->f_10[2 /*57*/].f_19 = 1;
	uParam0->f_10[2 /*57*/].f_20 = 1;
	uParam0->f_10[2 /*57*/].f_21 = 40f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 1f;
	uParam0->f_10[2 /*57*/].f_53 = 0;
	uParam0->f_10[2 /*57*/].f_23 = 0f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0f;
	uParam0->f_10[2 /*57*/].f_30 = 1;
	uParam0->f_10[2 /*57*/].f_31 = 0;
	uParam0->f_10[2 /*57*/].f_33 = 1f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 1;
	uParam0->f_10[2 /*57*/].f_37 = 11;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0.65f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_2 = 8;
	uParam0->f_10[3 /*57*/].f_3 = -1;
	uParam0->f_10[3 /*57*/].f_4 = 0;
	uParam0->f_10[3 /*57*/].f_5 = 0;
	uParam0->f_10[3 /*57*/].f_6 = { -139.4391f, -594.4296f, 191.3729f };
	uParam0->f_10[3 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[3 /*57*/].f_12 = 0f;
	uParam0->f_10[3 /*57*/].f_16 = 0f;
	uParam0->f_10[3 /*57*/].f_17 = 0;
	uParam0->f_10[3 /*57*/].f_9 = { 4.9798f, -0.0338f, -72.2534f };
	uParam0->f_10[3 /*57*/].f_18 = 0;
	uParam0->f_10[3 /*57*/].f_19 = 0;
	uParam0->f_10[3 /*57*/].f_20 = 0;
	uParam0->f_10[3 /*57*/].f_21 = 69.7f;
	uParam0->f_10[3 /*57*/].f_24 = { 0f, 0f, -21f };
	uParam0->f_10[3 /*57*/].f_27 = 5;
	uParam0->f_10[3 /*57*/].f_50 = 0;
	uParam0->f_10[3 /*57*/].f_51 = 0f;
	uParam0->f_10[3 /*57*/].f_52 = 0f;
	uParam0->f_10[3 /*57*/].f_22 = 1f;
	uParam0->f_10[3 /*57*/].f_53 = 0;
	uParam0->f_10[3 /*57*/].f_23 = 0f;
	uParam0->f_10[3 /*57*/].f_28 = 0;
	uParam0->f_10[3 /*57*/].f_29 = 0f;
	uParam0->f_10[3 /*57*/].f_32 = 0f;
	uParam0->f_10[3 /*57*/].f_30 = 1;
	uParam0->f_10[3 /*57*/].f_31 = 1;
	uParam0->f_10[3 /*57*/].f_33 = 0f;
	uParam0->f_10[3 /*57*/].f_34 = 0;
	uParam0->f_10[3 /*57*/].f_35 = 0f;
	uParam0->f_10[3 /*57*/].f_36 = 0;
	uParam0->f_10[3 /*57*/].f_37 = 0;
	uParam0->f_10[3 /*57*/].f_39 = 0f;
	uParam0->f_10[3 /*57*/].f_40 = 0f;
	uParam0->f_10[3 /*57*/].f_41 = 0;
	uParam0->f_10[3 /*57*/].f_42 = 0;
	uParam0->f_10[3 /*57*/].f_43 = 0;
	uParam0->f_10[3 /*57*/].f_38 = 0f;
	uParam0->f_10[3 /*57*/].f_45 = 0;
	uParam0->f_10[3 /*57*/].f_46 = 0;
	uParam0->f_10[3 /*57*/].f_47 = 0f;
	uParam0->f_10[3 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[3 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[4 /*57*/].f_2 = 8;
	uParam0->f_10[4 /*57*/].f_3 = -1;
	uParam0->f_10[4 /*57*/].f_4 = 0;
	uParam0->f_10[4 /*57*/].f_5 = 0;
	uParam0->f_10[4 /*57*/].f_6 = { -139.4391f, -594.4296f, 191.3729f };
	uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[4 /*57*/].f_12 = 0f;
	uParam0->f_10[4 /*57*/].f_16 = 0f;
	uParam0->f_10[4 /*57*/].f_17 = 0;
	uParam0->f_10[4 /*57*/].f_9 = { 4.9798f, -0.0338f, -72.2534f };
	uParam0->f_10[4 /*57*/].f_18 = 0;
	uParam0->f_10[4 /*57*/].f_19 = 0;
	uParam0->f_10[4 /*57*/].f_20 = 0;
	uParam0->f_10[4 /*57*/].f_21 = 69.7f;
	uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, -21f };
	uParam0->f_10[4 /*57*/].f_27 = 5;
	uParam0->f_10[4 /*57*/].f_50 = 0;
	uParam0->f_10[4 /*57*/].f_51 = 0f;
	uParam0->f_10[4 /*57*/].f_52 = 0f;
	uParam0->f_10[4 /*57*/].f_22 = 1f;
	uParam0->f_10[4 /*57*/].f_53 = 0;
	uParam0->f_10[4 /*57*/].f_23 = 0f;
	uParam0->f_10[4 /*57*/].f_28 = 0;
	uParam0->f_10[4 /*57*/].f_29 = 0f;
	uParam0->f_10[4 /*57*/].f_32 = 0f;
	uParam0->f_10[4 /*57*/].f_30 = 1;
	uParam0->f_10[4 /*57*/].f_31 = 1;
	uParam0->f_10[4 /*57*/].f_33 = 0f;
	uParam0->f_10[4 /*57*/].f_34 = 0;
	uParam0->f_10[4 /*57*/].f_35 = 0f;
	uParam0->f_10[4 /*57*/].f_36 = 0;
	uParam0->f_10[4 /*57*/].f_37 = 0;
	uParam0->f_10[4 /*57*/].f_39 = 0f;
	uParam0->f_10[4 /*57*/].f_40 = 0f;
	uParam0->f_10[4 /*57*/].f_41 = 0;
	uParam0->f_10[4 /*57*/].f_42 = 0;
	uParam0->f_10[4 /*57*/].f_43 = 0;
	uParam0->f_10[4 /*57*/].f_38 = 0f;
	uParam0->f_10[4 /*57*/].f_45 = 0;
	uParam0->f_10[4 /*57*/].f_46 = 0;
	uParam0->f_10[4 /*57*/].f_47 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[5 /*57*/].f_2 = 0;
	uParam0->f_10[5 /*57*/].f_3 = -1;
	uParam0->f_10[5 /*57*/].f_4 = 1;
	uParam0->f_10[5 /*57*/].f_5 = 600;
	uParam0->f_10[5 /*57*/].f_6 = { 323.928f, 430.4764f, 24.9056f };
	uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_12 = 0f;
	uParam0->f_10[5 /*57*/].f_16 = 0f;
	uParam0->f_10[5 /*57*/].f_17 = 0;
	uParam0->f_10[5 /*57*/].f_9 = { -2.3168f, -0.0333f, 39.2271f };
	uParam0->f_10[5 /*57*/].f_18 = 0;
	uParam0->f_10[5 /*57*/].f_19 = 0;
	uParam0->f_10[5 /*57*/].f_20 = 0;
	uParam0->f_10[5 /*57*/].f_21 = 69.7f;
	uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_27 = 0;
	uParam0->f_10[5 /*57*/].f_50 = 0;
	uParam0->f_10[5 /*57*/].f_51 = 0f;
	uParam0->f_10[5 /*57*/].f_52 = 0f;
	uParam0->f_10[5 /*57*/].f_22 = 1f;
	uParam0->f_10[5 /*57*/].f_53 = 0;
	uParam0->f_10[5 /*57*/].f_23 = 0f;
	uParam0->f_10[5 /*57*/].f_28 = 0;
	uParam0->f_10[5 /*57*/].f_29 = 0f;
	uParam0->f_10[5 /*57*/].f_32 = 0f;
	uParam0->f_10[5 /*57*/].f_30 = 0;
	uParam0->f_10[5 /*57*/].f_31 = 0;
	uParam0->f_10[5 /*57*/].f_33 = 0f;
	uParam0->f_10[5 /*57*/].f_34 = 0;
	uParam0->f_10[5 /*57*/].f_35 = 0f;
	uParam0->f_10[5 /*57*/].f_36 = 0;
	uParam0->f_10[5 /*57*/].f_37 = 0;
	uParam0->f_10[5 /*57*/].f_39 = 0f;
	uParam0->f_10[5 /*57*/].f_40 = 0f;
	uParam0->f_10[5 /*57*/].f_41 = 0;
	uParam0->f_10[5 /*57*/].f_42 = 0;
	uParam0->f_10[5 /*57*/].f_43 = 0;
	uParam0->f_10[5 /*57*/].f_38 = 0f;
	uParam0->f_10[5 /*57*/].f_45 = 0;
	uParam0->f_10[5 /*57*/].f_46 = 0;
	uParam0->f_10[5 /*57*/].f_47 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
	uParam0->f_1184[0 /*2*/] = 2.958f;
	uParam0->f_1184[0 /*2*/].f_1 = 1f;
	uParam0->f_1184[1 /*2*/] = 5.706f;
	uParam0->f_1184[1 /*2*/].f_1 = 0.65f;
	uParam0->f_1217 = 6;
	uParam0->f_1218 = 3;
	uParam0->f_1233 = 0.01f;
	uParam0->f_1234 = 0.55f;
	uParam0->f_1235 = 0;
	uParam0->f_1236 = 0;
	uParam0->f_1237 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 1;
	uParam0->f_1219 = 1;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_FranklinToTrevor.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_FranklinToTrevor.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = iParam1;
	uParam0->f_4[1] = uParam2;
}

void func_521(var uParam0, int iParam1, int iParam2)//Position - 0x5E10C
{
	uParam0->f_10[0 /*57*/].f_2 = 0;
	uParam0->f_10[0 /*57*/].f_3 = -1;
	uParam0->f_10[0 /*57*/].f_4 = 0;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[0 /*57*/].f_18 = 1;
	uParam0->f_10[0 /*57*/].f_19 = 1;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 40f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0f;
	uParam0->f_10[0 /*57*/].f_53 = 2;
	uParam0->f_10[0 /*57*/].f_23 = 0.3f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 1;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 0.01f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 0;
	uParam0->f_10[0 /*57*/].f_37 = 0;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 0;
	uParam0->f_10[1 /*57*/].f_3 = -1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 10;
	uParam0->f_10[1 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0.2f };
	uParam0->f_10[1 /*57*/].f_12 = 0f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 40f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 0f;
	uParam0->f_10[1 /*57*/].f_53 = 2;
	uParam0->f_10[1 /*57*/].f_23 = 0.3f;
	uParam0->f_10[1 /*57*/].f_28 = 2;
	uParam0->f_10[1 /*57*/].f_29 = 1f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 1;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 1f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 1;
	uParam0->f_10[1 /*57*/].f_37 = 12;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0.4f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 0;
	uParam0->f_10[2 /*57*/].f_3 = -1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 600;
	uParam0->f_10[2 /*57*/].f_6 = { 0.0646f, 1.3472f, 1.4595f };
	uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { 0.3564f, 0.2439f, 1.4688f };
	uParam0->f_10[2 /*57*/].f_18 = 1;
	uParam0->f_10[2 /*57*/].f_19 = 1;
	uParam0->f_10[2 /*57*/].f_20 = 1;
	uParam0->f_10[2 /*57*/].f_21 = 40f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 1f;
	uParam0->f_10[2 /*57*/].f_53 = 0;
	uParam0->f_10[2 /*57*/].f_23 = 0f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0f;
	uParam0->f_10[2 /*57*/].f_30 = 1;
	uParam0->f_10[2 /*57*/].f_31 = 0;
	uParam0->f_10[2 /*57*/].f_33 = 1f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 1;
	uParam0->f_10[2 /*57*/].f_37 = 8;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0.5f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_54 = 1;
	uParam0->f_10[4 /*57*/].f_2 = 0;
	uParam0->f_10[4 /*57*/].f_3 = -1;
	uParam0->f_10[4 /*57*/].f_4 = 0;
	uParam0->f_10[4 /*57*/].f_5 = 0;
	uParam0->f_10[4 /*57*/].f_6 = { -1.9125f, 1.3081f, -2.1774f };
	uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[4 /*57*/].f_12 = 0f;
	uParam0->f_10[4 /*57*/].f_16 = 0f;
	uParam0->f_10[4 /*57*/].f_17 = 0;
	uParam0->f_10[4 /*57*/].f_9 = { 0f, -1f, -1.4f };
	uParam0->f_10[4 /*57*/].f_18 = 1;
	uParam0->f_10[4 /*57*/].f_19 = 1;
	uParam0->f_10[4 /*57*/].f_20 = 1;
	uParam0->f_10[4 /*57*/].f_21 = 40f;
	uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[4 /*57*/].f_27 = 0;
	uParam0->f_10[4 /*57*/].f_50 = 0;
	uParam0->f_10[4 /*57*/].f_51 = 0f;
	uParam0->f_10[4 /*57*/].f_52 = 0f;
	uParam0->f_10[4 /*57*/].f_22 = 1f;
	uParam0->f_10[4 /*57*/].f_53 = 2;
	uParam0->f_10[4 /*57*/].f_23 = 0.5f;
	uParam0->f_10[4 /*57*/].f_28 = 0;
	uParam0->f_10[4 /*57*/].f_29 = 0f;
	uParam0->f_10[4 /*57*/].f_32 = 0f;
	uParam0->f_10[4 /*57*/].f_30 = 0;
	uParam0->f_10[4 /*57*/].f_31 = 0;
	uParam0->f_10[4 /*57*/].f_33 = 0.3f;
	uParam0->f_10[4 /*57*/].f_34 = 0;
	uParam0->f_10[4 /*57*/].f_35 = 0f;
	uParam0->f_10[4 /*57*/].f_36 = 0;
	uParam0->f_10[4 /*57*/].f_37 = 0;
	uParam0->f_10[4 /*57*/].f_39 = 0f;
	uParam0->f_10[4 /*57*/].f_40 = 0f;
	uParam0->f_10[4 /*57*/].f_41 = 0;
	uParam0->f_10[4 /*57*/].f_42 = 0;
	uParam0->f_10[4 /*57*/].f_43 = 0;
	uParam0->f_10[4 /*57*/].f_38 = 0f;
	uParam0->f_10[4 /*57*/].f_45 = 0;
	uParam0->f_10[4 /*57*/].f_46 = 0;
	uParam0->f_10[4 /*57*/].f_47 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[5 /*57*/].f_2 = 0;
	uParam0->f_10[5 /*57*/].f_3 = -1;
	uParam0->f_10[5 /*57*/].f_4 = 0;
	uParam0->f_10[5 /*57*/].f_5 = 600;
	uParam0->f_10[5 /*57*/].f_6 = { -1.9125f, 1.3081f, -0.1774f };
	uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_12 = 0f;
	uParam0->f_10[5 /*57*/].f_16 = 0f;
	uParam0->f_10[5 /*57*/].f_17 = 0;
	uParam0->f_10[5 /*57*/].f_9 = { 0f, -1f, 0.6f };
	uParam0->f_10[5 /*57*/].f_18 = 1;
	uParam0->f_10[5 /*57*/].f_19 = 1;
	uParam0->f_10[5 /*57*/].f_20 = 1;
	uParam0->f_10[5 /*57*/].f_21 = 40f;
	uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_27 = 0;
	uParam0->f_10[5 /*57*/].f_50 = 0;
	uParam0->f_10[5 /*57*/].f_51 = 0f;
	uParam0->f_10[5 /*57*/].f_52 = 0f;
	uParam0->f_10[5 /*57*/].f_22 = 1f;
	uParam0->f_10[5 /*57*/].f_53 = 2;
	uParam0->f_10[5 /*57*/].f_23 = 0.5f;
	uParam0->f_10[5 /*57*/].f_28 = 0;
	uParam0->f_10[5 /*57*/].f_29 = 0f;
	uParam0->f_10[5 /*57*/].f_32 = 0.6f;
	uParam0->f_10[5 /*57*/].f_30 = 0;
	uParam0->f_10[5 /*57*/].f_31 = 0;
	uParam0->f_10[5 /*57*/].f_33 = 0.3f;
	uParam0->f_10[5 /*57*/].f_34 = 0;
	uParam0->f_10[5 /*57*/].f_35 = 0f;
	uParam0->f_10[5 /*57*/].f_36 = 0;
	uParam0->f_10[5 /*57*/].f_37 = 0;
	uParam0->f_10[5 /*57*/].f_39 = 0f;
	uParam0->f_10[5 /*57*/].f_40 = 0f;
	uParam0->f_10[5 /*57*/].f_41 = 0;
	uParam0->f_10[5 /*57*/].f_42 = 0;
	uParam0->f_10[5 /*57*/].f_43 = 0;
	uParam0->f_10[5 /*57*/].f_38 = 0f;
	uParam0->f_10[5 /*57*/].f_45 = 0;
	uParam0->f_10[5 /*57*/].f_46 = 0;
	uParam0->f_10[5 /*57*/].f_47 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[6 /*57*/].f_2 = 0;
	uParam0->f_10[6 /*57*/].f_3 = -1;
	uParam0->f_10[6 /*57*/].f_4 = 0;
	uParam0->f_10[6 /*57*/].f_5 = 400;
	uParam0->f_10[6 /*57*/].f_6 = { -1.9125f, 1.3081f, -0.1774f };
	uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[6 /*57*/].f_12 = 0f;
	uParam0->f_10[6 /*57*/].f_16 = 0f;
	uParam0->f_10[6 /*57*/].f_17 = 0;
	uParam0->f_10[6 /*57*/].f_9 = { 0f, -1f, 0.6f };
	uParam0->f_10[6 /*57*/].f_18 = 1;
	uParam0->f_10[6 /*57*/].f_19 = 1;
	uParam0->f_10[6 /*57*/].f_20 = 1;
	uParam0->f_10[6 /*57*/].f_21 = 40f;
	uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[6 /*57*/].f_27 = 0;
	uParam0->f_10[6 /*57*/].f_50 = 0;
	uParam0->f_10[6 /*57*/].f_51 = 0f;
	uParam0->f_10[6 /*57*/].f_52 = 0f;
	uParam0->f_10[6 /*57*/].f_22 = 0f;
	uParam0->f_10[6 /*57*/].f_53 = 2;
	uParam0->f_10[6 /*57*/].f_23 = 0.5f;
	uParam0->f_10[6 /*57*/].f_28 = 0;
	uParam0->f_10[6 /*57*/].f_29 = 0f;
	uParam0->f_10[6 /*57*/].f_32 = 0f;
	uParam0->f_10[6 /*57*/].f_30 = 0;
	uParam0->f_10[6 /*57*/].f_31 = 0;
	uParam0->f_10[6 /*57*/].f_33 = 1f;
	uParam0->f_10[6 /*57*/].f_34 = 0;
	uParam0->f_10[6 /*57*/].f_35 = 0f;
	uParam0->f_10[6 /*57*/].f_36 = 0;
	uParam0->f_10[6 /*57*/].f_37 = 0;
	uParam0->f_10[6 /*57*/].f_39 = 0f;
	uParam0->f_10[6 /*57*/].f_40 = 0f;
	uParam0->f_10[6 /*57*/].f_41 = 0;
	uParam0->f_10[6 /*57*/].f_42 = 0;
	uParam0->f_10[6 /*57*/].f_43 = 0;
	uParam0->f_10[6 /*57*/].f_38 = 0f;
	uParam0->f_10[6 /*57*/].f_45 = 0;
	uParam0->f_10[6 /*57*/].f_46 = 0;
	uParam0->f_10[6 /*57*/].f_47 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
	uParam0->f_1217 = 7;
	uParam0->f_1218 = 3;
	uParam0->f_1233 = 0.015f;
	uParam0->f_1234 = 0.34f;
	uParam0->f_1235 = 0;
	uParam0->f_1236 = 0;
	uParam0->f_1237 = 0;
	uParam0->f_2 = 0;
	uParam0->f_1219 = 0;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_FranklinToMike.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_FranklinToMike.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = iParam2;
}

void func_522(var uParam0, int iParam1, int iParam2)//Position - 0x5ECE4
{
	uParam0->f_10[0 /*57*/].f_2 = 0;
	uParam0->f_10[0 /*57*/].f_3 = -1;
	uParam0->f_10[0 /*57*/].f_4 = 0;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[0 /*57*/].f_18 = 1;
	uParam0->f_10[0 /*57*/].f_19 = 1;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 40f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0f;
	uParam0->f_10[0 /*57*/].f_53 = 2;
	uParam0->f_10[0 /*57*/].f_23 = 0.3f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 1;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 0.01f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 0;
	uParam0->f_10[0 /*57*/].f_37 = 0;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 0;
	uParam0->f_10[1 /*57*/].f_3 = -1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 10;
	uParam0->f_10[1 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0.2f };
	uParam0->f_10[1 /*57*/].f_12 = 0f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 40f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 0f;
	uParam0->f_10[1 /*57*/].f_53 = 2;
	uParam0->f_10[1 /*57*/].f_23 = 0.3f;
	uParam0->f_10[1 /*57*/].f_28 = 2;
	uParam0->f_10[1 /*57*/].f_29 = 1f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 1;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 1f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 1;
	uParam0->f_10[1 /*57*/].f_37 = 12;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0.4f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 0;
	uParam0->f_10[2 /*57*/].f_3 = -1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 600;
	uParam0->f_10[2 /*57*/].f_6 = { 0.0646f, 1.3472f, 1.4595f };
	uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { 0.3564f, 0.2439f, 1.4688f };
	uParam0->f_10[2 /*57*/].f_18 = 1;
	uParam0->f_10[2 /*57*/].f_19 = 1;
	uParam0->f_10[2 /*57*/].f_20 = 1;
	uParam0->f_10[2 /*57*/].f_21 = 40f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 1f;
	uParam0->f_10[2 /*57*/].f_53 = 0;
	uParam0->f_10[2 /*57*/].f_23 = 0f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0f;
	uParam0->f_10[2 /*57*/].f_30 = 1;
	uParam0->f_10[2 /*57*/].f_31 = 0;
	uParam0->f_10[2 /*57*/].f_33 = 1f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 1;
	uParam0->f_10[2 /*57*/].f_37 = 8;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0.5f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_54 = 1;
	uParam0->f_10[4 /*57*/].f_2 = 0;
	uParam0->f_10[4 /*57*/].f_3 = -1;
	uParam0->f_10[4 /*57*/].f_4 = 0;
	uParam0->f_10[4 /*57*/].f_5 = 0;
	uParam0->f_10[4 /*57*/].f_6 = { -1.5125f, 2.8081f, -1.8774f };
	uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[4 /*57*/].f_12 = 0f;
	uParam0->f_10[4 /*57*/].f_16 = 0f;
	uParam0->f_10[4 /*57*/].f_17 = 0;
	uParam0->f_10[4 /*57*/].f_9 = { -0.9322f, -0.2357f, -1.7781f };
	uParam0->f_10[4 /*57*/].f_18 = 1;
	uParam0->f_10[4 /*57*/].f_19 = 1;
	uParam0->f_10[4 /*57*/].f_20 = 1;
	uParam0->f_10[4 /*57*/].f_21 = 40f;
	uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[4 /*57*/].f_27 = 0;
	uParam0->f_10[4 /*57*/].f_50 = 0;
	uParam0->f_10[4 /*57*/].f_51 = 0f;
	uParam0->f_10[4 /*57*/].f_52 = 0f;
	uParam0->f_10[4 /*57*/].f_22 = 1f;
	uParam0->f_10[4 /*57*/].f_53 = 2;
	uParam0->f_10[4 /*57*/].f_23 = 0.3f;
	uParam0->f_10[4 /*57*/].f_28 = 0;
	uParam0->f_10[4 /*57*/].f_29 = 0f;
	uParam0->f_10[4 /*57*/].f_32 = 0f;
	uParam0->f_10[4 /*57*/].f_30 = 0;
	uParam0->f_10[4 /*57*/].f_31 = 0;
	uParam0->f_10[4 /*57*/].f_33 = 1f;
	uParam0->f_10[4 /*57*/].f_34 = 0;
	uParam0->f_10[4 /*57*/].f_35 = 0f;
	uParam0->f_10[4 /*57*/].f_36 = 0;
	uParam0->f_10[4 /*57*/].f_37 = 0;
	uParam0->f_10[4 /*57*/].f_39 = 0f;
	uParam0->f_10[4 /*57*/].f_40 = 0f;
	uParam0->f_10[4 /*57*/].f_41 = 0;
	uParam0->f_10[4 /*57*/].f_42 = 0;
	uParam0->f_10[4 /*57*/].f_43 = 0;
	uParam0->f_10[4 /*57*/].f_38 = 0f;
	uParam0->f_10[4 /*57*/].f_45 = 0;
	uParam0->f_10[4 /*57*/].f_46 = 0;
	uParam0->f_10[4 /*57*/].f_47 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[5 /*57*/].f_2 = 0;
	uParam0->f_10[5 /*57*/].f_3 = -1;
	uParam0->f_10[5 /*57*/].f_4 = 0;
	uParam0->f_10[5 /*57*/].f_5 = 600;
	uParam0->f_10[5 /*57*/].f_6 = { -1.1357f, 2.382f, 0.609f };
	uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_12 = 0f;
	uParam0->f_10[5 /*57*/].f_16 = 0f;
	uParam0->f_10[5 /*57*/].f_17 = 0;
	uParam0->f_10[5 /*57*/].f_9 = { -1.186f, -0.0093f, 0.4085f };
	uParam0->f_10[5 /*57*/].f_18 = 1;
	uParam0->f_10[5 /*57*/].f_19 = 1;
	uParam0->f_10[5 /*57*/].f_20 = 1;
	uParam0->f_10[5 /*57*/].f_21 = 45f;
	uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_27 = 0;
	uParam0->f_10[5 /*57*/].f_50 = 0;
	uParam0->f_10[5 /*57*/].f_51 = 0f;
	uParam0->f_10[5 /*57*/].f_52 = 0f;
	uParam0->f_10[5 /*57*/].f_22 = 1f;
	uParam0->f_10[5 /*57*/].f_53 = 2;
	uParam0->f_10[5 /*57*/].f_23 = 0.3f;
	uParam0->f_10[5 /*57*/].f_28 = 0;
	uParam0->f_10[5 /*57*/].f_29 = 0f;
	uParam0->f_10[5 /*57*/].f_32 = 0.6f;
	uParam0->f_10[5 /*57*/].f_30 = 0;
	uParam0->f_10[5 /*57*/].f_31 = 0;
	uParam0->f_10[5 /*57*/].f_33 = 1f;
	uParam0->f_10[5 /*57*/].f_34 = 0;
	uParam0->f_10[5 /*57*/].f_35 = 0f;
	uParam0->f_10[5 /*57*/].f_36 = 0;
	uParam0->f_10[5 /*57*/].f_37 = 0;
	uParam0->f_10[5 /*57*/].f_39 = 0f;
	uParam0->f_10[5 /*57*/].f_40 = 0f;
	uParam0->f_10[5 /*57*/].f_41 = 0;
	uParam0->f_10[5 /*57*/].f_42 = 0;
	uParam0->f_10[5 /*57*/].f_43 = 0;
	uParam0->f_10[5 /*57*/].f_38 = 0f;
	uParam0->f_10[5 /*57*/].f_45 = 0;
	uParam0->f_10[5 /*57*/].f_46 = 0;
	uParam0->f_10[5 /*57*/].f_47 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[6 /*57*/].f_2 = 0;
	uParam0->f_10[6 /*57*/].f_3 = -1;
	uParam0->f_10[6 /*57*/].f_4 = 1;
	uParam0->f_10[6 /*57*/].f_5 = 600;
	uParam0->f_10[6 /*57*/].f_6 = { -1.1809f, 1.38f, 0.7801f };
	uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[6 /*57*/].f_12 = 0f;
	uParam0->f_10[6 /*57*/].f_16 = 0f;
	uParam0->f_10[6 /*57*/].f_17 = 0;
	uParam0->f_10[6 /*57*/].f_9 = { -0.502f, -0.2914f, 0.4661f };
	uParam0->f_10[6 /*57*/].f_18 = 1;
	uParam0->f_10[6 /*57*/].f_19 = 1;
	uParam0->f_10[6 /*57*/].f_20 = 1;
	uParam0->f_10[6 /*57*/].f_21 = 45f;
	uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[6 /*57*/].f_27 = 0;
	uParam0->f_10[6 /*57*/].f_50 = 0;
	uParam0->f_10[6 /*57*/].f_51 = 0f;
	uParam0->f_10[6 /*57*/].f_52 = 0f;
	uParam0->f_10[6 /*57*/].f_22 = 0f;
	uParam0->f_10[6 /*57*/].f_53 = 2;
	uParam0->f_10[6 /*57*/].f_23 = 0.3f;
	uParam0->f_10[6 /*57*/].f_28 = 0;
	uParam0->f_10[6 /*57*/].f_29 = 0f;
	uParam0->f_10[6 /*57*/].f_32 = 0f;
	uParam0->f_10[6 /*57*/].f_30 = 0;
	uParam0->f_10[6 /*57*/].f_31 = 0;
	uParam0->f_10[6 /*57*/].f_33 = 1f;
	uParam0->f_10[6 /*57*/].f_34 = 0;
	uParam0->f_10[6 /*57*/].f_35 = 0f;
	uParam0->f_10[6 /*57*/].f_36 = 0;
	uParam0->f_10[6 /*57*/].f_37 = 0;
	uParam0->f_10[6 /*57*/].f_39 = 0f;
	uParam0->f_10[6 /*57*/].f_40 = 0f;
	uParam0->f_10[6 /*57*/].f_41 = 0;
	uParam0->f_10[6 /*57*/].f_42 = 0;
	uParam0->f_10[6 /*57*/].f_43 = 0;
	uParam0->f_10[6 /*57*/].f_38 = 0f;
	uParam0->f_10[6 /*57*/].f_45 = 0;
	uParam0->f_10[6 /*57*/].f_46 = 0;
	uParam0->f_10[6 /*57*/].f_47 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
	uParam0->f_1217 = 7;
	uParam0->f_1218 = 3;
	uParam0->f_1233 = 0.015f;
	uParam0->f_1234 = 0.34f;
	uParam0->f_1235 = 0;
	uParam0->f_1236 = 0;
	uParam0->f_1237 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 1;
	uParam0->f_1219 = 0;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_FranklinToMike.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_FranklinToMike.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = iParam2;
}

void func_523(var uParam0, var uParam1, int iParam2)//Position - 0x5F8D1
{
	uParam0->f_10[0 /*57*/].f_2 = 0;
	uParam0->f_10[0 /*57*/].f_3 = -1;
	uParam0->f_10[0 /*57*/].f_4 = 0;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { -1.6125f, 2.0081f, 0.6774f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { -0.5f, 0.9f, 0.3f };
	uParam0->f_10[0 /*57*/].f_18 = 1;
	uParam0->f_10[0 /*57*/].f_19 = 1;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 40f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0f;
	uParam0->f_10[0 /*57*/].f_53 = 0;
	uParam0->f_10[0 /*57*/].f_23 = 0.5f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 0;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 0f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 1;
	uParam0->f_10[0 /*57*/].f_37 = 14;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 0;
	uParam0->f_10[1 /*57*/].f_3 = -1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 400;
	uParam0->f_10[1 /*57*/].f_6 = { -1.6125f, 2.0081f, 0.4774f };
	uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_12 = 0f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { -0.5f, 0.9f, 0.1f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 40f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 0f;
	uParam0->f_10[1 /*57*/].f_53 = 2;
	uParam0->f_10[1 /*57*/].f_23 = 0.5f;
	uParam0->f_10[1 /*57*/].f_28 = 0;
	uParam0->f_10[1 /*57*/].f_29 = 0f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 0;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 1f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 0;
	uParam0->f_10[1 /*57*/].f_37 = 0;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0.3f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 0;
	uParam0->f_10[2 /*57*/].f_3 = -1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 600;
	uParam0->f_10[2 /*57*/].f_6 = { -1.6125f, 2.0081f, -1.4774f };
	uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { -0.5f, 0.9f, -1.7f };
	uParam0->f_10[2 /*57*/].f_18 = 1;
	uParam0->f_10[2 /*57*/].f_19 = 1;
	uParam0->f_10[2 /*57*/].f_20 = 1;
	uParam0->f_10[2 /*57*/].f_21 = 40f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 1f;
	uParam0->f_10[2 /*57*/].f_53 = 2;
	uParam0->f_10[2 /*57*/].f_23 = 0.5f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0f;
	uParam0->f_10[2 /*57*/].f_30 = 0;
	uParam0->f_10[2 /*57*/].f_31 = 0;
	uParam0->f_10[2 /*57*/].f_33 = 0.6f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 1;
	uParam0->f_10[2 /*57*/].f_37 = 13;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0.8f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_54 = 1;
	uParam0->f_10[4 /*57*/].f_2 = 0;
	uParam0->f_10[4 /*57*/].f_3 = -1;
	uParam0->f_10[4 /*57*/].f_4 = 0;
	uParam0->f_10[4 /*57*/].f_5 = 0;
	uParam0->f_10[4 /*57*/].f_6 = { 0.0646f, 1.3472f, 1.4595f };
	uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 1.45f };
	uParam0->f_10[4 /*57*/].f_12 = 0f;
	uParam0->f_10[4 /*57*/].f_16 = 0f;
	uParam0->f_10[4 /*57*/].f_17 = 0;
	uParam0->f_10[4 /*57*/].f_9 = { 0.3564f, 0.2439f, 1.4688f };
	uParam0->f_10[4 /*57*/].f_18 = 1;
	uParam0->f_10[4 /*57*/].f_19 = 1;
	uParam0->f_10[4 /*57*/].f_20 = 1;
	uParam0->f_10[4 /*57*/].f_21 = 40f;
	uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[4 /*57*/].f_27 = 0;
	uParam0->f_10[4 /*57*/].f_50 = 0;
	uParam0->f_10[4 /*57*/].f_51 = 0f;
	uParam0->f_10[4 /*57*/].f_52 = 0f;
	uParam0->f_10[4 /*57*/].f_22 = 1f;
	uParam0->f_10[4 /*57*/].f_53 = 2;
	uParam0->f_10[4 /*57*/].f_23 = 0.5f;
	uParam0->f_10[4 /*57*/].f_28 = 1;
	uParam0->f_10[4 /*57*/].f_29 = 1f;
	uParam0->f_10[4 /*57*/].f_32 = 0f;
	uParam0->f_10[4 /*57*/].f_30 = 1;
	uParam0->f_10[4 /*57*/].f_31 = 0;
	uParam0->f_10[4 /*57*/].f_33 = 0.3f;
	uParam0->f_10[4 /*57*/].f_34 = 0;
	uParam0->f_10[4 /*57*/].f_35 = 0f;
	uParam0->f_10[4 /*57*/].f_36 = 0;
	uParam0->f_10[4 /*57*/].f_37 = 0;
	uParam0->f_10[4 /*57*/].f_39 = 0f;
	uParam0->f_10[4 /*57*/].f_40 = 0f;
	uParam0->f_10[4 /*57*/].f_41 = 0;
	uParam0->f_10[4 /*57*/].f_42 = 0;
	uParam0->f_10[4 /*57*/].f_43 = 0;
	uParam0->f_10[4 /*57*/].f_38 = 0f;
	uParam0->f_10[4 /*57*/].f_45 = 0;
	uParam0->f_10[4 /*57*/].f_46 = 0;
	uParam0->f_10[4 /*57*/].f_47 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[5 /*57*/].f_2 = 0;
	uParam0->f_10[5 /*57*/].f_3 = -1;
	uParam0->f_10[5 /*57*/].f_4 = 0;
	uParam0->f_10[5 /*57*/].f_5 = 600;
	uParam0->f_10[5 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0.4f };
	uParam0->f_10[5 /*57*/].f_12 = 0f;
	uParam0->f_10[5 /*57*/].f_16 = 0f;
	uParam0->f_10[5 /*57*/].f_17 = 0;
	uParam0->f_10[5 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[5 /*57*/].f_18 = 1;
	uParam0->f_10[5 /*57*/].f_19 = 1;
	uParam0->f_10[5 /*57*/].f_20 = 1;
	uParam0->f_10[5 /*57*/].f_21 = 40f;
	uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_27 = 0;
	uParam0->f_10[5 /*57*/].f_50 = 0;
	uParam0->f_10[5 /*57*/].f_51 = 0f;
	uParam0->f_10[5 /*57*/].f_52 = 0f;
	uParam0->f_10[5 /*57*/].f_22 = 1f;
	uParam0->f_10[5 /*57*/].f_53 = 2;
	uParam0->f_10[5 /*57*/].f_23 = 0.5f;
	uParam0->f_10[5 /*57*/].f_28 = 0;
	uParam0->f_10[5 /*57*/].f_29 = 0f;
	uParam0->f_10[5 /*57*/].f_32 = 0f;
	uParam0->f_10[5 /*57*/].f_30 = 1;
	uParam0->f_10[5 /*57*/].f_31 = 0;
	uParam0->f_10[5 /*57*/].f_33 = 0.3f;
	uParam0->f_10[5 /*57*/].f_34 = 0;
	uParam0->f_10[5 /*57*/].f_35 = 0f;
	uParam0->f_10[5 /*57*/].f_36 = 0;
	uParam0->f_10[5 /*57*/].f_37 = 0;
	uParam0->f_10[5 /*57*/].f_39 = 0f;
	uParam0->f_10[5 /*57*/].f_40 = 0f;
	uParam0->f_10[5 /*57*/].f_41 = 0;
	uParam0->f_10[5 /*57*/].f_42 = 0;
	uParam0->f_10[5 /*57*/].f_43 = 0;
	uParam0->f_10[5 /*57*/].f_38 = 0f;
	uParam0->f_10[5 /*57*/].f_45 = 0;
	uParam0->f_10[5 /*57*/].f_46 = 0;
	uParam0->f_10[5 /*57*/].f_47 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[6 /*57*/].f_2 = 0;
	uParam0->f_10[6 /*57*/].f_3 = -1;
	uParam0->f_10[6 /*57*/].f_4 = 0;
	uParam0->f_10[6 /*57*/].f_5 = 400;
	uParam0->f_10[6 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0.4f };
	uParam0->f_10[6 /*57*/].f_12 = 0f;
	uParam0->f_10[6 /*57*/].f_16 = 0f;
	uParam0->f_10[6 /*57*/].f_17 = 0;
	uParam0->f_10[6 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[6 /*57*/].f_18 = 1;
	uParam0->f_10[6 /*57*/].f_19 = 1;
	uParam0->f_10[6 /*57*/].f_20 = 1;
	uParam0->f_10[6 /*57*/].f_21 = 40f;
	uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[6 /*57*/].f_27 = 0;
	uParam0->f_10[6 /*57*/].f_50 = 0;
	uParam0->f_10[6 /*57*/].f_51 = 0f;
	uParam0->f_10[6 /*57*/].f_52 = 0f;
	uParam0->f_10[6 /*57*/].f_22 = 0f;
	uParam0->f_10[6 /*57*/].f_53 = 2;
	uParam0->f_10[6 /*57*/].f_23 = 0.5f;
	uParam0->f_10[6 /*57*/].f_28 = 0;
	uParam0->f_10[6 /*57*/].f_29 = 0f;
	uParam0->f_10[6 /*57*/].f_32 = 0f;
	uParam0->f_10[6 /*57*/].f_30 = 1;
	uParam0->f_10[6 /*57*/].f_31 = 0;
	uParam0->f_10[6 /*57*/].f_33 = 1f;
	uParam0->f_10[6 /*57*/].f_34 = 0;
	uParam0->f_10[6 /*57*/].f_35 = 0f;
	uParam0->f_10[6 /*57*/].f_36 = 0;
	uParam0->f_10[6 /*57*/].f_37 = 0;
	uParam0->f_10[6 /*57*/].f_39 = 0f;
	uParam0->f_10[6 /*57*/].f_40 = 0f;
	uParam0->f_10[6 /*57*/].f_41 = 0;
	uParam0->f_10[6 /*57*/].f_42 = 0;
	uParam0->f_10[6 /*57*/].f_43 = 0;
	uParam0->f_10[6 /*57*/].f_38 = 0f;
	uParam0->f_10[6 /*57*/].f_45 = 0;
	uParam0->f_10[6 /*57*/].f_46 = 0;
	uParam0->f_10[6 /*57*/].f_47 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
	uParam0->f_1217 = 7;
	uParam0->f_1218 = 3;
	uParam0->f_1233 = 0.08f;
	uParam0->f_1234 = 0.45f;
	uParam0->f_1235 = 0;
	uParam0->f_1236 = 0;
	uParam0->f_1237 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_1219 = 0;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_HeliMichaelToFranklin.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_HeliMichaelToFranklin.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = uParam1;
	uParam0->f_7[1] = iParam2;
}

void func_524(var uParam0, var uParam1, int iParam2)//Position - 0x604D1
{
	uParam0->f_10[0 /*57*/].f_2 = 0;
	uParam0->f_10[0 /*57*/].f_3 = -1;
	uParam0->f_10[0 /*57*/].f_4 = 1;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { -425.2161f, -1215.404f, 195.0455f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0.2f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { -14.1385f, -8.8904f, -171.0823f };
	uParam0->f_10[0 /*57*/].f_18 = 0;
	uParam0->f_10[0 /*57*/].f_19 = 0;
	uParam0->f_10[0 /*57*/].f_20 = 0;
	uParam0->f_10[0 /*57*/].f_21 = 64.7053f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0f;
	uParam0->f_10[0 /*57*/].f_53 = 0;
	uParam0->f_10[0 /*57*/].f_23 = 0f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 0;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 0.01f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 0;
	uParam0->f_10[0 /*57*/].f_37 = 0;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 0;
	uParam0->f_10[1 /*57*/].f_3 = -1;
	uParam0->f_10[1 /*57*/].f_4 = 1;
	uParam0->f_10[1 /*57*/].f_5 = 100;
	uParam0->f_10[1 /*57*/].f_6 = { 0.1f, 0.1f, 0.1f };
	uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0.2f };
	uParam0->f_10[1 /*57*/].f_12 = 0f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 45f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 0f;
	uParam0->f_10[1 /*57*/].f_53 = 0;
	uParam0->f_10[1 /*57*/].f_23 = 0f;
	uParam0->f_10[1 /*57*/].f_28 = 0;
	uParam0->f_10[1 /*57*/].f_29 = 0f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 0;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 0.5f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 1;
	uParam0->f_10[1 /*57*/].f_37 = 14;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0.5f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 8;
	uParam0->f_10[2 /*57*/].f_3 = -1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 600;
	uParam0->f_10[2 /*57*/].f_6 = { -311.0187f, -440.27f, 187.0327f };
	uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0.2f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { -2.8659f, 0.2449f, 118.1404f };
	uParam0->f_10[2 /*57*/].f_18 = 0;
	uParam0->f_10[2 /*57*/].f_19 = 0;
	uParam0->f_10[2 /*57*/].f_20 = 0;
	uParam0->f_10[2 /*57*/].f_21 = 64.7053f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, -10f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 1f;
	uParam0->f_10[2 /*57*/].f_53 = 0;
	uParam0->f_10[2 /*57*/].f_23 = 0f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0f;
	uParam0->f_10[2 /*57*/].f_30 = 0;
	uParam0->f_10[2 /*57*/].f_31 = 1;
	uParam0->f_10[2 /*57*/].f_33 = 0.3f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 1;
	uParam0->f_10[2 /*57*/].f_37 = 13;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0.5f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_54 = 1;
	uParam0->f_10[4 /*57*/].f_2 = 0;
	uParam0->f_10[4 /*57*/].f_3 = -1;
	uParam0->f_10[4 /*57*/].f_4 = 0;
	uParam0->f_10[4 /*57*/].f_5 = 0;
	uParam0->f_10[4 /*57*/].f_6 = { 0.0646f, 1.3472f, 1.4595f };
	uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0.4f };
	uParam0->f_10[4 /*57*/].f_12 = 0f;
	uParam0->f_10[4 /*57*/].f_16 = 0f;
	uParam0->f_10[4 /*57*/].f_17 = 0;
	uParam0->f_10[4 /*57*/].f_9 = { 0.3564f, 0.2439f, 1.4688f };
	uParam0->f_10[4 /*57*/].f_18 = 1;
	uParam0->f_10[4 /*57*/].f_19 = 1;
	uParam0->f_10[4 /*57*/].f_20 = 1;
	uParam0->f_10[4 /*57*/].f_21 = 40f;
	uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[4 /*57*/].f_27 = 0;
	uParam0->f_10[4 /*57*/].f_50 = 0;
	uParam0->f_10[4 /*57*/].f_51 = 0f;
	uParam0->f_10[4 /*57*/].f_52 = 0f;
	uParam0->f_10[4 /*57*/].f_22 = 1f;
	uParam0->f_10[4 /*57*/].f_53 = 2;
	uParam0->f_10[4 /*57*/].f_23 = 0.5f;
	uParam0->f_10[4 /*57*/].f_28 = 1;
	uParam0->f_10[4 /*57*/].f_29 = 1f;
	uParam0->f_10[4 /*57*/].f_32 = 0f;
	uParam0->f_10[4 /*57*/].f_30 = 1;
	uParam0->f_10[4 /*57*/].f_31 = 0;
	uParam0->f_10[4 /*57*/].f_33 = 0.3f;
	uParam0->f_10[4 /*57*/].f_34 = 0;
	uParam0->f_10[4 /*57*/].f_35 = 0f;
	uParam0->f_10[4 /*57*/].f_36 = 0;
	uParam0->f_10[4 /*57*/].f_37 = 0;
	uParam0->f_10[4 /*57*/].f_39 = 0f;
	uParam0->f_10[4 /*57*/].f_40 = 0f;
	uParam0->f_10[4 /*57*/].f_41 = 0;
	uParam0->f_10[4 /*57*/].f_42 = 0;
	uParam0->f_10[4 /*57*/].f_43 = 0;
	uParam0->f_10[4 /*57*/].f_38 = 0f;
	uParam0->f_10[4 /*57*/].f_45 = 0;
	uParam0->f_10[4 /*57*/].f_46 = 0;
	uParam0->f_10[4 /*57*/].f_47 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[5 /*57*/].f_2 = 0;
	uParam0->f_10[5 /*57*/].f_3 = -1;
	uParam0->f_10[5 /*57*/].f_4 = 0;
	uParam0->f_10[5 /*57*/].f_5 = 600;
	uParam0->f_10[5 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0.4f };
	uParam0->f_10[5 /*57*/].f_12 = 0f;
	uParam0->f_10[5 /*57*/].f_16 = 0f;
	uParam0->f_10[5 /*57*/].f_17 = 0;
	uParam0->f_10[5 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[5 /*57*/].f_18 = 1;
	uParam0->f_10[5 /*57*/].f_19 = 1;
	uParam0->f_10[5 /*57*/].f_20 = 1;
	uParam0->f_10[5 /*57*/].f_21 = 40f;
	uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_27 = 0;
	uParam0->f_10[5 /*57*/].f_50 = 0;
	uParam0->f_10[5 /*57*/].f_51 = 0f;
	uParam0->f_10[5 /*57*/].f_52 = 0f;
	uParam0->f_10[5 /*57*/].f_22 = 1f;
	uParam0->f_10[5 /*57*/].f_53 = 2;
	uParam0->f_10[5 /*57*/].f_23 = 0.5f;
	uParam0->f_10[5 /*57*/].f_28 = 0;
	uParam0->f_10[5 /*57*/].f_29 = 0f;
	uParam0->f_10[5 /*57*/].f_32 = 0f;
	uParam0->f_10[5 /*57*/].f_30 = 1;
	uParam0->f_10[5 /*57*/].f_31 = 0;
	uParam0->f_10[5 /*57*/].f_33 = 0.3f;
	uParam0->f_10[5 /*57*/].f_34 = 0;
	uParam0->f_10[5 /*57*/].f_35 = 0f;
	uParam0->f_10[5 /*57*/].f_36 = 0;
	uParam0->f_10[5 /*57*/].f_37 = 0;
	uParam0->f_10[5 /*57*/].f_39 = 0f;
	uParam0->f_10[5 /*57*/].f_40 = 0f;
	uParam0->f_10[5 /*57*/].f_41 = 0;
	uParam0->f_10[5 /*57*/].f_42 = 0;
	uParam0->f_10[5 /*57*/].f_43 = 0;
	uParam0->f_10[5 /*57*/].f_38 = 0f;
	uParam0->f_10[5 /*57*/].f_45 = 0;
	uParam0->f_10[5 /*57*/].f_46 = 0;
	uParam0->f_10[5 /*57*/].f_47 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[6 /*57*/].f_2 = 0;
	uParam0->f_10[6 /*57*/].f_3 = -1;
	uParam0->f_10[6 /*57*/].f_4 = 0;
	uParam0->f_10[6 /*57*/].f_5 = 400;
	uParam0->f_10[6 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[6 /*57*/].f_12 = 0f;
	uParam0->f_10[6 /*57*/].f_16 = 0f;
	uParam0->f_10[6 /*57*/].f_17 = 0;
	uParam0->f_10[6 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[6 /*57*/].f_18 = 1;
	uParam0->f_10[6 /*57*/].f_19 = 1;
	uParam0->f_10[6 /*57*/].f_20 = 1;
	uParam0->f_10[6 /*57*/].f_21 = 40f;
	uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[6 /*57*/].f_27 = 0;
	uParam0->f_10[6 /*57*/].f_50 = 0;
	uParam0->f_10[6 /*57*/].f_51 = 0f;
	uParam0->f_10[6 /*57*/].f_52 = 0f;
	uParam0->f_10[6 /*57*/].f_22 = 0f;
	uParam0->f_10[6 /*57*/].f_53 = 2;
	uParam0->f_10[6 /*57*/].f_23 = 0.5f;
	uParam0->f_10[6 /*57*/].f_28 = 0;
	uParam0->f_10[6 /*57*/].f_29 = 0f;
	uParam0->f_10[6 /*57*/].f_32 = 0f;
	uParam0->f_10[6 /*57*/].f_30 = 1;
	uParam0->f_10[6 /*57*/].f_31 = 0;
	uParam0->f_10[6 /*57*/].f_33 = 1f;
	uParam0->f_10[6 /*57*/].f_34 = 0;
	uParam0->f_10[6 /*57*/].f_35 = 0f;
	uParam0->f_10[6 /*57*/].f_36 = 0;
	uParam0->f_10[6 /*57*/].f_37 = 0;
	uParam0->f_10[6 /*57*/].f_39 = 0f;
	uParam0->f_10[6 /*57*/].f_40 = 0f;
	uParam0->f_10[6 /*57*/].f_41 = 0;
	uParam0->f_10[6 /*57*/].f_42 = 0;
	uParam0->f_10[6 /*57*/].f_43 = 0;
	uParam0->f_10[6 /*57*/].f_38 = 0f;
	uParam0->f_10[6 /*57*/].f_45 = 0;
	uParam0->f_10[6 /*57*/].f_46 = 0;
	uParam0->f_10[6 /*57*/].f_47 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
	uParam0->f_1217 = 7;
	uParam0->f_1218 = 3;
	uParam0->f_1233 = 0.06f;
	uParam0->f_1234 = 0.38f;
	uParam0->f_1235 = 0;
	uParam0->f_1236 = 0;
	uParam0->f_1237 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_1219 = 0;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_HeliTrevorToFranklin.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_HeliTrevorToFranklin.xml";
	*uParam0 = 1;
	uParam0->f_4[0] = uParam1;
	uParam0->f_7[1] = iParam2;
}

void func_525(var uParam0, int iParam1, int iParam2)//Position - 0x610CB
{
	uParam0->f_10[0 /*57*/].f_2 = 0;
	uParam0->f_10[0 /*57*/].f_3 = -1;
	uParam0->f_10[0 /*57*/].f_4 = 0;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { -1.9125f, 1.3081f, -0.1774f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { 0f, -1f, 0.6f };
	uParam0->f_10[0 /*57*/].f_18 = 1;
	uParam0->f_10[0 /*57*/].f_19 = 1;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 40f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0f;
	uParam0->f_10[0 /*57*/].f_53 = 0;
	uParam0->f_10[0 /*57*/].f_23 = 0.5f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 0;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 0f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 1;
	uParam0->f_10[0 /*57*/].f_37 = 9;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 0;
	uParam0->f_10[1 /*57*/].f_3 = -1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 400;
	uParam0->f_10[1 /*57*/].f_6 = { -1.9125f, 1.3081f, -0.3774f };
	uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_12 = 0f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { 0f, -1f, 0.4f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 40f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 0f;
	uParam0->f_10[1 /*57*/].f_53 = 2;
	uParam0->f_10[1 /*57*/].f_23 = 0.5f;
	uParam0->f_10[1 /*57*/].f_28 = 0;
	uParam0->f_10[1 /*57*/].f_29 = 0f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 0;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 1f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 0;
	uParam0->f_10[1 /*57*/].f_37 = 0;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0.3f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 0;
	uParam0->f_10[2 /*57*/].f_3 = -1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 600;
	uParam0->f_10[2 /*57*/].f_6 = { -1.9125f, 1.3081f, -2.1774f };
	uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { 0f, -1f, -1.4f };
	uParam0->f_10[2 /*57*/].f_18 = 1;
	uParam0->f_10[2 /*57*/].f_19 = 1;
	uParam0->f_10[2 /*57*/].f_20 = 1;
	uParam0->f_10[2 /*57*/].f_21 = 40f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 1f;
	uParam0->f_10[2 /*57*/].f_53 = 2;
	uParam0->f_10[2 /*57*/].f_23 = 0.5f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0f;
	uParam0->f_10[2 /*57*/].f_30 = 0;
	uParam0->f_10[2 /*57*/].f_31 = 0;
	uParam0->f_10[2 /*57*/].f_33 = 0.6f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 1;
	uParam0->f_10[2 /*57*/].f_37 = 13;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0.8f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_54 = 1;
	uParam0->f_10[4 /*57*/].f_2 = 0;
	uParam0->f_10[4 /*57*/].f_3 = -1;
	uParam0->f_10[4 /*57*/].f_4 = 0;
	uParam0->f_10[4 /*57*/].f_5 = 0;
	uParam0->f_10[4 /*57*/].f_6 = { 0.0646f, 1.3472f, 1.4595f };
	uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 1.45f };
	uParam0->f_10[4 /*57*/].f_12 = 0f;
	uParam0->f_10[4 /*57*/].f_16 = 0f;
	uParam0->f_10[4 /*57*/].f_17 = 0;
	uParam0->f_10[4 /*57*/].f_9 = { 0.3564f, 0.2439f, 1.4688f };
	uParam0->f_10[4 /*57*/].f_18 = 1;
	uParam0->f_10[4 /*57*/].f_19 = 1;
	uParam0->f_10[4 /*57*/].f_20 = 1;
	uParam0->f_10[4 /*57*/].f_21 = 40f;
	uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[4 /*57*/].f_27 = 0;
	uParam0->f_10[4 /*57*/].f_50 = 0;
	uParam0->f_10[4 /*57*/].f_51 = 0f;
	uParam0->f_10[4 /*57*/].f_52 = 0f;
	uParam0->f_10[4 /*57*/].f_22 = 1f;
	uParam0->f_10[4 /*57*/].f_53 = 2;
	uParam0->f_10[4 /*57*/].f_23 = 0.5f;
	uParam0->f_10[4 /*57*/].f_28 = 1;
	uParam0->f_10[4 /*57*/].f_29 = 1f;
	uParam0->f_10[4 /*57*/].f_32 = 0f;
	uParam0->f_10[4 /*57*/].f_30 = 1;
	uParam0->f_10[4 /*57*/].f_31 = 0;
	uParam0->f_10[4 /*57*/].f_33 = 0.3f;
	uParam0->f_10[4 /*57*/].f_34 = 0;
	uParam0->f_10[4 /*57*/].f_35 = 0f;
	uParam0->f_10[4 /*57*/].f_36 = 0;
	uParam0->f_10[4 /*57*/].f_37 = 0;
	uParam0->f_10[4 /*57*/].f_39 = 0f;
	uParam0->f_10[4 /*57*/].f_40 = 0f;
	uParam0->f_10[4 /*57*/].f_41 = 0;
	uParam0->f_10[4 /*57*/].f_42 = 0;
	uParam0->f_10[4 /*57*/].f_43 = 0;
	uParam0->f_10[4 /*57*/].f_38 = 0f;
	uParam0->f_10[4 /*57*/].f_45 = 0;
	uParam0->f_10[4 /*57*/].f_46 = 0;
	uParam0->f_10[4 /*57*/].f_47 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[5 /*57*/].f_2 = 0;
	uParam0->f_10[5 /*57*/].f_3 = -1;
	uParam0->f_10[5 /*57*/].f_4 = 0;
	uParam0->f_10[5 /*57*/].f_5 = 600;
	uParam0->f_10[5 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0.4f };
	uParam0->f_10[5 /*57*/].f_12 = 0f;
	uParam0->f_10[5 /*57*/].f_16 = 0f;
	uParam0->f_10[5 /*57*/].f_17 = 0;
	uParam0->f_10[5 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[5 /*57*/].f_18 = 1;
	uParam0->f_10[5 /*57*/].f_19 = 1;
	uParam0->f_10[5 /*57*/].f_20 = 1;
	uParam0->f_10[5 /*57*/].f_21 = 40f;
	uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_27 = 0;
	uParam0->f_10[5 /*57*/].f_50 = 0;
	uParam0->f_10[5 /*57*/].f_51 = 0f;
	uParam0->f_10[5 /*57*/].f_52 = 0f;
	uParam0->f_10[5 /*57*/].f_22 = 1f;
	uParam0->f_10[5 /*57*/].f_53 = 2;
	uParam0->f_10[5 /*57*/].f_23 = 0.5f;
	uParam0->f_10[5 /*57*/].f_28 = 0;
	uParam0->f_10[5 /*57*/].f_29 = 0f;
	uParam0->f_10[5 /*57*/].f_32 = 0f;
	uParam0->f_10[5 /*57*/].f_30 = 1;
	uParam0->f_10[5 /*57*/].f_31 = 0;
	uParam0->f_10[5 /*57*/].f_33 = 0.3f;
	uParam0->f_10[5 /*57*/].f_34 = 0;
	uParam0->f_10[5 /*57*/].f_35 = 0f;
	uParam0->f_10[5 /*57*/].f_36 = 0;
	uParam0->f_10[5 /*57*/].f_37 = 0;
	uParam0->f_10[5 /*57*/].f_39 = 0f;
	uParam0->f_10[5 /*57*/].f_40 = 0f;
	uParam0->f_10[5 /*57*/].f_41 = 0;
	uParam0->f_10[5 /*57*/].f_42 = 0;
	uParam0->f_10[5 /*57*/].f_43 = 0;
	uParam0->f_10[5 /*57*/].f_38 = 0f;
	uParam0->f_10[5 /*57*/].f_45 = 0;
	uParam0->f_10[5 /*57*/].f_46 = 0;
	uParam0->f_10[5 /*57*/].f_47 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[6 /*57*/].f_2 = 0;
	uParam0->f_10[6 /*57*/].f_3 = -1;
	uParam0->f_10[6 /*57*/].f_4 = 0;
	uParam0->f_10[6 /*57*/].f_5 = 400;
	uParam0->f_10[6 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0.4f };
	uParam0->f_10[6 /*57*/].f_12 = 0f;
	uParam0->f_10[6 /*57*/].f_16 = 0f;
	uParam0->f_10[6 /*57*/].f_17 = 0;
	uParam0->f_10[6 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[6 /*57*/].f_18 = 1;
	uParam0->f_10[6 /*57*/].f_19 = 1;
	uParam0->f_10[6 /*57*/].f_20 = 1;
	uParam0->f_10[6 /*57*/].f_21 = 40f;
	uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[6 /*57*/].f_27 = 0;
	uParam0->f_10[6 /*57*/].f_50 = 0;
	uParam0->f_10[6 /*57*/].f_51 = 0f;
	uParam0->f_10[6 /*57*/].f_52 = 0f;
	uParam0->f_10[6 /*57*/].f_22 = 0f;
	uParam0->f_10[6 /*57*/].f_53 = 2;
	uParam0->f_10[6 /*57*/].f_23 = 0.5f;
	uParam0->f_10[6 /*57*/].f_28 = 0;
	uParam0->f_10[6 /*57*/].f_29 = 0f;
	uParam0->f_10[6 /*57*/].f_32 = 0f;
	uParam0->f_10[6 /*57*/].f_30 = 1;
	uParam0->f_10[6 /*57*/].f_31 = 0;
	uParam0->f_10[6 /*57*/].f_33 = 1f;
	uParam0->f_10[6 /*57*/].f_34 = 0;
	uParam0->f_10[6 /*57*/].f_35 = 0f;
	uParam0->f_10[6 /*57*/].f_36 = 0;
	uParam0->f_10[6 /*57*/].f_37 = 0;
	uParam0->f_10[6 /*57*/].f_39 = 0f;
	uParam0->f_10[6 /*57*/].f_40 = 0f;
	uParam0->f_10[6 /*57*/].f_41 = 0;
	uParam0->f_10[6 /*57*/].f_42 = 0;
	uParam0->f_10[6 /*57*/].f_43 = 0;
	uParam0->f_10[6 /*57*/].f_38 = 0f;
	uParam0->f_10[6 /*57*/].f_45 = 0;
	uParam0->f_10[6 /*57*/].f_46 = 0;
	uParam0->f_10[6 /*57*/].f_47 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
	uParam0->f_1217 = 7;
	uParam0->f_1218 = 3;
	uParam0->f_1233 = 0.07f;
	uParam0->f_1234 = 0.45f;
	uParam0->f_1235 = 0;
	uParam0->f_1236 = 0;
	uParam0->f_1237 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_1219 = 0;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_HeliMichaelToFranklin.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_HeliMichaelToFranklin.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = iParam2;
}

void func_526(var uParam0, int iParam1, int iParam2)//Position - 0x61CB1
{
	uParam0->f_10[0 /*57*/].f_2 = 0;
	uParam0->f_10[0 /*57*/].f_3 = -1;
	uParam0->f_10[0 /*57*/].f_4 = 0;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { -0.9162f, 1.8503f, 0.4801f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { -0.9487f, -0.0063f, 0.3628f };
	uParam0->f_10[0 /*57*/].f_18 = 1;
	uParam0->f_10[0 /*57*/].f_19 = 1;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 45f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0f;
	uParam0->f_10[0 /*57*/].f_53 = 0;
	uParam0->f_10[0 /*57*/].f_23 = 0.5f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 0;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 0f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 0;
	uParam0->f_10[0 /*57*/].f_37 = 0;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 0;
	uParam0->f_10[1 /*57*/].f_3 = -1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 300;
	uParam0->f_10[1 /*57*/].f_6 = { -0.9664f, 2.2593f, 0.5063f };
	uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_12 = 0f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { -1.0457f, 0.0132f, 0.3572f };
	uParam0->f_10[1 /*57*/].f_18 = 1;
	uParam0->f_10[1 /*57*/].f_19 = 1;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 45f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 0f;
	uParam0->f_10[1 /*57*/].f_53 = 2;
	uParam0->f_10[1 /*57*/].f_23 = 0.5f;
	uParam0->f_10[1 /*57*/].f_28 = 0;
	uParam0->f_10[1 /*57*/].f_29 = 0f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 0;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 1f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 1;
	uParam0->f_10[1 /*57*/].f_37 = 9;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0.3f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[2 /*57*/].f_2 = 0;
	uParam0->f_10[2 /*57*/].f_3 = -1;
	uParam0->f_10[2 /*57*/].f_4 = 0;
	uParam0->f_10[2 /*57*/].f_5 = 600;
	uParam0->f_10[2 /*57*/].f_6 = { -1.7246f, 3.4542f, -1.5665f };
	uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_12 = 0f;
	uParam0->f_10[2 /*57*/].f_16 = 0f;
	uParam0->f_10[2 /*57*/].f_17 = 0;
	uParam0->f_10[2 /*57*/].f_9 = { -1.7226f, 0.0276f, -1.6267f };
	uParam0->f_10[2 /*57*/].f_18 = 1;
	uParam0->f_10[2 /*57*/].f_19 = 1;
	uParam0->f_10[2 /*57*/].f_20 = 1;
	uParam0->f_10[2 /*57*/].f_21 = 45f;
	uParam0->f_10[2 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[2 /*57*/].f_27 = 0;
	uParam0->f_10[2 /*57*/].f_50 = 0;
	uParam0->f_10[2 /*57*/].f_51 = 0f;
	uParam0->f_10[2 /*57*/].f_52 = 0f;
	uParam0->f_10[2 /*57*/].f_22 = 1f;
	uParam0->f_10[2 /*57*/].f_53 = 2;
	uParam0->f_10[2 /*57*/].f_23 = 0.5f;
	uParam0->f_10[2 /*57*/].f_28 = 0;
	uParam0->f_10[2 /*57*/].f_29 = 0f;
	uParam0->f_10[2 /*57*/].f_32 = 0f;
	uParam0->f_10[2 /*57*/].f_30 = 0;
	uParam0->f_10[2 /*57*/].f_31 = 0;
	uParam0->f_10[2 /*57*/].f_33 = 0.6f;
	uParam0->f_10[2 /*57*/].f_34 = 0;
	uParam0->f_10[2 /*57*/].f_35 = 0f;
	uParam0->f_10[2 /*57*/].f_36 = 1;
	uParam0->f_10[2 /*57*/].f_37 = 13;
	uParam0->f_10[2 /*57*/].f_39 = 0f;
	uParam0->f_10[2 /*57*/].f_40 = 0f;
	uParam0->f_10[2 /*57*/].f_41 = 0;
	uParam0->f_10[2 /*57*/].f_42 = 0;
	uParam0->f_10[2 /*57*/].f_43 = 0;
	uParam0->f_10[2 /*57*/].f_38 = 0.8f;
	uParam0->f_10[2 /*57*/].f_45 = 0;
	uParam0->f_10[2 /*57*/].f_46 = 0;
	uParam0->f_10[2 /*57*/].f_47 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[3 /*57*/].f_54 = 1;
	uParam0->f_10[4 /*57*/].f_2 = 0;
	uParam0->f_10[4 /*57*/].f_3 = -1;
	uParam0->f_10[4 /*57*/].f_4 = 0;
	uParam0->f_10[4 /*57*/].f_5 = 0;
	uParam0->f_10[4 /*57*/].f_6 = { 0.0646f, 1.3472f, 1.4595f };
	uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 1.45f };
	uParam0->f_10[4 /*57*/].f_12 = 0f;
	uParam0->f_10[4 /*57*/].f_16 = 0f;
	uParam0->f_10[4 /*57*/].f_17 = 0;
	uParam0->f_10[4 /*57*/].f_9 = { 0.3564f, 0.2439f, 1.4688f };
	uParam0->f_10[4 /*57*/].f_18 = 1;
	uParam0->f_10[4 /*57*/].f_19 = 1;
	uParam0->f_10[4 /*57*/].f_20 = 1;
	uParam0->f_10[4 /*57*/].f_21 = 40f;
	uParam0->f_10[4 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[4 /*57*/].f_27 = 0;
	uParam0->f_10[4 /*57*/].f_50 = 0;
	uParam0->f_10[4 /*57*/].f_51 = 0f;
	uParam0->f_10[4 /*57*/].f_52 = 0f;
	uParam0->f_10[4 /*57*/].f_22 = 1f;
	uParam0->f_10[4 /*57*/].f_53 = 2;
	uParam0->f_10[4 /*57*/].f_23 = 0.5f;
	uParam0->f_10[4 /*57*/].f_28 = 1;
	uParam0->f_10[4 /*57*/].f_29 = 1f;
	uParam0->f_10[4 /*57*/].f_32 = 0f;
	uParam0->f_10[4 /*57*/].f_30 = 1;
	uParam0->f_10[4 /*57*/].f_31 = 0;
	uParam0->f_10[4 /*57*/].f_33 = 0.3f;
	uParam0->f_10[4 /*57*/].f_34 = 0;
	uParam0->f_10[4 /*57*/].f_35 = 0f;
	uParam0->f_10[4 /*57*/].f_36 = 0;
	uParam0->f_10[4 /*57*/].f_37 = 0;
	uParam0->f_10[4 /*57*/].f_39 = 0f;
	uParam0->f_10[4 /*57*/].f_40 = 0f;
	uParam0->f_10[4 /*57*/].f_41 = 0;
	uParam0->f_10[4 /*57*/].f_42 = 0;
	uParam0->f_10[4 /*57*/].f_43 = 0;
	uParam0->f_10[4 /*57*/].f_38 = 0f;
	uParam0->f_10[4 /*57*/].f_45 = 0;
	uParam0->f_10[4 /*57*/].f_46 = 0;
	uParam0->f_10[4 /*57*/].f_47 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[5 /*57*/].f_2 = 0;
	uParam0->f_10[5 /*57*/].f_3 = -1;
	uParam0->f_10[5 /*57*/].f_4 = 0;
	uParam0->f_10[5 /*57*/].f_5 = 600;
	uParam0->f_10[5 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0.4f };
	uParam0->f_10[5 /*57*/].f_12 = 0f;
	uParam0->f_10[5 /*57*/].f_16 = 0f;
	uParam0->f_10[5 /*57*/].f_17 = 0;
	uParam0->f_10[5 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[5 /*57*/].f_18 = 1;
	uParam0->f_10[5 /*57*/].f_19 = 1;
	uParam0->f_10[5 /*57*/].f_20 = 1;
	uParam0->f_10[5 /*57*/].f_21 = 40f;
	uParam0->f_10[5 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[5 /*57*/].f_27 = 0;
	uParam0->f_10[5 /*57*/].f_50 = 0;
	uParam0->f_10[5 /*57*/].f_51 = 0f;
	uParam0->f_10[5 /*57*/].f_52 = 0f;
	uParam0->f_10[5 /*57*/].f_22 = 1f;
	uParam0->f_10[5 /*57*/].f_53 = 2;
	uParam0->f_10[5 /*57*/].f_23 = 0.5f;
	uParam0->f_10[5 /*57*/].f_28 = 0;
	uParam0->f_10[5 /*57*/].f_29 = 0f;
	uParam0->f_10[5 /*57*/].f_32 = 0f;
	uParam0->f_10[5 /*57*/].f_30 = 1;
	uParam0->f_10[5 /*57*/].f_31 = 0;
	uParam0->f_10[5 /*57*/].f_33 = 0.3f;
	uParam0->f_10[5 /*57*/].f_34 = 0;
	uParam0->f_10[5 /*57*/].f_35 = 0f;
	uParam0->f_10[5 /*57*/].f_36 = 0;
	uParam0->f_10[5 /*57*/].f_37 = 0;
	uParam0->f_10[5 /*57*/].f_39 = 0f;
	uParam0->f_10[5 /*57*/].f_40 = 0f;
	uParam0->f_10[5 /*57*/].f_41 = 0;
	uParam0->f_10[5 /*57*/].f_42 = 0;
	uParam0->f_10[5 /*57*/].f_43 = 0;
	uParam0->f_10[5 /*57*/].f_38 = 0f;
	uParam0->f_10[5 /*57*/].f_45 = 0;
	uParam0->f_10[5 /*57*/].f_46 = 0;
	uParam0->f_10[5 /*57*/].f_47 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[6 /*57*/].f_2 = 0;
	uParam0->f_10[6 /*57*/].f_3 = -1;
	uParam0->f_10[6 /*57*/].f_4 = 0;
	uParam0->f_10[6 /*57*/].f_5 = 400;
	uParam0->f_10[6 /*57*/].f_6 = { -0.0083f, 1.3912f, 0.2997f };
	uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0.4f };
	uParam0->f_10[6 /*57*/].f_12 = 0f;
	uParam0->f_10[6 /*57*/].f_16 = 0f;
	uParam0->f_10[6 /*57*/].f_17 = 0;
	uParam0->f_10[6 /*57*/].f_9 = { 0.4002f, 0.1876f, 0.409f };
	uParam0->f_10[6 /*57*/].f_18 = 1;
	uParam0->f_10[6 /*57*/].f_19 = 1;
	uParam0->f_10[6 /*57*/].f_20 = 1;
	uParam0->f_10[6 /*57*/].f_21 = 40f;
	uParam0->f_10[6 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[6 /*57*/].f_27 = 0;
	uParam0->f_10[6 /*57*/].f_50 = 0;
	uParam0->f_10[6 /*57*/].f_51 = 0f;
	uParam0->f_10[6 /*57*/].f_52 = 0f;
	uParam0->f_10[6 /*57*/].f_22 = 0f;
	uParam0->f_10[6 /*57*/].f_53 = 2;
	uParam0->f_10[6 /*57*/].f_23 = 0.5f;
	uParam0->f_10[6 /*57*/].f_28 = 0;
	uParam0->f_10[6 /*57*/].f_29 = 0f;
	uParam0->f_10[6 /*57*/].f_32 = 0f;
	uParam0->f_10[6 /*57*/].f_30 = 1;
	uParam0->f_10[6 /*57*/].f_31 = 0;
	uParam0->f_10[6 /*57*/].f_33 = 1f;
	uParam0->f_10[6 /*57*/].f_34 = 0;
	uParam0->f_10[6 /*57*/].f_35 = 0f;
	uParam0->f_10[6 /*57*/].f_36 = 0;
	uParam0->f_10[6 /*57*/].f_37 = 0;
	uParam0->f_10[6 /*57*/].f_39 = 0f;
	uParam0->f_10[6 /*57*/].f_40 = 0f;
	uParam0->f_10[6 /*57*/].f_41 = 0;
	uParam0->f_10[6 /*57*/].f_42 = 0;
	uParam0->f_10[6 /*57*/].f_43 = 0;
	uParam0->f_10[6 /*57*/].f_38 = 0f;
	uParam0->f_10[6 /*57*/].f_45 = 0;
	uParam0->f_10[6 /*57*/].f_46 = 0;
	uParam0->f_10[6 /*57*/].f_47 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[6 /*57*/].f_47.f_2 = 0f;
	uParam0->f_1217 = 7;
	uParam0->f_1218 = 3;
	uParam0->f_1233 = 0.07f;
	uParam0->f_1234 = 0.45f;
	uParam0->f_1235 = 0;
	uParam0->f_1236 = 0;
	uParam0->f_1237 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_1219 = 0;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_HeliMichaelToFranklin.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_HeliMichaelToFranklin.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = iParam1;
	uParam0->f_7[1] = iParam2;
}

void func_527(int iParam0, struct<3> Param1)//Position - 0x628AF
{
	iParam0->f_9 = { Param1 };
}

void func_528(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x628C1
{
	iParam0->f_5 = iParam1;
	iParam0->f_6 = iParam2;
	iParam0->f_12 = fParam3;
	iParam0->f_14 = iParam4;
	iParam0->f_15 = iParam5;
	iParam0->f_16 = iParam6;
	iParam0->f_17 = iParam7;
	iParam0->f_13 = iParam8;
}

void func_529()//Position - 0x628F9
{
	CAM::SET_CAM_SPLINE_PHASE(Local_107.f_9, 0f);
	Local_107.f_15 = 1;
	Local_107.f_12 = iLocal_63[iLocal_63.f_7];
	Local_107.f_20 = 1;
}


void func_531(int iParam0)//Position - 0x6293B
{
	func_451();
	if (CAM::DOES_CAM_EXIST(Local_107.f_9))
	{
		CAM::DESTROY_CAM(Local_107.f_9, 0);
	}
	Local_107.f_9 = CAM::CREATE_CAMERA(iParam0, 0);
}

void func_532(var uParam0)//Position - 0x62966
{
	if (CAM::DOES_CAM_EXIST(iLocal_290))
	{
		CAM::DESTROY_CAM(iLocal_290, 0);
	}
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
	}
	if (!CAM::DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", 1);
	}
}


void func_534(int iParam0, bool bParam1)//Position - 0x629C9
{
	switch (iParam0)
	{
		case 0:
			func_298(9);
			func_298(11);
			func_298(12);
			if (iLocal_30 == 5 && !bParam1)
			{
				func_298(13);
				func_398(10);
			}
			else
			{
				func_298(10);
				func_398(13);
			}
			break;
		
		case 2:
			func_298(9);
			func_298(10);
			func_298(13);
			if (iLocal_30 == 5 && !bParam1)
			{
				func_298(12);
				func_398(11);
			}
			else
			{
				func_298(11);
				func_398(12);
			}
			break;
		
		case 1:
			func_298(11);
			func_298(10);
			func_298(13);
			func_298(12);
			func_398(9);
			break;
	}
}

















void func_551()//Position - 0x64191
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_63[1]))
	{
		WEAPON::SET_AMMO_IN_CLIP(iLocal_63[1], func_624(4), 6);
		if (MISC::GET_GAME_TIMER() >= iLocal_726)
		{
			iVar0 = -1;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[2], 0))
			{
				iVar0 = 2;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[0], 0))
			{
				iVar0 = 0;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[1], 0))
			{
				iVar0 = 1;
			}
			if (iVar0 >= 0)
			{
				if (iLocal_203[iVar0] != iLocal_226)
				{
					TASK::TASK_SHOOT_AT_ENTITY(iLocal_63[1], iLocal_203[iVar0], -1, -957453492);
					iLocal_726 = MISC::GET_GAME_TIMER() + 2000;
					iLocal_226 = iLocal_203[iVar0];
				}
			}
			else
			{
				TASK::TASK_PAUSE(iLocal_63[1], 100);
				iLocal_726 = MISC::GET_GAME_TIMER() + 2000;
			}
		}
	}
}

void func_552()//Position - 0x64249
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	if (!PED::IS_PED_INJURED(iLocal_63[0]))
	{
		WEAPON::SET_AMMO_IN_CLIP(iLocal_63[0], func_624(5), WEAPON::GET_MAX_AMMO_IN_CLIP(iLocal_63[0], func_624(5), 1));
		if (MISC::GET_GAME_TIMER() >= iLocal_724)
		{
			iVar1 = -1;
			fVar2 = 999999f;
			if ((HUD::DOES_BLIP_EXIST(uLocal_282[0]) || HUD::DOES_BLIP_EXIST(uLocal_282[1])) || HUD::DOES_BLIP_EXIST(uLocal_282[3]))
			{
				iVar4 = 0;
			}
			else
			{
				iVar4 = 1;
			}
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				if (iVar0 != 2 || iVar4)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_282[iVar0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar0], 0))
						{
							fVar3 = GlobalFunc_156(iLocal_63[0], iLocal_203[iVar0], 0);
							if (fVar3 < 100f)
							{
								if (fVar3 < fVar2)
								{
									iVar1 = iVar0;
									fVar2 = fVar3;
								}
							}
						}
					}
				}
				iVar0++;
			}
			if (iVar1 >= 0)
			{
				if (iLocal_203[iVar1] != iLocal_225)
				{
					TASK::TASK_DRIVE_BY(iLocal_63[0], 0, iLocal_203[iVar1], 0f, 0f, 0f, 1000f, 100, 0, -753768974);
					iLocal_225 = iLocal_203[iVar1];
				}
				iLocal_724 = MISC::GET_GAME_TIMER() + 2000;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_196))
				{
					TASK::TASK_PAUSE(iLocal_63[0], 100);
					iLocal_225 = 0;
				}
				iLocal_724 = MISC::GET_GAME_TIMER() + 1000;
			}
		}
	}
}


int func_554(struct<2> Param0, float fParam2)//Position - 0x6446C
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { func_555(0) };
	Var3 = { func_555(2) };
	if (((Param0 >= Var0.x && Param0.f_1 >= Var0.f_1) && Param0 <= Var3.x) && Param0.f_1 <= Var3.f_1)
	{
		if (Param0 >= -46f && Param0.f_1 <= -874f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_555(int iParam0)//Position - 0x644DA
{
	switch (iParam0)
	{
		case 0:
			return -259.1f, -1145.2f, 200f;
			break;
		
		case 1:
			return 245.1f, -1145.2f, 200f;
			break;
		
		case 2:
			return 245.1f, -483.6f, 200f;
			break;
		
		case 3:
			return -259.1f, -483.6f, 200f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_556(int iParam0)//Position - 0x64558
{
	switch (iParam0)
	{
		case 0:
			return -268.58f, -1165.25f, 190f;
			break;
		
		case 1:
			return 56.39f, -1128.32f, 190f;
			break;
		
		case 2:
			return 104.41f, -999.78f, 190f;
			break;
		
		case 3:
			return 237.19f, -871.54f, 190f;
			break;
		
		case 4:
			return 288.22f, -641.4f, 190f;
			break;
		
		case 5:
			return 288.7f, -548.61f, 190f;
			break;
		
		case 6:
			return 136.17f, -461.98f, 190f;
			break;
		
		case 7:
			return -47.05f, -461.51f, 190f;
			break;
		
		case 8:
			return -320.04f, -588.73f, 190f;
			break;
		
		case 9:
			return -371.64f, -863.03f, 190f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_557()//Position - 0x64678
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!PED::IS_PED_INJURED(iLocal_63[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		if (!iLocal_501)
		{
			if (iLocal_684 >= 0)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
				Var3 = { func_556(iLocal_684) };
				fLocal_636 = MISC::GET_HEADING_FROM_VECTOR_2D((Var3.x - Var0.x), (Var3.f_1 - Var0.f_1));
				fLocal_636 = GlobalFunc_2783(fLocal_636);
				func_447(Var0, 10f, 50f, fLocal_636, SYSTEM::FLOOR(Var0.f_2), 1, 0);
			}
			iLocal_501 = 1;
		}
		else if (!iLocal_502)
		{
			if (GlobalFunc_5913(iLocal_199[0], fLocal_636, 10f))
			{
				func_558();
				iLocal_502 = 1;
			}
		}
	}
}

void func_558()//Position - 0x6472B
{
	struct<3> Var0;
	
	if (!PED::IS_PED_INJURED(iLocal_63[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		Var0 = { func_556(iLocal_684) };
		func_447(Var0, 40f, 1f, -1f, SYSTEM::FLOOR(Var0.f_2), 50, 0);
	}
}



void func_561(int iParam0, int iParam1, float fParam2, float fParam3)//Position - 0x647F1
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (!PED::IS_PED_INJURED(iLocal_63[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		if (iParam0 >= 0)
		{
			iVar0 = iParam0;
		}
		else
		{
			iVar0 = 220;
		}
		if (iParam1 >= 0)
		{
			iVar1 = iParam1;
		}
		else
		{
			iVar1 = 50;
		}
		if (fParam2 >= 0f)
		{
			fVar2 = fParam2;
		}
		else
		{
			fVar2 = 40f;
		}
		if (fParam3 >= 0f)
		{
			fVar3 = fParam3;
		}
		else
		{
			fVar3 = 8f;
		}
		func_447(Local_801[iLocal_683 /*3*/] + Vector(15f, 0f, 0f), fVar2, fVar3, -1f, iVar0, iVar1, 0);
	}
}

void func_562()//Position - 0x64881
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	
	if (!PED::IS_PED_INJURED(iLocal_63[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
		iLocal_684 = -1;
		if (func_554(Var0))
		{
			iLocal_684 = func_564(Var0);
		}
		if (iLocal_684 < 0)
		{
			if (func_563(Var0, func_405(39)))
			{
				if (!func_563(Var0, func_555(1)))
				{
					iLocal_683 = 1;
					Local_801[1 /*3*/] = { func_555(1) };
				}
				else if (!func_563(Var0, func_555(2)))
				{
					iLocal_683 = 1;
					Local_801[1 /*3*/] = { func_555(2) };
				}
				else
				{
					iLocal_683 = 2;
					fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, func_555(3), 0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, func_555(0), 0);
					if (fVar3 < fVar4)
					{
						Local_801[2 /*3*/] = { func_555(3) };
						Local_801[1 /*3*/] = { func_555(2) };
					}
					else
					{
						Local_801[2 /*3*/] = { func_555(0) };
						Local_801[1 /*3*/] = { func_555(1) };
					}
				}
			}
			else
			{
				iLocal_683 = 0;
			}
			Local_801[0 /*3*/] = { func_405(39) };
			func_561(-1, -1, -1082130432, -1082130432);
		}
		else
		{
			iLocal_501 = 0;
			iLocal_502 = 0;
		}
	}
}

int func_563(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)//Position - 0x649C2
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	
	fVar0 = (Param3 - Param0);
	fVar1 = (Param3.f_1 - Param0.f_1);
	fVar2 = (fVar0 / 15f);
	fVar3 = (fVar1 / 15f);
	iVar4 = 1;
	while (iVar4 <= 14)
	{
		fVar5 = (Param0 + (IntToFloat(iVar4) * fVar2));
		fVar6 = (Param0.f_1 + (IntToFloat(iVar4) * fVar3));
		if (func_554(fVar5, fVar6, 0f))
		{
			return 1;
		}
		iVar4++;
	}
	return 0;
}

int func_564(struct<3> Param0)//Position - 0x64A2C
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var7;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < 10)
	{
		Var4 = { func_556(iVar3) };
		if (!func_565(Param0, Var4))
		{
			fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var4, 0);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_199[0], Var4) };
				if (Var7.f_1 >= 0f)
				{
					fVar2 = (fVar2 - 500f);
				}
			}
			if (fVar2 < fVar1)
			{
				fVar1 = fVar2;
				iVar0 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar0;
}

int func_565(struct<3> Param0, struct<2> Param3, var uParam5)//Position - 0x64ABD
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	
	fVar2 = (Param3 - Param0.x);
	fVar3 = (Param3.f_1 - Param0.f_1);
	fVar4 = (fVar2 / 10f);
	fVar5 = (fVar3 / 10f);
	MISC::GET_GROUND_Z_FOR_3D_COORD(Param0 + Vector(200f, 0f, 0f), &fVar1);
	iVar6 = 1;
	while (iVar6 <= 9)
	{
		fVar7 = (Param0.x + (IntToFloat(iVar6) * fVar4));
		fVar8 = (Param0.f_1 + (IntToFloat(iVar6) * fVar5));
		MISC::GET_GROUND_Z_FOR_3D_COORD(fVar7, fVar8, 400f, &fVar0);
		if ((fVar0 - fVar1) >= 125f)
		{
			return 1;
		}
		fVar1 = fVar0;
		iVar6++;
	}
	return 0;
}

int func_566(struct<3> Param0, float fParam3)//Position - 0x64B50
{
	return GlobalFunc_9192(&(Global_91351.f_2167), Param0, fParam3, 0);
}







































void func_605(int iParam0)//Position - 0x68179
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	if (iParam0 == 1)
	{
		iVar8 = 2;
	}
	else
	{
		iVar8 = 1;
	}
	iVar6 = 0;
	while (iVar6 <= iVar8)
	{
		switch (iVar6)
		{
			case 0:
				iVar5 = 20;
				Var0 = { 1390.31f, -2050.63f, 51f };
				fVar3 = 74.2f;
				fVar4 = 0.19f;
				break;
			
			case 1:
				iVar5 = 19;
				Var0 = { 1400.29f, -2053.63f, 51f };
				fVar3 = 166.8f;
				fVar4 = 0.37f;
				break;
			
			case 2:
				iVar5 = 18;
				Var0 = { 1365.29f, -2065.67f, 51f };
				fVar3 = -83.3f;
				fVar4 = 0f;
				break;
		}
		if (Global_3)
		{
			switch (iVar6)
			{
				case 0:
					iLocal_227[iVar6] = Global_89491.f_4;
					break;
				
				case 1:
					iLocal_227[iVar6] = Global_89491.f_5;
					break;
				
				case 2:
					iLocal_227[iVar6] = Global_89491.f_6;
					break;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_227[iVar6], 0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_227[iVar6], 1, 1);
				ENTITY::SET_ENTITY_INVINCIBLE(iLocal_227[iVar6], 0);
			}
		}
		else
		{
			iLocal_227[iVar6] = VEHICLE::CREATE_VEHICLE(func_16(iVar5), Var0, fVar3, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_227[iVar6]);
			VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_227[iVar6], fVar4);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_227[iVar6], 2);
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_227[iVar6], 1);
			iVar7 = 1;
			while (iVar7 <= 8)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_227[iVar6], iVar7, true);
				iVar7++;
			}
			if (iVar6 == 1)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_227[iVar6], 3, false);
			}
			else if (iVar6 == 0)
			{
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_227[iVar6], 1, false);
				VEHICLE::SET_VEHICLE_EXTRA(iLocal_227[iVar6], 3, false);
			}
		}
		iVar6++;
	}
}

void func_606(int iParam0)//Position - 0x6833F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	float fVar9;
	int iVar10;
	
	iVar2 = iVar2;
	iVar3 = iVar3;
	iVar4 = iVar4;
	iVar5 = iVar5;
	if (iParam0 == 1)
	{
		iVar1 = 11;
	}
	else
	{
		iVar1 = 12;
	}
	if (iParam0 >= 5)
	{
		iLocal_208 = VEHICLE::CREATE_VEHICLE(func_16(17), 1386.65f, -2064.32f, 51.08f, -14.9f, 1, 1);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_208);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_208, 0);
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iLocal_208, 0.2f);
		VEHICLE::SET_VEHICLE_LIVERY(iLocal_208, 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_208, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_208, 3);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_208, 2, 0);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_208, 3, 0);
		iVar0 = 1;
		while (iVar0 <= 8)
		{
			VEHICLE::SET_VEHICLE_EXTRA(iLocal_208, iVar0, true);
			iVar0++;
		}
	}
	if ((!Global_3 || bLocal_1154) || iParam0 >= 5)
	{
		if (iParam0 == 1)
		{
			iVar10 = 1;
		}
		else
		{
			iVar10 = 2;
		}
		iVar0 = 0;
		while (iVar0 < iVar10)
		{
			switch (iVar0)
			{
				case 0:
					if (iParam0 == 1)
					{
						Var6 = { 1372.2f, -2073.76f, 51.12f };
						fVar9 = -38.38f;
					}
					else
					{
						Var6 = { 1384.953f, -2062.894f, 50.99809f };
						fVar9 = 79f;
					}
					iVar2 = 1;
					iVar3 = 0;
					iVar4 = 2;
					iVar5 = 2;
					break;
				
				case 1:
					if (iParam0 == 1)
					{
						Var6 = { 1361.57f, -2075.04f, 51f };
						fVar9 = -55.99f;
					}
					else
					{
						Var6 = { 1381.78f, -2066.469f, 50.99809f };
						fVar9 = 68.6f;
					}
					iVar2 = 0;
					iVar3 = 1;
					iVar4 = 1;
					iVar5 = 1;
					break;
			}
			iLocal_164[iVar0] = PED::CREATE_PED(26, func_16(iVar1), Var6, fVar9, 1, 1);
			if (iParam0 >= 5)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_164[iVar0], 0, iVar2, iVar3, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_164[iVar0], 3, 0, iVar4, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_164[iVar0], 4, 0, iVar5, 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_164[iVar0], 294, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_164[iVar0], 299, 1);
			}
			else
			{
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_164[iVar0], 200);
			}
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_164[iVar0], func_624(1), -1, 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_164[iVar0], 1);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_164[iVar0], 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_164[iVar0], 1862763509);
			PED::SET_PED_KEEP_TASK(iLocal_164[iVar0], 1);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_164[iVar0], 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_164[iVar0], 1);
			iVar0++;
		}
	}
	else
	{
		iLocal_164[0] = Global_89491.f_9;
		if (!PED::IS_PED_INJURED(iLocal_164[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_164[0], 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_164[0], 1);
			PED::SET_PED_KEEP_TASK(iLocal_164[0], 1);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_164[0], 1);
			ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_164[0], 1);
		}
	}
}

int func_607()//Position - 0x685F3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (iLocal_293[iVar0] == 1)
		{
			if (!STREAMING::HAS_MODEL_LOADED(func_16(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_608(bool bParam0, bool bParam1)//Position - 0x6862C
{
	if (bParam0)
	{
		if (!iLocal_393)
		{
			uLocal_916 = INTERIOR::GET_INTERIOR_AT_COORDS(116.08f, -620.64f, 206.53f);
			if (INTERIOR::IS_VALID_INTERIOR(uLocal_916))
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_916);
				iLocal_393 = 1;
				if (bParam1)
				{
					while (!func_609())
					{
						SYSTEM::WAIT(0);
					}
				}
			}
		}
	}
	else if (iLocal_393)
	{
		INTERIOR::UNPIN_INTERIOR(iLocal_916);
		iLocal_393 = 0;
	}
}

int func_609()//Position - 0x68694
{
	if (iLocal_393)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_916))
		{
			return 1;
		}
	}
	return 0;
}

void func_610()//Position - 0x686B1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167[iVar0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_167[iVar0]));
		}
		iVar0++;
	}
}

void func_611()//Position - 0x686E2
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<3> Var3;
	
	iVar0 = 0;
	while (iVar0 < iLocal_164)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_164[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_164[iVar0]))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_164[iVar0], PLAYER::PLAYER_PED_ID(), 1))
				{
					bVar1 = true;
				}
				if (iLocal_30 == 1)
				{
					if (PED::IS_PED_RAGDOLL(iLocal_164[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_164[iVar0], 10f, 10f, 10f, 0, 0, 0))
						{
							func_612(18);
						}
					}
				}
			}
			else
			{
				bVar1 = true;
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_208))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_208, 0))
		{
			iVar2 = 1;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0], 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(iLocal_199[0]) < 25f)
					{
						iVar2 = 0;
					}
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_208, PLAYER::PLAYER_PED_ID(), iVar2))
			{
				bVar1 = true;
			}
		}
		else
		{
			bVar1 = true;
		}
	}
	iVar0 = 0;
	while (iVar0 < iLocal_227)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar0]))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_227[iVar0]))
			{
				func_612(18);
			}
		}
		iVar0++;
	}
	if (iLocal_30 == 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_199[0], PLAYER::PLAYER_PED_ID(), 1))
			{
				func_612(18);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_63[2]))
		{
			if (PED::IS_PED_RAGDOLL(iLocal_63[2]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63[2], 10f, 10f, 10f, 0, 0, 0))
				{
					func_612(18);
				}
			}
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63[2], PLAYER::PLAYER_PED_ID(), 1))
			{
				func_612(18);
			}
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(iLocal_63[1]))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63[1], 1.5f, 1.5f, 2f, 0, 1, 0))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				}
				if (PED::IS_PED_RAGDOLL(iLocal_63[1]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63[1], 10f, 10f, 10f, 0, 0, 0))
					{
						func_612(18);
					}
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63[1], PLAYER::PLAYER_PED_ID(), 1))
				{
					func_612(18);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[2], 0))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_199[2], PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!PED::IS_PED_INJURED(iLocal_63[1]))
					{
						PED::SET_PED_TO_RAGDOLL(iLocal_63[1], 2500, 2500, 0, 1, 1, 0);
					}
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_199[2], 0);
					func_612(18);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iLocal_199[2]))
			{
				if (ENTITY::IS_ENTITY_DEAD(iLocal_199[2]) || !ENTITY::IS_ENTITY_DEAD(iLocal_199[2]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(iLocal_199[2], 0);
				}
			}
		}
	}
	if (bVar1)
	{
		if (iLocal_29 == 0)
		{
			iVar0 = 0;
			while (iVar0 < iLocal_164)
			{
				if (!PED::IS_PED_INJURED(iLocal_164[iVar0]))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_164[iVar0], -2065892691);
					PED::SET_PED_CAN_BE_TARGETTED(iLocal_164[iVar0], 1);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_918);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_918);
					TASK::TASK_PAUSE(0, MISC::GET_RANDOM_INT_IN_RANGE(0, 800));
					TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_918);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_164[iVar0], uLocal_918);
				}
				iVar0++;
			}
			func_612(11);
		}
	}
	else if (iLocal_30 >= 5)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0) && !PED::IS_PED_INJURED(func_404()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_164)
			{
				if (!PED::IS_PED_INJURED(iLocal_164[iVar0]))
				{
					if (iVar0 == 0)
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iLocal_164[iVar0], func_404()))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_164[iVar0], func_404(), -1, 2048, 2);
						}
					}
					else
					{
						Var3 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_164[iVar0], ENTITY::GET_ENTITY_COORDS(func_404(), 1)) };
						if (Var3.f_2 >= 2f)
						{
							fLocal_646 = 0f;
							iLocal_585 = 0;
						}
						else
						{
							fLocal_646 = (fLocal_646 + (1f * SYSTEM::TIMESTEP()));
							if (!iLocal_585)
							{
								iLocal_761 = 0;
								iLocal_585 = 1;
							}
						}
						if (Var3.f_1 >= 5f && fLocal_646 <= 1f)
						{
							if (!iLocal_515)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_761 + 2000 && fLocal_646 == 0f)
								{
									TASK::TASK_LOOK_AT_ENTITY(iLocal_164[iVar0], func_404(), -1, 2048, 2);
									if (iLocal_30 >= 6)
									{
										TASK::TASK_PLAY_ANIM(iLocal_164[iVar0], func_507(19), "Direct_Heli_loop", 2f, -2f, -1, 1, 0, 0, 0, 0);
									}
									iLocal_515 = 1;
									iLocal_514 = 0;
									iLocal_761 = MISC::GET_GAME_TIMER();
								}
							}
						}
						else if (!iLocal_514)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_761 + 3000)
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_164[iVar0], func_404(), 0);
								iLocal_514 = 1;
								iLocal_515 = 0;
								iLocal_761 = MISC::GET_GAME_TIMER();
							}
						}
						else if (MISC::GET_GAME_TIMER() >= iLocal_761 + 4000)
						{
							iLocal_514 = 0;
						}
					}
				}
				iVar0++;
			}
		}
	}
}

void func_612(int iParam0)//Position - 0x68B98
{
	char* sVar0;
	
	if (func_441())
	{
		func_300();
		GlobalFunc_7206(1, 1, 1, 1);
		AUDIO::TRIGGER_MUSIC_EVENT("FIB2_DEATH_FAIL");
		iLocal_29 = 1;
		iLocal_31 = iParam0;
		MISC::SET_TIME_SCALE(1f);
		switch (iLocal_31)
		{
			case 1:
				sVar0 = "CMN_MDIED";
				break;
			
			case 0:
				sVar0 = "CMN_FDIED";
				break;
			
			case 2:
				sVar0 = "CMN_TDIED";
				break;
			
			case 3:
				sVar0 = "SG_FAIL3";
				break;
			
			case 4:
				sVar0 = "SG_FAIL2";
				break;
			
			case 5:
				sVar0 = "SG_FAIL4";
				break;
			
			case 6:
				sVar0 = "SG_FAIL5";
				break;
			
			case 7:
				sVar0 = "SG_FAIL20";
				break;
			
			case 8:
				sVar0 = "SG_FAIL9";
				break;
			
			case 9:
				sVar0 = "SG_FAIL1";
				break;
			
			case 10:
				sVar0 = "SG_FAIL10";
				break;
			
			case 11:
				sVar0 = "SG_FAIL6";
				break;
			
			case 12:
				sVar0 = "SG_FAIL7";
				break;
			
			case 13:
				sVar0 = "SG_FAIL8";
				break;
			
			case 14:
				sVar0 = "SG_FAIL11";
				break;
			
			case 15:
				sVar0 = "SG_FAIL12";
				break;
			
			case 16:
				sVar0 = "SG_FAIL13";
				break;
			
			case 17:
				sVar0 = "SG_FAIL14";
				break;
			
			case 18:
				sVar0 = "SG_FAIL15";
				break;
			
			case 19:
				sVar0 = "SG_FAIL17";
				break;
			
			case 20:
				sVar0 = "SG_FAIL16";
				break;
			
			case 21:
				sVar0 = "SG_FAIL18";
				break;
			
			case 22:
				sVar0 = "SG_FAIL19";
				break;
			
			case 23:
				sVar0 = "SG_FAIL21";
				break;
		}
		GlobalFunc_10835(sVar0);
	}
}










int func_622()//Position - 0x69B7E
{
	if (GlobalFunc_8315() == 1)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_63[1];
}


int func_624(int iParam0)//Position - 0x69BC5
{
	switch (iParam0)
	{
		case 0:
			return joaat("weapon_appistol");
			break;
		
		case 1:
			return joaat("weapon_pistol");
			break;
		
		case 2:
			return joaat("weapon_smg");
			break;
		
		case 3:
			return joaat("weapon_carbinerifle");
			break;
		
		case 4:
			return joaat("weapon_heavysniper");
			break;
		
		case 5:
			return joaat("weapon_advancedrifle");
			break;
	}
	return joaat("weapon_unarmed");
}

int func_625()//Position - 0x69C3F
{
	if (GlobalFunc_8315() == 0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_63[0];
}

void func_626()//Position - 0x69C5E
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	struct<3> Var4;
	int iVar7;
	int iVar8;
	int iVar9;
	char* sVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	struct<3> Var15;
	float fVar18;
	float fVar19;
	struct<3> Var20;
	struct<3> Var23;
	int iVar26;
	bool bVar27;
	int iVar28;
	int iVar29;
	float fVar30;
	float fVar31;
	struct<3> Var32;
	struct<3> Var35;
	struct<3> Var38;
	float fVar41;
	struct<3> Var42;
	bool bVar45;
	float fVar46;
	struct<3> Var47;
	bool bVar50;
	int iVar51;
	
	func_443();
	if (iLocal_37 == 0)
	{
		func_407(1, 0, 0, 0);
	}
	else if (HUD::DOES_BLIP_EXIST(uLocal_263))
	{
		HUD::REMOVE_BLIP(&uLocal_263);
	}
	if (!iLocal_626)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_686 + 100)
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_626 = 1;
		}
	}
	if (!iLocal_613)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_686 + 6000)
		{
			iVar0 = 0;
			while (iVar0 < iLocal_203)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar0], 0))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_203[iVar0], 0, 0, 0, 0, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_203[iVar0], 0);
				}
				iVar0++;
			}
			iLocal_613 = 1;
		}
	}
	switch (GlobalFunc_8315())
	{
		case 1:
			if (HUD::DOES_BLIP_EXIST(uLocal_288))
			{
				HUD::REMOVE_BLIP(&uLocal_288);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_287))
				{
					uLocal_287 = func_412(iLocal_199[0], 0);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_287))
			{
				HUD::REMOVE_BLIP(&uLocal_287);
			}
			break;
		
		case 0:
		case 2:
			if (HUD::DOES_BLIP_EXIST(uLocal_287))
			{
				HUD::REMOVE_BLIP(&uLocal_287);
			}
			if (!PED::IS_PED_INJURED(iLocal_63[1]))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_288))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0], 0))
						{
							uLocal_288 = func_416(iLocal_63[1], 0);
						}
					}
				}
			}
			else if (HUD::DOES_BLIP_EXIST(uLocal_288))
			{
				HUD::REMOVE_BLIP(&uLocal_288);
			}
			break;
	}
	if (!iLocal_621)
	{
		if (iLocal_37 == 1)
		{
			if (!iLocal_622)
			{
				PLAYER::SPECIAL_ABILITY_CHARGE_NORMALIZED(PLAYER::PLAYER_ID(), 0.5f, 1);
				iLocal_622 = 1;
			}
			if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				if (iLocal_789 < 0)
				{
					iLocal_789 = MISC::GET_GAME_TIMER();
				}
				else if (MISC::GET_GAME_TIMER() >= iLocal_789 + 3000)
				{
					if (PAD::_IS_USING_KEYBOARD(0))
					{
						iLocal_621 = func_426("SG_SLOHLP_KM", 0, -1);
					}
					else
					{
						iLocal_621 = func_426("SG_SLOHLP", 0, -1);
					}
				}
			}
			else
			{
				iLocal_621 = 1;
			}
		}
		else
		{
			iLocal_789 = -1;
		}
	}
	else if (iLocal_37 != 1 || PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (GlobalFunc_74("SG_SLOHLP"))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	bVar1 = false;
	bVar2 = false;
	if ((iLocal_37 != 2 && iLocal_37 != 7) && iLocal_37 != 8)
	{
		if (iLocal_37 == 0 || iLocal_37 == 1)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_282[2]))
			{
				if (iLocal_524)
				{
					bVar1 = true;
					bVar3 = false;
					if (MISC::GET_GAME_TIMER() >= iLocal_743 + 10000)
					{
						bVar3 = true;
					}
					else if (MISC::GET_GAME_TIMER() >= iLocal_743)
					{
						if (!PED::IS_PED_INJURED(iLocal_63[1]))
						{
							if (FIRE::IS_EXPLOSION_IN_AREA(-1, ENTITY::GET_ENTITY_COORDS(iLocal_63[1], 1) - Vector(8f, 8f, 8f), ENTITY::GET_ENTITY_COORDS(iLocal_63[1], 1) + Vector(8f, 8f, 8f)))
							{
								bVar3 = true;
							}
						}
					}
					if (bVar3)
					{
						if (!PED::IS_PED_INJURED(func_622()))
						{
							PED::APPLY_DAMAGE_TO_PED(func_622(), 1000, 1);
						}
					}
				}
			}
		}
	}
	else
	{
		if ((!HUD::DOES_BLIP_EXIST(uLocal_282[2]) && bLocal_527) || iLocal_538)
		{
			bVar2 = true;
		}
		if (MISC::GET_GAME_TIMER() >= iLocal_740)
		{
			iLocal_740 = MISC::GET_GAME_TIMER() + 5000;
		}
		if (iLocal_524)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_743)
			{
				iLocal_743 = MISC::GET_GAME_TIMER() + 6000;
			}
		}
	}
	if (bVar1)
	{
		GlobalFunc_2998(&iLocal_63, 1, 1);
		if (!bLocal_589)
		{
			bLocal_589 = func_426("SG_TROHLP2", 0, 12500);
		}
	}
	else
	{
		GlobalFunc_2998(&iLocal_63, 1, 0);
	}
	if (bVar2)
	{
		GlobalFunc_2998(&iLocal_63, 2, 1);
		GlobalFunc_2998(&iLocal_63, 0, 1);
		if (!bLocal_589)
		{
			bLocal_589 = func_426("SG_TROHLP2", 0, 12500);
		}
	}
	else
	{
		GlobalFunc_2998(&iLocal_63, 0, 0);
		GlobalFunc_2998(&iLocal_63, 2, 0);
	}
	if (!bVar2 && !bVar1)
	{
		if (GlobalFunc_74("SG_TROHLP2"))
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_721 + 1000)
			{
				HUD::CLEAR_HELP(0);
				iLocal_721 = MISC::GET_GAME_TIMER();
			}
		}
	}
	if ((iLocal_37 == 0 || iLocal_37 == 1) || iLocal_37 == 2)
	{
		if ((HUD::DOES_BLIP_EXIST(uLocal_282[0]) || HUD::DOES_BLIP_EXIST(uLocal_282[1])) || HUD::DOES_BLIP_EXIST(uLocal_282[3]))
		{
			if (iLocal_538)
			{
				Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
				if ((FIRE::IS_EXPLOSION_IN_AREA(-1, Var4 - Vector(6f, 6f, 6f), Var4 + Vector(6f, 6f, 6f)) && bLocal_609) || (iLocal_538 && MISC::GET_GAME_TIMER() >= iLocal_747 + 23000))
				{
					if (!PED::IS_PED_INJURED(func_625()))
					{
						if (PED::IS_PED_IN_VEHICLE(func_625(), iLocal_199[0], 0))
						{
							PED::APPLY_DAMAGE_TO_PED(func_625(), 1000, 1);
						}
					}
					if (!PED::IS_PED_INJURED(func_404()))
					{
						if (PED::IS_PED_IN_VEHICLE(func_404(), iLocal_199[0], 0))
						{
							PED::APPLY_DAMAGE_TO_PED(func_404(), 1000, 1);
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
					{
						VEHICLE::EXPLODE_VEHICLE(iLocal_199[0], 1, 0);
					}
				}
			}
		}
	}
	if (iLocal_37 == 0)
	{
		if (GlobalFunc_126(1) && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) != 4)
		{
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::SET_GAMEPLAY_VEHICLE_HINT(iLocal_199[0], Local_9854, 1, -1, 600, 600);
				CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_9853);
				CAM::SET_GAMEPLAY_HINT_FOV(CAM::GET_GAMEPLAY_CAM_FOV());
			}
		}
		else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
	}
	if (!PED::IS_PED_INJURED(func_625()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(func_625(), &iVar7, 1);
		if (iVar7 != func_624(5))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(func_625(), func_624(5), 1);
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(func_625(), func_624(5)) == 0)
			{
				WEAPON::SET_PED_AMMO(func_625(), func_624(5), 1);
			}
			WEAPON::SET_PED_INFINITE_AMMO(func_625(), 1, func_624(5));
			WEAPON::SET_PED_INFINITE_AMMO_CLIP(func_625(), 1);
		}
	}
	if (!bLocal_553)
	{
		if (iLocal_37 == 1)
		{
			bLocal_553 = GlobalFunc_2867("FIB2_MICHAEL_FIGHTS_CHOPPERS");
		}
	}
	if (!bLocal_381 || !bLocal_532)
	{
		if (bLocal_532 || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (func_421("SG_DCHOP", 1, 0))
			{
				bLocal_381 = true;
				iLocal_741 = MISC::GET_GAME_TIMER() + 24000;
			}
		}
		if (!iLocal_531)
		{
			iLocal_531 = func_429("FBI2_RADIO", 0, 0, 0, 1, 0);
		}
		else if (!bLocal_532)
		{
			bLocal_532 = func_429("FBI2_FREACT", 0, 0, 0, 1, 0);
		}
	}
	else
	{
		iVar8 = GlobalFunc_8315();
		if (HUD::DOES_BLIP_EXIST(uLocal_282[2]))
		{
			if ((iLocal_37 != 2 && iLocal_37 != 7) && iLocal_37 != 8)
			{
				if (!iLocal_524)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_740)
					{
						if (func_429("FBI2_URGHELP", 0, 0, 0, 1, 0))
						{
							iLocal_743 = MISC::GET_GAME_TIMER() + 15000;
							iLocal_524 = 1;
						}
					}
				}
				else if (!bLocal_525)
				{
					if (MISC::GET_GAME_TIMER() >= (iLocal_743 - 5000))
					{
						bLocal_525 = func_429("FBI2_WTF", 0, 0, 0, 1, 0);
					}
				}
			}
		}
		else
		{
			if (!bLocal_478[2])
			{
				bLocal_478[2] = func_429("FBI2_FSHOOT", 0, 0, 0, 1, 0);
			}
			else if (!bLocal_536)
			{
				bLocal_536 = func_429("FBI2_FTELL", 0, 0, 0, 1, 0);
			}
			else if (!bLocal_537)
			{
				bLocal_537 = func_429("FBI2_FGET", 0, 0, 0, 1, 0);
			}
			iLocal_531 = 1;
		}
		if (!iLocal_538)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_747)
			{
				if ((HUD::DOES_BLIP_EXIST(uLocal_282[0]) || HUD::DOES_BLIP_EXIST(uLocal_282[1])) || HUD::DOES_BLIP_EXIST(uLocal_282[3]))
				{
					if ((iLocal_37 == 2 || iLocal_37 == 1) || iLocal_37 == 0)
					{
						if (func_429("FBI2_WEHIT", 0, 0, 0, 1, 0))
						{
							iLocal_538 = 1;
							iLocal_747 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else
				{
					iLocal_538 = 1;
				}
			}
		}
		else if (!bLocal_609)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_747 + 15000)
			{
				bLocal_609 = true;
			}
		}
		if (!bLocal_527)
		{
			if (iLocal_685 < 0 && !bVar1)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_741 && !HUD::DOES_BLIP_EXIST(uLocal_282[2]))
				{
					bLocal_527 = func_429("FBI2_TAKE1", 0, 0, 0, 1, 0);
				}
			}
		}
		if (iLocal_685 < 0 && !bVar1)
		{
			if (iVar8 == 0 || iVar8 == 2)
			{
				iVar9 = 0;
				while (iVar9 <= 1)
				{
					if (!bLocal_478[iVar9])
					{
						if (!HUD::DOES_BLIP_EXIST(uLocal_282[iVar9]))
						{
							if (iVar8 == 0)
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										bLocal_478[iVar9] = func_429("FBI2_DOWN", 0, 0, 0, 1, 0);
										break;
									
									case 1:
										bLocal_478[iVar9] = func_429("FBI2_SPIN", 0, 0, 0, 1, 0);
										break;
								}
							}
							else
							{
								bLocal_478[iVar9] = func_429("FBI2_DOWN1", 0, 0, 0, 1, 0);
							}
						}
					}
					iVar9++;
				}
				if (MISC::GET_GAME_TIMER() >= iLocal_744)
				{
					if (iLocal_745 < 5)
					{
						sVar10 = sVar10;
						switch (iLocal_745)
						{
							case 0:
								sVar10 = "FBI2_HANG1";
								break;
							
							case 1:
								sVar10 = "FBI2_HANG2";
								break;
							
							case 2:
								sVar10 = "FBI2_HANG3";
								break;
							
							case 3:
								sVar10 = "FBI2_HANG4";
								break;
							
							case 4:
								sVar10 = "FBI2_HANG5";
								break;
						}
						if (func_429(sVar10, 0, 0, 0, 1, 0))
						{
							iLocal_744 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(14000, 18000));
							iLocal_745++;
						}
					}
				}
				else if ((HUD::DOES_BLIP_EXIST(uLocal_282[0]) && HUD::DOES_BLIP_EXIST(uLocal_282[1])) && HUD::DOES_BLIP_EXIST(uLocal_282[3]))
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
					{
						func_838("FBI2_TAKE3", -1);
					}
					else if (!PED::IS_PED_INJURED(func_625()))
					{
						if (PED::IS_PED_SHOOTING(func_625()))
						{
							func_838("FBI2_SHOTC", -1);
						}
						else
						{
							func_838("FBI2_CHASE", -1);
						}
					}
				}
				else if (!bLocal_533)
				{
					if (iLocal_619)
					{
						if ((((HUD::DOES_BLIP_EXIST(uLocal_282[0]) && !HUD::DOES_BLIP_EXIST(uLocal_282[1])) && !HUD::DOES_BLIP_EXIST(uLocal_282[3])) || ((HUD::DOES_BLIP_EXIST(uLocal_282[1]) && !HUD::DOES_BLIP_EXIST(uLocal_282[0])) && !HUD::DOES_BLIP_EXIST(uLocal_282[3]))) || ((HUD::DOES_BLIP_EXIST(uLocal_282[3]) && !HUD::DOES_BLIP_EXIST(uLocal_282[0])) && !HUD::DOES_BLIP_EXIST(uLocal_282[1])))
						{
							bLocal_533 = func_429("FBI2_TAKEOUT", 0, 0, 0, 1, 0);
						}
					}
				}
				else if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
				{
					func_838("FBI2_TAKE3", -1);
				}
				else if (!PED::IS_PED_INJURED(func_625()))
				{
					if (PED::IS_PED_SHOOTING(func_625()))
					{
						func_838("FBI2_SHOTC", -1);
					}
					else
					{
						func_838("FBI2_CHASE", -1);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_282[2]))
				{
					if (!bLocal_534)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_750 + 3000)
						{
							if (func_429("FBI2_ROCKETS", 0, 0, 0, 1, 0))
							{
								bLocal_534 = true;
								iLocal_746 = MISC::GET_GAME_TIMER() + 23000;
								iLocal_751 = MISC::GET_GAME_TIMER() + 8000;
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() >= iLocal_751)
					{
						if (MISC::GET_GAME_TIMER() <= iLocal_750 + 3500 && MISC::GET_GAME_TIMER() >= iLocal_750 + 1000)
						{
							if (func_429("FBI2_FIRED", 0, 0, 0, 1, 0))
							{
								iLocal_751 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(13000, 16000));
							}
						}
					}
					else
					{
						if (!bLocal_535)
						{
							if (bLocal_534)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_746)
								{
									bLocal_535 = func_429("FBI2_2RADIO", 0, 0, 0, 1, 0);
								}
							}
						}
						if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
						{
							func_838("FBI2_FSHOT", -1);
						}
						else if (!PED::IS_PED_INJURED(iLocal_183[0]))
						{
							func_838("FBI2_ATTACK", -1);
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					if (!iLocal_600)
					{
						if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_199[0], PLAYER::PLAYER_PED_ID(), 1))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_778)
							{
								iLocal_779 = MISC::GET_GAME_TIMER();
								iLocal_600 = 1;
							}
						}
					}
					else if (func_429("FBI2_FRFIRE", 0, 0, 0, 1, 0))
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_199[0]);
						iLocal_600 = 0;
						iLocal_778 = MISC::GET_GAME_TIMER() + 18000;
					}
					else if (MISC::GET_GAME_TIMER() >= iLocal_779 + 3000)
					{
						ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_199[0]);
						iLocal_600 = 0;
					}
				}
			}
		}
		if (!bLocal_382)
		{
			if (!PED::IS_PED_INJURED(iLocal_183[0]))
			{
				bLocal_382 = func_429("FBI2_WARN1", 0, 0, 0, 1, 0);
			}
		}
	}
	iVar11 = func_622();
	if (!PED::IS_PED_INJURED(iVar11))
	{
		if (iLocal_37 == 2)
		{
			ENTITY::SET_ENTITY_PROOFS(iVar11, 0, 0, 0, 0, 0, 0, 0, 0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iVar11, 1, iLocal_1088);
			if (FIRE::IS_EXPLOSION_IN_AREA(-1, ENTITY::GET_ENTITY_COORDS(iVar11, 1) - Vector(6f, 6f, 6f), ENTITY::GET_ENTITY_COORDS(iVar11, 1) + Vector(6f, 6f, 6f)))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_282[2]))
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_742)
					{
						PED::APPLY_DAMAGE_TO_PED(iVar11, 40, 1);
						iLocal_742 = MISC::GET_GAME_TIMER() + 1000;
					}
				}
			}
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iVar11);
		}
		else
		{
			ENTITY::SET_ENTITY_PROOFS(iVar11, 0, 1, 0, 0, 0, 0, 0, 0);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iVar11, 0, iLocal_1088);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[0]))
		{
			fLocal_635 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_199[0]);
		}
	}
	if (!iLocal_445)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_686 + 100)
		{
			iLocal_445 = 1;
			GlobalFunc_2774(&iLocal_63, 1, 0);
			GlobalFunc_2774(&iLocal_63, 0, 0);
			GlobalFunc_2774(&iLocal_63, 2, 0);
		}
	}
	iVar12 = 0;
	while (iVar12 < 4)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar12], 0))
		{
			switch (iVar12)
			{
				case 0:
				case 1:
				case 3:
					iVar13 = 750;
					break;
				
				case 2:
					iVar13 = 600;
					break;
			}
			if (ENTITY::GET_ENTITY_HEALTH(iLocal_203[iVar12]) < iVar13)
			{
				if (iVar12 != 2 || !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[iVar12], -1)))
				{
					VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_203[iVar12], -150f);
					VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_203[iVar12], -150f);
				}
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[iVar12], -1)))
				{
					PED::APPLY_DAMAGE_TO_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[iVar12], -1), 1000, 1);
				}
			}
		}
		iVar12++;
	}
	if (bLocal_519)
	{
		func_837(1, 1);
	}
	if (!iLocal_498)
	{
		if (!PED::IS_PED_INJURED(iLocal_63[0]))
		{
			PED::SET_PED_ACCURACY(iLocal_63[0], 0);
		}
		if (MISC::GET_GAME_TIMER() >= iLocal_686 + 28000)
		{
			iLocal_498 = 1;
		}
	}
	else if (!PED::IS_PED_INJURED(iLocal_63[0]))
	{
		PED::SET_PED_ACCURACY(iLocal_63[0], 75);
	}
	iVar12 = 0;
	while (iVar12 < iLocal_183)
	{
		if (!PED::IS_PED_INJURED(iLocal_183[iVar12]))
		{
			bVar14 = false;
			if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_183[iVar12], joaat("weapon_heavysniper"), 0))
			{
				bVar14 = true;
			}
			if (bVar14)
			{
				PED::APPLY_DAMAGE_TO_PED(iLocal_183[iVar12], 1000, 1);
			}
		}
		else if (!iLocal_483[iVar12])
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_183[iVar12]))
			{
				GlobalFunc_565(288, 1, 0);
				iLocal_483[iVar12] = 1;
			}
		}
		iVar12++;
	}
	if ((iLocal_37 != 0 && iLocal_37 != 3) && iLocal_37 != 4)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_756)
		{
			func_832();
		}
	}
	if (!iLocal_497)
	{
		if (iLocal_685 < 0)
		{
			if (iLocal_681 > 0)
			{
				iLocal_497 = 1;
				iLocal_660 = MISC::GET_GAME_TIMER() + 600;
			}
		}
	}
	else if (!iLocal_465)
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_660)
		{
			iLocal_465 = func_426("SG_HOTHLP2", 0, 12500);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		Var15 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
	}
	MISC::GET_GROUND_Z_FOR_3D_COORD(Var15, &fVar19);
	if (fVar19 < 0f)
	{
		fVar19 = 0f;
	}
	fVar18 = (Var15.f_2 - fVar19);
	if (fVar18 < 0f)
	{
		fVar18 = (fVar18 * -1f);
	}
	Var20 = { 0f, 0f, 0f };
	if (fVar18 < 20f)
	{
		Var20 = { 0f, 0f, 8f };
	}
	if (!iLocal_619)
	{
		if ((!HUD::DOES_BLIP_EXIST(uLocal_282[0]) || !HUD::DOES_BLIP_EXIST(uLocal_282[1])) && MISC::GET_GAME_TIMER() >= iLocal_686 + 2000)
		{
			if (iLocal_788 < 0)
			{
				iLocal_788 = MISC::GET_GAME_TIMER();
			}
			else if (MISC::GET_GAME_TIMER() >= iLocal_788 + 3000)
			{
				func_829(0, 1);
				uLocal_282[3] = func_412(iLocal_203[3], 1);
				iLocal_619 = 1;
			}
		}
	}
	iVar12 = 0;
	while (iVar12 < 4)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar12], 0))
		{
			if (!iLocal_467[iVar12])
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_670 + 3700)
				{
					func_828(iVar12);
				}
			}
			if (!iLocal_473[iVar12])
			{
				bVar27 = false;
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[iVar12]))
				{
					bVar27 = true;
				}
				if (bVar27)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[iVar12]))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_203[iVar12]);
					}
					iLocal_682 = MISC::GET_GAME_TIMER() + 9000;
					iLocal_473[iVar12] = 1;
				}
			}
			else
			{
				iVar28 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[iVar12], -1);
				iVar29 = func_625();
				if (!PED::IS_PED_INJURED(iVar29) && !PED::IS_PED_INJURED(iVar28))
				{
					fVar30 = GlobalFunc_156(iVar29, iLocal_203[iVar12], 1);
					fVar31 = 999f;
					if (fVar31 > 0f)
					{
					}
					if (iLocal_37 == 0)
					{
						fVar31 = 50f;
					}
					else if (fVar30 <= 30f)
					{
						fVar31 = 40f;
					}
					else
					{
						fVar31 = 20f;
					}
					if (iVar12 == 0)
					{
						if (iLocal_681 == 1 && (iLocal_37 == 1 || iLocal_37 == 0))
						{
							if (fVar30 <= 130f)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_682)
								{
									if (func_429("FBI2_DOWN3", 0, 0, 0, 1, 0))
									{
										iLocal_682 = MISC::GET_GAME_TIMER() + 11000;
										iLocal_681++;
									}
								}
							}
						}
					}
					if (MISC::GET_GAME_TIMER() >= iLocal_676[iVar12])
					{
						if (!PED::IS_PED_INJURED(iVar29))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
							{
								if ((iVar12 == 0 || iVar12 == 1) || iVar12 == 3)
								{
									if (!HUD::DOES_BLIP_EXIST(uLocal_282[1]))
									{
										if (HUD::DOES_BLIP_EXIST(uLocal_282[0]))
										{
											if (iLocal_759 == 1)
											{
												if (iLocal_565)
												{
													iLocal_565 = 0;
													iLocal_760 = MISC::GET_GAME_TIMER() + 10000;
												}
											}
											iLocal_759 = 0;
										}
										else
										{
											if (iLocal_759 == 1 || iLocal_759 == 0)
											{
												if (iLocal_565)
												{
													iLocal_565 = 0;
													iLocal_760 = MISC::GET_GAME_TIMER() + 10000;
												}
											}
											iLocal_759 = 3;
										}
									}
									if (iVar12 == iLocal_759)
									{
										if (!iLocal_565)
										{
											if (MISC::GET_GAME_TIMER() >= iLocal_760 || bLocal_609)
											{
												iLocal_565 = 1;
												iLocal_760 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(6000, 8000));
											}
											TASK::TASK_HELI_MISSION(iVar28, iLocal_203[iVar12], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], Vector(-3f, -35f, -20f) + Var20), 4, 120f, 0.1f, ENTITY::GET_ENTITY_HEADING(iLocal_199[0]), SYSTEM::ROUND(Var15.f_2), 10, -1f, 0);
											iLocal_676[iVar12] = MISC::GET_GAME_TIMER() + 10;
										}
										else
										{
											if (MISC::GET_GAME_TIMER() >= iLocal_762)
											{
												WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar28, joaat("vehicle_weapon_space_rocket"));
												WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(iVar28, &iVar26);
												if (iVar26 == joaat("vehicle_weapon_space_rocket"))
												{
													Var32 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_203[iVar12], ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1)) };
													if (Var32.f_1 >= 10f)
													{
														Var23.x = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
														Var23.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
														Var23.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(5f, 10f);
														if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
														{
															Var23.x = (Var23.x * -1f);
														}
														if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
														{
															Var23.f_1 = (Var23.f_1 * -1f);
														}
														if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
														{
															Var23.f_2 = (Var23.f_2 * -1f);
														}
														if (bLocal_609)
														{
															VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(iVar28, iLocal_199[0], 0f, 0f, 0f);
														}
														else
														{
															VEHICLE::SET_VEHICLE_SHOOT_AT_TARGET(iVar28, 0, ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) + Var23);
														}
													}
													iLocal_762 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1200, 1700));
												}
											}
											TASK::TASK_HELI_MISSION(iVar28, iLocal_203[iVar12], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], Vector(-3f, -35f, -6f) + Var20), 4, 120f, 0.1f, ENTITY::GET_ENTITY_HEADING(iLocal_199[0]), SYSTEM::ROUND(Var15.f_2), 10, -1f, 0);
											iLocal_676[iVar12] = MISC::GET_GAME_TIMER() + 10;
											if (MISC::GET_GAME_TIMER() >= iLocal_760 && !bLocal_609)
											{
												iLocal_565 = 0;
												iLocal_760 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(18000, 23000));
											}
										}
									}
									else
									{
										TASK::TASK_HELI_MISSION(iVar28, iLocal_203[iVar12], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], Vector(2f, -5f, -40f) + Var20), 4, 170f, 0.1f, ENTITY::GET_ENTITY_HEADING(iLocal_199[0]), SYSTEM::ROUND(Var15.f_2), 10, -1f, 0);
										iLocal_676[iVar12] = MISC::GET_GAME_TIMER() + 10;
									}
								}
								else
								{
									fLocal_652 = (fLocal_652 - (0.08f * SYSTEM::TIMESTEP()));
									if (fLocal_652 < 0f)
									{
										fLocal_652 = 0f;
									}
									VEHICLE::_0x8AA9180DE2FEDD45(iLocal_203[2], 1);
									if (iLocal_143 == 0)
									{
										Var35 = { 0f, 0f, 0f };
										Var38 = { ENTITY::GET_ENTITY_COORDS(iLocal_250, 1) };
										fVar41 = (fLocal_645 + 0f);
										Var35.x = (Var38.x + (27f * SYSTEM::COS(fVar41)));
										Var35.f_1 = (Var38.f_1 + (27f * SYSTEM::SIN(fVar41)));
										Var35.f_2 = Var38.f_2;
										Var42 = { ENTITY::GET_ENTITY_COORDS(iLocal_203[2], 1) };
										bVar45 = false;
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(-166.55f, -590.77f, 199.13f, Var42, 0) < 18.5f)
										{
											bVar45 = true;
										}
										if (ENTITY::IS_ENTITY_AT_COORD(iLocal_203[iVar12], Var35, 9f, 9f, 9f, 0, 1, 0))
										{
											fLocal_645 = (fLocal_645 + MISC::GET_RANDOM_FLOAT_IN_RANGE(22.5f, 28f));
											if (fLocal_645 > 360f)
											{
												fLocal_645 = (fLocal_645 - 360f);
											}
											if (!bVar45)
											{
												PED::SET_PED_FIRING_PATTERN(iVar28, -957453492);
												PED::SET_PED_ACCURACY(iVar28, 100);
												WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(iVar28, joaat("vehicle_weapon_space_rocket"));
												if (fLocal_652 <= 0f || iLocal_524)
												{
													TASK::TASK_HELI_MISSION(iVar28, iLocal_203[iVar12], 0, func_622(), 0f, 0f, 0f, 6, 10f, 27f, -1f, SYSTEM::ROUND(Var38.f_2), 10, -1082130432, 0);
												}
												else
												{
													TASK::TASK_HELI_MISSION(iVar28, iLocal_203[iVar12], 0, 0, Vector(211.2136f, -594.6799f, -139.4458f) + Vector(fLocal_652, 0f, 0f), 6, 10f, 27f, -1f, SYSTEM::ROUND(Var38.f_2), 10, -1082130432, 0);
												}
												iLocal_676[iVar12] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1500, 4500));
												iLocal_750 = MISC::GET_GAME_TIMER();
												iLocal_143 = 1;
											}
											else
											{
												iLocal_676[iVar12] = MISC::GET_GAME_TIMER() + 10;
											}
										}
										else
										{
											fVar46 = MISC::GET_HEADING_FROM_VECTOR_2D((Var38.x - Var42.x), (Var38.f_1 - Var42.f_1));
											Var47 = { 0f, 0f, 0f };
											if (bVar45)
											{
												Var47.f_2 = 10f;
											}
											else
											{
												Var47.f_2 = 1f;
											}
											ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Var35 + Var47, 0.2f, 0.2f, 0.2f, 0, 1, 0);
											TASK::TASK_HELI_MISSION(iVar28, iLocal_203[iVar12], 0, 0, Var35 + Var47, 4, 15f, 4f, fVar46, SYSTEM::ROUND((Var38.f_2 + Var47.f_2)), 10, -1082130432, 0);
											iLocal_676[iVar12] = MISC::GET_GAME_TIMER() + 10;
										}
									}
									else if (iLocal_143 == 1)
									{
										iLocal_143 = 0;
										iLocal_676[iVar12] = MISC::GET_GAME_TIMER() + 10;
									}
								}
							}
						}
					}
				}
			}
			if (PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[iVar12], -1)))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_203[iVar12]));
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar12]))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_203[iVar12]));
		}
		iVar12++;
	}
	iVar12 = 0;
	while (iVar12 < iLocal_183)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_183[iVar12]))
		{
			bVar50 = false;
			if (!PED::IS_PED_INJURED(iLocal_183[iVar12]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_183[iVar12], 0))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(iLocal_183[iVar12], 0), 0) || !ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(iLocal_183[iVar12], 0)))
					{
						bVar50 = true;
					}
				}
				else
				{
					bVar50 = true;
				}
			}
			else
			{
				bVar50 = true;
			}
			if (bVar50)
			{
				if (iVar12 == 0)
				{
					GlobalFunc_200(&uLocal_923, 4);
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_183[iVar12]));
			}
		}
		iVar12++;
	}
	if (!iLocal_496)
	{
		if (fLocal_635 >= 0f)
		{
			if (func_441())
			{
				iVar12 = 0;
				while (iVar12 < 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar12], 0))
					{
						uLocal_282[iVar12] = func_412(iLocal_203[iVar12], 1);
					}
					iVar12++;
				}
				iLocal_681++;
				iLocal_682 = MISC::GET_GAME_TIMER() + 11000;
				iLocal_496 = 1;
			}
		}
	}
	else if (func_441())
	{
		if (iLocal_685 < 0)
		{
			iVar51 = 1;
			iVar12 = 0;
			while (iVar12 < 4)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar12], 0))
				{
					if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_203[iVar12], -1)))
					{
						iVar51 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uLocal_282[iVar12]))
					{
						HUD::REMOVE_BLIP(&(uLocal_282[iVar12]));
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_282[iVar12]))
				{
					HUD::REMOVE_BLIP(&(uLocal_282[iVar12]));
				}
				iVar12++;
			}
			if (iVar51 && iLocal_619)
			{
				iVar12 = 0;
				while (iVar12 < 4)
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_282[iVar12]))
					{
						HUD::REMOVE_BLIP(&(uLocal_282[iVar12]));
					}
					iVar12++;
				}
				iLocal_472 = 1;
				iLocal_465 = 1;
				GlobalFunc_7206(0, 1, 0, 0);
				GlobalFunc_4935();
				iLocal_685 = MISC::GET_GAME_TIMER() + 300;
			}
			if (!iLocal_472)
			{
				iLocal_472 = 1;
			}
		}
		else
		{
			if (!bLocal_554)
			{
				bLocal_554 = GlobalFunc_2867("FIB2_HELICOPTERS_GONE");
			}
			if ((MISC::GET_GAME_TIMER() >= iLocal_685 && iLocal_42 != 1) && !GlobalFunc_111())
			{
				iVar12 = 0;
				while (iVar12 < 4)
				{
					func_826(iVar12);
					iVar12++;
				}
				func_627(6, 0, 0, 0, 0, 1, 1, 1);
			}
		}
	}
}

void func_627(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x6B598
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				Var1 = { func_405(43) };
				fVar4 = -65.4f;
				break;
			
			case 1:
				if (!bLocal_376)
				{
					Var1 = { func_405(1) };
					fVar4 = 135.8f;
				}
				else
				{
					Var1 = { func_405(20) };
					fVar4 = -158.1f;
				}
				break;
			
			case 2:
				if (!bLocal_376)
				{
					Var1 = { func_405(5) };
					fVar4 = -15.08f;
				}
				else
				{
					Var1 = { func_405(8) };
					fVar4 = 167.9f;
				}
				break;
			
			case 3:
				Var1 = { 110.2f, -618.2f, 258.3f };
				fVar4 = 157.8f;
				break;
			
			case 4:
				Var1 = { 99.2f, -618f, 206.9f };
				fVar4 = -96.5f;
				break;
			
			case 5:
				Var1 = { -139.47f, -594.4f, 210.8f };
				fVar4 = -96.9f;
				break;
			
			case 6:
				if (!bLocal_376)
				{
					Var1 = { func_405(38) };
					fVar4 = -129.27f;
				}
				else
				{
					Var1 = { func_405(39) };
					fVar4 = -124f;
				}
				break;
		}
		if (!Global_3 || bLocal_1154)
		{
			GlobalFunc_2657();
			if (bParam5)
			{
				MISC::CLEAR_AREA(Var1, 10000f, 1, 0, 0, 0);
			}
			SYSTEM::WAIT(0);
			if (!bParam4)
			{
				if (GlobalFunc_Is_Mission_Retry() && !iLocal_604)
				{
					if (iParam0 >= 2)
					{
						STREAMING::REQUEST_IPL("DT1_05_FIB_Reflection");
					}
					GlobalFunc_4972(Var1, fVar4, 1, 0);
				}
				else
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var1, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fVar4);
				}
			}
		}
		SYSTEM::WAIT(0);
	}
	if (iParam0 == 3)
	{
		func_608(1, 0);
	}
	else if (iParam0 == 4)
	{
		func_608(1, 1);
	}
	else
	{
		func_608(0, 0);
	}
	bVar5 = true;
	if ((Global_3 && iParam0 == 1) && !bLocal_1154)
	{
		bVar5 = false;
	}
	func_821(iParam0, bVar5, 0);
	func_816(iParam0, bVar5, 0);
	func_813(iParam0, bVar5, 0);
	func_808(iParam0, bVar5, 0);
	func_806(iParam0);
	func_300();
	func_801(iParam0, bVar5, 0);
	func_794(iParam0, bVar5, 0);
	func_788(iParam0, bVar5, 0);
	func_787(1);
	if (bParam7)
	{
		CUTSCENE::REMOVE_CUTSCENE();
		iLocal_34 = 0;
	}
	GlobalFunc_7206((iParam2 || bParam1), (iParam2 || bParam1), 1, 0);
	if (iParam0 >= 2 && iParam0 <= 4)
	{
		PHYSICS::ROPE_LOAD_TEXTURES();
		if (bParam1)
		{
			while (!PHYSICS::ROPE_ARE_TEXTURES_LOADED())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		PHYSICS::ROPE_UNLOAD_TEXTURES();
	}
	if (bParam1)
	{
		iVar6 = func_786(iParam0);
		iVar7 = GlobalFunc_237(iVar6);
		if (GlobalFunc_8315() != iVar6)
		{
			while (!func_785(&(iLocal_63[iVar7]), iVar6, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) + Vector(-1f, 0f, 0f), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			while (!GlobalFunc_9019(&iLocal_63, iVar7))
			{
				SYSTEM::WAIT(0);
			}
			while (!GlobalFunc_10980(&iLocal_63, 1, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[iVar0]))
				{
					PED::DELETE_PED(&(iLocal_63[iVar0]));
				}
				iVar0++;
			}
		}
	}
	if (bParam1 || bParam4)
	{
		if (bParam1)
		{
			iVar0 = 0;
			while (iVar0 <= 9)
			{
				GlobalFunc_200(&uLocal_923, iVar0);
				iVar0++;
			}
		}
		switch (GlobalFunc_8315())
		{
			case 0:
				GlobalFunc_173(&uLocal_923, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				break;
			
			case 2:
				GlobalFunc_173(&uLocal_923, 1, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				break;
			
			case 1:
				GlobalFunc_173(&uLocal_923, 2, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				break;
		}
		iLocal_63.f_6 = GlobalFunc_237(func_786(iParam0));
		func_747(iParam0);
		if (iParam0 == 3)
		{
			PED::SET_PED_PRELOAD_PROP_DATA(PLAYER::PLAYER_PED_ID(), 1, 2, 0);
			iVar8 = MISC::GET_GAME_TIMER() + 2000;
			bVar9 = false;
			while (!bVar9)
			{
				SYSTEM::WAIT(0);
				if (MISC::GET_GAME_TIMER() >= iVar8 || PED::HAS_PED_PRELOAD_PROP_DATA_FINISHED(PLAYER::PLAYER_PED_ID()))
				{
					bVar9 = true;
				}
			}
		}
		func_746(PLAYER::PLAYER_PED_ID(), func_786(iParam0), iParam0);
		if (bParam1)
		{
			if (!Global_3)
			{
				GlobalFunc_2868();
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	if (bParam1)
	{
		if (iParam0 == 5)
		{
			iLocal_440 = 1;
		}
	}
	func_744(&iLocal_63, 1, 3);
	if (iParam0 == 4)
	{
		func_744(&iLocal_63, 0, 9);
	}
	else
	{
		func_744(&iLocal_63, 0, 0);
	}
	if (iParam0 >= 2)
	{
		GlobalFunc_7621(67, 1, 0, 1, 0);
		if (!GlobalFunc_188())
		{
			STREAMING::REQUEST_IPL("DT1_05_FIB_Reflection");
		}
	}
	else
	{
		GlobalFunc_7621(67, 0, 0, 1, 0);
		if (!GlobalFunc_188())
		{
			STREAMING::REMOVE_IPL("DT1_05_FIB_Reflection");
		}
	}
	if (iParam0 == 3 || iParam0 == 5)
	{
		GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(2f);
	}
	else
	{
		GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
	}
	if (iParam0 == 3)
	{
		GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(2.1f);
	}
	else
	{
		GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(1f);
	}
	if (bParam1)
	{
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("extrasunny");
	}
	if (iParam0 >= 3)
	{
		AUDIO::SET_AUDIO_FLAG("ListenerReverbDisabled", 1);
	}
	else
	{
		AUDIO::SET_AUDIO_FLAG("ListenerReverbDisabled", 0);
	}
	if (bParam3)
	{
		if (iParam0 != 5 || iLocal_440)
		{
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
		}
	}
	if (bParam1)
	{
		if (iParam0 >= 2)
		{
			func_379(2, 1);
			func_379(0, 1);
			func_379(1, 1);
		}
	}
	if (iParam0 == 3 || iParam0 == 4)
	{
		GRAPHICS::_0x5F6DF3D92271E8A1(1);
	}
	else
	{
		GRAPHICS::_0x5F6DF3D92271E8A1(0);
	}
	GlobalFunc_2779(&iLocal_63, 1, 0, 2);
	GlobalFunc_4948(&uLocal_1101, 0, 0);
	switch (iParam0)
	{
		case 0:
			func_735(bParam1);
			func_734();
			uLocal_265 = func_416(iLocal_153, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_405(43), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -65.4f);
			if (iLocal_597)
			{
				GlobalFunc_9025(&Local_1089, 0, 0, 2000, 1, 1, 0, 1);
			}
			break;
		
		case 1:
			func_731();
			if (bParam1)
			{
				if (GlobalFunc_Is_Mission_Retry())
				{
					iLocal_620 = 1;
				}
				MISC::CLEAR_AREA_OF_PEDS(119.471f, -686.3906f, 41.02894f, 30f, 0);
				func_729();
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			if (!Global_3)
			{
				iVar10 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar10, 1, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar10, 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar10, 1, 1);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar10);
				}
			}
			if (bParam1)
			{
				if (!Global_3)
				{
				}
				else if (bLocal_1153)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[1], -1);
					}
				}
			}
			if (!Global_3)
			{
				if (!bLocal_376)
				{
					func_728(bParam1);
				}
			}
			if (bParam1)
			{
				func_734();
			}
			func_725(bParam1);
			if (bParam1)
			{
				if (!bLocal_376)
				{
					if (!bParam4)
					{
						func_724(0, 1);
					}
					iLocal_397 = 0;
					iLocal_398 = 0;
					func_723(0);
					func_722(0);
					SYSTEM::WAIT(200);
				}
				else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
				{
					ENTITY::SET_ENTITY_COORDS(iLocal_199[1], func_405(20), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iLocal_199[1], -158.1f);
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_199[0], 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_199[0]);
			}
			GlobalFunc_173(&uLocal_923, 2, 0, "FRANKLIN", 0, 1);
			iLocal_658 = (MISC::GET_GAME_TIMER() + 45000);
			if (!HUD::DOES_BLIP_EXIST(Global_89491))
			{
			}
			else
			{
				Global_89491.f_1 = 1;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
			{
				AUDIO::SET_VEH_RADIO_STATION(iLocal_199[1], "RADIO_01_CLASS_ROCK");
			}
			if (Global_3)
			{
				if (Global_7)
				{
					GlobalFunc_2867("FIB2_CAR_TO_CS");
				}
				else
				{
					GlobalFunc_2867("FIB2_CAR_TO_CS");
				}
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (!bLocal_376)
				{
					func_605(2);
				}
				bLocal_391 = false;
				bLocal_392 = false;
			}
			else
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_199[0], 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_199[0], 1);
				}
				if (!PED::IS_PED_INJURED(iLocal_63[0]))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_63[0]);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_63[0]))
			{
				PED::SET_PED_PRELOAD_PROP_DATA(iLocal_63[0], 1, 2, 0);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_63[0], 0);
				PED::SET_PED_CONFIG_FLAG(iLocal_63[0], 26, 1);
				PED::SET_PED_CONFIG_FLAG(iLocal_63[0], 118, 0);
			}
			if (bParam1)
			{
			}
			else if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) != 4)
			{
				GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			}
			func_398(1);
			GlobalFunc_2867("FIB2_HELI_LIFT_OFF");
			break;
		
		case 3:
			GRAPHICS::_0x0AE73D8DF3A762B2(0);
			AUDIO::OVERRIDE_PLAYER_GROUND_MATERIAL(MISC::GET_HASH_KEY("AM_BASE_GLASS_STRONG"), 1);
			func_721(1);
			iLocal_251 = WEAPON::CREATE_WEAPON_OBJECT(func_624(0), 999, 124.27f, -623.83f, 261.85f, 1, 1065353216, 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			if (bParam1)
			{
			}
			else
			{
				GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneMichael", 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
			}
			iVar0 = 0;
			while (iVar0 < 15)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_209[iVar0], 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_209[iVar0]))
					{
						VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_209[iVar0]);
					}
				}
				iVar0++;
			}
			VEHICLE::SET_FAR_DRAW_VEHICLES(1);
			if (!bParam1)
			{
				iVar11 = 3;
				fVar12 = 0.4f;
				fVar13 = -8.2f;
			}
			else
			{
				iVar11 = 0;
				fVar12 = 0f;
				fVar13 = -13.5f;
			}
			func_711(&Local_816, iLocal_199[0], func_405(14), func_405(15), fVar13, -63f, 1, 1, 0, 0, 0, iVar11, fVar12, 1, 1);
			func_710(&Local_816, 0.9f, 0.3f, 0.1f, 0.005f);
			if (!bParam1)
			{
				Local_816.f_26 = 1f;
				Local_816.f_24 = 1f;
				Local_816.f_22 = 9f;
				Local_816.f_25 = 24f;
			}
			func_708();
			CAM::SET_CAM_NEAR_DOF(Local_816.f_4, 2f);
			CAM::SET_CAM_FAR_DOF(Local_816.f_4, 18f);
			CAM::SET_CAM_DOF_STRENGTH(Local_816.f_4, 0.2f);
			GlobalFunc_717(&Local_816, 1);
			func_704(2, 1);
			Local_816.f_58 = 1;
			if (!bParam1)
			{
				Local_816.f_89 = 3;
				Local_816.f_90 = 4;
				Local_816.f_13 = { 110.11f, -617.99f, 264.15f };
			}
			else
			{
				Local_816.f_89 = 6;
				Local_816.f_90 = 7;
				Local_816.f_13 = { 111.5f, -618.8f, 258.81f };
			}
			Local_816.f_28 = 0.6f;
			GlobalFunc_5154(&Local_816, 0, 1, 1, 0);
			Local_816.f_77 = 1;
			if (!bParam1)
			{
				fVar14 = -0.247676f;
			}
			else
			{
				Local_816.f_22 = 0f;
				fVar14 = 0f;
			}
			GlobalFunc_5176(&Local_816, 1, 0, 0, 0, fVar14, 1);
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(2f);
			GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(2.1f);
			GlobalFunc_574(292, 0);
			func_398(3);
			if (bParam1)
			{
				SYSTEM::WAIT(0);
			}
			if (!bParam1)
			{
				func_5();
			}
			iLocal_727 = MISC::GET_GAME_TIMER() + 9000;
			func_421("SG_RAPPEL", 1, 0);
			if (bParam1)
			{
				GlobalFunc_2867("FIB2_RAPPEL_RESTART");
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_697(0);
				func_696(1);
				func_695(4);
				func_693(4);
				GlobalFunc_613(&Local_816);
				func_691(1, 1);
				func_690();
				func_445(1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				func_689(1, 4);
				bLocal_519 = true;
				bLocal_608 = false;
				iLocal_720 = 0;
				iLocal_667 = 0;
			}
			else
			{
				func_689(0, 4);
				if (iLocal_667 <= 2)
				{
					iLocal_667 = 0;
				}
				else if (iLocal_667 <= 3)
				{
					iLocal_667 = 1;
				}
				else if (iLocal_667 <= 4)
				{
					iLocal_667 = 2;
				}
				else if (iLocal_667 <= 6)
				{
					iLocal_667 = 3;
				}
				else if (iLocal_667 <= 7)
				{
					iLocal_667 = 4;
				}
				else if (iLocal_667 <= 8)
				{
					iLocal_667 = 5;
				}
				else if (iLocal_667 <= 9)
				{
					iLocal_667 = 6;
				}
				else if (iLocal_667 <= 10)
				{
					iLocal_667 = 7;
				}
				else
				{
					iLocal_667 = 8;
				}
			}
			VEHICLE::SET_FAR_DRAW_VEHICLES(0);
			GlobalFunc_73(1);
			GlobalFunc_7632(1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_199[0], 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_63[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[0], 1);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_63[0], 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_234))
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_687))
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_234, -1000f, 1);
				}
			}
			func_688(4);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_157))
			{
				PED::DELETE_PED(&iLocal_157);
				GlobalFunc_200(&uLocal_923, 6);
			}
			func_687();
			if (bParam1)
			{
				func_685();
			}
			if (bParam1)
			{
				GlobalFunc_5136(&Local_816, iLocal_199[0], func_405(14), func_405(15));
				func_704(3, 4);
			}
			iLocal_431 = 1;
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			iVar0 = 0;
			while (iVar0 < 6)
			{
				if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_167[iVar0], 1);
					uLocal_266[iVar0] = func_416(iLocal_167[iVar0], 1);
				}
				iVar0++;
			}
			func_683(0);
			func_681(1, 0);
			func_680(0);
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_63[0], func_624(0), 1);
			if (PAD::GET_ALLOW_MOVEMENT_WHILE_ZOOMED() && !PAD::_IS_USING_KEYBOARD(0))
			{
				func_426("SG_SNHLP", 0, -1);
			}
			else
			{
				func_426("SG_SNHLP2", 0, -1);
			}
			func_398(7);
			PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
			func_679(1, 0);
			if (bParam1)
			{
				GlobalFunc_2867("FIB2_SNIPE_RESTART");
			}
			break;
		
		case 5:
			if (bParam1)
			{
				bLocal_589 = false;
			}
			GlobalFunc_7632(0);
			if (PHYSICS::DOES_ROPE_EXIST(&(Local_816.f_5)))
			{
				PHYSICS::DELETE_ROPE(&(Local_816.f_5));
			}
			GlobalFunc_200(&uLocal_923, 7);
			GlobalFunc_200(&uLocal_923, 8);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
			{
				OBJECT::DELETE_OBJECT(&iLocal_233);
			}
			AUDIO::STOP_SOUND(iLocal_733);
			GlobalFunc_73(0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_197))
			{
				PED::DELETE_PED(&iLocal_197);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
			}
			if (!bParam1)
			{
				func_678(0);
			}
			func_677();
			if (bParam1)
			{
				bLocal_519 = true;
				iLocal_720 = 0;
				func_690();
				func_697(1);
				func_695(5);
				func_829(0, 0);
				PED::SET_PED_INTO_VEHICLE(iLocal_156, iLocal_199[0], 2);
				func_676();
				func_675();
				func_674();
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_625(), 0, 0);
			}
			func_398(9);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_199[0], 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_156))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_156, 1);
				ENTITY::SET_ENTITY_PROOFS(iLocal_156, 1, 1, 1, 1, 1, 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_63[2]))
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_63[2], 1);
			}
			if (!PED::IS_PED_INJURED(func_625()))
			{
				GlobalFunc_11257(func_625(), 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
			}
			func_445(0);
			if (GlobalFunc_8315() == 1)
			{
				PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
				PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
			}
			func_679(0, 1);
			iLocal_744 = MISC::GET_GAME_TIMER() + 25000;
			iLocal_740 = (MISC::GET_GAME_TIMER() + 35000);
			iLocal_747 = (MISC::GET_GAME_TIMER() + 120000);
			iLocal_750 = (MISC::GET_GAME_TIMER() + 60000);
			iLocal_760 = MISC::GET_GAME_TIMER() + 24000;
			func_673(0);
			iLocal_670 = MISC::GET_GAME_TIMER();
			if (bParam1)
			{
				SYSTEM::WAIT(500);
				GlobalFunc_2867("FIB2_ESCAPE_CHOPPER_RESTART");
			}
			break;
		
		case 6:
			GlobalFunc_200(&uLocal_923, 6);
			GlobalFunc_2998(&iLocal_63, 1, 0);
			if (bParam1)
			{
				func_675();
				func_674();
			}
			if (!PED::IS_PED_INJURED(iLocal_63[0]))
			{
				TASK::TASK_PAUSE(iLocal_63[0], 100);
				iLocal_225 = 0;
			}
			GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1f);
			GlobalFunc_2774(&iLocal_63, 1, 1);
			func_534(GlobalFunc_8315(), 1);
			if (bParam1)
			{
				iLocal_32 = 0;
				func_695(6);
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_INJURED(iLocal_156))
				{
					PED::SET_PED_INTO_VEHICLE(iLocal_156, iLocal_199[0], 2);
					func_676();
				}
				if (!PED::IS_PED_INJURED(iLocal_156))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_156, 1, 1, 1, 1, 1, 0, 0, 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_156, 1);
				}
				iLocal_42 = 0;
				iLocal_37 = 0;
				iLocal_499 = 0;
				bLocal_384 = true;
				bLocal_505 = true;
				iLocal_520 = 1;
				iLocal_461 = 0;
				iLocal_462 = 0;
				iLocal_466 = 0;
				iLocal_502 = 0;
				iLocal_501 = 0;
				bLocal_503 = false;
				bLocal_537 = true;
				bLocal_536 = true;
				iLocal_659 = 2;
				iLocal_559 = 0;
				iLocal_815 = 0;
				iLocal_514 = 0;
				iLocal_515 = 0;
				iLocal_684 = -1;
				iLocal_660 = MISC::GET_GAME_TIMER() + 7000;
				iLocal_732 = MISC::GET_GAME_TIMER();
				iLocal_757 = 0;
				fLocal_646 = 0f;
				if (bLocal_376)
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
				}
				else
				{
					GlobalFunc_2867("FIB2_FLIGHT_BACK_RT");
				}
			}
			break;
	}
	if (iParam0 <= 2)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		MISC::ENABLE_DISPATCH_SERVICE(5, 1);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		MISC::ENABLE_DISPATCH_SERVICE(5, 0);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
	}
	if (iParam0 == 3)
	{
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
	}
	else if (iParam0 == 4)
	{
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(1);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
	}
	else if (iParam0 == 5)
	{
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
		STREAMING::SET_PED_POPULATION_BUDGET(0);
	}
	else if (iParam0 == 6)
	{
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(1);
	}
	else
	{
		STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
		STREAMING::SET_PED_POPULATION_BUDGET(3);
	}
	if (bParam1)
	{
		if (iParam0 != 4 && iParam0 != 5)
		{
			if (iParam0 > 0)
			{
				if (!Global_3)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
				else if (bLocal_1153)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
			}
			else if (Global_3)
			{
				if (bLocal_1153)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				}
			}
		}
	}
	if (iParam0 == 1)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
		{
			GlobalFunc_504(iLocal_199[1], -1);
			GlobalFunc_2223(iLocal_199[1], -1);
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		GlobalFunc_504(iLocal_199[0], -1);
		GlobalFunc_2223(iLocal_199[0], -1);
	}
	if (iParam0 >= 3)
	{
		GlobalFunc_601(4, 1);
	}
	else
	{
		GlobalFunc_601(4, 0);
	}
	GlobalFunc_2904(&iLocal_63, 0, 0);
	GlobalFunc_2904(&iLocal_63, 1, 0);
	GlobalFunc_2904(&iLocal_63, 2, 0);
	GlobalFunc_2998(&iLocal_63, 0, 0);
	GlobalFunc_2998(&iLocal_63, 1, 0);
	GlobalFunc_2998(&iLocal_63, 2, 0);
	if (iParam0 < 4)
	{
		AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CIA_PS_WINDOW_UNBROKEN");
	}
	else
	{
		AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("V_CIA_PS_WINDOW_UNBROKEN", "V_CIA_PS_WINDOW_BROKEN");
	}
	iVar15 = 0;
	if (iParam0 >= 6)
	{
		iVar15 = 1;
	}
	if (func_668(iParam0))
	{
		GlobalFunc_Checkpoint2(iParam0, func_667(iParam0), iVar15, 0, 0, 1);
		if (iParam0 != 0 && !bParam1)
		{
			iLocal_654 = 0;
		}
	}
	if (bParam1)
	{
		while (CAM::IS_SCREEN_FADING_OUT())
		{
			SYSTEM::WAIT(0);
		}
		if (!iLocal_604)
		{
			if (GlobalFunc_Is_Mission_Retry())
			{
				if (GlobalFunc_188())
				{
					switch (iParam0)
					{
						case 2:
						case 6:
							iVar16 = iLocal_199[0];
							break;
						
						case 1:
							if (bLocal_376)
							{
								iVar16 = iLocal_199[1];
							}
							break;
					}
					iVar17 = 1;
					if (iParam0 == 3)
					{
						iVar17 = 0;
					}
					GlobalFunc_4967(iVar16, -1, iVar17);
					iLocal_604 = 1;
				}
			}
		}
		switch (iParam0)
		{
			case 1:
				if (bParam1)
				{
					func_724(0, 1);
				}
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
				else
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 1, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				break;
			
			case 4:
				if (bParam1)
				{
					func_678(1);
				}
				iVar18 = MISC::GET_GAME_TIMER() + 1000;
				while (MISC::GET_GAME_TIMER() < iVar18)
				{
					SYSTEM::WAIT(0);
					func_837(1, 1);
				}
				func_679(1, 0);
				break;
			
			case 5:
				func_679(0, 1);
				break;
			
			case 2:
			case 6:
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0], 0))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0], -1);
				}
				if (iParam0 == 2)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(18f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(20f, 1065353216);
				}
				if (iParam0 == 6)
				{
					if (!PED::IS_PED_INJURED(func_625()))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(func_625(), func_624(5), 1);
					}
				}
				break;
			}
	}
	switch (iParam0)
	{
		case 0:
			if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 1, 0);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			else
			{
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 1, 1, 0);
				PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 1300, 0, 1, 0);
			}
			break;
	}
	if (bParam1)
	{
		if (bParam6)
		{
			if (iParam0 == 1)
			{
				SYSTEM::WAIT(0);
			}
			if (iParam0 == 6)
			{
				iLocal_731 = MISC::GET_GAME_TIMER() + 500;
				while (MISC::GET_GAME_TIMER() < iLocal_731)
				{
					SYSTEM::WAIT(0);
					func_442();
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_199[0], 1, 0f, 0f, 0.15f, 0f, -7f, 0f, 0, 1, 1, 1, 0, 1);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_199[0], 25f);
				}
				SYSTEM::WAIT(0);
			}
			if (iParam0 != 5)
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
	iLocal_686 = MISC::GET_GAME_TIMER();
	iLocal_30 = iParam0;
}








































char* func_667(int iParam0)//Position - 0x7166D
{
	switch (iParam0)
	{
		case 0:
			return "Meet at food court";
			break;
		
		case 1:
			return "Get to chopper";
			break;
		
		case 2:
			return "Get to Agency building";
			break;
		
		case 3:
			return "Rappel to window";
			break;
		
		case 4:
			return "Snipe guards";
			break;
		
		case 5:
			return "Escape enemy chopper";
			break;
		
		case 6:
			return "Drop off Mr K";
			break;
	}
	return "invalid";
}

int func_668(int iParam0)//Position - 0x716F8
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			return 1;
			break;
	}
	return 0;
}





void func_673(int iParam0)//Position - 0x717F0
{
	var uVar0;
	
	if (iLocal_335[iParam0])
	{
		iLocal_335[iParam0] = 0;
		uVar0 = func_507(iParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(uVar0))
		{
			STREAMING::REMOVE_ANIM_DICT(sVar0);
		}
	}
}

void func_674()//Position - 0x71821
{
	int iVar0;
	
	iVar0 = func_625();
	if (!PED::IS_PED_INJURED(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		PED::SET_PED_INTO_VEHICLE(iVar0, iLocal_199[0], 1);
		PED::SET_PED_IN_VEHICLE_CONTEXT(iVar0, MISC::GET_HASH_KEY("MISSFBI2_MICHAEL_DRIVEBY"));
		PED::SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(iVar0, "clipset@missfbi2_driveby");
	}
}

void func_675()//Position - 0x7186E
{
	int iVar0;
	
	iVar0 = func_625();
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (iLocal_790 < 0)
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"), 0))
			{
				iLocal_790 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_assaultrifle"));
			}
			else if (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"), 0))
			{
				iLocal_790 = WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_carbinerifle"));
			}
		}
		if (WEAPON::GET_AMMO_IN_PED_WEAPON(iVar0, func_624(5)) == 0)
		{
			WEAPON::SET_PED_AMMO(iVar0, func_624(5), 1);
		}
		WEAPON::GIVE_WEAPON_TO_PED(iVar0, func_624(5), -1, 1, 1);
		WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, func_624(5));
		WEAPON::SET_PED_INFINITE_AMMO_CLIP(iVar0, 1);
	}
}

void func_676()//Position - 0x7190E
{
	if (!PED::IS_PED_INJURED(iLocal_156))
	{
		TASK::TASK_PLAY_ANIM(iLocal_156, func_507(19), "mrk_in_chopper", 1000f, -8f, -1, 1, 0, 0, 0, 0);
	}
}

void func_677()//Position - 0x71941
{
	if (!PED::IS_PED_INJURED(iLocal_156))
	{
		PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 8, 0, 0, 0);
	}
}

void func_678(bool bParam0)//Position - 0x7195E
{
	if (bParam0)
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		uLocal_919 = STREAMING::STREAMVOL_CREATE_SPHERE(115.08f, -619.93f, 207f, 5f, 13, 127);
	}
	else if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::STREAMVOL_DELETE(uLocal_919);
	}
}

void func_679(bool bParam0, bool bParam1)//Position - 0x719A2
{
	int iVar0;
	
	iVar0 = func_622();
	if (!PED::IS_PED_INJURED(iVar0))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(iVar0, func_624(4), 1);
	}
	if (!bParam1)
	{
		CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(3f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-2.7f, 1065353216);
		if (bParam0)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0.3f);
		}
		else
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		}
	}
	else
	{
		CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(1f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(4f, 1065353216);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	}
}

void func_680(int iParam0)//Position - 0x71A0C
{
	var uVar0;
	
	iLocal_335[iParam0] = 1;
	uVar0 = func_507(iParam0);
	STREAMING::REQUEST_ANIM_DICT(uVar0);
}

void func_681(bool bParam0, bool bParam1)//Position - 0x71A2A
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	int iVar5;
	float fVar6;
	
	iVar5 = func_625();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iLocal_167[iVar0], func_624(1), 1);
			if (bParam0)
			{
				func_682(iVar0, 4, &Var1, &uVar4);
				ENTITY::SET_ENTITY_COORDS(iLocal_167[iVar0], Var1, 1, 0, 0, 1);
			}
			switch (iVar0)
			{
				case 0:
					fVar6 = 107.8f;
					break;
				
				case 1:
					fVar6 = 79.65f;
					break;
				
				case 2:
					fVar6 = 65.18f;
					break;
				
				case 3:
					fVar6 = 20.96f;
					break;
				
				case 4:
					fVar6 = 93.09f;
					break;
			}
			ENTITY::SET_ENTITY_HEADING(iLocal_167[iVar0], fVar6);
			TASK::TASK_CLEAR_LOOK_AT(iLocal_167[iVar0]);
			if (iVar0 != 2 || !bParam1)
			{
				if (!PED::IS_PED_INJURED(iVar5))
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_167[iVar0], iVar5, -1, 1);
				}
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_COORD(iLocal_167[2], func_405(30), -1, 1, 0);
			}
			PED::FORCE_PED_MOTION_STATE(iLocal_167[iVar0], 1063765679, 1, 0, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_167[iVar0], 1, 0);
		}
		iVar0++;
	}
}

void func_682(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x71B53
{
	if (iParam0 <= 2)
	{
		switch (iParam1)
		{
			case 3:
				switch (iParam0)
				{
					case 0:
						*uParam2 = { 116.39f, -626.53f, 205.05f };
						*uParam3 = -22.3f;
						break;
					
					case 1:
						*uParam2 = { 123.7f, -622.05f, 205.05f };
						*uParam3 = 109.05f;
						break;
					
					case 2:
						*uParam2 = { 120.01f, -620.25f, 205.05f };
						*uParam3 = 50.78f;
						break;
				}
				break;
			
			case 4:
				switch (iParam0)
				{
					case 0:
						*uParam2 = { 117.05f, -618.45f, 205.05f };
						break;
					
					case 1:
						*uParam2 = { 116.5f, -620f, 205.05f };
						break;
					
					case 2:
						*uParam2 = { 115.9f, -620.9f, 205.05f };
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 3:
				*uParam2 = { 115.4f, -626.8f, 205.05f };
				*uParam3 = -30.95f;
				break;
			
			case 4:
				*uParam2 = { 123.7f, -617.3f, 205.05f };
				*uParam3 = 83.48f;
				break;
			
			case 5:
				*uParam2 = { 120.1f, -625.8f, 205.05f };
				*uParam3 = 83.48f;
				break;
			}
	}
}

void func_683(int iParam0)//Position - 0x71CBE
{
	char* sVar0;
	char* sVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	struct<3> Var10;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "hostage_loop";
			sVar1 = "hostage_loop_mrk";
			uVar2 = func_507(18);
			uVar3 = func_507(18);
			iVar4 = 1;
			bVar5 = true;
			bVar6 = false;
			break;
		
		case 1:
			sVar0 = "hostage_low_intro";
			sVar1 = "hostage_low_intro_mrk";
			uVar2 = func_507(18);
			uVar3 = func_507(18);
			iVar4 = 0;
			bVar5 = false;
			bVar6 = false;
			break;
		
		case 2:
			sVar0 = "hostage_loop_low";
			sVar1 = "hostage_loop_low_mrk";
			uVar2 = func_507(18);
			uVar3 = func_507(18);
			iVar4 = 1;
			bVar5 = false;
			bVar6 = false;
			break;
		
		case 3:
			sVar0 = "extraction_sweep";
			sVar1 = "extraction_sweep_mrk";
			uVar2 = func_507(0);
			uVar3 = func_507(0);
			iVar4 = 0;
			bVar5 = false;
			bVar6 = true;
			break;
	}
	if (bVar5)
	{
		fVar7 = 1000f;
	}
	else
	{
		fVar7 = 8f;
	}
	if (bVar6)
	{
		fVar8 = -1000f;
	}
	else
	{
		fVar8 = -8f;
	}
	iVar9 = func_625();
	if (!PED::IS_PED_INJURED(iLocal_156))
	{
		Var10 = { 0f, 0f, 1.05f };
		uLocal_687 = PED::CREATE_SYNCHRONIZED_SCENE(func_405(29) - Var10, 0f, 0f, -125.7f, 2);
		if (!PED::IS_PED_INJURED(iVar9))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(iVar9, uLocal_687, uVar2, sVar0, fVar7, fVar8, 0, 0, 1148846080, 0);
			if (bVar5)
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar9, 0, 0);
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_156))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_156, uLocal_687, uVar3, sVar1, fVar7, fVar8, 0, 0, 1148846080, 0);
			if (bVar5)
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_156, 0, 0);
			}
		}
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_687, iVar4);
	}
	iLocal_38 = iParam0;
}


void func_685()//Position - 0x71ECD
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_686(iVar0);
		iVar0++;
	}
}

void func_686(int iParam0)//Position - 0x71EED
{
	iLocal_696[iParam0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(300, 3000));
}

void func_687()//Position - 0x71F0B
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					iVar1 = 4;
					sVar2 = "FBI2AGENT1";
					break;
				
				case 1:
					iVar1 = 5;
					sVar2 = "FBI2AGENT2";
					break;
				
				case 2:
					iVar1 = 6;
					sVar2 = "FBI2AGENT6";
					break;
				
				case 3:
					iVar1 = 7;
					sVar2 = "FBI2AGENT4";
					break;
				
				case 4:
					iVar1 = 8;
					sVar2 = "FBI2AGENT3";
					break;
			}
			GlobalFunc_173(&uLocal_923, iVar1, iLocal_167[iVar0], sVar2, 0, 1);
		}
		iVar0++;
	}
}

void func_688(int iParam0)//Position - 0x71FAD
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 3:
			Var0 = { 114.35f, -619.46f, 205.05f };
			fVar3 = 42.6912f;
			break;
		
		case 4:
			Var0 = { 113.62f, -617.81f, 205.05f };
			fVar3 = -76.1837f;
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_234))
	{
		iLocal_234 = OBJECT::CREATE_OBJECT(func_16(25), Var0, 1, 1, 0);
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_234, Var0, 0, 0, 1);
	}
	ENTITY::SET_ENTITY_HEADING(iLocal_234, fVar3);
	if (iParam0 == 3)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_234, 1);
	}
	else
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_234, 0);
	}
}

void func_689(bool bParam0, int iParam1)//Position - 0x7204E
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_156))
	{
		if (iParam1 >= 4)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 8, 1, 0, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 8, 1, 0, 0);
		}
		if (bParam0)
		{
			bVar0 = false;
			while (!bVar0)
			{
				SYSTEM::WAIT(0);
				if (!PED::IS_PED_INJURED(iLocal_156))
				{
					if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_156))
					{
						bVar0 = true;
					}
				}
				else
				{
					bVar0 = true;
				}
			}
		}
	}
}

void func_690()//Position - 0x720B1
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_622();
	if (!PED::IS_PED_INJURED(iVar0))
	{
		iVar1 = func_624(4);
		if (!iLocal_562)
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(iVar0, iVar1, 0))
			{
				iLocal_758 = WEAPON::GET_AMMO_IN_PED_WEAPON(iVar0, iVar1);
			}
			else
			{
				iLocal_758 = -1;
			}
			iLocal_562 = 1;
		}
		WEAPON::GIVE_WEAPON_TO_PED(iVar0, iVar1, 200, 1, 1);
	}
}

void func_691(bool bParam0, int iParam1)//Position - 0x72105
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bParam0)
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
	}
	else
	{
		iVar0 = iLocal_63[0];
	}
	iVar1 = func_624(0);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, iVar1, 0))
		{
			WEAPON::GIVE_WEAPON_TO_PED(iVar0, iVar1, 160, iParam1, 1);
		}
		else
		{
			iVar2 = WEAPON::GET_AMMO_IN_PED_WEAPON(iVar0, iVar1);
			if (iVar2 < 160)
			{
				WEAPON::ADD_AMMO_TO_PED(iVar0, iVar1, (160 - iVar2));
			}
			WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iVar1, iParam1);
		}
	}
}


void func_693(int iParam0)//Position - 0x721AB
{
	int iVar0;
	char* sVar1;
	struct<3> Var2;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_167[iVar0]))
		{
			func_682(iVar0, iParam0, &Var2, &fVar5);
			iLocal_167[iVar0] = PED::CREATE_PED(26, func_16(9), Var2, fVar5, 1, 1);
			if (iParam0 == 3 && iVar0 <= 2)
			{
				iVar6 = 0;
			}
			else
			{
				iVar6 = 1;
			}
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_167[iVar0], func_624(1), -1, iVar6, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_167[iVar0], 1);
			PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_167[iVar0]);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_167[iVar0], 1);
			PED::SET_PED_KEEP_TASK(iLocal_167[iVar0], 1);
			PED::SET_PED_ACCURACY(iLocal_167[iVar0], 2);
			ENTITY::SET_ENTITY_PROOFS(iLocal_167[iVar0], 0, 0, 0, 1, 1, 0, 0, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_167[iVar0], iLocal_1088);
			PED::SET_PED_CONFIG_FLAG(iLocal_167[iVar0], 188, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_167[iVar0], 208, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_167[iVar0], 118, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_167[iVar0], 198, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_167[iVar0], 38, 1);
			PED::_0x733C87D4CE22BEA2(iLocal_167[iVar0]);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_167[iVar0], 16);
			GlobalFunc_593(iLocal_167[iVar0], 0);
			Local_44[iVar0 /*3*/] = 0;
			Local_44[iVar0 /*3*/].f_1 = 0;
			Local_44[iVar0 /*3*/].f_2 = -1;
			switch (iVar0)
			{
				case 0:
					iVar7 = 0;
					iVar8 = 2;
					iVar9 = 0;
					iVar10 = 0;
					iVar11 = 1;
					iVar13 = 1;
					if (iParam0 == 3)
					{
						iVar12 = 1;
					}
					else
					{
						iVar12 = 3;
					}
					sVar1 = "GUARD0";
					break;
				
				case 1:
					iVar7 = 1;
					iVar8 = 1;
					iVar9 = 1;
					iVar10 = 0;
					iVar11 = 2;
					iVar13 = 0;
					if (iParam0 == 3)
					{
						iVar12 = 1;
					}
					else
					{
						iVar12 = 3;
					}
					sVar1 = "GUARD1";
					break;
				
				case 2:
					iVar7 = 0;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 3;
					iVar11 = 0;
					iVar13 = 1;
					if (iParam0 == 3)
					{
						iVar12 = 1;
					}
					else
					{
						iVar12 = 3;
					}
					sVar1 = "GUARD2";
					break;
				
				case 3:
					iVar7 = 1;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 2;
					iVar11 = 2;
					iVar13 = 0;
					iVar12 = 2;
					sVar1 = "GUARD3";
					break;
				
				case 4:
					iVar7 = 2;
					iVar8 = 0;
					iVar9 = 2;
					iVar10 = 0;
					iVar11 = 1;
					iVar13 = 0;
					iVar12 = 3;
					sVar1 = "GUARD4";
					break;
				
				case 5:
					iVar7 = 1;
					iVar8 = 0;
					iVar9 = 2;
					iVar10 = 0;
					iVar11 = 2;
					iVar13 = 0;
					iVar12 = 3;
					sVar1 = "GUARD5";
					break;
			}
			PED::SET_PED_COMPONENT_VARIATION(iLocal_167[iVar0], 0, iVar7, iVar8, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_167[iVar0], 3, iVar9, iVar10, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_167[iVar0], 4, 0, iVar11, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_167[iVar0], 9, iVar13, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_167[iVar0], 2, iVar12, 0, 0);
			if (iParam0 == 3)
			{
				if (iVar0 >= 3)
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_167[iVar0], 0);
				}
			}
			PED::SET_PED_NAME_DEBUG(iLocal_167[iVar0], sVar1);
		}
		iVar0++;
	}
}


void func_695(int iParam0)//Position - 0x72509
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_156))
	{
		switch (iParam0)
		{
			case 3:
			case 4:
			case 5:
			case 6:
				Var0 = { func_405(27) };
				fVar3 = 255.98f;
				break;
		}
		if (iParam0 == 3)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = 7;
		}
		iLocal_156 = PED::CREATE_PED(26, func_16(iVar4), Var0, fVar3, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 1, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 6, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 7, 0, 0, 0);
		if (iParam0 == 4)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 8, 1, 0, 0);
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 8, 0, 0, 0);
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 9, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 10, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_156, 11, 0, 0, 0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_156, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_156, 1862763509);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_156, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_156, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_156, 208, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_156, 118, 0);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_156, 1);
		PED::SET_PED_KEEP_TASK(iLocal_156, 1);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_156, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_156, 1);
		if (iParam0 >= 4)
		{
			PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_156, 8, 2, 0);
		}
		else
		{
			PED::SET_PED_PRELOAD_VARIATION_DATA(iLocal_156, 8, 1, 0);
		}
		GlobalFunc_173(&uLocal_923, 3, iLocal_156, "MisterK", 0, 1);
	}
}

void func_696(bool bParam0)//Position - 0x72663
{
	struct<3> Var0;
	float fVar3;
	
	Var0 = { -135.52f, -592.39f, 210.68f };
	fVar3 = -96.1f;
	if (bParam0)
	{
		func_785(&iLocal_197, 1, Var0, fVar3, 0, 0, 0);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_197, func_624(4), 800, 1, 1);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_197, 0);
		GlobalFunc_11257(iLocal_197, 14, 158, 1, -1, 0, 0, 0, -1, -1, -1, 0);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_197, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_197, 1);
		ENTITY::SET_ENTITY_PROOFS(iLocal_197, 1, 1, 1, 1, 1, 0, 0, 0);
		PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(iLocal_197, "Mood_Angry_1", 0);
		GlobalFunc_11257(iLocal_197, 12, 19, 0, -1, 0, 0, 0, -1, -1, -1, 0);
	}
	else if (!PED::IS_PED_INJURED(iLocal_197))
	{
		ENTITY::SET_ENTITY_COORDS(iLocal_197, Var0, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_197, fVar3);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_197, 1);
		WEAPON::SET_CURRENT_PED_WEAPON(iLocal_197, func_624(4), 1);
	}
	if (!PED::IS_PED_INJURED(iLocal_197))
	{
		TASK::TASK_PLAY_ANIM(iLocal_197, func_507(2), "FRANKLIN_SNIPER_CROUCH", 1000f, -8f, -1, 1, 0, 0, 0, 0);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_197, 0, 0);
	}
}

void func_697(bool bParam0)//Position - 0x72768
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[0]))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[0]);
		}
		if (!bParam0)
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_199[0], 2, func_698(), 1);
		}
		else
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_199[0], 11, func_698(), 1);
		}
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_199[0], 1, 1);
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_199[0]);
		if (!bParam0)
		{
			fLocal_635 = 20500f;
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_199[0], 0f);
		}
		else
		{
			fLocal_635 = 2500f;
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_199[0], 0.9f);
		}
		VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_199[0], fLocal_635);
		VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_199[0], 1);
	}
}

char* func_698()//Position - 0x72815
{
	return "SnatchNGrab";
}






void func_704(int iParam0, int iParam1)//Position - 0x73203
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	struct<3> Var6;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		switch (iParam0)
		{
			case 0:
				Local_816.f_5 = PHYSICS::ADD_ROPE(ENTITY::GET_ENTITY_COORDS(Local_816.f_6, 1), 0f, 90f, 0f, 40f, 4, 0.5f, 0.5f, 1.2f, 0, 0, 1, 50f, 0, 0);
				PHYSICS::ATTACH_ROPE_TO_ENTITY(Local_816.f_5, iLocal_199[0], ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], func_405(14)), 0);
				PHYSICS::START_ROPE_UNWINDING_FRONT(Local_816.f_5);
				break;
			
			case 1:
				Local_816.f_5 = PHYSICS::ADD_ROPE(111.136f, -617.365f, 271.284f, 0f, 90f, 0f, 20f, 4, -1f, 0.5f, 1.2f, 0, 0, 1, 2f, 0, 0);
				break;
			
			case 2:
				func_706(&Local_816, 72.7f, 1, 1, 40f, 60.7f);
				break;
			
			case 3:
			case 4:
				if (iParam1 != 6)
				{
					fVar0 = 63f;
					fVar1 = 63f;
					if (!bLocal_522)
					{
						fVar4 = 2f;
						fVar2 = 15f;
						if (iParam1 < 4)
						{
							fVar3 = 1f;
						}
						else
						{
							fVar3 = 0.7f;
						}
					}
					else
					{
						fVar4 = 6f;
						fVar2 = 1.3f;
						fVar3 = 15f;
					}
				}
				else
				{
					fVar0 = 63f;
					fVar1 = 63f;
					fVar4 = 10f;
					fVar2 = 15f;
					fVar3 = 1f;
				}
				Local_816.f_5 = PHYSICS::ADD_ROPE(ENTITY::GET_ENTITY_COORDS(Local_816.f_6, 1), 0f, 90f, 0f, fVar1, 4, -1f, fVar2, fVar4, 0, 0, 1, fVar3, 0, 0);
				GlobalFunc_604(&Local_816, fVar0);
				Var6 = { ENTITY::GET_ENTITY_COORDS(Local_816.f_6, 1) };
				iVar5 = 0;
				while (iVar5 < Local_816.f_91)
				{
					PHYSICS::PIN_ROPE_VERTEX(Local_816.f_5, iVar5, Var6.x, Var6.f_1, (Var6.f_2 - (Local_816.f_31 * IntToFloat(iVar5))));
					iVar5++;
				}
				Local_816.f_58 = 1;
				Local_816.f_57 = 1;
				break;
			
			case 5:
				break;
			}
	}
}


void func_706(var uParam0, float fParam1, bool bParam2, bool bParam3, float fParam4, float fParam5)//Position - 0x73426
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<3> Var3;
	
	GlobalFunc_605(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		if (bParam2)
		{
			iVar1 = 4;
		}
		else
		{
			iVar1 = 1;
		}
		if (fParam5 < 0f)
		{
			fVar2 = fParam1;
		}
		else
		{
			fVar2 = fParam5;
		}
		uParam0->f_5 = PHYSICS::ADD_ROPE(ENTITY::GET_ENTITY_COORDS(uParam0->f_6, 1), 0f, 90f, 0f, fVar2, iVar1, fVar2, 0.5f, 0.5f, 1, 0, 1, fParam4, 0, 0);
		GlobalFunc_604(uParam0, fParam1);
		if (bParam3)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_91)
			{
				PHYSICS::PIN_ROPE_VERTEX(uParam0->f_5, iVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_6, 0f, 0f, -(uParam0->f_31 * IntToFloat(iVar0))));
				iVar0++;
			}
			uParam0->f_59 = 0;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_91)
			{
				if (iVar0 == 0)
				{
					Var3 = { 0f, 0f, 0f };
				}
				else
				{
					if ((iVar0 % 2) == 0)
					{
						Var3.x = 1f;
					}
					else
					{
						Var3.x = -1f;
					}
					Var3.f_1 = 0f;
					Var3.f_2 = (IntToFloat(iVar0) * -0.02f);
				}
				PHYSICS::PIN_ROPE_VERTEX(uParam0->f_5, iVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_6, Var3));
				iVar0++;
			}
			uParam0->f_59 = 1;
		}
		uParam0->f_60 = 0;
		uParam0->f_58 = 0;
		uParam0->f_57 = 1;
	}
}


void func_708()//Position - 0x73555
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	fVar0 = ((Local_816.f_10.f_2 * -1f) - 13.5f);
	if (fVar0 >= 45f)
	{
		if (fLocal_643 < 0.7f)
		{
			fLocal_644 = (fLocal_644 + (0.07f * SYSTEM::TIMESTEP()));
			if (fLocal_644 > 0.14f)
			{
				fLocal_644 = 0.14f;
			}
		}
		else
		{
			fLocal_644 = (fLocal_644 - (0.038f * SYSTEM::TIMESTEP()));
			if (fLocal_644 < 0f)
			{
				fLocal_644 = 0f;
			}
		}
		fLocal_643 = (fLocal_643 + (fLocal_644 * SYSTEM::TIMESTEP()));
	}
	if (fLocal_643 < 0f)
	{
		fLocal_643 = 0f;
	}
	else if (fLocal_643 > 1f)
	{
		fLocal_643 = 1f;
	}
	iVar1 = (-83f + ((-18f - -83f) * fLocal_643));
	iVar2 = (-4.5f + ((-4f - -4.5f) * fLocal_643));
	iVar3 = (2.8f + ((2f - 2.8f) * fLocal_643));
	iVar4 = (10f + ((60f - 10f) * fLocal_643));
	iVar5 = (170f + ((90f - 170f) * fLocal_643));
	GlobalFunc_616(&Local_816, iVar1, iVar2, 1.2f, iVar4, iVar5, 0.4f, iVar3, 0.02f, 7f, -6f, 2f, 44.2f);
}


void func_710(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x736F6
{
	uParam0->f_93 = fParam1;
	uParam0->f_94 = fParam2;
	uParam0->f_95 = fParam3;
	uParam0->f_96 = fParam4;
}

void func_711(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5, float fParam8, float fParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13, bool bParam14, int iParam15, float fParam16, bool bParam17, bool bParam18)//Position - 0x73716
{
	if (!uParam0->f_55)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam13))
		{
			uParam0->f_3 = PLAYER::PLAYER_PED_ID();
		}
		else
		{
			uParam0->f_3 = iParam13;
		}
		uParam0->f_1 = 0;
		uParam0->f_2 = 1;
		GlobalFunc_616(uParam0, 1114703135, -1068624773, 1067030938, 1125515264, 1106247680, 1053609165, 1076677837, 1017370378, 1088421888, -1061158912, 1073741824, 1111490560);
		if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
		}
		else if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 118, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 208, 1);
			uParam0->f_75 = 1;
			uParam0->f_76 = 1;
		}
		if (bParam17)
		{
			if (!bParam12)
			{
				GlobalFunc_5137(uParam0);
			}
		}
		GlobalFunc_5136(uParam0, iParam1, Param2, Param5);
		GlobalFunc_613(uParam0);
		uParam0->f_10 = { 0f, 0f, fParam8 };
		uParam0->f_27 = fParam9;
		uParam0->f_61 = 0;
		uParam0->f_62 = 0;
		uParam0->f_63 = 0;
		if (!bParam11)
		{
			uParam0->f_63 = 1;
		}
		uParam0->f_56 = bParam12;
		uParam0->f_64 = 1;
		uParam0->f_65 = 0;
		uParam0->f_66 = 0;
		uParam0->f_67 = 0;
		uParam0->f_71 = 0;
		uParam0->f_74 = 0;
		uParam0->f_29 = 3f;
		uParam0->f_32 = 1f;
		uParam0->f_33 = 0.75f;
		uParam0->f_34 = 1f;
		if (bParam14)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, joaat("weapon_unarmed"), 1);
		}
		func_718(uParam0, iParam15, 1, 0, 1, fParam16, 0);
		func_712(uParam0, 1, 0, 1, 1, 0);
		if (bParam10)
		{
			uParam0->f_37 = 0f;
			uParam0->f_38 = uParam0->f_37;
			uParam0->f_35 = 0f;
			uParam0->f_50 = 0f;
			GlobalFunc_5176(uParam0, 0, 0, 0, 0, -1000f, bParam18);
		}
		uParam0->f_55 = 1;
	}
}

void func_712(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)//Position - 0x738BC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	struct<3> Var16;
	struct<3> Var19;
	float fVar22;
	
	if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
	{
		PAD::_0x7F4724035FDCA1DD(0);
		PAD::_0x7F4724035FDCA1DD(2);
	}
	if (!bParam1 || bParam2)
	{
		GlobalFunc_612(&iVar0, &iVar1, &iVar2, &iVar3, 0);
		if (PAD::_IS_USING_KEYBOARD(2))
		{
			iVar2 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 290) * 127f));
			iVar3 = SYSTEM::FLOOR((PAD::GET_CONTROL_UNBOUND_NORMAL(2, 291) * 127f));
		}
	}
	if (bParam2)
	{
		GlobalFunc_5176(uParam0, 0, iVar2, iVar3, 1, -998637568, 1);
	}
	bVar5 = false;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) && !PED::IS_PED_INJURED(uParam0->f_3))
	{
		switch (*uParam0)
		{
			case 0:
				if (!uParam0->f_59)
				{
					if (!uParam0->f_56)
					{
						if (bParam1)
						{
							if (uParam0->f_1 == 1)
							{
								bVar5 = true;
							}
						}
						else if (iVar1 > 100)
						{
							bVar5 = true;
						}
						if (bVar5)
						{
							if (uParam0->f_10.f_2 > uParam0->f_27)
							{
								func_718(uParam0, 1, 0, 0, 1, 0, 0);
							}
						}
					}
					else
					{
						if (bParam1)
						{
							if (uParam0->f_1 == 2)
							{
								bVar5 = true;
							}
						}
						else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, GlobalFunc_611()) || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, GlobalFunc_610()) && uParam0->f_68))
						{
							bVar5 = true;
						}
						if (bVar5)
						{
							if (!GlobalFunc_609(uParam0, 0) || uParam0->f_3 == PLAYER::PLAYER_PED_ID())
							{
								func_718(uParam0, 5, 0, 0, 1, 0, 0);
							}
						}
					}
				}
				break;
			
			case 1:
				if (bParam1)
				{
					if (uParam0->f_1 != 1)
					{
						bVar5 = true;
					}
				}
				else if (iVar1 < 100)
				{
					bVar5 = true;
				}
				bVar6 = false;
				if (uParam0->f_10.f_2 <= uParam0->f_27)
				{
					bVar5 = true;
					bVar6 = true;
				}
				if (bVar5)
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Walk", 3))
					{
						fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "Rappel_Walk");
						if (fVar4 >= 0.96f && fVar4 <= 1f)
						{
							ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, GlobalFunc_608(), "rappel_walk", 0.5f);
							func_718(uParam0, 0, 0, 0, 1, 0, 0);
						}
						else if (bVar6)
						{
							func_718(uParam0, 0, 0, 0, 1, 0f, 1);
						}
					}
					else
					{
						func_718(uParam0, 0, 0, 0, 1, 0, 0);
					}
				}
				break;
			
			case 4:
				if (uParam0->f_70)
				{
					uParam0->f_23 = (uParam0->f_23 - (3f * SYSTEM::TIMESTEP()));
				}
				else
				{
					uParam0->f_23 = (uParam0->f_23 + (3f * SYSTEM::TIMESTEP()));
				}
				uParam0->f_10 = (uParam0->f_10 + (uParam0->f_23 * SYSTEM::TIMESTEP()));
				if (uParam0->f_70)
				{
					if (uParam0->f_10 < 0f)
					{
						uParam0->f_10 = 0f;
						func_718(uParam0, 0, 0, 0, 1, 0, 0);
					}
				}
				else if (uParam0->f_10 > 0f)
				{
					uParam0->f_10 = 0f;
					func_718(uParam0, 0, 0, 0, 1, 0, 0);
				}
				break;
			
			case 2:
			case 3:
				bVar7 = false;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Jump_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "rappel_jump_c", 3))
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "rappel_jump_c", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, GlobalFunc_608(), "rappel_jump_c", uParam0->f_33);
						fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "rappel_jump_c");
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_c_Prop", 3))
							{
								if (fVar4 >= 0f && fVar4 <= 1f)
								{
									ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_c_Prop", fVar4);
									ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_c_Prop", uParam0->f_33);
								}
							}
						}
						if (!uParam0->f_77)
						{
							if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
							{
								if (!uParam0->f_78)
								{
									if (fVar4 >= 0.82f)
									{
										if (!GlobalFunc_111())
										{
											if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
											{
												AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 23, 0f, 0);
											}
										}
										uParam0->f_78 = 1;
									}
								}
							}
						}
					}
					else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Jump_a", 3))
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_3, GlobalFunc_608(), "rappel_jump_a", uParam0->f_34);
						fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "Rappel_Jump_a");
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_A_Prop", 3))
							{
								if (fVar4 >= 0f && fVar4 <= 1f)
								{
									ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_A_Prop", fVar4);
									ENTITY::SET_ENTITY_ANIM_SPEED(uParam0->f_8, GlobalFunc_608(), "Rappel_Jump_A_Prop", uParam0->f_34);
								}
							}
						}
						if (!uParam0->f_77)
						{
							if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
							{
								if (!uParam0->f_78)
								{
									if (fVar4 >= 0.74f)
									{
										if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
										{
											AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 23, 0f, 0);
										}
										uParam0->f_78 = 1;
									}
								}
							}
						}
					}
				}
				else if (MISC::GET_GAME_TIMER() >= uParam0->f_87 + 300 && iParam3)
				{
					bVar7 = true;
				}
				if (!bVar7)
				{
					if (fVar4 >= 0.99f)
					{
						bVar7 = true;
					}
					else
					{
						iVar8 = 0;
						if ((bParam1 && uParam0->f_1 != 0) || bParam5)
						{
							iVar8 = 1;
						}
						else if (uParam0->f_69)
						{
							if (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_610()))
							{
								iVar8 = 1;
							}
						}
						else if (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_611()) || (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_610()) && uParam0->f_68))
						{
							iVar8 = 1;
						}
						else if (uParam0->f_67)
						{
							if (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_610()))
							{
								iVar8 = 1;
							}
						}
						if ((iVar8 && fVar4 < 0.3f) && !(bParam1 && fVar4 > uParam0->f_32))
						{
							uParam0->f_24 = (fVar4 / 0.3f);
							if (uParam0->f_24 > 1f)
							{
								uParam0->f_24 = 1f;
							}
							else if (uParam0->f_24 < 0f)
							{
								uParam0->f_24 = 0f;
							}
						}
						else if (uParam0->f_26 < 0f)
						{
							if (iVar8 && !(bParam1 && fVar4 > uParam0->f_32))
							{
								uParam0->f_24 = 1f;
							}
							if (!uParam0->f_69)
							{
								uParam0->f_26 = (0.3f + ((0.65f - 0.3f) * uParam0->f_24));
								uParam0->f_25 = (4f + ((24f - 4f) * uParam0->f_24));
							}
							else
							{
								uParam0->f_26 = (0.3f + ((0.61f - 0.3f) * uParam0->f_24));
								uParam0->f_25 = (15f + ((30f - 15f) * uParam0->f_24));
							}
						}
						if (GlobalFunc_607(*uParam0, fVar4))
						{
							if (fVar4 <= uParam0->f_26 || (iVar8 && uParam0->f_26 < 0f))
							{
								if (uParam0->f_69)
								{
									uParam0->f_22 = (uParam0->f_22 + (25f * SYSTEM::TIMESTEP()));
								}
								else
								{
									uParam0->f_22 = (uParam0->f_22 + (8.5f * SYSTEM::TIMESTEP()));
								}
							}
							else
							{
								uParam0->f_22 = (uParam0->f_22 - (uParam0->f_25 * SYSTEM::TIMESTEP()));
							}
							if (!uParam0->f_69)
							{
								if (fVar4 <= uParam0->f_26 || uParam0->f_26 >= 0.65f)
								{
									fVar9 = 9f;
								}
								else
								{
									fVar9 = 4f;
								}
							}
							else
							{
								fVar9 = 13f;
							}
							if (uParam0->f_22 > fVar9)
							{
								uParam0->f_22 = fVar9;
							}
							else if (uParam0->f_22 < 0f)
							{
								uParam0->f_22 = 0f;
							}
							if (bParam5)
							{
								uParam0->f_22 = (uParam0->f_22 / 1.75f);
							}
						}
						else
						{
							uParam0->f_22 = 0f;
						}
					}
				}
				if (bVar7)
				{
					func_718(uParam0, 0, 0, 0, 1, 0, 0);
				}
				else if (*uParam0 == 2)
				{
					if (fVar4 <= 0.2f)
					{
						if (bParam1)
						{
							if (uParam0->f_1 == 2)
							{
								bVar5 = true;
							}
						}
						else if (iVar1 > 100)
						{
							bVar5 = true;
						}
						if (bVar5)
						{
							func_718(uParam0, 3, 0, 0, 0, 0, 0);
						}
					}
				}
				break;
			
			case 5:
				if (bParam1)
				{
					if (uParam0->f_1 == 2)
					{
						bVar5 = true;
					}
				}
				else
				{
					bVar5 = true;
				}
				if (GlobalFunc_609(uParam0, 0))
				{
					bVar5 = false;
				}
				if (bVar5)
				{
					if (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_611()) || bParam1)
					{
						uParam0->f_22 = (uParam0->f_22 + (2f * SYSTEM::TIMESTEP()));
						if (uParam0->f_22 >= 6f)
						{
							uParam0->f_22 = 6f;
						}
					}
					else
					{
						fVar10 = uParam0->f_22;
						if (fVar10 < uParam0->f_29)
						{
							fVar10 = uParam0->f_29;
						}
						uParam0->f_22 = (uParam0->f_22 + (2f * SYSTEM::TIMESTEP()));
						if (uParam0->f_22 >= fVar10)
						{
							uParam0->f_22 = fVar10;
						}
					}
				}
				else
				{
					uParam0->f_22 = (uParam0->f_22 - (5f * SYSTEM::TIMESTEP()));
					if (uParam0->f_22 <= 0f)
					{
						uParam0->f_22 = 0f;
						func_718(uParam0, 0, 0, 0, 1, 0, 0);
					}
				}
				break;
			
			case 6:
				bVar11 = false;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "rappel_to_free_rope", 3))
				{
					fVar4 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "rappel_to_free_rope");
					if (fVar4 <= 0.74f && fVar4 >= 0.38f)
					{
						uParam0->f_22 = (uParam0->f_22 + ((2f * 2f) * SYSTEM::TIMESTEP()));
						if (uParam0->f_22 >= uParam0->f_29)
						{
							uParam0->f_22 = uParam0->f_29;
						}
					}
					else
					{
						uParam0->f_22 = (uParam0->f_22 - (5f * SYSTEM::TIMESTEP()));
						if (uParam0->f_22 <= 0f)
						{
							uParam0->f_22 = 0f;
						}
					}
					if (fVar4 >= 0.98f)
					{
						bVar11 = true;
					}
				}
				if (bVar11)
				{
					uParam0->f_56 = 1;
					func_718(uParam0, 0, 0, 0, 1, 0, 0);
				}
				break;
			
			case 7:
				bVar12 = false;
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "land_action", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "land_action") >= 0.64f)
					{
						bVar12 = true;
					}
				}
				else if (MISC::GET_GAME_TIMER() >= uParam0->f_88 + 500)
				{
					bVar12 = true;
				}
				if (bVar12)
				{
					func_713(uParam0, 0, uParam0->f_9, 1, 0, 1);
					uParam0->f_74 = 1;
				}
				break;
		}
		bVar5 = false;
		if (!uParam0->f_56)
		{
			iVar13 = 0;
			iVar14 = 0;
			if (bParam1)
			{
				if (uParam0->f_1 == 2)
				{
					bVar5 = true;
					iVar13 = uParam0->f_65;
				}
				else if (uParam0->f_1 == 3 || uParam0->f_1 == 4)
				{
					bVar5 = true;
					iVar14 = uParam0->f_66;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(0, GlobalFunc_611()) || (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_610()) && uParam0->f_68))
			{
				bVar5 = true;
			}
			else if (PAD::IS_DISABLED_CONTROL_PRESSED(0, GlobalFunc_610()) && uParam0->f_65)
			{
				bVar5 = true;
				iVar13 = 1;
			}
			if (bVar5)
			{
				bVar15 = false;
				if (*uParam0 <= 1)
				{
					bVar15 = true;
				}
				else if (fVar4 > 0.76f)
				{
					if (bParam4)
					{
						bVar15 = true;
					}
				}
				if (bVar15)
				{
					if (((iVar1 > 100 || (bParam1 && uParam0->f_1 == 2)) || iVar13) || bParam5)
					{
						if (uParam0->f_64 || iVar13)
						{
							uParam0->f_69 = iVar13;
							if (uParam0->f_67)
							{
								uParam0->f_69 = 0;
							}
							func_718(uParam0, 3, 0, 1, 1, 0, 0);
						}
					}
					else if ((iVar0 > 100 || iVar0 < -100) || iVar14)
					{
						if (uParam0->f_66)
						{
							func_718(uParam0, 4, 0, 1, 1, 0, 0);
							if (iVar0 > 0 || uParam0->f_1 == 4)
							{
								uParam0->f_70 = 1;
								uParam0->f_23 = 2.8f;
							}
							else if (iVar0 < 0 || uParam0->f_1 == 3)
							{
								uParam0->f_70 = 0;
								uParam0->f_23 = -2.5f;
							}
						}
					}
					else
					{
						func_718(uParam0, 2, 0, 1, 1, 0, 0);
					}
				}
			}
		}
		if (uParam0->f_10.f_2 > uParam0->f_27)
		{
			if (*uParam0 != 1)
			{
				if (uParam0->f_10.f_2 <= (uParam0->f_27 + uParam0->f_28))
				{
					uParam0->f_22 = (uParam0->f_22 - (40f * SYSTEM::TIMESTEP()));
					if (uParam0->f_22 < 0f)
					{
						uParam0->f_22 = 0f;
					}
				}
				uParam0->f_10.f_2 = (uParam0->f_10.f_2 - (uParam0->f_22 * SYSTEM::TIMESTEP()));
			}
			else
			{
				Var16 = { PED::GET_PED_EXTRACTED_DISPLACEMENT(uParam0->f_3, 0) };
				uParam0->f_10.f_2 = (uParam0->f_10.f_2 + Var16.f_2);
			}
		}
		Var19 = { 0f, 0f, 0f };
		if (uParam0->f_56)
		{
			fVar22 = 1f;
		}
		else if (*uParam0 != 6)
		{
			fVar22 = 0f;
		}
		else if (ENTITY::IS_ENTITY_PLAYING_ANIM(uParam0->f_3, GlobalFunc_608(), "rappel_to_free_rope", 3))
		{
			fVar22 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uParam0->f_3, GlobalFunc_608(), "rappel_to_free_rope");
		}
		if (fVar22 < 0f)
		{
			fVar22 = 0f;
		}
		Var19.x = (-0.0141535f + (-0.0004206f * fVar22));
		Var19.f_1 = (-0.385494f + (0.224849f * fVar22));
		if (*uParam0 != 7)
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_3, uParam0->f_6, 0, uParam0->f_10 + Var19, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
		}
		if (!bParam1)
		{
			if (!uParam0->f_63)
			{
				if (!uParam0->f_56)
				{
					GlobalFunc_159("RAPPEL_HELP", -1);
				}
				else
				{
					GlobalFunc_159("FREEROPE_HELP", -1);
				}
				uParam0->f_63 = 1;
			}
		}
	}
	else
	{
		func_713(uParam0, 0, joaat("weapon_unarmed"), 1, 1, 1);
	}
}

void func_713(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x74503
{
	if (uParam0->f_55)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_3))
		{
			if (uParam0->f_3 != PLAYER::PLAYER_PED_ID())
			{
				if (uParam0->f_75)
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 118, 1);
				}
				if (uParam0->f_76)
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_3, 208, 0);
				}
			}
			if (ENTITY::IS_ENTITY_ATTACHED(uParam0->f_3))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
				{
					ENTITY::DETACH_ENTITY(uParam0->f_3, 1, 1);
					if (bParam4)
					{
						TASK::CLEAR_PED_TASKS(uParam0->f_3);
					}
				}
			}
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4))
		{
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 0);
			uParam0->f_62 = 0;
		}
		if (uParam0->f_3 == PLAYER::PLAYER_PED_ID())
		{
			if (!bParam1)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
			}
		}
		if (bParam5)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_8));
			}
		}
		if (iParam2 != joaat("weapon_unarmed"))
		{
			if (WEAPON::HAS_PED_GOT_WEAPON(uParam0->f_3, iParam2, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(uParam0->f_3, iParam2, 1);
			}
		}
		if (bParam3)
		{
			GlobalFunc_606(uParam0);
		}
		uParam0->f_55 = 0;
	}
}





void func_718(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x746B2
{
	char* sVar0;
	char* sVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	if ((*uParam0 == iParam1 && !bParam3) && !bParam2)
	{
		return;
	}
	if (!PED::IS_PED_INJURED(uParam0->f_3))
	{
		if (bParam4)
		{
			fVar2 = 8f;
			fVar3 = -8f;
			if (bParam2)
			{
				fVar2 = 1000f;
			}
			if (bParam6)
			{
				fVar2 = 2f;
			}
			switch (iParam1)
			{
				case 0:
					if (bParam2)
					{
						iVar4 = 131073;
					}
					else
					{
						iVar4 = 1;
					}
					if (uParam0->f_56)
					{
						sVar0 = "Rope_Idle";
					}
					else
					{
						sVar0 = "Rappel_Idle";
						sVar1 = "Rappel_Idle_prop";
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), sVar0, fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					uParam0->f_22 = 0f;
					if (!uParam0->f_56)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
						{
							if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_8))
							{
								ENTITY::PLAY_ENTITY_ANIM(uParam0->f_8, sVar1, GlobalFunc_608(), fVar2, 1, 0, 0, 0, 0);
							}
						}
					}
					break;
				
				case 1:
					if (bParam2)
					{
						iVar4 = 131073;
					}
					else
					{
						iVar4 = 1;
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Walk", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_8))
						{
							ENTITY::PLAY_ENTITY_ANIM(uParam0->f_8, "Rappel_Walk_prop", GlobalFunc_608(), fVar2, 1, 0, 0, 0, 0);
						}
					}
					break;
				
				case 2:
					if (bParam2)
					{
						iVar4 = 131074;
					}
					else
					{
						iVar4 = 2;
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Jump_a", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_8))
						{
							ENTITY::PLAY_ENTITY_ANIM(uParam0->f_8, "Rappel_Jump_a_prop", GlobalFunc_608(), fVar2, 0, 1, 0, 0, 0);
						}
					}
					GlobalFunc_5135(uParam0);
					uParam0->f_78 = 0;
					uParam0->f_24 = 0f;
					uParam0->f_26 = -1f;
					uParam0->f_25 = 24f;
					break;
				
				case 3:
					if (bParam2)
					{
						iVar4 = 131074;
					}
					else
					{
						iVar4 = 2;
					}
					if (uParam0->f_69)
					{
						if (!uParam0->f_79)
						{
							sVar0 = "rappel_jump_c";
							sVar1 = "Rappel_Jump_c_Prop";
						}
						else
						{
							sVar0 = "rappel_jump_a";
							sVar1 = "Rappel_Jump_a_Prop";
						}
					}
					else
					{
						sVar0 = "Rappel_Jump_a";
						sVar1 = "Rappel_Jump_a_prop";
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), sVar0, fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam0->f_8))
						{
							ENTITY::PLAY_ENTITY_ANIM(uParam0->f_8, sVar1, GlobalFunc_608(), fVar2, 0, 1, 0, 0, 0);
						}
					}
					GlobalFunc_5135(uParam0);
					uParam0->f_78 = 0;
					uParam0->f_24 = 0f;
					uParam0->f_26 = -1f;
					uParam0->f_25 = 24f;
					uParam0->f_87 = MISC::GET_GAME_TIMER();
					break;
				
				case 4:
					if (bParam2)
					{
						iVar4 = 131073;
					}
					else
					{
						iVar4 = 1;
					}
					GlobalFunc_5135(uParam0);
					uParam0->f_78 = 0;
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "Rappel_Walk", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					break;
				
				case 5:
					if (bParam2)
					{
						iVar4 = 131073;
					}
					else
					{
						iVar4 = 1;
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "Rope_Slide", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					break;
				
				case 6:
					if (bParam2)
					{
						iVar4 = 131074;
					}
					else
					{
						iVar4 = 2;
					}
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "rappel_to_free_rope", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					break;
				
				case 7:
					if (bParam2)
					{
						iVar4 = 131072;
					}
					else
					{
						iVar4 = 0;
					}
					ENTITY::DETACH_ENTITY(uParam0->f_3, 1, 1);
					TASK::TASK_PLAY_ANIM(uParam0->f_3, GlobalFunc_608(), "land_action", fVar2, fVar3, -1, iVar4, iParam5, 0, 0, 0);
					break;
				}
		}
		if (bParam2)
		{
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uParam0->f_3, 0, 0);
		}
	}
	uParam0->f_88 = MISC::GET_GAME_TIMER();
	*uParam0 = iParam1;
}



void func_721(bool bParam0)//Position - 0x74B03
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[0]))
		{
			ENTITY::SET_ENTITY_COORDS(iLocal_199[0], func_405(7), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_199[0], 167.9f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_199[0], 0);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_199[0], 1, 1);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_199[0], 1, func_698(), 1);
			if (bParam0)
			{
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_199[0], 1);
			}
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_199[0], 0f);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_199[0]);
			fLocal_633 = 0.5f;
		}
	}
}

void func_722(bool bParam0)//Position - 0x74B93
{
	char* sVar0;
	
	if (!iLocal_398)
	{
		uLocal_770 = PED::CREATE_SYNCHRONIZED_SCENE(148.31f, -677.19f, 41.02f, 0f, 0f, 0f, 2);
		if (!PED::IS_PED_INJURED(iLocal_155))
		{
			if (bParam0)
			{
				sVar0 = "FBI_2_INT_LeadInOut_loop_Andreas";
			}
			else
			{
				sVar0 = "FBI_2_INT_LeadOut_action_Andreas";
			}
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_155, uLocal_770, func_507(16), sVar0, 1000f, -8f, 5, iLocal_150, 1148846080, 0);
			if (bParam0)
			{
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_770, 1);
			}
			else
			{
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_770, 0);
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_155, 0, 0);
		}
		iLocal_398 = 1;
	}
}

void func_723(bool bParam0)//Position - 0x74C24
{
	char* sVar0;
	
	if (!iLocal_397)
	{
		uLocal_769 = PED::CREATE_SYNCHRONIZED_SCENE(148.31f, -677.19f, 41.02f, 0f, 0f, 0f, 2);
		if (!PED::IS_PED_INJURED(iLocal_154))
		{
			if (bParam0)
			{
				sVar0 = "FBI_2_INT_LeadInOut_loop_Steve";
			}
			else
			{
				sVar0 = "FBI_2_INT_LeadOut_action_Steve";
			}
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_154, uLocal_769, func_507(16), sVar0, 1000f, -8f, 5, iLocal_150, 1148846080, 0);
			if (bParam0)
			{
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_769, 1);
			}
			else
			{
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_769, 0);
			}
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_154, 0, 0);
		}
		iLocal_397 = 1;
	}
}

void func_724(bool bParam0, int iParam1)//Position - 0x74CB5
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	char* sVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	
	iVar13 = 0;
	while (iVar13 < 7)
	{
		bVar14 = false;
		switch (iVar13)
		{
			case 0:
				sVar9 = "prop_chair_01a";
				Var0 = { 147.8187f, -677.8579f, 41.0298f };
				Var3 = { 147.4805f, -677.4504f, 41.0238f };
				Var6 = { 0f, 0f, 100.84f };
				bVar11 = true;
				bVar12 = true;
				iVar10 = joaat("prop_chair_01a");
				break;
			
			case 1:
				sVar9 = "prop_chair_01a^1";
				Var0 = { 149.2163f, -677.5004f, 41.0282f };
				Var3 = { 149.085f, -676.7021f, 41.0238f };
				Var6 = { 0f, 0f, -62.4523f };
				bVar11 = true;
				if (iParam1 == 0)
				{
					bVar12 = true;
				}
				else
				{
					bVar12 = false;
				}
				iVar10 = joaat("prop_chair_01a");
				break;
			
			case 2:
				sVar9 = "prop_chair_01a^2";
				Var0 = { 148.6975f, -676.0681f, 41.0299f };
				Var3 = { 147.8508f, -676.3236f, 41.0238f };
				Var6 = { 0f, 0f, 36.0963f };
				bVar11 = true;
				bVar12 = true;
				iVar10 = joaat("prop_chair_01a");
				break;
			
			case 3:
				sVar9 = "prop_chair_01a^3";
				Var0 = { 147.4372f, -676.6362f, 41.0288f };
				Var3 = { 148.673f, -678.057f, 41.0239f };
				Var6 = { 0f, 0f, -138.767f };
				bVar11 = true;
				if (iParam1 == 0)
				{
					bVar12 = true;
				}
				else
				{
					bVar12 = false;
				}
				iVar10 = joaat("prop_chair_01a");
				break;
			
			case 4:
				Var0 = { 148.3025f, -677.1946f, 41.0219f };
				Var3 = { 148.305f, -677.189f, 41.0206f };
				Var6 = { 0f, 0f, -60.1606f };
				bVar11 = false;
				bVar12 = true;
				iVar10 = joaat("prop_table_07");
				break;
			
			case 5:
				Var0 = { 149.2603f, -675.415f, 41.0215f };
				Var3 = { 149.2603f, -675.415f, 41.0215f };
				Var6 = { 0f, 0f, 30.87f };
				bVar11 = false;
				bVar12 = true;
				iVar10 = joaat("prop_parasol_01");
				break;
			
			case 6:
				Var0 = { 143.2394f, -678.733f, 41.023f };
				Var3 = { 143.2394f, -678.733f, 41.023f };
				Var6 = { 0f, 0f, -72.56f };
				bVar11 = false;
				bVar12 = true;
				iVar10 = joaat("prop_parasol_01");
				break;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_242[iVar13]))
		{
			uLocal_242[iVar13] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var0, 0.3f, iVar10, 1, 0, 1);
			bVar14 = true;
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_242[iVar13]))
		{
			if (bParam0)
			{
				if (bVar11)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_242[iVar13], 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_242[iVar13], sVar9, 0, iVar10, 0);
				}
			}
			else if (bVar14)
			{
				ENTITY::SET_ENTITY_COORDS(uLocal_242[iVar13], Var3, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(uLocal_242[iVar13], Var6, 2, 1);
				if (bVar12)
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_242[iVar13], 1);
				}
				else
				{
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_242[iVar13], 0);
				}
			}
		}
		iVar13++;
	}
}

void func_725(bool bParam0)//Position - 0x74FA1
{
	bool bVar0;
	
	if (PED::IS_PED_INJURED(iLocal_153))
	{
		if (!Global_3)
		{
			GlobalFunc_7047(&iLocal_153, 30, func_405(3), 79.1f, 0);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_153))
	{
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_153, 1);
		PED::SET_PED_KEEP_TASK(iLocal_153, 1);
		PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_153, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_153, 32, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_153, 26, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_153, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_153, 206, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_153, 314, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_153, 182, 1);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_153, 0);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_153, 1862763509);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_153, 0);
		ENTITY::SET_ENTITY_PROOFS(iLocal_153, 0, 0, 0, 0, 0, 0, 0, 0);
		GlobalFunc_173(&uLocal_923, 4, iLocal_153, "DAVE", 0, 1);
	}
	if (bParam0)
	{
		bVar0 = false;
		while (!bVar0)
		{
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_153))
			{
				if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_153))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
	}
	iLocal_399 = 0;
}



void func_728(bool bParam0)//Position - 0x75165
{
	bool bVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_154))
	{
		GlobalFunc_7047(&iLocal_154, 23, 156.8986f, -672.9745f, 41.02924f, 0f, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		GlobalFunc_7047(&iLocal_155, 67, 159.7748f, -678.4297f, 41.02924f, 0f, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_154))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_154, 1);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_154, 1);
		PED::SET_PED_KEEP_TASK(iLocal_154, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_154, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_154, 208, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_154, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_154, 1862763509);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_154, 0);
		GlobalFunc_173(&uLocal_923, 5, iLocal_154, "Steve", 0, 1);
		iLocal_397 = 0;
	}
	if (!PED::IS_PED_INJURED(iLocal_155))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_155, 1);
		PED::SET_PED_DIES_WHEN_INJURED(iLocal_155, 1);
		PED::SET_PED_KEEP_TASK(iLocal_155, 1);
		PED::SET_PED_CONFIG_FLAG(iLocal_155, 118, 0);
		PED::SET_PED_CONFIG_FLAG(iLocal_155, 208, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_155, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_155, 1862763509);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_155, 0);
		GlobalFunc_173(&uLocal_923, 6, iLocal_155, "Andreas", 0, 1);
		iLocal_398 = 0;
	}
	if (bParam0)
	{
		bVar0 = false;
		while (!bVar0)
		{
			SYSTEM::WAIT(0);
			if (!PED::IS_PED_INJURED(iLocal_154) && !PED::IS_PED_INJURED(iLocal_155))
			{
				if (PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_154) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_155))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
		}
	}
}

void func_729()//Position - 0x752BC
{
	GlobalFunc_2871(func_405(0));
	GlobalFunc_2871(func_405(2));
	GlobalFunc_2871(func_405(4));
	MISC::CLEAR_AREA(86.0499f, -665.2612f, 43.10414f, 5f, 1, 0, 0, 0);
}


void func_731()//Position - 0x75310
{
	PED::SET_PED_NON_CREATION_AREA(80.15606f, -689.0754f, 35.2203f, 153.5127f, -671.0649f, 47.32924f);
	PATHFIND::SET_PED_PATHS_IN_AREA(80.15606f, -689.0754f, 35.2203f, 153.5127f, -671.0649f, 47.02924f, 0, 0);
}



void func_734()//Position - 0x754FB
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				Var1 = { 148.2658f, -677.0385f, 41.9132f };
				fVar4 = 0f;
				break;
			
			case 1:
				Var1 = { 148.0695f, -677.3365f, 41.9132f };
				fVar4 = 179.9f;
				break;
			
			case 2:
				Var1 = { 148.5073f, -677.2362f, 41.9132f };
				fVar4 = 115.18f;
				break;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_252[iVar0]))
		{
			uLocal_252[iVar0] = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_ing_coffeecup_01"), Var1, 1, 1, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uLocal_252[iVar0], Var1, 0, 0, 1);
		}
		ENTITY::FREEZE_ENTITY_POSITION(uLocal_252[iVar0], 1);
		ENTITY::SET_ENTITY_HEADING(uLocal_252[iVar0], fVar4);
		iVar0++;
	}
}

void func_735(bool bParam0)//Position - 0x755D0
{
	if (!iLocal_610)
	{
		func_724(0, 0);
		func_728(bParam0);
		func_725(bParam0);
		func_723(1);
		func_722(1);
		func_736();
		iLocal_610 = 1;
	}
}

void func_736()//Position - 0x75603
{
	if (!iLocal_399)
	{
		uLocal_771 = PED::CREATE_SYNCHRONIZED_SCENE(148.31f, -677.19f, 41.02f, 0f, 0f, 0f, 2);
		if (!PED::IS_PED_INJURED(iLocal_153))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_153, uLocal_771, func_507(16), "FBI_2_INT_LeadInOut_loop_DaveN", 1000f, -8f, 5, iLocal_150, 1148846080, 0);
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_771, 1);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_153, 0, 0);
		}
		iLocal_399 = 1;
	}
}








void func_744(var uParam0, int iParam1, int iParam2)//Position - 0x79BA2
{
	if ((iParam1 != iParam1 && iParam2 != iParam2) && uParam0->f_23)
	{
	}
}


void func_746(int iParam0, int iParam1, int iParam2)//Position - 0x79BD8
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		switch (iParam1)
		{
			case 0:
				if (iParam2 > 1)
				{
					GlobalFunc_11257(iParam0, 12, 18, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					if (iParam2 <= 2 || iParam2 >= 5)
					{
						GlobalFunc_11257(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					else
					{
						GlobalFunc_11257(iParam0, 14, 60, 0, -1, 0, 0, 0, -1, -1, -1, 0);
					}
					if (iParam2 == 2 || iParam2 >= 5)
					{
					}
					else
					{
						PED::REMOVE_PED_HELMET(iParam0, 1);
					}
					PED::RELEASE_PED_PRELOAD_PROP_DATA(iParam0);
				}
				break;
			
			case 1:
				GlobalFunc_11257(iParam0, 12, 19, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				break;
			
			case 2:
				GlobalFunc_11257(iParam0, 12, 41, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				break;
			}
	}
}

void func_747(int iParam0)//Position - 0x79CA6
{
	struct<3> Var0;
	float fVar3;
	
	switch (iParam0)
	{
		case 1:
			func_767(1, func_405(4), -19.9f, 1, 1, 0, 1);
			break;
		
		case 2:
			if (!bLocal_376)
			{
				Var0 = { func_405(5) };
				fVar3 = -15.08f;
			}
			else
			{
				Var0 = { func_405(8) };
				fVar3 = 167.9f;
			}
			func_767(0, Var0, fVar3, 1, 1, 0, 0);
			break;
		
		case 3:
			func_767(0, func_405(7), 167.9f, 1, 1, 0, 1);
			break;
		
		case 4:
			func_767(0, func_405(7), 167.9f, 1, 1, 0, 1);
			break;
		
		case 5:
			func_767(0, func_405(7), 167.9f, 1, 1, 0, 1);
			break;
		
		case 6:
			if (!bLocal_376)
			{
				Var0 = { func_405(38) };
				fVar3 = -129.27f;
			}
			else
			{
				Var0 = { func_405(39) };
				fVar3 = -124f;
			}
			func_767(0, Var0, fVar3, 1, 1, 0, 1);
			break;
	}
	switch (iParam0)
	{
		case 1:
			break;
		
		case 2:
			func_748(0, iParam0, 0f, 0f, 0f, 0f, iLocal_199[0], 1);
			break;
		
		case 3:
			func_748(2, iParam0, 0f, 0f, 0f, 0f, iLocal_199[0], -1);
			break;
		
		case 4:
			func_748(2, iParam0, 0f, 0f, 0f, 0f, iLocal_199[0], -1);
			func_748(0, iParam0, func_405(26), -96.2f, 0, -1);
			break;
		
		case 5:
			func_748(2, iParam0, 0f, 0f, 0f, 0f, iLocal_199[0], -1);
			func_748(0, iParam0, 0f, 0f, 0f, 0f, iLocal_199[0], 1);
			break;
		
		case 6:
			func_748(0, iParam0, 0f, 0f, 0f, 0f, iLocal_199[0], 1);
			break;
	}
}

void func_748(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7)//Position - 0x79E63
{
	int iVar0;
	
	iVar0 = GlobalFunc_237(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_63[iVar0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam6))
		{
			while (!func_750(&(iLocal_63[iVar0]), iParam0, iParam6, iParam7, 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			while (!func_785(&(iLocal_63[iVar0]), iParam0, Param2, fParam5, 0, 0, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_63[iVar0]))
	{
		func_302(iLocal_63[iVar0]);
		switch (iParam0)
		{
			case 1:
				PED::SET_PED_HELMET(iLocal_63[iVar0], 0);
				GlobalFunc_173(&uLocal_923, 2, iLocal_63[iVar0], "FRANKLIN", 0, 1);
				break;
			
			case 0:
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_63[iVar0], 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_63[iVar0], 0);
				if (iParam1 == 2)
				{
					func_749();
				}
				GlobalFunc_173(&uLocal_923, 0, iLocal_63[iVar0], "MICHAEL", 0, 1);
				break;
			
			case 2:
				GlobalFunc_173(&uLocal_923, 1, iLocal_63[iVar0], "TREVOR", 0, 1);
				break;
		}
		func_746(iLocal_63[iVar0], iParam0, iParam1);
	}
}

void func_749()//Position - 0x79F80
{
	if (!PED::IS_PED_INJURED(iLocal_63[0]))
	{
	}
}

int func_750(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x79F95
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iParam2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
			{
				*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, uParam3, 1, 1);
				GlobalFunc_8386(*iParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
				GlobalFunc_11318(*iParam0);
				GlobalFunc_7694(*iParam0, 1, 0);
				GlobalFunc_7693(*iParam0);
				GlobalFunc_7707(*iParam0);
				GlobalFunc_11333(*iParam0, bParam6);
				GlobalFunc_516(*iParam0);
				if (bParam4)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
				}
			}
			return 1;
		}
	}
	return 0;
}

















void func_767(int iParam0, struct<3> Param1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x7B3D3
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iParam0], 0))
	{
		iVar0 = func_783(iParam0);
		if (iParam0 == 1)
		{
			if (!Global_3)
			{
				func_780(&(iLocal_199[iParam0]), 30, Param1, fParam4, 0, 0);
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_199[iParam0] = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iParam0], 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_199[iParam0], 1, 1);
				}
				else
				{
					func_769(&(iLocal_199[iParam0]), 0, Param1, fParam4, 0, 0);
				}
			}
			else if (bLocal_1153)
			{
				func_769(&(iLocal_199[iParam0]), 0, 1367.805f, -2028.587f, 51.0436f, 205.2015f, 0, 0);
			}
			else
			{
				func_769(&(iLocal_199[iParam0]), 0, Param1, fParam4, 0, 0);
			}
		}
		else if (iParam0 == 2)
		{
			if (!Global_3)
			{
				func_769(&(iLocal_199[iParam0]), 1, Param1, fParam4, 0, 2);
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_199[iParam0], 1);
			}
			else
			{
				iLocal_199[iParam0] = Global_89491.f_3;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iParam0], 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_199[iParam0], 1, 1);
				}
				else
				{
					func_769(&(iLocal_199[iParam0]), 1, Param1, fParam4, 0, 2);
				}
			}
		}
		else if (iParam0 == 0)
		{
			if (!Global_3)
			{
				iLocal_199[iParam0] = VEHICLE::CREATE_VEHICLE(func_16(iVar0), Param1, fParam4, 1, 1);
			}
			else
			{
				iLocal_199[iParam0] = Global_89491.f_2;
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[iParam0], 0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_199[iParam0], 1, 1);
				}
				else
				{
					iLocal_199[iParam0] = VEHICLE::CREATE_VEHICLE(func_16(iVar0), Param1, fParam4, 1, 1);
				}
			}
		}
		else
		{
			iLocal_199[iParam0] = VEHICLE::CREATE_VEHICLE(func_16(iVar0), Param1, fParam4, 1, 1);
		}
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_199[iParam0]);
		if (!bParam5)
		{
			func_768(iVar0);
		}
		if (bParam7)
		{
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_199[iParam0], 0);
			VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_199[iParam0], 0);
			ENTITY::SET_ENTITY_PROOFS(iLocal_199[iParam0], 1, 1, 1, 1, 1, 0, 0, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_199[iParam0], 0);
		}
		VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(iLocal_199[iParam0], 0);
		VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_199[iParam0], 0);
		VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(iLocal_199[iParam0], 1);
		switch (iParam0)
		{
			case 0:
				if (bParam8)
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_199[iParam0], 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_199[iParam0]);
				}
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_199[iParam0], 34, 34);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_199[iParam0], 0, 0);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_199[iParam0], 0, iLocal_1088);
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_199[iParam0], 0, 0);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iLocal_199[iParam0], 0);
				AUDIO::SET_VEH_RADIO_STATION(iLocal_199[iParam0], AUDIO::GET_RADIO_STATION_NAME(0));
				break;
			
			case 2:
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_199[iParam0], 0);
				break;
			
			case 1:
				AUDIO::SET_VEH_RADIO_STATION(iLocal_199[iParam0], AUDIO::GET_RADIO_STATION_NAME(2));
				VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_199[iParam0], 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_199[iParam0], 1);
				break;
		}
		if (!bParam6)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_199[iParam0]));
		}
	}
}

void func_768(int iParam0)//Position - 0x7B6D9
{
	var uVar0;
	
	if (iLocal_293[iParam0])
	{
		uVar0 = func_16(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(uVar0))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
		}
		iLocal_293[iParam0] = 0;
	}
}

int func_769(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x7B70A
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/], Param2, fParam5, 0, 0);
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
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
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
				GlobalFunc_531(*iParam0, iParam1);
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
				GlobalFunc_5107(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
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
				GlobalFunc_531(*iParam0, iParam1);
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
				GlobalFunc_5107(iParam0, &(Var5.f_31), &(Var5.f_57));
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
					GlobalFunc_531(*iParam0, iParam1);
				}
				return 1;
			}
		}
	}
	return 0;
}











int func_780(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x7EC84
{
	struct<74> Var0;
	int iVar74;
	int iVar75;
	
	if (!GlobalFunc_42(iParam1))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 25;
		Var0.f_57 = 2;
		GlobalFunc_549(iParam1, &Var0, iParam7);
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*uParam0) != Var0)
			{
			}
			return 1;
		}
		if ((iParam1 == 17 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][0 /*74*/] == Var0) || (iParam1 == 15 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][1 /*74*/] == Var0))
		{
			if (iParam1 == 17)
			{
				iVar74 = 0;
			}
			else if (iParam1 == 15)
			{
				iVar74 = 1;
			}
			STREAMING::REQUEST_MODEL(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
			if (STREAMING::HAS_MODEL_LOADED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, uParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, Var0.f_2);
				iVar75 = 0;
				while (iVar75 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, iVar75 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_11[iVar75]);
					iVar75++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam0, 0))
					{
						if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*uParam0, 1);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*uParam0, 1);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_27));
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*uParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
						}
					}
				}
				GlobalFunc_5107(uParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, Var0.f_72);
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
				}
				GlobalFunc_2526(*uParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0);
			if (STREAMING::HAS_MODEL_LOADED(Var0))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Var0, Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
				VEHICLE::_0xAB04325045427AAE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
				GlobalFunc_7250(uParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					GlobalFunc_2526(*uParam0);
				}
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Var0);
				}
				return 1;
			}
		}
	}
	return 0;
}



int func_783(int iParam0)//Position - 0x7F48B
{
	switch (iParam0)
	{
		case 0:
			return 13;
			break;
		
		case 1:
			return 15;
			break;
		
		case 2:
			return 16;
			break;
	}
	return 13;
}


int func_785(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x7F561
{
	int iVar0;
	
	if (GlobalFunc_42(iParam1))
	{
		iVar0 = GlobalFunc_4917(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, Param2, fParam5, 0, 0);
			GlobalFunc_8386(*iParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			GlobalFunc_11318(*iParam0);
			GlobalFunc_7694(*iParam0, 1, 0);
			GlobalFunc_7693(*iParam0);
			GlobalFunc_7707(*iParam0);
			GlobalFunc_11333(*iParam0, bParam8);
			GlobalFunc_516(*iParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_786(int iParam0)//Position - 0x7F600
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
			return 2;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 1;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 2;
			break;
	}
	return 1;
}

void func_787(bool bParam0)//Position - 0x7F66B
{
	HUD::REQUEST_ADDITIONAL_TEXT("SAGRAB", 0);
	if (bParam0)
	{
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_788(int iParam0, bool bParam1, bool bParam2)//Position - 0x7F693
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_793(iVar1, iParam0))
		{
			func_792(iVar1);
		}
		else if (!func_793(iVar1, iLocal_30) || !bParam2)
		{
			func_791(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_789())
		{
			GlobalFunc_2868();
			while (!func_789())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_789()//Position - 0x7F701
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iLocal_370[iVar0])
		{
			switch (iVar0)
			{
				case 0:
					if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(func_16(15)))
					{
						return 0;
					}
					break;
				
				case 1:
					if (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(func_16(13)))
					{
						return 0;
					}
					break;
				
				case 2:
					if (!STREAMING::HAS_CLIP_SET_LOADED(func_790()))
					{
						return 0;
					}
					break;
				
				case 3:
					if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("davewalk"))
					{
						return 0;
					}
					break;
				}
		}
		iVar0++;
	}
	return 1;
}

char* func_790()//Position - 0x7F799
{
	return "clipset@missfbi2_driveby";
}

void func_791(int iParam0)//Position - 0x7F7A6
{
	if (iLocal_370[iParam0])
	{
		iLocal_370[iParam0] = 0;
		switch (iParam0)
		{
			case 0:
				VEHICLE::REMOVE_VEHICLE_ASSET(func_16(15));
				break;
			
			case 1:
				VEHICLE::REMOVE_VEHICLE_ASSET(func_16(13));
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(func_790());
				break;
			
			case 3:
				TASK::REMOVE_WAYPOINT_RECORDING("davewalk");
				break;
			}
	}
}

void func_792(int iParam0)//Position - 0x7F810
{
	iLocal_370[iParam0] = 1;
	switch (iParam0)
	{
		case 0:
			VEHICLE::REQUEST_VEHICLE_ASSET(func_16(15), 3);
			break;
		
		case 1:
			VEHICLE::REQUEST_VEHICLE_ASSET(func_16(13), 3);
			break;
		
		case 2:
			STREAMING::REQUEST_CLIP_SET(func_790());
			break;
		
		case 3:
			TASK::REQUEST_WAYPOINT_RECORDING("davewalk");
			break;
	}
}

int func_793(int iParam0, int iParam1)//Position - 0x7F872
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 > 1)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 >= 5)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_794(int iParam0, bool bParam1, bool bParam2)//Position - 0x7F8CE
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = iVar0;
		if (func_800(iVar1, iParam0))
		{
			func_799(iVar1);
		}
		else if (!func_800(iVar1, iLocal_30) || !bParam2)
		{
			func_798(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_795())
		{
			GlobalFunc_2868();
			while (!func_795())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_795()//Position - 0x7F93C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iLocal_367[iVar0])
		{
			if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK(func_796(iVar0), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

char* func_796(int iParam0)//Position - 0x7F974
{
	switch (iParam0)
	{
		case 0:
			return func_797();
			break;
		
		case 1:
			return "FBI_02_Snatch_And_Grab_HELI_CHASE";
			break;
	}
	return "invalid!";
}

char* func_797()//Position - 0x7F9A9
{
	return "FBI_02_Snatch_and_Grab_01";
}

void func_798(int iParam0)//Position - 0x7F9B6
{
	var uVar0;
	
	if (iLocal_367[iParam0])
	{
		iLocal_367[iParam0] = 0;
		uVar0 = func_796(iParam0);
		AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(uVar0);
	}
}

void func_799(int iParam0)//Position - 0x7F9DE
{
	var uVar0;
	
	iLocal_367[iParam0] = 1;
	uVar0 = func_796(iParam0);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK(uVar0, 0);
}

int func_800(int iParam0, int iParam1)//Position - 0x7F9FE
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 3)
			{
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_801(int iParam0, bool bParam1, bool bParam2)//Position - 0x7FA34
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		if (GlobalFunc_2869(iVar1, iParam0))
		{
			func_804(iVar1);
		}
		else if (!GlobalFunc_2869(iVar1, iLocal_30) || !bParam2)
		{
			func_803(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_802())
		{
			GlobalFunc_2868();
			while (!func_802())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_802()//Position - 0x7FAA2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iLocal_365[iVar0])
		{
			if (!STREAMING::HAS_PTFX_ASSET_LOADED())
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_803(int iParam0)//Position - 0x7FAD3
{
	if (iLocal_365[iParam0])
	{
		iLocal_365[iParam0] = 0;
		if (STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			STREAMING::REMOVE_PTFX_ASSET();
		}
	}
}

void func_804(int iParam0)//Position - 0x7FAF8
{
	iLocal_365[iParam0] = 1;
	STREAMING::REQUEST_PTFX_ASSET();
}


void func_806(int iParam0)//Position - 0x7FB29
{
	int iVar0;
	
	func_807();
	switch (iParam0)
	{
		case 0:
			iLocal_592 = 0;
			iLocal_594 = 0;
			bLocal_593 = false;
			iLocal_595 = 0;
			iLocal_596 = 0;
			iLocal_618 = 0;
			iLocal_610 = 0;
			break;
		
		case 1:
			iLocal_32 = 0;
			iLocal_39 = 0;
			iLocal_40 = 0;
			iLocal_151 = 0;
			iLocal_152 = 0;
			bLocal_606 = false;
			iLocal_394 = 0;
			iLocal_395 = 0;
			iLocal_396 = 0;
			iLocal_403 = 0;
			iLocal_404 = 0;
			iLocal_405 = 0;
			bLocal_391 = false;
			bLocal_392 = false;
			iLocal_528 = 0;
			iLocal_611 = 0;
			iLocal_406 = 0;
			bLocal_547 = false;
			bLocal_567 = false;
			bLocal_566 = false;
			iLocal_401 = 0;
			iLocal_400 = 0;
			bLocal_402 = false;
			bLocal_568 = false;
			bLocal_569 = false;
			bLocal_570 = false;
			iLocal_572 = 0;
			bLocal_575 = false;
			iLocal_576 = 0;
			iLocal_577 = 0;
			iLocal_578 = 0;
			iLocal_579 = 0;
			iLocal_580 = 0;
			iLocal_581 = 0;
			iLocal_582 = 0;
			iLocal_583 = 0;
			bLocal_598 = false;
			iLocal_599 = 0;
			iLocal_612 = 0;
			iLocal_616 = 0;
			iLocal_620 = 0;
			bLocal_623 = false;
			iLocal_659 = 0;
			iLocal_662 = 0;
			iLocal_767 = 0;
			iLocal_776 = 0;
			iLocal_785 = -1;
			fLocal_651 = 1.15f;
			break;
		
		case 2:
			iLocal_32 = 0;
			iLocal_543 = 0;
			iLocal_407 = 0;
			iLocal_408 = 0;
			bLocal_409 = false;
			iLocal_530 = 0;
			bLocal_548 = false;
			iLocal_545 = 0;
			iLocal_546 = 0;
			iLocal_587 = 0;
			iLocal_607 = 0;
			iLocal_661 = 0;
			iLocal_659 = 2;
			break;
		
		case 3:
			iLocal_32 = 0;
			iLocal_41 = 0;
			iLocal_43 = 0;
			iLocal_38 = 0;
			iLocal_141 = 0;
			iLocal_142 = 1;
			iLocal_1126 = 0;
			iLocal_411 = 0;
			iLocal_416 = 0;
			iLocal_438 = 0;
			iLocal_420 = 0;
			iLocal_422 = 0;
			iLocal_430 = 0;
			iLocal_423 = 0;
			iLocal_424 = 0;
			iLocal_425 = 0;
			iLocal_426 = 0;
			iLocal_427 = 0;
			iLocal_428 = 0;
			iLocal_429 = 0;
			iLocal_443 = 0;
			iLocal_418 = 0;
			bLocal_417 = false;
			iLocal_419 = 0;
			bLocal_421 = false;
			iLocal_433 = 0;
			bLocal_434 = false;
			iLocal_435 = 0;
			iLocal_432 = 0;
			iLocal_542 = 0;
			iLocal_544 = 0;
			bLocal_549 = false;
			iLocal_556 = 0;
			bLocal_557 = false;
			bLocal_561 = false;
			iLocal_573 = 0;
			iLocal_574 = 0;
			iLocal_584 = 0;
			bLocal_608 = false;
			iLocal_617 = 0;
			iLocal_628 = 0;
			iLocal_629 = 0;
			iLocal_720 = 0;
			iLocal_667 = 0;
			iLocal_728 = 0;
			fLocal_642 = 0f;
			fLocal_643 = 0f;
			fLocal_644 = 0f;
			iLocal_666 = -1;
			iLocal_668 = 0;
			iLocal_780 = 0;
			iVar0 = 0;
			while (iVar0 < 3)
			{
				fLocal_647[iVar0] = 0f;
				iLocal_412[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				iLocal_144[iVar0] = 0;
				iVar0++;
			}
			break;
		
		case 4:
			iLocal_32 = 0;
			iLocal_196 = 0;
			iLocal_36 = 0;
			iLocal_37 = 2;
			iLocal_752 = 0;
			iLocal_753 = 0;
			iLocal_754 = 0;
			Local_795 = { 0.2f, -0.08f, 0f };
			Local_798 = { 0f, 0f, 0f };
			iLocal_666 = -1;
			iLocal_664 = -1;
			iLocal_772 = -1;
			iLocal_669 = 0;
			iLocal_439 = 0;
			iLocal_440 = 0;
			bLocal_442 = false;
			iLocal_436 = 0;
			iLocal_437 = 0;
			iLocal_433 = 0;
			iLocal_443 = 0;
			bLocal_444 = false;
			iLocal_463 = 1;
			iLocal_523 = 0;
			iLocal_526 = 0;
			iLocal_529 = 0;
			bLocal_550 = false;
			bLocal_551 = false;
			bLocal_552 = false;
			iLocal_558 = 0;
			bLocal_563 = false;
			iLocal_564 = 0;
			iLocal_588 = 0;
			bLocal_589 = false;
			iLocal_590 = 0;
			iLocal_602 = 0;
			bLocal_603 = false;
			iLocal_504 = 0;
			iLocal_624 = 0;
			bLocal_625 = true;
			iLocal_627 = 0;
			iLocal_628 = 0;
			iVar0 = 0;
			while (iVar0 < iLocal_446)
			{
				iLocal_446[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_451)
			{
				iLocal_451[iVar0] = 0;
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < iLocal_174)
			{
				iLocal_710[iVar0] = 0;
				iVar0++;
			}
			iLocal_441 = 0;
			bLocal_464 = false;
			fLocal_634 = 234.3f;
			fLocal_642 = 0f;
			iLocal_1151 = 0;
			break;
		
		case 5:
			iLocal_32 = 0;
			iLocal_42 = 0;
			iLocal_143 = 1;
			iLocal_196 = 0;
			iLocal_225 = 0;
			iLocal_226 = 0;
			iLocal_37 = 2;
			iLocal_445 = 0;
			iLocal_461 = 0;
			iLocal_462 = 0;
			iLocal_465 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				iLocal_467[iVar0] = 0;
				iLocal_473[iVar0] = 0;
				iLocal_506[iVar0] = 0;
				bLocal_478[iVar0] = 0;
				iVar0++;
			}
			iLocal_472 = 0;
			iLocal_496 = 0;
			iLocal_497 = 0;
			iLocal_460 = 0;
			iLocal_499 = 0;
			bLocal_505 = false;
			iLocal_466 = 0;
			iLocal_498 = 0;
			iLocal_531 = 0;
			bLocal_532 = false;
			bLocal_382 = false;
			bLocal_553 = false;
			bLocal_554 = false;
			bLocal_534 = false;
			iLocal_815 = 0;
			bLocal_384 = true;
			bLocal_586 = false;
			iLocal_600 = 0;
			bLocal_609 = false;
			iLocal_613 = 0;
			iLocal_619 = 0;
			iLocal_621 = 0;
			iLocal_622 = 0;
			iLocal_624 = 0;
			iLocal_765 = 4;
			iLocal_685 = -1;
			fLocal_639 = 0f;
			fLocal_652 = 2f;
			fLocal_640 = 16f;
			fLocal_641 = 0f;
			fLocal_645 = 0f;
			fLocal_646 = 0f;
			iLocal_730 = 0;
			iLocal_500 = 0;
			iLocal_502 = 0;
			iLocal_501 = 0;
			bLocal_503 = false;
			iLocal_523 = 0;
			iLocal_524 = 0;
			bLocal_525 = false;
			bLocal_527 = false;
			bLocal_533 = false;
			bLocal_535 = false;
			bLocal_536 = false;
			bLocal_537 = false;
			iLocal_538 = 0;
			iLocal_559 = 0;
			iLocal_514 = 0;
			iLocal_515 = 0;
			iLocal_565 = 0;
			iLocal_681 = 0;
			iLocal_659 = 2;
			iLocal_729 = -1;
			iLocal_724 = 0;
			iLocal_723 = -1;
			iLocal_684 = -1;
			iLocal_745 = 0;
			iLocal_759 = 1;
			iLocal_788 = -1;
			iLocal_789 = -1;
			break;
		
		case 6:
			bLocal_516 = false;
			bLocal_517 = false;
			iLocal_518 = 0;
			iLocal_445 = 1;
			iLocal_465 = 1;
			iLocal_513 = 0;
			iLocal_512 = 0;
			iLocal_511 = 0;
			iLocal_515 = 0;
			iLocal_585 = 0;
			bLocal_614 = false;
			iLocal_624 = 0;
			iLocal_405 = 0;
			iLocal_539 = 0;
			iLocal_540 = 0;
			iLocal_541 = 0;
			bLocal_555 = false;
			iLocal_571 = 0;
			bLocal_601 = false;
			iLocal_605 = 0;
			iLocal_757 = 0;
			break;
	}
}

void func_807()//Position - 0x80045
{
	iLocal_33 = 0;
	iLocal_35 = 0;
	iLocal_377 = 0;
	bLocal_378 = false;
	iLocal_379 = 0;
	iLocal_380 = 0;
	bLocal_381 = false;
	iLocal_383 = 0;
	bLocal_384 = false;
	iLocal_385 = 0;
	fLocal_637 = -1.28f;
	bLocal_386 = false;
	iLocal_387 = 0;
	iLocal_388 = 0;
	bLocal_389 = false;
	iLocal_410 = 0;
	iLocal_390 = 0;
	iLocal_560 = 0;
	iLocal_615 = 0;
}

void func_808(int iParam0, bool bParam1, bool bParam2)//Position - 0x8009B
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		if (func_812(iVar1, iParam0))
		{
			func_811(iVar1);
		}
		else if (!func_812(iVar1, iLocal_30) || !bParam2)
		{
			func_810(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_809())
		{
			GlobalFunc_2868();
			while (!func_809())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_809()//Position - 0x80109
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iLocal_358[iVar0])
		{
			if (!WEAPON::HAS_WEAPON_ASSET_LOADED(func_624(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_810(int iParam0)//Position - 0x80140
{
	var uVar0;
	
	if (iLocal_358[iParam0])
	{
		iLocal_358[iParam0] = 0;
		uVar0 = func_624(iParam0);
		if (WEAPON::HAS_WEAPON_ASSET_LOADED(uVar0))
		{
			WEAPON::REMOVE_WEAPON_ASSET(uVar0);
		}
	}
}

void func_811(int iParam0)//Position - 0x80171
{
	var uVar0;
	
	iLocal_358[iParam0] = 1;
	uVar0 = func_624(iParam0);
	WEAPON::REQUEST_WEAPON_ASSET(uVar0, 31, 0);
}

int func_812(int iParam0, int iParam1)//Position - 0x80192
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 >= 3)
			{
				return 1;
			}
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			if (iParam1 == 4 || iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 4:
			if (iParam1 >= 3)
			{
				return 1;
			}
			break;
		
		case 5:
			if (iParam1 >= 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_813(int iParam0, bool bParam1, bool bParam2)//Position - 0x80219
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		iVar1 = iVar0;
		if (func_815(iVar1, iParam0))
		{
			func_680(iVar1);
		}
		else if (!func_815(iVar1, iLocal_30) || !bParam2)
		{
			func_673(iVar1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_814())
		{
			GlobalFunc_2868();
			while (!func_814())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_814()//Position - 0x80288
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if (iLocal_335[iVar0])
		{
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_507(iVar0)))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_815(int iParam0, int iParam1)//Position - 0x802C0
{
	switch (iParam0)
	{
		case 0:
			if (iLocal_30 == 4)
			{
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 16:
			if (iParam1 <= 1)
			{
				return 1;
			}
			break;
		
		case 18:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 19:
		case 20:
			if (iParam1 >= 5)
			{
				return 1;
			}
			break;
		
		case 21:
			if (iParam1 >= 4)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_816(int iParam0, bool bParam1, bool bParam2)//Position - 0x80398
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (func_820(iVar0 + 1, iParam0))
		{
			func_819(iVar0 + 1);
		}
		else if (!func_820(iVar0 + 1, iLocal_30) || !bParam2)
		{
			func_818(iVar0 + 1);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_817())
		{
			GlobalFunc_2868();
			while (!func_817())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_817()//Position - 0x8040B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (iLocal_321[iVar0])
		{
			if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iVar0 + 1, func_698()))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_818(int iParam0)//Position - 0x80445
{
	if (iLocal_321[(iParam0 - 1)])
	{
		iLocal_321[(iParam0 - 1)] = 0;
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, func_698()))
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, func_698());
		}
	}
}

void func_819(int iParam0)//Position - 0x8047A
{
	iLocal_321[(iParam0 - 1)] = 1;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, func_698());
}

int func_820(int iParam0, int iParam1)//Position - 0x80496
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 3:
					return 1;
					break;
			}
			break;
		
		case 2:
			if ((iParam1 == 4 || iParam1 == 5) || iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 12:
		case 13:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_821(int iParam0, bool bParam1, bool bParam2)//Position - 0x8052A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_822(iVar0, iParam0))
		{
			func_377(iVar0);
		}
		else if (!func_822(iVar0, iLocal_30) || !bParam2)
		{
			func_768(iVar0);
		}
		iVar0++;
	}
	if (bParam1)
	{
		if (!func_607())
		{
			GlobalFunc_2868();
			while (!func_607())
			{
				SYSTEM::WAIT(0);
			}
		}
	}
}

int func_822(int iParam0, int iParam1)//Position - 0x80595
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			if (iParam1 == 3 || iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 >= 2)
			{
				return 1;
			}
			break;
		
		case 3:
			if (iParam1 <= 1)
			{
				return 1;
			}
			break;
		
		case 4:
		case 5:
		case 26:
			if (iParam1 <= 1)
			{
				return 1;
			}
			break;
		
		case 13:
			if (iParam1 >= 2)
			{
				return 1;
			}
			break;
		
		case 14:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (iParam1 >= 4)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 >= 4 && iParam1 <= 5)
			{
				return 1;
			}
			break;
		
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
		case 24:
			break;
		
		case 11:
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 1;
			}
			break;
		
		case 16:
			break;
		
		case 23:
			if (iParam1 == 3)
			{
				return 1;
			}
			break;
		
		case 17:
			break;
		
		case 19:
		case 20:
			if (iParam1 == 2)
			{
				return 1;
			}
			break;
		
		case 22:
			if (iParam1 >= 3)
			{
				return 1;
			}
			break;
	}
	return 0;
}




void func_826(int iParam0)//Position - 0x80801
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 6;
			break;
	}
	if (!PED::IS_PED_INJURED(iLocal_183[iVar0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iParam0], 0))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_203[iParam0], 1) };
			TASK::TASK_HELI_MISSION(iLocal_183[iVar0], iLocal_203[iParam0], 0, 0, Var1, 4, 100f, 30f, -1f, SYSTEM::ROUND(Var1.f_2), 10, -1082130432, 0);
		}
	}
}


void func_828(int iParam0)//Position - 0x808AE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar1 = func_625();
	iVar2 = func_622();
	if (!PED::IS_PED_INJURED(iVar1))
	{
		switch (iParam0)
		{
			case 0:
				iVar3 = 1;
				iVar4 = 2;
				break;
			
			case 1:
				iVar3 = 4;
				iVar4 = 5;
				break;
			
			case 2:
				iVar3 = 7;
				iVar4 = 8;
				break;
		}
		iVar0 = iVar3;
		while (iVar0 <= iVar4)
		{
			if (!PED::IS_PED_INJURED(iLocal_183[iVar0]))
			{
				if (iParam0 < 2)
				{
					TASK::TASK_DRIVE_BY(iLocal_183[iVar0], iVar1, 0, 0f, 0f, 0f, 1000f, 100, 0, -753768974);
				}
				else
				{
					TASK::TASK_DRIVE_BY(iLocal_183[iVar0], iVar2, 0, 0f, 0f, 0f, 1000f, 100, 0, -753768974);
				}
			}
			iVar0++;
		}
	}
	iLocal_467[iParam0] = 1;
}

void func_829(bool bParam0, bool bParam1)//Position - 0x8096E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	float fVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	float fVar16;
	int iVar17;
	int iVar18;
	
	bVar1 = false;
	if (!bParam1)
	{
		iVar2 = 0;
		iVar3 = 2;
	}
	else
	{
		iVar2 = 3;
		iVar3 = 3;
	}
	iVar0 = iVar2;
	while (iVar0 <= iVar3)
	{
		switch (iVar0)
		{
			case 0:
				Var4 = { 38.28f, -692.31f, 281.46f };
				fVar7 = -41.9f;
				iVar8 = 3;
				if (!bParam0)
				{
					fVar9 = (7000f + 2000f);
				}
				else
				{
					fVar9 = 2000f;
				}
				break;
			
			case 1:
				Var4 = { 69.13f, -710.32f, 254.99f };
				fVar7 = 8.26f;
				iVar8 = 12;
				if (!bParam0)
				{
					fVar9 = (7000f + 2000f);
				}
				else
				{
					fVar9 = 2000f;
				}
				break;
			
			case 2:
				Var4 = { 99.72f, -628.75f, 207.56f };
				fVar7 = -19.67f;
				iVar8 = 13;
				if (!bParam0)
				{
					fVar9 = (7000f + 4000f);
				}
				else
				{
					fVar9 = 2000f;
				}
				break;
			
			case 3:
				iVar10 = -1;
				fVar12 = 1E+08f;
				iVar11 = 0;
				while (iVar11 < 5)
				{
					Var13 = { func_831(iVar11) };
					fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var13, ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1), 0);
					if (fVar16 < fVar12)
					{
						if (fVar16 > 150f && fVar16 < 900f)
						{
							if (!CAM::IS_SPHERE_VISIBLE(Var13, 5f))
							{
								fVar12 = fVar16;
								iVar10 = iVar11;
							}
						}
					}
					iVar11++;
				}
				if (iVar10 >= 0)
				{
					Var4 = { func_831(iVar10) };
					fVar7 = GlobalFunc_830(Var4, ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1));
				}
				else
				{
					bVar1 = true;
				}
				iVar8 = -1;
				break;
		}
		if (!bVar1)
		{
			iLocal_203[iVar0] = VEHICLE::CREATE_VEHICLE(func_16(14), Var4, fVar7, 1, 1);
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_203[iVar0]);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_203[iVar0], 1, 1);
			VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iLocal_203[iVar0], 1);
			iLocal_676[iVar0] = MISC::GET_GAME_TIMER();
			if (iVar8 >= 0)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_203[iVar0], iVar8, func_698(), 1);
				VEHICLE::SET_PLAYBACK_SPEED(iLocal_203[iVar0], 1f);
				VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_203[iVar0], fVar9);
				VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_203[iVar0], 1);
			}
			else
			{
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_203[iVar0], 30f);
			}
			ENTITY::SET_ENTITY_PROOFS(iLocal_203[iVar0], 0, 0, 0, 1, 1, 0, 0, 0);
			if (iVar0 <= 2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_203[iVar0], 1);
			}
		}
		iVar0++;
	}
	if (!bVar1)
	{
		if (!bParam1)
		{
			iVar2 = 0;
			iVar3 = 8;
		}
		else
		{
			iVar2 = 9;
			iVar3 = 11;
		}
		iVar0 = iVar2;
		while (iVar0 <= iVar3)
		{
			switch (iVar0)
			{
				case 0:
					iVar17 = -1;
					iVar18 = 0;
					break;
				
				case 1:
					iVar17 = 1;
					iVar18 = 0;
					break;
				
				case 2:
					iVar17 = 2;
					iVar18 = 0;
					break;
				
				case 3:
					iVar17 = -1;
					iVar18 = 1;
					break;
				
				case 4:
					iVar17 = 1;
					iVar18 = 1;
					break;
				
				case 5:
					iVar17 = 2;
					iVar18 = 1;
					break;
				
				case 6:
					iVar17 = -1;
					iVar18 = 2;
					break;
				
				case 7:
					iVar17 = 1;
					iVar18 = 2;
					break;
				
				case 8:
					iVar17 = 2;
					iVar18 = 2;
					break;
				
				case 9:
					iVar17 = -1;
					iVar18 = 3;
					break;
				
				case 10:
					iVar17 = 1;
					iVar18 = 3;
					break;
				
				case 11:
					iVar17 = 2;
					iVar18 = 3;
					break;
			}
			if (((iVar0 == 0 || iVar0 == 3) || iVar0 == 6) || iVar0 == 9)
			{
				iLocal_183[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_203[iVar18], 26, func_16(8), iVar17, 1, 1);
				PED::SET_PED_PROP_INDEX(iLocal_183[iVar0], 0, 0, 0, false);
			}
			else
			{
				iLocal_183[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_203[iVar18], 26, func_16(9), iVar17, 1, 1);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_183[iVar0], 1);
			PED::SET_PED_KEEP_TASK(iLocal_183[iVar0], 1);
			if (((iVar0 == 0 || iVar0 == 3) || iVar0 == 6) || iVar0 == 9)
			{
				PED::SET_PED_ACCURACY(iLocal_183[iVar0], 100);
			}
			else
			{
				PED::SET_PED_ACCURACY(iLocal_183[iVar0], SYSTEM::FLOOR(fLocal_641));
			}
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_183[iVar0], iLocal_1088);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(iLocal_183[iVar0], 0, iLocal_1088);
			GlobalFunc_593(iLocal_183[iVar0], 0);
			iLocal_483[iVar0] = 0;
			if (((iVar0 != 0 && iVar0 != 3) && iVar0 != 6) && iVar0 != 9)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_183[iVar0], func_624(3), -1, 1, 1);
				PED::CLEAR_PED_PROP(iLocal_183[iVar0], 1);
				ENTITY::SET_ENTITY_LOD_DIST(iLocal_183[iVar0], 240);
			}
			iVar0++;
		}
		if (!bParam1)
		{
			GlobalFunc_173(&uLocal_923, 4, iLocal_183[0], "FBI2CIACHOP2", 0, 1);
		}
	}
}


Vector3 func_831(int iParam0)//Position - 0x80E36
{
	switch (iParam0)
	{
		case 0:
			return -429f, -507f, 322f;
			break;
		
		case 1:
			return -402f, -794f, 219f;
			break;
		
		case 2:
			return 83f, -1025f, 316f;
			break;
		
		case 3:
			return 336f, -527f, 338f;
			break;
		
		case 4:
			return -20f, -402f, 257f;
			break;
		
		case 5:
			return -84f, -689f, 211f;
			break;
		
		case 6:
			return 44f, -1170f, 106f;
			break;
		
		case 7:
			return -390f, -1085f, 160f;
			break;
		
		case 8:
			return -33f, -518f, 230f;
			break;
		
		case 9:
			return 39f, -801f, 177f;
			break;
	}
	return -429f, -507f, 322f;
}

void func_832()//Position - 0x80F62
{
	struct<3> Var0;
	int iVar3;
	int iVar4;
	
	if (!PED::IS_PED_INJURED(iLocal_63[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		if (iLocal_723 < 0)
		{
			if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[0]))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
				if (!iLocal_500)
				{
					if (iLocal_684 < 0)
					{
						if (func_554(Var0))
						{
							iLocal_684 = func_564(Var0);
							iLocal_501 = 0;
							iLocal_502 = 0;
							if (iLocal_684 < 0)
							{
								iLocal_500 = 1;
							}
						}
						else
						{
							iLocal_500 = 1;
						}
					}
					else
					{
						func_557();
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, func_556(iLocal_684), 0) <= 30f || !func_554(Var0))
						{
							iLocal_723 = func_836(iLocal_684);
							func_835(iLocal_723);
							iLocal_500 = 1;
						}
					}
				}
				else
				{
					iVar3 = func_834();
					if (iVar3 >= 0)
					{
						iLocal_723 = iVar3;
						func_835(iLocal_723);
					}
				}
			}
			else if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_199[0]) >= 40000f)
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[0]);
			}
		}
		else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_63[2], func_833(iLocal_723), 80f, 80f, 80f, 0, 1, 0))
		{
			iVar4 = func_834();
			if (iVar4 >= 0)
			{
				iLocal_723 = iVar4;
				func_835(iLocal_723);
			}
		}
	}
}

Vector3 func_833(int iParam0)//Position - 0x810A3
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	fVar0 = (8f * SYSTEM::TO_FLOAT(iParam0));
	Var1 = { -75.12f, -819.06f, 190f };
	Var4 = { 0f, 0f, 0f };
	Var4.x = (Var1.x + (450f * SYSTEM::COS(fVar0)));
	Var4.f_1 = (Var1.f_1 + (450f * SYSTEM::SIN(fVar0)));
	Var4.f_2 = Var1.f_2;
	return Var4;
}

int func_834()//Position - 0x81105
{
	float fVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	struct<3> Var7;
	
	fVar0 = 9999999f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 45)
	{
		Var3 = { func_833(iVar2) };
		fVar6 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_63[2], 1), Var3, 1);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
		{
			Var7 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_199[0], Var3) };
			if (Var7.f_1 >= 0f)
			{
				fVar6 = (fVar6 - 300f);
			}
			else if (Var7.f_1 >= -150f)
			{
				fVar6 = (fVar6 - 150f);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_199[0], Var3, 100f, 100f, 100f, 0, 1, 0))
			{
				fVar6 = (fVar6 + 10000f);
			}
		}
		if (fVar6 < fVar0)
		{
			fVar0 = fVar6;
			iVar1 = iVar2;
		}
		iVar2++;
	}
	return iVar1;
}

void func_835(int iParam0)//Position - 0x811D2
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!PED::IS_PED_INJURED(iLocal_63[2]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[0], 1) };
		Var3 = { func_833(iParam0) };
		fVar6 = MISC::GET_HEADING_FROM_VECTOR_2D((Var3.x - Var0.x), (Var3.f_1 - Var0.f_1));
		func_447(Var3, 40f, 1f, fVar6, SYSTEM::FLOOR(Var3.f_2), 20, 0);
	}
}

int func_836(int iParam0)//Position - 0x8123D
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 2;
			break;
		
		case 5:
			return 2;
			break;
		
		case 6:
			return 3;
			break;
		
		case 7:
			return 3;
			break;
		
		case 8:
			return 0;
			break;
		
		case 9:
			return 0;
			break;
	}
	return 0;
}

void func_837(bool bParam0, bool bParam1)//Position - 0x812CF
{
	int iVar0;
	
	switch (iLocal_720)
	{
		case 0:
			uLocal_917 = OBJECT::GET_RAYFIRE_MAP_OBJECT(func_405(26), 3f, "DES_FIB_Glass");
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_917))
			{
				OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_917, 11);
				iLocal_720++;
			}
			break;
		
		case 1:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_917))
			{
				if (OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_917) == 3)
				{
					OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_917, 4);
					iLocal_720++;
				}
			}
			else
			{
				iLocal_720 = 0;
			}
			break;
		
		case 2:
			if (OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(uLocal_917))
			{
				iVar0 = OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_917);
				if (iVar0 == 5)
				{
					if (bParam0)
					{
						if (!bParam1)
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_917, 6);
							iLocal_720++;
						}
						else
						{
							OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(uLocal_917, 9);
							iLocal_720++;
						}
					}
				}
				else if (iVar0 != 4)
				{
					iLocal_720 = 0;
				}
			}
			else
			{
				iLocal_720 = 0;
			}
			break;
	}
}

void func_838(char* sParam0, int iParam1)//Position - 0x813B0
{
	if (iLocal_658 < 0)
	{
		func_839(-1);
	}
	if (MISC::GET_GAME_TIMER() >= iLocal_658)
	{
		if (func_429(sParam0, 0, 0, 0, 1, 0))
		{
			func_839(iParam1);
		}
	}
}

void func_839(int iParam0)//Position - 0x813E2
{
	if (iParam0 >= 0)
	{
		iLocal_658 = (MISC::GET_GAME_TIMER() + iParam0);
	}
	else
	{
		iLocal_658 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7000, 12000));
	}
}

void func_840()//Position - 0x8140F
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	struct<2> Var6;
	int iVar10;
	bool bVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	float fVar23;
	struct<3> Var24;
	int iVar27;
	int iVar28;
	int iVar29;
	
	GlobalFunc_7629();
	RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	func_877();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::PLAYER_ID(), 0);
	}
	if (!iLocal_529)
	{
		CAM::SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(3f);
		iLocal_529 = 1;
	}
	CAM::_0x2F7F2B26DD3F18EE(-25f, 25f);
	CAM::_SET_FIRST_PERSON_CAM_PITCH_RANGE(-10f, 10f);
	GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
	HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeDT1_05"), 150f, -700f, 0, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	if (GlobalFunc_8315() == 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 31, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 30, 1);
	}
	if (!PED::IS_PED_INJURED(func_625()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(func_625(), 0);
	}
	if (!PED::IS_PED_INJURED(func_622()))
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(func_622(), 0, iLocal_1088);
		PED::SET_PED_CAN_SWITCH_WEAPON(func_622(), 0);
	}
	if (!PED::IS_PED_INJURED(func_404()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(func_404(), 0);
	}
	func_837(1, 1);
	func_876();
	iVar2 = func_622();
	if (!PED::IS_PED_INJURED(iVar2))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iVar2, func_624(4), 0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iVar2, &iVar3, 1);
			if (iVar3 != func_624(4))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar2, func_624(4), 1);
			}
		}
	}
	if (!iLocal_377)
	{
		if (!iLocal_383)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_383 = 1;
			}
		}
		if (iLocal_38 >= 3)
		{
			if (!bLocal_551)
			{
				bLocal_551 = AUDIO::PREPARE_MUSIC_EVENT("FIB2_HELICOPTERS_APPROACHING");
			}
			func_403("fbi_2_mcs_3b", func_405(21), 100f, 120f);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(func_625()))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_625(), 0);
				}
				if (!PED::IS_PED_INJURED(func_404()))
				{
					CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Trevor", 0, 12, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_156))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("MR_K", iLocal_156, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("MR_K", 8, 0, 0, 0);
				}
			}
		}
		if (iLocal_441)
		{
			func_873(4);
		}
		else
		{
			func_873(3);
		}
		PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
		CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("FOLLOW_PED_ATTACHED_TO_ROPE_CAMERA", 0);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		if (!iLocal_441)
		{
			GlobalFunc_187();
		}
		else if (bLocal_1152)
		{
			if ((iLocal_37 != 0 && iLocal_37 != 2) && iLocal_37 != 1)
			{
				iLocal_1150 = MISC::GET_GAME_TIMER() + 100;
			}
			if (MISC::GET_GAME_TIMER() <= iLocal_1150)
			{
				func_444(1, 0);
				HUD::DISPLAY_RADAR(0);
				iLocal_624 = 1;
			}
			else if (iLocal_624)
			{
				HUD::DISPLAY_RADAR(1);
				iLocal_624 = 0;
			}
			if (MISC::GET_GAME_TIMER() <= iLocal_1150 + 100)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			}
			switch (iLocal_37)
			{
				case 2:
					func_871();
					if (!PED::IS_PED_INJURED(iLocal_174[5]))
					{
						PED::SET_PED_CAN_RAGDOLL(iLocal_174[5], 0);
					}
					bVar4 = false;
					if (func_441())
					{
						bVar4 = GlobalFunc_10238(&iLocal_63, 0, 1);
					}
					if (bVar4)
					{
						if (iLocal_63.f_7 == 0)
						{
							func_298(7);
							func_398(8);
							iLocal_617 = 0;
							iLocal_630 = 0;
							iLocal_794 = MISC::GET_GAME_TIMER();
							iLocal_196 = 0;
							iLocal_526 = 0;
							GlobalFunc_565(291, 1, 0);
							iLocal_37 = 5;
						}
					}
					else if (GlobalFunc_126(1))
					{
						PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
						GlobalFunc_2866(&iLocal_289);
						func_532(&iLocal_289);
						CAM::SET_CAM_PARAMS(iLocal_289, Local_1144, Local_1147, 35f, 0, 1, 1, 2);
						CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
					}
					else
					{
						GlobalFunc_2866(&iLocal_289);
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					}
					break;
				
				case 1:
					if (!PED::IS_PED_INJURED(iLocal_174[5]))
					{
						PED::SET_PED_CAN_RAGDOLL(iLocal_174[5], 1);
					}
					CAM::_0x0225778816FDC28C(0f);
					func_870();
					if (AUDIO::HAS_SOUND_FINISHED(iLocal_733))
					{
						AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_733, "FBI_02_SNATCH_AND_GRAB_DANGLE", PLAYER::PLAYER_PED_ID(), 0, 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_733, "PlayerSpeed", ENTITY::GET_ENTITY_SPEED(iLocal_199[0]));
					}
					else
					{
						AUDIO::SET_VARIABLE_ON_SOUND(iLocal_733, "PlayerSpeed", ENTITY::GET_ENTITY_SPEED(iLocal_199[0]));
					}
					if (func_441())
					{
						if (GlobalFunc_10238(&iLocal_63, 0, 1))
						{
							if (iLocal_63.f_7 == 1)
							{
								GlobalFunc_565(291, 1, 0);
								func_398(7);
								func_298(8);
								iLocal_630 = 0;
								iLocal_617 = 0;
								iLocal_794 = MISC::GET_GAME_TIMER();
								iLocal_37 = 7;
							}
						}
					}
					break;
				
				case 7:
					if (!iLocal_630)
					{
						GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
						GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDFranklinOut");
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelIn", 0, 0);
						iLocal_630 = 1;
					}
					if (!iLocal_617)
					{
						if (!PED::IS_PED_INJURED(iLocal_197))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_197, CAM::GET_FINAL_RENDERED_CAM_COORD(), 90f, 90f, 90f, 0, 0, 0))
							{
								iLocal_617 = 1;
							}
						}
					}
					if (!iLocal_628)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_794)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_793 = MISC::GET_GAME_TIMER();
							iLocal_628 = 1;
						}
					}
					if (!iLocal_629)
					{
						if (iLocal_628)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_793 + 250)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_629 = 1;
							}
						}
					}
					if (func_450(1, 0, 1, 5, 0))
					{
						GlobalFunc_2774(&iLocal_63, 1, 0);
						GlobalFunc_2774(&iLocal_63, 0, 0);
						GlobalFunc_2774(&iLocal_63, 2, 1);
						if (!PED::IS_PED_INJURED(iLocal_156))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_156, 0, 0, 0, 0, 0, 0, 0, 0);
						}
						func_445(1);
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), func_624(4), 1);
						func_869(1);
						if (!PED::IS_PED_INJURED(iLocal_174[0]))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_174[0]);
						}
						if (!PED::IS_PED_INJURED(iLocal_174[5]))
						{
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_174[5]);
						}
						if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
						}
						HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
						iLocal_724 = 0;
						iLocal_196 = 0;
						iLocal_32 = 0;
						iLocal_37 = 2;
					}
					else if (GlobalFunc_8315() == 1)
					{
						PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
					}
					break;
				
				case 5:
					if (!iLocal_630)
					{
						GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
						GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDFranklinOut");
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortFranklinIn", 0, 0);
						iLocal_630 = 1;
					}
					if (!iLocal_617)
					{
						if (GlobalFunc_8315() == 0)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), CAM::GET_FINAL_RENDERED_CAM_COORD(), 170f, 170f, 170f, 0, 0, 0))
							{
								AUDIO::STOP_SOUND(iLocal_737);
								GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelMid", 0, 0);
								iLocal_617 = 1;
							}
						}
					}
					if (!iLocal_628)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_794)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_793 = MISC::GET_GAME_TIMER();
							iLocal_628 = 1;
						}
					}
					if (!iLocal_629)
					{
						if (iLocal_628)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_793 + 300)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_629 = 1;
							}
						}
					}
					if (func_450(0, 0, 1, 6, 1))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
						}
						if (!PED::IS_PED_INJURED(iLocal_156))
						{
							ENTITY::SET_ENTITY_PROOFS(iLocal_156, 1, 1, 1, 1, 1, 0, 0, 0);
						}
						GlobalFunc_2774(&iLocal_63, 1, 0);
						GlobalFunc_2774(&iLocal_63, 0, 0);
						GlobalFunc_2774(&iLocal_63, 2, 1);
						func_445(1);
						func_869(1);
						iLocal_725 = MISC::GET_RANDOM_INT_IN_RANGE(2000, 3000);
						iLocal_726 = 0;
						iLocal_729 = -1;
						iLocal_32 = 0;
						iLocal_37 = 1;
					}
					else if (!iLocal_526)
					{
						if (GlobalFunc_8315() == 0)
						{
							func_869(1);
							iLocal_526 = 1;
						}
					}
					break;
				}
		}
		switch (iLocal_38)
		{
			case 0:
				if (iLocal_439)
				{
					func_683(1);
				}
				break;
			
			case 1:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_687))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.98f)
					{
						func_683(2);
					}
				}
				break;
			
			case 2:
				if (iLocal_523)
				{
					func_683(3);
				}
				break;
			
			case 3:
				break;
			
			case 4:
				if (MISC::GET_GAME_TIMER() >= iLocal_738 + 100 && (iLocal_1151 || !bLocal_1152))
				{
					GlobalFunc_4935();
					iLocal_38 = 5;
					iLocal_739 = MISC::GET_GAME_TIMER() + 800;
				}
				break;
		}
		switch (iLocal_36)
		{
			case 0:
				if (!iLocal_439)
				{
					if (iLocal_664 > -1)
					{
						iLocal_666 = (MISC::GET_GAME_TIMER() + 35000);
						iLocal_667 = 0;
						iLocal_781 = MISC::GET_GAME_TIMER();
						iLocal_439 = 1;
					}
					else if (iLocal_443)
					{
						iLocal_664 = 0;
					}
					else if (iLocal_667 < 8 && !iLocal_504)
					{
						switch (iLocal_667)
						{
							case 0:
								StringCopy(&Var6, "FBI2_CIA1", 16);
								iVar5 = 0;
								break;
							
							case 1:
								StringCopy(&Var6, "FBI2_MRKSHT", 16);
								iVar5 = 0;
								break;
							
							case 2:
								StringCopy(&Var6, "FBI2_CLEAR", 16);
								iVar5 = 0;
								break;
							
							case 3:
								StringCopy(&Var6, "FBI2_MRKSHT", 16);
								iVar5 = 0;
								break;
							
							case 4:
								StringCopy(&Var6, "FBI2_ASK", 16);
								iVar5 = 0;
								break;
							
							case 5:
								StringCopy(&Var6, "FBI2_CIA2", 16);
								iVar5 = 0;
								break;
							
							case 6:
								StringCopy(&Var6, "FBI2_MRKSHT", 16);
								iVar5 = 0;
								break;
							
							case 7:
								StringCopy(&Var6, "FBI2_GLIGHT", 16);
								iVar5 = 0;
								break;
						}
						if (bLocal_381 && MISC::GET_GAME_TIMER() >= iLocal_722 + 2000)
						{
							if (func_429(&Var6, 1, iVar5, 0, !HUD::IS_MESSAGE_BEING_DISPLAYED(), 0))
							{
								iLocal_667++;
							}
						}
					}
				}
				else if (iLocal_669 == 0)
				{
					if (iLocal_667 < 16)
					{
						iVar5 = 0;
						switch (iLocal_667)
						{
							case 0:
								StringCopy(&Var6, "FBI2_SNIP", 16);
								iVar10 = iLocal_167[0];
								break;
							
							case 1:
								StringCopy(&Var6, "FBI2_CHAO2", 16);
								iVar10 = iLocal_167[1];
								break;
							
							case 2:
								StringCopy(&Var6, "FBI2_IAA", 16);
								iVar10 = func_625();
								break;
							
							case 3:
								StringCopy(&Var6, "FBI2_MRKSHT", 16);
								iVar10 = iLocal_156;
								break;
							
							case 4:
								StringCopy(&Var6, "FBI2_SHMIC", 16);
								iVar10 = iLocal_167[2];
								break;
							
							case 5:
								StringCopy(&Var6, "FBI2_CHAOS", 16);
								iVar10 = iLocal_167[0];
								break;
							
							case 6:
								StringCopy(&Var6, "FBI2_IAA", 16);
								iVar10 = func_625();
								break;
							
							case 7:
								StringCopy(&Var6, "FBI2_SNIP2", 16);
								iVar10 = iLocal_167[1];
								break;
							
							case 8:
								StringCopy(&Var6, "FBI2_MRKSHT", 16);
								iVar10 = iLocal_156;
								break;
							
							case 9:
								StringCopy(&Var6, "FBI2_ESCA", 16);
								iVar10 = iLocal_167[2];
								break;
							
							case 10:
								StringCopy(&Var6, "FBI2_SNIP4", 16);
								iVar10 = iLocal_167[3];
								break;
							
							case 11:
								StringCopy(&Var6, "FBI2_IAA", 16);
								iVar10 = func_625();
								break;
							
							case 12:
								StringCopy(&Var6, "FBI2_CHAO3", 16);
								iVar10 = iLocal_167[4];
								break;
							
							case 13:
								StringCopy(&Var6, "FBI2_MRKSHT", 16);
								iVar10 = iLocal_156;
								break;
							
							case 14:
								StringCopy(&Var6, "FBI2_CHAO4", 16);
								iVar10 = iLocal_167[3];
								break;
							
							case 15:
								StringCopy(&Var6, "FBI2_SNIP3", 16);
								iVar10 = iLocal_167[4];
								break;
						}
						if ((bLocal_381 && iLocal_772 < 0) && MISC::GET_GAME_TIMER() >= iLocal_722 + 2000)
						{
							if (!PED::IS_PED_INJURED(iVar10))
							{
								if (func_429(&Var6, 1, iVar5, 0, !HUD::IS_MESSAGE_BEING_DISPLAYED(), 0))
								{
									iLocal_667++;
								}
							}
							else
							{
								iLocal_667++;
							}
						}
					}
				}
				if (!bLocal_563)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_666)
					{
						if (iLocal_666 >= 0)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								iVar0 = 0;
								while (iVar0 < 6)
								{
									if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
									{
										if (!PED::IS_PED_INJURED(iLocal_156))
										{
											TASK::TASK_SHOOT_AT_ENTITY(iLocal_167[iVar0], iLocal_156, -1, -957453492);
										}
									}
									iVar0++;
								}
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_156, 0);
								iLocal_666 = -1;
								bLocal_563 = true;
							}
						}
						else if (iLocal_667 > 7)
						{
							iLocal_666 = MISC::GET_GAME_TIMER() + 2000;
						}
					}
				}
				else if (!iLocal_564)
				{
					if (PED::IS_PED_INJURED(iLocal_156))
					{
						iVar0 = 0;
						while (iVar0 < 6)
						{
							if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
							{
								TASK::TASK_AIM_GUN_AT_COORD(iLocal_167[iVar0], Local_811, -1, 0, 0);
							}
							iVar0++;
						}
						iLocal_564 = 1;
					}
					else
					{
						Local_811 = { ENTITY::GET_ENTITY_COORDS(iLocal_156, 1) };
					}
				}
				bVar11 = false;
				if (!PED::IS_PED_INJURED(iLocal_156))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_156, func_624(1), 0))
					{
						PED::APPLY_DAMAGE_TO_PED(iLocal_156, 1000, 0);
						bVar11 = true;
					}
				}
				else
				{
					bVar11 = true;
				}
				if (bVar11)
				{
					if (!PED::IS_PED_INJURED(iLocal_63[0]))
					{
						if (!PED::IS_PED_RAGDOLL(iLocal_63[0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_63[0]);
							PED::SET_PED_TO_RAGDOLL(iLocal_63[0], 25000, 25000, 0, 1, 1, 0);
							func_612(1);
						}
					}
				}
				iVar12 = 0;
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
					{
						if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_167[iVar0], func_624(4), 0))
						{
							PED::APPLY_DAMAGE_TO_PED(iLocal_167[iVar0], 1000, 0);
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_266[iVar0]))
						{
							HUD::REMOVE_BLIP(&(uLocal_266[iVar0]));
							GlobalFunc_565(288, 1, 0);
						}
						iVar12++;
					}
					iVar0++;
				}
				if (!bLocal_550)
				{
					bLocal_550 = GlobalFunc_2867("FIB2_SNIPER_SHOT_THREE");
				}
				if (!iLocal_436)
				{
					if (iVar12 >= 1)
					{
						func_868();
						iLocal_436 = 1;
					}
				}
				else
				{
					if (!bLocal_444)
					{
						bVar13 = false;
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_689[0]))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[0]) >= 0.98f)
							{
								bVar13 = true;
							}
						}
						else
						{
							bVar13 = true;
						}
						if (bVar13)
						{
							iVar0 = 0;
							while (iVar0 < 2)
							{
								iVar14 = iVar0 + 3;
								Local_44[iVar14 /*3*/].f_2 = 0;
								func_686(iVar14);
								iVar0++;
							}
							bLocal_444 = true;
						}
					}
					if (!iLocal_602)
					{
						if (iVar12 >= 5)
						{
							func_867();
							iLocal_602 = 1;
						}
					}
					else if (!bLocal_603)
					{
						bVar15 = false;
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_689[1]))
						{
							if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[1]) >= 0.98f)
							{
								bVar15 = true;
							}
						}
						else
						{
							bVar15 = true;
						}
						if (bVar15)
						{
							Local_44[5 /*3*/].f_2 = 0;
							func_686(5);
							bLocal_603 = true;
						}
					}
				}
				func_864(iVar12);
				func_856(iVar12);
				if (iVar12 >= 6)
				{
					if (iLocal_772 < 0)
					{
						iLocal_772 = MISC::GET_GAME_TIMER();
					}
					else
					{
						if (!iLocal_504)
						{
							if (GlobalFunc_10691(&uLocal_923, "FBI2AUD", "FBI2_PULL", 7, 0, 0, 0, 0))
							{
								iLocal_504 = 1;
								iLocal_787 = MISC::GET_GAME_TIMER();
							}
						}
						else if (!bLocal_442)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_787 + 200)
							{
								if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
								{
									GlobalFunc_2207();
									bLocal_442 = true;
								}
								else if (MISC::GET_GAME_TIMER() >= iLocal_787 + 3000)
								{
									GlobalFunc_4935();
									bLocal_442 = true;
								}
							}
						}
						if (bLocal_442)
						{
							if (!iLocal_523)
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_772 + 300)
								{
									iLocal_523 = 1;
								}
							}
							if (MISC::GET_GAME_TIMER() >= iLocal_772 + 2500)
							{
								GlobalFunc_2774(&iLocal_63, 2, 1);
								GlobalFunc_2774(&iLocal_63, 1, 0);
								GlobalFunc_2774(&iLocal_63, 0, 0);
								GlobalFunc_7206(0, 1, 0, 0);
								iLocal_667 = 0;
								func_853(1);
								iLocal_36 = 1;
							}
						}
						else
						{
							iLocal_772 = MISC::GET_GAME_TIMER();
						}
					}
				}
				break;
			
			case 1:
				iVar16 = func_852();
				if (!iLocal_446[1])
				{
					if (iVar16 < 3)
					{
						func_853(2);
						iLocal_446[1] = 1;
					}
				}
				if (!iLocal_446[2])
				{
					if (iLocal_446[0])
					{
						if (iLocal_37 == 1)
						{
							bVar17 = false;
							if (!PED::IS_PED_INJURED(iLocal_174[5]))
							{
								if ((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_174[5]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_174[5])) && iVar16 == 1)
								{
									bVar17 = true;
								}
							}
							else
							{
								bVar17 = true;
							}
							if (bVar17)
							{
								func_853(4);
								iLocal_446[2] = 1;
							}
						}
					}
				}
				else if (!iLocal_446[3])
				{
					bVar18 = false;
					if (!PED::IS_PED_INJURED(iLocal_174[6]))
					{
						if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_174[6]) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_174[6])) || iLocal_37 == 2) && iVar16 == 1)
						{
							bVar18 = true;
						}
					}
					else
					{
						bVar18 = true;
					}
					if (bVar18)
					{
						func_853(5);
						iLocal_446[3] = 1;
					}
				}
				if (!iLocal_446[0])
				{
					if (iVar16 < 2)
					{
						func_853(3);
						iLocal_446[0] = 1;
						iLocal_773 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					bVar19 = false;
					if (!PED::IS_PED_INJURED(iLocal_174[5]) && iVar16 == 1)
					{
						if (!PED::IS_PED_INJURED(iLocal_174[6]))
						{
							iLocal_590 = 1;
						}
						if (iLocal_37 == 2)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_773 + 4000)
							{
								if (!iLocal_588)
								{
									if (func_429("FBI2_SHOT", 0, 0, 0, 1, 0))
									{
										if (iLocal_667 >= 6 && iLocal_667 <= 9)
										{
											iLocal_667 = 10;
										}
										iLocal_588 = 1;
										iLocal_774 = MISC::GET_GAME_TIMER();
									}
								}
								else
								{
									bVar19 = true;
									if (!bLocal_589)
									{
										if (MISC::GET_GAME_TIMER() >= iLocal_774 + 2000)
										{
											bLocal_589 = func_426("SG_TROHLP2", 0, 12500);
										}
									}
								}
							}
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_174[6]))
					{
						bVar19 = true;
					}
					if (bVar19)
					{
						GlobalFunc_2998(&iLocal_63, 0, 1);
						GlobalFunc_2904(&iLocal_63, 0, 0);
						bVar20 = false;
						if (!PED::IS_PED_INJURED(iLocal_174[5]))
						{
							if (PED::IS_PED_SHOOTING(iLocal_174[5]))
							{
								bVar20 = true;
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_174[6]))
						{
							if (PED::IS_PED_SHOOTING(iLocal_174[6]))
							{
								bVar20 = true;
							}
						}
						if (!PED::IS_PED_INJURED(iLocal_174[7]))
						{
							if (PED::IS_PED_SHOOTING(iLocal_174[7]))
							{
								bVar20 = true;
							}
						}
						if (bVar20)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_775 + 1000)
							{
								if (!PED::IS_PED_INJURED(iLocal_63[0]))
								{
									PED::APPLY_DAMAGE_TO_PED(iLocal_63[0], 15, 1);
									iLocal_775 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					else
					{
						GlobalFunc_2998(&iLocal_63, 0, 0);
						if (GlobalFunc_74("SG_TROHLP2"))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_721 + 1000)
							{
								HUD::CLEAR_HELP(0);
								iLocal_721 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 8)
				{
					if (!PED::IS_PED_INJURED(iLocal_174[iVar0]))
					{
						if (!iLocal_451[iVar0])
						{
							iVar21 = func_625();
							switch (iVar0)
							{
								case 0:
									fVar22 = 0.43f;
									break;
								
								default:
									fVar22 = 0.98f;
									break;
							}
							if (!PED::IS_PED_INJURED(iVar21))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[func_851(iVar0)]) >= fVar22)
								{
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_918);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_918);
									TASK::TASK_CLEAR_LOOK_AT(0);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, iVar21, MISC::GET_RANDOM_INT_IN_RANGE(100, 4000), 1);
									TASK::TASK_SHOOT_AT_ENTITY(0, iVar21, -1, -687903391);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_918);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_174[iVar0], uLocal_918);
									iLocal_451[iVar0] = 1;
								}
								else
								{
									PED::SET_PED_RESET_FLAG(iLocal_174[iVar0], 64, 1);
									fVar23 = 1.1f;
									switch (iVar0)
									{
										case 1:
											switch (iLocal_710[iVar0])
											{
												case 0:
													fVar23 = 0.605f;
													break;
												
												case 1:
													fVar23 = 0.693f;
													break;
												
												case 2:
													fVar23 = 0.82f;
													break;
											}
											break;
										
										case 2:
											switch (iLocal_710[iVar0])
											{
												case 0:
													fVar23 = 0.26f;
													break;
												
												case 1:
													fVar23 = 0.287f;
													break;
												
												case 2:
													fVar23 = 0.392f;
													break;
												
												case 3:
													fVar23 = 0.42f;
													break;
												
												case 4:
													fVar23 = 0.46f;
													break;
												
												case 5:
													fVar23 = 0.65f;
													break;
												
												case 6:
													fVar23 = 0.705f;
													break;
												
												case 7:
													fVar23 = 0.852f;
													break;
												
												case 8:
													fVar23 = 0.91f;
													break;
											}
											break;
										
										case 3:
											switch (iLocal_710[iVar0])
											{
												case 0:
													fVar23 = 0.775f;
													break;
												
												case 1:
													fVar23 = 0.95f;
													break;
											}
											break;
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[func_851(iVar0)]) >= fVar23)
									{
										PED::SET_PED_SHOOTS_AT_COORD(iLocal_174[iVar0], 0f, 0f, 0f, 0);
										iLocal_710[iVar0]++;
									}
								}
							}
						}
						Var24 = { ENTITY::GET_ENTITY_COORDS(iLocal_174[iVar0], 1) };
						if ((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_174[iVar0], func_624(4), 0) || (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_174[iVar0], func_624(0), 0) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_174[iVar0], 1785177548) == 1)) || (PED::IS_PED_RAGDOLL(iLocal_174[iVar0]) && ((Var24.f_1 >= -619.2f || Var24.f_1 <= -624.1f) || Var24.x >= 124.3f)))
						{
							PED::APPLY_DAMAGE_TO_PED(iLocal_174[iVar0], 1000, 0);
						}
					}
					iVar0++;
				}
				if (iLocal_38 >= 3)
				{
					if (iVar16 > 0)
					{
						if (iLocal_667 < 21 && (iLocal_667 >= 1 || bLocal_442))
						{
							iVar5 = 0;
							switch (iLocal_667)
							{
								case 0:
									StringCopy(&Var6, "FBI2_ESCA2", 16);
									iVar27 = iLocal_174[1];
									break;
								
								case 1:
									StringCopy(&Var6, "FBI2_MIDAIR", 16);
									iVar27 = iLocal_156;
									break;
								
								case 2:
									StringCopy(&Var6, "FBI2_SNIP5", 16);
									iVar27 = iLocal_174[0];
									break;
								
								case 3:
									StringCopy(&Var6, "FBI2_MSHOOT1", 16);
									iVar27 = iLocal_174[0];
									break;
								
								case 4:
									StringCopy(&Var6, "FBI2_STK2", 16);
									iVar27 = iLocal_156;
									break;
								
								case 5:
									StringCopy(&Var6, "FBI2_NOMOV", 16);
									iVar27 = func_625();
									break;
								
								case 6:
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										StringCopy(&Var6, "FBI2_YMOVE", 16);
									}
									else
									{
										StringCopy(&Var6, "FBI2_YMOVE2", 16);
									}
									iVar27 = func_404();
									break;
								
								case 7:
									StringCopy(&Var6, "FBI2_SHM2", 16);
									iVar27 = iLocal_174[1];
									break;
								
								case 8:
									StringCopy(&Var6, "FBI2_AHOL", 16);
									iVar27 = func_625();
									break;
								
								case 9:
									StringCopy(&Var6, "FBI2_HEHE", 16);
									iVar27 = func_404();
									break;
								
								case 10:
									StringCopy(&Var6, "FBI2_CHAO5", 16);
									iVar27 = iLocal_174[0];
									break;
								
								case 11:
									StringCopy(&Var6, "FBI2_MIDAIR", 16);
									iVar27 = iLocal_156;
									break;
								
								case 12:
									StringCopy(&Var6, "FBI2_STK3", 16);
									iVar27 = iLocal_174[3];
									break;
								
								case 13:
									StringCopy(&Var6, "FBI2_MOAN", 16);
									iVar27 = func_625();
									break;
								
								case 14:
									StringCopy(&Var6, "FBI2_TALK", 16);
									iVar27 = func_404();
									break;
								
								case 15:
									StringCopy(&Var6, "FBI2_MSHOOT2", 16);
									iVar27 = iLocal_156;
									break;
								
								case 16:
									StringCopy(&Var6, "FBI2_SHM3", 16);
									iVar27 = iLocal_174[3];
									break;
								
								case 17:
									StringCopy(&Var6, "FBI2_MIDAIR", 16);
									iVar27 = iLocal_156;
									break;
								
								case 18:
									StringCopy(&Var6, "FBI2_GETOUT", 16);
									iVar27 = func_625();
									break;
								
								case 19:
									StringCopy(&Var6, "FBI2_MSHOOT3", 16);
									iVar27 = iLocal_156;
									break;
								
								case 20:
									StringCopy(&Var6, "FBI2_FRANS", 16);
									iVar27 = func_622();
									break;
							}
							if (!PED::IS_PED_INJURED(iVar27))
							{
								if (func_429(&Var6, 1, iVar5, 0, 1, 0))
								{
									iLocal_667++;
								}
							}
							else
							{
								iLocal_667++;
							}
						}
					}
				}
				iVar28 = 0;
				iVar0 = 0;
				while (iVar0 < iLocal_174)
				{
					if (!PED::IS_PED_INJURED(iLocal_174[iVar0]))
					{
						iVar28++;
					}
					iVar0++;
				}
				if (((!iLocal_446[0] || !iLocal_446[1]) || !iLocal_446[2]) || !iLocal_446[3])
				{
					iVar28++;
				}
				if (iVar28 == 0)
				{
					iLocal_1151 = 1;
				}
				if (iLocal_38 < 3)
				{
					if (!bLocal_1152)
					{
						if (iVar28 < 3)
						{
							iLocal_523 = 1;
						}
					}
					else
					{
						iLocal_523 = 1;
					}
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[0]))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_199[0], 0f);
				}
				break;
		}
		iVar29 = func_625();
		if (!PED::IS_PED_INJURED(iVar29))
		{
			PED::SET_PED_CAN_TORSO_REACT_IK(iVar29, 0);
		}
		if (!bLocal_381 && iLocal_30 == 4)
		{
			if (!iLocal_558)
			{
				if (iLocal_667 < 8)
				{
					iLocal_558 = func_429("FBI2_SHTK", 0, 0, 0, 1, 0);
				}
				else
				{
					iLocal_558 = 1;
				}
			}
			else
			{
				bLocal_381 = true;
				iLocal_722 = MISC::GET_GAME_TIMER();
			}
		}
		if (iLocal_38 == 3)
		{
			fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687);
			if (iLocal_431)
			{
				if (fVar1 >= 0.02f)
				{
					iLocal_431 = 0;
				}
			}
			if (!iLocal_441)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_687))
				{
					fVar1 = PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687);
					if (fVar1 >= 0.98f)
					{
						iLocal_38 = 4;
						func_849(0, 1);
						iLocal_738 = MISC::GET_GAME_TIMER();
						func_873(4);
						GlobalFunc_2904(&iLocal_63, 0, 1);
						iLocal_724 = MISC::GET_GAME_TIMER() + 1100;
						RECORDING::_0x293220DA1B46CEBC(3f, 2f, 3);
						iLocal_441 = 1;
					}
					if (fVar1 >= 0.18f)
					{
						fLocal_642 = (fLocal_642 + (0.21f * SYSTEM::TIMESTEP()));
						if (fLocal_642 > 1f)
						{
							fLocal_642 = 1f;
						}
					}
					if (!bLocal_442)
					{
						if (fVar1 >= 0.01f)
						{
						}
					}
				}
			}
		}
		if (iLocal_38 == 5)
		{
			if (MISC::GET_GAME_TIMER() >= iLocal_739)
			{
				if ((iLocal_37 == 1 || iLocal_37 == 2) && !GlobalFunc_111())
				{
					if (GlobalFunc_Has_Cutscene_Loaded())
					{
						fLocal_642 = 1f;
						iLocal_377 = 1;
					}
				}
			}
		}
	}
	else
	{
		func_842();
	}
	func_841();
}

void func_841()//Position - 0x82C5E
{
	int iVar0;
	
	iVar0 = func_622();
	if (!PED::IS_PED_INJURED(iVar0))
	{
		ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
	}
}

void func_842()//Position - 0x82C7D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bLocal_625)
	{
		if (CUTSCENE::GET_CUTSCENE_TIME() >= 1500 && CUTSCENE::_HAS_CUTSCENE_CUT_THIS_FRAME())
		{
			bLocal_625 = false;
		}
	}
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(-135.84f, -592.13f, 210.68f);
	switch (iLocal_35)
	{
		case 0:
			iVar0 = func_625();
			iVar1 = func_404();
			iVar2 = func_622();
			if (!PED::IS_PED_INJURED(iVar0))
			{
				ENTITY::DETACH_ENTITY(iVar0, 1, 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar0, "Michael", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iVar1))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iVar1, "Trevor", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_156))
			{
				ENTITY::DETACH_ENTITY(iLocal_156, 1, 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_156, "MR_K", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iVar2))
			{
				ENTITY::DETACH_ENTITY(iVar2, 1, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_199[0], "Main_heli", 0, 0, 0);
			}
			CUTSCENE::START_CUTSCENE(2048);
			TASK::CLEAR_PED_TASKS(iLocal_197);
			func_846(1, PHYSICS::GET_ROPE_LAST_VERTEX_COORD(Local_816.f_5), 0, 0, 0);
			iLocal_1155 = 1;
			func_844(&uLocal_1157, 1);
			iLocal_628 = 0;
			iLocal_629 = 0;
			iLocal_656 = MISC::GET_GAME_TIMER();
			iLocal_35 = 1;
			break;
		
		case 1:
			if (!iLocal_379)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
					if (STREAMING::STREAMVOL_IS_VALID(uLocal_920))
					{
						STREAMING::STREAMVOL_DELETE(uLocal_920);
					}
					if (STREAMING::STREAMVOL_IS_VALID(uLocal_919))
					{
						STREAMING::STREAMVOL_DELETE(uLocal_919);
					}
					if (PHYSICS::DOES_ROPE_EXIST(&(Local_816.f_5)))
					{
						PHYSICS::DELETE_ROPE(&(Local_816.f_5));
					}
					func_704(3, 1);
					func_846(0, 0f, 0f, 0f, bLocal_625, 1, 0);
					uLocal_920 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-133.8f, -591.8f, 212f, GlobalFunc_590(-0.3f, 1.6f, 116.4f), 500f, 12, 127);
					func_376();
					func_829(1, 0);
					func_298(7);
					func_298(8);
					func_846(0, 0f, 0f, 0f, bLocal_625, 1, 1);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_379 = 1;
				}
			}
			else
			{
				func_846(0, 0f, 0f, 0f, bLocal_625, 1, 0);
			}
			if (!bLocal_552)
			{
				if (MISC::GET_GAME_TIMER() >= iLocal_656 + 3000)
				{
					bLocal_552 = GlobalFunc_2867("FIB2_HELICOPTERS_APPROACHING");
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Main_Heli", 0))
			{
				func_697(1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (!PED::IS_PED_INJURED(func_404()))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(func_404(), 0))
					{
						ENTITY::DETACH_ENTITY(func_404(), 1, 1);
						PED::SET_PED_INTO_VEHICLE(func_404(), iLocal_199[0], -1);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_404(), 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MR_K", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_156))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_156, 0))
					{
						ENTITY::DETACH_ENTITY(iLocal_156, 1, 1);
						PED::SET_PED_INTO_VEHICLE(iLocal_156, iLocal_199[0], 2);
						func_676();
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_156, 0, 0);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (GlobalFunc_8315() != 1)
				{
					GlobalFunc_9019(&iLocal_63, 1);
					GlobalFunc_10980(&iLocal_63, 1, 0, 0);
					func_301(1);
				}
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				if (!PED::IS_PED_INJURED(func_625()))
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(func_625(), 0))
					{
						ENTITY::DETACH_ENTITY(func_625(), 1, 1);
					}
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -142.83f, -593.62f, 210.77f, 1, 1, 0, 1);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				func_4(0, 1, 1, 1, 1, 1);
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_203[iVar3], 0))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_203[iVar3]))
						{
							if (iVar3 < 2)
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_203[iVar3], 2000f);
							}
							else
							{
								VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_203[iVar3], 4000f);
							}
						}
					}
					iVar3++;
				}
				func_678(0);
				iLocal_1155 = 2;
				func_675();
				func_674();
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_625(), 0, 0);
				while (!func_844(&uLocal_1157, 1))
				{
					func_506();
				}
				func_627(5, 0, 1, 1, 0, 1, 1, 1);
				ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
				if (STREAMING::STREAMVOL_IS_VALID(uLocal_920))
				{
					STREAMING::STREAMVOL_DELETE(uLocal_920);
				}
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			break;
		
		case 2:
			break;
	}
}


int func_844(var uParam0, bool bParam1)//Position - 0x83095
{
	int iVar0;
	var uVar1;
	
	uVar1 = func_507(21);
	switch (iLocal_1155)
	{
		case 0:
			break;
		
		case 1:
			if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
			}
			if (STREAMING::STREAMVOL_IS_VALID(uLocal_920))
			{
				STREAMING::STREAMVOL_DELETE(uLocal_920);
			}
			if (STREAMING::STREAMVOL_IS_VALID(uLocal_919))
			{
				STREAMING::STREAMVOL_DELETE(uLocal_919);
			}
			STREAMING::NEW_LOAD_SCENE_START_SPHERE(-144.6f, -593.7f, 211.8f, 20f, 2);
			break;
		
		case 2:
			func_845(uParam0, func_622());
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			func_484(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			SYSTEM::SETTIMERB(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
			iLocal_9844 = 0;
			iLocal_9845 = 0;
			iLocal_1155 = 3;
		
		case 3:
			iVar0 = func_471(uParam0);
			if (!iLocal_9845)
			{
				TASK::TASK_PLAY_ANIM(iLocal_197, uVar1, "ig_7_m_door_f_sniping_franklin", 1000f, -8f, -1, 0, fLocal_9846, 0, 0, 0);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_197, 1, 0);
				iLocal_9845 = 1;
			}
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				if (iVar0 >= uParam0->f_1218)
				{
					Local_107.f_18 = 1;
				}
				if (CAM::DOES_CAM_EXIST(uParam0->f_1))
				{
					if (!iLocal_628)
					{
						if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 0f)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_628 = 1;
						}
					}
					if (CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1) >= 1f)
					{
						iLocal_1155 = 5;
					}
				}
				else
				{
					iLocal_1155 = 5;
				}
			}
			break;
		
		case 5:
			MISC::SET_TIME_SCALE(1f);
			CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
			if (CAM::DOES_CAM_EXIST(uParam0->f_1))
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_1, 0);
			}
			if (GlobalFunc_3000(uParam0))
			{
				GlobalFunc_2999(uParam0);
			}
			if (!iLocal_9844)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				HUD::DISPLAY_RADAR(1);
				HUD::DISPLAY_HUD(1);
				iLocal_9844 = 1;
			}
			SYSTEM::SETTIMERA(0);
			iLocal_1155 = 0;
			STREAMING::NEW_LOAD_SCENE_STOP();
			uParam0->f_1232 = 1;
			Local_107.f_15 = 0;
			Local_107.f_18 = 0;
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			return 1;
			break;
	}
	if (bParam1)
	{
		return 0;
	}
	return uParam0->f_1232;
}

void func_845(var uParam0, int iParam1)//Position - 0x832A1
{
	uParam0->f_10[0 /*57*/].f_2 = 3;
	uParam0->f_10[0 /*57*/].f_3 = -1;
	uParam0->f_10[0 /*57*/].f_4 = 0;
	uParam0->f_10[0 /*57*/].f_5 = 0;
	uParam0->f_10[0 /*57*/].f_6 = { -134.2022f, -592.6018f, 211.9194f };
	uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_12 = 0f;
	uParam0->f_10[0 /*57*/].f_16 = 0f;
	uParam0->f_10[0 /*57*/].f_17 = 0;
	uParam0->f_10[0 /*57*/].f_9 = { 5.9428f, -0.698f, 102.2135f };
	uParam0->f_10[0 /*57*/].f_18 = 0;
	uParam0->f_10[0 /*57*/].f_19 = 0;
	uParam0->f_10[0 /*57*/].f_20 = 1;
	uParam0->f_10[0 /*57*/].f_21 = 43f;
	uParam0->f_10[0 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[0 /*57*/].f_27 = 0;
	uParam0->f_10[0 /*57*/].f_50 = 0;
	uParam0->f_10[0 /*57*/].f_51 = 0f;
	uParam0->f_10[0 /*57*/].f_52 = 0f;
	uParam0->f_10[0 /*57*/].f_22 = 0.3f;
	uParam0->f_10[0 /*57*/].f_53 = 0;
	uParam0->f_10[0 /*57*/].f_23 = 0f;
	uParam0->f_10[0 /*57*/].f_28 = 0;
	uParam0->f_10[0 /*57*/].f_29 = 0f;
	uParam0->f_10[0 /*57*/].f_32 = 0f;
	uParam0->f_10[0 /*57*/].f_30 = 1;
	uParam0->f_10[0 /*57*/].f_31 = 0;
	uParam0->f_10[0 /*57*/].f_33 = 0.01f;
	uParam0->f_10[0 /*57*/].f_34 = 0;
	uParam0->f_10[0 /*57*/].f_35 = 0f;
	uParam0->f_10[0 /*57*/].f_36 = 0;
	uParam0->f_10[0 /*57*/].f_37 = 0;
	uParam0->f_10[0 /*57*/].f_39 = 0f;
	uParam0->f_10[0 /*57*/].f_40 = 0f;
	uParam0->f_10[0 /*57*/].f_41 = 0;
	uParam0->f_10[0 /*57*/].f_42 = 0;
	uParam0->f_10[0 /*57*/].f_43 = 0;
	uParam0->f_10[0 /*57*/].f_38 = 0f;
	uParam0->f_10[0 /*57*/].f_45 = 0;
	uParam0->f_10[0 /*57*/].f_46 = 0;
	uParam0->f_10[0 /*57*/].f_47 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
	uParam0->f_10[1 /*57*/].f_2 = 3;
	uParam0->f_10[1 /*57*/].f_3 = -1;
	uParam0->f_10[1 /*57*/].f_4 = 0;
	uParam0->f_10[1 /*57*/].f_5 = 1500;
	uParam0->f_10[1 /*57*/].f_6 = { -134.2023f, -592.6019f, 211.9195f };
	uParam0->f_10[1 /*57*/].f_13 = { -1662.857f, -1116.356f, 17.8841f };
	uParam0->f_10[1 /*57*/].f_12 = 5f;
	uParam0->f_10[1 /*57*/].f_16 = 0f;
	uParam0->f_10[1 /*57*/].f_17 = 0;
	uParam0->f_10[1 /*57*/].f_9 = { 5.9428f, -0.698f, 102.2135f };
	uParam0->f_10[1 /*57*/].f_18 = 0;
	uParam0->f_10[1 /*57*/].f_19 = 0;
	uParam0->f_10[1 /*57*/].f_20 = 1;
	uParam0->f_10[1 /*57*/].f_21 = 43f;
	uParam0->f_10[1 /*57*/].f_24 = { 0f, 0f, 0f };
	uParam0->f_10[1 /*57*/].f_27 = 0;
	uParam0->f_10[1 /*57*/].f_50 = 0;
	uParam0->f_10[1 /*57*/].f_51 = 0f;
	uParam0->f_10[1 /*57*/].f_52 = 0f;
	uParam0->f_10[1 /*57*/].f_22 = 0.8f;
	uParam0->f_10[1 /*57*/].f_53 = 0;
	uParam0->f_10[1 /*57*/].f_23 = 0f;
	uParam0->f_10[1 /*57*/].f_28 = 2;
	uParam0->f_10[1 /*57*/].f_29 = 0.9f;
	uParam0->f_10[1 /*57*/].f_32 = 0f;
	uParam0->f_10[1 /*57*/].f_30 = 1;
	uParam0->f_10[1 /*57*/].f_31 = 0;
	uParam0->f_10[1 /*57*/].f_33 = 1f;
	uParam0->f_10[1 /*57*/].f_34 = 0;
	uParam0->f_10[1 /*57*/].f_35 = 0f;
	uParam0->f_10[1 /*57*/].f_36 = 1;
	uParam0->f_10[1 /*57*/].f_37 = 20;
	uParam0->f_10[1 /*57*/].f_39 = 0f;
	uParam0->f_10[1 /*57*/].f_40 = 0f;
	uParam0->f_10[1 /*57*/].f_41 = 0;
	uParam0->f_10[1 /*57*/].f_42 = 0;
	uParam0->f_10[1 /*57*/].f_43 = 0;
	uParam0->f_10[1 /*57*/].f_38 = 0f;
	uParam0->f_10[1 /*57*/].f_45 = 0;
	uParam0->f_10[1 /*57*/].f_46 = 0;
	uParam0->f_10[1 /*57*/].f_47 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
	uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
	uParam0->f_1217 = 2;
	uParam0->f_1218 = 0;
	uParam0->f_1233 = -1f;
	uParam0->f_1234 = -1f;
	uParam0->f_1235 = 1;
	uParam0->f_1236 = 1;
	uParam0->f_1237 = 1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_1219 = 0;
	uParam0->f_1221 = "thisSwitchCam";
	uParam0->f_1220 = "CameraInfo_FIB2_HangingToSniper.txt";
	uParam0->f_1225 = "CameraInfo_FIB2_HangingToSniper.xml";
	*uParam0 = 1;
	uParam0->f_7[0] = iParam1;
}

void func_846(bool bParam0, struct<3> Param1, bool bParam4, int iParam5, bool bParam6)//Position - 0x836E9
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	struct<3> Var24;
	struct<3> Var27;
	struct<3> Var30;
	struct<3> Var33;
	bool bVar36;
	float fVar37;
	
	if (Local_816.f_57)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
		{
			iVar0 = func_625();
			if (!PED::IS_PED_INJURED(iVar0))
			{
				if (!bParam0)
				{
					Var2 = { func_848() };
				}
				else
				{
					Var2 = { Param1 };
				}
				if (iLocal_30 < 4 || iParam5)
				{
					Var5 = { func_405(21) };
				}
				else
				{
					Var5 = { func_405(22) };
				}
				Var8 = { ENTITY::GET_ENTITY_COORDS(Local_816.f_6, 1) };
				if (bParam6)
				{
					Var8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], func_405(14)) };
				}
				if (bParam4)
				{
					Var8 = { Var8 + Vector(0f, -1f, 0f) };
				}
				Var11 = { Var2 - Var8 };
				Var14 = { Var5 - Var8 };
				iVar17 = (Local_816.f_91 - 2);
				Var21 = { Var14 / Vector(IntToFloat(iVar17), IntToFloat(iVar17), IntToFloat(iVar17)) };
				iVar1 = 0;
				while (iVar1 < Local_816.f_91)
				{
					if (iVar1 == 0)
					{
						PHYSICS::PIN_ROPE_VERTEX(Local_816.f_5, iVar1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], func_405(14)));
					}
					else if (iVar1 == (Local_816.f_91 - 1))
					{
						PHYSICS::PIN_ROPE_VERTEX(Local_816.f_5, iVar1, Var2);
					}
					else
					{
						bVar36 = false;
						if (fLocal_642 > 0f)
						{
							fVar37 = func_847(iVar1, iLocal_30);
							Var18 = { Var11 * Vector(-fVar37, -fVar37, -fVar37) };
							Var27 = { (Var8.x - Var18.x), (Var8.f_1 - Var18.f_1), (Var8.f_2 - Var18.f_2) };
							if (fLocal_642 == 1f)
							{
								Var33 = { Var27 };
								bVar36 = true;
							}
						}
						if (fLocal_642 < 1f)
						{
							Var24 = { (Var8.x + (Var21.x * IntToFloat(iVar1))), (Var8.f_1 + (Var21.f_1 * IntToFloat(iVar1))), (Var8.f_2 + (Var21.f_2 * IntToFloat(iVar1))) };
							if (fLocal_642 == 0f)
							{
								Var33 = { Var24 };
								bVar36 = true;
							}
						}
						if (!bVar36)
						{
							Var30 = { Var27 - Var24 };
							Var33 = { Var24 + Var30 * Vector(fLocal_642, fLocal_642, fLocal_642) };
						}
						if (iLocal_30 < 4 || iParam5)
						{
							PHYSICS::PIN_ROPE_VERTEX(Local_816.f_5, iVar1, Var33);
						}
						else if (iVar1 < 31)
						{
							if (iLocal_38 < 3 || fLocal_642 < 0.3f)
							{
								PHYSICS::PIN_ROPE_VERTEX(Local_816.f_5, iVar1, Var33);
							}
							else
							{
								PHYSICS::UNPIN_ROPE_VERTEX(Local_816.f_5, iVar1);
							}
						}
						else if (iVar1 < 30)
						{
						}
						else if (iLocal_38 >= 3)
						{
						}
					}
					iVar1++;
				}
			}
		}
	}
}

float func_847(int iParam0, int iParam1)//Position - 0x83942
{
	switch (iParam0)
	{
		case 0:
			return 0f;
			break;
		
		case 1:
			return 0.031465f;
			break;
		
		case 2:
			return 0.062912f;
			break;
		
		case 3:
			return 0.094346f;
			break;
		
		case 4:
			return 0.125768f;
			break;
		
		case 5:
			return 0.157177f;
			break;
		
		case 6:
			return 0.188572f;
			break;
		
		case 7:
			return 0.219954f;
			break;
		
		case 8:
			return 0.251322f;
			break;
		
		case 9:
			return 0.282676f;
			break;
		
		case 10:
			return 0.314017f;
			break;
		
		case 11:
			return 0.345343f;
			break;
		
		case 12:
			return 0.376657f;
			break;
		
		case 13:
			return 0.407956f;
			break;
		
		case 14:
			return 0.439242f;
			break;
		
		case 15:
			return 0.470513f;
			break;
		
		case 16:
			return 0.501771f;
			break;
		
		case 17:
			return 0.533015f;
			break;
		
		case 18:
			return 0.564245f;
			break;
		
		case 19:
			return 0.595462f;
			break;
		
		case 20:
			return 0.626664f;
			break;
		
		case 21:
			return 0.657853f;
			break;
		
		case 22:
			return 0.689027f;
			break;
		
		case 23:
			return 0.720188f;
			break;
		
		case 24:
			return 0.751334f;
			break;
		
		case 25:
			return 0.782467f;
			break;
		
		case 26:
			return 0.813585f;
			break;
		
		case 27:
			return 0.84469f;
			break;
		
		case 28:
			if (iParam1 < 4)
			{
				return 0.87578f;
			}
			else
			{
				return 0.85578f;
			}
			break;
		
		case 29:
			if (iParam1 < 4)
			{
				return 0.906856f;
			}
			else
			{
				return 0.886856f;
			}
			break;
		
		case 30:
			if (iParam1 < 4)
			{
				return 0.937918f;
			}
			else
			{
				return 0.917918f;
			}
			break;
		
		case 31:
			return 0.968966f;
			break;
		
		case 32:
			return 1f;
			break;
	}
	return 0f;
}

Vector3 func_848()//Position - 0x83BAE
{
	int iVar0;
	
	iVar0 = func_625();
	if (!PED::IS_PED_INJURED(iVar0))
	{
		ENTITY::PROCESS_ENTITY_ATTACHMENTS(iVar0);
		return PED::GET_PED_BONE_COORDS(iVar0, 42114, 0f, 0f, 0f);
	}
	return 0f, 0f, 0f;
}

void func_849(bool bParam0, bool bParam1)//Position - 0x83BDF
{
	int iVar0;
	struct<3> Var1;
	
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < Local_816.f_91)
		{
			PHYSICS::UNPIN_ROPE_VERTEX(Local_816.f_5, iVar0);
			iVar0++;
		}
	}
	Var1 = { PHYSICS::GET_ROPE_LAST_VERTEX_COORD(Local_816.f_5) };
	iLocal_232 = OBJECT::CREATE_OBJECT(func_16(22), Var1, 1, 1, 0);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_232, 0);
	ENTITY::SET_ENTITY_COLLISION(iLocal_232, 0, 0);
	func_869(bParam0);
	func_850(bParam0);
}

void func_850(bool bParam0)//Position - 0x83C48
{
	struct<3> Var0;
	float fVar3;
	
	if (!PED::IS_PED_INJURED(iLocal_156))
	{
		PED::SET_PED_CAN_RAGDOLL(iLocal_156, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
		{
			Var0 = { func_405(18) + func_405(19) };
			if (bParam0)
			{
				fVar3 = 1000f;
			}
			else
			{
				fVar3 = 8f;
			}
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_156, iLocal_232, 0, Var0, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
			TASK::TASK_PLAY_ANIM(iLocal_156, func_507(0), "Hang_idle_mrk", fVar3, -1000f, -1, 1, 0, 0, 0, 0);
			if (bParam0)
			{
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_156, 0, 0);
			}
		}
	}
}

int func_851(int iParam0)//Position - 0x83CD1
{
	switch (iParam0)
	{
		case 4:
			return 2;
			break;
		
		case 5:
			return 3;
			break;
		
		case 6:
			return 4;
			break;
		
		case 7:
			return 5;
			break;
	}
	return 0;
}

int func_852()//Position - 0x83D15
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (PED::IS_PED_INJURED(iLocal_174[iVar0]) || fLocal_635 >= 36000f)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_273[iVar0]))
			{
				HUD::REMOVE_BLIP(&(uLocal_273[iVar0]));
				GlobalFunc_565(288, 1, 0);
			}
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

void func_853(int iParam0)//Position - 0x83D7C
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	if (iParam0 == 1)
	{
		iVar14 = 0;
		iVar15 = 3;
		uLocal_689[0] = PED::CREATE_SYNCHRONIZED_SCENE(func_405(33), 0f, 0f, 145.5f, 2);
	}
	else if (iParam0 == 2)
	{
		iVar14 = 4;
		iVar15 = 4;
		uLocal_689[2] = PED::CREATE_SYNCHRONIZED_SCENE(func_405(33), 0f, 0f, 145.5f, 2);
	}
	else if (iParam0 == 3)
	{
		iVar14 = 5;
		iVar15 = 5;
		uLocal_689[3] = PED::CREATE_SYNCHRONIZED_SCENE(func_405(33) + Vector(0f, 0.4f, 0.4f), 0f, 0f, 145.5f, 2);
	}
	else if (iParam0 == 4)
	{
		iVar14 = 6;
		iVar15 = 6;
		uLocal_689[4] = PED::CREATE_SYNCHRONIZED_SCENE(func_405(33) + Vector(0f, -2.5f, -0.6f), 0f, 0f, 145.5f, 2);
	}
	else if (iParam0 == 5)
	{
		iVar14 = 7;
		iVar15 = 7;
		uLocal_689[5] = PED::CREATE_SYNCHRONIZED_SCENE(func_405(33), 0f, 0f, 145.5f, 2);
	}
	iVar0 = iVar14;
	while (iVar0 <= iVar15)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0]))
		{
			iVar6 = func_624(1);
			switch (iVar0)
			{
				case 0:
					Var1 = { 116.45f, -626.87f, 205.05f };
					fVar4 = -32.35f;
					sVar5 = "WAVE_2_A";
					iVar6 = func_624(2);
					iVar7 = 1;
					iVar8 = 2;
					iVar9 = 0;
					iVar10 = 1;
					iVar11 = 0;
					iVar12 = 2;
					iVar13 = 0;
					break;
				
				case 1:
					Var1 = { 133.85f, -614.77f, 205.05f };
					fVar4 = 150.59f;
					sVar5 = "WAVE_2_B";
					iVar7 = 1;
					iVar8 = 1;
					iVar9 = 1;
					iVar10 = 1;
					iVar11 = 2;
					iVar12 = 3;
					iVar13 = 0;
					break;
				
				case 2:
					Var1 = { 125.73f, -617.68f, 205.05f };
					fVar4 = 141.07f;
					sVar5 = "WAVE_2_C";
					iVar7 = 2;
					iVar8 = 0;
					iVar9 = 0;
					iVar10 = 0;
					iVar11 = 0;
					iVar12 = 3;
					iVar13 = 1;
					break;
				
				case 3:
					Var1 = { 126.11f, -617.95f, 205.05f };
					fVar4 = 121.76f;
					sVar5 = "WAVE_2_D";
					iVar7 = 0;
					iVar8 = 1;
					iVar9 = 1;
					iVar10 = 2;
					iVar11 = 1;
					iVar12 = 3;
					iVar13 = 0;
					break;
				
				case 4:
					Var1 = { 117.16f, -628.03f, 205.05f };
					fVar4 = -44.96f;
					sVar5 = "WAVE_3_A";
					iVar6 = func_624(2);
					iVar7 = 0;
					iVar8 = 2;
					iVar9 = 2;
					iVar10 = 0;
					iVar11 = 2;
					iVar12 = 3;
					iVar13 = 0;
					break;
				
				case 5:
					Var1 = { 130.94f, -614.26f, 205.05f };
					fVar4 = 123.36f;
					sVar5 = "WAVE_3_B";
					iVar6 = func_624(2);
					iVar7 = 1;
					iVar8 = 0;
					iVar9 = 1;
					iVar10 = 2;
					iVar11 = 1;
					break;
				
				case 6:
					Var1 = { 126.11f, -617.95f, 205.05f };
					fVar4 = 121.76f;
					sVar5 = "WAVE_2_D";
					iVar7 = 0;
					iVar8 = 0;
					iVar9 = 1;
					iVar10 = 0;
					iVar11 = 1;
					iVar12 = 3;
					iVar13 = 1;
					break;
				
				case 7:
					Var1 = { 133.85f, -614.77f, 205.05f };
					fVar4 = 150.59f;
					sVar5 = "WAVE_1_A";
					iVar7 = 0;
					iVar8 = 2;
					iVar9 = 0;
					iVar10 = 5;
					iVar11 = 1;
					iVar13 = 1;
					iVar12 = 3;
					break;
			}
			iLocal_174[iVar0] = PED::CREATE_PED(26, func_16(9), Var1, fVar4, 1, 1);
			WEAPON::GIVE_WEAPON_TO_PED(iLocal_174[iVar0], iVar6, -1, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_174[iVar0], 1);
			PED::STOP_PED_WEAPON_FIRING_WHEN_DROPPED(iLocal_174[iVar0]);
			PED::SET_PED_DIES_WHEN_INJURED(iLocal_174[iVar0], 1);
			PED::SET_PED_ACCURACY(iLocal_174[iVar0], 20);
			PED::SET_PED_AS_ENEMY(iLocal_174[iVar0], 1);
			PED::SET_PED_KEEP_TASK(iLocal_174[iVar0], 1);
			ENTITY::SET_ENTITY_PROOFS(iLocal_174[iVar0], 0, 0, 0, 1, 1, 0, 0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_174[iVar0], 1);
			PED::SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(iLocal_174[iVar0], 1);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_174[iVar0], 1, 0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_174[iVar0], iLocal_1088);
			uLocal_273[iVar0] = func_416(iLocal_174[iVar0], 1);
			GlobalFunc_593(iLocal_174[iVar0], 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_174[iVar0], 188, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_174[iVar0], 208, 1);
			PED::SET_PED_CONFIG_FLAG(iLocal_174[iVar0], 118, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_174[iVar0], 198, 1);
			PED::_0x733C87D4CE22BEA2(iLocal_174[iVar0]);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_174[iVar0], 0, iVar7, iVar8, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_174[iVar0], 3, iVar9, iVar10, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_174[iVar0], 4, 0, iVar11, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_174[iVar0], 9, iVar13, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_174[iVar0], 2, iVar12, 0, 0);
			iVar16 = func_625();
			if (!PED::IS_PED_INJURED(iVar16))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_174[iVar0], iVar16, -1, 8192, 2);
			}
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_174[iVar0], uLocal_689[func_851(iVar0)], func_507(2), sVar5, 1000f, -0.25f, 0, 0, 1148846080, 0);
			if (iVar0 == 6)
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[4], 0.71f);
			}
			else if (iVar0 == 7)
			{
				PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[5], 0.2f);
			}
			if (iVar0 == 0)
			{
				GlobalFunc_173(&uLocal_923, 4, iLocal_174[iVar0], "FBI2AGENT5", 0, 1);
			}
			else if (iVar0 == 1)
			{
				GlobalFunc_173(&uLocal_923, 5, iLocal_174[iVar0], "FBI2AGENT7", 0, 1);
			}
			else if (iVar0 == 3)
			{
				GlobalFunc_173(&uLocal_923, 6, iLocal_174[iVar0], "FBI2AGENT8", 0, 1);
			}
			else if (iVar0 == 5)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_174[iVar0], 1);
			}
		}
		iVar0++;
	}
}



void func_856(int iParam0)//Position - 0x84334
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<3> Var5;
	bool bVar8;
	struct<3> Var9;
	int iVar12;
	int iVar13;
	
	if (!bLocal_444)
	{
		iVar1 = 2;
	}
	else if (!bLocal_603)
	{
		iVar1 = 4;
	}
	else
	{
		iVar1 = 5;
	}
	iVar2 = func_625();
	iVar3 = 0;
	bVar8 = false;
	if ((MISC::IS_SNIPER_BULLET_IN_AREA(109.26f, -622.75f, 206.16f, 121.75f, -618.34f, 208.45f) || iParam0 > 0) && !bLocal_563)
	{
		if (!iLocal_443)
		{
			iVar3 = 2;
			iLocal_443 = 1;
		}
		bVar8 = true;
	}
	if (!PED::IS_PED_INJURED(iVar2))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (iVar3 != 2)
			{
				iVar3 = 0;
			}
			Var5 = { func_863() };
			if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
			{
				if (iVar3 == 0)
				{
					if (bVar8)
					{
						Var9 = { ENTITY::GET_ENTITY_COORDS(iLocal_167[iVar0], 1) };
						if (MISC::IS_BULLET_IN_AREA(Var9, 1.5f, 1))
						{
							if (MISC::IS_SNIPER_BULLET_IN_AREA((Var9.x - 1f), (Var9.f_1 - 1f), (Var9.f_2 - 1f), (Var9.x + 1f), (Var9.f_1 + 1f), (Var9.f_2 + 1f)))
							{
								if (MISC::IS_SNIPER_BULLET_IN_AREA((Var9.x - 1f), Var9.f_1, (Var9.f_2 - 1f), (Var9.x + 1f), (Var9.f_1 + 1f), (Var9.f_2 + 1f)))
								{
									bVar4 = true;
								}
								else
								{
									bVar4 = false;
								}
								iVar3 = 1;
							}
						}
					}
				}
				if (iVar3 != 0)
				{
					if (Local_44[iVar0 /*3*/].f_1 != iVar3)
					{
						iVar12 = -1;
						TASK::CLEAR_PED_SECONDARY_TASK(iLocal_167[iVar0]);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_918);
						TASK::OPEN_SEQUENCE_TASK(&uLocal_918);
						TASK::TASK_CLEAR_LOOK_AT(0);
						switch (iVar3)
						{
							case 1:
								if (bVar4)
								{
									TASK::TASK_PLAY_ANIM(0, func_507(18), func_862(), 8f, -0.25f, -1, 0, 0, 0, 0, 0);
									func_861();
								}
								else
								{
									TASK::TASK_PLAY_ANIM(0, func_507(18), func_860(), 8f, -0.25f, -1, 0, 0, 0, 0, 0);
									func_859();
								}
								TASK::TASK_AIM_GUN_AT_ENTITY(0, iVar2, -1, 0);
								iLocal_696[iVar0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
								iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(1500, 2000);
								break;
							
							case 2:
								if (iLocal_665 > 200)
								{
									iLocal_665 = 0;
								}
								TASK::TASK_AIM_GUN_AT_ENTITY(0, iVar2, iLocal_665, 0);
								iLocal_665 += 100;
								TASK::TASK_PLAY_ANIM(0, func_507(18), func_858(), 8f, -0.25f, -1, 0, 0, 0, 0, 0);
								func_857();
								TASK::TASK_AIM_GUN_AT_ENTITY(0, iVar2, -1, 0);
								Local_44[iVar0 /*3*/] = 0;
								iLocal_696[iVar0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 7000));
								iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(2800, 3500);
								break;
						}
						TASK::CLOSE_SEQUENCE_TASK(uLocal_918);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_167[iVar0], uLocal_918);
						Local_44[iVar0 /*3*/].f_1 = iVar3;
						if (iVar12 >= 0)
						{
							Local_44[iVar0 /*3*/].f_2 = (MISC::GET_GAME_TIMER() + iVar12);
						}
						else
						{
							Local_44[iVar0 /*3*/].f_2 = -1;
						}
					}
				}
				else if (Local_44[iVar0 /*3*/].f_2 >= 0)
				{
					if (MISC::GET_GAME_TIMER() >= Local_44[iVar0 /*3*/].f_2)
					{
						iVar13 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
						if (iParam0 > 0 || MISC::GET_GAME_TIMER() >= iLocal_781 + 6000)
						{
							iVar13 += 2;
						}
						switch (iVar13)
						{
							case 0:
							case 1:
								TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_167[iVar0], iVar2, -1, 0);
								Local_44[iVar0 /*3*/] = 0;
								Local_44[iVar0 /*3*/].f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
								break;
							
							case 2:
							case 3:
							case 4:
							case 5:
							case 6:
								TASK::TASK_AIM_GUN_AT_COORD(iLocal_167[iVar0], Var5, -1, 0, 0);
								Local_44[iVar0 /*3*/] = 1;
								Local_44[iVar0 /*3*/].f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3000, 6000));
								break;
							
							case 7:
							case 8:
							case 9:
							case 10:
								TASK::TASK_SHOOT_AT_COORD(iLocal_167[iVar0], Var5, -1, -957453492);
								Local_44[iVar0 /*3*/] = 2;
								Local_44[iVar0 /*3*/].f_2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7000));
								break;
						}
						Local_44[iVar0 /*3*/].f_1 = 0;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_857()//Position - 0x84712
{
	iLocal_752++;
	if (iLocal_752 > 2)
	{
		iLocal_752 = 0;
	}
}

char* func_858()//Position - 0x8472D
{
	switch (iLocal_752)
	{
		case 0:
			return "Guard_React_A";
			break;
		
		case 1:
			return "Guard_React_B";
			break;
		
		case 2:
			return "Guard_React_C";
			break;
	}
	return "Guard_React_A";
}

void func_859()//Position - 0x84775
{
	iLocal_754++;
	if (iLocal_754 > 1)
	{
		iLocal_754 = 0;
	}
}

char* func_860()//Position - 0x84790
{
	switch (iLocal_754)
	{
		case 0:
			return "Guard_Flinch_R";
			break;
		
		case 1:
			return "Guard_Flinch_L_2";
			break;
	}
	return "Guard_Flinch_R";
}

void func_861()//Position - 0x847C7
{
	iLocal_753++;
	if (iLocal_753 > 1)
	{
		iLocal_753 = 0;
	}
}

char* func_862()//Position - 0x847E2
{
	switch (iLocal_753)
	{
		case 0:
			return "Guard_Flinch_L";
			break;
		
		case 1:
			return "Guard_Flinch_R_2";
			break;
	}
	return "Guard_Flinch_L";
}

Vector3 func_863()//Position - 0x84819
{
	int iVar0;
	struct<3> Var1;
	
	Var1 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.5f) };
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (iVar0 == 0)
	{
		Var1.x = (Var1.x * -1f);
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (iVar0 == 0)
	{
		Var1.f_1 = (Var1.f_1 * -1f);
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
	if (iVar0 == 0)
	{
		Var1.f_2 = (Var1.f_2 * -1f);
	}
	return func_405(35) + Var1;
}

void func_864(int iParam0)//Position - 0x8488A
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_167[iVar0], 1630799643) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iLocal_167[iVar0], 1237250926) == 1)
			{
				bVar1 = false;
				iVar6 = 3000;
				iVar7 = 6000;
				if (!iLocal_443)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_696[iVar0])
					{
						iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
						sVar4 = "var_a";
						uVar5 = func_507(11);
						switch (iVar0)
						{
							case 0:
							case 4:
								if (iVar2 == 2)
								{
									iVar2 = 3;
								}
								break;
							
							case 2:
							case 3:
								if (iVar2 == 3)
								{
									iVar2 = 2;
								}
								break;
						}
						switch (iVar2)
						{
							case 0:
								sVar4 = "var_a";
								break;
							
							case 1:
								sVar4 = "var_b";
								break;
							
							case 2:
								sVar4 = "var_d";
								break;
							
							case 3:
								sVar4 = "var_e";
								break;
							
							case 4:
								sVar4 = "var_f";
								break;
						}
						bVar1 = true;
					}
				}
				else
				{
					iVar6 = 2500;
					iVar7 = 4500;
					bVar8 = false;
					if (!iLocal_437)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_703[iVar0] + 1600)
						{
							if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_689[0]))
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[0]) >= 0.4f)
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 4) == 0)
									{
										if (!PED::IS_PED_INJURED(iLocal_167[3]) || !PED::IS_PED_INJURED(iLocal_167[4]))
										{
											uVar5 = func_507(15);
											if (iVar0 == 0)
											{
												sVar4 = "-180";
											}
											else
											{
												sVar4 = "90";
											}
											iLocal_437 = 1;
											bVar8 = true;
											bVar1 = true;
										}
									}
								}
							}
						}
					}
					if (!bVar8)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_696[iVar0])
						{
							iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 9);
							switch (iVar9)
							{
								case 0:
								case 1:
								case 2:
								case 3:
								case 4:
									iVar3 = 0;
									uVar5 = func_507(12);
									break;
								
								case 5:
								case 6:
								case 7:
									iVar3 = 1;
									uVar5 = func_507(13);
									break;
								
								case 8:
									iVar3 = 2;
									uVar5 = func_507(14);
									break;
							}
							if (iParam0 >= 4)
							{
								if (iVar3 == 1)
								{
									iVar3 = 0;
								}
							}
							bVar10 = func_866(iVar0);
							bVar11 = func_865(iVar0);
							switch (iVar3)
							{
								case 0:
								case 1:
									sVar4 = "0";
									if (!bVar10 && !bVar11)
									{
										iVar2 = 2;
									}
									else if (!bVar10)
									{
										iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(2, 5);
									}
									else if (!bVar11)
									{
										iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
									}
									else
									{
										iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
									}
									switch (iVar2)
									{
										case 0:
											sVar4 = "-180";
											break;
										
										case 1:
											sVar4 = "-90";
											break;
										
										case 2:
											sVar4 = "0";
											break;
										
										case 3:
											sVar4 = "180";
											break;
										
										case 4:
											sVar4 = "90";
											break;
									}
									break;
								
								case 2:
									sVar4 = "panic_aim_var_a";
									if (!bVar10 && !bVar11)
									{
										iVar2 = 1;
									}
									else if (!bVar10)
									{
										iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
									}
									else if (!bVar11)
									{
										iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
									}
									else
									{
										iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
									}
									switch (iVar2)
									{
										case 0:
											sVar4 = "panic_aim_var_b";
											break;
										
										case 1:
											sVar4 = "panic_aim_var_a";
											break;
										
										case 2:
											sVar4 = "panic_aim_var_c";
											break;
										
										case 3:
											sVar4 = "panic_aim_var_d";
											break;
									}
									break;
							}
							bVar1 = true;
						}
					}
				}
				if (bVar1)
				{
					TASK::TASK_PLAY_ANIM(iLocal_167[iVar0], uVar5, sVar4, 4f, -1f, -1, 32, 0, 0, 0, 0);
					iLocal_696[iVar0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(iVar6, iVar7));
					iLocal_703[iVar0] = MISC::GET_GAME_TIMER();
				}
			}
		}
		iVar0++;
	}
}

int func_865(int iParam0)//Position - 0x84C67
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_167[0]))
			{
				return 1;
			}
			break;
		
		case 2:
			if ((!PED::IS_PED_INJURED(iLocal_167[1]) || !PED::IS_PED_INJURED(iLocal_167[4])) || !PED::IS_PED_INJURED(iLocal_167[0]))
			{
				return 1;
			}
			break;
		
		case 3:
			if (((!PED::IS_PED_INJURED(iLocal_167[4]) || !PED::IS_PED_INJURED(iLocal_167[1])) || !PED::IS_PED_INJURED(iLocal_167[2])) || !PED::IS_PED_INJURED(iLocal_167[0]))
			{
				return 1;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_167[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_866(int iParam0)//Position - 0x84D38
{
	switch (iParam0)
	{
		case 0:
			if (((!PED::IS_PED_INJURED(iLocal_167[4]) || !PED::IS_PED_INJURED(iLocal_167[1])) || !PED::IS_PED_INJURED(iLocal_167[2])) || !PED::IS_PED_INJURED(iLocal_167[3]))
			{
				return 1;
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_167[2]) || !PED::IS_PED_INJURED(iLocal_167[3]))
			{
				return 1;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_167[3]))
			{
				return 1;
			}
			break;
		
		case 3:
			break;
		
		case 4:
			if ((!PED::IS_PED_INJURED(iLocal_167[1]) || !PED::IS_PED_INJURED(iLocal_167[2])) || !PED::IS_PED_INJURED(iLocal_167[3]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_867()//Position - 0x84E19
{
	char* sVar0;
	int iVar1;
	
	uLocal_689[1] = PED::CREATE_SYNCHRONIZED_SCENE(func_405(33), 0f, 0f, 145.5f, 2);
	if (!PED::IS_PED_INJURED(iLocal_167[5]))
	{
		sVar0 = "Wave_2_D";
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_167[5]);
		iVar1 = func_625();
		if (!PED::IS_PED_INJURED(iVar1))
		{
			TASK::TASK_LOOK_AT_ENTITY(iLocal_167[5], iVar1, -1, 8192, 2);
		}
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_167[5], uLocal_689[1], func_507(2), sVar0, 1000f, -0.25f, 5, 0, 1148846080, 0);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[1], 0.77f);
	}
}

void func_868()//Position - 0x84EAD
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	uLocal_689[0] = PED::CREATE_SYNCHRONIZED_SCENE(func_405(33), 0f, 0f, 145.5f, 2);
	iVar0 = 3;
	while (iVar0 <= 4)
	{
		if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
		{
			switch (iVar0)
			{
				case 3:
					sVar1 = "Wave_1_B";
					break;
				
				case 4:
					sVar1 = "Wave_1_A";
					break;
			}
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_167[iVar0]);
			iVar2 = func_625();
			if (!PED::IS_PED_INJURED(iVar2))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_167[iVar0], iVar2, -1, 8192, 2);
			}
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_167[iVar0], uLocal_689[0], func_507(2), sVar1, 1000f, -0.25f, 5, 0, 1148846080, 0);
		}
		iVar0++;
	}
}

void func_869(bool bParam0)//Position - 0x84F68
{
	int iVar0;
	float fVar1;
	
	iVar0 = func_625();
	if (!PED::IS_PED_INJURED(iVar0))
	{
		ENTITY::DETACH_ENTITY(iVar0, 1, 1);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, iLocal_232, 0, func_405(18), 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
			if (iVar0 == PLAYER::PLAYER_PED_ID())
			{
				TASK::TASK_AIM_GUN_SCRIPTED(iVar0, 1711210675, 1, 0);
				if (bParam0)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, 0, 0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			else
			{
				if (bParam0)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0);
					fVar1 = 1000f;
				}
				else
				{
					fVar1 = 8f;
				}
				TASK::TASK_PLAY_ANIM(iVar0, func_507(0), "idle", fVar1, -1000f, -1, 1, 0, 0, 0, 0);
				if (bParam0)
				{
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, 0, 0);
				}
			}
		}
	}
}

void func_870()//Position - 0x85024
{
	int iVar0;
	int iVar1[8];
	bool bVar10;
	int iVar11;
	int iVar12;
	struct<3> Var13;
	struct<3> Var16;
	
	if (MISC::GET_GAME_TIMER() >= iLocal_726)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_174[iVar0]))
			{
				switch (iVar0)
				{
					case 0:
						iVar1[iVar0] = 0;
						break;
					
					case 1:
						if (iLocal_451[iVar0])
						{
							iVar1[iVar0] = 1;
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[0]) >= 0.475f)
						{
							iVar1[iVar0] = 1;
						}
						break;
					
					case 2:
						if (iLocal_451[iVar0])
						{
							iVar1[iVar0] = 1;
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[0]) >= 0.328f)
						{
							iVar1[iVar0] = 1;
						}
						break;
					
					case 3:
						if (iLocal_451[iVar0])
						{
							iVar1[iVar0] = 1;
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[0]) >= 0.843f)
						{
							iVar1[iVar0] = 1;
						}
						break;
					
					case 4:
						if (iLocal_451[iVar0])
						{
							iVar1[iVar0] = 1;
						}
						else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_689[2]) >= 0.542f)
						{
							iVar1[iVar0] = 1;
						}
						break;
					
					case 5:
						iVar1[iVar0] = 0;
						break;
					
					case 6:
						iVar1[iVar0] = 0;
						break;
					
					case 7:
						iVar1[iVar0] = 0;
						break;
					}
			}
			iVar0++;
		}
		bVar10 = false;
		iVar11 = 0;
		while (iVar11 < 20 && !bVar10)
		{
			iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
			if (iVar1[iVar12])
			{
				iLocal_729 = iVar12;
				bVar10 = true;
			}
			iVar11++;
		}
		if (!bVar10)
		{
			iLocal_729 = -1;
			iLocal_726 = MISC::GET_GAME_TIMER() + 2000;
		}
		else
		{
			iLocal_726 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
		}
	}
	else if (MISC::GET_GAME_TIMER() >= iLocal_725)
	{
		if (iLocal_729 >= 0)
		{
			if (!PED::IS_PED_INJURED(iLocal_174[iLocal_729]))
			{
				Var13 = { ENTITY::GET_ENTITY_COORDS(iLocal_174[iLocal_729], 1) + Vector(0.5f, 0f, 0f) };
				Var16.x = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.05f);
				Var16.f_1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.05f);
				Var16.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.05f);
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
				{
					Var16.x = (Var16.x * -1f);
				}
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
				{
					Var16.f_1 = (Var16.f_1 * -1f);
				}
				if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
				{
					Var16.f_2 = (Var16.f_2 * -1f);
				}
				Var13 = { Var13 + Var16 };
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Remote_Sniper_Rifle_Fire", 0, 1);
				MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(func_405(37), Var13, 1000, 1, joaat("weapon_heavysniper"), PLAYER::PLAYER_PED_ID(), 1, 1, -1082130432);
			}
			else
			{
				iLocal_726 = 0;
			}
		}
		else
		{
			iLocal_726 = 0;
		}
		iLocal_725 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1300, 2300));
	}
}

void func_871()//Position - 0x852D8
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	if (!PED::IS_PED_INJURED(iLocal_63[0]))
	{
		if (MISC::GET_GAME_TIMER() >= iLocal_724)
		{
			iVar1 = -1;
			fVar2 = 999999f;
			iVar0 = 0;
			while (iVar0 < iLocal_174)
			{
				if (!PED::IS_PED_INJURED(iLocal_174[iVar0]))
				{
					fVar3 = GlobalFunc_156(iLocal_63[0], iLocal_174[iVar0], 0);
					if (fVar3 < 100f)
					{
						if (fVar3 < fVar2)
						{
							if ((iLocal_590 || iVar0 != 5) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_174[iVar0], 125.4221f, -620.2075f, 205.1072f, 1f, 1f, 1f, 0, 0, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_174[iVar0], 1785177548) == 7 || ENTITY::IS_ENTITY_IN_AREA(iLocal_174[iVar0], 117.8963f, -623.7828f, 205.0469f, 123.4269f, -621.7179f, 205.0468f, 0, 0, 0))
								{
									iVar1 = iVar0;
									fVar2 = fVar3;
								}
							}
						}
					}
				}
				iVar0++;
			}
			if (iVar1 >= 0)
			{
				if (iLocal_174[iVar1] != iLocal_196)
				{
					TASK::TASK_AIM_GUN_SCRIPTED_WITH_TARGET(iLocal_63[0], iLocal_174[iVar1], 0f, 0f, 0f, 1711210675, 1, 0);
					iLocal_196 = iLocal_174[iVar1];
				}
				iLocal_724 = MISC::GET_GAME_TIMER() + 2000;
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_196))
				{
					TASK::TASK_PLAY_ANIM(iLocal_63[0], func_507(0), "idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					iLocal_196 = 0;
				}
				iLocal_724 = MISC::GET_GAME_TIMER() + 1000;
			}
		}
	}
}


void func_873(int iParam0)//Position - 0x8544F
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	struct<3> Var17;
	struct<3> Var20;
	
	iVar1 = func_625();
	switch (iParam0)
	{
		case 0:
			break;
		
		case 2:
			GlobalFunc_5154(&Local_816, 0, 0, 0, 0);
			break;
		
		case 3:
			func_846(0, 0f, 0f, 0f, 0, 0, 0);
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_232) && PHYSICS::DOES_ROPE_EXIST(&(Local_816.f_5)))
			{
				Var2 = { PHYSICS::GET_ROPE_LAST_VERTEX_COORD(Local_816.f_5) };
				if (!bLocal_464)
				{
					if (iLocal_463)
					{
						func_874(&Var2, func_405(23));
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, func_405(23), 1) < 0.4f)
						{
							iLocal_463 = 0;
						}
					}
					else
					{
						func_874(&Var2, func_405(24));
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var2, func_405(24), 1) < 0.4f)
						{
							iLocal_463 = 1;
						}
					}
					if (iLocal_38 == 4 && iLocal_30 == 4)
					{
						if (GlobalFunc_8315() == 0)
						{
							if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && MISC::GET_GAME_TIMER() >= iLocal_777) && !PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
							{
								Var8 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
								Var5 = { SYSTEM::SIN(Var8.f_2), -SYSTEM::COS(Var8.f_2), 0f };
								Local_798 = { Local_798 + Var5 * Vector(1f, 1f, 1f) };
								iLocal_777 = MISC::GET_GAME_TIMER() + 100;
							}
						}
						if (Local_798.x > 0f)
						{
							Local_798.x = (Local_798.x - (5f * SYSTEM::TIMESTEP()));
							if (Local_798.x < 0f)
							{
								Local_798.x = 0f;
							}
						}
						else if (Local_798.x < 0f)
						{
							Local_798.x = (Local_798.x + (5f * SYSTEM::TIMESTEP()));
							if (Local_798.x > 0f)
							{
								Local_798.x = 0f;
							}
						}
						if (Local_798.f_1 > 0f)
						{
							Local_798.f_1 = (Local_798.f_1 - (5f * SYSTEM::TIMESTEP()));
							if (Local_798.f_1 < 0f)
							{
								Local_798.f_1 = 0f;
							}
						}
						else if (Local_798.f_1 < 0f)
						{
							Local_798.f_1 = (Local_798.f_1 + (5f * SYSTEM::TIMESTEP()));
							if (Local_798.f_1 > 0f)
							{
								Local_798.f_1 = 0f;
							}
						}
						Local_798.f_2 = 0f;
						Var2.x = (Var2.x + (Local_798.x * SYSTEM::TIMESTEP()));
						Var2.f_1 = (Var2.f_1 + (Local_798.f_1 * SYSTEM::TIMESTEP()));
					}
					func_846(1, Var2, 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iVar1))
				{
					Var14 = { func_848() };
					Var11 = { ENTITY::GET_ENTITY_COORDS(iVar1, 1) - Var14 };
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_232, Var2 + Var11, 0, 0, 1);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					ENTITY::SET_ENTITY_ROTATION(iLocal_232, 0f, 0f, fLocal_634, 2, 1);
				}
			}
			break;
		
		case 5:
			if (Local_816.f_57)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					PHYSICS::PIN_ROPE_VERTEX(Local_816.f_5, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_199[0], func_405(14)));
					if (!Local_816.f_58)
					{
						iVar0 = 1;
						while (iVar0 <= (Local_816.f_91 - 2))
						{
							PHYSICS::UNPIN_ROPE_VERTEX(Local_816.f_5, iVar0);
							iVar0++;
						}
						Local_816.f_58 = 1;
					}
					if (!PED::IS_PED_INJURED(iVar1))
					{
						Var17 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_199[0]) * FtoV(MISC::GET_FRAME_TIME()) };
						Var20 = { PED::GET_PED_BONE_COORDS(iVar1, 0, 0f, 0f, 0f) + Var17 };
						PHYSICS::PIN_ROPE_VERTEX(Local_816.f_5, (Local_816.f_91 - 1), Var20);
					}
				}
			}
			break;
	}
}

void func_874(var uParam0, struct<3> Param1)//Position - 0x85766
{
	func_875(uParam0, Param1.x, &Local_795);
	func_875(&(uParam0->f_1), Param1.f_1, &(Local_795.f_1));
	func_875(&(uParam0->f_2), Param1.f_2, &(Local_795.f_2));
}

void func_875(var uParam0, float fParam1, var uParam2)//Position - 0x8579B
{
	if (*uParam0 < fParam1)
	{
		*uParam2 = (*uParam2 + (0.29f * SYSTEM::TIMESTEP()));
		if (*uParam2 > 0.31f)
		{
			*uParam2 = 0.31f;
		}
		*uParam0 = (*uParam0 + (*uParam2 * SYSTEM::TIMESTEP()));
	}
	else if (*uParam0 > fParam1)
	{
		*uParam2 = (*uParam2 - (0.29f * SYSTEM::TIMESTEP()));
		if (*uParam2 < -0.31f)
		{
			*uParam2 = -0.31f;
		}
		*uParam0 = (*uParam0 + (*uParam2 * SYSTEM::TIMESTEP()));
	}
}

void func_876()//Position - 0x85820
{
	int iVar0;
	struct<3> Var1;
	var uVar4;
	float fVar5;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_239[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					Var1 = { 117.18f, -621.4f, 205.57f };
					break;
				
				case 1:
					Var1 = { 115.69f, -621.74f, 205.63f };
					break;
			}
			uLocal_239[iVar0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var1, 1f, joaat("v_corp_offchair"), 0, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_239[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_239[iVar0], 1);
			}
		}
		iVar0++;
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(118.78f, -619.49f, 205.05f, 3f, joaat("v_ilev_fib_door1"), 0))
	{
		if (fLocal_637 != 0f)
		{
			OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fib_door1"), 118.78f, -619.49f, 205.05f, 1, fLocal_637, 0);
		}
		else
		{
			OBJECT::GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(joaat("v_ilev_fib_door1"), 118.78f, -619.49f, 205.05f, &uVar4, &fVar5);
			if (fVar5 > 1f || fVar5 < -1f)
			{
				fLocal_637 = fVar5;
			}
		}
	}
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-1355829283, 4, 1, 0);
	OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(359660636, 4, 1, 0);
}

void func_877()//Position - 0x85945
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	if (!bLocal_608)
	{
		if (!PED::IS_PED_INJURED(iLocal_197))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iLocal_197, &iVar2, 1);
			if (iVar2 == joaat("weapon_heavysniper"))
			{
				iVar0 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iLocal_197);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					uVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
					ENTITY::SET_ENTITY_MOTION_BLUR(uVar1, 0);
				}
			}
		}
	}
}

void func_878()//Position - 0x85992
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	char* sVar11;
	var uVar12;
	char* sVar13;
	float fVar14;
	int iVar15;
	struct<3> Var16;
	struct<3> Var19;
	struct<3> Var22;
	float fVar25;
	char* sVar26;
	var uVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	float fVar36;
	char* sVar37;
	bool bVar38;
	float fVar39;
	float fVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	
	func_876();
	CAM::_0x271401846BD26E92(1, 0);
	VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(0.8f);
	CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
	if (!iLocal_377)
	{
		HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeDT1_05"), 150f, -700f, 0, 0);
		iVar1 = 1;
		func_873(2);
		func_837(0, 0);
		if (!iLocal_420)
		{
			if (Local_816 == 2 || Local_816 == 3)
			{
				iLocal_420 = 1;
			}
		}
		if (!iLocal_438)
		{
			if (Local_816.f_10.f_2 <= -30f)
			{
				iLocal_438 = 1;
			}
		}
		if (!bLocal_376)
		{
			if (!bLocal_417)
			{
				if (Local_816.f_10.f_2 > -50f)
				{
					if (iLocal_728 < 5)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_727)
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a", 3))
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a") <= 0.1f)
								{
									if (func_429("FBI2_RAPP", 0, 0, 0, 1, 0))
									{
										iLocal_728++;
										iLocal_727 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(8000, 10000));
									}
								}
							}
						}
					}
				}
			}
		}
		if (!bLocal_376)
		{
			switch (iLocal_142)
			{
				case 0:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a") <= 0.05f)
						{
							if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0 || iLocal_422)
							{
								iLocal_142 = 2;
							}
							else
							{
								iLocal_142 = 1;
							}
						}
					}
					break;
				
				case 2:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a") <= 0.1f)
						{
							if (bLocal_557 || !bLocal_421)
							{
								if (!GlobalFunc_111())
								{
									if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) == 0)
									{
										AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 23, 0f, 0);
									}
									else
									{
										AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 22, 0f, 0);
									}
								}
								iLocal_142 = 3;
							}
							else
							{
								iLocal_142 = 3;
							}
						}
						else
						{
							iLocal_142 = 0;
						}
					}
					else
					{
						iLocal_142 = 0;
					}
					break;
				
				case 1:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a") >= 0.74f)
						{
							if (bLocal_557 || !bLocal_421)
							{
								if (!GlobalFunc_111())
								{
									AUDIO::PLAY_PAIN(PLAYER::PLAYER_PED_ID(), 23, 0f, 0);
								}
								iLocal_142 = 0;
							}
							else
							{
								iLocal_142 = 0;
							}
						}
						else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a") >= 0.85f)
						{
							iLocal_142 = 0;
						}
					}
					else
					{
						iLocal_142 = 0;
					}
					break;
				
				case 3:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a") >= 0.2f)
						{
							iLocal_142 = 0;
						}
						break;
					}
					iLocal_142 = 0;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!iLocal_412[iVar0])
				{
					iVar6 = 0;
					switch (iVar0)
					{
						case 0:
							fVar2 = -14.77f;
							fVar3 = -16.98f;
							fVar4 = -15.35f;
							fVar5 = -17.88f;
							break;
						
						case 1:
							fVar2 = -38.86f;
							fVar3 = -41.1f;
							fVar4 = -39.47f;
							fVar5 = -41.91f;
							break;
						
						case 2:
							fVar2 = -46.82f;
							fVar3 = -49.15f;
							fVar4 = -47.2f;
							fVar5 = -49.91f;
							break;
					}
					if (Local_816.f_10.f_2 <= fVar2 && Local_816.f_10.f_2 >= fVar3)
					{
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_816.f_3, GlobalFunc_608(), "Rappel_jump_a", 3))
						{
							if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_816.f_3, GlobalFunc_608(), "Rappel_jump_a") >= 0.77f)
							{
								iVar6 = 1;
							}
						}
					}
					if (Local_816.f_10.f_2 <= fVar4 && Local_816.f_10.f_2 >= fVar5)
					{
						fLocal_647[iVar0] = (fLocal_647[iVar0] + (1f * SYSTEM::TIMESTEP()));
					}
					if (fLocal_647[iVar0] >= 6f || iVar6)
					{
						iLocal_672[iVar0] = MISC::GET_GAME_TIMER();
						iLocal_412[iVar0] = 1;
					}
				}
				else
				{
					switch (iVar0)
					{
						case 0:
							fVar7 = -18.68f;
							break;
						
						case 1:
							fVar7 = -43.08f;
							break;
						
						case 2:
							fVar7 = -50.57f;
							break;
					}
					if (Local_816.f_10.f_2 >= fVar7)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_672[iVar0] + 10000)
						{
							func_612(14);
						}
					}
				}
				iVar0++;
			}
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (!PED::IS_PED_INJURED(iLocal_158[iVar0]))
				{
					switch (iVar0)
					{
						case 0:
							iVar8 = 1;
							iVar9 = 0;
							uVar10 = func_507(6);
							sVar11 = "back_right";
							uVar12 = func_507(6);
							sVar13 = "back_right";
							break;
						
						case 1:
							iVar8 = 1;
							iVar9 = 300;
							uVar10 = func_507(8);
							sVar11 = "react_left_small_intro_a";
							uVar12 = func_507(10);
							sVar13 = "react_small_variations_b";
							break;
						
						case 2:
							iVar8 = 2;
							iVar9 = 0;
							uVar10 = func_507(6);
							sVar11 = "forward";
							uVar12 = func_507(6);
							sVar13 = "forward";
							break;
						
						case 3:
							iVar8 = 0;
							iVar9 = 400;
							uVar10 = func_507(6);
							sVar11 = "back_right";
							uVar12 = func_507(6);
							sVar13 = "back_right";
							break;
						
						case 4:
							iVar8 = 0;
							iVar9 = 0;
							uVar10 = func_507(9);
							sVar11 = "react_right_small_intro_a";
							uVar12 = func_507(10);
							sVar13 = "react_small_variations_a";
							break;
					}
					switch (iLocal_144[iVar0])
					{
						case 0:
							if (iLocal_412[iVar8])
							{
								if (MISC::GET_GAME_TIMER() >= (iLocal_672[iVar8] + iVar9))
								{
									if (iVar0 == 1 || iVar0 == 4)
									{
										iVar15 = 2050;
										ENTITY::DETACH_ENTITY(iLocal_158[iVar0], 1, 1);
									}
									else
									{
										iVar15 = 1;
									}
									TASK::TASK_PLAY_ANIM(iLocal_158[iVar0], uVar10, sVar11, 4f, -4f, -1, iVar15, 0, 0, 0, 0);
									TASK::TASK_LOOK_AT_ENTITY(iLocal_158[iVar0], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
									iLocal_144[iVar0] = 1;
								}
							}
							break;
						
						case 1:
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_158[iVar0], uVar10, sVar11, 3))
							{
								fVar14 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_158[iVar0], uVar10, sVar11);
								if (fVar14 >= 0f && (iVar0 == 1 || iVar0 == 4))
								{
									if (fVar14 >= 0.98f)
									{
										if (iVar0 == 1 || iVar0 == 4)
										{
											iVar15 = 2049;
										}
										else
										{
											iVar15 = 1;
										}
										TASK::TASK_PLAY_ANIM(iLocal_158[iVar0], uVar12, sVar13, 4f, -4f, -1, iVar15, 0, 0, 0, 0);
										iLocal_144[iVar0] = 2;
									}
								}
							}
							break;
						
						case 2:
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_158[iVar0], uVar12, sVar13, 3))
							{
								fVar14 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_158[iVar0], uVar12, sVar13);
								if (fVar14 >= 0f)
								{
									Var16 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(uVar10, sVar11, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 2) };
									Var16 = { Var16 };
									Var19 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(uVar10, sVar11, 0f, 0f, 0f, 0f, 0f, 0f, 1f, 2) };
									Var19 = { Var19 };
								}
							}
							break;
						}
				}
				iVar0++;
			}
		}
		switch (iLocal_41)
		{
			case 0:
				if (Local_816.f_10.f_2 <= -10f)
				{
					func_377(6);
					func_377(9);
					func_377(10);
					func_377(24);
					func_680(3);
					func_680(5);
					func_680(7);
					func_680(6);
					func_680(8);
					func_680(9);
					func_680(10);
					iLocal_41 = 1;
				}
				break;
			
			case 1:
				if ((func_607() && func_814()) && func_609())
				{
					if (Local_816.f_10.f_2 <= -50f)
					{
						func_895();
						iLocal_41 = 2;
					}
				}
				break;
			
			case 2:
				break;
		}
		if (!bLocal_376)
		{
			if ((iLocal_41 >= 1 && func_607()) && func_814())
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(uLocal_235[iVar0]) && !bLocal_417)
					{
						switch (iVar0)
						{
							case 0:
								Var22 = { 113.3f, -618.5f, 229.02f };
								fVar25 = 57.7f;
								break;
							
							case 1:
								Var22 = { 113f, -620.5f, 221f };
								fVar25 = 241.7f;
								break;
							
							case 2:
								Var22 = { 113.2747f, -618.5769f, 253.16f };
								fVar25 = 57.7f;
								break;
						}
						uLocal_235[iVar0] = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(Var22, 2f, joaat("v_corp_offchair"), 1, 0, 1);
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_235[iVar0]))
						{
							ENTITY::SET_ENTITY_COORDS(uLocal_235[iVar0], Var22, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(uLocal_235[iVar0], fVar25);
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_235[iVar0], 1);
						}
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]) && !bLocal_417)
					{
						switch (iVar0)
						{
							case 0:
								iVar28 = 2;
								iVar29 = 0;
								iVar30 = 1;
								iVar31 = 1;
								iVar32 = 2;
								iVar34 = 0;
								iVar33 = 1;
								sVar26 = "base";
								uVar27 = func_507(5);
								break;
							
							case 1:
								iVar28 = 1;
								iVar29 = 0;
								iVar30 = 2;
								iVar31 = 0;
								iVar32 = 0;
								iVar34 = 0;
								iVar33 = 1;
								sVar26 = "BASE";
								uVar27 = func_507(7);
								break;
							
							case 2:
								iVar28 = 0;
								iVar29 = 0;
								iVar30 = 1;
								iVar31 = 0;
								iVar32 = 2;
								iVar34 = 0;
								iVar33 = 1;
								sVar26 = "base";
								uVar27 = func_507(5);
								break;
							
							case 3:
								iVar28 = 0;
								iVar29 = 0;
								iVar30 = 0;
								iVar31 = 5;
								iVar32 = 0;
								iVar34 = 1;
								iVar33 = 1;
								sVar26 = "base";
								uVar27 = func_507(5);
								break;
							
							case 4:
								iVar28 = 2;
								iVar29 = 0;
								iVar30 = 1;
								iVar31 = 0;
								iVar32 = 2;
								iVar34 = 1;
								iVar33 = 1;
								sVar26 = "BASE";
								uVar27 = func_507(7);
								break;
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_235[func_894(iVar0)]))
						{
							iLocal_158[iVar0] = PED::CREATE_PED(26, func_16(9), IntToFloat(iVar0), 1f, 2f, 0f, 1, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_158[iVar0], 1);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_158[iVar0], uLocal_235[func_894(iVar0)], 0, func_893(iVar0), func_892(iVar0), 0, 0, 0, 0, 2, 1);
							TASK::TASK_PLAY_ANIM(iLocal_158[iVar0], uVar27, sVar26, 8f, -8f, -1, 1, 0, 0, 0, 0);
							if (iVar0 == 1)
							{
								TASK::TASK_LOOK_AT_COORD(iLocal_158[iVar0], 113.8f, -618.9f, 230.2f, -1, 0, 2);
							}
							else if (iVar0 == 4)
							{
								TASK::TASK_LOOK_AT_COORD(iLocal_158[iVar0], 113.8f, -618.9f, 254.2f, -1, 0, 2);
							}
							PED::SET_PED_COMPONENT_VARIATION(iLocal_158[iVar0], 0, iVar28, iVar29, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_158[iVar0], 3, iVar30, iVar31, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_158[iVar0], 4, 0, iVar32, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_158[iVar0], 9, iVar34, 0, 0);
							PED::SET_PED_COMPONENT_VARIATION(iLocal_158[iVar0], 2, iVar33, 0, 0);
						}
					}
					iVar0++;
				}
			}
		}
		if (bLocal_376)
		{
			Local_816.f_10.f_2 = Local_816.f_27;
			if (!iLocal_422)
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_687))
				{
					PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_687, 0.69f);
					AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_687);
				}
			}
		}
		if (iLocal_41 == 2)
		{
			if (!bLocal_417)
			{
				bVar35 = false;
				if (Local_816.f_10.f_2 <= -60f)
				{
					bVar35 = true;
				}
				if (!PED::IS_PED_INJURED(iLocal_156))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_156))
					{
						bVar35 = true;
					}
				}
				if (bVar35)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_234))
					{
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iLocal_234) && AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("FBI_02_MCS_3_P1B", 0))
						{
							iVar0 = 0;
							while (iVar0 < 5)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
								{
									PED::DELETE_PED(&(iLocal_158[iVar0]));
								}
								iVar0++;
							}
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_235[iVar0]))
								{
									ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_235[iVar0]));
								}
								iVar0++;
							}
							func_673(5);
							func_673(7);
							func_673(6);
							func_673(8);
							func_673(9);
							func_673(10);
							func_890();
							bLocal_417 = true;
						}
					}
				}
			}
			else
			{
				if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.4f)
				{
					func_403("fbi_2_mcs_3_p1a", func_405(21), 100f, 120f);
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						if (!PED::IS_PED_INJURED(func_625()))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_625(), 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_156))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("MR_K", iLocal_156, 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_157))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michelle", iLocal_157, 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_167[0]))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("CIA_Goon_1", iLocal_167[0], 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_167[1]))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Lead_CIA", iLocal_167[1], 0);
						}
						if (!PED::IS_PED_INJURED(iLocal_167[2]))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("CIA_Goon_2", iLocal_167[2], 0);
						}
					}
				}
				if (!bLocal_561)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.96f)
					{
						bLocal_561 = true;
					}
				}
				if (!bLocal_376)
				{
					bVar38 = false;
					switch (iLocal_780)
					{
						case 0:
							fVar36 = 0.099f;
							sVar37 = "SG_SUB1";
							break;
						
						case 1:
							fVar36 = 0.161f;
							bVar38 = true;
							break;
						
						case 2:
							fVar36 = 0.183f;
							sVar37 = "SG_SUB2";
							break;
						
						case 3:
							fVar36 = 0.218f;
							bVar38 = true;
							break;
						
						case 4:
							fVar36 = 0.235f;
							sVar37 = "SG_SUB3";
							break;
						
						case 5:
							fVar36 = 0.313f;
							bVar38 = true;
							break;
						
						case 6:
							fVar36 = 0.323f;
							sVar37 = "SG_SUB4";
							break;
						
						case 7:
							fVar36 = 0.339f;
							bVar38 = true;
							break;
						
						case 8:
							fVar36 = 0.351f;
							sVar37 = "SG_SUB5";
							break;
						
						case 9:
							fVar36 = 0.405f;
							bVar38 = true;
							break;
						
						case 10:
							fVar36 = 0.463f;
							sVar37 = "SG_SUB6";
							break;
						
						case 11:
							fVar36 = 0.48f;
							bVar38 = true;
							break;
						
						case 12:
							fVar36 = 0.553f;
							sVar37 = "SG_SUB7";
							break;
						
						case 13:
							fVar36 = 0.59f;
							bVar38 = true;
							break;
						
						case 14:
							fVar36 = 0.606f;
							sVar37 = "SG_SUB8";
							break;
						
						case 15:
							fVar36 = 0.649f;
							bVar38 = true;
							break;
						
						case 16:
							fVar36 = 0.677f;
							sVar37 = "SG_SUB9";
							break;
						
						case 17:
							fVar36 = 0.736f;
							bVar38 = true;
							break;
						
						case 18:
							fVar36 = 0.745f;
							sVar37 = "SG_SUB10";
							break;
						
						case 19:
							fVar36 = 0.756f;
							bVar38 = true;
							break;
						
						case 20:
							fVar36 = 0.782f;
							sVar37 = "SG_SUB11";
							break;
						
						case 21:
							fVar36 = 0.789f;
							bVar38 = true;
							break;
						
						case 22:
							fVar36 = 0.81f;
							sVar37 = "SG_SUB12";
							break;
						
						case 23:
							fVar36 = 0.834f;
							bVar38 = true;
							break;
						
						case 24:
							fVar36 = 0.861f;
							sVar37 = "SG_SUB13";
							break;
						
						case 25:
							fVar36 = 0.91f;
							bVar38 = true;
							break;
					}
					if (iLocal_780 < 26)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= fVar36)
						{
							if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (!bVar38)
								{
									HUD::_0x57D760D55F54E071(1);
									GlobalFunc_164(sVar37, 7500, 1);
								}
								else
								{
									HUD::CLEAR_PRINTS();
								}
							}
							else
							{
								HUD::CLEAR_PRINTS();
							}
							iLocal_780++;
						}
					}
				}
				if (!iLocal_542)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.5f)
					{
						func_680(2);
						iLocal_542 = 1;
					}
				}
				if (!iLocal_418)
				{
					if (Local_816.f_10.f_2 <= -60f)
					{
						iLocal_418 = 1;
					}
				}
				if (!iLocal_422)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.59f && func_814())
					{
						Local_816.f_27 = -64.8f;
						func_680(18);
						func_680(11);
						iLocal_422 = 1;
					}
				}
				else if (!iLocal_430)
				{
					if (!iLocal_425)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.8f)
						{
							if (!PED::IS_PED_INJURED(iLocal_167[0]))
							{
								WEAPON::GIVE_WEAPON_TO_PED(iLocal_167[0], func_624(1), -1, 1, 1);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_167[0], 2, 3, 0, 0);
								iLocal_425 = 1;
							}
						}
					}
					if (Local_816.f_10.f_2 <= -62.9f)
					{
						if (!Global_3 && !bLocal_376)
						{
							if (!iLocal_426)
							{
								if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.8f)
								{
									if (!PED::IS_PED_INJURED(iLocal_167[0]))
									{
										PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 640);
										PED::SET_PED_ACCURACY(iLocal_167[0], 100);
									}
									iLocal_426 = 1;
								}
							}
							else
							{
								if (iLocal_668 < 3)
								{
									switch (iLocal_668)
									{
										case 0:
											fVar39 = 0.935f;
											break;
										
										case 1:
											fVar39 = 0.94f;
											break;
										
										case 2:
											fVar39 = 0.946f;
											break;
									}
									if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= fVar39)
									{
										if (!PED::IS_PED_INJURED(iLocal_167[0]))
										{
											PED::SET_PED_SHOOTS_AT_COORD(iLocal_167[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 0);
											iLocal_668++;
										}
									}
								}
								if (!iLocal_430)
								{
									if (!PED::IS_PED_INJURED(iLocal_167[0]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_167[0], 1))
										{
											PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), 1000, 1);
										}
									}
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_668 == 3)
										{
											func_612(14);
										}
									}
								}
							}
						}
						if (!bLocal_376)
						{
							HUD::DISPLAY_HELP_TEXT_THIS_FRAME("SG_RAPHLP3B", 0);
						}
						if (bLocal_376)
						{
							iLocal_430 = 1;
						}
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a", 3))
						{
							fVar40 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a");
							if (fVar40 >= 0.1f && fVar40 <= 0.8f)
							{
								if (func_441())
								{
									func_398(5);
									iLocal_430 = 1;
								}
							}
						}
					}
				}
				else if (func_441())
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), GlobalFunc_608(), "Rappel_jump_a") >= 0.7f)
						{
							if (GlobalFunc_Has_Cutscene_Loaded())
							{
								RECORDING::_0x293220DA1B46CEBC(2f, 2f, 3);
								AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_687);
								iLocal_377 = 1;
							}
						}
					}
					else if (GlobalFunc_Has_Cutscene_Loaded())
					{
						RECORDING::_0x293220DA1B46CEBC(2f, 2f, 3);
						AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_687);
						iLocal_377 = 1;
					}
				}
			}
			if (!bLocal_376)
			{
				if (!iLocal_419)
				{
					if (bLocal_417)
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.01f)
						{
							iLocal_419 = func_426("SG_SEEHLP", 1, -1);
						}
					}
				}
			}
			if (!bLocal_376)
			{
				if (bLocal_417)
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.742f)
					{
						bLocal_557 = true;
					}
				}
				bVar41 = false;
				bVar42 = false;
				if ((iLocal_430 || !CAM::DOES_CAM_EXIST(iLocal_291)) || !bLocal_417)
				{
					bVar42 = true;
				}
				if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 225) && !bVar42)
				{
					if (!bLocal_421)
					{
						if (!iLocal_574)
						{
							if (!bLocal_557)
							{
								GRAPHICS::_SET_HIDOF_ENV_BLUR_PARAMS(1, 1, 0f, 0f, 100000f, 100000f);
								func_889(1);
								AUDIO::_SET_VARIABLE_ON_CUTSCENE_AUDIO("INOUT", 1f);
							}
							if (GlobalFunc_74("SG_SEEHLP"))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_721 + 1000)
								{
									HUD::CLEAR_HELP(0);
									iLocal_721 = MISC::GET_GAME_TIMER();
								}
							}
							CAM::SET_CAM_ACTIVE(iLocal_291, 1);
							GlobalFunc_702(1, 1, 1);
							HUD::DISPLAY_RADAR(0);
							iLocal_419 = 1;
							iLocal_766 = MISC::GET_GAME_TIMER();
							bLocal_421 = true;
						}
					}
					else if (iLocal_573)
					{
						bVar41 = true;
						GlobalFunc_702(0, 1, 1);
						iLocal_574 = 1;
					}
				}
				else
				{
					iLocal_574 = 0;
					if (bLocal_421)
					{
						if ((MISC::GET_GAME_TIMER() >= iLocal_766 + 500 && !iLocal_573) || bVar42)
						{
							bVar41 = true;
							GlobalFunc_702(0, 1, 1);
						}
						else
						{
							iLocal_573 = 1;
						}
					}
				}
				if (!iLocal_556)
				{
					if (bLocal_557)
					{
						func_889(0);
						AUDIO::_SET_VARIABLE_ON_CUTSCENE_AUDIO("INOUT", 0f);
						iLocal_556 = 1;
					}
				}
				if (bVar41)
				{
					func_889(0);
					AUDIO::_SET_VARIABLE_ON_CUTSCENE_AUDIO("INOUT", 0f);
					CAM::SET_CAM_ACTIVE(iLocal_291, 0);
					GRAPHICS::_SET_HIDOF_ENV_BLUR_PARAMS(0, 1, 0f, 0f, 0f, 0f);
					HUD::DISPLAY_RADAR(1);
					iLocal_573 = 0;
					bLocal_421 = false;
				}
			}
		}
		if (!iLocal_377)
		{
			bVar43 = false;
			if (!bLocal_376)
			{
				if (bLocal_417)
				{
					if (Local_816.f_10.f_2 > -62.9f)
					{
						if (bLocal_421 || PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.58f)
						{
							GlobalFunc_602(&Local_816, 1);
							bVar43 = true;
						}
					}
				}
				if (!bVar43)
				{
					GlobalFunc_602(&Local_816, 0);
				}
			}
			func_712(&Local_816, bVar43, 1, iVar1, Local_816.f_10.f_2 > -62.9f, (iLocal_422 && Local_816.f_10.f_2 <= -62.9f));
			func_708();
		}
		if (bLocal_557 || !bLocal_421)
		{
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(2f);
			GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(2.1f);
			CAM::SET_USE_HI_DOF();
		}
		else
		{
			GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.25f);
			GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(1f);
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
		}
	}
	else
	{
		func_879();
	}
}

void func_879()//Position - 0x86DF7
{
	int iVar0;
	char cVar1[16];
	char* sVar5;
	int iVar6;
	struct<3> Var7;
	
	switch (iLocal_35)
	{
		case 0:
			AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(uLocal_687);
			GlobalFunc_571(0, -1);
			AUDIO::OVERRIDE_PLAYER_GROUND_MATERIAL(MISC::GET_HASH_KEY("AM_BASE_GLASS_STRONG"), 0);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_251, "Michaels_weapon", 0, 0, 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_157))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_157, "Michelle", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_156))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_156, "MR_K", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_256[0], "CIA_Office_Chair", 2, joaat("v_corp_offchair"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_256[1], "CIA_Office_Chair^1", 2, joaat("v_corp_offchair"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_256[2], "CIA_Office_Chair^2", 2, joaat("v_corp_offchair"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_256[3], "CIA_Office_Chair^3", 2, joaat("v_corp_offchair"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_256[4], "PROP_CS_POLICE_TORCH", 2, joaat("prop_cs_police_torch"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_256[5], "Mr_K_Harness", 2, joaat("p_mrk_harness_s"), 0);
			func_696(1);
			iVar0 = 0;
			while (iVar0 <= 2)
			{
				if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
				{
					switch (iVar0)
					{
						case 0:
							StringCopy(&cVar1, "CIA_Goon_1", 16);
							break;
						
						case 1:
							StringCopy(&cVar1, "Lead_CIA", 16);
							break;
						
						case 2:
							StringCopy(&cVar1, "CIA_Goon_2", 16);
							break;
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_167[iVar0], &cVar1, 0, 0, 0);
				}
				iVar0++;
			}
			func_837(1, 0);
			CUTSCENE::START_CUTSCENE(2048);
			iLocal_667 = 0;
			iLocal_720 = 3;
			iLocal_656 = MISC::GET_GAME_TIMER();
			iLocal_35 = 1;
			break;
		
		case 1:
			if (!iLocal_379)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_376();
					if (CAM::DOES_CAM_EXIST(iLocal_289))
					{
						CAM::DESTROY_CAM(iLocal_289, 0);
					}
					GRAPHICS::_SET_HIDOF_ENV_BLUR_PARAMS(0, 1, 0f, 0f, 0f, 0f);
					GRAPHICS::_0x0AE73D8DF3A762B2(1);
					AUDIO::STOP_SOUND(iLocal_735);
					func_298(3);
					func_298(5);
					func_889(0);
					func_713(&Local_816, 1, joaat("weapon_unarmed"), 1, 0, 1);
					func_673(1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					GlobalFunc_605(&Local_816);
					func_704(3, 3);
					func_846(1, 110.51f, -618.71f, 207.12f, 0, 0, 0);
					iVar0 = 0;
					while (iVar0 <= 2)
					{
						if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
						{
							PED::SET_PED_COMPONENT_VARIATION(iLocal_167[iVar0], 2, 3, 0, 0);
						}
						iVar0++;
					}
					func_697(0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
					{
						if (bLocal_561)
						{
							ENTITY::DETACH_ENTITY(iLocal_233, 1, 1);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_233, 114.72f, -620.69f, 205.9f, 0, 0, 1);
							ENTITY::SET_ENTITY_ROTATION(iLocal_233, 0f, 0f, -79.068f, 2, 1);
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_233, 1);
						}
						else
						{
							OBJECT::DELETE_OBJECT(&iLocal_233);
						}
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_379 = 1;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_256[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Office_Chair", 0)))
				{
					uLocal_256[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Office_Chair", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_256[1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Office_Chair^1", 0)))
				{
					uLocal_256[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Office_Chair^1", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_256[2]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Office_Chair^2", 0)))
				{
					uLocal_256[2] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Office_Chair^2", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_256[3]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Office_Chair^3", 0)))
				{
					uLocal_256[3] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("CIA_Office_Chair^3", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_256[4]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("PROP_CS_POLICE_TORCH", 0)))
				{
					uLocal_256[4] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("PROP_CS_POLICE_TORCH", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_256[5]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Mr_K_Harness", 0)))
				{
					uLocal_256[5] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Mr_K_Harness", 0));
				}
			}
			func_873(3);
			if (!iLocal_423)
			{
				iVar0 = 0;
				while (iVar0 < iLocal_209)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_209[iVar0]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_209[iVar0]));
					}
					iVar0++;
				}
				iLocal_423 = 1;
			}
			else if (!iLocal_424)
			{
				func_886();
				func_445(1);
				iLocal_424 = 1;
			}
			switch (iLocal_141)
			{
				case 0:
					bLocal_376 = false;
					GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.25f);
					GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(1f);
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michelle", 0))
					{
						if (!PED::IS_PED_INJURED(iLocal_157))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_157);
							ENTITY::SET_ENTITY_COORDS(iLocal_157, 118.6f, -619.5f, 205.05f, 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_157, -97.16f);
							PED::FORCE_PED_MOTION_STATE(iLocal_157, -1115154469, 0, 1, 0);
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(iLocal_157, 3f);
							TASK::TASK_GO_STRAIGHT_TO_COORD(iLocal_157, 134.91f, -616.71f, 205.05f, 2f, 20000, 1193033728, 1056964608);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_weapon", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_251))
						{
							OBJECT::DELETE_OBJECT(&iLocal_251);
						}
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MR_K", 0))
					{
						func_696(0);
						func_683(0);
						func_689(0, 3);
						func_846(1, 112.69f, -619.18f, 206.48f, 0, 0, 0);
						func_691(0, 1);
						GlobalFunc_2904(&iLocal_63, 1, 1);
						GlobalFunc_2904(&iLocal_63, 2, 0);
						GlobalFunc_2904(&iLocal_63, 0, 0);
						GlobalFunc_2774(&iLocal_63, 2, 1);
						GlobalFunc_2774(&iLocal_63, 1, 0);
						GlobalFunc_2774(&iLocal_63, 0, 1);
					}
					if ((CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Goon_1", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lead_CIA", 0)) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Goon_2", 0))
					{
						func_681(1, 1);
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Office_Chair", 0))
					{
						OBJECT::DELETE_OBJECT(&(uLocal_256[0]));
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Office_Chair^1", 0))
					{
						OBJECT::DELETE_OBJECT(&(uLocal_256[1]));
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Office_Chair^2", 0))
					{
						OBJECT::DELETE_OBJECT(&(uLocal_256[2]));
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("CIA_Office_Chair^3", 0))
					{
						OBJECT::DELETE_OBJECT(&(uLocal_256[3]));
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("PROP_CS_POLICE_TORCH", 0))
					{
						OBJECT::DELETE_OBJECT(&(uLocal_256[4]));
					}
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Mr_K_Harness", 0))
					{
						OBJECT::DELETE_OBJECT(&(uLocal_256[5]));
					}
					func_444(1, 0);
					func_885();
					GlobalFunc_10238(&iLocal_63, 0, 1);
					if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
					{
						func_889(0);
						AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("V_CIA_PS_WINDOW_UNBROKEN", "V_CIA_PS_WINDOW_BROKEN");
						func_678(1);
						func_398(6);
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						func_883(8, 1, 20000);
						iLocal_656 = MISC::GET_GAME_TIMER();
						GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
						func_685();
						iLocal_141 = 1;
						func_444(0, 0);
					}
					if (!iLocal_544)
					{
						GlobalFunc_2867("FIB2_BREAK_WINDOW");
						AUDIO::PLAY_SOUND_FROM_COORD(uLocal_734, "FBI_02_SNATCH_AND_GRAB_SMASH_WINDOW", func_405(25), 0, 0, 0, 0);
						iLocal_544 = 1;
					}
					break;
				
				case 1:
					if (!PED::IS_PED_INJURED(iLocal_63[1]))
					{
						STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_63[1], 1));
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
					INTERIOR::_0xAF348AFCB575A441("V_CIA01_cur_offc3");
					if (!iLocal_432)
					{
						if (func_421("SG_SWITCH", 1, 0))
						{
							iLocal_432 = 1;
						}
					}
					func_864(0);
					if (iLocal_667 < 11)
					{
						switch (iLocal_667)
						{
							case 0:
								sVar5 = "FBI2_MICH2";
								iVar6 = 0;
								break;
							
							case 1:
								sVar5 = "FBI2_SNIPE";
								iVar6 = 1;
								break;
							
							case 2:
								sVar5 = "FBI2_CIA1";
								iVar6 = 0;
								break;
							
							case 3:
								sVar5 = "FBI2_MRKSHT";
								iVar6 = 0;
								break;
							
							case 4:
								sVar5 = "FBI2_CLEAR";
								iVar6 = 0;
								break;
							
							case 5:
								sVar5 = "FBI_2_BACKUP";
								iVar6 = 0;
								break;
							
							case 6:
								sVar5 = "FBI2_MRKSHT";
								iVar6 = 0;
								break;
							
							case 7:
								sVar5 = "FBI2_ASK";
								iVar6 = 0;
								break;
							
							case 8:
								sVar5 = "FBI2_CIA2";
								iVar6 = 0;
								break;
							
							case 9:
								sVar5 = "FBI2_MRKSHT";
								iVar6 = 0;
								break;
							
							case 10:
								sVar5 = "FBI2_GLIGHT";
								iVar6 = 0;
								break;
						}
						if (func_429(sVar5, 1, iVar6, 0, !HUD::IS_MESSAGE_BEING_DISPLAYED(), 0))
						{
							iLocal_667++;
						}
					}
					if (iLocal_666 < 0)
					{
						if (iLocal_667 > 10)
						{
							iLocal_666 = MISC::GET_GAME_TIMER() + 2000;
						}
					}
					if (!iLocal_427)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_666 && iLocal_666 >= 0)
						{
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 512);
							if (!PED::IS_PED_INJURED(iLocal_167[2]))
							{
								PED::SET_PED_ACCURACY(iLocal_167[2], 100);
								PED::SET_PED_SHOOT_RATE(iLocal_167[2], 100);
								TASK::TASK_SHOOT_AT_COORD(iLocal_167[2], func_405(30), -1, -957453492);
							}
							iLocal_663 = MISC::GET_GAME_TIMER();
							iLocal_427 = 1;
						}
						else if (func_441())
						{
							if (GlobalFunc_10238(&iLocal_63, 0, 1))
							{
								if (iLocal_63.f_7 == 1)
								{
									GlobalFunc_7206(1, 1, 1, 0);
									func_882();
									iLocal_34 = 0;
									iLocal_656 = MISC::GET_GAME_TIMER();
									ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 200);
									iLocal_630 = 0;
									func_298(6);
									GlobalFunc_565(291, 1, 0);
									func_528(&iLocal_1126, iLocal_197, 1, 0.2f, 500, 500, 200, 300, 1045220557);
									func_527(&iLocal_1126, 0f, 0f, 5f);
									iLocal_141 = 2;
								}
							}
						}
					}
					else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !iLocal_428)
					{
						if (ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()) >= 105)
						{
							ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 105);
						}
						if (MISC::GET_GAME_TIMER() >= iLocal_663 + 1000)
						{
							PED::SET_PED_TO_RAGDOLL(PLAYER::PLAYER_PED_ID(), 8000, 8000, 0, 1, 1, 0);
							func_612(1);
							iLocal_428 = 1;
						}
					}
					else if (!iLocal_429)
					{
						if (!PED::IS_PED_INJURED(iLocal_167[2]))
						{
							TASK::TASK_AIM_GUN_AT_COORD(iLocal_167[2], func_405(30), -1, 0, 0);
							if (!PED::IS_PED_INJURED(iLocal_156))
							{
								Var7 = { 0f, 0f, 1.05f };
								uLocal_687 = PED::CREATE_SYNCHRONIZED_SCENE(func_405(29) - Var7, 0f, 0f, -125.7f, 2);
								if (!PED::IS_PED_INJURED(iLocal_156))
								{
									TASK::TASK_SYNCHRONIZED_SCENE(iLocal_156, uLocal_687, func_507(18), "hostage_low_intro_mrk", 8f, -8f, 0, 0, 1148846080, 0);
								}
							}
							iLocal_429 = 1;
						}
					}
					break;
				
				case 2:
					if (!PED::IS_PED_INJURED(iLocal_63[1]))
					{
						STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_63[1], 1));
					}
					HUD::SET_RADAR_AS_INTERIOR_THIS_FRAME(MISC::GET_HASH_KEY("V_FakeDT1_05"), 150f, -700f, 0, 1);
					if (!PED::IS_PED_INJURED(func_622()))
					{
						HUD::SET_MINIMAP_IN_SPECTATOR_MODE(1, func_622());
					}
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(2f);
					if (!iLocal_435)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_656 + 100)
						{
							GlobalFunc_4956();
							iLocal_435 = 1;
						}
					}
					else if (!bLocal_434)
					{
						if (!GlobalFunc_111())
						{
							bLocal_434 = func_429("FBI2_SNIPE", 1, 3, 0, 1, 0);
						}
					}
					if (!iLocal_630)
					{
						GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDMichaelOut");
						GRAPHICS::_ANIMPOSTFX_STOP_AND_DO_UNK("SwitchHUDFranklinOut");
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelIn", 0, 0);
						iLocal_630 = 1;
					}
					if (!iLocal_628)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_656)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_793 = MISC::GET_GAME_TIMER();
							iLocal_628 = 1;
						}
					}
					if (!iLocal_629)
					{
						if (iLocal_628)
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_793 + 300)
							{
								AUDIO::PLAY_SOUND_FRONTEND(-1, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_629 = 1;
							}
						}
					}
					if (!bLocal_549)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_656 + 200)
						{
							bLocal_549 = GlobalFunc_2867("FIB2_SWITCHED_TO_FRANK");
						}
					}
					if (!iLocal_617)
					{
						if (!PED::IS_PED_INJURED(iLocal_197))
						{
							if (MISC::GET_GAME_TIMER() >= iLocal_656 + 1000)
							{
								AUDIO::STOP_SOUND(iLocal_737);
								iLocal_617 = 1;
							}
						}
					}
					switch (iLocal_43)
					{
						case 0:
							if (MISC::GET_GAME_TIMER() >= iLocal_656 + 400)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_156))
								{
									PED::DELETE_PED(&iLocal_156);
									func_377(7);
									func_768(6);
								}
								iLocal_43 = 1;
							}
							break;
						
						case 1:
							if (func_607())
							{
								if (PHYSICS::DOES_ROPE_EXIST(&(Local_816.f_5)))
								{
									PHYSICS::DELETE_ROPE(&(Local_816.f_5));
								}
								func_704(3, 4);
								func_695(4);
								ENTITY::SET_ENTITY_VISIBLE(iLocal_156, 0);
								iLocal_43 = 2;
							}
							break;
						
						case 2:
							break;
					}
					if (GlobalFunc_8315() != 1)
					{
						while (!func_450(1, 1, 1, 0, 0))
						{
							func_506();
						}
						iLocal_433 = 0;
					}
					else
					{
						if (!iLocal_433)
						{
							func_445(1);
							iLocal_433 = 1;
						}
						PLAYER::SET_PLAYER_FORCE_SKIP_AIM_INTRO(PLAYER::PLAYER_ID(), 1);
						PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 1);
					}
					ENTITY::SET_ENTITY_VISIBLE(func_622(), 0);
					if (((MISC::GET_GAME_TIMER() >= iLocal_656 + 1100 && iLocal_43 == 2) && !PED::IS_PED_INJURED(iLocal_156)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_156))
					{
						if (func_452(&iLocal_1126, 1, 0, 1, 0, 1, 0))
						{
							iLocal_35 = 2;
						}
					}
					break;
			}
			break;
		
		case 2:
			if (bLocal_378)
			{
			}
			fLocal_637 = -1.28f;
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			func_4(0, 1, 1, 0, 1, 1);
			func_451();
			func_386(&iLocal_1126);
			HUD::DISPLAY_HUD(1);
			HUD::DISPLAY_RADAR(1);
			GlobalFunc_2866(&iLocal_290);
			if (!PED::IS_PED_INJURED(func_622()))
			{
				HUD::SET_MINIMAP_IN_SPECTATOR_MODE(0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_156))
			{
				ENTITY::SET_ENTITY_VISIBLE(iLocal_156, 1);
			}
			func_627(4, 0, 0, 1, 0, 1, 1, 1);
			break;
	}
	func_877();
}



void func_882()//Position - 0x87B00
{
	var uVar0;
	struct<3> Var1;
	
	if (CAM::DOES_CAM_EXIST(iLocal_290))
	{
		GlobalFunc_2866(&iLocal_289);
		if (CAM::DOES_CAM_EXIST(iLocal_291))
		{
			CAM::DESTROY_CAM(iLocal_291, 0);
		}
		uVar0 = CAM::GET_CAM_FOV(iLocal_290);
		GlobalFunc_2866(&iLocal_290);
		func_451();
		iLocal_290 = CAM::CREATE_CAMERA(1665938388, 0);
		Local_107[0] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, CAM::GET_FINAL_RENDERED_CAM_COORD(), CAM::GET_FINAL_RENDERED_CAM_ROT(2), CAM::GET_FINAL_RENDERED_CAM_FOV(), 1, 2);
		CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iLocal_290, Local_107[0], 0, 2);
		CAM::SET_CAM_MOTION_BLUR_STRENGTH(Local_107[0], 0.5f);
		Var1 = { GlobalFunc_721(CAM::GET_FINAL_RENDERED_CAM_COORD(), Local_1144, 0.1f) };
		Local_107[1] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Var1, CAM::GET_FINAL_RENDERED_CAM_ROT(2), CAM::GET_FINAL_RENDERED_CAM_FOV(), 1, 2);
		CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iLocal_290, Local_107[1], 1200, 3);
		CAM::SET_CAM_MOTION_BLUR_STRENGTH(Local_107[1], 0.8f);
		Local_107[3] = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1144, Local_1147, uVar0, 1, 2);
		CAM::ADD_CAM_SPLINE_NODE_USING_CAMERA(iLocal_290, Local_107[3], 900, 2);
		CAM::SET_CAM_MOTION_BLUR_STRENGTH(Local_107[3], 1f);
		CAM::SET_CAM_SPLINE_DURATION(iLocal_290, 1000);
		CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(iLocal_290, 3);
		CAM::SET_CAM_ACTIVE(iLocal_290, 1);
		CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
	}
}

void func_883(int iParam0, bool bParam1, int iParam2)//Position - 0x87C32
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	int iVar7;
	
	func_884(iParam0, &Var0, &Var3, &uVar6);
	func_532(&iLocal_289);
	CAM::DETACH_CAM(iLocal_289);
	CAM::STOP_CAM_POINTING(iLocal_289);
	CAM::SET_CAM_COORD(iLocal_289, Var0);
	CAM::SET_CAM_ROT(iLocal_289, Var3, 2);
	CAM::SET_CAM_FOV(iLocal_289, uVar6);
	if (bParam1)
	{
		iVar7 = iParam0 + 1;
		func_884(iVar7, &Var0, &Var3, &fVar6);
		func_532(&iLocal_290);
		CAM::SET_CAM_COORD(iLocal_290, Var0);
		CAM::SET_CAM_ROT(iLocal_290, Var3, 2);
		CAM::SET_CAM_FOV(iLocal_290, fVar6);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_290, iLocal_289, iParam2, 1, 1);
	}
	CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
}

void func_884(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x87CD3
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 96.46f, -622.69f, 262.29f };
			*uParam2 = { 19.41f, 0f, -103.44f };
			*uParam3 = 29.75f;
			break;
		
		case 1:
			*uParam1 = { 96.46f, -622.69f, 262.29f };
			*uParam2 = { 19.41f, 0f, -85.27f };
			*uParam3 = 29.75f;
			break;
		
		case 2:
			*uParam1 = { 81.82f, -669.82f, 274.21f };
			*uParam2 = { 0.61f, 0.6f, -21.81f };
			*uParam3 = 22.04f;
			break;
		
		case 3:
			*uParam1 = { 81.82f, -669.82f, 274.21f };
			*uParam2 = { -6.98f, 0.6f, -21.8f };
			*uParam3 = 22.04f;
			break;
		
		case 4:
			*uParam1 = { 110.16f, -590.5f, 254.4f };
			*uParam2 = { 15.76f, 0.28f, 158.27f };
			*uParam3 = 28.054f;
			break;
		
		case 5:
			*uParam1 = { 110.16f, -590.5f, 254.4f };
			*uParam2 = { 21.49f, 0.47f, -166.12f };
			*uParam3 = 28.054f;
			break;
		
		case 6:
			*uParam1 = { 119.15f, -618.77f, 206.46f };
			*uParam2 = { 0.64f, 0f, 99.4f };
			*uParam3 = 39.54f;
			break;
		
		case 7:
			*uParam1 = { 118.88f, -618.6f, 206.81f };
			*uParam2 = { -12.44f, 0f, 105.89f };
			*uParam3 = 53.16f;
			break;
		
		case 8:
			*uParam1 = { 109.3852f, -618.2629f, 206.6799f };
			*uParam2 = { -5.776211f, 9.1E-05f, -104.5529f };
			*uParam3 = 35f;
			break;
		
		case 9:
			*uParam1 = { 109.3852f, -618.2629f, 206.6799f };
			*uParam2 = { -5.776211f, 9.1E-05f, -104.5529f };
			*uParam3 = 35f;
			break;
		
		case 10:
			*uParam1 = { 111.93f, -614.87f, 209.1f };
			*uParam2 = { -5.14f, -4.85f, 155.18f };
			*uParam3 = 32.662f;
			break;
		
		case 11:
			*uParam1 = { 111.93f, -614.87f, 209.1f };
			*uParam2 = { 10.86f, -4.85f, 155.18f };
			*uParam3 = 32.662f;
			break;
		
		case 12:
			*uParam1 = { 60.9f, -753.7f, 46f };
			*uParam2 = { 5.8f, 0f, -75f };
			*uParam3 = 46.6f;
			break;
		
		case 13:
			*uParam1 = { 59.3f, -751.7f, 46.8f };
			*uParam2 = { 61.9f, 0f, -63.8f };
			*uParam3 = 46.6f;
			break;
		
		case 14:
			*uParam1 = { 50.3f, -734f, 230f };
			*uParam2 = { 18.2f, 0f, -65.5f };
			*uParam3 = 46.6f;
			break;
		
		case 15:
			*uParam1 = { 50.1f, -733.5f, 230f };
			*uParam2 = { 18.2f, 0f, -61.9f };
			*uParam3 = 46.6f;
			break;
	}
}

void func_885()//Position - 0x88033
{
	Global_17098.f_7 = 1;
}

void func_886()//Position - 0x88041
{
	func_748(1, 4, func_405(36), -96.9f, 0, -1);
	func_445(1);
	func_690();
}



void func_889(bool bParam0)//Position - 0x8810D
{
	if (bParam0)
	{
		func_398(4);
		AUDIO::PLAY_SOUND_FRONTEND(iLocal_736, "FBI_02_SNATCH_AND_GRAB_AMB_HELI", 0, 1);
	}
	else
	{
		func_298(4);
		AUDIO::STOP_SOUND(iLocal_736);
	}
}

void func_890()//Position - 0x8813D
{
	int iVar0;
	char cVar1[16];
	
	uLocal_687 = PED::CREATE_SYNCHRONIZED_SCENE(func_405(29), 0f, 0f, -125.7f, 2);
	if (!PED::IS_PED_INJURED(iLocal_157))
	{
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_157, uLocal_687, func_507(3), "Interrogation_Michelle", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_156))
	{
		TASK::TASK_SYNCHRONIZED_SCENE(iLocal_156, uLocal_687, func_507(3), "Interrogation_MRK", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!PED::IS_PED_INJURED(iLocal_167[iVar0]))
		{
			switch (iVar0)
			{
				case 0:
					StringCopy(&cVar1, "Interrogation_B", 16);
					break;
				
				case 1:
					StringCopy(&cVar1, "Interrogation_C", 16);
					break;
				
				case 2:
					StringCopy(&cVar1, "Interrogation_A", 16);
					break;
			}
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_167[iVar0], uLocal_687, func_507(3), &cVar1, 1000f, -0.25f, 0, 0, 1148846080, 0);
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_234))
	{
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_234, 0);
		ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_234, uLocal_687, "interrogation_chair", func_507(3), 1000f, 1090519040, 0, 1148846080);
	}
	func_891(0);
	CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_291, uLocal_687, "interrogation_cam", func_507(3));
	AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(uLocal_687);
	if (!bLocal_421)
	{
		AUDIO::_SET_VARIABLE_ON_CUTSCENE_AUDIO("INOUT", 0f);
	}
	else
	{
		AUDIO::_SET_VARIABLE_ON_CUTSCENE_AUDIO("INOUT", 1f);
	}
	GlobalFunc_2867("FIB2_TORTURE_CS");
}

void func_891(int iParam0)//Position - 0x882B9
{
	if (CAM::DOES_CAM_EXIST(iLocal_291))
	{
		CAM::DESTROY_CAM(iLocal_291, 0);
	}
	iLocal_291 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", iParam0);
	CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
}

Vector3 func_892(int iParam0)//Position - 0x882ED
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0f, 180f;
			break;
		
		case 1:
			return 0f, 0f, 225f;
			break;
		
		case 2:
			return 0f, 0f, 180f;
			break;
		
		case 3:
			return 0f, 0f, 180f;
			break;
		
		case 4:
			return 0f, 0f, 145f;
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_893(int iParam0)//Position - 0x8835E
{
	switch (iParam0)
	{
		case 0:
			return 0f, 0.07f, 0.42f;
			break;
		
		case 1:
			return -1.4f, 0.3f, 1.01f;
			break;
		
		case 2:
			return 0f, 0.07f, 0.42f;
			break;
		
		case 3:
			return 0f, 0.07f, 0.42f;
			break;
		
		case 4:
			return 0.7f, 0.07f, 1.01f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_894(int iParam0)//Position - 0x883EB
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
			return 2;
			break;
		
		case 4:
			return 2;
			break;
	}
	return 0;
}

void func_895()//Position - 0x8843C
{
	func_695(3);
	func_693(3);
	func_687();
	func_896(3);
	func_688(3);
	iLocal_416 = 1;
}

void func_896(int iParam0)//Position - 0x88460
{
	struct<3> Var0;
	float fVar3;
	
	iParam0 = iParam0;
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_157))
	{
		Var0 = { func_405(28) };
		fVar3 = 78.59f;
		iLocal_157 = PED::CREATE_PED(26, func_16(10), Var0, fVar3, 1, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_157, 2, 1, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_157, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_157, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_157, 4, 0, 0, 0);
		GlobalFunc_173(&uLocal_923, 6, iLocal_157, "MICHELLE", 0, 1);
		iLocal_233 = OBJECT::CREATE_OBJECT(func_16(24), 1f, 2f, 3f, 1, 1, 0);
		ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_233, iLocal_157, PED::GET_PED_BONE_INDEX(iLocal_157, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_157, 1);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_157, 1);
		PED::SET_PED_CAN_BE_TARGETTED(iLocal_157, 0);
		PED::SET_PED_KEEP_TASK(iLocal_157, 1);
	}
}

void func_897()//Position - 0x88520
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	struct<3> Var4;
	bool bVar7;
	struct<3> Var8;
	bool bVar11;
	
	if (!iLocal_377)
	{
		iVar0 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		if (bLocal_376)
		{
			if (!iLocal_584)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_199[0]);
					iLocal_584 = 1;
				}
			}
		}
		if (!iLocal_530)
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1393.64f, -2053.64f, 51f, 700f, 700f, 700f, 0, 0, 0) || bLocal_376)
			{
				iVar1 = 0;
				while (iVar1 < iLocal_227)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar1]))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(iLocal_227[iVar1]));
					}
					iVar1++;
				}
				func_768(19);
				func_768(20);
				iLocal_530 = 1;
			}
		}
		if (!bLocal_376)
		{
			if (iLocal_408)
			{
				GlobalFunc_9268(&uLocal_1101, func_405(8), 0, 0, 1, 1, 1);
				if (!CAM::IS_GAMEPLAY_HINT_ACTIVE() && CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) != 4)
				{
					if (!iLocal_607)
					{
						iLocal_607 = func_426("SG_DROHLP", 0, -1);
					}
				}
				else
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) != 4)
					{
						iLocal_607 = 1;
					}
					if (GlobalFunc_74("SG_DROHLP"))
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_721 + 1000)
						{
							HUD::CLEAR_HELP(0);
							iLocal_721 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (!iLocal_587)
				{
					if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						func_398(2);
						iLocal_587 = 1;
					}
				}
				else if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					func_298(2);
					iLocal_587 = 0;
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0) && !PED::IS_PED_INJURED(iLocal_63[0]))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(8), 100f, 100f, 80f, 0, 1, 0))
			{
				VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_199[0], 0f);
				VEHICLE::_0xE5810AC70602F2F5(iLocal_199[0], 0f);
			}
			else
			{
				VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_199[0], 1f);
				VEHICLE::_0xE5810AC70602F2F5(iLocal_199[0], 1f);
			}
			if (!bLocal_376)
			{
				if (!iLocal_546)
				{
					if (iLocal_545)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_749 + 3000)
						{
							iLocal_546 = 1;
						}
					}
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0], 0))
				{
					if (!iLocal_545)
					{
						Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
						MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &fVar2);
						if (fVar2 < 0f)
						{
							fVar2 = 0f;
						}
						fVar3 = (Var4.f_2 - fVar2);
						if (fVar3 > 1f)
						{
							iLocal_749 = MISC::GET_GAME_TIMER();
							iLocal_545 = 1;
						}
					}
					else if (!bLocal_548)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 132.47f, -636.71f, 261.85f, 950f, 950f, 950f, 0, 0, 0))
						{
							bLocal_548 = GlobalFunc_2867("FIB2_HALFWAY_THERE");
						}
					}
				}
			}
			if (iVar0 == 0)
			{
				if (func_441())
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0], 0) && PED::IS_PED_IN_VEHICLE(iLocal_63[0], iLocal_199[0], 0))
					{
					}
				}
				if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0]) && PED::IS_PED_IN_VEHICLE(iLocal_63[0], iLocal_199[0], 0))
				{
					func_403("fbi_2_mcs_2", func_405(8), 100f, 120f);
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						if (!PED::IS_PED_INJURED(func_625()))
						{
							CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Michael", func_625(), 0);
						}
						if (!PED::IS_PED_INJURED(func_404()))
						{
							CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Trevor", 0, 12, 0, 0);
						}
					}
					if (!bLocal_376)
					{
						if (iLocal_387)
						{
							if (!iLocal_408)
							{
								if (func_900())
								{
									iLocal_387 = 0;
								}
							}
						}
					}
					if (!iLocal_543)
					{
						func_819(1);
						func_377(22);
						iLocal_543 = 1;
					}
					bVar7 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 102.56f, -645.66f, 257f, 116.05f, -609.76f, 284f, 20f, 0, 0, 0);
					Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					if ((((bVar7 && Var8.f_2 <= 284f) && Var8.f_2 >= 257f) || bLocal_376) || iLocal_615)
					{
						if ((((func_441() && !GlobalFunc_111()) && func_607()) && func_817()) || iLocal_615)
						{
							iLocal_615 = 1;
							if (GlobalFunc_Has_Cutscene_Loaded())
							{
								iLocal_377 = 1;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(8), 250f, 250f, 80f, 0, 0, 0))
					{
						if (!bLocal_376)
						{
							if (!bLocal_409)
							{
								GlobalFunc_4935();
								bLocal_409 = true;
							}
							else if (!iLocal_408)
							{
								if (func_429("FBI2_MWHERE", 0, 0, 0, 1, 0))
								{
									iLocal_408 = 1;
									iLocal_748 = MISC::GET_GAME_TIMER() + 20000;
								}
							}
							else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(8), 125f, 125f, 100f, 0, 0, 0))
							{
								if (MISC::GET_GAME_TIMER() >= iLocal_748)
								{
									bVar11 = false;
									if (Var8.f_2 >= 340f)
									{
										bVar11 = func_429("FBI2_MLOW", 0, 0, 0, 1, 0);
									}
									else if (Var8.f_2 <= 190f)
									{
										bVar11 = func_429("FBI2_MHIGH", 0, 0, 0, 1, 0);
									}
									else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 114.02f, -630.17f, 266.43f, 149.18f, -643.46f, 266.41f, 49f, 0, 0, 0) && !bVar7)
									{
										bVar11 = func_429("FBI2_MFURT", 0, 0, 0, 1, 0);
									}
									else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 114.94f, -628.94f, 266.43f, -43.22f, -569.49f, 266.41f, 153f, 0, 0, 0) && !bVar7)
									{
										bVar11 = func_429("FBI2_MTFAR", 0, 0, 0, 1, 0);
									}
									else if (!bVar7)
									{
										bVar11 = func_429("FBI2_MWEST", 0, 0, 0, 1, 0);
									}
									else if (Var8.f_2 >= 284f)
									{
										bVar11 = func_429("FBI2_MLOW", 0, 0, 0, 1, 0);
									}
									else if (Var8.f_2 <= 257f)
									{
										bVar11 = func_429("FBI2_MHIGH", 0, 0, 0, 1, 0);
									}
									if (bVar11)
									{
										iLocal_748 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(28000, 33000));
									}
								}
							}
						}
					}
					if (!bLocal_376)
					{
						if (!iLocal_390)
						{
							if (ENTITY::IS_ENTITY_IN_AREA(iLocal_199[0], 578f, -307f, 165f, 111f, -1472f, 150f, 0, 0, 0))
							{
								iLocal_390 = 1;
							}
						}
						if (!bLocal_386)
						{
							if (bLocal_384 && bLocal_381)
							{
								if (!bLocal_409)
								{
									bLocal_386 = func_429("FBI2_B2AV1", 0, 0, 0, 1, 0);
								}
							}
						}
					}
				}
			}
			if (!bLocal_376)
			{
				func_407(1, 0, 1, 1);
			}
		}
	}
	else
	{
		if (!iLocal_410)
		{
			iLocal_410 = 1;
		}
		func_898();
	}
}

void func_898()//Position - 0x88B99
{
	switch (iLocal_35)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_199[0], 1f);
				VEHICLE::_0xE5810AC70602F2F5(iLocal_199[0], 1f);
				func_899();
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_199[0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_199[0]);
				}
			}
			if (!PED::IS_PED_INJURED(iLocal_63[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_63[0], "Michael", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Trevor", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_199[0], "Main_Heli", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_256[0], "P_CS_15M_ROPE_S", 2, joaat("p_cs_15m_rope_s"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_256[1], "P_RPULLEY_S", 2, joaat("p_rpulley_s"), 0);
			GlobalFunc_2867("FIB2_RAPPEL_CS_START");
			CUTSCENE::START_CUTSCENE(2048);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_656 = MISC::GET_GAME_TIMER();
			iLocal_35 = 1;
			break;
		
		case 1:
			func_899();
			if (!iLocal_379)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_376();
					GlobalFunc_4948(&uLocal_1101, 0, 0);
					GRAPHICS::_0x5F6DF3D92271E8A1(1);
					RECORDING::_0x48621C9FCA3EBD28(4);
					if (!PED::IS_PED_INJURED(iLocal_63[0]))
					{
						func_746(iLocal_63[0], 0, 3);
						func_379(0, 1);
						PED::RELEASE_PED_PRELOAD_PROP_DATA(iLocal_63[0]);
					}
					func_298(1);
					func_298(2);
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
					STREAMING::SET_PED_POPULATION_BUDGET(0);
					VEHICLE::INSTANTLY_FILL_VEHICLE_POPULATION();
					VEHICLE::SET_FAR_DRAW_VEHICLES(1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
					{
						GlobalFunc_5136(&Local_816, iLocal_199[0], func_405(14), func_405(15));
					}
					GlobalFunc_2882(iLocal_199[0]);
					if (bLocal_376)
					{
						CAM::DO_SCREEN_FADE_IN(800);
						bLocal_376 = false;
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_379 = 1;
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (GlobalFunc_8315() != 0)
				{
					GlobalFunc_9019(&iLocal_63, 0);
					GlobalFunc_10980(&iLocal_63, 1, 1, 1);
					func_301(1);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Main_Heli", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					func_899();
					func_15();
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_63[2]))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_63[2], iLocal_199[0], 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_63[2], iLocal_199[0], -1);
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_256[0]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("P_CS_15M_ROPE_S", 0)))
				{
					uLocal_256[0] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("P_CS_15M_ROPE_S", 0));
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_256[1]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("P_RPULLEY_S", 0)))
				{
					uLocal_256[1] = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("P_RPULLEY_S", 0));
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("P_CS_15M_ROPE_S", 0))
			{
				OBJECT::DELETE_OBJECT(&(uLocal_256[0]));
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("P_RPULLEY_S", 0))
			{
				OBJECT::DELETE_OBJECT(&(uLocal_256[1]));
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				RECORDING::_0x81CBAE94390F9F89();
				Local_816.f_3 = PLAYER::PLAYER_PED_ID();
				func_4(0, 0, 0, 1, 1, 1);
				func_627(3, 0, 1, 0, 0, 1, 1, 1);
			}
			break;
		
		case 2:
			break;
	}
	if (iLocal_379)
	{
		GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(2f);
		VEHICLE::SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(0.8f);
	}
}

void func_899()//Position - 0x88EC3
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		VEHICLE::SET_HELI_BLADES_FULL_SPEED(iLocal_199[0]);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_199[0], 1, 1);
	}
}

int func_900()//Position - 0x88EEC
{
	if (iLocal_387)
	{
		if (func_441())
		{
			if (GlobalFunc_10626(&uLocal_923, "FBI2AUD", &Local_1114, &cLocal_1120, 8, 0, 0))
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

















void func_917()//Position - 0x89B6F
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	char* sVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var10;
	float fVar13;
	bool bVar14;
	float fVar15;
	int iVar16;
	struct<3> Var17;
	char* sVar20;
	
	if (!iLocal_377)
	{
		if (!iLocal_620)
		{
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				iVar0 = 0;
				while (iVar0 < 7)
				{
					if (iVar0 == 0)
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_242[iVar0], 147.4805f, -677.4504f, 41.0238f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(uLocal_242[iVar0], 0f, 0f, 100.84f, 2, 1);
					}
					if (iVar0 == 2)
					{
						ENTITY::SET_ENTITY_COORDS(uLocal_242[iVar0], 147.8508f, -676.3236f, 41.0238f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(uLocal_242[iVar0], 0f, 0f, 36.0963f, 2, 1);
					}
					if ((iVar0 == 0 || iVar0 == 2) || iVar0 == 4)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_242[iVar0]))
						{
							ENTITY::FREEZE_ENTITY_POSITION(uLocal_242[iVar0], 1);
						}
					}
					iVar0++;
				}
				func_734();
				iLocal_620 = 1;
			}
		}
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
		{
			if (MISC::GET_GAME_TIMER() <= iLocal_686 + 2000)
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				if (Var1.x > 145.2f)
				{
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
			}
		}
		iVar4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		if (!bLocal_376)
		{
			if (iVar4 > 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1370.22f, -2049.72f, -10f, 1401.82f, -2087.4f, 110f, 97f, 0, 1, 0))
				{
					func_612(15);
				}
			}
		}
		if (Global_3)
		{
			bLocal_381 = true;
		}
		if (bLocal_376)
		{
			if (!iLocal_583)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_153))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_153, iLocal_199[1], 0))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_153, iLocal_199[1], 0);
						}
					}
					bLocal_567 = true;
					iLocal_583 = 1;
				}
			}
		}
		if (!bLocal_376)
		{
			func_932(iLocal_153, &iLocal_578, &iLocal_767);
		}
		if (!PED::IS_PED_INJURED(iLocal_153))
		{
			if (!bLocal_376)
			{
				if (iLocal_776 < 3)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_768)
					{
						if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
						{
							if (!ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), 140.2791f, -689.8296f, 41.02893f, 158.8461f, -661.9821f, 45.26525f, 0, 1, 0))
							{
								if (!bLocal_567 || !GlobalFunc_111())
								{
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153, 20f, 20f, 10f, 0, 1, 0) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_153, PLAYER::PLAYER_PED_ID(), 1))
									{
										if (!iLocal_580)
										{
											GlobalFunc_4935();
											iLocal_580 = 1;
										}
										switch (iLocal_776)
										{
											case 0:
												sVar5 = "FBI2_DAVDAM";
												break;
											
											case 1:
												sVar5 = "FBI2_DAVDAM2";
												break;
											
											case 2:
												sVar5 = "FBI2_DAVDAM3";
												break;
										}
										if (func_429(sVar5, 1, 0, 0, 1, 0))
										{
											PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
											iLocal_768 = MISC::GET_GAME_TIMER() + 10000;
											iLocal_658 = MISC::GET_GAME_TIMER() + 17000;
											iLocal_776++;
											iLocal_580 = 0;
										}
									}
									else
									{
										ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_153);
										PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
										iLocal_768 = MISC::GET_GAME_TIMER() + 10000;
									}
								}
								else
								{
									PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
									iLocal_768 = MISC::GET_GAME_TIMER() + 10000;
								}
							}
							else
							{
								func_612(23);
							}
						}
					}
				}
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153, 20f, 20f, 10f, 0, 1, 0))
					{
						if (!iLocal_581)
						{
							if (!bLocal_567)
							{
								GlobalFunc_4935();
								iLocal_581 = 1;
							}
						}
						if (!iLocal_582)
						{
							if (func_429("FBI2_DAVWAN1", 0, 0, 0, 1, 0))
							{
								PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
								iLocal_582 = 1;
								iLocal_658 = MISC::GET_GAME_TIMER() + 17000;
							}
						}
						else
						{
							func_838("FBI2_DAVWAN2", 17000);
						}
					}
				}
				else
				{
					iLocal_581 = 0;
					iLocal_582 = 0;
				}
			}
			if (!bLocal_598)
			{
				if (iLocal_662 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153, 10f, 10f, 10f, 0, 1, 0))
						{
							if (!iLocal_599)
							{
								if (PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_199[1])
									{
										GlobalFunc_4935();
										iLocal_599 = 1;
									}
								}
							}
							else
							{
								bLocal_598 = func_429("FBI2_CAR", 0, 0, 0, 1, 0);
							}
						}
					}
				}
			}
		}
		if (!iLocal_401)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_154))
			{
				if (PED::IS_PED_INJURED(iLocal_154))
				{
					func_612(21);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_154, PLAYER::PLAYER_PED_ID(), 1))
				{
					func_612(23);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
			{
				if (PED::IS_PED_INJURED(iLocal_155))
				{
					func_612(22);
				}
				else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), 1))
				{
					func_612(23);
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(148.3425f, -677.2178f, 41.84525f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 3.5f)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
			}
			if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(0), 150f, 150f, 150f, 0, 0, 0))
			{
				GlobalFunc_200(&uLocal_923, 5);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_154))
				{
					PED::DELETE_PED(&iLocal_154);
				}
				func_768(4);
				GlobalFunc_200(&uLocal_923, 6);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
				{
					PED::DELETE_PED(&iLocal_155);
				}
				func_768(5);
				func_673(16);
				func_768(26);
				iVar6 = 0;
				while (iVar6 < 7)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_242[iVar6]))
					{
						ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_242[iVar6]));
					}
					iVar6++;
				}
				iVar6 = 0;
				while (iVar6 < 3)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_252[iVar6]))
					{
						OBJECT::DELETE_OBJECT(&(uLocal_252[iVar6]));
					}
					iVar6++;
				}
				iLocal_401 = 1;
			}
			else if (!iLocal_400)
			{
				if (!PED::IS_PED_INJURED(iLocal_154) && !PED::IS_PED_INJURED(iLocal_155))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_769))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_769) >= 0.98f)
						{
							func_931();
						}
					}
				}
			}
			else
			{
				if (!PED::IS_PED_INJURED(iLocal_154))
				{
					if (!bLocal_568)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_763 + 3000)
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_154, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						}
					}
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_154))
					{
						PED::APPLY_DAMAGE_TO_PED(iLocal_154, 1000, 1);
					}
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_154, 6f, 6f, 2f, 0, 1, 0))
					{
						func_838("FBI2_HANG", MISC::GET_RANDOM_INT_IN_RANGE(15000, 20000));
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_155))
				{
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_155))
					{
						PED::APPLY_DAMAGE_TO_PED(iLocal_155, 1000, 1);
					}
					if (!bLocal_569)
					{
						if (MISC::GET_GAME_TIMER() >= iLocal_763 + 3900)
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
						}
					}
				}
			}
		}
		func_930();
		switch (iLocal_39)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(20), 450f, 450f, 450f, 0, 0, 0) && bLocal_567)
				{
					func_377(13);
					func_377(16);
					iLocal_39 = 1;
				}
				break;
			
			case 1:
				if (func_607() && func_814())
				{
					func_929();
					iLocal_39 = 2;
				}
				break;
			
			case 2:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(20), 380f, 380f, 380f, 0, 0, 0))
				{
					func_377(1);
					func_377(2);
					func_377(11);
					func_680(17);
					iLocal_39 = 3;
				}
				break;
			
			case 3:
				if (func_607() && func_814())
				{
					func_928();
					iLocal_39 = 4;
				}
				break;
			
			case 4:
				if ((((!PED::IS_PED_INJURED(iLocal_164[0]) && !PED::IS_PED_INJURED(iLocal_63[1])) && !PED::IS_PED_INJURED(iLocal_63[2])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[2], 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					if (!bLocal_376)
					{
						switch (iLocal_151)
						{
							case 0:
								uLocal_687 = PED::CREATE_SYNCHRONIZED_SCENE(func_405(6), 0f, 0f, -15.47f, 2);
								uLocal_688 = PED::CREATE_SYNCHRONIZED_SCENE(func_405(6), 0f, 0f, -15.47f, 2);
								ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_63[1], iLocal_199[2], 1);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_687, 1);
								PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_688, 1);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_63[2], uLocal_687, func_507(17), "_leadin_loop_Trevor", 8f, -4f, 1, 0, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164[0], uLocal_687, func_507(17), "_leadin_loop_FBI", 8f, -4f, 1, 0, 1148846080, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(iLocal_63[1], uLocal_688, func_507(17), "_leadin_loop_Franklin", 8f, -8f, 1, 0, 1148846080, 0);
								TASK::TASK_LOOK_AT_ENTITY(iLocal_63[1], PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
								iLocal_151 = 1;
								break;
							
							case 1:
								if (!bLocal_575)
								{
									if (!iLocal_576)
									{
										AUDIO::_SET_SYNCHRONIZED_AUDIO_EVENT_POSITION_THIS_FRAME("FBI_2_MCS_1_LeadIn", iLocal_63[2]);
										iLocal_576 = 1;
									}
									bLocal_575 = AUDIO::PREPARE_SYNCHRONIZED_AUDIO_EVENT("FBI_2_MCS_1_LeadIn", 0);
								}
								if (iLocal_29 == 0)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_687))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.98f)
										{
											if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63[2], 57f, 57f, 57f, 0, 1, 0))
											{
												uLocal_687 = PED::CREATE_SYNCHRONIZED_SCENE(func_405(6), 0f, 0f, -15.47f, 2);
												TASK::TASK_SYNCHRONIZED_SCENE(iLocal_63[2], uLocal_687, func_507(17), "_leadin_action_Trevor", 4f, -4f, 1, 0, 1148846080, 0);
												TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164[0], uLocal_687, func_507(17), "_leadin_action_FBI", 4f, -4f, 1, 0, 1148846080, 0);
												PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_687, 0f);
												PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_687, 0);
												PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(uLocal_687, 1);
												if (bLocal_575)
												{
													AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(uLocal_687);
												}
												iLocal_151 = 2;
											}
										}
									}
								}
								break;
							
							case 2:
								if (iLocal_29 == 0)
								{
									if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_687))
									{
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.75f)
										{
											iLocal_577 = 1;
										}
										if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.99f)
										{
											uLocal_687 = PED::CREATE_SYNCHRONIZED_SCENE(func_405(6), 0f, 0f, -15.47f, 2);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_63[2], uLocal_687, func_507(17), "_leadin_loop_Trevor_02_trevor", 4f, -8f, 1, 0, 1148846080, 0);
											TASK::TASK_SYNCHRONIZED_SCENE(iLocal_164[0], uLocal_687, func_507(17), "_leadin_loop_FBI", 4f, -8f, 1, 0, 1148846080, 0);
											PED::SET_SYNCHRONIZED_SCENE_PHASE(uLocal_687, 0f);
											PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_687, 1);
											iLocal_577 = 1;
											iLocal_151 = 3;
										}
									}
									else
									{
										iLocal_577 = 1;
									}
								}
								break;
							}
						}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_199[0], 120f, 120f, 120f, 0, 0, 0))
					{
						VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_199[0]);
					}
				}
				if (!bLocal_376)
				{
					func_611();
				}
				break;
		}
		switch (iLocal_40)
		{
			case 0:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1393.64f, -2053.64f, 51f, 330f, 330f, 330f, 0, 0, 0))
				{
					func_377(19);
					func_377(20);
					func_377(18);
					iLocal_40 = 1;
				}
				break;
			
			case 1:
				if (func_607())
				{
					func_605(1);
					iLocal_40 = 2;
				}
				break;
			
			case 2:
				break;
		}
		if (!iLocal_403)
		{
			if (GlobalFunc_2289())
			{
				iLocal_403 = 1;
			}
		}
		if (!bLocal_376)
		{
			if (!bLocal_567)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0) && !PED::IS_PED_INJURED(iLocal_153))
				{
					Var7 = { ENTITY::GET_ENTITY_COORDS(iLocal_153, 1) };
					Var10 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
					switch (iLocal_152)
					{
						case 0:
							fVar13 = (Var7.x - Var10.x);
							if (fVar13 > 0f)
							{
								fLocal_651 = (fLocal_651 + (0.06f * SYSTEM::TIMESTEP()));
							}
							else if (fVar13 < -1.2f)
							{
								fLocal_651 = (fLocal_651 - (0.06f * SYSTEM::TIMESTEP()));
							}
							else if (fLocal_651 > 1f)
							{
								fLocal_651 = (fLocal_651 - (0.06f * SYSTEM::TIMESTEP()));
								if (fLocal_651 < 1f)
								{
									fLocal_651 = 1f;
								}
							}
							else if (fLocal_651 < 1f)
							{
								fLocal_651 = (fLocal_651 + (0.06f * SYSTEM::TIMESTEP()));
								if (fLocal_651 > 1f)
								{
									fLocal_651 = 1f;
								}
							}
							if (fLocal_651 > 1.15f)
							{
								fLocal_651 = 1.15f;
							}
							else if (fLocal_651 < 0.9f)
							{
								fLocal_651 = 0.9f;
							}
							PED::SET_PED_MOVE_RATE_OVERRIDE(iLocal_153, fLocal_651);
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
							{
								fVar15 = 3.6f;
								if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
								{
									fVar15 = 4.1f;
								}
								bVar14 = (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153, fVar15, fVar15, 4f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_199[1], 5f, 5f, 5f, 0, 1, 0));
							}
							if (!bVar14 || !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153, 10f, 10f, 4f, 0, 1, 0))
							{
								if (!iLocal_387)
								{
									if (func_408())
									{
										GlobalFunc_4935();
									}
								}
							}
							else if (iLocal_387)
							{
								if (func_900())
								{
									iLocal_387 = 0;
								}
							}
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_153, -1689270312) == 7)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_153, 84.6f, -670f, 43.38f, 8f, 8f, 8f, 0, 0, 0))
								{
									TASK::TASK_CLEAR_LOOK_AT(iLocal_153);
									TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("davewalk", ENTITY::GET_ENTITY_COORDS(iLocal_153, 1), &iVar16);
									if (iVar16 < 2)
									{
										iVar16 = 2;
									}
									TASK::TASK_FOLLOW_WAYPOINT_RECORDING(iLocal_153, "davewalk", iVar16 + 1, 4, -1);
								}
							}
							if (!bVar14)
							{
								if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153))
								{
									TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
								}
								if (Var10.x > Var7.x)
								{
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_918);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_918);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_918);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_153, uLocal_918);
									iLocal_152 = 2;
								}
							}
							else
							{
								PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
								PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
								PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
								PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
								PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
								if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_153, iLocal_199[1], 8f, 8f, 8f, 0, 0, 0))
								{
									if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
									{
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_153, 1);
										TASK::TASK_ENTER_VEHICLE(iLocal_153, iLocal_199[1], 20000, 0, 1f, 1, 0);
										TASK::TASK_CLEAR_LOOK_AT(iLocal_153);
										iLocal_152 = 1;
									}
								}
							}
							bLocal_623 = bVar14;
							break;
						
						case 2:
							if (PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153))
							{
								TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
							}
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153, 3.2f, 3.2f, 4f, 0, 1, 0) || Var10.x < Var7.x)
							{
								iLocal_152 = 0;
							}
							break;
						
						case 1:
							if (PED::IS_PED_IN_VEHICLE(iLocal_153, iLocal_199[1], 0))
							{
								PED::REMOVE_PED_FROM_GROUP(iLocal_153);
								GlobalFunc_4935();
								TASK::TASK_CLEAR_LOOK_AT(iLocal_153);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_153, 1);
								RECORDING::_0x293220DA1B46CEBC(5f, 10f, 4);
								iLocal_387 = 0;
								bLocal_567 = true;
							}
							break;
						}
					}
			}
			if (!bLocal_570)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
				{
					if (iLocal_152 >= 1 || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_153, iLocal_199[1], 15f, 15f, 15f, 0, 0, 0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_199[1], 30f, 30f, 30f, 0, 0, 0))
						{
							PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
						}
					}
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[1], 0))
					{
						bLocal_570 = func_398(0);
					}
				}
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_153))
		{
			if (Global_3)
			{
				if (!bLocal_547)
				{
					Var17 = { ENTITY::GET_ENTITY_COORDS(iLocal_199[1], 1) };
					if (Var17.f_1 <= -1976.2f)
					{
						bLocal_547 = GlobalFunc_2867("FIB2_HELI_PRE_TAKEOFF");
					}
				}
			}
			if (iLocal_39 == 4 && iLocal_40 == 2)
			{
				func_403("fbi_2_mcs_1", func_405(20), 100f, 120f);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					if (!PED::IS_PED_INJURED(iLocal_153))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dave_FBI", iLocal_153, 0);
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Dave_FBI", 11, 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_164[0]))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("FBI_Suit", iLocal_164[0], 0);
					}
					if (!PED::IS_PED_INJURED(func_622()))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Franklin", func_622(), 0);
					}
					if (!PED::IS_PED_INJURED(func_404()))
					{
						CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", func_404(), 0);
					}
				}
			}
			if (!iLocal_380)
			{
				if (iVar4 == 0)
				{
					if (!bLocal_376)
					{
						if (!Global_3)
						{
							if (!bLocal_402)
							{
								if (bLocal_384 && bLocal_566)
								{
									if (iLocal_659 > 0)
									{
										if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
										{
											if (bLocal_567)
											{
												bLocal_402 = true;
											}
											else if (bLocal_623)
											{
												if ((iLocal_654 % 2) == 0)
												{
													bLocal_402 = func_429("FBI2_TOCAR", 0, 0, 0, 1, 0);
												}
												else
												{
													bLocal_402 = func_429("FBI2_TOCAR2", 0, 0, 0, 1, 0);
												}
											}
										}
									}
								}
							}
						}
						if (!Global_3)
						{
							if (bLocal_381 && !iLocal_528)
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[1], 0) && PED::IS_PED_IN_VEHICLE(iLocal_153, iLocal_199[1], 0))
								{
									if (!iLocal_611)
									{
										TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
										iLocal_611 = 1;
									}
									if (iLocal_387)
									{
										if (bLocal_567 || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153, 15f, 15f, 4f, 0, 1, 0))
										{
											if (func_900())
											{
												iLocal_387 = 0;
											}
										}
									}
									switch (iLocal_662)
									{
										case 0:
											if ((iLocal_654 % 2) == 0)
											{
												sVar20 = "FBI2_B1AV1";
											}
											else
											{
												sVar20 = "FBI2_B2AV2";
											}
											if (func_429(sVar20, 0, 0, 0, 1, 0))
											{
												iLocal_662++;
												iLocal_387 = 0;
											}
											break;
										
										case 1:
											if ((!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[1]))
											{
												if (!iLocal_528)
												{
													if ((iLocal_654 % 2) == 0)
													{
														sVar20 = "FBI2_FCALL";
													}
													else
													{
														sVar20 = "FBI2_FCALL2";
													}
													if (GlobalFunc_10638(&uLocal_923, 1, "FBI2AUD", sVar20, 8, 1, 0, 0, 0))
													{
														iLocal_662++;
														iLocal_387 = 0;
													}
												}
											}
											break;
										
										case 2:
											if (!iLocal_404)
											{
												if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[1]))
												{
													iLocal_404 = 1;
												}
											}
											else if (!iLocal_528)
											{
												if ((iLocal_654 % 2) == 0)
												{
													sVar20 = "FBI2_B1BV1";
												}
												else
												{
													sVar20 = "FBI2_B2BV2";
												}
												if (func_429(sVar20, 0, 0, 0, 1, 0))
												{
													iLocal_662++;
													iLocal_387 = 0;
												}
											}
											break;
										
										case 3:
											break;
										}
									}
							}
							if (!iLocal_528)
							{
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(20), 50f, 50f, 50f, 0, 0, 0))
								{
									GlobalFunc_4935();
									iLocal_528 = 1;
								}
							}
						}
					}
					if (func_441())
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[1], 0) && PED::IS_PED_IN_VEHICLE(iLocal_153, iLocal_199[1], 0))
						{
							if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(5), 9f, 9f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(20), 9f, 9f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1381.351f, -2072.188f, 50.99826f, 10f, 10f, 2f, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1381.995f, -2058.4f, 50.99815f, 9f, 7f, 2f, 0, 1, 0))
							{
								if ((iLocal_34 > 0 && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[1])) && PED::IS_PED_SITTING_IN_VEHICLE(iLocal_153, iLocal_199[1]))
								{
									GlobalFunc_3001();
									GlobalFunc_4935();
									iLocal_657 = MISC::GET_GAME_TIMER();
									iLocal_380 = 1;
								}
							}
						}
					}
				}
			}
			else
			{
				GlobalFunc_3001();
				if (!iLocal_572)
				{
					if (!bLocal_376)
					{
						if (func_429("FBI2_MCS1_L2", 0, 0, 0, 1, 0))
						{
							iLocal_572 = 1;
							iLocal_783 = MISC::GET_GAME_TIMER();
						}
					}
				}
				else if (!iLocal_612)
				{
					if (MISC::GET_GAME_TIMER() >= iLocal_783 + 6000)
					{
						GlobalFunc_4935();
						iLocal_612 = 1;
					}
				}
				if (GlobalFunc_530(iLocal_199[1], 8f, 1, 1056964608, 0, 1) || bLocal_376)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 256);
						TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
					}
					else if (!iLocal_616)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 713668775) == 7)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), 1372.63f, -2073.262f, 50.99822f, 1f, -1, 5f, 1, 1193033728);
							iLocal_616 = 1;
							iLocal_786 = MISC::GET_GAME_TIMER();
						}
					}
					else if (MISC::GET_GAME_TIMER() <= iLocal_786 + 5000)
					{
						PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
						CAM::SET_GAMEPLAY_COORD_HINT(1373.1f, -2073.4f, 52.5f, -1, 2000, 2000, 0);
						CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.5f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(-0.8f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(-0.04f);
						CAM::SET_GAMEPLAY_HINT_FOV(30f);
						if (iLocal_785 < 0)
						{
							iLocal_785 = MISC::GET_GAME_TIMER();
						}
					}
					if (!PED::IS_PED_HEADTRACKING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63[2]))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_63[2], -1, 2048, 2);
					}
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_199[1], 0);
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
					if (!iLocal_579)
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[1], 0) && !PED::IS_PED_INJURED(iLocal_153))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_153, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
							TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iLocal_153, iLocal_199[1]);
							RECORDING::_0x293220DA1B46CEBC(5f, 5f, 4);
							iLocal_579 = 1;
						}
					}
					if ((!GlobalFunc_111() && MISC::GET_GAME_TIMER() >= iLocal_785 + 2000) && (iLocal_577 || bLocal_376))
					{
						if (func_441())
						{
							if (GlobalFunc_Has_Cutscene_Loaded())
							{
								iLocal_377 = 1;
							}
						}
					}
				}
			}
			if (!iLocal_380)
			{
				func_407(1, !bLocal_567, bLocal_567, 1);
			}
			if (!Global_3)
			{
				if (!bLocal_384)
				{
					if (iVar4 == 0)
					{
						if (iLocal_618)
						{
							if (AUDIO::GET_IS_PRELOADED_CONVERSATION_READY())
							{
								GlobalFunc_2207();
								bLocal_384 = true;
							}
							else
							{
								GlobalFunc_4935();
								iLocal_618 = 0;
							}
						}
						else
						{
							bLocal_384 = func_429("FBI2_OLDDOG", 0, 0, 0, 1, 0);
						}
					}
					else
					{
						bLocal_384 = true;
					}
				}
				else if (iVar4 == 0)
				{
					if (!bLocal_566)
					{
						bLocal_566 = func_429("FBI2_WALK", 0, 1, 0, 1, 0);
					}
				}
			}
		}
	}
	else
	{
		func_918();
	}
}

void func_918()//Position - 0x8B15A
{
	int iVar0;
	int iVar1;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_35)
	{
		case 0:
			iLocal_656 = MISC::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(iLocal_63[2]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_63[2], "Trevor", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_63[1]))
			{
				ENTITY::DETACH_ENTITY(iLocal_63[1], 1, 1);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_63[1], "Franklin", 1, 0, 0);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_153))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_153, "Dave_FBI", 1, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_164[0]))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_164[0], "FBI_Suit", 1, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_199[0]);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_199[0], "Main_Heli", 0, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_199[1], "Michaels_car", 1, 0, 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[2], 0))
			{
				ENTITY::FREEZE_ENTITY_POSITION(iLocal_199[2], 0);
				ENTITY::SET_CAN_CLIMB_ON_ENTITY(iLocal_199[2], 0);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_199[2], "Franklin_Bike", 1, 0, 0);
			}
			RECORDING::_0x48621C9FCA3EBD28(4);
			CUTSCENE::START_CUTSCENE(2048);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			iLocal_630 = 0;
			iLocal_35 = 1;
			break;
		
		case 1:
			if (!iLocal_379)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_376();
					CAM::STOP_GAMEPLAY_HINT(0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
					{
						VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_199[1], 0, 0, 0f);
					}
					GlobalFunc_2882(iLocal_199[1]);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_199[0], 1);
					}
					GlobalFunc_2882(iLocal_199[0]);
					if (!PED::IS_PED_INJURED(iLocal_63[1]))
					{
						TASK::TASK_CLEAR_LOOK_AT(iLocal_63[1]);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_153))
					{
						PED::DELETE_PED(&iLocal_153);
						func_768(3);
					}
					STREAMING::SET_VEHICLE_POPULATION_BUDGET(2);
					STREAMING::SET_PED_POPULATION_BUDGET(1);
					func_298(0);
					MISC::CLEAR_AREA(func_405(9), 20f, 1, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(func_405(9), 30f, 0);
					FIRE::STOP_FIRE_IN_RANGE(func_405(9), 30f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(func_405(9), 30f);
					if (bLocal_376)
					{
						CAM::DO_SCREEN_FADE_IN(800);
						bLocal_376 = false;
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_379 = 1;
				}
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(iLocal_199[0]);
			}
			if (!iLocal_394)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 0)
				{
					iLocal_394 = 1;
				}
			}
			if (!iLocal_395)
			{
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) >= 98000f)
				{
					iLocal_395 = 1;
				}
			}
			if (!iLocal_396)
			{
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) >= 112000f)
				{
					iLocal_396 = 1;
				}
			}
			if (!iLocal_405)
			{
				if (IntToFloat(CUTSCENE::GET_CUTSCENE_TIME()) >= 74975f)
				{
					func_746(PLAYER::PLAYER_PED_ID(), 0, 2);
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					iLocal_405 = 1;
				}
			}
			if (!iLocal_406)
			{
				if (CUTSCENE::GET_CUTSCENE_TIME() >= 15423)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[2]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_227[2]));
					}
					func_768(18);
					iLocal_406 = 1;
				}
			}
			if (!iLocal_630)
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - 300))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_630 = 1;
					}
				}
			}
			iVar0 = func_404();
			iVar1 = func_625();
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0) && !PED::IS_PED_INJURED(iVar0)) && !PED::IS_PED_INJURED(iVar1))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					PED::SET_PED_INTO_VEHICLE(iVar0, iLocal_199[0], -1);
					GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					PED::SET_PED_INTO_VEHICLE(iVar1, iLocal_199[0], 1);
					func_746(PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Main_heli", 0))
				{
					func_15();
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[2]))
					{
						VEHICLE::DELETE_VEHICLE(&(iLocal_227[2]));
					}
					GlobalFunc_9019(&iLocal_63, 2);
					GlobalFunc_10980(&iLocal_63, 1, 1, 0);
					func_301(1);
				}
			}
			if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					bLocal_378 = true;
				}
				RECORDING::_0x81CBAE94390F9F89();
				RECORDING::_0x293220DA1B46CEBC(0f, 10f, 3);
				func_919();
			}
			break;
		
		case 2:
			break;
	}
}

void func_919()//Position - 0x8B57E
{
	if (bLocal_378)
	{
	}
	func_746(iLocal_63[0], 0, 2);
	if (Global_3)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_199[1], 1, 1);
		}
	}
	func_923(1);
	func_920(1);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		func_379(2, 1);
		func_379(0, 1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0], -1);
		}
		if (!PED::IS_PED_INJURED(iLocal_63[0]))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_63[0], iLocal_199[0], 1);
			func_749();
		}
		func_15();
	}
	if (bLocal_378)
	{
	}
	func_4(0, 1, 1, 1, 0, 1);
	func_627(2, 0, 1, 0, 0, 1, 1, 1);
}

void func_920(bool bParam0)//Position - 0x8B632
{
	func_922(iLocal_153, bParam0);
	func_921(iLocal_199[1], bParam0);
	GlobalFunc_200(&uLocal_923, 4);
	func_768(3);
}

void func_921(int iParam0, bool bParam1)//Position - 0x8B65A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!bParam1)
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
		}
		else
		{
			VEHICLE::DELETE_VEHICLE(&iParam0);
		}
	}
}

void func_922(int iParam0, bool bParam1)//Position - 0x8B680
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!bParam1)
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam0);
		}
		else
		{
			PED::DELETE_PED(&iParam0);
		}
	}
}

void func_923(bool bParam0)//Position - 0x8B6A6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_922(iLocal_164[iVar0], bParam0);
		iVar0++;
	}
	func_921(iLocal_208, bParam0);
	func_768(11);
	func_768(12);
	func_768(17);
}





void func_928()//Position - 0x8B919
{
	func_606(1);
	func_748(2, 1, func_405(9), 137.37f, 0, -1);
	func_748(1, 1, 1374.3f, -2076.91f, 51f, 0f, 0, -1);
}

void func_929()//Position - 0x8B951
{
	func_767(0, func_405(5), -15.08f, 1, 1, 0, 0);
	func_767(2, func_405(12), -78.9f, 1, 1, 0, 1);
	ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_199[0], 1);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_199[0], 3);
}

void func_930()//Position - 0x8B994
{
	int iVar0;
	
	if (((PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), 112.4255f, -697.9334f, 38.0273f, 180.0502f, -654.663f, 53.14103f, 0, 1) || FIRE::IS_EXPLOSION_IN_AREA(-1, 112.4255f, -697.9334f, 38.0273f, 180.0502f, -654.663f, 53.14103f)) || (iLocal_30 == 0 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)) || (!bLocal_567 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0))
	{
		func_612(23);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar0) >= 1f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_242[0]))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, uLocal_242[0]))
					{
						func_612(23);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_242[2]))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, uLocal_242[2]))
					{
						func_612(23);
					}
				}
			}
		}
	}
}

void func_931()//Position - 0x8BA93
{
	if (!iLocal_400)
	{
		uLocal_719 = PED::CREATE_SYNCHRONIZED_SCENE(148.31f, -677.19f, 41.02f, 0f, 0f, 0f, 2);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_719, 1);
		if (!PED::IS_PED_INJURED(iLocal_154))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_154, uLocal_719, func_507(16), "FBI_2_INT_LeadInOut_loop_steve", 8f, -8f, 5, iLocal_150, 1148846080, 0);
		}
		if (!PED::IS_PED_INJURED(iLocal_155))
		{
			TASK::TASK_SYNCHRONIZED_SCENE(iLocal_155, uLocal_719, func_507(16), "FBI_2_INT_LeadInOut_loop_ANDREAS", 2f, -8f, 5, iLocal_150, 1148846080, 0);
		}
		iLocal_763 = MISC::GET_GAME_TIMER();
		iLocal_400 = 1;
	}
}

void func_932(int iParam0, int iParam1, int iParam2)//Position - 0x8BB2D
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (*iParam1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (*iParam2 == 0)
				{
					*iParam2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(200, 800));
				}
				else if (MISC::GET_GAME_TIMER() >= *iParam2)
				{
					func_933(iParam0, 0, iParam1, iParam2);
				}
			}
		}
		else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (*iParam2 == 0)
			{
				*iParam2 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(1000, 4000));
			}
			else if (MISC::GET_GAME_TIMER() >= *iParam2)
			{
				func_933(iParam0, 1, iParam1, iParam2);
			}
		}
	}
}

void func_933(int iParam0, bool bParam1, var uParam2, var uParam3)//Position - 0x8BBC1
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_USING_ACTION_MODE(iParam0, 1, -1, "DEFAULT_ACTION");
			*uParam3 = 0;
			*uParam2 = 1;
		}
		else
		{
			PED::SET_PED_USING_ACTION_MODE(iParam0, 0, -1, 0);
			*uParam3 = 0;
			*uParam2 = 0;
		}
	}
}

void func_934()//Position - 0x8BC01
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	bool bVar7;
	
	if (!iLocal_377)
	{
		func_724(0, 0);
		if (!bLocal_381)
		{
			bLocal_381 = func_421("SG_GDAVE", 1, 1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_154))
		{
			if (PED::IS_PED_INJURED(iLocal_154))
			{
				func_612(21);
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_154, PLAYER::PLAYER_PED_ID(), 1))
			{
				func_612(23);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
		{
			if (PED::IS_PED_INJURED(iLocal_155))
			{
				func_612(22);
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), 1))
			{
				func_612(23);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_153))
		{
			if (PED::IS_PED_INJURED(iLocal_153))
			{
				func_612(3);
			}
			else
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_153, 0) > 100f)
				{
					func_612(4);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_153, PLAYER::PLAYER_PED_ID(), 1))
				{
					func_612(23);
				}
			}
		}
		func_930();
		if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
		{
			if (MISC::GET_GAME_TIMER() <= iLocal_686 + 1300)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
		}
		Var0 = { 149.3256f, -678.1571f, 41.02899f };
		Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		fVar6 = SYSTEM::VDIST2(Var3, Var0);
		bVar7 = false;
		if (fVar6 < (14f * 14f))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (fVar6 < 64f)
				{
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
					if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
					{
						CAM::SET_GAMEPLAY_COORD_HINT(147.9f, -676f, 42.2f, -1, 2000, 2000, 0);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.02f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(-0.01f);
					}
					else
					{
						CAM::SET_GAMEPLAY_COORD_HINT(148.6f, -677f, 42.3f, -1, 2000, 2000, 0);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0f);
						CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
					}
					CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.4f);
					CAM::SET_GAMEPLAY_HINT_FOV(40f);
					bVar7 = true;
				}
			}
		}
		if (!bVar7)
		{
			CAM::STOP_GAMEPLAY_HINT(0);
		}
		if (!iLocal_592)
		{
			func_403("fbi_2_int", 149.3256f, -678.1571f, 41.02899f, 28f, 40f);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (!PED::IS_PED_INJURED(iLocal_153))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Dave_FBI", iLocal_153, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_154))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Steve_FBI", iLocal_154, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_155))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Andreas_Sanchez", iLocal_155, 0);
				}
			}
			if (fVar6 < 81f)
			{
				if (Var3.f_2 > 41f && Var3.f_2 < 44f)
				{
					uLocal_687 = PED::CREATE_SYNCHRONIZED_SCENE(148.31f, -677.19f, 41.02f, 0f, 0f, 0f, 2);
					if (!PED::IS_PED_INJURED(iLocal_153))
					{
						TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_153, -1, 2048, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_153, uLocal_687, "MISSFBI2@LeadInOut", "FBI_2_INT_LeadIn_action_DaveN", 8f, -8f, 5, func_943(), 1148846080, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_154))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_154, uLocal_687, "MISSFBI2@LeadInOut", "FBI_2_INT_LeadIn_action_Steve", 8f, -8f, 5, func_943(), 1148846080, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_154, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
					}
					if (!PED::IS_PED_INJURED(iLocal_155))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_155, uLocal_687, "MISSFBI2@LeadInOut", "FBI_2_INT_LeadIn_action_Andreas", 8f, -8f, 5, func_943(), 1148846080, 0);
						TASK::TASK_LOOK_AT_ENTITY(iLocal_155, PLAYER::PLAYER_PED_ID(), -1, 2048, 4);
					}
					iLocal_592 = 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
				{
					if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10f, 1, 1056964608, 0, 1))
					{
						if (!iLocal_594)
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
							iLocal_594 = 1;
						}
					}
				}
			}
			if (!bLocal_593)
			{
				if (!PED::IS_PED_INJURED(iLocal_153))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_687))
					{
						if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.25f)
						{
							bLocal_593 = func_429("FBI2_INTL", 1, 0, 0, 1, 0);
						}
					}
				}
			}
			if ((GlobalFunc_552(1, 0, 1) && !GlobalFunc_111()) && func_441())
			{
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_687))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(uLocal_687) >= 0.8f)
					{
						if (GlobalFunc_Has_Cutscene_Loaded())
						{
							iLocal_377 = 1;
						}
					}
				}
				else if (GlobalFunc_Has_Cutscene_Loaded())
				{
					iLocal_377 = 1;
				}
			}
		}
	}
	else
	{
		func_935();
	}
}

void func_935()//Position - 0x8C061
{
	int iVar0;
	bool bVar1;
	
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
	switch (iLocal_35)
	{
		case 0:
			iLocal_656 = MISC::GET_GAME_TIMER();
			func_724(1, 1);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
			if (!PED::IS_PED_INJURED(iLocal_153))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_153);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_153, "Dave_FBI", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_154))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_154);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_154, "Steve_FBI", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_155))
			{
				TASK::TASK_CLEAR_LOOK_AT(iLocal_155);
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_155, "Andreas_Sanchez", 0, 0, 0);
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
			}
			STREAMING::SET_VEHICLE_POPULATION_BUDGET(0);
			STREAMING::SET_PED_POPULATION_BUDGET(0);
			CUTSCENE::START_CUTSCENE(0);
			CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
			RECORDING::_0x48621C9FCA3EBD28(4);
			iLocal_397 = 0;
			iLocal_398 = 0;
			iLocal_35 = 1;
			break;
		
		case 1:
			if (!iLocal_379)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
					func_731();
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_252[iVar0]))
						{
							OBJECT::DELETE_OBJECT(&(uLocal_252[iVar0]));
						}
						iVar0++;
					}
					GlobalFunc_9805(143.198f, -672.684f, 40.527f, 147.88f, -682.373f, 45.027f, 11f, 137.951f, -687.184f, 41.028f, -73.6f, GlobalFunc_625(), 1, 0, 1, 0, 0);
					GlobalFunc_9805(82.758f, -675.976f, 42.111f, 86.172f, -666.734f, 44.785f, 10f, 78.49797f, -686.1224f, 43.10218f, -23f, GlobalFunc_625(), 1, 0, 1, 0, 0);
					MISC::CLEAR_AREA(148.2744f, -677.2391f, 41.84525f, 3.5f, 1, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(148.2744f, -677.2391f, 41.84525f, 20f, 0);
					FIRE::STOP_FIRE_IN_RANGE(148.2744f, -677.2391f, 41.84525f, 20f);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(148.2744f, -677.2391f, 41.84525f, 20f);
					GlobalFunc_3001();
					func_300();
					func_376();
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					iLocal_379 = 1;
				}
			}
			PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
			if (!iLocal_595)
			{
				if (iLocal_33 == 2)
				{
					if (!iLocal_596)
					{
						func_729();
						iLocal_596 = 1;
					}
					else
					{
						func_747(1);
						iLocal_595 = 1;
					}
				}
			}
			if (!iLocal_618)
			{
				if (MISC::GET_GAME_TIMER() >= 1000)
				{
					GlobalFunc_10691(&uLocal_923, "FBI2AUD", "FBI2_OLDDOG", 7, 0, 0, 0, 0);
					iLocal_618 = 1;
				}
			}
			if (((CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("prop_chair_01a", 0) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("prop_chair_01a^1", 0)) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("prop_chair_01a^2", 0)) && CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("prop_chair_01a^3", 0))
			{
			}
			if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				bLocal_378 = true;
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_405(1), 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 135.8f);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() != 4)
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 1, 0);
					PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
				else
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), 1063765679, 0, 1, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
				}
				bLocal_606 = true;
			}
			else if (bLocal_606)
			{
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dave_FBI", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_153))
				{
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Steve_FBI", 0))
			{
				func_723(0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Andreas_Sanchez", 0))
			{
				func_722(0);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				bVar1 = bLocal_378;
				if (bVar1)
				{
					iLocal_618 = 0;
				}
				func_4(0, 1, 0, 0, 0, 0);
				func_627(1, bVar1, 0, 1, 0, 0, 1, 1);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				RECORDING::_0x81CBAE94390F9F89();
			}
			break;
		
		case 2:
			break;
	}
}








int func_943()//Position - 0x8CD59
{
	return 82;
}


void func_945()//Position - 0x8CDCF
{
	bool bVar0;
	int iVar1;
	
	func_950();
	switch (iLocal_29)
	{
		case 0:
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_11318(PLAYER::PLAYER_PED_ID());
				}
				switch (iLocal_30)
				{
					case 3:
					case 4:
					case 5:
					case 6:
						switch (GlobalFunc_8315())
						{
							case 0:
								bVar0 = true;
								if (iLocal_30 >= 5)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0], 0))
										{
											iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_199[0], -1);
											if (ENTITY::DOES_ENTITY_EXIST(iVar1))
											{
												PED::DELETE_PED(&iVar1);
											}
											PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_199[0], -1);
											bVar0 = false;
										}
									}
								}
								if (bVar0)
								{
									GlobalFunc_5129(111.0554f, -612.0361f, 43.22037f, 53.7f);
									GlobalFunc_5166(107.17f, -607.66f, 43.81f, -20f);
								}
								break;
							
							case 1:
								GlobalFunc_5129(-111.5907f, -609.5517f, 35.2829f, -127f);
								GlobalFunc_5166(-107.15f, -611.71f, 35.76f, 160.2f);
								break;
						}
						break;
				}
				func_295();
				if (Global_3)
				{
					func_385();
				}
				iLocal_375 = 1;
				func_996();
			}
			break;
	}
}





void func_950()//Position - 0x8CFA1
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_377)
	{
		iVar0 = 0;
		while (iVar0 < iLocal_63)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[iVar0]))
			{
				if (PED::IS_PED_INJURED(iLocal_63[iVar0]))
				{
					iVar1 = iVar0;
					if (iVar1 != GlobalFunc_8315())
					{
						switch (iVar1)
						{
							case 0:
								if (!PED::IS_PED_INJURED(iLocal_156))
								{
									if (ENTITY::IS_ENTITY_ATTACHED(iLocal_156) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_156, 0))
									{
										ENTITY::DETACH_ENTITY(iLocal_156, 1, 1);
									}
								}
								func_612(1);
								break;
							
							case 2:
								func_612(2);
								break;
							
							case 1:
								if ((iLocal_30 == 1 || iLocal_30 == 5) || iLocal_30 == 6)
								{
									func_612(0);
								}
								break;
							}
						}
					}
			}
			iVar0++;
		}
		if (iLocal_30 == 1)
		{
			if (PED::IS_PED_INJURED(iLocal_153))
			{
				func_612(3);
			}
			else if (!bLocal_567)
			{
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_153, 0) > 100f)
				{
					if (!bLocal_376)
					{
						func_612(4);
					}
				}
			}
		}
		if (iLocal_30 > 3 || iLocal_416)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_156))
			{
				if (PED::IS_PED_INJURED(iLocal_156))
				{
					func_612(5);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_199[0]))
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
			{
				func_420();
				func_612(6);
			}
			else if ((iLocal_30 == 2 || iLocal_30 == 6) || (iLocal_30 == 5 && MISC::GET_GAME_TIMER() >= iLocal_686 + 3000))
			{
				if (GlobalFunc_8315() == 2)
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_199[0], 1) > 100f)
					{
						func_612(9);
					}
					if ((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_199[0], 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_199[0], 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_199[0], 0, 7000))
					{
						func_420();
						func_612(17);
					}
				}
			}
		}
		if (iLocal_30 == 1)
		{
			if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
			{
				func_418();
				func_612(7);
			}
			else
			{
				if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_199[1], 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_199[1], 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_199[1], 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_199[1], 0, 7000))
				{
					func_418();
					func_612(16);
				}
				if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_199[1], 0) > 100f)
				{
					func_612(8);
				}
			}
		}
	}
}

void func_951(bool bParam0)//Position - 0x8D20B
{
	int iVar0;
	
	switch (iLocal_33)
	{
		case 0:
			if (func_952() || bParam0)
			{
				if (bParam0)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = iLocal_30 + 1;
				}
				func_821(iVar0, 0, 1);
				func_816(iVar0, 0, 1);
				func_813(iVar0, 0, 1);
				func_808(iVar0, 0, 1);
				func_801(iVar0, 0, 1);
				func_794(iVar0, 0, 1);
				func_788(iVar0, 0, 1);
				func_787(0);
				iLocal_33 = 1;
			}
			break;
		
		case 1:
			if (((((((func_607() && func_817()) && func_814()) && func_809()) && func_802()) && func_795()) && func_789()) && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
			{
				iLocal_33 = 2;
			}
			break;
	}
}

int func_952()//Position - 0x8D2D6
{
	switch (iLocal_30)
	{
		case 0:
			if (iLocal_377 && CUTSCENE::GET_CUTSCENE_TIME() >= 110000)
			{
				return 1;
			}
			break;
		
		case 1:
			if (iLocal_377)
			{
				return 1;
			}
			break;
		
		case 2:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), func_405(8), 120f, 120f, 120f, 0, 1, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if (iLocal_377 && iLocal_141 >= 1)
			{
				return 1;
			}
			break;
		
		case 4:
			if (iLocal_38 >= 3)
			{
				return 1;
			}
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 0;
			break;
	}
	return 0;
}

int func_953()//Position - 0x8D393
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	
	switch (iLocal_28)
	{
		case 0:
			func_994(1);
			GlobalFunc_3002(1);
			PED::SET_GROUP_FORMATION_SPACING(GlobalFunc_468(), 3.5f, -1082130432, -1082130432);
			func_991(0);
			Global_SAVE_DATA.STUNT_JUMPS_SAVED_STRUCT.CHASE_HELP_TEXT_DISPLAYED_MI = 3;
			if (!GlobalFunc_Is_Mission_Retry())
			{
				iLocal_654 = 0;
			}
			else
			{
				iLocal_654 = Global_SAVE_DATA.FLOW_STRUCT.MF_MISSION_ARRAY[30 /*6*/].f_1 + 1;
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
			}
			OBJECT::ADD_DOOR_TO_SYSTEM(-1680125890, joaat("v_ilev_fib_door1"), 119.4f, -618.92f, 206.2f, 1, 1, 0);
			OBJECT::ADD_DOOR_TO_SYSTEM(-1355829283, joaat("v_ilev_fib_door1"), 123.22f, -626.67f, 206.2f, 1, 1, 0);
			OBJECT::ADD_DOOR_TO_SYSTEM(359660636, joaat("v_ilev_fib_door1"), 121.22f, -626.31f, 206.2f, 1, 1, 0);
			if (!Global_3)
			{
				uLocal_913 = PED::ADD_SCENARIO_BLOCKING_AREA(1321.17f, -2143.95f, -10f, 1468.61f, -2001.32f, 110f, 0, 1, 1, 1);
			}
			uLocal_914 = PED::ADD_SCENARIO_BLOCKING_AREA(145.69f, -678.7f, -10f, 153.69f, -671.3f, 110f, 0, 1, 1, 1);
			uLocal_915 = PED::ADD_SCENARIO_BLOCKING_AREA(116.3853f, -685.838f, -10.04556f, 123.6963f, -680.5003f, 50.02924f, 0, 1, 1, 1);
			iLocal_28 = 1;
			break;
		
		case 1:
			if (!GlobalFunc_Is_Mission_Retry() && !Global_3)
			{
				GlobalFunc_7206(1, 1, 0, 0);
				iLocal_28 = 2;
			}
			else
			{
				GlobalFunc_7206(1, 1, 1, 0);
				func_982();
			}
			break;
		
		case 2:
			func_4(1, 1, 1, 1, 1, 1);
			GlobalFunc_3001();
			func_377(4);
			func_377(3);
			func_377(5);
			func_377(26);
			func_680(16);
			func_787(0);
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 12f);
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 69.20226f, -748.9207f, 43.22582f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -86.6f);
				PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 1, 1, 0);
				PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), 85.37592f, -747.9593f, 44.75402f, 1f, 20000, 1193033728, 1056964608);
				PLAYER::SET_PLAYER_CLOTH_PIN_FRAMES(PLAYER::PLAYER_ID(), 1);
			}
			CLOCK::PAUSE_CLOCK(1);
			GlobalFunc_9805(66.39131f, -749.3117f, 42.22663f, 86.92158f, -746.6459f, 45.50754f, 5f, func_405(44), -18.98f, GlobalFunc_625(), 1, 0, 1, 0, 0);
			GlobalFunc_9805(60.45767f, -749.6528f, 43.22444f, 57.86939f, -756.6257f, 48.21973f, 6.56f, func_405(44), -18.98f, GlobalFunc_625(), 1, 0, 1, 0, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(69.40771f, -748.5432f, 43.22363f, 20f, 0);
			FIRE::STOP_FIRE_IN_RANGE(69.40771f, -748.5432f, 43.22363f, 20f);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(69.40771f, -748.5432f, 43.22363f, 20f);
			func_883(12, 1, 8000);
			if (!GlobalFunc_5183(Global_81155[30 /*34*/].f_13, Global_81155[30 /*34*/].f_14))
			{
				bLocal_631 = true;
				uLocal_1113 = STREAMING::STREAMVOL_CREATE_FRUSTUM(50.3f, -734f, 230f, GlobalFunc_590(18.2f, 0f, -65.5f), 3000f, 12, 127);
			}
			else
			{
				bLocal_631 = false;
				func_979();
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			iLocal_630 = 0;
			iLocal_656 = MISC::GET_GAME_TIMER();
			iLocal_28 = 3;
			break;
		
		case 3:
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			bVar0 = false;
			if (func_607() && func_814())
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_735(0);
				MISC::CLEAR_AREA_OF_OBJECTS(145.7741f, -676.7224f, 41.02924f, 30f, 2);
			}
			func_724(0, 0);
			if (!iLocal_630)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					if (!bLocal_631)
					{
						iVar1 = 8330;
					}
					else if (iLocal_591)
					{
						iVar1 = 6230;
					}
					else
					{
						iVar1 = 999999;
					}
					if (MISC::GET_GAME_TIMER() >= (iLocal_656 + iVar1))
					{
						if (bVar0)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						}
						iLocal_630 = 1;
					}
				}
			}
			if (!iLocal_591)
			{
				if (!bLocal_378)
				{
					if (GlobalFunc_75() && MISC::GET_GAME_TIMER() >= iLocal_655 + 1000)
					{
						CAM::DO_SCREEN_FADE_OUT(800);
						while (!CAM::IS_SCREEN_FADED_OUT())
						{
							SYSTEM::WAIT(0);
						}
						iLocal_784 = MISC::GET_GAME_TIMER();
						bLocal_378 = true;
					}
				}
				if ((MISC::GET_GAME_TIMER() >= iLocal_656 + 8600 || bLocal_378) && bVar0)
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_405(43), 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), -65.4f);
					if (bLocal_378)
					{
						while (MISC::GET_GAME_TIMER() <= iLocal_784 + 5000 && !STREAMING::STREAMVOL_HAS_LOADED(uLocal_1113))
						{
							SYSTEM::WAIT(0);
						}
					}
					iLocal_656 = MISC::GET_GAME_TIMER();
					iLocal_591 = 1;
				}
			}
			else
			{
				bVar2 = true;
				if (func_955(30, &Local_1089, 0, 1, 0, 0, 0))
				{
					if ((MISC::GET_GAME_TIMER() >= iLocal_656 + 6500 || !iLocal_597) || CAM::IS_SCREEN_FADED_OUT())
					{
						CLOCK::PAUSE_CLOCK(0);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							iLocal_784 = MISC::GET_GAME_TIMER();
							while (MISC::GET_GAME_TIMER() <= iLocal_784 + 5000 && !STREAMING::STREAMVOL_HAS_LOADED(uLocal_1113))
							{
								SYSTEM::WAIT(0);
							}
						}
						GlobalFunc_562(30);
						func_982();
						bVar2 = false;
					}
				}
				else if (!iLocal_597)
				{
					if (CAM::DOES_CAM_EXIST(Local_1089.f_4))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							CAM::DO_SCREEN_FADE_IN(800);
						}
						func_979();
						iLocal_597 = 1;
					}
				}
				if (bVar2)
				{
					GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(0.6f);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(0);
					GRAPHICS::_0x0AE73D8DF3A762B2(0);
				}
				else
				{
					GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
					GRAPHICS::_0x0AE73D8DF3A762B2(1);
					GRAPHICS::CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(1);
				}
			}
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}


bool func_955(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8D9B6
{
	struct<2> Var0;
	
	GlobalFunc_9026(iParam0, &Var0);
	GlobalFunc_741(iParam0, &Var0, &(Var0.f_1));
	return func_956(uParam1, &Var0, bParam2, bParam3, bParam4, bParam5, bParam6);
}

int func_956(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x8D9E4
{
	int iVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	
	uParam0->f_7 = *uParam1;
	uParam0->f_8 = uParam1->f_1;
	if ((GlobalFunc_Is_Mission_Repeat_Or_Benchmark(0) && !bParam2) && !bParam4)
	{
		if (uParam0->f_5)
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_7, 0, 0);
		}
		else
		{
			CLOCK::SET_CLOCK_TIME(uParam0->f_8, 0, 0);
		}
		return 1;
	}
	if (uParam0->f_2 == 0)
	{
		if (uParam0->f_7 != -1 && uParam0->f_8 != -1)
		{
			if (bParam2 || !GlobalFunc_5183(uParam0->f_8, uParam0->f_7))
			{
				if (AUDIO::REQUEST_AMBIENT_AUDIO_BANK("TIME_LAPSE", 0))
				{
					uParam0->f_6 = 0;
					uParam0->f_2 = 1;
				}
			}
			else
			{
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else
		{
			uParam0->f_2 = -1;
			return 1;
		}
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	if (uParam0->f_2 == 1)
	{
		if (bParam2)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar0, 0);
				}
			}
			fVar1 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar1, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar1);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar1);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else if (!GlobalFunc_5183(uParam0->f_7, uParam0->f_8))
		{
			if (uParam0->f_5)
			{
				CAM::DESTROY_CAM(uParam0->f_4, 0);
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				if (uParam1->f_17 < 0)
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				}
				else
				{
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				}
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				if (!bParam6)
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
					}
					iVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar2))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar2, 1, 0);
						}
						ENTITY::SET_ENTITY_VISIBLE(iVar2, 0);
					}
				}
				fVar3 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
				INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
				MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar3, 0);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar3);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar3);
				if (bParam3)
				{
					MISC::CLEAR_AREA(uParam1->f_2, 5000f, 1, 1, 0, 0);
				}
				GlobalFunc_7641(&(uParam0->f_1), 0, 0, 8, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
				GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
				uParam0->f_2 = 2;
			}
			else
			{
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				uParam0->f_2 = -1;
				return 1;
			}
		}
		else if (!uParam0->f_5)
		{
			CAM::DESTROY_CAM(uParam0->f_4, 0);
			uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
			CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			if (uParam1->f_17 < 0)
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
			}
			else
			{
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
			}
			CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
			CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
			CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
			if (!bParam6)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 0);
				}
				iVar4 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar4))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar4))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar4, 1, 0);
					}
					ENTITY::SET_ENTITY_VISIBLE(iVar4, 0);
				}
			}
			fVar5 = CAM::GET_CAM_FAR_CLIP(uParam0->f_4);
			INTERIOR::CLEAR_ROOM_FOR_GAME_VIEWPORT();
			MISC::CLEAR_AREA_OF_COPS(uParam1->f_2, fVar5, 0);
			GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam1->f_2, fVar5);
			GRAPHICS::REMOVE_DECALS_IN_RANGE(uParam1->f_2, fVar5);
			if (bParam3)
			{
				MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
			}
			GlobalFunc_7641(&(uParam0->f_1), 0, 0, 0, CLOCK::GET_CLOCK_DAY_OF_MONTH(), CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR());
			GlobalFunc_9025(uParam0, 1, 0, 2000, 1, 1, 0, 1);
			uParam0->f_2 = 2;
		}
		else
		{
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			uParam0->f_2 = -1;
			return 1;
		}
	}
	if (uParam0->f_2 == 2)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (!uParam0->f_5)
		{
			if (GlobalFunc_9196(uParam0->f_8, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
			{
				if (uParam1->f_17 < 0)
				{
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 3;
				}
				else
				{
					uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
					CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
					CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
					CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
					CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
					uParam0->f_9 = MISC::GET_GAME_TIMER();
					uParam0->f_2 = 22;
				}
			}
		}
		else if (GlobalFunc_9196(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, -1082130432, 0, 1, 1065353216))
		{
			if (uParam1->f_17 < 0)
			{
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 3;
			}
			else
			{
				uParam0->f_4 = CAM::CREATE_CAM("DEFAULT_SPLINE_CAMERA", 0);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_2, uParam1->f_5, uParam1->f_15, 3, 2);
				CAM::ADD_CAM_SPLINE_NODE(uParam0->f_4, uParam1->f_8, uParam1->f_11, uParam1->f_15, 3, 2);
				CAM::SET_CAM_FOV(uParam0->f_4, uParam1->f_14);
				CAM::SET_CAM_SPLINE_SMOOTHING_STYLE(uParam0->f_4, 3);
				CAM::SET_CAM_ACTIVE(uParam0->f_4, 1);
				uParam0->f_9 = MISC::GET_GAME_TIMER();
				uParam0->f_2 = 22;
			}
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				if (uParam0->f_3 != 0)
				{
					GlobalFunc_9196(uParam0->f_7, 0, &(uParam1->f_18), &(uParam1->f_22), uParam0, 1f, 0, 1, 1065353216);
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 22)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (CAM::DOES_CAM_EXIST(uParam0->f_4) && CAM::IS_CAM_INTERPOLATING(uParam0->f_4))
		{
		}
		else
		{
			uParam0->f_9 = MISC::GET_GAME_TIMER();
			uParam0->f_2 = 3;
		}
		if (!bParam5)
		{
			if (GlobalFunc_4926(1000) || uParam0->f_6)
			{
				uParam0->f_6 = 1;
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(250);
				}
				if (!CAM::IS_SCREEN_FADED_OUT())
				{
					HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					return 0;
				}
				uParam0->f_2 = 4;
			}
		}
	}
	if (uParam0->f_2 == 3)
	{
		if (bParam3)
		{
			MISC::CLEAR_AREA(uParam1->f_2, 5000f, 0, 1, 0, 0);
		}
		if (uParam0->f_9 + 1000 > MISC::GET_GAME_TIMER())
		{
			uParam0->f_2 = 4;
		}
	}
	if (uParam0->f_2 == 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_2 = -1;
		return 1;
	}
	if (uParam0->f_2 == -1)
	{
		return 1;
	}
	return 0;
}























void func_979()//Position - 0x8FBF0
{
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1113))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1113);
	}
	uLocal_1113 = STREAMING::STREAMVOL_CREATE_FRUSTUM(func_405(43), GlobalFunc_590(0f, 0f, -65.4f), 150f, 12, 127);
}



void func_982()//Position - 0x8FCE6
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("Agency Group", &iLocal_1088);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1113))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1113);
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_Is_Mission_Retry())
		{
			if (!CUTSCENE::WAS_CUTSCENE_SKIPPED())
			{
				if (Global_3)
				{
					GlobalFunc_5671(1, 1);
					GlobalFunc_5671(0, 1);
					GlobalFunc_5671(2, 1);
					GlobalFunc_585(115, 1);
					GlobalFunc_585(117, 1);
					GlobalFunc_585(116, 1);
					func_627(1, 1, 1, 1, 0, 1, 1, 0);
				}
				else
				{
					func_627(0, 0, 1, 0, 1, 1, 1, 1);
					func_4(0, 1, 1, 1, 1, 1);
				}
			}
			else
			{
				func_627(1, 1, 1, 1, 1, 0, 1, 1);
			}
		}
		else if (func_984())
		{
		}
		else
		{
			iVar0 = GlobalFunc_Get_Mission_Fail_Checkpoint();
			if (iVar0 == 0)
			{
				func_627(0, 1, 1, 1, 0, 1, 1, 1);
			}
			else
			{
				func_627(iVar0, 1, 1, 1, 0, 1, 1, 1);
			}
		}
	}
	iLocal_28 = 4;
}


int func_984()//Position - 0x8FDF5
{
	int iVar0;
	
	if (GlobalFunc_Is_Mission_Retry())
	{
		if (Global_84544 == 1)
		{
			switch (GlobalFunc_Get_Mission_Fail_Checkpoint())
			{
				case 0:
					iVar0 = 1;
					break;
				
				case 1:
					iVar0 = 1;
					bLocal_376 = true;
					break;
				
				case 2:
					iVar0 = 2;
					bLocal_376 = true;
					break;
				
				case 3:
					iVar0 = 3;
					bLocal_376 = true;
					break;
				
				case 4:
					iVar0 = 5;
					break;
				
				case 5:
					iVar0 = 6;
					break;
				
				case 6:
					iVar0 = 6;
					bLocal_376 = true;
					break;
			}
			func_985();
			if (!bLocal_376)
			{
				func_627(iVar0, 1, 1, 1, 0, 1, 1, 1);
			}
			else
			{
				func_627(iVar0, 1, 1, 1, 0, 1, 0, 1);
			}
			return 1;
		}
	}
	return 0;
}

void func_985()//Position - 0x8FEA9
{
	func_713(&Local_816, 0, joaat("weapon_unarmed"), 1, 1, 1);
	GlobalFunc_4948(&uLocal_1101, 0, 0);
	fLocal_633 = 0.5f;
	if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		if (!WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
		{
			if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
		}
	}
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	MISC::SET_TIME_SCALE(1f);
	CLOCK::PAUSE_CLOCK(0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	VEHICLE::SET_FAR_DRAW_VEHICLES(0);
	GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
	GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(1f);
	GRAPHICS::CASCADE_SHADOWS_SET_AIRCRAFT_MODE(0);
	GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1f);
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
	GlobalFunc_8380(0, 1, 1, 0);
	GlobalFunc_7632(0);
	PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
	func_986();
}

void func_986()//Position - 0x8FF7C
{
	int iVar0;
	
	CAM::STOP_GAMEPLAY_HINT(0);
	func_713(&Local_816, 0, joaat("weapon_unarmed"), 1, 1, 1);
	GlobalFunc_605(&Local_816);
	GRAPHICS::_SET_HIDOF_ENV_BLUR_PARAMS(0, 1, 0f, 0f, 0f, 0f);
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1113))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1113);
	}
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_919))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_919);
	}
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_920))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_920);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::RESET_PED_IN_VEHICLE_CONTEXT(PLAYER::PLAYER_PED_ID());
		PED::CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(PLAYER::PLAYER_PED_ID());
		PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), 0);
		func_988();
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
			{
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
			}
		}
	}
	GlobalFunc_860();
	AUDIO::OVERRIDE_PLAYER_GROUND_MATERIAL(MISC::GET_HASH_KEY("AM_BASE_GLASS_STRONG"), 0);
	iLocal_416 = 0;
	GlobalFunc_2657();
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	func_678(0);
	func_297();
	AUDIO::STOP_SOUND(iLocal_733);
	AUDIO::STOP_SOUND(uLocal_734);
	AUDIO::STOP_SOUND(iLocal_735);
	AUDIO::STOP_SOUND(iLocal_736);
	AUDIO::STOP_SOUND(iLocal_737);
	iLocal_63.f_18[0] = 0;
	iLocal_63.f_18[1] = 0;
	iLocal_63.f_18[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_63[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_153))
	{
		PED::DELETE_PED(&iLocal_153);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_154))
	{
		PED::DELETE_PED(&iLocal_154);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_155))
	{
		PED::DELETE_PED(&iLocal_155);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_156))
	{
		PED::DELETE_PED(&iLocal_156);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_157))
	{
		PED::DELETE_PED(&iLocal_157);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_197))
	{
		PED::DELETE_PED(&iLocal_197);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_198))
	{
		PED::DELETE_PED(&iLocal_198);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_164[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_164[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_208))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_208);
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_203[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_203[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_227)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_227[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_231))
	{
		VEHICLE::DELETE_VEHICLE(&iLocal_231);
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_167[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_167[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_174[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_174[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_158[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_158[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_183[iVar0]))
		{
			PED::DELETE_PED(&(iLocal_183[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_199)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_199[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_199[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_209)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_209[iVar0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_209[iVar0]));
		}
		iVar0++;
	}
	SYSTEM::WAIT(0);
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
	{
		OBJECT::DELETE_OBJECT(&iLocal_232);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
	{
		OBJECT::DELETE_OBJECT(&iLocal_233);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_234))
	{
		OBJECT::DELETE_OBJECT(&iLocal_234);
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_239[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_239[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_235[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_235[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_242[iVar0]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_242[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_252[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uLocal_252[iVar0]));
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_250))
	{
		OBJECT::DELETE_OBJECT(&iLocal_250);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_251))
	{
		OBJECT::DELETE_OBJECT(&iLocal_251);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_289))
	{
		CAM::DESTROY_CAM(iLocal_289, 0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_291))
	{
		CAM::DESTROY_CAM(iLocal_291, 0);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_292))
	{
		CAM::DESTROY_CAM(iLocal_292, 0);
	}
	MISC::CLEAR_AREA(func_405(5), 10000f, 1, 0, 0, 0);
}


void func_988()//Position - 0x90431
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), 0);
		}
	}
}



void func_991(int iParam0)//Position - 0x904C3
{
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(76.37175f, -676.256f, 28.27041f, 93.24977f, -660.1494f, 53.22037f, iParam0, 1);
}



void func_994(int iParam0)//Position - 0x9050F
{
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_16(15), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_16(13), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_16(14), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_16(17), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_16(16), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_16(19), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_16(20), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("maverick"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("polmav"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("buzzard2"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cargobob"), iParam0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("annihilator"), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_16(3), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_16(4), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_16(5), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_16(10), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_16(9), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_16(8), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_16(6), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_16(11), iParam0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(func_16(12), iParam0);
}

char* func_995()//Position - 0x9060A
{
	return "M_FIB2";
}

void func_996()//Position - 0x90617
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	int iVar5;
	
	AUDIO::TRIGGER_MUSIC_EVENT("FIB2_DEATH_FAIL");
	GRAPHICS::_SET_HIDOF_ENV_BLUR_PARAMS(0, 1, 0f, 0f, 0f, 0f);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(80.15606f, -689.0754f, 40.2203f, 153.5127f, -671.0649f, 45.02924f, 0);
	GRAPHICS::_0x0AE73D8DF3A762B2(1);
	GlobalFunc_4956();
	GlobalFunc_3002(0);
	PHYSICS::ROPE_UNLOAD_TEXTURES();
	GlobalFunc_601(4, 0);
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	PAD::_RESET_INPUT_MAPPING_SCHEME();
	AUDIO::OVERRIDE_PLAYER_GROUND_MATERIAL(MISC::GET_HASH_KEY("AM_BASE_GLASS_STRONG"), 0);
	GRAPHICS::_0x5F6DF3D92271E8A1(0);
	CLOCK::PAUSE_CLOCK(0);
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_1113))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_1113);
	}
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_919))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_919);
	}
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_920))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_920);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
	func_297();
	GlobalFunc_7206(1, 1, 1, 0);
	GlobalFunc_4935();
	func_991(1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_913, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_914, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_915, 0);
	AUDIO::RELEASE_WEAPON_AUDIO();
	AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CIA_PS_WINDOW_UNBROKEN");
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-1680125890);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(-1355829283);
	OBJECT::REMOVE_DOOR_FROM_SYSTEM(359660636);
	if (fLocal_653 > 0f)
	{
		GRAPHICS::_0xB3C641F3630BF6DA(fLocal_653);
	}
	AUDIO::STOP_SOUND(iLocal_733);
	AUDIO::RELEASE_SOUND_ID(iLocal_733);
	AUDIO::STOP_SOUND(iLocal_734);
	AUDIO::RELEASE_SOUND_ID(iLocal_734);
	AUDIO::STOP_SOUND(iLocal_735);
	AUDIO::RELEASE_SOUND_ID(iLocal_735);
	AUDIO::STOP_SOUND(iLocal_736);
	AUDIO::RELEASE_SOUND_ID(iLocal_736);
	AUDIO::STOP_SOUND(iLocal_737);
	AUDIO::RELEASE_SOUND_ID(iLocal_737);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(func_797());
	func_3();
	iVar0 = func_622();
	iVar1 = func_624(4);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iVar0, iVar1, 0))
		{
			if (iLocal_562)
			{
				if (iLocal_758 > 0)
				{
					WEAPON::SET_PED_AMMO(iVar0, iVar1, iLocal_758);
				}
				else
				{
					WEAPON::REMOVE_WEAPON_FROM_PED(iVar0, iVar1);
				}
			}
			else
			{
				WEAPON::REMOVE_WEAPON_FROM_PED(iVar0, iVar1);
			}
		}
	}
	GlobalFunc_7700(iVar0, 0);
	GlobalFunc_7621(67, 0, 0, 1, 0);
	STREAMING::REMOVE_IPL("DT1_05_FIB_Reflection");
	GRAPHICS::CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(1f);
	GRAPHICS::CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(1f);
	GRAPHICS::CASCADE_SHADOWS_SET_AIRCRAFT_MODE(0);
	GRAPHICS::SET_PARTICLE_FX_BULLET_IMPACT_SCALE(1f);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), 1862763509);
		func_988();
	}
	func_998(&Local_816);
	if (PHYSICS::DOES_ROPE_EXIST(&uLocal_921))
	{
		PHYSICS::DELETE_ROPE(&uLocal_921);
	}
	if (PHYSICS::DOES_ROPE_EXIST(&uLocal_922))
	{
		PHYSICS::DELETE_ROPE(&uLocal_922);
	}
	CUTSCENE::REMOVE_CUTSCENE();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	VEHICLE::SET_FAR_DRAW_VEHICLES(0);
	STREAMING::SET_VEHICLE_POPULATION_BUDGET(3);
	STREAMING::SET_PED_POPULATION_BUDGET(3);
	if (iLocal_30 == 3)
	{
		if (iLocal_427)
		{
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(iLocal_167[2]))
				{
					TASK::TASK_AIM_GUN_AT_COORD(iLocal_167[2], 112.85f, -619.72f, 206.33f, -1, 0, 0);
				}
				if (!PED::IS_PED_INJURED(iLocal_156))
				{
					Var2 = { 0f, 0f, 1.05f };
					uLocal_687 = PED::CREATE_SYNCHRONIZED_SCENE(func_405(29) - Var2, 0f, 0f, -125.7f, 2);
					if (!PED::IS_PED_INJURED(iLocal_156))
					{
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_156, uLocal_687, func_507(18), "hostage_low_intro_mrk", 8f, -8f, 0, 0, 1148846080, 0);
					}
				}
			}
		}
	}
	if (iLocal_393)
	{
		if (INTERIOR::IS_INTERIOR_READY(iLocal_916))
		{
			INTERIOR::UNPIN_INTERIOR(iLocal_916);
		}
	}
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	func_678(0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(PLAYER::PLAYER_PED_ID(), 0);
		func_988();
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), 0);
		if (ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
		{
			if (!WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
			{
				if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == 0)
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 1);
				}
			}
		}
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_242[iVar5]))
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(uLocal_242[iVar5]));
		}
		iVar5++;
	}
	if (!PED::IS_PED_INJURED(iLocal_156))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iLocal_156))
		{
			if (PED::GET_VEHICLE_PED_IS_USING(iLocal_156) == 0)
			{
				ENTITY::DETACH_ENTITY(iLocal_156, 1, 1);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_153))
	{
		PED::REMOVE_PED_FROM_GROUP(iLocal_153);
	}
	if (iLocal_375)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_153))
		{
			PED::DELETE_PED(&iLocal_153);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_156))
		{
			PED::DELETE_PED(&iLocal_156);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[1]))
		{
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1528[1 /*3*/] = { 0f, 0f, 0f };
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1538[1] = 0f;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1542[1] = 0;
			Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1546[1 /*3*/] = { 0f, 0f, 0f };
			PED::DELETE_PED(&(iLocal_63[1]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[0]))
		{
			PED::DELETE_PED(&(iLocal_63[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[2]))
		{
			PED::DELETE_PED(&(iLocal_63[2]));
		}
	}
	if (iLocal_30 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_63[1]))
		{
			PED::DELETE_PED(&(iLocal_63[1]));
		}
	}
	iVar5 = 0;
	while (iVar5 < iLocal_227)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_227[iVar5], 0))
		{
			ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_227[iVar5], 0);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_227[iVar5], 1);
		}
		iVar5++;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_231, 0))
	{
		ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(iLocal_231, 0);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[0], 0))
	{
		VEHICLE::SET_HELI_TURBULENCE_SCALAR(iLocal_199[0], 1f);
		VEHICLE::_0xE5810AC70602F2F5(iLocal_199[0], 1f);
	}
	if (CAM::DOES_CAM_EXIST(iLocal_291))
	{
		CAM::DESTROY_CAM(iLocal_291, 0);
	}
	if (iLocal_30 >= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_622()))
		{
			if (PLAYER::PLAYER_PED_ID() == func_622())
			{
				if (ENTITY::IS_ENTITY_DEAD(func_622()) || !ENTITY::IS_ENTITY_DEAD(func_622()))
				{
					ENTITY::SET_ENTITY_VISIBLE(func_622(), 1);
				}
			}
		}
	}
	func_997();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[2], 0))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_199[2], 1);
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_199[1], 0))
	{
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_199[1], 0);
	}
	func_994(0);
	MISC::SET_TIME_SCALE(1f);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_997()//Position - 0x90BE3
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), 0);
	}
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	GlobalFunc_8380(0, 1, 1, 0);
	GlobalFunc_4948(&uLocal_1101, 0, 0);
	GlobalFunc_7632(0);
}

void func_998(var uParam0)//Position - 0x90C35
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_7));
	}
	func_713(uParam0, 0, joaat("weapon_unarmed"), 1, 1, 1);
	GlobalFunc_605(uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_6))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_6));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_8))
	{
		OBJECT::DELETE_OBJECT(&(uParam0->f_8));
	}
}



