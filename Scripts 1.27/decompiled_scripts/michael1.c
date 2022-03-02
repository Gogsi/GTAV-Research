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
	char* sLocal_47 = NULL;
	char* sLocal_48 = NULL;
	char* sLocal_49 = NULL;
	char* sLocal_50 = NULL;
	char* sLocal_51 = NULL;
	char* sLocal_52 = NULL;
	char* sLocal_53 = NULL;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	struct<3> Local_56 = { 0, 0, 0 } ;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	struct<3> Local_65 = { 0, 0, 0 } ;
	struct<3> Local_68 = { 0, 0, 0 } ;
	struct<3> Local_71 = { 0, 0, 0 } ;
	struct<3> Local_74 = { 0, 0, 0 } ;
	struct<3> Local_77 = { 0, 0, 0 } ;
	struct<3> Local_80 = { 0, 0, 0 } ;
	struct<3> Local_83 = { 0, 0, 0 } ;
	struct<3> Local_86 = { 0, 0, 0 } ;
	struct<3> Local_89 = { 0, 0, 0 } ;
	struct<3> Local_92 = { 0, 0, 0 } ;
	struct<3> Local_95 = { 0, 0, 0 } ;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	struct<3> Local_119 = { 0, 0, 0 } ;
	struct<3> Local_122 = { 0, 0, 0 } ;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	struct<7> Local_129 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	struct<13> Local_142 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<13> Local_155 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<14> Local_168 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<8> Local_182 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	struct<8> Local_196 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	int iLocal_210 = 0;
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
	struct<43> Local_224 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0 } ;
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
	struct<11> Local_278 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_289 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	struct<6> Local_297 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	struct<6> Local_305 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	struct<6> Local_313 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	int iLocal_321[4] = { 0, 0, 0, 0 };
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 4;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 4;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 4;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 4;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 4;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 4;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	struct<14> Local_365 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0 } ;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 3;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 16;
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
	struct<4> Local_555 = { 0, 0, 0, 0 } ;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	int iLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	int iLocal_564 = 0;
	int iLocal_565 = 0;
	int iLocal_566 = 0;
	int iLocal_567 = 0;
	int iLocal_568 = 0;
	int iLocal_569 = 0;
	int iLocal_570 = 0;
	int iLocal_571 = 0;
	int iLocal_572 = 0;
	int iLocal_573 = 0;
	int iLocal_574 = 0;
	var uLocal_575 = 0;
	int iLocal_576 = 0;
	int iLocal_577 = 0;
	int iLocal_578 = 0;
	bool bLocal_579 = 0;
	int iLocal_580 = 0;
	int iLocal_581 = 0;
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587 = 0;
	int iLocal_588 = 0;
	int iLocal_589 = 0;
	int iLocal_590 = 0;
	int iLocal_591 = 0;
	int iLocal_592 = 0;
	int iLocal_593 = 0;
	int iLocal_594 = 0;
	int iLocal_595 = 0;
	int iLocal_596 = 0;
	int iLocal_597 = 0;
	int iLocal_598 = 0;
	int iLocal_599 = 0;
	int iLocal_600 = 0;
	int iLocal_601 = 0;
	int iLocal_602 = 0;
	int iLocal_603 = 0;
	int iLocal_604 = 0;
	int iLocal_605 = 0;
	int iLocal_606 = 0;
	int iLocal_607 = 0;
	int iLocal_608 = 0;
	int iLocal_609 = 0;
	int iLocal_610 = 0;
	int iLocal_611 = 0;
	int iLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	int iLocal_616 = 0;
	int iLocal_617 = 0;
	int iLocal_618 = 0;
	int iLocal_619 = 0;
	int iLocal_620 = 0;
	int iLocal_621 = 0;
	int iLocal_622 = 0;
	int iLocal_623 = 0;
	int iLocal_624 = 0;
	int iLocal_625 = 0;
	int iLocal_626 = 0;
	int iLocal_627 = 0;
	int iLocal_628 = 0;
	int iLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	int iLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	int iLocal_636 = 0;
	int iLocal_637 = 0;
	int iLocal_638 = 0;
	int iLocal_639 = 0;
	int iLocal_640 = 0;
	int iLocal_641 = 0;
	int iLocal_642 = 0;
	int iLocal_643 = 0;
	float fLocal_644 = 0f;
	struct<2> Local_645 = { 0, 0 } ;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	struct<2> Local_649 = { 0, 0 } ;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	struct<2> Local_653 = { 0, 0 } ;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	struct<2> Local_657 = { 0, 0 } ;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	struct<2> Local_661 = { 0, 0 } ;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	char cLocal_665[16] = "";
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	int iLocal_671 = 0;
	int iLocal_672 = 0;
	var uLocal_673 = 0;
	int iLocal_674 = 0;
	int iLocal_675 = 0;
	int iLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	int iLocal_680 = 0;
	int iLocal_681 = 0;
	int iLocal_682 = 0;
	int iLocal_683 = 0;
	int iLocal_684 = 0;
	int iLocal_685 = 0;
	int iLocal_686 = 0;
	int iLocal_687 = 0;
	int iLocal_688 = 0;
	int iLocal_689 = 0;
	int iLocal_690 = 0;
	int iLocal_691 = 0;
	int iLocal_692 = 0;
	int iLocal_693 = 0;
	int iLocal_694 = 0;
	int iLocal_695 = 0;
	int iLocal_696 = 0;
	int iLocal_697 = 0;
	int iLocal_698 = 0;
	int iLocal_699 = 0;
	int iLocal_700 = 0;
	int iLocal_701 = 0;
	int iLocal_702 = 0;
	int iLocal_703 = 0;
	int iLocal_704 = 0;
	int iLocal_705 = 0;
	int iLocal_706 = 0;
	int iLocal_707[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_738 = 0;
	int iLocal_739[15] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_755 = 6;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 6;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 59;
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
	struct<26> Local_1242[4];
	struct<26> Local_1347[2];
	struct<26> Local_1400[3];
	struct<26> Local_1479[2];
	struct<26> Local_1532[5];
	struct<26> Local_1663[2];
	struct<26> Local_1716[2];
	struct<26> Local_1769[2];
	struct<26> Local_1822[4];
	struct<26> Local_1927[3];
	struct<26> Local_2006[2];
	struct<26> Local_2059[2];
	int iLocal_2112 = 2;
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
	struct<14> Local_2165[5];
	struct<13> Local_2236[36];
	struct<7> Local_2705[3];
	struct<6> Local_2727[6];
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
	sLocal_47 = "MCH1CHIN1";
	sLocal_48 = "MCH1CHIN2";
	sLocal_49 = "MCH1CHIN3";
	sLocal_50 = "MCH1CHIN4";
	sLocal_51 = "MCH1CHIN5";
	sLocal_52 = "LB080984";
	sLocal_53 = "michaelone";
	iLocal_54 = joaat("g_m_m_chicold_01");
	iLocal_55 = joaat("burrito5");
	Local_56 = { -802.46f, 173.03f, 71.84f };
	Local_59 = { 3259.89f, -4573.24f, 117.09f };
	Local_62 = { 3264.36f, -4569.73f, 117.07f };
	Local_65 = { 1655.24f, 3237.49f, 39.55f };
	Local_68 = { 0f, 0f, 0f };
	Local_71 = { -800f, 350f, 0f };
	Local_74 = { 0f, 0f, 0f };
	Local_77 = { 3854.3f, -4896.99f, 111.58f };
	Local_80 = { 0f, -0.25f, 1.2f };
	Local_83 = { 0f, 0f, 0f };
	Local_86 = { 5258.5f, -5119.35f, 83.92f };
	Local_89 = { 3851.85f, -5014.12f, 104.46f };
	Local_92 = { 3222.89f, -4708.41f, 111.88f };
	Local_95 = { -1.05f, 1.8f, -0.4f };
	Local_98 = { 1.05f, 1.8f, -0.4f };
	Local_101 = { -1.05f, -1.95f, -0.4f };
	Local_104 = { 1.05f, -1.95f, -0.4f };
	Local_107 = { -1f, 2.35f, 0.05f };
	Local_110 = { 1f, 2.35f, 0.05f };
	Local_113 = { -1.1f, -2.35f, -0.05f };
	Local_116 = { 1.1f, -2.35f, -0.05f };
	Local_119 = { 3264.079f, -4670.798f, 111.0558f };
	Local_122 = { 3266.366f, -4562.407f, 121.4179f };
	StringCopy(&Local_645, "MCH1_GTLC", 16);
	StringCopy(&Local_649, "MCH1_GT_T1", 16);
	StringCopy(&Local_653, "CMN_TGETBCK", 16);
	StringCopy(&Local_657, "MCH1_GT_T3", 16);
	StringCopy(&Local_661, "CMN_GENGETINPL", 16);
	StringCopy(&cLocal_665, "CMN_GENGETBCKPL", 16);
	iLocal_680 = -1;
	iLocal_681 = -1;
	iLocal_697 = -1;
	iLocal_698 = -1;
	iLocal_699 = -1;
	iLocal_700 = -1;
	iLocal_701 = -1;
	iLocal_702 = -1;
	iLocal_703 = -1;
	iLocal_704 = -1;
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		GlobalFunc_5822(func_833(0), 0);
		GlobalFunc_10632();
		func_828();
		if (iLocal_584 == 1)
		{
			GlobalFunc_2237(6);
			Global_85623 = 1;
			GlobalFunc_5738(0);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (GlobalFunc_199())
	{
		func_823(&iLocal_125, GlobalFunc_198());
		iLocal_128 = GlobalFunc_2284(0);
		iLocal_576 = 1;
		if (Global_84544 == 1)
		{
			switch (iLocal_125)
			{
				case 1:
					switch (GlobalFunc_2780())
					{
						case 2:
							iLocal_125 = 2;
							break;
						
						case 0:
							iLocal_125 = func_820(iLocal_125);
							break;
					}
					break;
				
				case 2:
					switch (GlobalFunc_2780())
					{
						case 2:
							iLocal_125 = 6;
							break;
						
						case 0:
							iLocal_125 = func_820(iLocal_125);
							break;
					}
					break;
				
				default:
					iLocal_125 = func_820(iLocal_125);
					break;
				}
		}
		if (iLocal_125 == 6)
		{
			func_819(GlobalFunc_2780(), &iLocal_595, &iLocal_594);
		}
	}
	else
	{
		GlobalFunc_11067(0, "GET TO AIRPORT", 0, 0, 0, 1);
	}
	if (GlobalFunc_2(0))
	{
		if (!GlobalFunc_199())
		{
			iLocal_125 = 0;
			iLocal_576 = 1;
		}
	}
	while (true)
	{
		if (iLocal_577 == 1)
		{
			func_782(&iLocal_125, &iLocal_126);
		}
		if (iLocal_584 == 1)
		{
			func_780(iLocal_125, iLocal_622, iLocal_623, &iLocal_629);
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
				{
					if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Global_54761) || (ENTITY::IS_ENTITY_A_VEHICLE(Global_54761) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Global_54761) != PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
						{
							GlobalFunc_503(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1);
						}
					}
				}
			}
		}
		RECORDING::_0x208784099002BC30("M_BuryTheHatchet", 0);
		switch (iLocal_125)
		{
			case 0:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				func_778();
				if (func_676(iLocal_125, &iLocal_562, &iLocal_577, &uLocal_575, &iLocal_576))
				{
					if (func_635(&iLocal_565))
					{
						func_634();
						iLocal_125 = 1;
					}
				}
				break;
			
			case 1:
				switch (GlobalFunc_8315())
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(Local_142))
						{
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
						}
						break;
					
					case 2:
						if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_196, 0))
						{
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
							HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
						}
						break;
				}
				func_778();
				if (func_676(iLocal_125, &iLocal_562, &iLocal_577, &uLocal_575, &iLocal_576))
				{
					if (func_617(&iLocal_565))
					{
						func_634();
						iLocal_125 = 3;
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_196, 0))
				{
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				}
				if (func_676(iLocal_125, &iLocal_562, &iLocal_577, &uLocal_575, &iLocal_576))
				{
					if (func_616(&iLocal_565))
					{
						func_634();
						RECORDING::_0x293220DA1B46CEBC(8f, 0f, 4);
						iLocal_125 = 3;
					}
				}
				break;
			
			case 3:
				if (func_676(iLocal_125, &iLocal_562, &iLocal_577, &uLocal_575, &iLocal_576))
				{
					if (func_611(&iLocal_563, &iLocal_564))
					{
						func_634();
						if (GlobalFunc_8315() == 0)
						{
							iLocal_125 = 4;
						}
						else if (GlobalFunc_8315() == 2)
						{
							iLocal_125 = 6;
							iLocal_595 = 0;
							iLocal_594 = 1;
						}
					}
				}
				break;
			
			case 4:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (func_676(iLocal_125, &iLocal_562, &iLocal_577, &uLocal_575, &iLocal_576))
				{
					if (func_598(&iLocal_565))
					{
						func_634();
						iLocal_125 = 5;
					}
				}
				break;
			
			case 5:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (func_676(iLocal_125, &iLocal_562, &iLocal_577, &uLocal_575, &iLocal_576))
				{
					if (func_403(&iLocal_565))
					{
						func_634();
						iLocal_125 = 6;
					}
				}
				break;
			
			case 6:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (func_676(iLocal_125, &iLocal_562, &iLocal_577, &uLocal_575, &iLocal_576))
				{
					if (func_380(&iLocal_565))
					{
						func_634();
						iLocal_125 = 7;
					}
				}
				break;
			
			case 7:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (func_676(iLocal_125, &iLocal_562, &iLocal_577, &uLocal_575, &iLocal_576))
				{
					if (func_299(&iLocal_565))
					{
						func_634();
						iLocal_125 = 8;
					}
				}
				break;
			
			case 8:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::_DISABLE_ROCKSTAR_EDITOR_CAMERA_CHANGES();
				if (func_676(iLocal_125, &iLocal_562, &iLocal_577, &uLocal_575, &iLocal_576))
				{
					if (func_193(&iLocal_565))
					{
						func_634();
						iLocal_125 = 9;
					}
				}
				break;
			
			case 9:
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				if (func_676(iLocal_125, &iLocal_562, &iLocal_577, &uLocal_575, &iLocal_576))
				{
					if (func_113(&iLocal_565))
					{
						func_634();
						iLocal_125 = 10;
					}
				}
				break;
			
			case 10:
				if (func_676(iLocal_125, &iLocal_562, &iLocal_577, &uLocal_575, &iLocal_576))
				{
					if (func_55(&iLocal_565))
					{
						func_634();
						iLocal_125 = 11;
					}
				}
				break;
			
			case 11:
				GlobalFunc_9804(4, 0);
				GlobalFunc_5103(0, 0);
				func_828();
				if (iLocal_584 == 1)
				{
					func_32();
				}
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
			
			case 12:
				GlobalFunc_5822(func_833(0), 0);
				func_21(iLocal_126, iLocal_584);
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				GlobalFunc_4935();
				if (!GlobalFunc_2(0))
				{
					GlobalFunc_495(35, 2);
				}
				AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FAIL");
				if (AUDIO::IS_STREAM_PLAYING())
				{
					AUDIO::STOP_STREAM();
				}
				if (iLocal_599 == 1)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 10f, 5, 0);
					}
				}
				while (!GlobalFunc_145())
				{
					SYSTEM::WAIT(0);
				}
				switch (GlobalFunc_8315())
				{
					case 0:
						if (iLocal_584 == 1)
						{
							GlobalFunc_8011(PLAYER::PLAYER_PED_ID(), 1);
							GlobalFunc_5129(-1039.611f, -2740.57f, 19.1693f, 328.9699f);
						}
						break;
					
					case 2:
						if (iLocal_586 == 1)
						{
							GlobalFunc_5129(1782.965f, 3314.927f, 40.4374f, 341.4644f);
						}
						break;
				}
				func_828();
				if (iLocal_584 == 1)
				{
					func_32();
				}
				SCRIPT::TERMINATE_THIS_THREAD();
				break;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			GlobalFunc_504(PLAYER::PLAYER_PED_ID(), 410);
			if ((ENTITY::DOES_ENTITY_EXIST(Local_196) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_196, 0))
			{
				GlobalFunc_504(Local_196, 409);
			}
			else
			{
				GlobalFunc_504(0, 409);
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))))
			{
				GlobalFunc_504(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 406);
			}
			else
			{
				GlobalFunc_504(0, 406);
			}
		}
		SYSTEM::WAIT(0);
	}
}





















void func_21(int iParam0, int iParam1)//Position - 0x1F64
{
	switch (iParam0)
	{
		case 1:
			if (iParam1 == 0)
			{
				GlobalFunc_10835("MCH1_MCUND");
			}
			else
			{
				GlobalFunc_10835("MCH1_CUND");
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				GlobalFunc_10835("CMN_MDEST");
			}
			else
			{
				GlobalFunc_10835("CMN_GENDEST");
			}
			break;
		
		case 3:
			if (iParam1 == 0)
			{
				GlobalFunc_10835("MCH1_MCLEFT");
			}
			else
			{
				GlobalFunc_10835("MCH1_CLEFT");
			}
			break;
		
		case 6:
			GlobalFunc_10835("MCH1_CLEFT");
			break;
		
		case 4:
			GlobalFunc_10835("MCH1_FTRC");
			break;
		
		case 5:
			GlobalFunc_10835("MCH1_FTRG");
			break;
		
		case 7:
			GlobalFunc_10835("MCH1_TCUND");
			break;
		
		case 8:
			GlobalFunc_10835("CMN_TDEST");
			break;
		
		case 9:
			GlobalFunc_10835("MCH1_TCLEFT");
			break;
		
		case 10:
			GlobalFunc_10835("MCH1_PUND");
			break;
		
		case 11:
			GlobalFunc_10835("MCH1_PDEAD");
			break;
		
		case 12:
			GlobalFunc_10835("CMN_MDIED");
			break;
		
		case 13:
			GlobalFunc_10835("CMN_TDIED");
			break;
		
		case 14:
			GlobalFunc_10835("MCH1_FAIL");
			break;
	}
}











void func_32()//Position - 0x2EE4
{
	func_38();
	func_36();
	func_34();
	GlobalFunc_2448(0);
	if (iLocal_582 == 1)
	{
		MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
		MISC::_CLEAR_CLOUD_HAT();
	}
	else if (iLocal_582 == 0)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	GRAPHICS::_RESET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH();
	VEHICLE::_0x35E0654F4BAD7971(1);
	VEHICLE::DELETE_ALL_TRAINS();
}


void func_34()//Position - 0x2F97
{
	STREAMING::REMOVE_IPL("prologue01");
	STREAMING::REMOVE_IPL("prologue01c");
	STREAMING::REMOVE_IPL("prologue01d");
	STREAMING::REMOVE_IPL("prologue01e");
	STREAMING::REMOVE_IPL("prologue01f");
	STREAMING::REMOVE_IPL("prologue01g");
	STREAMING::REMOVE_IPL("prologue01h");
	STREAMING::REMOVE_IPL("prologue01i");
	STREAMING::REMOVE_IPL("prologue01j");
	STREAMING::REMOVE_IPL("prologue01k");
	STREAMING::REMOVE_IPL("prologue01z");
	STREAMING::REMOVE_IPL("prologue02");
	STREAMING::REMOVE_IPL("prologue03");
	STREAMING::REMOVE_IPL("prologue03b");
	STREAMING::REMOVE_IPL("prologue04");
	STREAMING::REMOVE_IPL("prologue04b");
	STREAMING::REMOVE_IPL("prologue05");
	STREAMING::REMOVE_IPL("prologue05b");
	STREAMING::REMOVE_IPL("prologue06");
	STREAMING::REMOVE_IPL("prologue06b");
	STREAMING::REMOVE_IPL("prologuerd");
	STREAMING::REMOVE_IPL("prologuerdb");
	STREAMING::REMOVE_IPL("prologue_occl");
	STREAMING::REMOVE_IPL("prologue_m2_door");
	STREAMING::REMOVE_IPL("prologue06_pannel");
	GlobalFunc_2449("prologue_LODLights");
	GlobalFunc_2449("prologue_DistantLights");
	STREAMING::REMOVE_IPL("prologue03_grv_cov");
	STREAMING::REMOVE_IPL("prologue03_grv_dug");
	STREAMING::REMOVE_IPL("prologue_grv_torch");
}


void func_36()//Position - 0x310C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_37(iVar0);
		iVar0++;
	}
}

void func_37(int iParam0)//Position - 0x312F
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_2727[iParam0 /*6*/]))
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(Local_2727[iParam0 /*6*/]);
	}
}

void func_38()//Position - 0x3150
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_39(iVar0);
		iVar0++;
	}
}

void func_39(int iParam0)//Position - 0x3173
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_2727[iParam0 /*6*/]))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_2727[iParam0 /*6*/], 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_2727[iParam0 /*6*/], 0, 0, 1);
	}
}
















int func_55(int iParam0)//Position - 0x356C
{
	switch (*iParam0)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_182))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_182))
				{
					if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Local_182)))
					{
						ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_182, 0);
					}
					GlobalFunc_9622(Local_182, Local_182.f_2, Local_182.f_5, 24, 0);
					iLocal_624 = 1;
					SYSTEM::WAIT(1);
				}
			}
			if (iLocal_688 == 0)
			{
				GlobalFunc_10725(19, "MIC1_END", 1, 1, 0, 0, 0, 1, 0, 1);
				iLocal_688 = 1;
			}
			return 1;
			break;
	}
	return 0;
}


























































int func_113(int iParam0)//Position - 0x76A2
{
	MISC::SET_BIT(&(Local_365.f_13), 20);
	switch (*iParam0)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_FLY_PRE_PHONECALL"))
			{
				AUDIO::START_AUDIO_SCENE("MI_1_FLY_PRE_PHONECALL");
			}
			if (!CAM::DOES_CAM_EXIST(uLocal_669))
			{
				uLocal_669 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(uLocal_669, Vector(5.372416f, 7499.777f, 3157.129f) + Local_71, 11.13708f, 0f, 145.8058f, 59.40752f, 0, 1, 1, 2);
			}
			HUD::DISPLAY_HUD(0);
			HUD::DISPLAY_RADAR(0);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
			{
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_196);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_196, 1, 1);
				ENTITY::FREEZE_ENTITY_POSITION(Local_196, 1);
			}
			iLocal_688 = 0;
			*iParam0++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
			{
				if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
				{
					STREAMING::NEW_LOAD_SCENE_START(CAM::GET_CAM_COORD(uLocal_669), ENTITY::GET_ENTITY_FORWARD_VECTOR(Local_196), 4500f, 0);
					iLocal_625 = MISC::GET_GAME_TIMER();
				}
				if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || GlobalFunc_2521(10000, iLocal_625))
				{
					STREAMING::NEW_LOAD_SCENE_STOP();
					RECORDING::_0x293220DA1B46CEBC(0f, 12f, 4);
					*iParam0++;
				}
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missmic1");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missmic1"))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(Local_196, 0);
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_196, Local_196.f_7, sLocal_53, 1);
					VEHICLE::_0xFAF2A78061FD9EF4(Local_196, Local_71);
					VEHICLE::_0x796A877E459B99EA(Local_196, Local_74);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_196, 500f);
					VEHICLE::SET_PLAYBACK_SPEED(Local_196, 0.9f);
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_196, 1, 1);
					VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_196);
					VEHICLE::CONTROL_LANDING_GEAR(Local_196, 3);
				}
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_680))
				{
					iLocal_680 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
					PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iLocal_680, Local_196, 0);
					CAM::DESTROY_ALL_CAMS(0);
					uLocal_669 = CAM::CREATE_CAMERA(964613260, 1);
					CAM::PLAY_SYNCHRONIZED_CAM_ANIM(uLocal_669, iLocal_680, "trevor_plane_cam", "missmic1");
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						iLocal_597 = 1;
						CAM::_0x2A2173E46DAECD12(4, 1);
					}
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
				Local_142.f_10 = MISC::GET_GAME_TIMER();
				CAM::DO_SCREEN_FADE_IN(2500);
				*iParam0++;
			}
			break;
		
		case 3:
			GlobalFunc_2520();
			PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
			CAM::_0x59424BD75174C9B1();
			if (GlobalFunc_2521(8000, Local_142.f_10))
			{
				CAM::RENDER_SCRIPT_CAMS(0, 1, 3000, 0, 0, 0);
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				if (bLocal_579 == 0)
				{
					if (iLocal_597 == 0)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchSceneTrevor", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "Hit_1", "LONG_PLAYER_SWITCH_SOUNDS", 1);
					}
				}
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				}
				GlobalFunc_574(405, 0);
				iLocal_641 = 0;
				iLocal_639 = 0;
				iLocal_598 = 0;
				SYSTEM::SETTIMERA(0);
				*iParam0++;
			}
			break;
		
		case 4:
			if (iLocal_639 == 0)
			{
				MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 60f);
				iLocal_638 = MISC::GET_GAME_TIMER();
				iLocal_639 = 1;
			}
			fLocal_644 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_65, 1);
			if (CAM::_0x3044240D2E0FA842())
			{
				PAD::DISABLE_CONTROL_ACTION(1, 26, 1);
				PAD::DISABLE_CONTROL_ACTION(1, 79, 1);
				PAD::DISABLE_CONTROL_ACTION(1, 1, 1);
				PAD::DISABLE_CONTROL_ACTION(1, 2, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
				PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
				if (iLocal_597 == 1)
				{
					if (iLocal_598 == 0)
					{
						if (SYSTEM::TIMERA() > 2700)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInTrevor", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_598 = 1;
						}
					}
				}
			}
			else if (iLocal_597 == 1)
			{
				CAM::_0x2A2173E46DAECD12(4, 4);
				iLocal_597 = 0;
			}
			func_171(&(Local_142.f_12));
			GlobalFunc_9194(&Local_365, Local_65, GlobalFunc_716(), 1, Local_196, "MCH1_GT_T8", &Local_661, &cLocal_665, 1, 0, 1, -1);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_196))
				{
					if (iLocal_592 == 0)
					{
						if (func_123(Local_196) > 98f)
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_196);
						}
						if (func_122(Local_196))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_196);
							TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
							iLocal_592 = 1;
						}
					}
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1719.453f, 3254.325f, 40.1445f, 1048.33f, 3073.852f, 50.70406f, 34f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_196, 1719.453f, 3254.325f, 40.1445f, 1048.33f, 3073.852f, 50.70406f, 34f, 0, 1, 0))
					{
						if (ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(Local_196) < 2f)
						{
							if (ENTITY::GET_ENTITY_SPEED(Local_196) < 10f || VEHICLE::IS_VEHICLE_STOPPED(Local_196))
							{
								*iParam0++;
							}
						}
					}
				}
			}
			break;
		
		case 5:
			if (GlobalFunc_530(Local_196, 6f, 1, 1056964608, 0, 1))
			{
				RECORDING::_0x293220DA1B46CEBC(10f, 5f, 4);
				CAM::DESTROY_ALL_CAMS(0);
				AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FLIGHT_LANDED");
				GlobalFunc_7139(&Local_365, 0);
				GlobalFunc_571(0, -1);
				return 1;
			}
			break;
	}
	return 0;
}









int func_122(int iParam0)//Position - 0x8031
{
	int iVar0;
	int iVar1;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
		{
			iVar0 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 59) * 255f));
			iVar1 = SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 60) * 255f));
			if (((((((((((((iVar0 < -50 || iVar0 > 50) || (iVar1 < -50 || iVar1 > 50)) || PAD::IS_CONTROL_PRESSED(0, 68)) || PAD::IS_CONTROL_PRESSED(0, 75)) || PAD::IS_CONTROL_PRESSED(0, 86)) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 69)) || PAD::IS_CONTROL_PRESSED(0, 70)) || PAD::IS_CONTROL_PRESSED(0, 80)) || PAD::IS_CONTROL_PRESSED(0, 74)) || PAD::IS_CONTROL_PRESSED(0, 71)) || PAD::IS_CONTROL_PRESSED(0, 76)) || PAD::IS_CONTROL_PRESSED(0, 73))
			{
				return 1;
			}
		}
	}
	return 0;
}

float func_123(int iParam0)//Position - 0x8136
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
		{
			uVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			return (100f * (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0) / VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0)));
		}
	}
	return -1f;
}
















































void func_171(var uParam0)//Position - 0xAACF
{
	switch (*uParam0)
	{
		case 0:
			if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_196))
			{
				if (fLocal_644 != 0f && fLocal_644 < 6200f)
				{
					Local_142.f_11 = MISC::GET_GAME_TIMER();
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_196))
			{
				if (GlobalFunc_10664(&uLocal_390, 35, "MCH1AUD", GlobalFunc_1078(bLocal_579, "MCH1_CP04", "MCH1_CP04b"), 7, 0, 0, 1))
				{
					func_177("MCH1_CP04", 1);
					RECORDING::_0x293220DA1B46CEBC(1f, 12f, 4);
					*uParam0++;
				}
			}
			break;
		
		case 2:
			if (func_175("MCH1_CP04"))
			{
				if (!GlobalFunc_111())
				{
					Local_142.f_11 = MISC::GET_GAME_TIMER();
					*uParam0++;
				}
				if (GlobalFunc_781())
				{
				}
			}
			break;
		
		case 3:
			if (!GlobalFunc_111())
			{
				*uParam0++;
			}
			break;
		
		case 4:
			GlobalFunc_9621(35, 2, 1);
			*uParam0++;
			break;
		
		case 5:
			if (iLocal_688 == 0)
			{
				if (iLocal_691 == 0)
				{
					iLocal_691 = MISC::GET_GAME_TIMER();
				}
				else if (GlobalFunc_2521(16000, iLocal_691))
				{
					GlobalFunc_10725(19, "MIC1_END", 1, 1, 0, 0, 0, 1, 0, 1);
					iLocal_688 = 1;
					iLocal_691 = MISC::GET_GAME_TIMER();
				}
			}
			break;
	}
}




int func_175(char* sParam0)//Position - 0xAE6F
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_176(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

int func_176(int iParam0)//Position - 0xAE8E
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_738)
	{
		if (iLocal_707[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_177(char* sParam0, bool bParam1)//Position - 0xAEBF
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_175(sParam0))
		{
			iVar1 = iLocal_707;
			if (iLocal_738 < iVar1)
			{
				iLocal_707[iLocal_738] = iVar0;
				iLocal_738++;
			}
		}
	}
	else
	{
		iVar2 = func_176(iVar0);
		if (iVar2 != -1)
		{
			iLocal_707[iVar2] = 0;
			func_178();
			iLocal_738 = (iLocal_738 - 1);
		}
	}
}

void func_178()//Position - 0xAF22
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_707;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_707[iVar1] == 0)
		{
			if (iLocal_707[iVar1 + 1] != 0)
			{
				iLocal_707[iVar1] = iLocal_707[iVar1 + 1];
				iLocal_707[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}















int func_193(int iParam0)//Position - 0xB647
{
	switch (*iParam0)
	{
		case 0:
			if (GlobalFunc_5927("mic_1_mcs_3", 1))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 0, 1);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_168, "Chinese_Goon_Car", 0, 0, 0);
				}
				HUD::CLEAR_PRINTS();
				HUD::CLEAR_HELP(1);
				GlobalFunc_8380(1, 1, 1, 0);
				MISC::CLEAR_AREA(Local_155.f_2, 100f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_155.f_2, 100f, 0, 0, 0, 0, 0);
				CUTSCENE::START_CUTSCENE(0);
				RECORDING::_0x48621C9FCA3EBD28(4);
				CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
				*iParam0++;
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Left_Gun", 2, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Kneeling_Gunman", 2, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 5, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 6, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 11, 1, 0, 0);
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_195(&Local_1242, 1, 1, 1);
				func_195(&Local_1400, 1, 1, 1);
				func_195(&Local_1347, 1, 1, 1);
				func_195(&Local_1479, 1, 1, 1);
				func_195(&Local_1663, 1, 1, 1);
				func_195(&Local_1716, 1, 1, 1);
				func_195(&Local_1532, 1, 1, 1);
				func_195(&Local_1822, 1, 1, 1);
				func_195(&Local_1769, 1, 1, 1);
				func_195(&Local_1927, 1, 1, 1);
				func_195(&Local_2006, 1, 1, 1);
				func_195(&Local_2059, 1, 1, 1);
				func_195(&iLocal_2112, 1, 1, 1);
				func_194(&Local_2165, 1, 1, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*iParam0++;
			}
			break;
		
		case 2:
			if (iLocal_608 == 0)
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_KIDNAPPED"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_KIDNAPPED"))
					{
						iLocal_608 = 1;
					}
				}
			}
			if (iLocal_609 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 4500)
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_READY_TO_FLY"))
						{
							iLocal_609 = 1;
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("asea", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
				{
					VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 0, 1);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_168);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_168, -1);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				RECORDING::_0x81CBAE94390F9F89();
				if (CAM::DOES_CAM_EXIST(uLocal_669))
				{
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				GlobalFunc_8380(0, 1, 1, 0);
				*iParam0++;
			}
			else if (!CAM::DOES_CAM_EXIST(uLocal_669))
			{
				uLocal_669 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(uLocal_669, 3157.129f, 7499.777f, 5.372416f, 11.13708f, 0f, 145.8058f, 59.40752f, 0, 1, 1, 2);
				CAM::SHAKE_CAM(uLocal_669, "HAND_SHAKE", 0.25f);
			}
			break;
		
		case 3:
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_278) && ENTITY::DOES_ENTITY_EXIST(Local_278.f_1))
				{
					PED::DELETE_PED(&(Local_278.f_1));
					VEHICLE::DELETE_MISSION_TRAIN(&Local_278);
				}
				if (!AUDIO::HAS_SOUND_FINISHED(uLocal_631))
				{
					AUDIO::STOP_SOUND(uLocal_631);
				}
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds");
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_168))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
					{
						VEHICLE::DELETE_VEHICLE(&Local_168);
					}
				}
				func_38();
				func_36();
				GlobalFunc_8011(PLAYER::PLAYER_PED_ID(), 1);
				return 1;
			}
			break;
	}
	return 0;
}

void func_194(var uParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xBA1C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*14*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == (*uParam0)[iVar0 /*14*/])
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
				VEHICLE::DELETE_VEHICLE(uParam0[iVar0 /*14*/]);
			}
			if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*14*/])->f_1))
			{
				HUD::REMOVE_BLIP(&((uParam0[iVar0 /*14*/])->f_1));
			}
			(uParam0[iVar0 /*14*/])->f_8 = 0;
			(uParam0[iVar0 /*14*/])->f_13 = 0;
			(uParam0[iVar0 /*14*/])->f_11 = 0;
			(uParam0[iVar0 /*14*/])->f_12 = 0;
		}
		else if (bParam1 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar0 /*14*/]))
			{
				if (iParam2 == 1)
				{
					if (iParam3 == 0)
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*14*/]);
					}
					if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*14*/])->f_1))
					{
						HUD::REMOVE_BLIP(&((uParam0[iVar0 /*14*/])->f_1));
					}
				}
				else if (iParam2 == 0)
				{
					if (HUD::DOES_BLIP_EXIST((uParam0[iVar0 /*14*/])->f_1))
					{
						HUD::REMOVE_BLIP(&((uParam0[iVar0 /*14*/])->f_1));
					}
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0[iVar0 /*14*/]);
					(uParam0[iVar0 /*14*/])->f_8 = 0;
					(uParam0[iVar0 /*14*/])->f_11 = 0;
					(uParam0[iVar0 /*14*/])->f_12 = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_195(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0xBB5A
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		func_196(iParam0[iVar0 /*26*/], bParam1, iParam2, iParam3);
		if (bParam1 == 1)
		{
			(iParam0[iVar0 /*26*/])->f_11 = 0;
		}
		iVar0++;
	}
}

void func_196(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xBB9A
{
	if (iParam1 == 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (iParam2 == 1)
			{
				if (PED::IS_PED_INJURED(*uParam0))
				{
					uParam0->f_19 = func_200(*uParam0);
					func_198(uParam0->f_19, &iLocal_637);
					PED::REMOVE_PED_DEFENSIVE_AREA(*uParam0, 0);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
					if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_1));
					}
					if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_10))
					{
						ITEMSET::DESTROY_ITEMSET(uParam0->f_10);
					}
				}
			}
			else if (iParam2 == 0)
			{
				if (!PED::IS_PED_INJURED(*uParam0))
				{
					PED::SET_PED_KEEP_TASK(*uParam0, iParam3);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
					if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
					{
						HUD::REMOVE_BLIP(&(uParam0->f_1));
					}
				}
				if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_10))
				{
					ITEMSET::DESTROY_ITEMSET(uParam0->f_10);
				}
			}
		}
	}
	else if (iParam1 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (PED::IS_PED_INJURED(*uParam0) || !PED::IS_PED_INJURED(*uParam0))
			{
				if (ENTITY::IS_ENTITY_DEAD(*uParam0) || !ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					PED::REMOVE_PED_DEFENSIVE_AREA(*uParam0, 0);
				}
				PED::DELETE_PED(uParam0);
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1));
				}
			}
		}
		if (ITEMSET::IS_ITEMSET_VALID(uParam0->f_10))
		{
			ITEMSET::DESTROY_ITEMSET(uParam0->f_10);
		}
		GlobalFunc_589(&(uParam0->f_2));
		uParam0->f_11 = 0;
		uParam0->f_13 = 0;
		uParam0->f_12 = 0;
		uParam0->f_14 = 0;
		uParam0->f_21 = 0;
		uParam0->f_16 = 0;
		uParam0->f_15 = 0;
		uParam0->f_25 = 0;
		uParam0->f_17 = 0;
		uParam0->f_19 = 0;
	}
}


void func_198(int iParam0, var uParam1)//Position - 0xBD74
{
	switch (iParam0)
	{
		case 1:
			*uParam1++;
			GlobalFunc_565(402, 1, 0);
			break;
	}
}


int func_200(int iParam0)//Position - 0xBE47
{
	var uVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			uVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam0);
			if (ENTITY::IS_ENTITY_A_PED(uVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (iVar1 == PLAYER::PLAYER_PED_ID())
				{
					if (GlobalFunc_8315() == 0)
					{
						return 1;
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
			{
				return 2;
			}
		}
	}
	return 0;
}



































































































int func_299(int iParam0)//Position - 0x22FBD
{
	int iVar0;
	
	MISC::SET_BIT(&(Local_365.f_13), 20);
	CLOCK::SET_CLOCK_TIME(0, 0, 0);
	WEAPON::SET_PICKUP_AMMO_AMOUNT_SCALER(3f);
	if (*iParam0 < 40)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_168.f_1))
		{
			Local_168.f_1 = GlobalFunc_6783(Local_168, 0, 0);
			func_377("CMN_GENGETIN", 7500, 1);
		}
		if (iLocal_600 == 0)
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3276.663f, -4691.776f, 112.1588f, 3218.353f, -4637.393f, 120.5423f, 16f, 0, 1, 0))
			{
				iLocal_600 = 1;
			}
		}
		if (func_376(PLAYER::PLAYER_PED_ID(), 3238.347f, -4687.663f, 114.673f, 36f, 15f, 4f))
		{
			iLocal_739[3] = 1;
			iLocal_739[6] = 0;
			*iParam0 = 40;
		}
	}
	func_373(PLAYER::PLAYER_PED_ID(), &uLocal_670, &iLocal_671, 4000, 1.25f);
	func_372(&iLocal_612, 1);
	func_370(&iLocal_613, iLocal_612, -1);
	func_368(&iLocal_614, iLocal_613);
	func_364(&iLocal_615, iLocal_614, -1);
	func_362(&iLocal_616, &iLocal_617, 1);
	func_361(&iLocal_618, iLocal_614);
	func_360(&iLocal_619, iLocal_618, iLocal_614);
	func_352(&(Local_2165[0 /*14*/].f_8));
	func_348(&(Local_2165[1 /*14*/].f_8));
	func_333(&(Local_2165[4 /*14*/].f_8));
	func_332();
	func_331(&iLocal_633);
	func_325(&(Local_2165[2 /*14*/].f_8));
	func_324(iLocal_610, &iLocal_127);
	func_313(&(Local_155.f_12), &(Local_155.f_11), &iLocal_567, &iLocal_568, &iLocal_569, &iLocal_570);
	func_194(&Local_2165, 0, 1, 1);
	func_311();
	func_310(&iLocal_682);
	switch (*iParam0)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_SHOOTOUT_STEALTH"))
			{
				AUDIO::START_AUDIO_SCENE("MI_1_SHOOTOUT_STEALTH");
			}
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 1, -1, 0);
			}
			if (iLocal_593 == 0)
			{
				iLocal_593 = 1;
			}
			iLocal_739[6] = 1;
			SYSTEM::SETTIMERB(0);
			Local_155.f_10 = MISC::GET_GAME_TIMER();
			*iParam0++;
			break;
		
		case 1:
			if (SYSTEM::TIMERB() > 5000)
			{
				*iParam0++;
			}
			break;
		
		case 40:
			if (!func_175("MCH1_RTC"))
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3263.05f, -4704.67f, 104.67f, 3267.14f, -4561.37f, 132.76f, 64f, 0, 1, 0))
				{
					if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_168, 1) > 25f)
					{
						HUD::CLEAR_PRINTS();
						func_377("MCH1_RTC", 7500, 1);
					}
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_168, 1))
			{
				GlobalFunc_2918();
				if (HUD::DOES_BLIP_EXIST(Local_168.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_168.f_1));
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(Local_168.f_1))
			{
				Local_168.f_1 = GlobalFunc_6783(Local_168, 0, 0);
			}
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_GET_TO_CAR"))
			{
				AUDIO::START_AUDIO_SCENE("MI_1_GET_TO_CAR");
			}
			func_306(&(Local_278.f_10));
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_168))
			{
				GlobalFunc_702(1, 0, 1);
				if (iLocal_685 == 0)
				{
					if (iLocal_684 == 0)
					{
						iLocal_684 = MISC::GET_GAME_TIMER();
					}
					else if (GlobalFunc_2521(1000, iLocal_684))
					{
						iLocal_685 = 1;
					}
				}
				if (iLocal_686 == 0)
				{
					iVar0 = GlobalFunc_2524(PLAYER::PLAYER_PED_ID(), iLocal_561, 0, 0, 28);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (GlobalFunc_4951(PLAYER::PLAYER_PED_ID(), iVar0) < 5f)
							{
								iLocal_686 = 1;
							}
						}
					}
				}
				if ((PAD::IS_DISABLED_CONTROL_PRESSED(0, 71) || iLocal_686 == 1) || iLocal_685 == 1)
				{
					GlobalFunc_4935();
					GlobalFunc_5105();
					if (!GlobalFunc_111())
					{
						if (HUD::DOES_BLIP_EXIST(Local_168.f_1))
						{
							HUD::REMOVE_BLIP(&(Local_168.f_1));
						}
						if (iLocal_591 == 1)
						{
							func_301(&Local_2236);
							iLocal_591 = 0;
						}
						AUDIO::STOP_SOUND(uLocal_632);
						STREAMING::REMOVE_ANIM_DICT("dead");
						STREAMING::REMOVE_ANIM_DICT("missmic1ig_2");
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_GET_TO_CAR"))
						{
							AUDIO::STOP_AUDIO_SCENE("MI_1_GET_TO_CAR");
						}
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_SHOOTOUT_ENEMIES_ALERTED"))
						{
							AUDIO::STOP_AUDIO_SCENE("MI_1_SHOOTOUT_ENEMIES_ALERTED");
						}
						AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FBI_HEIST_3B_SHOOTOUT");
						GlobalFunc_2943(&Local_313, 1);
						GlobalFunc_2943(&Local_297, 1);
						GlobalFunc_2943(&Local_305, 1);
						if (ENTITY::DOES_ENTITY_EXIST(Local_129))
						{
							PED::DELETE_PED(&Local_129);
						}
						return 1;
					}
				}
			}
			CUTSCENE::REQUEST_CUTSCENE("mic_1_mcs_3", 8);
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Left_Gun", 2, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Kneeling_Gunman", 2, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 0, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 2, 0, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 3, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 4, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 5, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 6, 1, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_Goon", 11, 1, 0, 0);
			}
			break;
	}
	return 0;
}


void func_301(var uParam0)//Position - 0x2349D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		TASK::REMOVE_COVER_POINT((*uParam0)[iVar0 /*13*/]);
		iVar0++;
	}
}





void func_306(var uParam0)//Position - 0x23614
{
	switch (*uParam0)
	{
		case 0:
			if (func_307(&Local_278, 8f, 0))
			{
				*uParam0++;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(Local_278) && ENTITY::DOES_ENTITY_EXIST(Local_278.f_1))
			{
				if (AUDIO::HAS_SOUND_FINISHED(uLocal_631))
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds", 0))
					{
						AUDIO::PLAY_SOUND_FROM_COORD(uLocal_631, "Train_Bell", 3217.51f, -4702.84f, 115.13f, "Prologue_Sounds", 0, 0, 0);
					}
				}
				if (ENTITY::IS_ENTITY_AT_COORD(Local_278, 4297.464f, -4725.533f, 120.3123f, 10f, 10f, 10f, 0, 1, 0))
				{
					PED::DELETE_PED(&(Local_278.f_1));
					VEHICLE::DELETE_MISSION_TRAIN(&Local_278);
					if (!AUDIO::HAS_SOUND_FINISHED(uLocal_631))
					{
						AUDIO::STOP_SOUND(uLocal_631);
					}
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds");
					*uParam0++;
				}
			}
			break;
	}
}

int func_307(var uParam0, float fParam1, int iParam2)//Position - 0x236FA
{
	int iVar0;
	int iVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_6);
		STREAMING::REQUEST_MODEL(uParam0->f_7);
		STREAMING::REQUEST_MODEL(uParam0->f_8);
		STREAMING::REQUEST_MODEL(uParam0->f_9);
		if (((STREAMING::HAS_MODEL_LOADED(uParam0->f_6) && STREAMING::HAS_MODEL_LOADED(uParam0->f_7)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_8)) && STREAMING::HAS_MODEL_LOADED(uParam0->f_9))
		{
			*uParam0 = VEHICLE::CREATE_MISSION_TRAIN(uParam0->f_2, uParam0->f_3, iParam2);
			uParam0->f_1 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 26, uParam0->f_9, -1, 1, 1);
			VEHICLE::SET_TRAIN_SPEED(*uParam0, fParam1);
			VEHICLE::SET_TRAIN_CRUISE_SPEED(*uParam0, fParam1);
			ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(*uParam0, 0);
			ENTITY::SET_CAN_CLIMB_ON_ENTITY(*uParam0, 0);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 116, 1);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_1, 29, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_1, 1);
			iVar0 = 0;
			while (iVar0 <= 12)
			{
				iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(*uParam0, iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1))
					{
						ENTITY::SET_CAN_AUTO_VAULT_ON_ENTITY(iVar1, 0);
						ENTITY::SET_CAN_CLIMB_ON_ENTITY(iVar1, 0);
					}
				}
				iVar0++;
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_6);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_7);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_8);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_9);
			return 1;
		}
	}
	else if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		return 1;
	}
	return 0;
}



void func_310(int iParam0)//Position - 0x238D1
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_129))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_129))
		{
			switch (*iParam0)
			{
				case 0:
					if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_681))
					{
						STREAMING::REQUEST_ANIM_DICT("dead");
						if (STREAMING::HAS_ANIM_DICT_LOADED("dead"))
						{
							if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_681))
							{
								iLocal_681 = PED::CREATE_SYNCHRONIZED_SCENE(3258.899f, -4574.09f, 115.35f, 173.88f, 51.48f, 5.04f, 0);
								TASK::TASK_SYNCHRONIZED_SCENE(Local_129, iLocal_681, "dead", "dead_g", 1000f, -1000f, 4, 145, 1148846080, 0);
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_129, 0, 0);
								AUDIO::STOP_PED_SPEAKING(Local_129, 1);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_129, 1);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_129, 1);
							}
						}
					}
					else
					{
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_129, 4);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_129, 128);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_129, 32);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_129, 8192);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_129, 1);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_129, 16);
						PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_129, 64);
						*iParam0++;
					}
					break;
				
				case 1:
					break;
				}
			}
	}
}

void func_311()//Position - 0x239D8
{
	if (iLocal_580 == 0)
	{
		if (!func_175("MCH1_HWEAP"))
		{
			if (HUD::IS_HUD_COMPONENT_ACTIVE(19))
			{
				GlobalFunc_159("MCH1_HWEAP", 10000);
				func_177("MCH1_HWEAP", 1);
				iLocal_580 = 1;
			}
		}
	}
}


void func_313(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x23A2B
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	struct<6> Var7;
	
	switch (*uParam0)
	{
		case 0:
			if (!GlobalFunc_5172(&Local_365, 1))
			{
				if (!GlobalFunc_111())
				{
					iVar0 = func_323(PLAYER::PLAYER_PED_ID(), iLocal_561, 0, 0);
					if (iVar0 != 0 && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
					{
						GlobalFunc_173(&uLocal_390, 6, iVar0, sLocal_50, 0, 1);
						if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_GSGCB", 7, 0, 0, 0))
						{
							*iParam3 = (5000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
							*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
							*uParam1 = MISC::GET_GAME_TIMER();
							*iParam2 = MISC::GET_GAME_TIMER();
							*iParam5 = 0;
							*uParam0++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!func_175("MCH1_GSMA"))
			{
				if (func_320(&Local_1347) >= 2)
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_365, 1))
						{
							if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_GSMA", 7, 0, 0, 0))
							{
								func_177("MCH1_GSMA", 1);
							}
						}
					}
				}
			}
			if (!func_175("MCH1_GSS08"))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2165[0 /*14*/]))
				{
					if (((ENTITY::DOES_ENTITY_EXIST(Local_1242[0 /*26*/]) || ENTITY::DOES_ENTITY_EXIST(Local_1242[1 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_1242[2 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_1242[3 /*26*/]))
					{
						if (iLocal_623 == 1)
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_365, 1))
								{
									iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
									if (!PED::IS_PED_INJURED(Local_1242[iVar2 /*26*/]))
									{
										iVar3 = 3;
										while (iVar3 <= 7)
										{
											GlobalFunc_200(&uLocal_390, iVar3);
											iVar3++;
										}
										GlobalFunc_173(&uLocal_390, 6, Local_1242[iVar2 /*26*/], sLocal_50, 0, 1);
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_GSS08", 7, 0, 0, 0))
										{
											func_177("MCH1_GSS08", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										}
									}
								}
							}
						}
					}
				}
			}
			if ((!func_175("MCH1_GSGR2") && !func_175("MCH1_GSGR3")) && !func_175("MCH1_GSGR4"))
			{
				if (iLocal_572 == 1)
				{
					if (((ENTITY::DOES_ENTITY_EXIST(Local_1242[0 /*26*/]) || ENTITY::DOES_ENTITY_EXIST(Local_1242[1 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_1242[2 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_1242[3 /*26*/]))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_365, 1))
							{
								iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
								if (!PED::IS_PED_INJURED(Local_1242[iVar2 /*26*/]))
								{
									switch (iVar2)
									{
										case 0:
											iVar4 = 4;
											sVar5 = sLocal_48;
											sVar6 = "MCH1_GSGR2";
											break;
										
										case 1:
											iVar4 = 4;
											sVar5 = sLocal_48;
											sVar6 = "MCH1_GSGR2";
											break;
										
										case 2:
											iVar4 = 6;
											sVar5 = sLocal_50;
											sVar6 = "MCH1_GSGR3";
											break;
										
										case 3:
											iVar4 = 6;
											sVar5 = sLocal_50;
											sVar6 = "MCH1_GSGR4";
											break;
									}
									iVar3 = 3;
									while (iVar3 <= 7)
									{
										GlobalFunc_200(&uLocal_390, iVar3);
										iVar3++;
									}
									GlobalFunc_173(&uLocal_390, iVar4, Local_1242[iVar2 /*26*/], sVar5, 0, 1);
									if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", sVar6, 7, 0, 0, 0))
									{
										func_177(sVar6, 1);
										*uParam1 = MISC::GET_GAME_TIMER();
										*iParam2 = MISC::GET_GAME_TIMER();
										*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
									}
								}
							}
						}
					}
				}
			}
			if (!func_175("MCH1_GSGCA"))
			{
				if ((func_175("MCH1_GSGR2") || func_175("MCH1_GSGR3")) || func_175("MCH1_GSGR4"))
				{
					if (iLocal_571 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1242[2 /*26*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1242[2 /*26*/]))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_365, 1))
									{
										iVar3 = 3;
										while (iVar3 <= 7)
										{
											GlobalFunc_200(&uLocal_390, iVar3);
											iVar3++;
										}
										GlobalFunc_173(&uLocal_390, 6, Local_1242[2 /*26*/], sLocal_50, 0, 1);
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_GSGCA", 7, 0, 0, 0))
										{
											func_177("MCH1_GSGCA", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											if (iLocal_695 == 0)
											{
												if (iLocal_696 == 1)
												{
													RECORDING::_0x81CBAE94390F9F89();
													iLocal_695 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			if (!func_175("MCH1_GSM04"))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3262.183f, -4629.665f, 116.8451f, 30f, 2f, 3f, 0, 1, 0))
				{
					if (Local_1532[(Local_1532 - 1) /*26*/].f_11 == 1)
					{
						if (!GlobalFunc_111() && !GlobalFunc_5172(&Local_365, 1))
						{
							if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_GSM04", 8, 0, 0, 0))
							{
								func_177("MCH1_GSM04", 1);
								*uParam1 = MISC::GET_GAME_TIMER();
								*iParam2 = MISC::GET_GAME_TIMER();
								*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
								*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
							}
						}
					}
				}
			}
			if (!func_175("MCH1_GSGBA"))
			{
				if (iLocal_574 == 1)
				{
					if (((ENTITY::DOES_ENTITY_EXIST(Local_1822[0 /*26*/]) || ENTITY::DOES_ENTITY_EXIST(Local_1822[1 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_1822[2 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_1822[3 /*26*/]))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_365, 1))
							{
								iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
								if (!PED::IS_PED_INJURED(Local_1822[iVar2 /*26*/]))
								{
									iVar3 = 3;
									while (iVar3 <= 7)
									{
										GlobalFunc_200(&uLocal_390, iVar3);
										iVar3++;
									}
									GlobalFunc_173(&uLocal_390, 7, Local_1822[iVar2 /*26*/], sLocal_51, 0, 1);
									if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_GSGBA", 7, 0, 0, 0))
									{
										func_177("MCH1_GSGBA", 1);
										*uParam1 = MISC::GET_GAME_TIMER();
										*iParam2 = MISC::GET_GAME_TIMER();
										*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
									}
								}
							}
						}
					}
				}
			}
			if (iLocal_610 == 0)
			{
				if (!func_175("MCH1_MOVE1"))
				{
					if (iLocal_571 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1242[2 /*26*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1242[2 /*26*/]))
							{
								if (!GlobalFunc_111())
								{
									if (!GlobalFunc_5172(&Local_365, 1))
									{
										iVar3 = 3;
										while (iVar3 <= 7)
										{
											GlobalFunc_200(&uLocal_390, iVar3);
											iVar3++;
										}
										GlobalFunc_173(&uLocal_390, 3, Local_1242[2 /*26*/], sLocal_47, 0, 1);
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_MOVE1", 7, 0, 0, 0))
										{
											func_177("MCH1_MOVE1", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										}
									}
								}
							}
						}
					}
				}
				if (!GlobalFunc_111() && !GlobalFunc_5172(&Local_365, 1))
				{
					if (!func_175("MCH1_MOVE3"))
					{
						if (iLocal_613 == 1)
						{
							if ((ENTITY::DOES_ENTITY_EXIST(Local_1400[0 /*26*/]) || ENTITY::DOES_ENTITY_EXIST(Local_1400[1 /*26*/])) || ENTITY::DOES_ENTITY_EXIST(Local_1400[2 /*26*/]))
							{
								iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
								if (!PED::IS_PED_INJURED(Local_1400[iVar2 /*26*/]))
								{
									iVar3 = 3;
									while (iVar3 <= 7)
									{
										GlobalFunc_200(&uLocal_390, iVar3);
										iVar3++;
									}
									GlobalFunc_173(&uLocal_390, 5, Local_1400[iVar2 /*26*/], sLocal_49, 0, 1);
									if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_MOVE3", 7, 0, 0, 0))
									{
										func_177("MCH1_MOVE3", 1);
										*uParam1 = MISC::GET_GAME_TIMER();
										*iParam2 = MISC::GET_GAME_TIMER();
										*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										*iParam4 = (4000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2001));
									}
								}
							}
						}
					}
					if (Local_1400[1 /*26*/].f_14 == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_1400[1 /*26*/]))
						{
							if (!PED::IS_PED_INJURED(Local_1400[1 /*26*/]))
							{
								if (Local_1400[1 /*26*/].f_17 != 0)
								{
									if (GlobalFunc_2521(7500, Local_1400[1 /*26*/].f_17))
									{
										if (!PED::IS_PED_INJURED(Local_1400[1 /*26*/]))
										{
											iVar3 = 3;
											while (iVar3 <= 7)
											{
												GlobalFunc_200(&uLocal_390, iVar3);
												iVar3++;
											}
											GlobalFunc_173(&uLocal_390, 5, Local_1400[1 /*26*/], sLocal_49, 0, 1);
										}
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_SURR3", 7, 1, 0, 0))
										{
											Local_1400[1 /*26*/].f_17 = MISC::GET_GAME_TIMER();
										}
									}
								}
								else
								{
									Local_1400[1 /*26*/].f_17 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (GlobalFunc_2521(*iParam4, *iParam2))
					{
						iVar0 = func_323(PLAYER::PLAYER_PED_ID(), iLocal_561, MISC::GET_RANDOM_INT_IN_RANGE(0, 4), 0);
						if (iVar0 != 0 && !PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
						{
							iVar3 = 3;
							while (iVar3 <= 7)
							{
								GlobalFunc_200(&uLocal_390, iVar3);
								iVar3++;
							}
							if (func_318(PLAYER::PLAYER_PED_ID(), iLocal_561, 0) >= 1)
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
								{
									case 0:
										GlobalFunc_173(&uLocal_390, 3, iVar0, sLocal_47, 0, 1);
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_MOVE1", 7, 0, 0, 0))
										{
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam5 = 0;
										}
										break;
									
									case 1:
										GlobalFunc_173(&uLocal_390, 3, iVar0, sLocal_47, 0, 1);
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_SURR1", 7, 0, 0, 0))
										{
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam5 = 0;
										}
										break;
									
									case 2:
										GlobalFunc_173(&uLocal_390, 4, iVar0, sLocal_48, 0, 1);
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_MOVE2", 7, 0, 0, 0))
										{
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam5 = 0;
										}
										break;
									
									case 3:
										GlobalFunc_173(&uLocal_390, 4, iVar0, sLocal_48, 0, 1);
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_SURR2", 7, 0, 0, 0))
										{
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam4 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam5 = 0;
										}
										break;
									}
							}
						}
						else
						{
							*iParam2 = MISC::GET_GAME_TIMER();
							*iParam4 = (2000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 1001));
							*iParam5 = 0;
						}
					}
				}
			}
			else
			{
				if (((!func_175("MCH1_SPOT1") && !func_175("MCH1_SPOT2")) && !func_175("MCH1_SPOT3")) && !func_175("MCH1_SPOT4"))
				{
					if (!GlobalFunc_111())
					{
						if (!GlobalFunc_5172(&Local_365, 1))
						{
							iVar0 = func_323(PLAYER::PLAYER_PED_ID(), iLocal_561, 0, 0);
							if (iVar0 != 0)
							{
								iVar3 = 3;
								while (iVar3 <= 7)
								{
									GlobalFunc_200(&uLocal_390, iVar3);
									iVar3++;
								}
								switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 4))
								{
									case 1:
										GlobalFunc_173(&uLocal_390, 3, iVar0, sLocal_47, 0, 1);
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_SPOT1", 7, 1, 0, 0))
										{
											func_177("MCH1_SPOT1", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											iLocal_611 = 1;
										}
										break;
									
									case 2:
										GlobalFunc_173(&uLocal_390, 4, iVar0, sLocal_48, 0, 1);
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_SPOT2", 7, 1, 0, 0))
										{
											func_177("MCH1_SPOT2", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											iLocal_611 = 1;
										}
										break;
									
									case 3:
										GlobalFunc_173(&uLocal_390, 5, iVar0, sLocal_49, 0, 1);
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_SPOT3", 7, 1, 0, 0))
										{
											func_177("MCH1_SPOT3", 1);
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam2 = MISC::GET_GAME_TIMER();
											*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											iLocal_611 = 1;
										}
										break;
									}
								}
						}
					}
					else
					{
						GlobalFunc_4956();
					}
				}
				else
				{
					if (GlobalFunc_111())
					{
						Var7 = { GlobalFunc_560() };
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var7))
						{
							if (((MISC::ARE_STRINGS_EQUAL(&Var7, "MCH1_SPOT1") || MISC::ARE_STRINGS_EQUAL(&Var7, "MCH1_SPOT2")) || MISC::ARE_STRINGS_EQUAL(&Var7, "MCH1_SPOT3")) || MISC::ARE_STRINGS_EQUAL(&Var7, "MCH1_SPOT4"))
							{
								iLocal_611 = 1;
							}
							else
							{
								iLocal_611 = 0;
							}
						}
						else
						{
							iLocal_611 = 0;
						}
					}
					else
					{
						iLocal_611 = 0;
					}
					if (!func_175("MCH1_SURROUND"))
					{
						if (!GlobalFunc_111())
						{
							if (!GlobalFunc_5172(&Local_365, 1))
							{
								iVar0 = func_323(PLAYER::PLAYER_PED_ID(), iLocal_561, 0, 0);
								if (iVar0 != 0)
								{
									iVar3 = 3;
									while (iVar3 <= 7)
									{
										GlobalFunc_200(&uLocal_390, iVar3);
										iVar3++;
									}
									switch (MISC::GET_RANDOM_INT_IN_RANGE(1, 4))
									{
										case 1:
											GlobalFunc_173(&uLocal_390, 3, iVar0, sLocal_47, 0, 1);
											if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_SURR1", 7, 1, 0, 0))
											{
												func_177("MCH1_SURROUND", 1);
												*uParam1 = MISC::GET_GAME_TIMER();
												*iParam2 = MISC::GET_GAME_TIMER();
												*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												iLocal_611 = 1;
											}
											break;
										
										case 2:
											GlobalFunc_173(&uLocal_390, 4, iVar0, sLocal_48, 0, 1);
											if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_SURR2", 7, 1, 0, 0))
											{
												func_177("MCH1_SURROUND", 1);
												*uParam1 = MISC::GET_GAME_TIMER();
												*iParam2 = MISC::GET_GAME_TIMER();
												*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												iLocal_611 = 1;
											}
											break;
										
										case 3:
											GlobalFunc_173(&uLocal_390, 5, iVar0, sLocal_49, 0, 1);
											if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_SURR3", 7, 1, 0, 0))
											{
												func_177("MCH1_SURROUND", 1);
												*uParam1 = MISC::GET_GAME_TIMER();
												*iParam2 = MISC::GET_GAME_TIMER();
												*iParam3 = (6000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
												iLocal_611 = 1;
											}
											break;
										}
									}
								}
							}
						}
				}
				if (!GlobalFunc_5172(&Local_365, 1))
				{
					if (*iParam5 == 0)
					{
						if (func_318(PLAYER::PLAYER_PED_ID(), iLocal_561, 0) > 0)
						{
							if (func_314(PLAYER::PLAYER_PED_ID()))
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
								{
									case 0:
									case 1:
									case 2:
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_GSM02", 8, 0, 0, 0))
										{
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam3 = (9000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											*iParam5 = 1;
										}
										break;
									
									default:
										break;
									}
								}
							}
					}
					if (GlobalFunc_2521(*iParam3, *uParam1))
					{
						iVar0 = func_323(PLAYER::PLAYER_PED_ID(), iLocal_561, 0, 0);
						if (iVar0 != 0)
						{
							fVar1 = GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iVar0, 1);
							if (fVar1 < 35f)
							{
								if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_GSM01", 7, 0, 0, 0))
								{
									*uParam1 = MISC::GET_GAME_TIMER();
									*iParam3 = (9000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
									*iParam5 = 0;
								}
							}
							else
							{
								*uParam1 = MISC::GET_GAME_TIMER();
								*iParam3 = (4000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2001));
								*iParam5 = 0;
							}
						}
						else
						{
							*uParam1 = MISC::GET_GAME_TIMER();
							*iParam3 = (9000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
							*iParam5 = 0;
						}
					}
					if (GlobalFunc_2521(*iParam4, *iParam2))
					{
						if (func_318(PLAYER::PLAYER_PED_ID(), iLocal_561, 0) == 1)
						{
							iVar0 = func_323(PLAYER::PLAYER_PED_ID(), iLocal_561, 0, 0);
							switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
							{
								case 0:
									iVar4 = 3;
									sVar5 = sLocal_47;
									sVar6 = "MCH1_GSGL1";
									break;
								
								case 1:
									iVar4 = 4;
									sVar5 = sLocal_48;
									sVar6 = "MCH1_GSGL2";
									break;
								
								case 2:
									iVar4 = 6;
									sVar5 = sLocal_50;
									sVar6 = "MCH1_GSGL3";
									break;
								
								case 3:
									iVar4 = 6;
									sVar5 = sLocal_50;
									sVar6 = "MCH1_GSGL4";
									break;
							}
							iVar3 = 3;
							while (iVar3 <= 7)
							{
								GlobalFunc_200(&uLocal_390, iVar3);
								iVar3++;
							}
							GlobalFunc_173(&uLocal_390, iVar4, iVar0, sVar5, 0, 1);
							if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", sVar6, 7, 0, 0, 0))
							{
								*iParam2 = MISC::GET_GAME_TIMER();
								*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
								*iParam5 = 0;
							}
						}
						else
						{
							iVar0 = func_323(PLAYER::PLAYER_PED_ID(), iLocal_561, MISC::GET_RANDOM_INT_IN_RANGE(0, 3), 0);
							if (iVar0 != 0)
							{
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
										{
											case 0:
												iVar4 = 3;
												sVar5 = sLocal_47;
												sVar6 = "MCH1_GSGA1";
												break;
											
											case 1:
												iVar4 = 4;
												sVar5 = sLocal_48;
												sVar6 = "MCH1_GSGA2";
												break;
											
											case 2:
												iVar4 = 6;
												sVar5 = sLocal_50;
												sVar6 = "MCH1_GSGA3";
												break;
											
											case 3:
												iVar4 = 6;
												sVar5 = sLocal_50;
												sVar6 = "MCH1_GSGA4";
												break;
											
											case 4:
												if (iLocal_574 == 1)
												{
													iVar4 = 7;
													sVar5 = sLocal_51;
													sVar6 = "MCH1_GSGA5";
												}
												else
												{
													iVar4 = 6;
													sVar5 = sLocal_50;
													sVar6 = "MCH1_GSGA4";
												}
												break;
										}
										break;
									
									case 1:
										switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
										{
											case 0:
												iVar4 = 3;
												sVar5 = sLocal_47;
												sVar6 = "MCH1_GSGS1";
												break;
											
											case 1:
												iVar4 = 4;
												sVar5 = sLocal_48;
												sVar6 = "MCH1_GSGS2";
												break;
											
											case 2:
												iVar4 = 6;
												sVar5 = sLocal_50;
												sVar6 = "MCH1_GSGS3";
												break;
											
											case 3:
												iVar4 = 6;
												sVar5 = sLocal_50;
												sVar6 = "MCH1_GSGS4";
												break;
											
											case 4:
												if (iLocal_574 == 1)
												{
													iVar4 = 7;
													sVar5 = sLocal_51;
													sVar6 = "MCH1_GSGS5";
												}
												else
												{
													iVar4 = 6;
													sVar5 = sLocal_50;
													sVar6 = "MCH1_GSGS4";
												}
												break;
										}
										break;
								}
								iVar3 = 3;
								while (iVar3 <= 7)
								{
									GlobalFunc_200(&uLocal_390, iVar3);
									iVar3++;
								}
								GlobalFunc_173(&uLocal_390, iVar4, iVar0, sVar5, 0, 1);
								if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", sVar6, 7, 0, 0, 0))
								{
									*iParam2 = MISC::GET_GAME_TIMER();
									*iParam4 = (7000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
									*iParam5 = 0;
								}
							}
							else
							{
								*iParam2 = MISC::GET_GAME_TIMER();
								*iParam4 = (5000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
								*iParam5 = 0;
							}
						}
					}
					if (!func_175("MCH1_GSM05_1"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2165[1 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2165[1 /*14*/]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2165[1 /*14*/]))
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), Local_2165[1 /*14*/]))
								{
									if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_GSM05", 7, 0, 0, 0))
									{
										*uParam1 = MISC::GET_GAME_TIMER();
										*iParam3 = (9000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
										func_177("MCH1_GSM05_1", 1);
									}
								}
							}
						}
					}
					if (!func_175("MCH1_GSM05_2"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2165[4 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2165[4 /*14*/]))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_2165[4 /*14*/]))
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(PLAYER::PLAYER_PED_ID(), Local_2165[4 /*14*/]))
								{
									if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_GSM05", 7, 0, 0, 0))
									{
										func_177("MCH1_GSM05_2", 1);
									}
								}
							}
						}
					}
					else if (!func_175("MCH1_GSM06"))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_2165[4 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2165[4 /*14*/]))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_278) && !ENTITY::IS_ENTITY_DEAD(Local_278))
							{
								if (VEHICLE::IS_VEHICLE_STOPPED(Local_2165[4 /*14*/]))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(Local_278, 3245.582f, -4715.379f, 115.7887f, 128f, 32f, 6f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3227.011f, -4693.198f, 115.6459f, 28f, 22f, 6f, 0, 1, 0))
									{
										if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_GSM06", 7, 0, 0, 0))
										{
											*uParam1 = MISC::GET_GAME_TIMER();
											*iParam3 = (9000 + MISC::GET_RANDOM_INT_IN_RANGE(0, 3001));
											func_177("MCH1_GSM06", 1);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	}
}

int func_314(int iParam0)//Position - 0x24D73
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SHOOTING(iParam0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
					return 1;
				}
			}
			else
			{
				PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID());
			}
		}
	}
	return 0;
}




int func_318(int iParam0, int iParam1, int iParam2)//Position - 0x24E11
{
	int iVar0[16];
	int iVar17;
	int iVar18;
	
	iVar17 = 0;
	iVar18 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, 28);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar17]))
				{
					if (iParam2 == 1)
					{
						if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar17]))
						{
							if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar17]) == iParam1)
							{
								iVar18++;
							}
						}
					}
					else if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar17]) == iParam1)
					{
						iVar18++;
					}
				}
			}
			iVar17++;
		}
	}
	return iVar18;
}


int func_320(int iParam0)//Position - 0x24EC9
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if ((iParam0[iVar0 /*26*/])->f_11 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
			{
				if (PED::IS_PED_INJURED((*iParam0)[iVar0 /*26*/]) || ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*26*/]))
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}



int func_323(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2501D
{
	int iVar0[16];
	int iVar17;
	
	iVar17 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::GET_PED_NEARBY_PEDS(iParam0, &iVar0, 28);
		iVar17 = 0;
		while (iVar17 <= (iVar0 - 1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0[iVar17]))
			{
				if (!PED::IS_PED_INJURED(iVar0[iVar17]))
				{
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[iVar17]) == iParam1)
					{
						if (iParam2 <= 0)
						{
							if (iParam3 == 1)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[iVar17]))
								{
									return iVar0[iVar17];
								}
							}
							else
							{
								return iVar0[iVar17];
							}
						}
						else if (iVar17 + iParam2) <= (iVar0 - 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0[(iVar17 + iParam2)]))
							{
								if (!PED::IS_PED_INJURED(iVar0[(iVar17 + iParam2)]))
								{
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0[(iVar17 + iParam2)]) == iParam1)
									{
										if (iParam3 == 1)
										{
											if (ENTITY::IS_ENTITY_ON_SCREEN(iVar0[(iVar17 + iParam2)]))
											{
												return iVar0[(iVar17 + iParam2)];
											}
										}
										else
										{
											return iVar0[(iVar17 + iParam2)];
										}
									}
								}
							}
						}
					}
				}
			}
			iVar17++;
		}
	}
	return 0;
}

void func_324(int iParam0, int iParam1)//Position - 0x25124
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (*iParam1 == 0)
		{
			if (iParam0 == 1)
			{
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3267.364f, -4574.668f, 119.1567f, 36f, 16f, 4f, 0, 1, 0))
				{
					*iParam1 = 1;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3266.107f, -4602.593f, 117.6758f, 36f, 13f, 4f, 0, 1, 0))
				{
					*iParam1 = 2;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3264.762f, -4626.325f, 117.1862f, 36f, 11f, 4f, 0, 1, 0))
				{
					*iParam1 = 3;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3262.035f, -4655.088f, 114.9361f, 36f, 17f, 4f, 0, 1, 0))
				{
					*iParam1 = 4;
				}
				else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3243.012f, -4691.706f, 113.6542f, 50f, 20f, 4f, 0, 1, 0))
				{
					*iParam1 = 5;
				}
			}
		}
	}
}

void func_325(var uParam0)//Position - 0x2522D
{
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_MODEL(iLocal_54);
			STREAMING::REQUEST_MODEL(iLocal_55);
			*uParam0++;
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(iLocal_54);
			STREAMING::REQUEST_MODEL(iLocal_55);
			if (STREAMING::HAS_MODEL_LOADED(iLocal_54) && STREAMING::HAS_MODEL_LOADED(iLocal_55))
			{
				Local_2165[2 /*14*/] = func_330(&(Local_2165[2 /*14*/]), 1000, 0, 1, 1, 0, 1, -1, -1, 0);
				Local_2165[3 /*14*/] = func_330(&(Local_2165[3 /*14*/]), 800, 0, 1, 1, 0, 1, -1, -1, 0);
				*uParam0++;
			}
			break;
	}
	func_329(&(Local_2165[2 /*14*/]), PLAYER::PLAYER_PED_ID(), 3222.844f, -4688.636f, 114.2127f, 12f, 16f, 3f);
	func_327(Local_2165[3 /*14*/], PLAYER::PLAYER_PED_ID(), 300, 475, &(Local_2165[3 /*14*/].f_13), 10f, 10f, 3f, 0f, 0f, 5f, 0f, -1.5f, 0f, 1, 45f, 70f);
	func_329(&(Local_2165[3 /*14*/]), PLAYER::PLAYER_PED_ID(), 3222.844f, -4688.636f, 114.2127f, 12f, 16f, 3f);
	func_326(Local_2165[2 /*14*/], 1, Local_98, 0.8f, 0, 1, Local_110, 150f, 1120403456);
	func_326(Local_2165[2 /*14*/], 0, Local_95, 0.8f, 0, 1, Local_107, 150f, 1120403456);
	func_326(Local_2165[2 /*14*/], 4, Local_101, 0.8f, 0, 1, Local_113, 150f, 1120403456);
	func_326(Local_2165[2 /*14*/], 5, Local_104, 0.8f, 0, 1, Local_116, 150f, 1120403456);
	func_326(Local_2165[3 /*14*/], 1, Local_98, 0.8f, 0, 1, Local_110, 150f, 1120403456);
	func_326(Local_2165[3 /*14*/], 0, Local_95, 0.8f, 0, 1, Local_107, 150f, 1120403456);
	func_326(Local_2165[3 /*14*/], 4, Local_101, 0.8f, 0, 1, Local_113, 150f, 1120403456);
	func_326(Local_2165[3 /*14*/], 5, Local_104, 0.8f, 0, 1, Local_116, 150f, 1120403456);
}

void func_326(int iParam0, int iParam1, struct<3> Param2, float fParam5, int iParam6, int iParam7, struct<3> Param8, float fParam11, int iParam12)//Position - 0x2546D
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, iParam1, 0))
			{
				if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Param2), fParam5, iParam6))
				{
					switch (iParam1)
					{
						case 0:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 0, 0, 1148846080);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 0);
							break;
						
						case 1:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 1, 0, 1148846080);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 1);
							break;
						
						case 4:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 4, 0, 1148846080);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 2);
							break;
						
						case 5:
							VEHICLE::SET_VEHICLE_TYRE_BURST(iParam0, 5, 0, 1148846080);
							VEHICLE::SMASH_VEHICLE_WINDOW(iParam0, 3);
							break;
					}
					if (iParam7 == 1)
					{
						VEHICLE::SET_VEHICLE_DAMAGE(iParam0, Param8, fParam11, iParam12, 1);
					}
				}
			}
		}
	}
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, struct<3> Param5, struct<3> Param8, struct<3> Param11, int iParam14, float fParam15, float fParam16)//Position - 0x2553A
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (ENTITY::GET_ENTITY_HEALTH(iParam0) == 0)
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(iParam1, iParam0, Param5, 0, 1, 0))
					{
						VEHICLE::EXPLODE_VEHICLE(iParam0, 1, 0);
					}
					else
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, -100f);
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, -100f);
					}
				}
				else if (ENTITY::GET_ENTITY_HEALTH(iParam0) < iParam2)
				{
					if (func_328(iParam1, iParam0))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(iParam1, iParam0, Param5, 0, 1, 0))
						{
							if (iParam14 == 1)
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
								{
									fVar0 = func_123(iParam0);
									if (fVar0 > fParam15 && fVar0 < fParam16)
									{
										VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
										ENTITY::APPLY_FORCE_TO_ENTITY(iParam0, 1, Param8, Param11, 0, 1, 1, 1, 0, 1);
									}
								}
							}
							VEHICLE::EXPLODE_VEHICLE(iParam0, 1, 0);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
							RECORDING::_0x293220DA1B46CEBC(3f, 0f, 3);
						}
						else
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, -100f);
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iParam0, -100f);
							ENTITY::SET_ENTITY_HEALTH(iParam0, 100);
							ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iParam0);
						}
					}
				}
				else if (ENTITY::GET_ENTITY_HEALTH(iParam0) < iParam3)
				{
					if (*uParam4 == 0)
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 50f);
							VEHICLE::SET_VEHICLE_UNDRIVEABLE(iParam0, true);
							*uParam4 = 1;
						}
					}
				}
			}
		}
	}
}

int func_328(int iParam0, int iParam1)//Position - 0x2567E
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, iParam0, 0))
				{
					if (WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iParam1, 0, 2))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_329(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5)//Position - 0x256BF
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
				{
					if (uParam0->f_13 == 0)
					{
						if (PED::IS_PED_IN_VEHICLE(iParam1, *uParam0, 0))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(*uParam0, Param2, Param5, 0, 1, 0))
							{
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 50f);
								VEHICLE::SET_VEHICLE_ENGINE_ON(*uParam0, 0, 1);
								VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam0, true);
								uParam0->f_13 = 1;
							}
						}
					}
				}
			}
		}
	}
}

int func_330(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x2573D
{
	int iVar0;
	
	iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_6, uParam0->f_2, uParam0->f_5, 1, 1);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam1);
	VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iVar0, SYSTEM::TO_FLOAT(iParam1));
	VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iVar0, SYSTEM::TO_FLOAT(iParam1));
	VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iVar0, iParam3);
	VEHICLE::SET_VEHICLE_UNDRIVEABLE(iVar0, !bParam4);
	VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(iVar0, iParam5);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, iParam6);
	AUDIO::SET_VEHICLE_RADIO_ENABLED(iVar0, 0);
	if (iParam2 == 1)
	{
		if (!HUD::DOES_BLIP_EXIST(uParam0->f_1))
		{
			uParam0->f_1 = GlobalFunc_6783(iVar0, 1, 0);
		}
	}
	if (iParam7 != -1 && iParam8 != -1)
	{
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, iParam7, iParam8);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 0, 0);
	}
	if (iParam9 == 1)
	{
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, iParam9);
		VEHICLE::_0x1CF38D529D7441D9(iVar0, iParam9);
	}
	return iVar0;
}

void func_331(int iParam0)//Position - 0x257FB
{
	if (!AUDIO::REQUEST_AMBIENT_AUDIO_BANK("CHURCH_BELL", 0))
	{
	}
	else
	{
		switch (*iParam0)
		{
			case 0:
				*iParam0++;
				break;
			
			case 1:
				if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3259.471f, -4664.254f, 116.1522f, 36f, 30f, 5f, 0, 1, 0))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(uLocal_632, "RING", 3243.52f, -4665.81f, 126f, "CHURCH_BELL_SOUNDSET", 0, 0, 0);
					*iParam0++;
				}
				break;
			
			case 2:
				if (!AUDIO::HAS_SOUND_FINISHED(uLocal_632))
				{
					AUDIO::SET_VARIABLE_ON_SOUND(uLocal_632, "CHURCH_BELL_RING_COUNT", 0f);
				}
				else
				{
					*iParam0++;
				}
				break;
			}
	}
}

void func_332()//Position - 0x258B1
{
	if (iLocal_604 == 0)
	{
		if (iLocal_606 == 0)
		{
			if (func_320(&Local_1347) == 2)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FIRST_TWO_DEAD"))
				{
					iLocal_604 = 1;
				}
			}
		}
	}
	if (iLocal_605 == 0)
	{
		if (iLocal_622 == 1)
		{
			if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_1ST_VAN"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_1ST_VAN"))
				{
					iLocal_605 = 1;
				}
			}
		}
	}
	if (iLocal_606 == 0)
	{
		if (iLocal_610 == 1)
		{
			if ((((func_175("MCH1_SPOT1") || func_175("MCH1_SPOT2")) || func_175("MCH1_SPOT3")) || func_175("MCH1_SPOT4")) || func_175("MCH1_SURROUND"))
			{
				if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_ALERTED"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_ALERTED"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_SHOOTOUT_STEALTH");
						AUDIO::START_AUDIO_SCENE("MI_1_SHOOTOUT_ENEMIES_ALERTED");
						iLocal_606 = 1;
					}
				}
			}
		}
	}
	if (iLocal_607 == 0)
	{
		if (iLocal_574 == 1)
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_TRAIN"))
			{
				iLocal_607 = 1;
			}
		}
	}
}

void func_333(var uParam0)//Position - 0x259A2
{
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3238.347f, -4687.663f, 114.673f, 36f, 15f, 4f, 0, 1, 0))
			{
				*uParam0++;
			}
			break;
		
		case 1:
			STREAMING::REQUEST_MODEL(iLocal_55);
			STREAMING::REQUEST_MODEL(iLocal_54);
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_2165[4 /*14*/].f_7, sLocal_53);
			if ((STREAMING::HAS_MODEL_LOADED(iLocal_55) && STREAMING::HAS_MODEL_LOADED(iLocal_54)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Local_2165[4 /*14*/].f_7, sLocal_53))
			{
				Local_2165[4 /*14*/] = func_330(&(Local_2165[4 /*14*/]), 950, 0, 1, 1, 0, 1, -1, -1, 0);
				Local_1822[0 /*26*/] = func_345(iLocal_54, Local_2165[4 /*14*/], -1, iLocal_561, joaat("weapon_assaultrifle"), 0, 200, 0);
				Local_1822[1 /*26*/] = func_345(iLocal_54, Local_2165[4 /*14*/], 0, iLocal_561, joaat("weapon_assaultrifle"), 0, 200, 0);
				Local_1822[2 /*26*/] = func_345(iLocal_54, Local_2165[4 /*14*/], 1, iLocal_561, joaat("weapon_assaultrifle"), 0, 200, 0);
				Local_1822[3 /*26*/] = func_345(iLocal_54, Local_2165[4 /*14*/], 2, iLocal_561, joaat("weapon_assaultrifle"), 0, 200, 0);
				func_344(&Local_1822, 0);
				func_341(Local_2165[4 /*14*/], sLocal_53, 1.2f, 0, 2750f, 0, 0, 1);
				AUDIO::START_AUDIO_SCENE("MI_1_VAN_ARRIVES_03");
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2165[4 /*14*/], "MI_1_VAN_03", 0);
				VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2165[4 /*14*/], 1);
				*uParam0++;
			}
			break;
		
		case 2:
			if (func_123(Local_2165[4 /*14*/]) > 98f)
			{
				if (HUD::DOES_BLIP_EXIST(Local_2165[4 /*14*/].f_1))
				{
					HUD::REMOVE_BLIP(&(Local_2165[4 /*14*/].f_1));
				}
				if (!PED::IS_PED_INJURED(Local_1822[0 /*26*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1822[0 /*26*/], 150f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1822[0 /*26*/], 0);
					func_340(Local_1822[0 /*26*/], 1, 2, 2, 29, 1);
					func_339(Local_1822[0 /*26*/], 3214.98f, -4716.22f, 111.82f, 2f, 0);
					func_338(Local_1822[0 /*26*/], 3, 100, -957453492);
					func_337(Local_1822[0 /*26*/], 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
					func_336(Local_1822[0 /*26*/], &(Local_1822[0 /*26*/].f_10), &(Local_2236[29 /*13*/]));
				}
				if (!PED::IS_PED_INJURED(Local_1822[1 /*26*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1822[1 /*26*/], 150f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1822[1 /*26*/], 0);
					func_340(Local_1822[1 /*26*/], 1, 2, 2, 29, 1);
					func_339(Local_1822[1 /*26*/], 3224.99f, -4716.13f, 111.41f, 1.5f, 0);
					func_338(Local_1822[1 /*26*/], 3, 100, -957453492);
				}
				if (!PED::IS_PED_INJURED(Local_1822[2 /*26*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1822[2 /*26*/], 150f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1822[2 /*26*/], 0);
					func_340(Local_1822[2 /*26*/], 1, 2, 2, 29, 1);
					func_339(Local_1822[2 /*26*/], 3218.49f, -4716.52f, 111.37f, 2f, 0);
					func_338(Local_1822[2 /*26*/], 4, 100, -957453492);
				}
				if (!PED::IS_PED_INJURED(Local_1822[3 /*26*/]))
				{
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1822[3 /*26*/], 150f, 0);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1822[3 /*26*/], 0);
					func_340(Local_1822[3 /*26*/], 1, 2, 2, 29, 1);
					func_339(Local_1822[3 /*26*/], 3224.7f, -4718.32f, 111.37f, 1.5f, 0);
					func_338(Local_1822[3 /*26*/], 4, 100, -957453492);
				}
				iLocal_574 = 1;
				Local_2165[4 /*14*/].f_9 = MISC::GET_GAME_TIMER();
				AUDIO::STOP_AUDIO_SCENE("MI_1_VAN_ARRIVES_03");
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2165[4 /*14*/], 0);
				*uParam0++;
			}
			break;
		
		case 3:
			if (GlobalFunc_2521(34000, Local_2165[4 /*14*/].f_9))
			{
				if (!PED::IS_PED_INJURED(Local_1822[0 /*26*/]))
				{
					func_340(Local_1822[0 /*26*/], 2, 2, 0, 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1822[0 /*26*/], 50, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1822[0 /*26*/], 28, 1);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_1822[0 /*26*/], 0);
				}
				if (!PED::IS_PED_INJURED(Local_1822[1 /*26*/]))
				{
					func_340(Local_1822[1 /*26*/], 2, 2, 0, 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1822[1 /*26*/], 50, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1822[1 /*26*/], 28, 1);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_1822[1 /*26*/], 0);
				}
				if (!PED::IS_PED_INJURED(Local_1822[2 /*26*/]))
				{
					func_340(Local_1822[2 /*26*/], 2, 2, 0, 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1822[2 /*26*/], 50, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1822[2 /*26*/], 28, 1);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_1822[2 /*26*/], 0);
				}
				if (!PED::IS_PED_INJURED(Local_1822[3 /*26*/]))
				{
					func_340(Local_1822[3 /*26*/], 2, 2, 0, 13, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1822[3 /*26*/], 50, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(Local_1822[3 /*26*/], 28, 1);
					PED::REMOVE_PED_DEFENSIVE_AREA(Local_1822[3 /*26*/], 0);
				}
				*uParam0++;
			}
			break;
	}
	func_195(&Local_1822, 0, 1, 1);
	func_327(Local_2165[4 /*14*/], PLAYER::PLAYER_PED_ID(), 300, 500, &(Local_2165[4 /*14*/].f_13), 10f, 10f, 3f, 0f, 0f, 5f, 0f, -1.5f, 0f, 0, 0, 1120403456);
	func_329(&(Local_2165[4 /*14*/]), PLAYER::PLAYER_PED_ID(), 3222.844f, -4688.636f, 114.2127f, 12f, 16f, 3f);
	func_329(&(Local_2165[4 /*14*/]), PLAYER::PLAYER_PED_ID(), 3217.266f, -4748.12f, 112.9242f, 16f, 16f, 3f);
	func_326(Local_2165[4 /*14*/], 1, Local_98, 0.8f, 0, 1, Local_110, 150f, 1120403456);
	func_326(Local_2165[4 /*14*/], 0, Local_95, 0.8f, 0, 1, Local_107, 150f, 1120403456);
	func_326(Local_2165[4 /*14*/], 4, Local_101, 0.8f, 0, 1, Local_113, 150f, 1120403456);
	func_326(Local_2165[4 /*14*/], 5, Local_104, 0.8f, 0, 1, Local_116, 150f, 1120403456);
	func_334(&Local_1822, 1);
}

void func_334(int iParam0, int iParam1)//Position - 0x25FB4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (iParam1 == 1)
		{
			GlobalFunc_661((*iParam0)[iVar0 /*26*/], &((iParam0[iVar0 /*26*/])->f_2), -1, 0, 0, 0, -1082130432, 0);
		}
		else
		{
			GlobalFunc_589(&((iParam0[iVar0 /*26*/])->f_2));
		}
		iVar0++;
	}
}


void func_336(int iParam0, var uParam1, var uParam2)//Position - 0x26123
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ITEMSET::IS_ITEMSET_VALID(*uParam1))
		{
			ITEMSET::DESTROY_ITEMSET(*uParam1);
		}
		if (!ITEMSET::IS_ITEMSET_VALID(*uParam1))
		{
			*uParam1 = ITEMSET::CREATE_ITEMSET(1);
		}
		ITEMSET::ADD_TO_ITEMSET(*uParam2, *uParam1);
		PED::SET_PED_PREFERRED_COVER_SET(iParam0, *uParam1);
	}
}

void func_337(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8, float fParam9)//Position - 0x2616D
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, iParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 129, iParam2);
		PED::SET_PED_CONFIG_FLAG(iParam0, 130, iParam3);
		PED::SET_PED_CONFIG_FLAG(iParam0, 131, iParam4);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 12, iParam6);
		if (fParam5 >= 0f)
		{
			PED::SET_COMBAT_FLOAT(iParam0, 4, fParam5);
		}
		if (fParam8 >= 0f)
		{
			PED::SET_COMBAT_FLOAT(iParam0, 3, fParam8);
		}
		if (fParam9 >= 0f)
		{
			PED::SET_COMBAT_FLOAT(iParam0, 1, fParam9);
		}
		if (fParam7 >= 0f)
		{
			PED::SET_COMBAT_FLOAT(iParam0, 0, fParam7);
		}
	}
}

void func_338(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x261F0
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_ACCURACY(iParam0, iParam1);
		PED::SET_PED_SHOOT_RATE(iParam0, iParam2);
		PED::SET_PED_FIRING_PATTERN(iParam0, iParam3);
	}
}

void func_339(int iParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x2621A
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_SPHERE_DEFENSIVE_AREA(iParam0, Param1, fParam4, iParam5, 0);
	}
}

void func_340(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2623B
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, iParam1);
		PED::SET_PED_COMBAT_ABILITY(iParam0, iParam2);
		PED::SET_PED_COMBAT_RANGE(iParam0, iParam3);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 2, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, 0);
		if (iParam4 != -1)
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, iParam4, 1);
		}
		PED::SET_PED_CAN_RAGDOLL(iParam0, iParam5);
	}
}

void func_341(struct<8> Param0, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, char* sParam14, float fParam15, int iParam16, float fParam17, int iParam18, int iParam19, int iParam20)//Position - 0x262A4
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(Param0, 0))
	{
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Param0))
		{
			if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(Param0.f_7, sParam14))
			{
				if (iParam19 == 0)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Param0, Param0.f_7, sParam14, 1);
				}
				else if (iParam19 == 1)
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Param0, Param0.f_7, sParam14, iParam20, 0, 786603);
				}
				if (fParam17 > 0f)
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0, fParam17);
				}
				else if (iParam18 == 1)
				{
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Param0, func_342(ENTITY::GET_ENTITY_COORDS(Param0, 1), Param0.f_7, sParam14, 16));
				}
				VEHICLE::SET_PLAYBACK_SPEED(Param0, fParam15);
				if (iParam16 == 1)
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(Param0);
				}
			}
		}
	}
}

float func_342(struct<3> Param0, var uParam3, var uParam4, int iParam5)//Position - 0x26341
{
	var uVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	
	uVar0 = VEHICLE::GET_VEHICLE_RECORDING_ID(uParam3, uParam4);
	fVar1 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(uVar0);
	fVar2 = (fVar1 / 2f);
	fVar3 = (fVar1 / 2f);
	iVar4 = 0;
	while (iVar4 <= iParam5)
	{
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) < SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 - fVar3);
		}
		if (SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 - fVar3), 0f, fVar1))) > SYSTEM::VDIST2(Param0, VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(uVar0, GlobalFunc_253((fVar2 + fVar3), 0f, fVar1))))
		{
			fVar3 = (fVar3 / 2f);
			fVar2 = (fVar2 + fVar3);
		}
		iVar4++;
	}
	return fVar2;
}


void func_344(int iParam0, int iParam1)//Position - 0x2642D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*26*/]))
		{
			TASK::TASK_STAND_STILL((*iParam0)[iVar0 /*26*/], -1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS((*iParam0)[iVar0 /*26*/], 1);
			if (iParam1 == 1)
			{
				(iParam0[iVar0 /*26*/])->f_1 = GlobalFunc_6783((*iParam0)[iVar0 /*26*/], 1, 0);
			}
			(iParam0[iVar0 /*26*/])->f_11 = 1;
		}
		iVar0++;
	}
}

int func_345(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x26495
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		iVar0 = func_346(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, 1) + Vector(3f, 0f, 0f), 0f, iParam3, iParam4, iParam5, 0, iParam6, iParam7);
		PED::SET_PED_INTO_VEHICLE(iVar0, iParam1, iParam2);
	}
	return iVar0;
}

int func_346(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x264D2
{
	int iVar0;
	
	iVar0 = PED::CREATE_PED(26, iParam0, Param1, fParam4, 1, 1);
	PED::SET_PED_COMPONENT_VARIATION(iVar0, 2, 1, 0, 0);
	PED::SET_PED_MAX_HEALTH(iVar0, iParam9);
	ENTITY::SET_ENTITY_HEALTH(iVar0, iParam9);
	PED::ADD_ARMOUR_TO_PED(iVar0, iParam10);
	PED::SET_PED_DIES_WHEN_INJURED(iVar0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iParam5);
	PED::SET_PED_AS_ENEMY(iVar0, 1);
	PED::SET_PED_TARGET_LOSS_RESPONSE(iVar0, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 47, 1);
	WEAPON::GIVE_WEAPON_TO_PED(iVar0, iParam6, -1, 1, 1);
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iParam6, 1);
	WEAPON::SET_PED_INFINITE_AMMO(iVar0, 1, iParam6);
	if (iParam7 != 0)
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iVar0, iParam6, iParam7);
	}
	PED::SET_PED_DUCKING(iVar0, iParam8);
	TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iVar0, 0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 188, 1);
	PED::SET_PED_CONFIG_FLAG(iVar0, 118, 0);
	PED::SET_PED_CONFIG_FLAG(iVar0, 132, 1);
	PED::SET_COMBAT_FLOAT(iVar0, 12, 30f);
	GlobalFunc_593(iVar0, 0);
	return iVar0;
}


void func_348(var uParam0)//Position - 0x26644
{
	float fVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3266.92f, -4603.24f, 116.83f, 30f, 3.5f, 3f, 0, 1, 0) || (func_320(&Local_1400) + func_320(&Local_1242)) >= 5)
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_54) && STREAMING::HAS_MODEL_LOADED(iLocal_55))
				{
					Local_2165[1 /*14*/] = func_330(&(Local_2165[1 /*14*/]), 600, 0, 1, 1, 0, 1, 56, 1, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_2165[1 /*14*/], 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2165[1 /*14*/], 1);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_2165[1 /*14*/], 0);
					VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2165[1 /*14*/], 1);
					Local_1663[0 /*26*/] = func_345(iLocal_54, Local_2165[1 /*14*/], -1, iLocal_561, joaat("weapon_assaultrifle"), 0, 200, 0);
					Local_1663[1 /*26*/] = func_345(iLocal_54, Local_2165[1 /*14*/], 0, iLocal_561, joaat("weapon_assaultrifle"), 0, 200, 0);
					func_344(&Local_1663, 0);
					func_341(Local_2165[1 /*14*/], sLocal_53, 1.4f, 0, 1750f, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("MI_1_VAN_ARRIVES_02");
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2165[1 /*14*/], "MI_1_VAN_02", 0);
					iLocal_642 = 0;
					iLocal_643 = MISC::GET_GAME_TIMER();
					*uParam0++;
				}
			}
			break;
		
		case 1:
			if (func_351(Local_2165[1 /*14*/], &fVar0, &(Local_2165[1 /*14*/].f_11)))
			{
				if (fVar0 > 57.5f || Local_2165[1 /*14*/].f_11 == 1)
				{
					ENTITY::SET_ENTITY_INVINCIBLE(Local_2165[1 /*14*/], 0);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2165[1 /*14*/], 0);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_2165[1 /*14*/], 1);
				}
				if (fVar0 > 96f || Local_2165[1 /*14*/].f_11 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_2165[1 /*14*/].f_1))
					{
						HUD::REMOVE_BLIP(&(Local_2165[1 /*14*/].f_1));
					}
				}
				if (fVar0 > 96f || Local_2165[1 /*14*/].f_11 == 1)
				{
					if (!PED::IS_PED_INJURED(Local_1663[0 /*26*/]))
					{
						func_350(Local_1663[0 /*26*/], Local_119, Local_122, 48f, 0);
						func_340(Local_1663[0 /*26*/], 2, 1, 1, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1663[0 /*26*/], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1663[0 /*26*/], 28, 1);
						func_338(Local_1663[0 /*26*/], 4, 100, -687903391);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1663[0 /*26*/], 100f, 0);
					}
					if (!PED::IS_PED_INJURED(Local_1663[1 /*26*/]))
					{
						func_350(Local_1663[1 /*26*/], Local_119, Local_122, 48f, 0);
						func_340(Local_1663[1 /*26*/], 2, 1, 1, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1663[1 /*26*/], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1663[1 /*26*/], 28, 1);
						func_338(Local_1663[1 /*26*/], 3, 100, -687903391);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1663[1 /*26*/], 100f, 0);
					}
				}
				if (Local_2165[1 /*14*/].f_11 == 1)
				{
					Local_2165[1 /*14*/].f_11 = 0;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_VAN_ARRIVES_02"))
			{
				AUDIO::STOP_AUDIO_SCENE("MI_1_VAN_ARRIVES_02");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2165[1 /*14*/], 0))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2165[1 /*14*/], 0);
			}
			if (!PED::IS_PED_INJURED(Local_1663[0 /*26*/]))
			{
				if (Local_1663[0 /*26*/].f_13 == 0)
				{
					if (iLocal_600 == 1)
					{
						Local_1663[0 /*26*/].f_12 = 0;
						Local_1663[0 /*26*/].f_15 = 100;
						Local_1663[0 /*26*/].f_13 = 1;
					}
				}
				switch (Local_1663[0 /*26*/].f_15)
				{
					case 100:
						if (Local_1663[0 /*26*/].f_12 == 0)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1663[0 /*26*/], 100f, 0);
							func_340(Local_1663[0 /*26*/], 1, 1, 1, 29, 1);
							func_350(Local_1663[0 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
							func_349(Local_1663[0 /*26*/], 0.6f, 0.25f);
							func_337(Local_1663[0 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
							Local_1663[0 /*26*/].f_12 = 1;
						}
						break;
					}
			}
			if (!PED::IS_PED_INJURED(Local_1663[1 /*26*/]))
			{
				if (Local_1663[1 /*26*/].f_13 == 0)
				{
					if (iLocal_600 == 1)
					{
						Local_1663[1 /*26*/].f_12 = 0;
						Local_1663[1 /*26*/].f_15 = 100;
						Local_1663[1 /*26*/].f_13 = 1;
					}
				}
				switch (Local_1663[1 /*26*/].f_15)
				{
					case 100:
						if (Local_1663[1 /*26*/].f_12 == 0)
						{
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1663[1 /*26*/], 100f, 0);
							func_340(Local_1663[1 /*26*/], 1, 1, 1, 29, 1);
							func_350(Local_1663[1 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
							func_349(Local_1663[1 /*26*/], 0.75f, 0f);
							func_337(Local_1663[1 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
							Local_1663[1 /*26*/].f_12 = 1;
						}
						break;
					}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1716[0 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1716[0 /*26*/]))
				{
					switch (Local_1716[0 /*26*/].f_15)
					{
						case 0:
							if (Local_1716[0 /*26*/].f_12 == 0)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1716[0 /*26*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1716[0 /*26*/], 13, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1716[0 /*26*/], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1716[0 /*26*/], 3, 1);
								PED::SET_PED_COMBAT_RANGE(Local_1716[0 /*26*/], 2);
								PED::SET_PED_COMBAT_MOVEMENT(Local_1716[0 /*26*/], 2);
								func_338(Local_1716[0 /*26*/], 4, 100, -687903391);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1716[0 /*26*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1716[0 /*26*/], 0);
								Local_1716[0 /*26*/].f_12 = 1;
							}
							break;
						}
					}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1716[1 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1716[1 /*26*/]))
				{
					switch (Local_1716[1 /*26*/].f_15)
					{
						case 0:
							if (Local_1716[1 /*26*/].f_12 == 0)
							{
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1716[1 /*26*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1716[1 /*26*/], 13, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1716[1 /*26*/], 1, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1716[1 /*26*/], 3, 1);
								PED::SET_PED_COMBAT_RANGE(Local_1716[1 /*26*/], 1);
								PED::SET_PED_COMBAT_MOVEMENT(Local_1716[1 /*26*/], 2);
								func_338(Local_1716[1 /*26*/], 4, 100, -687903391);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1716[1 /*26*/], 200f, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1716[1 /*26*/], 0);
								Local_1716[1 /*26*/].f_12 = 1;
							}
							break;
						}
					}
			}
			break;
	}
	func_195(&Local_1663, 0, 1, 1);
	func_195(&Local_1716, 0, 1, 1);
	func_327(Local_2165[1 /*14*/], PLAYER::PLAYER_PED_ID(), 300, 450, &(Local_2165[1 /*14*/].f_13), 10f, 10f, 3f, 0f, 0f, 5f, 0f, -1.5f, 0f, 0, 0, 1120403456);
	func_329(&(Local_2165[1 /*14*/]), PLAYER::PLAYER_PED_ID(), 3238.347f, -4687.663f, 114.673f, 36f, 15f, 4f);
	func_326(Local_2165[1 /*14*/], 1, Local_98, 0.8f, 0, 1, Local_110, 150f, 1120403456);
	func_326(Local_2165[1 /*14*/], 0, Local_95, 0.8f, 0, 1, Local_107, 150f, 1120403456);
	func_326(Local_2165[1 /*14*/], 4, Local_101, 0.8f, 0, 1, Local_113, 150f, 1120403456);
	func_326(Local_2165[1 /*14*/], 5, Local_104, 0.8f, 0, 1, Local_116, 150f, 1120403456);
	if (iLocal_642 == 0)
	{
		if (iLocal_643 != 0)
		{
			if (GlobalFunc_2521(2000, iLocal_643))
			{
				iLocal_642 = 1;
			}
		}
	}
	func_334(&Local_1663, iLocal_642);
	func_334(&Local_1716, iLocal_642);
}

void func_349(int iParam0, float fParam1, float fParam2)//Position - 0x26DDD
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_COMBAT_FLOAT(iParam0, 5, fParam1);
		PED::SET_COMBAT_FLOAT(iParam0, 8, fParam2);
	}
}

void func_350(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7, int iParam8)//Position - 0x26E02
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::SET_PED_ANGLED_DEFENSIVE_AREA(iParam0, Param1, Param4, fParam7, iParam8, 0);
	}
}

int func_351(int iParam0, var uParam1, var uParam2)//Position - 0x26E27
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				*uParam1 = func_123(iParam0);
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (PED::IS_PED_INJURED(iVar0))
					{
						*uParam2 = 1;
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iParam0);
					}
				}
				return 1;
			}
			else if (*uParam2 == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_352(var uParam0)//Position - 0x26E93
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	var uVar7;
	var uVar8;
	
	switch (*uParam0)
	{
		case 0:
			STREAMING::REQUEST_ANIM_DICT("missmic1ig_2");
			if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3267.56f, -4588.922f, 118.0057f, 30f, 3.5f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3287.814f, -4589.952f, 116.5892f, 3294.002f, -4561.976f, 120.122f, 12f, 0, 1, 0)) || (iLocal_636 != 0 && GlobalFunc_2521(25000, iLocal_636)))
			{
				if (STREAMING::HAS_MODEL_LOADED(iLocal_54) && STREAMING::HAS_MODEL_LOADED(iLocal_55))
				{
					Local_2165[0 /*14*/] = func_330(&(Local_2165[0 /*14*/]), 800, 0, 1, 1, 1, 1, 30, 2, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_2165[0 /*14*/], 1);
					ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2165[0 /*14*/], 1);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_2165[0 /*14*/], 0);
					VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_2165[0 /*14*/], 1);
					Local_1242[0 /*26*/] = func_345(iLocal_54, Local_2165[0 /*14*/], -1, iLocal_561, joaat("weapon_pistol"), 0, 200, 0);
					Local_1242[1 /*26*/] = func_345(iLocal_54, Local_2165[0 /*14*/], 0, iLocal_561, joaat("weapon_pistol"), joaat("component_at_pi_flsh"), 200, 0);
					Local_1242[2 /*26*/] = func_345(iLocal_54, Local_2165[0 /*14*/], 1, iLocal_561, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 200, 0);
					Local_1242[3 /*26*/] = func_345(iLocal_54, Local_2165[0 /*14*/], 2, iLocal_561, joaat("weapon_assaultrifle"), 0, 200, 0);
					func_344(&Local_1242, 0);
					PED::SET_PED_SEEING_RANGE(Local_1242[0 /*26*/], 20f);
					PED::SET_PED_SEEING_RANGE(Local_1242[1 /*26*/], 15f);
					PED::SET_PED_SEEING_RANGE(Local_1242[2 /*26*/], 20f);
					PED::SET_PED_SEEING_RANGE(Local_1242[3 /*26*/], 20f);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1242[0 /*26*/], 1);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1242[1 /*26*/], 1);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1242[2 /*26*/], 1);
					ENTITY::SET_ENTITY_INVINCIBLE(Local_1242[3 /*26*/], 1);
					func_341(Local_2165[0 /*14*/], sLocal_53, 1.35f, 0, 0, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("MI_1_VAN_ARRIVES_01");
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(Local_2165[0 /*14*/], "MI_1_VAN_01", 0);
					RECORDING::_0x48621C9FCA3EBD28(3);
					iLocal_696 = 1;
					*uParam0++;
				}
			}
			break;
		
		case 1:
			STREAMING::REQUEST_ANIM_DICT("missmic1ig_2");
			if (func_351(Local_2165[0 /*14*/], &fVar0, &(Local_2165[0 /*14*/].f_11)))
			{
				if (fVar0 > 32f && fVar0 < 48f)
				{
					iLocal_622 = 1;
				}
				else if (fVar0 > 48f)
				{
					if (iLocal_623 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2165[0 /*14*/], 0))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(Local_2165[0 /*14*/], 0);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_2165[0 /*14*/], 0);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_2165[0 /*14*/], 1);
							if (ENTITY::DOES_ENTITY_EXIST(Local_1242[0 /*26*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_1242[0 /*26*/]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_1242[0 /*26*/], 0);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_1242[1 /*26*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_1242[1 /*26*/]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_1242[1 /*26*/], 0);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_1242[2 /*26*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_1242[2 /*26*/]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_1242[2 /*26*/], 0);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_1242[3 /*26*/]))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_1242[3 /*26*/]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(Local_1242[3 /*26*/], 0);
								}
							}
						}
						iLocal_623 = 1;
					}
				}
				if (fVar0 > 97f)
				{
					if (Local_1242[0 /*26*/].f_12 == 0)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2165[0 /*14*/], 0))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_2165[0 /*14*/]);
						}
						Local_1242[0 /*26*/].f_12 = 1;
					}
				}
				if (Local_2165[0 /*14*/].f_11 == 1)
				{
					Local_2165[0 /*14*/].f_11 = 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2165[0 /*14*/], PLAYER::PLAYER_PED_ID(), 1))
				{
					iLocal_610 = 1;
				}
			}
			else
			{
				*uParam0++;
			}
			break;
		
		case 2:
			STREAMING::REQUEST_ANIM_DICT("missmic1ig_2");
			if (STREAMING::HAS_ANIM_DICT_LOADED("missmic1ig_2"))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2165[0 /*14*/]))
				{
					if (iLocal_610 == 0)
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(Local_2165[0 /*14*/], 1) };
						Var4 = { ENTITY::GET_ENTITY_ROTATION(Local_2165[0 /*14*/], 2) };
						if (!ENTITY::IS_ENTITY_DEAD(Local_1242[0 /*26*/]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1242[0 /*26*/]);
							func_359(Local_1242[0 /*26*/], 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1242[0 /*26*/], Local_2165[0 /*14*/], 1);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_1242[0 /*26*/], "missmic1ig_2", "jump_out_peda", Var1, Var4, 4f, -4f, -1, 4104, 0, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1242[0 /*26*/], 0, 0);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[0 /*26*/], 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[0 /*26*/], 16);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[0 /*26*/], 4096);
							func_358(&(Local_1242[0 /*26*/]), 1);
							Local_1242[0 /*26*/].f_15 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_1242[1 /*26*/]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1242[1 /*26*/]);
							func_359(Local_1242[1 /*26*/], 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1242[1 /*26*/], Local_2165[0 /*14*/], 1);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_1242[1 /*26*/], "missmic1ig_2", "jump_out_pedb", Var1, Var4, 4f, -4f, -1, 4104, 0, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1242[1 /*26*/], 0, 0);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[1 /*26*/], 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[1 /*26*/], 16);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[1 /*26*/], 4096);
							func_358(&(Local_1242[1 /*26*/]), 1);
							Local_1242[1 /*26*/].f_15 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_1242[2 /*26*/]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1242[2 /*26*/]);
							func_359(Local_1242[2 /*26*/], 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1242[2 /*26*/], Local_2165[0 /*14*/], 1);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_1242[2 /*26*/], "missmic1ig_2", "jump_out_pedc", Var1, Var4, 4f, -4f, -1, 4106, 0, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1242[2 /*26*/], 0, 0);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[2 /*26*/], 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[2 /*26*/], 16);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[2 /*26*/], 4096);
							func_358(&(Local_1242[2 /*26*/]), 1);
							Local_1242[2 /*26*/].f_15 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_1242[3 /*26*/]))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(Local_1242[3 /*26*/]);
							func_359(Local_1242[3 /*26*/], 1);
							ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(Local_1242[3 /*26*/], Local_2165[0 /*14*/], 1);
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_1242[3 /*26*/], "missmic1ig_2", "jump_out_pedd", Var1, Var4, 4f, -4f, -1, 4104, 0, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1242[3 /*26*/], 0, 0);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[3 /*26*/], 1);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[3 /*26*/], 16);
							PED::SET_RAGDOLL_BLOCKING_FLAGS(Local_1242[3 /*26*/], 4096);
							func_358(&(Local_1242[3 /*26*/]), 1);
							Local_1242[3 /*26*/].f_15 = 0;
						}
						ENTITY::SET_ENTITY_HEALTH(Local_2165[0 /*14*/], GlobalFunc_254((ENTITY::GET_ENTITY_HEALTH(Local_2165[0 /*14*/]) - 100), 400, 700));
						VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(Local_2165[0 /*14*/], 0);
					}
					else
					{
						func_358(&(Local_1242[0 /*26*/]), 11);
						func_358(&(Local_1242[1 /*26*/]), 11);
						func_358(&(Local_1242[2 /*26*/]), 11);
						func_358(&(Local_1242[3 /*26*/]), 11);
					}
				}
				AUDIO::STOP_AUDIO_SCENE("MI_1_VAN_ARRIVES_01");
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_2165[0 /*14*/], 0))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Local_2165[0 /*14*/], 0);
				}
				*uParam0++;
			}
			break;
		
		case 3:
			if (iLocal_610 == 0)
			{
				func_356(&Local_1242);
			}
			else if (iLocal_610 == 1)
			{
				if (iLocal_611 == 1)
				{
					func_356(&Local_1242);
				}
				if (iLocal_695 == 0)
				{
					RECORDING::_0x81CBAE94390F9F89();
					iLocal_695 = 1;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1242[0 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1242[0 /*26*/]))
				{
					switch (Local_1242[0 /*26*/].f_18)
					{
						case 1:
							switch (Local_1242[0 /*26*/].f_15)
							{
								case 0:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1242[0 /*26*/], MISC::GET_HASH_KEY("door")))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_2165[0 /*14*/]))
											{
												VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2165[0 /*14*/], 0, 0, 0);
												iLocal_572 = 1;
												Local_1242[0 /*26*/].f_15++;
											}
										}
									}
									break;
								
								case 1:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[0 /*26*/], "missmic1ig_2", "jump_out_peda") > 0.975f)
										{
											Local_1242[0 /*26*/].f_12 = 0;
											Local_1242[0 /*26*/].f_15++;
										}
										else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[0 /*26*/], "missmic1ig_2", "jump_out_peda") > 0.4f)
										{
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[0 /*26*/], 1);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[0 /*26*/], 16);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[0 /*26*/], 4096);
											if (GlobalFunc_4951(Local_1242[0 /*26*/], PLAYER::PLAYER_PED_ID()) < 5f && PED::CAN_PED_SEE_HATED_PED(Local_1242[0 /*26*/], PLAYER::PLAYER_PED_ID()))
											{
												func_358(&(Local_1242[0 /*26*/]), 11);
												Local_1242[0 /*26*/].f_15 = 0;
											}
											if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_1242[0 /*26*/], PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1242[0 /*26*/], PLAYER::PLAYER_PED_ID(), 1))
											{
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1242[0 /*26*/]);
												func_358(&(Local_1242[0 /*26*/]), 11);
												iLocal_610 = 1;
												Local_1242[0 /*26*/].f_15 = 0;
											}
										}
									}
									break;
								
								case 2:
									if (Local_1242[0 /*26*/].f_12 == 0)
									{
										TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1242[0 /*26*/], Local_2236[28 /*13*/].f_1, -1, 0, 0f, 1, 1, Local_2236[28 /*13*/], 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1242[0 /*26*/], 0);
										Local_1242[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
										Local_1242[0 /*26*/].f_12 = 1;
									}
									break;
							}
							if ((PED::IS_PED_IN_COMBAT(Local_1242[0 /*26*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1242[0 /*26*/], PLAYER::PLAYER_PED_ID(), 1)) || iLocal_610 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[0 /*26*/], "missmic1ig_2", "jump_out_peda") > 0.4f))
								{
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[0 /*26*/], 1);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[0 /*26*/], 16);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[0 /*26*/], 4096);
									func_358(&(Local_1242[0 /*26*/]), 11);
									Local_1242[0 /*26*/].f_15 = 0;
								}
							}
							if (iLocal_610 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_2165[0 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_2165[0 /*14*/]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2165[0 /*14*/], PLAYER::PLAYER_PED_ID(), 1) || func_355(PLAYER::PLAYER_PED_ID(), 1, ENTITY::GET_ENTITY_COORDS(Local_2165[0 /*14*/], 1), 4f))
										{
											iLocal_610 = 1;
										}
									}
								}
							}
							break;
						
						case 11:
							if (Local_1242[0 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1242[0 /*26*/], 100f, 0);
								func_340(Local_1242[0 /*26*/], 1, 2, 2, 0, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1242[0 /*26*/], 28, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1242[0 /*26*/], 51, 1);
								func_339(Local_1242[0 /*26*/], 3266.66f, -4615.01f, 115.07f, 2.75f, 0);
								func_349(Local_1242[0 /*26*/], 1f, 1f);
								func_337(Local_1242[0 /*26*/], 1, 0, 0, 0, 6f, 0, 0f, 2.5f, 1082130432);
								func_338(Local_1242[0 /*26*/], 4, 100, -687903391);
								GlobalFunc_3040(Local_1242[0 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1242[0 /*26*/], 0);
								iLocal_610 = 1;
								Local_1242[0 /*26*/].f_12 = 1;
							}
							break;
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[0 /*26*/], "missmic1ig_2", "jump_out_peda") > 0.399f)
					{
						TASK::STOP_ANIM_PLAYBACK(Local_1242[0 /*26*/], 0, 0);
						TASK::SET_HIGH_FALL_TASK(Local_1242[0 /*26*/], 2000, 10000, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_1242[0 /*26*/], 1, 0f, 5f, 0f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
					}
					if (iLocal_610 == 0)
					{
						if (Local_1242[0 /*26*/].f_18 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::GET_PED_SOURCE_OF_DEATH(Local_1242[0 /*26*/])))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(Local_1242[0 /*26*/])) == PLAYER::PLAYER_PED_ID())
								{
									iLocal_610 = 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[0 /*26*/], "missmic1ig_2", "jump_out_peda", 3))
					{
						func_196(&(Local_1242[0 /*26*/]), 0, 1, 1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1242[1 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1242[1 /*26*/]))
				{
					switch (Local_1242[1 /*26*/].f_18)
					{
						case 1:
							switch (Local_1242[1 /*26*/].f_15)
							{
								case 0:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1242[1 /*26*/], MISC::GET_HASH_KEY("door")))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_2165[0 /*14*/]))
											{
												VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2165[0 /*14*/], 1, 0, 0);
												iLocal_572 = 1;
												Local_1242[1 /*26*/].f_15++;
											}
										}
									}
									break;
								
								case 1:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[1 /*26*/], "missmic1ig_2", "jump_out_pedb") > 0.95f)
										{
											Local_1242[1 /*26*/].f_12 = 0;
											Local_1242[1 /*26*/].f_15++;
										}
										else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[1 /*26*/], "missmic1ig_2", "jump_out_pedb") > 0.185f)
										{
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[1 /*26*/], 1);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[1 /*26*/], 16);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[1 /*26*/], 4096);
											if (GlobalFunc_4951(Local_1242[1 /*26*/], PLAYER::PLAYER_PED_ID()) < 5f && PED::CAN_PED_SEE_HATED_PED(Local_1242[1 /*26*/], PLAYER::PLAYER_PED_ID()))
											{
												func_358(&(Local_1242[1 /*26*/]), 11);
												Local_1242[1 /*26*/].f_15 = 0;
											}
											if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_1242[1 /*26*/], PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1242[1 /*26*/], PLAYER::PLAYER_PED_ID(), 1))
											{
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1242[1 /*26*/]);
												func_358(&(Local_1242[1 /*26*/]), 11);
												iLocal_610 = 1;
												Local_1242[1 /*26*/].f_15 = 0;
											}
										}
									}
									break;
								
								case 2:
									if (Local_1242[1 /*26*/].f_12 == 0)
									{
										TASK::OPEN_SEQUENCE_TASK(&uVar7);
										TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Local_2236[2 /*13*/].f_1, 3254.1f, -4587.78f, 118.05f, 0.7f, 0, 1f, 0f, 1, 1, 0, -957453492);
										TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Local_2236[2 /*13*/].f_1, -1, 1, 0.25f, 1, 0, Local_2236[2 /*13*/], 1);
										TASK::CLOSE_SEQUENCE_TASK(uVar7);
										TASK::TASK_PERFORM_SEQUENCE(Local_1242[1 /*26*/], uVar7);
										TASK::CLEAR_SEQUENCE_TASK(&uVar7);
										func_340(Local_1242[1 /*26*/], 1, 2, 2, 51, 1);
										func_339(Local_1242[1 /*26*/], 3252.73f, -4600.65f, 115.64f, 1.5f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1242[1 /*26*/], 0);
										Local_1242[1 /*26*/].f_16 = MISC::GET_GAME_TIMER();
										Local_1242[1 /*26*/].f_12 = 1;
									}
									break;
							}
							if ((PED::IS_PED_IN_COMBAT(Local_1242[1 /*26*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1242[1 /*26*/], PLAYER::PLAYER_PED_ID(), 1)) || iLocal_610 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[1 /*26*/], "missmic1ig_2", "jump_out_pedb") > 0.185f))
								{
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[1 /*26*/], 1);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[1 /*26*/], 16);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[1 /*26*/], 4096);
									func_358(&(Local_1242[1 /*26*/]), 11);
									Local_1242[1 /*26*/].f_15 = 0;
								}
							}
							if (iLocal_610 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_2165[0 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_2165[0 /*14*/]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2165[0 /*14*/], PLAYER::PLAYER_PED_ID(), 1) || func_355(PLAYER::PLAYER_PED_ID(), 1, ENTITY::GET_ENTITY_COORDS(Local_2165[0 /*14*/], 1), 4f))
										{
											iLocal_610 = 1;
										}
									}
								}
							}
							break;
						
						case 11:
							if (Local_1242[1 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1242[1 /*26*/], 100f, 0);
								func_340(Local_1242[1 /*26*/], 1, 2, 1, 51, 1);
								func_339(Local_1242[1 /*26*/], 3252.73f, -4600.65f, 115.64f, 1.5f, 0);
								func_338(Local_1242[1 /*26*/], 4, 100, -687903391);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1242[1 /*26*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1242[1 /*26*/], 28, 1);
								PED::SET_COMBAT_FLOAT(Local_1242[1 /*26*/], 0, 0.05f);
								GlobalFunc_3040(Local_1242[1 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1242[1 /*26*/], 0);
								iLocal_610 = 1;
								Local_1242[1 /*26*/].f_12 = 1;
							}
							break;
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[1 /*26*/], "missmic1ig_2", "jump_out_pedb") > 0.165f)
					{
						TASK::STOP_ANIM_PLAYBACK(Local_1242[1 /*26*/], 0, 0);
						TASK::SET_HIGH_FALL_TASK(Local_1242[1 /*26*/], 2000, 10000, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_1242[1 /*26*/], 1, 0f, 5f, 0f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
					}
					if (iLocal_610 == 0)
					{
						if (Local_1242[1 /*26*/].f_18 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::GET_PED_SOURCE_OF_DEATH(Local_1242[1 /*26*/])))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(Local_1242[1 /*26*/])) == PLAYER::PLAYER_PED_ID())
								{
									iLocal_610 = 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[1 /*26*/], "missmic1ig_2", "jump_out_pedb", 3))
					{
						func_196(&(Local_1242[1 /*26*/]), 0, 1, 1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1242[2 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1242[2 /*26*/]))
				{
					switch (Local_1242[2 /*26*/].f_18)
					{
						case 1:
							switch (Local_1242[2 /*26*/].f_15)
							{
								case 0:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1242[2 /*26*/], MISC::GET_HASH_KEY("door")))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_2165[0 /*14*/]))
											{
												VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2165[0 /*14*/], 2, 0, 0);
												iLocal_572 = 1;
												Local_1242[2 /*26*/].f_15++;
											}
										}
									}
									break;
								
								case 1:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3))
									{
										PED::SET_PED_RESET_FLAG(Local_1242[2 /*26*/], 156, 1);
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[2 /*26*/], "missmic1ig_2", "jump_out_pedc") > 0.925f)
										{
											Local_1242[2 /*26*/].f_12 = 0;
											Local_1242[2 /*26*/].f_15++;
										}
										else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[2 /*26*/], "missmic1ig_2", "jump_out_pedc") > 0.585f)
										{
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[2 /*26*/], 1);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[2 /*26*/], 16);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[2 /*26*/], 4096);
											if (GlobalFunc_4951(Local_1242[2 /*26*/], PLAYER::PLAYER_PED_ID()) < 5f && PED::CAN_PED_SEE_HATED_PED(Local_1242[2 /*26*/], PLAYER::PLAYER_PED_ID()))
											{
												func_358(&(Local_1242[2 /*26*/]), 11);
												Local_1242[2 /*26*/].f_15 = 0;
											}
											if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_1242[2 /*26*/], PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1242[2 /*26*/], PLAYER::PLAYER_PED_ID(), 1))
											{
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1242[2 /*26*/]);
												func_358(&(Local_1242[2 /*26*/]), 11);
												iLocal_610 = 1;
												Local_1242[2 /*26*/].f_15 = 0;
											}
										}
									}
									break;
								
								case 2:
									PED::SET_PED_RESET_FLAG(Local_1242[2 /*26*/], 156, 1);
									if (Local_1242[2 /*26*/].f_12 == 0)
									{
										func_353(Local_1242[2 /*26*/], 3260.4f, -4605.49f, 115.5f, 0.7f, 0, 3264.06f, -4588f, 116.88f, 0, 0, 0, 0, -1, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
										Local_1242[2 /*26*/].f_16 = MISC::GET_GAME_TIMER();
										Local_1242[2 /*26*/].f_12 = 1;
									}
									if (GlobalFunc_2521(750, Local_1242[2 /*26*/].f_16))
									{
										iLocal_571 = 1;
									}
									if (GlobalFunc_2521(6000, Local_1242[2 /*26*/].f_16))
									{
										func_358(&(Local_1242[2 /*26*/]), 5);
									}
									break;
							}
							if ((PED::IS_PED_IN_COMBAT(Local_1242[2 /*26*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1242[2 /*26*/], PLAYER::PLAYER_PED_ID(), 1)) || iLocal_610 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[2 /*26*/], "missmic1ig_2", "jump_out_pedc") > 0.585f))
								{
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[2 /*26*/], 1);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[2 /*26*/], 16);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[2 /*26*/], 4096);
									func_358(&(Local_1242[2 /*26*/]), 11);
									Local_1242[2 /*26*/].f_15 = 0;
								}
							}
							if (iLocal_610 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_2165[0 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_2165[0 /*14*/]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2165[0 /*14*/], PLAYER::PLAYER_PED_ID(), 1) || func_355(PLAYER::PLAYER_PED_ID(), 1, ENTITY::GET_ENTITY_COORDS(Local_2165[0 /*14*/], 1), 4f))
										{
											iLocal_610 = 1;
										}
									}
								}
							}
							break;
						
						case 5:
							if (Local_1242[2 /*26*/].f_12 == 0)
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar8);
								TASK::TASK_AIM_GUN_AT_COORD(0, 3264.06f, -4588f, 116.88f, 5000, 0, 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, 3251.02f, -4590.45f, 117.24f, 5000, 0, 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, 3264.06f, -4588f, 116.88f, 5000, 0, 0);
								TASK::TASK_AIM_GUN_AT_COORD(0, 3272.29f, -4590.3f, 117.61f, 5000, 0, 0);
								TASK::SET_SEQUENCE_TO_REPEAT(uVar8, 1);
								TASK::CLOSE_SEQUENCE_TASK(uVar8);
								TASK::TASK_PERFORM_SEQUENCE(Local_1242[2 /*26*/], uVar8);
								TASK::CLEAR_SEQUENCE_TASK(&uVar8);
								Local_1242[2 /*26*/].f_16 = MISC::GET_GAME_TIMER();
								Local_1242[2 /*26*/].f_12 = 1;
							}
							if (GlobalFunc_2521(10000, Local_1242[2 /*26*/].f_16))
							{
								iLocal_573 = 1;
							}
							if (PED::IS_PED_IN_COMBAT(Local_1242[2 /*26*/], 0) || iLocal_610 == 1)
							{
								func_358(&(Local_1242[2 /*26*/]), 11);
								Local_1242[2 /*26*/].f_15 = 0;
							}
							break;
						
						case 11:
							if (Local_1242[2 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1242[2 /*26*/], 100f, 0);
								func_340(Local_1242[2 /*26*/], 2, 1, 0, 13, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1242[2 /*26*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1242[2 /*26*/], 28, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1242[2 /*26*/], 51, 1);
								PED::REMOVE_PED_DEFENSIVE_AREA(Local_1242[2 /*26*/], 0);
								func_337(Local_1242[2 /*26*/], 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
								func_338(Local_1242[2 /*26*/], 3, 100, -687903391);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1242[2 /*26*/], 0);
								GlobalFunc_3040(Local_1242[2 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
								iLocal_610 = 1;
								Local_1242[2 /*26*/].f_12 = 1;
							}
							break;
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[2 /*26*/], "missmic1ig_2", "jump_out_pedc") > 0.51f)
					{
						TASK::STOP_ANIM_PLAYBACK(Local_1242[2 /*26*/], 0, 0);
						TASK::SET_HIGH_FALL_TASK(Local_1242[2 /*26*/], 2000, 10000, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_1242[2 /*26*/], 1, 0f, 5f, 0f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
					}
					if (iLocal_610 == 0)
					{
						if (Local_1242[2 /*26*/].f_18 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::GET_PED_SOURCE_OF_DEATH(Local_1242[2 /*26*/])))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(Local_1242[2 /*26*/])) == PLAYER::PLAYER_PED_ID())
								{
									iLocal_610 = 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[2 /*26*/], "missmic1ig_2", "jump_out_pedc", 3))
					{
						func_196(&(Local_1242[2 /*26*/]), 0, 1, 1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_1242[3 /*26*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1242[3 /*26*/]))
				{
					switch (Local_1242[3 /*26*/].f_18)
					{
						case 1:
							switch (Local_1242[3 /*26*/].f_15)
							{
								case 0:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3))
									{
										if (ENTITY::HAS_ANIM_EVENT_FIRED(Local_1242[3 /*26*/], MISC::GET_HASH_KEY("door")))
										{
											if (!ENTITY::IS_ENTITY_DEAD(Local_2165[0 /*14*/]))
											{
												VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2165[0 /*14*/], 3, 0, 0);
												iLocal_572 = 1;
												Local_1242[3 /*26*/].f_15++;
											}
										}
									}
									break;
								
								case 1:
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[3 /*26*/], "missmic1ig_2", "jump_out_pedd") > 0.95f)
										{
											Local_1242[3 /*26*/].f_12 = 0;
											Local_1242[3 /*26*/].f_15++;
										}
										else if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[3 /*26*/], "missmic1ig_2", "jump_out_pedd") > 0.53f)
										{
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[3 /*26*/], 1);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[3 /*26*/], 16);
											PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[3 /*26*/], 4096);
											if (GlobalFunc_4951(Local_1242[3 /*26*/], PLAYER::PLAYER_PED_ID()) < 5f && PED::CAN_PED_SEE_HATED_PED(Local_1242[3 /*26*/], PLAYER::PLAYER_PED_ID()))
											{
												func_358(&(Local_1242[3 /*26*/]), 11);
												Local_1242[3 /*26*/].f_15 = 0;
											}
											if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_1242[3 /*26*/], PLAYER::PLAYER_PED_ID()) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1242[3 /*26*/], PLAYER::PLAYER_PED_ID(), 1))
											{
												ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_1242[3 /*26*/]);
												func_358(&(Local_1242[3 /*26*/]), 11);
												iLocal_610 = 1;
												Local_1242[3 /*26*/].f_15 = 0;
											}
										}
									}
									break;
								
								case 2:
									if (Local_1242[3 /*26*/].f_12 == 0)
									{
										TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1242[3 /*26*/], Local_2236[27 /*13*/].f_1, -1, 0, 0f, 1, 0, Local_2236[27 /*13*/], 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1242[3 /*26*/], 0);
										Local_1242[3 /*26*/].f_16 = MISC::GET_GAME_TIMER();
										Local_1242[3 /*26*/].f_12 = 1;
									}
									break;
							}
							if ((PED::IS_PED_IN_COMBAT(Local_1242[3 /*26*/], 0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_1242[3 /*26*/], PLAYER::PLAYER_PED_ID(), 1)) || iLocal_610 == 1)
							{
								if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3) || (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[3 /*26*/], "missmic1ig_2", "jump_out_pedd") > 0.53f))
								{
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[3 /*26*/], 1);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[3 /*26*/], 16);
									PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(Local_1242[3 /*26*/], 4096);
									func_358(&(Local_1242[3 /*26*/]), 11);
									Local_1242[3 /*26*/].f_15 = 0;
								}
							}
							if (iLocal_610 == 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_2165[0 /*14*/]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_2165[0 /*14*/]))
									{
										if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2165[0 /*14*/], PLAYER::PLAYER_PED_ID(), 1) || func_355(PLAYER::PLAYER_PED_ID(), 1, ENTITY::GET_ENTITY_COORDS(Local_2165[0 /*14*/], 1), 4f))
										{
											iLocal_610 = 1;
										}
									}
								}
							}
							break;
						
						case 11:
							if (Local_1242[3 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1242[3 /*26*/], 100f, 0);
								func_340(Local_1242[3 /*26*/], 1, 2, 1, 0, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1242[3 /*26*/], 50, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1242[3 /*26*/], 28, 1);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_1242[3 /*26*/], 51, 1);
								func_339(Local_1242[3 /*26*/], 3259.12f, -4608.15f, 115.51f, 2.5f, 0);
								func_337(Local_1242[3 /*26*/], 1, 0, 1, 0, 5f, 0, 0f, 2f, 1082130432);
								func_338(Local_1242[3 /*26*/], 3, 100, -687903391);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1242[3 /*26*/], 0);
								GlobalFunc_3040(Local_1242[3 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
								iLocal_610 = 1;
								Local_1242[3 /*26*/].f_12 = 1;
							}
							break;
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_1242[3 /*26*/], "missmic1ig_2", "jump_out_pedd") > 0.51f)
					{
						TASK::STOP_ANIM_PLAYBACK(Local_1242[3 /*26*/], 0, 0);
						TASK::SET_HIGH_FALL_TASK(Local_1242[3 /*26*/], 2000, 10000, 0);
						ENTITY::APPLY_FORCE_TO_ENTITY(Local_1242[3 /*26*/], 1, 0f, 5f, 0f, 0f, 0f, 0f, 0, 1, 1, 0, 0, 1);
					}
					if (iLocal_610 == 0)
					{
						if (Local_1242[3 /*26*/].f_18 == 1)
						{
							if (ENTITY::DOES_ENTITY_EXIST(PED::GET_PED_SOURCE_OF_DEATH(Local_1242[3 /*26*/])))
							{
								if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_PED_SOURCE_OF_DEATH(Local_1242[3 /*26*/])) == PLAYER::PLAYER_PED_ID())
								{
									iLocal_610 = 1;
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1242[3 /*26*/], "missmic1ig_2", "jump_out_pedd", 3))
					{
						func_196(&(Local_1242[3 /*26*/]), 0, 1, 1);
					}
				}
			}
			break;
	}
	func_327(Local_2165[0 /*14*/], PLAYER::PLAYER_PED_ID(), 300, 400, &(Local_2165[0 /*14*/].f_13), 10f, 10f, 3f, 0f, 0f, 5f, 0f, -1.5f, 0f, 1, 45f, 70f);
	func_329(&(Local_2165[0 /*14*/]), PLAYER::PLAYER_PED_ID(), 3238.347f, -4687.663f, 114.673f, 36f, 15f, 4f);
	func_326(Local_2165[0 /*14*/], 1, Local_98, 0.8f, 0, 1, Local_110, 150f, 1120403456);
	func_326(Local_2165[0 /*14*/], 0, Local_95, 0.8f, 0, 1, Local_107, 150f, 1120403456);
	func_326(Local_2165[0 /*14*/], 4, Local_101, 0.8f, 0, 1, Local_113, 150f, 1120403456);
	func_326(Local_2165[0 /*14*/], 5, Local_104, 0.8f, 0, 1, Local_116, 150f, 1120403456);
	func_334(&Local_1242, 1);
}

void func_353(int iParam0, struct<3> Param1, float fParam4, int iParam5, struct<3> Param6, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, float fParam19, int iParam20)//Position - 0x28BC3
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		if (iParam5 == 1)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, Param6, fParam4, iParam10, iParam16, iParam17, iParam18, iParam20, 0, -957453492);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, ENTITY::GET_ENTITY_COORDS(iParam9, 1), fParam4, iParam10, iParam16, iParam17, iParam18, iParam20, 0, -957453492);
			}
		}
		else if (iParam5 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param1, Param6, fParam4, iParam10, iParam16, iParam17, iParam18, 0, 0, -957453492);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, iParam9, fParam4, iParam10, iParam16, iParam17, iParam18, 0, 0, -957453492, 20000);
			}
		}
		if (iParam11 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				if (iParam12 == 1)
				{
					TASK::TASK_SHOOT_AT_COORD(0, Param6, iParam13, iParam14);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_COORD(0, Param6, iParam13, 0, 0);
				}
			}
			else if (iParam12 == 1)
			{
				TASK::TASK_SHOOT_AT_ENTITY(0, iParam9, iParam13, iParam14);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam9, iParam13, 0);
			}
		}
		if (iParam15 == 1)
		{
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		}
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam19, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}


int func_355(int iParam0, int iParam1, struct<3> Param2, float fParam5)//Position - 0x28D3D
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			return MISC::IS_BULLET_IN_AREA(Param2, fParam5, iParam1);
		}
	}
	return 0;
}

void func_356(int iParam0)//Position - 0x28D68
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*iParam0)[iVar0 /*26*/]))
			{
				PED::SET_PED_RESET_FLAG((*iParam0)[iVar0 /*26*/], 128, 1);
			}
		}
		iVar0++;
	}
}


void func_358(var uParam0, int iParam1)//Position - 0x28DD3
{
	uParam0->f_12 = 0;
	uParam0->f_18 = iParam1;
}

void func_359(int iParam0, int iParam1)//Position - 0x28DE6
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = WEAPON::GET_BEST_PED_WEAPON(iParam0, 1);
		if (iVar0 != joaat("weapon_unarmed"))
		{
			WEAPON::SET_CURRENT_PED_WEAPON(iParam0, iVar0, iParam1);
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar0) < WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar0, 1))
			{
				WEAPON::ADD_AMMO_TO_PED(iParam0, iVar0, WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar0, 1) * 2);
			}
		}
	}
}

void func_360(int iParam0, int iParam1, int iParam2)//Position - 0x28E3C
{
	if (*iParam0 == 0)
	{
		if (iParam2 == 0 && iParam1 == 1)
		{
			if (func_320(&Local_2006) >= 1)
			{
				if (iLocal_620 == 0)
				{
					iLocal_620 = MISC::GET_GAME_TIMER();
				}
				else if (GlobalFunc_2521(3000, iLocal_620))
				{
					Local_2059[0 /*26*/] = func_346(iLocal_54, 3283.028f, -4639.921f, 114.3816f, 7.6314f, iLocal_561, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 1, 200, 0);
					Local_2059[1 /*26*/] = func_346(iLocal_54, 3261.263f, -4645.369f, 112.9646f, 352.95f, iLocal_561, joaat("weapon_pistol"), 0, 1, 200, 0);
					func_344(&Local_2059, 0);
					*iParam0 = 1;
				}
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2059[0 /*26*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2059[0 /*26*/]))
			{
				switch (Local_2059[0 /*26*/].f_15)
				{
					case 0:
						if (Local_2059[0 /*26*/].f_12 == 0)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2059[0 /*26*/], 50, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2059[0 /*26*/], 13, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2059[0 /*26*/], 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2059[0 /*26*/], 3, 1);
							PED::SET_PED_COMBAT_RANGE(Local_2059[0 /*26*/], 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_2059[0 /*26*/], 2);
							func_338(Local_2059[0 /*26*/], 3, 100, -687903391);
							PED::SET_COMBAT_FLOAT(Local_2059[0 /*26*/], 5, 1f);
							PED::SET_COMBAT_FLOAT(Local_2059[0 /*26*/], 8, 0f);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2059[0 /*26*/], 200f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2059[0 /*26*/], 0);
							Local_2059[0 /*26*/].f_12 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2059[1 /*26*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2059[1 /*26*/]))
			{
				switch (Local_2059[1 /*26*/].f_15)
				{
					case 0:
						if (Local_2059[1 /*26*/].f_12 == 0)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2059[1 /*26*/], 50, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2059[1 /*26*/], 13, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2059[1 /*26*/], 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2059[1 /*26*/], 3, 1);
							PED::SET_PED_COMBAT_RANGE(Local_2059[1 /*26*/], 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_2059[1 /*26*/], 2);
							func_338(Local_2059[1 /*26*/], 4, 100, -687903391);
							PED::SET_COMBAT_FLOAT(Local_2059[1 /*26*/], 5, 1f);
							PED::SET_COMBAT_FLOAT(Local_2059[1 /*26*/], 8, 0f);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2059[1 /*26*/], 200f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2059[1 /*26*/], 0);
							Local_2059[1 /*26*/].f_12 = 1;
						}
						break;
					}
				}
		}
		func_195(&Local_2059, 0, 1, 1);
	}
	func_334(&Local_2059, 1);
}

void func_361(int iParam0, int iParam1)//Position - 0x290AB
{
	if (*iParam0 == 0)
	{
		if (iParam1 == 0)
		{
			if (((func_320(&Local_1400) + func_320(&Local_1242)) + func_320(&Local_1347)) >= 8)
			{
				Local_2006[0 /*26*/] = func_346(iLocal_54, 3265.591f, -4642.531f, 113.3619f, 341.2f, iLocal_561, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 1, 200, 0);
				Local_2006[1 /*26*/] = func_346(iLocal_54, 3284.565f, -4651.472f, 113.3171f, 6.62f, iLocal_561, joaat("weapon_pumpshotgun"), 0, 1, 200, 0);
				func_344(&Local_2006, 0);
				*iParam0 = 1;
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2006[0 /*26*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2006[0 /*26*/]))
			{
				switch (Local_2006[0 /*26*/].f_15)
				{
					case 0:
						if (Local_2006[0 /*26*/].f_12 == 0)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2006[0 /*26*/], 50, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2006[0 /*26*/], 13, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2006[0 /*26*/], 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2006[0 /*26*/], 3, 1);
							PED::SET_PED_COMBAT_RANGE(Local_2006[0 /*26*/], 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_2006[0 /*26*/], 2);
							func_338(Local_2006[0 /*26*/], 3, 100, -687903391);
							PED::SET_COMBAT_FLOAT(Local_2006[0 /*26*/], 5, 1f);
							PED::SET_COMBAT_FLOAT(Local_2006[0 /*26*/], 8, 0f);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2006[0 /*26*/], 200f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2006[0 /*26*/], 0);
							Local_2006[0 /*26*/].f_12 = 1;
						}
						break;
					}
				}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2006[1 /*26*/]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Local_2006[1 /*26*/]))
			{
				switch (Local_2006[1 /*26*/].f_15)
				{
					case 0:
						if (Local_2006[1 /*26*/].f_12 == 0)
						{
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2006[1 /*26*/], 50, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2006[1 /*26*/], 13, 1);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2006[1 /*26*/], 1, 0);
							PED::SET_PED_COMBAT_ATTRIBUTES(Local_2006[1 /*26*/], 3, 1);
							PED::SET_PED_COMBAT_RANGE(Local_2006[1 /*26*/], 0);
							PED::SET_PED_COMBAT_MOVEMENT(Local_2006[1 /*26*/], 2);
							func_338(Local_2006[1 /*26*/], 4, 100, -687903391);
							PED::SET_COMBAT_FLOAT(Local_2006[1 /*26*/], 5, 1f);
							PED::SET_COMBAT_FLOAT(Local_2006[1 /*26*/], 8, 0f);
							TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_2006[1 /*26*/], 200f, 0);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2006[1 /*26*/], 0);
							Local_2006[1 /*26*/].f_12 = 1;
						}
						break;
					}
				}
		}
		func_195(&Local_2006, 0, 1, 1);
	}
	func_334(&Local_2006, 1);
}

void func_362(int iParam0, int iParam1, int iParam2)//Position - 0x29303
{
	if (*iParam1 == 0)
	{
		if (func_363(PLAYER::PLAYER_PED_ID(), 3294.089f, -4665.59f, 112.1512f, 3222.692f, -4659.923f, 117.2612f, 16f))
		{
			*iParam1 = 1;
		}
	}
	if (*iParam0 == 0)
	{
		if (iParam2 == 1)
		{
			if (*iParam1 == 0 && func_363(PLAYER::PLAYER_PED_ID(), 3238.834f, -4639.374f, 113.5103f, 3234.517f, -4652.879f, 118.6862f, 14f))
			{
				Local_1927[0 /*26*/] = func_346(iLocal_54, 3240.908f, -4665.776f, 114.6382f, 0f, iLocal_561, joaat("weapon_assaultrifle"), 0, 0, 200, 0);
				Local_1927[1 /*26*/] = func_346(iLocal_54, 3244.522f, -4672.792f, 113.1723f, 48.64f, iLocal_561, joaat("weapon_pumpshotgun"), 0, 0, 200, 0);
				Local_1927[2 /*26*/] = func_346(iLocal_54, 3231.536f, -4684.406f, 111.6351f, 306.53f, iLocal_561, joaat("weapon_assaultrifle"), 0, 0, 200, 0);
				func_344(&Local_1927, 0);
				func_340(Local_1927[0 /*26*/], 1, 2, 2, 29, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1927[0 /*26*/], 51, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1927[0 /*26*/], 28, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1927[0 /*26*/], 57, 0);
				func_350(Local_1927[0 /*26*/], 3239.528f, -4665.081f, 113.5779f, 3240.279f, -4665.159f, 116.5087f, 1f, 0);
				func_336(Local_1927[0 /*26*/], &(Local_1927[0 /*26*/].f_10), &(Local_2236[25 /*13*/]));
				func_337(Local_1927[0 /*26*/], 1, 1, 0, 0, 8f, 0, 0f, 1f, 4.5f);
				func_338(Local_1927[0 /*26*/], 15, 100, -687903391);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1927[0 /*26*/], 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1927[0 /*26*/], 100f, 0);
				Local_1927[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
				func_353(Local_1927[1 /*26*/], 3237.66f, -4665.48f, 113.57f, 2f, 0, Local_68, PLAYER::PLAYER_PED_ID(), 0, 0, 1, 1000, -957453492, 1, 1056964608, 1056964608, 1, 1120403456, 0);
				func_340(Local_1927[1 /*26*/], 2, 2, 0, 13, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1927[1 /*26*/], 50, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1927[1 /*26*/], 51, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1927[1 /*26*/], 28, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1927[1 /*26*/], 57, 0);
				func_338(Local_1927[1 /*26*/], 15, 125, -957453492);
				func_340(Local_1927[2 /*26*/], 2, 2, 0, 13, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1927[2 /*26*/], 50, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1927[2 /*26*/], 51, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1927[2 /*26*/], 28, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1927[2 /*26*/], 57, 0);
				func_338(Local_1927[2 /*26*/], 15, 125, -957453492);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1927[2 /*26*/], 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1927[2 /*26*/], 100f, 0);
				*iParam0 = 1;
			}
		}
	}
	else
	{
		func_195(&Local_1927, 0, 1, 1);
	}
	func_334(&Local_1927, 1);
}

int func_363(int iParam0, struct<3> Param1, struct<3> Param4, float fParam7)//Position - 0x29602
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param1, Param4, fParam7, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_364(int iParam0, int iParam1, int iParam2)//Position - 0x29638
{
	if (*iParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if (func_376(PLAYER::PLAYER_PED_ID(), 3262.183f, -4629.665f, 116.8451f, 30f, 2f, 3f) || (func_367(&Local_1769) + func_367(&Local_1479)) <= iParam2)
			{
				Local_1532[0 /*26*/] = func_346(iLocal_54, 3253.03f, -4672.16f, 113.57f, 0f, iLocal_561, joaat("weapon_assaultrifle"), 0, 0, 200, 0);
				Local_1532[1 /*26*/] = func_346(iLocal_54, 3253.27f, -4686.1f, 111.96f, 341.08f, iLocal_561, joaat("weapon_assaultrifle"), 0, 0, 200, 0);
				Local_1532[2 /*26*/] = func_346(iLocal_54, 3257.5f, -4695.39f, 111.85f, 345.48f, iLocal_561, joaat("weapon_pumpshotgun"), 0, 0, 200, 0);
				Local_1532[3 /*26*/] = func_346(iLocal_54, 3251.415f, -4686.419f, 111.8743f, 350.8474f, iLocal_561, joaat("weapon_pumpshotgun"), 0, 0, 200, 0);
				Local_1532[4 /*26*/] = func_346(iLocal_54, 3261.093f, -4693.945f, 111.8941f, 0.7368f, iLocal_561, joaat("weapon_assaultrifle"), 0, 1, 200, 0);
				func_344(&Local_1532, 0);
				func_353(Local_1532[0 /*26*/], 3272.56f, -4664.5f, 112.84f, 2f, 0, Local_68, PLAYER::PLAYER_PED_ID(), 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
				func_338(Local_1532[0 /*26*/], 3, 100, -687903391);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1532[0 /*26*/], 28, 1);
				func_366(Local_1532[1 /*26*/], 1120403456);
				func_340(Local_1532[1 /*26*/], 1, 2, 2, 29, 1);
				func_339(Local_1532[1 /*26*/], 3256.53f, -4686.6f, 111.91f, 3f, 0);
				func_337(Local_1532[1 /*26*/], 1, 0, 1, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
				func_338(Local_1532[1 /*26*/], 4, 100, -687903391);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1532[1 /*26*/], 28, 1);
				func_366(Local_1532[2 /*26*/], 1120403456);
				func_340(Local_1532[2 /*26*/], 1, 2, 2, 0, 1);
				func_339(Local_1532[2 /*26*/], 3255.64f, -4692.65f, 111.84f, 3f, 0);
				func_337(Local_1532[2 /*26*/], 1, 1, 0, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
				func_338(Local_1532[2 /*26*/], 3, 100, -687903391);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1532[2 /*26*/], 28, 1);
				func_366(Local_1532[3 /*26*/], 1120403456);
				func_340(Local_1532[3 /*26*/], 1, 2, 2, 29, 1);
				func_339(Local_1532[3 /*26*/], 3263.23f, -4672.08f, 112.81f, 1.5f, 0);
				func_337(Local_1532[3 /*26*/], 1, 1, 0, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
				func_338(Local_1532[3 /*26*/], 4, 100, -687903391);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1532[3 /*26*/], 28, 1);
				func_366(Local_1532[4 /*26*/], 1120403456);
				func_340(Local_1532[4 /*26*/], 1, 2, 2, 29, 1);
				func_339(Local_1532[4 /*26*/], 3261.49f, -4691.44f, 112.03f, 3f, 0);
				func_337(Local_1532[4 /*26*/], 1, 0, 1, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
				func_338(Local_1532[4 /*26*/], 3, 100, -687903391);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1532[4 /*26*/], 28, 1);
				*iParam0 = 1;
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_1532[0 /*26*/]))
		{
			if (Local_1532[0 /*26*/].f_13 == 0)
			{
				if (iLocal_600 == 1)
				{
					Local_1532[0 /*26*/].f_12 = 0;
					Local_1532[0 /*26*/].f_15 = 100;
					Local_1532[0 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1532[0 /*26*/].f_15)
			{
				case 100:
					if (Local_1532[0 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1532[0 /*26*/], 100f, 0);
						func_340(Local_1532[0 /*26*/], 1, 2, 1, 29, 1);
						func_350(Local_1532[0 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
						func_349(Local_1532[0 /*26*/], 0.5f, 0f);
						func_337(Local_1532[0 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1532[0 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1532[1 /*26*/]))
		{
			if (Local_1532[1 /*26*/].f_13 == 0)
			{
				if (iLocal_600 == 1)
				{
					Local_1532[1 /*26*/].f_12 = 0;
					Local_1532[1 /*26*/].f_15 = 100;
					Local_1532[1 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1532[1 /*26*/].f_15)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3257.505f, -4658.069f, 116.6803f, 36f, 10f, 4f, 0, 1, 0))
					{
						Local_1532[1 /*26*/].f_12 = 0;
						Local_1532[1 /*26*/].f_15++;
					}
					break;
				
				case 1:
					if (Local_1532[1 /*26*/].f_12 == 0)
					{
						func_366(Local_1532[1 /*26*/], 1120403456);
						func_340(Local_1532[1 /*26*/], 2, 2, 1, 50, 1);
						func_337(Local_1532[1 /*26*/], 1, 0, 1, 0, 7.5f, 0, 0f, 2.5f, 5.5f);
						func_338(Local_1532[1 /*26*/], 4, 100, -687903391);
						Local_1532[1 /*26*/].f_12 = 1;
					}
					break;
				
				case 100:
					if (Local_1532[1 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1532[1 /*26*/], 100f, 0);
						func_340(Local_1532[1 /*26*/], 1, 2, 1, 29, 1);
						func_350(Local_1532[1 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
						func_349(Local_1532[1 /*26*/], 0.5f, 0f);
						func_337(Local_1532[1 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1532[1 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1532[2 /*26*/]))
		{
			if (Local_1532[2 /*26*/].f_13 == 0)
			{
				if (iLocal_600 == 1)
				{
					Local_1532[2 /*26*/].f_12 = 0;
					Local_1532[2 /*26*/].f_15 = 100;
					Local_1532[2 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1532[2 /*26*/].f_15)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3257.505f, -4658.069f, 116.6803f, 36f, 10f, 4f, 0, 1, 0))
					{
						Local_1532[2 /*26*/].f_12 = 0;
						Local_1532[2 /*26*/].f_15++;
					}
					break;
				
				case 1:
					if (Local_1532[2 /*26*/].f_12 == 0)
					{
						func_366(Local_1532[2 /*26*/], 1120403456);
						func_340(Local_1532[2 /*26*/], 2, 2, 1, 50, 1);
						func_337(Local_1532[2 /*26*/], 1, 1, 0, 0, 9f, 0, 0f, 3f, 4f);
						func_338(Local_1532[2 /*26*/], 3, 100, -687903391);
						Local_1532[2 /*26*/].f_12 = 1;
					}
					break;
				
				case 100:
					if (Local_1532[2 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1532[2 /*26*/], 100f, 0);
						func_340(Local_1532[2 /*26*/], 1, 2, 1, 29, 1);
						func_350(Local_1532[2 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
						func_349(Local_1532[2 /*26*/], 0.5f, 0f);
						func_337(Local_1532[2 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						func_365(Local_1532[2 /*26*/], &(Local_1532[2 /*26*/].f_10));
						Local_1532[2 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1532[3 /*26*/]))
		{
			if (Local_1532[3 /*26*/].f_13 == 0)
			{
				if (iLocal_600 == 1)
				{
					Local_1532[3 /*26*/].f_12 = 0;
					Local_1532[3 /*26*/].f_15 = 100;
					Local_1532[3 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1532[3 /*26*/].f_15)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3257.505f, -4658.069f, 116.6803f, 36f, 10f, 4f, 0, 1, 0) || (func_367(&Local_1479) + func_367(&Local_1663)) < 3)
					{
						Local_1532[3 /*26*/].f_12 = 0;
						Local_1532[3 /*26*/].f_15++;
					}
					break;
				
				case 1:
					if (Local_1532[3 /*26*/].f_12 == 0)
					{
						func_353(Local_1532[3 /*26*/], 3263.08f, -4665.64f, 112.71f, 2f, 0, Local_68, PLAYER::PLAYER_PED_ID(), 0, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
						func_340(Local_1532[3 /*26*/], 2, 2, 1, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1532[3 /*26*/], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1532[3 /*26*/], 51, 1);
						func_337(Local_1532[3 /*26*/], 1, 0, 0, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
						func_338(Local_1532[3 /*26*/], 4, 100, -687903391);
						Local_1532[3 /*26*/].f_12 = 1;
					}
					break;
				
				case 100:
					if (Local_1532[3 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1532[3 /*26*/], 100f, 0);
						func_340(Local_1532[3 /*26*/], 1, 2, 1, 29, 1);
						func_350(Local_1532[3 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
						func_349(Local_1532[3 /*26*/], 0.5f, 0f);
						func_337(Local_1532[3 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1532[3 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1532[4 /*26*/]))
		{
			if (Local_1532[4 /*26*/].f_13 == 0)
			{
				if (iLocal_600 == 1)
				{
					Local_1532[4 /*26*/].f_12 = 0;
					Local_1532[4 /*26*/].f_15 = 100;
					Local_1532[4 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1532[4 /*26*/].f_15)
			{
				case 0:
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3257.505f, -4658.069f, 116.6803f, 36f, 10f, 4f, 0, 1, 0) || (func_367(&Local_1479) + func_367(&Local_1663)) < 3)
					{
						Local_1532[4 /*26*/].f_12 = 0;
						Local_1532[4 /*26*/].f_15++;
					}
					break;
				
				case 1:
					if (Local_1532[4 /*26*/].f_12 == 0)
					{
						func_353(Local_1532[4 /*26*/], 3261.9f, -4680.61f, 111.95f, 2f, 0, Local_68, PLAYER::PLAYER_PED_ID(), 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
						func_340(Local_1532[4 /*26*/], 1, 2, 1, 29, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1532[4 /*26*/], 51, 1);
						func_339(Local_1532[4 /*26*/], 3268.94f, -4663.72f, 112.88f, 4f, 0);
						func_337(Local_1532[4 /*26*/], 1, 0, 0, 0, 0f, 0, 1028443341, 1067450368, 1082130432);
						func_338(Local_1532[4 /*26*/], 3, 100, -687903391);
						Local_1532[4 /*26*/].f_12 = 1;
					}
					break;
				
				case 100:
					if (Local_1532[4 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1532[4 /*26*/], 100f, 0);
						func_340(Local_1532[4 /*26*/], 1, 2, 1, 29, 1);
						func_350(Local_1532[4 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
						func_349(Local_1532[4 /*26*/], 0.5f, 0f);
						func_337(Local_1532[4 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1532[4 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		func_195(&Local_1532, 0, 1, 1);
	}
	func_334(&Local_1532, 1);
}

void func_365(int iParam0, var uParam1)//Position - 0x2A1EE
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		PED::REMOVE_PED_PREFERRED_COVER_SET(iParam0);
		if (ITEMSET::IS_ITEMSET_VALID(*uParam1))
		{
			ITEMSET::DESTROY_ITEMSET(*uParam1);
		}
	}
}

void func_366(int iParam0, float fParam1)//Position - 0x2A217
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam1, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

int func_367(int iParam0)//Position - 0x2A251
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0 /*26*/]))
		{
			if (!PED::IS_PED_INJURED((*iParam0)[iVar0 /*26*/]))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_368(int iParam0, int iParam1)//Position - 0x2A298
{
	if (*iParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if (func_376(PLAYER::PLAYER_PED_ID(), 3264.409f, -4611.561f, 117.0225f, 30f, 3f, 2f))
			{
				Local_1769[0 /*26*/] = func_346(iLocal_54, 3266.25f, -4642.72f, 113.23f, 324.2408f, iLocal_561, joaat("weapon_assaultrifle"), 0, 0, 200, 0);
				Local_1769[1 /*26*/] = func_346(iLocal_54, 3274.37f, -4640.03f, 113.66f, 0f, iLocal_561, joaat("weapon_pistol"), 0, 0, 200, 0);
				func_344(&Local_1769, 0);
				func_353(Local_1769[0 /*26*/], 3271.3f, -4631.07f, 114.7037f, 2f, 0, Local_68, PLAYER::PLAYER_PED_ID(), 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
				func_340(Local_1769[0 /*26*/], 2, 0, 0, 13, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1769[0 /*26*/], 51, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1769[0 /*26*/], 28, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1769[0 /*26*/], 50, 1);
				func_338(Local_1769[0 /*26*/], 4, 50, -957453492);
				func_353(Local_1769[1 /*26*/], 3273.331f, -4623.358f, 114.7698f, 2f, 0, Local_68, PLAYER::PLAYER_PED_ID(), 1, 1, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
				func_340(Local_1769[1 /*26*/], 2, 0, 0, 13, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1769[1 /*26*/], 51, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1769[1 /*26*/], 28, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1769[1 /*26*/], 50, 1);
				func_338(Local_1769[1 /*26*/], 4, 100, -687903391);
				Local_1479[0 /*26*/] = func_346(iLocal_54, 3285.61f, -4651.54f, 112.84f, 0f, iLocal_561, joaat("weapon_assaultrifle"), 0, 0, 200, 0);
				Local_1479[1 /*26*/] = func_346(iLocal_54, 3279.87f, -4671.24f, 112.83f, 0f, iLocal_561, joaat("weapon_assaultrifle"), 0, 1, 200, 0);
				func_344(&Local_1479, 0);
				func_366(Local_1479[0 /*26*/], 1120403456);
				func_340(Local_1479[0 /*26*/], 1, 0, 2, 29, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1479[0 /*26*/], 28, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1479[0 /*26*/], 51, 1);
				func_350(Local_1479[0 /*26*/], 3282.732f, -4650.354f, 112.8392f, 3278.938f, -4650.336f, 115.6364f, 2f, 0);
				func_337(Local_1479[0 /*26*/], 1, 1, 0, 1, 6f, 0, 0f, 3f, 1082130432);
				func_338(Local_1479[0 /*26*/], 3, 100, -687903391);
				func_369(Local_1479[1 /*26*/], 3277.91f, -4670.24f, 112.87f, 1f, -1, 1, 1120403456, 1048576000, 0);
				func_340(Local_1479[1 /*26*/], 1, 0, 2, 0, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1479[1 /*26*/], 28, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1479[1 /*26*/], 51, 1);
				func_339(Local_1479[1 /*26*/], 3277.91f, -4670.24f, 112.87f, 2f, 0);
				func_338(Local_1479[1 /*26*/], 4, 100, -687903391);
				*iParam0 = 1;
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_1769[0 /*26*/]))
		{
			if (Local_1769[0 /*26*/].f_13 == 0)
			{
				if (iLocal_600 == 1)
				{
					Local_1769[0 /*26*/].f_12 = 0;
					Local_1769[0 /*26*/].f_15 = 100;
					Local_1769[0 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1769[0 /*26*/].f_15)
			{
				case 0:
					if (PED::IS_PED_IN_COMBAT(Local_1769[0 /*26*/], 0))
					{
						Local_1769[0 /*26*/].f_12 = 0;
						Local_1769[0 /*26*/].f_15++;
					}
					break;
				
				case 1:
					if (Local_1769[0 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1769[0 /*26*/], 100f, 0);
						func_340(Local_1769[0 /*26*/], 3, 0, 1, 0, 1);
						func_338(Local_1769[0 /*26*/], 4, 100, -687903391);
						Local_1769[0 /*26*/].f_12 = 1;
					}
					break;
				
				case 100:
					if (Local_1769[0 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1769[0 /*26*/], 100f, 0);
						func_340(Local_1769[0 /*26*/], 1, 0, 1, 29, 1);
						func_350(Local_1769[0 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
						func_349(Local_1769[0 /*26*/], 0.5f, 0f);
						Local_1769[0 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1769[1 /*26*/]))
		{
			if (Local_1769[1 /*26*/].f_13 == 0)
			{
				if (iLocal_600 == 1)
				{
					Local_1769[1 /*26*/].f_12 = 0;
					Local_1769[1 /*26*/].f_15 = 100;
					Local_1769[1 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1769[1 /*26*/].f_15)
			{
				case 0:
					if (PED::IS_PED_IN_COMBAT(Local_1769[1 /*26*/], 0))
					{
						Local_1769[1 /*26*/].f_12 = 0;
						Local_1769[1 /*26*/].f_15++;
					}
					break;
				
				case 1:
					if (Local_1769[1 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1769[1 /*26*/], 100f, 0);
						func_340(Local_1769[1 /*26*/], 3, 0, 1, 0, 1);
						func_338(Local_1769[1 /*26*/], 4, 100, -687903391);
						Local_1769[1 /*26*/].f_12 = 1;
					}
					break;
				
				case 100:
					if (Local_1769[1 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1769[1 /*26*/], 100f, 0);
						func_340(Local_1769[1 /*26*/], 1, 0, 1, 29, 1);
						func_350(Local_1769[1 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
						func_349(Local_1769[1 /*26*/], 0.5f, 0f);
						Local_1769[1 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1479[0 /*26*/]))
		{
			if (Local_1479[0 /*26*/].f_13 == 0)
			{
				if (iLocal_600 == 1)
				{
					Local_1479[0 /*26*/].f_12 = 0;
					Local_1479[0 /*26*/].f_15 = 100;
					Local_1479[0 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1479[0 /*26*/].f_15)
			{
				case 100:
					if (Local_1479[0 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1479[0 /*26*/], 100f, 0);
						func_340(Local_1479[0 /*26*/], 1, 2, 1, 29, 1);
						func_350(Local_1479[0 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
						func_349(Local_1479[0 /*26*/], 0.5f, 0f);
						func_337(Local_1479[0 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1479[0 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1479[1 /*26*/]))
		{
			if (Local_1479[1 /*26*/].f_13 == 0)
			{
				if (iLocal_600 == 1)
				{
					Local_1479[1 /*26*/].f_12 = 0;
					Local_1479[1 /*26*/].f_15 = 100;
					Local_1479[1 /*26*/].f_13 = 1;
				}
			}
			switch (Local_1479[1 /*26*/].f_15)
			{
				case 100:
					if (Local_1479[1 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1479[1 /*26*/], 100f, 0);
						func_340(Local_1479[1 /*26*/], 1, 2, 1, 29, 1);
						func_350(Local_1479[1 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
						func_349(Local_1479[1 /*26*/], 0.5f, 0f);
						func_337(Local_1479[1 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
						Local_1479[1 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		func_195(&Local_1769, 0, 1, 1);
		func_195(&Local_1479, 0, 1, 1);
	}
	func_334(&Local_1769, 1);
	func_334(&Local_1479, 1);
}

void func_369(int iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9)//Position - 0x2AA1C
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		if (iParam6 == 1)
		{
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Param1, fParam4, iParam5, fParam8, iParam9, 1193033728);
		}
		else
		{
			TASK::TASK_GO_STRAIGHT_TO_COORD(0, Param1, fParam4, iParam5, 1193033728, 1056964608);
		}
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam7, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

void func_370(int iParam0, int iParam1, int iParam2)//Position - 0x2AA92
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (*iParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if ((func_376(PLAYER::PLAYER_PED_ID(), 3267.56f, -4588.922f, 118.0057f, 30f, 3.5f, 2f) || (iLocal_636 != 0 && GlobalFunc_2521(26000, iLocal_636))) || func_367(&Local_1347) <= iParam2)
			{
				Local_1400[0 /*26*/] = func_346(iLocal_54, 3270.125f, -4642.845f, 113.1802f, 5.9782f, iLocal_561, joaat("weapon_assaultrifle"), 0, 1, 200, 0);
				Local_1400[1 /*26*/] = func_346(iLocal_54, 3275.902f, -4645.06f, 113.2832f, 359.8844f, iLocal_561, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 1, 200, 0);
				Local_1400[2 /*26*/] = func_346(iLocal_54, 3268.362f, -4654.751f, 113.0602f, 359.9476f, iLocal_561, joaat("weapon_assaultrifle"), 0, 1, 200, 0);
				func_344(&Local_1400, 0);
				PED::SET_PED_SEEING_RANGE(Local_1400[0 /*26*/], 20f);
				PED::SET_PED_SEEING_RANGE(Local_1400[1 /*26*/], 15f);
				PED::SET_PED_SEEING_RANGE(Local_1400[2 /*26*/], 20f);
				func_358(&(Local_1400[0 /*26*/]), 1);
				func_358(&(Local_1400[1 /*26*/]), 1);
				func_358(&(Local_1400[2 /*26*/]), 1);
				*iParam0 = 1;
			}
		}
	}
	else
	{
		if (iLocal_610 == 0)
		{
			func_356(&Local_1400);
		}
		else if (iLocal_610 == 1)
		{
			if (iLocal_611 == 1)
			{
				func_356(&Local_1400);
			}
		}
		if (!PED::IS_PED_INJURED(Local_1400[0 /*26*/]))
		{
			switch (Local_1400[0 /*26*/].f_18)
			{
				case 1:
					switch (Local_1400[0 /*26*/].f_15)
					{
						case 0:
							Local_1400[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
							Local_1400[0 /*26*/].f_15++;
							break;
						
						case 1:
							if (Local_1400[0 /*26*/].f_12 == 0)
							{
								if (GlobalFunc_2521(5000, Local_1400[0 /*26*/].f_16))
								{
									func_371(Local_1400[0 /*26*/], 3276.9f, -4617.48f, 115.02f, 1.65f, 0, 3273.65f, -4590.99f, 117.19f, 0, 0, -1, 0, 0, 0, 0, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
									func_340(Local_1400[0 /*26*/], 1, 2, 2, 29, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1400[0 /*26*/], 51, 1);
									func_339(Local_1400[0 /*26*/], 3276.9f, -4617.48f, 115.02f, 2.75f, 0);
									func_337(Local_1400[0 /*26*/], 1, 1, 0, 0, 6f, 0, 0f, 3f, 1082130432);
									func_338(Local_1400[0 /*26*/], 4, 100, -687903391);
									Local_1400[0 /*26*/].f_12 = 1;
								}
							}
							if (Local_1400[0 /*26*/].f_13 == 0)
							{
								if (iLocal_600 == 1)
								{
									Local_1400[0 /*26*/].f_12 = 0;
									Local_1400[0 /*26*/].f_15 = 100;
									Local_1400[0 /*26*/].f_13 = 1;
								}
							}
							break;
						
						case 100:
							if (Local_1400[0 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1400[0 /*26*/], 100f, 0);
								func_340(Local_1400[0 /*26*/], 1, 2, 1, 29, 1);
								func_350(Local_1400[0 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
								func_349(Local_1400[0 /*26*/], 0.8f, 0.25f);
								func_337(Local_1400[0 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
								Local_1400[0 /*26*/].f_12 = 1;
							}
							break;
					}
					if (PED::IS_PED_IN_COMBAT(Local_1400[0 /*26*/], 0) || iLocal_610 == 1)
					{
						func_358(&(Local_1400[0 /*26*/]), 11);
					}
					break;
				
				case 11:
					if (Local_1400[0 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1400[0 /*26*/], 100f, 0);
						func_340(Local_1400[0 /*26*/], 1, 2, 2, 29, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1400[0 /*26*/], 51, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1400[0 /*26*/], 28, 1);
						func_339(Local_1400[0 /*26*/], 3276.9f, -4617.48f, 115.02f, 2.75f, 0);
						func_337(Local_1400[0 /*26*/], 1, 1, 0, 0, 6f, 0, 0f, 3f, 1082130432);
						func_338(Local_1400[0 /*26*/], 4, 100, -687903391);
						GlobalFunc_3040(Local_1400[0 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1400[0 /*26*/], 0);
						iLocal_610 = 1;
						Local_1400[0 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1400[1 /*26*/]))
		{
			switch (Local_1400[1 /*26*/].f_18)
			{
				case 1:
					switch (Local_1400[1 /*26*/].f_15)
					{
						case 0:
							Local_1400[1 /*26*/].f_16 = MISC::GET_GAME_TIMER();
							Local_1400[1 /*26*/].f_15++;
							break;
						
						case 1:
							if (Local_1400[1 /*26*/].f_12 == 0)
							{
								if (GlobalFunc_2521(5000, Local_1400[1 /*26*/].f_16))
								{
									func_371(Local_1400[1 /*26*/], 3269.19f, -4627.51f, 114.85f, 1.65f, 0, 3273.65f, -4590.99f, 117.19f, 0, 0, -1, 0, 0, 0, 0, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
									func_340(Local_1400[1 /*26*/], 1, 2, 2, 29, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1400[1 /*26*/], 51, 1);
									func_339(Local_1400[1 /*26*/], 3269.19f, -4627.51f, 114.85f, 3f, 0);
									func_337(Local_1400[1 /*26*/], 1, 0, 1, 0, 7f, 0, 0f, 3f, 1082130432);
									func_338(Local_1400[1 /*26*/], 4, 100, -687903391);
									Local_1400[1 /*26*/].f_12 = 1;
								}
							}
							if (iLocal_573 == 1)
							{
								func_358(&(Local_1400[1 /*26*/]), 9);
							}
							if (Local_1400[1 /*26*/].f_13 == 0)
							{
								if (iLocal_600 == 1)
								{
									Local_1400[1 /*26*/].f_12 = 0;
									Local_1400[1 /*26*/].f_15 = 100;
									Local_1400[1 /*26*/].f_13 = 1;
								}
							}
							break;
						
						case 100:
							if (Local_1400[1 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1400[1 /*26*/], 100f, 0);
								func_340(Local_1400[1 /*26*/], 1, 2, 0, 29, 1);
								func_350(Local_1400[1 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
								func_349(Local_1400[1 /*26*/], 0.9f, 0.1f);
								func_337(Local_1400[1 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
								Local_1400[1 /*26*/].f_12 = 1;
							}
							break;
					}
					if (PED::IS_PED_IN_COMBAT(Local_1400[1 /*26*/], 0) || iLocal_610 == 1)
					{
						func_358(&(Local_1400[1 /*26*/]), 11);
					}
					break;
				
				case 9:
					PED::SET_PED_RESET_FLAG(Local_1400[1 /*26*/], 206, 1);
					if (Local_1400[1 /*26*/].f_12 == 0)
					{
						TASK::REQUEST_WAYPOINT_RECORDING("mic1_c");
						STREAMING::REQUEST_ANIM_DICT("missmic1ig_3_patrol");
						if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("mic1_c") && STREAMING::HAS_ANIM_DICT_LOADED("missmic1ig_3_patrol"))
						{
							if (TASK::WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT("mic1_c", ENTITY::GET_ENTITY_COORDS(Local_1400[1 /*26*/], 1), &iVar0) && iVar0 > 30)
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1400[1 /*26*/], "mic1_c", 32, 1, -1);
							}
							else
							{
								TASK::TASK_FOLLOW_WAYPOINT_RECORDING(Local_1400[1 /*26*/], "mic1_c", 0, 9, -1);
							}
							Local_1400[1 /*26*/].f_25 = 0;
							Local_1400[1 /*26*/].f_14 = 1;
							Local_1400[1 /*26*/].f_12 = 1;
						}
					}
					if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Local_1400[1 /*26*/]) && !ENTITY::IS_ENTITY_PLAYING_ANIM(Local_1400[1 /*26*/], "missmic1ig_3_patrol", "search_walk_fwd_b", 3))
					{
						if (Local_1400[1 /*26*/].f_25 != 0)
						{
							if (Local_1400[1 /*26*/].f_25 != TASK::GET_PED_WAYPOINT_PROGRESS(Local_1400[1 /*26*/]))
							{
								if (TASK::WAYPOINT_RECORDING_GET_NUM_POINTS("mic1_c", &iVar1))
								{
									if (Local_1400[1 /*26*/].f_25 < iVar1)
									{
										if (TASK::WAYPOINT_RECORDING_GET_COORD("mic1_c", Local_1400[1 /*26*/].f_25 + 3, &uVar2))
										{
											TASK::TASK_PLAY_ANIM(Local_1400[1 /*26*/], "missmic1ig_3_patrol", "search_walk_fwd_b", 1.5f, -1.5f, -1, 114737, 0, 0, 0, 0);
											Local_1400[1 /*26*/].f_25 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_1400[1 /*26*/]);
										}
									}
								}
							}
						}
						else
						{
							Local_1400[1 /*26*/].f_25 = TASK::GET_PED_WAYPOINT_PROGRESS(Local_1400[1 /*26*/]);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(Local_1400[1 /*26*/], -1689270312) == 7)
					{
						func_358(&(Local_1400[1 /*26*/]), 9);
					}
					if (PED::IS_PED_IN_COMBAT(Local_1400[1 /*26*/], 0) || iLocal_610 == 1)
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Local_1400[1 /*26*/]);
						func_358(&(Local_1400[1 /*26*/]), 11);
					}
					break;
				
				case 11:
					if (Local_1400[1 /*26*/].f_12 == 0)
					{
						TASK::CLEAR_PED_SECONDARY_TASK(Local_1400[1 /*26*/]);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1400[1 /*26*/], 100f, 0);
						func_340(Local_1400[1 /*26*/], 2, 1, 0, 0, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1400[1 /*26*/], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1400[1 /*26*/], 28, 1);
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_1400[1 /*26*/], 0);
						func_338(Local_1400[1 /*26*/], 4, 100, -687903391);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1400[1 /*26*/], 0);
						GlobalFunc_3040(Local_1400[1 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
						iLocal_610 = 1;
						Local_1400[1 /*26*/].f_14 = 0;
						Local_1400[1 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1400[2 /*26*/]))
		{
			switch (Local_1400[2 /*26*/].f_18)
			{
				case 1:
					switch (Local_1400[2 /*26*/].f_15)
					{
						case 0:
							Local_1400[2 /*26*/].f_16 = MISC::GET_GAME_TIMER();
							Local_1400[2 /*26*/].f_15++;
							break;
						
						case 1:
							if (Local_1400[2 /*26*/].f_12 == 0)
							{
								if (GlobalFunc_2521(5000, Local_1400[2 /*26*/].f_16))
								{
									func_371(Local_1400[2 /*26*/], 3279.21f, -4628.83f, 114.92f, 1.65f, 0, 3273.65f, -4590.99f, 117.19f, 0, 0, -1, 0, 0, 0, 0, 0, 1000, -687903391, 1, 1056964608, 1056964608, 1, 1120403456, 0);
									func_340(Local_1400[2 /*26*/], 1, 2, 2, 29, 1);
									PED::SET_PED_COMBAT_ATTRIBUTES(Local_1400[2 /*26*/], 51, 1);
									func_339(Local_1400[2 /*26*/], 3279.21f, -4628.83f, 114.92f, 3f, 0);
									func_337(Local_1400[2 /*26*/], 1, 0, 1, 0, 5f, 0, 0f, 2.5f, 1082130432);
									func_338(Local_1400[2 /*26*/], 4, 100, -687903391);
									Local_1400[2 /*26*/].f_12 = 1;
								}
							}
							if (Local_1400[2 /*26*/].f_13 == 0)
							{
								if (iLocal_600 == 1)
								{
									Local_1400[2 /*26*/].f_12 = 0;
									Local_1400[2 /*26*/].f_15 = 100;
									Local_1400[2 /*26*/].f_13 = 1;
								}
							}
							break;
						
						case 100:
							if (Local_1400[2 /*26*/].f_12 == 0)
							{
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1400[2 /*26*/], 100f, 0);
								func_340(Local_1400[2 /*26*/], 1, 2, 0, 29, 1);
								func_350(Local_1400[2 /*26*/], 3266.473f, -4689.624f, 111.114f, 3226.107f, -4686.158f, 118.6372f, 22f, 0);
								func_349(Local_1400[2 /*26*/], 0.9f, 0.1f);
								func_337(Local_1400[2 /*26*/], 1, 0, 0, 0, 6f, 1, 0.1f, 2f, 1082130432);
								Local_1400[2 /*26*/].f_12 = 1;
							}
							break;
					}
					if (PED::IS_PED_IN_COMBAT(Local_1400[2 /*26*/], 0) || iLocal_610 == 1)
					{
						func_358(&(Local_1400[2 /*26*/]), 11);
					}
					break;
				
				case 11:
					if (Local_1400[2 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1400[2 /*26*/], 100f, 0);
						func_340(Local_1400[2 /*26*/], 1, 2, 2, 29, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1400[2 /*26*/], 51, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1400[2 /*26*/], 28, 1);
						func_339(Local_1400[2 /*26*/], 3279.21f, -4628.83f, 114.92f, 3f, 0);
						func_337(Local_1400[2 /*26*/], 1, 0, 1, 0, 5f, 0, 0f, 2.5f, 1082130432);
						func_338(Local_1400[2 /*26*/], 4, 100, -687903391);
						GlobalFunc_3040(Local_1400[2 /*26*/], 1114636288, 1084227584, 1123024896, -1028390912, 1119092736);
						Local_1400[2 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		func_195(&Local_1400, 0, 1, 1);
	}
	func_334(&Local_1400, 1);
}

void func_371(int iParam0, struct<3> Param1, float fParam4, int iParam5, struct<3> Param6, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, float fParam23, int iParam24)//Position - 0x2B6BA
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		if (iParam5 == 1)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, Param6, fParam4, iParam10, iParam20, iParam21, iParam22, iParam24, 0, -957453492);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(0, Param1, ENTITY::GET_ENTITY_COORDS(iParam9, 1), fParam4, iParam10, iParam20, iParam21, iParam22, iParam24, 0, -957453492);
			}
		}
		else if (iParam5 == 0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Param1, Param6, fParam4, iParam10, iParam20, iParam21, iParam22, 0, 0, -957453492);
			}
			else
			{
				TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Param1, iParam9, fParam4, iParam10, iParam20, iParam21, iParam22, 0, 0, -957453492, 20000);
			}
		}
		if (iParam15 == 1)
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam9))
			{
				if (iParam16 == 1)
				{
					TASK::TASK_SHOOT_AT_COORD(0, Param6, iParam17, iParam18);
				}
				else
				{
					TASK::TASK_AIM_GUN_AT_COORD(0, Param6, iParam17, 0, 0);
				}
			}
			else if (iParam16 == 1)
			{
				TASK::TASK_SHOOT_AT_ENTITY(0, iParam9, iParam17, iParam18);
			}
			else
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(0, iParam9, iParam17, 0);
			}
		}
		TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Param1, iParam11, iParam12, 1.5f, iParam13, iParam14, 0, 1);
		if (iParam19 == 1)
		{
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
		}
		TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, fParam23, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

void func_372(int iParam0, int iParam1)//Position - 0x2B810
{
	if (*iParam0 == 0)
	{
		if (iParam1 == 1)
		{
			if (STREAMING::HAS_MODEL_LOADED(iLocal_54))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_1347[0 /*26*/]))
				{
					Local_1347[0 /*26*/] = func_346(iLocal_54, 3265.49f, -4590.883f, 115.9832f, 94.4126f, iLocal_561, joaat("weapon_pistol"), 0, 0, 200, 0);
				}
				Local_1347[1 /*26*/] = func_346(iLocal_54, 3262.19f, -4593.96f, 115.82f, 0f, iLocal_561, joaat("weapon_assaultrifle"), joaat("component_at_ar_flsh"), 0, 200, 0);
				func_344(&Local_1347, 0);
				func_340(Local_1347[0 /*26*/], 1, 0, 2, 0, 1);
				func_350(Local_1347[0 /*26*/], 3264.837f, -4590.833f, 115.3854f, 3265.977f, -4590.835f, 118.2364f, 1f, 0);
				func_336(Local_1347[0 /*26*/], &(Local_1347[0 /*26*/].f_10), &(Local_2236[1 /*13*/]));
				func_337(Local_1347[0 /*26*/], 1, 1, 0, 0, 5f, 0, 0f, -1f, 1082130432);
				func_338(Local_1347[0 /*26*/], 3, 100, -687903391);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[0 /*26*/], 50, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1347[0 /*26*/], 0);
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1347[0 /*26*/], 100f, 0);
				Local_1347[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
				func_353(Local_1347[1 /*26*/], 3264.27f, -4585.25f, 117.07f, 2f, 0, 3256.55f, -4575.72f, 118.63f, PLAYER::PLAYER_PED_ID(), 0, 0, 0, 1750, -957453492, 1, 1056964608, 1056964608, 1, 1120403456, 0);
				func_340(Local_1347[1 /*26*/], 2, 0, 0, 13, 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[1 /*26*/], 50, 1);
				func_338(Local_1347[1 /*26*/], 3, 100, -687903391);
				Local_1347[1 /*26*/].f_16 = MISC::GET_GAME_TIMER();
				*iParam0 = 1;
			}
		}
	}
	else
	{
		if (!PED::IS_PED_INJURED(Local_1347[0 /*26*/]))
		{
			switch (Local_1347[0 /*26*/].f_15)
			{
				case 0:
					if (GlobalFunc_2521(10000, Local_1347[0 /*26*/].f_16) || PED::IS_PED_INJURED(Local_1347[1 /*26*/]))
					{
						Local_1347[0 /*26*/].f_12 = 0;
						Local_1347[0 /*26*/].f_15++;
					}
					break;
				
				case 1:
					if (Local_1347[0 /*26*/].f_12 == 0)
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[0 /*26*/], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[0 /*26*/], 28, 1);
						func_337(Local_1347[0 /*26*/], 1, 1, 0, 0, 10f, 0, 0f, 1f, 5f);
						Local_1347[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
						Local_1347[0 /*26*/].f_12 = 1;
					}
					if (GlobalFunc_2521(18000, Local_1347[0 /*26*/].f_16))
					{
						Local_1347[0 /*26*/].f_12 = 0;
						Local_1347[0 /*26*/].f_15++;
					}
					break;
				
				case 2:
					if (Local_1347[0 /*26*/].f_12 == 0)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_1347[0 /*26*/], 0);
						func_340(Local_1347[0 /*26*/], 2, 0, 0, 13, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[0 /*26*/], 50, 1);
						func_337(Local_1347[0 /*26*/], 1, 0, 0, 0, 1092616192, 1, 1028443341, 1067450368, 1082130432);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1347[0 /*26*/], 100f, 0);
						Local_1347[0 /*26*/].f_16 = MISC::GET_GAME_TIMER();
						Local_1347[0 /*26*/].f_12 = 1;
					}
					if (GlobalFunc_2521(10000, Local_1347[0 /*26*/].f_16))
					{
						Local_1347[0 /*26*/].f_12 = 0;
						Local_1347[0 /*26*/].f_15++;
					}
					break;
				
				case 3:
					if (Local_1347[0 /*26*/].f_12 == 0)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_1347[0 /*26*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[0 /*26*/], 42, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[0 /*26*/], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[0 /*26*/], 13, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[0 /*26*/], 28, 1);
						PED::SET_PED_COMBAT_RANGE(Local_1347[0 /*26*/], 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_1347[0 /*26*/], 2);
						func_338(Local_1347[0 /*26*/], 3, 125, -687903391);
						Local_1347[0 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		if (!PED::IS_PED_INJURED(Local_1347[1 /*26*/]))
		{
			switch (Local_1347[1 /*26*/].f_15)
			{
				case 0:
					if (GlobalFunc_2521(6000, Local_1347[1 /*26*/].f_16) || PED::IS_PED_IN_COMBAT(Local_1347[1 /*26*/], 0))
					{
						Local_1347[1 /*26*/].f_12 = 0;
						Local_1347[1 /*26*/].f_15++;
					}
					break;
				
				case 1:
					if (Local_1347[1 /*26*/].f_12 == 0)
					{
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_1347[1 /*26*/], 100f, 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[1 /*26*/], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[1 /*26*/], 28, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[1 /*26*/], 37, 1);
						func_340(Local_1347[1 /*26*/], 2, 1, 0, 29, 1);
						func_349(Local_1347[1 /*26*/], 1f, 1f);
						func_339(Local_1347[1 /*26*/], 3267.71f, -4577.71f, 117.21f, 1.25f, 0);
						func_337(Local_1347[1 /*26*/], 1, 0, 0, 0, 6f, 0, 0f, 2f, 1082130432);
						func_338(Local_1347[1 /*26*/], 3, 125, -687903391);
						Local_1347[1 /*26*/].f_16 = MISC::GET_GAME_TIMER();
						Local_1347[1 /*26*/].f_12 = 1;
					}
					if (GlobalFunc_2521(15000, Local_1347[1 /*26*/].f_16))
					{
						Local_1347[1 /*26*/].f_12 = 0;
						Local_1347[1 /*26*/].f_15++;
					}
					break;
				
				case 2:
					if (Local_1347[1 /*26*/].f_12 == 0)
					{
						PED::REMOVE_PED_DEFENSIVE_AREA(Local_1347[1 /*26*/], 0);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[1 /*26*/], 42, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[1 /*26*/], 50, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[1 /*26*/], 13, 1);
						PED::SET_PED_COMBAT_ATTRIBUTES(Local_1347[1 /*26*/], 28, 1);
						PED::SET_PED_COMBAT_RANGE(Local_1347[1 /*26*/], 0);
						PED::SET_PED_COMBAT_MOVEMENT(Local_1347[1 /*26*/], 2);
						func_338(Local_1347[1 /*26*/], 3, 150, -687903391);
						Local_1347[1 /*26*/].f_12 = 1;
					}
					break;
				}
		}
		func_195(&Local_1347, 0, 1, 1);
		if (func_320(&Local_1347) == 2)
		{
			if (iLocal_636 == 0)
			{
				iLocal_636 = MISC::GET_GAME_TIMER();
			}
		}
	}
	func_334(&Local_1347, 1);
}

void func_373(int iParam0, var uParam1, int iParam2, int iParam3, float fParam4)//Position - 0x2BDFD
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_COVER(iParam0, 0) || PED::IS_PED_DUCKING(iParam0))
		{
			iVar0 = 0;
			if (func_375(iParam0, &Local_2705, fParam4, &iVar0))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(*uParam1) || (ENTITY::DOES_ENTITY_EXIST(*uParam1) && GlobalFunc_2521(iParam3, *iParam2)))
				{
					*uParam1 = func_323(iParam0, iLocal_561, 0, 1);
					*iParam2 = MISC::GET_GAME_TIMER();
				}
				func_374(*uParam1, Local_2705[iVar0 /*7*/].f_3, Local_2705[iVar0 /*7*/].f_6, 100);
			}
			else
			{
				*uParam1 = 0;
				*iParam2 = MISC::GET_GAME_TIMER();
			}
		}
	}
}

void func_374(int iParam0, struct<3> Param1, float fParam4, int iParam5)//Position - 0x2BE9E
{
	var uVar0;
	int iVar1;
	struct<3> Var2;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SHOOTING(iParam0))
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, 1))
				{
					iVar1 = WEAPON::GET_CURRENT_PED_WEAPON_ENTITY_INDEX(iParam0);
					Var2 = { (Param1.x + MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam4, fParam4)), (Param1.f_1 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam4, fParam4)), (Param1.f_2 + MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam4, fParam4)) };
					MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar1, 1), Var2, iParam5, 1, uVar0, iParam0, 1, 1, -1082130432);
				}
			}
		}
	}
}

int func_375(int iParam0, var uParam1, float fParam2, int iParam3)//Position - 0x2BF1F
{
	int iVar0;
	
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam1 - 1))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), *(uParam1[iVar0 /*7*/]), 1) < fParam2)
			{
				*iParam3 = iVar0;
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_376(int iParam0, struct<3> Param1, struct<3> Param4)//Position - 0x2BF6E
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, Param4, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_377(char* sParam0, int iParam1, bool bParam2)//Position - 0x2BFA2
{
	if (!func_175(sParam0))
	{
		GlobalFunc_2523(sParam0, iParam1, 1);
		func_177(sParam0, bParam2);
	}
}



int func_380(int iParam0)//Position - 0x2BFF1
{
	switch (*iParam0)
	{
		case 0:
			AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_GRAVEYARD");
			AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_WALK_TO_GRAVEYARD");
			AUDIO::STOP_AUDIO_SCENE("MI_1_TREV_FLY_TO_LUDENDORFF");
			if (iLocal_595 == 1)
			{
				CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("mic_1_mcs_2", 28, 8);
				*iParam0 = 3;
			}
			else if (iLocal_594 == 1)
			{
				HUD::CLEAR_HELP(1);
				HUD::CLEAR_PRINTS();
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), Local_155.f_2, Local_155.f_5, 0, 0, 0);
				}
				if (!PED::IS_PED_INJURED(Local_142))
				{
					TASK::CLEAR_PED_TASKS(Local_142);
					GlobalFunc_2901(Local_142, Local_142.f_2, Local_142.f_5, 0, 0, 0);
				}
				SYSTEM::SETTIMERA(0);
				*iParam0++;
			}
			break;
		
		case 1:
			if (iLocal_594 == 1)
			{
				GlobalFunc_7629();
				func_395("MH1_SETTING");
				if (SYSTEM::TIMERA() > 5000)
				{
					*iParam0++;
				}
			}
			break;
		
		case 2:
			GlobalFunc_7629();
			func_395("MH1_SETTING");
			func_394(0);
			func_393(1);
			WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pistol"), 31, 0);
			if (func_392(1) && WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pistol")))
			{
				STREAMING::_0x95A7DABDDBB78AE7("prologue03_grv_cov", "prologue03_grv_dug");
				*iParam0++;
			}
			break;
		
		case 3:
			if (iLocal_595 == 1)
			{
				if (GlobalFunc_5927("mic_1_mcs_2", 28))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_142))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_142))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_142, "Trevor", 1, 0, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_297))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_297))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(Local_297))
							{
								ENTITY::DETACH_ENTITY(Local_297, 1, 1);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_297, "MIC1_Shovel", 1, Local_297.f_1, 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_297, "MIC1_Shovel", 2, Local_297.f_1, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_129, "Dead_Brad", 2, joaat("cs_bradcadaver"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_305, "MIC1_PickAxe", 2, Local_305.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_313, "Coffin", 2, Local_313.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1347[0 /*26*/], "Chinese_gunman", 2, iLocal_54, 0);
					iLocal_672 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0, 0, 0, 0, 0);
					if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), joaat("component_at_pi_supp_02")))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(iLocal_672, joaat("component_at_pi_supp_02"));
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_672, "FBI_Agent_1_Gun", 0, 0, 0);
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					GlobalFunc_8380(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					iLocal_585 = 1;
					*iParam0++;
				}
			}
			else if (iLocal_594 == 1)
			{
				GlobalFunc_7629();
				func_395("MH1_SETTING");
				if ((GlobalFunc_5927("mic_1_mcs_2", 1) && func_392(1)) && STREAMING::_0xFB199266061F820A())
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
					}
					if (!PED::IS_PED_INJURED(Local_142))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_142, "Trevor", 1, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_142, "Trevor", 2, Local_142.f_6, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_129, "Dead_Brad", 2, joaat("cs_bradcadaver"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_297, "MIC1_Shovel", 2, Local_297.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_305, "MIC1_PickAxe", 2, Local_305.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_313, "Coffin", 2, Local_313.f_1, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_1347[0 /*26*/], "Chinese_gunman", 2, iLocal_54, 0);
					iLocal_672 = GlobalFunc_6830(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 0, 0, 0, 0, 0);
					if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), joaat("component_at_pi_supp_02")))
					{
						WEAPON::REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(iLocal_672, joaat("component_at_pi_supp_02"));
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_672, "FBI_Agent_1_Gun", 0, 0, 0);
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					GlobalFunc_8380(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(256);
					*iParam0++;
				}
			}
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				GlobalFunc_10914("Trevor", GlobalFunc_4917(2), 23);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_gunman", 2, 1, 0, 0);
			}
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::STOP_GAMEPLAY_HINT(1);
				MISC::CLEAR_AREA(Local_155.f_2, 250f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_155.f_2, 250f, 0, 0, 0, 0, 0);
				if (CAM::DOES_CAM_EXIST(uLocal_669))
				{
					CAM::SET_CAM_ACTIVE(uLocal_669, 0);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					CAM::DESTROY_CAM(uLocal_669, 0);
					HUD::DISPLAY_RADAR(1);
					HUD::DISPLAY_HUD(1);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_182))
				{
					VEHICLE::DELETE_VEHICLE(&Local_182);
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_168))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_168))
					{
						ENTITY::SET_ENTITY_COORDS(Local_168, Local_168.f_2, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_168, Local_168.f_5);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_168);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 0, 1);
						VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_168, 1);
						VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_168, false);
						ENTITY::SET_ENTITY_HEALTH(Local_168, ENTITY::GET_ENTITY_HEALTH(Local_168) + 500);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_168, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_168) + 500f));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_168, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_168) + 500f));
						FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_168, 1), 2.5f);
					}
				}
				AUDIO::TRIGGER_MUSIC_EVENT("MIC1_GRAVE_CS");
				CLOCK::SET_CLOCK_TIME(0, 0, 0);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				RECORDING::_0x293220DA1B46CEBC(5f, 0f, 4);
				RECORDING::_0x48621C9FCA3EBD28(4);
				*iParam0++;
			}
			break;
		
		case 5:
			if (iLocal_594 == 1)
			{
				if (iLocal_585 == 0)
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() >= 24634)
					{
						STREAMING::REQUEST_IPL("prologue_grv_torch");
						STREAMING::_0xF4A0DADB70F57FA6();
						iLocal_585 = 1;
						if (iLocal_690 == 0)
						{
							if (!PED::IS_PED_INJURED(Local_142))
							{
								PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(Local_142);
								PED::APPLY_PED_DAMAGE_DECAL(Local_142, 1, 0.59f, 0.72f, 25f, 1f, 1f, 0, 1, "basic_dirt_skin");
								PED::APPLY_PED_DAMAGE_DECAL(Local_142, 1, 0.4f, 0.44f, 30f, 1f, 1f, 1, 1, "basic_dirt_skin");
								PED::APPLY_PED_DAMAGE_DECAL(Local_142, 3, 0.4f, 0.12f, 30f, 0.6f, 1f, 1, 1, "basic_dirt_skin");
								PED::APPLY_PED_DAMAGE_DECAL(Local_142, 2, 0.48f, 0.12f, 30f, 0.6f, 1f, 1, 1, "basic_dirt_skin");
								PED::APPLY_PED_DAMAGE_DECAL(Local_142, 0, 0.644f, 0.407f, 30f, 1f, 1f, 6, 1, "basic_dirt_cloth");
								PED::APPLY_PED_DAMAGE_DECAL(Local_142, 0, 0.86f, 0.632f, 90f, 1f, 1f, 6, 1, "basic_dirt_cloth");
								PED::APPLY_PED_DAMAGE_DECAL(Local_142, 4, 0.775f, 0.55f, 0f, 1f, 1f, 0, 1, "basic_dirt_cloth");
								PED::APPLY_PED_DAMAGE_DECAL(Local_142, 5, 0.415f, 0.75f, 36f, 1f, 1f, 1, 1, "basic_dirt_cloth");
							}
							iLocal_690 = 1;
						}
					}
				}
			}
			if (iLocal_689 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 173000)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							PED::APPLY_PED_DAMAGE_DECAL(PLAYER::PLAYER_PED_ID(), 1, 0.621f, 0.755f, 55.084f, 0.01f, 1f, 1, 1, "bruise");
							iLocal_689 = 1;
						}
					}
				}
			}
			if (iLocal_603 == 0)
			{
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > 160000)
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_SHOOTOUT_START"))
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > 170500)
							{
								if (iLocal_603 == 0)
								{
									if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_SHOOTOUT_START"))
									{
										iLocal_603 = 1;
									}
								}
							}
						}
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_142))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Trevor", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)))
					{
						Local_142 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_129))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Dead_Brad", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dead_Brad", 0)))
					{
						Local_129 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Dead_Brad", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_297))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("MIC1_Shovel", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MIC1_Shovel", 0)))
					{
						Local_297 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MIC1_Shovel", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_305))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("MIC1_PickAxe", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MIC1_PickAxe", 0)))
					{
						Local_305 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MIC1_PickAxe", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_313))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Coffin", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Coffin", 0)))
					{
						Local_313 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Coffin", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_1347[0 /*26*/]))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Chinese_gunman", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chinese_gunman", 0)))
					{
						Local_1347[0 /*26*/] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chinese_gunman", 0));
						func_383(Local_1347[0 /*26*/], iLocal_561, joaat("weapon_pistol"), 0, 200, 0, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Dead_Brad", 0))
			{
				if (!PED::IS_PED_INJURED(Local_129))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("dead"))
					{
						if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_681))
						{
							iLocal_681 = PED::CREATE_SYNCHRONIZED_SCENE(3258.899f, -4574.09f, 115.35f, 173.88f, 51.48f, 5.04f, 0);
							TASK::TASK_SYNCHRONIZED_SCENE(Local_129, iLocal_681, "dead", "dead_g", 1000f, -1000f, 4, 145, 1148846080, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_129, 0, 0);
							AUDIO::STOP_PED_SPEAKING(Local_129, 1);
							ENTITY::SET_ENTITY_INVINCIBLE(Local_129, 1);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_129, 1);
						}
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_142))
				{
					PED::DELETE_PED(&Local_142);
				}
				if (!OBJECT::DOES_PICKUP_EXIST(uLocal_678))
				{
					iLocal_675 = 0;
					MISC::SET_BIT(&iLocal_675, 1);
					MISC::SET_BIT(&iLocal_675, 8);
					MISC::SET_BIT(&iLocal_675, 4);
					uLocal_678 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_pistol"), 3258.789f, -4575.306f, 117.257f, -88.2f, 65.88f, 0f, iLocal_675, -1, 2, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
					GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), 3256.578f, -4575.252f, 117.267f, 267.6326f, 0, 0, 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_2236[0 /*13*/].f_1, -1, 1, 0f, 1, 1, Local_2236[0 /*13*/], 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FBI_Agent_1_Gun", 0))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					WEAPON::GIVE_WEAPON_OBJECT_TO_PED(iLocal_672, PLAYER::PLAYER_PED_ID());
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-16.5368f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-45f);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-16.5368f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-72.37355f);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Chinese_gunman", 0))
			{
				if (!PED::IS_PED_INJURED(Local_1347[0 /*26*/]))
				{
					GlobalFunc_2901(Local_1347[0 /*26*/], Local_2236[1 /*13*/].f_1, Local_2236[1 /*13*/].f_4, 0, 0, 0);
					WEAPON::SET_CURRENT_PED_WEAPON(Local_1347[0 /*26*/], joaat("weapon_pistol"), 1);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_1347[0 /*26*/], Local_2236[1 /*13*/].f_1, -1, 0, 0f, 1, 1, Local_2236[1 /*13*/], 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(Local_1347[0 /*26*/], 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MIC1_Shovel", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_297))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_297))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_297, Local_297.f_2, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_297, Local_297.f_5, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_297, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MIC1_PickAxe", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_305))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_305))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_305, Local_305.f_2, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_305, Local_305.f_5, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_305, 1);
					}
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Coffin", 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_313))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_313))
					{
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_313, Local_313.f_2, 0, 0, 1);
						ENTITY::SET_ENTITY_ROTATION(Local_313, Local_313.f_5, 2, 1);
						ENTITY::FREEZE_ENTITY_POSITION(Local_313, 1);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if ((WEAPON::HAS_WEAPON_ASSET_LOADED(joaat("weapon_pistol")) && iLocal_591 == 1) && func_392(0))
				{
					if (iLocal_578 == 1)
					{
						if (iLocal_689 == 0)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::APPLY_PED_DAMAGE_DECAL(PLAYER::PLAYER_PED_ID(), 1, 0.621f, 0.755f, 55.084f, 0.01f, 1f, 1, 1, "bruise");
								iLocal_689 = 1;
							}
						}
						SYSTEM::WAIT(2000);
					}
					if (iLocal_578 == 1)
					{
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), 0))
								{
									CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-16.5368f, 1065353216);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-45f);
								}
							}
						}
					}
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					GlobalFunc_8380(0, 1, 1, 0);
					Local_155.f_10 = MISC::GET_GAME_TIMER();
					if (iLocal_578 == 0)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("MIC1_GAMEPLAY_STARTS");
					}
					else
					{
						AUDIO::CANCEL_MUSIC_EVENT("MIC1_SHOOTOUT_START");
						AUDIO::TRIGGER_MUSIC_EVENT("MIC1_ARGUE_CS_SKIP");
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_182))
					{
						VEHICLE::DELETE_VEHICLE(&Local_182);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_672))
					{
						OBJECT::DELETE_OBJECT(&iLocal_672);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_142))
					{
						PED::DELETE_PED(&Local_142);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					RECORDING::_0x81CBAE94390F9F89();
					RECORDING::_0x293220DA1B46CEBC(0f, 10f, 4);
					return 1;
				}
			}
			else
			{
				STREAMING::REQUEST_ANIM_DICT("dead");
				WEAPON::REQUEST_WEAPON_ASSET(joaat("weapon_pistol"), 31, 0);
				if (iLocal_591 == 0)
				{
					func_382(&Local_2236, Local_62);
					func_381(&Local_2705);
					iLocal_591 = 1;
				}
				if (iLocal_578 == 0)
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
						iLocal_578 = 1;
					}
				}
			}
			break;
	}
	return 0;
}

void func_381(var uParam0)//Position - 0x2CCF8
{
	*(uParam0[0 /*7*/]) = { 3256.42f, -4575.27f, 117.15f };
	(uParam0[0 /*7*/])->f_3 = { 3256.39f, -4575.69f, 118.25f };
	(uParam0[0 /*7*/])->f_6 = 0.35f;
	*(uParam0[1 /*7*/]) = { 3254.712f, -4575.186f, 117.1567f };
	(uParam0[1 /*7*/])->f_3 = { 3254.68f, -4576.13f, 118.15f };
	(uParam0[1 /*7*/])->f_6 = 0.35f;
	*(uParam0[2 /*7*/]) = { 3252.747f, -4575.377f, 117.1567f };
	(uParam0[2 /*7*/])->f_3 = { 3252.76f, -4576.09f, 118.15f };
	(uParam0[2 /*7*/])->f_6 = 0.35f;
}

void func_382(var uParam0, struct<3> Param1)//Position - 0x2CDAE
{
	int iVar0;
	
	(uParam0[0 /*13*/])->f_1 = { 3256.578f, -4575.252f, 117.267f };
	(uParam0[0 /*13*/])->f_4 = 180f;
	(uParam0[0 /*13*/])->f_5 = 3;
	(uParam0[0 /*13*/])->f_6 = 0;
	(uParam0[0 /*13*/])->f_7 = 2;
	(uParam0[0 /*13*/])->f_9 = 0;
	(uParam0[0 /*13*/])->f_10 = 0;
	(uParam0[1 /*13*/])->f_1 = { 3265.589f, -4590.696f, 116.0538f };
	(uParam0[1 /*13*/])->f_4 = 356.8507f;
	(uParam0[1 /*13*/])->f_5 = 1;
	(uParam0[1 /*13*/])->f_6 = 2;
	(uParam0[1 /*13*/])->f_7 = 2;
	(uParam0[1 /*13*/])->f_9 = 0;
	(uParam0[1 /*13*/])->f_10 = 0;
	(uParam0[2 /*13*/])->f_1 = { 3252.217f, -4600.818f, 115.6129f };
	(uParam0[2 /*13*/])->f_4 = 358.2709f;
	(uParam0[2 /*13*/])->f_5 = 0;
	(uParam0[2 /*13*/])->f_6 = 2;
	(uParam0[2 /*13*/])->f_7 = 2;
	(uParam0[2 /*13*/])->f_9 = 1;
	(uParam0[2 /*13*/])->f_10 = 0;
	(uParam0[3 /*13*/])->f_1 = { 3263.407f, -4671.862f, 112.9176f };
	(uParam0[3 /*13*/])->f_4 = 343.1592f;
	(uParam0[3 /*13*/])->f_5 = 3;
	(uParam0[3 /*13*/])->f_6 = 2;
	(uParam0[3 /*13*/])->f_7 = 2;
	(uParam0[3 /*13*/])->f_9 = 1;
	(uParam0[3 /*13*/])->f_10 = 0;
	(uParam0[4 /*13*/])->f_1 = { 3259.55f, -4670.381f, 113.0985f };
	(uParam0[4 /*13*/])->f_4 = 333.0004f;
	(uParam0[4 /*13*/])->f_5 = 0;
	(uParam0[4 /*13*/])->f_6 = 2;
	(uParam0[4 /*13*/])->f_7 = 2;
	(uParam0[4 /*13*/])->f_9 = 1;
	(uParam0[4 /*13*/])->f_10 = 0;
	(uParam0[5 /*13*/])->f_1 = { 3284.39f, -4619.99f, 115.01f };
	(uParam0[5 /*13*/])->f_4 = 333.0004f;
	(uParam0[5 /*13*/])->f_5 = 0;
	(uParam0[5 /*13*/])->f_6 = 2;
	(uParam0[5 /*13*/])->f_7 = 0;
	(uParam0[5 /*13*/])->f_9 = 1;
	(uParam0[5 /*13*/])->f_10 = 1;
	(uParam0[6 /*13*/])->f_1 = { 3281.66f, -4627.2f, 114.88f };
	(uParam0[6 /*13*/])->f_4 = 333.0004f;
	(uParam0[6 /*13*/])->f_5 = 0;
	(uParam0[6 /*13*/])->f_6 = 2;
	(uParam0[6 /*13*/])->f_7 = 0;
	(uParam0[6 /*13*/])->f_9 = 1;
	(uParam0[6 /*13*/])->f_10 = 1;
	(uParam0[7 /*13*/])->f_1 = { 3266.56f, -4624.87f, 115.22f };
	(uParam0[7 /*13*/])->f_4 = 333.0004f;
	(uParam0[7 /*13*/])->f_5 = 0;
	(uParam0[7 /*13*/])->f_6 = 2;
	(uParam0[7 /*13*/])->f_7 = 0;
	(uParam0[7 /*13*/])->f_9 = 1;
	(uParam0[7 /*13*/])->f_10 = 1;
	(uParam0[8 /*13*/])->f_1 = { 3272.55f, -4634.51f, 114.69f };
	(uParam0[8 /*13*/])->f_4 = 333.0004f;
	(uParam0[8 /*13*/])->f_5 = 0;
	(uParam0[8 /*13*/])->f_6 = 2;
	(uParam0[8 /*13*/])->f_7 = 0;
	(uParam0[8 /*13*/])->f_9 = 1;
	(uParam0[8 /*13*/])->f_10 = 1;
	(uParam0[9 /*13*/])->f_1 = { 3275.606f, -4655.529f, 113.092f };
	(uParam0[9 /*13*/])->f_4 = 0f;
	(uParam0[9 /*13*/])->f_5 = 3;
	(uParam0[9 /*13*/])->f_6 = 0;
	(uParam0[9 /*13*/])->f_7 = 2;
	(uParam0[9 /*13*/])->f_9 = 1;
	(uParam0[9 /*13*/])->f_10 = 0;
	(uParam0[10 /*13*/])->f_1 = { 3270.976f, -4639.229f, 113.7132f };
	(uParam0[10 /*13*/])->f_4 = 0f;
	(uParam0[10 /*13*/])->f_5 = 0;
	(uParam0[10 /*13*/])->f_6 = 2;
	(uParam0[10 /*13*/])->f_7 = 2;
	(uParam0[10 /*13*/])->f_9 = 1;
	(uParam0[10 /*13*/])->f_10 = 0;
	(uParam0[11 /*13*/])->f_1 = { 3274.28f, -4639.303f, 113.7452f };
	(uParam0[11 /*13*/])->f_4 = 0f;
	(uParam0[11 /*13*/])->f_5 = 1;
	(uParam0[11 /*13*/])->f_6 = 2;
	(uParam0[11 /*13*/])->f_7 = 2;
	(uParam0[11 /*13*/])->f_9 = 1;
	(uParam0[11 /*13*/])->f_10 = 0;
	(uParam0[12 /*13*/])->f_1 = { 3269.21f, -4627.741f, 114.8999f };
	(uParam0[12 /*13*/])->f_4 = 0f;
	(uParam0[12 /*13*/])->f_5 = 0;
	(uParam0[12 /*13*/])->f_6 = 0;
	(uParam0[12 /*13*/])->f_7 = 2;
	(uParam0[12 /*13*/])->f_9 = 1;
	(uParam0[12 /*13*/])->f_10 = 0;
	(uParam0[13 /*13*/])->f_1 = { 3275.936f, -4617.395f, 115.1056f };
	(uParam0[13 /*13*/])->f_4 = 0f;
	(uParam0[13 /*13*/])->f_5 = 1;
	(uParam0[13 /*13*/])->f_6 = 0;
	(uParam0[13 /*13*/])->f_7 = 2;
	(uParam0[13 /*13*/])->f_9 = 1;
	(uParam0[13 /*13*/])->f_10 = 0;
	(uParam0[14 /*13*/])->f_1 = { 3278.874f, -4629.786f, 115.0547f };
	(uParam0[14 /*13*/])->f_4 = 89.5197f;
	(uParam0[14 /*13*/])->f_5 = 0;
	(uParam0[14 /*13*/])->f_6 = 0;
	(uParam0[14 /*13*/])->f_7 = 2;
	(uParam0[14 /*13*/])->f_9 = 1;
	(uParam0[14 /*13*/])->f_10 = 0;
	(uParam0[15 /*13*/])->f_1 = { 3255.842f, -4685.825f, 111.9065f };
	(uParam0[15 /*13*/])->f_4 = 346.24f;
	(uParam0[15 /*13*/])->f_5 = 0;
	(uParam0[15 /*13*/])->f_6 = 0;
	(uParam0[15 /*13*/])->f_7 = 2;
	(uParam0[15 /*13*/])->f_9 = 1;
	(uParam0[15 /*13*/])->f_10 = 0;
	(uParam0[16 /*13*/])->f_1 = { 3256.8f, -4692.021f, 111.884f };
	(uParam0[16 /*13*/])->f_4 = 310.2977f;
	(uParam0[16 /*13*/])->f_5 = 1;
	(uParam0[16 /*13*/])->f_6 = 2;
	(uParam0[16 /*13*/])->f_7 = 0;
	(uParam0[16 /*13*/])->f_9 = 1;
	(uParam0[16 /*13*/])->f_10 = 0;
	(uParam0[17 /*13*/])->f_1 = { 3281.563f, -4665.985f, 113.1895f };
	(uParam0[17 /*13*/])->f_4 = 0f;
	(uParam0[17 /*13*/])->f_5 = 1;
	(uParam0[17 /*13*/])->f_6 = 2;
	(uParam0[17 /*13*/])->f_7 = 2;
	(uParam0[17 /*13*/])->f_9 = 1;
	(uParam0[17 /*13*/])->f_10 = 0;
	(uParam0[18 /*13*/])->f_1 = { 3251.704f, -4684.279f, 112.0217f };
	(uParam0[18 /*13*/])->f_4 = 336.7272f;
	(uParam0[18 /*13*/])->f_5 = 1;
	(uParam0[18 /*13*/])->f_6 = 2;
	(uParam0[18 /*13*/])->f_7 = 5;
	(uParam0[18 /*13*/])->f_9 = 0;
	(uParam0[18 /*13*/])->f_10 = 1;
	(uParam0[19 /*13*/])->f_1 = { 3262.109f, -4691.2f, 112.0502f };
	(uParam0[19 /*13*/])->f_4 = 34.5997f;
	(uParam0[19 /*13*/])->f_5 = 0;
	(uParam0[19 /*13*/])->f_6 = 0;
	(uParam0[19 /*13*/])->f_7 = 0;
	(uParam0[19 /*13*/])->f_9 = 1;
	(uParam0[19 /*13*/])->f_10 = 0;
	(uParam0[20 /*13*/])->f_1 = { 3281.567f, -4649.844f, 113.5098f };
	(uParam0[20 /*13*/])->f_4 = 0f;
	(uParam0[20 /*13*/])->f_5 = 1;
	(uParam0[20 /*13*/])->f_6 = 2;
	(uParam0[20 /*13*/])->f_7 = 2;
	(uParam0[20 /*13*/])->f_9 = 1;
	(uParam0[20 /*13*/])->f_10 = 0;
	(uParam0[21 /*13*/])->f_1 = { 3275.096f, -4659.9f, 113.0035f };
	(uParam0[21 /*13*/])->f_4 = 0f;
	(uParam0[21 /*13*/])->f_5 = 3;
	(uParam0[21 /*13*/])->f_6 = 0;
	(uParam0[21 /*13*/])->f_7 = 2;
	(uParam0[21 /*13*/])->f_9 = 1;
	(uParam0[21 /*13*/])->f_10 = 0;
	(uParam0[22 /*13*/])->f_1 = { 3265.523f, -4657.786f, 113.0917f };
	(uParam0[22 /*13*/])->f_4 = 0f;
	(uParam0[22 /*13*/])->f_5 = 3;
	(uParam0[22 /*13*/])->f_6 = 0;
	(uParam0[22 /*13*/])->f_7 = 2;
	(uParam0[22 /*13*/])->f_9 = 1;
	(uParam0[22 /*13*/])->f_10 = 0;
	(uParam0[23 /*13*/])->f_1 = { 3246.535f, -4679.597f, 112.1638f };
	(uParam0[23 /*13*/])->f_4 = 341.1975f;
	(uParam0[23 /*13*/])->f_5 = 1;
	(uParam0[23 /*13*/])->f_6 = 2;
	(uParam0[23 /*13*/])->f_7 = 2;
	(uParam0[23 /*13*/])->f_9 = 1;
	(uParam0[23 /*13*/])->f_10 = 0;
	(uParam0[24 /*13*/])->f_1 = { 3248.008f, -4680.077f, 112.3925f };
	(uParam0[24 /*13*/])->f_4 = 337.8813f;
	(uParam0[24 /*13*/])->f_5 = 1;
	(uParam0[24 /*13*/])->f_6 = 2;
	(uParam0[24 /*13*/])->f_7 = 2;
	(uParam0[24 /*13*/])->f_9 = 1;
	(uParam0[24 /*13*/])->f_10 = 0;
	(uParam0[25 /*13*/])->f_1 = { 3240.049f, -4665.305f, 114.2898f };
	(uParam0[25 /*13*/])->f_4 = 0f;
	(uParam0[25 /*13*/])->f_5 = 1;
	(uParam0[25 /*13*/])->f_6 = 2;
	(uParam0[25 /*13*/])->f_7 = 2;
	(uParam0[25 /*13*/])->f_9 = 1;
	(uParam0[25 /*13*/])->f_10 = 0;
	(uParam0[26 /*13*/])->f_1 = { 3231.799f, -4681.494f, 111.9197f };
	(uParam0[26 /*13*/])->f_4 = 272.3667f;
	(uParam0[26 /*13*/])->f_5 = 0;
	(uParam0[26 /*13*/])->f_6 = 2;
	(uParam0[26 /*13*/])->f_7 = 2;
	(uParam0[26 /*13*/])->f_9 = 1;
	(uParam0[26 /*13*/])->f_10 = 0;
	(uParam0[27 /*13*/])->f_1 = { 3258.395f, -4608.144f, 115.452f };
	(uParam0[27 /*13*/])->f_4 = 4.3189f;
	(uParam0[27 /*13*/])->f_5 = 0;
	(uParam0[27 /*13*/])->f_6 = 2;
	(uParam0[27 /*13*/])->f_7 = 2;
	(uParam0[27 /*13*/])->f_9 = 1;
	(uParam0[27 /*13*/])->f_10 = 0;
	(uParam0[28 /*13*/])->f_1 = { 3266.514f, -4616.439f, 115.048f };
	(uParam0[28 /*13*/])->f_4 = 3.0096f;
	(uParam0[28 /*13*/])->f_5 = 3;
	(uParam0[28 /*13*/])->f_6 = 2;
	(uParam0[28 /*13*/])->f_7 = 2;
	(uParam0[28 /*13*/])->f_9 = 1;
	(uParam0[28 /*13*/])->f_10 = 0;
	(uParam0[29 /*13*/])->f_1 = { 3213.165f, -4715.649f, 111.8129f };
	(uParam0[29 /*13*/])->f_4 = 295.1623f;
	(uParam0[29 /*13*/])->f_5 = 3;
	(uParam0[29 /*13*/])->f_6 = 2;
	(uParam0[29 /*13*/])->f_7 = 2;
	(uParam0[29 /*13*/])->f_9 = 0;
	(uParam0[29 /*13*/])->f_10 = 0;
	(uParam0[30 /*13*/])->f_1 = { 3265.426f, -4586.963f, 117.0842f };
	(uParam0[30 /*13*/])->f_4 = 180f;
	(uParam0[30 /*13*/])->f_5 = 3;
	(uParam0[30 /*13*/])->f_6 = 0;
	(uParam0[30 /*13*/])->f_7 = 2;
	(uParam0[30 /*13*/])->f_9 = 0;
	(uParam0[30 /*13*/])->f_10 = 0;
	(uParam0[31 /*13*/])->f_1 = { 3262.45f, -4586.9f, 117.11f };
	(uParam0[31 /*13*/])->f_4 = 180f;
	(uParam0[31 /*13*/])->f_5 = 3;
	(uParam0[31 /*13*/])->f_6 = 0;
	(uParam0[31 /*13*/])->f_7 = 2;
	(uParam0[31 /*13*/])->f_9 = 0;
	(uParam0[31 /*13*/])->f_10 = 0;
	(uParam0[32 /*13*/])->f_1 = { 3274.123f, -4635.486f, 114.7559f };
	(uParam0[32 /*13*/])->f_4 = 180f;
	(uParam0[32 /*13*/])->f_5 = 3;
	(uParam0[32 /*13*/])->f_6 = 0;
	(uParam0[32 /*13*/])->f_7 = 2;
	(uParam0[32 /*13*/])->f_9 = 0;
	(uParam0[32 /*13*/])->f_10 = 0;
	(uParam0[33 /*13*/])->f_1 = { 3271.02f, -4635.462f, 114.6817f };
	(uParam0[33 /*13*/])->f_4 = 180f;
	(uParam0[33 /*13*/])->f_5 = 3;
	(uParam0[33 /*13*/])->f_6 = 0;
	(uParam0[33 /*13*/])->f_7 = 2;
	(uParam0[33 /*13*/])->f_9 = 0;
	(uParam0[33 /*13*/])->f_10 = 0;
	(uParam0[34 /*13*/])->f_1 = { 3260.038f, -4669.271f, 112.8813f };
	(uParam0[34 /*13*/])->f_4 = 161.3189f;
	(uParam0[34 /*13*/])->f_5 = 1;
	(uParam0[34 /*13*/])->f_6 = 2;
	(uParam0[34 /*13*/])->f_7 = 2;
	(uParam0[34 /*13*/])->f_9 = 0;
	(uParam0[34 /*13*/])->f_10 = 0;
	(uParam0[35 /*13*/])->f_1 = { 3233.029f, -4681.564f, 112.2276f };
	(uParam0[35 /*13*/])->f_4 = 92.2093f;
	(uParam0[35 /*13*/])->f_5 = 1;
	(uParam0[35 /*13*/])->f_6 = 2;
	(uParam0[35 /*13*/])->f_7 = 2;
	(uParam0[35 /*13*/])->f_9 = 0;
	(uParam0[35 /*13*/])->f_10 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if ((uParam0[iVar0 /*13*/])->f_10 == 0)
		{
			(*uParam0)[iVar0 /*13*/] = TASK::ADD_COVER_POINT((uParam0[iVar0 /*13*/])->f_1, (uParam0[iVar0 /*13*/])->f_4, (uParam0[iVar0 /*13*/])->f_5, (uParam0[iVar0 /*13*/])->f_6, (uParam0[iVar0 /*13*/])->f_7, 0);
		}
		(uParam0[iVar0 /*13*/])->f_8 = SYSTEM::VDIST2(Param1, (uParam0[iVar0 /*13*/])->f_1);
		(uParam0[iVar0 /*13*/])->f_11 = 0;
		(uParam0[iVar0 /*13*/])->f_12 = 0;
		iVar0++;
	}
}

void func_383(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2D988
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 1, 0);
			WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam2, -1, 0, 1);
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, 1, iParam2);
			PED::SET_PED_MAX_HEALTH(iParam0, iParam4);
			ENTITY::SET_ENTITY_HEALTH(iParam0, iParam4);
			PED::ADD_ARMOUR_TO_PED(iParam0, iParam5);
			PED::SET_PED_DIES_WHEN_INJURED(iParam0, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
			PED::SET_PED_AS_ENEMY(iParam0, 1);
			PED::SET_PED_TARGET_LOSS_RESPONSE(iParam0, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, 0);
			TASK::SET_PED_PATH_CAN_USE_CLIMBOVERS(iParam0, iParam3);
			PED::SET_PED_CONFIG_FLAG(iParam0, 118, 0);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, iParam6);
			GlobalFunc_593(iParam0, 0);
		}
	}
}









int func_392(int iParam0)//Position - 0x3078F
{
	if ((iParam0 == 1 && STREAMING::IS_IPL_ACTIVE("prologue03_grv_cov")) || ((iParam0 == 0 && STREAMING::IS_IPL_ACTIVE("prologue03_grv_dug")) && STREAMING::IS_IPL_ACTIVE("prologue_grv_torch")))
	{
		return 1;
	}
	else
	{
		func_393(iParam0);
	}
	return 0;
}

void func_393(int iParam0)//Position - 0x307DD
{
	if (iParam0 == 1)
	{
		STREAMING::REQUEST_IPL("prologue03_grv_cov");
	}
	else
	{
		STREAMING::REQUEST_IPL("prologue03_grv_dug");
		STREAMING::REQUEST_IPL("prologue_grv_torch");
	}
}

void func_394(int iParam0)//Position - 0x30806
{
	if (iParam0 == 1)
	{
		STREAMING::REMOVE_IPL("prologue03_grv_cov");
	}
	else
	{
		STREAMING::REMOVE_IPL("prologue03_grv_dug");
		STREAMING::REMOVE_IPL("prologue_grv_torch");
	}
}

void func_395(char* sParam0)//Position - 0x3082F
{
	float fVar0;
	
	if ((LOCALIZATION::GET_CURRENT_LANGUAGE() == 9 || LOCALIZATION::GET_CURRENT_LANGUAGE() == 10) || LOCALIZATION::GET_CURRENT_LANGUAGE() == 8)
	{
		HUD::SET_TEXT_SCALE(0.675f, 0.675f);
		fVar0 = HUD::GET_RENDERED_CHARACTER_HEIGHT(0.675f, 0);
	}
	else
	{
		HUD::SET_TEXT_SCALE(0.45f, 0.45f);
		fVar0 = HUD::GET_RENDERED_CHARACTER_HEIGHT(0.45f, 0);
	}
	HUD::SET_TEXT_CENTRE(1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(0.5f, (0.5f - (fVar0 / 2f)), 0);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GlobalFunc_5077();
}








int func_403(int iParam0)//Position - 0x30AB3
{
	MISC::SET_BIT(&(Local_365.f_13), 20);
	if (CLOCK::GET_CLOCK_HOURS() < 22 || (CLOCK::GET_CLOCK_HOURS() == 23 && CLOCK::GET_CLOCK_MINUTES() == 59))
	{
		CLOCK::SET_CLOCK_TIME(0, 0, 0);
	}
	func_311();
	func_597();
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_59, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 75f)
	{
		CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST("mic_1_mcs_2", 28, 8);
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
			if (ENTITY::DOES_ENTITY_EXIST(Local_142))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_142))
				{
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Trevor", Local_142, GlobalFunc_4917(2));
				}
			}
			else
			{
				GlobalFunc_10914("Trevor", GlobalFunc_4917(2), 23);
			}
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Chinese_gunman", 2, 1, 0, 0);
		}
	}
	else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("mic_1_mcs_2") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	switch (*iParam0)
	{
		case 0:
			PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_WALK_TO_GRAVEYARD"))
			{
				if (AUDIO::IS_STREAM_PLAYING())
				{
					AUDIO::STOP_STREAM();
				}
				AUDIO::START_AUDIO_SCENE("MI_1_MIC_WALK_TO_GRAVEYARD");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE"))
			{
				if (!AUDIO::IS_STREAM_PLAYING())
				{
					AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
				}
			}
			if (!HUD::DOES_BLIP_EXIST(Local_155.f_1))
			{
				Local_155.f_1 = HUD::ADD_BLIP_FOR_COORD(Local_59);
			}
			if (!func_175("MCH1_GRAVE"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_155.f_1))
				{
					func_377("MCH1_GRAVE", 7500, 1);
				}
			}
			if (!func_175("MCH1_GBTLC"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_155.f_1))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3263.05f, -4704.67f, 104.67f, 3267.14f, -4561.37f, 132.76f, 64f, 0, 1, 0))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_168.f_2, 1) > 25f)
						{
							HUD::CLEAR_PRINTS();
							func_377("MCH1_GBTLC", 7500, 1);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_142))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_142))
				{
					STREAMING::REQUEST_PTFX_ASSET();
					PED::SET_PED_RESET_FLAG(Local_142, 227, 1);
					if (!ENTITY::DOES_ENTITY_EXIST(Local_297))
					{
						func_596(&Local_297, 0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_297))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_297))
						{
							if (!ENTITY::IS_ENTITY_ATTACHED(Local_297))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_297, Local_142, PED::GET_PED_BONE_INDEX(Local_142, 28422), Local_68, Local_68, 0, 0, 0, 0, 2, 1);
							}
						}
					}
					if (STREAMING::HAS_PTFX_ASSET_LOADED())
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_297) && !ENTITY::IS_ENTITY_DEAD(Local_297))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_142) && !ENTITY::IS_ENTITY_DEAD(Local_142))
							{
								if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(Local_297, Local_142))
								{
									if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_142, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor", 3))
									{
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_142, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor") <= 0.1f)
										{
											iLocal_687 = 0;
										}
										if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_142, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor") >= 0.445f)
										{
											if (iLocal_687 == 0)
											{
												if (GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("cs_mich1_spade_dirt_throw", Local_142, Local_80, Local_83, 1065353216, 0, 0, 0))
												{
													iLocal_687 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_142, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor", 3))
					{
						STREAMING::REQUEST_ANIM_DICT("missmic1leadinoutmic_1_mcs_2");
						if (STREAMING::HAS_ANIM_DICT_LOADED("missmic1leadinoutmic_1_mcs_2"))
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(Local_142, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor", Local_59, 0f, 0f, 137.88f, 1000f, -8f, -1, 4105, 0, 2, 0);
						}
					}
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3240.263f, -4574.43f, 115.9419f, 3294.227f, -4574.135f, 120.9419f, 31f, 0, 1, 0))
					{
						iLocal_627 = 1;
						if (iLocal_626 == 0)
						{
							iLocal_626 = MISC::GET_GAME_TIMER();
						}
					}
					if (iLocal_627 == 1)
					{
						func_595();
						GlobalFunc_2536(1, 0);
						if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_142, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor", 3))
						{
							if (GlobalFunc_2521(3000, iLocal_626))
							{
								if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(Local_142, "missmic1leadinoutmic_1_mcs_2", "_leadin_trevor") > 0.75f)
								{
									iLocal_595 = 1;
									STREAMING::REMOVE_ANIM_DICT("missmic1leadinoutmic_1_mcs_2");
									if (HUD::DOES_BLIP_EXIST(Local_155.f_1))
									{
										HUD::REMOVE_BLIP(&(Local_155.f_1));
									}
									AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_GRAVEYARD");
									AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_WALK_TO_GRAVEYARD");
									return 1;
								}
							}
						}
					}
				}
			}
			else if (func_431(&Local_142, 1, 1862763509, 0, 2, 0, 0, 0, 0, -1, 1))
			{
				ENTITY::SET_ENTITY_LOD_DIST(Local_142, 150);
				PED::SET_PED_LOD_MULTIPLIER(Local_142, 5f);
				AUDIO::STOP_PED_SPEAKING(Local_142, 1);
				PED::SET_PED_CONFIG_FLAG(Local_142, 169, 1);
				PED::SET_PED_CONFIG_FLAG(Local_142, 208, 1);
				GlobalFunc_11257(Local_142, 12, 23, 0, -1, 0, 0, 0, -1, -1, -1, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_142, 1);
				if (iLocal_690 == 0)
				{
					PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(Local_142);
					PED::APPLY_PED_DAMAGE_DECAL(Local_142, 1, 0.59f, 0.72f, 25f, 1f, 1f, 0, 1, "basic_dirt_skin");
					PED::APPLY_PED_DAMAGE_DECAL(Local_142, 1, 0.4f, 0.44f, 30f, 1f, 1f, 1, 1, "basic_dirt_skin");
					PED::APPLY_PED_DAMAGE_DECAL(Local_142, 3, 0.4f, 0.12f, 30f, 0.6f, 1f, 1, 1, "basic_dirt_skin");
					PED::APPLY_PED_DAMAGE_DECAL(Local_142, 2, 0.48f, 0.12f, 30f, 0.6f, 1f, 1, 1, "basic_dirt_skin");
					PED::APPLY_PED_DAMAGE_DECAL(Local_142, 0, 0.644f, 0.407f, 30f, 1f, 1f, 6, 1, "basic_dirt_cloth");
					PED::APPLY_PED_DAMAGE_DECAL(Local_142, 0, 0.86f, 0.632f, 90f, 1f, 1f, 6, 1, "basic_dirt_cloth");
					PED::APPLY_PED_DAMAGE_DECAL(Local_142, 4, 0.775f, 0.55f, 0f, 1f, 1f, 0, 1, "basic_dirt_cloth");
					PED::APPLY_PED_DAMAGE_DECAL(Local_142, 5, 0.415f, 0.75f, 36f, 1f, 1f, 1, 1, "basic_dirt_cloth");
					iLocal_690 = 1;
				}
				iLocal_739[13] = 1;
			}
			break;
	}
	return 0;
}




























int func_431(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x34530
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam8 == 0)
				{
					if (iParam4 == 145)
					{
						*iParam0 = PED::CREATE_PED(26, iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					else if (GlobalFunc_7102(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1))
					{
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
					}
					if (!PED::IS_PED_INJURED(*iParam0))
					{
						func_592(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
						}
					}
				}
				else if (iParam8 != 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
					{
						if (iParam4 == 145)
						{
							*iParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam8, 26, iParam0->f_6, iParam9, 1, 1);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						else if (GlobalFunc_7220(iParam0, iParam4, iParam8, iParam9, 1))
						{
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
						}
						if (!PED::IS_PED_INJURED(*iParam0))
						{
							func_592(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
							if (iParam3 == 1)
							{
								iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
							}
						}
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (iParam8 == 0)
			{
				if (func_588(iParam0, iParam4, iParam0->f_2, iParam0->f_5, 1, 0, 0))
				{
					func_592(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
					if (iParam3 == 1)
					{
						iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
					}
					return 1;
				}
			}
			else if (iParam8 != 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam8, 0))
				{
					if (func_432(iParam0, iParam4, iParam8, iParam9, 1, 0, 0))
					{
						func_592(*iParam0, iParam2, iParam5, iParam10, iParam6, iParam7);
						if (iParam3 == 1)
						{
							iParam0->f_1 = GlobalFunc_6783(*iParam0, 0, 0);
						}
						return 1;
					}
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_432(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x3470F
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
				*uParam0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam2, 26, iVar0, uParam3, 1, 1);
				GlobalFunc_8364(*uParam0, iParam1, bParam5);
				PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
				GlobalFunc_11318(*uParam0);
				GlobalFunc_7694(*uParam0, 1, 0);
				GlobalFunc_7693(*uParam0);
				GlobalFunc_7707(*uParam0);
				GlobalFunc_11333(*uParam0, bParam6);
				GlobalFunc_516(*uParam0);
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




























































































































































int func_588(var uParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, bool bParam7, bool bParam8)//Position - 0x61233
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
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam5, 0, 0);
			GlobalFunc_8364(*uParam0, iParam1, bParam7);
			PED::_0xE861D0B05C7662B8(*uParam0, 0, 0);
			GlobalFunc_11318(*uParam0);
			GlobalFunc_7694(*uParam0, 1, 0);
			GlobalFunc_7693(*uParam0);
			GlobalFunc_7707(*uParam0);
			GlobalFunc_11333(*uParam0, bParam8);
			GlobalFunc_516(*uParam0);
			if (bParam6)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}




void func_592(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x613C3
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
			PED::SET_PED_CONFIG_FLAG(iParam0, 32, iParam2);
			PED::SET_PED_CONFIG_FLAG(iParam0, 132, iParam3);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, iParam4);
			PED::SET_PED_AS_ENEMY(iParam0, iParam5);
			if (iParam1 != -86095805)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iParam1);
			}
		}
	}
}



void func_595()//Position - 0x61562
{
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_GAMEPLAY_HINT_FOV(30f);
		CAM::SET_GAMEPLAY_ENTITY_HINT(Local_142, 0f, 0f, 1f, 1, -1, 2500, 2000, 0);
		CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
		CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(0.01f);
		CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(-0.025f);
		CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(0.4f);
		CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-4f);
	}
}

int func_596(int iParam0, int iParam1)//Position - 0x615B6
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0->f_1);
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_1))
		{
			*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_1, iParam0->f_2, 1, 1, 0);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(*iParam0, iParam0->f_2, 0, 0, 1);
			ENTITY::SET_ENTITY_ROTATION(*iParam0, iParam0->f_5, 2, 1);
			ENTITY::FREEZE_ENTITY_POSITION(*iParam0, iParam1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	return 0;
}

void func_597()//Position - 0x6162F
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3198.785f, -4801.354f, 115.8098f, 5f, 5f, 5f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3187.924f, -4756.939f, 115.64f, 20f, 46f, 5f, 0, 1, 0))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
			}
		}
	}
}

int func_598(int iParam0)//Position - 0x616AE
{
	var uVar0;
	
	MISC::SET_BIT(&(Local_365.f_13), 20);
	if (CAM::DOES_CAM_EXIST(uLocal_669))
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	}
	if (CLOCK::GET_CLOCK_HOURS() < 22 || (CLOCK::GET_CLOCK_HOURS() == 23 && CLOCK::GET_CLOCK_MINUTES() == 59))
	{
		CLOCK::SET_CLOCK_TIME(0, 0, 0);
	}
	func_311();
	func_610(&Local_645);
	func_607(&iLocal_693);
	func_606(&(Local_278.f_10));
	func_597();
	switch (*iParam0)
	{
		case 0:
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DRIVE_TO_GRAVEYARD"))
			{
				AUDIO::START_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_GRAVEYARD");
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
			{
				AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_168, -1);
				VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 1, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_168);
				VEHICLE::MODIFY_VEHICLE_TOP_SPEED(Local_168, -20f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			func_605(&uLocal_769);
			GlobalFunc_7632(1);
			HUD::DISPLAY_RADAR(0);
			HUD::DISPLAY_HUD(0);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			*iParam0++;
			break;
		
		case 1:
			if (!CAM::DOES_CAM_EXIST(uLocal_669))
			{
				uLocal_669 = CAM::CREATE_CAMERA(26379945, 1);
				CAM::SET_CAM_PARAMS(uLocal_669, 5442.244f, -5127.124f, 78.32706f, -0.382159f, -0.560862f, 56.80999f, 41.60435f, 0, 1, 1, 2);
				CAM::SHAKE_CAM(uLocal_669, "HAND_SHAKE", 0.1f);
			}
			if (CAM::DOES_CAM_EXIST(uLocal_669))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				*iParam0++;
			}
			break;
		
		case 2:
			if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
			{
				STREAMING::NEW_LOAD_SCENE_START(5442.24f, -5127.12f, 78.24f, -0.84f, 0.55f, -0.01f, 128f, 0);
				iLocal_625 = MISC::GET_GAME_TIMER();
			}
			if (STREAMING::IS_NEW_LOAD_SCENE_LOADED() || GlobalFunc_2521(10000, iLocal_625))
			{
				STREAMING::NEW_LOAD_SCENE_STOP();
				*iParam0++;
			}
			break;
		
		case 3:
			if (CAM::DOES_CAM_EXIST(uLocal_669))
			{
				if (!CAM::IS_CAM_RENDERING(uLocal_669))
				{
					CAM::SET_CAM_PARAMS(uLocal_669, 5442.244f, -5127.124f, 78.32706f, -0.382159f, -0.560862f, 56.80999f, 41.60435f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(uLocal_669, 5442.244f, -5127.124f, 78.08652f, -0.382159f, -0.560862f, 56.80999f, 41.60435f, 6000, 0, 0, 2);
					HUD::DISPLAY_RADAR(0);
					HUD::DISPLAY_HUD(0);
					CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
					RECORDING::_0x293220DA1B46CEBC(0f, 15f, 4);
				}
			}
			MISC::CLEAR_AREA_OF_VEHICLES(5433.34f, -5122.94f, 77.07f, 60f, 0, 0, 0, 0, 0);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(800);
			}
			func_341(Local_168, sLocal_53, 0.75f, 0, 3750f, 0, 0, 1);
			AUDIO::TRIGGER_MUSIC_EVENT("MIC1_DRIVE_TO_GRAVEYARD");
			iLocal_692 = 1;
			*iParam0++;
			break;
		
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(Local_168))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_168))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_168))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_168) >= 6300f)
						{
							if (CAM::DOES_CAM_EXIST(uLocal_669))
							{
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
								{
									SYSTEM::SETTIMERA(0);
									SYSTEM::SETTIMERB(0);
									iLocal_598 = 0;
									iLocal_597 = 1;
									CAM::_0x2A2173E46DAECD12(1, 1);
								}
								CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
								CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
								CAM::SET_CAM_ACTIVE(uLocal_669, 0);
								CAM::RENDER_SCRIPT_CAMS(0, 1, 2750, 1, 0, 0);
								CAM::DESTROY_CAM(uLocal_669, 0);
								HUD::DISPLAY_RADAR(1);
								HUD::DISPLAY_HUD(1);
							}
							PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							Local_168.f_7 = 4;
							GlobalFunc_7632(0);
							*iParam0++;
						}
					}
				}
			}
			break;
		
		case 5:
			CAM::_0x59424BD75174C9B1();
			if (CAM::_0x3044240D2E0FA842())
			{
				PAD::DISABLE_CONTROL_ACTION(1, 26, 1);
				PAD::DISABLE_CONTROL_ACTION(1, 79, 1);
				PAD::DISABLE_CONTROL_ACTION(1, 1, 1);
				PAD::DISABLE_CONTROL_ACTION(1, 2, 1);
				PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
				if (iLocal_597 == 1)
				{
					if (iLocal_598 == 0)
					{
						if (SYSTEM::TIMERA() > 2500)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_598 = 1;
						}
					}
				}
			}
			else if (iLocal_597 == 1)
			{
				CAM::_0x2A2173E46DAECD12(1, 4);
				iLocal_597 = 0;
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_168))
			{
				if (iLocal_592 == 0)
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_168) >= 10250f)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_168);
					}
					if (func_122(Local_168))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_168);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						iLocal_592 = 1;
					}
				}
			}
			GlobalFunc_9194(&Local_365, Local_155.f_7, 0.25f, 0.25f, 2f, 1, Local_168, &Local_645, "CMN_GENGETIN", "CMN_GENGETBCK", 1, 0, 1, -1);
			func_601(PLAYER::PLAYER_PED_ID());
			AUDIO::PREPARE_MUSIC_EVENT("MIC1_ARRIVED_CHURCH");
			if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_168, 3219.977f, -4706.303f, 112.8766f, 18f, 20f, 2f, 0, 1, 0))
				{
					if (!CAM::DOES_CAM_EXIST(uLocal_669))
					{
						uLocal_669 = CAM::CREATE_CAMERA(26379945, 1);
						CAM::SET_CAM_PARAMS(uLocal_669, 3212.396f, -4728.644f, 113.4335f, 7.027314f, 0.084961f, -27.49263f, 33.44102f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_669, 3213.254f, -4726.995f, 113.6627f, 7.027314f, 0.084961f, -27.49263f, 33.44102f, 10000, 3, 3, 2);
						CAM::SHAKE_CAM(uLocal_669, "HAND_SHAKE", 0.1f);
						HUD::DISPLAY_HUD(0);
						HUD::DISPLAY_RADAR(0);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						RECORDING::_0x293220DA1B46CEBC(8f, 15f, 4);
					}
					if (CAM::DOES_CAM_EXIST(uLocal_669))
					{
						PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
						func_341(Local_168, sLocal_53, 1f, 0, 1500f, 0, 0, 1);
						GlobalFunc_7632(1);
						GlobalFunc_5105();
						GlobalFunc_2885();
						*iParam0++;
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_168))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_168))
						{
							MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(Local_168, 1), 5f, 0);
							GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_168, 1), 5f);
						}
					}
					MISC::CLEAR_AREA(3223.31f, -4703.96f, 111.83f, 10f, 1, 0, 0, 0);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_168, 1);
						ENTITY::SET_ENTITY_INVINCIBLE(Local_168, 1);
						if (!PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_168))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_168, -1);
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3236.008f, -4682.933f, 113.858f, 36f, 16f, 3f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_COORD(Local_168, 3236.008f, -4682.933f, 113.858f, 36f, 16f, 3f, 0, 1, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_ARRIVED_CHURCH"))
				{
					if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_ARRIVED_CHURCH"))
					{
					}
				}
				GlobalFunc_5105();
				*iParam0 = 9;
			}
			VEHICLE::REQUEST_VEHICLE_RECORDING(Local_168.f_7, sLocal_53);
			break;
		
		case 6:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
			{
				if (iLocal_602 == 0)
				{
					if (AUDIO::PREPARE_MUSIC_EVENT("MIC1_ARRIVED_CHURCH"))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_168) > 3750f)
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_ARRIVED_CHURCH"))
							{
								iLocal_602 = 1;
							}
						}
					}
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_168))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(Local_168) >= 8200f)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_168);
						ENTITY::SET_ENTITY_COORDS(Local_168, 3212.003f, -4689.323f, 111.6762f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_168, 225.1631f);
						VEHICLE::SET_VEHICLE_LIGHTS(Local_168, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_168);
						Local_155.f_10 = MISC::GET_GAME_TIMER();
						*iParam0++;
					}
				}
			}
			break;
		
		case 7:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
			{
				if (GlobalFunc_2521(1000, Local_155.f_10))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_168))
					{
						if (CAM::DOES_CAM_EXIST(uLocal_669))
						{
							CAM::SET_CAM_PARAMS(uLocal_669, 3209.036f, -4688.779f, 113.4236f, -1.887575f, 0f, -81.36583f, 54.46621f, 0, 1, 1, 2);
							CAM::SET_CAM_PARAMS(uLocal_669, 3209.036f, -4688.779f, 113.4236f, -1.887575f, 0f, -78.47057f, 54.46621f, 3000, 3, 3, 2);
							CAM::SHAKE_CAM(uLocal_669, "HAND_SHAKE", 0.1f);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						TASK::OPEN_SEQUENCE_TASK(&uVar0);
						TASK::TASK_LEAVE_VEHICLE(0, Local_168, 0);
						TASK::TASK_TURN_PED_TO_FACE_COORD(0, 3255.48f, -4685.06f, 113.11f, 0);
						TASK::TASK_LOOK_AT_COORD(0, 3255.48f, -4685.06f, 113.11f, 3000, 0, 2);
						TASK::CLOSE_SEQUENCE_TASK(uVar0);
						TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
						TASK::CLEAR_SEQUENCE_TASK(&uVar0);
						GlobalFunc_657();
						Local_155.f_10 = MISC::GET_GAME_TIMER();
						iLocal_598 = 0;
						*iParam0++;
					}
				}
			}
			break;
		
		case 8:
			if (CAM::DOES_CAM_EXIST(uLocal_669))
			{
				if (GlobalFunc_2521(1500, Local_155.f_10))
				{
					*iParam0++;
				}
				else if (GlobalFunc_2521(1200, Local_155.f_10))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						if (iLocal_598 == 0)
						{
							GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
							AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
							iLocal_598 = 1;
						}
					}
				}
			}
			break;
		
		case 9:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
			{
				ENTITY::SET_ENTITY_INVINCIBLE(Local_168, 0);
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GlobalFunc_7139(&Local_365, 0);
			GlobalFunc_7632(0);
			iLocal_595 = 1;
			AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_GRAVEYARD");
			if (!AUDIO::IS_STREAM_PLAYING())
			{
				AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
			}
			*iParam0++;
			break;
		
		case 10:
			if (CAM::DOES_CAM_EXIST(uLocal_669))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(45f);
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(0, 0, 3, 0);
				}
				HUD::DISPLAY_HUD(1);
				HUD::DISPLAY_RADAR(1);
				CAM::DESTROY_CAM(uLocal_669, 0);
				CAM::DESTROY_ALL_CAMS(0);
			}
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
			if (ENTITY::DOES_ENTITY_EXIST(Local_278) && ENTITY::DOES_ENTITY_EXIST(Local_278.f_1))
			{
				PED::DELETE_PED(&(Local_278.f_1));
				VEHICLE::DELETE_MISSION_TRAIN(&Local_278);
			}
			if (!AUDIO::HAS_SOUND_FINISHED(uLocal_631))
			{
				AUDIO::STOP_SOUND(uLocal_631);
			}
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds");
			return 1;
			break;
	}
	return 0;
}



void func_601(int iParam0)//Position - 0x620C5
{
	struct<8> Var0;
	float fVar8;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_602(iParam0, &uLocal_769, &Var0))
		{
			fVar8 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Var0, 1);
			if (fVar8 > Var0.f_7)
			{
				if (Var0.f_5 == 1)
				{
					if (HUD::DOES_BLIP_EXIST(Local_365.f_5) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_599 = 1;
					}
				}
				else
				{
					iLocal_599 = 1;
				}
			}
			else if (fVar8 > Var0.f_6)
			{
				if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
				{
					if (!func_175("MCH1_GBRLC"))
					{
						if (GlobalFunc_5172(&Local_365, 0))
						{
							HUD::CLEAR_PRINTS();
						}
						func_377("MCH1_GBRLC", 7500, 1);
					}
				}
			}
		}
	}
}

int func_602(int iParam0, var uParam1, var uParam2)//Position - 0x62171
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 0;
	fVar1 = 1000f;
	fVar2 = 0f;
	iVar3 = -1;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam1 - 1))
		{
			if ((uParam1[iVar0 /*8*/])->f_4 == 0)
			{
				fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), *(uParam1[iVar0 /*8*/]), 1);
				if (fVar2 < fVar1)
				{
					fVar1 = fVar2;
					iVar3 = iVar0;
					(uParam1[iVar0 /*8*/])->f_3 = 1;
					if (iVar0 > 0)
					{
						if ((uParam1[(iVar0 - 1) /*8*/])->f_3 == 1)
						{
							(uParam1[(iVar0 - 1) /*8*/])->f_3 = 0;
							(uParam1[(iVar0 - 1) /*8*/])->f_4 = 1;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (iVar3 == -1)
	{
		return 0;
	}
	*uParam2 = { *(uParam1[iVar3 /*8*/]) };
	return 1;
}



void func_605(var uParam0)//Position - 0x622B3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(uParam0[iVar0 /*8*/])->f_3 = 0;
		(uParam0[iVar0 /*8*/])->f_4 = 0;
		(uParam0[iVar0 /*8*/])->f_5 = 0;
		(uParam0[iVar0 /*8*/])->f_6 = 30f;
		(uParam0[iVar0 /*8*/])->f_7 = 65f;
		iVar0++;
	}
	*(uParam0[0 /*8*/]) = { 5389.937f, -5119.845f, 77.2221f };
	(uParam0[0 /*8*/])->f_6 = 60f;
	(uParam0[0 /*8*/])->f_7 = 75f;
	*(uParam0[1 /*8*/]) = { 5345.941f, -5119.006f, 77.553f };
	*(uParam0[2 /*8*/]) = { 5296.898f, -5117.057f, 77.7141f };
	*(uParam0[3 /*8*/]) = { 5247.01f, -5118.962f, 78.1801f };
	*(uParam0[4 /*8*/]) = { 5204.369f, -5109.839f, 80.1127f };
	*(uParam0[5 /*8*/]) = { 5159.144f, -5099.816f, 82.9601f };
	*(uParam0[6 /*8*/]) = { 5108.682f, -5096.338f, 85.0854f };
	*(uParam0[7 /*8*/]) = { 5062.918f, -5100.38f, 86.1269f };
	*(uParam0[8 /*8*/]) = { 5015.006f, -5099.804f, 87.3856f };
	*(uParam0[9 /*8*/]) = { 4969.421f, -5094.081f, 89.0202f };
	*(uParam0[10 /*8*/]) = { 4919.649f, -5074.739f, 92.9304f };
	*(uParam0[11 /*8*/]) = { 4870.771f, -5078.612f, 93.9856f };
	*(uParam0[12 /*8*/]) = { 4832.36f, -5084.363f, 99.454f };
	*(uParam0[13 /*8*/]) = { 4785.051f, -5086.877f, 105.334f };
	*(uParam0[14 /*8*/]) = { 4738.467f, -5080.261f, 105.8345f };
	*(uParam0[15 /*8*/]) = { 4686.553f, -5076.77f, 104.6976f };
	*(uParam0[16 /*8*/]) = { 4647.929f, -5081.849f, 104.5225f };
	*(uParam0[17 /*8*/]) = { 4602.044f, -5065.892f, 107.5456f };
	*(uParam0[18 /*8*/]) = { 4565.051f, -5069.597f, 109.665f };
	*(uParam0[19 /*8*/]) = { 4536.746f, -5087.077f, 109.574f };
	*(uParam0[20 /*8*/]) = { 4509.19f, -5097.901f, 109.6287f };
	*(uParam0[21 /*8*/]) = { 4456.625f, -5103.697f, 110.0983f };
	*(uParam0[22 /*8*/]) = { 4424.9f, -5098.854f, 109.9986f };
	*(uParam0[23 /*8*/]) = { 4396.002f, -5093.279f, 110.1756f };
	*(uParam0[24 /*8*/]) = { 4353.397f, -5084.687f, 110.0036f };
	*(uParam0[25 /*8*/]) = { 4320.799f, -5079.948f, 109.9395f };
	*(uParam0[26 /*8*/]) = { 4291.615f, -5075.31f, 109.5563f };
	*(uParam0[27 /*8*/]) = { 4267.072f, -5073.165f, 109.808f };
	*(uParam0[28 /*8*/]) = { 4226.293f, -5070.544f, 109.8746f };
	*(uParam0[29 /*8*/]) = { 4174.723f, -5066.477f, 109.3556f };
	*(uParam0[30 /*8*/]) = { 4143.577f, -5062.443f, 108.4574f };
	*(uParam0[31 /*8*/]) = { 4093.828f, -5059.816f, 107.4577f };
	*(uParam0[32 /*8*/]) = { 4052.048f, -5055.226f, 107.6872f };
	(uParam0[32 /*8*/])->f_7 = 75f;
	*(uParam0[33 /*8*/]) = { 4004.298f, -5049.775f, 108.2748f };
	(uParam0[33 /*8*/])->f_7 = 75f;
	*(uParam0[34 /*8*/]) = { 3964.873f, -5042.977f, 108.9244f };
	(uParam0[34 /*8*/])->f_7 = 80f;
	*(uParam0[35 /*8*/]) = { 3917.597f, -5032.841f, 109.8531f };
	(uParam0[35 /*8*/])->f_7 = 80f;
	*(uParam0[36 /*8*/]) = { 3878.258f, -5020.622f, 110.4011f };
	(uParam0[36 /*8*/])->f_7 = 80f;
	*(uParam0[37 /*8*/]) = { 3833.264f, -5007.942f, 110.8658f };
	(uParam0[37 /*8*/])->f_7 = 80f;
	*(uParam0[38 /*8*/]) = { 3794.081f, -4991.224f, 110.7152f };
	(uParam0[38 /*8*/])->f_7 = 80f;
	*(uParam0[39 /*8*/]) = { 3760.813f, -4980.036f, 110.1112f };
	(uParam0[39 /*8*/])->f_7 = 80f;
	*(uParam0[40 /*8*/]) = { 3732.605f, -4965.341f, 110.3322f };
	(uParam0[40 /*8*/])->f_7 = 80f;
	*(uParam0[41 /*8*/]) = { 3693.698f, -4948.25f, 110.6774f };
	(uParam0[41 /*8*/])->f_7 = 80f;
	*(uParam0[42 /*8*/]) = { 3671.085f, -4935.008f, 110.6896f };
	(uParam0[42 /*8*/])->f_7 = 80f;
	*(uParam0[43 /*8*/]) = { 3627.583f, -4914.817f, 110.6058f };
	*(uParam0[44 /*8*/]) = { 3590.403f, -4898.148f, 110.6681f };
	*(uParam0[45 /*8*/]) = { 3553.383f, -4885.204f, 110.7241f };
	*(uParam0[46 /*8*/]) = { 3524.905f, -4873.623f, 110.7502f };
	*(uParam0[47 /*8*/]) = { 3481.619f, -4862.82f, 110.7855f };
	*(uParam0[48 /*8*/]) = { 3447.189f, -4856.96f, 110.7985f };
	*(uParam0[49 /*8*/]) = { 3415.626f, -4851.487f, 110.8072f };
	*(uParam0[50 /*8*/]) = { 3387.06f, -4848.462f, 110.7909f };
	*(uParam0[51 /*8*/]) = { 3343.531f, -4845.694f, 110.8147f };
	*(uParam0[52 /*8*/]) = { 3313.548f, -4842.952f, 110.814f };
	*(uParam0[53 /*8*/]) = { 3270.779f, -4839.164f, 110.8142f };
	*(uParam0[54 /*8*/]) = { 3242.13f, -4837.096f, 110.8146f };
	*(uParam0[55 /*8*/]) = { 3212.882f, -4833.655f, 110.815f };
	(uParam0[55 /*8*/])->f_6 = 25f;
	(uParam0[55 /*8*/])->f_7 = 50f;
	*(uParam0[56 /*8*/]) = { 3214.885f, -4805.01f, 110.8144f };
	(uParam0[56 /*8*/])->f_6 = 35f;
	(uParam0[56 /*8*/])->f_7 = 55f;
	*(uParam0[57 /*8*/]) = { 3217.22f, -4777.529f, 110.8147f };
	*(uParam0[58 /*8*/]) = { 3220.828f, -4727.342f, 111.2513f };
	(uParam0[58 /*8*/])->f_5 = 1;
}

void func_606(var uParam0)//Position - 0x6292F
{
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 4363.457f, -5083.8f, 109.9413f, 32f, 164f, 8f, 0, 1, 0))
			{
				*uParam0++;
			}
			break;
		
		case 1:
			if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds", 0) && func_307(&Local_278, 16f, 0))
			{
				if (AUDIO::HAS_SOUND_FINISHED(uLocal_631))
				{
					AUDIO::PLAY_SOUND_FROM_COORD(uLocal_631, "Train_Bell", 3882.67f, -5017.19f, 113.72f, "Prologue_Sounds", 0, 0, 0);
				}
				*uParam0++;
			}
			break;
		
		case 2:
			if (ENTITY::DOES_ENTITY_EXIST(Local_278) && ENTITY::DOES_ENTITY_EXIST(Local_278.f_1))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(Local_278, 3960.78f, -5569.91f, 110f, 10f, 10f, 10f, 0, 1, 0))
				{
					PED::DELETE_PED(&(Local_278.f_1));
					VEHICLE::DELETE_MISSION_TRAIN(&Local_278);
					if (!AUDIO::HAS_SOUND_FINISHED(uLocal_631))
					{
						AUDIO::STOP_SOUND(uLocal_631);
					}
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Train_Sounds");
					*uParam0++;
				}
			}
			break;
	}
}

void func_607(int iParam0)//Position - 0x62A54
{
	if (iLocal_692 == 1)
	{
		switch (*iParam0)
		{
			case 0:
				if (!AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
					}
					if (AUDIO::LOAD_STREAM("FLASHBACK_01", "MICHAEL1_FLASHBACK_SOUNDSET"))
					{
						if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_168))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_86, 42f, 128f, 8f, 0, 1, 0))
							{
								AUDIO::PLAY_STREAM_FRONTEND();
								iLocal_694 = 0;
								func_177("FLASHBACK_01", 1);
								AUDIO::START_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
								*iParam0++;
							}
						}
					}
				}
				break;
			
			case 1:
				if (!AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
					}
					if (AUDIO::LOAD_STREAM("FLASHBACK_02", "MICHAEL1_FLASHBACK_SOUNDSET"))
					{
						if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_168))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_89, 132f, 196f, 16f, 0, 1, 0))
							{
								AUDIO::PLAY_STREAM_FRONTEND();
								iLocal_694 = 10;
								func_177("FLASHBACK_02", 1);
								AUDIO::START_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
								*iParam0++;
							}
						}
					}
				}
				break;
			
			case 2:
				if (!AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
					}
					if (AUDIO::LOAD_STREAM("FLASHBACK_03", "MICHAEL1_FLASHBACK_SOUNDSET"))
					{
						if (GlobalFunc_2522(PLAYER::PLAYER_PED_ID(), Local_168))
						{
							if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_92, 72f, 72f, 16f, 0, 1, 0))
							{
								AUDIO::PLAY_STREAM_FRONTEND();
								iLocal_694 = 20;
								func_177("FLASHBACK_03", 1);
								AUDIO::START_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
								*iParam0++;
							}
						}
					}
				}
				break;
			}
	}
	switch (iLocal_694)
	{
		case 0:
			if (func_175("FLASHBACK_01"))
			{
				if (AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::GET_STREAM_PLAY_TIME() >= 100)
					{
						if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
						{
							func_608("MCH1_FLASH1", 10000);
						}
						iLocal_694++;
					}
				}
			}
			break;
		
		case 1:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 10300)
				{
					if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
					{
						func_608("MCH1_FLASH2", 7500);
					}
					iLocal_694++;
				}
			}
			break;
		
		case 2:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 13500)
				{
					if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
					{
						func_608("MCH1_FLASH3", 10000);
					}
					iLocal_694++;
				}
			}
			break;
		
		case 3:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 23000)
				{
					if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
					{
						func_608("MCH1_FLASH4", 7500);
					}
					iLocal_694++;
				}
			}
			break;
		
		case 4:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 26500)
				{
					if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
					{
						func_608("MCH1_FLASH5", 10000);
					}
					iLocal_694++;
				}
			}
			break;
		
		case 5:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 36500)
				{
					if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
					{
						func_608("MCH1_FLASH6", 10000);
					}
					iLocal_694++;
				}
			}
			break;
		
		case 6:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 42300)
				{
					if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
					{
						func_608("MCH1_FLASH7", 5000);
						iLocal_694++;
					}
				}
			}
			break;
		
		case 10:
			if (func_175("FLASHBACK_02"))
			{
				if (AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::GET_STREAM_PLAY_TIME() >= 100)
					{
						if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
						{
							func_608("MCH1_FLASH8", 7500);
						}
						iLocal_694++;
					}
				}
			}
			break;
		
		case 11:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 7500)
				{
					if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
					{
						func_608("MCH1_FLASH9", 7500);
					}
					iLocal_694++;
				}
			}
			break;
		
		case 12:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 12500)
				{
					if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
					{
						func_608("MCH1_FLASH10", 10000);
					}
					iLocal_694++;
				}
			}
			break;
		
		case 13:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 22600)
				{
					if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
					{
						func_608("MCH1_FLASH11", 4300);
					}
					iLocal_694++;
				}
			}
			break;
		
		case 20:
			if (func_175("FLASHBACK_03"))
			{
				if (AUDIO::IS_STREAM_PLAYING())
				{
					if (AUDIO::GET_STREAM_PLAY_TIME() >= 100)
					{
						if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
						{
							func_608("MCH1_FLASH12", 7500);
						}
						iLocal_694++;
					}
				}
			}
			break;
		
		case 21:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 4000)
				{
					if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
					{
						func_608("MCH1_FLASH13", 7500);
					}
					iLocal_694++;
				}
			}
			break;
		
		case 22:
			if (AUDIO::IS_STREAM_PLAYING())
			{
				if (AUDIO::GET_STREAM_PLAY_TIME() >= 7500)
				{
					if (!GlobalFunc_663("MCH1_GBRLC", 0, 0))
					{
						func_608("MCH1_FLASH14", 4500);
					}
					iLocal_694++;
				}
			}
			break;
	}
	if (AUDIO::IS_STREAM_PLAYING())
	{
		if (!GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_168, 0) && iLocal_602 == 0)
		{
			AUDIO::STOP_STREAM();
			AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DUCKING_FOR_SPEECH_SCENE");
			if (((((((((((((GlobalFunc_663("MCH1_FLASH1", 0, 0) || GlobalFunc_663("MCH1_FLASH2", 0, 0)) || GlobalFunc_663("MCH1_FLASH3", 0, 0)) || GlobalFunc_663("MCH1_FLASH4", 0, 0)) || GlobalFunc_663("MCH1_FLASH5", 0, 0)) || GlobalFunc_663("MCH1_FLASH6", 0, 0)) || GlobalFunc_663("MCH1_FLASH7", 0, 0)) || GlobalFunc_663("MCH1_FLASH8", 0, 0)) || GlobalFunc_663("MCH1_FLASH9", 0, 0)) || GlobalFunc_663("MCH1_FLASH10", 0, 0)) || GlobalFunc_663("MCH1_FLASH11", 0, 0)) || GlobalFunc_663("MCH1_FLASH12", 0, 0)) || GlobalFunc_663("MCH1_FLASH13", 0, 0)) || GlobalFunc_663("MCH1_FLASH14", 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
	}
}

void func_608(char* sParam0, int iParam1)//Position - 0x6309B
{
	HUD::_0x57D760D55F54E071(1);
	if (MISC::GET_PROFILE_SETTING(203) == 1)
	{
		HUD::CLEAR_PRINTS();
		GlobalFunc_2523(sParam0, iParam1, 1);
	}
}


void func_610(char* sParam0)//Position - 0x630DD
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (!func_175(sParam0))
		{
			if (GlobalFunc_663(sParam0, 0, 0))
			{
				func_177(sParam0, 1);
			}
		}
		else if (!GlobalFunc_663(sParam0, 0, 0))
		{
			StringCopy(sParam0, "", 16);
		}
	}
}

int func_611(int iParam0, int iParam1)//Position - 0x63122
{
	int iVar0;
	int iVar1;
	
	if (GlobalFunc_8315() == 0)
	{
		switch (*iParam0)
		{
			case 0:
				if (GlobalFunc_5927("mic_1_mcs_1", 1))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Michael", 0, 0, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_210, "Chinese_Goon_Car", 2, joaat("oracle2"), 0);
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(1);
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
					GlobalFunc_8380(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 1, 0);
					*iParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					GlobalFunc_2427(2, 0);
					if (CAM::DOES_CAM_EXIST(uLocal_669))
					{
						CAM::DESTROY_ALL_CAMS(0);
						CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						HUD::DISPLAY_HUD(1);
						HUD::DISPLAY_RADAR(1);
					}
					iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_155.f_2, ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 15f)
							{
								if (iVar0 != Local_168)
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
								}
								ENTITY::SET_ENTITY_COORDS(iVar0, Local_168.f_2, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar0, Local_168.f_5);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
								VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							}
						}
					}
					FIRE::STOP_FIRE_IN_RANGE(Local_155.f_2, 25f);
					MISC::CLEAR_AREA_OF_VEHICLES(Local_155.f_2, 25f, 0, 0, 0, 0, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(Local_155.f_2, 25f, 0);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(Local_155.f_2, 25f);
					MISC::CLEAR_AREA_OF_PEDS(-1035.415f, -2743.949f, 19.16928f, 6f, 0);
					MISC::CLEAR_AREA_OF_PEDS(-1035.518f, -2739.144f, 19.16928f, 3.5f, 0);
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					*iParam0++;
				}
				break;
			
			case 2:
				iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (iVar1 != Local_168)
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_210))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Chinese_Goon_Car", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chinese_Goon_Car", 0)))
						{
							iLocal_210 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Chinese_Goon_Car", 0));
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_210, 1, 1);
							VEHICLE::SET_VEHICLE_LIGHTS(iLocal_210, 3);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Chinese_Goon_Car", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_210))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_210);
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_168))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_168);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_210))
					{
						VEHICLE::DELETE_VEHICLE(&iLocal_210);
					}
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					GlobalFunc_8380(0, 1, 1, 0);
					*iParam0++;
				}
				else
				{
					if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
					{
						CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					}
					func_613();
					func_393(0);
				}
				break;
			
			case 3:
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (func_612() && func_392(0))
					{
						RECORDING::_0x81CBAE94390F9F89();
						return 1;
					}
				}
				break;
		}
	}
	else if (GlobalFunc_8315() == 2)
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			GlobalFunc_7629();
			switch (*iParam1)
			{
				case 0:
					func_613();
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
					}
					*iParam1++;
					break;
				
				case 1:
					if (func_612() && func_392(1))
					{
						RECORDING::_0x81CBAE94390F9F89();
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_612()//Position - 0x634B9
{
	if ((((((((((((((((((((((((((STREAMING::IS_IPL_ACTIVE("prologue01") && STREAMING::IS_IPL_ACTIVE("prologue01c")) && STREAMING::IS_IPL_ACTIVE("prologue01d")) && STREAMING::IS_IPL_ACTIVE("prologue01e")) && STREAMING::IS_IPL_ACTIVE("prologue01f")) && STREAMING::IS_IPL_ACTIVE("prologue01g")) && STREAMING::IS_IPL_ACTIVE("prologue01h")) && STREAMING::IS_IPL_ACTIVE("prologue01i")) && STREAMING::IS_IPL_ACTIVE("prologue01j")) && STREAMING::IS_IPL_ACTIVE("prologue01k")) && STREAMING::IS_IPL_ACTIVE("prologue01z")) && STREAMING::IS_IPL_ACTIVE("prologue02")) && STREAMING::IS_IPL_ACTIVE("prologue03")) && STREAMING::IS_IPL_ACTIVE("prologue03b")) && STREAMING::IS_IPL_ACTIVE("prologue04")) && STREAMING::IS_IPL_ACTIVE("prologue04b")) && STREAMING::IS_IPL_ACTIVE("prologue05")) && STREAMING::IS_IPL_ACTIVE("prologue05b")) && STREAMING::IS_IPL_ACTIVE("prologue06")) && STREAMING::IS_IPL_ACTIVE("prologue06b")) && STREAMING::IS_IPL_ACTIVE("prologuerd")) && STREAMING::IS_IPL_ACTIVE("prologuerdb")) && STREAMING::IS_IPL_ACTIVE("prologue_occl")) && STREAMING::IS_IPL_ACTIVE("prologue_m2_door")) && STREAMING::IS_IPL_ACTIVE("prologue06_pannel")) && STREAMING::IS_IPL_ACTIVE("prologue_LODLights")) && STREAMING::IS_IPL_ACTIVE("prologue_DistantLights"))
	{
		return 1;
	}
	else
	{
		func_613();
	}
	return 0;
}

void func_613()//Position - 0x6362A
{
	STREAMING::REQUEST_IPL("prologue01");
	STREAMING::REQUEST_IPL("prologue01c");
	STREAMING::REQUEST_IPL("prologue01d");
	STREAMING::REQUEST_IPL("prologue01e");
	STREAMING::REQUEST_IPL("prologue01f");
	STREAMING::REQUEST_IPL("prologue01g");
	STREAMING::REQUEST_IPL("prologue01h");
	STREAMING::REQUEST_IPL("prologue01i");
	STREAMING::REQUEST_IPL("prologue01j");
	STREAMING::REQUEST_IPL("prologue01k");
	STREAMING::REQUEST_IPL("prologue01z");
	STREAMING::REQUEST_IPL("prologue02");
	STREAMING::REQUEST_IPL("prologue03");
	STREAMING::REQUEST_IPL("prologue03b");
	STREAMING::REQUEST_IPL("prologue04");
	STREAMING::REQUEST_IPL("prologue04b");
	STREAMING::REQUEST_IPL("prologue05");
	STREAMING::REQUEST_IPL("prologue05b");
	STREAMING::REQUEST_IPL("prologue06");
	STREAMING::REQUEST_IPL("prologue06b");
	STREAMING::REQUEST_IPL("prologuerd");
	STREAMING::REQUEST_IPL("prologuerdb");
	STREAMING::REQUEST_IPL("prologue_occl");
	STREAMING::REQUEST_IPL("prologue_m2_door");
	STREAMING::REQUEST_IPL("prologue06_pannel");
	STREAMING::REQUEST_IPL("prologue_LODLights");
	func_614("prologue_LODLights");
	STREAMING::REQUEST_IPL("prologue_DistantLights");
	func_614("prologue_DistantLights");
}

void func_614(char* sParam0)//Position - 0x6371A
{
	int iVar0;
	int iVar1;
	
	iVar1 = MISC::GET_HASH_KEY(sParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (MISC::GET_HASH_KEY(&(Global_33955[iVar0 /*8*/])) == iVar1)
		{
			StringCopy(&(Global_33955[iVar0 /*8*/]), "", 32);
		}
		iVar0++;
	}
}


int func_616(int iParam0)//Position - 0x63781
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	
	MISC::SET_BIT(&(Local_365.f_13), 20);
	Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	switch (*iParam0)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_196, 0))
				{
					if (HUD::DOES_BLIP_EXIST(Local_365))
					{
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_196, 0);
					}
					if (iLocal_601 == 0)
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_196))
						{
							if (AUDIO::TRIGGER_MUSIC_EVENT("MIC1_TREVOR_PLANE"))
							{
								AUDIO::START_AUDIO_SCENE("MI_1_TREV_FLY_TO_LUDENDORFF");
								iLocal_601 = 1;
							}
						}
					}
					if (iLocal_639 == 0)
					{
						MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 60f);
						iLocal_638 = MISC::GET_GAME_TIMER();
						iLocal_639 = 1;
					}
					if (iLocal_640 == 0)
					{
						if (iLocal_639 == 1)
						{
							if (iLocal_638 != 0 && GlobalFunc_2521(60000, iLocal_638))
							{
								MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("RAIN", 35f);
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
								{
									AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_630, "MIC_1_RAIN_ON_PLANE_MASTER", Local_196, 0, 0, 0);
								}
								iLocal_638 = MISC::GET_GAME_TIMER();
								iLocal_640 = 1;
							}
						}
					}
					if (iLocal_641 == 0)
					{
						if (iLocal_640 == 1)
						{
							if (iLocal_638 != 0 && GlobalFunc_2521(35000, iLocal_638))
							{
								MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("THUNDER", 35f);
								iLocal_641 = 1;
							}
						}
					}
				}
				else if (!HUD::DOES_BLIP_EXIST(Local_365))
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_196, 1);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
			{
				fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(HUD::GET_BLIP_COORDS(Local_365.f_5), Var4, 1);
				if (ENTITY::DOES_ENTITY_EXIST(Local_289))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_289))
					{
						Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_289, Var4) };
					}
				}
			}
			if (!func_175("MCH1_TRON"))
			{
				if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
				{
					if (fVar0 > 0f && fVar0 < 2200f)
					{
						GlobalFunc_10725(20, "MCH1_TRON", 1, 1, 0, 0, 0, 1, 0, 1);
						func_177("MCH1_TRON", 1);
					}
				}
			}
			if (GlobalFunc_9194(&Local_365, Local_555, Local_555.f_1, Var4.f_2, Local_555.f_3, 0, Local_196, "MCH1_GT_T3", "CMN_GENGETINPL", "CMN_GENGETBCKPL", 1, 0, 1, -1) || (((HUD::DOES_BLIP_EXIST(Local_365.f_5) && Var1.f_1 > 0f) && fVar0 > 0f) && fVar0 < 500f))
			{
				GlobalFunc_7139(&Local_365, 0);
				AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FLIGHT_ARRIVING");
				if (!PED::IS_PED_INJURED(Local_155))
				{
					TASK::CLEAR_PED_TASKS(Local_155);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_155);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_168);
				}
				if (!PED::IS_PED_INJURED(iLocal_321[0]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_321[0]);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_321[0]));
				}
				if (HUD::DOES_BLIP_EXIST(Local_155.f_1))
				{
					HUD::REMOVE_BLIP(&(Local_155.f_1));
				}
				GlobalFunc_7629();
				GlobalFunc_2943(&Local_289, 1);
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_196);
				}
				iLocal_594 = 1;
				CAM::DO_SCREEN_FADE_OUT(2500);
				*iParam0++;
			}
			break;
		
		case 1:
			GlobalFunc_7629();
			PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
			if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_617(int iParam0)//Position - 0x63A82
{
	float fVar0;
	struct<3> Var1;
	struct<3> Var4;
	int iVar7;
	
	MISC::SET_BIT(&(Local_365.f_13), 20);
	func_627(&(Local_155.f_12), &(Local_142.f_12));
	switch (GlobalFunc_8315())
	{
		case 0:
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			}
			if (GlobalFunc_331() || GlobalFunc_2233())
			{
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("mic_1_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					CUTSCENE::REMOVE_CUTSCENE();
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1037.026f, -2735.801f, 19.1693f, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 100f)
			{
				CUTSCENE::REQUEST_CUTSCENE("mic_1_mcs_1", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
			}
			else if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("mic_1_mcs_1") || CUTSCENE::HAS_CUTSCENE_LOADED()) || CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
			func_621(&Local_142, &iLocal_683);
			switch (*iParam0)
			{
				case 0:
					VEHICLE::_0x9A75585FB2E54FAD(-1039.57f, -2664.37f, 12.83f, 30f);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DRIVE_TO_AIRPORT"))
					{
						AUDIO::START_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_AIRPORT");
					}
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), 242628503) == 1)
						{
							PED::SET_PED_MIN_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 2f);
							if (iLocal_628 == 0)
							{
								if (((PAD::IS_CONTROL_PRESSED(0, 21) || PAD::IS_CONTROL_PRESSED(0, 22)) || (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 30) * 255f)) < -20 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 30) * 255f)) > 20)) || (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 31) * 255f)) < -20 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 31) * 255f)) > 20))
								{
									TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
									iLocal_628 = 1;
								}
							}
						}
						if (iLocal_589 == 0)
						{
							if (iLocal_587 == 0)
							{
								iLocal_587 = MISC::GET_GAME_TIMER();
							}
							else if (GlobalFunc_2521(7500, iLocal_587))
							{
								iLocal_589 = 1;
							}
						}
						if (iLocal_589 == 1)
						{
							GlobalFunc_9193(&Local_365, -1037.844f, -2655.386f, 12.8312f, 0.25f, 0.25f, 2f, 1, "MCH1_GTLSIA", 1, 1, -1);
						}
						if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
						{
							if (iLocal_588 == 0)
							{
								GlobalFunc_2269(&(Local_365.f_5), -1051.649f, -2712.012f, 12.7057f, 241.7918f);
								iLocal_588 = 1;
							}
							if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1047.949f, -2649.732f, 12.33118f, -1027.132f, -2661.605f, 15.98173f, 7f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1037.549f, -2680.126f, 12.48174f, -1047.742f, -2670.507f, 15.83118f, 7f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1057.455f, -2653.344f, 12.33118f, -1047.972f, -2671.036f, 15.83117f, 7f, 0, 1, 0))
							{
								*iParam0++;
							}
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -962.3938f, -2736.521f, 11.81853f, -1083.925f, -2666.654f, 28.81784f, 78f, 0, 1, 0))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									*iParam0++;
								}
							}
						}
						if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_56)))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(Local_155.f_2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 50f)
							{
								INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Local_56));
							}
						}
					}
					break;
				
				case 1:
					if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 4f, 1, 1056964608, 0, 1))
								{
									GlobalFunc_7139(&Local_365, 0);
									*iParam0++;
								}
							}
							else
							{
								GlobalFunc_7139(&Local_365, 0);
								*iParam0++;
							}
						}
					}
					break;
				
				case 2:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_MIC_DRIVE_TO_AIRPORT"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_MIC_DRIVE_TO_AIRPORT");
					}
					GlobalFunc_9193(&Local_365, -1037.63f, -2737.48f, 19.17f, 0.25f, 0.25f, 2f, 1, "", 1, 1, -1);
					if (!func_175("MCH1_GTTE"))
					{
						if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
						{
							if (!GlobalFunc_5172(&Local_365, 2))
							{
								func_377("MCH1_GTTE", 7500, 1);
							}
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
					{
						if (HUD::DOES_BLIP_HAVE_GPS_ROUTE(Local_365.f_5))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(HUD::GET_BLIP_COORDS(Local_365.f_5), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) < 100f)
							{
								HUD::SET_BLIP_ROUTE(Local_365.f_5, 0);
							}
						}
						else if (MISC::GET_DISTANCE_BETWEEN_COORDS(HUD::GET_BLIP_COORDS(Local_365.f_5), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1) > 110f)
						{
							HUD::SET_BLIP_ROUTE(Local_365.f_5, 1);
						}
					}
					if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1026.307f, -2741.367f, 18.66973f, -1046.33f, -2730.003f, 23.16973f, 18f, 0, 1, 0))
								{
									*iParam0++;
								}
							}
							else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1046.411f, -2736.282f, 18.6702f, -1032.385f, -2744.483f, 23.1702f, 17f, 0, 1, 0))
							{
								*iParam0++;
							}
						}
					}
					break;
				
				case 3:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (GlobalFunc_530(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 4f, 1, 1056964608, 0, 1))
							{
								GlobalFunc_4935();
								if (!GlobalFunc_111())
								{
									TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
									GlobalFunc_7139(&Local_365, 0);
									*iParam0++;
								}
							}
						}
						else
						{
							GlobalFunc_4935();
							GlobalFunc_7139(&Local_365, 0);
							*iParam0++;
						}
					}
					break;
				
				case 4:
					if (!CAM::DOES_CAM_EXIST(uLocal_669))
					{
						CAM::DESTROY_ALL_CAMS(0);
						uLocal_669 = CAM::CREATE_CAMERA(26379945, 1);
						CAM::SET_CAM_PARAMS(uLocal_669, -1011.718f, -2738.015f, 22.56395f, -0.092603f, -0.004846f, 82.38792f, 39.95536f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(uLocal_669, -1012.978f, -2737.46f, 22.56225f, 0.573072f, -0.004846f, 83.24618f, 39.95536f, 5000, 0, 0, 2);
						CAM::SHAKE_CAM(uLocal_669, "HAND_SHAKE", 0.2f);
						HUD::DISPLAY_HUD(0);
						HUD::DISPLAY_RADAR(0);
						CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
						Local_155.f_10 = MISC::GET_GAME_TIMER();
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), -1038.07f, -2738.51f, 19.17f, 1f, 20000, 0.25f, 0, 1193033728);
						}
					}
					else if (CAM::IS_CAM_RENDERING(uLocal_669))
					{
						if (GlobalFunc_2521(4000, Local_155.f_10) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1038.07f, -2738.51f, 19.17f, 2f, 2f, 2f, 0, 1, 0))
						{
							if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
							{
								if (!GlobalFunc_111())
								{
									if (ENTITY::DOES_ENTITY_EXIST(Local_168))
									{
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_168);
									}
									STREAMING::REMOVE_ANIM_DICT("missmic1ig_zero_hit_wheel");
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
		
		case 2:
			Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			func_610(&Local_649);
			func_610(&Local_657);
			func_610(&Local_653);
			func_610(&cLocal_665);
			func_610(&Local_661);
			switch (*iParam0)
			{
				case 0:
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_TREV_DRIVE_TO_PLANE"))
					{
						AUDIO::START_AUDIO_SCENE("MI_1_TREV_DRIVE_TO_PLANE");
					}
					if (Local_142.f_10 == 0)
					{
						Local_142.f_10 = MISC::GET_GAME_TIMER();
					}
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -235832601) == 1)
					{
						if (iLocal_628 == 0)
						{
							if (Local_142.f_10 != 0)
							{
								if (GlobalFunc_2521(3000, Local_142.f_10))
								{
									if (func_122(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID())))
									{
										TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
										iLocal_628 = 1;
									}
								}
								if (GlobalFunc_2521(10000, Local_142.f_10))
								{
									TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
									iLocal_628 = 1;
								}
							}
						}
					}
					GlobalFunc_9193(&Local_365, 1743.933f, 3289.194f, 40.1f, 0.25f, 0.25f, 2f, 1, &Local_649, 1, 1, -1);
					if (iLocal_596 == 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1743.933f, 3289.194f, 42.10308f, 1) < 3800f)
						{
							iLocal_596 = 1;
						}
					}
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1743.933f, 3289.194f, 42.10308f, 18f, 12f, 2f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1739.667f, 3280.869f, 39.09346f, 1726.728f, 3328.008f, 44.22607f, 28f, 0, 1, 0))
					{
						GlobalFunc_7139(&Local_365, 0);
						iLocal_739[7] = 0;
						iLocal_739[8] = 0;
						iLocal_739[9] = 0;
						Local_142.f_10 = MISC::GET_GAME_TIMER();
						iLocal_586 = 1;
						GlobalFunc_11067(1, "FLY TO NORTH YANKTON", 0, 0, 0, 1);
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != Local_182)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
								{
									if (GlobalFunc_1533(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1))
									{
										iVar7 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
										if (ENTITY::DOES_ENTITY_EXIST(iVar7))
										{
											if (!ENTITY::IS_ENTITY_DEAD(iVar7))
											{
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar7, 0))
												{
													GlobalFunc_4932(iVar7, &Local_224);
												}
											}
										}
									}
								}
							}
						}
						*iParam0++;
					}
					break;
				
				case 1:
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MI_1_TREV_DRIVE_TO_PLANE"))
					{
						AUDIO::STOP_AUDIO_SCENE("MI_1_TREV_DRIVE_TO_PLANE");
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							GlobalFunc_9194(&Local_365, Local_555, Local_555.f_3, 0, Local_196, &Local_657, &Local_661, &cLocal_665, 1, 0, 1, -1);
							if (HUD::DOES_BLIP_EXIST(Local_365))
							{
								if (HUD::DOES_BLIP_EXIST(Local_196.f_1))
								{
									HUD::REMOVE_BLIP(&(Local_196.f_1));
								}
							}
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_196))
							{
								RECORDING::_0x293220DA1B46CEBC(10f, 3f, 4);
								AUDIO::TRIGGER_MUSIC_EVENT("MIC1_TREVOR_PLANE");
								AUDIO::START_AUDIO_SCENE("MI_1_TREV_FLY_TO_LUDENDORFF");
								*iParam0++;
							}
						}
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_196, 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_142))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(Local_142, 242628503) == 1)
								{
									TASK::CLEAR_PED_TASKS(Local_142);
								}
							}
						}
					}
					break;
				
				case 2:
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_196, 0))
								{
									if (HUD::DOES_BLIP_EXIST(Local_365))
									{
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_196, 0);
									}
									if (iLocal_639 == 0)
									{
										MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("OVERCAST", 60f);
										iLocal_638 = MISC::GET_GAME_TIMER();
										iLocal_639 = 1;
									}
									if (iLocal_640 == 0)
									{
										if (iLocal_639 == 1)
										{
											if (iLocal_638 != 0 && GlobalFunc_2521(60000, iLocal_638))
											{
												MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("RAIN", 35f);
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
												{
													AUDIO::PLAY_SOUND_FROM_ENTITY(uLocal_630, "MIC_1_RAIN_ON_PLANE_MASTER", Local_196, 0, 0, 0);
												}
												iLocal_638 = MISC::GET_GAME_TIMER();
												iLocal_640 = 1;
											}
										}
									}
									if (iLocal_641 == 0)
									{
										if (iLocal_640 == 1)
										{
											if (iLocal_638 != 0 && GlobalFunc_2521(35000, iLocal_638))
											{
												MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("THUNDER", 35f);
												iLocal_641 = 1;
											}
										}
									}
								}
								else if (!HUD::DOES_BLIP_EXIST(Local_365))
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_196, 1);
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(Local_289))
							{
								if (func_596(&Local_289, 1))
								{
									ENTITY::SET_ENTITY_HEADING(Local_289, 315f);
									ENTITY::SET_ENTITY_VISIBLE(Local_289, 0);
									ENTITY::SET_ENTITY_COLLISION(Local_289, 0, 0);
								}
							}
							if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
							{
								fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(HUD::GET_BLIP_COORDS(Local_365.f_5), Var4, 1);
								if (ENTITY::DOES_ENTITY_EXIST(Local_289))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_289))
									{
										Var1 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Local_289, Var4) };
									}
								}
							}
							if (!func_175("MCH1_TRON"))
							{
								if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
								{
									if (fVar0 > 0f && fVar0 < 2200f)
									{
										GlobalFunc_10725(20, "MCH1_TRON", 1, 1, 0, 0, 0, 1, 0, 1);
										func_177("MCH1_TRON", 1);
									}
								}
							}
							if (GlobalFunc_9194(&Local_365, Local_555, Local_555.f_1, Var4.f_2, Local_555.f_3, 0, Local_196, &Local_657, &Local_661, &cLocal_665, 1, 0, 1, -1) || (((HUD::DOES_BLIP_EXIST(Local_365.f_5) && Var1.f_1 > 0f) && fVar0 > 0f) && fVar0 < 500f))
							{
								GlobalFunc_7139(&Local_365, 0);
								AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FLIGHT_ARRIVING");
								*iParam0++;
							}
						}
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_196))
						{
							if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(Local_196);
								ENTITY::SET_ENTITY_INVINCIBLE(Local_196, 0);
								VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Local_196, 1);
							}
						}
					}
					break;
				
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(Local_168))
					{
						VEHICLE::DELETE_VEHICLE(&Local_168);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_182))
					{
						VEHICLE::DELETE_VEHICLE(&Local_182);
					}
					GlobalFunc_7629();
					GlobalFunc_2943(&Local_289, 1);
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_196);
					}
					if (!AUDIO::HAS_SOUND_FINISHED(uLocal_630))
					{
						AUDIO::STOP_SOUND(uLocal_630);
					}
					CUTSCENE::REMOVE_CUTSCENE();
					iLocal_594 = 1;
					CAM::DO_SCREEN_FADE_OUT(2500);
					*iParam0++;
					break;
				
				case 4:
					GlobalFunc_7629();
					PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
					if (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}




void func_621(var uParam0, int iParam1)//Position - 0x648A3
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			switch (*iParam1)
			{
				case 0:
					TASK::REQUEST_WAYPOINT_RECORDING("mic1_tdrive");
					if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("mic1_tdrive"))
					{
						if (!PED::IS_PED_IN_VEHICLE(*uParam0, Local_168, 0))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
							{
								PED::SET_PED_INTO_VEHICLE(*uParam0, Local_168, -1);
							}
						}
						MISC::CLEAR_AREA_OF_PROJECTILES(Local_168.f_2, 5f, 0);
						PED::SET_PED_CONFIG_FLAG(*uParam0, 116, 0);
						PED::SET_PED_CONFIG_FLAG(*uParam0, 29, 0);
						GlobalFunc_2528(&iLocal_697, Local_168.f_2, 4.5f);
						uParam0->f_10 = MISC::GET_GAME_TIMER();
						*iParam1++;
					}
					break;
				
				case 1:
					if (((((GlobalFunc_2521(15000, uParam0->f_10) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.93f, 180.14f, 70.23f, -817.07f, 175.22f, 75.23f, 3.5f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -791.74f, 177f, 71.33f, -799.15f, 174.12f, 75.83f, 3f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -806.57f, 185.56f, 71.26f, -805.63f, 183.03f, 73.85f, 1.8f, 0, 1, 0)) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -817.04f, 172.44f, 68.58f, -791.7f, 182.09f, 79.83f, 18f, 0, 1, 0)) || ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -818.52f, 177.49f, 71.02f, -796.41f, 186.11f, 75.1f, 6.5f, 0, 1, 0) && GlobalFunc_2527(iLocal_697)) && GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_697)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_168))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_168))
							{
								if (!PED::IS_PED_IN_VEHICLE(*uParam0, Local_168, 0))
								{
									PED::SET_PED_INTO_VEHICLE(*uParam0, Local_168, -1);
								}
								VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 1, 1);
								if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_168, 15f);
								}
								else
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_168, 12.5f);
								}
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(*uParam0, Local_168, "mic1_tdrive", 786468, 0, 0, -1, -1082130432, 0, 1073741824);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
								GlobalFunc_2529(&iLocal_697);
								GlobalFunc_8317(Local_168, 0);
								Local_168.f_12 = 0;
								*iParam1++;
							}
						}
					}
					break;
				
				case 2:
					if (TASK::GET_SCRIPT_TASK_STATUS(*uParam0, -235832601) == 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Local_168))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_168))
							{
								if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_168) >= 10 || ENTITY::IS_ENTITY_AT_COORD(Local_168, -845.782f, 159.0756f, 67.05761f, 1.5f, 3f, 2f, 0, 1, 0))
								{
									iLocal_589 = 1;
								}
								if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_168) >= 45 || (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_168) >= 35 && GlobalFunc_4951(*uParam0, PLAYER::PLAYER_PED_ID()) > 25f))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(Local_168) || ENTITY::IS_ENTITY_OCCLUDED(Local_168))
									{
										PED::DELETE_PED(uParam0);
										VEHICLE::DELETE_VEHICLE(&Local_168);
										TASK::REMOVE_WAYPOINT_RECORDING("mic1_tdrive");
									}
									else
									{
										TASK::TASK_VEHICLE_MISSION_PED_TARGET(*uParam0, Local_168, PLAYER::PLAYER_PED_ID(), 8, 20f, 786468, 1000f, 10f, 1);
										PED::SET_PED_KEEP_TASK(*uParam0, 1);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
										ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_168);
										TASK::REMOVE_WAYPOINT_RECORDING("mic1_tdrive");
									}
								}
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (!GlobalFunc_2527(iLocal_697))
									{
										GlobalFunc_2528(&iLocal_697, ENTITY::GET_ENTITY_COORDS(Local_168, 1), 4f);
									}
									else
									{
										GRAPHICS::SET_TRACKED_POINT_INFO(iLocal_697, ENTITY::GET_ENTITY_COORDS(Local_168, 1), 4f);
									}
									if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_168) >= 17 && GlobalFunc_4951(*uParam0, PLAYER::PLAYER_PED_ID()) > 35f)
									{
										if (GlobalFunc_2527(iLocal_697) && !GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_697))
										{
											PED::DELETE_PED(uParam0);
											VEHICLE::DELETE_VEHICLE(&Local_168);
											TASK::REMOVE_WAYPOINT_RECORDING("mic1_tdrive");
											GlobalFunc_2529(&iLocal_697);
										}
									}
									if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))))
									{
										if (TASK::GET_VEHICLE_WAYPOINT_PROGRESS(Local_168) >= 10)
										{
											if (GlobalFunc_2527(iLocal_697) && !GRAPHICS::IS_TRACKED_POINT_VISIBLE(iLocal_697))
											{
												PED::DELETE_PED(uParam0);
												VEHICLE::DELETE_VEHICLE(&Local_168);
												TASK::REMOVE_WAYPOINT_RECORDING("mic1_tdrive");
												GlobalFunc_2529(&iLocal_697);
											}
										}
									}
								}
							}
						}
					}
					break;
				}
			}
	}
}






void func_627(var uParam0, var uParam1)//Position - 0x64D65
{
	if (GlobalFunc_8315() == 0)
	{
		switch (*uParam0)
		{
			case 0:
				Local_155.f_11 = MISC::GET_GAME_TIMER();
				*uParam0++;
				break;
			
			case 1:
				if (!func_175("MCH1_TTMC"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_142))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_142))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(Local_142, 0))
							{
								if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_USING(Local_142), 17))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_365, 1))
										{
											if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_TTMC", 7, 0, 0, 0))
											{
												func_177("MCH1_TTMC", 1);
											}
										}
										else if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
										{
											GlobalFunc_5653(PLAYER::PLAYER_PED_ID(), "MCH1_AEAA", "MICHAEL", 6);
											func_177("MCH1_TTMC", 1);
										}
									}
								}
							}
						}
					}
					else
					{
						func_177("MCH1_TTMC", 1);
					}
				}
				if (iLocal_590 == 0)
				{
					if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(Local_142))
						{
							if (!GlobalFunc_5172(&Local_365, 0))
							{
								if (!ENTITY::DOES_ENTITY_EXIST(func_833(2)))
								{
									GlobalFunc_200(&uLocal_390, 2);
									GlobalFunc_173(&uLocal_390, 2, 0, "TREVOR", 0, 1);
								}
								if (GlobalFunc_10638(&uLocal_390, 2, "MCH1AUD", "MCH1_CP01M", 9, 1, 0, 0, 0))
								{
									STREAMING::REQUEST_ANIM_DICT("missmic1ig_zero_hit_wheel");
									iLocal_590 = 1;
									*uParam0++;
								}
							}
						}
					}
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					Local_155.f_11 = MISC::GET_GAME_TIMER();
					*uParam0++;
				}
				break;
			
			case 3:
				STREAMING::REQUEST_ANIM_DICT("missmic1ig_zero_hit_wheel");
				if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED("missmic1ig_zero_hit_wheel"))
					{
						if (GlobalFunc_2521(2000, Local_155.f_11))
						{
							if (!GlobalFunc_111())
							{
								if (!GlobalFunc_5172(&Local_365, 1))
								{
									if (GlobalFunc_10618(&uLocal_390, "MCH1AUD", "MCH1_MSHIT", 7, 0, 0, 0))
									{
										if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
										{
											if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
											{
												if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))))
												{
													TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missmic1ig_zero_hit_wheel", "michael_hit_wheel", 4f, -4f, -1, 48, 0, 0, 0, 0);
												}
											}
										}
										*uParam0++;
									}
								}
							}
						}
					}
				}
				break;
			
			case 4:
				if (!GlobalFunc_111())
				{
					Local_155.f_11 = MISC::GET_GAME_TIMER();
					*uParam0++;
				}
				break;
			
			case 5:
				if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
				{
					if (GlobalFunc_2521(3500, Local_155.f_11))
					{
						if (!GlobalFunc_5172(&Local_365, 0))
						{
							if (GlobalFunc_10638(&uLocal_390, 30, "MCH1AUD", "MCH1_CP02", 9, 1, 0, 0, 0))
							{
								STREAMING::REMOVE_ANIM_DICT("missmic1ig_zero_hit_wheel");
								*uParam0++;
							}
						}
					}
				}
				break;
		}
	}
	else if (GlobalFunc_8315() == 2)
	{
		if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
		{
			if (GlobalFunc_111())
			{
				if (GlobalFunc_620())
				{
					GlobalFunc_619(0);
				}
			}
		}
		else if (GlobalFunc_111())
		{
			if (!GlobalFunc_620())
			{
				GlobalFunc_619(1);
			}
		}
		switch (*uParam1)
		{
			case 0:
				if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_142.f_2, 1) > 100f)
						{
							Local_142.f_11 = MISC::GET_GAME_TIMER();
							*uParam1++;
						}
					}
				}
				break;
			
			case 1:
				if (iLocal_590 == 0)
				{
					if (iLocal_596 == 1)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_142.f_2, 1) > 100f)
							{
								if (GlobalFunc_2521(10000, Local_142.f_11))
								{
									if (!GlobalFunc_5172(&Local_365, 0))
									{
										if (!ENTITY::DOES_ENTITY_EXIST(func_833(0)))
										{
											GlobalFunc_200(&uLocal_390, 0);
											GlobalFunc_173(&uLocal_390, 0, 0, "MICHAEL", 0, 1);
										}
										if (GlobalFunc_10664(&uLocal_390, 0, "MCH1AUD", "MCH1_CP01T", 9, 0, 0, 1))
										{
											iLocal_590 = 1;
											*uParam1++;
										}
									}
								}
							}
						}
					}
				}
				else if (iLocal_590 == 1)
				{
					*uParam1++;
				}
				break;
			
			case 2:
				if (!GlobalFunc_111())
				{
					Local_142.f_11 = MISC::GET_GAME_TIMER();
					*uParam1++;
				}
				break;
			
			case 3:
				if (HUD::DOES_BLIP_EXIST(Local_365.f_5))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_142.f_2, 1) > 100f)
						{
							if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 1738.424f, 3291.455f, 40.14977f, 500f, 500f, 50f, 0, 1, 0) && !GlobalFunc_1461(PLAYER::PLAYER_PED_ID(), Local_196, 0))
							{
								if (GlobalFunc_2521(5000, Local_142.f_11))
								{
									if (!GlobalFunc_111())
									{
										if (!GlobalFunc_5172(&Local_365, 0))
										{
											if (GlobalFunc_10638(&uLocal_390, 20, "MCH1AUD", "MCH1_CP03", 9, 1, 0, 0, 0))
											{
												*uParam1++;
											}
										}
									}
								}
							}
							else
							{
								*uParam1++;
							}
						}
					}
				}
				break;
			}
	}
}







void func_634()//Position - 0x6545B
{
	iLocal_562 = 1;
	iLocal_563 = 0;
	iLocal_564 = 0;
	iLocal_565 = 0;
	Local_155.f_10 = 0;
	Local_142.f_10 = 0;
	Local_155.f_11 = 0;
	Local_142.f_11 = 0;
	Local_155.f_12 = 0;
	Local_142.f_12 = 0;
	Local_278.f_10 = 0;
	iLocal_566 = 0;
	iLocal_567 = 0;
	iLocal_568 = 0;
	iLocal_569 = 0;
	iLocal_570 = 0;
	iLocal_572 = 0;
	iLocal_571 = 0;
	iLocal_573 = 0;
	iLocal_574 = 0;
	iLocal_585 = 0;
	iLocal_610 = 0;
	iLocal_611 = 0;
	iLocal_612 = 0;
	iLocal_613 = 0;
	iLocal_614 = 0;
	iLocal_615 = 0;
	iLocal_616 = 0;
	iLocal_617 = 0;
	iLocal_618 = 0;
	iLocal_619 = 0;
	iLocal_620 = 0;
	iLocal_621 = 0;
	iLocal_671 = 0;
	iLocal_587 = 0;
	iLocal_588 = 0;
	iLocal_589 = 0;
	iLocal_590 = 0;
	iLocal_592 = 0;
	iLocal_578 = 0;
	bLocal_579 = false;
	iLocal_622 = 0;
	iLocal_623 = 0;
	iLocal_629 = 0;
	iLocal_633 = 0;
	iLocal_625 = 0;
	iLocal_596 = 0;
	iLocal_599 = 0;
	iLocal_600 = 0;
	StringCopy(&Local_645, "MCH1_GTLC", 16);
	StringCopy(&Local_649, "MCH1_GT_T1", 16);
	StringCopy(&Local_653, "CMN_TGETBCK", 16);
	StringCopy(&Local_657, "MCH1_GT_T3", 16);
	StringCopy(&Local_661, "CMN_GENGETINPL", 16);
	StringCopy(&cLocal_665, "CMN_GENGETBCKPL", 16);
	iLocal_127 = 0;
	iLocal_601 = 0;
	iLocal_603 = 0;
	iLocal_602 = 0;
	iLocal_604 = 0;
	iLocal_605 = 0;
	iLocal_606 = 0;
	iLocal_607 = 0;
	iLocal_608 = 0;
	iLocal_609 = 0;
	iLocal_636 = 0;
	iLocal_638 = 0;
	iLocal_639 = 0;
	iLocal_640 = 0;
	iLocal_641 = 0;
	iLocal_626 = 0;
	iLocal_627 = 0;
	iLocal_628 = 0;
	iLocal_642 = 0;
	iLocal_643 = 0;
	iLocal_586 = 0;
	fLocal_644 = 0f;
	iLocal_683 = 0;
	iLocal_682 = 0;
	iLocal_691 = 0;
	iLocal_684 = 0;
	iLocal_685 = 0;
	iLocal_686 = 0;
	iLocal_687 = 0;
	iLocal_692 = 0;
	iLocal_693 = 0;
	iLocal_694 = 0;
	iLocal_695 = 0;
	iLocal_696 = 0;
	iLocal_598 = 0;
	iLocal_597 = 0;
}

int func_635(var uParam0)//Position - 0x655EE
{
	var uVar0;
	
	switch (*uParam0)
	{
		case 0:
			if (GlobalFunc_8315() == 0)
			{
				if (GlobalFunc_5927("mic_1_int", 15))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_142, "Trevor", 2, GlobalFunc_4917(2), 0);
					GlobalFunc_8380(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::_0x48621C9FCA3EBD28(4);
					*uParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					GlobalFunc_11060("Michael", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
			}
			else if (GlobalFunc_8315() == 2)
			{
				GlobalFunc_702(1, 1, 1);
				if (GlobalFunc_5927("mic_1_int", 30))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864.f_9[0]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Global_86864.f_9[0]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864.f_9[0], 1, 1);
							Local_155 = Global_86864.f_9[0];
							func_592(Local_155, 1862763509, 0, 1, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_155, "Michael", 1, joaat("player_zero"), 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(Global_86864[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_86864[0], 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
							Local_168 = Global_86864[0];
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 1, 1);
							VEHICLE::SET_VEHICLE_LIGHTS(Local_168, 3);
							VEHICLE::SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Local_168, 1);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_168, 1);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_168, "Michaels_car", 0, joaat("tailgater"), 0);
						}
						else
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_86864[0], 1, 1);
							VEHICLE::DELETE_VEHICLE(&(Global_86864[0]));
							MISC::CLEAR_AREA(Local_168.f_2, 10f, 1, 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_168, "Michaels_car", 2, joaat("tailgater"), 0);
						}
					}
					else if (((GlobalFunc_7984() && func_673(1) == 2) && ENTITY::DOES_ENTITY_EXIST(GlobalFunc_2251())) && VEHICLE::IS_VEHICLE_DRIVEABLE(GlobalFunc_2251(), 1))
					{
						if (GlobalFunc_6795(GlobalFunc_2251(), 0, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(GlobalFunc_2251(), 1, 1);
							Local_168 = GlobalFunc_2251();
							func_670(&Local_168, 1);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 1, 1);
							VEHICLE::SET_VEHICLE_LIGHTS(Local_168, 3);
							ENTITY::SET_ENTITY_HEALTH(Local_168, ENTITY::GET_ENTITY_HEALTH(Local_168) + 500);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_168, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_168) + 500f));
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_168, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_168) + 500f));
							FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_168, 1), 2.5f);
							if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 0, 0))
							{
								VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 0);
							}
							if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 1, 0))
							{
								VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 1);
							}
							if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 4, 0))
							{
								VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 4);
							}
							if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 5, 0))
							{
								VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 5);
							}
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_168, "Michaels_car", 0, joaat("tailgater"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_168, "Michaels_car", 2, joaat("tailgater"), 0);
						}
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_168, "Michaels_car", 2, joaat("tailgater"), 0);
					}
					GlobalFunc_8380(1, 1, 1, 0);
					CUTSCENE::START_CUTSCENE(2048);
					RECORDING::_0x48621C9FCA3EBD28(4);
					*uParam0++;
				}
				else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					GlobalFunc_11060("Trevor", PLAYER::PLAYER_PED_ID(), 0, 2);
				}
			}
			break;
		
		case 1:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if ((GlobalFunc_5599(0) && ENTITY::DOES_ENTITY_EXIST(GlobalFunc_104(0))) && VEHICLE::IS_VEHICLE_DRIVEABLE(GlobalFunc_104(0), 1))
				{
					if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(GlobalFunc_104(0), 1))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(GlobalFunc_104(0), 1, 1);
						Local_168 = GlobalFunc_104(0);
					}
					if (ENTITY::DOES_ENTITY_EXIST(Local_168))
					{
						FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_168, 1), 2.5f);
						ENTITY::SET_ENTITY_HEALTH(Local_168, ENTITY::GET_ENTITY_HEALTH(Local_168) + 500);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_168, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_168) + 500f));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_168, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_168) + 500f));
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 0, 0))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 0);
						}
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 1, 0))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 1);
						}
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 4, 0))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 4);
						}
						if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 5, 0))
						{
							VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 5);
						}
						func_670(&Local_168, 1);
						VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 0, 1);
						ENTITY::SET_ENTITY_COORDS(Local_168, Local_168.f_2, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(Local_168, Local_168.f_5);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_168);
					}
				}
				if (GlobalFunc_7984())
				{
					switch (func_673(1))
					{
						case 0:
							if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
							{
								if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(Local_168))
									{
										if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
										{
											ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
										}
										Local_168 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
										func_670(&Local_168, 1);
										ENTITY::SET_ENTITY_HEALTH(Local_168, ENTITY::GET_ENTITY_HEALTH(Local_168) + 500);
										VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_168, (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_168) + 500f));
										VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(Local_168, (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Local_168) + 500f));
										FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(Local_168, 1), 2.5f);
										if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 0, 0))
										{
											VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 0);
										}
										if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 1, 0))
										{
											VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 1);
										}
										if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 4, 0))
										{
											VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 4);
										}
										if (VEHICLE::IS_VEHICLE_TYRE_BURST(Local_168, 5, 0))
										{
											VEHICLE::SET_VEHICLE_TYRE_FIXED(Local_168, 5);
										}
										VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_168, 1);
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 0, 1);
										ENTITY::SET_ENTITY_COORDS(Local_168, Local_168.f_2, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(Local_168, Local_168.f_5);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_168);
									}
									else
									{
										GlobalFunc_7695(24);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
										VEHICLE::SET_VEHICLE_ENGINE_ON(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 1);
										ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_182.f_2, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_182.f_5);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE());
										GlobalFunc_9622(PLAYER::GET_PLAYERS_LAST_VEHICLE(), Local_182.f_2, Local_182.f_5, 24, 0);
										GlobalFunc_76(24);
									}
								}
							}
							break;
						
						case 2:
							if (((ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1)) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
							{
								if (!GlobalFunc_6795(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
									{
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0);
									}
									ENTITY::SET_ENTITY_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE()) + 500);
									VEHICLE::SET_VEHICLE_ENGINE_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE()) + 500f));
									VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE(), (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE()) + 500f));
									FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1), 2.5f);
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 4, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 4);
									}
									if (VEHICLE::IS_VEHICLE_TYRE_BURST(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5, 0))
									{
										VEHICLE::SET_VEHICLE_TYRE_FIXED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5);
									}
								}
							}
							break;
						}
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_168))
				{
					GlobalFunc_9138(Local_168);
				}
				GlobalFunc_2224(1);
				GlobalFunc_2790(4, 1, 1);
				MISC::CLEAR_AREA(Local_155.f_2, 25f, 1, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PEDS(Local_155.f_2, 250f, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(Local_155.f_2, 250f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(Local_155.f_2, 250f, 0);
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 1);
				}
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				*uParam0++;
			}
			break;
		
		case 2:
			if (GlobalFunc_8315() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_142))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Trevor", 0))
					{
						if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0)))
						{
							Local_142 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Trevor", 0));
							func_592(Local_142, 1862763509, 0, 1, 0, 0);
							iLocal_321[2] = Local_142;
						}
					}
				}
			}
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_168))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							if (((GlobalFunc_7984() && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0)) && VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
							{
								Local_168 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_168))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_168, 1, 0);
								}
								func_670(&Local_168, 1);
								ENTITY::SET_ENTITY_COORDS(Local_168, Local_168.f_2, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_168, Local_168.f_5);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_168, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_168);
								VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_168, 1);
							}
							else
							{
								func_637(&Local_168, 1, 0, 0, 1, -1, -1, -1);
							}
							break;
						
						case 2:
							if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Michaels_car", 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michaels_car", 0)))
								{
									Local_168 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Michaels_car", 0));
									func_670(&Local_168, 1);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 1, 1);
									VEHICLE::SET_VEHICLE_LIGHTS(Local_168, 3);
									VEHICLE::SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Local_168, 1);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_168, 1);
								}
							}
							break;
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_168))
				{
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_168);
				}
				if (!ENTITY::DOES_ENTITY_EXIST(Local_182))
				{
					switch (GlobalFunc_8315())
					{
						case 0:
							break;
						
						case 2:
							if (((GlobalFunc_7984() && func_673(1) == 2) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
							{
								Local_182 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
								if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_182))
								{
									ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Local_182, 1, 0);
								}
								func_670(&Local_182, 1);
								ENTITY::SET_ENTITY_COORDS(Local_182, Local_182.f_2, 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(Local_182, Local_182.f_5);
								VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_182, 1);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_182);
							}
							else
							{
								func_637(&Local_182, 1, 0, 2, 1, -1, -1, -1);
							}
							break;
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(Local_182))
				{
					VEHICLE::REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Local_182);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_car", 0))
			{
				switch (GlobalFunc_8315())
				{
					case 0:
						break;
					
					case 2:
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 1, 1);
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_168, 10f);
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_168, 1);
						}
						break;
					}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				switch (GlobalFunc_8315())
				{
					case 0:
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_578 == 0)
							{
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
								GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), -808.4427f, 177.8966f, 71.3801f, 18.2986f, 0, 1, 0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -809.27f, 179.55f, 71.15f, 2f, 20000, 0.25f, 1, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -811.32f, 180.11f, 71.15f, 2f, 20000, 0.25f, 1, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.92f, 179.22f, 71.16f, 2f, 20000, 0.25f, 512, 111.3824f);
								}
								else
								{
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -809.27f, 179.55f, 71.15f, 2f, 20000, 0.25f, 1, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -811.32f, 180.11f, 71.15f, 2f, 20000, 0.25f, 1, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.17f, 179.48f, 71.16f, 2f, 20000, 0.25f, 1, 1193033728);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -813.92f, 179.22f, 71.16f, 2f, 20000, 0.25f, 8192, 1193033728);
								}
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(PLAYER::PLAYER_PED_ID(), uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
								PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -530524, 0, 1, 0);
							}
							else
							{
								PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
								GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), -813.9473f, 179.2056f, 71.1592f, 111.3824f, 0, 1, 0);
							}
						}
						break;
					
					case 2:
						break;
					}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
			{
				switch (GlobalFunc_8315())
				{
					case 0:
						if (ENTITY::DOES_ENTITY_EXIST(Local_142))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_142))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_168))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_168))
									{
										PED::SET_PED_INTO_VEHICLE(Local_142, Local_168, -1);
									}
								}
							}
						}
						break;
					
					case 2:
						if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
						{
							iLocal_706 = 1;
							iLocal_705 = MISC::GET_GAME_TIMER();
						}
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("mic1_tdrive"))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_168))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_168))
									{
										if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_168, 0))
										{
											PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_168, -1);
										}
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 1, 1);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_168, 10f);
										TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), Local_168, "mic1_tdrive", 786468, 0, 8, -1, -1082130432, 0, 1073741824);
									}
								}
							}
						}
						break;
					}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				if ((GlobalFunc_8315() == 0 && func_637(&Local_168, 1, 0, 0, 1, -1, -1, -1)) || ((GlobalFunc_8315() == 2 && func_637(&Local_182, 1, 0, 2, 1, -1, -1, -1)) && func_637(&Local_168, 1, 0, 0, 1, -1, -1, -1)))
				{
					if (INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_56)))
					{
						INTERIOR::UNPIN_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Local_56));
					}
					RECORDING::_0x81CBAE94390F9F89();
					if (GlobalFunc_8315() == 0)
					{
						RECORDING::_0x293220DA1B46CEBC(0f, 15f, 4);
					}
					else
					{
						RECORDING::_0x293220DA1B46CEBC(0f, 7f, 4);
					}
					GlobalFunc_562(46);
					GlobalFunc_8380(0, 1, 1, 0);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					return 1;
				}
			}
			else if (iLocal_578 == 0)
			{
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
					iLocal_578 = 1;
				}
			}
			TASK::REQUEST_WAYPOINT_RECORDING("mic1_tdrive");
			break;
	}
	return 0;
}


int func_637(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)//Position - 0x66363
{
	if (iParam1 == 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			STREAMING::REQUEST_MODEL(iParam0->f_6);
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_6))
			{
				if (iParam2 == 1)
				{
					*iParam0 = func_657(iParam0->f_6, iParam0->f_2, iParam0->f_5);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (iParam3 == 145)
				{
					*iParam0 = VEHICLE::CREATE_VEHICLE(iParam0->f_6, iParam0->f_2, iParam0->f_5, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				else if (func_653(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_6);
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
				{
					if (iParam6 != -1 && iParam7 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam6, iParam7);
					}
					if (iParam5 != -1)
					{
						VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, iParam5);
					}
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
					if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
					{
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
						VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
					}
					if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam0->f_6) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0->f_6))
					{
						VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(*iParam0, !bParam4);
					}
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (iParam1 == 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			GlobalFunc_6791(iParam3, 0);
			if (func_638(iParam0, iParam3, iParam0->f_2, iParam0->f_5, 1, 0))
			{
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam4);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam4, 0);
				if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
				{
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam4);
					VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam4);
				}
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_638(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x6653A
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
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
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
				func_649(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[0 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5106(iParam0);
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
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
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
				func_649(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_1635[1 /*223*/][iParam1 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var5.f_72);
				if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*iParam0) == joaat("bodhi2"))
					{
						GlobalFunc_5106(iParam0);
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
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
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
				func_649(iParam0, &(Var5.f_31), &(Var5.f_57));
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
						GlobalFunc_5106(iParam0);
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











int func_649(int iParam0, var uParam1, var uParam2)//Position - 0x69B6E
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*iParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (GlobalFunc_533(*iParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*iParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
	}
	return 1;
}




int func_653(int iParam0, int iParam1, struct<3> Param2, float fParam5, bool bParam6, int iParam7)//Position - 0x69E60
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
		if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
		{
			if (ENTITY::GET_ENTITY_MODEL(*iParam0) != Var0)
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
				*iParam0 = VEHICLE::CREATE_VEHICLE(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/], Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*iParam0, 1250);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*iParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*iParam0, 1250f);
				Var0.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_5, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_7, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Var0.f_2);
				iVar75 = 0;
				while (iVar75 < 12)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar75 + 1, !Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_11[iVar75]);
					iVar75++;
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
				{
					if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam0, 0))
					{
						if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_24)
						{
							VEHICLE::RAISE_CONVERTIBLE_ROOF(*iParam0, 1);
						}
						else
						{
							VEHICLE::LOWER_CONVERTIBLE_ROOF(*iParam0, 1);
						}
					}
				}
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_27));
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 >= 0 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_26);
				}
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_60, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_61, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_62);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_64);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_63);
				VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_69, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_70, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_71);
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 28));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 29));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 30));
				VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_68, 31));
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65 >= 0)
				{
					VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_65);
				}
				if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 > -1)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
					{
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
						{
							if (Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66 == 6)
							{
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
							}
						}
						else
						{
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_66);
						}
					}
				}
				func_649(iParam0, &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_31), &(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/].f_57));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Var0.f_72);
				if (bParam6)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_SAVE_DATA.COMPONENTS_ARRAY.PP_INFO_STRUCT.f_2558[0 /*149*/][iVar74 /*74*/]);
				}
				GlobalFunc_2526(*iParam0);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(Var0);
			if (STREAMING::HAS_MODEL_LOADED(Var0))
			{
				*iParam0 = VEHICLE::CREATE_VEHICLE(Var0, Param2, fParam5, 0, 0);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0);
				VEHICLE::_0xAB04325045427AAE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*iParam0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, true);
				func_654(iParam0, Var0);
				if (iParam1 == 17 || iParam1 == 15)
				{
					GlobalFunc_2526(*iParam0);
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

void func_654(int iParam0, struct<74> Param1)//Position - 0x6A429
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (Param1.f_9)
	{
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, Param1.f_4);
	}
	else
	{
		VEHICLE::SET_VEHICLE_COLOURS(*iParam0, Param1.f_5, Param1.f_6);
	}
	if (Param1.f_10)
	{
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, Param1.f_7, Param1.f_8);
	}
	VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, Param1.f_2);
	ENTITY::SET_ENTITY_HEALTH(*iParam0, Param1.f_3);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		VEHICLE::SET_VEHICLE_EXTRA(*iParam0, iVar0 + 1, !Param1.f_11[iVar0]);
		iVar0++;
	}
	if (Param1.f_24)
	{
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*iParam0, 0))
		{
			VEHICLE::RAISE_CONVERTIBLE_ROOF(*iParam0, 1);
		}
	}
	if (GlobalFunc_197(&uVar2, &uVar1) && Param1.f_73)
	{
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &uVar2);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, uVar1);
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Param1.f_27)))
	{
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, &(Param1.f_27));
		if (Param1.f_26 >= 0 && Param1.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, Param1.f_26);
		}
	}
	VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*iParam0, Param1.f_60, Param1.f_61, Param1.f_62);
	VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*iParam0, Param1.f_64);
	VEHICLE::SET_VEHICLE_WINDOW_TINT(*iParam0, Param1.f_63);
	VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(*iParam0, Param1.f_69, Param1.f_70, Param1.f_71);
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 2, MISC::IS_BIT_SET(Param1.f_68, 28));
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 3, MISC::IS_BIT_SET(Param1.f_68, 29));
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 0, MISC::IS_BIT_SET(Param1.f_68, 30));
	VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(*iParam0, 1, MISC::IS_BIT_SET(Param1.f_68, 31));
	if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*iParam0) > 1 && Param1.f_65 >= 0)
	{
		VEHICLE::SET_VEHICLE_LIVERY(*iParam0, Param1.f_65);
	}
	if (Param1.f_66 > -1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
		{
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*iParam0)))
			{
				if (Param1.f_66 == 6)
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Param1.f_66);
				}
			}
			else
			{
				VEHICLE::SET_VEHICLE_WHEEL_TYPE(*iParam0, Param1.f_66);
			}
		}
	}
	func_649(iParam0, &(Param1.f_31), &(Param1.f_57));
	VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*iParam0, Param1.f_72);
}



int func_657(int iParam0, struct<3> Param1, float fParam4)//Position - 0x6AA62
{
	int iVar0;
	
	if (iParam0 == joaat("monroe"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 89, 89);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 88, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " FA5T66 ");
	}
	else if (iParam0 == joaat("cheetah"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 62, 62);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 68, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " SDTM1YP");
	}
	else if (iParam0 == joaat("stinger"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 27, 27);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 36, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "ALPHADOG");
		VEHICLE::SET_VEHICLE_EXTRA(iVar0, 1, true);
	}
	else if (iParam0 == joaat("jb700"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 3, 3);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, "  4G3NT");
	}
	else if (iParam0 == joaat("entityxf"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 38, 38);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 37, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " MKB652 ");
	}
	else if (iParam0 == joaat("ztype"))
	{
		iVar0 = VEHICLE::CREATE_VEHICLE(iParam0, Param1, fParam4, 1, 1);
		VEHICLE::SET_VEHICLE_COLOURS(iVar0, 0, 0);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iVar0, 10, 0);
		VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iVar0, " V1NTAG3");
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(iVar0, 0f);
		VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iVar0, false, 0);
		VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
	}
	return iVar0;
}













void func_670(int iParam0, bool bParam1)//Position - 0x6B077
{
	VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*iParam0, bParam1);
	VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(*iParam0, !bParam1);
	VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(*iParam0, !bParam1);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(*iParam0, !bParam1, 0);
	if (VEHICLE::IS_THIS_MODEL_A_CAR(iParam0->f_6))
	{
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 0, !bParam1);
		VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 1, !bParam1);
	}
}



int func_673(int iParam0)//Position - 0x6B165
{
	if (iParam0 == 1)
	{
		return Global_91351.f_5;
	}
	return Global_93588.f_5;
}



int func_676(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4)//Position - 0x6B1C1
{
	struct<3> Var0;
	int iVar3;
	
	if (*iParam1 == 0)
	{
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		HUD::REQUEST_ADDITIONAL_TEXT("MCH1", 0);
		HUD::REQUEST_ADDITIONAL_TEXT("MCH1AUD", 6);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
		{
			SYSTEM::WAIT(0);
		}
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(2, 0), 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_54, 1);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_561);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_561, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_561);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, 1862763509);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_561, iLocal_561);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		}
		if (GlobalFunc_199() || GlobalFunc_2(0))
		{
			GlobalFunc_2224(1);
			GlobalFunc_7695(0);
		}
		uLocal_631 = AUDIO::GET_SOUND_ID();
		uLocal_630 = AUDIO::GET_SOUND_ID();
		uLocal_632 = AUDIO::GET_SOUND_ID();
		if (*iParam4 == 0)
		{
			switch (GlobalFunc_8315())
			{
				case 0:
					break;
				
				case 2:
					GlobalFunc_553(412);
					break;
				}
		}
		GlobalFunc_2533(1415.83f, 3108.05f, 41f, 48f, 16f, 2f);
		TASK::ADD_COVER_BLOCKING_AREA((3278.639f - 0.1f), (-4629.159f - 0.1f), (115.8688f - 1.5f), (3278.639f + 0.1f), (-4629.159f + 0.1f), (115.8688f + 1.5f), 1, 1, 1, 0);
		*iParam1++;
	}
	if (*iParam1 == 1)
	{
		*iParam2 = 0;
		func_775(iParam0);
		GlobalFunc_2535(&uLocal_755, &uLocal_634);
		GlobalFunc_2910(sLocal_53, &uLocal_762, &uLocal_635);
		func_772();
		*iParam1++;
	}
	if (*iParam1 == 2)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			}
			if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), Local_155.f_2, Local_155.f_5, 0, 1, 0);
			}
			else if (GlobalFunc_8315() == 2)
			{
				GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), Local_142.f_2, Local_142.f_5, 0, 1, 0);
			}
			if (*uParam3)
			{
				if (iParam0 == 0 || (iParam0 == 1 && GlobalFunc_8315() == 0))
				{
					while (!INTERIOR::IS_INTERIOR_READY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_56)))
					{
						INTERIOR::PIN_INTERIOR_IN_MEMORY(INTERIOR::GET_INTERIOR_AT_COORDS(Local_56));
						SYSTEM::WAIT(0);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_DECORATIONS(PLAYER::PLAYER_PED_ID());
				PED::CLEAR_PED_BLOOD_DAMAGE(PLAYER::PLAYER_PED_ID());
				PED::RESET_PED_VISIBLE_DAMAGE(PLAYER::PLAYER_PED_ID());
				GlobalFunc_7707(PLAYER::PLAYER_PED_ID());
				AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
				PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f, 1, 0, 0, 0);
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				GRAPHICS::REMOVE_DECALS_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 1000f);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
				ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID()));
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
			iLocal_690 = 0;
			iLocal_689 = 0;
			iLocal_580 = 0;
			iLocal_706 = 0;
			iLocal_705 = 0;
			switch (iParam0)
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 9:
				case 10:
					func_34();
					break;
				
				case 4:
				case 5:
				case 6:
				case 7:
				case 8:
					func_613();
					func_393(0);
					break;
				}
		}
		if (*iParam4 == 1)
		{
			if (GlobalFunc_8315() == 0)
			{
				GlobalFunc_5812(Local_155.f_2, Local_155.f_5, 1, 0);
			}
			else if (GlobalFunc_8315() == 2)
			{
				GlobalFunc_5812(Local_142.f_2, Local_142.f_5, 1, 0);
			}
		}
		func_768(iParam0);
		*iParam1++;
	}
	if (*iParam1 == 3)
	{
		if (GlobalFunc_2531(&uLocal_755, &uLocal_634))
		{
			if (GlobalFunc_2907(sLocal_53, &uLocal_762, &uLocal_635))
			{
				*iParam1++;
			}
		}
	}
	if (*iParam1 == 4)
	{
		func_765(0);
		switch (iParam0)
		{
			case 0:
				*iParam1++;
				break;
			
			case 1:
				if (GlobalFunc_8315() == 0)
				{
					if (func_431(&Local_142, 1, 1862763509, 0, 2, 0, 0, 0, Local_168, -1, 1))
					{
						iLocal_739[13] = 1;
						iLocal_739[8] = 1;
						iLocal_739[7] = 1;
						if ((*iParam4 == 1 && GlobalFunc_7698()) && VEHICLE::IS_THIS_MODEL_A_CAR(GlobalFunc_622()))
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_168))
							{
								GlobalFunc_8368();
								if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_622()))
								{
									Local_168 = func_761(Local_168.f_2, Local_168.f_5);
									VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_168, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_168);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
								}
							}
							else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
							{
								iLocal_739[2] = 0;
								iLocal_739[1] = 0;
								iLocal_739[3] = 0;
								*iParam1++;
							}
						}
						else if (func_637(&Local_168, 1, 0, 0, 1, -1, -1, -1))
						{
							iLocal_739[2] = 0;
							iLocal_739[1] = 0;
							iLocal_739[3] = 0;
							*iParam1++;
						}
					}
				}
				else if (GlobalFunc_8315() == 2)
				{
					if (func_637(&Local_196, 0, 0, 145, 1, 1, -1, -1))
					{
						iLocal_739[11] = 1;
						iLocal_739[10] = 1;
						if (func_637(&Local_168, 1, 0, 0, 1, -1, -1, -1))
						{
							iLocal_739[2] = 0;
							iLocal_739[1] = 0;
							iLocal_739[3] = 0;
							GlobalFunc_534(Local_168, 0);
							if (*iParam4 == 1 && GlobalFunc_7984())
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_182))
								{
									GlobalFunc_8574();
									if (STREAMING::HAS_MODEL_LOADED(GlobalFunc_2575()))
									{
										Local_182 = func_749(Local_182.f_2, Local_182.f_5);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_182, 1);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_182);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_2575());
									}
								}
								else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_182, 0))
								{
									iLocal_739[8] = 0;
									iLocal_739[7] = 0;
									iLocal_739[9] = 0;
									*iParam1++;
								}
							}
							else if (func_637(&Local_182, 1, 0, 2, 1, -1, -1, -1))
							{
								iLocal_739[8] = 0;
								iLocal_739[7] = 0;
								iLocal_739[9] = 0;
								*iParam1++;
							}
						}
					}
				}
				break;
			
			case 2:
				if (func_596(&Local_289, 1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_289))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_289))
						{
							ENTITY::SET_ENTITY_HEADING(Local_289, 315f);
							ENTITY::SET_ENTITY_VISIBLE(Local_289, 0);
							ENTITY::SET_ENTITY_COLLISION(Local_289, 0, 0);
						}
					}
					if (func_637(&Local_196, 0, 0, 145, 1, 1, -1, -1))
					{
						iLocal_739[11] = 1;
						iLocal_739[10] = 1;
						if (GlobalFunc_8315() == 0)
						{
							if (func_431(&Local_142, 1, 1862763509, 0, 2, 0, 0, 0, 0, -1, 1))
							{
								iLocal_321[2] = Local_142;
								iLocal_739[13] = 1;
								if (func_637(&Local_182, 1, 0, 2, 1, -1, -1, -1))
								{
									iLocal_739[8] = 0;
									iLocal_739[7] = 0;
									iLocal_739[9] = 0;
									*iParam1++;
								}
							}
						}
						else if (GlobalFunc_8315() == 2)
						{
							if (*iParam4 == 1 && GlobalFunc_7698())
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_182))
								{
									GlobalFunc_8368();
									if (GlobalFunc_8367())
									{
										Local_182 = func_761(Local_182.f_2, Local_182.f_5);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_182, 1);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_182);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
									}
								}
								else if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_182, 0))
								{
									iLocal_739[8] = 0;
									iLocal_739[7] = 0;
									iLocal_739[9] = 0;
									*iParam1++;
								}
							}
							else if (func_637(&Local_182, 1, 0, 2, 1, -1, -1, -1))
							{
								iLocal_739[8] = 0;
								iLocal_739[7] = 0;
								iLocal_739[9] = 0;
								*iParam1++;
							}
						}
					}
				}
				break;
			
			case 3:
				if (GlobalFunc_8315() == 0)
				{
					*iParam1++;
				}
				else if (GlobalFunc_8315() == 2)
				{
					*iParam1++;
				}
				break;
			
			case 4:
				if (func_637(&Local_168, 0, 0, 145, 1, -1, 86, 0))
				{
					iLocal_739[2] = 1;
					iLocal_739[1] = 1;
					iLocal_739[3] = 1;
					iLocal_739[4] = 1;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
					{
						AUDIO::SET_VEH_RADIO_STATION(Local_168, "OFF");
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_168, 0);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_168, sLocal_52);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_168, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_168, 1);
					}
					if (func_637(&Local_182, 0, 0, 145, 1, -1, -1, -1))
					{
						iLocal_739[8] = 0;
						iLocal_739[7] = 0;
						if (GlobalFunc_8315() == 0)
						{
							*iParam1++;
						}
						else if (GlobalFunc_8315() == 2)
						{
							if (func_431(&Local_155, 1, 1862763509, 0, 0, 0, 0, 0, Local_168, -1, 1))
							{
								iLocal_321[0] = Local_155;
								iLocal_739[12] = 1;
								*iParam1++;
							}
						}
					}
				}
				break;
			
			case 5:
				if (func_637(&Local_168, 0, 0, 145, 1, -1, 86, 0))
				{
					iLocal_739[2] = 1;
					iLocal_739[1] = 1;
					iLocal_739[5] = 1;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
					{
						AUDIO::SET_VEH_RADIO_STATION(Local_168, "OFF");
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_168, 0);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_168, sLocal_52);
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_168, 1);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_168, 0);
					}
					if (func_637(&Local_182, 0, 0, 145, 1, -1, -1, -1))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_182, 0))
						{
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_182, 0);
						}
						if (GlobalFunc_8315() == 0)
						{
							iLocal_739[13] = 1;
							iLocal_739[12] = 1;
							*iParam1++;
						}
						else if (GlobalFunc_8315() == 2)
						{
							if (func_431(&Local_155, 1, 1862763509, 0, 0, 0, 0, 0, 0, -1, 1))
							{
								iLocal_321[0] = Local_155;
								iLocal_739[13] = 1;
								iLocal_739[12] = 1;
								*iParam1++;
							}
						}
					}
				}
				break;
			
			case 6:
				if (func_637(&Local_168, 0, 0, 145, 1, -1, 86, 0))
				{
					iLocal_739[2] = 1;
					iLocal_739[1] = 1;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
					{
						AUDIO::SET_VEH_RADIO_STATION(Local_168, "OFF");
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_168, 0);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_168, sLocal_52);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_168, 1);
					}
					if (GlobalFunc_8315() == 0)
					{
						iLocal_739[13] = 1;
						iLocal_739[12] = 1;
						*iParam1++;
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (func_431(&Local_155, 1, 1862763509, 0, 0, 0, 0, 0, 0, -1, 1))
						{
							iLocal_321[0] = Local_155;
							iLocal_739[13] = 1;
							iLocal_739[12] = 1;
							*iParam1++;
						}
					}
				}
				break;
			
			case 7:
				if (iLocal_591 == 0)
				{
					func_382(&Local_2236, Local_62);
					func_381(&Local_2705);
					iLocal_591 = 1;
				}
				iLocal_637 = 0;
				if (((func_596(&Local_313, 1) && func_596(&Local_297, 1)) && func_596(&Local_305, 1)) && func_431(&Local_129, 0, -86095805, 0, 145, 0, 0, 0, 0, -1, 1))
				{
					if (func_637(&Local_168, 0, 0, 145, 1, -1, 86, 0))
					{
						iLocal_739[2] = 1;
						iLocal_739[1] = 1;
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
						{
							AUDIO::SET_VEH_RADIO_STATION(Local_168, "OFF");
							AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_168, 0);
							VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_168, sLocal_52);
							VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_168, true);
							VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_168, 1);
						}
						if (GlobalFunc_8315() == 0)
						{
							*iParam1++;
						}
						else if (GlobalFunc_8315() == 2)
						{
							if (func_431(&Local_155, 1, 1862763509, 0, 0, 0, 0, 0, 0, -1, 1))
							{
								iLocal_321[0] = Local_155;
								iLocal_739[12] = 1;
								*iParam1++;
							}
						}
					}
				}
				break;
			
			case 8:
				if (func_637(&Local_168, 0, 0, 145, 1, -1, 86, 0))
				{
					iLocal_739[2] = 1;
					iLocal_739[1] = 1;
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
					{
						AUDIO::SET_VEH_RADIO_STATION(Local_168, "OFF");
						AUDIO::SET_VEHICLE_RADIO_ENABLED(Local_168, 0);
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_168, sLocal_52);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Local_168, 1);
					}
					if (GlobalFunc_8315() == 0)
					{
						*iParam1++;
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (func_431(&Local_155, 1, 1862763509, 0, 0, 0, 0, 0, 0, -1, 1))
						{
							iLocal_321[0] = Local_155;
							iLocal_739[12] = 1;
							*iParam1++;
						}
					}
				}
				break;
			
			case 9:
			case 10:
				if (func_637(&Local_196, 0, 0, 145, 1, 1, -1, -1))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
					{
						VEHICLE::SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Local_196, 1);
					}
					iLocal_739[11] = 1;
					iLocal_739[10] = 1;
					switch (iParam0)
					{
						case 9:
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
							{
								ENTITY::FREEZE_ENTITY_POSITION(Local_196, 1);
							}
							break;
						
						case 10:
							if (*uParam3 == 1 || *iParam4 == 1)
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
								{
									VEHICLE::SET_HELI_BLADES_FULL_SPEED(Local_196);
									VEHICLE::SET_VEHICLE_ENGINE_ON(Local_196, 1, 1);
								}
							}
							break;
					}
					if (GlobalFunc_8315() == 0)
					{
						if (func_431(&Local_142, 1, 1862763509, 0, 2, 0, 0, 0, Local_196, -1, 1))
						{
							iLocal_321[2] = Local_142;
							iLocal_739[13] = 1;
							if (GlobalFunc_2780() == 2 && GlobalFunc_7698())
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_182))
								{
									GlobalFunc_8368();
									if (GlobalFunc_8367())
									{
										MISC::CLEAR_AREA(Local_182.f_2, 10f, 1, 0, 0, 0);
										Local_182 = func_761(Local_182.f_2, Local_182.f_5);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_182, 1);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_182);
										if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_182, 1);
										}
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
									}
								}
								else
								{
									*iParam1++;
								}
							}
							else if (GlobalFunc_2780() == 0 && GlobalFunc_7698())
							{
								if (!ENTITY::DOES_ENTITY_EXIST(Local_182))
								{
									GlobalFunc_8368();
									if (GlobalFunc_8367())
									{
										MISC::CLEAR_AREA(Local_182.f_2, 10f, 1, 0, 0, 0);
										Local_182 = func_761(Local_182.f_2, Local_182.f_5);
										VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_182, 1);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_182);
										if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_182, 1);
										}
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
									}
								}
								else
								{
									*iParam1++;
								}
							}
							else if ((Local_224.f_42 == 0 && func_637(&Local_182, 1, 0, 2, 1, -1, -1, -1)) || Local_224.f_42 != 0)
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_182))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_182))
									{
										if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Local_182)))
										{
											ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_182, 1);
										}
									}
								}
								*iParam1++;
							}
						}
					}
					else if (GlobalFunc_8315() == 2)
					{
						if (GlobalFunc_2780() == 2 && GlobalFunc_7698())
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_182))
							{
								GlobalFunc_8368();
								if (GlobalFunc_8367())
								{
									MISC::CLEAR_AREA(Local_182.f_2, 10f, 1, 0, 0, 0);
									Local_182 = func_761(Local_182.f_2, Local_182.f_5);
									VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_182, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_182);
									if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_182, 1);
									}
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
								}
							}
							else
							{
								*iParam1++;
							}
						}
						else if (GlobalFunc_2780() == 0 && GlobalFunc_7698())
						{
							if (!ENTITY::DOES_ENTITY_EXIST(Local_182))
							{
								GlobalFunc_8368();
								if (GlobalFunc_8367())
								{
									MISC::CLEAR_AREA(Local_182.f_2, 10f, 1, 0, 0, 0);
									Local_182 = func_761(Local_182.f_2, Local_182.f_5);
									VEHICLE::SET_VEHICLE_DOORS_SHUT(Local_182, 1);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_182);
									if (VEHICLE::IS_THIS_MODEL_A_HELI(GlobalFunc_622()))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_182, 1);
									}
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(GlobalFunc_622());
								}
							}
							else
							{
								*iParam1++;
							}
						}
						else if ((Local_224.f_42 == 0 && func_637(&Local_182, 1, 0, 2, 1, -1, -1, -1)) || Local_224.f_42 != 0)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_182))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_182))
								{
									if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Local_182)))
									{
										ENTITY::_SET_ENTITY_CLEANUP_BY_ENGINE(Local_182, 1);
									}
								}
							}
							*iParam1++;
						}
					}
				}
				break;
			}
	}
	if (*iParam1 == 5)
	{
		iLocal_586 = 0;
		switch (iParam0)
		{
			case 0:
				break;
			
			case 1:
				switch (GlobalFunc_8315())
				{
					case 0:
						GlobalFunc_2790(4, 1, 1);
						break;
					
					case 2:
						PLAYER::EXTEND_WORLD_BOUNDARY_FOR_PLAYER(Local_555);
						GlobalFunc_2790(4, 1, 1);
						break;
				}
				break;
			
			case 2:
				iLocal_586 = 1;
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					if (GlobalFunc_9134(&iLocal_321, 2))
					{
						GlobalFunc_10946(&iLocal_321, 1, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_321[0]))
						{
							if (!PED::IS_PED_INJURED(iLocal_321[0]))
							{
								PED::DELETE_PED(&(iLocal_321[0]));
							}
						}
					}
					PLAYER::EXTEND_WORLD_BOUNDARY_FOR_PLAYER(Local_555);
				}
				break;
			
			case 3:
				break;
			
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				if (GlobalFunc_9134(&iLocal_321, 0))
				{
					GlobalFunc_10946(&iLocal_321, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_321[2]))
					{
						if (!PED::IS_PED_INJURED(iLocal_321[2]))
						{
							PED::DELETE_PED(&(iLocal_321[2]));
						}
					}
				}
				break;
			
			case 9:
			case 10:
				iLocal_586 = 1;
				if (GlobalFunc_9134(&iLocal_321, 2))
				{
					GlobalFunc_10946(&iLocal_321, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_321[0]))
					{
						if (!PED::IS_PED_INJURED(iLocal_321[0]))
						{
							PED::DELETE_PED(&(iLocal_321[0]));
						}
					}
				}
				switch (iParam0)
				{
					case 9:
						PLAYER::EXTEND_WORLD_BOUNDARY_FOR_PLAYER(Local_196.f_2 + Local_71);
						break;
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 6)
	{
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
		switch (iParam0)
		{
			case 0:
			case 1:
			case 2:
			case 3:
			case 9:
			case 10:
				GlobalFunc_52(1, 1);
				if (iLocal_584 == 1)
				{
					func_38();
					func_36();
					func_34();
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(5526.24f, -5137.23f, 61.78925f, 3679.327f, -4973.879f, 125.0828f, 192f, 0, 0, 1);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3691.211f, -4941.24f, 94.59368f, 3511.115f, -4869.191f, 126.7621f, 16f, 0, 0, 1);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3510.004f, -4865.81f, 94.69557f, 3204.424f, -4833.817f, 126.8152f, 16f, 0, 0, 1);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3186.534f, -4832.798f, 109.8148f, 3202.187f, -4833.993f, 114.815f, 16f, 0, 0, 1);
					GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
					GRAPHICS::_RESET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH();
					VEHICLE::_0x35E0654F4BAD7971(1);
					GlobalFunc_699();
					if (OBJECT::DOES_PICKUP_EXIST(uLocal_677))
					{
						OBJECT::REMOVE_PICKUP(uLocal_677);
					}
					if (GlobalFunc_2567(0))
					{
						GlobalFunc_601(0, 0);
					}
					if (GlobalFunc_2567(20))
					{
						GlobalFunc_601(20, 0);
					}
					if (GlobalFunc_2567(5))
					{
						GlobalFunc_601(5, 0);
					}
					iLocal_584 = 0;
				}
				VEHICLE::SET_RANDOM_TRAINS(1);
				PATHFIND::_SET_ALL_PATHS_CACHE_BOUNDINGSTRUCT(0);
				GlobalFunc_2448(0);
				MISC::ENABLE_DISPATCH_SERVICE(1, 1);
				MISC::ENABLE_DISPATCH_SERVICE(2, 1);
				MISC::ENABLE_DISPATCH_SERVICE(3, 1);
				MISC::ENABLE_DISPATCH_SERVICE(4, 1);
				MISC::ENABLE_DISPATCH_SERVICE(5, 1);
				PLAYER::SET_MAX_WANTED_LEVEL(5);
				PED::SET_CREATE_RANDOM_COPS(1);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("asea2"), 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mesa2"), 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), 0);
				if (iLocal_582 == 1)
				{
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					MISC::_CLEAR_CLOUD_HAT();
					iLocal_582 = 0;
				}
				STREAMING::SET_MAPDATACULLBOX_ENABLED("prologue", 0);
				STREAMING::SET_MAPDATACULLBOX_ENABLED("Prologue_Main", 0);
				if ((iLocal_583 == 1 || *uParam3 == 1) || *iParam4 == 1)
				{
					switch (iParam0)
					{
						case 9:
						case 10:
							GlobalFunc_11318(func_833(2));
							break;
						
						default:
							func_691();
							break;
					}
					iLocal_583 = 0;
				}
				if (iParam0 == 9)
				{
					CLOCK::SET_CLOCK_TIME(6, 15, 0);
					MISC::SET_WEATHER_TYPE_NOW("OVERCAST");
				}
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
				AUDIO::STOP_AUDIO_SCENE("MIC1_RADIO_DISABLE");
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("ZL_YANKTON_ZONE_KILL_LIST", 1, 1);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("ZONE_LIST_YANKTON", 0, 1);
				func_690();
				if (*uParam3 == 1)
				{
					if (iLocal_581 == 1)
					{
						switch (GlobalFunc_8315())
						{
							case 0:
								GlobalFunc_8011(PLAYER::PLAYER_PED_ID(), 1);
								break;
							
							case 2:
								GlobalFunc_5738(0);
								break;
						}
						iLocal_581 = 0;
					}
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2097039789))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2097039789, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2097039789, 3, 0, 1);
					Global_31483[38] = 3;
				}
				if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(-2127416656))
				{
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-2127416656, 0f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-2127416656, 3, 0, 1);
					Global_31483[39] = 3;
				}
				break;
			
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
				GlobalFunc_52(0, 1);
				if (iLocal_584 == 0)
				{
					if (!GlobalFunc_188())
					{
						func_613();
						func_393(0);
					}
					func_687();
					func_685();
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(5526.24f, -5137.23f, 61.78925f, 3679.327f, -4973.879f, 125.0828f, 192f, 0, 1, 1);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3691.211f, -4941.24f, 94.59368f, 3511.115f, -4869.191f, 126.7621f, 16f, 0, 1, 1);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3510.004f, -4865.81f, 94.69557f, 3204.424f, -4833.817f, 126.8152f, 16f, 0, 1, 1);
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(3186.534f, -4832.798f, 109.8148f, 3202.187f, -4833.993f, 114.815f, 16f, 0, 1, 1);
					GlobalFunc_696();
					switch (iParam0)
					{
						case 4:
							CLOCK::SET_CLOCK_TIME(22, 0, 0);
							break;
						
						case 5:
						case 6:
						case 7:
						case 8:
							CLOCK::SET_CLOCK_TIME(0, 0, 0);
							break;
					}
					switch (GlobalFunc_8315())
					{
						case 0:
							if (iLocal_581 == 0)
							{
								if (!bLocal_579)
								{
									GlobalFunc_7963(PLAYER::PLAYER_PED_ID());
								}
								func_681(PLAYER::PLAYER_PED_ID(), joaat("weapon_pistol"), 100);
								iLocal_581 = 1;
							}
							break;
						
						case 2:
							break;
					}
					if (!OBJECT::DOES_PICKUP_EXIST(uLocal_677))
					{
						iLocal_674 = 0;
						MISC::SET_BIT(&iLocal_674, 1);
						MISC::SET_BIT(&iLocal_674, 8);
						MISC::SET_BIT(&iLocal_674, 4);
						uLocal_677 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_health_standard"), 3243.38f, -4647.38f, 114.975f, 0f, 0f, 94.5f, iLocal_674, -1, 2, 1, 0);
					}
					GlobalFunc_601(0, 1);
					GlobalFunc_601(20, 1);
					GlobalFunc_601(5, 1);
					GRAPHICS::_SET_EXTRA_TIMECYCLE_MODIFIER_STRENGTH(0.5f);
					VEHICLE::_0x35E0654F4BAD7971(0);
					iLocal_584 = 1;
				}
				switch (iParam0)
				{
					case 4:
						GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
						break;
					
					case 5:
						GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("graveyard_shootout", 30f);
						break;
					
					case 6:
					case 7:
					case 8:
						if (*uParam3 == 1 || *iParam4 == 1)
						{
							GRAPHICS::SET_TIMECYCLE_MODIFIER("graveyard_shootout");
						}
						break;
				}
				switch (iParam0)
				{
					case 7:
						PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), 1);
						MISC::SET_INSTANCE_PRIORITY_HINT(1);
						if (!OBJECT::DOES_PICKUP_EXIST(uLocal_678))
						{
							iLocal_675 = 0;
							MISC::SET_BIT(&iLocal_675, 1);
							MISC::SET_BIT(&iLocal_675, 8);
							MISC::SET_BIT(&iLocal_675, 4);
							uLocal_678 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_pistol"), 3258.789f, -4575.306f, 117.257f, -88.2f, 65.88f, 0f, iLocal_675, 12, 2, 1, 0);
						}
						if (!OBJECT::DOES_PICKUP_EXIST(uLocal_679))
						{
							iLocal_676 = 0;
							MISC::SET_BIT(&iLocal_676, 1);
							MISC::SET_BIT(&iLocal_676, 8);
							MISC::SET_BIT(&iLocal_676, 4);
							uLocal_679 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_assaultrifle"), 3265.805f, -4591.315f, 116.1286f, -70.2f, -14.4f, -28.8f, iLocal_676, 50, 2, 1, 0);
						}
						break;
				}
				VEHICLE::SET_RANDOM_TRAINS(0);
				PATHFIND::_SET_ALL_PATHS_CACHE_BOUNDINGSTRUCT(1);
				GlobalFunc_2448(1);
				MISC::ENABLE_DISPATCH_SERVICE(1, 0);
				MISC::ENABLE_DISPATCH_SERVICE(2, 0);
				MISC::ENABLE_DISPATCH_SERVICE(3, 0);
				MISC::ENABLE_DISPATCH_SERVICE(4, 0);
				MISC::ENABLE_DISPATCH_SERVICE(5, 0);
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PED::SET_CREATE_RANDOM_COPS(0);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
					PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
				}
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("asea2"), 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mesa2"), 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeold1"), 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeold2"), 1);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), 1);
				if (iLocal_582 == 0)
				{
					MISC::CLEAR_WEATHER_TYPE_PERSIST();
					MISC::SET_WEATHER_TYPE_NOW_PERSIST("SNOWLIGHT");
					MISC::_CLEAR_CLOUD_HAT();
					MISC::LOAD_CLOUD_HAT("Snowy 01", 0);
					iLocal_582 = 1;
				}
				STREAMING::SET_MAPDATACULLBOX_ENABLED("prologue", 1);
				STREAMING::SET_MAPDATACULLBOX_ENABLED("Prologue_Main", 1);
				if (iLocal_583 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(func_833(0)))
					{
						if (!PED::IS_PED_INJURED(func_833(0)))
						{
							GlobalFunc_11257(func_833(0), 12, 17, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(func_833(2)))
					{
						if (!PED::IS_PED_INJURED(func_833(2)))
						{
							GlobalFunc_11257(func_833(2), 12, 23, 0, -1, 0, 0, 0, -1, -1, -1, 0);
						}
					}
					iLocal_583 = 1;
				}
				switch (iParam0)
				{
					case 7:
					case 8:
						if (iLocal_689 == 0)
						{
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								PED::APPLY_PED_DAMAGE_DECAL(PLAYER::PLAYER_PED_ID(), 1, 0.621f, 0.755f, 55.084f, 0.01f, 1f, 1, 1, "bruise");
								iLocal_689 = 1;
							}
						}
						break;
				}
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MIC1_RADIO_DISABLE"))
				{
					AUDIO::START_AUDIO_SCENE("MIC1_RADIO_DISABLE");
				}
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("ZL_YANKTON_ZONE_KILL_LIST", 0, 1);
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE("ZONE_LIST_YANKTON", 1, 1);
				func_680();
				if (*uParam3 == 1 || *iParam4 == 1)
				{
					VEHICLE::DELETE_ALL_TRAINS();
				}
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 7)
	{
		if (iLocal_584 == 1)
		{
			STREAMING::REQUEST_PTFX_ASSET();
			if (((((STREAMING::HAS_PTFX_ASSET_LOADED() && func_612()) && func_392(0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ICE_FOOTSTEPS", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SNOW_FOOTSTEPS", 0)) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\FBI_HEIST_3B_SHOOTOUT", 0))
			{
				*iParam1++;
			}
		}
		else if (iLocal_584 == 0)
		{
			STREAMING::REMOVE_PTFX_ASSET();
			AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FBI_HEIST_3B_SHOOTOUT");
			*iParam1++;
		}
	}
	if (*iParam1 == 8)
	{
		GlobalFunc_200(&uLocal_390, 0);
		GlobalFunc_200(&uLocal_390, 2);
		GlobalFunc_200(&uLocal_390, 3);
		GlobalFunc_200(&uLocal_390, 4);
		GlobalFunc_200(&uLocal_390, 5);
		GlobalFunc_200(&uLocal_390, 6);
		GlobalFunc_200(&uLocal_390, 7);
		GlobalFunc_200(&uLocal_390, 8);
		AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 0);
		switch (iParam0)
		{
			case 1:
			case 2:
				switch (GlobalFunc_8315())
				{
					case 0:
						GlobalFunc_173(&uLocal_390, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						GlobalFunc_173(&uLocal_390, 2, 0, "TREVOR", 0, 1);
						break;
					
					case 2:
						GlobalFunc_173(&uLocal_390, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						GlobalFunc_173(&uLocal_390, 0, 0, "MICHAEL", 0, 1);
						break;
				}
				GlobalFunc_173(&uLocal_390, 3, 0, "DAVE", 0, 1);
				GlobalFunc_173(&uLocal_390, 4, 0, "NERVOUSRON", 0, 1);
				GlobalFunc_173(&uLocal_390, 8, 0, "MCH1AIRTRAFFIC", 0, 1);
				GlobalFunc_7632(0);
				GlobalFunc_563(0);
				break;
			
			case 4:
			case 5:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_173(&uLocal_390, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				GlobalFunc_7632(0);
				GlobalFunc_563(1);
				AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 1);
				break;
			
			case 7:
			case 8:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_173(&uLocal_390, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				}
				GlobalFunc_7632(0);
				GlobalFunc_563(1);
				break;
			
			case 9:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					GlobalFunc_173(&uLocal_390, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				}
				GlobalFunc_173(&uLocal_390, 5, 0, "CHENGSR", 0, 1);
				GlobalFunc_7632(0);
				GlobalFunc_563(1);
				break;
			
			case 10:
				GlobalFunc_7632(0);
				GlobalFunc_563(0);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 9)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			switch (iParam0)
			{
				case 1:
					switch (GlobalFunc_8315())
					{
						case 0:
							*iParam1++;
							break;
						
						case 2:
							TASK::REQUEST_WAYPOINT_RECORDING("mic1_tdrive");
							if (TASK::GET_IS_WAYPOINT_RECORDING_LOADED("mic1_tdrive"))
							{
								if (ENTITY::DOES_ENTITY_EXIST(Local_168))
								{
									if (!ENTITY::IS_ENTITY_DEAD(Local_168))
									{
										if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_168, 0))
										{
											PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_168, -1);
										}
										MISC::CLEAR_AREA_OF_PEDS(-857.8701f, 172.5816f, 67.0251f, 10f, 0);
										MISC::CLEAR_AREA_OF_VEHICLES(-857.8701f, 172.5816f, 67.0251f, 10f, 0, 0, 0, 0, 0);
										ENTITY::SET_ENTITY_COORDS(Local_168, -857.8701f, 172.5816f, 67.0251f, 1, 0, 0, 1);
										ENTITY::SET_ENTITY_HEADING(Local_168, 355.2254f);
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_168);
										GlobalFunc_9138(Local_168);
										VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 1, 1);
										VEHICLE::SET_VEHICLE_FORWARD_SPEED(Local_168, 10f);
										TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(PLAYER::PLAYER_PED_ID(), Local_168, "mic1_tdrive", 786468, 0, 8, -1, -1082130432, 0, 1073741824);
										*iParam1++;
									}
								}
							}
							break;
					}
					break;
				
				default:
					*iParam1++;
					break;
			}
		}
		else
		{
			*iParam1++;
		}
	}
	if (*iParam1 == 10)
	{
		if (*uParam3 == 1 || *iParam4 == 1)
		{
			if (*iParam4 == 0)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				STREAMING::LOAD_SCENE(Var0);
				SYSTEM::WAIT(1000);
			}
			else
			{
				GlobalFunc_5108(0, -1, 0);
			}
			switch (iParam0)
			{
				case 7:
					GlobalFunc_2901(PLAYER::PLAYER_PED_ID(), 3256.578f, -4575.252f, 117.267f, 267.6326f, 0, 0, 0);
					TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(PLAYER::PLAYER_PED_ID(), Local_2236[0 /*13*/].f_1, -1, 1, 0f, 1, 1, Local_2236[0 /*13*/], 0);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 1, 0);
					if (iLocal_128 == 0 || iLocal_128 == joaat("weapon_unarmed"))
					{
						iLocal_128 = WEAPON::GET_BEST_PED_WEAPON(PLAYER::PLAYER_PED_ID(), 1);
						if (iLocal_128 == 0 || iLocal_128 == joaat("weapon_unarmed"))
						{
							iLocal_128 = joaat("weapon_pistol");
						}
					}
					if (WEAPON::GET_AMMO_IN_PED_WEAPON(PLAYER::PLAYER_PED_ID(), iLocal_128) < WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iLocal_128, 1))
					{
						iVar3 = WEAPON::GET_MAX_AMMO_IN_CLIP(PLAYER::PLAYER_PED_ID(), iLocal_128, 1) * 2;
					}
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), iLocal_128, iVar3, 1, 1);
					SYSTEM::WAIT(500);
					break;
				
				case 3:
				case 4:
					if (!PED::IS_PED_INJURED(func_833(0)))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
						{
							PED::SET_PED_INTO_VEHICLE(func_833(0), Local_168, -1);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_168);
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_168, 1, 1);
						}
					}
					break;
				
				case 9:
				case 10:
					if (!PED::IS_PED_INJURED(func_833(2)))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 0))
						{
							if (!PED::IS_PED_SITTING_IN_VEHICLE(func_833(2), Local_196))
							{
								PED::SET_PED_INTO_VEHICLE(func_833(2), Local_196, -1);
							}
							VEHICLE::SET_VEHICLE_ENGINE_ON(Local_196, 1, 1);
						}
					}
					break;
			}
			if (*uParam3 == 1)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
			}
			if (iParam0 == 7)
			{
				if (iLocal_593 == 0)
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-16.5368f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-45f);
					}
					else
					{
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-16.5368f, 1065353216);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-72.37355f);
					}
					iLocal_593 = 1;
				}
			}
			else
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
			switch (iParam0)
			{
				case 7:
					AUDIO::TRIGGER_MUSIC_EVENT("MIC1_SHOOTOUT_RT");
					break;
				
				case 8:
					AUDIO::TRIGGER_MUSIC_EVENT("MIC1_SKIPPED_TO_KIDNAP");
					break;
				
				case 9:
					AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FLY_HOME_RT");
					break;
			}
			switch (iParam0)
			{
				case 1:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						AUDIO::SET_PLAYER_ANGRY(PLAYER::PLAYER_PED_ID(), 1);
					}
					break;
				
				default:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						AUDIO::SET_PLAYER_ANGRY(PLAYER::PLAYER_PED_ID(), 0);
					}
					break;
			}
			switch (iParam0)
			{
				case 0:
				case 3:
				case 4:
				case 6:
				case 8:
				case 9:
					break;
				
				default:
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(800);
					}
					break;
				}
		}
		*iParam1++;
	}
	if (*iParam1 == 11)
	{
		switch (iParam0)
		{
			case 1:
				GlobalFunc_11067(0, "GET TO AIRPORT", 0, 0, 0, 0);
				break;
			
			case 2:
				GlobalFunc_11067(1, "FLY TO NORTH YANKTON", 0, 0, 0, 1);
				break;
			
			case 4:
				GlobalFunc_11067(2, "GET TO GRAVEYARD", 0, 0, 0, 0);
				break;
			
			case 5:
				GlobalFunc_11067(3, "GET TO GRAVE", 0, 0, 0, 0);
				break;
			
			case 7:
				GlobalFunc_11067(4, "GRAVEYARD SHOOTOUT", 0, 0, 0, 0);
				break;
			
			case 9:
				GlobalFunc_11067(5, "FLY HOME", 1, 0, 0, 0);
				break;
		}
		*iParam1++;
	}
	if (*iParam1 == 12)
	{
		*iParam2 = 1;
		*iParam4 = 0;
		*uParam3 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
		*iParam1++;
	}
	if (*iParam1 == 13)
	{
		return 1;
	}
	return 0;
}




void func_680()//Position - 0x6D327
{
	if (iLocal_698 == -1)
	{
		iLocal_698 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3242.716f, -4707.644f, 112f, 18.144f, 14.964f, 5f, 0f, 0, 7);
	}
	if (iLocal_699 == -1)
	{
		iLocal_699 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3294.783f, -4613.386f, 112f, 4.2f, 6.294f, 5f, 0f, 0, 7);
	}
	if (iLocal_700 == -1)
	{
		iLocal_700 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3263.877f, -4560.729f, 118f, 6.65f, 6f, 5f, 0f, 0, 7);
	}
	if (iLocal_701 == -1)
	{
		iLocal_701 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3238.994f, -4592.786f, 115f, 6.65f, 6f, 5f, 0f, 0, 7);
	}
	if (iLocal_702 == -1)
	{
		iLocal_702 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3198.355f, -4706.313f, 112f, 12.179f, 14.115f, 5f, 0f, 0, 7);
	}
	if (iLocal_703 == -1)
	{
		iLocal_703 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3214f, -4765.436f, 112f, 64f, 32f, 8f, 0f, 0, 7);
	}
	if (iLocal_704 == -1)
	{
		iLocal_704 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(3259.8f, -4573.9f, 117.3f, 2.5f, 4f, 2f, 0f, 0, 7);
	}
}

void func_681(int iParam0, int iParam1, int iParam2)//Position - 0x6D454
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar44;
	int iVar45;
	int iVar46;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			iVar0 = 0;
			while (iVar0 <= (44 - 1))
			{
				iVar1 = GlobalFunc_223(iVar0);
				if (iVar1 != 0)
				{
					iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar1);
					if ((iVar2 != iParam1 && iVar2 != joaat("weapon_unarmed")) && iVar2 != 0)
					{
						WEAPON::SET_PED_AMMO(iParam0, iVar2, 0);
						WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar2);
					}
				}
				iVar0++;
			}
			iVar4 = FILES::GET_NUM_DLC_WEAPONS();
			iVar3 = 0;
			while (iVar3 < iVar4)
			{
				if (FILES::GET_DLC_WEAPON_DATA(iVar3, &Var5))
				{
					iVar44 = Var5.f_1;
					if ((iVar44 != iParam1 && iVar44 != 0) && iVar44 != joaat("weapon_unarmed"))
					{
						WEAPON::SET_PED_AMMO(iParam0, iVar44, 0);
						WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar44);
					}
				}
				iVar3++;
			}
			if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iParam1, 0))
			{
				iVar45 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iParam1);
				if (iVar45 < iParam2)
				{
					iVar46 = (iParam2 - iVar45);
					WEAPON::ADD_AMMO_TO_PED(iParam0, iParam1, iVar46);
				}
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(iParam0, iParam1, iParam2, 0, 0);
			}
		}
	}
}




void func_685()//Position - 0x6D837
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_686(iVar0);
		iVar0++;
	}
}

void func_686(int iParam0)//Position - 0x6D85A
{
	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_2727[iParam0 /*6*/]))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_2727[iParam0 /*6*/], 0f, 0, 0);
		OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_2727[iParam0 /*6*/], 1, 0, 1);
	}
}

void func_687()//Position - 0x6D88C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		func_688(iVar0);
		iVar0++;
	}
}

void func_688(int iParam0)//Position - 0x6D8AF
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Local_2727[iParam0 /*6*/]))
	{
		OBJECT::ADD_DOOR_TO_SYSTEM(Local_2727[iParam0 /*6*/], Local_2727[iParam0 /*6*/].f_4, Local_2727[iParam0 /*6*/].f_1, 0, 0, 0);
	}
}


void func_690()//Position - 0x6D8FC
{
	if (iLocal_698 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_698);
		iLocal_698 = -1;
	}
	if (iLocal_699 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_699);
		iLocal_699 = -1;
	}
	if (iLocal_700 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_700);
		iLocal_700 = -1;
	}
	if (iLocal_701 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_701);
		iLocal_701 = -1;
	}
	if (iLocal_702 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_702);
		iLocal_702 = -1;
	}
	if (iLocal_703 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_703);
		iLocal_703 = -1;
	}
	if (iLocal_704 != -1)
	{
		PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_704);
		iLocal_704 = -1;
	}
}

void func_691()//Position - 0x6D982
{
	GlobalFunc_2000(&Global_91351);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		GlobalFunc_11305(PLAYER::PLAYER_PED_ID(), &(Global_89752[GlobalFunc_6674(PLAYER::PLAYER_PED_ID()) /*65*/]), 0);
	}
}


























































int func_749(struct<3> Param0, float fParam3)//Position - 0x73626
{
	return func_750(&(Global_91351.f_2167), Param0, fParam3, 0);
}

int func_750(var uParam0, struct<3> Param1, float fParam4, bool bParam5)//Position - 0x73640
{
	int iVar0;
	struct<3> Var1;
	bool bVar4;
	var uVar5;
	int iVar8;
	
	if (GlobalFunc_6794(uParam0))
	{
		if (GlobalFunc_100(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_42 == joaat("monster") || uParam0->f_12.f_42 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
		if (GlobalFunc_7696(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			GlobalFunc_8365(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_42, Param1, fParam4, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				func_754(iVar0, &(uParam0->f_12), 0, 1);
				bVar4 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_42) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_42))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar5))
					{
						bVar4 = false;
					}
				}
				if (bVar4)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							GlobalFunc_6791(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							GlobalFunc_6791(uParam0->f_11, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					GlobalFunc_531(iVar0, uParam0->f_11);
				}
				else if ((!GlobalFunc_8366(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar8 = GlobalFunc_536(iVar0);
					if (iVar8 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						GlobalFunc_7695(iVar8);
					}
				}
				if (((Global_89962 != 13 && Global_89962 != 10) && Global_89962 != 11) && Global_89962 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_89962.f_3)) == Global_68102)
					{
						if (uParam0->f_12.f_42 == Global_SAVE_DATA.VEHICLE_GEN_SAVED_DATA_STRUCT.f_69[21 /*54*/].f_42)
						{
							GlobalFunc_4927(24, 0);
							GlobalFunc_7695(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					GlobalFunc_8317(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_42);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}




void func_754(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x73C14
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
		}
		if (uParam1->f_42 == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_47, uParam1->f_48, uParam1->f_49);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_53, 15) || GlobalFunc_322(iParam0)) || (((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0) && uParam1->f_9[20] > 0)) && GlobalFunc_321())
		{
			uParam1->f_38 = 0;
			uParam1->f_39 = 0;
			uParam1->f_40 = 0;
		}
		else if ((uParam1->f_38 == 0 && uParam1->f_39 == 0) && uParam1->f_40 == 0)
		{
			uParam1->f_38 = 255;
			uParam1->f_39 = 255;
			uParam1->f_40 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_38, uParam1->f_39, uParam1->f_40);
		if (uParam1->f_41 == -1 && uParam1->f_42 != joaat("granger"))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_41);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !MISC::IS_BIT_SET(uParam1->f_53, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_46);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_50, uParam1->f_51, uParam1->f_52);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_53, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_53, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_53, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_53, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_53, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_43 >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_43);
		}
		if (uParam1->f_45 > -1 && uParam1->f_45 < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_45 == 6)
					{
						VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_45);
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_45);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_44 == 0 || uParam1->f_44 == 3) || uParam1->f_44 == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_649(&iParam0, &(uParam1->f_9), &(uParam1->f_35));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_42) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_42))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_53, GlobalFunc_101(iVar0 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, false);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, true);
				}
				iVar0++;
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_53, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_53, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_53, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}







int func_761(struct<3> Param0, float fParam3)//Position - 0x740F9
{
	return func_750(&(Global_93588.f_2167), Param0, fParam3, 0);
}




void func_765(int iParam0)//Position - 0x7414C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (iLocal_739 - 1))
	{
		iLocal_739[iVar0] = iParam0;
		iVar0++;
	}
}



void func_768(int iParam0)//Position - 0x74204
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			switch (GlobalFunc_8315())
			{
				case 0:
					break;
				
				case 2:
					if (!ENTITY::DOES_ENTITY_EXIST(Local_196))
					{
						GlobalFunc_2532(Local_196.f_6, &uLocal_755, 6, &uLocal_634);
					}
					break;
			}
			break;
		
		case 2:
			if (GlobalFunc_8315() == 0)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_142))
				{
					GlobalFunc_2532(Local_142.f_6, &uLocal_755, 6, &uLocal_634);
				}
			}
			else if (GlobalFunc_8315() == 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_155))
				{
					GlobalFunc_2532(Local_142.f_6, &uLocal_755, 6, &uLocal_634);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_196))
			{
				GlobalFunc_2532(Local_196.f_6, &uLocal_755, 6, &uLocal_634);
			}
			break;
		
		case 3:
			break;
		
		case 4:
			STREAMING::REQUEST_PTFX_ASSET();
			if (GlobalFunc_8315() == 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_155))
				{
					GlobalFunc_2532(Local_155.f_6, &uLocal_755, 6, &uLocal_634);
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_168))
			{
				GlobalFunc_2532(Local_168.f_6, &uLocal_755, 6, &uLocal_634);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_182))
			{
				GlobalFunc_2532(Local_182.f_6, &uLocal_755, 6, &uLocal_634);
			}
			GlobalFunc_2909(4, sLocal_53, &uLocal_762, 6, &uLocal_635);
			GlobalFunc_2909(5, sLocal_53, &uLocal_762, 6, &uLocal_635);
			break;
		
		case 5:
			STREAMING::REQUEST_PTFX_ASSET();
			if (!ENTITY::DOES_ENTITY_EXIST(Local_168))
			{
				GlobalFunc_2532(Local_168.f_6, &uLocal_755, 6, &uLocal_634);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_182))
			{
				GlobalFunc_2532(Local_182.f_6, &uLocal_755, 6, &uLocal_634);
			}
			break;
		
		case 6:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_168))
			{
				GlobalFunc_2532(Local_168.f_6, &uLocal_755, 6, &uLocal_634);
			}
			break;
		
		case 7:
			STREAMING::REQUEST_PTFX_ASSET();
			if (!ENTITY::DOES_ENTITY_EXIST(Local_168))
			{
				GlobalFunc_2532(Local_168.f_6, &uLocal_755, 6, &uLocal_634);
			}
			if (GlobalFunc_8315() == 2)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(Local_155))
				{
					GlobalFunc_2532(Local_155.f_6, &uLocal_755, 6, &uLocal_634);
				}
			}
			GlobalFunc_2532(iLocal_54, &uLocal_755, 6, &uLocal_634);
			GlobalFunc_2532(iLocal_55, &uLocal_755, 6, &uLocal_634);
			GlobalFunc_2909(Local_2165[0 /*14*/].f_7, sLocal_53, &uLocal_762, 6, &uLocal_635);
			GlobalFunc_2909(Local_2165[1 /*14*/].f_7, sLocal_53, &uLocal_762, 6, &uLocal_635);
			GlobalFunc_2909(Local_2165[4 /*14*/].f_7, sLocal_53, &uLocal_762, 6, &uLocal_635);
			break;
		
		case 8:
			STREAMING::REQUEST_PTFX_ASSET();
			if (!ENTITY::DOES_ENTITY_EXIST(Local_155))
			{
				GlobalFunc_2532(Local_155.f_6, &uLocal_755, 6, &uLocal_634);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_168))
			{
				GlobalFunc_2532(Local_168.f_6, &uLocal_755, 6, &uLocal_634);
			}
			break;
		
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_142))
			{
				GlobalFunc_2532(Local_142.f_6, &uLocal_755, 6, &uLocal_634);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_196))
			{
				GlobalFunc_2532(Local_196.f_6, &uLocal_755, 6, &uLocal_634);
			}
			GlobalFunc_2909(Local_196.f_7, sLocal_53, &uLocal_762, 6, &uLocal_635);
			break;
		
		case 10:
			if (!ENTITY::DOES_ENTITY_EXIST(Local_142))
			{
				GlobalFunc_2532(Local_142.f_6, &uLocal_755, 6, &uLocal_634);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Local_196))
			{
				GlobalFunc_2532(Local_196.f_6, &uLocal_755, 6, &uLocal_634);
			}
			break;
	}
}




void func_772()//Position - 0x7466B
{
	int iVar0;
	int iVar1;
	
	iVar0 = iLocal_707;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_707[iVar1] = 0;
		iVar1++;
	}
	iLocal_738 = 0;
}



void func_775(int iParam0)//Position - 0x7472F
{
	Local_155.f_6 = GlobalFunc_4917(0);
	Local_142.f_6 = GlobalFunc_4917(2);
	Local_2727[0 /*6*/] = 380898258;
	Local_2727[0 /*6*/].f_1 = { 3293.623f, -4611.304f, 116.7559f };
	Local_2727[0 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_l");
	Local_2727[1 /*6*/] = -1889206990;
	Local_2727[1 /*6*/].f_1 = { 3293.223f, -4615.06f, 116.754f };
	Local_2727[1 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_r");
	Local_2727[2 /*6*/] = -1834311451;
	Local_2727[2 /*6*/].f_1 = { 3239.187f, -4594.824f, 117.7705f };
	Local_2727[2 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_l");
	Local_2727[3 /*6*/] = 1669415571;
	Local_2727[3 /*6*/].f_1 = { 3239.977f, -4591.13f, 117.7685f };
	Local_2727[3 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_r");
	Local_2727[4 /*6*/] = 22407341;
	Local_2727[4 /*6*/].f_1 = { 3262.597f, -4561.659f, 119.0779f };
	Local_2727[4 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_l");
	Local_2727[5 /*6*/] = -1132110067;
	Local_2727[5 /*6*/].f_1 = { 3266.375f, -4561.663f, 119.076f };
	Local_2727[5 /*6*/].f_4 = joaat("prop_cs_gravyard_gate_r");
	switch (iParam0)
	{
		case 0:
			Local_142.f_2 = { -802.4639f, 173.0358f, 71.8447f };
			Local_142.f_5 = 288.844f;
			Local_142.f_7 = { 1733.647f, 3306.02f, 40.2261f };
			Local_155.f_2 = { -802.4639f, 173.0358f, 71.8447f };
			Local_155.f_5 = 288.844f;
			Local_155.f_7 = { -1033.2f, -2731.17f, 19.05f };
			Local_168.f_6 = GlobalFunc_4931(0, 0);
			Local_168.f_2 = { -829.2751f, 176.4524f, 69.8634f };
			Local_168.f_5 = 151.863f;
			Local_168.f_7 = 3;
			Local_182.f_6 = GlobalFunc_4931(2, 0);
			Local_182.f_2 = { -825.8718f, 157.3143f, 69.4619f };
			Local_182.f_5 = 90f;
			Local_182.f_7 = 1;
			Local_196.f_6 = joaat("cuban800");
			Local_196.f_2 = { 1731.802f, 3308.911f, 40.2237f };
			Local_196.f_5 = 194.8553f;
			Local_196.f_7 = 2;
			Local_555 = { -3841.285f, 5020.606f, 174.8651f };
			Local_555.f_3 = { 0.5f, 0.5f, 0.5f };
			break;
		
		case 1:
			Local_142.f_2 = { -818.0981f, 158.3042f, 69.7868f };
			Local_142.f_5 = 109.1361f;
			Local_142.f_7 = { 1733.647f, 3306.02f, 40.2261f };
			Local_155.f_2 = { -813.9473f, 179.2056f, 71.1592f };
			Local_155.f_5 = 111.3824f;
			Local_155.f_7 = { -1033.2f, -2731.17f, 19.05f };
			Local_168.f_6 = GlobalFunc_4931(0, 0);
			Local_168.f_2 = { -829.2751f, 176.4524f, 69.8634f };
			Local_168.f_5 = 151.863f;
			Local_168.f_7 = 3;
			Local_182.f_6 = GlobalFunc_4931(2, 0);
			Local_182.f_2 = { -825.8718f, 157.3143f, 69.4619f };
			Local_182.f_5 = 90f;
			Local_182.f_7 = 1;
			Local_196.f_6 = joaat("cuban800");
			Local_196.f_2 = { 1731.802f, 3308.911f, 40.2237f };
			Local_196.f_5 = 194.8553f;
			Local_196.f_7 = 2;
			Local_555 = { -3841.285f, 5020.606f, 174.8651f };
			Local_555.f_3 = { 0.5f, 0.5f, 0.5f };
			Local_289.f_2 = { Local_555 };
			Local_289.f_5 = { 0f, 0f, 0f };
			Local_289.f_1 = joaat("prop_golf_ball");
			break;
		
		case 2:
			Local_142.f_2 = { 1746.797f, 3291.445f, 40.1072f };
			Local_142.f_5 = 55.8571f;
			Local_142.f_7 = { 1733.647f, 3306.02f, 40.2261f };
			Local_155.f_2 = { -826.91f, 176.45f, 69.97f };
			Local_155.f_5 = 129.1458f;
			Local_155.f_7 = { -1033.2f, -2731.17f, 19.05f };
			Local_168.f_6 = GlobalFunc_4931(0, 0);
			Local_168.f_2 = { -828.4514f, 177.0704f, 69.9859f };
			Local_168.f_5 = 147.0378f;
			Local_168.f_7 = 3;
			Local_182.f_6 = GlobalFunc_4931(2, 0);
			Local_182.f_2 = { 1747.327f, 3294.023f, 40.1071f };
			Local_182.f_5 = 84.1211f;
			Local_182.f_7 = 1;
			Local_196.f_6 = joaat("cuban800");
			Local_196.f_2 = { 1731.802f, 3308.911f, 40.2237f };
			Local_196.f_5 = 194.8553f;
			Local_196.f_7 = 2;
			Local_555 = { -3841.285f, 5020.606f, 174.8651f };
			Local_555.f_3 = { 0.5f, 0.5f, 0.5f };
			Local_289.f_2 = { Local_555 };
			Local_289.f_5 = { 0f, 0f, 0f };
			Local_289.f_1 = joaat("prop_golf_ball");
			break;
		
		case 3:
			Local_155.f_2 = { -1033.321f, -2727.292f, 19.1813f };
			Local_155.f_5 = 239.5299f;
			Local_155.f_7 = { 0f, 0f, 0f };
			Local_142.f_2 = { -1012.279f, -2738.53f, 19.1873f };
			Local_142.f_5 = 329.2714f;
			Local_142.f_7 = { 0f, 0f, 0f };
			Local_168.f_6 = GlobalFunc_4931(0, 0);
			Local_168.f_2 = { -1033.481f, -2728.821f, 19.1441f };
			Local_168.f_5 = 239.6801f;
			Local_196.f_6 = joaat("cuban800");
			Local_196.f_2 = { 1731.802f, 3308.911f, 40.2237f };
			Local_196.f_5 = 194.8553f;
			break;
		
		case 4:
			Local_155.f_2 = { 5482.599f, -5125.985f, 77.437f };
			Local_155.f_5 = 264.8607f;
			Local_155.f_7 = { 3216.844f, -4682.954f, 111.7127f };
			Local_142.f_2 = { 3259.527f, -4571.694f, 117.1567f };
			Local_142.f_5 = 181.547f;
			Local_168.f_6 = joaat("asea2");
			Local_168.f_2 = { 5575.986f, -5130.243f, 79.5043f };
			Local_168.f_5 = 86.0572f;
			Local_168.f_7 = 5;
			Local_182.f_6 = joaat("mesa2");
			Local_182.f_2 = { 3257.901f, -4689.813f, 111.8699f };
			Local_182.f_5 = 278.2631f;
			Local_278.f_2 = 9;
			Local_278.f_3 = { Local_77 };
			Local_278.f_6 = joaat("freight");
			Local_278.f_7 = joaat("freightcar");
			Local_278.f_8 = joaat("freightgrain");
			Local_278.f_9 = joaat("s_m_m_trucker_01");
			break;
		
		case 5:
			Local_155.f_2 = { 3216.512f, -4688.033f, 111.6721f };
			Local_155.f_5 = 268.5004f;
			Local_142.f_2 = { 3259.527f, -4571.694f, 117.1567f };
			Local_142.f_5 = 181.547f;
			Local_168.f_6 = joaat("asea2");
			Local_168.f_2 = { 3212.003f, -4689.323f, 111.6762f };
			Local_168.f_5 = 225.1631f;
			Local_182.f_6 = joaat("mesa2");
			Local_182.f_2 = { 3257.901f, -4689.813f, 111.8699f };
			Local_182.f_5 = 278.2631f;
			Local_297.f_2 = { 3259.571f, -4572.774f, 116.1162f };
			Local_297.f_5 = { -91f, -38f, 0f };
			Local_297.f_1 = joaat("prop_ld_shovel");
			Local_305.f_2 = { 3259.245f, -4573.03f, 116.8103f };
			Local_305.f_5 = { 158f, 0f, 77.4f };
			Local_305.f_1 = joaat("prop_tool_pickaxe");
			Local_313.f_2 = { 3259.734f, -4573.897f, 115.8785f };
			Local_313.f_5 = { 5f, 0f, -180f };
			Local_313.f_1 = joaat("prop_coffin_02");
			break;
		
		case 6:
			Local_129.f_2 = { 3240.778f, -4559.611f, 116.9483f };
			Local_129.f_5 = 92.2719f;
			Local_129.f_6 = joaat("cs_bradcadaver");
			Local_155.f_2 = { 3258.16f, -4572.49f, 117.16f };
			Local_155.f_5 = 180f;
			Local_155.f_7 = { 0f, 0f, 0f };
			Local_142.f_2 = { 3257.53f, -4574.04f, 117.16f };
			Local_142.f_5 = 0f;
			Local_142.f_7 = { 0f, 0f, 0f };
			Local_168.f_6 = joaat("asea2");
			Local_168.f_2 = { 3211.34f, -4688.485f, 111.7328f };
			Local_168.f_5 = 222.9433f;
			Local_182.f_6 = joaat("mesa2");
			Local_182.f_2 = { 3257.901f, -4689.813f, 111.8699f };
			Local_182.f_5 = 278.2631f;
			Local_297.f_2 = { 3259.571f, -4572.774f, 116.1162f };
			Local_297.f_5 = { -91f, -38f, 0f };
			Local_297.f_1 = joaat("prop_ld_shovel");
			Local_305.f_2 = { 3259.245f, -4573.03f, 116.8103f };
			Local_305.f_5 = { 158f, 0f, 77.4f };
			Local_305.f_1 = joaat("prop_tool_pickaxe");
			Local_313.f_2 = { 3259.734f, -4573.897f, 115.8785f };
			Local_313.f_5 = { 5f, 0f, -180f };
			Local_313.f_1 = joaat("prop_coffin_02");
			break;
		
		case 7:
			Local_129.f_2 = { 3240.778f, -4559.611f, 116.9483f };
			Local_129.f_5 = 92.2719f;
			Local_129.f_6 = joaat("cs_bradcadaver");
			Local_155.f_2 = { 3256.47f, -4575.113f, 117.1567f };
			Local_155.f_5 = 273.8974f;
			Local_155.f_7 = { 3248.886f, -4687.963f, 114.841f };
			Local_168.f_6 = joaat("asea2");
			Local_168.f_2 = { 3211.34f, -4688.485f, 111.7328f };
			Local_168.f_5 = 222.9433f;
			Local_297.f_2 = { 3259.571f, -4572.774f, 116.1162f };
			Local_297.f_5 = { -91f, -38f, 0f };
			Local_297.f_1 = joaat("prop_ld_shovel");
			Local_305.f_2 = { 3259.245f, -4573.03f, 116.8103f };
			Local_305.f_5 = { 158f, 0f, 77.4f };
			Local_305.f_1 = joaat("prop_tool_pickaxe");
			Local_313.f_2 = { 3259.734f, -4573.897f, 115.8785f };
			Local_313.f_5 = { 5f, 0f, -180f };
			Local_313.f_1 = joaat("prop_coffin_02");
			Local_2165[0 /*14*/].f_2 = { 3304.86f, -4641.48f, 113.08f };
			Local_2165[0 /*14*/].f_5 = 27.521f;
			Local_2165[0 /*14*/].f_6 = iLocal_55;
			Local_2165[0 /*14*/].f_7 = 12;
			Local_2165[1 /*14*/].f_2 = { 3242.78f, -4673.15f, 113.18f };
			Local_2165[1 /*14*/].f_5 = 53.3085f;
			Local_2165[1 /*14*/].f_6 = iLocal_55;
			Local_2165[1 /*14*/].f_7 = 13;
			Local_2165[2 /*14*/].f_2 = { 3259.67f, -4690.98f, 112.69f };
			Local_2165[2 /*14*/].f_5 = 303.13f;
			Local_2165[2 /*14*/].f_6 = iLocal_55;
			Local_2165[3 /*14*/].f_2 = { 3254.34f, -4683.82f, 112.67f };
			Local_2165[3 /*14*/].f_5 = 249.15f;
			Local_2165[3 /*14*/].f_6 = iLocal_55;
			Local_2165[4 /*14*/].f_2 = { 3235.721f, -4835.266f, 110.8135f };
			Local_2165[4 /*14*/].f_5 = 84.1679f;
			Local_2165[4 /*14*/].f_6 = iLocal_55;
			Local_2165[4 /*14*/].f_7 = 15;
			Local_278.f_2 = 23;
			Local_278.f_3 = { 3154.38f, -4698.16f, 111.63f };
			Local_278.f_6 = joaat("freight");
			Local_278.f_7 = joaat("freightcar");
			Local_278.f_8 = joaat("freightcont1");
			Local_278.f_9 = joaat("s_m_m_trucker_01");
			break;
		
		case 8:
			Local_155.f_2 = { 3217.397f, -4687.558f, 111.7128f };
			Local_155.f_5 = 94.6391f;
			Local_168.f_6 = joaat("asea2");
			Local_168.f_2 = { 3211.34f, -4688.485f, 111.7328f };
			Local_168.f_5 = 222.9433f;
			break;
		
		case 9:
			Local_142.f_2 = { -4568.295f, 4981.715f, 136.762f };
			Local_142.f_5 = 259.5159f;
			Local_196.f_6 = joaat("cuban800");
			Local_196.f_2 = { -4568.295f, 4981.715f, 136.762f };
			Local_196.f_5 = 259.5159f;
			Local_196.f_7 = 8;
			Local_182.f_6 = GlobalFunc_4931(2, 0);
			Local_182.f_2 = { 1747.327f, 3294.023f, 40.1071f };
			Local_182.f_5 = 84.1211f;
			break;
		
		case 10:
			Local_142.f_2 = { 1725.064f, 3304.455f, 40.2237f };
			Local_142.f_5 = 345.1909f;
			Local_196.f_6 = joaat("cuban800");
			Local_196.f_2 = { 1732.376f, 3306.662f, 40.2237f };
			Local_196.f_5 = 14.8253f;
			Local_182.f_6 = GlobalFunc_4931(2, 0);
			Local_182.f_2 = { 1747.327f, 3294.023f, 40.1071f };
			Local_182.f_5 = 84.1211f;
			break;
	}
}



void func_778()//Position - 0x7547D
{
	if (iLocal_706 == 1)
	{
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		PAD::DISABLE_CONTROL_ACTION(1, 0, 1);
		PAD::DISABLE_CONTROL_ACTION(1, 26, 1);
		PAD::DISABLE_CONTROL_ACTION(1, 79, 1);
		if (iLocal_705 != 0)
		{
			if (GlobalFunc_2521(2000, iLocal_705))
			{
				iLocal_706 = 0;
			}
			else if (GlobalFunc_2521(1700, iLocal_705))
			{
				if (iLocal_598 == 0)
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_598 = 1;
				}
			}
		}
	}
}


void func_780(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x75505
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 8:
			break;
		
		case 7:
			switch (*uParam3)
			{
				case 0:
					func_686(0);
					func_686(1);
					*uParam3++;
					break;
				
				case 1:
					if (iParam1 == 1)
					{
						func_39(0);
						func_39(1);
						Local_2727[0 /*6*/].f_5 = 0;
						Local_2727[1 /*6*/].f_5 = 0;
						*uParam3++;
					}
					break;
				
				case 2:
					if (iParam2 == 1)
					{
						func_781(0, 0.075f, 0.05f);
						func_781(1, 0.075f, 0.05f);
						if (Local_2727[0 /*6*/].f_5 == 1 && Local_2727[1 /*6*/].f_5 == 1)
						{
							*uParam3++;
						}
					}
					break;
				
				case 3:
					func_686(0);
					func_686(1);
					*uParam3++;
					break;
			}
			break;
	}
}

void func_781(int iParam0, float fParam1, float fParam2)//Position - 0x755FA
{
	float fVar0;
	
	if (Local_2727[iParam0 /*6*/].f_5 == 0)
	{
		fVar0 = OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Local_2727[iParam0 /*6*/]);
		if (fVar0 <= -fParam2 || fVar0 >= fParam2)
		{
			if (fVar0 > 0f)
			{
				fVar0 = (fVar0 - fParam1);
			}
			else if (fVar0 < 0f)
			{
				fVar0 = (fVar0 + fParam1);
			}
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_2727[iParam0 /*6*/], fVar0, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_2727[iParam0 /*6*/], 1, 0, 1);
			MISC::CLEAR_AREA_OF_OBJECTS(Local_2727[iParam0 /*6*/].f_1, 2f, 0);
		}
		else
		{
			fVar0 = 0f;
			OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Local_2727[iParam0 /*6*/], fVar0, 0, 0);
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Local_2727[iParam0 /*6*/], 1, 0, 1);
			Local_2727[iParam0 /*6*/].f_5 = 1;
		}
	}
}

void func_782(int iParam0, var uParam1)//Position - 0x756AA
{
	if (*iParam0 != 11 && *iParam0 != 12)
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING() && !GlobalFunc_579())
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_168))
			{
				if (iLocal_739[1] == 1)
				{
					if (GlobalFunc_2226(&Local_168))
					{
						*uParam1 = 1;
						*iParam0 = 12;
					}
					if (*iParam0 == 4)
					{
						if (func_784(Local_168, &iLocal_566, 4000))
						{
							*uParam1 = 1;
							*iParam0 = 12;
						}
					}
				}
				if (iLocal_739[2] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 1))
					{
						*uParam1 = 2;
						*iParam0 = 12;
					}
				}
				if (iLocal_739[3] == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_168, 0))
					{
						if (*iParam0 == 7)
						{
							if (!func_363(PLAYER::PLAYER_PED_ID(), 3263.05f, -4704.67f, 104.67f, 3267.14f, -4561.37f, 132.76f, 64f))
							{
								if (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), Local_168, 1) > 90f)
								{
									*uParam1 = 3;
									*iParam0 = 12;
								}
							}
							if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3165.78f, -4700.698f, 113.6234f, 16f, 16f, 3f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3287.109f, -4719.236f, 113.7763f, 16f, 16f, 3f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3257.56f, -4712.963f, 111.1719f, 3273.731f, -4714.458f, 116.7053f, 18f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3229.478f, -4768.597f, 110.5003f, 3308.396f, -4775.955f, 124.7181f, 100f, 0, 1, 0))
							{
								*uParam1 = 3;
								*iParam0 = 12;
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(func_833(0)))
						{
							if (GlobalFunc_156(func_833(0), Local_168, 1) > 90f)
							{
								*uParam1 = 3;
								*iParam0 = 12;
							}
						}
					}
				}
				if (iLocal_739[4] == 1)
				{
					if (*iParam0 == 4)
					{
						if (iLocal_599 == 1)
						{
							*uParam1 = 4;
							*iParam0 = 12;
						}
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3122.884f, -4705.448f, 110.7032f, 3107.736f, -4895.833f, 130.591f, 64f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3165.753f, -4756.501f, 110.1092f, 3167.851f, -4733.837f, 119.108f, 32f, 0, 1, 0))
						{
							*uParam1 = 4;
							*iParam0 = 12;
						}
					}
				}
				if (iLocal_739[5] == 1)
				{
					if (*iParam0 == 5)
					{
						if (!func_363(PLAYER::PLAYER_PED_ID(), 3263.05f, -4704.67f, 104.67f, 3267.14f, -4561.37f, 132.76f, 64f))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_168.f_2, 1) > 90f)
							{
								*uParam1 = 5;
								*iParam0 = 12;
							}
						}
						if (((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3165.78f, -4700.7f, 113.62f, 16f, 16f, 3f, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 3287.11f, -4719.23f, 113.77f, 16f, 16f, 3f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3257.56f, -4712.96f, 111.17f, 3273.73f, -4714.45f, 116.7f, 18f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 3229.478f, -4768.597f, 110.5003f, 3308.396f, -4775.955f, 124.7181f, 100f, 0, 1, 0))
						{
							*uParam1 = 5;
							*iParam0 = 12;
						}
					}
				}
				if (iLocal_739[6] == 1)
				{
					if (*iParam0 == 7)
					{
						if (!func_376(PLAYER::PLAYER_PED_ID(), 3255.413f, -4628.321f, 125.9179f, 58f, 78f, 16f))
						{
							*uParam1 = 6;
							*iParam0 = 12;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_182))
			{
				if (iLocal_739[7] == 1)
				{
					if (GlobalFunc_2226(&Local_182))
					{
						*uParam1 = 7;
						*iParam0 = 12;
					}
				}
				if (iLocal_739[8] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_182, 1))
					{
						*uParam1 = 8;
						*iParam0 = 12;
					}
				}
				if (iLocal_739[9] == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_182, 0))
					{
						if (GlobalFunc_156(func_833(2), Local_182, 1) > 100f)
						{
							*uParam1 = 9;
							*iParam0 = 12;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_196))
			{
				if (iLocal_739[10] == 1)
				{
					if (func_783(&Local_196, 7000, 30000, 15000, 20000))
					{
						*uParam1 = 10;
						*iParam0 = 12;
					}
				}
				if (iLocal_739[11] == 1)
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_196, 1))
					{
						*uParam1 = 11;
						*iParam0 = 12;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_155))
			{
				if (iLocal_739[12] == 1)
				{
					if (PED::IS_PED_INJURED(Local_155))
					{
						*uParam1 = 12;
						*iParam0 = 12;
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_142))
			{
				if (iLocal_739[13] == 1)
				{
					if (PED::IS_PED_INJURED(Local_142))
					{
						*uParam1 = 13;
						*iParam0 = 12;
					}
				}
			}
		}
	}
}

int func_783(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x75BA9
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 0, iParam1) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 3, iParam2)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 2, iParam3)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*iParam0, 1, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_784(int iParam0, var uParam1, int iParam2)//Position - 0x75BFE
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			iVar0 = ENTITY::GET_LAST_MATERIAL_HIT_BY_ENTITY(iParam0);
			switch (iVar0)
			{
				case -1937569590:
				case -878560889:
				case 1619704960:
				case 1550304810:
					if ((!VEHICLE::IS_VEHICLE_STOPPED(iParam0) && ENTITY::GET_ENTITY_SPEED(iParam0) < 2f) || (VEHICLE::IS_VEHICLE_STOPPED(iParam0) && (SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 71) * 255f)) >= 250 || SYSTEM::ROUND((PAD::GET_CONTROL_NORMAL(0, 72) * 255f)) >= 250)))
					{
						if (*uParam1 == 0)
						{
							*uParam1 = MISC::GET_GAME_TIMER();
						}
						else if (GlobalFunc_2521(iParam2, *uParam1))
						{
							return 1;
						}
					}
					else
					{
						*uParam1 = 0;
					}
					break;
				
				default:
					*uParam1 = 0;
					break;
				}
			}
	}
	return 0;
}



































void func_819(int iParam0, var uParam1, var uParam2)//Position - 0x7A710
{
	if (iParam0 == 0)
	{
		*uParam1 = 1;
		*uParam2 = 0;
	}
	else if (iParam0 == 2)
	{
		*uParam1 = 0;
		*uParam2 = 1;
	}
}

int func_820(int iParam0)//Position - 0x7A737
{
	var uVar0;
	var uVar1;
	
	if (iParam0 == 10)
	{
		return 10;
	}
	if (iParam0 == 1)
	{
		return 3;
	}
	uVar1 = iParam0 + 1;
	uVar0 = uVar1;
	return uVar0;
}



void func_823(var uParam0, int iParam1)//Position - 0x7A797
{
	if (iParam1 == 0)
	{
		*uParam0 = 1;
	}
	else if (iParam1 == 1)
	{
		*uParam0 = 2;
	}
	else if (iParam1 == 2)
	{
		*uParam0 = 4;
	}
	else if (iParam1 == 3)
	{
		*uParam0 = 5;
	}
	else if (iParam1 == 4)
	{
		*uParam0 = 7;
	}
	else if (iParam1 == 5)
	{
		*uParam0 = 9;
	}
	bLocal_579 = true;
}





void func_828()//Position - 0x7A897
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(1);
	GlobalFunc_5105();
	GlobalFunc_4935();
	GlobalFunc_2535(&uLocal_755, &uLocal_634);
	GlobalFunc_2910(sLocal_53, &uLocal_762, &uLocal_635);
	GlobalFunc_7139(&Local_365, 0);
	CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	CAM::DESTROY_ALL_CAMS(0);
	if (iLocal_696 == 1)
	{
		RECORDING::_0x81CBAE94390F9F89();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::SET_PLAYER_ANGRY(PLAYER::PLAYER_PED_ID(), 0);
		AUDIO::STOP_PED_SPEAKING(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (iLocal_583 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_833(0)))
		{
			if (!PED::IS_PED_INJURED(func_833(0)))
			{
				func_691();
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_833(2)))
		{
			if (!PED::IS_PED_INJURED(func_833(2)))
			{
				GlobalFunc_11318(func_833(2));
			}
		}
		iLocal_583 = 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_129))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_129))
		{
			PED::SET_PED_KEEP_TASK(Local_129, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&Local_129);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_168))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_168))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_168, true, 0);
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_168) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_168, 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_168);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_182))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_182))
		{
			VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_182, true, 0);
			if (iLocal_624 == 0)
			{
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_182) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_182, 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_182);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_196))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_196))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(Local_196) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Local_196, 1))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Local_196);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_278))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_278))
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				VEHICLE::DELETE_MISSION_TRAIN(&Local_278);
			}
			else
			{
				VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&Local_278, 0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_210))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_210);
	}
	if (HUD::DOES_BLIP_EXIST(Local_155.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_155.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_142.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_142.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_168.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_168.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_182.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_182.f_1));
	}
	if (HUD::DOES_BLIP_EXIST(Local_196.f_1))
	{
		HUD::REMOVE_BLIP(&(Local_196.f_1));
	}
	func_195(&Local_1242, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&Local_1400, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&Local_1347, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&Local_1479, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&Local_1716, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&Local_1663, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&Local_1532, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&Local_1822, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&Local_1769, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&Local_1927, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&Local_2006, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&Local_2059, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_195(&iLocal_2112, CAM::IS_SCREEN_FADED_OUT(), 0, 1);
	func_194(&Local_2165, CAM::IS_SCREEN_FADED_OUT(), 0, 0);
	GlobalFunc_2943(&Local_289, 0);
	GlobalFunc_2943(&Local_313, 0);
	GlobalFunc_2943(&Local_297, 0);
	GlobalFunc_2943(&Local_305, 0);
	GlobalFunc_2529(&iLocal_697);
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_677))
	{
		OBJECT::REMOVE_PICKUP(uLocal_677);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_678))
	{
		OBJECT::REMOVE_PICKUP(uLocal_678);
	}
	if (OBJECT::DOES_PICKUP_EXIST(uLocal_679))
	{
		OBJECT::REMOVE_PICKUP(uLocal_679);
	}
	HUD::DISPLAY_HUD(1);
	HUD::DISPLAY_RADAR(1);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(0, 0), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(GlobalFunc_4931(2, 0), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("taxi"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("asea2"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("mesa2"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeold1"), 0);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeold2"), 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_54, 0);
	GlobalFunc_2224(0);
	GlobalFunc_7632(0);
	GlobalFunc_563(0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PED::SET_CREATE_RANDOM_COPS(1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::ENABLE_DISPATCH_SERVICE(1, 1);
	MISC::ENABLE_DISPATCH_SERVICE(2, 1);
	MISC::ENABLE_DISPATCH_SERVICE(3, 1);
	MISC::ENABLE_DISPATCH_SERVICE(4, 1);
	MISC::ENABLE_DISPATCH_SERVICE(5, 1);
	AUDIO::STOP_SOUND(uLocal_631);
	AUDIO::RELEASE_SOUND_ID(uLocal_631);
	AUDIO::STOP_SOUND(uLocal_632);
	AUDIO::RELEASE_SOUND_ID(uLocal_632);
	AUDIO::STOP_SOUND(uLocal_630);
	AUDIO::RELEASE_SOUND_ID(uLocal_630);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(5526.24f, -5137.23f, 61.78925f, 3679.327f, -4973.879f, 125.0828f, 192f, 0, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(3691.211f, -4941.24f, 94.59368f, 3511.115f, -4869.191f, 126.7621f, 16f, 0, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(3510.004f, -4865.81f, 94.69557f, 3204.424f, -4833.817f, 126.8152f, 16f, 0, 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(3186.534f, -4832.798f, 109.8148f, 3202.187f, -4833.993f, 114.815f, 16f, 0, 0, 1);
	STREAMING::REMOVE_PTFX_ASSET();
	STREAMING::REMOVE_ANIM_DICT("missmic1ig_2");
	STREAMING::REMOVE_ANIM_DICT("missmic1ig_3_patrol");
	STREAMING::REMOVE_ANIM_DICT("missmic1ig_zero_hit_wheel");
	STREAMING::REMOVE_ANIM_DICT("missmic1leadinoutmic_1_mcs_2");
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("Prologue_Sounds");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\FBI_HEIST_3B_SHOOTOUT");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::STOP_STREAM();
	AUDIO::STOP_AUDIO_SCENES();
	AUDIO::TRIGGER_MUSIC_EVENT("MIC1_FAIL");
	AUDIO::CANCEL_MUSIC_EVENT("MIC1_ARRIVED_CHURCH");
	AUDIO::CANCEL_MUSIC_EVENT("MIC1_SHOOTOUT_START");
	AUDIO::CANCEL_MUSIC_EVENT("MIC1_1ST_VAN");
	AUDIO::CANCEL_MUSIC_EVENT("MIC1_ALERTED");
	AUDIO::CANCEL_MUSIC_EVENT("MIC1_KIDNAPPED");
	if ((iLocal_639 == 1 || iLocal_640 == 1) || iLocal_641 == 1)
	{
		MISC::CLEAR_WEATHER_TYPE_PERSIST();
	}
	GlobalFunc_52(1, 1);
	func_690();
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	GlobalFunc_699();
	GlobalFunc_2790(4, 0, 1);
	VEHICLE::SET_RANDOM_TRAINS(1);
	PATHFIND::_SET_ALL_PATHS_CACHE_BOUNDINGSTRUCT(0);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	PLAYER::RESET_WORLD_BOUNDARY_FOR_PLAYER();
	TASK::REMOVE_ALL_COVER_BLOCKING_AREAS();
	if (GlobalFunc_2567(0))
	{
		GlobalFunc_601(0, 0);
	}
	if (GlobalFunc_2567(20))
	{
		GlobalFunc_601(20, 0);
	}
	if (GlobalFunc_2567(5))
	{
		GlobalFunc_601(5, 0);
	}
	VEHICLE::_0x35E0654F4BAD7971(1);
	AUDIO::SET_AUDIO_FLAG("DisableReplayScriptStreamRecording", 0);
}





int func_833(int iParam0)//Position - 0x7B080
{
	if (GlobalFunc_8315() == iParam0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return iLocal_321[GlobalFunc_237(iParam0)];
}

