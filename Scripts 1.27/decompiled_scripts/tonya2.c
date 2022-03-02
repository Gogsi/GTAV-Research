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
	struct<3> Local_87[8];
	struct<3> Local_112[1];
	var uLocal_116 = 0;
	struct<7> Local_117 = { 6, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_124 = { 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_135 = { 0, 0, 0 } ;
	struct<165> Local_138 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	char cLocal_314[16] = "";
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	char cLocal_318[16] = "";
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	struct<3> Local_322[12];
	char cLocal_359[32] = "";
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 1132396544;
	var uLocal_370 = 1132396544;
	var uLocal_371 = 1132396544;
	var uLocal_372 = 0;
	var uLocal_373 = -1082130432;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 8;
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
	var uLocal_433 = -1;
	var uLocal_434 = 1092616192;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	bool bLocal_437 = 0;
	int iLocal_438 = 0;
	int iLocal_439 = 0;
	int iLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = -1;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 1000;
	var uLocal_451 = 1000;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 1097859072;
	var uLocal_457 = 1500;
	var uLocal_458 = 45;
	var uLocal_459 = 1103626240;
	var uLocal_460 = 5;
	int iLocal_461 = 0;
	int iLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	int iLocal_468 = 0;
	bool bLocal_469 = 0;
	float fLocal_470 = 0f;
	float fLocal_471 = 0f;
	float fLocal_472 = 0f;
	float fLocal_473 = 0f;
	float fLocal_474 = 0f;
	float fLocal_475 = 0f;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	struct<3> Local_479 = { 0, 0, 0 } ;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	bool bLocal_484 = 0;
	int iLocal_485 = 0;
	bool bLocal_486 = 0;
	int iLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	int iLocal_494 = 0;
	int iLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	int iLocal_499 = 0;
	var uLocal_500 = 0;
	int iLocal_501 = 0;
	int iLocal_502 = 0;
	bool bLocal_503 = 0;
	int iLocal_504 = 0;
	int iLocal_505 = 0;
	bool bLocal_506 = 0;
	int iLocal_507 = 0;
	int iLocal_508 = 0;
	bool bLocal_509 = 0;
	bool bLocal_510 = 0;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	int iLocal_513 = 0;
	int iLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	int iLocal_518 = 0;
	struct<6> Local_519 = { 0, 0, 0, 0, 0, 0 } ;
	char* sLocal_525 = NULL;
	var uLocal_526 = 16;
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
	int iLocal_691 = 0;
	struct<23> Local_692[53];
	struct<28> Local_1912[17];
	var uLocal_2389 = 0;
	struct<165> Local_2390 = { 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
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
	struct<3> Local_2573 = { 0, 0, 0 } ;
	float fLocal_2576 = 0f;
	var uLocal_2577 = 0;
	var uLocal_2578 = 0;
	var uLocal_2579 = 0;
	var uLocal_2580 = 0;
	var uLocal_2581 = 0;
	var uLocal_2582 = 0;
	var uLocal_2583 = 0;
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
	struct<18> Local_2598[2];
	var uLocal_2635 = 0;
	var uLocal_2636 = 0;
	var uLocal_2637 = 0;
	int iLocal_2638 = 0;
	int iLocal_2639 = 0;
	int iLocal_2640 = 0;
	int iLocal_2641 = 0;
	float fLocal_2642 = 0f;
	int iLocal_2643 = 0;
	bool bLocal_2644 = 0;
	int iLocal_2645 = 0;
	int iLocal_2646 = 0;
	int iLocal_2647 = 0;
	int iLocal_2648 = 0;
	var uLocal_2649 = 0;
	char* sLocal_2650 = NULL;
	char* sLocal_2651 = NULL;
	char[] cLocal_2652[8] = 0;
	char* sLocal_2653[3] = { NULL, NULL, NULL };
	char* sLocal_2657 = NULL;
	struct<3> Local_2658[1];
	struct<3> Local_2662 = { 0, 0, 0 } ;
	struct<3> Local_2665 = { 0, 0, 0 } ;
	struct<3> Local_2668 = { 0, 0, 0 } ;
	var uLocal_2671 = 7;
	var uLocal_2672 = 0;
	var uLocal_2673 = 0;
	var uLocal_2674 = 0;
	var uLocal_2675 = 0;
	var uLocal_2676 = 0;
	var uLocal_2677 = 0;
	var uLocal_2678 = 0;
	var uLocal_2679 = 7;
	var uLocal_2680 = 0;
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	bool bLocal_2687 = 0;
	int iLocal_2688 = 0;
	int iLocal_2689 = 0;
	int iLocal_2690 = 0;
	int iLocal_2691 = 0;
	int iLocal_2692 = 0;
	int iLocal_2693 = 0;
	bool bLocal_2694 = 0;
	bool bLocal_2695 = 0;
	bool bLocal_2696 = 0;
	int iLocal_2697 = 0;
	bool bLocal_2698 = 0;
	bool bLocal_2699 = 0;
	var uLocal_2700 = 0;
	bool bLocal_2701 = 0;
	int iLocal_2702 = 0;
	bool bLocal_2703 = 0;
	int iLocal_2704 = 0;
	int iLocal_2705 = 0;
	bool bLocal_2706 = 0;
	int iLocal_2707 = 0;
	int iLocal_2708 = 0;
	int iLocal_2709 = 0;
	bool bLocal_2710 = 0;
	bool bLocal_2711 = 0;
	bool bLocal_2712 = 0;
	int iLocal_2713 = 0;
	int iLocal_2714 = 0;
	bool bLocal_2715 = 0;
	bool bLocal_2716 = 0;
	int iLocal_2717 = 0;
	bool bLocal_2718 = 0;
	bool bLocal_2719 = 0;
	bool bLocal_2720 = 0;
	bool bLocal_2721 = 0;
	int iLocal_2722 = 0;
	var uLocal_2723 = 0;
	int iLocal_2724 = 0;
	int iLocal_2725 = 0;
	int iLocal_2726 = 0;
	int iLocal_2727 = 0;
	int iLocal_2728 = 0;
	int iLocal_2729 = 0;
	bool bLocal_2730 = 0;
	var uLocal_2731 = 0;
	bool bLocal_2732 = 0;
	int iLocal_2733 = 0;
	int iLocal_2734 = 0;
	bool bLocal_2735 = 0;
	int iLocal_2736 = 0;
	int iLocal_2737 = 0;
	int iLocal_2738 = 0;
	bool bLocal_2739 = 0;
	int iLocal_2740 = 0;
	bool bLocal_2741 = 0;
	int iLocal_2742 = 0;
	int iLocal_2743 = 0;
	int iLocal_2744 = 0;
	bool bLocal_2745 = 0;
	int iLocal_2746 = 0;
	int iLocal_2747 = 0;
	int iLocal_2748 = 0;
	int iLocal_2749 = 0;
	int iLocal_2750 = 0;
	int iLocal_2751 = 0;
	int iLocal_2752 = 0;
	int iLocal_2753 = 0;
	int iLocal_2754 = 0;
	int iLocal_2755 = 0;
	int iLocal_2756 = 0;
	int iLocal_2757 = 0;
	int iLocal_2758 = 0;
	int iLocal_2759 = 0;
	int iLocal_2760 = 0;
	struct<3> Local_2761 = { 2, 0, 0 } ;
	int iLocal_2764 = 0;
	int iLocal_2765 = 0;
	var uLocal_2766 = 0;
	var uLocal_2767 = 0;
	var uLocal_2768 = 0;
	int iLocal_2769[1] = { 0 };
	var uLocal_2771[2] = { 0, 0 };
	int iLocal_2774 = 0;
	struct<2> Local_2775 = { 0, 0 } ;
	var uLocal_2777 = 0;
	struct<20> Local_2778[1];
	struct<7> Local_2799 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2806 = 0;
	var uLocal_2807 = 0;
	var uLocal_2808 = 0;
	var uLocal_2809 = 0;
	var uLocal_2810 = 0;
	var uLocal_2811 = 0;
	var uLocal_2812 = 0;
	var uLocal_2813 = 0;
	var uLocal_2814 = 0;
	var uLocal_2815 = 0;
	var uLocal_2816 = 0;
	var uLocal_2817 = 0;
	var uLocal_2818 = 0;
	int iLocal_2819 = 0;
	int iLocal_2820 = 0;
	int iLocal_2821 = 0;
	int iLocal_2822 = 0;
	int iLocal_2823 = 0;
	var uLocal_2824 = 0;
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	int iLocal_2829 = 0;
	var uLocal_2830 = 0;
	var uLocal_2831 = 0;
	int iLocal_2832 = 0;
	var uLocal_2833 = 0;
	int iLocal_2834 = 0;
	int iLocal_2835 = 0;
	int iLocal_2836 = 0;
	var uLocal_2837 = 0;
	int iLocal_2838 = 0;
	int iLocal_2839 = 0;
	int iLocal_2840 = 0;
	var uLocal_2841 = 0;
	var uLocal_2842 = 0;
	var uLocal_2843 = 0;
	var uLocal_2844 = 0;
	var uLocal_2845 = 0;
	var uLocal_2846 = 0;
	struct<3> Local_2847 = { 0, 0, 0 } ;
	struct<3> Local_2850 = { 0, 0, 0 } ;
	struct<3> Local_2853 = { 0, 0, 0 } ;
	float fLocal_2856 = 0f;
	struct<3> Local_2857 = { 0, 0, 0 } ;
	float fLocal_2860 = 0f;
	float fLocal_2861 = 0f;
	char cLocal_2862[64] = "";
	var uLocal_2870 = 0;
	var uLocal_2871 = 0;
	var uLocal_2872 = 0;
	var uLocal_2873 = 0;
	var uLocal_2874 = 0;
	var uLocal_2875 = 0;
	var uLocal_2876 = 0;
	var uLocal_2877 = 0;
	struct<6> Local_2878 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_2884 = 0;
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
	var uLocal_2898 = 0;
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
	var uLocal_2925 = 0;
	var uLocal_2926 = 0;
	var uLocal_2927 = 0;
	var uLocal_2928 = 0;
	var uLocal_2929 = 0;
	var uLocal_2930 = 0;
	var uLocal_2931 = 0;
	var uLocal_2932 = 0;
	int iLocal_2933 = 0;
	int iLocal_2934 = 0;
	int iLocal_2935 = 0;
	var uLocal_2936 = 0;
	var uLocal_2937 = 0;
	var uLocal_2938 = 0;
	char* sLocal_2939 = NULL;
	int iLocal_2940 = 0;
	var uLocal_2941 = 0;
	int iLocal_2942 = 0;
	int iLocal_2943 = 0;
	int iLocal_2944 = 0;
	int iLocal_2945 = 0;
	int iLocal_2946 = 0;
	var uLocal_2947 = 0;
	var uLocal_2948 = 0;
	var uLocal_2949 = 0;
	var uLocal_2950 = 0;
	var uLocal_2951 = 0;
	var uLocal_2952 = 8;
	var uLocal_2953 = 0;
	var uLocal_2954 = 0;
	var uLocal_2955 = 0;
	var uLocal_2956 = 0;
	var uLocal_2957 = 0;
	var uLocal_2958 = 0;
	var uLocal_2959 = 0;
	var uLocal_2960 = 0;
	struct<8> Local_2961[2];
	int iLocal_2978 = 0;
	int iLocal_2979 = 0;
	int iLocal_2980 = 0;
	struct<61> Local_2981 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3042 = 15;
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
	var uLocal_3069 = 0;
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
	var uLocal_3096 = 0;
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
	var uLocal_3126 = 0;
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
	var uLocal_3153 = 0;
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
	var uLocal_3183 = 0;
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
	var uLocal_3210 = 0;
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
	var uLocal_3240 = 0;
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
	var uLocal_3267 = 0;
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
	var uLocal_3297 = 0;
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
	var uLocal_3315 = 1;
	int iLocal_3316 = 0;
	int iLocal_3317 = 0;
	int iLocal_3318 = 0;
	char* sLocal_3319 = NULL;
	struct<8> Local_3320 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_3328 = 0;
	int iLocal_3329 = 0;
	var uLocal_3330 = 0;
	int iLocal_3331 = 0;
	struct<3> Local_3332 = { 0, 0, 0 } ;
	struct<3> Local_3335 = { 0, 0, 0 } ;
	struct<3> Local_3338 = { 0, 0, 0 } ;
	float fLocal_3341 = 0f;
	int iLocal_3342 = 0;
	int iLocal_3343 = 0;
	var uLocal_3344 = 0;
	bool bLocal_3345 = 0;
	int iLocal_3346 = 0;
	int iLocal_3347 = 0;
	int iLocal_3348 = 0;
	bool bLocal_3349 = 0;
	int iLocal_3350 = 0;
	int iLocal_3351 = 0;
	int iLocal_3352 = 0;
	int iLocal_3353 = 0;
	var uLocal_3354 = 0;
	var uLocal_3355 = 0;
	var uLocal_3356 = 0;
	var uLocal_3357 = 0;
	var uLocal_3358 = 0;
	var uLocal_3359 = 0;
	struct<3> Local_3360 = { 0, 0, 0 } ;
	float fLocal_3363 = 0f;
	struct<3> Local_3364 = { 0, 0, 0 } ;
	float fLocal_3367 = 0f;
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
	iLocal_81 = 1;
	iLocal_82 = 65;
	iLocal_83 = 49;
	iLocal_84 = 64;
	Local_135 = { 500f, 500f, 500f };
	fLocal_470 = 0f;
	fLocal_471 = 0f;
	fLocal_472 = 0f;
	fLocal_473 = 0.8f;
	fLocal_474 = 1.5f;
	fLocal_475 = 0.5f;
	Local_479 = { 401.55f, -1631.309f, 29.3f };
	iLocal_482 = 1;
	iLocal_483 = 1;
	iLocal_691 = joaat("towtruck");
	Local_2573 = { -6.80809f, -1465.873f, 29.45427f };
	fLocal_2576 = 275.5635f;
	iLocal_2638 = -1;
	iLocal_2639 = -1;
	iLocal_2640 = -1;
	iLocal_2641 = -1;
	fLocal_2642 = 0f;
	sLocal_2651 = "";
	cLocal_2652 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
	iLocal_2689 = 1;
	iLocal_2690 = 1;
	iLocal_2691 = 1;
	iLocal_2697 = 1;
	iLocal_2819 = -1;
	Local_2847 = { 408.8376f, -1638.952f, 28.2928f };
	Local_2853 = { 405.5971f, -1635.691f, 28.2928f };
	fLocal_2856 = 233.0139f;
	fLocal_2861 = 5f;
	iLocal_2940 = 1;
	sLocal_3319 = "DEFAULT";
	iLocal_3331 = joaat("ig_tonya");
	Local_3332 = { 401.637f, -1633.3f, 28.2928f };
	Local_3335 = { -597.2252f, -886.2328f, 24.4968f };
	Local_3338 = { -16.5304f, -1473.121f, 29.611f };
	fLocal_3341 = 231.5304f;
	Local_3360 = { -10.7897f, -1471.204f, 29.552f };
	fLocal_3363 = 276.1668f;
	Local_3364 = { -14.3934f, -1472.696f, 29.5896f };
	fLocal_3367 = 314.2467f;
	Local_2981 = { ScriptParam_0 };
	GlobalFunc_4945(&Local_2981);
	Local_3320.f_3 = 0;
	Local_3320.f_2 = 1;
	Local_3320.f_6 = 1;
	Local_3320.f_7 = 1;
	iLocal_2765 = Local_2981.f_28[0];
	iLocal_2646 = 18;
	if (!GlobalFunc_2(0))
	{
		Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted = 1;
	}
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		GlobalFunc_143("Force cleanup [TERMINATING]");
		GlobalFunc_10580(1);
		func_654(&uLocal_3042, 1);
		func_638();
	}
	GlobalFunc_5226(59);
	uLocal_2936 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(27.5001f, -640.002f, 414.1398f) - Vector(50f, 50f, 50f), Vector(27.5001f, -640.002f, 414.1398f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	uLocal_2937 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(21.8557f, -1172f, -229.8159f) - Vector(50f, 50f, 50f), Vector(21.8557f, -1172f, -229.8159f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	uLocal_2938 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(53.5258f, -173.7879f, 535.2601f) - Vector(50f, 50f, 50f), Vector(53.5258f, -173.7879f, 535.2601f) + Vector(50f, 50f, 50f), 0, 1, 1, 1);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_3335 - Vector(15f, 15f, 15f), Local_3335 + Vector(15f, 15f, 15f), 0, 1);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(Local_3335 - Vector(15f, 15f, 15f), Local_3335 + Vector(15f, 15f, 15f));
	func_634();
	GlobalFunc_587();
	GlobalFunc_9572();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
	AUDIO::STOP_SCRIPTED_CONVERSATION(1);
	while (true)
	{
		SYSTEM::WAIT(0);
		GlobalFunc_8303(&uLocal_3042);
		RECORDING::_0x208784099002BC30("RC_TON2", 0);
		func_613(Local_2981.f_9, 0, 0, 0, 0, 0);
		PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
		if (func_587())
		{
			iLocal_3316 = 4;
		}
		func_582(&Local_2778, bLocal_510, &Local_2658, &uLocal_2766, &uLocal_2768, &iLocal_2933, iLocal_2940, iLocal_2765);
		if (!iLocal_3350)
		{
			if (GlobalFunc_199())
			{
				iLocal_3342 = GlobalFunc_198();
				if (!Global_84544)
				{
					if (iLocal_3342 == 0)
					{
						GlobalFunc_5116(Local_3360, fLocal_3363, 1, 0);
					}
					else if (iLocal_3342 == 1)
					{
						GlobalFunc_5116(404.1494f, -1630.793f, 28.2928f, 231.5304f, 1, 0);
					}
					else if (iLocal_3342 == 2)
					{
						GlobalFunc_5116(Local_2853, fLocal_2856, 1, 0);
					}
				}
				else if (iLocal_3342 == 0)
				{
					GlobalFunc_5116(404.1494f, -1630.793f, 28.2928f, 231.5304f, 1, 0);
				}
				else if (iLocal_3342 == 1)
				{
					GlobalFunc_5116(404.1494f, -1630.793f, 28.2928f, 231.5304f, 1, 0);
				}
				iLocal_3350 = 1;
			}
			else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_3316 < 2)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 1f);
				}
			}
		}
		uLocal_116 = uLocal_116;
		func_578();
		func_577();
		func_576();
		switch (iLocal_3316)
		{
			case 0:
				func_543();
				break;
			
			case 1:
				func_517();
				break;
			
			case 2:
				func_504();
				break;
			
			case 3:
				if (func_202(&Local_3320, &uLocal_3042))
				{
					func_5();
				}
				break;
			
			case 4:
				func_1();
				break;
			
			case 5:
				func_5();
				break;
		}
	}
}

void func_1()//Position - 0x54E
{
	switch (iLocal_3318)
	{
		case 0:
			AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			if (MISC::ARE_STRINGS_EQUAL(sLocal_3319, "DEFAULT"))
			{
				GlobalFunc_10580(1);
			}
			else
			{
				GlobalFunc_10820(sLocal_3319, 1);
			}
			iLocal_3318 = 1;
			break;
		
		case 1:
			if (GlobalFunc_145())
			{
				func_638();
			}
			break;
	}
}




void func_5()//Position - 0x621
{
	SCRIPT::REQUEST_SCRIPT("ambient_TonyaCall2");
	if (SCRIPT::HAS_SCRIPT_LOADED("ambient_TonyaCall2"))
	{
		GlobalFunc_11330(209, 1);
		SYSTEM::START_NEW_SCRIPT("ambient_TonyaCall2", 1424);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("ambient_TonyaCall2");
		func_638();
	}
}





































































































































































































int func_202(var uParam0, var uParam1)//Position - 0x24D9B
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_6)
	{
		uParam0->f_6 = 0;
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		}
		GlobalFunc_4902(&Local_692);
		GlobalFunc_4901(&Local_1912);
		func_501();
		iVar0 = 0;
		GlobalFunc_7777(&uLocal_2891);
		switch (uParam0->f_2)
		{
			case 1:
				if (uParam0->f_4)
				{
					iLocal_462 = uParam0->f_3;
					if (iVar0 > 0)
					{
						iLocal_2646 = iVar0;
					}
					else
					{
						iLocal_2646 = func_499(100000f, iLocal_462, Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iLastNodeIndex);
					}
				}
				else
				{
					iLocal_462 = uParam0->f_3;
				}
				iLocal_2774 = 0;
				break;
		}
		if (!bLocal_2712)
		{
			GlobalFunc_173(&Local_2390, 4, 0, "TOWDISPATCH", 0, 1);
		}
		if (iLocal_462 == 0)
		{
		}
		else if (iLocal_462 == 2)
		{
			bLocal_2716 = true;
		}
		if (iLocal_462 == 3 || iLocal_462 == 1)
		{
			iLocal_2713 = 1;
			iLocal_2834 = 1;
		}
		else if (iLocal_462 == 4)
		{
			iLocal_2834 = Local_1912[func_497() /*28*/].f_27;
		}
		func_496();
		bLocal_2701 = false;
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iLocal_2933 = uParam0->f_1;
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("towtruck2"))
					{
						iLocal_2933 = iVar1;
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2933, 1, 0);
					}
				}
			}
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2933))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2933, 1, 1);
				VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_2933);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(iLocal_2933, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_2933, 1);
			}
		}
		if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya1")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
		{
			GlobalFunc_4900(&(Local_2961[1 /*8*/]), 0, 1120390349, 0);
			GlobalFunc_4900(&(Local_2961[0 /*8*/]), 0, 1120390349, 0);
			GlobalFunc_4899(&(Local_2961[1 /*8*/]));
			GlobalFunc_4899(&(Local_2961[0 /*8*/]));
			bLocal_2741 = true;
		}
	}
	if (((iLocal_2940 < 15 && iLocal_2940 != 13) && iLocal_2940 != 12) && iLocal_2940 != 11)
	{
		func_492(&iLocal_2933, &uLocal_2766, &Local_2778, &Local_2658, &cLocal_2862, &iLocal_2835, iLocal_2829, bLocal_2711, &iLocal_2717, iLocal_2704, bLocal_2695, bLocal_503, iLocal_2940, 1);
		if (bLocal_509)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_2768))
			{
				HUD::REMOVE_BLIP(&uLocal_2768);
			}
			if ((iLocal_462 == 2 || iLocal_462 == 0) || iLocal_462 == 4)
			{
				if (GlobalFunc_111())
				{
					if (!iLocal_2747)
					{
						Local_2878 = { GlobalFunc_514() };
						if (!iLocal_2753)
						{
							GlobalFunc_5105();
							iLocal_2747 = 1;
						}
					}
				}
				else if (!iLocal_2753)
				{
					if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TONYA_GETOUT", 9, 1, 0, 0))
					{
						iLocal_2753 = 1;
					}
				}
			}
		}
		else
		{
			iLocal_2747 = 0;
			iLocal_2753 = 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_2774)
		{
			case 0:
				if (iLocal_2940 > 2 && iLocal_2940 < 15)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2933, 0))
					{
					}
					if (iLocal_462 != 2 && iLocal_462 != 4)
					{
						if (!func_484(&uLocal_2947, Local_2778[0 /*20*/].f_6, iLocal_2933, &uLocal_2824, &uLocal_2825, bLocal_2701))
						{
							iLocal_2884 = 15;
							func_483();
						}
					}
					if (bLocal_2741)
					{
						func_482(&uLocal_2948, iLocal_2933, &uLocal_2827, &uLocal_2828, bLocal_2701);
					}
				}
				if (bLocal_2712)
				{
					if (iLocal_2940 >= 7)
					{
						if (!bLocal_503)
						{
							func_477(iLocal_2933, Local_2778[0 /*20*/].f_6, Local_2799, &(Local_2778[0 /*20*/].f_8), &Local_2658, &cLocal_2862, &Local_479, bLocal_2712, &iLocal_2765);
						}
					}
				}
				bLocal_2703 = false;
				if (((iLocal_462 == 0 || iLocal_462 == 2) && iLocal_2940 > 4) && iLocal_2940 < 17)
				{
					if (!bLocal_2712)
					{
						if (func_468())
						{
						}
					}
				}
				else if ((iLocal_462 == 1 && iLocal_2940 > 4) && iLocal_2940 < 17)
				{
					if (func_463())
					{
						func_654(uParam1, 1);
					}
					if (iLocal_2944 > 0)
					{
						func_459();
					}
				}
				else if (iLocal_462 == 3)
				{
					if ((iLocal_2940 == 5 && iLocal_2942 < 1) && !iLocal_2688)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2778[0 /*20*/].f_6))
							{
								iLocal_2688 = 1;
								if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
								{
									TASK::CLEAR_PED_TASKS(Local_2778[0 /*20*/]);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2778[0 /*20*/], PLAYER::PLAYER_PED_ID(), 0);
								}
							}
						}
					}
				}
				if (iLocal_2705 && !bLocal_484)
				{
					func_455(&(Local_1912[func_497() /*28*/]), &(Local_1912[func_497() /*28*/].f_10), Local_692[iLocal_2646 /*23*/].f_1, &(Local_2778[0 /*20*/]), &(Local_2778[0 /*20*/].f_2), &uLocal_2771, fLocal_2860, cLocal_2652, &sLocal_2653, iLocal_2834);
				}
				if (iLocal_462 == 4)
				{
					func_453(&uLocal_2941, iLocal_2934, iLocal_2935, iLocal_2933, &(Local_2778[0 /*20*/].f_2), iLocal_2834, cLocal_2652, &sLocal_2653, &iLocal_2765, bLocal_2701, &(Local_2778[0 /*20*/].f_6));
				}
				if (bLocal_484 && !bLocal_2715)
				{
					if (func_445(Local_2778[0 /*20*/], Local_2778[0 /*20*/].f_6, &uLocal_454, &iLocal_461, 0, 1, 1, 1, 0))
					{
						GlobalFunc_4935();
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
						{
							TASK::CLEAR_PED_TASKS(Local_2778[0 /*20*/]);
							PED::SET_PED_KEEP_TASK(Local_2778[0 /*20*/], 1);
							TASK::TASK_SMART_FLEE_PED(Local_2778[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							if (iLocal_461 == 4)
							{
								iLocal_2884 = 19;
							}
							else if (iLocal_461 == 1)
							{
								iLocal_2884 = 20;
							}
							else
							{
								iLocal_2884 = 18;
							}
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_1))
						{
							TASK::CLEAR_PED_TASKS(Local_2778[0 /*20*/].f_1);
							PED::SET_PED_KEEP_TASK(Local_2778[0 /*20*/].f_1, 1);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 1, 256);
							TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
							if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_1))
							{
								TASK::TASK_PERFORM_SEQUENCE(Local_2778[0 /*20*/].f_1, uLocal_463);
							}
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
							if (iLocal_461 == 4)
							{
								iLocal_2884 = 19;
							}
							else
							{
								iLocal_2884 = 18;
							}
						}
						if (!bLocal_2712)
						{
							switch (iLocal_461)
							{
								case 16:
									if (iLocal_462 == 2)
									{
										iLocal_2884 = 17;
										func_483();
									}
									else
									{
										iLocal_2884 = 16;
										func_483();
									}
									break;
							}
						}
						else
						{
							iLocal_2884 = 21;
							func_483();
						}
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
						{
							func_483();
						}
					}
					if (func_445(Local_2778[0 /*20*/].f_1, Local_2778[0 /*20*/].f_6, &uLocal_454, &iLocal_461, 0, 1, 0, 1, 0))
					{
						GlobalFunc_4935();
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_1))
						{
							TASK::CLEAR_PED_TASKS(Local_2778[0 /*20*/].f_1);
							PED::SET_PED_KEEP_TASK(Local_2778[0 /*20*/].f_1, 1);
							TASK::TASK_SMART_FLEE_PED(Local_2778[0 /*20*/].f_1, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
							if (iLocal_461 == 4)
							{
								iLocal_2884 = 19;
							}
							else
							{
								iLocal_2884 = 18;
							}
						}
					}
				}
				else if (bLocal_2715)
				{
				}
				if (!bLocal_2703 && func_443(0))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2933, 0))
					{
						if (!bLocal_510)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/].f_6))
							{
								if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
								{
									GlobalFunc_9571(&uLocal_441, ENTITY::GET_ENTITY_COORDS(Local_2778[0 /*20*/].f_6, 1), 0, 0, 1, 1, 1);
									if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
									{
										if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_FOCUS_CAM_ON_CAR"))
										{
											AUDIO::START_AUDIO_SCENE("TOWING_FOCUS_CAM_ON_CAR");
										}
									}
									else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_FOCUS_CAM_ON_CAR"))
									{
										AUDIO::STOP_AUDIO_SCENE("TOWING_FOCUS_CAM_ON_CAR");
									}
								}
							}
						}
						else
						{
							GlobalFunc_8932(&uLocal_441, Local_2662, 0, 0, 1, 1, 1);
						}
					}
					else
					{
						GlobalFunc_4948(&uLocal_441, 0, 0);
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
					}
				}
				if (!func_443(0))
				{
					GlobalFunc_4948(&uLocal_441, 0, 0);
				}
				func_423(&uLocal_2894, 7f, 1);
				func_422();
				func_421();
				if ((!bLocal_509 || iLocal_2940 >= 15) || uLocal_2700)
				{
					if (func_240(*uParam0, uParam1))
					{
						return 1;
					}
				}
				if (iLocal_2940 == 9)
				{
					func_239();
				}
				if (iLocal_462 == 1)
				{
					if (iLocal_2940 == 9)
					{
						func_218(Local_2390, &Local_2778, &iLocal_2933);
					}
				}
				else if (iLocal_462 == 3)
				{
					if (iLocal_2940 == 7 || iLocal_2940 == 9)
					{
						func_218(Local_2390, &Local_2778, &iLocal_2933);
					}
				}
				break;
		}
		PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(1.5f);
		if (func_203(*uParam0))
		{
			func_483();
		}
		if (bLocal_2687)
		{
		}
	}
	return 0;
}

int func_203(struct<3> Param0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8)//Position - 0x25682
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (bLocal_2720)
	{
		iLocal_2884 = 13;
		return 1;
	}
	if (bLocal_2730)
	{
		iLocal_2884 = 10;
		return 1;
	}
	if (GlobalFunc_490())
	{
		iLocal_2884 = 11;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/].f_6))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_2778[0 /*20*/].f_6, 0, 7000))
			{
				iLocal_2884 = 15;
				return 1;
			}
		}
	}
	if (bLocal_509)
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_2835) > 50000)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
			{
				Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2933, 1) };
			}
			if (SYSTEM::VDIST2(Var0, Var3) > 2500f)
			{
				iLocal_2884 = 0;
				return 1;
			}
		}
	}
	if (bLocal_2698)
	{
		iLocal_2884 = 22;
		return 1;
	}
	if (bLocal_2699)
	{
		iLocal_2884 = 23;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2933))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2933, 0) || func_216())
		{
			iLocal_2884 = 2;
			return 1;
		}
	}
	else
	{
		iLocal_2884 = 2;
		return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2933))
	{
		if (ENTITY::IS_ENTITY_DEAD(iLocal_2933))
		{
			iLocal_2884 = 2;
			return 1;
		}
	}
	switch (Param0.f_2)
	{
		case 1:
			if (iLocal_2940 > 4 && iLocal_2940 < 17)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/].f_6))
				{
					if (ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
					{
						iLocal_2884 = 5;
						return 1;
					}
					else if (func_211())
					{
						return 1;
					}
				}
			}
			if (iLocal_2940 <= 9)
			{
				if (func_204())
				{
					return 1;
				}
			}
			switch (iLocal_462)
			{
				case 3:
				case 1:
				case 0:
					if (bLocal_484)
					{
						if (!bLocal_2715)
						{
							if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/]))
							{
								if (ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
								{
									iLocal_2884 = 8;
									return 1;
								}
							}
						}
					}
					break;
			}
			break;
	}
	if (!VEHICLE::DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(iLocal_2933))
	{
		VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(iLocal_2933);
	}
	else if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(iLocal_2933))
	{
		iLocal_2884 = 4;
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_2933, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_2933, 1, 40000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_2933, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_2933, 3, 30000))
	{
		iLocal_2884 = 4;
		return 1;
	}
	return 0;
}

int func_204()//Position - 0x258F9
{
	if (!bLocal_2706)
	{
		if (GlobalFunc_7084(&uLocal_2900, 180f))
		{
			bLocal_2706 = true;
			GlobalFunc_173(&Local_2390, 4, 0, "TOWDISPATCH", 0, 1);
			GlobalFunc_173(&Local_2390, 4, 0, "TOWDISPATCH", 0, 1);
			GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_DISP3", 9, 0, 0, 0);
		}
	}
	if (!iLocal_2751)
	{
		if (iLocal_2940 == 9)
		{
			if (bLocal_2706)
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_159("TOWT_HELP_TM", -1);
					iLocal_2751 = 1;
				}
			}
		}
	}
	if (GlobalFunc_7084(&uLocal_2900, 300f))
	{
		iLocal_2884 = 14;
		return 1;
	}
	return 0;
}







int func_211()//Position - 0x25A71
{
	bool bVar0;
	bool bVar1;
	char* sVar2;
	
	bVar0 = false;
	bVar1 = false;
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		return 0;
	}
	if (iLocal_462 == 3)
	{
		bVar0 = true;
	}
	if (iLocal_2940 < 9)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		sVar2 = "TOW_DISP_CAR";
	}
	else if (bVar0)
	{
		sVar2 = "TOW_DISP_GAR";
	}
	else
	{
		sVar2 = "TOW_DISP_IMP";
	}
	if (!GlobalFunc_105(Local_2658[0 /*3*/]))
	{
		if (!iLocal_2707)
		{
			if (GlobalFunc_5683(Local_2658[0 /*3*/], 0) > (fLocal_472 + 250f))
			{
				if (!iLocal_2707)
				{
					if (GlobalFunc_111())
					{
						GlobalFunc_5105();
					}
				}
				if (!func_212())
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", sVar2, 9, 0, 0, 0))
					{
						iLocal_2707 = 1;
					}
				}
			}
		}
		if (GlobalFunc_5683(Local_2658[0 /*3*/], 0) > (fLocal_472 + 450f))
		{
			if (func_212())
			{
				iLocal_2884 = 12;
				return 1;
			}
			else
			{
				iLocal_2884 = 11;
				return 1;
			}
		}
	}
	return 0;
}

int func_212()//Position - 0x25B61
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
		{
			if (PED::IS_PED_IN_VEHICLE(Local_2778[0 /*20*/], Local_2778[0 /*20*/].f_6, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}




int func_216()//Position - 0x25C30
{
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 2, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 3, 0)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 1, 0)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 0, 0))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 4, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 5, 0)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 1, 0)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 0, 0))
	{
		return 1;
	}
	if (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 4, 0) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 5, 0)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 2, 0)) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_2933, 3, 0))
	{
		return 1;
	}
	return 0;
}


void func_218(struct<165> Param0, int iParam165, int iParam166)//Position - 0x25CF8
{
	if (!iLocal_505)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (iLocal_2647 > 1)
			{
				if (func_238(iParam165, iParam166))
				{
					if (GlobalFunc_111())
					{
						Local_519 = { GlobalFunc_514() };
						GlobalFunc_5105();
						iLocal_505 = 1;
						iLocal_2647 = 3;
					}
					else
					{
						iLocal_505 = 1;
						iLocal_2647 = 3;
					}
				}
			}
		}
	}
	switch (iLocal_2647)
	{
		case 0:
			if (!GlobalFunc_111())
			{
				SYSTEM::SETTIMERA(0);
				iLocal_2647 = 1;
			}
			break;
		
		case 1:
			if ((SYSTEM::TIMERA() > 3000 && bLocal_510) && !GlobalFunc_663("TOWT_OBJ_04", 0, 0))
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_173(&Param0, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
					{
						if (iLocal_462 == 1)
						{
							GlobalFunc_10618(&Param0, "TOWAUD", "TOW_TRN_C1", 7, 0, 0, 0);
							sLocal_525 = "TOW_TRN_C1";
						}
						else if (iLocal_462 == 3)
						{
							GlobalFunc_10618(&Param0, "TOWAUD", "TOW_BRK_C", 7, 0, 0, 0);
							sLocal_525 = "TOW_BRK_C";
						}
						bLocal_506 = true;
					}
					else if (iLocal_462 == 1)
					{
						if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
						{
							GlobalFunc_173(&Param0, 5, (*iParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
							GlobalFunc_10618(&Param0, "TOWAUD", "TOW_MECH", 7, 0, 0, 0);
							sLocal_525 = "TOW_MECH";
						}
						else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
						{
							GlobalFunc_173(&Param0, 6, (*iParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
							GlobalFunc_10618(&Param0, "TOWAUD", "TOW_MECH2", 7, 0, 0, 0);
							sLocal_525 = "TOW_MECH2";
						}
						else
						{
							func_236(Param0, iParam165);
						}
						bLocal_506 = true;
					}
					else if (iLocal_462 == 3)
					{
						if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
						{
							GlobalFunc_173(&Param0, 5, (*iParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
							GlobalFunc_10618(&Param0, "TOWAUD", "TOW_BRK_CONV", 7, 0, 0, 0);
							sLocal_525 = "TOW_BRK_CONV";
						}
						else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
						{
							GlobalFunc_173(&Param0, 6, (*iParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
							GlobalFunc_10618(&Param0, "TOWAUD", "TOW_BRK_CON2", 7, 0, 0, 0);
							sLocal_525 = "TOW_BRK_CON2";
						}
						else
						{
							func_235(Param0, iParam165);
						}
						bLocal_506 = true;
					}
				}
				else if (GlobalFunc_5672(sLocal_525))
				{
					iLocal_2647 = 2;
				}
			}
			break;
		
		case 3:
			func_232(Param0, iParam165);
			if (iLocal_507)
			{
				iLocal_2647 = 2;
			}
			break;
		
		case 2:
			if (func_231(iParam166))
			{
				if (bLocal_506)
				{
					if (iLocal_505)
					{
						if (!GlobalFunc_111())
						{
							if (GlobalFunc_10626(&Local_2390, "TOWAUD", sLocal_525, &Local_519, 8, 0, 0))
							{
								iLocal_505 = 0;
								iLocal_2647 = 4;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			func_231(iParam166);
			break;
	}
}













int func_231(var uParam0)//Position - 0x2668F
{
	switch (iLocal_2648)
	{
		case 1:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_507 = 0;
				return 1;
			}
			break;
		
		case 2:
			break;
		
		case 4:
			break;
		
		case 6:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
				{
					iLocal_507 = 0;
					return 1;
				}
			}
			break;
	}
	return 0;
}

void func_232(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x26717
{
	switch (iLocal_2648)
	{
		case 1:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("towing")) == 0)
			{
				if (iLocal_462 == 1)
				{
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_SHOCK", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_507 = 1;
						}
					}
				}
				else if (iLocal_462 == 3)
				{
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_SHOCK2", 7, 1, 0, 0))
						{
							PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
							iLocal_507 = 1;
						}
					}
				}
			}
			else if (iLocal_462 == 1)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_SHOCKGEN", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_GENSHOCK", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
			}
			else if (iLocal_462 == 3)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_BRK_SHK", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_BRK_SHK2", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
			}
			break;
		
		case 2:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("towing")) == 0)
			{
				if (iLocal_462 == 1)
				{
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_DAMAGE", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
				else if (iLocal_462 == 3)
				{
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_DAMAGE2", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
			}
			else if (iLocal_462 == 1)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_DAMCAR", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_CARDAM", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
			}
			else if (iLocal_462 == 3)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_BRK_DMG", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_BRK_DMG2", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
			}
			break;
		
		case 4:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("towing")) == 0)
			{
				if (iLocal_462 == 1)
				{
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_HARM", 7, 0, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
				else if (iLocal_462 == 3)
				{
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_HARM_PED", 7, 0, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
			}
			else if (iLocal_462 == 1)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_HARMED", 7, 0, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_HARM2", 7, 0, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
			}
			else if (iLocal_462 == 3)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_BRK_HRM", 7, 0, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_BRK_HRM2", 7, 0, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
			}
			break;
		
		case 6:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("towing")) == 0)
			{
				if (iLocal_462 == 1)
				{
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_DESERT", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
				else if (iLocal_462 == 3)
				{
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_DESERT2", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
			}
			else if (iLocal_462 == 1)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 1)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 5, (*uParam165)[0 /*20*/], "TOWTRAINF", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_DESERTED", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted == 2)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 6, (*uParam165)[0 /*20*/], "TOWILLEGALMAN2", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_DESERTD2", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
			}
			else if (iLocal_462 == 3)
			{
				if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 1)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 5, (*uParam165)[0 /*20*/], "TOWBREAKM", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_BRK_DSRT", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
				else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted == 2)
				{
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 6, (*uParam165)[0 /*20*/], "TOWBREAKHIPM", 0, 1);
					if (!iLocal_507)
					{
						if (GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_BRK_DESR", 7, 1, 0, 0))
						{
							iLocal_507 = 1;
						}
					}
				}
			}
			break;
	}
}



void func_235(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x26F37
{
	int iVar0;
	
	iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 4);
	if (iVar0 == 0)
	{
		GlobalFunc_173(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDA", 0, 1);
		GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_GEN_MCH", 7, 0, 0, 0);
		sLocal_525 = "TOW_GEN_MCH";
	}
	else if (iVar0 == 1)
	{
		GlobalFunc_173(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDB", 0, 1);
		GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_GEN_MCH1", 7, 0, 0, 0);
		sLocal_525 = "TOW_GEN_MCH1";
	}
	else if (iVar0 == 2)
	{
		GlobalFunc_173(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDD", 0, 1);
		GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_GEN_MCH3", 7, 0, 0, 0);
		sLocal_525 = "TOW_GEN_MCH3";
	}
	else if (iVar0 == 3)
	{
		GlobalFunc_173(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDE", 0, 1);
		GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_GEN_MCH4", 7, 0, 0, 0);
		sLocal_525 = "TOW_GEN_MCH4";
	}
}

void func_236(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)//Position - 0x2701D
{
	GlobalFunc_173(&uParam0, 3, (*uParam165)[0 /*20*/], "TOWPEDC", 0, 1);
	GlobalFunc_10618(&uParam0, "TOWAUD", "TOW_GEN_MCH2", 7, 0, 0, 0);
	sLocal_525 = "TOW_GEN_MCH2";
}


int func_238(var uParam0, var uParam1)//Position - 0x2706F
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID()))
		{
			PLAYER::CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(PLAYER::PLAYER_ID());
		}
		iLocal_2648 = 1;
		return 1;
	}
	if ((ENTITY::DOES_ENTITY_EXIST((uParam0[0 /*20*/])->f_6) && !ENTITY::IS_ENTITY_DEAD((uParam0[0 /*20*/])->f_6)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_469)
		{
			if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY((uParam0[0 /*20*/])->f_6, PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT((uParam0[0 /*20*/])->f_6)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED((uParam0[0 /*20*/])->f_6))
			{
				iLocal_2648 = 2;
				return 1;
			}
		}
	}
	if ((ENTITY::DOES_ENTITY_EXIST((*uParam0)[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam0)[0 /*20*/])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), (*uParam0)[0 /*20*/], 1))
		{
			iLocal_2648 = 4;
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(*uParam1))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam1, 0))
		{
			iLocal_2648 = 6;
			return 1;
		}
	}
	return 0;
}

void func_239()//Position - 0x27192
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
	{
		return;
	}
	if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765)) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2778[0 /*20*/].f_6, PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!GlobalFunc_111())
			{
				if (!iLocal_2755)
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TONYA_CARDAM", 8, 1, 0, 0))
					{
						iLocal_2755 = 1;
					}
				}
			}
		}
	}
}

int func_240(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)//Position - 0x27225
{
	var uVar0;
	char* sVar1;
	var uVar2;
	var uVar5;
	struct<3> Var8;
	var uVar11;
	float fVar12;
	
	if (iLocal_2940 > 2)
	{
		if (iLocal_2736)
		{
			func_416();
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 248, 1);
	}
	switch (iLocal_2940)
	{
		case 1:
			AUDIO::SET_VEH_RADIO_STATION(iLocal_2933, "RADIO_03_HIPHOP_NEW");
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2933, 9);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765))
			{
				if (PED::IS_PED_IN_GROUP(iLocal_2765))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_2765);
				}
			}
			if (iLocal_462 == 1)
			{
				GlobalFunc_6657();
			}
			GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			GlobalFunc_173(&Local_2390, 3, iLocal_2765, "TONYA", 0, 1);
			GlobalFunc_173(&Local_2390, 4, 0, "TOWDISPATCH", 0, 1);
			GlobalFunc_11110(1, "towing_tonya_franklin_towing", 1, 0, 0, 1);
			if (iLocal_462 == 3)
			{
				if (GlobalFunc_6656(&Local_2857, &fLocal_2860, &uLocal_2841, &uLocal_2844))
				{
					if (!GlobalFunc_226(&uLocal_2915))
					{
						GlobalFunc_7777(&uLocal_2915);
					}
					else
					{
						GlobalFunc_6877(&uLocal_2915);
					}
					iLocal_2940 = 2;
				}
			}
			else
			{
				if (!GlobalFunc_226(&uLocal_2915))
				{
					GlobalFunc_7777(&uLocal_2915);
				}
				else
				{
					GlobalFunc_6877(&uLocal_2915);
				}
				iLocal_2940 = 2;
			}
			break;
		
		case 2:
			if (iLocal_462 == 3)
			{
				Local_692[iLocal_2646 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
			}
			if (!HUD::DOES_BLIP_EXIST(Local_2778[0 /*20*/].f_8))
			{
				if (!bLocal_503)
				{
					Local_2778[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_COORD(Local_692[iLocal_2646 /*23*/].f_1);
					HUD::SET_BLIP_COLOUR(Local_2778[0 /*20*/].f_8, 3);
					HUD::SET_BLIP_ROUTE(Local_2778[0 /*20*/].f_8, 1);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2778[0 /*20*/].f_8, "TOW_BLIP_VEH");
				}
				Local_2658[0 /*3*/] = { Local_692[iLocal_2646 /*23*/].f_1 };
			}
			if (GlobalFunc_226(&uLocal_2915))
			{
				if (GlobalFunc_5182(&uLocal_2915) > fLocal_2861)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						switch (iLocal_462)
						{
							case 3:
								GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
								GlobalFunc_173(&Local_2390, 3, 0, "TOWDISPATCH", 0, 1);
								if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_ACC_EXP", 9, 0, 0, 0))
								{
									iLocal_2940 = 3;
								}
								break;
							
							case 2:
								GlobalFunc_173(&Local_2390, 4, 0, "TOWDISPATCH", 0, 1);
								GlobalFunc_173(&Local_2390, 3, iLocal_2765, "TONYA", 0, 1);
								GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
								if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_ABN_EXP", 9, 0, 0, 0))
								{
									iLocal_2940 = 3;
								}
								break;
							
							case 0:
								GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
								GlobalFunc_173(&Local_2390, 4, 0, "TOWDISPATCH", 0, 1);
								if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_HAN_EXP", 9, 0, 0, 0))
								{
									iLocal_2940 = 3;
								}
								break;
							
							case 1:
								GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
								GlobalFunc_173(&Local_2390, 3, 0, "TOWDISPATCH", 0, 1);
								if (iLocal_2646 == 28)
								{
									if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TRN_EXP2", 9, 0, 0, 0))
									{
										iLocal_2940 = 3;
									}
								}
								else if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TRN_EXP", 9, 0, 0, 0))
								{
									iLocal_2940 = 3;
								}
								break;
							
							case 4:
								GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
								GlobalFunc_173(&Local_2390, 4, 0, "TOWDISPATCH", 0, 1);
								if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_ACD_EXP", 9, 0, 0, 0))
								{
									iLocal_2940 = 3;
								}
								break;
							}
						}
					}
			}
			break;
		
		case 3:
			if (!bLocal_2735)
			{
				if (iLocal_462 == 2)
				{
					sLocal_2939 = "TOWT_OBJ_AB";
				}
				else if (iLocal_462 == 0)
				{
					sLocal_2939 = "TOWT_OBJ_01B";
				}
				else if (iLocal_462 == 1)
				{
					sLocal_2939 = "TOWT_OBJ_TR";
				}
				else if (iLocal_462 == 3)
				{
					sLocal_2939 = "TOWT_OBJ_01";
				}
				else if (iLocal_462 == 4)
				{
					sLocal_2939 = "TOWT_OBJ_CC";
				}
				StringCopy(&cLocal_2862, sLocal_2939, 64);
				if (!GlobalFunc_111() && !bLocal_503)
				{
					GlobalFunc_164(sLocal_2939, 7500, 1);
					bLocal_2735 = true;
				}
			}
			if (!iLocal_2736)
			{
				if (bLocal_2735)
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						GlobalFunc_7777(&uLocal_2900);
						iLocal_2736 = 1;
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				Var8 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			}
			fVar12 = SYSTEM::VDIST(Var8, Local_692[iLocal_2646 /*23*/].f_1);
			func_371();
			func_329();
			func_328();
			if (fVar12 < 250f)
			{
				if (func_311(&uParam0, uParam9))
				{
					iLocal_2940 = 4;
				}
			}
			break;
		
		case 4:
			switch (iLocal_462)
			{
				case 3:
					if (func_304("TOWT_OBJ_01", "TOWT_HELP_01", &uVar0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2778[0 /*20*/].f_6, 10);
						}
						func_302();
						iLocal_2940 = 6;
					}
					break;
				
				case 2:
					if (func_304("TOWT_OBJ_AB", "TOWT_HELP_AB", &uVar0, 0, 0))
					{
						Local_2665 = { (Local_2658[0 /*3*/] + 15f), (Local_2658[0 /*3*/].f_1 + 15f), (Local_2658[0 /*3*/].f_2 + 15f) };
						Local_2668 = { (Local_2658[0 /*3*/] - 15f), (Local_2658[0 /*3*/].f_1 - 15f), (Local_2658[0 /*3*/].f_2 - 15f) };
						iLocal_2714 = 1;
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2778[0 /*20*/].f_6, 1);
						iLocal_2940 = 6;
					}
					break;
				
				case 0:
					if (func_304("TOWT_OBJ_01B", "TOWT_HELP_03", &uVar0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2778[0 /*20*/].f_6, 2);
						iLocal_2940 = 6;
					}
					break;
				
				case 1:
					if (func_304("TOWT_OBJ_TR", "TOWT_HELP_TR", &uVar0, 0, 1))
					{
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2778[0 /*20*/].f_6, 1);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2778[0 /*20*/].f_6, 3);
						func_302();
						iLocal_2940 = 6;
					}
					break;
				
				case 4:
					if (func_304("TOWT_OBJ_CC", "TOWT_HELP_04", &uVar0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_UNDRIVEABLE(Local_2778[0 /*20*/].f_6, 1);
						func_302();
						iLocal_2940 = 6;
					}
					break;
				
				default:
					break;
			}
			break;
		
		case 5:
			if (func_294(&iLocal_2942, 0, "TOW_BREAK1"))
			{
				iLocal_2940 = 7;
			}
			break;
		
		case 6:
			if (iLocal_462 == 3)
			{
				iLocal_2940 = 5;
			}
			else
			{
				iLocal_2940 = 7;
			}
			break;
		
		case 7:
			func_293();
			switch (iLocal_462)
			{
				case 3:
				case 1:
				case 4:
					sVar1 = "TOWT_OBJ_04";
					break;
				
				case 2:
				case 0:
					if (GlobalFunc_105(Local_2662))
					{
						Local_2662 = { Local_112[0 /*3*/] };
					}
					func_292(8, &Local_2799);
					sVar1 = "TOWT_OBJ_06";
					break;
			}
			if (iLocal_462 == 1 && !PED::IS_PED_IN_VEHICLE(Local_2778[0 /*20*/], iLocal_2933, 0))
			{
				bLocal_2710 = true;
			}
			if (iLocal_2726)
			{
				if (!iLocal_2727)
				{
					if (!GlobalFunc_111())
					{
						GlobalFunc_164("TOWT_OBJ_03Ga", 7500, 1);
						StringCopy(&cLocal_2862, "TOWT_OBJ_03Ga", 64);
						iLocal_2727 = 1;
					}
				}
			}
			else if (iLocal_2734 && !iLocal_2726)
			{
				if (bLocal_2712)
				{
					if (!func_290(&uVar2, &uVar5, &uVar11))
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TONYA_DETACH", 9, 0, 0, 0))
						{
							iLocal_2726 = 1;
						}
					}
				}
				else if (!func_290(&uVar2, &uVar5, &uVar11))
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1)
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_LOSTCAR", 9, 0, 0, 0))
						{
							iLocal_2726 = 1;
						}
					}
					else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_CAR_UNHO", 9, 0, 0, 0))
						{
							iLocal_2726 = 1;
						}
					}
				}
			}
			if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 1 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 2)
			{
				func_289();
			}
			func_288();
			if (GlobalFunc_105(Local_2850))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
				{
					Local_2850 = { ENTITY::GET_ENTITY_COORDS(Local_2778[0 /*20*/].f_6, 1) };
				}
			}
			func_328();
			if (!bLocal_503)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
				{
					VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_2778[0 /*20*/].f_6, 0);
				}
				if (func_281(sVar1, Local_2662))
				{
					iLocal_2734 = 0;
					iLocal_2726 = 0;
					iLocal_2727 = 0;
					if (iLocal_462 == 1 && !PED::IS_PED_IN_VEHICLE(Local_2778[0 /*20*/], iLocal_2933, 0))
					{
						bLocal_2710 = false;
						iLocal_2708 = 1;
						if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/]))
						{
							Local_2778[0 /*20*/].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2778[0 /*20*/]);
							HUD::SET_BLIP_COLOUR(Local_2778[0 /*20*/].f_9, 3);
							HUD::SET_BLIP_SCALE(Local_2778[0 /*20*/].f_9, 0.7f);
						}
						iLocal_2940 = 5;
					}
					else
					{
						OBJECT::_DOOR_CONTROL(joaat("prop_facgate_08"), 414.951f, -1623.813f, 28.2928f, 0, 1f, 0, 0);
						OBJECT::_DOOR_CONTROL(joaat("prop_facgate_08"), 415.484f, -1653.171f, 28.2928f, 0, 1f, 0, 0);
						iLocal_2940 = 9;
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
			{
				VEHICLE::SET_VEHICLE_DISABLE_TOWING(Local_2778[0 /*20*/].f_6, 1);
			}
			if (func_290(&uVar2, &uVar5, &uVar11))
			{
				iLocal_2693 = 1;
				iLocal_2940 = 9;
			}
			break;
		
		case 9:
			if (iLocal_462 == 3)
			{
				sVar1 = "TOWT_OBJ_03a";
			}
			else
			{
				sVar1 = "TOWT_OBJ_03Ga";
			}
			func_280();
			if (!bLocal_503)
			{
				func_279();
				func_278();
				func_328();
				if (func_275(sVar1))
				{
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(Local_2778[0 /*20*/].f_6, 0, 0);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_2778[0 /*20*/].f_6, 2);
					VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_2933, 0);
					if (iLocal_2820 == 0)
					{
						iLocal_2697 = 0;
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya1")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1)
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 395.9464f, -1647.359f, 26.29278f, 414.9789f, -1624f, 35.29278f, 23.25f, 0, 1, 0))
							{
								iLocal_2940 = 12;
							}
							else
							{
								iLocal_2940 = 14;
							}
						}
						else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
						{
							iLocal_2940 = 13;
						}
						else
						{
							iLocal_2940 = 11;
						}
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
			{
				bLocal_510 = VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6);
			}
			break;
		
		case 14:
			if (func_274())
			{
				iLocal_2940 = 12;
			}
			break;
		
		case 11:
			if (func_271())
			{
				iLocal_2940 = 12;
			}
			break;
		
		case 12:
			if (HUD::DOES_BLIP_EXIST(uLocal_2768))
			{
				HUD::REMOVE_BLIP(&uLocal_2768);
			}
			GlobalFunc_4890();
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2933, 1);
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya1")) == 1)
			{
				if (!bLocal_2732)
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TUT_ENDa", 9, 0, 0, 0))
					{
						bLocal_2732 = true;
					}
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1)
			{
				if (!bLocal_2732)
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TUT_ENDb", 9, 0, 0, 0))
					{
						bLocal_2732 = true;
					}
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
			{
				if (!bLocal_2732)
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TUT_ENDc", 9, 0, 0, 0))
					{
						bLocal_2732 = true;
					}
				}
			}
			if (bLocal_2732)
			{
				if (!GlobalFunc_111())
				{
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2765))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_2765, uLocal_463);
						PED::SET_PED_KEEP_TASK(iLocal_2765, 1);
					}
					iLocal_2940 = 15;
				}
			}
			break;
		
		case 13:
			if (func_267())
			{
				iLocal_2940 = 15;
			}
			break;
		
		case 15:
			if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya1")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
			{
				GlobalFunc_4890();
			}
			func_266();
			HUD::CLEAR_HELP(1);
			if (iLocal_514 > 0)
			{
				GlobalFunc_10829(GlobalFunc_8315(), 1, iLocal_514, 0, 0);
			}
			if (!GlobalFunc_226(&uLocal_2924))
			{
				GlobalFunc_7777(&uLocal_2924);
			}
			iLocal_2940 = 17;
			break;
		
		case 17:
			if ((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya1")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1) || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
			{
				GlobalFunc_4890();
			}
			if (GlobalFunc_226(&uLocal_2924))
			{
				if (GlobalFunc_5182(&uLocal_2924) > 3f)
				{
					GlobalFunc_4889();
					return 1;
				}
			}
			break;
	}
	iLocal_512 = iLocal_512;
	iLocal_2693 = iLocal_2693;
	fLocal_471 = fLocal_471;
	Local_112[0 /*3*/] = { Local_112[0 /*3*/] };
	return 0;
}


























void func_266()//Position - 0x28E72
{
	Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted++;
	Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_eLastNode = iLocal_462;
	switch (iLocal_462)
	{
		case 2:
			Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAbandonCompleted++;
			break;
		
		case 3:
			Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iBreakDownCompleted++;
			break;
		
		case 0:
			Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iHandiCompleted++;
			break;
		
		case 1:
			Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iTrainCompleted++;
			break;
		
		case 4:
			Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAccidentCompleted++;
			break;
	}
}

int func_267()//Position - 0x28F33
{
	if (!GlobalFunc_226(&uLocal_2921))
	{
		GlobalFunc_7777(&uLocal_2921);
	}
	if (GlobalFunc_226(&uLocal_2921))
	{
		if (GlobalFunc_5182(&uLocal_2921) > 7f)
		{
			if (!iLocal_2728)
			{
				if (!GlobalFunc_111())
				{
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
					}
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_173(&Local_2390, 3, 0, "TONYA", 0, 1);
					if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 2)
					{
						GlobalFunc_10638(&Local_2390, 103, "TOWAUD", "TONYA_WRAP3", 14, 1, 0, 0, 0);
					}
					else if (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 3)
					{
						GlobalFunc_10638(&Local_2390, 103, "TOWAUD", "TONYA_WRAP4", 14, 1, 0, 0, 0);
					}
					iLocal_2728 = 1;
				}
			}
		}
	}
	if (iLocal_2728 && GlobalFunc_1993())
	{
		return 1;
	}
	return 0;
}




int func_271()//Position - 0x29103
{
	func_273();
	switch (iLocal_2836)
	{
		case 0:
			Local_2658[0 /*3*/] = { 406.3804f, -1635.867f, 28.2928f };
			fLocal_472 = GlobalFunc_5683(Local_2658[0 /*3*/], 0);
			GlobalFunc_4720(uLocal_2768);
			uLocal_2768 = HUD::ADD_BLIP_FOR_COORD(406.3804f, -1635.867f, 28.2928f);
			HUD::SET_BLIP_ROUTE(uLocal_2768, 1);
			if (!GlobalFunc_226(&uLocal_2918))
			{
				GlobalFunc_7777(&uLocal_2918);
			}
			else
			{
				GlobalFunc_6877(&uLocal_2918);
			}
			iLocal_2836 = 1;
			break;
		
		case 1:
			if (!bLocal_2732)
			{
				if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_DROPS", 9, 0, 0, 0))
					{
						bLocal_2732 = true;
					}
				}
			}
			else if (!iLocal_2740)
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_164("TOWT_DRIVE", 7500, 1);
					iLocal_2740 = 1;
				}
			}
			if (!iLocal_2738 && bLocal_2732)
			{
				if (GlobalFunc_226(&uLocal_2918))
				{
					if (GlobalFunc_5182(&uLocal_2918) > 25f)
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_LASTCHAT", 9, 0, 0, 0))
						{
							iLocal_2738 = 1;
						}
					}
				}
			}
			if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2933, 0) && PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_2933, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 406.3804f, -1635.867f, 28.2928f, 5f, 5f, 2f, 1, 1, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_2768))
						{
							HUD::REMOVE_BLIP(&uLocal_2768);
						}
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_2933, 5f, 1, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2933, 1);
						GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TUT_ENDC", 9, 0, 0, 0);
						return 1;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
			{
				if (!PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_2933, 0))
				{
					return 1;
				}
			}
			break;
		
		case 3:
			break;
	}
	return 0;
}


void func_273()//Position - 0x2931E
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2933, 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_2768))
			{
				HUD::REMOVE_BLIP(&uLocal_2768);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_2766))
			{
				uLocal_2766 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_2933);
				HUD::SET_BLIP_COLOUR(uLocal_2766, 3);
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_2768))
			{
				GlobalFunc_4720(uLocal_2768);
				uLocal_2768 = HUD::ADD_BLIP_FOR_COORD(406.3804f, -1635.867f, 28.2928f);
				HUD::SET_BLIP_ROUTE(uLocal_2768, 1);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_2766))
			{
				HUD::REMOVE_BLIP(&uLocal_2766);
			}
		}
	}
}

int func_274()//Position - 0x293C1
{
	switch (iLocal_2839)
	{
		case 0:
			HUD::CLEAR_HELP(1);
			if (!HUD::DOES_BLIP_EXIST(uLocal_2768))
			{
				GlobalFunc_4720(uLocal_2768);
				uLocal_2768 = HUD::ADD_BLIP_FOR_COORD(406.3804f, -1635.867f, 28.2928f);
				HUD::SET_BLIP_ROUTE(uLocal_2768, 1);
			}
			GlobalFunc_164("TOWT_DRIVE", 7500, 1);
			iLocal_2839 = 1;
			break;
		
		case 1:
			if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2933, 0) && PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_2933, 0))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 398.9666f, -1641.233f, 27.29277f, 411.1382f, -1626.689f, 33.29278f, 15f, 0, 1, 0))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_2768))
						{
							HUD::REMOVE_BLIP(&uLocal_2768);
						}
						VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_2933, 5f, 1, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2933, 1);
						iLocal_2839 = 2;
					}
				}
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_275(char* sParam0)//Position - 0x294D3
{
	var uVar0;
	var uVar3;
	var uVar6;
	
	if (iLocal_2819 == -1)
	{
	}
	if (Local_2778[iLocal_2819 /*20*/].f_15)
	{
		if ((GlobalFunc_5182(&(Local_2778[iLocal_2819 /*20*/].f_11)) - Local_2778[iLocal_2819 /*20*/].f_14) > 120f)
		{
			VEHICLE::EXPLODE_VEHICLE(Local_2778[iLocal_2819 /*20*/].f_6, 1, 0);
		}
	}
	if (func_290(&uVar0, &uVar3, &uVar6))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(Local_2778[iLocal_2819 /*20*/]) && PED::IS_PED_IN_VEHICLE(Local_2778[iLocal_2819 /*20*/], iLocal_2933, 0)) || (!ENTITY::IS_ENTITY_DEAD(iLocal_2765) && PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_2933, 0)))
		{
			VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_2933, 6f, 2, 0);
			iLocal_508 = 1;
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2778[iLocal_2819 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2778[iLocal_2819 /*20*/]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
					TASK::TASK_CLEAR_LOOK_AT(0);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 538.5295f, -174.2699f, 53.493f, 1f, 20000, 0.25f, 0, 64.6725f);
					TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
					TASK::TASK_PERFORM_SEQUENCE(Local_2778[iLocal_2819 /*20*/], uLocal_463);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
					PED::SET_PED_KEEP_TASK(Local_2778[iLocal_2819 /*20*/], 1);
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(Local_2778[iLocal_2819 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2778[iLocal_2819 /*20*/]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -215.5652f, -1385.4f, 30.2583f, 1f, 20000, 0.25f, 0, 234.3862f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_STAND_MOBILE", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
				TASK::TASK_PERFORM_SEQUENCE(Local_2778[iLocal_2819 /*20*/], uLocal_463);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
				PED::SET_PED_KEEP_TASK(Local_2778[iLocal_2819 /*20*/], 1);
			}
			if (GlobalFunc_111())
			{
				GlobalFunc_4935();
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya1")) == 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 398.9666f, -1641.233f, 27.29277f, 411.1382f, -1626.689f, 33.29278f, 15f, 0, 1, 0))
				{
					if (!bLocal_2732)
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TUT_ENDa", 9, 0, 0, 0))
						{
							bLocal_2732 = true;
						}
					}
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 398.9666f, -1641.233f, 27.29277f, 411.1382f, -1626.689f, 33.29278f, 15f, 0, 1, 0))
				{
					if (!bLocal_2732)
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TUT_ENDb", 9, 0, 0, 0))
						{
							bLocal_2732 = true;
						}
					}
				}
			}
			else if (iLocal_462 == 3)
			{
				GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_BREAK2", 9, 0, 0, 0);
			}
			else if (iLocal_462 == 1)
			{
				GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TRAIN_TK", 9, 0, 0, 0);
			}
		}
		if (!bLocal_2712)
		{
		}
		bLocal_510 = false;
		HUD::REMOVE_BLIP(&(Local_2778[iLocal_2819 /*20*/].f_8));
		GlobalFunc_6877(&uLocal_2888);
		iLocal_2820 = (iLocal_2820 - 1);
		return 1;
	}
	else
	{
		func_277();
	}
	if (!bLocal_2695)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[iLocal_2819 /*20*/].f_6))
		{
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[iLocal_2819 /*20*/].f_6))
			{
				bLocal_510 = false;
				GlobalFunc_4948(&uLocal_441, 0, 0);
				iLocal_2734 = 1;
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya1")) == 1)
				{
					GlobalFunc_553(829);
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1)
				{
					GlobalFunc_553(832);
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1)
				{
					GlobalFunc_553(835);
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
				{
					GlobalFunc_553(838);
				}
				else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
				{
					GlobalFunc_553(841);
				}
				if (HUD::DOES_BLIP_EXIST(Local_2778[iLocal_2819 /*20*/].f_8))
				{
					HUD::SET_BLIP_ROUTE(Local_2778[iLocal_2819 /*20*/].f_8, 0);
					HUD::REMOVE_BLIP(&(Local_2778[iLocal_2819 /*20*/].f_8));
				}
				if (ENTITY::DOES_ENTITY_EXIST(Local_2778[iLocal_2819 /*20*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_2778[iLocal_2819 /*20*/].f_6))
				{
					if (!HUD::DOES_BLIP_EXIST(Local_2778[iLocal_2819 /*20*/].f_8))
					{
						Local_2778[iLocal_2819 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2778[iLocal_2819 /*20*/].f_6);
						HUD::SET_BLIP_COLOUR(Local_2778[iLocal_2819 /*20*/].f_8, 3);
					}
				}
				if (GlobalFunc_111())
				{
					Local_2878 = { GlobalFunc_514() };
					GlobalFunc_5105();
					iLocal_2733 = 1;
				}
				if (bLocal_2741)
				{
					if (!iLocal_2726)
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TONYA_DETACH", 9, 0, 0, 0))
						{
							iLocal_2726 = 1;
						}
					}
				}
				else if (iLocal_462 == 1)
				{
					if (!iLocal_2726)
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_LOSTCAR", 9, 0, 0, 0))
						{
							iLocal_2726 = 1;
						}
					}
				}
				else if (iLocal_462 == 3)
				{
					if (!iLocal_2726)
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_CAR_UNHO", 9, 0, 0, 0))
						{
							iLocal_2726 = 1;
						}
					}
				}
				GlobalFunc_6877(&uLocal_2888);
				if (!bLocal_2710)
				{
					if (!GlobalFunc_111())
					{
						if (iLocal_2689)
						{
							HUD::CLEAR_PRINTS();
							GlobalFunc_164(sParam0, 7500, 1);
							iLocal_2689 = 0;
						}
						else
						{
							HUD::CLEAR_PRINTS();
							GlobalFunc_164(sParam0, 7500, 1);
						}
						StringCopy(&cLocal_2862, sParam0, 64);
					}
				}
				else
				{
					StringCopy(&cLocal_2862, sParam0, 64);
				}
				iLocal_2940 = 7;
			}
		}
	}
	return 0;
}


void func_277()//Position - 0x29AA8
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (iLocal_2748)
	{
		return;
	}
	if (bLocal_2712)
	{
		return;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya1")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1)
	{
		if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 402.5694f, -1632.391f, 28.2928f, 50f, 50f, 50f, 0, 1, 0))
		{
			return;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2778[0 /*20*/].f_6, 1) };
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
	{
		if (!iLocal_2748)
		{
			if (SYSTEM::VDIST2(Var0, -227.7806f, -1170.663f, 21.8945f) < 400f)
			{
				if (GlobalFunc_5182(&uLocal_2927) > 90f)
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_WAITING3", 9, 0, 0, 0))
					{
						iLocal_2748 = 1;
					}
				}
			}
		}
	}
	if (SYSTEM::VDIST2(Var0, Var3) < 400f)
	{
		if (!GlobalFunc_226(&uLocal_2927))
		{
			GlobalFunc_7777(&uLocal_2927);
		}
		else
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya1")) == 1)
			{
				if (GlobalFunc_5182(&uLocal_2927) > 25f)
				{
					if (!iLocal_2748)
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_2748 = 1;
						}
					}
				}
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1)
			{
				if (GlobalFunc_5182(&uLocal_2927) > 20f)
				{
					if (!iLocal_2748)
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_WAIT3", 9, 0, 0, 0))
						{
							iLocal_2748 = 1;
						}
					}
				}
			}
		}
	}
}

void func_278()//Position - 0x29C52
{
	if (!iLocal_2737)
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 399.8853f, -1649.835f, 27.29447f, 432.559f, -1612.316f, 35.34176f, 35f, 0, 1, 0))
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_DROP", 8, 0, 0, 0))
					{
						iLocal_2737 = 1;
					}
				}
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -233.3394f, -1183.598f, 21.07301f, -232.1382f, -1141.946f, 29.08136f, 29.25f, 0, 1, 0))
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_SHOP", 8, 0, 0, 0))
					{
						iLocal_2737 = 1;
					}
				}
			}
		}
	}
}

void func_279()//Position - 0x29D2E
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
	{
		if (!bLocal_2739)
		{
			if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_REPAIR", 9, 0, 0, 0))
			{
				bLocal_2739 = true;
			}
		}
		else if (bLocal_2739)
		{
			if (!iLocal_2742)
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_164("TOWT_OBJ_04", 7500, 1);
					iLocal_2742 = 1;
				}
			}
		}
	}
	if (SYSTEM::VDIST2(Local_2850, Var0) > 10000f)
	{
		switch (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted)
		{
			case 0:
				if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2933, 0) && PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_2933, 0))
					{
						if (!iLocal_2729)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TALK", 8, 0, 0, 0))
								{
									iLocal_2729 = 1;
								}
							}
						}
						else if (iLocal_2733)
						{
							if (GlobalFunc_10626(&Local_2390, "TOWAUD", "TOW_TALK", &Local_2878, 8, 0, 0))
							{
								iLocal_2733 = 0;
							}
						}
					}
				}
				break;
			
			case 1:
				if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2933, 0) && PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_2933, 0))
					{
						if (!iLocal_2729)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TALK2", 8, 0, 0, 0))
								{
									iLocal_2729 = 1;
								}
							}
						}
						else if (iLocal_2733)
						{
							if (GlobalFunc_10626(&Local_2390, "TOWAUD", "TOW_TALK2", &Local_2878, 8, 0, 0))
							{
								iLocal_2733 = 0;
							}
						}
					}
				}
				break;
			
			case 4:
				if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2933, 0) && PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_2933, 0))
					{
						if (!iLocal_2729)
						{
							if (!GlobalFunc_111())
							{
								if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_CHAT2", 8, 0, 0, 0))
								{
									iLocal_2729 = 1;
								}
							}
						}
						else if (iLocal_2733)
						{
							if (GlobalFunc_10626(&Local_2390, "TOWAUD", "TOW_CHAT2", &Local_2878, 8, 0, 0))
							{
								iLocal_2733 = 0;
							}
						}
					}
				}
				break;
			}
	}
}

void func_280()//Position - 0x29FA4
{
	struct<3> Var0;
	int iVar3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (iLocal_462 == 0)
	{
		if (SYSTEM::VDIST2(Var0, Local_692[iLocal_2646 /*23*/].f_1) > 22500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_2778[0 /*20*/]))
				{
					PED::DELETE_PED(&(Local_2778[0 /*20*/]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2778[0 /*20*/]));
				}
			}
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towing");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingangryidle_a");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_b");
			STREAMING::REMOVE_ANIM_DICT("oddjobs@towingpleadingidle_a");
			STREAMING::REMOVE_ANIM_DICT("RANDOM@BICYCLE_THIEF@IDLE_A");
			STREAMING::REMOVE_ANIM_DICT("move_m@JOG@");
		}
	}
	else if (iLocal_462 == 1)
	{
		if (SYSTEM::VDIST2(Var0, Local_692[iLocal_2646 /*23*/].f_1) > 22500f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2764) && !ENTITY::IS_ENTITY_DEAD(iLocal_2764))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_2764))
				{
					PED::DELETE_PED(&iLocal_2764);
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2764);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_7))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_2778[0 /*20*/].f_7))
				{
					VEHICLE::DELETE_MISSION_TRAIN(&(Local_2778[0 /*20*/].f_7));
				}
				else
				{
					VEHICLE::_0x1CF38D529D7441D9(Local_2778[0 /*20*/].f_7, 1);
					VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_2778[0 /*20*/].f_7), 0);
				}
			}
		}
	}
	else if (iLocal_462 == 4)
	{
		iVar3 = 0;
		while (iVar3 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/].f_2[iVar3]) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_2[iVar3]))
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(Local_2778[0 /*20*/].f_2[iVar3]))
				{
					PED::DELETE_PED(&(Local_2778[0 /*20*/].f_2[iVar3]));
				}
				else
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2778[0 /*20*/].f_2[iVar3]));
				}
			}
			iVar3++;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2935))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2935);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2934))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2934);
		}
		STREAMING::REMOVE_ANIM_DICT("REACTION@MALE_STAND@BIG_VARIATIONS@A");
		STREAMING::REMOVE_ANIM_DICT("move_m@JOG@");
	}
}

int func_281(char* sParam0, struct<3> Param1)//Position - 0x2A1B7
{
	bool bVar0;
	int iVar1;
	
	bVar0 = true;
	func_371();
	iVar1 = 0;
	while (iVar1 < 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2778[iVar1 /*20*/].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[iVar1 /*20*/].f_6))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[iVar1 /*20*/].f_6) && GlobalFunc_4891())
				{
					if (!iLocal_2750)
					{
						HUD::CLEAR_PRINTS();
						iLocal_2750 = 1;
					}
					RECORDING::_0x293220DA1B46CEBC(3f, 3f, 0);
					VEHICLE::SET_VEHICLE_SIREN(iLocal_2933, 1);
					GlobalFunc_7604();
					GlobalFunc_4948(&uLocal_441, 0, 0);
					bLocal_510 = true;
					if (iLocal_2713 && !PED::IS_PED_IN_VEHICLE(Local_2778[iVar1 /*20*/], iLocal_2933, 0))
					{
						bVar0 = false;
						if (iLocal_2945 < 4)
						{
							SYSTEM::SETTIMERB(0);
							iLocal_2945 = 5;
						}
					}
					if (bVar0)
					{
						func_282(&uLocal_2894);
						if (HUD::DOES_BLIP_EXIST(Local_2778[iVar1 /*20*/].f_8))
						{
							HUD::SET_BLIP_ROUTE(Local_2778[iVar1 /*20*/].f_8, 0);
						}
						iLocal_2717 = 0;
						GlobalFunc_4720(Local_2778[iVar1 /*20*/].f_8);
						Local_2778[iVar1 /*20*/].f_14 = GlobalFunc_5182(&(Local_2778[iVar1 /*20*/].f_11));
						if (iLocal_2774 == 0)
						{
							Local_2778[iVar1 /*20*/].f_8 = HUD::ADD_BLIP_FOR_COORD(Param1);
							fLocal_472 = GlobalFunc_5683(Param1, 0);
							Local_2658[0 /*3*/] = { Param1 };
						}
						if (iLocal_462 == 4)
						{
							VEHICLE::SET_VEHICLE_DOOR_SHUT(Local_2778[0 /*20*/].f_6, 0, 0);
						}
						GlobalFunc_6877(&uLocal_2900);
						if (HUD::DOES_BLIP_EXIST(Local_2778[iVar1 /*20*/].f_8))
						{
							HUD::SET_BLIP_COLOUR(Local_2778[iVar1 /*20*/].f_8, 5);
							HUD::SET_BLIP_ROUTE(Local_2778[iVar1 /*20*/].f_8, 1);
						}
						if (!bLocal_2712 && !SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
						{
							if (iLocal_2690)
							{
								GlobalFunc_164(sParam0, 7500, 1);
								iLocal_2690 = 0;
							}
						}
						StringCopy(&cLocal_2862, sParam0, 64);
						MISC::CLEAR_AREA_OF_VEHICLES(Local_2658[0 /*3*/], 6f, 0, 0, 0, 0, 0);
						iLocal_2819 = iVar1;
						return 1;
					}
				}
			}
		}
		iVar1++;
	}
	return 0;
}

void func_282(var uParam0)//Position - 0x2A397
{
	GlobalFunc_235(uParam0);
	StringCopy(&cLocal_359, "", 32);
}






void func_288()//Position - 0x2A453
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1)
	{
		if (((!ENTITY::IS_ENTITY_DEAD(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933)) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2933, 0) && PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_2933, 0))
			{
				if (!GlobalFunc_111())
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
					{
						if (!iLocal_2756)
						{
							if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_CANGO", 9, 1, 0, 0))
							{
								iLocal_2756 = 1;
							}
						}
					}
				}
			}
		}
	}
}

void func_289()//Position - 0x2A4FB
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var4;
	bool bVar7;
	
	if (((!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6)) || (Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted == 0 || Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iJobsCompleted > 2))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_2933, 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(Local_2778[0 /*20*/].f_6, 1) };
	}
	bVar7 = false;
	if (SYSTEM::VDIST2(Var1, Var4) < 900f)
	{
		if (!GlobalFunc_226(&uLocal_2906))
		{
			GlobalFunc_7777(&uLocal_2906);
		}
		else if (GlobalFunc_5182(&uLocal_2906) > 1f)
		{
			bVar7 = true;
		}
	}
	else if (SYSTEM::VDIST2(Var1, Var4) > 2500f)
	{
		GlobalFunc_6877(&uLocal_2906);
	}
	if (bVar7)
	{
		switch (iLocal_2832)
		{
			case 0:
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					GlobalFunc_159("TOW_TUT_02", -1);
					GlobalFunc_6877(&uLocal_2906);
					iLocal_2832 = 1;
				}
				break;
			
			case 1:
				if (GlobalFunc_226(&uLocal_2906))
				{
					if (GlobalFunc_5182(&uLocal_2906) > 14f)
					{
						if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
						{
							GlobalFunc_159("TOW_TUT_03", 10000);
							GlobalFunc_6877(&uLocal_2906);
							iLocal_2832 = 2;
						}
					}
				}
				break;
			
			case 2:
				if (GlobalFunc_226(&uLocal_2906))
				{
					if (GlobalFunc_5182(&uLocal_2906) > 14f)
					{
						if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
						{
							iVar0 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 2);
							if (iVar0 == 0)
							{
								GlobalFunc_159("TOW_TUT_04C", -1);
							}
							else if (iVar0 == 1)
							{
								GlobalFunc_159("TOWT_HELP_CR", -1);
							}
							iLocal_2832 = 3;
						}
					}
				}
				break;
			
			case 3:
				break;
			}
	}
}

int func_290(var uParam0, var uParam1, var uParam2)//Position - 0x2A6C5
{
	if (iLocal_2819 != -1)
	{
		if (!GlobalFunc_105(Local_2799.f_14))
		{
			Local_2662 = { Local_2799.f_14 };
			*uParam0 = { Local_2799.f_7 };
			*uParam1 = { Local_2799.f_10 };
			*uParam2 = Local_2799.f_13;
		}
		else
		{
			*uParam0 = { Local_2799 };
			*uParam1 = { Local_2799.f_3 };
			*uParam2 = Local_2799.f_6;
		}
		if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933)) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
			{
				iLocal_2759 = 1;
			}
			else
			{
				iLocal_2759 = 0;
			}
		}
		if (!bLocal_2712)
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2662, 30f, 30f, 2f, iLocal_2759, 1, 0))
			{
				if (iLocal_462 == 0 || iLocal_462 == 4)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
					{
					}
				}
			}
			else if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2662, 3f, 3f, 2f, 0, 1, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933))
				{
					VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_2933, 1f, 0, 0);
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(Local_2778[iLocal_2819 /*20*/].f_6))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2778[iLocal_2819 /*20*/].f_6, *uParam0, *uParam1, *uParam2, 0, 0, 0))
			{
				if (iLocal_2697)
				{
					GlobalFunc_159("TOWT_HELP_UH", -1);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[iLocal_2819 /*20*/].f_6))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[iLocal_2819 /*20*/].f_6) || (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_2778[iLocal_2819 /*20*/].f_6, 0) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[iLocal_2819 /*20*/].f_6)))
					{
						if (GlobalFunc_111())
						{
							GlobalFunc_4935();
						}
						HUD::CLEAR_HELP(1);
						iLocal_2744 = 1;
						return 1;
					}
				}
			}
			else
			{
				func_291();
			}
		}
	}
	iLocal_2744 = 0;
	return 0;
}

void func_291()//Position - 0x2A8B3
{
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_2662, 30f, 30f, 2f, 0, 1, 0))
	{
		if (!GlobalFunc_226(&uLocal_2909))
		{
			GlobalFunc_7777(&uLocal_2909);
		}
		else if ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933)) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
			{
				if (GlobalFunc_5182(&uLocal_2909) > 30f)
				{
					GlobalFunc_159("TOWT_HELP_DP", -1);
				}
			}
		}
	}
}

void func_292(int iParam0, var uParam1)//Position - 0x2A944
{
	if (GlobalFunc_105(Local_87[0 /*3*/]))
	{
	}
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -230.8514f, -1181.072f, 21.06031f };
			uParam1->f_3 = { -230.4658f, -1163.16f, 28.99641f };
			uParam1->f_6 = 22.25f;
			uParam1->f_17 = { Local_87[0 /*3*/] };
			break;
		
		case 1:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_87[1 /*3*/] };
			break;
		
		case 2:
			*uParam1 = { -204.0603f, -1390.024f, 30.25342f };
			uParam1->f_3 = { -207.5665f, -1382.582f, 33.46937f };
			uParam1->f_6 = 17f;
			uParam1->f_17 = { Local_87[2 /*3*/] };
			break;
		
		case 3:
			*uParam1 = { 538.747f, -177.535f, 74.484f };
			uParam1->f_3 = { 528.747f, -177.535f, 34.484f };
			uParam1->f_6 = 28f;
			uParam1->f_17 = { Local_87[3 /*3*/] };
			break;
		
		case 4:
			*uParam1 = { 1158.944f, -776.686f, 77.608f };
			uParam1->f_3 = { 1118.944f, -776.686f, 37.608f };
			uParam1->f_6 = 10f;
			uParam1->f_17 = { Local_87[4 /*3*/] };
			break;
		
		case 5:
			*uParam1 = { 798.455f, -821.201f, 46.186f };
			uParam1->f_3 = { 813.455f, -821.201f, 6.186f };
			uParam1->f_6 = 20f;
			uParam1->f_17 = { Local_87[5 /*3*/] };
			break;
		
		case 6:
			*uParam1 = { 2504.934f, 4085.125f, 58.636f };
			uParam1->f_3 = { 2500.285f, 4075.156f, 18.636f };
			uParam1->f_6 = 12f;
			uParam1->f_17 = { Local_87[6 /*3*/] };
			break;
		
		case 7:
			*uParam1 = { 256.5623f, 2600.458f, 43.3306f };
			uParam1->f_3 = { 268.6701f, 2602.716f, 46.74961f };
			uParam1->f_6 = 5f;
			uParam1->f_17 = { Local_87[7 /*3*/] };
			break;
		
		case 8:
			*uParam1 = { 398.7471f, -1650.806f, 27.29324f };
			uParam1->f_3 = { 434.1311f, -1610.011f, 33.34294f };
			uParam1->f_6 = 40.5f;
			uParam1->f_14 = { 400.2854f, -1632.597f, 28.29278f };
			uParam1->f_17 = { Local_112[0 /*3*/] };
			uParam1->f_7 = { 396.8347f, -1639.045f, 27.29278f };
			uParam1->f_10 = { 408.0073f, -1625.608f, 33.29277f };
			uParam1->f_13 = 10f;
			break;
	}
}

void func_293()//Position - 0x2AC24
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2778[0 /*20*/].f_6, 1) };
	}
	if (SYSTEM::VDIST2(Var0, Var3) < 100f)
	{
		if (!iLocal_2760)
		{
			if (HUD::DOES_BLIP_EXIST(Local_2778[0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_2778[0 /*20*/].f_8));
				iLocal_2760 = 1;
			}
		}
		if (!HUD::DOES_BLIP_EXIST(Local_2778[0 /*20*/].f_8))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/].f_6))
			{
				Local_2778[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2778[0 /*20*/].f_6);
				HUD::SET_BLIP_COLOUR(Local_2778[0 /*20*/].f_8, 3);
				HUD::SET_BLIP_ROUTE(Local_2778[0 /*20*/].f_8, 1);
			}
		}
	}
}

int func_294(int iParam0, int iParam1, char* sParam2)//Position - 0x2ACF1
{
	struct<3> Var0;
	struct<3> Var3;
	
	switch (*iParam0)
	{
		case 0:
			if (!bLocal_2711)
			{
				if ((GlobalFunc_7606(Local_2778[iParam1 /*20*/].f_6, iLocal_2933, &iLocal_2645, 10, 150f, 2f, 1) || iLocal_2708) || bLocal_510)
				{
					if (!bLocal_2694)
					{
						iLocal_2645 = 0;
						GlobalFunc_894(&iLocal_2640);
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[iParam1 /*20*/]))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_2778[iParam1 /*20*/], -875674219) != 1)
							{
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2778[iParam1 /*20*/], PLAYER::PLAYER_PED_ID(), -1);
							}
						}
						bLocal_2694 = true;
					}
					if (bLocal_2694)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2933, ENTITY::GET_ENTITY_COORDS(Local_2778[iParam1 /*20*/], 1), 25f, 25f, 25f, 0, 1, 0))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2778[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", 3))
							{
								TASK::STOP_ANIM_TASK(Local_2778[iParam1 /*20*/], "oddjobs@towingcome_here", "come_here_idle_a", -4f);
							}
							if (!func_299())
							{
								if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1)
								{
									GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									GlobalFunc_173(&Local_2390, 3, Local_2778[iParam1 /*20*/], "TOWTRAINM", 0, 1);
									GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TRAIN1", 9, 1, 0, 0);
									PED::SET_PED_MOVEMENT_CLIPSET(Local_2778[iParam1 /*20*/], "move_m@JOG@", 1048576000);
									HUD::CLEAR_HELP(1);
									if (!ENTITY::IS_ENTITY_DEAD(Local_2778[iParam1 /*20*/]))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2933, 1);
										TASK::TASK_ENTER_VEHICLE(Local_2778[iParam1 /*20*/], iLocal_2933, -1, 0, 2f, 1048577, 0);
									}
								}
								else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
								{
									GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									GlobalFunc_173(&Local_2390, 3, Local_2778[iParam1 /*20*/], "TOWBREAKDOWN1", 0, 1);
									GlobalFunc_10618(&Local_2390, "TOWAUD", sParam2, 9, 1, 0, 0);
									HUD::CLEAR_HELP(1);
									if (!ENTITY::IS_ENTITY_DEAD(Local_2778[iParam1 /*20*/]))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2933, 1);
										TASK::TASK_ENTER_VEHICLE(Local_2778[iParam1 /*20*/], iLocal_2933, -1, 0, 1f, 1048577, 0);
									}
								}
								else
								{
									GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									GlobalFunc_173(&Local_2390, iLocal_2838, Local_2778[iParam1 /*20*/], sLocal_2657, 0, 1);
									GlobalFunc_10618(&Local_2390, "TOWAUD", sParam2, 9, 1, 0, 0);
									PED::SET_PED_MOVEMENT_CLIPSET(Local_2778[iParam1 /*20*/], "move_m@JOG@", 1048576000);
									HUD::CLEAR_HELP(1);
									if (!ENTITY::IS_ENTITY_DEAD(Local_2778[iParam1 /*20*/]))
									{
										VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2933, 1);
										TASK::TASK_ENTER_VEHICLE(Local_2778[iParam1 /*20*/], iLocal_2933, 20000, 0, 2f, 1048577, 0);
									}
								}
								if (iLocal_2708)
								{
									if (HUD::DOES_BLIP_EXIST(Local_2778[iParam1 /*20*/].f_8))
									{
										HUD::REMOVE_BLIP(&(Local_2778[iParam1 /*20*/].f_8));
									}
									if (!HUD::DOES_BLIP_EXIST(Local_2778[iParam1 /*20*/].f_8))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Local_2778[iParam1 /*20*/]))
										{
											if (HUD::DOES_BLIP_EXIST(Local_2778[0 /*20*/].f_9))
											{
												HUD::REMOVE_BLIP(&(Local_2778[0 /*20*/].f_9));
											}
											Local_2778[iParam1 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2778[iParam1 /*20*/]);
											HUD::SET_BLIP_COLOUR(Local_2778[iParam1 /*20*/].f_8, 3);
											HUD::SET_BLIP_SCALE(Local_2778[iParam1 /*20*/].f_8, 0.7f);
										}
									}
								}
								SYSTEM::SETTIMERA(0);
								*iParam0 = 1;
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(iLocal_2933, ENTITY::GET_ENTITY_COORDS(Local_2778[iParam1 /*20*/], 1), 50f, 50f, 50f, 0, 1, 0))
						{
							if (!iLocal_2743)
							{
								if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
								{
									GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
									GlobalFunc_173(&Local_2390, 3, Local_2778[iParam1 /*20*/], "TOWBREAKDOWN1", 0, 1);
									if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_CALLOUT", 9, 1, 0, 0))
									{
										iLocal_2743 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			bLocal_2696 = true;
			GlobalFunc_6877(&uLocal_2900);
			GlobalFunc_6877(&uLocal_2885);
			GlobalFunc_4720(Local_2778[iParam1 /*20*/].f_8);
			if (!HUD::DOES_BLIP_EXIST(Local_2778[0 /*20*/].f_9))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_2778[iParam1 /*20*/]))
				{
					Local_2778[0 /*20*/].f_9 = HUD::ADD_BLIP_FOR_ENTITY(Local_2778[iParam1 /*20*/]);
					HUD::SET_BLIP_COLOUR(Local_2778[0 /*20*/].f_9, 3);
					HUD::SET_BLIP_SCALE(Local_2778[0 /*20*/].f_9, 0.7f);
				}
			}
			GlobalFunc_164("TOWT_OBJ_02", 7500, 1);
			*iParam0 = 2;
			break;
		
		case 2:
			PED::ADD_RELATIONSHIP_GROUP("TOWBUDDIES", &uLocal_2777);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_2777, 1862763509);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(Local_2778[iParam1 /*20*/], uLocal_2777);
			func_298(iParam1);
			*iParam0 = 3;
			break;
		
		case 3:
			if (!PED::IS_PED_IN_VEHICLE(Local_2778[iParam1 /*20*/], iLocal_2933, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(Local_2778[0 /*20*/], 1) };
				}
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_2778[0 /*20*/], -1794415470) != 1)
					{
						TASK::TASK_ENTER_VEHICLE(Local_2778[iParam1 /*20*/], iLocal_2933, -1, 0, 2f, 1048577, 0);
					}
				}
				if (!iLocal_2749)
				{
					if (SYSTEM::VDIST2(Var0, Var3) > 2500f)
					{
						GlobalFunc_164("TOW_OBJ_REOWNER", 7500, 1);
						iLocal_2749 = 1;
					}
				}
				if (GlobalFunc_7605(&uLocal_2949, Local_2778[iParam1 /*20*/], 1125515264, 30000))
				{
					iLocal_2884 = 11;
					func_483();
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Local_2778[iParam1 /*20*/], iLocal_2933, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2933, 9);
					GlobalFunc_4720(Local_2778[0 /*20*/].f_9);
				}
			}
			if (PED::IS_PED_IN_VEHICLE(Local_2778[iParam1 /*20*/], iLocal_2933, 0) && !AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			{
				if (iLocal_2708)
				{
					GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TRAIN2", 9, 1, 0, 0);
				}
				else
				{
					GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_BREAKS", 9, 1, 0, 0);
				}
				*iParam0 = 4;
			}
			break;
		
		case 4:
			if (PED::IS_PED_IN_VEHICLE(Local_2778[iParam1 /*20*/], iLocal_2933, 0))
			{
				func_298(iParam1);
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
				{
					if (iLocal_2708 && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
					{
						return 1;
					}
				}
				if (!HUD::DOES_BLIP_EXIST(Local_2778[0 /*20*/].f_8))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Local_2778[iParam1 /*20*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_2778[iParam1 /*20*/].f_6))
					{
						Local_2778[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2778[iParam1 /*20*/].f_6);
						HUD::SET_BLIP_COLOUR(Local_2778[iParam1 /*20*/].f_8, 3);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
					{
						GlobalFunc_164("TOWT_OBJ_03", 7500, 1);
						StringCopy(&cLocal_2862, "TOWT_OBJ_03", 64);
					}
				}
				GlobalFunc_6877(&uLocal_2885);
				*iParam0 = 0;
				return 1;
			}
			break;
	}
	return 0;
}




void func_298(int iParam0)//Position - 0x2B4BF
{
	int iVar0;
	
	bLocal_2711 = true;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (iVar0 != iParam0)
		{
			if (HUD::DOES_BLIP_EXIST(Local_2778[iVar0 /*20*/].f_8))
			{
				HUD::REMOVE_BLIP(&(Local_2778[iVar0 /*20*/].f_8));
			}
		}
		iVar0++;
	}
}

int func_299()//Position - 0x2B501
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_2933);
			if (fVar0 > 1f)
			{
				if (!iLocal_2757)
				{
					GlobalFunc_159("TOWT_HELP_SL", -1);
					iLocal_2757 = 1;
				}
				return 1;
			}
		}
	}
	return 0;
}



void func_302()//Position - 0x2B661
{
	int iVar0;
	
	iVar0 = GlobalFunc_6653(&Local_87, Local_2658[0 /*3*/], 400f);
	if (iVar0 != -1)
	{
		Local_2662 = { Local_87[iVar0 /*3*/] };
		func_292(iVar0, &Local_2799);
	}
	else
	{
		Local_2662 = { Local_87[0 /*3*/] };
	}
}


int func_304(char* sParam0, char* sParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0x2B713
{
	fLocal_472 = GlobalFunc_5683(Local_2857, 0);
	Local_2658[0 /*3*/] = { Local_2857 };
	sLocal_2939 = sParam0;
	sParam1 = sParam1;
	if (bParam3)
	{
		if (func_310(Local_2857, fLocal_2860, uParam2, 0))
		{
			GlobalFunc_4893(Local_2778[0 /*20*/].f_6, &uLocal_2824, &uLocal_2826);
			VEHICLE::SET_FORCE_HD_VEHICLE(Local_2778[0 /*20*/].f_6, 1);
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2778[0 /*20*/].f_6, false);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2778[0 /*20*/].f_6, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2778[0 /*20*/].f_6, 1);
			return 1;
		}
	}
	else if (func_305(bParam4, 0))
	{
		GlobalFunc_4893(Local_2778[0 /*20*/].f_6, &uLocal_2824, &uLocal_2826);
		VEHICLE::SET_FORCE_HD_VEHICLE(Local_2778[0 /*20*/].f_6, 1);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(Local_2778[0 /*20*/].f_6, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2778[0 /*20*/].f_6, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(Local_2778[0 /*20*/].f_6, 1);
		return 1;
	}
	return 0;
}

int func_305(bool bParam0, bool bParam1)//Position - 0x2B7F7
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_307(Local_692[iLocal_2646 /*23*/].f_1, Local_692[iLocal_2646 /*23*/].f_4, &iVar0, 0, bParam1))
	{
		return 0;
	}
	fLocal_472 = GlobalFunc_5683(Local_692[iLocal_2646 /*23*/].f_1, 0);
	Local_2658[0 /*3*/] = { Local_692[iLocal_2646 /*23*/].f_1 };
	if (Local_692[iLocal_2646 /*23*/] == 2)
	{
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2778[0 /*20*/].f_6, 0f, 1.2f, 0f, 1600f, 1600f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2778[0 /*20*/].f_6, 0f, 0.75f, 0.05f, 1600f, 1600f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2778[0 /*20*/].f_6, -0.7f, 0f, 0f, 1600f, 1600f, 1);
		VEHICLE::SET_VEHICLE_DAMAGE(Local_2778[0 /*20*/].f_6, 0.7f, 0f, 0f, 1600f, 1600f, 1);
	}
	else if (Local_692[iLocal_2646 /*23*/] == 4)
	{
		fLocal_2860 = -1f;
		iLocal_2705 = 1;
		iLocal_2934 = VEHICLE::CREATE_VEHICLE(joaat("ambulance"), Local_1912[func_497() /*28*/].f_23, Local_1912[func_497() /*28*/].f_26, 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2934, 1, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2934))
		{
			VEHICLE::SET_VEHICLE_SIREN(iLocal_2934, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2934, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ambulance"));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2934))
		{
			iLocal_2935 = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_2934, 4, joaat("s_m_m_paramedic_01"), -1, 1, 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2935, 1, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_paramedic_01"));
		}
		if (!GlobalFunc_105(Local_1912[func_497() /*28*/].f_17))
		{
			uLocal_2389 = GlobalFunc_2280(Local_1912[func_497() /*28*/].f_17, Local_1912[func_497() /*28*/].f_20);
		}
		switch (Local_692[iLocal_2646 /*23*/].f_21)
		{
			case 1:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2778[0 /*20*/].f_6, -0.5223f, 2.455f, 0.0784f, 200f, 250f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2778[0 /*20*/].f_6, -1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 0:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2778[0 /*20*/].f_6, 0.6012f, 2.4222f, 0.0245f, 200f, 250f, 1);
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2778[0 /*20*/].f_6, 1f, 1.5f, -0.5f, 200f, 250f, 1);
				break;
			
			case 2:
				VEHICLE::SET_VEHICLE_DAMAGE(Local_2778[0 /*20*/].f_6, 0.1414f, 1.8401f, 0.0342f, 200f, 350f, 1);
				break;
		}
		VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2778[0 /*20*/].f_6, 0, 0, 0);
	}
	if (bParam0)
	{
		bLocal_484 = true;
		if (iLocal_462 == 1)
		{
			Local_2778[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2778[0 /*20*/].f_6, 26, joaat("a_m_m_bevhills_02"), -1, 1, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2778[0 /*20*/], 1);
			PED::SET_PED_COMPONENT_VARIATION(Local_2778[0 /*20*/], 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2778[0 /*20*/], 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(Local_2778[0 /*20*/], 4, 0, 2, 0);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_02"));
		}
		else
		{
			Local_2778[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2778[0 /*20*/].f_6, 26, uLocal_2771[0], -1, 1, 1);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uLocal_2771[0]);
		}
	}
	return 1;
}


int func_307(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x2BB5E
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	*iParam4 = GlobalFunc_4892(&Local_2778);
	if (*iParam4 == -1)
	{
		return 0;
	}
	if (iLocal_2821 >= 2)
	{
		iLocal_2821 = 0;
	}
	if (iLocal_462 == 2)
	{
		iLocal_2769[0] = joaat("primo");
	}
	else if (iLocal_462 == 0)
	{
		iLocal_2769[0] = joaat("landstalker");
	}
	else if (iLocal_462 == 1)
	{
		iLocal_2769[0] = joaat("schwarzer");
	}
	else if (iLocal_462 == 3)
	{
		iLocal_2769[0] = joaat("tailgater");
	}
	else if (iLocal_462 == 4)
	{
		iLocal_2769[0] = joaat("intruder");
	}
	Local_2778[*iParam4 /*20*/].f_6 = VEHICLE::CREATE_VEHICLE(iLocal_2769[0], Param0, fParam3, 1, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2778[*iParam4 /*20*/].f_6, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_2769[0]);
	if (iLocal_462 == 3)
	{
		VEHICLE::SET_VEHICLE_COLOURS(Local_2778[*iParam4 /*20*/].f_6, 27, 27);
	}
	iLocal_2821++;
	fLocal_472 = GlobalFunc_5683(Param0, 0);
	if (iLocal_462 == 1)
	{
		fVar0 = 20f;
		fVar1 = 40f;
		fVar2 = 60f;
	}
	else
	{
		fVar0 = 4f;
		fVar1 = 20f;
		fVar2 = 40f;
	}
	if (!GlobalFunc_105(Local_692[iLocal_2646 /*23*/].f_10))
	{
		Local_2778[*iParam4 /*20*/].f_17 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Local_692[iLocal_2646 /*23*/].f_10, fVar0, 0f, 0);
	}
	else
	{
		Local_2778[*iParam4 /*20*/].f_17 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar0, 0f, 0);
	}
	Local_2778[*iParam4 /*20*/].f_18 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar1, 2.5f, 0);
	Local_2778[*iParam4 /*20*/].f_19 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(Param0, fVar2, 4f, 0);
	if (bParam5)
	{
		if (Local_2778[*iParam4 /*20*/].f_15)
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_2778[*iParam4 /*20*/].f_6, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2778[*iParam4 /*20*/].f_6, 1f);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_2778[*iParam4 /*20*/].f_6, 0);
		}
		else
		{
			VEHICLE::SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Local_2778[*iParam4 /*20*/].f_6, 1);
			VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Local_2778[*iParam4 /*20*/].f_6, 1f);
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(Local_2778[*iParam4 /*20*/].f_6, 0);
		}
	}
	if (!bLocal_2711 && bParam6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_2778[*iParam4 /*20*/].f_6))
		{
			Local_2778[*iParam4 /*20*/].f_8 = HUD::ADD_BLIP_FOR_ENTITY(Local_2778[*iParam4 /*20*/].f_6);
			HUD::SET_BLIP_COLOUR(Local_2778[*iParam4 /*20*/].f_8, 3);
		}
	}
	else
	{
		if (bLocal_2711)
		{
		}
		if (bParam6)
		{
		}
	}
	iLocal_2820++;
	GlobalFunc_7777(&(Local_2778[*iParam4 /*20*/].f_11));
	return 1;
}



int func_310(struct<3> Param0, float fParam3, var uParam4, bool bParam5)//Position - 0x2BE24
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	var uVar15;
	
	if (!func_307(Param0, fParam3, uParam4, 1, bParam5))
	{
		return 0;
	}
	if (*uParam4 == -1)
	{
	}
	VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_2778[*uParam4 /*20*/].f_6, 4, 0, 0);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(Local_2778[*uParam4 /*20*/].f_6), &Var3, &Var6);
	Var9 = { Var6 - Var3 };
	Var9 = { Var9 / Vector(2f, 2f, 2f) };
	iLocal_2705 = 1;
	Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_2778[*uParam4 /*20*/].f_6, 1.5f, 0f, 0f) };
	Var12 = { ENTITY::GET_ENTITY_COORDS(Local_2778[*uParam4 /*20*/].f_6, 1) };
	uVar15 = ENTITY::GET_ENTITY_HEADING(Local_2778[*uParam4 /*20*/].f_6);
	uLocal_2830 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var12, uVar15, -1.5f, -30f, 0f), 10f, 0f, 0);
	uLocal_2831 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var12, uVar15, -1.5f, 30f, 0f), 10f, 0f, 0);
	MISC::CLEAR_AREA_OF_VEHICLES(Var0, 30f, 0, 0, 0, 0, 0);
	Local_1912[func_497() /*28*/][0 /*3*/] = { Var0.x, Var0.f_1, (Var0.f_2 + 1f) };
	return 1;
}

int func_311(var uParam0, var uParam1)//Position - 0x2BF3C
{
	func_634();
	func_327();
	if (uParam0->f_3 == 3)
	{
		sLocal_2653[0] = "base";
		GlobalFunc_5687(&uLocal_2679, "amb@world_human_smoking@male@male_a@base");
		GlobalFunc_5687(&uLocal_2679, "oddjobs@towingcome_here");
		GlobalFunc_5687(&uLocal_2679, "move_m@JOG@");
	}
	else if ((uParam0->f_3 == 0 || uParam0->f_3 == 2) && !bLocal_2712)
	{
		GlobalFunc_5687(&uLocal_2679, "Ped");
		GlobalFunc_5687(&uLocal_2679, "oddjobs@towing");
		GlobalFunc_5687(&uLocal_2679, "oddjobs@towingangryidle_a");
		GlobalFunc_5687(&uLocal_2679, "oddjobs@towingpleadingidle_b");
		GlobalFunc_5687(&uLocal_2679, "oddjobs@towingpleadingidle_a");
		GlobalFunc_5687(&uLocal_2679, "RANDOM@BICYCLE_THIEF@IDLE_A");
		GlobalFunc_5687(&uLocal_2679, "move_m@JOG@");
	}
	if (uParam0->f_3 == 4)
	{
		cLocal_2652 = "REACTION@MALE_STAND@BIG_VARIATIONS@A";
		GlobalFunc_5687(&uLocal_2679, cLocal_2652);
		GlobalFunc_5303(&uLocal_2671, joaat("ambulance"));
		GlobalFunc_5303(&uLocal_2671, joaat("s_m_m_paramedic_01"));
		GlobalFunc_5687(&uLocal_2679, "move_m@JOG@");
		sLocal_2653[0] = "react_big_variations_a";
		sLocal_2653[1] = "react_big_variations_b";
		sLocal_2653[2] = "react_big_variations_c";
	}
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 1);
	if (uParam0->f_3 == 1)
	{
		STREAMING::REQUEST_PTFX_ASSET();
		GlobalFunc_5687(&uLocal_2679, "oddjobs@towing");
		GlobalFunc_5687(&uLocal_2679, "amb@world_human_smoking@male@male_a@base");
		GlobalFunc_5687(&uLocal_2679, "oddjobs@towingpleadingidle_b");
		GlobalFunc_5687(&uLocal_2679, "move_m@JOG@");
		GlobalFunc_5303(&uLocal_2671, joaat("freightcont1"));
		GlobalFunc_5303(&uLocal_2671, joaat("tankercar"));
		GlobalFunc_5303(&uLocal_2671, joaat("freight"));
		GlobalFunc_5303(&uLocal_2671, joaat("freightcar"));
		GlobalFunc_5303(&uLocal_2671, joaat("s_m_m_lsmetro_01"));
	}
	Local_124 = { Local_124 };
	Local_117 = { Local_117 };
	GlobalFunc_5303(&uLocal_2671, iLocal_691);
	GlobalFunc_6655(uParam1, "TOW", 2, 0);
	GlobalFunc_6655(uParam1, "DTRSHRD", 3, 0);
	GlobalFunc_1090(&uLocal_2671);
	GlobalFunc_7078(&uLocal_2679, uParam1);
	if (uParam0->f_3 == 0)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_genfat_01")))
		{
			GlobalFunc_8303(uParam1);
			SYSTEM::WAIT(0);
		}
	}
	while (!GlobalFunc_8937(uParam1))
	{
		GlobalFunc_8303(uParam1);
		SYSTEM::WAIT(0);
	}
	while (!GlobalFunc_1089(&uLocal_2671))
	{
		GlobalFunc_8303(uParam1);
		SYSTEM::WAIT(0);
	}
	if (uParam0->f_3 == 1)
	{
		while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\TOWING_TRAIN", false) || !STREAMING::HAS_PTFX_ASSET_LOADED())
		{
			GlobalFunc_8303(uParam1);
			SYSTEM::WAIT(0);
		}
	}
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		GlobalFunc_8303(uParam1);
		SYSTEM::WAIT(0);
	}
	return 1;
}
















void func_327()//Position - 0x2C659
{
	if (iLocal_462 == 2)
	{
		STREAMING::REQUEST_MODEL(joaat("primo"));
	}
	else if (iLocal_462 == 0)
	{
		STREAMING::REQUEST_MODEL(joaat("landstalker"));
		STREAMING::REQUEST_MODEL(joaat("a_m_m_genfat_01"));
	}
	else if (iLocal_462 == 1)
	{
		STREAMING::REQUEST_MODEL(joaat("schwarzer"));
		STREAMING::REQUEST_MODEL(joaat("a_m_m_bevhills_02"));
	}
	else if (iLocal_462 == 3)
	{
		STREAMING::REQUEST_MODEL(joaat("tailgater"));
		STREAMING::REQUEST_MODEL(joaat("a_m_m_tourist_01"));
	}
	else if (iLocal_462 == 4)
	{
		STREAMING::REQUEST_MODEL(joaat("intruder"));
		STREAMING::REQUEST_MODEL(joaat("s_m_m_paramedic_01"));
		STREAMING::REQUEST_MODEL(joaat("a_m_y_genstreet_02"));
		STREAMING::REQUEST_MODEL(joaat("a_m_m_bevhills_02"));
	}
	if (iLocal_462 == 2)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("primo")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_462 == 0)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("landstalker")) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_genfat_01")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_462 == 1)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("schwarzer")) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_02")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_462 == 3)
	{
		while (!STREAMING::HAS_MODEL_LOADED(joaat("tailgater")) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_tourist_01")))
		{
			SYSTEM::WAIT(0);
		}
	}
	else if (iLocal_462 == 4)
	{
		while (((!STREAMING::HAS_MODEL_LOADED(joaat("intruder")) || !STREAMING::HAS_MODEL_LOADED(joaat("s_m_m_paramedic_01"))) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_genstreet_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_02")))
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_328()//Position - 0x2C7EB
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iLocal_2933);
	}
	if (fVar0 < 1f && ((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2933, 1)))
	{
		if (!GlobalFunc_226(&uLocal_2930))
		{
			GlobalFunc_7777(&uLocal_2930);
		}
		else if (!iLocal_2752)
		{
			if (GlobalFunc_5182(&uLocal_2930) > 30f)
			{
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1 || SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]) && PED::IS_PED_IN_VEHICLE(Local_2778[0 /*20*/], iLocal_2933, 1))
						{
							if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_DAWDLE", 9, 0, 0, 0))
							{
								iLocal_2752 = 1;
							}
						}
						else if (GlobalFunc_226(&uLocal_2930))
						{
							GlobalFunc_6877(&uLocal_2930);
						}
					}
					else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
					{
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]) && PED::IS_PED_IN_VEHICLE(Local_2778[0 /*20*/], iLocal_2933, 1))
						{
							if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_DAWDLE2", 9, 0, 0, 0))
							{
								iLocal_2752 = 1;
							}
						}
						else if (GlobalFunc_226(&uLocal_2930))
						{
							GlobalFunc_6877(&uLocal_2930);
						}
					}
				}
				else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2765) && PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_2933, 1))
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TONYA_STOP", 9, 1, 0, 0))
					{
						iLocal_2752 = 1;
					}
				}
				else if (GlobalFunc_226(&uLocal_2930))
				{
					GlobalFunc_6877(&uLocal_2930);
				}
			}
		}
	}
	else if (GlobalFunc_226(&uLocal_2930))
	{
		GlobalFunc_6877(&uLocal_2930);
	}
}

void func_329()//Position - 0x2C9A3
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_468) && !ENTITY::IS_ENTITY_DEAD(iLocal_468))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_468, 1) };
		if (!iLocal_2758)
		{
			if (SYSTEM::VDIST2(Var0, Var3) > 40000f)
			{
				if ((((!ENTITY::IS_ENTITY_ON_SCREEN(iLocal_468) && !VEHICLE::IS_BIG_VEHICLE(iLocal_468)) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iLocal_468))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iLocal_468))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iLocal_468)))
				{
					if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya1")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_468, 417.5827f, -1645.575f, 28.2928f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_468, 230.2828f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_468, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_468, 1);
						GlobalFunc_9754(iLocal_468, 417.5827f, -1645.575f, 28.2928f, 230.2828f, 24, 0);
					}
					else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya2")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_468, 417.5827f, -1645.575f, 28.2928f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_468, 230.2828f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_468, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_468, 1);
						GlobalFunc_9754(iLocal_468, 417.5827f, -1645.575f, 28.2928f, 230.2828f, 24, 0);
					}
					else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya3")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_468, -214.5613f, -1397.907f, 30.2688f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_468, 176.0831f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_468, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_468, 1);
						GlobalFunc_9754(iLocal_468, -214.5613f, -1397.907f, 30.2688f, 176.0831f, 24, 0);
					}
					else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_468, 537.5104f, -168.8889f, 53.5066f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_468, 358.4492f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_468, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_468, 1);
						GlobalFunc_9754(iLocal_468, 537.5104f, -168.8889f, 53.5066f, 358.4492f, 24, 0);
					}
					else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_468, 417.5827f, -1645.575f, 28.2928f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_468, 230.2828f);
						VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_468, 0);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_468, 1);
						GlobalFunc_9754(iLocal_468, 417.5827f, -1645.575f, 28.2928f, 230.2828f, 24, 0);
					}
					iLocal_2758 = 1;
				}
			}
		}
	}
}










































void func_371()//Position - 0x2FCB6
{
	int iVar0;
	
	if (bLocal_2741)
	{
		if (!iLocal_2744)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
			{
				iVar0 = VEHICLE::GET_ENTITY_ATTACHED_TO_TOW_TRUCK(iLocal_2933);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
					{
						if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0) != Local_2778[0 /*20*/].f_6)
						{
							if (!iLocal_2722)
							{
								GlobalFunc_173(&Local_2390, 3, iLocal_2765, "TONYA", 0, 1);
								GlobalFunc_159("TOW_TUT_07", -1);
								if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TONYA_WRONG", 9, 0, 0, 0))
								{
									iLocal_2722 = 1;
								}
							}
						}
					}
				}
				else
				{
					iLocal_2722 = 0;
				}
			}
		}
	}
}













































void func_416()//Position - 0x3453C
{
	int iVar0;
	
	if (!bLocal_2696)
	{
		iVar0 = SYSTEM::ROUND(((300f - GlobalFunc_5425(&uLocal_2900)) * 1000f));
		if (iLocal_462 == 3)
		{
			if ((iVar0 / 1000) < 60)
			{
				GlobalFunc_5277(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
			}
			else
			{
				GlobalFunc_5277(iVar0, "TOW_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
			}
		}
	}
}





void func_421()//Position - 0x3472F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (HUD::DOES_BLIP_EXIST(Local_322[iVar0 /*3*/].f_1))
		{
			if (ENTITY::IS_ENTITY_DEAD(Local_322[iVar0 /*3*/]))
			{
				HUD::REMOVE_BLIP(&(Local_322[iVar0 /*3*/].f_1));
			}
			else if (Local_322[iVar0 /*3*/].f_2 && GlobalFunc_5682(Local_322[iVar0 /*3*/], 1) > 200f)
			{
				HUD::REMOVE_BLIP(&(Local_322[iVar0 /*3*/].f_1));
			}
		}
		iVar0++;
	}
}

void func_422()//Position - 0x347A8
{
	if (!MISC::ARE_STRINGS_EQUAL(&cLocal_314, ""))
	{
		if (!GlobalFunc_111())
		{
			GlobalFunc_10618(&Local_138, &cLocal_314, &cLocal_318, 9, 0, 0, 0);
			StringCopy(&cLocal_314, "", 16);
		}
	}
}

void func_423(var uParam0, float fParam1, bool bParam2)//Position - 0x347DE
{
	if (GlobalFunc_7950(uParam0, fParam1))
	{
		if (bParam2)
		{
			GlobalFunc_159(&cLocal_359, -1);
		}
		else
		{
			GlobalFunc_164(&cLocal_359, 7500, 1);
		}
	}
}




















int func_443(bool bParam0)//Position - 0x355B1
{
	if (bLocal_509 || iLocal_508)
	{
		return 0;
	}
	if (bParam0)
	{
		if (bLocal_510)
		{
			return 0;
		}
	}
	return 1;
}


int func_445(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x355EC
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!GlobalFunc_747(*uParam2, 1))
		{
			if (GlobalFunc_7075(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 4))
		{
			if (GlobalFunc_7074(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!GlobalFunc_747(*uParam2, 8))
		{
			if (GlobalFunc_2266(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !GlobalFunc_747(*uParam2, 128);
		if (bParam4)
		{
			if (func_446(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!GlobalFunc_747(*uParam2, 16))
		{
			if (func_446(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_446(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x35714
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_437)
		{
			iLocal_438 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_437 = true;
		}
		iLocal_439 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_440 = (iLocal_438 - iLocal_439);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_440) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_437)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_440) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (GlobalFunc_2265(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && GlobalFunc_5682(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}







void func_453(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5, char* sParam6, var uParam7, int iParam8, bool bParam9, var uParam10)//Position - 0x35C5C
{
	int iVar0;
	
	(*uParam4)[0] = (*uParam4)[0];
	iParam5 = iParam5;
	iVar0 = iVar0;
	bParam9 = bParam9;
	iVar0 = 0;
	while (iVar0 < iParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam4)[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0]) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (func_445((*uParam4)[iVar0], 0, &uLocal_454, &iLocal_461, 0, 1, 0, 1, 1))
				{
					TASK::TASK_SMART_FLEE_PED((*uParam4)[iVar0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
				}
			}
		}
		iVar0++;
	}
	switch (*uParam0)
	{
		case 0:
			if (GlobalFunc_7606(iParam1, iParam3, &iLocal_2645, 20, 70f, 65f, 0))
			{
				iLocal_2645 = 0;
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam2))
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(iParam2, iParam1, 50f, 786469);
					PED::SET_PED_KEEP_TASK(iParam2, 1);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iParam2);
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam1);
				}
				*uParam0 = 2;
			}
			break;
		
		case 2:
			if (bLocal_510)
			{
				GlobalFunc_6877(&uLocal_2555);
				*uParam0 = 3;
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam4)[iVar0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0]))
					{
						if (GlobalFunc_5682((*uParam4)[iVar0], 1) < 55f)
						{
							iLocal_513 = iVar0;
							iLocal_513 = iLocal_513;
							GlobalFunc_6877(&uLocal_2555);
							*uParam0 = 3;
						}
					}
				}
				iVar0++;
			}
			break;
		
		case 3:
			if (!GlobalFunc_105(Local_1912[func_497() /*28*/].f_17))
			{
				GlobalFunc_2275(uLocal_2389, Local_1912[func_497() /*28*/].f_17, Local_1912[func_497() /*28*/].f_20);
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
			{
				if (!iLocal_499)
				{
					GlobalFunc_173(&uLocal_526, 3, *iParam8, "TONYA", 0, 1);
					if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_499 = 1;
					}
				}
			}
			iVar0 = 0;
			while (iVar0 < iParam5)
			{
				if (!ENTITY::IS_ENTITY_DEAD((*uParam4)[iVar0]))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
					TASK::TASK_PLAY_ANIM(0, sParam6, (*uParam7)[iVar0], 4f, -4f, MISC::GET_RANDOM_INT_IN_RANGE(10000, 20000), 0, 0, 0, 0, 0);
					TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
					TASK::TASK_PERFORM_SEQUENCE((*uParam4)[iVar0], uLocal_463);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
				}
				iVar0++;
			}
			*uParam0 = 5;
			break;
		
		case 4:
			break;
		
		case 5:
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
			{
				if (!iLocal_499)
				{
					GlobalFunc_173(&uLocal_526, 3, *iParam8, "TONYA", 0, 1);
					if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TOW_ACC_TNYA", 9, 0, 0, 0))
					{
						iLocal_499 = 1;
					}
				}
				if (!iLocal_511)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iParam3) && !ENTITY::IS_ENTITY_DEAD(*uParam10))
					{
						if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam3, *uParam10))
						{
							if (!GlobalFunc_226(&uLocal_2570))
							{
								GlobalFunc_7777(&uLocal_2570);
							}
							else if (GlobalFunc_5182(&uLocal_2570) > 20f)
							{
								if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TOW_WAITING2", 9, 0, 0, 0))
								{
									iLocal_511 = 1;
								}
							}
						}
					}
				}
			}
			break;
	}
}


int func_455(var uParam0, var uParam1, struct<3> Param2, var uParam5, var uParam6, var uParam7, float fParam8, char* sParam9, var uParam10, int iParam11)//Position - 0x35FB4
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6;
	
	Var3 = { *(uParam0[0 /*3*/]) };
	Var3.f_2 = (Var3.f_2 + 1f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var3, &uVar0) || GlobalFunc_5683(*(uParam0[0 /*3*/]), 0) < 60f)
	{
		func_457(uParam1);
		MISC::CLEAR_AREA_OF_PEDS(Param2, 28f, 0);
		(uParam0[0 /*3*/])->f_2 = uVar0;
		iVar2 = 0;
		while (iVar2 < iParam11)
		{
			if (fParam8 == -1f)
			{
				fParam8 = GlobalFunc_830(*(uParam0[iVar2 /*3*/]), Param2);
			}
			else
			{
				fParam8 = (fParam8 + 180f);
			}
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya4")) == 1)
			{
				iVar1 = PED::CREATE_PED(4, joaat("a_m_m_tourist_01"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 4, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iVar1, 10, 1, 1, 0);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_tourist_01"));
			}
			else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("tonya5")) == 1)
			{
				if (iVar2 == 0)
				{
					iVar1 = PED::CREATE_PED(4, joaat("a_m_y_genstreet_02"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_genstreet_02"));
				}
				else
				{
					iVar1 = PED::CREATE_PED(4, joaat("a_m_m_bevhills_02"), *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_02"));
				}
			}
			else
			{
				iVar1 = PED::CREATE_PED(4, (*uParam7)[(iVar2 % 2)], *(uParam0[iVar2 /*3*/]), fParam8, 1, 1);
			}
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar1, 1);
			fParam8 = -1f;
			if (iParam11 > 1)
			{
				(*uParam6)[iVar2] = iVar1;
			}
			else
			{
				*uParam5 = iVar1;
			}
			sParam9 = sParam9;
			(*uParam10)[iVar2] = (*uParam10)[iVar2];
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, 1);
			PED::SET_PED_CONFIG_FLAG(iVar1, 42, 1);
			PED::SET_PED_MOVEMENT_CLIPSET(iVar1, "move_m@JOG@", 1048576000);
			PED::SET_PED_RESET_FLAG(iVar1, 109, 1);
			if (iLocal_462 == 3)
			{
				TASK::CLEAR_SEQUENCE_TASK(&uVar6);
				TASK::OPEN_SEQUENCE_TASK(&uVar6);
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_a", 4f, -4f, -1, 49, 0, 0, 0, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
				TASK::CLOSE_SEQUENCE_TASK(uVar6);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1))
				{
					TASK::TASK_PERFORM_SEQUENCE(iVar1, uVar6);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uVar6);
			}
			iVar2++;
		}
		bLocal_484 = true;
		return 1;
	}
	else if (GlobalFunc_5683(*(uParam0[0 /*3*/]), 0) < 70f)
	{
	}
	return 0;
}


void func_457(var uParam0)//Position - 0x36219
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_2598[iVar0 /*18*/].f_2 = { *(uParam0[iVar0 /*3*/]) };
		Local_2598[iVar0 /*18*/].f_5 = { 0f, 0f, -1f };
		if (iVar0 == 0)
		{
			Local_2598[iVar0 /*18*/].f_8 = { GlobalFunc_107(MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), MISC::GET_RANDOM_FLOAT_IN_RANGE(0, 1065353216), 0f) };
		}
		else
		{
			Local_2598[iVar0 /*18*/].f_8 = { GlobalFunc_107(0.5f, 1f, 0f) };
		}
		Local_2598[iVar0 /*18*/].f_11 = 2f;
		Local_2598[iVar0 /*18*/].f_12 = 1f;
		Local_2598[iVar0 /*18*/].f_13 = 1f;
		Local_2598[iVar0 /*18*/].f_14 = -1f;
		Local_2598[iVar0 /*18*/].f_15 = 0.1f;
		Local_2598[iVar0 /*18*/].f_17 = 0;
		Local_2598[iVar0 /*18*/].f_1 = 1110;
		Local_2598[iVar0 /*18*/] = GRAPHICS::ADD_DECAL(Local_2598[iVar0 /*18*/].f_1, Local_2598[iVar0 /*18*/].f_2, Local_2598[iVar0 /*18*/].f_5, Local_2598[iVar0 /*18*/].f_8, Local_2598[iVar0 /*18*/].f_11, Local_2598[iVar0 /*18*/].f_12, 0.196f, 0f, 0f, 1f, -1f, 0, 0, 0);
		iVar0++;
	}
}


int func_459()//Position - 0x36375
{
	if (iLocal_2640 == -1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(Local_2778[0 /*20*/].f_6, -1) == Local_2778[0 /*20*/])
			{
				GlobalFunc_5694("ENGINE_FAIL", &iLocal_2640, 1, Local_2778[0 /*20*/].f_6, 0f, 0f, 0f, "TONYA_03_SOUNDSET");
			}
			else
			{
				GlobalFunc_894(&iLocal_2640);
			}
		}
	}
	switch (iLocal_2945)
	{
		case 0:
			GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			GlobalFunc_173(&Local_2390, iLocal_2838, Local_2778[0 /*20*/], sLocal_2657, 0, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2778[0 /*20*/], 1);
			iLocal_2823 = MISC::GET_RANDOM_INT_IN_RANGE(35, 80);
			iLocal_2945 = 1;
			break;
		
		case 1:
			TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
			TASK::TASK_PLAY_ANIM(0, "oddjobs@towing", "Start_Engine_Loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
			if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
			{
				TASK::TASK_PERFORM_SEQUENCE(Local_2778[0 /*20*/], uLocal_463);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
			if (GlobalFunc_5683(Local_692[iLocal_2646 /*23*/].f_1, 1) < 40f || Local_2775.f_1 > 0)
			{
				GlobalFunc_173(&Local_2390, iLocal_2838, Local_2778[0 /*20*/], "TOWTRAINM", 0, 1);
				GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TRN_PEDA", 8, 0, 0, 0);
				iLocal_2945 = 2;
			}
			else if (GlobalFunc_2264(Local_2778[0 /*20*/].f_7, Local_692[iLocal_2646 /*23*/].f_1, 1) < IntToFloat(iLocal_2823 + 10))
			{
				TASK::TASK_PLAY_ANIM(0, "oddjobs@towing", "Start_Engine_Exit", 8f, -8f, -1, 0, 0, 0, 0, 0);
				iLocal_2945 = 2;
			}
			break;
		
		case 2:
			if (!GlobalFunc_105(Local_692[iLocal_2646 /*23*/].f_13))
			{
				Local_692[iLocal_2646 /*23*/].f_13.f_2 = 45f;
				Local_692[iLocal_2646 /*23*/].f_16.f_2 = -45f;
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2778[0 /*20*/].f_6, Local_692[iLocal_2646 /*23*/].f_13, Local_692[iLocal_2646 /*23*/].f_16, Local_692[iLocal_2646 /*23*/].f_19, 0, 1, 0))
				{
					GlobalFunc_173(&Local_2390, 3, Local_2778[0 /*20*/], "TOWTRAINM", 0, 1);
					GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TRN_PUSH", 9, 0, 0, 0);
					GlobalFunc_894(&iLocal_2640);
					iLocal_2702 = 1;
					iLocal_2709 = 1;
					bLocal_469 = true;
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2778[0 /*20*/], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_b", "idle_d", 4f, -4f, 10000, 16, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_2778[0 /*20*/], uLocal_463);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
						PED::SET_PED_MOVEMENT_CLIPSET(Local_2778[0 /*20*/], "move_m@JOG@", 1048576000);
						iLocal_2945 = 4;
					}
				}
			}
			if (GlobalFunc_2264(Local_2778[0 /*20*/].f_7, Local_692[iLocal_2646 /*23*/].f_1, 1) < IntToFloat(iLocal_2823 + 15))
			{
				GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TRN_PEDA", 9, 0, 0, 0);
				GlobalFunc_894(&iLocal_2640);
				TASK::TASK_LOOK_AT_ENTITY(Local_2778[0 /*20*/], Local_2778[0 /*20*/].f_7, -1, 2, 2);
				SYSTEM::SETTIMERB(0);
				iLocal_2945 = 3;
			}
			break;
		
		case 3:
			if (GlobalFunc_2264(Local_2778[0 /*20*/].f_7, Local_692[iLocal_2646 /*23*/].f_1, 1) < IntToFloat(iLocal_2823))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
				{
					if (iLocal_2822 == 1)
					{
						GlobalFunc_4894(&Local_2775);
					}
					iLocal_2702 = 1;
					if (PED::IS_PED_IN_ANY_VEHICLE(Local_2778[0 /*20*/], 0))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_GO_TO_COORD_ANY_MEANS(0, OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Local_692[iLocal_2646 /*23*/].f_1, Local_692[iLocal_2646 /*23*/].f_4, 0f, 15f, 0f), 3f, 0, 0, 786603, -1082130432);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
						PED::SET_PED_FLEE_ATTRIBUTES(Local_2778[0 /*20*/], 64, 0);
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_2778[0 /*20*/], uLocal_463);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
						iLocal_2945 = 4;
					}
				}
			}
			break;
		
		case 4:
			if ((iLocal_2944 == 8 && bLocal_510) || func_460())
			{
				SYSTEM::SETTIMERB(3000);
				iLocal_2945 = 5;
			}
			break;
		
		case 5:
			iLocal_2708 = 1;
			if (SYSTEM::TIMERB() > 3000)
			{
				if (func_294(&iLocal_2942, 0, "TOW_TRAIN1"))
				{
					iLocal_2945 = 6;
				}
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

int func_460()//Position - 0x367F2
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
	{
		if (bLocal_469)
		{
			switch (iLocal_2840)
			{
				case 0:
					if (TASK::GET_SEQUENCE_PROGRESS(Local_2778[0 /*20*/]) == 1)
					{
						iLocal_2840 = 1;
					}
					break;
				
				case 1:
					if (!ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2778[0 /*20*/], "oddjobs@towingpleadingidle_b", "idle_d", 3))
					{
						iLocal_2840 = 2;
					}
					break;
				
				case 2:
					return 1;
					break;
				}
			}
	}
	return 0;
}



int func_463()//Position - 0x368FC
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
	{
		if (PED::IS_PED_IN_VEHICLE(Local_2778[0 /*20*/], iLocal_2933, 0))
		{
			if (HUD::DOES_BLIP_EXIST(Local_2778[0 /*20*/].f_10))
			{
				HUD::REMOVE_BLIP(&(Local_2778[0 /*20*/].f_10));
				GlobalFunc_894(&iLocal_2640);
			}
		}
		else if (!PED::IS_PED_IN_VEHICLE(Local_2778[0 /*20*/], Local_2778[0 /*20*/].f_6, 0))
		{
			GlobalFunc_894(&iLocal_2640);
		}
	}
	func_467();
	switch (iLocal_2944)
	{
		case 0:
			if (GlobalFunc_5683(Local_692[iLocal_2646 /*23*/].f_1, 1) < 100f)
			{
				Local_2778[0 /*20*/].f_7 = VEHICLE::CREATE_MISSION_TRAIN(6, Local_692[iLocal_2646 /*23*/].f_6, Local_692[iLocal_2646 /*23*/].f_5);
				if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/].f_7))
				{
					Local_2778[0 /*20*/].f_10 = HUD::ADD_BLIP_FOR_ENTITY(Local_2778[0 /*20*/].f_7);
				}
				iLocal_2764 = PED::CREATE_PED_INSIDE_VEHICLE(Local_2778[0 /*20*/].f_7, 4, joaat("s_m_m_lsmetro_01"), -1, 1, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2764, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("s_m_m_lsmetro_01"));
				if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_7))
				{
					VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_2778[0 /*20*/].f_7, 0f);
				}
				GlobalFunc_164("TOW_OBJ_05", 7500, 1);
				SYSTEM::SETTIMERA(0);
				GlobalFunc_5694("CROSSING_BELL", &iLocal_2641, 1, 0, 226.8878f, -2538.421f, 4.8665f, "TONYA_03_SOUNDSET");
				iLocal_2944 = 1;
			}
			break;
		
		case 1:
			if (GlobalFunc_5683(Local_692[iLocal_2646 /*23*/].f_1, 1) < 80f || SYSTEM::TIMERA() > 10000)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					AUDIO::START_AUDIO_SCENE("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_2944 = 2;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_7))
			{
				VEHICLE::SET_TRAIN_CRUISE_SPEED(Local_2778[0 /*20*/].f_7, 26f);
				VEHICLE::SET_TRAIN_SPEED(Local_2778[0 /*20*/].f_7, 22f);
			}
			iLocal_2944 = 3;
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
			{
				if (GlobalFunc_2264(Local_2778[0 /*20*/].f_7, Local_692[iLocal_2646 /*23*/].f_1, 1) < 175f)
				{
					func_466(Local_2778[0 /*20*/].f_7);
					GlobalFunc_5694("TRAIN_BREAKS", &iLocal_2639, 1, Local_2778[0 /*20*/].f_7, 0f, 0f, 0f, "TONYA_03_SOUNDSET");
					GlobalFunc_4896(&uLocal_2952, Local_2778[0 /*20*/].f_7);
					GlobalFunc_5694("TRAIN_HORN", &iLocal_2638, 1, Local_2778[0 /*20*/].f_7, 0f, 0f, 0f, "TONYA_03_SOUNDSET");
					iLocal_2944 = 4;
				}
			}
			else
			{
				iLocal_2944 = 8;
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
			{
				func_466(Local_2778[0 /*20*/].f_7);
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2778[0 /*20*/].f_6, Local_692[iLocal_2646 /*23*/].f_13, Local_692[iLocal_2646 /*23*/].f_16, Local_692[iLocal_2646 /*23*/].f_19, 0, 1, 0))
				{
					GlobalFunc_4895(&uLocal_2952);
				}
				Var0 = { ENTITY::GET_ENTITY_COORDS(Local_2778[0 /*20*/].f_7, 1) };
				if (GlobalFunc_2264(Local_2778[0 /*20*/].f_7, Local_692[iLocal_2646 /*23*/].f_1, 1) < 3f)
				{
					iLocal_2692 = 1;
				}
				if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2778[0 /*20*/].f_7, Local_2778[0 /*20*/].f_6))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
						{
							VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6);
						}
					}
					VEHICLE::EXPLODE_VEHICLE(Local_2778[0 /*20*/].f_6, 1, 0);
					iLocal_2944 = 6;
				}
				else if (GlobalFunc_2264(Local_2778[0 /*20*/].f_6, Var0, 1) < 10f && ENTITY::IS_ENTITY_IN_ANGLED_AREA(Local_2778[0 /*20*/].f_6, Local_692[iLocal_2646 /*23*/].f_13, Local_692[iLocal_2646 /*23*/].f_16, Local_692[iLocal_2646 /*23*/].f_19, 0, 1, 0))
				{
					iLocal_2692 = 1;
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
						{
							VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6);
						}
					}
					VEHICLE::EXPLODE_VEHICLE(Local_2778[0 /*20*/].f_6, 1, 0);
				}
				if (iLocal_2692 && GlobalFunc_2264(Local_2778[0 /*20*/].f_7, Local_692[iLocal_2646 /*23*/].f_1, 1) > 4f)
				{
					iLocal_2944 = 6;
				}
			}
			else
			{
				iLocal_2944 = 6;
			}
			break;
		
		case 6:
			if (!bLocal_509)
			{
				if (!bLocal_510)
				{
					GlobalFunc_164("TOWT_OBJ_03G", 7500, 1);
				}
			}
			else
			{
				StringCopy(&cLocal_2862, "TOWT_OBJ_03G", 64);
			}
			GlobalFunc_894(&iLocal_2638);
			GlobalFunc_894(&iLocal_2639);
			GlobalFunc_4895(&uLocal_2952);
			GlobalFunc_894(&iLocal_2640);
			GlobalFunc_894(&iLocal_2641);
			iLocal_2944 = 7;
			break;
		
		case 7:
			if (!GlobalFunc_111())
			{
				if (!bLocal_509)
				{
					if (!bLocal_510)
					{
						GlobalFunc_164("TOWT_OBJ_03G", 7500, 1);
					}
				}
				else
				{
					StringCopy(&cLocal_2862, "TOWT_OBJ_03G", 64);
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOWING_ONCOMING_TRAIN_SCENE"))
				{
					AUDIO::STOP_AUDIO_SCENE("TOWING_ONCOMING_TRAIN_SCENE");
				}
				iLocal_2944 = 8;
			}
			break;
		
		case 8:
			break;
	}
	return 0;
}



int func_466(int iParam0)//Position - 0x36FE2
{
	float fVar0;
	
	if (!GlobalFunc_226(&uLocal_2635))
	{
		GlobalFunc_7777(&uLocal_2635);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		}
		else
		{
			return 0;
		}
	}
	if (GlobalFunc_7084(&uLocal_2635, 0.15f))
	{
		fLocal_2642 = (fVar0 - 0.35f);
		if (fLocal_2642 < 8f)
		{
			fLocal_2642 = 8f;
		}
		GlobalFunc_6877(&uLocal_2635);
		VEHICLE::SET_TRAIN_CRUISE_SPEED(iParam0, fLocal_2642);
		VEHICLE::SET_TRAIN_SPEED(iParam0, fLocal_2642);
	}
	return 1;
}

void func_467()//Position - 0x37066
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Local_2778[0 /*20*/].f_7, Local_2778[0 /*20*/].f_6))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
				{
					VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6);
				}
			}
			VEHICLE::EXPLODE_VEHICLE(Local_2778[0 /*20*/].f_6, 1, 0);
		}
	}
}

int func_468()//Position - 0x370F3
{
	switch (iLocal_2943)
	{
		case 0:
			if (bLocal_2716)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
				{
					Local_2778[0 /*20*/] = PED::CREATE_PED_INSIDE_VEHICLE(Local_2778[0 /*20*/].f_6, 26, uLocal_2771[0], 0, 1, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uLocal_2771[0]);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2778[0 /*20*/], 1);
					PED::SET_PED_CONFIG_FLAG(Local_2778[0 /*20*/], 42, 1);
					GlobalFunc_173(&Local_2390, iLocal_2838, Local_2778[0 /*20*/], sLocal_2657, 0, 1);
					TASK::TASK_PLAY_ANIM(Local_2778[0 /*20*/], "RANDOM@CAR_SLEEPING", "Sleeping_Idle", 8f, -8f, -1, 1, 0, 0, 0, 0);
					bLocal_484 = true;
				}
			}
			else if (GlobalFunc_745())
			{
				bLocal_2715 = false;
			}
			else
			{
				bLocal_2715 = false;
			}
			iLocal_2943 = 1;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
				{
					if (!bLocal_2716)
					{
						GlobalFunc_7260(&uLocal_2903, 1f);
					}
					else
					{
						GlobalFunc_7777(&uLocal_2903);
					}
				}
			}
			if (GlobalFunc_226(&uLocal_2903) && GlobalFunc_5182(&uLocal_2903) > 1f)
			{
				if (GlobalFunc_226(&uLocal_2903))
				{
					if (bLocal_2716)
					{
						if ((Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAbandonCompleted % 2) == 0)
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
							{
								TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_GO_TO_ENTITY(0, iLocal_2933, 20000, 9f, 1f, 1073741824, 0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_PLAY_ANIM(0, "oddjobs@towingangryidle_a", "idle_b", -8f, 0.25f, 7000, 0, 0, 0, 0, 0);
								TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
								if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
								{
									TASK::TASK_PERFORM_SEQUENCE(Local_2778[0 /*20*/], uLocal_463);
								}
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
							}
							GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_HOM_ANGR", 9, 0, 0, 0);
						}
						else
						{
							if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
							{
								GlobalFunc_4897(Local_2778[0 /*20*/]);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2778[0 /*20*/], 0, 0);
								PED::SET_PED_COMBAT_ATTRIBUTES(Local_2778[0 /*20*/], 1, 0);
								TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
								TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
								if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
								{
									TASK::TASK_PERFORM_SEQUENCE(Local_2778[0 /*20*/], uLocal_463);
								}
								TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
								if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/]))
								{
									uLocal_2767 = HUD::ADD_BLIP_FOR_ENTITY(Local_2778[0 /*20*/]);
									HUD::SET_BLIP_COLOUR(uLocal_2767, 1);
									HUD::SET_BLIP_SCALE(uLocal_2767, 0.7f);
									func_473(Local_2778[0 /*20*/], uLocal_2767, 1);
								}
								bLocal_2715 = true;
							}
							GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_HOM_DRG", 9, 0, 0, 0);
						}
						iLocal_2943 = 2;
					}
					else if (bLocal_2715)
					{
						Local_2778[0 /*20*/] = PED::CREATE_PED(4, uLocal_2771[0], Local_692[iLocal_2646 /*23*/].f_6, Local_692[iLocal_2646 /*23*/].f_9, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2778[0 /*20*/], 1);
						PED::SET_PED_CONFIG_FLAG(Local_2778[0 /*20*/], 42, 1);
						bLocal_484 = true;
						sLocal_2651 = "TOW_PED_ANGR";
						bLocal_484 = false;
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
							TASK::TASK_GO_TO_ENTITY(0, iLocal_2933, 20000, 15f, 3f, 1073741824, 0);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
							TASK::TASK_PERFORM_SEQUENCE(Local_2778[0 /*20*/], uLocal_463);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
						}
						iLocal_2943 = 3;
					}
					else
					{
						Local_2778[0 /*20*/] = PED::CREATE_PED(4, joaat("a_m_m_genfat_01"), Local_692[iLocal_2646 /*23*/].f_6, Local_692[iLocal_2646 /*23*/].f_9, 1, 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_2778[0 /*20*/], 1);
						PED::SET_PED_CONFIG_FLAG(Local_2778[0 /*20*/], 42, 1);
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(Local_2778[0 /*20*/], 1);
						PED::SET_PED_MOVEMENT_CLIPSET(Local_2778[0 /*20*/], "move_m@JOG@", 1048576000);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_genfat_01"));
						GlobalFunc_173(&Local_2390, 6, Local_2778[0 /*20*/], "TOWILLEGALMAN1", 0, 1);
						bLocal_484 = true;
						sLocal_2651 = "TOW_ILLEG2";
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
							TASK::TASK_GOTO_ENTITY_OFFSET(0, PLAYER::PLAYER_PED_ID(), 20000, 8f, 0f, 2f, 0);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
							if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
							{
								TASK::TASK_PERFORM_SEQUENCE(Local_2778[0 /*20*/], uLocal_463);
							}
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
						}
						iLocal_2943 = 3;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(Local_2778[0 /*20*/], 0))
				{
					if (bLocal_2716)
					{
						if (!GlobalFunc_111())
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_2778[0 /*20*/], 242628503) == 1)
							{
								if (TASK::GET_SEQUENCE_PROGRESS(Local_2778[0 /*20*/]) == 2)
								{
									if ((Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAbandonCompleted % 2) == 0)
									{
										GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_HOM_ANG1", 9, 0, 0, 0);
									}
									else
									{
										GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_HOM_ANG2", 9, 0, 0, 0);
									}
									iLocal_2943 = 8;
								}
							}
						}
					}
					else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
					{
						if (func_471() || !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
						{
							GlobalFunc_4935();
							iLocal_2943 = 5;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
			{
				if (GlobalFunc_156(Local_2778[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1) < 12f)
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
					{
						TASK::CLEAR_PED_TASKS(Local_2778[0 /*20*/]);
					}
					if (bLocal_2715)
					{
						TASK::TASK_COMBAT_PED(Local_2778[0 /*20*/], PLAYER::PLAYER_PED_ID(), 0, 16);
					}
					else if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_463);
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
						TASK::TASK_PLAY_ANIM(0, "oddjobs@towingpleadingidle_a", "idle_c", -8f, 0.25f, -1, 1, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_463);
						if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
						{
							TASK::TASK_PERFORM_SEQUENCE(Local_2778[0 /*20*/], uLocal_463);
						}
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_463);
					}
					iLocal_2704 = 1;
					SYSTEM::SETTIMERB(0);
					GlobalFunc_6877(&uLocal_2897);
					iLocal_2943 = 4;
				}
			}
			break;
		
		case 4:
			GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			GlobalFunc_173(&Local_2390, iLocal_2838, Local_2778[0 /*20*/], sLocal_2657, 0, 1);
			bLocal_2710 = true;
			func_470(Local_2390, "TOWAUD", sLocal_2651, 0);
			SYSTEM::SETTIMERA(0);
			if (bLocal_2715)
			{
				GlobalFunc_6877(&uLocal_2897);
				iLocal_2943 = 6;
			}
			else
			{
				iLocal_2943 = 6;
			}
			break;
		
		case 5:
			if (!GlobalFunc_111())
			{
				GlobalFunc_6877(&uLocal_2897);
				if ((!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
					{
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Local_2778[0 /*20*/], Local_2778[0 /*20*/].f_6, 0f, 0f, 0f, 2f, -1, 10f, 1);
					}
				}
				iLocal_2943 = 6;
			}
			break;
		
		case 6:
			func_469(0);
			if (!bLocal_2721)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6))
					{
						iLocal_2943 = 7;
					}
					else
					{
						iLocal_2943 = 7;
					}
				}
			}
			break;
		
		case 7:
			func_469(0);
			if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/]))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(Local_2778[0 /*20*/], 0) && ((!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6)) && !VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6)))
				{
					if (bLocal_2715)
					{
						sLocal_2651 = "TOW_PED_ANTH";
					}
					bLocal_2720 = true;
					GlobalFunc_10618(&Local_2390, "TOWAUD", sLocal_2651, 9, 0, 0, 0);
					bLocal_2710 = false;
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_2778[0 /*20*/], Local_2778[0 /*20*/].f_6, 5f, 786597);
					iLocal_2943 = 8;
					return 1;
				}
			}
			break;
		
		case 8:
			iLocal_2704 = 0;
			bLocal_2710 = false;
			if (HUD::DOES_BLIP_EXIST(Local_2778[0 /*20*/].f_9))
			{
				HUD::REMOVE_BLIP(&(Local_2778[0 /*20*/].f_9));
			}
			break;
	}
	return 0;
}

void func_469(bool bParam0)//Position - 0x37917
{
	int iVar0;
	float fVar1;
	
	iVar0 = 0;
	fVar1 = GlobalFunc_156(Local_2778[0 /*20*/], Local_2778[0 /*20*/].f_6, 1);
	if (bParam0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_6))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iLocal_2933, Local_2778[0 /*20*/].f_6) && !PED::IS_PED_IN_VEHICLE(Local_2778[0 /*20*/], Local_2778[0 /*20*/].f_6, 0))
			{
				iVar0 = 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_2778[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PLAYER::PLAYER_PED_ID(), Local_2778[0 /*20*/], 1))
		{
			GlobalFunc_6877(&uLocal_2897);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_2778[0 /*20*/]);
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
		}
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
	{
		iLocal_2943 = 8;
	}
	else if (((fVar1 > 25f || (GlobalFunc_5182(&uLocal_2897) > 30f && fVar1 > 5f)) || iVar0) || (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)))
	{
		Local_2761[0] = Local_2778[0 /*20*/];
		Local_2761[1] = Local_2778[0 /*20*/].f_1;
		bLocal_2721 = true;
		Local_2761 = { Local_2761 };
		HUD::REMOVE_BLIP(&(Local_2778[0 /*20*/].f_9));
		if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
		{
			TASK::CLEAR_PED_TASKS(Local_2778[0 /*20*/]);
			TASK::TASK_SMART_FLEE_PED(Local_2778[0 /*20*/], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		}
		iLocal_2943 = 8;
	}
}

void func_470(struct<165> Param0, char* sParam165, char* sParam166, bool bParam167)//Position - 0x37A9D
{
	if (bParam167)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	StringCopy(&cLocal_314, sParam165, 16);
	StringCopy(&cLocal_318, sParam166, 16);
	Local_138 = { Param0 };
}

int func_471()//Position - 0x37AC8
{
	struct<6> Var0;
	
	switch (iLocal_2946)
	{
		case 0:
			if (TASK::GET_SEQUENCE_PROGRESS(Local_2778[0 /*20*/]) >= 1 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				iLocal_2946 = 1;
			}
			break;
		
		case 1:
			Var0 = { GlobalFunc_2209() };
			if (uLocal_2723 && !iLocal_2724)
			{
				if (!GlobalFunc_111())
				{
					if (!iLocal_2725)
					{
						GlobalFunc_164("TOWT_OBJ_06", 7500, 1);
						iLocal_2725 = 1;
					}
					if (iLocal_2725 && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_SEX_SCAR", 9, 0, 0, 0))
						{
							iLocal_2724 = 1;
							iLocal_2946 = 2;
						}
					}
				}
			}
			if (MISC::ARE_STRINGS_EQUAL(&Var0, "TOW_SEX_SCAR_2"))
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(Local_2778[0 /*20*/], -875674219) != 1)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_2778[0 /*20*/], Local_2778[0 /*20*/].f_1, 0);
					}
				}
			}
			if (GlobalFunc_5682(Local_2778[0 /*20*/], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				return 1;
			}
			break;
		
		case 2:
			if (GlobalFunc_5682(Local_2778[0 /*20*/], 1) > 20f)
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				return 1;
			}
			if (!GlobalFunc_111())
			{
				return 1;
			}
			break;
	}
	return 0;
}


int func_473(int iParam0, var uParam1, int iParam2)//Position - 0x37C47
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Local_322[iVar0 /*3*/] == iParam0 && !HUD::DOES_BLIP_EXIST(Local_322[iVar0 /*3*/].f_1))
		{
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!HUD::DOES_BLIP_EXIST(Local_322[iVar0 /*3*/].f_1))
		{
			Local_322[iVar0 /*3*/] = iParam0;
			Local_322[iVar0 /*3*/].f_1 = uParam1;
			Local_322[iVar0 /*3*/].f_2 = iParam2;
			return 1;
		}
		iVar0++;
	}
	return 0;
}




int func_477(int iParam0, int iParam1, struct<7> Param2, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, char* sParam24, var uParam25, bool bParam26, int iParam27)//Position - 0x37D57
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iLocal_2643 != 12)
	{
		func_481(Param2, iParam0, iParam1);
	}
	if (!bLocal_509)
	{
		if (iLocal_2643 >= 6 && iLocal_2643 <= 11)
		{
			if (bParam26)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 400.2854f, -1632.597f, 28.29278f, 5f, 5f, 2f, 1, 1, 0))
					{
					}
				}
			}
		}
		switch (iLocal_2643)
		{
			case 0:
				if (GlobalFunc_7606(iParam1, iParam0, &iLocal_2645, 10, 90f, 100f, 0))
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam1, false);
					GlobalFunc_173(&Local_2390, 3, *iParam27, "TONYA", 0, 1);
					GlobalFunc_173(&Local_2390, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
					GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TUT_INS1", 9, 0, 0, 0);
					iLocal_2643 = 1;
				}
				break;
			
			case 1:
				if (!GlobalFunc_111())
				{
					GlobalFunc_159("TOW_TUT_03", -1);
					SYSTEM::SETTIMERA(0);
					iLocal_2643 = 2;
				}
				break;
			
			case 2:
				if (bLocal_510)
				{
					HUD::CLEAR_HELP(1);
					iLocal_2643 = 4;
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (((SYSTEM::TIMERA() > 12000 || GlobalFunc_156(iParam0, iParam1, 1) < 15f) && GlobalFunc_156(iParam0, iParam1, 1) < 30f) && !GlobalFunc_111())
					{
						GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TUT_INS2", 9, 0, 0, 0);
						iLocal_2643 = 3;
					}
				}
				break;
			
			case 3:
				if (!bLocal_510)
				{
					if (!GlobalFunc_111() && !GlobalFunc_74("TOW_TUT_03"))
					{
						GlobalFunc_6658("TOW_TUT_02");
						iLocal_2643 = 4;
					}
				}
				else
				{
					iLocal_2643 = 4;
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERA() > 5000 || bLocal_510)
				{
					if ((SYSTEM::TIMERA() > 12000 || GlobalFunc_156(iParam0, iParam1, 1) < 7.5f) || (bLocal_510 && GlobalFunc_156(iParam0, iParam1, 1) < 30f))
					{
						iLocal_485 = 1;
						iLocal_485 = iLocal_485;
						GlobalFunc_6658("TOW_TUT_01");
						iLocal_2643 = 5;
					}
				}
				break;
			
			case 5:
				if (SYSTEM::TIMERA() > 8000)
				{
					iLocal_2643 = 6;
				}
				break;
			
			case 6:
				if ((!GlobalFunc_111() && !HUD::IS_MESSAGE_BEING_DISPLAYED()) && SYSTEM::TIMERA() > 12000)
				{
					if (!iLocal_502)
					{
						GlobalFunc_159("TOWT_HELP_CR", -1);
						iLocal_502 = 1;
					}
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param2, Param2.f_3, Param2.f_6, 0, 0, 0))
				{
					GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TUT_INS4", 9, 0, 0, 0);
					if (HUD::DOES_BLIP_EXIST(*uParam22))
					{
						HUD::SET_BLIP_ROUTE(*uParam22, 0);
						HUD::REMOVE_BLIP(uParam22);
					}
					StringCopy(sParam24, "TOW_TUT_04A", 64);
					*(uParam23[0 /*3*/]) = { Param2.f_14 };
					fLocal_472 = GlobalFunc_5683(Param2.f_14, 0);
					*uParam22 = HUD::ADD_BLIP_FOR_COORD(Param2.f_14);
					SYSTEM::SETTIMERB(0);
					iLocal_2643 = 7;
				}
				break;
			
			case 7:
				if (!GlobalFunc_111())
				{
					if (SYSTEM::TIMERB() > 6000)
					{
						SYSTEM::SETTIMERA(0);
						GlobalFunc_164("TOW_TUT_04A", 7500, 1);
						iLocal_2643 = 9;
					}
				}
				break;
			
			case 9:
				if (GlobalFunc_105(Param2.f_14))
				{
					iLocal_2643 = 10;
				}
				if (!GlobalFunc_111())
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, Param2, Param2.f_3, Param2.f_6, 0, 1, 0))
					{
						iLocal_512 = MISC::GET_GAME_TIMER();
						if (bLocal_486)
						{
							HUD::SET_BLIP_ROUTE(*uParam22, 0);
							HUD::REMOVE_BLIP(uParam22);
							*(uParam23[0 /*3*/]) = { Param2.f_14 };
							fLocal_472 = GlobalFunc_5683(Param2.f_14, 0);
							*uParam22 = HUD::ADD_BLIP_FOR_COORD(Param2.f_14);
						}
						if (HUD::DOES_BLIP_EXIST(*uParam22))
						{
							HUD::SET_BLIP_COLOUR(*uParam22, 5);
						}
						iLocal_2643 = 10;
					}
				}
				break;
			
			case 10:
				if (!GlobalFunc_105(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					fVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					fVar6 = Param2.f_6;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Var0, Var3, fVar6, 0, 1, 0))
				{
					GlobalFunc_159("TOWT_HELP_UH", -1);
					func_479();
					if (!ENTITY::IS_ENTITY_DEAD(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam1))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1))
						{
							iLocal_2643 = 11;
						}
					}
				}
				else
				{
					func_478();
				}
				break;
			
			case 11:
				if (!GlobalFunc_105(Param2.f_14))
				{
					Var0 = { Param2.f_7 };
					Var3 = { Param2.f_10 };
					fVar6 = Param2.f_13;
				}
				else
				{
					Var0 = { Param2 };
					Var3 = { Param2.f_3 };
					fVar6 = Param2.f_6;
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, Var0, Var3, fVar6, 0, 1, 0))
				{
					GlobalFunc_159("TOWT_HELP_UH", -1);
					func_479();
				}
				if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1))
					{
						HUD::CLEAR_HELP(1);
						HUD::CLEAR_PRINTS();
						GlobalFunc_4948(&uLocal_441, 0, 0);
						iLocal_2643 = 12;
					}
				}
				break;
			
			case 12:
				break;
		}
		if (bParam26)
		{
			if (((ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam0)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam0, iParam1) && !bLocal_2644)
				{
					if (GlobalFunc_111())
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
						GlobalFunc_4935();
						iLocal_2643 = 6;
					}
					else
					{
						GlobalFunc_4720(*uParam22);
						SYSTEM::SETTIMERA(0);
						iLocal_2643 = 6;
						GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_TUT_INS3", 9, 0, 0, 0);
						bLocal_2644 = true;
					}
				}
			}
			if (!iLocal_504)
			{
				if (bLocal_2644)
				{
					if (!GlobalFunc_111())
					{
						HUD::CLEAR_HELP(1);
						GlobalFunc_164("TOWT_OBJ_06", 7500, 1);
						iLocal_504 = 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_478()//Position - 0x38331
{
	switch (iLocal_518)
	{
		case 0:
			if (!GlobalFunc_226(&uLocal_2567))
			{
				GlobalFunc_7777(&uLocal_2567);
			}
			else if (GlobalFunc_5182(&uLocal_2567) > 10f)
			{
				if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TOW_SUGG2", 9, 0, 0, 0))
				{
					iLocal_518 = 1;
				}
			}
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TOW_RESP", 9, 0, 0, 0))
				{
					GlobalFunc_6877(&uLocal_2567);
					iLocal_518 = 2;
				}
			}
			break;
		
		case 2:
			if (GlobalFunc_226(&uLocal_2567))
			{
				if (GlobalFunc_5182(&uLocal_2567) > 15f)
				{
					if (!GlobalFunc_111())
					{
						if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TOW_WAIT", 9, 0, 0, 0))
						{
							iLocal_518 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			break;
	}
}

void func_479()//Position - 0x3840E
{
	if (!iLocal_501)
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TONYA_UNHOOK", 9, 0, 0, 0))
				{
					iLocal_501 = 1;
				}
			}
		}
	}
}


void func_481(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, int iParam20, int iParam21)//Position - 0x3845D
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam20) || !ENTITY::DOES_ENTITY_EXIST(iParam21))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam20) || ENTITY::IS_ENTITY_DEAD(iParam21))
	{
		return;
	}
	if (!GlobalFunc_105(Param0.f_14))
	{
		Var0 = { Param0.f_7 };
		Var3 = { Param0.f_10 };
		fVar6 = Param0.f_13;
	}
	else
	{
		Var0 = { Param0 };
		Var3 = { Param0.f_3 };
		fVar6 = Param0.f_6;
	}
	if (!iLocal_487)
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam21, Var0, Var3, fVar6, 0, 1, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam20) && !ENTITY::IS_ENTITY_DEAD(iParam21))
			{
				if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam20, iParam21))
				{
					HUD::CLEAR_HELP(1);
					HUD::CLEAR_PRINTS();
					iLocal_2643 = 12;
					iLocal_487 = 1;
				}
			}
		}
	}
}

int func_482(var uParam0, int iParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x3852B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = (*uParam2 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (fLocal_470 == 0f)
	{
	}
	if (iVar0 > 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam1))
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam1, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
				{
					*uParam3 = (*uParam3 + iVar0);
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
				{
					*uParam2 = ENTITY::GET_ENTITY_HEALTH(iParam1);
					iVar0 = 0;
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (*uParam3 > 250)
			{
				if (bParam4)
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 1;
					}
				}
				else if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_DISP_DMT", 8, 0, 0, 0))
				{
					*uParam0 = 1;
				}
				if (bParam4)
				{
					fLocal_470 = (fLocal_470 + 25f);
				}
			}
			break;
		
		case 1:
			if (*uParam3 > 500)
			{
				if (bParam4)
				{
					if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_DISP_DMA", 8, 0, 0, 0))
					{
						*uParam0 = 2;
					}
				}
				else if (GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
				if (bParam4)
				{
					fLocal_470 = (fLocal_470 + 25f);
				}
			}
			break;
		
		case 2:
			if (*uParam3 > 900)
			{
				if (bParam4)
				{
					GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_DISP_DMB", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				else
				{
					GlobalFunc_10618(&Local_2390, "TOWAUD", "TOW_DISP_DT2", 8, 0, 0, 0);
					*uParam0 = 3;
				}
				if (bParam4)
				{
					fLocal_470 = (fLocal_470 + 75f);
				}
			}
			break;
		
		case 3:
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam2 = ENTITY::GET_ENTITY_HEALTH(iParam1);
	}
	return 0;
}

void func_483()//Position - 0x386FF
{
	if (iLocal_2940 < 16)
	{
		switch (iLocal_2884)
		{
			case 2:
				sLocal_2650 = "TOW_FAIL_05";
				break;
			
			case 0:
				sLocal_2650 = "TOW_FAIL_10";
				break;
			
			case 6:
				sLocal_2650 = "DTRSHRD_FAIL_03";
				break;
			
			case 1:
				sLocal_2650 = "TOW_FAIL_08";
				break;
			
			case 10:
				sLocal_2650 = "TOW_FAIL_17";
				break;
			
			case 11:
				sLocal_2650 = "TOW_FAIL_08";
				break;
			
			case 12:
				sLocal_2650 = "TOW_FAIL_08a";
				break;
			
			case 13:
				sLocal_2650 = "TOW_FAIL_16";
				break;
			
			case 4:
				sLocal_2650 = "TOW_FAIL_12";
				break;
			
			case 5:
				sLocal_2650 = "TOW_FAIL_01";
				break;
			
			case 3:
				sLocal_2650 = "TOW_FAIL_03a";
				break;
			
			case 8:
				sLocal_2650 = "TOW_FAIL_04";
				break;
			
			case 9:
				sLocal_2650 = "TOW_FAIL_04a";
				break;
			
			case 14:
				sLocal_2650 = "TOW_FAIL_06";
				break;
			
			case 15:
				sLocal_2650 = "TOW_FAIL_07";
				break;
			
			case 16:
				sLocal_2650 = "TOW_FAIL_09";
				break;
			
			case 17:
				sLocal_2650 = "TOW_FAIL_09a";
				break;
			
			case 18:
				sLocal_2650 = "TOW_FAIL_02";
				break;
			
			case 19:
				sLocal_2650 = "TOW_FAIL_02b";
				break;
			
			case 20:
				sLocal_2650 = "TOW_FAIL_02b";
				break;
			
			case 21:
				sLocal_2650 = "TOW_FAIL_11";
				break;
			
			case 22:
				sLocal_2650 = "TOW_FAIL_13";
				break;
			
			case 23:
				sLocal_2650 = "TOW_FAIL_14";
				break;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			sLocal_2650 = "TOW_FAIL_15";
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2650))
		{
			GlobalFunc_509(sLocal_2650);
		}
		bLocal_2687 = true;
	}
}

int func_484(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)//Position - 0x388C7
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = (*uParam3 - ENTITY::GET_ENTITY_HEALTH(iParam1));
	}
	if (bParam5)
	{
		if (iVar0 > 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam1) && ENTITY::DOES_ENTITY_EXIST(iParam2))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam2))
				{
					if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam1, iParam2) || VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iParam2, iParam1)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
					{
						*uParam4 = (*uParam4 + iVar0);
					}
					else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
					{
						*uParam3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
						iVar0 = 0;
					}
				}
			}
		}
		switch (*uParam0)
		{
			case 0:
				if (*uParam4 > 250)
				{
					*uParam0 = 1;
					GlobalFunc_2154("TOW_DMG_01", 25, -1);
					GlobalFunc_10834(GlobalFunc_8315(), 1, 25);
					fLocal_470 = (fLocal_470 + 25f);
				}
				break;
			
			case 1:
				if (*uParam4 > 500)
				{
					*uParam0 = 2;
					GlobalFunc_2154("TOW_DMG_01", 75, -1);
					GlobalFunc_10834(GlobalFunc_8315(), 1, 75);
					fLocal_470 = (fLocal_470 + 75f);
				}
				break;
			
			case 2:
				if (*uParam4 > 550)
				{
					*uParam0 = 3;
					GlobalFunc_159("TOW_DMG_03", -1);
				}
				break;
			
			case 3:
				if (*uParam4 > 900)
				{
					return 0;
				}
				break;
			}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		*uParam3 = ENTITY::GET_ENTITY_HEALTH(iParam1);
	}
	return 1;
}








void func_492(int iParam0, var uParam1, var uParam2, var uParam3, char* sParam4, var uParam5, int iParam6, bool bParam7, var uParam8, bool bParam9, var uParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x38BDE
{
	int iVar0;
	
	uParam10 = uParam10;
	if (bParam11)
	{
		if (HUD::DOES_BLIP_EXIST(*uParam1))
		{
			HUD::REMOVE_BLIP(uParam1);
		}
		*uParam5 = MISC::GET_GAME_TIMER();
		bLocal_509 = !GlobalFunc_4898(iParam0);
		return;
	}
	else if (!HUD::DOES_BLIP_EXIST(*uParam1) && bLocal_509)
	{
		*uParam1 = HUD::ADD_BLIP_FOR_ENTITY(*iParam0);
		HUD::SET_BLIP_COLOUR(*uParam1, 3);
		HUD::SET_BLIP_ROUTE(*uParam1, 1);
	}
	if (!bParam9)
	{
		if (!bLocal_509)
		{
			if (!GlobalFunc_4898(iParam0))
			{
				HUD::CLEAR_SMALL_PRINTS();
				*uParam5 = MISC::GET_GAME_TIMER();
				if (bParam13)
				{
					if (iLocal_482)
					{
						GlobalFunc_164("DTRSHRD_03", 7500, 1);
						iLocal_482 = 0;
					}
					if (!HUD::DOES_BLIP_EXIST(*uParam1))
					{
						*uParam1 = HUD::ADD_BLIP_FOR_ENTITY(*iParam0);
						HUD::SET_BLIP_COLOUR(*uParam1, 3);
						HUD::SET_BLIP_ROUTE(*uParam1, 1);
					}
				}
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (HUD::DOES_BLIP_EXIST((uParam2[iVar0 /*20*/])->f_8))
					{
						HUD::SET_BLIP_ROUTE((uParam2[iVar0 /*20*/])->f_8, 0);
						HUD::REMOVE_BLIP(&((uParam2[iVar0 /*20*/])->f_8));
						*uParam8 = 0;
					}
					iVar0++;
				}
				if (HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_9))
				{
					HUD::REMOVE_BLIP(&((uParam2[0 /*20*/])->f_9));
				}
				bLocal_509 = true;
			}
		}
		else if (GlobalFunc_4898(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::REMOVE_BLIP(uParam1);
			}
			if (!PED::IS_PED_INJURED((*uParam2)[0 /*20*/]))
			{
				if (!PED::IS_PED_IN_VEHICLE((*uParam2)[0 /*20*/], *iParam0, 0) && !PED::IS_PED_IN_VEHICLE((*uParam2)[0 /*20*/], (uParam2[iParam6 /*20*/])->f_6, 0))
				{
					if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_9))
					{
						(uParam2[0 /*20*/])->f_9 = HUD::ADD_BLIP_FOR_ENTITY((*uParam2)[iVar0 /*20*/]);
						HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_9, 3);
						HUD::SET_BLIP_SCALE((uParam2[0 /*20*/])->f_9, 0.7f);
					}
				}
			}
			if (iLocal_483)
			{
				GlobalFunc_164(sParam4, 7500, 1);
				iLocal_483 = 0;
			}
			if (!GlobalFunc_105(*(uParam3[0 /*3*/])) && iParam12 == 9)
			{
				if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
				{
					(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(*(uParam3[0 /*3*/]));
					HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, 1);
				}
			}
			else if (bParam7)
			{
				if (!ENTITY::IS_ENTITY_DEAD((uParam2[iParam6 /*20*/])->f_6))
				{
					if (!HUD::DOES_BLIP_EXIST((uParam2[iParam6 /*20*/])->f_8))
					{
						(uParam2[iParam6 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_ENTITY((uParam2[iParam6 /*20*/])->f_6);
						HUD::SET_BLIP_COLOUR((uParam2[iParam6 /*20*/])->f_8, 3);
						HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, 1);
					}
				}
				else
				{
					if (iLocal_462 == 3)
					{
						Local_692[iLocal_2646 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
					}
					if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
					{
						(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_692[iLocal_2646 /*23*/].f_1);
						HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_8, 3);
						HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, 1);
					}
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < 1)
				{
					if (!ENTITY::IS_ENTITY_DEAD((uParam2[iVar0 /*20*/])->f_6))
					{
						if (!HUD::DOES_BLIP_EXIST((uParam2[iVar0 /*20*/])->f_8))
						{
							(uParam2[iVar0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_ENTITY((uParam2[iVar0 /*20*/])->f_6);
							HUD::SET_BLIP_COLOUR((uParam2[iVar0 /*20*/])->f_8, 3);
							HUD::SET_BLIP_ROUTE((uParam2[iVar0 /*20*/])->f_8, 1);
						}
					}
					else
					{
						if (iLocal_462 == 3)
						{
							Local_692[iLocal_2646 /*23*/].f_1 = { -476.1537f, 132.6556f, 62.9586f };
						}
						if (!HUD::DOES_BLIP_EXIST((uParam2[0 /*20*/])->f_8))
						{
							(uParam2[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(Local_692[iLocal_2646 /*23*/].f_1);
							HUD::SET_BLIP_COLOUR((uParam2[0 /*20*/])->f_8, 3);
							HUD::SET_BLIP_ROUTE((uParam2[0 /*20*/])->f_8, 1);
						}
					}
					iVar0++;
				}
			}
			*uParam5 = 0;
			bLocal_509 = false;
		}
	}
}




void func_496()//Position - 0x390A7
{
	switch (iLocal_462)
	{
		case 2:
			if ((Global_SAVE_DATA.TOWING_SAVED_STRUCT.TOWING_iAbandonCompleted % 2) == 0)
			{
				sLocal_2657 = "TOWABDBITCHM";
				iLocal_2838 = 2;
			}
			else
			{
				sLocal_2657 = "TOWABDATTACKM";
				iLocal_2838 = 2;
			}
			break;
		
		case 4:
			break;
		
		case 3:
			sLocal_2657 = "TOWBREAKDOWN1";
			iLocal_2838 = 3;
			break;
		
		case 0:
			sLocal_2657 = "TOWHANDIBEGM";
			iLocal_2838 = 5;
			break;
		
		case 1:
			sLocal_2657 = "TOWTRAINM";
			iLocal_2838 = 3;
			break;
	}
}

int func_497()//Position - 0x39130
{
	return Local_692[iLocal_2646 /*23*/].f_22;
}


int func_499(float fParam0, int iParam1, int iParam2)//Position - 0x391DD
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3[53];
	int iVar57;
	int iVar58;
	
	fVar0 = 500f;
	iVar1 = -1;
	iVar57 = 0;
	iVar58 = 0;
	while (iVar58 < 53)
	{
		fVar2 = GlobalFunc_5683(Local_692[iVar58 /*23*/].f_1, 1);
		if (!GlobalFunc_105(Local_692[iVar58 /*23*/].f_1))
		{
			if ((fVar2 < fParam0 && fVar2 > fVar0) && iVar58 != iParam2)
			{
				if (iParam1 == -1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
				else if (Local_692[iVar58 /*23*/] == iParam1)
				{
					iVar3[iVar57] = iVar58;
					iVar57++;
				}
			}
		}
		iVar58++;
	}
	if (iVar57 > 1)
	{
		iVar1 = iVar3[MISC::GET_RANDOM_INT_IN_RANGE(0, (iVar57 - 1))];
	}
	else if (iVar57 == 1)
	{
		iVar1 = iVar3[0];
	}
	else
	{
		return 0;
	}
	return iVar1;
}


void func_501()//Position - 0x392C3
{
	Local_87[0 /*3*/] = { -227.6f, -1172.1f, 21.8963f };
	Local_87[1 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_87[2 /*3*/] = { -205.6866f, -1384.333f, 30.2585f };
	Local_87[3 /*3*/] = { 532.4957f, -172.2088f, 53.6835f };
	Local_87[4 /*3*/] = { 1151.507f, -773.4066f, 56.61f };
	Local_87[5 /*3*/] = { 808.4329f, -822.9456f, 25.1821f };
	Local_87[6 /*3*/] = { 2502.613f, 4080.141f, 37.6307f };
	Local_87[7 /*3*/] = { 263.4725f, 2601.842f, 43.8197f };
	Local_112[0 /*3*/] = { 401.6046f, -1632.781f, 28.2928f };
}



void func_504()//Position - 0x3AF9F
{
	switch (iLocal_3317)
	{
		case 0:
			GlobalFunc_11110(0, "towing_tonya_franklin_travel", 0, 0, 0, 1);
			GlobalFunc_173(&uLocal_526, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
			GlobalFunc_173(&uLocal_526, 3, iLocal_2765, "TONYA", 0, 1);
			STREAMING::REQUEST_MODEL(joaat("towtruck"));
			if (!HUD::DOES_BLIP_EXIST(uLocal_2766))
			{
				uLocal_2766 = HUD::ADD_BLIP_FOR_COORD(401.637f, -1633.3f, 28.2928f);
				HUD::SET_BLIP_COLOUR(uLocal_2766, 3);
				HUD::SET_BLIP_ROUTE(uLocal_2766, 1);
			}
			if (!GlobalFunc_226(&uLocal_2564))
			{
				GlobalFunc_7777(&uLocal_2564);
			}
			else
			{
				GlobalFunc_6877(&uLocal_2564);
			}
			iLocal_3317 = 3;
			break;
		
		case 3:
			func_512();
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 96, 1);
			}
			if (!iLocal_3351 && !bLocal_2745)
			{
				if (!GlobalFunc_111())
				{
					GlobalFunc_527("TOW_TUT_INTRUCK", 7500, 1);
					iLocal_3351 = 1;
				}
			}
			if (!iLocal_3346)
			{
				func_509();
				iLocal_3346 = 1;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_468))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iLocal_468 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_468, 1, 1);
						VEHICLE::SET_PLAYERS_LAST_VEHICLE(iLocal_468);
					}
				}
			}
			if (!bLocal_3349)
			{
				func_508(&iLocal_3329);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_3329))
			{
				STREAMING::REQUEST_MODEL(joaat("towtruck"));
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("towtruck"), 3);
				if (STREAMING::HAS_MODEL_LOADED(joaat("towtruck")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("towtruck")))
				{
					iLocal_3329 = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), Local_3332, fLocal_3341, 1, 1);
					iLocal_2933 = iLocal_3329;
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2933, 1, 0);
					AUDIO::SET_VEH_RADIO_STATION(iLocal_2933, "RADIO_03_HIPHOP_NEW");
					MISC::CLEAR_AREA(Local_3332, 25f, 1, 1, 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3329))
					{
						HUD::REMOVE_BLIP(&uLocal_2766);
						uLocal_2766 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_3329);
						HUD::SET_BLIP_COLOUR(uLocal_2766, 3);
						HUD::SET_BLIP_ROUTE(uLocal_2766, 1);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("towtruck"));
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2765))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 423.7424f, -1652.842f, 27.268f, 397.8396f, -1630.332f, 40.29278f, 42f, 0, 1, 0) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_2765, 423.7424f, -1652.842f, 27.268f, 397.8396f, -1630.332f, 40.29278f, 42f, 0, 1, 0))
					{
						func_507();
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (!GlobalFunc_111())
							{
								if (!iLocal_494)
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TONYA_ATTRK2", 8, 0, 0, 0))
										{
											if (!GlobalFunc_226(&uLocal_3354))
											{
												GlobalFunc_7777(&uLocal_3354);
											}
											iLocal_494 = 1;
										}
									}
								}
								else if (!ENTITY::IS_ENTITY_DEAD(iLocal_3329) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_3329, 0))
								{
									if (!bLocal_3345)
									{
										if (GlobalFunc_226(&uLocal_3354))
										{
											if (GlobalFunc_5182(&uLocal_3354) > 20f)
											{
												if (!GlobalFunc_111())
												{
													if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TONYA_WAIT2", 8, 0, 0, 0))
													{
														GlobalFunc_6877(&uLocal_3354);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					else
					{
						func_506();
					}
				}
			}
			if (!bLocal_2718 && !bLocal_503)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_3329))
				{
					if ((VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3329, -1) == PLAYER::PLAYER_PED_ID() && PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_3329, 0)) || GlobalFunc_4903(&iLocal_3329, 1, iLocal_2765))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_2766))
						{
							HUD::REMOVE_BLIP(&uLocal_2766);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_467))
						{
							HUD::REMOVE_BLIP(&uLocal_467);
						}
						HUD::CLEAR_THIS_PRINT("TOWT_WAIT");
						iLocal_3317 = 4;
					}
					else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_3329, -1) == PLAYER::PLAYER_PED_ID() && !PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_3329, 0))
					{
						if (!iLocal_2746)
						{
							GlobalFunc_527("TOWT_WAIT", 7500, 1);
							iLocal_2746 = 1;
						}
						AUDIO::SET_VEH_RADIO_STATION(iLocal_2933, "RADIO_03_HIPHOP_NEW");
						if (HUD::DOES_BLIP_EXIST(uLocal_2766))
						{
							HUD::REMOVE_BLIP(&uLocal_2766);
						}
						if (!HUD::DOES_BLIP_EXIST(uLocal_467))
						{
							uLocal_467 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_2765);
							HUD::SET_BLIP_COLOUR(uLocal_467, 3);
							HUD::SET_BLIP_SCALE(uLocal_467, 0.7f);
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_3329))
				{
					iLocal_2884 = 2;
					func_483();
				}
			}
			break;
		
		case 4:
			if (!bLocal_503)
			{
				iLocal_3316 = 3;
				iLocal_3317 = 0;
			}
			break;
	}
}


void func_506()//Position - 0x3B51A
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			if (GlobalFunc_111())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(1);
				return;
			}
		}
	}
	if (bLocal_2745)
	{
		return;
	}
	switch (iLocal_3343)
	{
		case 0:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_226(&uLocal_2564))
				{
					if (GlobalFunc_5182(&uLocal_2564) > 5f && GlobalFunc_5182(&uLocal_2564) < 15f)
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765))
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
								{
									if (!iLocal_495)
									{
										if (!GlobalFunc_111())
										{
											if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TONYA_CAR3", 8, 0, 0, 0))
											{
												iLocal_495 = 1;
											}
										}
									}
								}
								else
								{
									iLocal_495 = 1;
								}
							}
						}
					}
					else if (GlobalFunc_5182(&uLocal_2564) > 20f)
					{
						if (!iLocal_3347)
						{
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765))
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
								{
									if (!GlobalFunc_111())
									{
										if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TONYA_CAR4", 8, 0, 0, 0))
										{
											iLocal_3347 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			if (!iLocal_3348)
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
					{
						if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TONYA_JACK2", 8, 0, 0, 0))
						{
							iLocal_3348 = 1;
						}
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765))
			{
				if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PED::IS_PED_IN_ANY_VEHICLE(iLocal_2765, 0)) || ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_2765, 0)) && GlobalFunc_5182(&uLocal_2564) > 30f))
				{
					iLocal_3343 = 1;
				}
			}
			break;
		
		case 1:
			if (!GlobalFunc_111())
			{
				if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TONYA_TALK2", 8, 0, 0, 0))
				{
					iLocal_3343 = 2;
				}
			}
			break;
		
		case 2:
			break;
	}
}

void func_507()//Position - 0x3B72E
{
	var uVar0;
	
	if (!bLocal_3349)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if ((!ENTITY::IS_ENTITY_DEAD(iLocal_2765) && ENTITY::DOES_ENTITY_EXIST(iLocal_2933)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
				{
					if (PED::IS_PED_IN_GROUP(iLocal_2765))
					{
						PED::REMOVE_PED_FROM_GROUP(iLocal_2765);
					}
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_2765, 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					}
					TASK::TASK_ENTER_VEHICLE(0, iLocal_2933, -1, 0, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_2765, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					bLocal_3349 = true;
				}
			}
		}
	}
	if (bLocal_3349)
	{
		if (!PED::IS_PED_INJURED(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_2765, iLocal_2933, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_2765, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_2765, -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(iLocal_2765, iLocal_2933, 20000, 0, 1f, 1, 0);
				}
			}
		}
	}
}

void func_508(var uParam0)//Position - 0x3B82B
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		else if (!bLocal_2718)
		{
			HUD::CLEAR_THIS_PRINT("TOWT_WAIT");
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_2766))
				{
					uLocal_2766 = HUD::ADD_BLIP_FOR_ENTITY(*uParam0);
					HUD::SET_BLIP_COLOUR(uLocal_2766, 3);
					HUD::SET_BLIP_ROUTE(uLocal_2766, 1);
				}
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_467))
			{
				HUD::REMOVE_BLIP(&uLocal_467);
			}
		}
	}
	if (((!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765)) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0) && !PED::IS_PED_IN_VEHICLE(iLocal_2765, iVar0, 0))
		{
			HUD::CLEAR_THIS_PRINT("TOW_TUT_INTRUCK");
			if (HUD::DOES_BLIP_EXIST(uLocal_2766))
			{
				HUD::REMOVE_BLIP(&uLocal_2766);
			}
			if (!HUD::DOES_BLIP_EXIST(uLocal_467))
			{
				uLocal_467 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_2765);
				HUD::SET_BLIP_COLOUR(uLocal_467, 3);
				HUD::SET_BLIP_SCALE(uLocal_467, 0.7f);
			}
			if (!iLocal_2746)
			{
				GlobalFunc_527("TOWT_WAIT", 7500, 1);
				iLocal_2746 = 1;
			}
		}
		else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0) && PED::IS_PED_IN_VEHICLE(iLocal_2765, iVar0, 0))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_467))
			{
				HUD::REMOVE_BLIP(&uLocal_467);
			}
			HUD::CLEAR_THIS_PRINT("TOWT_WAIT");
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_2766))
				{
					uLocal_2766 = HUD::ADD_BLIP_FOR_ENTITY(*uParam0);
					HUD::SET_BLIP_COLOUR(uLocal_2766, 3);
					HUD::SET_BLIP_ROUTE(uLocal_2766, 1);
				}
			}
			iLocal_2746 = 0;
		}
	}
}

void func_509()//Position - 0x3B9C3
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765))
	{
		if (!PED::IS_PED_IN_GROUP(iLocal_2765))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_2765, GlobalFunc_468());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_2765, 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_2765, 0);
			PED::SET_PED_CONFIG_FLAG(iLocal_2765, 206, 1);
			PED::SET_GROUP_FORMATION_SPACING(GlobalFunc_468(), 2f, -1082130432, -1082130432);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2765, PLAYER::PLAYER_PED_ID(), -1, 0, 4);
			}
		}
	}
}



void func_512()//Position - 0x3BA68
{
	switch (iLocal_2978)
	{
		case 0:
			iLocal_2979 = -1762517905;
			iLocal_2980 = -764902187;
			GlobalFunc_4905(&(Local_2961[0 /*8*/]), iLocal_2979, 416.4166f, -1652.778f, 28.2917f, joaat("prop_facgate_08"), 0);
			GlobalFunc_4905(&(Local_2961[1 /*8*/]), iLocal_2980, 415.2836f, -1621.858f, 28.3294f, joaat("prop_facgate_08"), 0);
			iLocal_2978 = 1;
			break;
		
		case 1:
			if (GlobalFunc_2264(PLAYER::PLAYER_PED_ID(), 415.6646f, -1622.267f, 28.2919f, 1) < 50f)
			{
				GlobalFunc_4900(&(Local_2961[0 /*8*/]), 1, 1f, 2000);
				GlobalFunc_4900(&(Local_2961[1 /*8*/]), 1, 1f, 2000);
				iLocal_2978 = 2;
			}
			break;
		
		case 2:
			GlobalFunc_6659(&Local_2961);
			break;
	}
}





void func_517()//Position - 0x3BDE8
{
	func_542();
	switch (iLocal_3317)
	{
		case 0:
			if (GlobalFunc_111())
			{
				iLocal_3353 = 1;
			}
			if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				if (!PED::IS_PED_INJURED(iLocal_2765))
				{
					CAM::SET_GAMEPLAY_ENTITY_HINT(iLocal_2765, 0f, 0f, 0f, 1, -1, 3000, 2000, 0);
					CAM::SET_GAMEPLAY_HINT_FOV(25f);
					CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(-0.7f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(0f);
					CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(1);
				}
			}
			else
			{
				CAM::_0xCCD078C2665D2973(1);
			}
			if (!GlobalFunc_226(&uLocal_3357))
			{
				GlobalFunc_7777(&uLocal_3357);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2765, -1, 0, 4);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_2765))
			{
				TASK::TASK_LOOK_AT_ENTITY(iLocal_2765, PLAYER::PLAYER_PED_ID(), -1, 0, 4);
			}
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			CUTSCENE::REQUEST_CUTSCENE("tonya_mcs_2", 8);
			GlobalFunc_8938();
			iLocal_3317 = 2;
			break;
		
		case 2:
			if (GlobalFunc_226(&uLocal_3357))
			{
				if ((GlobalFunc_5182(&uLocal_3357) > 3f || (iLocal_3353 && !GlobalFunc_111())) || (GlobalFunc_156(PLAYER::PLAYER_PED_ID(), iLocal_2765, 1) < 3.5f && !GlobalFunc_111()))
				{
					iLocal_3317 = 1;
				}
			}
			break;
		
		case 1:
			if (GlobalFunc_109())
			{
				GlobalFunc_8316(1, 1, 1, 0);
				GlobalFunc_601(23, 1);
				HUD::CLEAR_HELP(1);
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
				}
				if (!ENTITY::IS_ENTITY_DEAD(Local_2981.f_28[0]))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(Local_2981.f_28[0], "Tonya", 0, 0, 0);
				}
				GlobalFunc_5105();
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					PED::SET_PED_STEALTH_MOVEMENT(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
				uLocal_3344 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_3338, 5f, 5f, 5f, 0f, 0, 7);
				GlobalFunc_9161();
				CUTSCENE::START_CUTSCENE(0);
				if (GlobalFunc_2(0))
				{
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(1500);
					}
				}
				iLocal_3317 = 3;
			}
			else
			{
				CUTSCENE::REQUEST_CUTSCENE("tonya_mcs_2", 8);
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(0);
				}
				if (!iLocal_3352)
				{
					GlobalFunc_9805(-11.12018f, -1476.168f, 28.53413f, -18.04501f, -1470.341f, 34.63463f, 7f, Local_2573, fLocal_2576, 3.55f, 10.59f, 5.55f, 1, 1, 1, 0, 0);
					iLocal_3352 = 1;
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -668482597, 0, 0, 0);
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, 1, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Tonya", 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_2765))
				{
					PED::FORCE_PED_MOTION_STATE(iLocal_2765, -668482597, 0, 0, 0);
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED())
			{
				GlobalFunc_8316(0, 1, 1, 0);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), 0, 0, 0, 0, 0, 0, 0, 0);
				ENTITY::SET_ENTITY_PROOFS(iLocal_2765, 0, 0, 0, 0, 0, 0, 0, 0);
				PED::SET_PED_CAN_RAGDOLL(iLocal_2765, 1);
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_3317 = 4;
			}
			break;
		
		case 4:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			HUD::DISPLAY_RADAR(1);
			HUD::DISPLAY_HUD(1);
			GlobalFunc_7632(0);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			GlobalFunc_601(23, 0);
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(uLocal_3344);
			CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			iLocal_3316 = 2;
			iLocal_3317 = 0;
			break;
	}
}

























void func_542()//Position - 0x3CFC8
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (iLocal_3317 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		}
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2765))
		{
			Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2765, 1) };
		}
		fVar6 = SYSTEM::VDIST(Var0, Var3);
		if (fVar6 < 3f)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2765, -1, 0, 4);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2765, 0);
			}
		}
	}
}

void func_543()//Position - 0x3D04C
{
	HUD::REQUEST_ADDITIONAL_TEXT("TOW", 2);
	HUD::REQUEST_ADDITIONAL_TEXT("DTRSHRD", 3);
	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(2) || !HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		SYSTEM::WAIT(0);
	}
	if (GlobalFunc_199())
	{
		iLocal_3342 = GlobalFunc_198();
		if (Global_84544)
		{
			if (iLocal_3342 <= 1)
			{
				iLocal_3342++;
			}
		}
		if (iLocal_3342 == 0)
		{
			func_574();
		}
		else if (iLocal_3342 == 1)
		{
			func_548();
		}
		else if (iLocal_3342 == 2)
		{
			func_544();
		}
	}
	else
	{
		iLocal_3316 = 1;
	}
}

void func_544()//Position - 0x3D0D5
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(1);
		GlobalFunc_553(832);
		if (!GlobalFunc_188())
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_2853, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_2856);
			}
		}
		func_546();
		MISC::CLEAR_AREA(Local_3360, 8f, 1, 0, 0, 0);
		GlobalFunc_5108(0, -1, 1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
		CAM::DO_SCREEN_FADE_IN(500);
		iLocal_3316 = 5;
	}
}


void func_546()//Position - 0x3D228
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2933))
	{
		STREAMING::REQUEST_MODEL(joaat("towtruck"));
		VEHICLE::REQUEST_VEHICLE_ASSET(joaat("towtruck"), 3);
		while (!STREAMING::HAS_MODEL_LOADED(joaat("towtruck")) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("towtruck")))
		{
			SYSTEM::WAIT(0);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2933))
		{
			iLocal_2933 = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), Local_3332, fLocal_3341, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2933);
			VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_2933, 1);
		}
	}
}


void func_548()//Position - 0x3D2B8
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_549();
		MISC::CLEAR_AREA(Local_3360, 8f, 1, 0, 0, 0);
		GlobalFunc_5108(iLocal_2933, -1, 1);
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765)) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
		{
			PED::SET_PED_INTO_VEHICLE(iLocal_2765, iLocal_2933, 0);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_2765, 1, 0);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(-138.0317f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-0.119f, 1065353216);
		CAM::DO_SCREEN_FADE_IN(500);
		iLocal_3316 = 3;
	}
}

void func_549()//Position - 0x3D343
{
	GlobalFunc_10827(405.7806f, -1652.369f, 28.2928f, 139.8366f);
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2765))
	{
		STREAMING::REQUEST_MODEL(iLocal_3331);
		STREAMING::REQUEST_MODEL(joaat("towtruck"));
		VEHICLE::REQUEST_VEHICLE_ASSET(joaat("towtruck"), 3);
		while ((!STREAMING::HAS_MODEL_LOADED(iLocal_3331) || !STREAMING::HAS_MODEL_LOADED(joaat("towtruck"))) || !VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("towtruck")))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_2765 = PED::CREATE_PED(5, iLocal_3331, Local_3364, fLocal_3367, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2765, 1);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2933))
		{
			iLocal_2933 = VEHICLE::CREATE_VEHICLE(joaat("towtruck"), Local_3332, fLocal_3341, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2933);
		}
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2765, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2765, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2765, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2765, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2765, 8, 0, 0, 0);
		GlobalFunc_173(&uLocal_526, 3, iLocal_2765, "TONYA", 0, 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_3331, 1);
		PED::ADD_RELATIONSHIP_GROUP("instructorRelGroup", &uLocal_453);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2765, uLocal_453);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, uLocal_453, 1862763509);
		func_509();
	}
}

























void func_574()//Position - 0x3E5CA
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		func_575();
		MISC::CLEAR_AREA(Local_3360, 8f, 1, 0, 0, 0);
		GlobalFunc_5108(0, -1, 1);
		func_509();
		CAM::DO_SCREEN_FADE_IN(500);
		iLocal_3316 = 2;
	}
}

void func_575()//Position - 0x3E605
{
	GlobalFunc_10827(Local_2573, fLocal_2576);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (!GlobalFunc_188())
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_3360, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_3363);
		}
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2765))
	{
		STREAMING::REQUEST_MODEL(iLocal_3331);
		while (!STREAMING::HAS_MODEL_LOADED(iLocal_3331))
		{
			SYSTEM::WAIT(0);
		}
		iLocal_2765 = PED::CREATE_PED(5, iLocal_3331, Local_3364, fLocal_3367, 1, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_2765, 1);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2765, 0, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2765, 2, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2765, 3, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2765, 4, 0, 0, 0);
		PED::SET_PED_COMPONENT_VARIATION(iLocal_2765, 8, 0, 0, 0);
		GlobalFunc_173(&uLocal_526, 3, iLocal_2765, "TONYA", 0, 1);
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_3331, 1);
		PED::ADD_RELATIONSHIP_GROUP("instructorRelGroup", &uLocal_453);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_2765, uLocal_453);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(0, uLocal_453, 1862763509);
		ENTITY::SET_ENTITY_COORDS(iLocal_2765, Local_3364, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_2765, fLocal_3367);
	}
}

void func_576()//Position - 0x3E729
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765))
	{
		if (PED::IS_PED_IN_GROUP(iLocal_2765))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		}
	}
}

void func_577()//Position - 0x3E75A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765))
	{
		PED::SET_PED_RESET_FLAG(iLocal_2765, 328, 1);
	}
}

void func_578()//Position - 0x3E784
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2765))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2765))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2765, 1) };
	}
	if (SYSTEM::VDIST2(Var0, Var3) < 25f)
	{
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_2765, 1);
	}
	else
	{
		PED::SET_FORCE_FOOTSTEP_UPDATE(iLocal_2765, 0);
	}
}




void func_582(var uParam0, bool bParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, int iParam7)//Position - 0x3E8D5
{
	bParam1 = bParam1;
	if (!bLocal_503)
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0))
		{
			if (GlobalFunc_111())
			{
				GlobalFunc_4956();
			}
			if (iParam7 != 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam7))
				{
					GlobalFunc_5653(iParam7, "GET_WANTED_LEVEL", "TONYA", 34);
				}
			}
			if (HUD::DOES_BLIP_EXIST((uParam0[0 /*20*/])->f_8))
			{
				HUD::REMOVE_BLIP(&((uParam0[0 /*20*/])->f_8));
			}
			if (HUD::DOES_BLIP_EXIST((uParam0[0 /*20*/])->f_9))
			{
				HUD::REMOVE_BLIP(&((uParam0[0 /*20*/])->f_9));
			}
			if (HUD::DOES_BLIP_EXIST(*uParam3))
			{
				HUD::REMOVE_BLIP(uParam3);
			}
			if (HUD::DOES_BLIP_EXIST(*uParam4))
			{
				HUD::REMOVE_BLIP(uParam4);
			}
			bLocal_503 = true;
			GlobalFunc_164("TOW_OBJ_06", 7500, 1);
		}
	}
	else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::GET_PLAYER_INDEX(), 0) && bLocal_503)
	{
		if (GlobalFunc_663("TOW_OBJ_06", 0, 0))
		{
			HUD::CLEAR_PRINTS();
		}
		if (!HUD::DOES_BLIP_EXIST((uParam0[0 /*20*/])->f_8))
		{
			if (iParam6 > 1)
			{
				if (bLocal_509)
				{
					*uParam3 = HUD::ADD_BLIP_FOR_ENTITY(*uParam5);
					HUD::SET_BLIP_COLOUR(*uParam3, 3);
					return;
				}
				if (iParam6 >= 9 && iParam6 < 11)
				{
					if ((!ENTITY::IS_ENTITY_DEAD(*uParam5) && !ENTITY::IS_ENTITY_DEAD((uParam0[0 /*20*/])->f_6)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(*uParam5, (uParam0[0 /*20*/])->f_6))
					{
						GlobalFunc_4720(*uParam4);
						*uParam4 = HUD::ADD_BLIP_FOR_COORD(*(uParam2[0 /*3*/]));
						HUD::SET_BLIP_COLOUR(*uParam4, 5);
						HUD::SET_BLIP_ROUTE(*uParam4, 1);
					}
					else
					{
						(uParam0[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_ENTITY((uParam0[0 /*20*/])->f_6);
						HUD::SET_BLIP_COLOUR((uParam0[0 /*20*/])->f_8, 3);
						HUD::SET_BLIP_ROUTE((uParam0[0 /*20*/])->f_8, 1);
					}
				}
				else if (iParam6 < 11)
				{
					(uParam0[0 /*20*/])->f_8 = HUD::ADD_BLIP_FOR_COORD(*(uParam2[0 /*3*/]));
					HUD::SET_BLIP_COLOUR((uParam0[0 /*20*/])->f_8, 3);
					HUD::SET_BLIP_ROUTE((uParam0[0 /*20*/])->f_8, 1);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(*uParam3))
			{
				*uParam3 = HUD::ADD_BLIP_FOR_ENTITY(*uParam5);
				HUD::SET_BLIP_COLOUR(*uParam3, 3);
				HUD::SET_BLIP_ROUTE(*uParam3, 1);
			}
		}
		fLocal_472 = GlobalFunc_5683(*(uParam2[0 /*3*/]), 0);
		bLocal_503 = false;
	}
}





int func_587()//Position - 0x3ED43
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iLocal_3316 != 4)
	{
		func_607();
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2765))
		{
			if (PED::IS_PED_BEING_JACKED(iLocal_2765))
			{
				if (PED::GET_PEDS_JACKER(iLocal_2765) == PLAYER::PLAYER_PED_ID())
				{
					sLocal_3319 = "TOW_FAIL_13";
					return 1;
				}
			}
		}
		if (bLocal_2699)
		{
			sLocal_3319 = "TOW_FAIL_14";
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2765))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_2765))
			{
				sLocal_3319 = "TOW_FAIL_13b";
				return 1;
			}
		}
		if ((ENTITY::DOES_ENTITY_EXIST(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (func_588(iLocal_2765, 0, 0f, 10f, 1, 0, 0, 0))
			{
				GlobalFunc_4935();
				if (!PED::IS_PED_INJURED(iLocal_2765))
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_2765, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
					PED::SET_PED_KEEP_TASK(iLocal_2765, 1);
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_2765, PLAYER::PLAYER_PED_ID(), 1))
				{
					sLocal_3319 = "TOW_FAIL_13a";
				}
				else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					sLocal_3319 = "TOW_FAIL_18";
				}
				else
				{
					sLocal_3319 = "TOW_FAIL_13";
				}
				return 1;
			}
		}
		if (bLocal_2687)
		{
			sLocal_3319 = sLocal_2650;
			return 1;
		}
	}
	return 0;
}

int func_588(int iParam0, bool bParam1, float fParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0x3EE73
{
	struct<3> Var0;
	
	if (GlobalFunc_115(PLAYER::PLAYER_PED_ID()) && GlobalFunc_115(iParam0))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
		{
			return 1;
		}
		if (GlobalFunc_8639(iParam0, bParam1, bParam5, bParam6, bParam7))
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
		else if (func_589(iParam0, fParam3))
		{
			return 1;
		}
	}
	return 0;
}

int func_589(int iParam0, float fParam1)//Position - 0x3EF2E
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
				if (func_590(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_590(int iParam0, float fParam1)//Position - 0x3EFA4
{
	return func_591(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_591(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0x3EFBC
{
	var uVar0;
	struct<3> Var1;
	int iVar4;
	
	iVar4 = func_598(iParam0, iParam1);
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
		iVar4 = func_594();
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



int func_594()//Position - 0x3F26E
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




int func_598(int iParam0, int iParam1)//Position - 0x3F385
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









void func_607()//Position - 0x3F7C5
{
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765)) && iLocal_2940 < 12)
	{
		if (iLocal_3316 < 3)
		{
			if (func_608(0))
			{
				bLocal_2699 = true;
			}
		}
		else if (func_608(1))
		{
			bLocal_2699 = true;
		}
	}
}

int func_608(bool bParam0)//Position - 0x3F811
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || bLocal_509)
		{
			return 0;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765))
	{
		Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_2765, 1) };
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765))
	{
		if (SYSTEM::VDIST2(Var0, Var3) > 400f)
		{
			if (!bLocal_2718)
			{
				HUD::CLEAR_PRINTS();
				if (GlobalFunc_111())
				{
					GlobalFunc_5105();
				}
				GlobalFunc_527("TOW_TUT_RETONYA", 7500, 1);
				bLocal_2718 = true;
				if (!HUD::DOES_BLIP_EXIST(uLocal_467))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_2765))
					{
						uLocal_467 = GlobalFunc_7055(iLocal_2765, 0, 0);
						HUD::SET_BLIP_COLOUR(uLocal_467, 3);
					}
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_2766))
				{
					HUD::REMOVE_BLIP(&uLocal_2766);
				}
				if (bParam0)
				{
					if (HUD::DOES_BLIP_EXIST(Local_2778[0 /*20*/].f_8))
					{
						HUD::REMOVE_BLIP(&(Local_2778[0 /*20*/].f_8));
					}
				}
				bLocal_2745 = true;
			}
			if (!iLocal_2754)
			{
				if (!GlobalFunc_111())
				{
					if (GlobalFunc_10618(&uLocal_526, "TOWAUD", "TONYA_ABAN", 9, 1, 0, 0))
					{
						iLocal_2754 = 1;
					}
				}
			}
		}
		else if (SYSTEM::VDIST2(Var0, Var3) < 400f)
		{
			iLocal_2754 = 0;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_2765, 0))
				{
					func_609(1);
					bLocal_2745 = false;
				}
			}
			else
			{
				func_609(1);
				bLocal_2745 = false;
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2765) && !ENTITY::IS_ENTITY_DEAD(iLocal_2765))
	{
		if (SYSTEM::VDIST2(Var0, Var3) > 22500f)
		{
			if (bLocal_2718)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_609(bool bParam0)//Position - 0x3F9D7
{
	if (bLocal_2718)
	{
		bLocal_2718 = false;
		if (HUD::DOES_BLIP_EXIST(uLocal_467))
		{
			HUD::REMOVE_BLIP(&uLocal_467);
		}
		if (!HUD::DOES_BLIP_EXIST(uLocal_2766))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2933) && !ENTITY::IS_ENTITY_DEAD(iLocal_2933))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_2933, 0))
				{
					uLocal_2766 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_2933);
					if (iLocal_2940 == 1)
					{
						HUD::SET_BLIP_COLOUR(uLocal_2766, 3);
						HUD::SET_BLIP_ROUTE(uLocal_2766, 1);
					}
				}
			}
		}
		if (bParam0)
		{
			if (!HUD::DOES_BLIP_EXIST(Local_2778[0 /*20*/].f_8))
			{
				if (!GlobalFunc_105(Local_2658[0 /*3*/]))
				{
					Local_2778[0 /*20*/].f_8 = HUD::ADD_BLIP_FOR_COORD(Local_2658[0 /*3*/]);
					if (bLocal_510)
					{
						HUD::SET_BLIP_COLOUR(Local_2778[0 /*20*/].f_8, 5);
						HUD::SET_BLIP_ROUTE(Local_2778[0 /*20*/].f_8, 1);
						HUD::SET_BLIP_ROUTE_COLOUR(Local_2778[0 /*20*/].f_8, 5);
					}
					else
					{
						HUD::SET_BLIP_COLOUR(Local_2778[0 /*20*/].f_8, 3);
						HUD::SET_BLIP_ROUTE(Local_2778[0 /*20*/].f_8, 1);
						HUD::SET_BLIP_ROUTE_COLOUR(Local_2778[0 /*20*/].f_8, 3);
					}
				}
			}
		}
	}
}




void func_613(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x3FBAB
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





















void func_634()//Position - 0x4078E
{
	GlobalFunc_5211(&uLocal_454, 8);
	GlobalFunc_5211(&uLocal_454, 16);
	GlobalFunc_5211(&uLocal_454, 2);
}




void func_638()//Position - 0x407F7
{
	GlobalFunc_53();
	GlobalFunc_4900(&(Local_2961[1 /*8*/]), 0, 1120390349, 0);
	GlobalFunc_4900(&(Local_2961[0 /*8*/]), 0, 1120390349, 0);
	GlobalFunc_4899(&(Local_2961[1 /*8*/]));
	GlobalFunc_4899(&(Local_2961[0 /*8*/]));
	GlobalFunc_9161();
	if (GlobalFunc_9574())
	{
	}
	GlobalFunc_9573(&Local_2981, 0, 0, 0);
	GlobalFunc_131(&iLocal_3329);
	if (HUD::DOES_BLIP_EXIST(uLocal_2766))
	{
		HUD::REMOVE_BLIP(&uLocal_2766);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2936, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2937, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2938, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_3335 - Vector(15f, 15f, 15f), Local_3335 + Vector(15f, 15f, 15f), 1, 1);
	func_654(&uLocal_3042, 1);
	SCRIPT::TERMINATE_THIS_THREAD();
}
















void func_654(var uParam0, bool bParam1)//Position - 0x40C5E
{
	int iVar0;
	
	HUD::CLEAR_HELP(1);
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933))
	{
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_2933, 1);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_2933, 0);
	}
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_2830);
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(uLocal_2831);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2936, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_2937, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_2847 - Vector(15f, 15f, 15f), Local_2847 + Vector(15f, 15f, 15f), 1, 1);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_2778[iVar0 /*20*/].f_17);
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_2778[iVar0 /*20*/].f_18);
		VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(Local_2778[iVar0 /*20*/].f_19);
		iVar0++;
	}
	if (!GlobalFunc_105(Local_1912[func_497() /*28*/].f_17))
	{
		GlobalFunc_2275(uLocal_2389, Local_1912[func_497() /*28*/].f_17, Local_1912[func_497() /*28*/].f_20);
	}
	ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Local_2778[0 /*20*/].f_6));
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2765))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2765))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_2765))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_2765);
			}
		}
		if (bParam1)
		{
			PED::SET_PED_KEEP_TASK(iLocal_2765, 1);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2765);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/]))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_2778[0 /*20*/]));
		if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/]))
		{
			if (PED::IS_PED_IN_GROUP(Local_2778[0 /*20*/]))
			{
				PED::REMOVE_PED_FROM_GROUP(Local_2778[0 /*20*/]);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2764))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_2764))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_2764);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_2933))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_2933, 1, 1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_2933);
	}
	if (iLocal_2714)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_2665, Local_2668, 1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(Local_2778[0 /*20*/].f_7) && !ENTITY::IS_ENTITY_DEAD(Local_2778[0 /*20*/].f_7))
	{
		VEHICLE::_0x1CF38D529D7441D9(Local_2778[0 /*20*/].f_7, 1);
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&(Local_2778[0 /*20*/].f_7), 0);
	}
	if (iLocal_462 == 1)
	{
		VEHICLE::SET_RANDOM_TRAINS(1);
		GlobalFunc_58(0, 1);
		GlobalFunc_58(1, 0);
		GlobalFunc_58(2, 0);
		GlobalFunc_58(3, 1);
		GlobalFunc_58(4, 0);
		GlobalFunc_58(5, 0);
		GlobalFunc_58(6, 0);
		GlobalFunc_58(7, 0);
		GlobalFunc_58(8, 0);
		GlobalFunc_58(9, 0);
		GlobalFunc_58(10, 0);
		GlobalFunc_58(11, 0);
	}
	GlobalFunc_894(&iLocal_2638);
	GlobalFunc_894(&iLocal_2639);
	GlobalFunc_4895(&uLocal_2952);
	GlobalFunc_894(&iLocal_2640);
	GlobalFunc_4948(&uLocal_441, 0, 0);
	if (CAM::DOES_CAM_EXIST(Local_2775))
	{
		GlobalFunc_4894(&Local_2775);
	}
	GlobalFunc_8940(uParam0, 0);
	GlobalFunc_5848();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("towtruck"), 0);
	if (bParam1)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}


























